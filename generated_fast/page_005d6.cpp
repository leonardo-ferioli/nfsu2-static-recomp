#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_613(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 page_5d6(Cpu& c){return body_5d6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d6006:goto L5d6006;
case 0x5d600a:c.instructions+=2;goto B5d600a;
case 0x5d6011:c.instructions+=1;goto B5d6011;
case 0x5d6020:goto L5d6020;
case 0x5d6024:c.instructions+=7;goto B5d6024;
case 0x5d6027:c.instructions+=6;goto B5d6027;
case 0x5d602e:c.instructions+=5;goto B5d602e;
case 0x5d6032:c.instructions+=4;goto B5d6032;
case 0x5d6036:c.instructions+=3;goto B5d6036;
case 0x5d6038:c.instructions+=2;goto B5d6038;
case 0x5d603c:c.instructions+=1;goto B5d603c;
case 0x5d6040:goto L5d6040;
case 0x5d6044:c.instructions+=15;goto B5d6044;
case 0x5d6047:c.instructions+=14;goto B5d6047;
case 0x5d604e:c.instructions+=13;goto B5d604e;
case 0x5d6052:c.instructions+=12;goto B5d6052;
case 0x5d6058:c.instructions+=11;goto B5d6058;
case 0x5d605b:c.instructions+=10;goto B5d605b;
case 0x5d605d:c.instructions+=9;goto B5d605d;
case 0x5d6060:c.instructions+=8;goto B5d6060;
case 0x5d6063:c.instructions+=7;goto B5d6063;
case 0x5d6067:c.instructions+=6;goto B5d6067;
case 0x5d6069:c.instructions+=5;goto B5d6069;
case 0x5d606c:c.instructions+=4;goto B5d606c;
case 0x5d606f:c.instructions+=3;goto B5d606f;
case 0x5d6072:c.instructions+=2;goto B5d6072;
case 0x5d6076:c.instructions+=1;goto B5d6076;
case 0x5d6080:goto L5d6080;
case 0x5d6083:c.instructions+=6;goto B5d6083;
case 0x5d6085:c.instructions+=5;goto B5d6085;
case 0x5d608b:c.instructions+=4;goto B5d608b;
case 0x5d6091:c.instructions+=3;goto B5d6091;
case 0x5d6097:c.instructions+=2;goto B5d6097;
case 0x5d609d:c.instructions+=1;goto B5d609d;
case 0x5d60a0:goto L5d60a0;
case 0x5d60a6:c.instructions+=5;goto B5d60a6;
case 0x5d60a7:c.instructions+=4;goto B5d60a7;
case 0x5d60a9:c.instructions+=3;goto B5d60a9;
case 0x5d60ab:c.instructions+=2;goto B5d60ab;
case 0x5d60ad:c.instructions+=1;goto B5d60ad;
case 0x5d60af:goto L5d60af;
case 0x5d60b5:c.instructions+=2;goto B5d60b5;
case 0x5d60b6:c.instructions+=1;goto B5d60b6;
case 0x5d60c0:goto L5d60c0;
case 0x5d60c2:c.instructions+=6;goto B5d60c2;
case 0x5d60c5:c.instructions+=5;goto B5d60c5;
case 0x5d60cb:c.instructions+=4;goto B5d60cb;
case 0x5d60cc:c.instructions+=3;goto B5d60cc;
case 0x5d60cf:c.instructions+=2;goto B5d60cf;
case 0x5d60d1:c.instructions+=1;goto B5d60d1;
case 0x5d60d3:goto L5d60d3;
case 0x5d60d4:goto L5d60d4;
case 0x5d60da:c.instructions+=2;goto B5d60da;
case 0x5d60db:c.instructions+=1;goto B5d60db;
case 0x5d60e0:goto L5d60e0;
case 0x5d60e1:c.instructions+=9;goto B5d60e1;
case 0x5d60e2:c.instructions+=8;goto B5d60e2;
case 0x5d60e3:c.instructions+=7;goto B5d60e3;
case 0x5d60e5:c.instructions+=6;goto B5d60e5;
case 0x5d60e8:c.instructions+=5;goto B5d60e8;
case 0x5d60ea:c.instructions+=4;goto B5d60ea;
case 0x5d60ec:c.instructions+=3;goto B5d60ec;
case 0x5d60ee:c.instructions+=2;goto B5d60ee;
case 0x5d60f1:c.instructions+=1;goto B5d60f1;
case 0x5d60f3:goto L5d60f3;
case 0x5d60f4:goto L5d60f4;
case 0x5d60f6:c.instructions+=4;goto B5d60f6;
case 0x5d60fa:c.instructions+=3;goto B5d60fa;
case 0x5d60fc:c.instructions+=2;goto B5d60fc;
case 0x5d60ff:c.instructions+=1;goto B5d60ff;
case 0x5d6101:goto L5d6101;
case 0x5d6104:c.instructions+=2;goto B5d6104;
case 0x5d6105:c.instructions+=1;goto B5d6105;
case 0x5d610a:goto L5d610a;
case 0x5d610d:c.instructions+=4;goto B5d610d;
case 0x5d610f:c.instructions+=3;goto B5d610f;
case 0x5d6112:c.instructions+=2;goto B5d6112;
case 0x5d6115:c.instructions+=1;goto B5d6115;
case 0x5d6118:goto L5d6118;
case 0x5d611b:c.instructions+=4;goto B5d611b;
case 0x5d611c:c.instructions+=3;goto B5d611c;
case 0x5d611f:c.instructions+=2;goto B5d611f;
case 0x5d6121:c.instructions+=1;goto B5d6121;
case 0x5d6123:goto L5d6123;
case 0x5d6124:goto L5d6124;
case 0x5d6125:c.instructions+=3;goto B5d6125;
case 0x5d6126:c.instructions+=2;goto B5d6126;
case 0x5d6127:c.instructions+=1;goto B5d6127;
case 0x5d6130:goto L5d6130;
case 0x5d6134:c.instructions+=4;goto B5d6134;
case 0x5d6135:c.instructions+=3;goto B5d6135;
case 0x5d6136:c.instructions+=2;goto B5d6136;
case 0x5d6138:c.instructions+=1;goto B5d6138;
case 0x5d613d:goto L5d613d;
case 0x5d6143:c.instructions+=5;goto B5d6143;
case 0x5d6146:c.instructions+=4;goto B5d6146;
case 0x5d6147:c.instructions+=3;goto B5d6147;
case 0x5d614d:c.instructions+=2;goto B5d614d;
case 0x5d614e:c.instructions+=1;goto B5d614e;
case 0x5d6160:goto L5d6160;
case 0x5d6166:c.instructions+=2;goto B5d6166;
case 0x5d6168:c.instructions+=1;goto B5d6168;
case 0x5d616a:goto L5d616a;
case 0x5d616d:c.instructions+=4;goto B5d616d;
case 0x5d6170:c.instructions+=3;goto B5d6170;
case 0x5d6172:c.instructions+=2;goto B5d6172;
case 0x5d6178:c.instructions+=1;goto B5d6178;
case 0x5d617a:goto L5d617a;
case 0x5d617f:c.instructions+=1;goto B5d617f;
case 0x5d6180:goto L5d6180;
case 0x5d6182:c.instructions+=1;goto B5d6182;
case 0x5d6190:goto L5d6190;
case 0x5d6193:c.instructions+=7;goto B5d6193;
case 0x5d6194:c.instructions+=6;goto B5d6194;
case 0x5d619a:c.instructions+=5;goto B5d619a;
case 0x5d619c:c.instructions+=4;goto B5d619c;
case 0x5d619d:c.instructions+=3;goto B5d619d;
case 0x5d619e:c.instructions+=2;goto B5d619e;
case 0x5d619f:c.instructions+=1;goto B5d619f;
case 0x5d61a1:goto L5d61a1;
case 0x5d61a3:c.instructions+=2;goto B5d61a3;
case 0x5d61a5:c.instructions+=1;goto B5d61a5;
case 0x5d61a7:goto L5d61a7;
case 0x5d61ad:c.instructions+=1;goto B5d61ad;
case 0x5d61b0:goto L5d61b0;
case 0x5d61b2:c.instructions+=2;goto B5d61b2;
case 0x5d61b6:c.instructions+=1;goto B5d61b6;
case 0x5d61b8:goto L5d61b8;
case 0x5d61bc:c.instructions+=6;goto B5d61bc;
case 0x5d61bd:c.instructions+=5;goto B5d61bd;
case 0x5d61c2:c.instructions+=4;goto B5d61c2;
case 0x5d61c4:c.instructions+=3;goto B5d61c4;
case 0x5d61c6:c.instructions+=2;goto B5d61c6;
case 0x5d61c8:c.instructions+=1;goto B5d61c8;
case 0x5d61ca:goto L5d61ca;
case 0x5d61cc:c.instructions+=1;goto B5d61cc;
case 0x5d61ce:goto L5d61ce;
case 0x5d61d3:c.instructions+=2;goto B5d61d3;
case 0x5d61d5:c.instructions+=1;goto B5d61d5;
case 0x5d61d7:goto L5d61d7;
case 0x5d61d9:c.instructions+=2;goto B5d61d9;
case 0x5d61db:c.instructions+=1;goto B5d61db;
case 0x5d61dd:goto L5d61dd;
case 0x5d61e3:c.instructions+=5;goto B5d61e3;
case 0x5d61e6:c.instructions+=4;goto B5d61e6;
case 0x5d61ea:c.instructions+=3;goto B5d61ea;
case 0x5d61ec:c.instructions+=2;goto B5d61ec;
case 0x5d61ee:c.instructions+=1;goto B5d61ee;
case 0x5d61f0:goto L5d61f0;
case 0x5d61f1:c.instructions+=3;goto B5d61f1;
case 0x5d61f4:c.instructions+=2;goto B5d61f4;
case 0x5d61f6:c.instructions+=1;goto B5d61f6;
case 0x5d61f8:goto L5d61f8;
case 0x5d61f9:c.instructions+=5;goto B5d61f9;
case 0x5d61fa:c.instructions+=4;goto B5d61fa;
case 0x5d61fb:c.instructions+=3;goto B5d61fb;
case 0x5d61fd:c.instructions+=2;goto B5d61fd;
case 0x5d61fe:c.instructions+=1;goto B5d61fe;
case 0x5d6201:goto L5d6201;
case 0x5d6205:c.instructions+=5;goto B5d6205;
case 0x5d6206:c.instructions+=4;goto B5d6206;
case 0x5d6207:c.instructions+=3;goto B5d6207;
case 0x5d6208:c.instructions+=2;goto B5d6208;
case 0x5d6209:c.instructions+=1;goto B5d6209;
case 0x5d6210:goto L5d6210;
case 0x5d6213:c.instructions+=9;goto B5d6213;
case 0x5d6217:c.instructions+=8;goto B5d6217;
case 0x5d621a:c.instructions+=7;goto B5d621a;
case 0x5d621d:c.instructions+=6;goto B5d621d;
case 0x5d621f:c.instructions+=5;goto B5d621f;
case 0x5d6221:c.instructions+=4;goto B5d6221;
case 0x5d6224:c.instructions+=3;goto B5d6224;
case 0x5d622b:c.instructions+=2;goto B5d622b;
case 0x5d622e:c.instructions+=1;goto B5d622e;
case 0x5d6240:goto L5d6240;
case 0x5d6241:c.instructions+=57;goto B5d6241;
case 0x5d6245:c.instructions+=56;goto B5d6245;
case 0x5d6249:c.instructions+=55;goto B5d6249;
case 0x5d624d:c.instructions+=54;goto B5d624d;
case 0x5d6251:c.instructions+=53;goto B5d6251;
case 0x5d6255:c.instructions+=52;goto B5d6255;
case 0x5d6259:c.instructions+=51;goto B5d6259;
case 0x5d625a:c.instructions+=50;goto B5d625a;
case 0x5d6260:c.instructions+=49;goto B5d6260;
case 0x5d6262:c.instructions+=48;goto B5d6262;
case 0x5d6266:c.instructions+=47;goto B5d6266;
case 0x5d626a:c.instructions+=46;goto B5d626a;
case 0x5d626e:c.instructions+=45;goto B5d626e;
case 0x5d6274:c.instructions+=44;goto B5d6274;
case 0x5d6277:c.instructions+=43;goto B5d6277;
case 0x5d627b:c.instructions+=42;goto B5d627b;
case 0x5d6281:c.instructions+=41;goto B5d6281;
case 0x5d6283:c.instructions+=40;goto B5d6283;
case 0x5d6285:c.instructions+=39;goto B5d6285;
case 0x5d6288:c.instructions+=38;goto B5d6288;
case 0x5d628b:c.instructions+=37;goto B5d628b;
case 0x5d628f:c.instructions+=36;goto B5d628f;
case 0x5d6293:c.instructions+=35;goto B5d6293;
case 0x5d6297:c.instructions+=34;goto B5d6297;
case 0x5d629b:c.instructions+=33;goto B5d629b;
case 0x5d629f:c.instructions+=32;goto B5d629f;
case 0x5d62a3:c.instructions+=31;goto B5d62a3;
case 0x5d62a6:c.instructions+=30;goto B5d62a6;
case 0x5d62ac:c.instructions+=29;goto B5d62ac;
case 0x5d62b0:c.instructions+=28;goto B5d62b0;
case 0x5d62b4:c.instructions+=27;goto B5d62b4;
case 0x5d62ba:c.instructions+=26;goto B5d62ba;
case 0x5d62be:c.instructions+=25;goto B5d62be;
case 0x5d62c4:c.instructions+=24;goto B5d62c4;
case 0x5d62c7:c.instructions+=23;goto B5d62c7;
case 0x5d62c9:c.instructions+=22;goto B5d62c9;
case 0x5d62cc:c.instructions+=21;goto B5d62cc;
case 0x5d62cf:c.instructions+=20;goto B5d62cf;
case 0x5d62d3:c.instructions+=19;goto B5d62d3;
case 0x5d62d7:c.instructions+=18;goto B5d62d7;
case 0x5d62db:c.instructions+=17;goto B5d62db;
case 0x5d62df:c.instructions+=16;goto B5d62df;
case 0x5d62e3:c.instructions+=15;goto B5d62e3;
case 0x5d62e7:c.instructions+=14;goto B5d62e7;
case 0x5d62ea:c.instructions+=13;goto B5d62ea;
case 0x5d62f0:c.instructions+=12;goto B5d62f0;
case 0x5d62f1:c.instructions+=11;goto B5d62f1;
case 0x5d62f5:c.instructions+=10;goto B5d62f5;
case 0x5d62f9:c.instructions+=9;goto B5d62f9;
case 0x5d62ff:c.instructions+=8;goto B5d62ff;
case 0x5d6303:c.instructions+=7;goto B5d6303;
case 0x5d6309:c.instructions+=6;goto B5d6309;
case 0x5d630c:c.instructions+=5;goto B5d630c;
case 0x5d630e:c.instructions+=4;goto B5d630e;
case 0x5d6311:c.instructions+=3;goto B5d6311;
case 0x5d6314:c.instructions+=2;goto B5d6314;
case 0x5d6315:c.instructions+=1;goto B5d6315;
case 0x5d6320:goto L5d6320;
case 0x5d6321:c.instructions+=6;goto B5d6321;
case 0x5d6322:c.instructions+=5;goto B5d6322;
case 0x5d6326:c.instructions+=4;goto B5d6326;
case 0x5d6328:c.instructions+=3;goto B5d6328;
case 0x5d632a:c.instructions+=2;goto B5d632a;
case 0x5d6330:c.instructions+=1;goto B5d6330;
case 0x5d6335:goto L5d6335;
case 0x5d6339:c.instructions+=3;goto B5d6339;
case 0x5d633c:c.instructions+=2;goto B5d633c;
case 0x5d6342:c.instructions+=1;goto B5d6342;
case 0x5d6347:goto L5d6347;
case 0x5d634b:c.instructions+=3;goto B5d634b;
case 0x5d634e:c.instructions+=2;goto B5d634e;
case 0x5d6354:c.instructions+=1;goto B5d6354;
case 0x5d6359:goto L5d6359;
case 0x5d635d:c.instructions+=3;goto B5d635d;
case 0x5d6360:c.instructions+=2;goto B5d6360;
case 0x5d6366:c.instructions+=1;goto B5d6366;
case 0x5d636b:goto L5d636b;
case 0x5d636f:c.instructions+=3;goto B5d636f;
case 0x5d6372:c.instructions+=2;goto B5d6372;
case 0x5d6378:c.instructions+=1;goto B5d6378;
case 0x5d637d:goto L5d637d;
case 0x5d6381:c.instructions+=3;goto B5d6381;
case 0x5d6384:c.instructions+=2;goto B5d6384;
case 0x5d638a:c.instructions+=1;goto B5d638a;
case 0x5d638f:goto L5d638f;
case 0x5d6393:c.instructions+=3;goto B5d6393;
case 0x5d6396:c.instructions+=2;goto B5d6396;
case 0x5d639c:c.instructions+=1;goto B5d639c;
case 0x5d63a1:goto L5d63a1;
case 0x5d63a5:c.instructions+=3;goto B5d63a5;
case 0x5d63a8:c.instructions+=2;goto B5d63a8;
case 0x5d63ae:c.instructions+=1;goto B5d63ae;
case 0x5d63b3:goto L5d63b3;
case 0x5d63b7:c.instructions+=3;goto B5d63b7;
case 0x5d63ba:c.instructions+=2;goto B5d63ba;
case 0x5d63c0:c.instructions+=1;goto B5d63c0;
case 0x5d63c5:goto L5d63c5;
case 0x5d63c9:c.instructions+=9;goto B5d63c9;
case 0x5d63cc:c.instructions+=8;goto B5d63cc;
case 0x5d63cf:c.instructions+=7;goto B5d63cf;
case 0x5d63d2:c.instructions+=6;goto B5d63d2;
case 0x5d63d5:c.instructions+=5;goto B5d63d5;
case 0x5d63d8:c.instructions+=4;goto B5d63d8;
case 0x5d63d9:c.instructions+=3;goto B5d63d9;
case 0x5d63dc:c.instructions+=2;goto B5d63dc;
case 0x5d63dd:c.instructions+=1;goto B5d63dd;
case 0x5d63e0:goto L5d63e0;
case 0x5d63e1:c.instructions+=5;goto B5d63e1;
case 0x5d63e7:c.instructions+=4;goto B5d63e7;
case 0x5d63e8:c.instructions+=3;goto B5d63e8;
case 0x5d63ee:c.instructions+=2;goto B5d63ee;
case 0x5d63f0:c.instructions+=1;goto B5d63f0;
case 0x5d63f2:goto L5d63f2;
case 0x5d63f4:c.instructions+=2;goto B5d63f4;
case 0x5d63fc:c.instructions+=1;goto B5d63fc;
case 0x5d63fe:goto L5d63fe;
case 0x5d6400:goto L5d6400;
case 0x5d6402:c.instructions+=4;goto B5d6402;
case 0x5d6405:c.instructions+=3;goto B5d6405;
case 0x5d640b:c.instructions+=2;goto B5d640b;
case 0x5d640d:c.instructions+=1;goto B5d640d;
case 0x5d640f:goto L5d640f;
case 0x5d6410:c.instructions+=2;goto B5d6410;
case 0x5d6412:c.instructions+=1;goto B5d6412;
case 0x5d6414:goto L5d6414;
case 0x5d6415:c.instructions+=2;goto B5d6415;
case 0x5d641b:c.instructions+=1;goto B5d641b;
case 0x5d641d:goto L5d641d;
case 0x5d641e:c.instructions+=3;goto B5d641e;
case 0x5d6424:c.instructions+=2;goto B5d6424;
case 0x5d6425:c.instructions+=1;goto B5d6425;
case 0x5d6430:goto L5d6430;
case 0x5d6434:c.instructions+=3;goto B5d6434;
case 0x5d643a:c.instructions+=2;goto B5d643a;
case 0x5d643d:c.instructions+=1;goto B5d643d;
case 0x5d6440:goto L5d6440;
case 0x5d6444:c.instructions+=2;goto B5d6444;
case 0x5d644a:c.instructions+=1;goto B5d644a;
case 0x5d644c:goto L5d644c;
case 0x5d6451:c.instructions+=4;goto B5d6451;
case 0x5d6456:c.instructions+=3;goto B5d6456;
case 0x5d645b:c.instructions+=2;goto B5d645b;
case 0x5d6460:c.instructions+=1;goto B5d6460;
case 0x5d6461:goto L5d6461;
case 0x5d6463:c.instructions+=1;goto B5d6463;
case 0x5d6470:goto L5d6470;
case 0x5d6474:c.instructions+=7;goto B5d6474;
case 0x5d6475:c.instructions+=6;goto B5d6475;
case 0x5d6479:c.instructions+=5;goto B5d6479;
case 0x5d647b:c.instructions+=4;goto B5d647b;
case 0x5d647d:c.instructions+=3;goto B5d647d;
case 0x5d647e:c.instructions+=2;goto B5d647e;
case 0x5d6482:c.instructions+=1;goto B5d6482;
case 0x5d6484:goto L5d6484;
case 0x5d6488:c.instructions+=2;goto B5d6488;
case 0x5d648a:c.instructions+=1;goto B5d648a;
case 0x5d648c:goto L5d648c;
case 0x5d648d:c.instructions+=2;goto B5d648d;
case 0x5d648f:c.instructions+=1;goto B5d648f;
case 0x5d6491:goto L5d6491;
case 0x5d6493:c.instructions+=8;goto B5d6493;
case 0x5d6494:c.instructions+=7;goto B5d6494;
case 0x5d6498:c.instructions+=6;goto B5d6498;
case 0x5d6499:c.instructions+=5;goto B5d6499;
case 0x5d649b:c.instructions+=4;goto B5d649b;
case 0x5d649f:c.instructions+=3;goto B5d649f;
case 0x5d64a0:c.instructions+=2;goto B5d64a0;
case 0x5d64a1:c.instructions+=1;goto B5d64a1;
case 0x5d64a2:goto L5d64a2;
case 0x5d64a4:c.instructions+=1;goto B5d64a4;
case 0x5d64a6:goto L5d64a6;
case 0x5d64a8:c.instructions+=8;goto B5d64a8;
case 0x5d64a9:c.instructions+=7;goto B5d64a9;
case 0x5d64ad:c.instructions+=6;goto B5d64ad;
case 0x5d64ae:c.instructions+=5;goto B5d64ae;
case 0x5d64b0:c.instructions+=4;goto B5d64b0;
case 0x5d64b4:c.instructions+=3;goto B5d64b4;
case 0x5d64b5:c.instructions+=2;goto B5d64b5;
case 0x5d64b6:c.instructions+=1;goto B5d64b6;
case 0x5d64b7:goto L5d64b7;
case 0x5d64bd:c.instructions+=4;goto B5d64bd;
case 0x5d64be:c.instructions+=3;goto B5d64be;
case 0x5d64c0:c.instructions+=2;goto B5d64c0;
case 0x5d64c1:c.instructions+=1;goto B5d64c1;
case 0x5d64d0:goto L5d64d0;
case 0x5d64d1:c.instructions+=25;goto B5d64d1;
case 0x5d64d3:c.instructions+=24;goto B5d64d3;
case 0x5d64d6:c.instructions+=23;goto B5d64d6;
case 0x5d64d9:c.instructions+=22;goto B5d64d9;
case 0x5d64dc:c.instructions+=21;goto B5d64dc;
case 0x5d64df:c.instructions+=20;goto B5d64df;
case 0x5d64e1:c.instructions+=19;goto B5d64e1;
case 0x5d64e4:c.instructions+=18;goto B5d64e4;
case 0x5d64e7:c.instructions+=17;goto B5d64e7;
case 0x5d64ea:c.instructions+=16;goto B5d64ea;
case 0x5d64ed:c.instructions+=15;goto B5d64ed;
case 0x5d64f0:c.instructions+=14;goto B5d64f0;
case 0x5d64f2:c.instructions+=13;goto B5d64f2;
case 0x5d64f5:c.instructions+=12;goto B5d64f5;
case 0x5d64f7:c.instructions+=11;goto B5d64f7;
case 0x5d64fa:c.instructions+=10;goto B5d64fa;
case 0x5d64fc:c.instructions+=9;goto B5d64fc;
case 0x5d64fe:c.instructions+=8;goto B5d64fe;
case 0x5d6501:c.instructions+=7;goto B5d6501;
case 0x5d6503:c.instructions+=6;goto B5d6503;
case 0x5d6506:c.instructions+=5;goto B5d6506;
case 0x5d6508:c.instructions+=4;goto B5d6508;
case 0x5d650a:c.instructions+=3;goto B5d650a;
case 0x5d650c:c.instructions+=2;goto B5d650c;
case 0x5d650f:c.instructions+=1;goto B5d650f;
case 0x5d6511:goto L5d6511;
case 0x5d6513:c.instructions+=6;goto B5d6513;
case 0x5d6515:c.instructions+=5;goto B5d6515;
case 0x5d6517:c.instructions+=4;goto B5d6517;
case 0x5d6519:c.instructions+=3;goto B5d6519;
case 0x5d651b:c.instructions+=2;goto B5d651b;
case 0x5d651c:c.instructions+=1;goto B5d651c;
case 0x5d651d:goto L5d651d;
case 0x5d651f:c.instructions+=19;goto B5d651f;
case 0x5d6521:c.instructions+=18;goto B5d6521;
case 0x5d6523:c.instructions+=17;goto B5d6523;
case 0x5d6525:c.instructions+=16;goto B5d6525;
case 0x5d6527:c.instructions+=15;goto B5d6527;
case 0x5d6529:c.instructions+=14;goto B5d6529;
case 0x5d652b:c.instructions+=13;goto B5d652b;
case 0x5d652d:c.instructions+=12;goto B5d652d;
case 0x5d652f:c.instructions+=11;goto B5d652f;
case 0x5d6531:c.instructions+=10;goto B5d6531;
case 0x5d6533:c.instructions+=9;goto B5d6533;
case 0x5d6535:c.instructions+=8;goto B5d6535;
case 0x5d6538:c.instructions+=7;goto B5d6538;
case 0x5d653c:c.instructions+=6;goto B5d653c;
case 0x5d6542:c.instructions+=5;goto B5d6542;
case 0x5d6546:c.instructions+=4;goto B5d6546;
case 0x5d6549:c.instructions+=3;goto B5d6549;
case 0x5d654b:c.instructions+=2;goto B5d654b;
case 0x5d654e:c.instructions+=1;goto B5d654e;
case 0x5d6550:goto L5d6550;
case 0x5d6552:c.instructions+=3;goto B5d6552;
case 0x5d6558:c.instructions+=2;goto B5d6558;
case 0x5d655c:c.instructions+=1;goto B5d655c;
case 0x5d655f:goto L5d655f;
case 0x5d6564:goto L5d6564;
case 0x5d6566:c.instructions+=2;goto B5d6566;
case 0x5d6567:c.instructions+=1;goto B5d6567;
case 0x5d6570:goto L5d6570;
case 0x5d6571:c.instructions+=15;goto B5d6571;
case 0x5d6573:c.instructions+=14;goto B5d6573;
case 0x5d6576:c.instructions+=13;goto B5d6576;
case 0x5d6579:c.instructions+=12;goto B5d6579;
case 0x5d657a:c.instructions+=11;goto B5d657a;
case 0x5d657d:c.instructions+=10;goto B5d657d;
case 0x5d657e:c.instructions+=9;goto B5d657e;
case 0x5d6581:c.instructions+=8;goto B5d6581;
case 0x5d6583:c.instructions+=7;goto B5d6583;
case 0x5d6589:c.instructions+=6;goto B5d6589;
case 0x5d658a:c.instructions+=5;goto B5d658a;
case 0x5d658d:c.instructions+=4;goto B5d658d;
case 0x5d6590:c.instructions+=3;goto B5d6590;
case 0x5d6592:c.instructions+=2;goto B5d6592;
case 0x5d6594:c.instructions+=1;goto B5d6594;
case 0x5d6596:goto L5d6596;
case 0x5d6599:c.instructions+=10;goto B5d6599;
case 0x5d659b:c.instructions+=9;goto B5d659b;
case 0x5d659e:c.instructions+=8;goto B5d659e;
case 0x5d65a1:c.instructions+=7;goto B5d65a1;
case 0x5d65a4:c.instructions+=6;goto B5d65a4;
case 0x5d65a6:c.instructions+=5;goto B5d65a6;
case 0x5d65a9:c.instructions+=4;goto B5d65a9;
case 0x5d65ae:c.instructions+=3;goto B5d65ae;
case 0x5d65b0:c.instructions+=2;goto B5d65b0;
case 0x5d65b3:c.instructions+=1;goto B5d65b3;
case 0x5d65b9:goto L5d65b9;
case 0x5d65bc:goto L5d65bc;
case 0x5d65bf:c.instructions+=5;goto B5d65bf;
case 0x5d65c1:c.instructions+=4;goto B5d65c1;
case 0x5d65c5:c.instructions+=3;goto B5d65c5;
case 0x5d65c8:c.instructions+=2;goto B5d65c8;
case 0x5d65ca:c.instructions+=1;goto B5d65ca;
case 0x5d65d0:goto L5d65d0;
case 0x5d65d4:c.instructions+=6;goto B5d65d4;
case 0x5d65d7:c.instructions+=5;goto B5d65d7;
case 0x5d65da:c.instructions+=4;goto B5d65da;
case 0x5d65dd:c.instructions+=3;goto B5d65dd;
case 0x5d65df:c.instructions+=2;goto B5d65df;
case 0x5d65e2:c.instructions+=1;goto B5d65e2;
case 0x5d65e4:goto L5d65e4;
case 0x5d65e7:c.instructions+=18;goto B5d65e7;
case 0x5d65e9:c.instructions+=17;goto B5d65e9;
case 0x5d65ed:c.instructions+=16;goto B5d65ed;
case 0x5d65f0:c.instructions+=15;goto B5d65f0;
case 0x5d65f2:c.instructions+=14;goto B5d65f2;
case 0x5d65f6:c.instructions+=13;goto B5d65f6;
case 0x5d65f9:c.instructions+=12;goto B5d65f9;
case 0x5d65fd:c.instructions+=11;goto B5d65fd;
case 0x5d6601:c.instructions+=10;goto B5d6601;
case 0x5d6604:c.instructions+=9;goto B5d6604;
case 0x5d6605:c.instructions+=8;goto B5d6605;
case 0x5d6609:c.instructions+=7;goto B5d6609;
case 0x5d660c:c.instructions+=6;goto B5d660c;
case 0x5d6610:c.instructions+=5;goto B5d6610;
case 0x5d6611:c.instructions+=4;goto B5d6611;
case 0x5d6614:c.instructions+=3;goto B5d6614;
case 0x5d6618:c.instructions+=2;goto B5d6618;
case 0x5d661c:c.instructions+=1;goto B5d661c;
case 0x5d6621:goto L5d6621;
case 0x5d6623:c.instructions+=2;goto B5d6623;
case 0x5d6626:c.instructions+=1;goto B5d6626;
case 0x5d662c:goto L5d662c;
case 0x5d6632:c.instructions+=7;goto B5d6632;
case 0x5d6633:c.instructions+=6;goto B5d6633;
case 0x5d6636:c.instructions+=5;goto B5d6636;
case 0x5d6639:c.instructions+=4;goto B5d6639;
case 0x5d663c:c.instructions+=3;goto B5d663c;
case 0x5d663d:c.instructions+=2;goto B5d663d;
case 0x5d663e:c.instructions+=1;goto B5d663e;
case 0x5d6643:goto L5d6643;
case 0x5d6646:c.instructions+=3;goto B5d6646;
case 0x5d6649:c.instructions+=2;goto B5d6649;
case 0x5d664d:c.instructions+=1;goto B5d664d;
case 0x5d6653:goto L5d6653;
case 0x5d6656:c.instructions+=2;goto B5d6656;
case 0x5d6659:c.instructions+=1;goto B5d6659;
case 0x5d665f:goto L5d665f;
case 0x5d6662:c.instructions+=1;goto B5d6662;
case 0x5d6664:goto L5d6664;
case 0x5d6667:c.instructions+=1;goto B5d6667;
case 0x5d666d:goto L5d666d;
case 0x5d6670:c.instructions+=1;goto B5d6670;
case 0x5d6675:goto L5d6675;
case 0x5d667a:goto L5d667a;
case 0x5d667d:c.instructions+=2;goto B5d667d;
case 0x5d6681:c.instructions+=1;goto B5d6681;
case 0x5d6683:goto L5d6683;
case 0x5d6686:c.instructions+=1;goto B5d6686;
case 0x5d668c:goto L5d668c;
case 0x5d668f:c.instructions+=1;goto B5d668f;
case 0x5d6694:goto L5d6694;
case 0x5d6697:c.instructions+=1;goto B5d6697;
case 0x5d669d:goto L5d669d;
case 0x5d66a0:c.instructions+=3;goto B5d66a0;
case 0x5d66a6:c.instructions+=2;goto B5d66a6;
case 0x5d66a8:c.instructions+=1;goto B5d66a8;
case 0x5d66aa:goto L5d66aa;
case 0x5d66ad:c.instructions+=2;goto B5d66ad;
case 0x5d66af:c.instructions+=1;goto B5d66af;
case 0x5d66b1:goto L5d66b1;
case 0x5d66b6:c.instructions+=1;goto B5d66b6;
case 0x5d66b8:goto L5d66b8;
case 0x5d66ba:c.instructions+=2;goto B5d66ba;
case 0x5d66c0:c.instructions+=1;goto B5d66c0;
case 0x5d66c2:goto L5d66c2;
case 0x5d66c8:c.instructions+=4;goto B5d66c8;
case 0x5d66ce:c.instructions+=3;goto B5d66ce;
case 0x5d66d0:c.instructions+=2;goto B5d66d0;
case 0x5d66d3:c.instructions+=1;goto B5d66d3;
case 0x5d66d5:goto L5d66d5;
case 0x5d66d7:c.instructions+=5;goto B5d66d7;
case 0x5d66dd:c.instructions+=4;goto B5d66dd;
case 0x5d66e3:c.instructions+=3;goto B5d66e3;
case 0x5d66e5:c.instructions+=2;goto B5d66e5;
case 0x5d66e8:c.instructions+=1;goto B5d66e8;
case 0x5d66ea:goto L5d66ea;
case 0x5d66ec:c.instructions+=1;goto B5d66ec;
case 0x5d66f2:goto L5d66f2;
case 0x5d66f6:goto L5d66f6;
case 0x5d66fc:c.instructions+=3;goto B5d66fc;
case 0x5d66fe:c.instructions+=2;goto B5d66fe;
case 0x5d6701:c.instructions+=1;goto B5d6701;
case 0x5d6707:goto L5d6707;
case 0x5d670c:goto L5d670c;
case 0x5d670f:c.instructions+=1;goto B5d670f;
case 0x5d6715:goto L5d6715;
case 0x5d6718:c.instructions+=1;goto B5d6718;
case 0x5d671a:goto L5d671a;
case 0x5d671e:c.instructions+=1;goto B5d671e;
case 0x5d6720:goto L5d6720;
case 0x5d6723:c.instructions+=1;goto B5d6723;
case 0x5d6729:goto L5d6729;
case 0x5d672c:c.instructions+=1;goto B5d672c;
case 0x5d672e:goto L5d672e;
case 0x5d6731:c.instructions+=1;goto B5d6731;
case 0x5d6737:goto L5d6737;
case 0x5d673a:goto L5d673a;
case 0x5d673c:c.instructions+=1;goto B5d673c;
case 0x5d6742:goto L5d6742;
case 0x5d6746:c.instructions+=1;goto B5d6746;
case 0x5d6748:goto L5d6748;
case 0x5d674b:c.instructions+=3;goto B5d674b;
case 0x5d674e:c.instructions+=2;goto B5d674e;
case 0x5d6751:c.instructions+=1;goto B5d6751;
case 0x5d6757:goto L5d6757;
case 0x5d675a:c.instructions+=12;goto B5d675a;
case 0x5d675d:c.instructions+=11;goto B5d675d;
case 0x5d6760:c.instructions+=10;goto B5d6760;
case 0x5d6762:c.instructions+=9;goto B5d6762;
case 0x5d6764:c.instructions+=8;goto B5d6764;
case 0x5d676b:c.instructions+=7;goto B5d676b;
case 0x5d676e:c.instructions+=6;goto B5d676e;
case 0x5d676f:c.instructions+=5;goto B5d676f;
case 0x5d6770:c.instructions+=4;goto B5d6770;
case 0x5d6771:c.instructions+=3;goto B5d6771;
case 0x5d6773:c.instructions+=2;goto B5d6773;
case 0x5d6774:c.instructions+=1;goto B5d6774;
case 0x5d6777:goto L5d6777;
case 0x5d6779:c.instructions+=1;goto B5d6779;
case 0x5d677e:goto L5d677e;
case 0x5d6780:c.instructions+=3;goto B5d6780;
case 0x5d6783:c.instructions+=2;goto B5d6783;
case 0x5d6785:c.instructions+=1;goto B5d6785;
case 0x5d678b:goto L5d678b;
case 0x5d678c:c.instructions+=2;goto B5d678c;
case 0x5d678e:c.instructions+=1;goto B5d678e;
case 0x5d6793:goto L5d6793;
case 0x5d6796:c.instructions+=3;goto B5d6796;
case 0x5d6797:c.instructions+=2;goto B5d6797;
case 0x5d6799:c.instructions+=1;goto B5d6799;
case 0x5d679e:goto L5d679e;
case 0x5d67a1:c.instructions+=3;goto B5d67a1;
case 0x5d67a4:c.instructions+=2;goto B5d67a4;
case 0x5d67a7:c.instructions+=1;goto B5d67a7;
case 0x5d67a9:goto L5d67a9;
case 0x5d67ac:c.instructions+=2;goto B5d67ac;
case 0x5d67ae:c.instructions+=1;goto B5d67ae;
case 0x5d67b1:goto L5d67b1;
case 0x5d67b4:c.instructions+=3;goto B5d67b4;
case 0x5d67b7:c.instructions+=2;goto B5d67b7;
case 0x5d67bb:c.instructions+=1;goto B5d67bb;
case 0x5d67c1:goto L5d67c1;
case 0x5d67c4:c.instructions+=7;goto B5d67c4;
case 0x5d67c7:c.instructions+=6;goto B5d67c7;
case 0x5d67ca:c.instructions+=5;goto B5d67ca;
case 0x5d67cc:c.instructions+=4;goto B5d67cc;
case 0x5d67ce:c.instructions+=3;goto B5d67ce;
case 0x5d67d1:c.instructions+=2;goto B5d67d1;
case 0x5d67d4:c.instructions+=1;goto B5d67d4;
case 0x5d67d6:goto L5d67d6;
case 0x5d67d9:c.instructions+=2;goto B5d67d9;
case 0x5d67db:c.instructions+=1;goto B5d67db;
case 0x5d67dd:goto L5d67dd;
case 0x5d67e0:c.instructions+=2;goto B5d67e0;
case 0x5d67e2:c.instructions+=1;goto B5d67e2;
case 0x5d67e4:goto L5d67e4;
case 0x5d67ea:c.instructions+=3;goto B5d67ea;
case 0x5d67eb:c.instructions+=2;goto B5d67eb;
case 0x5d67ee:c.instructions+=1;goto B5d67ee;
case 0x5d67f3:goto L5d67f3;
case 0x5d67f4:c.instructions+=9;goto B5d67f4;
case 0x5d67f9:c.instructions+=8;goto B5d67f9;
case 0x5d67fb:c.instructions+=7;goto B5d67fb;
case 0x5d67fe:c.instructions+=6;goto B5d67fe;
case 0x5d6801:c.instructions+=5;goto B5d6801;
case 0x5d6802:c.instructions+=4;goto B5d6802;
case 0x5d6806:c.instructions+=3;goto B5d6806;
case 0x5d6807:c.instructions+=2;goto B5d6807;
case 0x5d6808:c.instructions+=1;goto B5d6808;
case 0x5d680d:goto L5d680d;
case 0x5d6811:c.instructions+=4;goto B5d6811;
case 0x5d6812:c.instructions+=3;goto B5d6812;
case 0x5d6813:c.instructions+=2;goto B5d6813;
case 0x5d6814:c.instructions+=1;goto B5d6814;
case 0x5d6819:goto L5d6819;
case 0x5d681d:c.instructions+=1;goto B5d681d;
case 0x5d6820:goto L5d6820;
case 0x5d6822:c.instructions+=3;goto B5d6822;
case 0x5d6825:c.instructions+=2;goto B5d6825;
case 0x5d6828:c.instructions+=1;goto B5d6828;
case 0x5d682d:goto L5d682d;
case 0x5d6830:c.instructions+=4;goto B5d6830;
case 0x5d6833:c.instructions+=3;goto B5d6833;
case 0x5d6836:c.instructions+=2;goto B5d6836;
case 0x5d6838:c.instructions+=1;goto B5d6838;
case 0x5d683a:goto L5d683a;
case 0x5d683c:c.instructions+=1;goto B5d683c;
case 0x5d6841:goto L5d6841;
case 0x5d6844:c.instructions+=3;goto B5d6844;
case 0x5d6847:c.instructions+=2;goto B5d6847;
case 0x5d6849:c.instructions+=1;goto B5d6849;
case 0x5d684f:goto L5d684f;
case 0x5d6851:c.instructions+=2;goto B5d6851;
case 0x5d6853:c.instructions+=1;goto B5d6853;
case 0x5d6858:goto L5d6858;
case 0x5d685a:c.instructions+=2;goto B5d685a;
case 0x5d685c:c.instructions+=1;goto B5d685c;
case 0x5d6862:goto L5d6862;
case 0x5d6865:c.instructions+=2;goto B5d6865;
case 0x5d6867:c.instructions+=1;goto B5d6867;
case 0x5d686d:goto L5d686d;
case 0x5d686f:c.instructions+=1;goto B5d686f;
case 0x5d6874:goto L5d6874;
case 0x5d6877:c.instructions+=12;goto B5d6877;
case 0x5d687a:c.instructions+=11;goto B5d687a;
case 0x5d687c:c.instructions+=10;goto B5d687c;
case 0x5d687e:c.instructions+=9;goto B5d687e;
case 0x5d6881:c.instructions+=8;goto B5d6881;
case 0x5d6884:c.instructions+=7;goto B5d6884;
case 0x5d6886:c.instructions+=6;goto B5d6886;
case 0x5d6887:c.instructions+=5;goto B5d6887;
case 0x5d688a:c.instructions+=4;goto B5d688a;
case 0x5d688d:c.instructions+=3;goto B5d688d;
case 0x5d688e:c.instructions+=2;goto B5d688e;
case 0x5d688f:c.instructions+=1;goto B5d688f;
case 0x5d6894:goto L5d6894;
case 0x5d6896:c.instructions+=3;goto B5d6896;
case 0x5d6899:c.instructions+=2;goto B5d6899;
case 0x5d689b:c.instructions+=1;goto B5d689b;
case 0x5d68a1:goto L5d68a1;
case 0x5d68a4:c.instructions+=52;goto B5d68a4;
case 0x5d68a7:c.instructions+=51;goto B5d68a7;
case 0x5d68aa:c.instructions+=50;goto B5d68aa;
case 0x5d68ae:c.instructions+=49;goto B5d68ae;
case 0x5d68b2:c.instructions+=48;goto B5d68b2;
case 0x5d68b5:c.instructions+=47;goto B5d68b5;
case 0x5d68b8:c.instructions+=46;goto B5d68b8;
case 0x5d68bc:c.instructions+=45;goto B5d68bc;
case 0x5d68bf:c.instructions+=44;goto B5d68bf;
case 0x5d68c2:c.instructions+=43;goto B5d68c2;
case 0x5d68c5:c.instructions+=42;goto B5d68c5;
case 0x5d68c9:c.instructions+=41;goto B5d68c9;
case 0x5d68cd:c.instructions+=40;goto B5d68cd;
case 0x5d68d0:c.instructions+=39;goto B5d68d0;
case 0x5d68d4:c.instructions+=38;goto B5d68d4;
case 0x5d68d7:c.instructions+=37;goto B5d68d7;
case 0x5d68d9:c.instructions+=36;goto B5d68d9;
case 0x5d68dd:c.instructions+=35;goto B5d68dd;
case 0x5d68df:c.instructions+=34;goto B5d68df;
case 0x5d68e1:c.instructions+=33;goto B5d68e1;
case 0x5d68e4:c.instructions+=32;goto B5d68e4;
case 0x5d68e8:c.instructions+=31;goto B5d68e8;
case 0x5d68eb:c.instructions+=30;goto B5d68eb;
case 0x5d68ef:c.instructions+=29;goto B5d68ef;
case 0x5d68f2:c.instructions+=28;goto B5d68f2;
case 0x5d68f4:c.instructions+=27;goto B5d68f4;
case 0x5d68f8:c.instructions+=26;goto B5d68f8;
case 0x5d68fb:c.instructions+=25;goto B5d68fb;
case 0x5d68fd:c.instructions+=24;goto B5d68fd;
case 0x5d6900:c.instructions+=23;goto B5d6900;
case 0x5d6904:c.instructions+=22;goto B5d6904;
case 0x5d6907:c.instructions+=21;goto B5d6907;
case 0x5d690b:c.instructions+=20;goto B5d690b;
case 0x5d690e:c.instructions+=19;goto B5d690e;
case 0x5d6910:c.instructions+=18;goto B5d6910;
case 0x5d6914:c.instructions+=17;goto B5d6914;
case 0x5d6917:c.instructions+=16;goto B5d6917;
case 0x5d6919:c.instructions+=15;goto B5d6919;
case 0x5d691c:c.instructions+=14;goto B5d691c;
case 0x5d6920:c.instructions+=13;goto B5d6920;
case 0x5d6922:c.instructions+=12;goto B5d6922;
case 0x5d6926:c.instructions+=11;goto B5d6926;
case 0x5d692a:c.instructions+=10;goto B5d692a;
case 0x5d692e:c.instructions+=9;goto B5d692e;
case 0x5d6931:c.instructions+=8;goto B5d6931;
case 0x5d6933:c.instructions+=7;goto B5d6933;
case 0x5d6936:c.instructions+=6;goto B5d6936;
case 0x5d6939:c.instructions+=5;goto B5d6939;
case 0x5d693c:c.instructions+=4;goto B5d693c;
case 0x5d693e:c.instructions+=3;goto B5d693e;
case 0x5d6941:c.instructions+=2;goto B5d6941;
case 0x5d6945:c.instructions+=1;goto B5d6945;
case 0x5d6947:goto L5d6947;
case 0x5d694b:c.instructions+=11;goto B5d694b;
case 0x5d694e:c.instructions+=10;goto B5d694e;
case 0x5d6951:c.instructions+=9;goto B5d6951;
case 0x5d6955:c.instructions+=8;goto B5d6955;
case 0x5d6959:c.instructions+=7;goto B5d6959;
case 0x5d695a:c.instructions+=6;goto B5d695a;
case 0x5d695d:c.instructions+=5;goto B5d695d;
case 0x5d6961:c.instructions+=4;goto B5d6961;
case 0x5d6962:c.instructions+=3;goto B5d6962;
case 0x5d6966:c.instructions+=2;goto B5d6966;
case 0x5d696a:c.instructions+=1;goto B5d696a;
case 0x5d696f:goto L5d696f;
case 0x5d6973:c.instructions+=6;goto B5d6973;
case 0x5d6977:c.instructions+=5;goto B5d6977;
case 0x5d697a:c.instructions+=4;goto B5d697a;
case 0x5d697d:c.instructions+=3;goto B5d697d;
case 0x5d6980:c.instructions+=2;goto B5d6980;
case 0x5d6987:c.instructions+=1;goto B5d6987;
case 0x5d6989:goto L5d6989;
case 0x5d698b:c.instructions+=1;goto B5d698b;
case 0x5d698f:goto L5d698f;
case 0x5d6990:c.instructions+=2;goto B5d6990;
case 0x5d6992:c.instructions+=1;goto B5d6992;
case 0x5d6997:goto L5d6997;
case 0x5d6999:c.instructions+=2;goto B5d6999;
case 0x5d699b:c.instructions+=1;goto B5d699b;
case 0x5d69a1:goto L5d69a1;
case 0x5d69a2:c.instructions+=5;goto B5d69a2;
case 0x5d69a3:c.instructions+=4;goto B5d69a3;
case 0x5d69a4:c.instructions+=3;goto B5d69a4;
case 0x5d69a6:c.instructions+=2;goto B5d69a6;
case 0x5d69a7:c.instructions+=1;goto B5d69a7;
case 0x5d69b0:goto L5d69b0;
case 0x5d69b1:c.instructions+=13;goto B5d69b1;
case 0x5d69b3:c.instructions+=12;goto B5d69b3;
case 0x5d69b6:c.instructions+=11;goto B5d69b6;
case 0x5d69bc:c.instructions+=10;goto B5d69bc;
case 0x5d69bf:c.instructions+=9;goto B5d69bf;
case 0x5d69c0:c.instructions+=8;goto B5d69c0;
case 0x5d69c1:c.instructions+=7;goto B5d69c1;
case 0x5d69c2:c.instructions+=6;goto B5d69c2;
case 0x5d69c6:c.instructions+=5;goto B5d69c6;
case 0x5d69cd:c.instructions+=4;goto B5d69cd;
case 0x5d69d4:c.instructions+=3;goto B5d69d4;
case 0x5d69d9:c.instructions+=2;goto B5d69d9;
case 0x5d69dd:c.instructions+=1;goto B5d69dd;
case 0x5d69e0:goto L5d69e0;
case 0x5d69e3:c.instructions+=6;goto B5d69e3;
case 0x5d69e6:c.instructions+=5;goto B5d69e6;
case 0x5d69e9:c.instructions+=4;goto B5d69e9;
case 0x5d69ea:c.instructions+=3;goto B5d69ea;
case 0x5d69ed:c.instructions+=2;goto B5d69ed;
case 0x5d69f1:c.instructions+=1;goto B5d69f1;
case 0x5d69f3:goto L5d69f3;
case 0x5d69f6:c.instructions+=19;goto B5d69f6;
case 0x5d69f8:c.instructions+=18;goto B5d69f8;
case 0x5d69fc:c.instructions+=17;goto B5d69fc;
case 0x5d69ff:c.instructions+=16;goto B5d69ff;
case 0x5d6a01:c.instructions+=15;goto B5d6a01;
case 0x5d6a05:c.instructions+=14;goto B5d6a05;
case 0x5d6a08:c.instructions+=13;goto B5d6a08;
case 0x5d6a0c:c.instructions+=12;goto B5d6a0c;
case 0x5d6a0f:c.instructions+=11;goto B5d6a0f;
case 0x5d6a12:c.instructions+=10;goto B5d6a12;
case 0x5d6a16:c.instructions+=9;goto B5d6a16;
case 0x5d6a19:c.instructions+=8;goto B5d6a19;
case 0x5d6a1d:c.instructions+=7;goto B5d6a1d;
case 0x5d6a21:c.instructions+=6;goto B5d6a21;
case 0x5d6a24:c.instructions+=5;goto B5d6a24;
case 0x5d6a25:c.instructions+=4;goto B5d6a25;
case 0x5d6a29:c.instructions+=3;goto B5d6a29;
case 0x5d6a2d:c.instructions+=2;goto B5d6a2d;
case 0x5d6a2e:c.instructions+=1;goto B5d6a2e;
case 0x5d6a33:goto L5d6a33;
case 0x5d6a37:c.instructions+=1;goto B5d6a37;
case 0x5d6a39:goto L5d6a39;
case 0x5d6a3b:c.instructions+=1;goto B5d6a3b;
case 0x5d6a3d:goto L5d6a3d;
case 0x5d6a42:c.instructions+=2;goto B5d6a42;
case 0x5d6a4a:c.instructions+=1;goto B5d6a4a;
case 0x5d6a4c:goto L5d6a4c;
case 0x5d6a4f:c.instructions+=1;goto B5d6a4f;
case 0x5d6a53:goto L5d6a53;
case 0x5d6a57:c.instructions+=3;goto B5d6a57;
case 0x5d6a5a:c.instructions+=2;goto B5d6a5a;
case 0x5d6a5d:c.instructions+=1;goto B5d6a5d;
case 0x5d6a5f:goto L5d6a5f;
case 0x5d6a62:c.instructions+=7;goto B5d6a62;
case 0x5d6a65:c.instructions+=6;goto B5d6a65;
case 0x5d6a66:c.instructions+=5;goto B5d6a66;
case 0x5d6a69:c.instructions+=4;goto B5d6a69;
case 0x5d6a6a:c.instructions+=3;goto B5d6a6a;
case 0x5d6a6e:c.instructions+=2;goto B5d6a6e;
case 0x5d6a6f:c.instructions+=1;goto B5d6a6f;
case 0x5d6a74:goto L5d6a74;
case 0x5d6a78:c.instructions+=1;goto B5d6a78;
case 0x5d6a7a:goto L5d6a7a;
case 0x5d6a7e:c.instructions+=10;goto B5d6a7e;
case 0x5d6a81:c.instructions+=9;goto B5d6a81;
case 0x5d6a84:c.instructions+=8;goto B5d6a84;
case 0x5d6a87:c.instructions+=7;goto B5d6a87;
case 0x5d6a8a:c.instructions+=6;goto B5d6a8a;
case 0x5d6a8c:c.instructions+=5;goto B5d6a8c;
case 0x5d6a8e:c.instructions+=4;goto B5d6a8e;
case 0x5d6a91:c.instructions+=3;goto B5d6a91;
case 0x5d6a93:c.instructions+=2;goto B5d6a93;
case 0x5d6a94:c.instructions+=1;goto B5d6a94;
case 0x5d6a98:goto L5d6a98;
case 0x5d6a9c:c.instructions+=8;goto B5d6a9c;
case 0x5d6aa0:c.instructions+=7;goto B5d6aa0;
case 0x5d6aa3:c.instructions+=6;goto B5d6aa3;
case 0x5d6aa7:c.instructions+=5;goto B5d6aa7;
case 0x5d6aab:c.instructions+=4;goto B5d6aab;
case 0x5d6aac:c.instructions+=3;goto B5d6aac;
case 0x5d6aae:c.instructions+=2;goto B5d6aae;
case 0x5d6ab2:c.instructions+=1;goto B5d6ab2;
case 0x5d6ab4:goto L5d6ab4;
case 0x5d6abb:c.instructions+=2;goto B5d6abb;
case 0x5d6abd:c.instructions+=1;goto B5d6abd;
case 0x5d6ac3:goto L5d6ac3;
case 0x5d6ac4:c.instructions+=5;goto B5d6ac4;
case 0x5d6ac5:c.instructions+=4;goto B5d6ac5;
case 0x5d6ac6:c.instructions+=3;goto B5d6ac6;
case 0x5d6ac8:c.instructions+=2;goto B5d6ac8;
case 0x5d6ac9:c.instructions+=1;goto B5d6ac9;
case 0x5d6ad0:goto L5d6ad0;
case 0x5d6ad1:c.instructions+=15;goto B5d6ad1;
case 0x5d6ad3:c.instructions+=14;goto B5d6ad3;
case 0x5d6ad6:c.instructions+=13;goto B5d6ad6;
case 0x5d6ad7:c.instructions+=12;goto B5d6ad7;
case 0x5d6ada:c.instructions+=11;goto B5d6ada;
case 0x5d6add:c.instructions+=10;goto B5d6add;
case 0x5d6ae0:c.instructions+=9;goto B5d6ae0;
case 0x5d6ae3:c.instructions+=8;goto B5d6ae3;
case 0x5d6ae6:c.instructions+=7;goto B5d6ae6;
case 0x5d6ae7:c.instructions+=6;goto B5d6ae7;
case 0x5d6ae9:c.instructions+=5;goto B5d6ae9;
case 0x5d6aeb:c.instructions+=4;goto B5d6aeb;
case 0x5d6aee:c.instructions+=3;goto B5d6aee;
case 0x5d6af1:c.instructions+=2;goto B5d6af1;
case 0x5d6af4:c.instructions+=1;goto B5d6af4;
case 0x5d6af6:goto L5d6af6;
case 0x5d6afd:goto L5d6afd;
case 0x5d6aff:c.instructions+=1;goto B5d6aff;
case 0x5d6b01:goto L5d6b01;
case 0x5d6b08:goto L5d6b08;
case 0x5d6b0a:c.instructions+=1;goto B5d6b0a;
case 0x5d6b0c:goto L5d6b0c;
case 0x5d6b13:c.instructions+=1;goto B5d6b13;
case 0x5d6b15:goto L5d6b15;
case 0x5d6b17:c.instructions+=1;goto B5d6b17;
case 0x5d6b19:goto L5d6b19;
case 0x5d6b20:goto L5d6b20;
case 0x5d6b22:c.instructions+=1;goto B5d6b22;
case 0x5d6b24:goto L5d6b24;
case 0x5d6b2b:goto L5d6b2b;
case 0x5d6b31:c.instructions+=3;goto B5d6b31;
case 0x5d6b33:c.instructions+=2;goto B5d6b33;
case 0x5d6b35:c.instructions+=1;goto B5d6b35;
case 0x5d6b3b:goto L5d6b3b;
case 0x5d6b3e:c.instructions+=1;goto B5d6b3e;
case 0x5d6b40:goto L5d6b40;
case 0x5d6b43:c.instructions+=1;goto B5d6b43;
case 0x5d6b45:goto L5d6b45;
case 0x5d6b46:c.instructions+=3;goto B5d6b46;
case 0x5d6b4c:c.instructions+=2;goto B5d6b4c;
case 0x5d6b4e:c.instructions+=1;goto B5d6b4e;
case 0x5d6b50:goto L5d6b50;
case 0x5d6b51:c.instructions+=5;goto B5d6b51;
case 0x5d6b54:c.instructions+=4;goto B5d6b54;
case 0x5d6b55:c.instructions+=3;goto B5d6b55;
case 0x5d6b57:c.instructions+=2;goto B5d6b57;
case 0x5d6b58:c.instructions+=1;goto B5d6b58;
case 0x5d6b5b:goto L5d6b5b;
case 0x5d6b5e:c.instructions+=5;goto B5d6b5e;
case 0x5d6b5f:c.instructions+=4;goto B5d6b5f;
case 0x5d6b62:c.instructions+=3;goto B5d6b62;
case 0x5d6b64:c.instructions+=2;goto B5d6b64;
case 0x5d6b67:c.instructions+=1;goto B5d6b67;
case 0x5d6b6d:goto L5d6b6d;
case 0x5d6b70:goto L5d6b70;
case 0x5d6b72:c.instructions+=7;goto B5d6b72;
case 0x5d6b75:c.instructions+=6;goto B5d6b75;
case 0x5d6b79:c.instructions+=5;goto B5d6b79;
case 0x5d6b7c:c.instructions+=4;goto B5d6b7c;
case 0x5d6b7e:c.instructions+=3;goto B5d6b7e;
case 0x5d6b81:c.instructions+=2;goto B5d6b81;
case 0x5d6b83:c.instructions+=1;goto B5d6b83;
case 0x5d6b85:goto L5d6b85;
case 0x5d6b8b:goto L5d6b8b;
case 0x5d6b8e:c.instructions+=1;goto B5d6b8e;
case 0x5d6b90:goto L5d6b90;
case 0x5d6b96:goto L5d6b96;
case 0x5d6b99:c.instructions+=1;goto B5d6b99;
case 0x5d6b9b:goto L5d6b9b;
case 0x5d6b9e:goto L5d6b9e;
case 0x5d6ba1:c.instructions+=2;goto B5d6ba1;
case 0x5d6ba3:c.instructions+=1;goto B5d6ba3;
case 0x5d6ba5:goto L5d6ba5;
case 0x5d6ba8:c.instructions+=2;goto B5d6ba8;
case 0x5d6baa:c.instructions+=1;goto B5d6baa;
case 0x5d6bac:goto L5d6bac;
case 0x5d6bae:goto L5d6bae;
case 0x5d6bb0:c.instructions+=1;goto B5d6bb0;
case 0x5d6bb2:goto L5d6bb2;
case 0x5d6bb5:c.instructions+=2;goto B5d6bb5;
case 0x5d6bb7:c.instructions+=1;goto B5d6bb7;
case 0x5d6bbd:goto L5d6bbd;
case 0x5d6bc0:c.instructions+=2;goto B5d6bc0;
case 0x5d6bc2:c.instructions+=1;goto B5d6bc2;
case 0x5d6bc8:goto L5d6bc8;
case 0x5d6bcb:c.instructions+=4;goto B5d6bcb;
case 0x5d6bd1:c.instructions+=3;goto B5d6bd1;
case 0x5d6bd4:c.instructions+=2;goto B5d6bd4;
case 0x5d6bd6:c.instructions+=1;goto B5d6bd6;
case 0x5d6bd8:goto L5d6bd8;
case 0x5d6bda:c.instructions+=6;goto B5d6bda;
case 0x5d6bdb:c.instructions+=5;goto B5d6bdb;
case 0x5d6bdd:c.instructions+=4;goto B5d6bdd;
case 0x5d6be2:c.instructions+=3;goto B5d6be2;
case 0x5d6be3:c.instructions+=2;goto B5d6be3;
case 0x5d6be5:c.instructions+=1;goto B5d6be5;
case 0x5d6bea:goto L5d6bea;
case 0x5d6bef:goto L5d6bef;
case 0x5d6bf4:goto L5d6bf4;
case 0x5d6bf6:c.instructions+=1;goto B5d6bf6;
case 0x5d6bfc:goto L5d6bfc;
case 0x5d6bff:c.instructions+=2;goto B5d6bff;
case 0x5d6c02:c.instructions+=1;goto B5d6c02;
case 0x5d6c04:goto L5d6c04;
case 0x5d6c07:c.instructions+=1;goto B5d6c07;
case 0x5d6c0d:goto L5d6c0d;
case 0x5d6c10:c.instructions+=22;goto B5d6c10;
case 0x5d6c13:c.instructions+=21;goto B5d6c13;
case 0x5d6c16:c.instructions+=20;goto B5d6c16;
case 0x5d6c18:c.instructions+=19;goto B5d6c18;
case 0x5d6c1b:c.instructions+=18;goto B5d6c1b;
case 0x5d6c1e:c.instructions+=17;goto B5d6c1e;
case 0x5d6c21:c.instructions+=16;goto B5d6c21;
case 0x5d6c24:c.instructions+=15;goto B5d6c24;
case 0x5d6c26:c.instructions+=14;goto B5d6c26;
case 0x5d6c28:c.instructions+=13;goto B5d6c28;
case 0x5d6c2a:c.instructions+=12;goto B5d6c2a;
case 0x5d6c2c:c.instructions+=11;goto B5d6c2c;
case 0x5d6c2e:c.instructions+=10;goto B5d6c2e;
case 0x5d6c30:c.instructions+=9;goto B5d6c30;
case 0x5d6c32:c.instructions+=8;goto B5d6c32;
case 0x5d6c34:c.instructions+=7;goto B5d6c34;
case 0x5d6c3a:c.instructions+=6;goto B5d6c3a;
case 0x5d6c3c:c.instructions+=5;goto B5d6c3c;
case 0x5d6c3e:c.instructions+=4;goto B5d6c3e;
case 0x5d6c40:c.instructions+=3;goto B5d6c40;
case 0x5d6c43:c.instructions+=2;goto B5d6c43;
case 0x5d6c45:c.instructions+=1;goto B5d6c45;
case 0x5d6c4b:goto L5d6c4b;
case 0x5d6c51:c.instructions+=4;goto B5d6c51;
case 0x5d6c57:c.instructions+=3;goto B5d6c57;
case 0x5d6c5d:c.instructions+=2;goto B5d6c5d;
case 0x5d6c5f:c.instructions+=1;goto B5d6c5f;
case 0x5d6c61:goto L5d6c61;
case 0x5d6c66:c.instructions+=4;goto B5d6c66;
case 0x5d6c6b:c.instructions+=3;goto B5d6c6b;
case 0x5d6c75:c.instructions+=2;goto B5d6c75;
case 0x5d6c7a:c.instructions+=1;goto B5d6c7a;
case 0x5d6c7c:goto L5d6c7c;
case 0x5d6c7e:c.instructions+=3;goto B5d6c7e;
case 0x5d6c80:c.instructions+=2;goto B5d6c80;
case 0x5d6c85:c.instructions+=1;goto B5d6c85;
case 0x5d6c87:goto L5d6c87;
case 0x5d6c8a:c.instructions+=10;goto B5d6c8a;
case 0x5d6c8d:c.instructions+=9;goto B5d6c8d;
case 0x5d6c90:c.instructions+=8;goto B5d6c90;
case 0x5d6c91:c.instructions+=7;goto B5d6c91;
case 0x5d6c94:c.instructions+=6;goto B5d6c94;
case 0x5d6c95:c.instructions+=5;goto B5d6c95;
case 0x5d6c96:c.instructions+=4;goto B5d6c96;
case 0x5d6c97:c.instructions+=3;goto B5d6c97;
case 0x5d6c9c:c.instructions+=2;goto B5d6c9c;
case 0x5d6c9d:c.instructions+=1;goto B5d6c9d;
case 0x5d6ca2:goto L5d6ca2;
case 0x5d6ca5:c.instructions+=10;goto B5d6ca5;
case 0x5d6cab:c.instructions+=9;goto B5d6cab;
case 0x5d6cae:c.instructions+=8;goto B5d6cae;
case 0x5d6cb0:c.instructions+=7;goto B5d6cb0;
case 0x5d6cb6:c.instructions+=6;goto B5d6cb6;
case 0x5d6cb7:c.instructions+=5;goto B5d6cb7;
case 0x5d6cb8:c.instructions+=4;goto B5d6cb8;
case 0x5d6cb9:c.instructions+=3;goto B5d6cb9;
case 0x5d6cbc:c.instructions+=2;goto B5d6cbc;
case 0x5d6cbd:c.instructions+=1;goto B5d6cbd;
case 0x5d6cc2:goto L5d6cc2;
case 0x5d6cc5:goto L5d6cc5;
case 0x5d6cc8:c.instructions+=2;goto B5d6cc8;
case 0x5d6ccc:c.instructions+=1;goto B5d6ccc;
case 0x5d6cd6:goto L5d6cd6;
case 0x5d6cd9:c.instructions+=4;goto B5d6cd9;
case 0x5d6cdc:c.instructions+=3;goto B5d6cdc;
case 0x5d6cdf:c.instructions+=2;goto B5d6cdf;
case 0x5d6ce1:c.instructions+=1;goto B5d6ce1;
case 0x5d6ce7:goto L5d6ce7;
case 0x5d6ce8:goto L5d6ce8;
case 0x5d6ce9:c.instructions+=4;goto B5d6ce9;
case 0x5d6cea:c.instructions+=3;goto B5d6cea;
case 0x5d6cec:c.instructions+=2;goto B5d6cec;
case 0x5d6ced:c.instructions+=1;goto B5d6ced;
case 0x5d6cf0:goto L5d6cf0;
case 0x5d6cf3:c.instructions+=8;goto B5d6cf3;
case 0x5d6cf5:c.instructions+=7;goto B5d6cf5;
case 0x5d6cf6:c.instructions+=6;goto B5d6cf6;
case 0x5d6cf7:c.instructions+=5;goto B5d6cf7;
case 0x5d6cf8:c.instructions+=4;goto B5d6cf8;
case 0x5d6cfe:c.instructions+=3;goto B5d6cfe;
case 0x5d6cff:c.instructions+=2;goto B5d6cff;
case 0x5d6d01:c.instructions+=1;goto B5d6d01;
case 0x5d6d06:goto L5d6d06;
case 0x5d6d08:goto L5d6d08;
case 0x5d6d0b:c.instructions+=8;goto B5d6d0b;
case 0x5d6d10:c.instructions+=7;goto B5d6d10;
case 0x5d6d12:c.instructions+=6;goto B5d6d12;
case 0x5d6d13:c.instructions+=5;goto B5d6d13;
case 0x5d6d15:c.instructions+=4;goto B5d6d15;
case 0x5d6d16:c.instructions+=3;goto B5d6d16;
case 0x5d6d17:c.instructions+=2;goto B5d6d17;
case 0x5d6d19:c.instructions+=1;goto B5d6d19;
case 0x5d6d1e:goto L5d6d1e;
case 0x5d6d20:goto L5d6d20;
case 0x5d6d26:c.instructions+=3;goto B5d6d26;
case 0x5d6d28:c.instructions+=2;goto B5d6d28;
case 0x5d6d2a:c.instructions+=1;goto B5d6d2a;
case 0x5d6d2c:goto L5d6d2c;
case 0x5d6d2d:c.instructions+=3;goto B5d6d2d;
case 0x5d6d2e:c.instructions+=2;goto B5d6d2e;
case 0x5d6d30:c.instructions+=1;goto B5d6d30;
case 0x5d6d34:goto L5d6d34;
case 0x5d6d37:c.instructions+=1;goto B5d6d37;
case 0x5d6d39:goto L5d6d39;
case 0x5d6d3a:c.instructions+=3;goto B5d6d3a;
case 0x5d6d40:c.instructions+=2;goto B5d6d40;
case 0x5d6d42:c.instructions+=1;goto B5d6d42;
case 0x5d6d44:goto L5d6d44;
case 0x5d6d45:c.instructions+=2;goto B5d6d45;
case 0x5d6d46:c.instructions+=1;goto B5d6d46;
case 0x5d6d49:goto L5d6d49;
case 0x5d6d4c:c.instructions+=2;goto B5d6d4c;
case 0x5d6d4f:c.instructions+=1;goto B5d6d4f;
case 0x5d6d51:goto L5d6d51;
case 0x5d6d52:c.instructions+=1;goto B5d6d52;
case 0x5d6d56:goto L5d6d56;
case 0x5d6d57:c.instructions+=1;goto B5d6d57;
case 0x5d6d59:goto L5d6d59;
case 0x5d6d5c:c.instructions+=4;goto B5d6d5c;
case 0x5d6d5f:c.instructions+=3;goto B5d6d5f;
case 0x5d6d62:c.instructions+=2;goto B5d6d62;
case 0x5d6d64:c.instructions+=1;goto B5d6d64;
case 0x5d6d66:goto L5d6d66;
case 0x5d6d67:goto L5d6d67;
case 0x5d6d68:c.instructions+=1;goto B5d6d68;
case 0x5d6d69:goto L5d6d69;
case 0x5d6d70:goto L5d6d70;
case 0x5d6d75:c.instructions+=10;goto B5d6d75;
case 0x5d6d76:c.instructions+=9;goto B5d6d76;
case 0x5d6d78:c.instructions+=8;goto B5d6d78;
case 0x5d6d7b:c.instructions+=7;goto B5d6d7b;
case 0x5d6d7e:c.instructions+=6;goto B5d6d7e;
case 0x5d6d84:c.instructions+=5;goto B5d6d84;
case 0x5d6d85:c.instructions+=4;goto B5d6d85;
case 0x5d6d8a:c.instructions+=3;goto B5d6d8a;
case 0x5d6d8e:c.instructions+=2;goto B5d6d8e;
case 0x5d6d90:c.instructions+=1;goto B5d6d90;
case 0x5d6d92:goto L5d6d92;
case 0x5d6d95:c.instructions+=5;goto B5d6d95;
case 0x5d6d99:c.instructions+=4;goto B5d6d99;
case 0x5d6d9d:c.instructions+=3;goto B5d6d9d;
case 0x5d6d9f:c.instructions+=2;goto B5d6d9f;
case 0x5d6da0:c.instructions+=1;goto B5d6da0;
case 0x5d6da1:goto L5d6da1;
case 0x5d6da2:c.instructions+=9;goto B5d6da2;
case 0x5d6da7:c.instructions+=8;goto B5d6da7;
case 0x5d6da9:c.instructions+=7;goto B5d6da9;
case 0x5d6daa:c.instructions+=6;goto B5d6daa;
case 0x5d6dac:c.instructions+=5;goto B5d6dac;
case 0x5d6daf:c.instructions+=4;goto B5d6daf;
case 0x5d6db0:c.instructions+=3;goto B5d6db0;
case 0x5d6db5:c.instructions+=2;goto B5d6db5;
case 0x5d6db6:c.instructions+=1;goto B5d6db6;
case 0x5d6dbb:goto L5d6dbb;
case 0x5d6dbe:c.instructions+=3;goto B5d6dbe;
case 0x5d6dc0:c.instructions+=2;goto B5d6dc0;
case 0x5d6dc1:c.instructions+=1;goto B5d6dc1;
case 0x5d6dd0:goto L5d6dd0;
case 0x5d6dd3:c.instructions+=16;goto B5d6dd3;
case 0x5d6dd5:c.instructions+=15;goto B5d6dd5;
case 0x5d6dd8:c.instructions+=14;goto B5d6dd8;
case 0x5d6dd9:c.instructions+=13;goto B5d6dd9;
case 0x5d6ddd:c.instructions+=12;goto B5d6ddd;
case 0x5d6dde:c.instructions+=11;goto B5d6dde;
case 0x5d6de2:c.instructions+=10;goto B5d6de2;
case 0x5d6de3:c.instructions+=9;goto B5d6de3;
case 0x5d6de5:c.instructions+=8;goto B5d6de5;
case 0x5d6de8:c.instructions+=7;goto B5d6de8;
case 0x5d6de9:c.instructions+=6;goto B5d6de9;
case 0x5d6ded:c.instructions+=5;goto B5d6ded;
case 0x5d6df1:c.instructions+=4;goto B5d6df1;
case 0x5d6df6:c.instructions+=3;goto B5d6df6;
case 0x5d6df9:c.instructions+=2;goto B5d6df9;
case 0x5d6dfd:c.instructions+=1;goto B5d6dfd;
case 0x5d6e03:goto L5d6e03;
case 0x5d6e0a:c.instructions+=5;goto B5d6e0a;
case 0x5d6e0f:c.instructions+=4;goto B5d6e0f;
case 0x5d6e11:c.instructions+=3;goto B5d6e11;
case 0x5d6e16:c.instructions+=2;goto B5d6e16;
case 0x5d6e19:c.instructions+=1;goto B5d6e19;
case 0x5d6e1d:goto L5d6e1d;
case 0x5d6e1f:c.instructions+=4;goto B5d6e1f;
case 0x5d6e23:c.instructions+=3;goto B5d6e23;
case 0x5d6e25:c.instructions+=2;goto B5d6e25;
case 0x5d6e28:c.instructions+=1;goto B5d6e28;
case 0x5d6e2a:goto L5d6e2a;
case 0x5d6e2e:c.instructions+=5;goto B5d6e2e;
case 0x5d6e32:c.instructions+=4;goto B5d6e32;
case 0x5d6e34:c.instructions+=3;goto B5d6e34;
case 0x5d6e36:c.instructions+=2;goto B5d6e36;
case 0x5d6e39:c.instructions+=1;goto B5d6e39;
case 0x5d6e3b:goto L5d6e3b;
case 0x5d6e3f:c.instructions+=5;goto B5d6e3f;
case 0x5d6e43:c.instructions+=4;goto B5d6e43;
case 0x5d6e47:c.instructions+=3;goto B5d6e47;
case 0x5d6e49:c.instructions+=2;goto B5d6e49;
case 0x5d6e4c:c.instructions+=1;goto B5d6e4c;
case 0x5d6e4e:goto L5d6e4e;
case 0x5d6e52:c.instructions+=4;goto B5d6e52;
case 0x5d6e54:c.instructions+=3;goto B5d6e54;
case 0x5d6e56:c.instructions+=2;goto B5d6e56;
case 0x5d6e59:c.instructions+=1;goto B5d6e59;
case 0x5d6e5b:goto L5d6e5b;
case 0x5d6e5f:c.instructions+=12;goto B5d6e5f;
case 0x5d6e61:c.instructions+=11;goto B5d6e61;
case 0x5d6e64:c.instructions+=10;goto B5d6e64;
case 0x5d6e67:c.instructions+=9;goto B5d6e67;
case 0x5d6e69:c.instructions+=8;goto B5d6e69;
case 0x5d6e6b:c.instructions+=7;goto B5d6e6b;
case 0x5d6e6d:c.instructions+=6;goto B5d6e6d;
case 0x5d6e6f:c.instructions+=5;goto B5d6e6f;
case 0x5d6e72:c.instructions+=4;goto B5d6e72;
case 0x5d6e76:c.instructions+=3;goto B5d6e76;
case 0x5d6e78:c.instructions+=2;goto B5d6e78;
case 0x5d6e7b:c.instructions+=1;goto B5d6e7b;
case 0x5d6e7d:goto L5d6e7d;
case 0x5d6e81:c.instructions+=3;goto B5d6e81;
case 0x5d6e83:c.instructions+=2;goto B5d6e83;
case 0x5d6e86:c.instructions+=1;goto B5d6e86;
case 0x5d6e8a:goto L5d6e8a;
case 0x5d6e8d:c.instructions+=4;goto B5d6e8d;
case 0x5d6e91:c.instructions+=3;goto B5d6e91;
case 0x5d6e93:c.instructions+=2;goto B5d6e93;
case 0x5d6e96:c.instructions+=1;goto B5d6e96;
case 0x5d6e98:goto L5d6e98;
case 0x5d6e9c:c.instructions+=4;goto B5d6e9c;
case 0x5d6e9e:c.instructions+=3;goto B5d6e9e;
case 0x5d6ea0:c.instructions+=2;goto B5d6ea0;
case 0x5d6ea3:c.instructions+=1;goto B5d6ea3;
case 0x5d6ea5:goto L5d6ea5;
case 0x5d6ea7:goto L5d6ea7;
case 0x5d6ea9:c.instructions+=4;goto B5d6ea9;
case 0x5d6ead:c.instructions+=3;goto B5d6ead;
case 0x5d6eaf:c.instructions+=2;goto B5d6eaf;
case 0x5d6eb2:c.instructions+=1;goto B5d6eb2;
case 0x5d6eb4:goto L5d6eb4;
case 0x5d6eb8:c.instructions+=4;goto B5d6eb8;
case 0x5d6ebb:c.instructions+=3;goto B5d6ebb;
case 0x5d6ebd:c.instructions+=2;goto B5d6ebd;
case 0x5d6ec0:c.instructions+=1;goto B5d6ec0;
case 0x5d6ec2:goto L5d6ec2;
case 0x5d6ec5:c.instructions+=12;goto B5d6ec5;
case 0x5d6ec8:c.instructions+=11;goto B5d6ec8;
case 0x5d6ecc:c.instructions+=10;goto B5d6ecc;
case 0x5d6ecf:c.instructions+=9;goto B5d6ecf;
case 0x5d6ed1:c.instructions+=8;goto B5d6ed1;
case 0x5d6ed3:c.instructions+=7;goto B5d6ed3;
case 0x5d6ed6:c.instructions+=6;goto B5d6ed6;
case 0x5d6ed8:c.instructions+=5;goto B5d6ed8;
case 0x5d6edb:c.instructions+=4;goto B5d6edb;
case 0x5d6edf:c.instructions+=3;goto B5d6edf;
case 0x5d6ee1:c.instructions+=2;goto B5d6ee1;
case 0x5d6ee4:c.instructions+=1;goto B5d6ee4;
case 0x5d6ee6:goto L5d6ee6;
case 0x5d6eea:c.instructions+=3;goto B5d6eea;
case 0x5d6eec:c.instructions+=2;goto B5d6eec;
case 0x5d6eef:c.instructions+=1;goto B5d6eef;
case 0x5d6ef3:goto L5d6ef3;
case 0x5d6ef6:c.instructions+=4;goto B5d6ef6;
case 0x5d6efa:c.instructions+=3;goto B5d6efa;
case 0x5d6efc:c.instructions+=2;goto B5d6efc;
case 0x5d6eff:c.instructions+=1;goto B5d6eff;
case 0x5d6f01:goto L5d6f01;
case 0x5d6f05:c.instructions+=4;goto B5d6f05;
case 0x5d6f08:c.instructions+=3;goto B5d6f08;
case 0x5d6f0a:c.instructions+=2;goto B5d6f0a;
case 0x5d6f0d:c.instructions+=1;goto B5d6f0d;
case 0x5d6f0f:goto L5d6f0f;
case 0x5d6f12:c.instructions+=4;goto B5d6f12;
case 0x5d6f16:c.instructions+=3;goto B5d6f16;
case 0x5d6f18:c.instructions+=2;goto B5d6f18;
case 0x5d6f1b:c.instructions+=1;goto B5d6f1b;
case 0x5d6f1d:goto L5d6f1d;
case 0x5d6f21:c.instructions+=4;goto B5d6f21;
case 0x5d6f24:c.instructions+=3;goto B5d6f24;
case 0x5d6f26:c.instructions+=2;goto B5d6f26;
case 0x5d6f29:c.instructions+=1;goto B5d6f29;
case 0x5d6f2b:goto L5d6f2b;
case 0x5d6f2e:c.instructions+=12;goto B5d6f2e;
case 0x5d6f31:c.instructions+=11;goto B5d6f31;
case 0x5d6f35:c.instructions+=10;goto B5d6f35;
case 0x5d6f38:c.instructions+=9;goto B5d6f38;
case 0x5d6f3a:c.instructions+=8;goto B5d6f3a;
case 0x5d6f3d:c.instructions+=7;goto B5d6f3d;
case 0x5d6f40:c.instructions+=6;goto B5d6f40;
case 0x5d6f42:c.instructions+=5;goto B5d6f42;
case 0x5d6f45:c.instructions+=4;goto B5d6f45;
case 0x5d6f49:c.instructions+=3;goto B5d6f49;
case 0x5d6f4b:c.instructions+=2;goto B5d6f4b;
case 0x5d6f4e:c.instructions+=1;goto B5d6f4e;
case 0x5d6f50:goto L5d6f50;
case 0x5d6f54:c.instructions+=3;goto B5d6f54;
case 0x5d6f56:c.instructions+=2;goto B5d6f56;
case 0x5d6f59:c.instructions+=1;goto B5d6f59;
case 0x5d6f5d:goto L5d6f5d;
case 0x5d6f60:c.instructions+=4;goto B5d6f60;
case 0x5d6f64:c.instructions+=3;goto B5d6f64;
case 0x5d6f66:c.instructions+=2;goto B5d6f66;
case 0x5d6f69:c.instructions+=1;goto B5d6f69;
case 0x5d6f6b:goto L5d6f6b;
case 0x5d6f6f:c.instructions+=4;goto B5d6f6f;
case 0x5d6f72:c.instructions+=3;goto B5d6f72;
case 0x5d6f74:c.instructions+=2;goto B5d6f74;
case 0x5d6f77:c.instructions+=1;goto B5d6f77;
case 0x5d6f79:goto L5d6f79;
case 0x5d6f7c:c.instructions+=4;goto B5d6f7c;
case 0x5d6f80:c.instructions+=3;goto B5d6f80;
case 0x5d6f82:c.instructions+=2;goto B5d6f82;
case 0x5d6f85:c.instructions+=1;goto B5d6f85;
case 0x5d6f87:goto L5d6f87;
case 0x5d6f8b:c.instructions+=4;goto B5d6f8b;
case 0x5d6f8e:c.instructions+=3;goto B5d6f8e;
case 0x5d6f90:c.instructions+=2;goto B5d6f90;
case 0x5d6f93:c.instructions+=1;goto B5d6f93;
case 0x5d6f95:goto L5d6f95;
case 0x5d6f98:c.instructions+=12;goto B5d6f98;
case 0x5d6f9b:c.instructions+=11;goto B5d6f9b;
case 0x5d6f9f:c.instructions+=10;goto B5d6f9f;
case 0x5d6fa2:c.instructions+=9;goto B5d6fa2;
case 0x5d6fa4:c.instructions+=8;goto B5d6fa4;
case 0x5d6fa7:c.instructions+=7;goto B5d6fa7;
case 0x5d6faa:c.instructions+=6;goto B5d6faa;
case 0x5d6fac:c.instructions+=5;goto B5d6fac;
case 0x5d6faf:c.instructions+=4;goto B5d6faf;
case 0x5d6fb3:c.instructions+=3;goto B5d6fb3;
case 0x5d6fb5:c.instructions+=2;goto B5d6fb5;
case 0x5d6fb8:c.instructions+=1;goto B5d6fb8;
case 0x5d6fba:goto L5d6fba;
case 0x5d6fbe:c.instructions+=3;goto B5d6fbe;
case 0x5d6fc0:c.instructions+=2;goto B5d6fc0;
case 0x5d6fc3:c.instructions+=1;goto B5d6fc3;
case 0x5d6fc7:goto L5d6fc7;
case 0x5d6fcb:c.instructions+=9;goto B5d6fcb;
case 0x5d6fcf:c.instructions+=8;goto B5d6fcf;
case 0x5d6fd1:c.instructions+=7;goto B5d6fd1;
case 0x5d6fd3:c.instructions+=6;goto B5d6fd3;
case 0x5d6fd6:c.instructions+=5;goto B5d6fd6;
case 0x5d6fd9:c.instructions+=4;goto B5d6fd9;
case 0x5d6fdc:c.instructions+=3;goto B5d6fdc;
case 0x5d6fde:c.instructions+=2;goto B5d6fde;
case 0x5d6fe2:c.instructions+=1;goto B5d6fe2;
case 0x5d6fe8:goto L5d6fe8;
case 0x5d6fea:c.instructions+=1;goto B5d6fea;
case 0x5d6ff0:goto L5d6ff0;
case 0x5d6ff5:c.instructions+=3;goto B5d6ff5;
case 0x5d6ff7:c.instructions+=2;goto B5d6ff7;
case 0x5d6ffe:c.instructions+=1;goto B5d6ffe;
default:missing_instruction(c.pc);}
B5d6006:L5d6006:{c.instructions+=3;NFSU2_TR(0x5d6006);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d600a:{NFSU2_TR(0x5d600a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x288ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6011:{NFSU2_TR(0x5d6011);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6020:L5d6020:{c.instructions+=8;NFSU2_TR(0x5d6020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6024:{NFSU2_TR(0x5d6024);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x5cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d6027:{NFSU2_TR(0x5d6027);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d602e:{NFSU2_TR(0x5d602e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6032:{NFSU2_TR(0x5d6032);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d6036:{NFSU2_TR(0x5d6036);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d6038:{NFSU2_TR(0x5d6038);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d603c:{NFSU2_TR(0x5d603c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6040:L5d6040:{c.instructions+=16;NFSU2_TR(0x5d6040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6044:{NFSU2_TR(0x5d6044);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x5cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d6047:{NFSU2_TR(0x5d6047);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d604e:{NFSU2_TR(0x5d604e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6052:{NFSU2_TR(0x5d6052);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d6058:{NFSU2_TR(0x5d6058);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d605b:{NFSU2_TR(0x5d605b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d605d:{NFSU2_TR(0x5d605d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6060:{NFSU2_TR(0x5d6060);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6063:{NFSU2_TR(0x5d6063);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6067:{NFSU2_TR(0x5d6067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d6069:{NFSU2_TR(0x5d6069);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d606c:{NFSU2_TR(0x5d606c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d606f:{NFSU2_TR(0x5d606f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6072:{NFSU2_TR(0x5d6072);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6076:{NFSU2_TR(0x5d6076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6080:L5d6080:{c.instructions+=7;NFSU2_TR(0x5d6080);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B5d6083:{NFSU2_TR(0x5d6083);
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
B5d6085:{NFSU2_TR(0x5d6085);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d608b:{NFSU2_TR(0x5d608b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6091:{NFSU2_TR(0x5d6091);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6097:{NFSU2_TR(0x5d6097);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d609d:{NFSU2_TR(0x5d609d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d60a0:L5d60a0:{c.instructions+=6;NFSU2_TR(0x5d60a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d60a6:{NFSU2_TR(0x5d60a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60a7:{NFSU2_TR(0x5d60a7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d60a9:{NFSU2_TR(0x5d60a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d60ab:{NFSU2_TR(0x5d60ab);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d60ad:{NFSU2_TR(0x5d60ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d60d4;}}
}
B5d60af:L5d60af:{c.instructions+=3;NFSU2_TR(0x5d60af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d60b5:{NFSU2_TR(0x5d60b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60b6:{NFSU2_TR(0x5d60b6);
{goto L5d60c0;}
}
B5d60c0:L5d60c0:{c.instructions+=7;NFSU2_TR(0x5d60c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d60c2:{NFSU2_TR(0x5d60c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d60c5:{NFSU2_TR(0x5d60c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d60cb:{NFSU2_TR(0x5d60cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d60cc:{NFSU2_TR(0x5d60cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5d60cf:{NFSU2_TR(0x5d60cf);
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
B5d60d1:{NFSU2_TR(0x5d60d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d60c0u);}goto L5d60c0;}}
}
B5d60d3:L5d60d3:{c.instructions+=1;NFSU2_TR(0x5d60d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d60d4:L5d60d4:{c.instructions+=3;NFSU2_TR(0x5d60d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d60da:{NFSU2_TR(0x5d60da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d60db:{NFSU2_TR(0x5d60db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d60e0:L5d60e0:{c.instructions+=10;NFSU2_TR(0x5d60e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60e1:{NFSU2_TR(0x5d60e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60e2:{NFSU2_TR(0x5d60e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60e3:{NFSU2_TR(0x5d60e3);
__builtin_memmove((R+28),(R+4),4);
}
B5d60e5:{NFSU2_TR(0x5d60e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d60e8:{NFSU2_TR(0x5d60e8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d60ea:{NFSU2_TR(0x5d60ea);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d60ec:{NFSU2_TR(0x5d60ec);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d60ee:{NFSU2_TR(0x5d60ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d60f1:{NFSU2_TR(0x5d60f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d6124;}}
}
B5d60f3:L5d60f3:{c.instructions+=1;NFSU2_TR(0x5d60f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d60f4:L5d60f4:{c.instructions+=5;NFSU2_TR(0x5d60f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d60f6:{NFSU2_TR(0x5d60f6);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5d60fa:{NFSU2_TR(0x5d60fa);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5d60fc:{NFSU2_TR(0x5d60fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d60ff:{NFSU2_TR(0x5d60ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6118;}}
}
B5d6101:L5d6101:{c.instructions+=3;NFSU2_TR(0x5d6101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6104:{NFSU2_TR(0x5d6104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6105:{NFSU2_TR(0x5d6105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d610aull));
TAIL_STATIC(0x440540u,440);
}
B5d610a:L5d610a:{c.instructions+=5;NFSU2_TR(0x5d610a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d610d:{NFSU2_TR(0x5d610d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d610f:{NFSU2_TR(0x5d610f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6112:{NFSU2_TR(0x5d6112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6115:{NFSU2_TR(0x5d6115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6118:L5d6118:{c.instructions+=5;NFSU2_TR(0x5d6118);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d611b:{NFSU2_TR(0x5d611b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d611c:{NFSU2_TR(0x5d611c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x50ull))));
}
B5d611f:{NFSU2_TR(0x5d611f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6121:{NFSU2_TR(0x5d6121);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d60f4u);}goto L5d60f4;}}
}
B5d6123:L5d6123:{c.instructions+=1;NFSU2_TR(0x5d6123);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6124:L5d6124:{c.instructions+=4;NFSU2_TR(0x5d6124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6125:{NFSU2_TR(0x5d6125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6126:{NFSU2_TR(0x5d6126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6127:{NFSU2_TR(0x5d6127);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6130:L5d6130:{c.instructions+=5;NFSU2_TR(0x5d6130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6134:{NFSU2_TR(0x5d6134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6135:{NFSU2_TR(0x5d6135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6136:{NFSU2_TR(0x5d6136);
__builtin_memmove((R+24),(R+4),4);
}
B5d6138:{NFSU2_TR(0x5d6138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d613dull));
TAIL_STATIC(0x440540u,440);
}
B5d613d:L5d613d:{c.instructions+=6;NFSU2_TR(0x5d613d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6143:{NFSU2_TR(0x5d6143);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d6146:{NFSU2_TR(0x5d6146);
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
B5d6147:{NFSU2_TR(0x5d6147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d614d:{NFSU2_TR(0x5d614d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d614e:{NFSU2_TR(0x5d614e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6160:L5d6160:{c.instructions+=3;NFSU2_TR(0x5d6160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6166:{NFSU2_TR(0x5d6166);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6168:{NFSU2_TR(0x5d6168);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6180;}}
}
B5d616a:L5d616a:{c.instructions+=5;NFSU2_TR(0x5d616a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d616d:{NFSU2_TR(0x5d616d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6170:{NFSU2_TR(0x5d6170);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d6172:{NFSU2_TR(0x5d6172);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d6178:{NFSU2_TR(0x5d6178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6180;}}
}
B5d617a:L5d617a:{c.instructions+=2;NFSU2_TR(0x5d617a);
w4(R+0,u32(0x1ull));
}
B5d617f:{NFSU2_TR(0x5d617f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6180:L5d6180:{c.instructions+=2;NFSU2_TR(0x5d6180);
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
B5d6182:{NFSU2_TR(0x5d6182);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6190:L5d6190:{c.instructions+=8;NFSU2_TR(0x5d6190);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6193:{NFSU2_TR(0x5d6193);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6194:{NFSU2_TR(0x5d6194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d619a:{NFSU2_TR(0x5d619a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d619c:{NFSU2_TR(0x5d619c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d619d:{NFSU2_TR(0x5d619d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d619e:{NFSU2_TR(0x5d619e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d619f:{NFSU2_TR(0x5d619f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d61f8;}}
}
B5d61a1:L5d61a1:{c.instructions+=3;NFSU2_TR(0x5d61a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d61a3:{NFSU2_TR(0x5d61a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d61a5:{NFSU2_TR(0x5d61a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d61f8;}}
}
B5d61a7:L5d61a7:{c.instructions+=2;NFSU2_TR(0x5d61a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d61ad:{NFSU2_TR(0x5d61ad);
__builtin_memmove((R+4),(R+4),4);
}
B5d61b0:L5d61b0:{c.instructions+=3;NFSU2_TR(0x5d61b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d61b2:{NFSU2_TR(0x5d61b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d61b6:{NFSU2_TR(0x5d61b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d61f0;}}
}
B5d61b8:L5d61b8:{c.instructions+=7;NFSU2_TR(0x5d61b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d61bc:{NFSU2_TR(0x5d61bc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d61bd:{NFSU2_TR(0x5d61bd);
w4(R+20,u32(0x64ull));
}
B5d61c2:{NFSU2_TR(0x5d61c2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d61c2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d61c2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d61c4:{NFSU2_TR(0x5d61c4);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d61c6:{NFSU2_TR(0x5d61c6);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d61c8:{NFSU2_TR(0x5d61c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d61f0;}}
}
B5d61ca:L5d61ca:{c.instructions+=2;NFSU2_TR(0x5d61ca);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d61cc:{NFSU2_TR(0x5d61cc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d61f0;}}
}
B5d61ce:L5d61ce:{c.instructions+=3;NFSU2_TR(0x5d61ce);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5d61d3:{NFSU2_TR(0x5d61d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d61d5:{NFSU2_TR(0x5d61d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d61f0;}}
}
B5d61d7:L5d61d7:{c.instructions+=3;NFSU2_TR(0x5d61d7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5d61d9:{NFSU2_TR(0x5d61d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d61db:{NFSU2_TR(0x5d61db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d61f0;}}
}
B5d61dd:L5d61dd:{c.instructions+=6;NFSU2_TR(0x5d61dd);
__builtin_memmove((R+8),gp(0x7fb708),4);
}
B5d61e3:{NFSU2_TR(0x5d61e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d61e6:{NFSU2_TR(0x5d61e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d61ea:{NFSU2_TR(0x5d61ea);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B5d61ec:{NFSU2_TR(0x5d61ec);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d61ee:{NFSU2_TR(0x5d61ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d6201;}}
}
B5d61f0:L5d61f0:{c.instructions+=4;NFSU2_TR(0x5d61f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d61f1:{NFSU2_TR(0x5d61f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d61f4:{NFSU2_TR(0x5d61f4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d61f6:{NFSU2_TR(0x5d61f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d61b0u);}goto L5d61b0;}}
}
B5d61f8:L5d61f8:{c.instructions+=6;NFSU2_TR(0x5d61f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d61f9:{NFSU2_TR(0x5d61f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d61fa:{NFSU2_TR(0x5d61fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d61fb:{NFSU2_TR(0x5d61fb);
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
B5d61fd:{NFSU2_TR(0x5d61fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d61fe:{NFSU2_TR(0x5d61fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6201:L5d6201:{c.instructions+=6;NFSU2_TR(0x5d6201);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d6205:{NFSU2_TR(0x5d6205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6206:{NFSU2_TR(0x5d6206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6207:{NFSU2_TR(0x5d6207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6208:{NFSU2_TR(0x5d6208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6209:{NFSU2_TR(0x5d6209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6210:L5d6210:{c.instructions+=10;NFSU2_TR(0x5d6210);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6213:{NFSU2_TR(0x5d6213);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6217:{NFSU2_TR(0x5d6217);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d621a:{NFSU2_TR(0x5d621a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d621d:{NFSU2_TR(0x5d621d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d621f:{NFSU2_TR(0x5d621f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d6221:{NFSU2_TR(0x5d6221);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6224:{NFSU2_TR(0x5d6224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d622b:{NFSU2_TR(0x5d622b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d622e:{NFSU2_TR(0x5d622e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6240:L5d6240:{c.instructions+=58;NFSU2_TR(0x5d6240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6241:{NFSU2_TR(0x5d6241);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d6245:{NFSU2_TR(0x5d6245);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d6249:{NFSU2_TR(0x5d6249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d624d:{NFSU2_TR(0x5d624d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d6251:{NFSU2_TR(0x5d6251);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d6255:{NFSU2_TR(0x5d6255);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d6259:{NFSU2_TR(0x5d6259);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d625a:{NFSU2_TR(0x5d625a);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6260:{NFSU2_TR(0x5d6260);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6262:{NFSU2_TR(0x5d6262);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d6266:{NFSU2_TR(0x5d6266);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d626a:{NFSU2_TR(0x5d626a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d626e:{NFSU2_TR(0x5d626e);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6274:{NFSU2_TR(0x5d6274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6277:{NFSU2_TR(0x5d6277);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d627b:{NFSU2_TR(0x5d627b);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6281:{NFSU2_TR(0x5d6281);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6283:{NFSU2_TR(0x5d6283);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d6285:{NFSU2_TR(0x5d6285);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6288:{NFSU2_TR(0x5d6288);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d628b:{NFSU2_TR(0x5d628b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d628f:{NFSU2_TR(0x5d628f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6293:{NFSU2_TR(0x5d6293);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d6297:{NFSU2_TR(0x5d6297);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d629b:{NFSU2_TR(0x5d629b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d629f:{NFSU2_TR(0x5d629f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d62a3:{NFSU2_TR(0x5d62a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62a6:{NFSU2_TR(0x5d62a6);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d62ac:{NFSU2_TR(0x5d62ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d62b0:{NFSU2_TR(0x5d62b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62b4:{NFSU2_TR(0x5d62b4);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d62ba:{NFSU2_TR(0x5d62ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d62be:{NFSU2_TR(0x5d62be);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d62c4:{NFSU2_TR(0x5d62c4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d62c7:{NFSU2_TR(0x5d62c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d62c9:{NFSU2_TR(0x5d62c9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d62cc:{NFSU2_TR(0x5d62cc);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d62cf:{NFSU2_TR(0x5d62cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d62d3:{NFSU2_TR(0x5d62d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62d7:{NFSU2_TR(0x5d62d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d62db:{NFSU2_TR(0x5d62db);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d62df:{NFSU2_TR(0x5d62df);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d62e3:{NFSU2_TR(0x5d62e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62e7:{NFSU2_TR(0x5d62e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62ea:{NFSU2_TR(0x5d62ea);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d62f0:{NFSU2_TR(0x5d62f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d62f1:{NFSU2_TR(0x5d62f1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d62f5:{NFSU2_TR(0x5d62f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d62f9:{NFSU2_TR(0x5d62f9);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d62ff:{NFSU2_TR(0x5d62ff);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d6303:{NFSU2_TR(0x5d6303);
{u32 ea_=u32(u32(8016348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6309:{NFSU2_TR(0x5d6309);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d630c:{NFSU2_TR(0x5d630c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d630e:{NFSU2_TR(0x5d630e);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6311:{NFSU2_TR(0x5d6311);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6314:{NFSU2_TR(0x5d6314);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d6315:{NFSU2_TR(0x5d6315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6320:L5d6320:{c.instructions+=7;NFSU2_TR(0x5d6320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6321:{NFSU2_TR(0x5d6321);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6322:{NFSU2_TR(0x5d6322);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d6326:{NFSU2_TR(0x5d6326);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6328:{NFSU2_TR(0x5d6328);
__builtin_memmove((R+24),(R+4),4);
}
B5d632a:{NFSU2_TR(0x5d632a);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6330:{NFSU2_TR(0x5d6330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6335ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d6335:L5d6335:{c.instructions+=4;NFSU2_TR(0x5d6335);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d6339:{NFSU2_TR(0x5d6339);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d633c:{NFSU2_TR(0x5d633c);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6342:{NFSU2_TR(0x5d6342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6347ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d6347:L5d6347:{c.instructions+=4;NFSU2_TR(0x5d6347);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d634b:{NFSU2_TR(0x5d634b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d634e:{NFSU2_TR(0x5d634e);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6354:{NFSU2_TR(0x5d6354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6359ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d6359:L5d6359:{c.instructions+=4;NFSU2_TR(0x5d6359);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d635d:{NFSU2_TR(0x5d635d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6360:{NFSU2_TR(0x5d6360);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6366:{NFSU2_TR(0x5d6366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d636bull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d636b:L5d636b:{c.instructions+=4;NFSU2_TR(0x5d636b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d636f:{NFSU2_TR(0x5d636f);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6372:{NFSU2_TR(0x5d6372);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6378:{NFSU2_TR(0x5d6378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d637dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d637d:L5d637d:{c.instructions+=4;NFSU2_TR(0x5d637d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d6381:{NFSU2_TR(0x5d6381);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6384:{NFSU2_TR(0x5d6384);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d638a:{NFSU2_TR(0x5d638a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d638full));
TAIL_STATIC(0x75bed4u,75b);
}
B5d638f:L5d638f:{c.instructions+=4;NFSU2_TR(0x5d638f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d6393:{NFSU2_TR(0x5d6393);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6396:{NFSU2_TR(0x5d6396);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d639c:{NFSU2_TR(0x5d639c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d63a1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d63a1:L5d63a1:{c.instructions+=4;NFSU2_TR(0x5d63a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d63a5:{NFSU2_TR(0x5d63a5);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d63a8:{NFSU2_TR(0x5d63a8);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d63ae:{NFSU2_TR(0x5d63ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d63b3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d63b3:L5d63b3:{c.instructions+=4;NFSU2_TR(0x5d63b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d63b7:{NFSU2_TR(0x5d63b7);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d63ba:{NFSU2_TR(0x5d63ba);
{u32 ea_=u32(u32(8016352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d63c0:{NFSU2_TR(0x5d63c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d63c5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d63c5:L5d63c5:{c.instructions+=10;NFSU2_TR(0x5d63c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d63c9:{NFSU2_TR(0x5d63c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d63cc:{NFSU2_TR(0x5d63cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d63cf:{NFSU2_TR(0x5d63cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d63d2:{NFSU2_TR(0x5d63d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d63d5:{NFSU2_TR(0x5d63d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d63d8:{NFSU2_TR(0x5d63d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d63d9:{NFSU2_TR(0x5d63d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d63dc:{NFSU2_TR(0x5d63dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d63dd:{NFSU2_TR(0x5d63dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d63e0:L5d63e0:{c.instructions+=6;NFSU2_TR(0x5d63e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d63e1:{NFSU2_TR(0x5d63e1);
__builtin_memmove((R+24),gp(0x883df0),4);
}
B5d63e7:{NFSU2_TR(0x5d63e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d63e8:{NFSU2_TR(0x5d63e8);
__builtin_memmove((R+28),gp(0x883df4),4);
}
B5d63ee:{NFSU2_TR(0x5d63ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d63f0:{NFSU2_TR(0x5d63f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d63f2:L5d63f2:{c.instructions+=3;NFSU2_TR(0x5d63f2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d63f4:{NFSU2_TR(0x5d63f4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x883ac0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5d63fc:{NFSU2_TR(0x5d63fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d6414;}}
}
B5d63fe:L5d63fe:{c.instructions+=1;NFSU2_TR(0x5d63fe);
__builtin_memmove((R+28),(R+28),4);
}
B5d6400:L5d6400:{c.instructions+=5;NFSU2_TR(0x5d6400);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d6402:{NFSU2_TR(0x5d6402);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5d6405:{NFSU2_TR(0x5d6405);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B5d640b:{NFSU2_TR(0x5d640b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d640d:{NFSU2_TR(0x5d640d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6414;}}
}
B5d640f:L5d640f:{c.instructions+=3;NFSU2_TR(0x5d640f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d6410:{NFSU2_TR(0x5d6410);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6412:{NFSU2_TR(0x5d6412);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6400u);}goto L5d6400;}}
}
B5d6414:L5d6414:{c.instructions+=3;NFSU2_TR(0x5d6414);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d6415:{NFSU2_TR(0x5d6415);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d641b:{NFSU2_TR(0x5d641b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d63f2u);}goto L5d63f2;}}
}
B5d641d:L5d641d:{c.instructions+=4;NFSU2_TR(0x5d641d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d641e:{NFSU2_TR(0x5d641e);
__builtin_memmove(gp(0x883cc0),(R+0),2);
}
B5d6424:{NFSU2_TR(0x5d6424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6425:{NFSU2_TR(0x5d6425);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6430:L5d6430:{c.instructions+=4;NFSU2_TR(0x5d6430);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6434:{NFSU2_TR(0x5d6434);
__builtin_memmove((R+4),gp(0x883df0),4);
}
B5d643a:{NFSU2_TR(0x5d643a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d643d:{NFSU2_TR(0x5d643d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6440:L5d6440:{c.instructions+=3;NFSU2_TR(0x5d6440);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6444:{NFSU2_TR(0x5d6444);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x34108ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x34108ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x34108ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d644a:{NFSU2_TR(0x5d644a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6461;}}
}
B5d644c:L5d644c:{c.instructions+=5;NFSU2_TR(0x5d644c);
w4(R+0,u32(0x88f760ull));
}
B5d6451:{NFSU2_TR(0x5d6451);
__builtin_memmove(gp(0x88f760),(R+0),4);
}
B5d6456:{NFSU2_TR(0x5d6456);
__builtin_memmove(gp(0x88f764),(R+0),4);
}
B5d645b:{NFSU2_TR(0x5d645b);
w4(R+0,u32(0x1ull));
}
B5d6460:{NFSU2_TR(0x5d6460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6461:L5d6461:{c.instructions+=2;NFSU2_TR(0x5d6461);
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
B5d6463:{NFSU2_TR(0x5d6463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6470:L5d6470:{c.instructions+=8;NFSU2_TR(0x5d6470);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6474:{NFSU2_TR(0x5d6474);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6475:{NFSU2_TR(0x5d6475);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6479:{NFSU2_TR(0x5d6479);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d647b:{NFSU2_TR(0x5d647b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d647d:{NFSU2_TR(0x5d647d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d647e:{NFSU2_TR(0x5d647e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d6482:{NFSU2_TR(0x5d6482);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d64a6;}}
}
B5d6484:L5d6484:{c.instructions+=3;NFSU2_TR(0x5d6484);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B5d6488:{NFSU2_TR(0x5d6488);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d648a:{NFSU2_TR(0x5d648a);
if(r1(R+518)){{goto L5d64a2;}}
}
B5d648c:L5d648c:{c.instructions+=3;NFSU2_TR(0x5d648c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d648d:{NFSU2_TR(0x5d648d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d648f:{NFSU2_TR(0x5d648f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6484u);}goto L5d6484;}}
}
B5d6491:L5d6491:{c.instructions+=9;NFSU2_TR(0x5d6491);
__builtin_memmove((R+0),(R+4),4);
}
B5d6493:{NFSU2_TR(0x5d6493);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d6494:{NFSU2_TR(0x5d6494);
u8 U[64];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d6494);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d6494);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B5d6498:{NFSU2_TR(0x5d6498);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6499:{NFSU2_TR(0x5d6499);
__builtin_memmove((R+0),(R+4),4);
}
B5d649b:{NFSU2_TR(0x5d649b);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5d649f:{NFSU2_TR(0x5d649f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d64a0:{NFSU2_TR(0x5d64a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d64a1:{NFSU2_TR(0x5d64a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d64a2:L5d64a2:{c.instructions+=2;NFSU2_TR(0x5d64a2);
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
B5d64a4:{NFSU2_TR(0x5d64a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d64b7;}}
}
B5d64a6:L5d64a6:{c.instructions+=9;NFSU2_TR(0x5d64a6);
__builtin_memmove((R+0),(R+4),4);
}
B5d64a8:{NFSU2_TR(0x5d64a8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d64a9:{NFSU2_TR(0x5d64a9);
u8 U[64];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d64a9);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d64a9);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B5d64ad:{NFSU2_TR(0x5d64ad);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d64ae:{NFSU2_TR(0x5d64ae);
__builtin_memmove((R+0),(R+4),4);
}
B5d64b0:{NFSU2_TR(0x5d64b0);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5d64b4:{NFSU2_TR(0x5d64b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d64b5:{NFSU2_TR(0x5d64b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d64b6:{NFSU2_TR(0x5d64b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d64b7:L5d64b7:{c.instructions+=5;NFSU2_TR(0x5d64b7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w2(U+8,u16(0xffffull));
s2(u32(r4(U+4)),r2(U+8));
}
B5d64bd:{NFSU2_TR(0x5d64bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d64be:{NFSU2_TR(0x5d64be);
__builtin_memmove((R+0),(R+4),4);
}
B5d64c0:{NFSU2_TR(0x5d64c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d64c1:{NFSU2_TR(0x5d64c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d64d0:L5d64d0:{c.instructions+=26;NFSU2_TR(0x5d64d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d64d1:{NFSU2_TR(0x5d64d1);
__builtin_memmove((R+20),(R+16),4);
}
B5d64d3:{NFSU2_TR(0x5d64d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d64d6:{NFSU2_TR(0x5d64d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d64d9:{NFSU2_TR(0x5d64d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d64dc:{NFSU2_TR(0x5d64dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d64df:{NFSU2_TR(0x5d64df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d64e1:{NFSU2_TR(0x5d64e1);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d64e4:{NFSU2_TR(0x5d64e4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d64e7:{NFSU2_TR(0x5d64e7);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d64ea:{NFSU2_TR(0x5d64ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d64ed:{NFSU2_TR(0x5d64ed);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d64f0:{NFSU2_TR(0x5d64f0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d64f2:{NFSU2_TR(0x5d64f2);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d64f5:{NFSU2_TR(0x5d64f5);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d64f7:{NFSU2_TR(0x5d64f7);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d64fa:{NFSU2_TR(0x5d64fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d64fc:{NFSU2_TR(0x5d64fc);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5d64fe:{NFSU2_TR(0x5d64fe);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6501:{NFSU2_TR(0x5d6501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d6503:{NFSU2_TR(0x5d6503);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6506:{NFSU2_TR(0x5d6506);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d6508:{NFSU2_TR(0x5d6508);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d650a:{NFSU2_TR(0x5d650a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d650c:{NFSU2_TR(0x5d650c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d650f:{NFSU2_TR(0x5d650f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d651d;}}
}
B5d6511:L5d6511:{c.instructions+=7;NFSU2_TR(0x5d6511);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6513:{NFSU2_TR(0x5d6513);
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
B5d6515:{NFSU2_TR(0x5d6515);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6517:{NFSU2_TR(0x5d6517);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6519:{NFSU2_TR(0x5d6519);
__builtin_memmove((R+16),(R+20),4);
}
B5d651b:{NFSU2_TR(0x5d651b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d651c:{NFSU2_TR(0x5d651c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d651d:L5d651d:{c.instructions+=20;NFSU2_TR(0x5d651d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d651f:{NFSU2_TR(0x5d651f);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B5d6521:{NFSU2_TR(0x5d6521);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d6523:{NFSU2_TR(0x5d6523);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d6525:{NFSU2_TR(0x5d6525);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5d6527:{NFSU2_TR(0x5d6527);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d6529:{NFSU2_TR(0x5d6529);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d652b:{NFSU2_TR(0x5d652b);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5d652d:{NFSU2_TR(0x5d652d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5d652f:{NFSU2_TR(0x5d652f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d6531:{NFSU2_TR(0x5d6531);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d6533:{NFSU2_TR(0x5d6533);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6535:{NFSU2_TR(0x5d6535);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6538:{NFSU2_TR(0x5d6538);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d653c:{NFSU2_TR(0x5d653c);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6542:{NFSU2_TR(0x5d6542);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6546:{NFSU2_TR(0x5d6546);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6549:{NFSU2_TR(0x5d6549);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d654b:{NFSU2_TR(0x5d654b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d654e:{NFSU2_TR(0x5d654e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d655f;}}
}
B5d6550:L5d6550:{c.instructions+=4;NFSU2_TR(0x5d6550);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6552:{NFSU2_TR(0x5d6552);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6558:{NFSU2_TR(0x5d6558);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d655c:{NFSU2_TR(0x5d655c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d655f:L5d655f:{c.instructions+=1;NFSU2_TR(0x5d655f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6564ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d6564:L5d6564:{c.instructions+=3;NFSU2_TR(0x5d6564);
__builtin_memmove((R+16),(R+20),4);
}
B5d6566:{NFSU2_TR(0x5d6566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6567:{NFSU2_TR(0x5d6567);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6570:L5d6570:{c.instructions+=16;NFSU2_TR(0x5d6570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6571:{NFSU2_TR(0x5d6571);
__builtin_memmove((R+20),(R+16),4);
}
B5d6573:{NFSU2_TR(0x5d6573);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d6576:{NFSU2_TR(0x5d6576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B5d6579:{NFSU2_TR(0x5d6579);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d657a:{NFSU2_TR(0x5d657a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d657d:{NFSU2_TR(0x5d657d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d657e:{NFSU2_TR(0x5d657e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6581:{NFSU2_TR(0x5d6581);
__builtin_memmove((R+0),(R+4),4);
}
B5d6583:{NFSU2_TR(0x5d6583);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6589:{NFSU2_TR(0x5d6589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d658a:{NFSU2_TR(0x5d658a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d658d:{NFSU2_TR(0x5d658d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5d6590:{NFSU2_TR(0x5d6590);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B5d6592:{NFSU2_TR(0x5d6592);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d6594:{NFSU2_TR(0x5d6594);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d65bc;}}
}
B5d6596:L5d6596:{c.instructions+=11;NFSU2_TR(0x5d6596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6599:{NFSU2_TR(0x5d6599);
__builtin_memmove((R+28),(R+4),4);
}
B5d659b:{NFSU2_TR(0x5d659b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5d659e:{NFSU2_TR(0x5d659e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B5d65a1:{NFSU2_TR(0x5d65a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d65a4:{NFSU2_TR(0x5d65a4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5d65a6:{NFSU2_TR(0x5d65a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d65a9:{NFSU2_TR(0x5d65a9);
w4(R+12,u32(0x1ull));
}
B5d65ae:{NFSU2_TR(0x5d65ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B5d65b0:{NFSU2_TR(0x5d65b0);
u8 U[13];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+12,u8(u32(r1(U+8))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+12))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+12))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B5d65b3:{NFSU2_TR(0x5d65b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d65b9:L5d65b9:{c.instructions+=1;NFSU2_TR(0x5d65b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d65bc:L5d65bc:{c.instructions+=6;NFSU2_TR(0x5d65bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d65bf:{NFSU2_TR(0x5d65bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d65c1:{NFSU2_TR(0x5d65c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d65c5:{NFSU2_TR(0x5d65c5);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x60ull))));
}
B5d65c8:{NFSU2_TR(0x5d65c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d65ca:{NFSU2_TR(0x5d65ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d65d0:L5d65d0:{c.instructions+=7;NFSU2_TR(0x5d65d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d65d4:{NFSU2_TR(0x5d65d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d65d7:{NFSU2_TR(0x5d65d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5d65da:{NFSU2_TR(0x5d65da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d65dd:{NFSU2_TR(0x5d65dd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B5d65df:{NFSU2_TR(0x5d65df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d65e2:{NFSU2_TR(0x5d65e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d662c;}}
}
B5d65e4:L5d65e4:{c.instructions+=19;NFSU2_TR(0x5d65e4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d65e7:{NFSU2_TR(0x5d65e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d65e9:{NFSU2_TR(0x5d65e9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d65ed:{NFSU2_TR(0x5d65ed);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d65f0:{NFSU2_TR(0x5d65f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d65f2:{NFSU2_TR(0x5d65f2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d65f6:{NFSU2_TR(0x5d65f6);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d65f9:{NFSU2_TR(0x5d65f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d65fd:{NFSU2_TR(0x5d65fd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6601:{NFSU2_TR(0x5d6601);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6604:{NFSU2_TR(0x5d6604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6605:{NFSU2_TR(0x5d6605);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6609:{NFSU2_TR(0x5d6609);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d660c:{NFSU2_TR(0x5d660c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d6610:{NFSU2_TR(0x5d6610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6611:{NFSU2_TR(0x5d6611);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6614:{NFSU2_TR(0x5d6614);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6618:{NFSU2_TR(0x5d6618);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d661c:{NFSU2_TR(0x5d661c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6621ull));
TAIL_STATIC(0x48ac60u,48a);
}
B5d6621:L5d6621:{c.instructions+=3;NFSU2_TR(0x5d6621);
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
B5d6623:{NFSU2_TR(0x5d6623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6626:{NFSU2_TR(0x5d6626);
if(r1(R+518)){{goto L5d69a1;}}
}
B5d662c:L5d662c:{c.instructions+=8;NFSU2_TR(0x5d662c);
{u32 ea_=u32(u32(8013772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6632:{NFSU2_TR(0x5d6632);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6633:{NFSU2_TR(0x5d6633);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6636:{NFSU2_TR(0x5d6636);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d6639:{NFSU2_TR(0x5d6639);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d663c:{NFSU2_TR(0x5d663c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d663d:{NFSU2_TR(0x5d663d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d663e:{NFSU2_TR(0x5d663e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6643ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d64d0u);}goto L5d64d0;}
}
B5d6643:L5d6643:{c.instructions+=4;NFSU2_TR(0x5d6643);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d6646:{NFSU2_TR(0x5d6646);
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
B5d6649:{NFSU2_TR(0x5d6649);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d664d:{NFSU2_TR(0x5d664d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d69a1;}}
}
B5d6653:L5d6653:{c.instructions+=3;NFSU2_TR(0x5d6653);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6656:{NFSU2_TR(0x5d6656);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x18ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6659:{NFSU2_TR(0x5d6659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d671a;}}
}
B5d665f:L5d665f:{c.instructions+=2;NFSU2_TR(0x5d665f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6662:{NFSU2_TR(0x5d6662);
if(r1(R+518)){{goto L5d6675;}}
}
B5d6664:L5d6664:{c.instructions+=2;NFSU2_TR(0x5d6664);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6667:{NFSU2_TR(0x5d6667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d666d:L5d666d:{c.instructions+=2;NFSU2_TR(0x5d666d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6670:{NFSU2_TR(0x5d6670);
{goto L5d673a;}
}
B5d6675:L5d6675:{c.instructions+=1;NFSU2_TR(0x5d6675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d667aull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B5d667a:L5d667a:{c.instructions+=3;NFSU2_TR(0x5d667a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d667d:{NFSU2_TR(0x5d667d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6681:{NFSU2_TR(0x5d6681);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d6694;}}
}
B5d6683:L5d6683:{c.instructions+=2;NFSU2_TR(0x5d6683);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6686:{NFSU2_TR(0x5d6686);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d668c:L5d668c:{c.instructions+=2;NFSU2_TR(0x5d668c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d668f:{NFSU2_TR(0x5d668f);
{goto L5d673a;}
}
B5d6694:L5d6694:{c.instructions+=2;NFSU2_TR(0x5d6694);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6697:{NFSU2_TR(0x5d6697);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d669d:L5d669d:{c.instructions+=4;NFSU2_TR(0x5d669d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d66a0:{NFSU2_TR(0x5d66a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d66a6:{NFSU2_TR(0x5d66a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d66a8:{NFSU2_TR(0x5d66a8);
if(r1(R+518)){{goto L5d66f6;}}
}
B5d66aa:L5d66aa:{c.instructions+=3;NFSU2_TR(0x5d66aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d66ad:{NFSU2_TR(0x5d66ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d66af:{NFSU2_TR(0x5d66af);
if(r1(R+518)){{goto L5d66f6;}}
}
B5d66b1:L5d66b1:{c.instructions+=2;NFSU2_TR(0x5d66b1);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x28ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x28ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B5d66b6:{NFSU2_TR(0x5d66b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d66c2;}}
}
B5d66b8:L5d66b8:{c.instructions+=3;NFSU2_TR(0x5d66b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d66ba:{NFSU2_TR(0x5d66ba);
{u32 ea_=u32(u32(8013788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d66c0:{NFSU2_TR(0x5d66c0);
{goto L5d66f6;}
}
B5d66c2:L5d66c2:{c.instructions+=5;NFSU2_TR(0x5d66c2);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d66c8:{NFSU2_TR(0x5d66c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d66ce:{NFSU2_TR(0x5d66ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d66d0:{NFSU2_TR(0x5d66d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d66d3:{NFSU2_TR(0x5d66d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d66f6;}}
}
B5d66d5:L5d66d5:{c.instructions+=6;NFSU2_TR(0x5d66d5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d66d7:{NFSU2_TR(0x5d66d7);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d66dd:{NFSU2_TR(0x5d66dd);
{u32 ea_=u32(u32(8013792u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d66e3:{NFSU2_TR(0x5d66e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d66e5:{NFSU2_TR(0x5d66e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d66e8:{NFSU2_TR(0x5d66e8);
if(r1(R+514)){{goto L5d66f2;}}
}
B5d66ea:L5d66ea:{c.instructions+=2;NFSU2_TR(0x5d66ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d66ec:{NFSU2_TR(0x5d66ec);
{u32 ea_=u32(u32(8013792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d66f2:L5d66f2:{c.instructions+=1;NFSU2_TR(0x5d66f2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xda,0x38"::"a"(ea_):"memory");}
}
B5d66f6:L5d66f6:{c.instructions+=4;NFSU2_TR(0x5d66f6);
{u32 ea_=u32(u32(8013788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d66fc:{NFSU2_TR(0x5d66fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d66fe:{NFSU2_TR(0x5d66fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6701:{NFSU2_TR(0x5d6701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d666du);}goto L5d666d;}}
}
B5d6707:L5d6707:{c.instructions+=1;NFSU2_TR(0x5d6707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d670cull));
TAIL_STATIC(0x5be1c0u,5be);
}
B5d670c:L5d670c:{c.instructions+=2;NFSU2_TR(0x5d670c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d670f:{NFSU2_TR(0x5d670f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d666du);}goto L5d666d;}}
}
B5d6715:L5d6715:{c.instructions+=2;NFSU2_TR(0x5d6715);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6718:{NFSU2_TR(0x5d6718);
{goto L5d673a;}
}
B5d671a:L5d671a:{c.instructions+=2;NFSU2_TR(0x5d671a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5d671e:{NFSU2_TR(0x5d671e);
if(r1(R+518)){{goto L5d672e;}}
}
B5d6720:L5d6720:{c.instructions+=2;NFSU2_TR(0x5d6720);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6723:{NFSU2_TR(0x5d6723);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d6729:L5d6729:{c.instructions+=2;NFSU2_TR(0x5d6729);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d672c:{NFSU2_TR(0x5d672c);
{goto L5d673a;}
}
B5d672e:L5d672e:{c.instructions+=2;NFSU2_TR(0x5d672e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6731:{NFSU2_TR(0x5d6731);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d6737:L5d6737:{c.instructions+=1;NFSU2_TR(0x5d6737);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d673a:L5d673a:{c.instructions+=2;NFSU2_TR(0x5d673a);
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
B5d673c:{NFSU2_TR(0x5d673c);
if(r1(R+518)){{goto L5d69a1;}}
}
B5d6742:L5d6742:{c.instructions+=2;NFSU2_TR(0x5d6742);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6746:{NFSU2_TR(0x5d6746);
if(r1(R+518)){{goto L5d6777;}}
}
B5d6748:L5d6748:{c.instructions+=4;NFSU2_TR(0x5d6748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d674b:{NFSU2_TR(0x5d674b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d674e:{NFSU2_TR(0x5d674e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d6751:{NFSU2_TR(0x5d6751);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d6757:L5d6757:{c.instructions+=13;NFSU2_TR(0x5d6757);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d675a:{NFSU2_TR(0x5d675a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d675d:{NFSU2_TR(0x5d675d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6760:{NFSU2_TR(0x5d6760);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+12),r4(R+4)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d6762:{NFSU2_TR(0x5d6762);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d6764:{NFSU2_TR(0x5d6764);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d676b:{NFSU2_TR(0x5d676b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d676e:{NFSU2_TR(0x5d676e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d676f:{NFSU2_TR(0x5d676f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6770:{NFSU2_TR(0x5d6770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6771:{NFSU2_TR(0x5d6771);
__builtin_memmove((R+16),(R+20),4);
}
B5d6773:{NFSU2_TR(0x5d6773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6774:{NFSU2_TR(0x5d6774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6777:L5d6777:{c.instructions+=2;NFSU2_TR(0x5d6777);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6779:{NFSU2_TR(0x5d6779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d677eull));
TAIL_STATIC(0x401e80u,401);
}
B5d677e:L5d677e:{c.instructions+=4;NFSU2_TR(0x5d677e);
__builtin_memmove((R+28),(R+0),4);
}
B5d6780:{NFSU2_TR(0x5d6780);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d6783:{NFSU2_TR(0x5d6783);
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
B5d6785:{NFSU2_TR(0x5d6785);
if(r1(R+518)){{goto L5d69a1;}}
}
B5d678b:L5d678b:{c.instructions+=3;NFSU2_TR(0x5d678b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d678c:{NFSU2_TR(0x5d678c);
__builtin_memmove((R+4),(R+24),4);
}
B5d678e:{NFSU2_TR(0x5d678e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6793ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6240u);}goto L5d6240;}
}
B5d6793:L5d6793:{c.instructions+=4;NFSU2_TR(0x5d6793);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d6796:{NFSU2_TR(0x5d6796);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6797:{NFSU2_TR(0x5d6797);
__builtin_memmove((R+4),(R+24),4);
}
B5d6799:{NFSU2_TR(0x5d6799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d679eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6210u);}goto L5d6210;}
}
B5d679e:L5d679e:{c.instructions+=4;NFSU2_TR(0x5d679e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d67a1:{NFSU2_TR(0x5d67a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d67a4:{NFSU2_TR(0x5d67a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d67a7:{NFSU2_TR(0x5d67a7);
if(r1(R+518)){{goto L5d67b1;}}
}
B5d67a9:L5d67a9:{c.instructions+=3;NFSU2_TR(0x5d67a9);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d67ac:{NFSU2_TR(0x5d67ac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d67ae:{NFSU2_TR(0x5d67ae);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d67b1:L5d67b1:{c.instructions+=4;NFSU2_TR(0x5d67b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d67b4:{NFSU2_TR(0x5d67b4);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d67b7:{NFSU2_TR(0x5d67b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d67bb:{NFSU2_TR(0x5d67bb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d67c1:L5d67c1:{c.instructions+=8;NFSU2_TR(0x5d67c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d67c4:{NFSU2_TR(0x5d67c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d67c7:{NFSU2_TR(0x5d67c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d67ca:{NFSU2_TR(0x5d67ca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5d67cc:{NFSU2_TR(0x5d67cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d67ce:{NFSU2_TR(0x5d67ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d67d1:{NFSU2_TR(0x5d67d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d67d4:{NFSU2_TR(0x5d67d4);
if(r1(R+518)){{goto L5d6820;}}
}
B5d67d6:L5d67d6:{c.instructions+=3;NFSU2_TR(0x5d67d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d67d9:{NFSU2_TR(0x5d67d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d67db:{NFSU2_TR(0x5d67db);
if(r1(R+518)){{goto L5d6820;}}
}
B5d67dd:L5d67dd:{c.instructions+=3;NFSU2_TR(0x5d67dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d67e0:{NFSU2_TR(0x5d67e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d67e2:{NFSU2_TR(0x5d67e2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5d6820;}}
}
B5d67e4:L5d67e4:{c.instructions+=4;NFSU2_TR(0x5d67e4);
{u32 ea_=u32(u32(8013796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d67ea:{NFSU2_TR(0x5d67ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d67eb:{NFSU2_TR(0x5d67eb);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d67ee:{NFSU2_TR(0x5d67ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d67f3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d67f3:L5d67f3:{c.instructions+=10;NFSU2_TR(0x5d67f3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d67f4:{NFSU2_TR(0x5d67f4);
w4(R+4,u32(0x168ull));
}
B5d67f9:{NFSU2_TR(0x5d67f9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d67f9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d67f9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d67fb:{NFSU2_TR(0x5d67fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d67fe:{NFSU2_TR(0x5d67fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6801:{NFSU2_TR(0x5d6801);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6802:{NFSU2_TR(0x5d6802);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d6806:{NFSU2_TR(0x5d6806);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6807:{NFSU2_TR(0x5d6807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6808:{NFSU2_TR(0x5d6808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d680dull));
TAIL_STATIC(0x613540u,613);
}
B5d680d:L5d680d:{c.instructions+=5;NFSU2_TR(0x5d680d);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d6811:{NFSU2_TR(0x5d6811);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6812:{NFSU2_TR(0x5d6812);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6813:{NFSU2_TR(0x5d6813);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6814:{NFSU2_TR(0x5d6814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6819ull));
TAIL_STATIC(0x43c990u,43c);
}
B5d6819:L5d6819:{c.instructions+=2;NFSU2_TR(0x5d6819);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d681d:{NFSU2_TR(0x5d681d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5d6820:L5d6820:{c.instructions+=4;NFSU2_TR(0x5d6820);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6822:{NFSU2_TR(0x5d6822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6825:{NFSU2_TR(0x5d6825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6828:{NFSU2_TR(0x5d6828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d682dull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d682d:L5d682d:{c.instructions+=5;NFSU2_TR(0x5d682d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6830:{NFSU2_TR(0x5d6830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6833:{NFSU2_TR(0x5d6833);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d6836:{NFSU2_TR(0x5d6836);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d6838:{NFSU2_TR(0x5d6838);
if(r1(R+518)){{goto L5d684f;}}
}
B5d683a:L5d683a:{c.instructions+=2;NFSU2_TR(0x5d683a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d683c:{NFSU2_TR(0x5d683c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6841ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d6841:L5d6841:{c.instructions+=4;NFSU2_TR(0x5d6841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6844:{NFSU2_TR(0x5d6844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d6847:{NFSU2_TR(0x5d6847);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d6849:{NFSU2_TR(0x5d6849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d69a1;}}
}
B5d684f:L5d684f:{c.instructions+=3;NFSU2_TR(0x5d684f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6851:{NFSU2_TR(0x5d6851);
__builtin_memmove((R+4),(R+12),4);
}
B5d6853:{NFSU2_TR(0x5d6853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6858ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B5d6858:L5d6858:{c.instructions+=3;NFSU2_TR(0x5d6858);
__builtin_memmove((R+28),(R+0),4);
}
B5d685a:{NFSU2_TR(0x5d685a);
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
B5d685c:{NFSU2_TR(0x5d685c);
if(r1(R+518)){{goto L5d69a1;}}
}
B5d6862:L5d6862:{c.instructions+=3;NFSU2_TR(0x5d6862);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6865:{NFSU2_TR(0x5d6865);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6867:{NFSU2_TR(0x5d6867);
if(r1(R+518)){{goto L5d698f;}}
}
B5d686d:L5d686d:{c.instructions+=2;NFSU2_TR(0x5d686d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d686f:{NFSU2_TR(0x5d686f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6874ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5d6874:L5d6874:{c.instructions+=13;NFSU2_TR(0x5d6874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6877:{NFSU2_TR(0x5d6877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d687a:{NFSU2_TR(0x5d687a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d687c:{NFSU2_TR(0x5d687c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d687e:{NFSU2_TR(0x5d687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6881:{NFSU2_TR(0x5d6881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5d6884:{NFSU2_TR(0x5d6884);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d6886:{NFSU2_TR(0x5d6886);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d6887:{NFSU2_TR(0x5d6887);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d688a:{NFSU2_TR(0x5d688a);
__builtin_memmove((R+0),(R+518),1);
}
B5d688d:{NFSU2_TR(0x5d688d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d688e:{NFSU2_TR(0x5d688e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d688f:{NFSU2_TR(0x5d688f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6894ull));
TAIL_STATIC(0x48ab20u,48a);
}
B5d6894:L5d6894:{c.instructions+=4;NFSU2_TR(0x5d6894);
__builtin_memmove((R+24),(R+0),4);
}
B5d6896:{NFSU2_TR(0x5d6896);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d6899:{NFSU2_TR(0x5d6899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d689b:{NFSU2_TR(0x5d689b);
if(r1(R+518)){{goto L5d698f;}}
}
B5d68a1:L5d68a1:{c.instructions+=53;NFSU2_TR(0x5d68a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d68a4:{NFSU2_TR(0x5d68a4);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68a7:{NFSU2_TR(0x5d68a7);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d68aa:{NFSU2_TR(0x5d68aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d68ae:{NFSU2_TR(0x5d68ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d68b2:{NFSU2_TR(0x5d68b2);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68b5:{NFSU2_TR(0x5d68b5);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d68b8:{NFSU2_TR(0x5d68b8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d68bc:{NFSU2_TR(0x5d68bc);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68bf:{NFSU2_TR(0x5d68bf);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d68c2:{NFSU2_TR(0x5d68c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d68c5:{NFSU2_TR(0x5d68c5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d68c9:{NFSU2_TR(0x5d68c9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68cd:{NFSU2_TR(0x5d68cd);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68d0:{NFSU2_TR(0x5d68d0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68d4:{NFSU2_TR(0x5d68d4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68d7:{NFSU2_TR(0x5d68d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d68d9:{NFSU2_TR(0x5d68d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68dd:{NFSU2_TR(0x5d68dd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68df:{NFSU2_TR(0x5d68df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d68e1:{NFSU2_TR(0x5d68e1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d68e4:{NFSU2_TR(0x5d68e4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68e8:{NFSU2_TR(0x5d68e8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68eb:{NFSU2_TR(0x5d68eb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68ef:{NFSU2_TR(0x5d68ef);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68f2:{NFSU2_TR(0x5d68f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d68f4:{NFSU2_TR(0x5d68f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d68f8:{NFSU2_TR(0x5d68f8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d68fb:{NFSU2_TR(0x5d68fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d68fd:{NFSU2_TR(0x5d68fd);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6900:{NFSU2_TR(0x5d6900);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6904:{NFSU2_TR(0x5d6904);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6907:{NFSU2_TR(0x5d6907);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d690b:{NFSU2_TR(0x5d690b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d690e:{NFSU2_TR(0x5d690e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d6910:{NFSU2_TR(0x5d6910);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6914:{NFSU2_TR(0x5d6914);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d6917:{NFSU2_TR(0x5d6917);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d6919:{NFSU2_TR(0x5d6919);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d691c:{NFSU2_TR(0x5d691c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6920:{NFSU2_TR(0x5d6920);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d6922:{NFSU2_TR(0x5d6922);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6926:{NFSU2_TR(0x5d6926);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d692a:{NFSU2_TR(0x5d692a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d692e:{NFSU2_TR(0x5d692e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6931:{NFSU2_TR(0x5d6931);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d6933:{NFSU2_TR(0x5d6933);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6936:{NFSU2_TR(0x5d6936);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6939:{NFSU2_TR(0x5d6939);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d693c:{NFSU2_TR(0x5d693c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xaull))));
}
B5d693e:{NFSU2_TR(0x5d693e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6941:{NFSU2_TR(0x5d6941);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d6945:{NFSU2_TR(0x5d6945);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6989;}}
}
B5d6947:L5d6947:{c.instructions+=12;NFSU2_TR(0x5d6947);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d694b:{NFSU2_TR(0x5d694b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d694e:{NFSU2_TR(0x5d694e);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6951:{NFSU2_TR(0x5d6951);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d6955:{NFSU2_TR(0x5d6955);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6959:{NFSU2_TR(0x5d6959);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d695a:{NFSU2_TR(0x5d695a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d695d:{NFSU2_TR(0x5d695d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d6961:{NFSU2_TR(0x5d6961);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6962:{NFSU2_TR(0x5d6962);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6966:{NFSU2_TR(0x5d6966);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d696a:{NFSU2_TR(0x5d696a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d696full));
TAIL_STATIC(0x43ce50u,43c);
}
B5d696f:L5d696f:{c.instructions+=7;NFSU2_TR(0x5d696f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6973:{NFSU2_TR(0x5d6973);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6977:{NFSU2_TR(0x5d6977);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d697a:{NFSU2_TR(0x5d697a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d697d:{NFSU2_TR(0x5d697d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6980:{NFSU2_TR(0x5d6980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6987:{NFSU2_TR(0x5d6987);
{goto L5d698f;}
}
B5d6989:L5d6989:{c.instructions+=2;NFSU2_TR(0x5d6989);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d698b:{NFSU2_TR(0x5d698b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d698f:L5d698f:{c.instructions+=3;NFSU2_TR(0x5d698f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6990:{NFSU2_TR(0x5d6990);
__builtin_memmove((R+4),(R+12),4);
}
B5d6992:{NFSU2_TR(0x5d6992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6997ull));
TAIL_STATIC(0x48d8a0u,48d);
}
B5d6997:L5d6997:{c.instructions+=3;NFSU2_TR(0x5d6997);
__builtin_memmove((R+28),(R+0),4);
}
B5d6999:{NFSU2_TR(0x5d6999);
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
B5d699b:{NFSU2_TR(0x5d699b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6862u);}goto L5d6862;}}
}
B5d69a1:L5d69a1:{c.instructions+=6;NFSU2_TR(0x5d69a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d69a2:{NFSU2_TR(0x5d69a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d69a3:{NFSU2_TR(0x5d69a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d69a4:{NFSU2_TR(0x5d69a4);
__builtin_memmove((R+16),(R+20),4);
}
B5d69a6:{NFSU2_TR(0x5d69a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d69a7:{NFSU2_TR(0x5d69a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d69b0:L5d69b0:{c.instructions+=14;NFSU2_TR(0x5d69b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d69b1:{NFSU2_TR(0x5d69b1);
__builtin_memmove((R+20),(R+16),4);
}
B5d69b3:{NFSU2_TR(0x5d69b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d69b6:{NFSU2_TR(0x5d69b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x174ull))));
}
B5d69bc:{NFSU2_TR(0x5d69bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d69bf:{NFSU2_TR(0x5d69bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d69c0:{NFSU2_TR(0x5d69c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d69c1:{NFSU2_TR(0x5d69c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d69c2:{NFSU2_TR(0x5d69c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d69c6:{NFSU2_TR(0x5d69c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d69cd:{NFSU2_TR(0x5d69cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5d69d4:{NFSU2_TR(0x5d69d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d69d9:{NFSU2_TR(0x5d69d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d69dd:{NFSU2_TR(0x5d69dd);
__builtin_memmove((R+4),(R+4),4);
}
B5d69e0:L5d69e0:{c.instructions+=7;NFSU2_TR(0x5d69e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5d69e3:{NFSU2_TR(0x5d69e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d69e6:{NFSU2_TR(0x5d69e6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B5d69e9:{NFSU2_TR(0x5d69e9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5d69ea:{NFSU2_TR(0x5d69ea);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d69ed:{NFSU2_TR(0x5d69ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d69f1:{NFSU2_TR(0x5d69f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6a39;}}
}
B5d69f3:L5d69f3:{c.instructions+=20;NFSU2_TR(0x5d69f3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d69f6:{NFSU2_TR(0x5d69f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d69f8:{NFSU2_TR(0x5d69f8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d69fc:{NFSU2_TR(0x5d69fc);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d69ff:{NFSU2_TR(0x5d69ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a01:{NFSU2_TR(0x5d6a01);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6a05:{NFSU2_TR(0x5d6a05);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6a08:{NFSU2_TR(0x5d6a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6a0c:{NFSU2_TR(0x5d6a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a0f:{NFSU2_TR(0x5d6a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a12:{NFSU2_TR(0x5d6a12);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6a16:{NFSU2_TR(0x5d6a16);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6a19:{NFSU2_TR(0x5d6a19);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d6a1d:{NFSU2_TR(0x5d6a1d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6a21:{NFSU2_TR(0x5d6a21);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6a24:{NFSU2_TR(0x5d6a24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a25:{NFSU2_TR(0x5d6a25);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d6a29:{NFSU2_TR(0x5d6a29);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d6a2d:{NFSU2_TR(0x5d6a2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a2e:{NFSU2_TR(0x5d6a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6a33ull));
TAIL_STATIC(0x48ac60u,48a);
}
B5d6a33:L5d6a33:{c.instructions+=2;NFSU2_TR(0x5d6a33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6a37:{NFSU2_TR(0x5d6a37);
__builtin_memmove((R+12),(R+0),1);
}
B5d6a39:L5d6a39:{c.instructions+=2;NFSU2_TR(0x5d6a39);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6a3b:{NFSU2_TR(0x5d6a3b);
if(r1(R+518)){{goto L5d6ab4;}}
}
B5d6a3d:L5d6a3d:{c.instructions+=3;NFSU2_TR(0x5d6a3d);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5d6a42:{NFSU2_TR(0x5d6a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6a4a:{NFSU2_TR(0x5d6a4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d6ab4;}}
}
B5d6a4c:L5d6a4c:{c.instructions+=2;NFSU2_TR(0x5d6a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d6a4f:{NFSU2_TR(0x5d6a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6a53:L5d6a53:{c.instructions+=4;NFSU2_TR(0x5d6a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a57:{NFSU2_TR(0x5d6a57);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B5d6a5a:{NFSU2_TR(0x5d6a5a);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B5d6a5d:{NFSU2_TR(0x5d6a5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d6a7a;}}
}
B5d6a5f:L5d6a5f:{c.instructions+=8;NFSU2_TR(0x5d6a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a62:{NFSU2_TR(0x5d6a62);
w4(R+8,u32(r1(R+12)));
}
B5d6a65:{NFSU2_TR(0x5d6a65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a66:{NFSU2_TR(0x5d6a66);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B5d6a69:{NFSU2_TR(0x5d6a69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a6a:{NFSU2_TR(0x5d6a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a6e:{NFSU2_TR(0x5d6a6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6a6f:{NFSU2_TR(0x5d6a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6a74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6570u);}goto L5d6570;}
}
B5d6a74:L5d6a74:{c.instructions+=2;NFSU2_TR(0x5d6a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6a78:{NFSU2_TR(0x5d6a78);
{goto L5d6a98;}
}
B5d6a7a:L5d6a7a:{c.instructions+=11;NFSU2_TR(0x5d6a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a7e:{NFSU2_TR(0x5d6a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6a81:{NFSU2_TR(0x5d6a81);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d6a84:{NFSU2_TR(0x5d6a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d6a87:{NFSU2_TR(0x5d6a87);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d6a8a:{NFSU2_TR(0x5d6a8a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d6a8c:{NFSU2_TR(0x5d6a8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5d6a8e:{NFSU2_TR(0x5d6a8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d6a91:{NFSU2_TR(0x5d6a91);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5d6a93:{NFSU2_TR(0x5d6a93);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d6a94:{NFSU2_TR(0x5d6a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6a98:L5d6a98:{c.instructions+=9;NFSU2_TR(0x5d6a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6a9c:{NFSU2_TR(0x5d6a9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6aa0:{NFSU2_TR(0x5d6aa0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5d6aa3:{NFSU2_TR(0x5d6aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6aa7:{NFSU2_TR(0x5d6aa7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d6aab:{NFSU2_TR(0x5d6aab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d6aac:{NFSU2_TR(0x5d6aac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6aae:{NFSU2_TR(0x5d6aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6ab2:{NFSU2_TR(0x5d6ab2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6a53u);}goto L5d6a53;}}
}
B5d6ab4:L5d6ab4:{c.instructions+=3;NFSU2_TR(0x5d6ab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d6abb:{NFSU2_TR(0x5d6abb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d6abd:{NFSU2_TR(0x5d6abd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d69e0u);}goto L5d69e0;}}
}
B5d6ac3:L5d6ac3:{c.instructions+=6;NFSU2_TR(0x5d6ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6ac4:{NFSU2_TR(0x5d6ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6ac5:{NFSU2_TR(0x5d6ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6ac6:{NFSU2_TR(0x5d6ac6);
__builtin_memmove((R+16),(R+20),4);
}
B5d6ac8:{NFSU2_TR(0x5d6ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6ac9:{NFSU2_TR(0x5d6ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6ad0:L5d6ad0:{c.instructions+=16;NFSU2_TR(0x5d6ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6ad1:{NFSU2_TR(0x5d6ad1);
__builtin_memmove((R+20),(R+16),4);
}
B5d6ad3:{NFSU2_TR(0x5d6ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d6ad6:{NFSU2_TR(0x5d6ad6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6ad7:{NFSU2_TR(0x5d6ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6ada:{NFSU2_TR(0x5d6ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6add:{NFSU2_TR(0x5d6add);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5d6ae0:{NFSU2_TR(0x5d6ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6ae3:{NFSU2_TR(0x5d6ae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d6ae6:{NFSU2_TR(0x5d6ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6ae7:{NFSU2_TR(0x5d6ae7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d6ae9:{NFSU2_TR(0x5d6ae9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6aeb:{NFSU2_TR(0x5d6aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6aee:{NFSU2_TR(0x5d6aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6af1:{NFSU2_TR(0x5d6af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6af4:{NFSU2_TR(0x5d6af4);
if(r1(R+518)){{goto L5d6afd;}}
}
B5d6af6:L5d6af6:{c.instructions+=1;NFSU2_TR(0x5d6af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6afd:L5d6afd:{c.instructions+=2;NFSU2_TR(0x5d6afd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d6aff:{NFSU2_TR(0x5d6aff);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5d6b08;}}
}
B5d6b01:L5d6b01:{c.instructions+=1;NFSU2_TR(0x5d6b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x100ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b08:L5d6b08:{c.instructions+=2;NFSU2_TR(0x5d6b08);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6b0a:{NFSU2_TR(0x5d6b0a);
if(r1(R+518)){{goto L5d6b15;}}
}
B5d6b0c:L5d6b0c:{c.instructions+=2;NFSU2_TR(0x5d6b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b13:{NFSU2_TR(0x5d6b13);
{goto L5d6b20;}
}
B5d6b15:L5d6b15:{c.instructions+=2;NFSU2_TR(0x5d6b15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6b17:{NFSU2_TR(0x5d6b17);
if(r1(R+518)){{goto L5d6b20;}}
}
B5d6b19:L5d6b19:{c.instructions+=1;NFSU2_TR(0x5d6b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b20:L5d6b20:{c.instructions+=2;NFSU2_TR(0x5d6b20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6b22:{NFSU2_TR(0x5d6b22);
if(r1(R+518)){{goto L5d6b2b;}}
}
B5d6b24:L5d6b24:{c.instructions+=1;NFSU2_TR(0x5d6b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b2b:L5d6b2b:{c.instructions+=4;NFSU2_TR(0x5d6b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6b31:{NFSU2_TR(0x5d6b31);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d6b33:{NFSU2_TR(0x5d6b33);
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
B5d6b35:{NFSU2_TR(0x5d6b35);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d6ce8;}}
}
B5d6b3b:L5d6b3b:{c.instructions+=2;NFSU2_TR(0x5d6b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b3e:{NFSU2_TR(0x5d6b3e);
__builtin_memmove((R+28),(R+28),4);
}
B5d6b40:L5d6b40:{c.instructions+=2;NFSU2_TR(0x5d6b40);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d6b43:{NFSU2_TR(0x5d6b43);
if(r1(R+518)){{goto L5d6b5b;}}
}
B5d6b45:L5d6b45:{c.instructions+=4;NFSU2_TR(0x5d6b45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d6b46:{NFSU2_TR(0x5d6b46);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B5d6b4c:{NFSU2_TR(0x5d6b4c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d6b4e:{NFSU2_TR(0x5d6b4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6b40u);}goto L5d6b40;}}
}
B5d6b50:L5d6b50:{c.instructions+=6;NFSU2_TR(0x5d6b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6b51:{NFSU2_TR(0x5d6b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b54:{NFSU2_TR(0x5d6b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6b55:{NFSU2_TR(0x5d6b55);
__builtin_memmove((R+16),(R+20),4);
}
B5d6b57:{NFSU2_TR(0x5d6b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6b58:{NFSU2_TR(0x5d6b58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6b5b:L5d6b5b:{c.instructions+=6;NFSU2_TR(0x5d6b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6b5e:{NFSU2_TR(0x5d6b5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6b5f:{NFSU2_TR(0x5d6b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d6b62:{NFSU2_TR(0x5d6b62);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d6b64:{NFSU2_TR(0x5d6b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6b67:{NFSU2_TR(0x5d6b67);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d6ce7;}}
}
B5d6b6d:L5d6b6d:{c.instructions+=1;NFSU2_TR(0x5d6b6d);
__builtin_memmove((R+4),(R+4),4);
}
B5d6b70:L5d6b70:{c.instructions+=8;NFSU2_TR(0x5d6b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d6b72:{NFSU2_TR(0x5d6b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6b75:{NFSU2_TR(0x5d6b75);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5d6b79:{NFSU2_TR(0x5d6b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6b7c:{NFSU2_TR(0x5d6b7c);
__builtin_memmove((R+0),(R+4),4);
}
B5d6b7e:{NFSU2_TR(0x5d6b7e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B5d6b81:{NFSU2_TR(0x5d6b81);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(r1(R+9))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d6b83:{NFSU2_TR(0x5d6b83);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5d6b8b;}}
}
B5d6b85:L5d6b85:{c.instructions+=1;NFSU2_TR(0x5d6b85);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x200ull))));
}
B5d6b8b:L5d6b8b:{c.instructions+=2;NFSU2_TR(0x5d6b8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6b8e:{NFSU2_TR(0x5d6b8e);
if(r1(R+518)){{goto L5d6b96;}}
}
B5d6b90:L5d6b90:{c.instructions+=1;NFSU2_TR(0x5d6b90);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x2000ull))));
}
B5d6b96:L5d6b96:{c.instructions+=2;NFSU2_TR(0x5d6b96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d6b99:{NFSU2_TR(0x5d6b99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6b9e;}}
}
B5d6b9b:L5d6b9b:{c.instructions+=1;NFSU2_TR(0x5d6b9b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x4ull))));
}
B5d6b9e:L5d6b9e:{c.instructions+=3;NFSU2_TR(0x5d6b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6ba1:{NFSU2_TR(0x5d6ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6ba3:{NFSU2_TR(0x5d6ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6bae;}}
}
B5d6ba5:L5d6ba5:{c.instructions+=3;NFSU2_TR(0x5d6ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6ba8:{NFSU2_TR(0x5d6ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6baa:{NFSU2_TR(0x5d6baa);
if(r1(R+518)){{goto L5d6bc8;}}
}
B5d6bac:L5d6bac:{c.instructions+=1;NFSU2_TR(0x5d6bac);
{goto L5d6bbd;}
}
B5d6bae:L5d6bae:{c.instructions+=2;NFSU2_TR(0x5d6bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6bb0:{NFSU2_TR(0x5d6bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6bc8;}}
}
B5d6bb2:L5d6bb2:{c.instructions+=3;NFSU2_TR(0x5d6bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6bb5:{NFSU2_TR(0x5d6bb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6bb7:{NFSU2_TR(0x5d6bb7);
if(r1(R+518)){{goto L5d6cd6;}}
}
B5d6bbd:L5d6bbd:{c.instructions+=3;NFSU2_TR(0x5d6bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6bc0:{NFSU2_TR(0x5d6bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6bc2:{NFSU2_TR(0x5d6bc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6cd6;}}
}
B5d6bc8:L5d6bc8:{c.instructions+=5;NFSU2_TR(0x5d6bc8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B5d6bcb:{NFSU2_TR(0x5d6bcb);
__builtin_memmove(gp(0x883e00),(R+4),4);
}
B5d6bd1:{NFSU2_TR(0x5d6bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6bd4:{NFSU2_TR(0x5d6bd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6bd6:{NFSU2_TR(0x5d6bd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6bef;}}
}
B5d6bd8:L5d6bd8:{c.instructions+=7;NFSU2_TR(0x5d6bd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6bda:{NFSU2_TR(0x5d6bda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6bdb:{NFSU2_TR(0x5d6bdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6bdd:{NFSU2_TR(0x5d6bdd);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6be2:{NFSU2_TR(0x5d6be2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6be3:{NFSU2_TR(0x5d6be3);
__builtin_memmove((R+4),(R+12),4);
}
B5d6be5:{NFSU2_TR(0x5d6be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6beaull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5d6bea:L5d6bea:{c.instructions+=1;NFSU2_TR(0x5d6bea);
{goto L5d6cc5;}
}
B5d6bef:L5d6bef:{c.instructions+=1;NFSU2_TR(0x5d6bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6bf4ull));
TAIL_STATIC(0x488ec0u,488);
}
B5d6bf4:L5d6bf4:{c.instructions+=2;NFSU2_TR(0x5d6bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6bf6:{NFSU2_TR(0x5d6bf6);
if(r1(R+518)){{goto L5d6d08;}}
}
B5d6bfc:L5d6bfc:{c.instructions+=3;NFSU2_TR(0x5d6bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6bff:{NFSU2_TR(0x5d6bff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6c02:{NFSU2_TR(0x5d6c02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d6c0d;}}
}
B5d6c04:L5d6c04:{c.instructions+=2;NFSU2_TR(0x5d6c04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d6c07:{NFSU2_TR(0x5d6c07);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d6cc5;}}
}
B5d6c0d:L5d6c0d:{c.instructions+=23;NFSU2_TR(0x5d6c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6c10:{NFSU2_TR(0x5d6c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6c13:{NFSU2_TR(0x5d6c13);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6c16:{NFSU2_TR(0x5d6c16);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6c18:{NFSU2_TR(0x5d6c18);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6c1b:{NFSU2_TR(0x5d6c1b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6c1e:{NFSU2_TR(0x5d6c1e);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6c21:{NFSU2_TR(0x5d6c21);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6c24:{NFSU2_TR(0x5d6c24);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d6c26:{NFSU2_TR(0x5d6c26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d6c28:{NFSU2_TR(0x5d6c28);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d6c2a:{NFSU2_TR(0x5d6c2a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d6c2c:{NFSU2_TR(0x5d6c2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d6c2e:{NFSU2_TR(0x5d6c2e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5d6c30:{NFSU2_TR(0x5d6c30);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5d6c32:{NFSU2_TR(0x5d6c32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d6c34:{NFSU2_TR(0x5d6c34);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6c3a:{NFSU2_TR(0x5d6c3a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6c3c:{NFSU2_TR(0x5d6c3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6c3e:{NFSU2_TR(0x5d6c3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6c40:{NFSU2_TR(0x5d6c40);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6c43:{NFSU2_TR(0x5d6c43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d6c45:{NFSU2_TR(0x5d6c45);
if(r1(R+514)){{goto L5d6cf0;}}
}
B5d6c4b:L5d6c4b:{c.instructions+=5;NFSU2_TR(0x5d6c4b);
__builtin_memmove((R+4),gp(0x82da5c),4);
}
B5d6c51:{NFSU2_TR(0x5d6c51);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B5d6c57:{NFSU2_TR(0x5d6c57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d6c5d:{NFSU2_TR(0x5d6c5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d6c5f:{NFSU2_TR(0x5d6c5f);
if(r1(R+512)){{goto L5d6c7c;}}
}
B5d6c61:L5d6c61:{c.instructions+=5;NFSU2_TR(0x5d6c61);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B5d6c66:{NFSU2_TR(0x5d6c66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
}
B5d6c6b:{NFSU2_TR(0x5d6c6b);
s4(0x82da6c,u32(0x1ull));
}
B5d6c75:{NFSU2_TR(0x5d6c75);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B5d6c7a:{NFSU2_TR(0x5d6c7a);
{goto L5d6cc5;}
}
B5d6c7c:L5d6c7c:{c.instructions+=4;NFSU2_TR(0x5d6c7c);
__builtin_memmove((R+12),(R+4),4);
}
B5d6c7e:{NFSU2_TR(0x5d6c7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d6c80:{NFSU2_TR(0x5d6c80);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B5d6c85:{NFSU2_TR(0x5d6c85);
if(r1(R+518)){{goto L5d6cc2;}}
}
B5d6c87:L5d6c87:{c.instructions+=11;NFSU2_TR(0x5d6c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6c8a:{NFSU2_TR(0x5d6c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6c8d:{NFSU2_TR(0x5d6c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6c90:{NFSU2_TR(0x5d6c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c91:{NFSU2_TR(0x5d6c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6c94:{NFSU2_TR(0x5d6c94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c95:{NFSU2_TR(0x5d6c95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c96:{NFSU2_TR(0x5d6c96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c97:{NFSU2_TR(0x5d6c97);
u8 U[4];
w4(U+0,u32(0x7f3ff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c9c:{NFSU2_TR(0x5d6c9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6c9d:{NFSU2_TR(0x5d6c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6ca2ull));
TAIL_STATIC(0x48f600u,48f);
}
B5d6ca2:L5d6ca2:{c.instructions+=11;NFSU2_TR(0x5d6ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6ca5:{NFSU2_TR(0x5d6ca5);
__builtin_memmove((R+8),gp(0x883e00),4);
}
B5d6cab:{NFSU2_TR(0x5d6cab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5d6cae:{NFSU2_TR(0x5d6cae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cb0:{NFSU2_TR(0x5d6cb0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffdffull))));
}
B5d6cb6:{NFSU2_TR(0x5d6cb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cb7:{NFSU2_TR(0x5d6cb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cb8:{NFSU2_TR(0x5d6cb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cb9:{NFSU2_TR(0x5d6cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6cbc:{NFSU2_TR(0x5d6cbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cbd:{NFSU2_TR(0x5d6cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6cc2ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5d6cc2:L5d6cc2:{c.instructions+=1;NFSU2_TR(0x5d6cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6cc5:L5d6cc5:{c.instructions+=3;NFSU2_TR(0x5d6cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6cc8:{NFSU2_TR(0x5d6cc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6ccc:{NFSU2_TR(0x5d6ccc);
s4(0x883e00,u32(0x0ull));
}
B5d6cd6:L5d6cd6:{c.instructions+=5;NFSU2_TR(0x5d6cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6cd9:{NFSU2_TR(0x5d6cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6cdc:{NFSU2_TR(0x5d6cdc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B5d6cdf:{NFSU2_TR(0x5d6cdf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d6ce1:{NFSU2_TR(0x5d6ce1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6b70u);}goto L5d6b70;}}
}
B5d6ce7:L5d6ce7:{c.instructions+=1;NFSU2_TR(0x5d6ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6ce8:L5d6ce8:{c.instructions+=5;NFSU2_TR(0x5d6ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6ce9:{NFSU2_TR(0x5d6ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6cea:{NFSU2_TR(0x5d6cea);
__builtin_memmove((R+16),(R+20),4);
}
B5d6cec:{NFSU2_TR(0x5d6cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d6ced:{NFSU2_TR(0x5d6ced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6cf0:L5d6cf0:{c.instructions+=9;NFSU2_TR(0x5d6cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6cf3:{NFSU2_TR(0x5d6cf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cf5:{NFSU2_TR(0x5d6cf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cf6:{NFSU2_TR(0x5d6cf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cf7:{NFSU2_TR(0x5d6cf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cf8:{NFSU2_TR(0x5d6cf8);
__builtin_memmove((R+4),gp(0x883e00),4);
}
B5d6cfe:{NFSU2_TR(0x5d6cfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6cff:{NFSU2_TR(0x5d6cff);
__builtin_memmove((R+4),(R+12),4);
}
B5d6d01:{NFSU2_TR(0x5d6d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6d06ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5d6d06:L5d6d06:{c.instructions+=1;NFSU2_TR(0x5d6d06);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6cc5u);}goto L5d6cc5;}
}
B5d6d08:L5d6d08:{c.instructions+=9;NFSU2_TR(0x5d6d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6d0b:{NFSU2_TR(0x5d6d0b);
__builtin_memmove((R+0),gp(0x883e00),4);
}
B5d6d10:{NFSU2_TR(0x5d6d10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d12:{NFSU2_TR(0x5d6d12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d13:{NFSU2_TR(0x5d6d13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d15:{NFSU2_TR(0x5d6d15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d16:{NFSU2_TR(0x5d6d16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d17:{NFSU2_TR(0x5d6d17);
__builtin_memmove((R+4),(R+12),4);
}
B5d6d19:{NFSU2_TR(0x5d6d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6d1eull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5d6d1e:L5d6d1e:{c.instructions+=1;NFSU2_TR(0x5d6d1e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6cc5u);}goto L5d6cc5;}
}
B5d6d20:L5d6d20:{c.instructions+=4;NFSU2_TR(0x5d6d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6d26:{NFSU2_TR(0x5d6d26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d6d28:{NFSU2_TR(0x5d6d28);
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
B5d6d2a:{NFSU2_TR(0x5d6d2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d6d69;}}
}
B5d6d2c:L5d6d2c:{c.instructions+=4;NFSU2_TR(0x5d6d2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d2d:{NFSU2_TR(0x5d6d2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d2e:{NFSU2_TR(0x5d6d2e);
__builtin_memmove((R+28),(R+4),4);
}
B5d6d30:{NFSU2_TR(0x5d6d30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d6d34:L5d6d34:{c.instructions+=2;NFSU2_TR(0x5d6d34);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d6d37:{NFSU2_TR(0x5d6d37);
if(r1(R+518)){{goto L5d6d49;}}
}
B5d6d39:L5d6d39:{c.instructions+=4;NFSU2_TR(0x5d6d39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d6d3a:{NFSU2_TR(0x5d6d3a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
}
B5d6d40:{NFSU2_TR(0x5d6d40);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d6d42:{NFSU2_TR(0x5d6d42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6d34u);}goto L5d6d34;}}
}
B5d6d44:L5d6d44:{c.instructions+=3;NFSU2_TR(0x5d6d44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6d45:{NFSU2_TR(0x5d6d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6d46:{NFSU2_TR(0x5d6d46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6d49:L5d6d49:{c.instructions+=3;NFSU2_TR(0x5d6d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6d4c:{NFSU2_TR(0x5d6d4c);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d6d4f:{NFSU2_TR(0x5d6d4f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d6d67;}}
}
B5d6d51:L5d6d51:{c.instructions+=2;NFSU2_TR(0x5d6d51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d52:{NFSU2_TR(0x5d6d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6d56:L5d6d56:{c.instructions+=2;NFSU2_TR(0x5d6d56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d57:{NFSU2_TR(0x5d6d57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6d59ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5d6d59:L5d6d59:{c.instructions+=5;NFSU2_TR(0x5d6d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6d5c:{NFSU2_TR(0x5d6d5c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5d6d5f:{NFSU2_TR(0x5d6d5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d6d62:{NFSU2_TR(0x5d6d62);
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
B5d6d64:{NFSU2_TR(0x5d6d64);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6d56u);}goto L5d6d56;}}
}
B5d6d66:L5d6d66:{c.instructions+=1;NFSU2_TR(0x5d6d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d6d67:L5d6d67:{c.instructions+=2;NFSU2_TR(0x5d6d67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d6d68:{NFSU2_TR(0x5d6d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6d69:L5d6d69:{c.instructions+=1;NFSU2_TR(0x5d6d69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6d70:L5d6d70:{c.instructions+=11;NFSU2_TR(0x5d6d70);
__builtin_memmove((R+0),gp(0x890010),4);
}
B5d6d75:{NFSU2_TR(0x5d6d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6d76:{NFSU2_TR(0x5d6d76);
__builtin_memmove((R+24),(R+0),4);
}
B5d6d78:{NFSU2_TR(0x5d6d78);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x3ull))));
}
B5d6d7b:{NFSU2_TR(0x5d6d7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5d6d7e:{NFSU2_TR(0x5d6d7e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x88ffd0ull))));
}
B5d6d84:{NFSU2_TR(0x5d6d84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d6d85:{NFSU2_TR(0x5d6d85);
__builtin_memmove(gp(0x890010),(R+0),4);
}
B5d6d8a:{NFSU2_TR(0x5d6d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d6d8e:{NFSU2_TR(0x5d6d8e);
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
B5d6d90:{NFSU2_TR(0x5d6d90);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d6da1;}}
}
B5d6d92:L5d6d92:{c.instructions+=6;NFSU2_TR(0x5d6d92);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+24)),r1(U+0));
}
B5d6d95:{NFSU2_TR(0x5d6d95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6d99:{NFSU2_TR(0x5d6d99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6d9d:{NFSU2_TR(0x5d6d9d);
__builtin_memmove((R+0),(R+24),4);
}
B5d6d9f:{NFSU2_TR(0x5d6d9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6da0:{NFSU2_TR(0x5d6da0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6da1:L5d6da1:{c.instructions+=10;NFSU2_TR(0x5d6da1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d6da2:{NFSU2_TR(0x5d6da2);
w4(R+4,u32(0x64ull));
}
B5d6da7:{NFSU2_TR(0x5d6da7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d6da7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d6da7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d6da9:{NFSU2_TR(0x5d6da9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6daa:{NFSU2_TR(0x5d6daa);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d6dac:{NFSU2_TR(0x5d6dac);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B5d6daf:{NFSU2_TR(0x5d6daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6db0:{NFSU2_TR(0x5d6db0);
u8 U[4];
w4(U+0,u32(0x7a51e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6db5:{NFSU2_TR(0x5d6db5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6db6:{NFSU2_TR(0x5d6db6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d6dbbull));
TAIL_STATIC(0x4400d0u,440);
}
B5d6dbb:L5d6dbb:{c.instructions+=4;NFSU2_TR(0x5d6dbb);
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
B5d6dbe:{NFSU2_TR(0x5d6dbe);
__builtin_memmove((R+0),(R+24),4);
}
B5d6dc0:{NFSU2_TR(0x5d6dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d6dc1:{NFSU2_TR(0x5d6dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d6dd0:L5d6dd0:{c.instructions+=17;NFSU2_TR(0x5d6dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d6dd3:{NFSU2_TR(0x5d6dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d6dd5:{NFSU2_TR(0x5d6dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6dd8:{NFSU2_TR(0x5d6dd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6dd9:{NFSU2_TR(0x5d6dd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d6ddd:{NFSU2_TR(0x5d6ddd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6dde:{NFSU2_TR(0x5d6dde);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d6de2:{NFSU2_TR(0x5d6de2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6de3:{NFSU2_TR(0x5d6de3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d6de5:{NFSU2_TR(0x5d6de5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6de8:{NFSU2_TR(0x5d6de8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d6de9:{NFSU2_TR(0x5d6de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6ded:{NFSU2_TR(0x5d6ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6df1:{NFSU2_TR(0x5d6df1);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d6df6:{NFSU2_TR(0x5d6df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d6df9:{NFSU2_TR(0x5d6df9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6dfd:{NFSU2_TR(0x5d6dfd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d6fe8;}}
}
B5d6e03:L5d6e03:{c.instructions+=6;NFSU2_TR(0x5d6e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d6e0a:{NFSU2_TR(0x5d6e0a);
w4(R+0,u32(0x14ull));
}
B5d6e0f:{NFSU2_TR(0x5d6e0f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B5d6e11:{NFSU2_TR(0x5d6e11);
w4(R+28,u32(0x3ull));
}
B5d6e16:{NFSU2_TR(0x5d6e16);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d6e19:{NFSU2_TR(0x5d6e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6e1d:L5d6e1d:{c.instructions+=5;NFSU2_TR(0x5d6e1d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e1f:{NFSU2_TR(0x5d6e1f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e23:{NFSU2_TR(0x5d6e23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e25:{NFSU2_TR(0x5d6e25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6e28:{NFSU2_TR(0x5d6e28);
if(r1(R+514)){{goto L5d6e3b;}}
}
B5d6e2a:L5d6e2a:{c.instructions+=6;NFSU2_TR(0x5d6e2a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e2e:{NFSU2_TR(0x5d6e2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d6e32:{NFSU2_TR(0x5d6e32);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e34:{NFSU2_TR(0x5d6e34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e36:{NFSU2_TR(0x5d6e36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6e39:{NFSU2_TR(0x5d6e39);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d6e5b;}}
}
B5d6e3b:L5d6e3b:{c.instructions+=6;NFSU2_TR(0x5d6e3b);
{u32 ea_=u32(r4(R+20)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e3f:{NFSU2_TR(0x5d6e3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d6e43:{NFSU2_TR(0x5d6e43);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e47:{NFSU2_TR(0x5d6e47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e49:{NFSU2_TR(0x5d6e49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6e4c:{NFSU2_TR(0x5d6e4c);
if(r1(R+514)){{goto L5d6e8a;}}
}
B5d6e4e:L5d6e4e:{c.instructions+=5;NFSU2_TR(0x5d6e4e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e52:{NFSU2_TR(0x5d6e52);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e54:{NFSU2_TR(0x5d6e54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e56:{NFSU2_TR(0x5d6e56);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6e59:{NFSU2_TR(0x5d6e59);
if(r1(R+514)){{goto L5d6e8a;}}
}
B5d6e5b:L5d6e5b:{c.instructions+=13;NFSU2_TR(0x5d6e5b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e5f:{NFSU2_TR(0x5d6e5f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6e61:{NFSU2_TR(0x5d6e61);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e64:{NFSU2_TR(0x5d6e64);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6e67:{NFSU2_TR(0x5d6e67);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d6e69:{NFSU2_TR(0x5d6e69);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e6b:{NFSU2_TR(0x5d6e6b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6e6d:{NFSU2_TR(0x5d6e6d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d6e6f:{NFSU2_TR(0x5d6e6f);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6e72:{NFSU2_TR(0x5d6e72);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e76:{NFSU2_TR(0x5d6e76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e78:{NFSU2_TR(0x5d6e78);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6e7b:{NFSU2_TR(0x5d6e7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6e8a;}}
}
B5d6e7d:L5d6e7d:{c.instructions+=4;NFSU2_TR(0x5d6e7d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d6e81:{NFSU2_TR(0x5d6e81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6e83:{NFSU2_TR(0x5d6e83);
__builtin_memmove((R+0),(R+518),1);
}
B5d6e86:{NFSU2_TR(0x5d6e86);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6e8a:L5d6e8a:{c.instructions+=5;NFSU2_TR(0x5d6e8a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e8d:{NFSU2_TR(0x5d6e8d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e91:{NFSU2_TR(0x5d6e91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6e93:{NFSU2_TR(0x5d6e93);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6e96:{NFSU2_TR(0x5d6e96);
if(r1(R+514)){{goto L5d6ea7;}}
}
B5d6e98:L5d6e98:{c.instructions+=5;NFSU2_TR(0x5d6e98);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6e9c:{NFSU2_TR(0x5d6e9c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6e9e:{NFSU2_TR(0x5d6e9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6ea0:{NFSU2_TR(0x5d6ea0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6ea3:{NFSU2_TR(0x5d6ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d6ec2;}}
}
B5d6ea5:L5d6ea5:{c.instructions+=1;NFSU2_TR(0x5d6ea5);
{goto L5d6eb4;}
}
B5d6ea7:L5d6ea7:{c.instructions+=5;NFSU2_TR(0x5d6ea7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6ea9:{NFSU2_TR(0x5d6ea9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6ead:{NFSU2_TR(0x5d6ead);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6eaf:{NFSU2_TR(0x5d6eaf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6eb2:{NFSU2_TR(0x5d6eb2);
if(r1(R+514)){{goto L5d6ef3;}}
}
B5d6eb4:L5d6eb4:{c.instructions+=5;NFSU2_TR(0x5d6eb4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6eb8:{NFSU2_TR(0x5d6eb8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6ebb:{NFSU2_TR(0x5d6ebb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6ebd:{NFSU2_TR(0x5d6ebd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6ec0:{NFSU2_TR(0x5d6ec0);
if(r1(R+514)){{goto L5d6ef3;}}
}
B5d6ec2:L5d6ec2:{c.instructions+=13;NFSU2_TR(0x5d6ec2);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6ec5:{NFSU2_TR(0x5d6ec5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6ec8:{NFSU2_TR(0x5d6ec8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6ecc:{NFSU2_TR(0x5d6ecc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6ecf:{NFSU2_TR(0x5d6ecf);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d6ed1:{NFSU2_TR(0x5d6ed1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6ed3:{NFSU2_TR(0x5d6ed3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6ed6:{NFSU2_TR(0x5d6ed6);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d6ed8:{NFSU2_TR(0x5d6ed8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6edb:{NFSU2_TR(0x5d6edb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6edf:{NFSU2_TR(0x5d6edf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6ee1:{NFSU2_TR(0x5d6ee1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6ee4:{NFSU2_TR(0x5d6ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6ef3;}}
}
B5d6ee6:L5d6ee6:{c.instructions+=4;NFSU2_TR(0x5d6ee6);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d6eea:{NFSU2_TR(0x5d6eea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6eec:{NFSU2_TR(0x5d6eec);
__builtin_memmove((R+8),(R+518),1);
}
B5d6eef:{NFSU2_TR(0x5d6eef);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6ef3:L5d6ef3:{c.instructions+=5;NFSU2_TR(0x5d6ef3);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6ef6:{NFSU2_TR(0x5d6ef6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6efa:{NFSU2_TR(0x5d6efa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6efc:{NFSU2_TR(0x5d6efc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6eff:{NFSU2_TR(0x5d6eff);
if(r1(R+514)){{goto L5d6f0f;}}
}
B5d6f01:L5d6f01:{c.instructions+=5;NFSU2_TR(0x5d6f01);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f05:{NFSU2_TR(0x5d6f05);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f08:{NFSU2_TR(0x5d6f08);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f0a:{NFSU2_TR(0x5d6f0a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f0d:{NFSU2_TR(0x5d6f0d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d6f2b;}}
}
B5d6f0f:L5d6f0f:{c.instructions+=5;NFSU2_TR(0x5d6f0f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f12:{NFSU2_TR(0x5d6f12);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f16:{NFSU2_TR(0x5d6f16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f18:{NFSU2_TR(0x5d6f18);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f1b:{NFSU2_TR(0x5d6f1b);
if(r1(R+514)){{goto L5d6f5d;}}
}
B5d6f1d:L5d6f1d:{c.instructions+=5;NFSU2_TR(0x5d6f1d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f21:{NFSU2_TR(0x5d6f21);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f24:{NFSU2_TR(0x5d6f24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f26:{NFSU2_TR(0x5d6f26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f29:{NFSU2_TR(0x5d6f29);
if(r1(R+514)){{goto L5d6f5d;}}
}
B5d6f2b:L5d6f2b:{c.instructions+=13;NFSU2_TR(0x5d6f2b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f2e:{NFSU2_TR(0x5d6f2e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6f31:{NFSU2_TR(0x5d6f31);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f35:{NFSU2_TR(0x5d6f35);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6f38:{NFSU2_TR(0x5d6f38);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d6f3a:{NFSU2_TR(0x5d6f3a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f3d:{NFSU2_TR(0x5d6f3d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6f40:{NFSU2_TR(0x5d6f40);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d6f42:{NFSU2_TR(0x5d6f42);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6f45:{NFSU2_TR(0x5d6f45);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f49:{NFSU2_TR(0x5d6f49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f4b:{NFSU2_TR(0x5d6f4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6f4e:{NFSU2_TR(0x5d6f4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6f5d;}}
}
B5d6f50:L5d6f50:{c.instructions+=4;NFSU2_TR(0x5d6f50);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d6f54:{NFSU2_TR(0x5d6f54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6f56:{NFSU2_TR(0x5d6f56);
__builtin_memmove((R+0),(R+518),1);
}
B5d6f59:{NFSU2_TR(0x5d6f59);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6f5d:L5d6f5d:{c.instructions+=5;NFSU2_TR(0x5d6f5d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f60:{NFSU2_TR(0x5d6f60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f64:{NFSU2_TR(0x5d6f64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f66:{NFSU2_TR(0x5d6f66);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f69:{NFSU2_TR(0x5d6f69);
if(r1(R+514)){{goto L5d6f79;}}
}
B5d6f6b:L5d6f6b:{c.instructions+=5;NFSU2_TR(0x5d6f6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f6f:{NFSU2_TR(0x5d6f6f);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f72:{NFSU2_TR(0x5d6f72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f74:{NFSU2_TR(0x5d6f74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f77:{NFSU2_TR(0x5d6f77);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d6f95;}}
}
B5d6f79:L5d6f79:{c.instructions+=5;NFSU2_TR(0x5d6f79);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f7c:{NFSU2_TR(0x5d6f7c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f80:{NFSU2_TR(0x5d6f80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f82:{NFSU2_TR(0x5d6f82);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f85:{NFSU2_TR(0x5d6f85);
if(r1(R+514)){{goto L5d6fc7;}}
}
B5d6f87:L5d6f87:{c.instructions+=5;NFSU2_TR(0x5d6f87);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f8b:{NFSU2_TR(0x5d6f8b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6f8e:{NFSU2_TR(0x5d6f8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6f90:{NFSU2_TR(0x5d6f90);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d6f93:{NFSU2_TR(0x5d6f93);
if(r1(R+514)){{goto L5d6fc7;}}
}
B5d6f95:L5d6f95:{c.instructions+=13;NFSU2_TR(0x5d6f95);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f98:{NFSU2_TR(0x5d6f98);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6f9b:{NFSU2_TR(0x5d6f9b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6f9f:{NFSU2_TR(0x5d6f9f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6fa2:{NFSU2_TR(0x5d6fa2);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d6fa4:{NFSU2_TR(0x5d6fa4);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d6fa7:{NFSU2_TR(0x5d6fa7);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d6faa:{NFSU2_TR(0x5d6faa);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d6fac:{NFSU2_TR(0x5d6fac);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d6faf:{NFSU2_TR(0x5d6faf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d6fb3:{NFSU2_TR(0x5d6fb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d6fb5:{NFSU2_TR(0x5d6fb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6fb8:{NFSU2_TR(0x5d6fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d6fc7;}}
}
B5d6fba:L5d6fba:{c.instructions+=4;NFSU2_TR(0x5d6fba);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d6fbe:{NFSU2_TR(0x5d6fbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d6fc0:{NFSU2_TR(0x5d6fc0);
__builtin_memmove((R+8),(R+518),1);
}
B5d6fc3:{NFSU2_TR(0x5d6fc3);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d6fc7:L5d6fc7:{c.instructions+=10;NFSU2_TR(0x5d6fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d6fcb:{NFSU2_TR(0x5d6fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d6fcf:{NFSU2_TR(0x5d6fcf);
__builtin_memmove((R+0),(R+28),4);
}
B5d6fd1:{NFSU2_TR(0x5d6fd1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5d6fd3:{NFSU2_TR(0x5d6fd3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d6fd6:{NFSU2_TR(0x5d6fd6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d6fd9:{NFSU2_TR(0x5d6fd9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B5d6fdc:{NFSU2_TR(0x5d6fdc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6fde:{NFSU2_TR(0x5d6fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d6fe2:{NFSU2_TR(0x5d6fe2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d6e1du);}goto L5d6e1d;}}
}
B5d6fe8:L5d6fe8:{c.instructions+=2;NFSU2_TR(0x5d6fe8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d6fea:{NFSU2_TR(0x5d6fea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d707au,5d7);}
}
B5d6ff0:L5d6ff0:{c.instructions+=4;NFSU2_TR(0x5d6ff0);
w4(R+28,u32(0xfffffffcull));
}
B5d6ff5:{NFSU2_TR(0x5d6ff5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+20))));
}
B5d6ff7:{NFSU2_TR(0x5d6ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d6ffe:{NFSU2_TR(0x5d6ffe);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
TAIL_STATIC(0x5d7002u,5d7);
}
XIT:NFSU2_TR_EXIT(0x5d6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
