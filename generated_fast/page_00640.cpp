#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_63e(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_64e(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_66a(u8* __restrict R,Cpu& c);
u32 body_66f(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x640,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x640,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_640(u8* __restrict R,Cpu& c);
u32 page_640(Cpu& c){return body_640(c.regs.data(),c);}
__attribute__((noinline)) u32 body_640(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x640000:goto L640000;
case 0x640002:c.instructions+=13;goto B640002;
case 0x640005:c.instructions+=12;goto B640005;
case 0x640008:c.instructions+=11;goto B640008;
case 0x64000b:c.instructions+=10;goto B64000b;
case 0x64000c:c.instructions+=9;goto B64000c;
case 0x640012:c.instructions+=8;goto B640012;
case 0x640014:c.instructions+=7;goto B640014;
case 0x640015:c.instructions+=6;goto B640015;
case 0x640018:c.instructions+=5;goto B640018;
case 0x64001b:c.instructions+=4;goto B64001b;
case 0x64001d:c.instructions+=3;goto B64001d;
case 0x64001e:c.instructions+=2;goto B64001e;
case 0x640021:c.instructions+=1;goto B640021;
case 0x640026:goto L640026;
case 0x640029:c.instructions+=7;goto B640029;
case 0x64002c:c.instructions+=6;goto B64002c;
case 0x64002d:c.instructions+=5;goto B64002d;
case 0x640030:c.instructions+=4;goto B640030;
case 0x640033:c.instructions+=3;goto B640033;
case 0x640036:c.instructions+=2;goto B640036;
case 0x640039:c.instructions+=1;goto B640039;
case 0x64003e:goto L64003e;
case 0x64003f:c.instructions+=6;goto B64003f;
case 0x640040:c.instructions+=5;goto B640040;
case 0x640042:c.instructions+=4;goto B640042;
case 0x640043:c.instructions+=3;goto B640043;
case 0x640045:c.instructions+=2;goto B640045;
case 0x640046:c.instructions+=1;goto B640046;
case 0x640069:goto L640069;
case 0x64006b:c.instructions+=33;goto B64006b;
case 0x64006c:c.instructions+=32;goto B64006c;
case 0x64006e:c.instructions+=31;goto B64006e;
case 0x640071:c.instructions+=30;goto B640071;
case 0x640072:c.instructions+=29;goto B640072;
case 0x640075:c.instructions+=28;goto B640075;
case 0x640078:c.instructions+=27;goto B640078;
case 0x640079:c.instructions+=26;goto B640079;
case 0x64007c:c.instructions+=25;goto B64007c;
case 0x64007d:c.instructions+=24;goto B64007d;
case 0x640080:c.instructions+=23;goto B640080;
case 0x640081:c.instructions+=22;goto B640081;
case 0x640083:c.instructions+=21;goto B640083;
case 0x640085:c.instructions+=20;goto B640085;
case 0x640087:c.instructions+=19;goto B640087;
case 0x640089:c.instructions+=18;goto B640089;
case 0x64008b:c.instructions+=17;goto B64008b;
case 0x64008d:c.instructions+=16;goto B64008d;
case 0x64008f:c.instructions+=15;goto B64008f;
case 0x640091:c.instructions+=14;goto B640091;
case 0x640093:c.instructions+=13;goto B640093;
case 0x640095:c.instructions+=12;goto B640095;
case 0x640097:c.instructions+=11;goto B640097;
case 0x640099:c.instructions+=10;goto B640099;
case 0x64009c:c.instructions+=9;goto B64009c;
case 0x64009e:c.instructions+=8;goto B64009e;
case 0x6400a0:c.instructions+=7;goto B6400a0;
case 0x6400a2:c.instructions+=6;goto B6400a2;
case 0x6400a4:c.instructions+=5;goto B6400a4;
case 0x6400a6:c.instructions+=4;goto B6400a6;
case 0x6400aa:c.instructions+=3;goto B6400aa;
case 0x6400ad:c.instructions+=2;goto B6400ad;
case 0x6400b0:c.instructions+=1;goto B6400b0;
case 0x6400b5:goto L6400b5;
case 0x6400b7:c.instructions+=1;goto B6400b7;
case 0x6400b9:goto L6400b9;
case 0x6400bc:c.instructions+=2;goto B6400bc;
case 0x6400be:c.instructions+=1;goto B6400be;
case 0x6400c0:goto L6400c0;
case 0x6400c2:c.instructions+=5;goto B6400c2;
case 0x6400c3:c.instructions+=4;goto B6400c3;
case 0x6400c4:c.instructions+=3;goto B6400c4;
case 0x6400c5:c.instructions+=2;goto B6400c5;
case 0x6400c6:c.instructions+=1;goto B6400c6;
case 0x6400c8:goto L6400c8;
case 0x6400cb:c.instructions+=5;goto B6400cb;
case 0x6400d1:c.instructions+=4;goto B6400d1;
case 0x6400d3:c.instructions+=3;goto B6400d3;
case 0x6400d6:c.instructions+=2;goto B6400d6;
case 0x6400d9:c.instructions+=1;goto B6400d9;
case 0x6400db:goto L6400db;
case 0x6400de:c.instructions+=15;goto B6400de;
case 0x6400e0:c.instructions+=14;goto B6400e0;
case 0x6400e6:c.instructions+=13;goto B6400e6;
case 0x6400e8:c.instructions+=12;goto B6400e8;
case 0x6400ea:c.instructions+=11;goto B6400ea;
case 0x6400ed:c.instructions+=10;goto B6400ed;
case 0x6400ef:c.instructions+=9;goto B6400ef;
case 0x6400f2:c.instructions+=8;goto B6400f2;
case 0x6400f5:c.instructions+=7;goto B6400f5;
case 0x6400f7:c.instructions+=6;goto B6400f7;
case 0x6400fa:c.instructions+=5;goto B6400fa;
case 0x6400fd:c.instructions+=4;goto B6400fd;
case 0x640100:c.instructions+=3;goto B640100;
case 0x640103:c.instructions+=2;goto B640103;
case 0x640106:c.instructions+=1;goto B640106;
case 0x640108:goto L640108;
case 0x64010a:c.instructions+=7;goto B64010a;
case 0x64010c:c.instructions+=6;goto B64010c;
case 0x64010e:c.instructions+=5;goto B64010e;
case 0x640111:c.instructions+=4;goto B640111;
case 0x640113:c.instructions+=3;goto B640113;
case 0x640116:c.instructions+=2;goto B640116;
case 0x640118:c.instructions+=1;goto B640118;
case 0x64011b:goto L64011b;
case 0x64011c:c.instructions+=3;goto B64011c;
case 0x64011d:c.instructions+=2;goto B64011d;
case 0x64011e:c.instructions+=1;goto B64011e;
case 0x640121:goto L640121;
case 0x640123:c.instructions+=121;goto B640123;
case 0x640124:c.instructions+=120;goto B640124;
case 0x640126:c.instructions+=119;goto B640126;
case 0x64012c:c.instructions+=118;goto B64012c;
case 0x64012d:c.instructions+=117;goto B64012d;
case 0x64012f:c.instructions+=116;goto B64012f;
case 0x640132:c.instructions+=115;goto B640132;
case 0x640133:c.instructions+=114;goto B640133;
case 0x640135:c.instructions+=113;goto B640135;
case 0x640138:c.instructions+=112;goto B640138;
case 0x64013b:c.instructions+=111;goto B64013b;
case 0x640141:c.instructions+=110;goto B640141;
case 0x640143:c.instructions+=109;goto B640143;
case 0x640146:c.instructions+=108;goto B640146;
case 0x640149:c.instructions+=107;goto B640149;
case 0x64014c:c.instructions+=106;goto B64014c;
case 0x64014e:c.instructions+=105;goto B64014e;
case 0x64014f:c.instructions+=104;goto B64014f;
case 0x640150:c.instructions+=103;goto B640150;
case 0x640151:c.instructions+=102;goto B640151;
case 0x640154:c.instructions+=101;goto B640154;
case 0x640156:c.instructions+=100;goto B640156;
case 0x640159:c.instructions+=99;goto B640159;
case 0x64015c:c.instructions+=98;goto B64015c;
case 0x64015e:c.instructions+=97;goto B64015e;
case 0x640161:c.instructions+=96;goto B640161;
case 0x640164:c.instructions+=95;goto B640164;
case 0x640165:c.instructions+=94;goto B640165;
case 0x640167:c.instructions+=93;goto B640167;
case 0x640168:c.instructions+=92;goto B640168;
case 0x640169:c.instructions+=91;goto B640169;
case 0x64016c:c.instructions+=90;goto B64016c;
case 0x64016e:c.instructions+=89;goto B64016e;
case 0x640171:c.instructions+=88;goto B640171;
case 0x640174:c.instructions+=87;goto B640174;
case 0x640176:c.instructions+=86;goto B640176;
case 0x640179:c.instructions+=85;goto B640179;
case 0x64017c:c.instructions+=84;goto B64017c;
case 0x64017d:c.instructions+=83;goto B64017d;
case 0x640180:c.instructions+=82;goto B640180;
case 0x640182:c.instructions+=81;goto B640182;
case 0x640184:c.instructions+=80;goto B640184;
case 0x640187:c.instructions+=79;goto B640187;
case 0x64018a:c.instructions+=78;goto B64018a;
case 0x64018b:c.instructions+=77;goto B64018b;
case 0x64018d:c.instructions+=76;goto B64018d;
case 0x640190:c.instructions+=75;goto B640190;
case 0x640191:c.instructions+=74;goto B640191;
case 0x640193:c.instructions+=73;goto B640193;
case 0x640196:c.instructions+=72;goto B640196;
case 0x640198:c.instructions+=71;goto B640198;
case 0x64019b:c.instructions+=70;goto B64019b;
case 0x64019e:c.instructions+=69;goto B64019e;
case 0x6401a1:c.instructions+=68;goto B6401a1;
case 0x6401a4:c.instructions+=67;goto B6401a4;
case 0x6401a6:c.instructions+=66;goto B6401a6;
case 0x6401a8:c.instructions+=65;goto B6401a8;
case 0x6401ab:c.instructions+=64;goto B6401ab;
case 0x6401ae:c.instructions+=63;goto B6401ae;
case 0x6401b0:c.instructions+=62;goto B6401b0;
case 0x6401b3:c.instructions+=61;goto B6401b3;
case 0x6401b6:c.instructions+=60;goto B6401b6;
case 0x6401b9:c.instructions+=59;goto B6401b9;
case 0x6401bc:c.instructions+=58;goto B6401bc;
case 0x6401be:c.instructions+=57;goto B6401be;
case 0x6401c1:c.instructions+=56;goto B6401c1;
case 0x6401c4:c.instructions+=55;goto B6401c4;
case 0x6401c7:c.instructions+=54;goto B6401c7;
case 0x6401c8:c.instructions+=53;goto B6401c8;
case 0x6401c9:c.instructions+=52;goto B6401c9;
case 0x6401ca:c.instructions+=51;goto B6401ca;
case 0x6401cd:c.instructions+=50;goto B6401cd;
case 0x6401d0:c.instructions+=49;goto B6401d0;
case 0x6401d1:c.instructions+=48;goto B6401d1;
case 0x6401d2:c.instructions+=47;goto B6401d2;
case 0x6401d3:c.instructions+=46;goto B6401d3;
case 0x6401d6:c.instructions+=45;goto B6401d6;
case 0x6401d9:c.instructions+=44;goto B6401d9;
case 0x6401da:c.instructions+=43;goto B6401da;
case 0x6401db:c.instructions+=42;goto B6401db;
case 0x6401dc:c.instructions+=41;goto B6401dc;
case 0x6401df:c.instructions+=40;goto B6401df;
case 0x6401e2:c.instructions+=39;goto B6401e2;
case 0x6401e5:c.instructions+=38;goto B6401e5;
case 0x6401e8:c.instructions+=37;goto B6401e8;
case 0x6401eb:c.instructions+=36;goto B6401eb;
case 0x6401ee:c.instructions+=35;goto B6401ee;
case 0x6401f0:c.instructions+=34;goto B6401f0;
case 0x6401f3:c.instructions+=33;goto B6401f3;
case 0x6401f6:c.instructions+=32;goto B6401f6;
case 0x6401f8:c.instructions+=31;goto B6401f8;
case 0x6401fa:c.instructions+=30;goto B6401fa;
case 0x6401fc:c.instructions+=29;goto B6401fc;
case 0x6401fe:c.instructions+=28;goto B6401fe;
case 0x640201:c.instructions+=27;goto B640201;
case 0x640204:c.instructions+=26;goto B640204;
case 0x640207:c.instructions+=25;goto B640207;
case 0x64020a:c.instructions+=24;goto B64020a;
case 0x64020c:c.instructions+=23;goto B64020c;
case 0x64020f:c.instructions+=22;goto B64020f;
case 0x640212:c.instructions+=21;goto B640212;
case 0x640214:c.instructions+=20;goto B640214;
case 0x640216:c.instructions+=19;goto B640216;
case 0x640219:c.instructions+=18;goto B640219;
case 0x64021c:c.instructions+=17;goto B64021c;
case 0x64021f:c.instructions+=16;goto B64021f;
case 0x640222:c.instructions+=15;goto B640222;
case 0x640225:c.instructions+=14;goto B640225;
case 0x640228:c.instructions+=13;goto B640228;
case 0x64022a:c.instructions+=12;goto B64022a;
case 0x64022d:c.instructions+=11;goto B64022d;
case 0x640230:c.instructions+=10;goto B640230;
case 0x640232:c.instructions+=9;goto B640232;
case 0x640234:c.instructions+=8;goto B640234;
case 0x640237:c.instructions+=7;goto B640237;
case 0x640239:c.instructions+=6;goto B640239;
case 0x64023b:c.instructions+=5;goto B64023b;
case 0x64023e:c.instructions+=4;goto B64023e;
case 0x640241:c.instructions+=3;goto B640241;
case 0x640243:c.instructions+=2;goto B640243;
case 0x640246:c.instructions+=1;goto B640246;
case 0x640248:goto L640248;
case 0x64024b:c.instructions+=3;goto B64024b;
case 0x64024d:c.instructions+=2;goto B64024d;
case 0x640250:c.instructions+=1;goto B640250;
case 0x640252:goto L640252;
case 0x640256:c.instructions+=4;goto B640256;
case 0x640258:c.instructions+=3;goto B640258;
case 0x64025a:c.instructions+=2;goto B64025a;
case 0x64025b:c.instructions+=1;goto B64025b;
case 0x64025d:goto L64025d;
case 0x640260:c.instructions+=5;goto B640260;
case 0x640262:c.instructions+=4;goto B640262;
case 0x640263:c.instructions+=3;goto B640263;
case 0x640265:c.instructions+=2;goto B640265;
case 0x640268:c.instructions+=1;goto B640268;
case 0x64026a:goto L64026a;
case 0x64026e:c.instructions+=2;goto B64026e;
case 0x640275:c.instructions+=1;goto B640275;
case 0x640277:goto L640277;
case 0x64027b:c.instructions+=2;goto B64027b;
case 0x640282:c.instructions+=1;goto B640282;
case 0x640284:goto L640284;
case 0x640286:c.instructions+=4;goto B640286;
case 0x640289:c.instructions+=3;goto B640289;
case 0x64028b:c.instructions+=2;goto B64028b;
case 0x64028e:c.instructions+=1;goto B64028e;
case 0x640290:goto L640290;
case 0x640294:c.instructions+=2;goto B640294;
case 0x640296:c.instructions+=1;goto B640296;
case 0x640297:goto L640297;
case 0x64029e:c.instructions+=1;goto B64029e;
case 0x6402a0:goto L6402a0;
case 0x6402a3:c.instructions+=5;goto B6402a3;
case 0x6402a5:c.instructions+=4;goto B6402a5;
case 0x6402a8:c.instructions+=3;goto B6402a8;
case 0x6402aa:c.instructions+=2;goto B6402aa;
case 0x6402ad:c.instructions+=1;goto B6402ad;
case 0x6402af:goto L6402af;
case 0x6402b6:c.instructions+=1;goto B6402b6;
case 0x6402b8:goto L6402b8;
case 0x6402bf:goto L6402bf;
case 0x6402c6:goto L6402c6;
case 0x6402c8:c.instructions+=8;goto B6402c8;
case 0x6402cb:c.instructions+=7;goto B6402cb;
case 0x6402ce:c.instructions+=6;goto B6402ce;
case 0x6402d0:c.instructions+=5;goto B6402d0;
case 0x6402d3:c.instructions+=4;goto B6402d3;
case 0x6402d9:c.instructions+=3;goto B6402d9;
case 0x6402db:c.instructions+=2;goto B6402db;
case 0x6402de:c.instructions+=1;goto B6402de;
case 0x6402e0:goto L6402e0;
case 0x6402e4:c.instructions+=5;goto B6402e4;
case 0x6402e7:c.instructions+=4;goto B6402e7;
case 0x6402ee:c.instructions+=3;goto B6402ee;
case 0x6402ef:c.instructions+=2;goto B6402ef;
case 0x6402f0:c.instructions+=1;goto B6402f0;
case 0x6402f1:goto L6402f1;
case 0x6402f2:c.instructions+=5;goto B6402f2;
case 0x6402f6:c.instructions+=4;goto B6402f6;
case 0x6402f8:c.instructions+=3;goto B6402f8;
case 0x6402f9:c.instructions+=2;goto B6402f9;
case 0x6402fa:c.instructions+=1;goto B6402fa;
case 0x6402ff:goto L6402ff;
case 0x640302:c.instructions+=7;goto B640302;
case 0x640305:c.instructions+=6;goto B640305;
case 0x640308:c.instructions+=5;goto B640308;
case 0x64030b:c.instructions+=4;goto B64030b;
case 0x640311:c.instructions+=3;goto B640311;
case 0x640313:c.instructions+=2;goto B640313;
case 0x640316:c.instructions+=1;goto B640316;
case 0x64031c:goto L64031c;
case 0x64031e:c.instructions+=13;goto B64031e;
case 0x640320:c.instructions+=12;goto B640320;
case 0x640322:c.instructions+=11;goto B640322;
case 0x640325:c.instructions+=10;goto B640325;
case 0x640327:c.instructions+=9;goto B640327;
case 0x64032a:c.instructions+=8;goto B64032a;
case 0x64032d:c.instructions+=7;goto B64032d;
case 0x64032f:c.instructions+=6;goto B64032f;
case 0x640332:c.instructions+=5;goto B640332;
case 0x640334:c.instructions+=4;goto B640334;
case 0x640336:c.instructions+=3;goto B640336;
case 0x640338:c.instructions+=2;goto B640338;
case 0x64033b:c.instructions+=1;goto B64033b;
case 0x64033d:goto L64033d;
case 0x640340:c.instructions+=3;goto B640340;
case 0x640342:c.instructions+=2;goto B640342;
case 0x640345:c.instructions+=1;goto B640345;
case 0x640347:goto L640347;
case 0x640349:c.instructions+=1;goto B640349;
case 0x64034b:goto L64034b;
case 0x64034e:c.instructions+=3;goto B64034e;
case 0x640350:c.instructions+=2;goto B640350;
case 0x640353:c.instructions+=1;goto B640353;
case 0x640355:goto L640355;
case 0x640357:c.instructions+=1;goto B640357;
case 0x640359:goto L640359;
case 0x64035b:c.instructions+=4;goto B64035b;
case 0x64035e:c.instructions+=3;goto B64035e;
case 0x640360:c.instructions+=2;goto B640360;
case 0x640363:c.instructions+=1;goto B640363;
case 0x640365:goto L640365;
case 0x640367:c.instructions+=2;goto B640367;
case 0x640368:c.instructions+=1;goto B640368;
case 0x64036a:goto L64036a;
case 0x64036d:c.instructions+=4;goto B64036d;
case 0x640370:c.instructions+=3;goto B640370;
case 0x640372:c.instructions+=2;goto B640372;
case 0x640375:c.instructions+=1;goto B640375;
case 0x640377:goto L640377;
case 0x640379:c.instructions+=1;goto B640379;
case 0x64037a:goto L64037a;
case 0x64037d:c.instructions+=24;goto B64037d;
case 0x640384:c.instructions+=23;goto B640384;
case 0x640387:c.instructions+=22;goto B640387;
case 0x64038b:c.instructions+=21;goto B64038b;
case 0x64038e:c.instructions+=20;goto B64038e;
case 0x640391:c.instructions+=19;goto B640391;
case 0x640394:c.instructions+=18;goto B640394;
case 0x640397:c.instructions+=17;goto B640397;
case 0x640399:c.instructions+=16;goto B640399;
case 0x64039c:c.instructions+=15;goto B64039c;
case 0x64039f:c.instructions+=14;goto B64039f;
case 0x6403a1:c.instructions+=13;goto B6403a1;
case 0x6403a3:c.instructions+=12;goto B6403a3;
case 0x6403a6:c.instructions+=11;goto B6403a6;
case 0x6403a8:c.instructions+=10;goto B6403a8;
case 0x6403ab:c.instructions+=9;goto B6403ab;
case 0x6403ad:c.instructions+=8;goto B6403ad;
case 0x6403b0:c.instructions+=7;goto B6403b0;
case 0x6403b2:c.instructions+=6;goto B6403b2;
case 0x6403b5:c.instructions+=5;goto B6403b5;
case 0x6403b7:c.instructions+=4;goto B6403b7;
case 0x6403ba:c.instructions+=3;goto B6403ba;
case 0x6403bb:c.instructions+=2;goto B6403bb;
case 0x6403bc:c.instructions+=1;goto B6403bc;
case 0x6403bd:goto L6403bd;
case 0x6403c1:c.instructions+=4;goto B6403c1;
case 0x6403c3:c.instructions+=3;goto B6403c3;
case 0x6403c4:c.instructions+=2;goto B6403c4;
case 0x6403c5:c.instructions+=1;goto B6403c5;
case 0x6403ca:goto L6403ca;
case 0x6403cd:c.instructions+=7;goto B6403cd;
case 0x6403d0:c.instructions+=6;goto B6403d0;
case 0x6403d3:c.instructions+=5;goto B6403d3;
case 0x6403d6:c.instructions+=4;goto B6403d6;
case 0x6403dc:c.instructions+=3;goto B6403dc;
case 0x6403de:c.instructions+=2;goto B6403de;
case 0x6403e1:c.instructions+=1;goto B6403e1;
case 0x6403e3:goto L6403e3;
case 0x6403e5:c.instructions+=24;goto B6403e5;
case 0x6403e7:c.instructions+=23;goto B6403e7;
case 0x6403ea:c.instructions+=22;goto B6403ea;
case 0x6403ed:c.instructions+=21;goto B6403ed;
case 0x6403f1:c.instructions+=20;goto B6403f1;
case 0x6403f4:c.instructions+=19;goto B6403f4;
case 0x6403f7:c.instructions+=18;goto B6403f7;
case 0x6403fa:c.instructions+=17;goto B6403fa;
case 0x6403fc:c.instructions+=16;goto B6403fc;
case 0x6403ff:c.instructions+=15;goto B6403ff;
case 0x640401:c.instructions+=14;goto B640401;
case 0x640404:c.instructions+=13;goto B640404;
case 0x640407:c.instructions+=12;goto B640407;
case 0x640409:c.instructions+=11;goto B640409;
case 0x64040b:c.instructions+=10;goto B64040b;
case 0x64040e:c.instructions+=9;goto B64040e;
case 0x640411:c.instructions+=8;goto B640411;
case 0x640413:c.instructions+=7;goto B640413;
case 0x640415:c.instructions+=6;goto B640415;
case 0x640418:c.instructions+=5;goto B640418;
case 0x64041a:c.instructions+=4;goto B64041a;
case 0x64041d:c.instructions+=3;goto B64041d;
case 0x64041e:c.instructions+=2;goto B64041e;
case 0x64041f:c.instructions+=1;goto B64041f;
case 0x640420:goto L640420;
case 0x640424:c.instructions+=3;goto B640424;
case 0x640425:c.instructions+=2;goto B640425;
case 0x640426:c.instructions+=1;goto B640426;
case 0x64042b:goto L64042b;
case 0x64042e:c.instructions+=2;goto B64042e;
case 0x64042f:c.instructions+=1;goto B64042f;
case 0x640434:goto L640434;
case 0x64043a:c.instructions+=3;goto B64043a;
case 0x64043c:c.instructions+=2;goto B64043c;
case 0x64043f:c.instructions+=1;goto B64043f;
case 0x640441:goto L640441;
case 0x640444:c.instructions+=21;goto B640444;
case 0x640446:c.instructions+=20;goto B640446;
case 0x640448:c.instructions+=19;goto B640448;
case 0x64044a:c.instructions+=18;goto B64044a;
case 0x64044d:c.instructions+=17;goto B64044d;
case 0x64044f:c.instructions+=16;goto B64044f;
case 0x640451:c.instructions+=15;goto B640451;
case 0x640453:c.instructions+=14;goto B640453;
case 0x640455:c.instructions+=13;goto B640455;
case 0x640458:c.instructions+=12;goto B640458;
case 0x64045b:c.instructions+=11;goto B64045b;
case 0x64045d:c.instructions+=10;goto B64045d;
case 0x640460:c.instructions+=9;goto B640460;
case 0x640463:c.instructions+=8;goto B640463;
case 0x640465:c.instructions+=7;goto B640465;
case 0x640468:c.instructions+=6;goto B640468;
case 0x640469:c.instructions+=5;goto B640469;
case 0x64046a:c.instructions+=4;goto B64046a;
case 0x64046c:c.instructions+=3;goto B64046c;
case 0x64046e:c.instructions+=2;goto B64046e;
case 0x640470:c.instructions+=1;goto B640470;
case 0x640471:goto L640471;
case 0x640477:c.instructions+=9;goto B640477;
case 0x640478:c.instructions+=8;goto B640478;
case 0x64047a:c.instructions+=7;goto B64047a;
case 0x64047c:c.instructions+=6;goto B64047c;
case 0x640482:c.instructions+=5;goto B640482;
case 0x640484:c.instructions+=4;goto B640484;
case 0x640486:c.instructions+=3;goto B640486;
case 0x640488:c.instructions+=2;goto B640488;
case 0x64048b:c.instructions+=1;goto B64048b;
case 0x64048d:goto L64048d;
case 0x640492:c.instructions+=1;goto B640492;
case 0x640494:goto L640494;
case 0x640497:c.instructions+=4;goto B640497;
case 0x64049a:c.instructions+=3;goto B64049a;
case 0x64049b:c.instructions+=2;goto B64049b;
case 0x64049c:c.instructions+=1;goto B64049c;
case 0x6404a1:goto L6404a1;
case 0x6404a4:c.instructions+=3;goto B6404a4;
case 0x6404a6:c.instructions+=2;goto B6404a6;
case 0x6404a8:c.instructions+=1;goto B6404a8;
case 0x6404ab:goto L6404ab;
case 0x6404ac:c.instructions+=3;goto B6404ac;
case 0x6404ad:c.instructions+=2;goto B6404ad;
case 0x6404ae:c.instructions+=1;goto B6404ae;
case 0x6404b1:goto L6404b1;
case 0x6404b3:c.instructions+=13;goto B6404b3;
case 0x6404b4:c.instructions+=12;goto B6404b4;
case 0x6404b6:c.instructions+=11;goto B6404b6;
case 0x6404b9:c.instructions+=10;goto B6404b9;
case 0x6404bc:c.instructions+=9;goto B6404bc;
case 0x6404bf:c.instructions+=8;goto B6404bf;
case 0x6404c3:c.instructions+=7;goto B6404c3;
case 0x6404c6:c.instructions+=6;goto B6404c6;
case 0x6404c9:c.instructions+=5;goto B6404c9;
case 0x6404cd:c.instructions+=4;goto B6404cd;
case 0x6404d0:c.instructions+=3;goto B6404d0;
case 0x6404d3:c.instructions+=2;goto B6404d3;
case 0x6404d4:c.instructions+=1;goto B6404d4;
case 0x6404d9:goto L6404d9;
case 0x6404dc:c.instructions+=3;goto B6404dc;
case 0x6404dd:c.instructions+=2;goto B6404dd;
case 0x6404e0:c.instructions+=1;goto B6404e0;
case 0x6404e5:goto L6404e5;
case 0x6404e8:c.instructions+=2;goto B6404e8;
case 0x6404e9:c.instructions+=1;goto B6404e9;
case 0x6404ec:goto L6404ec;
case 0x6404ee:c.instructions+=9;goto B6404ee;
case 0x6404ef:c.instructions+=8;goto B6404ef;
case 0x6404f1:c.instructions+=7;goto B6404f1;
case 0x6404f4:c.instructions+=6;goto B6404f4;
case 0x6404f5:c.instructions+=5;goto B6404f5;
case 0x6404f6:c.instructions+=4;goto B6404f6;
case 0x6404f9:c.instructions+=3;goto B6404f9;
case 0x6404fc:c.instructions+=2;goto B6404fc;
case 0x6404fd:c.instructions+=1;goto B6404fd;
case 0x640502:goto L640502;
case 0x640505:c.instructions+=87;goto B640505;
case 0x640508:c.instructions+=86;goto B640508;
case 0x64050b:c.instructions+=85;goto B64050b;
case 0x64050e:c.instructions+=84;goto B64050e;
case 0x640511:c.instructions+=83;goto B640511;
case 0x640514:c.instructions+=82;goto B640514;
case 0x640516:c.instructions+=81;goto B640516;
case 0x640519:c.instructions+=80;goto B640519;
case 0x64051b:c.instructions+=79;goto B64051b;
case 0x64051e:c.instructions+=78;goto B64051e;
case 0x640521:c.instructions+=77;goto B640521;
case 0x640523:c.instructions+=76;goto B640523;
case 0x640526:c.instructions+=75;goto B640526;
case 0x640529:c.instructions+=74;goto B640529;
case 0x64052b:c.instructions+=73;goto B64052b;
case 0x64052e:c.instructions+=72;goto B64052e;
case 0x640530:c.instructions+=71;goto B640530;
case 0x640533:c.instructions+=70;goto B640533;
case 0x640536:c.instructions+=69;goto B640536;
case 0x640538:c.instructions+=68;goto B640538;
case 0x64053b:c.instructions+=67;goto B64053b;
case 0x64053e:c.instructions+=66;goto B64053e;
case 0x640540:c.instructions+=65;goto B640540;
case 0x640543:c.instructions+=64;goto B640543;
case 0x640546:c.instructions+=63;goto B640546;
case 0x640548:c.instructions+=62;goto B640548;
case 0x64054b:c.instructions+=61;goto B64054b;
case 0x64054c:c.instructions+=60;goto B64054c;
case 0x64054d:c.instructions+=59;goto B64054d;
case 0x64054e:c.instructions+=58;goto B64054e;
case 0x64054f:c.instructions+=57;goto B64054f;
case 0x640552:c.instructions+=56;goto B640552;
case 0x640554:c.instructions+=55;goto B640554;
case 0x640556:c.instructions+=54;goto B640556;
case 0x640558:c.instructions+=53;goto B640558;
case 0x64055b:c.instructions+=52;goto B64055b;
case 0x64055d:c.instructions+=51;goto B64055d;
case 0x640560:c.instructions+=50;goto B640560;
case 0x640563:c.instructions+=49;goto B640563;
case 0x640565:c.instructions+=48;goto B640565;
case 0x640568:c.instructions+=47;goto B640568;
case 0x64056b:c.instructions+=46;goto B64056b;
case 0x64056d:c.instructions+=45;goto B64056d;
case 0x640570:c.instructions+=44;goto B640570;
case 0x640573:c.instructions+=43;goto B640573;
case 0x640576:c.instructions+=42;goto B640576;
case 0x640579:c.instructions+=41;goto B640579;
case 0x64057c:c.instructions+=40;goto B64057c;
case 0x64057f:c.instructions+=39;goto B64057f;
case 0x640581:c.instructions+=38;goto B640581;
case 0x640584:c.instructions+=37;goto B640584;
case 0x640587:c.instructions+=36;goto B640587;
case 0x64058a:c.instructions+=35;goto B64058a;
case 0x64058d:c.instructions+=34;goto B64058d;
case 0x640590:c.instructions+=33;goto B640590;
case 0x640593:c.instructions+=32;goto B640593;
case 0x640596:c.instructions+=31;goto B640596;
case 0x640599:c.instructions+=30;goto B640599;
case 0x64059c:c.instructions+=29;goto B64059c;
case 0x64059f:c.instructions+=28;goto B64059f;
case 0x6405a2:c.instructions+=27;goto B6405a2;
case 0x6405a5:c.instructions+=26;goto B6405a5;
case 0x6405a8:c.instructions+=25;goto B6405a8;
case 0x6405ab:c.instructions+=24;goto B6405ab;
case 0x6405ae:c.instructions+=23;goto B6405ae;
case 0x6405b0:c.instructions+=22;goto B6405b0;
case 0x6405b3:c.instructions+=21;goto B6405b3;
case 0x6405b6:c.instructions+=20;goto B6405b6;
case 0x6405b9:c.instructions+=19;goto B6405b9;
case 0x6405bc:c.instructions+=18;goto B6405bc;
case 0x6405bf:c.instructions+=17;goto B6405bf;
case 0x6405c2:c.instructions+=16;goto B6405c2;
case 0x6405c5:c.instructions+=15;goto B6405c5;
case 0x6405c8:c.instructions+=14;goto B6405c8;
case 0x6405cb:c.instructions+=13;goto B6405cb;
case 0x6405ce:c.instructions+=12;goto B6405ce;
case 0x6405cf:c.instructions+=11;goto B6405cf;
case 0x6405d2:c.instructions+=10;goto B6405d2;
case 0x6405d3:c.instructions+=9;goto B6405d3;
case 0x6405d6:c.instructions+=8;goto B6405d6;
case 0x6405d9:c.instructions+=7;goto B6405d9;
case 0x6405dc:c.instructions+=6;goto B6405dc;
case 0x6405df:c.instructions+=5;goto B6405df;
case 0x6405e1:c.instructions+=4;goto B6405e1;
case 0x6405e4:c.instructions+=3;goto B6405e4;
case 0x6405e6:c.instructions+=2;goto B6405e6;
case 0x6405e7:c.instructions+=1;goto B6405e7;
case 0x6405ea:goto L6405ea;
case 0x6405ec:c.instructions+=7;goto B6405ec;
case 0x6405ed:c.instructions+=6;goto B6405ed;
case 0x6405ef:c.instructions+=5;goto B6405ef;
case 0x6405f2:c.instructions+=4;goto B6405f2;
case 0x6405f5:c.instructions+=3;goto B6405f5;
case 0x6405f8:c.instructions+=2;goto B6405f8;
case 0x6405f9:c.instructions+=1;goto B6405f9;
case 0x6405fe:goto L6405fe;
case 0x640601:c.instructions+=61;goto B640601;
case 0x640607:c.instructions+=60;goto B640607;
case 0x64060a:c.instructions+=59;goto B64060a;
case 0x64060d:c.instructions+=58;goto B64060d;
case 0x640613:c.instructions+=57;goto B640613;
case 0x640616:c.instructions+=56;goto B640616;
case 0x64061c:c.instructions+=55;goto B64061c;
case 0x64061f:c.instructions+=54;goto B64061f;
case 0x640625:c.instructions+=53;goto B640625;
case 0x640628:c.instructions+=52;goto B640628;
case 0x64062a:c.instructions+=51;goto B64062a;
case 0x64062c:c.instructions+=50;goto B64062c;
case 0x64062e:c.instructions+=49;goto B64062e;
case 0x640630:c.instructions+=48;goto B640630;
case 0x640633:c.instructions+=47;goto B640633;
case 0x640636:c.instructions+=46;goto B640636;
case 0x640638:c.instructions+=45;goto B640638;
case 0x64063b:c.instructions+=44;goto B64063b;
case 0x64063e:c.instructions+=43;goto B64063e;
case 0x640640:c.instructions+=42;goto B640640;
case 0x640643:c.instructions+=41;goto B640643;
case 0x640646:c.instructions+=40;goto B640646;
case 0x640648:c.instructions+=39;goto B640648;
case 0x64064b:c.instructions+=38;goto B64064b;
case 0x64064e:c.instructions+=37;goto B64064e;
case 0x640650:c.instructions+=36;goto B640650;
case 0x640652:c.instructions+=35;goto B640652;
case 0x640655:c.instructions+=34;goto B640655;
case 0x640657:c.instructions+=33;goto B640657;
case 0x64065a:c.instructions+=32;goto B64065a;
case 0x64065d:c.instructions+=31;goto B64065d;
case 0x64065f:c.instructions+=30;goto B64065f;
case 0x640662:c.instructions+=29;goto B640662;
case 0x640665:c.instructions+=28;goto B640665;
case 0x640667:c.instructions+=27;goto B640667;
case 0x64066a:c.instructions+=26;goto B64066a;
case 0x64066d:c.instructions+=25;goto B64066d;
case 0x64066f:c.instructions+=24;goto B64066f;
case 0x640672:c.instructions+=23;goto B640672;
case 0x640675:c.instructions+=22;goto B640675;
case 0x640677:c.instructions+=21;goto B640677;
case 0x640679:c.instructions+=20;goto B640679;
case 0x64067c:c.instructions+=19;goto B64067c;
case 0x64067e:c.instructions+=18;goto B64067e;
case 0x640680:c.instructions+=17;goto B640680;
case 0x640682:c.instructions+=16;goto B640682;
case 0x640685:c.instructions+=15;goto B640685;
case 0x640688:c.instructions+=14;goto B640688;
case 0x64068a:c.instructions+=13;goto B64068a;
case 0x64068d:c.instructions+=12;goto B64068d;
case 0x640690:c.instructions+=11;goto B640690;
case 0x640692:c.instructions+=10;goto B640692;
case 0x640695:c.instructions+=9;goto B640695;
case 0x640697:c.instructions+=8;goto B640697;
case 0x640699:c.instructions+=7;goto B640699;
case 0x64069c:c.instructions+=6;goto B64069c;
case 0x64069f:c.instructions+=5;goto B64069f;
case 0x6406a2:c.instructions+=4;goto B6406a2;
case 0x6406a4:c.instructions+=3;goto B6406a4;
case 0x6406a7:c.instructions+=2;goto B6406a7;
case 0x6406a8:c.instructions+=1;goto B6406a8;
case 0x6406ab:goto L6406ab;
case 0x6406ad:c.instructions+=79;goto B6406ad;
case 0x6406ae:c.instructions+=78;goto B6406ae;
case 0x6406b0:c.instructions+=77;goto B6406b0;
case 0x6406b6:c.instructions+=76;goto B6406b6;
case 0x6406b7:c.instructions+=75;goto B6406b7;
case 0x6406ba:c.instructions+=74;goto B6406ba;
case 0x6406bb:c.instructions+=73;goto B6406bb;
case 0x6406be:c.instructions+=72;goto B6406be;
case 0x6406bf:c.instructions+=71;goto B6406bf;
case 0x6406c0:c.instructions+=70;goto B6406c0;
case 0x6406c1:c.instructions+=69;goto B6406c1;
case 0x6406c2:c.instructions+=68;goto B6406c2;
case 0x6406c5:c.instructions+=67;goto B6406c5;
case 0x6406c8:c.instructions+=66;goto B6406c8;
case 0x6406c9:c.instructions+=65;goto B6406c9;
case 0x6406ca:c.instructions+=64;goto B6406ca;
case 0x6406cb:c.instructions+=63;goto B6406cb;
case 0x6406cc:c.instructions+=62;goto B6406cc;
case 0x6406cf:c.instructions+=61;goto B6406cf;
case 0x6406d2:c.instructions+=60;goto B6406d2;
case 0x6406d5:c.instructions+=59;goto B6406d5;
case 0x6406d8:c.instructions+=58;goto B6406d8;
case 0x6406db:c.instructions+=57;goto B6406db;
case 0x6406de:c.instructions+=56;goto B6406de;
case 0x6406e1:c.instructions+=55;goto B6406e1;
case 0x6406e2:c.instructions+=54;goto B6406e2;
case 0x6406e5:c.instructions+=53;goto B6406e5;
case 0x6406e8:c.instructions+=52;goto B6406e8;
case 0x6406eb:c.instructions+=51;goto B6406eb;
case 0x6406ee:c.instructions+=50;goto B6406ee;
case 0x6406ef:c.instructions+=49;goto B6406ef;
case 0x6406f2:c.instructions+=48;goto B6406f2;
case 0x6406f5:c.instructions+=47;goto B6406f5;
case 0x6406f8:c.instructions+=46;goto B6406f8;
case 0x6406f9:c.instructions+=45;goto B6406f9;
case 0x6406fc:c.instructions+=44;goto B6406fc;
case 0x6406ff:c.instructions+=43;goto B6406ff;
case 0x640702:c.instructions+=42;goto B640702;
case 0x640703:c.instructions+=41;goto B640703;
case 0x640706:c.instructions+=40;goto B640706;
case 0x640709:c.instructions+=39;goto B640709;
case 0x64070c:c.instructions+=38;goto B64070c;
case 0x64070f:c.instructions+=37;goto B64070f;
case 0x640712:c.instructions+=36;goto B640712;
case 0x640713:c.instructions+=35;goto B640713;
case 0x640716:c.instructions+=34;goto B640716;
case 0x640718:c.instructions+=33;goto B640718;
case 0x64071a:c.instructions+=32;goto B64071a;
case 0x64071b:c.instructions+=31;goto B64071b;
case 0x64071d:c.instructions+=30;goto B64071d;
case 0x64071f:c.instructions+=29;goto B64071f;
case 0x640720:c.instructions+=28;goto B640720;
case 0x640722:c.instructions+=27;goto B640722;
case 0x640724:c.instructions+=26;goto B640724;
case 0x640726:c.instructions+=25;goto B640726;
case 0x640727:c.instructions+=24;goto B640727;
case 0x640729:c.instructions+=23;goto B640729;
case 0x64072b:c.instructions+=22;goto B64072b;
case 0x64072d:c.instructions+=21;goto B64072d;
case 0x64072f:c.instructions+=20;goto B64072f;
case 0x640732:c.instructions+=19;goto B640732;
case 0x640735:c.instructions+=18;goto B640735;
case 0x640738:c.instructions+=17;goto B640738;
case 0x64073b:c.instructions+=16;goto B64073b;
case 0x64073d:c.instructions+=15;goto B64073d;
case 0x640740:c.instructions+=14;goto B640740;
case 0x640743:c.instructions+=13;goto B640743;
case 0x640745:c.instructions+=12;goto B640745;
case 0x640747:c.instructions+=11;goto B640747;
case 0x640749:c.instructions+=10;goto B640749;
case 0x64074b:c.instructions+=9;goto B64074b;
case 0x64074d:c.instructions+=8;goto B64074d;
case 0x64074f:c.instructions+=7;goto B64074f;
case 0x640751:c.instructions+=6;goto B640751;
case 0x640753:c.instructions+=5;goto B640753;
case 0x640755:c.instructions+=4;goto B640755;
case 0x640757:c.instructions+=3;goto B640757;
case 0x64075a:c.instructions+=2;goto B64075a;
case 0x64075c:c.instructions+=1;goto B64075c;
case 0x64075e:goto L64075e;
case 0x640761:c.instructions+=17;goto B640761;
case 0x640764:c.instructions+=16;goto B640764;
case 0x640766:c.instructions+=15;goto B640766;
case 0x640769:c.instructions+=14;goto B640769;
case 0x64076c:c.instructions+=13;goto B64076c;
case 0x64076f:c.instructions+=12;goto B64076f;
case 0x640771:c.instructions+=11;goto B640771;
case 0x640774:c.instructions+=10;goto B640774;
case 0x640777:c.instructions+=9;goto B640777;
case 0x640779:c.instructions+=8;goto B640779;
case 0x64077c:c.instructions+=7;goto B64077c;
case 0x64077f:c.instructions+=6;goto B64077f;
case 0x640781:c.instructions+=5;goto B640781;
case 0x640784:c.instructions+=4;goto B640784;
case 0x640785:c.instructions+=3;goto B640785;
case 0x640786:c.instructions+=2;goto B640786;
case 0x640787:c.instructions+=1;goto B640787;
case 0x640788:goto L640788;
case 0x64078b:c.instructions+=49;goto B64078b;
case 0x64078e:c.instructions+=48;goto B64078e;
case 0x640791:c.instructions+=47;goto B640791;
case 0x640794:c.instructions+=46;goto B640794;
case 0x640797:c.instructions+=45;goto B640797;
case 0x64079a:c.instructions+=44;goto B64079a;
case 0x64079d:c.instructions+=43;goto B64079d;
case 0x6407a0:c.instructions+=42;goto B6407a0;
case 0x6407a3:c.instructions+=41;goto B6407a3;
case 0x6407a6:c.instructions+=40;goto B6407a6;
case 0x6407a9:c.instructions+=39;goto B6407a9;
case 0x6407ac:c.instructions+=38;goto B6407ac;
case 0x6407af:c.instructions+=37;goto B6407af;
case 0x6407b2:c.instructions+=36;goto B6407b2;
case 0x6407b5:c.instructions+=35;goto B6407b5;
case 0x6407b8:c.instructions+=34;goto B6407b8;
case 0x6407bb:c.instructions+=33;goto B6407bb;
case 0x6407be:c.instructions+=32;goto B6407be;
case 0x6407c1:c.instructions+=31;goto B6407c1;
case 0x6407c3:c.instructions+=30;goto B6407c3;
case 0x6407c5:c.instructions+=29;goto B6407c5;
case 0x6407c7:c.instructions+=28;goto B6407c7;
case 0x6407c9:c.instructions+=27;goto B6407c9;
case 0x6407cb:c.instructions+=26;goto B6407cb;
case 0x6407cd:c.instructions+=25;goto B6407cd;
case 0x6407cf:c.instructions+=24;goto B6407cf;
case 0x6407d1:c.instructions+=23;goto B6407d1;
case 0x6407d3:c.instructions+=22;goto B6407d3;
case 0x6407d5:c.instructions+=21;goto B6407d5;
case 0x6407d7:c.instructions+=20;goto B6407d7;
case 0x6407da:c.instructions+=19;goto B6407da;
case 0x6407dd:c.instructions+=18;goto B6407dd;
case 0x6407e0:c.instructions+=17;goto B6407e0;
case 0x6407e3:c.instructions+=16;goto B6407e3;
case 0x6407e5:c.instructions+=15;goto B6407e5;
case 0x6407e8:c.instructions+=14;goto B6407e8;
case 0x6407eb:c.instructions+=13;goto B6407eb;
case 0x6407ed:c.instructions+=12;goto B6407ed;
case 0x6407ef:c.instructions+=11;goto B6407ef;
case 0x6407f1:c.instructions+=10;goto B6407f1;
case 0x6407f3:c.instructions+=9;goto B6407f3;
case 0x6407f5:c.instructions+=8;goto B6407f5;
case 0x6407f7:c.instructions+=7;goto B6407f7;
case 0x6407f9:c.instructions+=6;goto B6407f9;
case 0x6407fb:c.instructions+=5;goto B6407fb;
case 0x6407fd:c.instructions+=4;goto B6407fd;
case 0x6407ff:c.instructions+=3;goto B6407ff;
case 0x640802:c.instructions+=2;goto B640802;
case 0x640804:c.instructions+=1;goto B640804;
case 0x640806:goto L640806;
case 0x640809:c.instructions+=17;goto B640809;
case 0x64080c:c.instructions+=16;goto B64080c;
case 0x64080e:c.instructions+=15;goto B64080e;
case 0x640811:c.instructions+=14;goto B640811;
case 0x640814:c.instructions+=13;goto B640814;
case 0x640817:c.instructions+=12;goto B640817;
case 0x640819:c.instructions+=11;goto B640819;
case 0x64081c:c.instructions+=10;goto B64081c;
case 0x64081f:c.instructions+=9;goto B64081f;
case 0x640821:c.instructions+=8;goto B640821;
case 0x640824:c.instructions+=7;goto B640824;
case 0x640827:c.instructions+=6;goto B640827;
case 0x640829:c.instructions+=5;goto B640829;
case 0x64082c:c.instructions+=4;goto B64082c;
case 0x64082d:c.instructions+=3;goto B64082d;
case 0x64082e:c.instructions+=2;goto B64082e;
case 0x64082f:c.instructions+=1;goto B64082f;
case 0x640830:goto L640830;
case 0x640833:c.instructions+=49;goto B640833;
case 0x640836:c.instructions+=48;goto B640836;
case 0x640839:c.instructions+=47;goto B640839;
case 0x64083c:c.instructions+=46;goto B64083c;
case 0x64083f:c.instructions+=45;goto B64083f;
case 0x640842:c.instructions+=44;goto B640842;
case 0x640845:c.instructions+=43;goto B640845;
case 0x640848:c.instructions+=42;goto B640848;
case 0x64084b:c.instructions+=41;goto B64084b;
case 0x64084e:c.instructions+=40;goto B64084e;
case 0x640851:c.instructions+=39;goto B640851;
case 0x640854:c.instructions+=38;goto B640854;
case 0x640857:c.instructions+=37;goto B640857;
case 0x64085a:c.instructions+=36;goto B64085a;
case 0x64085d:c.instructions+=35;goto B64085d;
case 0x640860:c.instructions+=34;goto B640860;
case 0x640863:c.instructions+=33;goto B640863;
case 0x640866:c.instructions+=32;goto B640866;
case 0x640869:c.instructions+=31;goto B640869;
case 0x64086b:c.instructions+=30;goto B64086b;
case 0x64086d:c.instructions+=29;goto B64086d;
case 0x64086f:c.instructions+=28;goto B64086f;
case 0x640871:c.instructions+=27;goto B640871;
case 0x640873:c.instructions+=26;goto B640873;
case 0x640875:c.instructions+=25;goto B640875;
case 0x640877:c.instructions+=24;goto B640877;
case 0x640879:c.instructions+=23;goto B640879;
case 0x64087b:c.instructions+=22;goto B64087b;
case 0x64087d:c.instructions+=21;goto B64087d;
case 0x64087f:c.instructions+=20;goto B64087f;
case 0x640882:c.instructions+=19;goto B640882;
case 0x640885:c.instructions+=18;goto B640885;
case 0x640888:c.instructions+=17;goto B640888;
case 0x64088b:c.instructions+=16;goto B64088b;
case 0x64088d:c.instructions+=15;goto B64088d;
case 0x640890:c.instructions+=14;goto B640890;
case 0x640893:c.instructions+=13;goto B640893;
case 0x640895:c.instructions+=12;goto B640895;
case 0x640897:c.instructions+=11;goto B640897;
case 0x640899:c.instructions+=10;goto B640899;
case 0x64089b:c.instructions+=9;goto B64089b;
case 0x64089d:c.instructions+=8;goto B64089d;
case 0x64089f:c.instructions+=7;goto B64089f;
case 0x6408a1:c.instructions+=6;goto B6408a1;
case 0x6408a3:c.instructions+=5;goto B6408a3;
case 0x6408a5:c.instructions+=4;goto B6408a5;
case 0x6408a7:c.instructions+=3;goto B6408a7;
case 0x6408aa:c.instructions+=2;goto B6408aa;
case 0x6408ac:c.instructions+=1;goto B6408ac;
case 0x6408ae:goto L6408ae;
case 0x6408b1:c.instructions+=17;goto B6408b1;
case 0x6408b4:c.instructions+=16;goto B6408b4;
case 0x6408b6:c.instructions+=15;goto B6408b6;
case 0x6408b9:c.instructions+=14;goto B6408b9;
case 0x6408bc:c.instructions+=13;goto B6408bc;
case 0x6408bf:c.instructions+=12;goto B6408bf;
case 0x6408c1:c.instructions+=11;goto B6408c1;
case 0x6408c4:c.instructions+=10;goto B6408c4;
case 0x6408c7:c.instructions+=9;goto B6408c7;
case 0x6408c9:c.instructions+=8;goto B6408c9;
case 0x6408cc:c.instructions+=7;goto B6408cc;
case 0x6408cf:c.instructions+=6;goto B6408cf;
case 0x6408d1:c.instructions+=5;goto B6408d1;
case 0x6408d4:c.instructions+=4;goto B6408d4;
case 0x6408d5:c.instructions+=3;goto B6408d5;
case 0x6408d6:c.instructions+=2;goto B6408d6;
case 0x6408d7:c.instructions+=1;goto B6408d7;
case 0x6408d8:goto L6408d8;
case 0x6408db:c.instructions+=4;goto B6408db;
case 0x6408dc:c.instructions+=3;goto B6408dc;
case 0x6408df:c.instructions+=2;goto B6408df;
case 0x6408e0:c.instructions+=1;goto B6408e0;
case 0x6408e5:goto L6408e5;
case 0x6408e8:c.instructions+=6;goto B6408e8;
case 0x6408e9:c.instructions+=5;goto B6408e9;
case 0x6408ec:c.instructions+=4;goto B6408ec;
case 0x6408ed:c.instructions+=3;goto B6408ed;
case 0x6408f0:c.instructions+=2;goto B6408f0;
case 0x6408f1:c.instructions+=1;goto B6408f1;
case 0x6408f6:goto L6408f6;
case 0x6408f9:c.instructions+=10;goto B6408f9;
case 0x6408fc:c.instructions+=9;goto B6408fc;
case 0x6408fd:c.instructions+=8;goto B6408fd;
case 0x6408fe:c.instructions+=7;goto B6408fe;
case 0x640901:c.instructions+=6;goto B640901;
case 0x640902:c.instructions+=5;goto B640902;
case 0x640903:c.instructions+=4;goto B640903;
case 0x640909:c.instructions+=3;goto B640909;
case 0x64090a:c.instructions+=2;goto B64090a;
case 0x64090b:c.instructions+=1;goto B64090b;
case 0x640910:goto L640910;
case 0x640913:c.instructions+=6;goto B640913;
case 0x640914:c.instructions+=5;goto B640914;
case 0x640917:c.instructions+=4;goto B640917;
case 0x640918:c.instructions+=3;goto B640918;
case 0x64091b:c.instructions+=2;goto B64091b;
case 0x64091c:c.instructions+=1;goto B64091c;
case 0x640921:goto L640921;
case 0x640924:c.instructions+=10;goto B640924;
case 0x640927:c.instructions+=9;goto B640927;
case 0x640928:c.instructions+=8;goto B640928;
case 0x640929:c.instructions+=7;goto B640929;
case 0x64092c:c.instructions+=6;goto B64092c;
case 0x64092d:c.instructions+=5;goto B64092d;
case 0x64092e:c.instructions+=4;goto B64092e;
case 0x640931:c.instructions+=3;goto B640931;
case 0x640932:c.instructions+=2;goto B640932;
case 0x640933:c.instructions+=1;goto B640933;
case 0x640938:goto L640938;
case 0x64093b:c.instructions+=30;goto B64093b;
case 0x640941:c.instructions+=29;goto B640941;
case 0x640942:c.instructions+=28;goto B640942;
case 0x640945:c.instructions+=27;goto B640945;
case 0x64094b:c.instructions+=26;goto B64094b;
case 0x640951:c.instructions+=25;goto B640951;
case 0x640952:c.instructions+=24;goto B640952;
case 0x640955:c.instructions+=23;goto B640955;
case 0x640958:c.instructions+=22;goto B640958;
case 0x64095e:c.instructions+=21;goto B64095e;
case 0x640961:c.instructions+=20;goto B640961;
case 0x640964:c.instructions+=19;goto B640964;
case 0x64096a:c.instructions+=18;goto B64096a;
case 0x64096d:c.instructions+=17;goto B64096d;
case 0x640973:c.instructions+=16;goto B640973;
case 0x640975:c.instructions+=15;goto B640975;
case 0x640977:c.instructions+=14;goto B640977;
case 0x64097a:c.instructions+=13;goto B64097a;
case 0x64097d:c.instructions+=12;goto B64097d;
case 0x64097f:c.instructions+=11;goto B64097f;
case 0x640982:c.instructions+=10;goto B640982;
case 0x640985:c.instructions+=9;goto B640985;
case 0x640987:c.instructions+=8;goto B640987;
case 0x64098a:c.instructions+=7;goto B64098a;
case 0x64098c:c.instructions+=6;goto B64098c;
case 0x64098e:c.instructions+=5;goto B64098e;
case 0x640991:c.instructions+=4;goto B640991;
case 0x640993:c.instructions+=3;goto B640993;
case 0x640995:c.instructions+=2;goto B640995;
case 0x640997:c.instructions+=1;goto B640997;
case 0x64099c:goto L64099c;
case 0x6409a2:c.instructions+=6;goto B6409a2;
case 0x6409a3:c.instructions+=5;goto B6409a3;
case 0x6409a6:c.instructions+=4;goto B6409a6;
case 0x6409a7:c.instructions+=3;goto B6409a7;
case 0x6409aa:c.instructions+=2;goto B6409aa;
case 0x6409ab:c.instructions+=1;goto B6409ab;
case 0x6409b0:goto L6409b0;
case 0x6409b3:c.instructions+=10;goto B6409b3;
case 0x6409b6:c.instructions+=9;goto B6409b6;
case 0x6409b7:c.instructions+=8;goto B6409b7;
case 0x6409b8:c.instructions+=7;goto B6409b8;
case 0x6409bb:c.instructions+=6;goto B6409bb;
case 0x6409bc:c.instructions+=5;goto B6409bc;
case 0x6409bd:c.instructions+=4;goto B6409bd;
case 0x6409c0:c.instructions+=3;goto B6409c0;
case 0x6409c1:c.instructions+=2;goto B6409c1;
case 0x6409c2:c.instructions+=1;goto B6409c2;
case 0x6409c7:goto L6409c7;
case 0x6409ca:c.instructions+=6;goto B6409ca;
case 0x6409cb:c.instructions+=5;goto B6409cb;
case 0x6409ce:c.instructions+=4;goto B6409ce;
case 0x6409cf:c.instructions+=3;goto B6409cf;
case 0x6409d2:c.instructions+=2;goto B6409d2;
case 0x6409d3:c.instructions+=1;goto B6409d3;
case 0x6409d8:goto L6409d8;
case 0x6409db:c.instructions+=10;goto B6409db;
case 0x6409de:c.instructions+=9;goto B6409de;
case 0x6409df:c.instructions+=8;goto B6409df;
case 0x6409e0:c.instructions+=7;goto B6409e0;
case 0x6409e3:c.instructions+=6;goto B6409e3;
case 0x6409e4:c.instructions+=5;goto B6409e4;
case 0x6409e5:c.instructions+=4;goto B6409e5;
case 0x6409eb:c.instructions+=3;goto B6409eb;
case 0x6409ec:c.instructions+=2;goto B6409ec;
case 0x6409ed:c.instructions+=1;goto B6409ed;
case 0x6409f2:goto L6409f2;
case 0x6409f5:c.instructions+=6;goto B6409f5;
case 0x6409f6:c.instructions+=5;goto B6409f6;
case 0x6409f9:c.instructions+=4;goto B6409f9;
case 0x6409fa:c.instructions+=3;goto B6409fa;
case 0x6409fd:c.instructions+=2;goto B6409fd;
case 0x6409fe:c.instructions+=1;goto B6409fe;
case 0x640a03:goto L640a03;
case 0x640a06:c.instructions+=10;goto B640a06;
case 0x640a09:c.instructions+=9;goto B640a09;
case 0x640a0a:c.instructions+=8;goto B640a0a;
case 0x640a0b:c.instructions+=7;goto B640a0b;
case 0x640a0e:c.instructions+=6;goto B640a0e;
case 0x640a0f:c.instructions+=5;goto B640a0f;
case 0x640a10:c.instructions+=4;goto B640a10;
case 0x640a13:c.instructions+=3;goto B640a13;
case 0x640a14:c.instructions+=2;goto B640a14;
case 0x640a15:c.instructions+=1;goto B640a15;
case 0x640a1a:goto L640a1a;
case 0x640a1d:c.instructions+=30;goto B640a1d;
case 0x640a23:c.instructions+=29;goto B640a23;
case 0x640a24:c.instructions+=28;goto B640a24;
case 0x640a27:c.instructions+=27;goto B640a27;
case 0x640a2d:c.instructions+=26;goto B640a2d;
case 0x640a33:c.instructions+=25;goto B640a33;
case 0x640a34:c.instructions+=24;goto B640a34;
case 0x640a37:c.instructions+=23;goto B640a37;
case 0x640a3a:c.instructions+=22;goto B640a3a;
case 0x640a40:c.instructions+=21;goto B640a40;
case 0x640a43:c.instructions+=20;goto B640a43;
case 0x640a46:c.instructions+=19;goto B640a46;
case 0x640a4c:c.instructions+=18;goto B640a4c;
case 0x640a4f:c.instructions+=17;goto B640a4f;
case 0x640a55:c.instructions+=16;goto B640a55;
case 0x640a57:c.instructions+=15;goto B640a57;
case 0x640a59:c.instructions+=14;goto B640a59;
case 0x640a5c:c.instructions+=13;goto B640a5c;
case 0x640a5f:c.instructions+=12;goto B640a5f;
case 0x640a61:c.instructions+=11;goto B640a61;
case 0x640a64:c.instructions+=10;goto B640a64;
case 0x640a67:c.instructions+=9;goto B640a67;
case 0x640a69:c.instructions+=8;goto B640a69;
case 0x640a6c:c.instructions+=7;goto B640a6c;
case 0x640a6e:c.instructions+=6;goto B640a6e;
case 0x640a70:c.instructions+=5;goto B640a70;
case 0x640a73:c.instructions+=4;goto B640a73;
case 0x640a75:c.instructions+=3;goto B640a75;
case 0x640a77:c.instructions+=2;goto B640a77;
case 0x640a79:c.instructions+=1;goto B640a79;
case 0x640a7e:goto L640a7e;
case 0x640a84:c.instructions+=6;goto B640a84;
case 0x640a85:c.instructions+=5;goto B640a85;
case 0x640a88:c.instructions+=4;goto B640a88;
case 0x640a89:c.instructions+=3;goto B640a89;
case 0x640a8c:c.instructions+=2;goto B640a8c;
case 0x640a8d:c.instructions+=1;goto B640a8d;
case 0x640a92:goto L640a92;
case 0x640a95:c.instructions+=15;goto B640a95;
case 0x640a98:c.instructions+=14;goto B640a98;
case 0x640a99:c.instructions+=13;goto B640a99;
case 0x640a9a:c.instructions+=12;goto B640a9a;
case 0x640a9b:c.instructions+=11;goto B640a9b;
case 0x640a9c:c.instructions+=10;goto B640a9c;
case 0x640a9f:c.instructions+=9;goto B640a9f;
case 0x640aa2:c.instructions+=8;goto B640aa2;
case 0x640aa3:c.instructions+=7;goto B640aa3;
case 0x640aa4:c.instructions+=6;goto B640aa4;
case 0x640aa5:c.instructions+=5;goto B640aa5;
case 0x640aa6:c.instructions+=4;goto B640aa6;
case 0x640aa7:c.instructions+=3;goto B640aa7;
case 0x640aa8:c.instructions+=2;goto B640aa8;
case 0x640aa9:c.instructions+=1;goto B640aa9;
case 0x640aac:goto L640aac;
case 0x640aae:c.instructions+=8;goto B640aae;
case 0x640aaf:c.instructions+=7;goto B640aaf;
case 0x640ab1:c.instructions+=6;goto B640ab1;
case 0x640ab2:c.instructions+=5;goto B640ab2;
case 0x640ab5:c.instructions+=4;goto B640ab5;
case 0x640ab6:c.instructions+=3;goto B640ab6;
case 0x640ab8:c.instructions+=2;goto B640ab8;
case 0x640aba:c.instructions+=1;goto B640aba;
case 0x640abc:goto L640abc;
case 0x640ac1:c.instructions+=1;goto B640ac1;
case 0x640ac3:goto L640ac3;
case 0x640ac5:c.instructions+=1;goto B640ac5;
case 0x640aca:goto L640aca;
case 0x640acc:c.instructions+=2;goto B640acc;
case 0x640acd:c.instructions+=1;goto B640acd;
case 0x640acf:goto L640acf;
case 0x640ad1:c.instructions+=1;goto B640ad1;
case 0x640ad6:goto L640ad6;
case 0x640ad8:goto L640ad8;
case 0x640ada:goto L640ada;
case 0x640adc:c.instructions+=1;goto B640adc;
case 0x640ade:goto L640ade;
case 0x640ae3:c.instructions+=1;goto B640ae3;
case 0x640ae5:goto L640ae5;
case 0x640ae7:goto L640ae7;
case 0x640ae9:c.instructions+=4;goto B640ae9;
case 0x640aea:c.instructions+=3;goto B640aea;
case 0x640aeb:c.instructions+=2;goto B640aeb;
case 0x640aec:c.instructions+=1;goto B640aec;
case 0x640aef:goto L640aef;
case 0x640af1:c.instructions+=12;goto B640af1;
case 0x640af2:c.instructions+=11;goto B640af2;
case 0x640af4:c.instructions+=10;goto B640af4;
case 0x640af5:c.instructions+=9;goto B640af5;
case 0x640af8:c.instructions+=8;goto B640af8;
case 0x640af9:c.instructions+=7;goto B640af9;
case 0x640afa:c.instructions+=6;goto B640afa;
case 0x640afb:c.instructions+=5;goto B640afb;
case 0x640afd:c.instructions+=4;goto B640afd;
case 0x640aff:c.instructions+=3;goto B640aff;
case 0x640b01:c.instructions+=2;goto B640b01;
case 0x640b04:c.instructions+=1;goto B640b04;
case 0x640b06:goto L640b06;
case 0x640b08:goto L640b08;
case 0x640b0b:c.instructions+=2;goto B640b0b;
case 0x640b0d:c.instructions+=1;goto B640b0d;
case 0x640b0f:goto L640b0f;
case 0x640b11:goto L640b11;
case 0x640b14:c.instructions+=1;goto B640b14;
case 0x640b1a:goto L640b1a;
case 0x640b1c:c.instructions+=1;goto B640b1c;
case 0x640b22:goto L640b22;
case 0x640b27:c.instructions+=1;goto B640b27;
case 0x640b2c:goto L640b2c;
case 0x640b2e:c.instructions+=2;goto B640b2e;
case 0x640b2f:c.instructions+=1;goto B640b2f;
case 0x640b31:goto L640b31;
case 0x640b33:c.instructions+=1;goto B640b33;
case 0x640b38:goto L640b38;
case 0x640b3a:c.instructions+=1;goto B640b3a;
case 0x640b3c:goto L640b3c;
case 0x640b3e:goto L640b3e;
case 0x640b40:c.instructions+=1;goto B640b40;
case 0x640b42:goto L640b42;
case 0x640b47:c.instructions+=1;goto B640b47;
case 0x640b4c:goto L640b4c;
case 0x640b4f:c.instructions+=7;goto B640b4f;
case 0x640b52:c.instructions+=6;goto B640b52;
case 0x640b55:c.instructions+=5;goto B640b55;
case 0x640b57:c.instructions+=4;goto B640b57;
case 0x640b59:c.instructions+=3;goto B640b59;
case 0x640b5c:c.instructions+=2;goto B640b5c;
case 0x640b5f:c.instructions+=1;goto B640b5f;
case 0x640b64:goto L640b64;
case 0x640b66:c.instructions+=2;goto B640b66;
case 0x640b68:c.instructions+=1;goto B640b68;
case 0x640b6a:goto L640b6a;
case 0x640b6d:c.instructions+=5;goto B640b6d;
case 0x640b6e:c.instructions+=4;goto B640b6e;
case 0x640b71:c.instructions+=3;goto B640b71;
case 0x640b77:c.instructions+=2;goto B640b77;
case 0x640b78:c.instructions+=1;goto B640b78;
case 0x640b7d:goto L640b7d;
case 0x640b7f:c.instructions+=2;goto B640b7f;
case 0x640b81:c.instructions+=1;goto B640b81;
case 0x640b83:goto L640b83;
case 0x640b86:c.instructions+=2;goto B640b86;
case 0x640b88:c.instructions+=1;goto B640b88;
case 0x640b8d:goto L640b8d;
case 0x640b8f:c.instructions+=1;goto B640b8f;
case 0x640b91:goto L640b91;
case 0x640b96:c.instructions+=1;goto B640b96;
case 0x640b98:goto L640b98;
case 0x640b9b:c.instructions+=2;goto B640b9b;
case 0x640b9d:c.instructions+=1;goto B640b9d;
case 0x640ba2:goto L640ba2;
case 0x640ba4:c.instructions+=2;goto B640ba4;
case 0x640ba6:c.instructions+=1;goto B640ba6;
case 0x640ba8:goto L640ba8;
case 0x640bac:c.instructions+=2;goto B640bac;
case 0x640bae:c.instructions+=1;goto B640bae;
case 0x640bb3:goto L640bb3;
case 0x640bb5:c.instructions+=1;goto B640bb5;
case 0x640bb7:goto L640bb7;
case 0x640bba:c.instructions+=4;goto B640bba;
case 0x640bbc:c.instructions+=3;goto B640bbc;
case 0x640bbe:c.instructions+=2;goto B640bbe;
case 0x640bbf:c.instructions+=1;goto B640bbf;
case 0x640bc2:goto L640bc2;
case 0x640bc4:goto L640bc4;
case 0x640bc9:goto L640bc9;
case 0x640bcb:c.instructions+=2;goto B640bcb;
case 0x640bcd:c.instructions+=1;goto B640bcd;
case 0x640bcf:goto L640bcf;
case 0x640bd2:c.instructions+=1;goto B640bd2;
case 0x640bd7:goto L640bd7;
case 0x640bda:c.instructions+=1;goto B640bda;
case 0x640bdc:goto L640bdc;
case 0x640bdf:c.instructions+=2;goto B640bdf;
case 0x640be2:c.instructions+=1;goto B640be2;
case 0x640be7:goto L640be7;
case 0x640bea:c.instructions+=1;goto B640bea;
case 0x640bec:goto L640bec;
case 0x640bef:goto L640bef;
case 0x640bf1:c.instructions+=1;goto B640bf1;
case 0x640bf3:goto L640bf3;
case 0x640bf5:c.instructions+=2;goto B640bf5;
case 0x640bf6:c.instructions+=1;goto B640bf6;
case 0x640bf9:goto L640bf9;
case 0x640bfa:c.instructions+=5;goto B640bfa;
case 0x640bfb:c.instructions+=4;goto B640bfb;
case 0x640bfd:c.instructions+=3;goto B640bfd;
case 0x640bfe:c.instructions+=2;goto B640bfe;
case 0x640bff:c.instructions+=1;goto B640bff;
case 0x640c02:goto L640c02;
case 0x640c04:c.instructions+=8;goto B640c04;
case 0x640c05:c.instructions+=7;goto B640c05;
case 0x640c07:c.instructions+=6;goto B640c07;
case 0x640c0a:c.instructions+=5;goto B640c0a;
case 0x640c0b:c.instructions+=4;goto B640c0b;
case 0x640c0c:c.instructions+=3;goto B640c0c;
case 0x640c0d:c.instructions+=2;goto B640c0d;
case 0x640c10:c.instructions+=1;goto B640c10;
case 0x640c15:goto L640c15;
case 0x640c18:c.instructions+=6;goto B640c18;
case 0x640c1a:c.instructions+=5;goto B640c1a;
case 0x640c1c:c.instructions+=4;goto B640c1c;
case 0x640c1f:c.instructions+=3;goto B640c1f;
case 0x640c22:c.instructions+=2;goto B640c22;
case 0x640c25:c.instructions+=1;goto B640c25;
case 0x640c27:goto L640c27;
case 0x640c29:goto L640c29;
case 0x640c2c:c.instructions+=2;goto B640c2c;
case 0x640c2e:c.instructions+=1;goto B640c2e;
case 0x640c30:goto L640c30;
case 0x640c32:goto L640c32;
case 0x640c35:c.instructions+=1;goto B640c35;
case 0x640c3b:goto L640c3b;
case 0x640c3e:c.instructions+=1;goto B640c3e;
case 0x640c44:goto L640c44;
case 0x640c49:c.instructions+=1;goto B640c49;
case 0x640c4e:goto L640c4e;
case 0x640c50:c.instructions+=3;goto B640c50;
case 0x640c52:c.instructions+=2;goto B640c52;
case 0x640c53:c.instructions+=1;goto B640c53;
case 0x640c55:goto L640c55;
case 0x640c57:c.instructions+=1;goto B640c57;
case 0x640c5c:goto L640c5c;
case 0x640c5f:c.instructions+=1;goto B640c5f;
case 0x640c61:goto L640c61;
case 0x640c64:goto L640c64;
case 0x640c67:c.instructions+=1;goto B640c67;
case 0x640c69:goto L640c69;
case 0x640c6e:c.instructions+=1;goto B640c6e;
case 0x640c73:goto L640c73;
case 0x640c74:c.instructions+=5;goto B640c74;
case 0x640c75:c.instructions+=4;goto B640c75;
case 0x640c78:c.instructions+=3;goto B640c78;
case 0x640c7b:c.instructions+=2;goto B640c7b;
case 0x640c7e:c.instructions+=1;goto B640c7e;
case 0x640c83:goto L640c83;
case 0x640c85:c.instructions+=2;goto B640c85;
case 0x640c87:c.instructions+=1;goto B640c87;
case 0x640c8d:goto L640c8d;
case 0x640c91:c.instructions+=1;goto B640c91;
case 0x640c93:goto L640c93;
case 0x640c98:c.instructions+=1;goto B640c98;
case 0x640c9d:goto L640c9d;
case 0x640ca0:c.instructions+=2;goto B640ca0;
case 0x640ca6:c.instructions+=1;goto B640ca6;
case 0x640ca8:goto L640ca8;
case 0x640cab:c.instructions+=1;goto B640cab;
case 0x640cb0:goto L640cb0;
case 0x640cb3:c.instructions+=9;goto B640cb3;
case 0x640cb4:c.instructions+=8;goto B640cb4;
case 0x640cb7:c.instructions+=7;goto B640cb7;
case 0x640cb8:c.instructions+=6;goto B640cb8;
case 0x640cb9:c.instructions+=5;goto B640cb9;
case 0x640cbc:c.instructions+=4;goto B640cbc;
case 0x640cbf:c.instructions+=3;goto B640cbf;
case 0x640cc2:c.instructions+=2;goto B640cc2;
case 0x640cc5:c.instructions+=1;goto B640cc5;
case 0x640cca:goto L640cca;
case 0x640ccc:c.instructions+=2;goto B640ccc;
case 0x640cce:c.instructions+=1;goto B640cce;
case 0x640cd4:goto L640cd4;
case 0x640cd6:c.instructions+=1;goto B640cd6;
case 0x640cd8:goto L640cd8;
case 0x640cda:c.instructions+=2;goto B640cda;
case 0x640cdc:c.instructions+=1;goto B640cdc;
case 0x640cde:goto L640cde;
case 0x640ce0:c.instructions+=2;goto B640ce0;
case 0x640ce1:c.instructions+=1;goto B640ce1;
case 0x640ce4:goto L640ce4;
case 0x640ce7:goto L640ce7;
case 0x640cea:c.instructions+=8;goto B640cea;
case 0x640cec:c.instructions+=7;goto B640cec;
case 0x640ced:c.instructions+=6;goto B640ced;
case 0x640cf0:c.instructions+=5;goto B640cf0;
case 0x640cf1:c.instructions+=4;goto B640cf1;
case 0x640cf4:c.instructions+=3;goto B640cf4;
case 0x640cf5:c.instructions+=2;goto B640cf5;
case 0x640cf6:c.instructions+=1;goto B640cf6;
case 0x640cfc:goto L640cfc;
case 0x640cfe:c.instructions+=2;goto B640cfe;
case 0x640d00:c.instructions+=1;goto B640d00;
case 0x640d06:goto L640d06;
case 0x640d08:goto L640d08;
case 0x640d0a:c.instructions+=1;goto B640d0a;
case 0x640d10:goto L640d10;
case 0x640d13:c.instructions+=3;goto B640d13;
case 0x640d14:c.instructions+=2;goto B640d14;
case 0x640d17:c.instructions+=1;goto B640d17;
case 0x640d1c:goto L640d1c;
case 0x640d1e:c.instructions+=2;goto B640d1e;
case 0x640d20:c.instructions+=1;goto B640d20;
case 0x640d22:goto L640d22;
case 0x640d25:c.instructions+=6;goto B640d25;
case 0x640d28:c.instructions+=5;goto B640d28;
case 0x640d2b:c.instructions+=4;goto B640d2b;
case 0x640d2e:c.instructions+=3;goto B640d2e;
case 0x640d30:c.instructions+=2;goto B640d30;
case 0x640d31:c.instructions+=1;goto B640d31;
case 0x640d34:goto L640d34;
case 0x640d36:c.instructions+=3;goto B640d36;
case 0x640d39:c.instructions+=2;goto B640d39;
case 0x640d3b:c.instructions+=1;goto B640d3b;
case 0x640d3e:goto L640d3e;
case 0x640d40:goto L640d40;
case 0x640d42:c.instructions+=1;goto B640d42;
case 0x640d45:goto L640d45;
case 0x640d47:goto L640d47;
case 0x640d4a:c.instructions+=2;goto B640d4a;
case 0x640d4c:c.instructions+=1;goto B640d4c;
case 0x640d4e:goto L640d4e;
case 0x640d51:c.instructions+=8;goto B640d51;
case 0x640d55:c.instructions+=7;goto B640d55;
case 0x640d58:c.instructions+=6;goto B640d58;
case 0x640d59:c.instructions+=5;goto B640d59;
case 0x640d5c:c.instructions+=4;goto B640d5c;
case 0x640d5e:c.instructions+=3;goto B640d5e;
case 0x640d61:c.instructions+=2;goto B640d61;
case 0x640d64:c.instructions+=1;goto B640d64;
case 0x640d69:goto L640d69;
case 0x640d6b:c.instructions+=2;goto B640d6b;
case 0x640d6d:c.instructions+=1;goto B640d6d;
case 0x640d6f:goto L640d6f;
case 0x640d71:c.instructions+=1;goto B640d71;
case 0x640d76:goto L640d76;
case 0x640d78:c.instructions+=2;goto B640d78;
case 0x640d7a:c.instructions+=1;goto B640d7a;
case 0x640d7c:goto L640d7c;
case 0x640d7e:c.instructions+=3;goto B640d7e;
case 0x640d80:c.instructions+=2;goto B640d80;
case 0x640d81:c.instructions+=1;goto B640d81;
case 0x640d84:goto L640d84;
case 0x640d86:goto L640d86;
case 0x640d8b:goto L640d8b;
case 0x640d8e:c.instructions+=2;goto B640d8e;
case 0x640d90:c.instructions+=1;goto B640d90;
case 0x640d92:goto L640d92;
case 0x640d94:c.instructions+=2;goto B640d94;
case 0x640d95:c.instructions+=1;goto B640d95;
case 0x640d98:goto L640d98;
case 0x640d9b:c.instructions+=2;goto B640d9b;
case 0x640d9d:c.instructions+=1;goto B640d9d;
case 0x640d9f:goto L640d9f;
case 0x640da1:c.instructions+=2;goto B640da1;
case 0x640da2:c.instructions+=1;goto B640da2;
case 0x640da5:goto L640da5;
case 0x640da9:goto L640da9;
case 0x640dac:c.instructions+=2;goto B640dac;
case 0x640dae:c.instructions+=1;goto B640dae;
case 0x640db0:goto L640db0;
case 0x640db2:c.instructions+=2;goto B640db2;
case 0x640db3:c.instructions+=1;goto B640db3;
case 0x640db6:goto L640db6;
case 0x640db9:c.instructions+=1;goto B640db9;
case 0x640dbe:goto L640dbe;
case 0x640dbf:c.instructions+=5;goto B640dbf;
case 0x640dc0:c.instructions+=4;goto B640dc0;
case 0x640dc2:c.instructions+=3;goto B640dc2;
case 0x640dc3:c.instructions+=2;goto B640dc3;
case 0x640dc4:c.instructions+=1;goto B640dc4;
case 0x640dc7:goto L640dc7;
case 0x640dc9:c.instructions+=17;goto B640dc9;
case 0x640dca:c.instructions+=16;goto B640dca;
case 0x640dcc:c.instructions+=15;goto B640dcc;
case 0x640dd2:c.instructions+=14;goto B640dd2;
case 0x640dd5:c.instructions+=13;goto B640dd5;
case 0x640dd6:c.instructions+=12;goto B640dd6;
case 0x640dd7:c.instructions+=11;goto B640dd7;
case 0x640dda:c.instructions+=10;goto B640dda;
case 0x640ddd:c.instructions+=9;goto B640ddd;
case 0x640ddf:c.instructions+=8;goto B640ddf;
case 0x640de2:c.instructions+=7;goto B640de2;
case 0x640de3:c.instructions+=6;goto B640de3;
case 0x640de6:c.instructions+=5;goto B640de6;
case 0x640de8:c.instructions+=4;goto B640de8;
case 0x640deb:c.instructions+=3;goto B640deb;
case 0x640dee:c.instructions+=2;goto B640dee;
case 0x640df1:c.instructions+=1;goto B640df1;
case 0x640df3:goto L640df3;
case 0x640df6:c.instructions+=1;goto B640df6;
case 0x640df9:goto L640df9;
case 0x640dfc:c.instructions+=1;goto B640dfc;
case 0x640e02:goto L640e02;
case 0x640e05:c.instructions+=3;goto B640e05;
case 0x640e07:c.instructions+=2;goto B640e07;
case 0x640e09:c.instructions+=1;goto B640e09;
case 0x640e0b:goto L640e0b;
case 0x640e0f:c.instructions+=1;goto B640e0f;
case 0x640e11:goto L640e11;
case 0x640e14:c.instructions+=8;goto B640e14;
case 0x640e16:c.instructions+=7;goto B640e16;
case 0x640e19:c.instructions+=6;goto B640e19;
case 0x640e1c:c.instructions+=5;goto B640e1c;
case 0x640e1f:c.instructions+=4;goto B640e1f;
case 0x640e22:c.instructions+=3;goto B640e22;
case 0x640e24:c.instructions+=2;goto B640e24;
case 0x640e27:c.instructions+=1;goto B640e27;
case 0x640e29:goto L640e29;
case 0x640e2d:c.instructions+=1;goto B640e2d;
case 0x640e33:goto L640e33;
case 0x640e36:c.instructions+=1;goto B640e36;
case 0x640e3c:goto L640e3c;
case 0x640e3f:c.instructions+=8;goto B640e3f;
case 0x640e42:c.instructions+=7;goto B640e42;
case 0x640e44:c.instructions+=6;goto B640e44;
case 0x640e47:c.instructions+=5;goto B640e47;
case 0x640e4a:c.instructions+=4;goto B640e4a;
case 0x640e4d:c.instructions+=3;goto B640e4d;
case 0x640e4f:c.instructions+=2;goto B640e4f;
case 0x640e52:c.instructions+=1;goto B640e52;
case 0x640e54:goto L640e54;
case 0x640e56:c.instructions+=2;goto B640e56;
case 0x640e59:c.instructions+=1;goto B640e59;
case 0x640e5f:goto L640e5f;
case 0x640e62:c.instructions+=2;goto B640e62;
case 0x640e64:c.instructions+=1;goto B640e64;
case 0x640e6a:goto L640e6a;
case 0x640e6d:c.instructions+=1;goto B640e6d;
case 0x640e6f:goto L640e6f;
case 0x640e71:goto L640e71;
case 0x640e74:c.instructions+=1;goto B640e74;
case 0x640e76:goto L640e76;
case 0x640e79:c.instructions+=5;goto B640e79;
case 0x640e7c:c.instructions+=4;goto B640e7c;
case 0x640e7f:c.instructions+=3;goto B640e7f;
case 0x640e81:c.instructions+=2;goto B640e81;
case 0x640e84:c.instructions+=1;goto B640e84;
case 0x640e87:goto L640e87;
case 0x640e89:goto L640e89;
case 0x640e8b:c.instructions+=2;goto B640e8b;
case 0x640e8e:c.instructions+=1;goto B640e8e;
case 0x640e91:goto L640e91;
case 0x640e93:goto L640e93;
case 0x640e96:c.instructions+=17;goto B640e96;
case 0x640e98:c.instructions+=16;goto B640e98;
case 0x640e9a:c.instructions+=15;goto B640e9a;
case 0x640e9c:c.instructions+=14;goto B640e9c;
case 0x640e9f:c.instructions+=13;goto B640e9f;
case 0x640ea1:c.instructions+=12;goto B640ea1;
case 0x640ea4:c.instructions+=11;goto B640ea4;
case 0x640ea6:c.instructions+=10;goto B640ea6;
case 0x640ea8:c.instructions+=9;goto B640ea8;
case 0x640eaa:c.instructions+=8;goto B640eaa;
case 0x640ead:c.instructions+=7;goto B640ead;
case 0x640eaf:c.instructions+=6;goto B640eaf;
case 0x640eb2:c.instructions+=5;goto B640eb2;
case 0x640eb4:c.instructions+=4;goto B640eb4;
case 0x640eba:c.instructions+=3;goto B640eba;
case 0x640ebc:c.instructions+=2;goto B640ebc;
case 0x640ebf:c.instructions+=1;goto B640ebf;
case 0x640ec5:goto L640ec5;
case 0x640ec7:c.instructions+=1;goto B640ec7;
case 0x640ecc:goto L640ecc;
case 0x640ece:c.instructions+=5;goto B640ece;
case 0x640ed1:c.instructions+=4;goto B640ed1;
case 0x640ed3:c.instructions+=3;goto B640ed3;
case 0x640ed6:c.instructions+=2;goto B640ed6;
case 0x640ed9:c.instructions+=1;goto B640ed9;
case 0x640edb:goto L640edb;
case 0x640ee1:goto L640ee1;
case 0x640ee3:c.instructions+=10;goto B640ee3;
case 0x640ee6:c.instructions+=9;goto B640ee6;
case 0x640ee8:c.instructions+=8;goto B640ee8;
case 0x640eeb:c.instructions+=7;goto B640eeb;
case 0x640eed:c.instructions+=6;goto B640eed;
case 0x640ef0:c.instructions+=5;goto B640ef0;
case 0x640ef1:c.instructions+=4;goto B640ef1;
case 0x640ef4:c.instructions+=3;goto B640ef4;
case 0x640ef7:c.instructions+=2;goto B640ef7;
case 0x640ef8:c.instructions+=1;goto B640ef8;
case 0x640efd:goto L640efd;
case 0x640f00:c.instructions+=6;goto B640f00;
case 0x640f02:c.instructions+=5;goto B640f02;
case 0x640f03:c.instructions+=4;goto B640f03;
case 0x640f06:c.instructions+=3;goto B640f06;
case 0x640f09:c.instructions+=2;goto B640f09;
case 0x640f0a:c.instructions+=1;goto B640f0a;
case 0x640f0f:goto L640f0f;
case 0x640f12:c.instructions+=44;goto B640f12;
case 0x640f15:c.instructions+=43;goto B640f15;
case 0x640f18:c.instructions+=42;goto B640f18;
case 0x640f1a:c.instructions+=41;goto B640f1a;
case 0x640f1d:c.instructions+=40;goto B640f1d;
case 0x640f20:c.instructions+=39;goto B640f20;
case 0x640f23:c.instructions+=38;goto B640f23;
case 0x640f25:c.instructions+=37;goto B640f25;
case 0x640f28:c.instructions+=36;goto B640f28;
case 0x640f2b:c.instructions+=35;goto B640f2b;
case 0x640f2d:c.instructions+=34;goto B640f2d;
case 0x640f30:c.instructions+=33;goto B640f30;
case 0x640f33:c.instructions+=32;goto B640f33;
case 0x640f35:c.instructions+=31;goto B640f35;
case 0x640f38:c.instructions+=30;goto B640f38;
case 0x640f3b:c.instructions+=29;goto B640f3b;
case 0x640f3d:c.instructions+=28;goto B640f3d;
case 0x640f40:c.instructions+=27;goto B640f40;
case 0x640f43:c.instructions+=26;goto B640f43;
case 0x640f45:c.instructions+=25;goto B640f45;
case 0x640f48:c.instructions+=24;goto B640f48;
case 0x640f4a:c.instructions+=23;goto B640f4a;
case 0x640f4d:c.instructions+=22;goto B640f4d;
case 0x640f4f:c.instructions+=21;goto B640f4f;
case 0x640f51:c.instructions+=20;goto B640f51;
case 0x640f54:c.instructions+=19;goto B640f54;
case 0x640f57:c.instructions+=18;goto B640f57;
case 0x640f5a:c.instructions+=17;goto B640f5a;
case 0x640f5d:c.instructions+=16;goto B640f5d;
case 0x640f60:c.instructions+=15;goto B640f60;
case 0x640f63:c.instructions+=14;goto B640f63;
case 0x640f66:c.instructions+=13;goto B640f66;
case 0x640f68:c.instructions+=12;goto B640f68;
case 0x640f6a:c.instructions+=11;goto B640f6a;
case 0x640f6d:c.instructions+=10;goto B640f6d;
case 0x640f70:c.instructions+=9;goto B640f70;
case 0x640f73:c.instructions+=8;goto B640f73;
case 0x640f76:c.instructions+=7;goto B640f76;
case 0x640f79:c.instructions+=6;goto B640f79;
case 0x640f7c:c.instructions+=5;goto B640f7c;
case 0x640f7e:c.instructions+=4;goto B640f7e;
case 0x640f84:c.instructions+=3;goto B640f84;
case 0x640f86:c.instructions+=2;goto B640f86;
case 0x640f89:c.instructions+=1;goto B640f89;
case 0x640f8f:goto L640f8f;
case 0x640f92:goto L640f92;
case 0x640f95:c.instructions+=9;goto B640f95;
case 0x640f98:c.instructions+=8;goto B640f98;
case 0x640f9b:c.instructions+=7;goto B640f9b;
case 0x640f9d:c.instructions+=6;goto B640f9d;
case 0x640fa0:c.instructions+=5;goto B640fa0;
case 0x640fa2:c.instructions+=4;goto B640fa2;
case 0x640fa5:c.instructions+=3;goto B640fa5;
case 0x640fa8:c.instructions+=2;goto B640fa8;
case 0x640fab:c.instructions+=1;goto B640fab;
case 0x640fb1:goto L640fb1;
case 0x640fb6:goto L640fb6;
case 0x640fb9:c.instructions+=2;goto B640fb9;
case 0x640fbc:c.instructions+=1;goto B640fbc;
case 0x640fc2:goto L640fc2;
case 0x640fc4:goto L640fc4;
case 0x640fc7:goto L640fc7;
case 0x640fc9:c.instructions+=5;goto B640fc9;
case 0x640fcc:c.instructions+=4;goto B640fcc;
case 0x640fce:c.instructions+=3;goto B640fce;
case 0x640fd1:c.instructions+=2;goto B640fd1;
case 0x640fd3:c.instructions+=1;goto B640fd3;
case 0x640fd9:goto L640fd9;
case 0x640fdb:goto L640fdb;
case 0x640fdd:c.instructions+=1;goto B640fdd;
case 0x640fe0:goto L640fe0;
case 0x640fe2:goto L640fe2;
case 0x640fe7:goto L640fe7;
case 0x640fe9:c.instructions+=1;goto B640fe9;
case 0x640fee:goto L640fee;
case 0x640ff0:c.instructions+=6;goto B640ff0;
case 0x640ff2:c.instructions+=5;goto B640ff2;
case 0x640ff5:c.instructions+=4;goto B640ff5;
case 0x640ff7:c.instructions+=3;goto B640ff7;
case 0x640ffa:c.instructions+=2;goto B640ffa;
case 0x640ffd:c.instructions+=1;goto B640ffd;
case 0x640fff:goto L640fff;
default:missing_instruction(c.pc);}
B640000:L640000:{c.instructions+=14;NFSU2_TR(0x640000);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640002:{NFSU2_TR(0x640002);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640005:{NFSU2_TR(0x640005);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640008:{NFSU2_TR(0x640008);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64000b:{NFSU2_TR(0x64000b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64000c:{NFSU2_TR(0x64000c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640012:{NFSU2_TR(0x640012);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640014:{NFSU2_TR(0x640014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640015:{NFSU2_TR(0x640015);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640018:{NFSU2_TR(0x640018);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64001b:{NFSU2_TR(0x64001b);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B64001d:{NFSU2_TR(0x64001d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64001e:{NFSU2_TR(0x64001e);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640021:{NFSU2_TR(0x640021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640026ull));
TAIL_STATIC(0x63cedbu,63c);
}
B640026:L640026:{c.instructions+=8;NFSU2_TR(0x640026);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640029:{NFSU2_TR(0x640029);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64002c:{NFSU2_TR(0x64002c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64002d:{NFSU2_TR(0x64002d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640030:{NFSU2_TR(0x640030);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640033:{NFSU2_TR(0x640033);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640036:{NFSU2_TR(0x640036);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640039:{NFSU2_TR(0x640039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64003eull));
TAIL_STATIC(0x63c61fu,63c);
}
B64003e:L64003e:{c.instructions+=7;NFSU2_TR(0x64003e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64003f:{NFSU2_TR(0x64003f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640040:{NFSU2_TR(0x640040);
__builtin_memmove((R+16),(R+20),4);
}
B640042:{NFSU2_TR(0x640042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B640043:{NFSU2_TR(0x640043);
__builtin_memmove((R+16),(R+12),4);
}
B640045:{NFSU2_TR(0x640045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B640046:{NFSU2_TR(0x640046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640069:L640069:{c.instructions+=34;NFSU2_TR(0x640069);
__builtin_memmove((R+28),(R+28),4);
}
B64006b:{NFSU2_TR(0x64006b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64006c:{NFSU2_TR(0x64006c);
__builtin_memmove((R+20),(R+16),4);
}
B64006e:{NFSU2_TR(0x64006e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B640071:{NFSU2_TR(0x640071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640072:{NFSU2_TR(0x640072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640075:{NFSU2_TR(0x640075);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640078:{NFSU2_TR(0x640078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640079:{NFSU2_TR(0x640079);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64007c:{NFSU2_TR(0x64007c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64007d:{NFSU2_TR(0x64007d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640080:{NFSU2_TR(0x640080);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640081:{NFSU2_TR(0x640081);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640083:{NFSU2_TR(0x640083);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B640085:{NFSU2_TR(0x640085);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640087:{NFSU2_TR(0x640087);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640089:{NFSU2_TR(0x640089);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64008b:{NFSU2_TR(0x64008b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64008d:{NFSU2_TR(0x64008d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B64008f:{NFSU2_TR(0x64008f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B640091:{NFSU2_TR(0x640091);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640093:{NFSU2_TR(0x640093);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B640095:{NFSU2_TR(0x640095);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B640097:{NFSU2_TR(0x640097);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640099:{NFSU2_TR(0x640099);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64009c:{NFSU2_TR(0x64009c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64009e:{NFSU2_TR(0x64009e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6400a0:{NFSU2_TR(0x6400a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6400a2:{NFSU2_TR(0x6400a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6400a4:{NFSU2_TR(0x6400a4);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6400a6:{NFSU2_TR(0x6400a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6400aa:{NFSU2_TR(0x6400aa);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6400ad:{NFSU2_TR(0x6400ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6400b0:{NFSU2_TR(0x6400b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6400b5ull));
TAIL_STATIC(0x63bd36u,63b);
}
B6400b5:L6400b5:{c.instructions+=2;NFSU2_TR(0x6400b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6400b7:{NFSU2_TR(0x6400b7);
if(r1(R+518)){{goto L6400c8;}}
}
B6400b9:L6400b9:{c.instructions+=3;NFSU2_TR(0x6400b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6400bc:{NFSU2_TR(0x6400bc);
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
B6400be:{NFSU2_TR(0x6400be);
if(r1(R+518)){{goto L64011b;}}
}
B6400c0:L6400c0:{c.instructions+=6;NFSU2_TR(0x6400c0);
__builtin_memmove((R+28),(R+0),4);
}
B6400c2:{NFSU2_TR(0x6400c2);
u8 U[40];
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
}
B6400c3:{NFSU2_TR(0x6400c3);
u8 U[40];
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
}
B6400c4:{NFSU2_TR(0x6400c4);
u8 U[40];
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
}
B6400c5:{NFSU2_TR(0x6400c5);
u8 U[40];
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
}
B6400c6:{NFSU2_TR(0x6400c6);
{goto L64011b;}
}
B6400c8:L6400c8:{c.instructions+=6;NFSU2_TR(0x6400c8);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6400cb:{NFSU2_TR(0x6400cb);
{u32 ea_=u32(u32(8041608u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6400d1:{NFSU2_TR(0x6400d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6400d3:{NFSU2_TR(0x6400d3);
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
B6400d6:{NFSU2_TR(0x6400d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6400d9:{NFSU2_TR(0x6400d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640108;}}
}
B6400db:L6400db:{c.instructions+=16;NFSU2_TR(0x6400db);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6400de:{NFSU2_TR(0x6400de);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6400e0:{NFSU2_TR(0x6400e0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6400e6:{NFSU2_TR(0x6400e6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6400e8:{NFSU2_TR(0x6400e8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6400ea:{NFSU2_TR(0x6400ea);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6400ed:{NFSU2_TR(0x6400ed);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6400ef:{NFSU2_TR(0x6400ef);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6400f2:{NFSU2_TR(0x6400f2);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6400f5:{NFSU2_TR(0x6400f5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6400f7:{NFSU2_TR(0x6400f7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6400fa:{NFSU2_TR(0x6400fa);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6400fd:{NFSU2_TR(0x6400fd);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640100:{NFSU2_TR(0x640100);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640103:{NFSU2_TR(0x640103);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640106:{NFSU2_TR(0x640106);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6400c0u);}goto L6400c0;}
}
B640108:L640108:{c.instructions+=8;NFSU2_TR(0x640108);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64010a:{NFSU2_TR(0x64010a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64010c:{NFSU2_TR(0x64010c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64010e:{NFSU2_TR(0x64010e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640111:{NFSU2_TR(0x640111);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640113:{NFSU2_TR(0x640113);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640116:{NFSU2_TR(0x640116);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640118:{NFSU2_TR(0x640118);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64011b:L64011b:{c.instructions+=4;NFSU2_TR(0x64011b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64011c:{NFSU2_TR(0x64011c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64011d:{NFSU2_TR(0x64011d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64011e:{NFSU2_TR(0x64011e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640121:L640121:{c.instructions+=122;NFSU2_TR(0x640121);
__builtin_memmove((R+28),(R+28),4);
}
B640123:{NFSU2_TR(0x640123);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640124:{NFSU2_TR(0x640124);
__builtin_memmove((R+20),(R+16),4);
}
B640126:{NFSU2_TR(0x640126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B64012c:{NFSU2_TR(0x64012c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64012d:{NFSU2_TR(0x64012d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B64012f:{NFSU2_TR(0x64012f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640132:{NFSU2_TR(0x640132);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640133:{NFSU2_TR(0x640133);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640135:{NFSU2_TR(0x640135);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640138:{NFSU2_TR(0x640138);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64013b:{NFSU2_TR(0x64013b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B640141:{NFSU2_TR(0x640141);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640143:{NFSU2_TR(0x640143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640146:{NFSU2_TR(0x640146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640149:{NFSU2_TR(0x640149);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64014c:{NFSU2_TR(0x64014c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64014e:{NFSU2_TR(0x64014e);
u8 U[40];
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
}
B64014f:{NFSU2_TR(0x64014f);
u8 U[40];
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
}
B640150:{NFSU2_TR(0x640150);
u8 U[40];
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
}
B640151:{NFSU2_TR(0x640151);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640154:{NFSU2_TR(0x640154);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B640156:{NFSU2_TR(0x640156);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640159:{NFSU2_TR(0x640159);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64015c:{NFSU2_TR(0x64015c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64015e:{NFSU2_TR(0x64015e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640161:{NFSU2_TR(0x640161);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640164:{NFSU2_TR(0x640164);
u8 U[40];
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
}
B640165:{NFSU2_TR(0x640165);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640167:{NFSU2_TR(0x640167);
u8 U[40];
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
}
B640168:{NFSU2_TR(0x640168);
u8 U[40];
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
}
B640169:{NFSU2_TR(0x640169);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64016c:{NFSU2_TR(0x64016c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64016e:{NFSU2_TR(0x64016e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640171:{NFSU2_TR(0x640171);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640174:{NFSU2_TR(0x640174);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B640176:{NFSU2_TR(0x640176);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640179:{NFSU2_TR(0x640179);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64017c:{NFSU2_TR(0x64017c);
u8 U[40];
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
}
B64017d:{NFSU2_TR(0x64017d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640180:{NFSU2_TR(0x640180);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640182:{NFSU2_TR(0x640182);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640184:{NFSU2_TR(0x640184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B640187:{NFSU2_TR(0x640187);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64018a:{NFSU2_TR(0x64018a);
u8 U[40];
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
}
B64018b:{NFSU2_TR(0x64018b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64018d:{NFSU2_TR(0x64018d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640190:{NFSU2_TR(0x640190);
u8 U[40];
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
}
B640191:{NFSU2_TR(0x640191);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640193:{NFSU2_TR(0x640193);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640196:{NFSU2_TR(0x640196);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640198:{NFSU2_TR(0x640198);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64019b:{NFSU2_TR(0x64019b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64019e:{NFSU2_TR(0x64019e);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6401a1:{NFSU2_TR(0x6401a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6401a4:{NFSU2_TR(0x6401a4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6401a6:{NFSU2_TR(0x6401a6);
__builtin_memmove((R+24),(R+0),4);
}
B6401a8:{NFSU2_TR(0x6401a8);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6401ab:{NFSU2_TR(0x6401ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6401ae:{NFSU2_TR(0x6401ae);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6401b0:{NFSU2_TR(0x6401b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6401b3:{NFSU2_TR(0x6401b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6401b6:{NFSU2_TR(0x6401b6);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6401b9:{NFSU2_TR(0x6401b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6401bc:{NFSU2_TR(0x6401bc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6401be:{NFSU2_TR(0x6401be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6401c1:{NFSU2_TR(0x6401c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6401c4:{NFSU2_TR(0x6401c4);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6401c7:{NFSU2_TR(0x6401c7);
u8 U[40];
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
}
B6401c8:{NFSU2_TR(0x6401c8);
u8 U[40];
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
}
B6401c9:{NFSU2_TR(0x6401c9);
u8 U[40];
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
}
B6401ca:{NFSU2_TR(0x6401ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6401cd:{NFSU2_TR(0x6401cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6401d0:{NFSU2_TR(0x6401d0);
u8 U[40];
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
}
B6401d1:{NFSU2_TR(0x6401d1);
u8 U[40];
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
}
B6401d2:{NFSU2_TR(0x6401d2);
u8 U[40];
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
}
B6401d3:{NFSU2_TR(0x6401d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6401d6:{NFSU2_TR(0x6401d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6401d9:{NFSU2_TR(0x6401d9);
u8 U[40];
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
}
B6401da:{NFSU2_TR(0x6401da);
u8 U[40];
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
}
B6401db:{NFSU2_TR(0x6401db);
u8 U[40];
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
}
B6401dc:{NFSU2_TR(0x6401dc);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6401df:{NFSU2_TR(0x6401df);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6401e2:{NFSU2_TR(0x6401e2);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6401e5:{NFSU2_TR(0x6401e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6401e8:{NFSU2_TR(0x6401e8);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6401eb:{NFSU2_TR(0x6401eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6401ee:{NFSU2_TR(0x6401ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6401f0:{NFSU2_TR(0x6401f0);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6401f3:{NFSU2_TR(0x6401f3);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6401f6:{NFSU2_TR(0x6401f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6401f8:{NFSU2_TR(0x6401f8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6401fa:{NFSU2_TR(0x6401fa);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6401fc:{NFSU2_TR(0x6401fc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6401fe:{NFSU2_TR(0x6401fe);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640201:{NFSU2_TR(0x640201);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640204:{NFSU2_TR(0x640204);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640207:{NFSU2_TR(0x640207);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64020a:{NFSU2_TR(0x64020a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64020c:{NFSU2_TR(0x64020c);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64020f:{NFSU2_TR(0x64020f);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640212:{NFSU2_TR(0x640212);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640214:{NFSU2_TR(0x640214);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B640216:{NFSU2_TR(0x640216);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B640219:{NFSU2_TR(0x640219);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B64021c:{NFSU2_TR(0x64021c);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64021f:{NFSU2_TR(0x64021f);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640222:{NFSU2_TR(0x640222);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640225:{NFSU2_TR(0x640225);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640228:{NFSU2_TR(0x640228);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64022a:{NFSU2_TR(0x64022a);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64022d:{NFSU2_TR(0x64022d);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640230:{NFSU2_TR(0x640230);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640232:{NFSU2_TR(0x640232);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B640234:{NFSU2_TR(0x640234);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640237:{NFSU2_TR(0x640237);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640239:{NFSU2_TR(0x640239);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B64023b:{NFSU2_TR(0x64023b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64023e:{NFSU2_TR(0x64023e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640241:{NFSU2_TR(0x640241);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640243:{NFSU2_TR(0x640243);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B640246:{NFSU2_TR(0x640246);
if(r1(R+514)){{goto L640284;}}
}
B640248:L640248:{c.instructions+=4;NFSU2_TR(0x640248);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B64024b:{NFSU2_TR(0x64024b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64024d:{NFSU2_TR(0x64024d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B640250:{NFSU2_TR(0x640250);
if(r1(R+514)){{goto L64025d;}}
}
B640252:L640252:{c.instructions+=5;NFSU2_TR(0x640252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B640256:{NFSU2_TR(0x640256);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640258:{NFSU2_TR(0x640258);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64025a:{NFSU2_TR(0x64025a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64025b:{NFSU2_TR(0x64025b);
{goto L6402bf;}
}
B64025d:L64025d:{c.instructions+=6;NFSU2_TR(0x64025d);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640260:{NFSU2_TR(0x640260);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B640262:{NFSU2_TR(0x640262);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B640263:{NFSU2_TR(0x640263);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640265:{NFSU2_TR(0x640265);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B640268:{NFSU2_TR(0x640268);
if(r1(R+514)){{goto L640277;}}
}
B64026a:L64026a:{c.instructions+=3;NFSU2_TR(0x64026a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64026e:{NFSU2_TR(0x64026e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B640275:{NFSU2_TR(0x640275);
{goto L6402c6;}
}
B640277:L640277:{c.instructions+=3;NFSU2_TR(0x640277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64027b:{NFSU2_TR(0x64027b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B640282:{NFSU2_TR(0x640282);
{goto L6402c6;}
}
B640284:L640284:{c.instructions+=5;NFSU2_TR(0x640284);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640286:{NFSU2_TR(0x640286);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640289:{NFSU2_TR(0x640289);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64028b:{NFSU2_TR(0x64028b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64028e:{NFSU2_TR(0x64028e);
if(r1(R+514)){{goto L6402a0;}}
}
B640290:L640290:{c.instructions+=3;NFSU2_TR(0x640290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B640294:{NFSU2_TR(0x640294);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640296:{NFSU2_TR(0x640296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640297:L640297:{c.instructions+=2;NFSU2_TR(0x640297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64029e:{NFSU2_TR(0x64029e);
{goto L6402c6;}
}
B6402a0:L6402a0:{c.instructions+=6;NFSU2_TR(0x6402a0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6402a3:{NFSU2_TR(0x6402a3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6402a5:{NFSU2_TR(0x6402a5);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6402a8:{NFSU2_TR(0x6402a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6402aa:{NFSU2_TR(0x6402aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6402ad:{NFSU2_TR(0x6402ad);
if(r1(R+514)){{goto L6402b8;}}
}
B6402af:L6402af:{c.instructions+=2;NFSU2_TR(0x6402af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6402b6:{NFSU2_TR(0x6402b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640297u);}goto L640297;}
}
B6402b8:L6402b8:{c.instructions+=1;NFSU2_TR(0x6402b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6402bf:L6402bf:{c.instructions+=1;NFSU2_TR(0x6402bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6402c6:L6402c6:{c.instructions+=9;NFSU2_TR(0x6402c6);
__builtin_memmove((R+4),(R+24),4);
}
B6402c8:{NFSU2_TR(0x6402c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6402cb:{NFSU2_TR(0x6402cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6402ce:{NFSU2_TR(0x6402ce);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6402d0:{NFSU2_TR(0x6402d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6402d3:{NFSU2_TR(0x6402d3);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6402d9:{NFSU2_TR(0x6402d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6402db:{NFSU2_TR(0x6402db);
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
B6402de:{NFSU2_TR(0x6402de);
if(r1(R+514)){{goto L6402f1;}}
}
B6402e0:L6402e0:{c.instructions+=6;NFSU2_TR(0x6402e0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6402e4:{NFSU2_TR(0x6402e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6402e7:{NFSU2_TR(0x6402e7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6402ee:{NFSU2_TR(0x6402ee);
u8 U[40];
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
}
B6402ef:{NFSU2_TR(0x6402ef);
u8 U[40];
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
}
B6402f0:{NFSU2_TR(0x6402f0);
u8 U[40];
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
}
B6402f1:L6402f1:{c.instructions+=6;NFSU2_TR(0x6402f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6402f2:{NFSU2_TR(0x6402f2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6402f6:{NFSU2_TR(0x6402f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6402f8:{NFSU2_TR(0x6402f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6402f9:{NFSU2_TR(0x6402f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6402fa:{NFSU2_TR(0x6402fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6402ffull));
TAIL_STATIC(0x63c226u,63c);
}
B6402ff:L6402ff:{c.instructions+=8;NFSU2_TR(0x6402ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B640302:{NFSU2_TR(0x640302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640305:{NFSU2_TR(0x640305);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B640308:{NFSU2_TR(0x640308);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64030b:{NFSU2_TR(0x64030b);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640311:{NFSU2_TR(0x640311);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640313:{NFSU2_TR(0x640313);
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
B640316:{NFSU2_TR(0x640316);
if(r1(R+514)){{goto L6403bd;}}
}
B64031c:L64031c:{c.instructions+=14;NFSU2_TR(0x64031c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64031e:{NFSU2_TR(0x64031e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640320:{NFSU2_TR(0x640320);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B640322:{NFSU2_TR(0x640322);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640325:{NFSU2_TR(0x640325);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B640327:{NFSU2_TR(0x640327);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B64032a:{NFSU2_TR(0x64032a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64032d:{NFSU2_TR(0x64032d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B64032f:{NFSU2_TR(0x64032f);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640332:{NFSU2_TR(0x640332);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640334:{NFSU2_TR(0x640334);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B640336:{NFSU2_TR(0x640336);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640338:{NFSU2_TR(0x640338);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64033b:{NFSU2_TR(0x64033b);
if(r1(R+514)){{goto L640359;}}
}
B64033d:L64033d:{c.instructions+=4;NFSU2_TR(0x64033d);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640340:{NFSU2_TR(0x640340);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640342:{NFSU2_TR(0x640342);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B640345:{NFSU2_TR(0x640345);
if(r1(R+514)){{goto L64034b;}}
}
B640347:L640347:{c.instructions+=2;NFSU2_TR(0x640347);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640349:{NFSU2_TR(0x640349);
{goto L640355;}
}
B64034b:L64034b:{c.instructions+=4;NFSU2_TR(0x64034b);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B64034e:{NFSU2_TR(0x64034e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640350:{NFSU2_TR(0x640350);
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
B640353:{NFSU2_TR(0x640353);
if(r1(R+514)){{goto L640377;}}
}
B640355:L640355:{c.instructions+=2;NFSU2_TR(0x640355);
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
B640357:{NFSU2_TR(0x640357);
{goto L64037a;}
}
B640359:L640359:{c.instructions+=5;NFSU2_TR(0x640359);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64035b:{NFSU2_TR(0x64035b);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B64035e:{NFSU2_TR(0x64035e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640360:{NFSU2_TR(0x640360);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B640363:{NFSU2_TR(0x640363);
if(r1(R+514)){{goto L64036a;}}
}
B640365:L640365:{c.instructions+=3;NFSU2_TR(0x640365);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B640367:{NFSU2_TR(0x640367);
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
B640368:{NFSU2_TR(0x640368);
{goto L64037a;}
}
B64036a:L64036a:{c.instructions+=5;NFSU2_TR(0x64036a);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64036d:{NFSU2_TR(0x64036d);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640370:{NFSU2_TR(0x640370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640372:{NFSU2_TR(0x640372);
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
B640375:{NFSU2_TR(0x640375);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640365u);}goto L640365;}}
}
B640377:L640377:{c.instructions+=2;NFSU2_TR(0x640377);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640379:{NFSU2_TR(0x640379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64037a:L64037a:{c.instructions+=25;NFSU2_TR(0x64037a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B64037d:{NFSU2_TR(0x64037d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B640384:{NFSU2_TR(0x640384);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640387:{NFSU2_TR(0x640387);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B64038b:{NFSU2_TR(0x64038b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64038e:{NFSU2_TR(0x64038e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640391:{NFSU2_TR(0x640391);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640394:{NFSU2_TR(0x640394);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640397:{NFSU2_TR(0x640397);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B640399:{NFSU2_TR(0x640399);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64039c:{NFSU2_TR(0x64039c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64039f:{NFSU2_TR(0x64039f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403a1:{NFSU2_TR(0x6403a1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403a3:{NFSU2_TR(0x6403a3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403a6:{NFSU2_TR(0x6403a6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6403a8:{NFSU2_TR(0x6403a8);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6403ab:{NFSU2_TR(0x6403ab);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403ad:{NFSU2_TR(0x6403ad);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403b0:{NFSU2_TR(0x6403b0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403b2:{NFSU2_TR(0x6403b2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403b5:{NFSU2_TR(0x6403b5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6403b7:{NFSU2_TR(0x6403b7);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6403ba:{NFSU2_TR(0x6403ba);
u8 U[40];
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
}
B6403bb:{NFSU2_TR(0x6403bb);
u8 U[40];
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
}
B6403bc:{NFSU2_TR(0x6403bc);
u8 U[40];
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
}
B6403bd:L6403bd:{c.instructions+=5;NFSU2_TR(0x6403bd);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6403c1:{NFSU2_TR(0x6403c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6403c3:{NFSU2_TR(0x6403c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6403c4:{NFSU2_TR(0x6403c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6403c5:{NFSU2_TR(0x6403c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6403caull));
TAIL_STATIC(0x63c226u,63c);
}
B6403ca:L6403ca:{c.instructions+=8;NFSU2_TR(0x6403ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6403cd:{NFSU2_TR(0x6403cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6403d0:{NFSU2_TR(0x6403d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6403d3:{NFSU2_TR(0x6403d3);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403d6:{NFSU2_TR(0x6403d6);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6403dc:{NFSU2_TR(0x6403dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6403de:{NFSU2_TR(0x6403de);
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
B6403e1:{NFSU2_TR(0x6403e1);
if(r1(R+514)){{goto L640420;}}
}
B6403e3:L6403e3:{c.instructions+=25;NFSU2_TR(0x6403e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6403e5:{NFSU2_TR(0x6403e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6403e7:{NFSU2_TR(0x6403e7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403ea:{NFSU2_TR(0x6403ea);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403ed:{NFSU2_TR(0x6403ed);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6403f1:{NFSU2_TR(0x6403f1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6403f4:{NFSU2_TR(0x6403f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6403f7:{NFSU2_TR(0x6403f7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6403fa:{NFSU2_TR(0x6403fa);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6403fc:{NFSU2_TR(0x6403fc);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6403ff:{NFSU2_TR(0x6403ff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640401:{NFSU2_TR(0x640401);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640404:{NFSU2_TR(0x640404);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640407:{NFSU2_TR(0x640407);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640409:{NFSU2_TR(0x640409);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B64040b:{NFSU2_TR(0x64040b);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64040e:{NFSU2_TR(0x64040e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640411:{NFSU2_TR(0x640411);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640413:{NFSU2_TR(0x640413);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640415:{NFSU2_TR(0x640415);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640418:{NFSU2_TR(0x640418);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B64041a:{NFSU2_TR(0x64041a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64041d:{NFSU2_TR(0x64041d);
u8 U[40];
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
}
B64041e:{NFSU2_TR(0x64041e);
u8 U[40];
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
}
B64041f:{NFSU2_TR(0x64041f);
u8 U[40];
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
}
B640420:L640420:{c.instructions+=4;NFSU2_TR(0x640420);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B640424:{NFSU2_TR(0x640424);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640425:{NFSU2_TR(0x640425);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640426:{NFSU2_TR(0x640426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64042bull));
TAIL_STATIC(0x63c226u,63c);
}
B64042b:L64042b:{c.instructions+=3;NFSU2_TR(0x64042b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64042e:{NFSU2_TR(0x64042e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64042f:{NFSU2_TR(0x64042f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640434ull));
TAIL_STATIC(0x63cde3u,63c);
}
B640434:L640434:{c.instructions+=4;NFSU2_TR(0x640434);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B64043a:{NFSU2_TR(0x64043a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B64043c:{NFSU2_TR(0x64043c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64043f:{NFSU2_TR(0x64043f);
if(r1(R+514)){{goto L640471;}}
}
B640441:L640441:{c.instructions+=22;NFSU2_TR(0x640441);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640444:{NFSU2_TR(0x640444);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640446:{NFSU2_TR(0x640446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B640448:{NFSU2_TR(0x640448);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B64044a:{NFSU2_TR(0x64044a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64044d:{NFSU2_TR(0x64044d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64044f:{NFSU2_TR(0x64044f);
__builtin_memmove((R+28),(R+12),4);
}
B640451:{NFSU2_TR(0x640451);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640453:{NFSU2_TR(0x640453);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640455:{NFSU2_TR(0x640455);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640458:{NFSU2_TR(0x640458);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64045b:{NFSU2_TR(0x64045b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B64045d:{NFSU2_TR(0x64045d);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640460:{NFSU2_TR(0x640460);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640463:{NFSU2_TR(0x640463);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640465:{NFSU2_TR(0x640465);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640468:{NFSU2_TR(0x640468);
u8 U[40];
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
}
B640469:{NFSU2_TR(0x640469);
u8 U[40];
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
}
B64046a:{NFSU2_TR(0x64046a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B64046c:{NFSU2_TR(0x64046c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B64046e:{NFSU2_TR(0x64046e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B640470:{NFSU2_TR(0x640470);
u8 U[40];
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
}
B640471:L640471:{c.instructions+=10;NFSU2_TR(0x640471);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B640477:{NFSU2_TR(0x640477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B640478:{NFSU2_TR(0x640478);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B64047a:{NFSU2_TR(0x64047a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B64047c:{NFSU2_TR(0x64047c);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640482:{NFSU2_TR(0x640482);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B640484:{NFSU2_TR(0x640484);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640486:{NFSU2_TR(0x640486);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640488:{NFSU2_TR(0x640488);
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
B64048b:{NFSU2_TR(0x64048b);
if(r1(R+514)){{goto L640494;}}
}
B64048d:L64048d:{c.instructions+=2;NFSU2_TR(0x64048d);
w4(R+0,u32(0x8876086cull));
}
B640492:{NFSU2_TR(0x640492);
{goto L6404ab;}
}
B640494:L640494:{c.instructions+=5;NFSU2_TR(0x640494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640497:{NFSU2_TR(0x640497);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64049a:{NFSU2_TR(0x64049a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64049b:{NFSU2_TR(0x64049b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64049c:{NFSU2_TR(0x64049c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6404a1ull));
TAIL_STATIC(0x63e698u,63e);
}
B6404a1:L6404a1:{c.instructions+=4;NFSU2_TR(0x6404a1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6404a4:{NFSU2_TR(0x6404a4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6404a6:{NFSU2_TR(0x6404a6);
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
B6404a8:{NFSU2_TR(0x6404a8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6404ab:L6404ab:{c.instructions+=4;NFSU2_TR(0x6404ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6404ac:{NFSU2_TR(0x6404ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6404ad:{NFSU2_TR(0x6404ad);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6404ae:{NFSU2_TR(0x6404ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6404b1:L6404b1:{c.instructions+=14;NFSU2_TR(0x6404b1);
__builtin_memmove((R+28),(R+28),4);
}
B6404b3:{NFSU2_TR(0x6404b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404b4:{NFSU2_TR(0x6404b4);
__builtin_memmove((R+20),(R+16),4);
}
B6404b6:{NFSU2_TR(0x6404b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6404b9:{NFSU2_TR(0x6404b9);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6404bc:{NFSU2_TR(0x6404bc);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6404bf:{NFSU2_TR(0x6404bf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6404c3:{NFSU2_TR(0x6404c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6404c6:{NFSU2_TR(0x6404c6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6404c9:{NFSU2_TR(0x6404c9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6404cd:{NFSU2_TR(0x6404cd);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6404d0:{NFSU2_TR(0x6404d0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6404d3:{NFSU2_TR(0x6404d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404d4:{NFSU2_TR(0x6404d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6404d9ull));
TAIL_STATIC(0x63e885u,63e);
}
B6404d9:L6404d9:{c.instructions+=4;NFSU2_TR(0x6404d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6404dc:{NFSU2_TR(0x6404dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404dd:{NFSU2_TR(0x6404dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6404e0:{NFSU2_TR(0x6404e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6404e5ull));
TAIL_STATIC(0x63dbdeu,63d);
}
B6404e5:L6404e5:{c.instructions+=3;NFSU2_TR(0x6404e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6404e8:{NFSU2_TR(0x6404e8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6404e9:{NFSU2_TR(0x6404e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6404ec:L6404ec:{c.instructions+=10;NFSU2_TR(0x6404ec);
__builtin_memmove((R+28),(R+28),4);
}
B6404ee:{NFSU2_TR(0x6404ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404ef:{NFSU2_TR(0x6404ef);
__builtin_memmove((R+20),(R+16),4);
}
B6404f1:{NFSU2_TR(0x6404f1);
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
B6404f4:{NFSU2_TR(0x6404f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404f5:{NFSU2_TR(0x6404f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404f6:{NFSU2_TR(0x6404f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6404f9:{NFSU2_TR(0x6404f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6404fc:{NFSU2_TR(0x6404fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6404fd:{NFSU2_TR(0x6404fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640502ull));
TAIL_STATIC(0x63eeb6u,63e);
}
B640502:L640502:{c.instructions+=88;NFSU2_TR(0x640502);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640505:{NFSU2_TR(0x640505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640508:{NFSU2_TR(0x640508);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64050b:{NFSU2_TR(0x64050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64050e:{NFSU2_TR(0x64050e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640511:{NFSU2_TR(0x640511);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640514:{NFSU2_TR(0x640514);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640516:{NFSU2_TR(0x640516);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640519:{NFSU2_TR(0x640519);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64051b:{NFSU2_TR(0x64051b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64051e:{NFSU2_TR(0x64051e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640521:{NFSU2_TR(0x640521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640523:{NFSU2_TR(0x640523);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640526:{NFSU2_TR(0x640526);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640529:{NFSU2_TR(0x640529);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64052b:{NFSU2_TR(0x64052b);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64052e:{NFSU2_TR(0x64052e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640530:{NFSU2_TR(0x640530);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640533:{NFSU2_TR(0x640533);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640536:{NFSU2_TR(0x640536);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640538:{NFSU2_TR(0x640538);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64053b:{NFSU2_TR(0x64053b);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64053e:{NFSU2_TR(0x64053e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640540:{NFSU2_TR(0x640540);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640543:{NFSU2_TR(0x640543);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640546:{NFSU2_TR(0x640546);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640548:{NFSU2_TR(0x640548);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64054b:{NFSU2_TR(0x64054b);
u8 U[40];
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
}
B64054c:{NFSU2_TR(0x64054c);
u8 U[40];
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
}
B64054d:{NFSU2_TR(0x64054d);
u8 U[40];
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
}
B64054e:{NFSU2_TR(0x64054e);
u8 U[40];
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
}
B64054f:{NFSU2_TR(0x64054f);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640552:{NFSU2_TR(0x640552);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640554:{NFSU2_TR(0x640554);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B640556:{NFSU2_TR(0x640556);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640558:{NFSU2_TR(0x640558);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64055b:{NFSU2_TR(0x64055b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64055d:{NFSU2_TR(0x64055d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640560:{NFSU2_TR(0x640560);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640563:{NFSU2_TR(0x640563);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640565:{NFSU2_TR(0x640565);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640568:{NFSU2_TR(0x640568);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64056b:{NFSU2_TR(0x64056b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64056d:{NFSU2_TR(0x64056d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640570:{NFSU2_TR(0x640570);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640573:{NFSU2_TR(0x640573);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640576:{NFSU2_TR(0x640576);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640579:{NFSU2_TR(0x640579);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64057c:{NFSU2_TR(0x64057c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64057f:{NFSU2_TR(0x64057f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B640581:{NFSU2_TR(0x640581);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640584:{NFSU2_TR(0x640584);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640587:{NFSU2_TR(0x640587);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64058a:{NFSU2_TR(0x64058a);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64058d:{NFSU2_TR(0x64058d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640590:{NFSU2_TR(0x640590);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640593:{NFSU2_TR(0x640593);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640596:{NFSU2_TR(0x640596);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640599:{NFSU2_TR(0x640599);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64059c:{NFSU2_TR(0x64059c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64059f:{NFSU2_TR(0x64059f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405a2:{NFSU2_TR(0x6405a2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405a5:{NFSU2_TR(0x6405a5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405a8:{NFSU2_TR(0x6405a8);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405ab:{NFSU2_TR(0x6405ab);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405ae:{NFSU2_TR(0x6405ae);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6405b0:{NFSU2_TR(0x6405b0);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405b3:{NFSU2_TR(0x6405b3);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405b6:{NFSU2_TR(0x6405b6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405b9:{NFSU2_TR(0x6405b9);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405bc:{NFSU2_TR(0x6405bc);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405bf:{NFSU2_TR(0x6405bf);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405c2:{NFSU2_TR(0x6405c2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405c5:{NFSU2_TR(0x6405c5);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405c8:{NFSU2_TR(0x6405c8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405cb:{NFSU2_TR(0x6405cb);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405ce:{NFSU2_TR(0x6405ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6405cf:{NFSU2_TR(0x6405cf);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405d2:{NFSU2_TR(0x6405d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6405d3:{NFSU2_TR(0x6405d3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405d6:{NFSU2_TR(0x6405d6);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405d9:{NFSU2_TR(0x6405d9);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6405dc:{NFSU2_TR(0x6405dc);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6405df:{NFSU2_TR(0x6405df);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6405e1:{NFSU2_TR(0x6405e1);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6405e4:{NFSU2_TR(0x6405e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6405e6:{NFSU2_TR(0x6405e6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6405e7:{NFSU2_TR(0x6405e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6405ea:L6405ea:{c.instructions+=8;NFSU2_TR(0x6405ea);
__builtin_memmove((R+28),(R+28),4);
}
B6405ec:{NFSU2_TR(0x6405ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6405ed:{NFSU2_TR(0x6405ed);
__builtin_memmove((R+20),(R+16),4);
}
B6405ef:{NFSU2_TR(0x6405ef);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6405f2:{NFSU2_TR(0x6405f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6405f5:{NFSU2_TR(0x6405f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6405f8:{NFSU2_TR(0x6405f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6405f9:{NFSU2_TR(0x6405f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6405feull));
TAIL_STATIC(0x63eeb6u,63e);
}
B6405fe:L6405fe:{c.instructions+=62;NFSU2_TR(0x6405fe);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640601:{NFSU2_TR(0x640601);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640607:{NFSU2_TR(0x640607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64060a:{NFSU2_TR(0x64060a);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64060d:{NFSU2_TR(0x64060d);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640613:{NFSU2_TR(0x640613);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640616:{NFSU2_TR(0x640616);
{u32 ea_=u32(u32(7886288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64061c:{NFSU2_TR(0x64061c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B64061f:{NFSU2_TR(0x64061f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640625:{NFSU2_TR(0x640625);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640628:{NFSU2_TR(0x640628);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B64062a:{NFSU2_TR(0x64062a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B64062c:{NFSU2_TR(0x64062c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64062e:{NFSU2_TR(0x64062e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640630:{NFSU2_TR(0x640630);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640633:{NFSU2_TR(0x640633);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640636:{NFSU2_TR(0x640636);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640638:{NFSU2_TR(0x640638);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64063b:{NFSU2_TR(0x64063b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64063e:{NFSU2_TR(0x64063e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640640:{NFSU2_TR(0x640640);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640643:{NFSU2_TR(0x640643);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640646:{NFSU2_TR(0x640646);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B640648:{NFSU2_TR(0x640648);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64064b:{NFSU2_TR(0x64064b);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64064e:{NFSU2_TR(0x64064e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B640650:{NFSU2_TR(0x640650);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B640652:{NFSU2_TR(0x640652);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640655:{NFSU2_TR(0x640655);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640657:{NFSU2_TR(0x640657);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64065a:{NFSU2_TR(0x64065a);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64065d:{NFSU2_TR(0x64065d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B64065f:{NFSU2_TR(0x64065f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640662:{NFSU2_TR(0x640662);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640665:{NFSU2_TR(0x640665);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B640667:{NFSU2_TR(0x640667);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64066a:{NFSU2_TR(0x64066a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64066d:{NFSU2_TR(0x64066d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B64066f:{NFSU2_TR(0x64066f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640672:{NFSU2_TR(0x640672);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640675:{NFSU2_TR(0x640675);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B640677:{NFSU2_TR(0x640677);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B640679:{NFSU2_TR(0x640679);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64067c:{NFSU2_TR(0x64067c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64067e:{NFSU2_TR(0x64067e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640680:{NFSU2_TR(0x640680);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640682:{NFSU2_TR(0x640682);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640685:{NFSU2_TR(0x640685);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640688:{NFSU2_TR(0x640688);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B64068a:{NFSU2_TR(0x64068a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64068d:{NFSU2_TR(0x64068d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640690:{NFSU2_TR(0x640690);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640692:{NFSU2_TR(0x640692);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640695:{NFSU2_TR(0x640695);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640697:{NFSU2_TR(0x640697);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640699:{NFSU2_TR(0x640699);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64069c:{NFSU2_TR(0x64069c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64069f:{NFSU2_TR(0x64069f);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6406a2:{NFSU2_TR(0x6406a2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6406a4:{NFSU2_TR(0x6406a4);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6406a7:{NFSU2_TR(0x6406a7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6406a8:{NFSU2_TR(0x6406a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6406ab:L6406ab:{c.instructions+=80;NFSU2_TR(0x6406ab);
__builtin_memmove((R+28),(R+28),4);
}
B6406ad:{NFSU2_TR(0x6406ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6406ae:{NFSU2_TR(0x6406ae);
__builtin_memmove((R+20),(R+16),4);
}
B6406b0:{NFSU2_TR(0x6406b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B6406b6:{NFSU2_TR(0x6406b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6406b7:{NFSU2_TR(0x6406b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6406ba:{NFSU2_TR(0x6406ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6406bb:{NFSU2_TR(0x6406bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6406be:{NFSU2_TR(0x6406be);
u8 U[40];
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
}
B6406bf:{NFSU2_TR(0x6406bf);
u8 U[40];
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
}
B6406c0:{NFSU2_TR(0x6406c0);
u8 U[40];
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
}
B6406c1:{NFSU2_TR(0x6406c1);
u8 U[40];
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
}
B6406c2:{NFSU2_TR(0x6406c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6406c5:{NFSU2_TR(0x6406c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6406c8:{NFSU2_TR(0x6406c8);
u8 U[40];
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
}
B6406c9:{NFSU2_TR(0x6406c9);
u8 U[40];
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
}
B6406ca:{NFSU2_TR(0x6406ca);
u8 U[40];
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
}
B6406cb:{NFSU2_TR(0x6406cb);
u8 U[40];
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
}
B6406cc:{NFSU2_TR(0x6406cc);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406cf:{NFSU2_TR(0x6406cf);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6406d2:{NFSU2_TR(0x6406d2);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406d5:{NFSU2_TR(0x6406d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6406d8:{NFSU2_TR(0x6406d8);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6406db:{NFSU2_TR(0x6406db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6406de:{NFSU2_TR(0x6406de);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406e1:{NFSU2_TR(0x6406e1);
u8 U[40];
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
}
B6406e2:{NFSU2_TR(0x6406e2);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6406e5:{NFSU2_TR(0x6406e5);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406e8:{NFSU2_TR(0x6406e8);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6406eb:{NFSU2_TR(0x6406eb);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406ee:{NFSU2_TR(0x6406ee);
u8 U[40];
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
}
B6406ef:{NFSU2_TR(0x6406ef);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6406f2:{NFSU2_TR(0x6406f2);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406f5:{NFSU2_TR(0x6406f5);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6406f8:{NFSU2_TR(0x6406f8);
u8 U[40];
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
}
B6406f9:{NFSU2_TR(0x6406f9);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6406fc:{NFSU2_TR(0x6406fc);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6406ff:{NFSU2_TR(0x6406ff);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B640702:{NFSU2_TR(0x640702);
u8 U[40];
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
}
B640703:{NFSU2_TR(0x640703);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640706:{NFSU2_TR(0x640706);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640709:{NFSU2_TR(0x640709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64070c:{NFSU2_TR(0x64070c);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B64070f:{NFSU2_TR(0x64070f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640712:{NFSU2_TR(0x640712);
u8 U[40];
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
}
B640713:{NFSU2_TR(0x640713);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640716:{NFSU2_TR(0x640716);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640718:{NFSU2_TR(0x640718);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B64071a:{NFSU2_TR(0x64071a);
u8 U[40];
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
}
B64071b:{NFSU2_TR(0x64071b);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B64071d:{NFSU2_TR(0x64071d);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B64071f:{NFSU2_TR(0x64071f);
u8 U[40];
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
}
B640720:{NFSU2_TR(0x640720);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640722:{NFSU2_TR(0x640722);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B640724:{NFSU2_TR(0x640724);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B640726:{NFSU2_TR(0x640726);
u8 U[40];
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
}
B640727:{NFSU2_TR(0x640727);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640729:{NFSU2_TR(0x640729);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B64072b:{NFSU2_TR(0x64072b);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B64072d:{NFSU2_TR(0x64072d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64072f:{NFSU2_TR(0x64072f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640732:{NFSU2_TR(0x640732);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640735:{NFSU2_TR(0x640735);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640738:{NFSU2_TR(0x640738);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64073b:{NFSU2_TR(0x64073b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64073d:{NFSU2_TR(0x64073d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640740:{NFSU2_TR(0x640740);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640743:{NFSU2_TR(0x640743);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640745:{NFSU2_TR(0x640745);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640747:{NFSU2_TR(0x640747);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B640749:{NFSU2_TR(0x640749);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64074b:{NFSU2_TR(0x64074b);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B64074d:{NFSU2_TR(0x64074d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64074f:{NFSU2_TR(0x64074f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640751:{NFSU2_TR(0x640751);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640753:{NFSU2_TR(0x640753);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640755:{NFSU2_TR(0x640755);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640757:{NFSU2_TR(0x640757);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64075a:{NFSU2_TR(0x64075a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64075c:{NFSU2_TR(0x64075c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640788;}}
}
B64075e:L64075e:{c.instructions+=18;NFSU2_TR(0x64075e);
{u32 ea_=u32(r4(R+20)+u32(4294967168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640761:{NFSU2_TR(0x640761);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640764:{NFSU2_TR(0x640764);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640766:{NFSU2_TR(0x640766);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640769:{NFSU2_TR(0x640769);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64076c:{NFSU2_TR(0x64076c);
{u32 ea_=u32(r4(R+20)+u32(4294967172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64076f:{NFSU2_TR(0x64076f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640771:{NFSU2_TR(0x640771);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640774:{NFSU2_TR(0x640774);
{u32 ea_=u32(r4(R+20)+u32(4294967176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640777:{NFSU2_TR(0x640777);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640779:{NFSU2_TR(0x640779);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64077c:{NFSU2_TR(0x64077c);
{u32 ea_=u32(r4(R+20)+u32(4294967180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64077f:{NFSU2_TR(0x64077f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640781:{NFSU2_TR(0x640781);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640784:{NFSU2_TR(0x640784);
u8 U[40];
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
}
B640785:{NFSU2_TR(0x640785);
u8 U[40];
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
}
B640786:{NFSU2_TR(0x640786);
u8 U[40];
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
}
B640787:{NFSU2_TR(0x640787);
u8 U[40];
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
}
B640788:L640788:{c.instructions+=50;NFSU2_TR(0x640788);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64078b:{NFSU2_TR(0x64078b);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64078e:{NFSU2_TR(0x64078e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640791:{NFSU2_TR(0x640791);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640794:{NFSU2_TR(0x640794);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640797:{NFSU2_TR(0x640797);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64079a:{NFSU2_TR(0x64079a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64079d:{NFSU2_TR(0x64079d);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6407a0:{NFSU2_TR(0x6407a0);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407a3:{NFSU2_TR(0x6407a3);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6407a6:{NFSU2_TR(0x6407a6);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407a9:{NFSU2_TR(0x6407a9);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6407ac:{NFSU2_TR(0x6407ac);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6407af:{NFSU2_TR(0x6407af);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407b2:{NFSU2_TR(0x6407b2);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6407b5:{NFSU2_TR(0x6407b5);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6407b8:{NFSU2_TR(0x6407b8);
{u32 ea_=u32(r4(R+20)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407bb:{NFSU2_TR(0x6407bb);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6407be:{NFSU2_TR(0x6407be);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6407c1:{NFSU2_TR(0x6407c1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6407c3:{NFSU2_TR(0x6407c3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6407c5:{NFSU2_TR(0x6407c5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6407c7:{NFSU2_TR(0x6407c7);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6407c9:{NFSU2_TR(0x6407c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407cb:{NFSU2_TR(0x6407cb);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B6407cd:{NFSU2_TR(0x6407cd);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B6407cf:{NFSU2_TR(0x6407cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407d1:{NFSU2_TR(0x6407d1);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B6407d3:{NFSU2_TR(0x6407d3);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B6407d5:{NFSU2_TR(0x6407d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407d7:{NFSU2_TR(0x6407d7);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407da:{NFSU2_TR(0x6407da);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6407dd:{NFSU2_TR(0x6407dd);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407e0:{NFSU2_TR(0x6407e0);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6407e3:{NFSU2_TR(0x6407e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407e5:{NFSU2_TR(0x6407e5);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6407e8:{NFSU2_TR(0x6407e8);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6407eb:{NFSU2_TR(0x6407eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407ed:{NFSU2_TR(0x6407ed);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6407ef:{NFSU2_TR(0x6407ef);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6407f1:{NFSU2_TR(0x6407f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6407f3:{NFSU2_TR(0x6407f3);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B6407f5:{NFSU2_TR(0x6407f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6407f7:{NFSU2_TR(0x6407f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6407f9:{NFSU2_TR(0x6407f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6407fb:{NFSU2_TR(0x6407fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6407fd:{NFSU2_TR(0x6407fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6407ff:{NFSU2_TR(0x6407ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B640802:{NFSU2_TR(0x640802);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640804:{NFSU2_TR(0x640804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640830;}}
}
B640806:L640806:{c.instructions+=18;NFSU2_TR(0x640806);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640809:{NFSU2_TR(0x640809);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64080c:{NFSU2_TR(0x64080c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B64080e:{NFSU2_TR(0x64080e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640811:{NFSU2_TR(0x640811);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640814:{NFSU2_TR(0x640814);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640817:{NFSU2_TR(0x640817);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640819:{NFSU2_TR(0x640819);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64081c:{NFSU2_TR(0x64081c);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64081f:{NFSU2_TR(0x64081f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640821:{NFSU2_TR(0x640821);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640824:{NFSU2_TR(0x640824);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640827:{NFSU2_TR(0x640827);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B640829:{NFSU2_TR(0x640829);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64082c:{NFSU2_TR(0x64082c);
u8 U[40];
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
}
B64082d:{NFSU2_TR(0x64082d);
u8 U[40];
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
}
B64082e:{NFSU2_TR(0x64082e);
u8 U[40];
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
}
B64082f:{NFSU2_TR(0x64082f);
u8 U[40];
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
}
B640830:L640830:{c.instructions+=50;NFSU2_TR(0x640830);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640833:{NFSU2_TR(0x640833);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640836:{NFSU2_TR(0x640836);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640839:{NFSU2_TR(0x640839);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64083c:{NFSU2_TR(0x64083c);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64083f:{NFSU2_TR(0x64083f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640842:{NFSU2_TR(0x640842);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640845:{NFSU2_TR(0x640845);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640848:{NFSU2_TR(0x640848);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64084b:{NFSU2_TR(0x64084b);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B64084e:{NFSU2_TR(0x64084e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640851:{NFSU2_TR(0x640851);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B640854:{NFSU2_TR(0x640854);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640857:{NFSU2_TR(0x640857);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64085a:{NFSU2_TR(0x64085a);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B64085d:{NFSU2_TR(0x64085d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640860:{NFSU2_TR(0x640860);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640863:{NFSU2_TR(0x640863);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B640866:{NFSU2_TR(0x640866);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640869:{NFSU2_TR(0x640869);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B64086b:{NFSU2_TR(0x64086b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B64086d:{NFSU2_TR(0x64086d);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B64086f:{NFSU2_TR(0x64086f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B640871:{NFSU2_TR(0x640871);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640873:{NFSU2_TR(0x640873);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B640875:{NFSU2_TR(0x640875);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B640877:{NFSU2_TR(0x640877);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640879:{NFSU2_TR(0x640879);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B64087b:{NFSU2_TR(0x64087b);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B64087d:{NFSU2_TR(0x64087d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64087f:{NFSU2_TR(0x64087f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640882:{NFSU2_TR(0x640882);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640885:{NFSU2_TR(0x640885);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640888:{NFSU2_TR(0x640888);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B64088b:{NFSU2_TR(0x64088b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64088d:{NFSU2_TR(0x64088d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640890:{NFSU2_TR(0x640890);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B640893:{NFSU2_TR(0x640893);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B640895:{NFSU2_TR(0x640895);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640897:{NFSU2_TR(0x640897);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B640899:{NFSU2_TR(0x640899);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B64089b:{NFSU2_TR(0x64089b);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B64089d:{NFSU2_TR(0x64089d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64089f:{NFSU2_TR(0x64089f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6408a1:{NFSU2_TR(0x6408a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6408a3:{NFSU2_TR(0x6408a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6408a5:{NFSU2_TR(0x6408a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6408a7:{NFSU2_TR(0x6408a7);
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
B6408aa:{NFSU2_TR(0x6408aa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6408ac:{NFSU2_TR(0x6408ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6408d8;}}
}
B6408ae:L6408ae:{c.instructions+=18;NFSU2_TR(0x6408ae);
{u32 ea_=u32(r4(R+20)+u32(4294967184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6408b1:{NFSU2_TR(0x6408b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6408b4:{NFSU2_TR(0x6408b4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6408b6:{NFSU2_TR(0x6408b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6408b9:{NFSU2_TR(0x6408b9);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6408bc:{NFSU2_TR(0x6408bc);
{u32 ea_=u32(r4(R+20)+u32(4294967188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6408bf:{NFSU2_TR(0x6408bf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6408c1:{NFSU2_TR(0x6408c1);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6408c4:{NFSU2_TR(0x6408c4);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6408c7:{NFSU2_TR(0x6408c7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6408c9:{NFSU2_TR(0x6408c9);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6408cc:{NFSU2_TR(0x6408cc);
{u32 ea_=u32(r4(R+20)+u32(4294967196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6408cf:{NFSU2_TR(0x6408cf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6408d1:{NFSU2_TR(0x6408d1);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6408d4:{NFSU2_TR(0x6408d4);
u8 U[40];
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
}
B6408d5:{NFSU2_TR(0x6408d5);
u8 U[40];
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
}
B6408d6:{NFSU2_TR(0x6408d6);
u8 U[40];
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
}
B6408d7:{NFSU2_TR(0x6408d7);
u8 U[40];
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
}
B6408d8:L6408d8:{c.instructions+=5;NFSU2_TR(0x6408d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6408db:{NFSU2_TR(0x6408db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6408dc:{NFSU2_TR(0x6408dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6408df:{NFSU2_TR(0x6408df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6408e0:{NFSU2_TR(0x6408e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6408e5ull));
TAIL_STATIC(0x63ea3du,63e);
}
B6408e5:L6408e5:{c.instructions+=7;NFSU2_TR(0x6408e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6408e8:{NFSU2_TR(0x6408e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6408e9:{NFSU2_TR(0x6408e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6408ec:{NFSU2_TR(0x6408ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6408ed:{NFSU2_TR(0x6408ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6408f0:{NFSU2_TR(0x6408f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6408f1:{NFSU2_TR(0x6408f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6408f6ull));
TAIL_STATIC(0x63e979u,63e);
}
B6408f6:L6408f6:{c.instructions+=11;NFSU2_TR(0x6408f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6408f9:{NFSU2_TR(0x6408f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6408fc:{NFSU2_TR(0x6408fc);
u8 U[40];
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
}
B6408fd:{NFSU2_TR(0x6408fd);
u8 U[40];
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
}
B6408fe:{NFSU2_TR(0x6408fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640901:{NFSU2_TR(0x640901);
u8 U[40];
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
}
B640902:{NFSU2_TR(0x640902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640903:{NFSU2_TR(0x640903);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640909:{NFSU2_TR(0x640909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64090a:{NFSU2_TR(0x64090a);
u8 U[40];
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
}
B64090b:{NFSU2_TR(0x64090b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640910ull));
TAIL_STATIC(0x63eb09u,63e);
}
B640910:L640910:{c.instructions+=7;NFSU2_TR(0x640910);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640913:{NFSU2_TR(0x640913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640914:{NFSU2_TR(0x640914);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640917:{NFSU2_TR(0x640917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640918:{NFSU2_TR(0x640918);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64091b:{NFSU2_TR(0x64091b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64091c:{NFSU2_TR(0x64091c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640921ull));
TAIL_STATIC(0x63e979u,63e);
}
B640921:L640921:{c.instructions+=11;NFSU2_TR(0x640921);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640924:{NFSU2_TR(0x640924);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640927:{NFSU2_TR(0x640927);
u8 U[40];
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
}
B640928:{NFSU2_TR(0x640928);
u8 U[40];
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
}
B640929:{NFSU2_TR(0x640929);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64092c:{NFSU2_TR(0x64092c);
u8 U[40];
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
}
B64092d:{NFSU2_TR(0x64092d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64092e:{NFSU2_TR(0x64092e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640931:{NFSU2_TR(0x640931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640932:{NFSU2_TR(0x640932);
u8 U[40];
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
}
B640933:{NFSU2_TR(0x640933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640938ull));
TAIL_STATIC(0x63eb09u,63e);
}
B640938:L640938:{c.instructions+=31;NFSU2_TR(0x640938);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64093b:{NFSU2_TR(0x64093b);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640941:{NFSU2_TR(0x640941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640942:{NFSU2_TR(0x640942);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640945:{NFSU2_TR(0x640945);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64094b:{NFSU2_TR(0x64094b);
{u32 ea_=u32(r4(R+20)+u32(4294967156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640951:{NFSU2_TR(0x640951);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640952:{NFSU2_TR(0x640952);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640955:{NFSU2_TR(0x640955);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640958:{NFSU2_TR(0x640958);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64095e:{NFSU2_TR(0x64095e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640961:{NFSU2_TR(0x640961);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640964:{NFSU2_TR(0x640964);
{u32 ea_=u32(r4(R+20)+u32(4294967164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64096a:{NFSU2_TR(0x64096a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B64096d:{NFSU2_TR(0x64096d);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640973:{NFSU2_TR(0x640973);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640975:{NFSU2_TR(0x640975);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640977:{NFSU2_TR(0x640977);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64097a:{NFSU2_TR(0x64097a);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64097d:{NFSU2_TR(0x64097d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B64097f:{NFSU2_TR(0x64097f);
{u32 ea_=u32(r4(R+20)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640982:{NFSU2_TR(0x640982);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640985:{NFSU2_TR(0x640985);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640987:{NFSU2_TR(0x640987);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64098a:{NFSU2_TR(0x64098a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B64098c:{NFSU2_TR(0x64098c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B64098e:{NFSU2_TR(0x64098e);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640991:{NFSU2_TR(0x640991);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640993:{NFSU2_TR(0x640993);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640995:{NFSU2_TR(0x640995);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640997:{NFSU2_TR(0x640997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64099cull));
TAIL_STATIC(0x63eb9fu,63e);
}
B64099c:L64099c:{c.instructions+=7;NFSU2_TR(0x64099c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409a2:{NFSU2_TR(0x6409a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409a3:{NFSU2_TR(0x6409a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409a6:{NFSU2_TR(0x6409a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409a7:{NFSU2_TR(0x6409a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409aa:{NFSU2_TR(0x6409aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409ab:{NFSU2_TR(0x6409ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6409b0ull));
TAIL_STATIC(0x63e979u,63e);
}
B6409b0:L6409b0:{c.instructions+=11;NFSU2_TR(0x6409b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6409b3:{NFSU2_TR(0x6409b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6409b6:{NFSU2_TR(0x6409b6);
u8 U[40];
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
}
B6409b7:{NFSU2_TR(0x6409b7);
u8 U[40];
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
}
B6409b8:{NFSU2_TR(0x6409b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409bb:{NFSU2_TR(0x6409bb);
u8 U[40];
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
}
B6409bc:{NFSU2_TR(0x6409bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409bd:{NFSU2_TR(0x6409bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409c0:{NFSU2_TR(0x6409c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409c1:{NFSU2_TR(0x6409c1);
u8 U[40];
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
}
B6409c2:{NFSU2_TR(0x6409c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6409c7ull));
TAIL_STATIC(0x63ea3du,63e);
}
B6409c7:L6409c7:{c.instructions+=7;NFSU2_TR(0x6409c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409ca:{NFSU2_TR(0x6409ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409cb:{NFSU2_TR(0x6409cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409ce:{NFSU2_TR(0x6409ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409cf:{NFSU2_TR(0x6409cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409d2:{NFSU2_TR(0x6409d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409d3:{NFSU2_TR(0x6409d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6409d8ull));
TAIL_STATIC(0x63e979u,63e);
}
B6409d8:L6409d8:{c.instructions+=11;NFSU2_TR(0x6409d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6409db:{NFSU2_TR(0x6409db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6409de:{NFSU2_TR(0x6409de);
u8 U[40];
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
}
B6409df:{NFSU2_TR(0x6409df);
u8 U[40];
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
}
B6409e0:{NFSU2_TR(0x6409e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409e3:{NFSU2_TR(0x6409e3);
u8 U[40];
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
}
B6409e4:{NFSU2_TR(0x6409e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409e5:{NFSU2_TR(0x6409e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409eb:{NFSU2_TR(0x6409eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409ec:{NFSU2_TR(0x6409ec);
u8 U[40];
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
}
B6409ed:{NFSU2_TR(0x6409ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6409f2ull));
TAIL_STATIC(0x63eb09u,63e);
}
B6409f2:L6409f2:{c.instructions+=7;NFSU2_TR(0x6409f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409f5:{NFSU2_TR(0x6409f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409f6:{NFSU2_TR(0x6409f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409f9:{NFSU2_TR(0x6409f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409fa:{NFSU2_TR(0x6409fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6409fd:{NFSU2_TR(0x6409fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6409fe:{NFSU2_TR(0x6409fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640a03ull));
TAIL_STATIC(0x63e979u,63e);
}
B640a03:L640a03:{c.instructions+=11;NFSU2_TR(0x640a03);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640a06:{NFSU2_TR(0x640a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640a09:{NFSU2_TR(0x640a09);
u8 U[40];
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
}
B640a0a:{NFSU2_TR(0x640a0a);
u8 U[40];
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
}
B640a0b:{NFSU2_TR(0x640a0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a0e:{NFSU2_TR(0x640a0e);
u8 U[40];
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
}
B640a0f:{NFSU2_TR(0x640a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a10:{NFSU2_TR(0x640a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a13:{NFSU2_TR(0x640a13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a14:{NFSU2_TR(0x640a14);
u8 U[40];
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
}
B640a15:{NFSU2_TR(0x640a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640a1aull));
TAIL_STATIC(0x63eb09u,63e);
}
B640a1a:L640a1a:{c.instructions+=31;NFSU2_TR(0x640a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a1d:{NFSU2_TR(0x640a1d);
{u32 ea_=u32(r4(R+20)+u32(4294967152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a23:{NFSU2_TR(0x640a23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a24:{NFSU2_TR(0x640a24);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640a27:{NFSU2_TR(0x640a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a2d:{NFSU2_TR(0x640a2d);
{u32 ea_=u32(r4(R+20)+u32(4294967156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a33:{NFSU2_TR(0x640a33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a34:{NFSU2_TR(0x640a34);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640a37:{NFSU2_TR(0x640a37);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a3a:{NFSU2_TR(0x640a3a);
{u32 ea_=u32(r4(R+20)+u32(4294967160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a40:{NFSU2_TR(0x640a40);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640a43:{NFSU2_TR(0x640a43);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a46:{NFSU2_TR(0x640a46);
{u32 ea_=u32(r4(R+20)+u32(4294967164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a4c:{NFSU2_TR(0x640a4c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640a4f:{NFSU2_TR(0x640a4f);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a55:{NFSU2_TR(0x640a55);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B640a57:{NFSU2_TR(0x640a57);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640a59:{NFSU2_TR(0x640a59);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a5c:{NFSU2_TR(0x640a5c);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a5f:{NFSU2_TR(0x640a5f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640a61:{NFSU2_TR(0x640a61);
{u32 ea_=u32(r4(R+20)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a64:{NFSU2_TR(0x640a64);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640a67:{NFSU2_TR(0x640a67);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640a69:{NFSU2_TR(0x640a69);
{u32 ea_=u32(r4(R+20)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a6c:{NFSU2_TR(0x640a6c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B640a6e:{NFSU2_TR(0x640a6e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640a70:{NFSU2_TR(0x640a70);
{u32 ea_=u32(r4(R+20)+u32(4294967212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640a73:{NFSU2_TR(0x640a73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640a75:{NFSU2_TR(0x640a75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640a77:{NFSU2_TR(0x640a77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640a79:{NFSU2_TR(0x640a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640a7eull));
TAIL_STATIC(0x63eb9fu,63e);
}
B640a7e:L640a7e:{c.instructions+=7;NFSU2_TR(0x640a7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a84:{NFSU2_TR(0x640a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a85:{NFSU2_TR(0x640a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a88:{NFSU2_TR(0x640a88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a89:{NFSU2_TR(0x640a89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640a8c:{NFSU2_TR(0x640a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640a8d:{NFSU2_TR(0x640a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640a92ull));
TAIL_STATIC(0x63e979u,63e);
}
B640a92:L640a92:{c.instructions+=16;NFSU2_TR(0x640a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B640a95:{NFSU2_TR(0x640a95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640a98:{NFSU2_TR(0x640a98);
u8 U[40];
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
}
B640a99:{NFSU2_TR(0x640a99);
u8 U[40];
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
}
B640a9a:{NFSU2_TR(0x640a9a);
u8 U[40];
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
}
B640a9b:{NFSU2_TR(0x640a9b);
u8 U[40];
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
}
B640a9c:{NFSU2_TR(0x640a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B640a9f:{NFSU2_TR(0x640a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640aa2:{NFSU2_TR(0x640aa2);
u8 U[40];
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
}
B640aa3:{NFSU2_TR(0x640aa3);
u8 U[40];
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
}
B640aa4:{NFSU2_TR(0x640aa4);
u8 U[40];
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
}
B640aa5:{NFSU2_TR(0x640aa5);
u8 U[40];
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
}
B640aa6:{NFSU2_TR(0x640aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640aa7:{NFSU2_TR(0x640aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640aa8:{NFSU2_TR(0x640aa8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B640aa9:{NFSU2_TR(0x640aa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640aac:L640aac:{c.instructions+=9;NFSU2_TR(0x640aac);
__builtin_memmove((R+28),(R+28),4);
}
B640aae:{NFSU2_TR(0x640aae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640aaf:{NFSU2_TR(0x640aaf);
__builtin_memmove((R+20),(R+16),4);
}
B640ab1:{NFSU2_TR(0x640ab1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ab2:{NFSU2_TR(0x640ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640ab5:{NFSU2_TR(0x640ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ab6:{NFSU2_TR(0x640ab6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B640ab8:{NFSU2_TR(0x640ab8);
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
B640aba:{NFSU2_TR(0x640aba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640ac3;}}
}
B640abc:L640abc:{c.instructions+=2;NFSU2_TR(0x640abc);
w4(R+28,u32(0x8876086cull));
}
B640ac1:{NFSU2_TR(0x640ac1);
{goto L640ae7;}
}
B640ac3:L640ac3:{c.instructions+=2;NFSU2_TR(0x640ac3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ac5:{NFSU2_TR(0x640ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640acaull));
TAIL_STATIC(0x575620u,575);
}
B640aca:L640aca:{c.instructions+=3;NFSU2_TR(0x640aca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B640acc:{NFSU2_TR(0x640acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640acd:{NFSU2_TR(0x640acd);
if(r1(R+518)){{goto L640ad8;}}
}
B640acf:L640acf:{c.instructions+=2;NFSU2_TR(0x640acf);
__builtin_memmove((R+4),(R+0),4);
}
B640ad1:{NFSU2_TR(0x640ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640ad6ull));
TAIL_STATIC(0x64285fu,642);
}
B640ad6:L640ad6:{c.instructions+=1;NFSU2_TR(0x640ad6);
{goto L640ada;}
}
B640ad8:L640ad8:{c.instructions+=1;NFSU2_TR(0x640ad8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B640ada:L640ada:{c.instructions+=2;NFSU2_TR(0x640ada);
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
B640adc:{NFSU2_TR(0x640adc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640ae5;}}
}
B640ade:L640ade:{c.instructions+=2;NFSU2_TR(0x640ade);
w4(R+28,u32(0x8007000eull));
}
B640ae3:{NFSU2_TR(0x640ae3);
{goto L640ae7;}
}
B640ae5:L640ae5:{c.instructions+=1;NFSU2_TR(0x640ae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B640ae7:L640ae7:{c.instructions+=5;NFSU2_TR(0x640ae7);
__builtin_memmove((R+0),(R+28),4);
}
B640ae9:{NFSU2_TR(0x640ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640aea:{NFSU2_TR(0x640aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640aeb:{NFSU2_TR(0x640aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B640aec:{NFSU2_TR(0x640aec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640aef:L640aef:{c.instructions+=13;NFSU2_TR(0x640aef);
__builtin_memmove((R+28),(R+28),4);
}
B640af1:{NFSU2_TR(0x640af1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640af2:{NFSU2_TR(0x640af2);
__builtin_memmove((R+20),(R+16),4);
}
B640af4:{NFSU2_TR(0x640af4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640af5:{NFSU2_TR(0x640af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640af8:{NFSU2_TR(0x640af8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640af9:{NFSU2_TR(0x640af9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640afa:{NFSU2_TR(0x640afa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640afb:{NFSU2_TR(0x640afb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B640afd:{NFSU2_TR(0x640afd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B640aff:{NFSU2_TR(0x640aff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640b01:{NFSU2_TR(0x640b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640b04:{NFSU2_TR(0x640b04);
if(r1(R+518)){{goto L640b08;}}
}
B640b06:L640b06:{c.instructions+=1;NFSU2_TR(0x640b06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B640b08:L640b08:{c.instructions+=3;NFSU2_TR(0x640b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640b0b:{NFSU2_TR(0x640b0b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640b0d:{NFSU2_TR(0x640b0d);
if(r1(R+518)){{goto L640b11;}}
}
B640b0f:L640b0f:{c.instructions+=1;NFSU2_TR(0x640b0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B640b11:L640b11:{c.instructions+=2;NFSU2_TR(0x640b11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640b14:{NFSU2_TR(0x640b14);
if(r1(R+518)){{goto L640bc4;}}
}
B640b1a:L640b1a:{c.instructions+=2;NFSU2_TR(0x640b1a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640b1c:{NFSU2_TR(0x640b1c);
if(r1(R+518)){{goto L640bc4;}}
}
B640b22:L640b22:{c.instructions+=2;NFSU2_TR(0x640b22);
u8 U[4];
w4(U+0,u32(0x360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640b27:{NFSU2_TR(0x640b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640b2cull));
TAIL_STATIC(0x575620u,575);
}
B640b2c:L640b2c:{c.instructions+=3;NFSU2_TR(0x640b2c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640b2e:{NFSU2_TR(0x640b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640b2f:{NFSU2_TR(0x640b2f);
if(r1(R+518)){{goto L640b3c;}}
}
B640b31:L640b31:{c.instructions+=2;NFSU2_TR(0x640b31);
__builtin_memmove((R+4),(R+0),4);
}
B640b33:{NFSU2_TR(0x640b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640b38ull));
TAIL_STATIC(0x64e121u,64e);
}
B640b38:L640b38:{c.instructions+=2;NFSU2_TR(0x640b38);
__builtin_memmove((R+24),(R+0),4);
}
B640b3a:{NFSU2_TR(0x640b3a);
{goto L640b3e;}
}
B640b3c:L640b3c:{c.instructions+=1;NFSU2_TR(0x640b3c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B640b3e:L640b3e:{c.instructions+=2;NFSU2_TR(0x640b3e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640b40:{NFSU2_TR(0x640b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640b4c;}}
}
B640b42:L640b42:{c.instructions+=2;NFSU2_TR(0x640b42);
w4(R+12,u32(0x8007000eull));
}
B640b47:{NFSU2_TR(0x640b47);
{goto L640be7;}
}
B640b4c:L640b4c:{c.instructions+=8;NFSU2_TR(0x640b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b4f:{NFSU2_TR(0x640b4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640b52:{NFSU2_TR(0x640b52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b55:{NFSU2_TR(0x640b55);
__builtin_memmove((R+4),(R+28),4);
}
B640b57:{NFSU2_TR(0x640b57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640b59:{NFSU2_TR(0x640b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b5c:{NFSU2_TR(0x640b5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b5f:{NFSU2_TR(0x640b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640b64ull));
TAIL_STATIC(0x64722eu,647);
}
B640b64:L640b64:{c.instructions+=3;NFSU2_TR(0x640b64);
__builtin_memmove((R+12),(R+0),4);
}
B640b66:{NFSU2_TR(0x640b66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640b68:{NFSU2_TR(0x640b68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640bc9;}}
}
B640b6a:L640b6a:{c.instructions+=6;NFSU2_TR(0x640b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B640b6d:{NFSU2_TR(0x640b6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640b6e:{NFSU2_TR(0x640b6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b71:{NFSU2_TR(0x640b71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640b77:{NFSU2_TR(0x640b77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640b78:{NFSU2_TR(0x640b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640b7dull));
TAIL_STATIC(0x65a811u,65a);
}
B640b7d:L640b7d:{c.instructions+=3;NFSU2_TR(0x640b7d);
__builtin_memmove((R+12),(R+0),4);
}
B640b7f:{NFSU2_TR(0x640b7f);
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
B640b81:{NFSU2_TR(0x640b81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640bc9;}}
}
B640b83:L640b83:{c.instructions+=3;NFSU2_TR(0x640b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640b86:{NFSU2_TR(0x640b86);
__builtin_memmove((R+4),(R+28),4);
}
B640b88:{NFSU2_TR(0x640b88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640b8dull));
TAIL_STATIC(0x642b3fu,642);
}
B640b8d:L640b8d:{c.instructions+=2;NFSU2_TR(0x640b8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B640b8f:{NFSU2_TR(0x640b8f);
if(r1(R+518)){{goto L640b98;}}
}
B640b91:L640b91:{c.instructions+=2;NFSU2_TR(0x640b91);
w4(R+12,u32(0x88760b59ull));
}
B640b96:{NFSU2_TR(0x640b96);
{goto L640bc9;}
}
B640b98:L640b98:{c.instructions+=3;NFSU2_TR(0x640b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640b9b:{NFSU2_TR(0x640b9b);
__builtin_memmove((R+4),(R+24),4);
}
B640b9d:{NFSU2_TR(0x640b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640ba2ull));
TAIL_STATIC(0x64eeb4u,64e);
}
B640ba2:L640ba2:{c.instructions+=3;NFSU2_TR(0x640ba2);
__builtin_memmove((R+12),(R+0),4);
}
B640ba4:{NFSU2_TR(0x640ba4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640ba6:{NFSU2_TR(0x640ba6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640bc9;}}
}
B640ba8:L640ba8:{c.instructions+=3;NFSU2_TR(0x640ba8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B640bac:{NFSU2_TR(0x640bac);
__builtin_memmove((R+4),(R+28),4);
}
B640bae:{NFSU2_TR(0x640bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640bb3ull));
TAIL_STATIC(0x642b3fu,642);
}
B640bb3:L640bb3:{c.instructions+=2;NFSU2_TR(0x640bb3);
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
B640bb5:{NFSU2_TR(0x640bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640b91u);}goto L640b91;}}
}
B640bb7:L640bb7:{c.instructions+=5;NFSU2_TR(0x640bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640bba:{NFSU2_TR(0x640bba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B640bbc:{NFSU2_TR(0x640bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640bbe:{NFSU2_TR(0x640bbe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640bbf:{NFSU2_TR(0x640bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640bc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640bc2:L640bc2:{c.instructions+=1;NFSU2_TR(0x640bc2);
{goto L640bc9;}
}
B640bc4:L640bc4:{c.instructions+=1;NFSU2_TR(0x640bc4);
w4(R+12,u32(0x8876086cull));
}
B640bc9:L640bc9:{c.instructions+=3;NFSU2_TR(0x640bc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B640bcb:{NFSU2_TR(0x640bcb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640bcd:{NFSU2_TR(0x640bcd);
if(r1(R+518)){{goto L640be7;}}
}
B640bcf:L640bcf:{c.instructions+=2;NFSU2_TR(0x640bcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640bd2:{NFSU2_TR(0x640bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640bd7ull));
TAIL_STATIC(0x64547fu,645);
}
B640bd7:L640bd7:{c.instructions+=2;NFSU2_TR(0x640bd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640bda:{NFSU2_TR(0x640bda);
if(r1(R+518)){{goto L640be7;}}
}
B640bdc:L640bdc:{c.instructions+=3;NFSU2_TR(0x640bdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640bdf:{NFSU2_TR(0x640bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640be2:{NFSU2_TR(0x640be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640be7ull));
TAIL_STATIC(0x642ad1u,642);
}
B640be7:L640be7:{c.instructions+=2;NFSU2_TR(0x640be7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640bea:{NFSU2_TR(0x640bea);
if(r1(R+518)){{goto L640bef;}}
}
B640bec:L640bec:{c.instructions+=1;NFSU2_TR(0x640bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640bef:L640bef:{c.instructions+=2;NFSU2_TR(0x640bef);
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
B640bf1:{NFSU2_TR(0x640bf1);
if(r1(R+518)){{goto L640bf9;}}
}
B640bf3:L640bf3:{c.instructions+=3;NFSU2_TR(0x640bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640bf5:{NFSU2_TR(0x640bf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640bf6:{NFSU2_TR(0x640bf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640bf9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640bf9:L640bf9:{c.instructions+=6;NFSU2_TR(0x640bf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640bfa:{NFSU2_TR(0x640bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640bfb:{NFSU2_TR(0x640bfb);
__builtin_memmove((R+0),(R+12),4);
}
B640bfd:{NFSU2_TR(0x640bfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B640bfe:{NFSU2_TR(0x640bfe);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B640bff:{NFSU2_TR(0x640bff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640c02:L640c02:{c.instructions+=9;NFSU2_TR(0x640c02);
__builtin_memmove((R+28),(R+28),4);
}
B640c04:{NFSU2_TR(0x640c04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c05:{NFSU2_TR(0x640c05);
__builtin_memmove((R+20),(R+16),4);
}
B640c07:{NFSU2_TR(0x640c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B640c0a:{NFSU2_TR(0x640c0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c0b:{NFSU2_TR(0x640c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c0c:{NFSU2_TR(0x640c0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c0d:{NFSU2_TR(0x640c0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640c10:{NFSU2_TR(0x640c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640c15ull));
TAIL_STATIC(0x670f13u,670);
}
B640c15:L640c15:{c.instructions+=7;NFSU2_TR(0x640c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640c18:{NFSU2_TR(0x640c18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B640c1a:{NFSU2_TR(0x640c1a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640c1c:{NFSU2_TR(0x640c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640c1f:{NFSU2_TR(0x640c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640c22:{NFSU2_TR(0x640c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640c25:{NFSU2_TR(0x640c25);
if(r1(R+518)){{goto L640c29;}}
}
B640c27:L640c27:{c.instructions+=1;NFSU2_TR(0x640c27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B640c29:L640c29:{c.instructions+=3;NFSU2_TR(0x640c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B640c2c:{NFSU2_TR(0x640c2c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640c2e:{NFSU2_TR(0x640c2e);
if(r1(R+518)){{goto L640c32;}}
}
B640c30:L640c30:{c.instructions+=1;NFSU2_TR(0x640c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B640c32:L640c32:{c.instructions+=2;NFSU2_TR(0x640c32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640c35:{NFSU2_TR(0x640c35);
if(r1(R+518)){{goto L640d86;}}
}
B640c3b:L640c3b:{c.instructions+=2;NFSU2_TR(0x640c3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640c3e:{NFSU2_TR(0x640c3e);
if(r1(R+518)){{goto L640d86;}}
}
B640c44:L640c44:{c.instructions+=2;NFSU2_TR(0x640c44);
u8 U[4];
w4(U+0,u32(0x130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c49:{NFSU2_TR(0x640c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640c4eull));
TAIL_STATIC(0x575620u,575);
}
B640c4e:L640c4e:{c.instructions+=4;NFSU2_TR(0x640c4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B640c50:{NFSU2_TR(0x640c50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640c52:{NFSU2_TR(0x640c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640c53:{NFSU2_TR(0x640c53);
if(r1(R+518)){{goto L640c61;}}
}
B640c55:L640c55:{c.instructions+=2;NFSU2_TR(0x640c55);
__builtin_memmove((R+4),(R+0),4);
}
B640c57:{NFSU2_TR(0x640c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640c5cull));
TAIL_STATIC(0x66509eu,665);
}
B640c5c:L640c5c:{c.instructions+=2;NFSU2_TR(0x640c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640c5f:{NFSU2_TR(0x640c5f);
{goto L640c64;}
}
B640c61:L640c61:{c.instructions+=1;NFSU2_TR(0x640c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640c64:L640c64:{c.instructions+=2;NFSU2_TR(0x640c64);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640c67:{NFSU2_TR(0x640c67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640c73;}}
}
B640c69:L640c69:{c.instructions+=2;NFSU2_TR(0x640c69);
w4(R+12,u32(0x8007000eull));
}
B640c6e:{NFSU2_TR(0x640c6e);
{goto L640d98;}
}
B640c73:L640c73:{c.instructions+=6;NFSU2_TR(0x640c73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c74:{NFSU2_TR(0x640c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640c75:{NFSU2_TR(0x640c75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640c78:{NFSU2_TR(0x640c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640c7b:{NFSU2_TR(0x640c7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640c7e:{NFSU2_TR(0x640c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640c83ull));
TAIL_STATIC(0x670f4fu,670);
}
B640c83:L640c83:{c.instructions+=3;NFSU2_TR(0x640c83);
__builtin_memmove((R+12),(R+0),4);
}
B640c85:{NFSU2_TR(0x640c85);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640c87:{NFSU2_TR(0x640c87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d98;}}
}
B640c8d:L640c8d:{c.instructions+=2;NFSU2_TR(0x640c8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B640c91:{NFSU2_TR(0x640c91);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L640c9d;}}
}
B640c93:L640c93:{c.instructions+=2;NFSU2_TR(0x640c93);
w4(R+12,u32(0x80004005ull));
}
B640c98:{NFSU2_TR(0x640c98);
{goto L640d98;}
}
B640c9d:L640c9d:{c.instructions+=3;NFSU2_TR(0x640c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640ca0:{NFSU2_TR(0x640ca0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfeff0901ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B640ca6:{NFSU2_TR(0x640ca6);
if(r1(R+518)){{goto L640d08;}}
}
B640ca8:L640ca8:{c.instructions+=2;NFSU2_TR(0x640ca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640cab:{NFSU2_TR(0x640cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640cb0ull));
TAIL_STATIC(0x670f2eu,670);
}
B640cb0:L640cb0:{c.instructions+=10;NFSU2_TR(0x640cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640cb3:{NFSU2_TR(0x640cb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cb4:{NFSU2_TR(0x640cb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640cb7:{NFSU2_TR(0x640cb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cb8:{NFSU2_TR(0x640cb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cb9:{NFSU2_TR(0x640cb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640cbc:{NFSU2_TR(0x640cbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640cbf:{NFSU2_TR(0x640cbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640cc2:{NFSU2_TR(0x640cc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640cc5:{NFSU2_TR(0x640cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640ccaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640aefu);}goto L640aef;}
}
B640cca:L640cca:{c.instructions+=3;NFSU2_TR(0x640cca);
__builtin_memmove((R+12),(R+0),4);
}
B640ccc:{NFSU2_TR(0x640ccc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640cce:{NFSU2_TR(0x640cce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d8b;}}
}
B640cd4:L640cd4:{c.instructions+=2;NFSU2_TR(0x640cd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B640cd6:{NFSU2_TR(0x640cd6);
if(r1(R+518)){{goto L640ce7;}}
}
B640cd8:L640cd8:{c.instructions+=3;NFSU2_TR(0x640cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640cda:{NFSU2_TR(0x640cda);
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
B640cdc:{NFSU2_TR(0x640cdc);
if(r1(R+518)){{goto L640ce7;}}
}
B640cde:L640cde:{c.instructions+=3;NFSU2_TR(0x640cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640ce0:{NFSU2_TR(0x640ce0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ce1:{NFSU2_TR(0x640ce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640ce4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640ce4:L640ce4:{c.instructions+=1;NFSU2_TR(0x640ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B640ce7:L640ce7:{c.instructions+=9;NFSU2_TR(0x640ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640cea:{NFSU2_TR(0x640cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640cec:{NFSU2_TR(0x640cec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ced:{NFSU2_TR(0x640ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B640cf0:{NFSU2_TR(0x640cf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cf1:{NFSU2_TR(0x640cf1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffe7ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B640cf4:{NFSU2_TR(0x640cf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cf5:{NFSU2_TR(0x640cf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640cf6:{NFSU2_TR(0x640cf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640cfcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640cfc:L640cfc:{c.instructions+=3;NFSU2_TR(0x640cfc);
__builtin_memmove((R+12),(R+0),4);
}
B640cfe:{NFSU2_TR(0x640cfe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640d00:{NFSU2_TR(0x640d00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d8b;}}
}
B640d06:L640d06:{c.instructions+=1;NFSU2_TR(0x640d06);
{goto L640d47;}
}
B640d08:L640d08:{c.instructions+=2;NFSU2_TR(0x640d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B640d0a:{NFSU2_TR(0x640d0a);
if(r1(R+518)){{goto L640d98;}}
}
B640d10:L640d10:{c.instructions+=4;NFSU2_TR(0x640d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B640d13:{NFSU2_TR(0x640d13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640d14:{NFSU2_TR(0x640d14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640d17:{NFSU2_TR(0x640d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d1cull));
TAIL_STATIC(0x670f08u,670);
}
B640d1c:L640d1c:{c.instructions+=3;NFSU2_TR(0x640d1c);
__builtin_memmove((R+12),(R+0),4);
}
B640d1e:{NFSU2_TR(0x640d1e);
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
B640d20:{NFSU2_TR(0x640d20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d98;}}
}
B640d22:L640d22:{c.instructions+=7;NFSU2_TR(0x640d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640d25:{NFSU2_TR(0x640d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640d28:{NFSU2_TR(0x640d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640d2b:{NFSU2_TR(0x640d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640d2e:{NFSU2_TR(0x640d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640d30:{NFSU2_TR(0x640d30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640d31:{NFSU2_TR(0x640d31);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640d34:L640d34:{c.instructions+=4;NFSU2_TR(0x640d34);
__builtin_memmove((R+28),(R+0),4);
}
B640d36:{NFSU2_TR(0x640d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640d39:{NFSU2_TR(0x640d39);
__builtin_memmove((R+4),(R+0),4);
}
B640d3b:{NFSU2_TR(0x640d3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B640d3e:L640d3e:{c.instructions+=1;NFSU2_TR(0x640d3e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L640d40;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640d3eu);}goto L640d3e;}
}
B640d40:L640d40:{c.instructions+=2;NFSU2_TR(0x640d40);
__builtin_memmove((R+4),(R+0),4);
}
B640d42:{NFSU2_TR(0x640d42);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B640d45:L640d45:{c.instructions+=1;NFSU2_TR(0x640d45);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L640d47;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640d45u);}goto L640d45;}
}
B640d47:L640d47:{c.instructions+=3;NFSU2_TR(0x640d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B640d4a:{NFSU2_TR(0x640d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B640d4c:{NFSU2_TR(0x640d4c);
if(r1(R+518)){{goto L640d8b;}}
}
B640d4e:L640d4e:{c.instructions+=9;NFSU2_TR(0x640d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640d51:{NFSU2_TR(0x640d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B640d55:{NFSU2_TR(0x640d55);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B640d58:{NFSU2_TR(0x640d58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640d59:{NFSU2_TR(0x640d59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640d5c:{NFSU2_TR(0x640d5c);
__builtin_memmove((R+4),(R+24),4);
}
B640d5e:{NFSU2_TR(0x640d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640d61:{NFSU2_TR(0x640d61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640d64:{NFSU2_TR(0x640d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d69ull));
TAIL_STATIC(0x66f69cu,66f);
}
B640d69:L640d69:{c.instructions+=3;NFSU2_TR(0x640d69);
__builtin_memmove((R+12),(R+0),4);
}
B640d6b:{NFSU2_TR(0x640d6b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640d6d:{NFSU2_TR(0x640d6d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d8b;}}
}
B640d6f:L640d6f:{c.instructions+=2;NFSU2_TR(0x640d6f);
__builtin_memmove((R+4),(R+24),4);
}
B640d71:{NFSU2_TR(0x640d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d76ull));
TAIL_STATIC(0x66afe6u,66a);
}
B640d76:L640d76:{c.instructions+=3;NFSU2_TR(0x640d76);
__builtin_memmove((R+12),(R+0),4);
}
B640d78:{NFSU2_TR(0x640d78);
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
B640d7a:{NFSU2_TR(0x640d7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L640d8b;}}
}
B640d7c:L640d7c:{c.instructions+=4;NFSU2_TR(0x640d7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B640d7e:{NFSU2_TR(0x640d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640d80:{NFSU2_TR(0x640d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640d81:{NFSU2_TR(0x640d81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d84ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640d84:L640d84:{c.instructions+=1;NFSU2_TR(0x640d84);
{goto L640d8b;}
}
B640d86:L640d86:{c.instructions+=1;NFSU2_TR(0x640d86);
w4(R+12,u32(0x8876086cull));
}
B640d8b:L640d8b:{c.instructions+=3;NFSU2_TR(0x640d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640d8e:{NFSU2_TR(0x640d8e);
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
B640d90:{NFSU2_TR(0x640d90);
if(r1(R+518)){{goto L640d98;}}
}
B640d92:L640d92:{c.instructions+=3;NFSU2_TR(0x640d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640d94:{NFSU2_TR(0x640d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640d95:{NFSU2_TR(0x640d95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640d98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640d98:L640d98:{c.instructions+=3;NFSU2_TR(0x640d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640d9b:{NFSU2_TR(0x640d9b);
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
B640d9d:{NFSU2_TR(0x640d9d);
if(r1(R+518)){{goto L640da9;}}
}
B640d9f:L640d9f:{c.instructions+=3;NFSU2_TR(0x640d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640da1:{NFSU2_TR(0x640da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640da2:{NFSU2_TR(0x640da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640da5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640da5:L640da5:{c.instructions+=1;NFSU2_TR(0x640da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B640da9:L640da9:{c.instructions+=3;NFSU2_TR(0x640da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640dac:{NFSU2_TR(0x640dac);
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
B640dae:{NFSU2_TR(0x640dae);
if(r1(R+518)){{goto L640db6;}}
}
B640db0:L640db0:{c.instructions+=3;NFSU2_TR(0x640db0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640db2:{NFSU2_TR(0x640db2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640db3:{NFSU2_TR(0x640db3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640db6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B640db6:L640db6:{c.instructions+=2;NFSU2_TR(0x640db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B640db9:{NFSU2_TR(0x640db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640dbeull));
TAIL_STATIC(0x670f20u,670);
}
B640dbe:L640dbe:{c.instructions+=6;NFSU2_TR(0x640dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640dbf:{NFSU2_TR(0x640dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B640dc0:{NFSU2_TR(0x640dc0);
__builtin_memmove((R+0),(R+12),4);
}
B640dc2:{NFSU2_TR(0x640dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B640dc3:{NFSU2_TR(0x640dc3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B640dc4:{NFSU2_TR(0x640dc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B640dc7:L640dc7:{c.instructions+=18;NFSU2_TR(0x640dc7);
__builtin_memmove((R+28),(R+28),4);
}
B640dc9:{NFSU2_TR(0x640dc9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640dca:{NFSU2_TR(0x640dca);
__builtin_memmove((R+20),(R+16),4);
}
B640dcc:{NFSU2_TR(0x640dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x338ull))));
}
B640dd2:{NFSU2_TR(0x640dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640dd5:{NFSU2_TR(0x640dd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640dd6:{NFSU2_TR(0x640dd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640dd7:{NFSU2_TR(0x640dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B640dda:{NFSU2_TR(0x640dda);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B640ddd:{NFSU2_TR(0x640ddd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B640ddf:{NFSU2_TR(0x640ddf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640de2:{NFSU2_TR(0x640de2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640de3:{NFSU2_TR(0x640de3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B640de6:{NFSU2_TR(0x640de6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B640de8:{NFSU2_TR(0x640de8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640deb:{NFSU2_TR(0x640deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640dee:{NFSU2_TR(0x640dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640df1:{NFSU2_TR(0x640df1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640df9;}}
}
B640df3:L640df3:{c.instructions+=2;NFSU2_TR(0x640df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640df6:{NFSU2_TR(0x640df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640df9:L640df9:{c.instructions+=2;NFSU2_TR(0x640df9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640dfc:{NFSU2_TR(0x640dfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640fb6;}}
}
B640e02:L640e02:{c.instructions+=4;NFSU2_TR(0x640e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e05:{NFSU2_TR(0x640e05);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B640e07:{NFSU2_TR(0x640e07);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B640e09:{NFSU2_TR(0x640e09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640e29;}}
}
B640e0b:L640e0b:{c.instructions+=2;NFSU2_TR(0x640e0b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B640e0f:{NFSU2_TR(0x640e0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640e29;}}
}
B640e11:L640e11:{c.instructions+=9;NFSU2_TR(0x640e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e14:{NFSU2_TR(0x640e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B640e16:{NFSU2_TR(0x640e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e19:{NFSU2_TR(0x640e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e1c:{NFSU2_TR(0x640e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e1f:{NFSU2_TR(0x640e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B640e22:{NFSU2_TR(0x640e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B640e24:{NFSU2_TR(0x640e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e27:{NFSU2_TR(0x640e27);
{goto L640e54;}
}
B640e29:L640e29:{c.instructions+=2;NFSU2_TR(0x640e29);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B640e2d:{NFSU2_TR(0x640e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640fb6;}}
}
B640e33:L640e33:{c.instructions+=2;NFSU2_TR(0x640e33);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B640e36:{NFSU2_TR(0x640e36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640fb6;}}
}
B640e3c:L640e3c:{c.instructions+=9;NFSU2_TR(0x640e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e3f:{NFSU2_TR(0x640e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640e42:{NFSU2_TR(0x640e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640e44:{NFSU2_TR(0x640e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e47:{NFSU2_TR(0x640e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e4a:{NFSU2_TR(0x640e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B640e4d:{NFSU2_TR(0x640e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B640e4f:{NFSU2_TR(0x640e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e52:{NFSU2_TR(0x640e52);
__builtin_memmove((R+8),(R+0),4);
}
B640e54:L640e54:{c.instructions+=3;NFSU2_TR(0x640e54);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B640e56:{NFSU2_TR(0x640e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e59:{NFSU2_TR(0x640e59);
if(r1(R+518)){{goto L640fb6;}}
}
B640e5f:L640e5f:{c.instructions+=3;NFSU2_TR(0x640e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640e62:{NFSU2_TR(0x640e62);
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
B640e64:{NFSU2_TR(0x640e64);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64113au,641);}
}
B640e6a:L640e6a:{c.instructions+=2;NFSU2_TR(0x640e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640e6d:{NFSU2_TR(0x640e6d);
{goto L640e71;}
}
B640e6f:L640e6f:{c.instructions+=1;NFSU2_TR(0x640e6f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B640e71:L640e71:{c.instructions+=2;NFSU2_TR(0x640e71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B640e74:{NFSU2_TR(0x640e74);
if(r1(R+518)){{goto L640e93;}}
}
B640e76:L640e76:{c.instructions+=6;NFSU2_TR(0x640e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B640e79:{NFSU2_TR(0x640e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640e7c:{NFSU2_TR(0x640e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B640e7f:{NFSU2_TR(0x640e7f);
__builtin_memmove((R+0),(R+4),4);
}
B640e81:{NFSU2_TR(0x640e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B640e84:{NFSU2_TR(0x640e84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B640e87:L640e87:{c.instructions+=1;NFSU2_TR(0x640e87);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L640e89;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640e87u);}goto L640e87;}
}
B640e89:L640e89:{c.instructions+=3;NFSU2_TR(0x640e89);
__builtin_memmove((R+4),(R+0),4);
}
B640e8b:{NFSU2_TR(0x640e8b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B640e8e:{NFSU2_TR(0x640e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B640e91:L640e91:{c.instructions+=1;NFSU2_TR(0x640e91);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L640e93;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640e91u);}goto L640e91;}
}
B640e93:L640e93:{c.instructions+=18;NFSU2_TR(0x640e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640e96:{NFSU2_TR(0x640e96);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640e98:{NFSU2_TR(0x640e98);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640e9a:{NFSU2_TR(0x640e9a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640e9c:{NFSU2_TR(0x640e9c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640e9f:{NFSU2_TR(0x640e9f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640ea1:{NFSU2_TR(0x640ea1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640ea4:{NFSU2_TR(0x640ea4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640ea6:{NFSU2_TR(0x640ea6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640ea8:{NFSU2_TR(0x640ea8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640eaa:{NFSU2_TR(0x640eaa);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640ead:{NFSU2_TR(0x640ead);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B640eaf:{NFSU2_TR(0x640eaf);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640eb2:{NFSU2_TR(0x640eb2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640eb4:{NFSU2_TR(0x640eb4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640eba:{NFSU2_TR(0x640eba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640ebc:{NFSU2_TR(0x640ebc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B640ebf:{NFSU2_TR(0x640ebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L640f92;}}
}
B640ec5:L640ec5:{c.instructions+=2;NFSU2_TR(0x640ec5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640ec7:{NFSU2_TR(0x640ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640eccull));
TAIL_STATIC(0x75dd28u,75d);
}
B640ecc:L640ecc:{c.instructions+=6;NFSU2_TR(0x640ecc);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B640ece:{NFSU2_TR(0x640ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B640ed1:{NFSU2_TR(0x640ed1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640ed3:{NFSU2_TR(0x640ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640ed6:{NFSU2_TR(0x640ed6);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B640ed9:{NFSU2_TR(0x640ed9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L640ee1;}}
}
B640edb:L640edb:{c.instructions+=1;NFSU2_TR(0x640edb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640ee1:L640ee1:{c.instructions+=11;NFSU2_TR(0x640ee1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B640ee3:{NFSU2_TR(0x640ee3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B640ee6:{NFSU2_TR(0x640ee6);
__builtin_memmove((R+28),(R+0),4);
}
B640ee8:{NFSU2_TR(0x640ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640eeb:{NFSU2_TR(0x640eeb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B640eed:{NFSU2_TR(0x640eed);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640ef0:{NFSU2_TR(0x640ef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ef1:{NFSU2_TR(0x640ef1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640ef4:{NFSU2_TR(0x640ef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B640ef7:{NFSU2_TR(0x640ef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640ef8:{NFSU2_TR(0x640ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640efdull));
TAIL_STATIC(0x63c606u,63c);
}
B640efd:L640efd:{c.instructions+=7;NFSU2_TR(0x640efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640f00:{NFSU2_TR(0x640f00);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B640f02:{NFSU2_TR(0x640f02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640f03:{NFSU2_TR(0x640f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B640f06:{NFSU2_TR(0x640f06);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B640f09:{NFSU2_TR(0x640f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B640f0a:{NFSU2_TR(0x640f0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640f0full));
TAIL_STATIC(0x63c719u,63c);
}
B640f0f:L640f0f:{c.instructions+=45;NFSU2_TR(0x640f0f);
{u32 ea_=u32(r4(R+20)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f12:{NFSU2_TR(0x640f12);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f15:{NFSU2_TR(0x640f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640f18:{NFSU2_TR(0x640f18);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f1a:{NFSU2_TR(0x640f1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B640f1d:{NFSU2_TR(0x640f1d);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f20:{NFSU2_TR(0x640f20);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f23:{NFSU2_TR(0x640f23);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f25:{NFSU2_TR(0x640f25);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f28:{NFSU2_TR(0x640f28);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f2b:{NFSU2_TR(0x640f2b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f2d:{NFSU2_TR(0x640f2d);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f30:{NFSU2_TR(0x640f30);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f33:{NFSU2_TR(0x640f33);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f35:{NFSU2_TR(0x640f35);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f38:{NFSU2_TR(0x640f38);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f3b:{NFSU2_TR(0x640f3b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f3d:{NFSU2_TR(0x640f3d);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f40:{NFSU2_TR(0x640f40);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f43:{NFSU2_TR(0x640f43);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B640f45:{NFSU2_TR(0x640f45);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f48:{NFSU2_TR(0x640f48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B640f4a:{NFSU2_TR(0x640f4a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f4d:{NFSU2_TR(0x640f4d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f4f:{NFSU2_TR(0x640f4f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f51:{NFSU2_TR(0x640f51);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f54:{NFSU2_TR(0x640f54);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f57:{NFSU2_TR(0x640f57);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f5a:{NFSU2_TR(0x640f5a);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f5d:{NFSU2_TR(0x640f5d);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f60:{NFSU2_TR(0x640f60);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f63:{NFSU2_TR(0x640f63);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f66:{NFSU2_TR(0x640f66);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f68:{NFSU2_TR(0x640f68);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f6a:{NFSU2_TR(0x640f6a);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f6d:{NFSU2_TR(0x640f6d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f70:{NFSU2_TR(0x640f70);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f73:{NFSU2_TR(0x640f73);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f76:{NFSU2_TR(0x640f76);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B640f79:{NFSU2_TR(0x640f79);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B640f7c:{NFSU2_TR(0x640f7c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640f7e:{NFSU2_TR(0x640f7e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B640f84:{NFSU2_TR(0x640f84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B640f86:{NFSU2_TR(0x640f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B640f89:{NFSU2_TR(0x640f89);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640ec5u);}goto L640ec5;}}
}
B640f8f:L640f8f:{c.instructions+=1;NFSU2_TR(0x640f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B640f92:L640f92:{c.instructions+=10;NFSU2_TR(0x640f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B640f95:{NFSU2_TR(0x640f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B640f98:{NFSU2_TR(0x640f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B640f9b:{NFSU2_TR(0x640f9b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B640f9d:{NFSU2_TR(0x640f9d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B640fa0:{NFSU2_TR(0x640fa0);
w1(R+512,carry<u32>(r4(R+12),r4(R+0)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B640fa2:{NFSU2_TR(0x640fa2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B640fa5:{NFSU2_TR(0x640fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640fa8:{NFSU2_TR(0x640fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640fab:{NFSU2_TR(0x640fab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640e6fu);}goto L640e6f;}}
}
B640fb1:L640fb1:{c.instructions+=1;NFSU2_TR(0x640fb1);
TAIL_STATIC(0x64113au,641);
}
B640fb6:L640fb6:{c.instructions+=3;NFSU2_TR(0x640fb6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B640fb9:{NFSU2_TR(0x640fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640fbc:{NFSU2_TR(0x640fbc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64113au,641);}
}
B640fc2:L640fc2:{c.instructions+=1;NFSU2_TR(0x640fc2);
{goto L640fc7;}
}
B640fc4:L640fc4:{c.instructions+=1;NFSU2_TR(0x640fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640fc7:L640fc7:{c.instructions+=6;NFSU2_TR(0x640fc7);
__builtin_memmove((R+4),(R+24),4);
}
B640fc9:{NFSU2_TR(0x640fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B640fcc:{NFSU2_TR(0x640fcc);
__builtin_memmove((R+8),(R+4),4);
}
B640fce:{NFSU2_TR(0x640fce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B640fd1:{NFSU2_TR(0x640fd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B640fd3:{NFSU2_TR(0x640fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B640fd9:L640fd9:{c.instructions+=1;NFSU2_TR(0x640fd9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L640fdb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640fd9u);}goto L640fd9;}
}
B640fdb:L640fdb:{c.instructions+=2;NFSU2_TR(0x640fdb);
__builtin_memmove((R+4),(R+8),4);
}
B640fdd:{NFSU2_TR(0x640fdd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B640fe0:L640fe0:{c.instructions+=1;NFSU2_TR(0x640fe0);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L640fe2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x640fe0u);}goto L640fe0;}
}
B640fe2:L640fe2:{c.instructions+=1;NFSU2_TR(0x640fe2);
TAIL_STATIC(0x6410bfu,641);
}
B640fe7:L640fe7:{c.instructions+=2;NFSU2_TR(0x640fe7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B640fe9:{NFSU2_TR(0x640fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x640feeull));
TAIL_STATIC(0x75dd28u,75d);
}
B640fee:L640fee:{c.instructions+=7;NFSU2_TR(0x640fee);
__builtin_memmove((R+12),(R+0),4);
}
B640ff0:{NFSU2_TR(0x640ff0);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B640ff2:{NFSU2_TR(0x640ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B640ff5:{NFSU2_TR(0x640ff5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B640ff7:{NFSU2_TR(0x640ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B640ffa:{NFSU2_TR(0x640ffa);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B640ffd:{NFSU2_TR(0x640ffd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x641005u,641);}
}
B640fff:L640fff:{c.instructions+=1;NFSU2_TR(0x640fff);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x641005u,641);
}
XIT:NFSU2_TR_EXIT(0x640,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
