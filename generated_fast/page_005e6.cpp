#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 page_5e6(Cpu& c){return body_5e6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e6004:goto L5e6004;
case 0x5e6009:goto L5e6009;
case 0x5e600d:c.instructions+=10;goto B5e600d;
case 0x5e6014:c.instructions+=9;goto B5e6014;
case 0x5e6017:c.instructions+=8;goto B5e6017;
case 0x5e6019:c.instructions+=7;goto B5e6019;
case 0x5e601a:c.instructions+=6;goto B5e601a;
case 0x5e601e:c.instructions+=5;goto B5e601e;
case 0x5e601f:c.instructions+=4;goto B5e601f;
case 0x5e6023:c.instructions+=3;goto B5e6023;
case 0x5e6024:c.instructions+=2;goto B5e6024;
case 0x5e6026:c.instructions+=1;goto B5e6026;
case 0x5e602b:goto L5e602b;
case 0x5e602d:c.instructions+=1;goto B5e602d;
case 0x5e6033:goto L5e6033;
case 0x5e6036:c.instructions+=8;goto B5e6036;
case 0x5e603c:c.instructions+=7;goto B5e603c;
case 0x5e6040:c.instructions+=6;goto B5e6040;
case 0x5e6043:c.instructions+=5;goto B5e6043;
case 0x5e6046:c.instructions+=4;goto B5e6046;
case 0x5e604a:c.instructions+=3;goto B5e604a;
case 0x5e604c:c.instructions+=2;goto B5e604c;
case 0x5e604e:c.instructions+=1;goto B5e604e;
case 0x5e6050:goto L5e6050;
case 0x5e6053:c.instructions+=2;goto B5e6053;
case 0x5e6057:c.instructions+=1;goto B5e6057;
case 0x5e6059:goto L5e6059;
case 0x5e6063:c.instructions+=1;goto B5e6063;
case 0x5e6065:goto L5e6065;
case 0x5e606b:c.instructions+=9;goto B5e606b;
case 0x5e6072:c.instructions+=8;goto B5e6072;
case 0x5e607a:c.instructions+=7;goto B5e607a;
case 0x5e6080:c.instructions+=6;goto B5e6080;
case 0x5e6087:c.instructions+=5;goto B5e6087;
case 0x5e608d:c.instructions+=4;goto B5e608d;
case 0x5e6091:c.instructions+=3;goto B5e6091;
case 0x5e6092:c.instructions+=2;goto B5e6092;
case 0x5e6094:c.instructions+=1;goto B5e6094;
case 0x5e6096:goto L5e6096;
case 0x5e609a:c.instructions+=12;goto B5e609a;
case 0x5e60a0:c.instructions+=11;goto B5e60a0;
case 0x5e60a2:c.instructions+=10;goto B5e60a2;
case 0x5e60a6:c.instructions+=9;goto B5e60a6;
case 0x5e60ab:c.instructions+=8;goto B5e60ab;
case 0x5e60af:c.instructions+=7;goto B5e60af;
case 0x5e60b1:c.instructions+=6;goto B5e60b1;
case 0x5e60b4:c.instructions+=5;goto B5e60b4;
case 0x5e60b8:c.instructions+=4;goto B5e60b8;
case 0x5e60b9:c.instructions+=3;goto B5e60b9;
case 0x5e60bb:c.instructions+=2;goto B5e60bb;
case 0x5e60be:c.instructions+=1;goto B5e60be;
case 0x5e60c3:goto L5e60c3;
case 0x5e60c7:c.instructions+=16;goto B5e60c7;
case 0x5e60cb:c.instructions+=15;goto B5e60cb;
case 0x5e60cf:c.instructions+=14;goto B5e60cf;
case 0x5e60d2:c.instructions+=13;goto B5e60d2;
case 0x5e60d5:c.instructions+=12;goto B5e60d5;
case 0x5e60d9:c.instructions+=11;goto B5e60d9;
case 0x5e60dc:c.instructions+=10;goto B5e60dc;
case 0x5e60e0:c.instructions+=9;goto B5e60e0;
case 0x5e60e2:c.instructions+=8;goto B5e60e2;
case 0x5e60e6:c.instructions+=7;goto B5e60e6;
case 0x5e60e9:c.instructions+=6;goto B5e60e9;
case 0x5e60ed:c.instructions+=5;goto B5e60ed;
case 0x5e60ee:c.instructions+=4;goto B5e60ee;
case 0x5e60f0:c.instructions+=3;goto B5e60f0;
case 0x5e60f1:c.instructions+=2;goto B5e60f1;
case 0x5e60f3:c.instructions+=1;goto B5e60f3;
case 0x5e60f8:goto L5e60f8;
case 0x5e60fa:goto L5e60fa;
case 0x5e6101:c.instructions+=1;goto B5e6101;
case 0x5e6106:goto L5e6106;
case 0x5e610a:c.instructions+=5;goto B5e610a;
case 0x5e610e:c.instructions+=4;goto B5e610e;
case 0x5e610f:c.instructions+=3;goto B5e610f;
case 0x5e6112:c.instructions+=2;goto B5e6112;
case 0x5e6116:c.instructions+=1;goto B5e6116;
case 0x5e611c:goto L5e611c;
case 0x5e6120:c.instructions+=5;goto B5e6120;
case 0x5e6122:c.instructions+=4;goto B5e6122;
case 0x5e6123:c.instructions+=3;goto B5e6123;
case 0x5e6125:c.instructions+=2;goto B5e6125;
case 0x5e6129:c.instructions+=1;goto B5e6129;
case 0x5e612f:goto L5e612f;
case 0x5e6133:c.instructions+=8;goto B5e6133;
case 0x5e6137:c.instructions+=7;goto B5e6137;
case 0x5e613a:c.instructions+=6;goto B5e613a;
case 0x5e613b:c.instructions+=5;goto B5e613b;
case 0x5e613e:c.instructions+=4;goto B5e613e;
case 0x5e6140:c.instructions+=3;goto B5e6140;
case 0x5e6144:c.instructions+=2;goto B5e6144;
case 0x5e6148:c.instructions+=1;goto B5e6148;
case 0x5e614e:goto L5e614e;
case 0x5e614f:c.instructions+=6;goto B5e614f;
case 0x5e6150:c.instructions+=5;goto B5e6150;
case 0x5e6151:c.instructions+=4;goto B5e6151;
case 0x5e6153:c.instructions+=3;goto B5e6153;
case 0x5e6154:c.instructions+=2;goto B5e6154;
case 0x5e615a:c.instructions+=1;goto B5e615a;
case 0x5e6160:goto L5e6160;
case 0x5e6161:c.instructions+=4;goto B5e6161;
case 0x5e6163:c.instructions+=3;goto B5e6163;
case 0x5e6169:c.instructions+=2;goto B5e6169;
case 0x5e616b:c.instructions+=1;goto B5e616b;
case 0x5e616d:goto L5e616d;
case 0x5e616e:c.instructions+=3;goto B5e616e;
case 0x5e6174:c.instructions+=2;goto B5e6174;
case 0x5e6176:c.instructions+=1;goto B5e6176;
case 0x5e6178:goto L5e6178;
case 0x5e617a:c.instructions+=1;goto B5e617a;
case 0x5e617f:goto L5e617f;
case 0x5e6180:c.instructions+=1;goto B5e6180;
case 0x5e6185:goto L5e6185;
case 0x5e6188:goto L5e6188;
case 0x5e618e:c.instructions+=3;goto B5e618e;
case 0x5e618f:c.instructions+=2;goto B5e618f;
case 0x5e6199:c.instructions+=1;goto B5e6199;
case 0x5e619e:goto L5e619e;
case 0x5e61a1:c.instructions+=3;goto B5e61a1;
case 0x5e61ab:c.instructions+=2;goto B5e61ab;
case 0x5e61b5:c.instructions+=1;goto B5e61b5;
case 0x5e61b6:goto L5e61b6;
case 0x5e61b7:c.instructions+=1;goto B5e61b7;
case 0x5e61c0:goto L5e61c0;
case 0x5e61c4:c.instructions+=7;goto B5e61c4;
case 0x5e61c5:c.instructions+=6;goto B5e61c5;
case 0x5e61c8:c.instructions+=5;goto B5e61c8;
case 0x5e61c9:c.instructions+=4;goto B5e61c9;
case 0x5e61cb:c.instructions+=3;goto B5e61cb;
case 0x5e61cd:c.instructions+=2;goto B5e61cd;
case 0x5e61cf:c.instructions+=1;goto B5e61cf;
case 0x5e61d1:goto L5e61d1;
case 0x5e61d2:goto L5e61d2;
case 0x5e61d4:c.instructions+=2;goto B5e61d4;
case 0x5e61d8:c.instructions+=1;goto B5e61d8;
case 0x5e61da:goto L5e61da;
case 0x5e61dd:goto L5e61dd;
case 0x5e61e4:c.instructions+=4;goto B5e61e4;
case 0x5e61e8:c.instructions+=3;goto B5e61e8;
case 0x5e61e9:c.instructions+=2;goto B5e61e9;
case 0x5e61eb:c.instructions+=1;goto B5e61eb;
case 0x5e61ed:goto L5e61ed;
case 0x5e61ee:goto L5e61ee;
case 0x5e61f1:c.instructions+=12;goto B5e61f1;
case 0x5e61f2:c.instructions+=11;goto B5e61f2;
case 0x5e61f3:c.instructions+=10;goto B5e61f3;
case 0x5e61f6:c.instructions+=9;goto B5e61f6;
case 0x5e61f9:c.instructions+=8;goto B5e61f9;
case 0x5e61fb:c.instructions+=7;goto B5e61fb;
case 0x5e6200:c.instructions+=6;goto B5e6200;
case 0x5e6201:c.instructions+=5;goto B5e6201;
case 0x5e6202:c.instructions+=4;goto B5e6202;
case 0x5e6205:c.instructions+=3;goto B5e6205;
case 0x5e6206:c.instructions+=2;goto B5e6206;
case 0x5e6207:c.instructions+=1;goto B5e6207;
case 0x5e620c:goto L5e620c;
case 0x5e6211:c.instructions+=3;goto B5e6211;
case 0x5e6213:c.instructions+=2;goto B5e6213;
case 0x5e6214:c.instructions+=1;goto B5e6214;
case 0x5e6219:goto L5e6219;
case 0x5e621c:c.instructions+=3;goto B5e621c;
case 0x5e621d:c.instructions+=2;goto B5e621d;
case 0x5e621e:c.instructions+=1;goto B5e621e;
case 0x5e6230:goto L5e6230;
case 0x5e6233:c.instructions+=5;goto B5e6233;
case 0x5e6234:c.instructions+=4;goto B5e6234;
case 0x5e6236:c.instructions+=3;goto B5e6236;
case 0x5e623a:c.instructions+=2;goto B5e623a;
case 0x5e623f:c.instructions+=1;goto B5e623f;
case 0x5e6245:goto L5e6245;
case 0x5e6246:c.instructions+=4;goto B5e6246;
case 0x5e6247:c.instructions+=3;goto B5e6247;
case 0x5e6248:c.instructions+=2;goto B5e6248;
case 0x5e624a:c.instructions+=1;goto B5e624a;
case 0x5e6250:goto L5e6250;
case 0x5e6254:c.instructions+=1;goto B5e6254;
case 0x5e625a:goto L5e625a;
case 0x5e6260:c.instructions+=5;goto B5e6260;
case 0x5e6262:c.instructions+=4;goto B5e6262;
case 0x5e6264:c.instructions+=3;goto B5e6264;
case 0x5e626c:c.instructions+=2;goto B5e626c;
case 0x5e6270:c.instructions+=1;goto B5e6270;
case 0x5e6276:goto L5e6276;
case 0x5e627c:c.instructions+=1;goto B5e627c;
case 0x5e6280:goto L5e6280;
case 0x5e6283:c.instructions+=3;goto B5e6283;
case 0x5e6286:c.instructions+=2;goto B5e6286;
case 0x5e6289:c.instructions+=1;goto B5e6289;
case 0x5e628b:goto L5e628b;
case 0x5e628e:c.instructions+=3;goto B5e628e;
case 0x5e6290:c.instructions+=2;goto B5e6290;
case 0x5e6293:c.instructions+=1;goto B5e6293;
case 0x5e6295:goto L5e6295;
case 0x5e6298:goto L5e6298;
case 0x5e629c:c.instructions+=1;goto B5e629c;
case 0x5e629e:goto L5e629e;
case 0x5e62a2:c.instructions+=2;goto B5e62a2;
case 0x5e62a4:c.instructions+=1;goto B5e62a4;
case 0x5e62a6:goto L5e62a6;
case 0x5e62a9:c.instructions+=1;goto B5e62a9;
case 0x5e62ab:goto L5e62ab;
case 0x5e62af:c.instructions+=6;goto B5e62af;
case 0x5e62b0:c.instructions+=5;goto B5e62b0;
case 0x5e62b5:c.instructions+=4;goto B5e62b5;
case 0x5e62b7:c.instructions+=3;goto B5e62b7;
case 0x5e62b9:c.instructions+=2;goto B5e62b9;
case 0x5e62bb:c.instructions+=1;goto B5e62bb;
case 0x5e62bd:goto L5e62bd;
case 0x5e62bf:c.instructions+=1;goto B5e62bf;
case 0x5e62c1:goto L5e62c1;
case 0x5e62c6:c.instructions+=2;goto B5e62c6;
case 0x5e62c8:c.instructions+=1;goto B5e62c8;
case 0x5e62ca:goto L5e62ca;
case 0x5e62cc:c.instructions+=2;goto B5e62cc;
case 0x5e62ce:c.instructions+=1;goto B5e62ce;
case 0x5e62d0:goto L5e62d0;
case 0x5e62d1:c.instructions+=2;goto B5e62d1;
case 0x5e62d6:c.instructions+=1;goto B5e62d6;
case 0x5e62db:goto L5e62db;
case 0x5e62df:c.instructions+=6;goto B5e62df;
case 0x5e62e5:c.instructions+=5;goto B5e62e5;
case 0x5e62e6:c.instructions+=4;goto B5e62e6;
case 0x5e62e9:c.instructions+=3;goto B5e62e9;
case 0x5e62eb:c.instructions+=2;goto B5e62eb;
case 0x5e62ef:c.instructions+=1;goto B5e62ef;
case 0x5e62f1:goto L5e62f1;
case 0x5e62f3:c.instructions+=2;goto B5e62f3;
case 0x5e62f5:c.instructions+=1;goto B5e62f5;
case 0x5e62f7:goto L5e62f7;
case 0x5e62fb:c.instructions+=1;goto B5e62fb;
case 0x5e62fd:goto L5e62fd;
case 0x5e6300:c.instructions+=2;goto B5e6300;
case 0x5e6302:c.instructions+=1;goto B5e6302;
case 0x5e6304:goto L5e6304;
case 0x5e6305:c.instructions+=2;goto B5e6305;
case 0x5e6307:c.instructions+=1;goto B5e6307;
case 0x5e630c:goto L5e630c;
case 0x5e630e:goto L5e630e;
case 0x5e6311:c.instructions+=14;goto B5e6311;
case 0x5e6314:c.instructions+=13;goto B5e6314;
case 0x5e6317:c.instructions+=12;goto B5e6317;
case 0x5e631a:c.instructions+=11;goto B5e631a;
case 0x5e631b:c.instructions+=10;goto B5e631b;
case 0x5e6320:c.instructions+=9;goto B5e6320;
case 0x5e6321:c.instructions+=8;goto B5e6321;
case 0x5e6322:c.instructions+=7;goto B5e6322;
case 0x5e6325:c.instructions+=6;goto B5e6325;
case 0x5e6328:c.instructions+=5;goto B5e6328;
case 0x5e632c:c.instructions+=4;goto B5e632c;
case 0x5e632d:c.instructions+=3;goto B5e632d;
case 0x5e632e:c.instructions+=2;goto B5e632e;
case 0x5e6335:c.instructions+=1;goto B5e6335;
case 0x5e633a:goto L5e633a;
case 0x5e633f:c.instructions+=3;goto B5e633f;
case 0x5e6341:c.instructions+=2;goto B5e6341;
case 0x5e6342:c.instructions+=1;goto B5e6342;
case 0x5e6347:goto L5e6347;
case 0x5e634a:goto L5e634a;
case 0x5e634e:c.instructions+=1;goto B5e634e;
case 0x5e6354:goto L5e6354;
case 0x5e6355:c.instructions+=2;goto B5e6355;
case 0x5e6356:c.instructions+=1;goto B5e6356;
case 0x5e6357:goto L5e6357;
case 0x5e6358:c.instructions+=2;goto B5e6358;
case 0x5e635b:c.instructions+=1;goto B5e635b;
case 0x5e6360:goto L5e6360;
case 0x5e6361:c.instructions+=38;goto B5e6361;
case 0x5e6362:c.instructions+=37;goto B5e6362;
case 0x5e6364:c.instructions+=36;goto B5e6364;
case 0x5e6366:c.instructions+=35;goto B5e6366;
case 0x5e6369:c.instructions+=34;goto B5e6369;
case 0x5e636c:c.instructions+=33;goto B5e636c;
case 0x5e636e:c.instructions+=32;goto B5e636e;
case 0x5e6371:c.instructions+=31;goto B5e6371;
case 0x5e6374:c.instructions+=30;goto B5e6374;
case 0x5e6376:c.instructions+=29;goto B5e6376;
case 0x5e6379:c.instructions+=28;goto B5e6379;
case 0x5e637c:c.instructions+=27;goto B5e637c;
case 0x5e637e:c.instructions+=26;goto B5e637e;
case 0x5e6381:c.instructions+=25;goto B5e6381;
case 0x5e6384:c.instructions+=24;goto B5e6384;
case 0x5e6386:c.instructions+=23;goto B5e6386;
case 0x5e6389:c.instructions+=22;goto B5e6389;
case 0x5e638c:c.instructions+=21;goto B5e638c;
case 0x5e638e:c.instructions+=20;goto B5e638e;
case 0x5e6391:c.instructions+=19;goto B5e6391;
case 0x5e6394:c.instructions+=18;goto B5e6394;
case 0x5e6396:c.instructions+=17;goto B5e6396;
case 0x5e6399:c.instructions+=16;goto B5e6399;
case 0x5e639c:c.instructions+=15;goto B5e639c;
case 0x5e639e:c.instructions+=14;goto B5e639e;
case 0x5e63a1:c.instructions+=13;goto B5e63a1;
case 0x5e63a4:c.instructions+=12;goto B5e63a4;
case 0x5e63a6:c.instructions+=11;goto B5e63a6;
case 0x5e63a9:c.instructions+=10;goto B5e63a9;
case 0x5e63ab:c.instructions+=9;goto B5e63ab;
case 0x5e63b1:c.instructions+=8;goto B5e63b1;
case 0x5e63b3:c.instructions+=7;goto B5e63b3;
case 0x5e63b6:c.instructions+=6;goto B5e63b6;
case 0x5e63b7:c.instructions+=5;goto B5e63b7;
case 0x5e63b9:c.instructions+=4;goto B5e63b9;
case 0x5e63bc:c.instructions+=3;goto B5e63bc;
case 0x5e63bf:c.instructions+=2;goto B5e63bf;
case 0x5e63c4:c.instructions+=1;goto B5e63c4;
case 0x5e63c7:goto L5e63c7;
case 0x5e63c9:goto L5e63c9;
case 0x5e63cf:c.instructions+=3;goto B5e63cf;
case 0x5e63d5:c.instructions+=2;goto B5e63d5;
case 0x5e63da:c.instructions+=1;goto B5e63da;
case 0x5e63e0:goto L5e63e0;
case 0x5e63e3:c.instructions+=50;goto B5e63e3;
case 0x5e63e6:c.instructions+=49;goto B5e63e6;
case 0x5e63e8:c.instructions+=48;goto B5e63e8;
case 0x5e63eb:c.instructions+=47;goto B5e63eb;
case 0x5e63ed:c.instructions+=46;goto B5e63ed;
case 0x5e63f0:c.instructions+=45;goto B5e63f0;
case 0x5e63f3:c.instructions+=44;goto B5e63f3;
case 0x5e63f6:c.instructions+=43;goto B5e63f6;
case 0x5e63f8:c.instructions+=42;goto B5e63f8;
case 0x5e63fb:c.instructions+=41;goto B5e63fb;
case 0x5e63fd:c.instructions+=40;goto B5e63fd;
case 0x5e63ff:c.instructions+=39;goto B5e63ff;
case 0x5e6402:c.instructions+=38;goto B5e6402;
case 0x5e6405:c.instructions+=37;goto B5e6405;
case 0x5e6407:c.instructions+=36;goto B5e6407;
case 0x5e640a:c.instructions+=35;goto B5e640a;
case 0x5e640c:c.instructions+=34;goto B5e640c;
case 0x5e640f:c.instructions+=33;goto B5e640f;
case 0x5e6412:c.instructions+=32;goto B5e6412;
case 0x5e6415:c.instructions+=31;goto B5e6415;
case 0x5e6417:c.instructions+=30;goto B5e6417;
case 0x5e641a:c.instructions+=29;goto B5e641a;
case 0x5e641c:c.instructions+=28;goto B5e641c;
case 0x5e641f:c.instructions+=27;goto B5e641f;
case 0x5e6422:c.instructions+=26;goto B5e6422;
case 0x5e6425:c.instructions+=25;goto B5e6425;
case 0x5e6427:c.instructions+=24;goto B5e6427;
case 0x5e642a:c.instructions+=23;goto B5e642a;
case 0x5e642c:c.instructions+=22;goto B5e642c;
case 0x5e642f:c.instructions+=21;goto B5e642f;
case 0x5e6432:c.instructions+=20;goto B5e6432;
case 0x5e6435:c.instructions+=19;goto B5e6435;
case 0x5e6437:c.instructions+=18;goto B5e6437;
case 0x5e643a:c.instructions+=17;goto B5e643a;
case 0x5e643c:c.instructions+=16;goto B5e643c;
case 0x5e643f:c.instructions+=15;goto B5e643f;
case 0x5e6442:c.instructions+=14;goto B5e6442;
case 0x5e6448:c.instructions+=13;goto B5e6448;
case 0x5e644a:c.instructions+=12;goto B5e644a;
case 0x5e644d:c.instructions+=11;goto B5e644d;
case 0x5e6453:c.instructions+=10;goto B5e6453;
case 0x5e6455:c.instructions+=9;goto B5e6455;
case 0x5e6458:c.instructions+=8;goto B5e6458;
case 0x5e645e:c.instructions+=7;goto B5e645e;
case 0x5e6460:c.instructions+=6;goto B5e6460;
case 0x5e6463:c.instructions+=5;goto B5e6463;
case 0x5e6469:c.instructions+=4;goto B5e6469;
case 0x5e646e:c.instructions+=3;goto B5e646e;
case 0x5e646f:c.instructions+=2;goto B5e646f;
case 0x5e6471:c.instructions+=1;goto B5e6471;
case 0x5e6477:goto L5e6477;
case 0x5e6479:c.instructions+=2;goto B5e6479;
case 0x5e647f:c.instructions+=1;goto B5e647f;
case 0x5e6484:goto L5e6484;
case 0x5e6486:goto L5e6486;
case 0x5e6487:c.instructions+=4;goto B5e6487;
case 0x5e6489:c.instructions+=3;goto B5e6489;
case 0x5e648a:c.instructions+=2;goto B5e648a;
case 0x5e648b:c.instructions+=1;goto B5e648b;
case 0x5e6490:goto L5e6490;
case 0x5e6492:c.instructions+=16;goto B5e6492;
case 0x5e6497:c.instructions+=15;goto B5e6497;
case 0x5e649d:c.instructions+=14;goto B5e649d;
case 0x5e649e:c.instructions+=13;goto B5e649e;
case 0x5e64a5:c.instructions+=12;goto B5e64a5;
case 0x5e64a6:c.instructions+=11;goto B5e64a6;
case 0x5e64a7:c.instructions+=10;goto B5e64a7;
case 0x5e64a8:c.instructions+=9;goto B5e64a8;
case 0x5e64aa:c.instructions+=8;goto B5e64aa;
case 0x5e64ae:c.instructions+=7;goto B5e64ae;
case 0x5e64b4:c.instructions+=6;goto B5e64b4;
case 0x5e64b6:c.instructions+=5;goto B5e64b6;
case 0x5e64b8:c.instructions+=4;goto B5e64b8;
case 0x5e64c0:c.instructions+=3;goto B5e64c0;
case 0x5e64c2:c.instructions+=2;goto B5e64c2;
case 0x5e64c5:c.instructions+=1;goto B5e64c5;
case 0x5e64c7:goto L5e64c7;
case 0x5e64c9:c.instructions+=5;goto B5e64c9;
case 0x5e64cc:c.instructions+=4;goto B5e64cc;
case 0x5e64ce:c.instructions+=3;goto B5e64ce;
case 0x5e64cf:c.instructions+=2;goto B5e64cf;
case 0x5e64d2:c.instructions+=1;goto B5e64d2;
case 0x5e64d7:goto L5e64d7;
case 0x5e64d9:c.instructions+=3;goto B5e64d9;
case 0x5e64dc:c.instructions+=2;goto B5e64dc;
case 0x5e64de:c.instructions+=1;goto B5e64de;
case 0x5e64e0:goto L5e64e0;
case 0x5e64e3:c.instructions+=4;goto B5e64e3;
case 0x5e64e6:c.instructions+=3;goto B5e64e6;
case 0x5e64e8:c.instructions+=2;goto B5e64e8;
case 0x5e64ed:c.instructions+=1;goto B5e64ed;
case 0x5e64ef:goto L5e64ef;
case 0x5e64f0:goto L5e64f0;
case 0x5e64f2:c.instructions+=5;goto B5e64f2;
case 0x5e64f5:c.instructions+=4;goto B5e64f5;
case 0x5e64f7:c.instructions+=3;goto B5e64f7;
case 0x5e64f8:c.instructions+=2;goto B5e64f8;
case 0x5e64fb:c.instructions+=1;goto B5e64fb;
case 0x5e6500:goto L5e6500;
case 0x5e6502:c.instructions+=3;goto B5e6502;
case 0x5e6505:c.instructions+=2;goto B5e6505;
case 0x5e6507:c.instructions+=1;goto B5e6507;
case 0x5e6509:goto L5e6509;
case 0x5e650c:c.instructions+=4;goto B5e650c;
case 0x5e650f:c.instructions+=3;goto B5e650f;
case 0x5e6511:c.instructions+=2;goto B5e6511;
case 0x5e6516:c.instructions+=1;goto B5e6516;
case 0x5e6518:goto L5e6518;
case 0x5e651a:c.instructions+=5;goto B5e651a;
case 0x5e651d:c.instructions+=4;goto B5e651d;
case 0x5e651f:c.instructions+=3;goto B5e651f;
case 0x5e6520:c.instructions+=2;goto B5e6520;
case 0x5e6523:c.instructions+=1;goto B5e6523;
case 0x5e6528:goto L5e6528;
case 0x5e652a:c.instructions+=3;goto B5e652a;
case 0x5e652d:c.instructions+=2;goto B5e652d;
case 0x5e652f:c.instructions+=1;goto B5e652f;
case 0x5e6531:goto L5e6531;
case 0x5e6534:c.instructions+=4;goto B5e6534;
case 0x5e6537:c.instructions+=3;goto B5e6537;
case 0x5e6539:c.instructions+=2;goto B5e6539;
case 0x5e653e:c.instructions+=1;goto B5e653e;
case 0x5e6540:goto L5e6540;
case 0x5e6542:c.instructions+=5;goto B5e6542;
case 0x5e6545:c.instructions+=4;goto B5e6545;
case 0x5e6547:c.instructions+=3;goto B5e6547;
case 0x5e6548:c.instructions+=2;goto B5e6548;
case 0x5e654b:c.instructions+=1;goto B5e654b;
case 0x5e6550:goto L5e6550;
case 0x5e6552:c.instructions+=3;goto B5e6552;
case 0x5e6555:c.instructions+=2;goto B5e6555;
case 0x5e6557:c.instructions+=1;goto B5e6557;
case 0x5e6559:goto L5e6559;
case 0x5e655c:c.instructions+=4;goto B5e655c;
case 0x5e655f:c.instructions+=3;goto B5e655f;
case 0x5e6561:c.instructions+=2;goto B5e6561;
case 0x5e6566:c.instructions+=1;goto B5e6566;
case 0x5e6568:goto L5e6568;
case 0x5e656a:c.instructions+=5;goto B5e656a;
case 0x5e656d:c.instructions+=4;goto B5e656d;
case 0x5e656f:c.instructions+=3;goto B5e656f;
case 0x5e6570:c.instructions+=2;goto B5e6570;
case 0x5e6573:c.instructions+=1;goto B5e6573;
case 0x5e6578:goto L5e6578;
case 0x5e657a:c.instructions+=3;goto B5e657a;
case 0x5e657d:c.instructions+=2;goto B5e657d;
case 0x5e657f:c.instructions+=1;goto B5e657f;
case 0x5e6581:goto L5e6581;
case 0x5e6584:c.instructions+=4;goto B5e6584;
case 0x5e6587:c.instructions+=3;goto B5e6587;
case 0x5e6589:c.instructions+=2;goto B5e6589;
case 0x5e658e:c.instructions+=1;goto B5e658e;
case 0x5e6590:goto L5e6590;
case 0x5e6592:c.instructions+=5;goto B5e6592;
case 0x5e6595:c.instructions+=4;goto B5e6595;
case 0x5e6597:c.instructions+=3;goto B5e6597;
case 0x5e6598:c.instructions+=2;goto B5e6598;
case 0x5e659b:c.instructions+=1;goto B5e659b;
case 0x5e65a0:goto L5e65a0;
case 0x5e65a2:c.instructions+=3;goto B5e65a2;
case 0x5e65a5:c.instructions+=2;goto B5e65a5;
case 0x5e65a7:c.instructions+=1;goto B5e65a7;
case 0x5e65a9:goto L5e65a9;
case 0x5e65ac:c.instructions+=4;goto B5e65ac;
case 0x5e65af:c.instructions+=3;goto B5e65af;
case 0x5e65b1:c.instructions+=2;goto B5e65b1;
case 0x5e65b6:c.instructions+=1;goto B5e65b6;
case 0x5e65b8:goto L5e65b8;
case 0x5e65ba:c.instructions+=5;goto B5e65ba;
case 0x5e65bd:c.instructions+=4;goto B5e65bd;
case 0x5e65bf:c.instructions+=3;goto B5e65bf;
case 0x5e65c0:c.instructions+=2;goto B5e65c0;
case 0x5e65c3:c.instructions+=1;goto B5e65c3;
case 0x5e65c8:goto L5e65c8;
case 0x5e65ca:c.instructions+=3;goto B5e65ca;
case 0x5e65cd:c.instructions+=2;goto B5e65cd;
case 0x5e65cf:c.instructions+=1;goto B5e65cf;
case 0x5e65d1:goto L5e65d1;
case 0x5e65d4:c.instructions+=4;goto B5e65d4;
case 0x5e65d7:c.instructions+=3;goto B5e65d7;
case 0x5e65d9:c.instructions+=2;goto B5e65d9;
case 0x5e65de:c.instructions+=1;goto B5e65de;
case 0x5e65e0:goto L5e65e0;
case 0x5e65e2:c.instructions+=5;goto B5e65e2;
case 0x5e65e5:c.instructions+=4;goto B5e65e5;
case 0x5e65e7:c.instructions+=3;goto B5e65e7;
case 0x5e65e8:c.instructions+=2;goto B5e65e8;
case 0x5e65eb:c.instructions+=1;goto B5e65eb;
case 0x5e65f0:goto L5e65f0;
case 0x5e65f2:c.instructions+=3;goto B5e65f2;
case 0x5e65f5:c.instructions+=2;goto B5e65f5;
case 0x5e65f7:c.instructions+=1;goto B5e65f7;
case 0x5e65f9:goto L5e65f9;
case 0x5e65fc:c.instructions+=4;goto B5e65fc;
case 0x5e65ff:c.instructions+=3;goto B5e65ff;
case 0x5e6601:c.instructions+=2;goto B5e6601;
case 0x5e6606:c.instructions+=1;goto B5e6606;
case 0x5e6608:goto L5e6608;
case 0x5e660a:c.instructions+=5;goto B5e660a;
case 0x5e660d:c.instructions+=4;goto B5e660d;
case 0x5e660f:c.instructions+=3;goto B5e660f;
case 0x5e6610:c.instructions+=2;goto B5e6610;
case 0x5e6613:c.instructions+=1;goto B5e6613;
case 0x5e6618:goto L5e6618;
case 0x5e661a:c.instructions+=3;goto B5e661a;
case 0x5e661d:c.instructions+=2;goto B5e661d;
case 0x5e661f:c.instructions+=1;goto B5e661f;
case 0x5e6621:goto L5e6621;
case 0x5e6623:c.instructions+=3;goto B5e6623;
case 0x5e6625:c.instructions+=2;goto B5e6625;
case 0x5e662d:c.instructions+=1;goto B5e662d;
case 0x5e662f:goto L5e662f;
case 0x5e6630:goto L5e6630;
case 0x5e6632:c.instructions+=5;goto B5e6632;
case 0x5e6635:c.instructions+=4;goto B5e6635;
case 0x5e6637:c.instructions+=3;goto B5e6637;
case 0x5e6638:c.instructions+=2;goto B5e6638;
case 0x5e663b:c.instructions+=1;goto B5e663b;
case 0x5e6640:goto L5e6640;
case 0x5e6642:c.instructions+=3;goto B5e6642;
case 0x5e6645:c.instructions+=2;goto B5e6645;
case 0x5e6647:c.instructions+=1;goto B5e6647;
case 0x5e6649:goto L5e6649;
case 0x5e664d:c.instructions+=5;goto B5e664d;
case 0x5e664e:c.instructions+=4;goto B5e664e;
case 0x5e664f:c.instructions+=3;goto B5e664f;
case 0x5e6656:c.instructions+=2;goto B5e6656;
case 0x5e6659:c.instructions+=1;goto B5e6659;
case 0x5e6660:goto L5e6660;
case 0x5e6661:c.instructions+=5;goto B5e6661;
case 0x5e6662:c.instructions+=4;goto B5e6662;
case 0x5e6664:c.instructions+=3;goto B5e6664;
case 0x5e6666:c.instructions+=2;goto B5e6666;
case 0x5e6668:c.instructions+=1;goto B5e6668;
case 0x5e666a:goto L5e666a;
case 0x5e6670:goto L5e6670;
case 0x5e6673:c.instructions+=5;goto B5e6673;
case 0x5e6675:c.instructions+=4;goto B5e6675;
case 0x5e6677:c.instructions+=3;goto B5e6677;
case 0x5e667a:c.instructions+=2;goto B5e667a;
case 0x5e667c:c.instructions+=1;goto B5e667c;
case 0x5e6681:goto L5e6681;
case 0x5e6682:c.instructions+=1;goto B5e6682;
case 0x5e6687:goto L5e6687;
case 0x5e6689:c.instructions+=3;goto B5e6689;
case 0x5e668c:c.instructions+=2;goto B5e668c;
case 0x5e668e:c.instructions+=1;goto B5e668e;
case 0x5e6690:goto L5e6690;
case 0x5e6691:c.instructions+=2;goto B5e6691;
case 0x5e6692:c.instructions+=1;goto B5e6692;
case 0x5e66a0:goto L5e66a0;
case 0x5e66a1:c.instructions+=5;goto B5e66a1;
case 0x5e66a2:c.instructions+=4;goto B5e66a2;
case 0x5e66a4:c.instructions+=3;goto B5e66a4;
case 0x5e66a6:c.instructions+=2;goto B5e66a6;
case 0x5e66a8:c.instructions+=1;goto B5e66a8;
case 0x5e66aa:goto L5e66aa;
case 0x5e66b0:goto L5e66b0;
case 0x5e66b3:c.instructions+=5;goto B5e66b3;
case 0x5e66b5:c.instructions+=4;goto B5e66b5;
case 0x5e66b7:c.instructions+=3;goto B5e66b7;
case 0x5e66ba:c.instructions+=2;goto B5e66ba;
case 0x5e66bc:c.instructions+=1;goto B5e66bc;
case 0x5e66c1:goto L5e66c1;
case 0x5e66c6:c.instructions+=3;goto B5e66c6;
case 0x5e66c7:c.instructions+=2;goto B5e66c7;
case 0x5e66c8:c.instructions+=1;goto B5e66c8;
case 0x5e66cd:goto L5e66cd;
case 0x5e66cf:c.instructions+=3;goto B5e66cf;
case 0x5e66d2:c.instructions+=2;goto B5e66d2;
case 0x5e66d4:c.instructions+=1;goto B5e66d4;
case 0x5e66d6:goto L5e66d6;
case 0x5e66d7:c.instructions+=2;goto B5e66d7;
case 0x5e66d8:c.instructions+=1;goto B5e66d8;
case 0x5e66e0:goto L5e66e0;
case 0x5e66e5:c.instructions+=2;goto B5e66e5;
case 0x5e66ea:c.instructions+=1;goto B5e66ea;
case 0x5e66ec:goto L5e66ec;
case 0x5e66ed:c.instructions+=1;goto B5e66ed;
case 0x5e66f0:goto L5e66f0;
case 0x5e66f2:c.instructions+=6;goto B5e66f2;
case 0x5e66f4:c.instructions+=5;goto B5e66f4;
case 0x5e66f7:c.instructions+=4;goto B5e66f7;
case 0x5e66f9:c.instructions+=3;goto B5e66f9;
case 0x5e66fc:c.instructions+=2;goto B5e66fc;
case 0x5e66fe:c.instructions+=1;goto B5e66fe;
case 0x5e6703:goto L5e6703;
case 0x5e6708:c.instructions+=3;goto B5e6708;
case 0x5e6709:c.instructions+=2;goto B5e6709;
case 0x5e670a:c.instructions+=1;goto B5e670a;
case 0x5e670f:goto L5e670f;
case 0x5e6714:c.instructions+=3;goto B5e6714;
case 0x5e6717:c.instructions+=2;goto B5e6717;
case 0x5e671c:c.instructions+=1;goto B5e671c;
case 0x5e671e:goto L5e671e;
case 0x5e671f:goto L5e671f;
case 0x5e6720:goto L5e6720;
case 0x5e6725:c.instructions+=2;goto B5e6725;
case 0x5e6727:c.instructions+=1;goto B5e6727;
case 0x5e6729:goto L5e6729;
case 0x5e672e:goto L5e672e;
case 0x5e6733:c.instructions+=2;goto B5e6733;
case 0x5e6734:c.instructions+=1;goto B5e6734;
case 0x5e6739:goto L5e6739;
case 0x5e673c:c.instructions+=1;goto B5e673c;
case 0x5e6746:goto L5e6746;
case 0x5e6750:goto L5e6750;
case 0x5e6756:c.instructions+=11;goto B5e6756;
case 0x5e6758:c.instructions+=10;goto B5e6758;
case 0x5e675d:c.instructions+=9;goto B5e675d;
case 0x5e675e:c.instructions+=8;goto B5e675e;
case 0x5e6765:c.instructions+=7;goto B5e6765;
case 0x5e6766:c.instructions+=6;goto B5e6766;
case 0x5e676a:c.instructions+=5;goto B5e676a;
case 0x5e676c:c.instructions+=4;goto B5e676c;
case 0x5e676d:c.instructions+=3;goto B5e676d;
case 0x5e6773:c.instructions+=2;goto B5e6773;
case 0x5e6774:c.instructions+=1;goto B5e6774;
case 0x5e6779:goto L5e6779;
case 0x5e677c:c.instructions+=4;goto B5e677c;
case 0x5e6782:c.instructions+=3;goto B5e6782;
case 0x5e6784:c.instructions+=2;goto B5e6784;
case 0x5e6787:c.instructions+=1;goto B5e6787;
case 0x5e678c:goto L5e678c;
case 0x5e678f:c.instructions+=7;goto B5e678f;
case 0x5e6792:c.instructions+=6;goto B5e6792;
case 0x5e6798:c.instructions+=5;goto B5e6798;
case 0x5e679a:c.instructions+=4;goto B5e679a;
case 0x5e67a0:c.instructions+=3;goto B5e67a0;
case 0x5e67a5:c.instructions+=2;goto B5e67a5;
case 0x5e67a7:c.instructions+=1;goto B5e67a7;
case 0x5e67ac:goto L5e67ac;
case 0x5e67ae:c.instructions+=1;goto B5e67ae;
case 0x5e67b0:goto L5e67b0;
case 0x5e67b3:c.instructions+=1;goto B5e67b3;
case 0x5e67b5:goto L5e67b5;
case 0x5e67b7:c.instructions+=2;goto B5e67b7;
case 0x5e67b9:c.instructions+=1;goto B5e67b9;
case 0x5e67bb:goto L5e67bb;
case 0x5e67c1:c.instructions+=1;goto B5e67c1;
case 0x5e67c3:goto L5e67c3;
case 0x5e67c8:c.instructions+=18;goto B5e67c8;
case 0x5e67cb:c.instructions+=17;goto B5e67cb;
case 0x5e67ce:c.instructions+=16;goto B5e67ce;
case 0x5e67d0:c.instructions+=15;goto B5e67d0;
case 0x5e67d2:c.instructions+=14;goto B5e67d2;
case 0x5e67d5:c.instructions+=13;goto B5e67d5;
case 0x5e67da:c.instructions+=12;goto B5e67da;
case 0x5e67e0:c.instructions+=11;goto B5e67e0;
case 0x5e67e3:c.instructions+=10;goto B5e67e3;
case 0x5e67e5:c.instructions+=9;goto B5e67e5;
case 0x5e67ec:c.instructions+=8;goto B5e67ec;
case 0x5e67ee:c.instructions+=7;goto B5e67ee;
case 0x5e67f2:c.instructions+=6;goto B5e67f2;
case 0x5e67f9:c.instructions+=5;goto B5e67f9;
case 0x5e67fa:c.instructions+=4;goto B5e67fa;
case 0x5e67fb:c.instructions+=3;goto B5e67fb;
case 0x5e67fc:c.instructions+=2;goto B5e67fc;
case 0x5e67ff:c.instructions+=1;goto B5e67ff;
case 0x5e6800:goto L5e6800;
case 0x5e6806:c.instructions+=2;goto B5e6806;
case 0x5e6807:c.instructions+=1;goto B5e6807;
case 0x5e680c:goto L5e680c;
case 0x5e680f:c.instructions+=2;goto B5e680f;
case 0x5e6811:c.instructions+=1;goto B5e6811;
case 0x5e6813:goto L5e6813;
case 0x5e6818:c.instructions+=7;goto B5e6818;
case 0x5e681a:c.instructions+=6;goto B5e681a;
case 0x5e681c:c.instructions+=5;goto B5e681c;
case 0x5e681f:c.instructions+=4;goto B5e681f;
case 0x5e6821:c.instructions+=3;goto B5e6821;
case 0x5e6824:c.instructions+=2;goto B5e6824;
case 0x5e6826:c.instructions+=1;goto B5e6826;
case 0x5e682b:goto L5e682b;
case 0x5e6831:c.instructions+=3;goto B5e6831;
case 0x5e6832:c.instructions+=2;goto B5e6832;
case 0x5e6833:c.instructions+=1;goto B5e6833;
case 0x5e6838:goto L5e6838;
case 0x5e683b:goto L5e683b;
case 0x5e6840:c.instructions+=2;goto B5e6840;
case 0x5e6841:c.instructions+=1;goto B5e6841;
case 0x5e6846:goto L5e6846;
case 0x5e6849:c.instructions+=4;goto B5e6849;
case 0x5e684d:c.instructions+=3;goto B5e684d;
case 0x5e684f:c.instructions+=2;goto B5e684f;
case 0x5e6857:c.instructions+=1;goto B5e6857;
case 0x5e6859:goto L5e6859;
case 0x5e685a:c.instructions+=3;goto B5e685a;
case 0x5e685b:c.instructions+=2;goto B5e685b;
case 0x5e685d:c.instructions+=1;goto B5e685d;
case 0x5e6862:goto L5e6862;
case 0x5e6864:goto L5e6864;
case 0x5e6866:goto L5e6866;
case 0x5e686c:c.instructions+=11;goto B5e686c;
case 0x5e6871:c.instructions+=10;goto B5e6871;
case 0x5e6874:c.instructions+=9;goto B5e6874;
case 0x5e6875:c.instructions+=8;goto B5e6875;
case 0x5e6877:c.instructions+=7;goto B5e6877;
case 0x5e687b:c.instructions+=6;goto B5e687b;
case 0x5e687c:c.instructions+=5;goto B5e687c;
case 0x5e6883:c.instructions+=4;goto B5e6883;
case 0x5e688a:c.instructions+=3;goto B5e688a;
case 0x5e688b:c.instructions+=2;goto B5e688b;
case 0x5e688e:c.instructions+=1;goto B5e688e;
case 0x5e6890:goto L5e6890;
case 0x5e6891:c.instructions+=1;goto B5e6891;
case 0x5e6896:goto L5e6896;
case 0x5e689a:c.instructions+=2;goto B5e689a;
case 0x5e689c:c.instructions+=1;goto B5e689c;
case 0x5e689e:goto L5e689e;
case 0x5e68a0:c.instructions+=11;goto B5e68a0;
case 0x5e68a3:c.instructions+=10;goto B5e68a3;
case 0x5e68a5:c.instructions+=9;goto B5e68a5;
case 0x5e68a8:c.instructions+=8;goto B5e68a8;
case 0x5e68ab:c.instructions+=7;goto B5e68ab;
case 0x5e68ae:c.instructions+=6;goto B5e68ae;
case 0x5e68b1:c.instructions+=5;goto B5e68b1;
case 0x5e68b3:c.instructions+=4;goto B5e68b3;
case 0x5e68b6:c.instructions+=3;goto B5e68b6;
case 0x5e68b9:c.instructions+=2;goto B5e68b9;
case 0x5e68bb:c.instructions+=1;goto B5e68bb;
case 0x5e68c0:goto L5e68c0;
case 0x5e68c1:c.instructions+=1;goto B5e68c1;
case 0x5e68d0:goto L5e68d0;
case 0x5e68d1:c.instructions+=19;goto B5e68d1;
case 0x5e68d2:c.instructions+=18;goto B5e68d2;
case 0x5e68d4:c.instructions+=17;goto B5e68d4;
case 0x5e68d8:c.instructions+=16;goto B5e68d8;
case 0x5e68db:c.instructions+=15;goto B5e68db;
case 0x5e68de:c.instructions+=14;goto B5e68de;
case 0x5e68e1:c.instructions+=13;goto B5e68e1;
case 0x5e68e3:c.instructions+=12;goto B5e68e3;
case 0x5e68e5:c.instructions+=11;goto B5e68e5;
case 0x5e68e7:c.instructions+=10;goto B5e68e7;
case 0x5e68e9:c.instructions+=9;goto B5e68e9;
case 0x5e68eb:c.instructions+=8;goto B5e68eb;
case 0x5e68ed:c.instructions+=7;goto B5e68ed;
case 0x5e68ef:c.instructions+=6;goto B5e68ef;
case 0x5e68f3:c.instructions+=5;goto B5e68f3;
case 0x5e68f6:c.instructions+=4;goto B5e68f6;
case 0x5e68f8:c.instructions+=3;goto B5e68f8;
case 0x5e68fa:c.instructions+=2;goto B5e68fa;
case 0x5e68fd:c.instructions+=1;goto B5e68fd;
case 0x5e68ff:goto L5e68ff;
case 0x5e6903:c.instructions+=5;goto B5e6903;
case 0x5e6904:c.instructions+=4;goto B5e6904;
case 0x5e6909:c.instructions+=3;goto B5e6909;
case 0x5e690a:c.instructions+=2;goto B5e690a;
case 0x5e690c:c.instructions+=1;goto B5e690c;
case 0x5e6911:goto L5e6911;
case 0x5e6913:c.instructions+=1;goto B5e6913;
case 0x5e6915:goto L5e6915;
case 0x5e6918:c.instructions+=2;goto B5e6918;
case 0x5e691a:c.instructions+=1;goto B5e691a;
case 0x5e691c:goto L5e691c;
case 0x5e6920:c.instructions+=1;goto B5e6920;
case 0x5e6922:goto L5e6922;
case 0x5e6924:goto L5e6924;
case 0x5e6927:c.instructions+=2;goto B5e6927;
case 0x5e6929:c.instructions+=1;goto B5e6929;
case 0x5e692b:goto L5e692b;
case 0x5e692d:c.instructions+=1;goto B5e692d;
case 0x5e692f:goto L5e692f;
case 0x5e6930:c.instructions+=2;goto B5e6930;
case 0x5e6935:c.instructions+=1;goto B5e6935;
case 0x5e693a:goto L5e693a;
case 0x5e693c:c.instructions+=1;goto B5e693c;
case 0x5e693e:goto L5e693e;
case 0x5e6940:c.instructions+=2;goto B5e6940;
case 0x5e6941:c.instructions+=1;goto B5e6941;
case 0x5e6946:goto L5e6946;
case 0x5e6947:c.instructions+=2;goto B5e6947;
case 0x5e6948:c.instructions+=1;goto B5e6948;
case 0x5e694b:goto L5e694b;
case 0x5e694f:c.instructions+=3;goto B5e694f;
case 0x5e6955:c.instructions+=2;goto B5e6955;
case 0x5e6957:c.instructions+=1;goto B5e6957;
case 0x5e6959:goto L5e6959;
case 0x5e695a:c.instructions+=2;goto B5e695a;
case 0x5e695f:c.instructions+=1;goto B5e695f;
case 0x5e6964:goto L5e6964;
case 0x5e6966:c.instructions+=2;goto B5e6966;
case 0x5e6967:c.instructions+=1;goto B5e6967;
case 0x5e696c:goto L5e696c;
case 0x5e696d:c.instructions+=2;goto B5e696d;
case 0x5e696e:c.instructions+=1;goto B5e696e;
case 0x5e6980:goto L5e6980;
case 0x5e6986:c.instructions+=8;goto B5e6986;
case 0x5e6987:c.instructions+=7;goto B5e6987;
case 0x5e6988:c.instructions+=6;goto B5e6988;
case 0x5e698c:c.instructions+=5;goto B5e698c;
case 0x5e6990:c.instructions+=4;goto B5e6990;
case 0x5e6992:c.instructions+=3;goto B5e6992;
case 0x5e6998:c.instructions+=2;goto B5e6998;
case 0x5e699e:c.instructions+=1;goto B5e699e;
case 0x5e69a0:goto L5e69a0;
case 0x5e69a1:goto L5e69a1;
case 0x5e69a4:c.instructions+=3;goto B5e69a4;
case 0x5e69a6:c.instructions+=2;goto B5e69a6;
case 0x5e69a8:c.instructions+=1;goto B5e69a8;
case 0x5e69aa:goto L5e69aa;
case 0x5e69ae:c.instructions+=1;goto B5e69ae;
case 0x5e69b0:goto L5e69b0;
case 0x5e69b2:goto L5e69b2;
case 0x5e69b4:c.instructions+=1;goto B5e69b4;
case 0x5e69b6:goto L5e69b6;
case 0x5e69bb:goto L5e69bb;
case 0x5e69bd:c.instructions+=11;goto B5e69bd;
case 0x5e69c0:c.instructions+=10;goto B5e69c0;
case 0x5e69c2:c.instructions+=9;goto B5e69c2;
case 0x5e69c5:c.instructions+=8;goto B5e69c5;
case 0x5e69c8:c.instructions+=7;goto B5e69c8;
case 0x5e69cb:c.instructions+=6;goto B5e69cb;
case 0x5e69ce:c.instructions+=5;goto B5e69ce;
case 0x5e69d0:c.instructions+=4;goto B5e69d0;
case 0x5e69d3:c.instructions+=3;goto B5e69d3;
case 0x5e69d6:c.instructions+=2;goto B5e69d6;
case 0x5e69d8:c.instructions+=1;goto B5e69d8;
case 0x5e69dd:goto L5e69dd;
case 0x5e69e3:c.instructions+=2;goto B5e69e3;
case 0x5e69e5:c.instructions+=1;goto B5e69e5;
case 0x5e69e7:goto L5e69e7;
case 0x5e69e8:goto L5e69e8;
case 0x5e69e9:c.instructions+=2;goto B5e69e9;
case 0x5e69ea:c.instructions+=1;goto B5e69ea;
case 0x5e69f0:goto L5e69f0;
case 0x5e69f2:c.instructions+=11;goto B5e69f2;
case 0x5e69f7:c.instructions+=10;goto B5e69f7;
case 0x5e69fd:c.instructions+=9;goto B5e69fd;
case 0x5e69fe:c.instructions+=8;goto B5e69fe;
case 0x5e6a05:c.instructions+=7;goto B5e6a05;
case 0x5e6a06:c.instructions+=6;goto B5e6a06;
case 0x5e6a07:c.instructions+=5;goto B5e6a07;
case 0x5e6a09:c.instructions+=4;goto B5e6a09;
case 0x5e6a0d:c.instructions+=3;goto B5e6a0d;
case 0x5e6a10:c.instructions+=2;goto B5e6a10;
case 0x5e6a18:c.instructions+=1;goto B5e6a18;
case 0x5e6a1d:goto L5e6a1d;
case 0x5e6a20:c.instructions+=1;goto B5e6a20;
case 0x5e6a25:goto L5e6a25;
case 0x5e6a29:c.instructions+=4;goto B5e6a29;
case 0x5e6a2a:c.instructions+=3;goto B5e6a2a;
case 0x5e6a31:c.instructions+=2;goto B5e6a31;
case 0x5e6a34:c.instructions+=1;goto B5e6a34;
case 0x5e6a40:goto L5e6a40;
case 0x5e6a44:c.instructions+=4;goto B5e6a44;
case 0x5e6a45:c.instructions+=3;goto B5e6a45;
case 0x5e6a46:c.instructions+=2;goto B5e6a46;
case 0x5e6a48:c.instructions+=1;goto B5e6a48;
case 0x5e6a4d:goto L5e6a4d;
case 0x5e6a4f:c.instructions+=1;goto B5e6a4f;
case 0x5e6a51:goto L5e6a51;
case 0x5e6a53:c.instructions+=2;goto B5e6a53;
case 0x5e6a54:c.instructions+=1;goto B5e6a54;
case 0x5e6a57:goto L5e6a57;
case 0x5e6a5b:c.instructions+=4;goto B5e6a5b;
case 0x5e6a5c:c.instructions+=3;goto B5e6a5c;
case 0x5e6a5d:c.instructions+=2;goto B5e6a5d;
case 0x5e6a5f:c.instructions+=1;goto B5e6a5f;
case 0x5e6a64:goto L5e6a64;
case 0x5e6a67:c.instructions+=4;goto B5e6a67;
case 0x5e6a69:c.instructions+=3;goto B5e6a69;
case 0x5e6a6c:c.instructions+=2;goto B5e6a6c;
case 0x5e6a6d:c.instructions+=1;goto B5e6a6d;
case 0x5e6a70:goto L5e6a70;
case 0x5e6a71:c.instructions+=7;goto B5e6a71;
case 0x5e6a72:c.instructions+=6;goto B5e6a72;
case 0x5e6a73:c.instructions+=5;goto B5e6a73;
case 0x5e6a75:c.instructions+=4;goto B5e6a75;
case 0x5e6a7b:c.instructions+=3;goto B5e6a7b;
case 0x5e6a7d:c.instructions+=2;goto B5e6a7d;
case 0x5e6a7e:c.instructions+=1;goto B5e6a7e;
case 0x5e6a84:goto L5e6a84;
case 0x5e6a90:goto L5e6a90;
case 0x5e6a96:c.instructions+=2;goto B5e6a96;
case 0x5e6a98:c.instructions+=1;goto B5e6a98;
case 0x5e6a9e:goto L5e6a9e;
case 0x5e6aa4:c.instructions+=2;goto B5e6aa4;
case 0x5e6aa6:c.instructions+=1;goto B5e6aa6;
case 0x5e6aac:goto L5e6aac;
case 0x5e6ab2:c.instructions+=2;goto B5e6ab2;
case 0x5e6ab4:c.instructions+=1;goto B5e6ab4;
case 0x5e6aba:goto L5e6aba;
case 0x5e6abd:c.instructions+=1;goto B5e6abd;
case 0x5e6abf:goto L5e6abf;
case 0x5e6ac2:c.instructions+=1;goto B5e6ac2;
case 0x5e6ac4:goto L5e6ac4;
case 0x5e6ac7:c.instructions+=1;goto B5e6ac7;
case 0x5e6ac9:goto L5e6ac9;
case 0x5e6acb:c.instructions+=1;goto B5e6acb;
case 0x5e6ad0:goto L5e6ad0;
case 0x5e6ad3:c.instructions+=2;goto B5e6ad3;
case 0x5e6ad5:c.instructions+=1;goto B5e6ad5;
case 0x5e6ad7:goto L5e6ad7;
case 0x5e6add:c.instructions+=2;goto B5e6add;
case 0x5e6adf:c.instructions+=1;goto B5e6adf;
case 0x5e6ae1:goto L5e6ae1;
case 0x5e6ae7:c.instructions+=2;goto B5e6ae7;
case 0x5e6ae8:c.instructions+=1;goto B5e6ae8;
case 0x5e6aea:goto L5e6aea;
case 0x5e6af0:c.instructions+=2;goto B5e6af0;
case 0x5e6af3:c.instructions+=1;goto B5e6af3;
case 0x5e6af9:goto L5e6af9;
case 0x5e6afa:goto L5e6afa;
case 0x5e6b00:goto L5e6b00;
case 0x5e6b06:c.instructions+=2;goto B5e6b06;
case 0x5e6b09:c.instructions+=1;goto B5e6b09;
case 0x5e6b0b:goto L5e6b0b;
case 0x5e6b0e:c.instructions+=1;goto B5e6b0e;
case 0x5e6b10:goto L5e6b10;
case 0x5e6b13:c.instructions+=1;goto B5e6b13;
case 0x5e6b19:goto L5e6b19;
case 0x5e6b1c:c.instructions+=2;goto B5e6b1c;
case 0x5e6b1e:c.instructions+=1;goto B5e6b1e;
case 0x5e6b24:goto L5e6b24;
case 0x5e6b27:c.instructions+=4;goto B5e6b27;
case 0x5e6b29:c.instructions+=3;goto B5e6b29;
case 0x5e6b2b:c.instructions+=2;goto B5e6b2b;
case 0x5e6b2d:c.instructions+=1;goto B5e6b2d;
case 0x5e6b2f:goto L5e6b2f;
case 0x5e6b31:goto L5e6b31;
case 0x5e6b33:c.instructions+=4;goto B5e6b33;
case 0x5e6b37:c.instructions+=3;goto B5e6b37;
case 0x5e6b39:c.instructions+=2;goto B5e6b39;
case 0x5e6b3c:c.instructions+=1;goto B5e6b3c;
case 0x5e6b3e:goto L5e6b3e;
case 0x5e6b41:c.instructions+=2;goto B5e6b41;
case 0x5e6b43:c.instructions+=1;goto B5e6b43;
case 0x5e6b45:goto L5e6b45;
case 0x5e6b49:c.instructions+=10;goto B5e6b49;
case 0x5e6b4e:c.instructions+=9;goto B5e6b4e;
case 0x5e6b50:c.instructions+=8;goto B5e6b50;
case 0x5e6b53:c.instructions+=7;goto B5e6b53;
case 0x5e6b55:c.instructions+=6;goto B5e6b55;
case 0x5e6b58:c.instructions+=5;goto B5e6b58;
case 0x5e6b5a:c.instructions+=4;goto B5e6b5a;
case 0x5e6b60:c.instructions+=3;goto B5e6b60;
case 0x5e6b63:c.instructions+=2;goto B5e6b63;
case 0x5e6b66:c.instructions+=1;goto B5e6b66;
case 0x5e6b68:goto L5e6b68;
case 0x5e6b6b:c.instructions+=1;goto B5e6b6b;
case 0x5e6b6d:goto L5e6b6d;
case 0x5e6b70:c.instructions+=1;goto B5e6b70;
case 0x5e6b72:goto L5e6b72;
case 0x5e6b75:c.instructions+=1;goto B5e6b75;
case 0x5e6b77:goto L5e6b77;
case 0x5e6b78:c.instructions+=2;goto B5e6b78;
case 0x5e6b7a:c.instructions+=1;goto B5e6b7a;
case 0x5e6b7f:goto L5e6b7f;
case 0x5e6b80:goto L5e6b80;
case 0x5e6b83:c.instructions+=4;goto B5e6b83;
case 0x5e6b84:c.instructions+=3;goto B5e6b84;
case 0x5e6b87:c.instructions+=2;goto B5e6b87;
case 0x5e6b89:c.instructions+=1;goto B5e6b89;
case 0x5e6b8b:goto L5e6b8b;
case 0x5e6b8d:c.instructions+=1;goto B5e6b8d;
case 0x5e6b8f:goto L5e6b8f;
case 0x5e6b91:c.instructions+=2;goto B5e6b91;
case 0x5e6b98:c.instructions+=1;goto B5e6b98;
case 0x5e6b9d:goto L5e6b9d;
case 0x5e6b9f:c.instructions+=4;goto B5e6b9f;
case 0x5e6ba6:c.instructions+=3;goto B5e6ba6;
case 0x5e6ba9:c.instructions+=2;goto B5e6ba9;
case 0x5e6bab:c.instructions+=1;goto B5e6bab;
case 0x5e6bad:goto L5e6bad;
case 0x5e6bb2:goto L5e6bb2;
case 0x5e6bb4:c.instructions+=1;goto B5e6bb4;
case 0x5e6bb6:goto L5e6bb6;
case 0x5e6bbc:c.instructions+=5;goto B5e6bbc;
case 0x5e6bbd:c.instructions+=4;goto B5e6bbd;
case 0x5e6bbf:c.instructions+=3;goto B5e6bbf;
case 0x5e6bc2:c.instructions+=2;goto B5e6bc2;
case 0x5e6bc8:c.instructions+=1;goto B5e6bc8;
case 0x5e6bca:goto L5e6bca;
case 0x5e6bcd:c.instructions+=1;goto B5e6bcd;
case 0x5e6bcf:goto L5e6bcf;
case 0x5e6bd1:c.instructions+=1;goto B5e6bd1;
case 0x5e6bd6:goto L5e6bd6;
case 0x5e6bdc:c.instructions+=2;goto B5e6bdc;
case 0x5e6bde:c.instructions+=1;goto B5e6bde;
case 0x5e6be4:goto L5e6be4;
case 0x5e6be5:c.instructions+=5;goto B5e6be5;
case 0x5e6bec:c.instructions+=4;goto B5e6bec;
case 0x5e6bed:c.instructions+=3;goto B5e6bed;
case 0x5e6bee:c.instructions+=2;goto B5e6bee;
case 0x5e6bef:c.instructions+=1;goto B5e6bef;
case 0x5e6bf0:goto L5e6bf0;
case 0x5e6bf1:c.instructions+=5;goto B5e6bf1;
case 0x5e6bf3:c.instructions+=4;goto B5e6bf3;
case 0x5e6bf4:c.instructions+=3;goto B5e6bf4;
case 0x5e6bf5:c.instructions+=2;goto B5e6bf5;
case 0x5e6bf6:c.instructions+=1;goto B5e6bf6;
case 0x5e6bfb:goto L5e6bfb;
case 0x5e6c02:goto L5e6c02;
case 0x5e6c03:c.instructions+=4;goto B5e6c03;
case 0x5e6c04:c.instructions+=3;goto B5e6c04;
case 0x5e6c05:c.instructions+=2;goto B5e6c05;
case 0x5e6c06:c.instructions+=1;goto B5e6c06;
case 0x5e6c10:goto L5e6c10;
case 0x5e6c11:c.instructions+=4;goto B5e6c11;
case 0x5e6c12:c.instructions+=3;goto B5e6c12;
case 0x5e6c14:c.instructions+=2;goto B5e6c14;
case 0x5e6c16:c.instructions+=1;goto B5e6c16;
case 0x5e6c1b:goto L5e6c1b;
case 0x5e6c1d:c.instructions+=4;goto B5e6c1d;
case 0x5e6c20:c.instructions+=3;goto B5e6c20;
case 0x5e6c22:c.instructions+=2;goto B5e6c22;
case 0x5e6c23:c.instructions+=1;goto B5e6c23;
case 0x5e6c28:goto L5e6c28;
case 0x5e6c2a:c.instructions+=4;goto B5e6c2a;
case 0x5e6c30:c.instructions+=3;goto B5e6c30;
case 0x5e6c33:c.instructions+=2;goto B5e6c33;
case 0x5e6c35:c.instructions+=1;goto B5e6c35;
case 0x5e6c37:goto L5e6c37;
case 0x5e6c3d:c.instructions+=2;goto B5e6c3d;
case 0x5e6c40:c.instructions+=1;goto B5e6c40;
case 0x5e6c42:goto L5e6c42;
case 0x5e6c44:c.instructions+=2;goto B5e6c44;
case 0x5e6c46:c.instructions+=1;goto B5e6c46;
case 0x5e6c4b:goto L5e6c4b;
case 0x5e6c4d:c.instructions+=1;goto B5e6c4d;
case 0x5e6c4f:goto L5e6c4f;
case 0x5e6c52:c.instructions+=2;goto B5e6c52;
case 0x5e6c54:c.instructions+=1;goto B5e6c54;
case 0x5e6c56:goto L5e6c56;
case 0x5e6c58:c.instructions+=4;goto B5e6c58;
case 0x5e6c5b:c.instructions+=3;goto B5e6c5b;
case 0x5e6c5d:c.instructions+=2;goto B5e6c5d;
case 0x5e6c5e:c.instructions+=1;goto B5e6c5e;
case 0x5e6c63:goto L5e6c63;
case 0x5e6c66:c.instructions+=1;goto B5e6c66;
case 0x5e6c68:goto L5e6c68;
case 0x5e6c6b:c.instructions+=4;goto B5e6c6b;
case 0x5e6c6d:c.instructions+=3;goto B5e6c6d;
case 0x5e6c6f:c.instructions+=2;goto B5e6c6f;
case 0x5e6c70:c.instructions+=1;goto B5e6c70;
case 0x5e6c72:goto L5e6c72;
case 0x5e6c74:goto L5e6c74;
case 0x5e6c78:c.instructions+=1;goto B5e6c78;
case 0x5e6c7a:goto L5e6c7a;
case 0x5e6c7b:c.instructions+=3;goto B5e6c7b;
case 0x5e6c7e:c.instructions+=2;goto B5e6c7e;
case 0x5e6c80:c.instructions+=1;goto B5e6c80;
case 0x5e6c82:goto L5e6c82;
case 0x5e6c84:goto L5e6c84;
case 0x5e6c87:c.instructions+=2;goto B5e6c87;
case 0x5e6c8a:c.instructions+=1;goto B5e6c8a;
case 0x5e6c8c:goto L5e6c8c;
case 0x5e6c91:c.instructions+=2;goto B5e6c91;
case 0x5e6c93:c.instructions+=1;goto B5e6c93;
case 0x5e6c95:goto L5e6c95;
case 0x5e6c98:c.instructions+=2;goto B5e6c98;
case 0x5e6c9a:c.instructions+=1;goto B5e6c9a;
case 0x5e6c9c:goto L5e6c9c;
case 0x5e6ca0:goto L5e6ca0;
case 0x5e6ca2:c.instructions+=1;goto B5e6ca2;
case 0x5e6ca7:goto L5e6ca7;
case 0x5e6cac:goto L5e6cac;
case 0x5e6caf:c.instructions+=1;goto B5e6caf;
case 0x5e6cb1:goto L5e6cb1;
case 0x5e6cb2:c.instructions+=2;goto B5e6cb2;
case 0x5e6cb4:c.instructions+=1;goto B5e6cb4;
case 0x5e6cb9:goto L5e6cb9;
case 0x5e6cba:goto L5e6cba;
case 0x5e6cbb:c.instructions+=2;goto B5e6cbb;
case 0x5e6cbc:c.instructions+=1;goto B5e6cbc;
case 0x5e6cc0:goto L5e6cc0;
case 0x5e6cc4:c.instructions+=12;goto B5e6cc4;
case 0x5e6cc5:c.instructions+=11;goto B5e6cc5;
case 0x5e6cc7:c.instructions+=10;goto B5e6cc7;
case 0x5e6ccb:c.instructions+=9;goto B5e6ccb;
case 0x5e6cce:c.instructions+=8;goto B5e6cce;
case 0x5e6cd2:c.instructions+=7;goto B5e6cd2;
case 0x5e6cdc:c.instructions+=6;goto B5e6cdc;
case 0x5e6cdf:c.instructions+=5;goto B5e6cdf;
case 0x5e6ce2:c.instructions+=4;goto B5e6ce2;
case 0x5e6ce8:c.instructions+=3;goto B5e6ce8;
case 0x5e6cea:c.instructions+=2;goto B5e6cea;
case 0x5e6ceb:c.instructions+=1;goto B5e6ceb;
case 0x5e6ced:goto L5e6ced;
case 0x5e6cef:c.instructions+=1;goto B5e6cef;
case 0x5e6cf1:goto L5e6cf1;
case 0x5e6cf6:c.instructions+=1;goto B5e6cf6;
case 0x5e6cf8:goto L5e6cf8;
case 0x5e6cfa:goto L5e6cfa;
case 0x5e6cfe:c.instructions+=14;goto B5e6cfe;
case 0x5e6d01:c.instructions+=13;goto B5e6d01;
case 0x5e6d04:c.instructions+=12;goto B5e6d04;
case 0x5e6d07:c.instructions+=11;goto B5e6d07;
case 0x5e6d09:c.instructions+=10;goto B5e6d09;
case 0x5e6d0a:c.instructions+=9;goto B5e6d0a;
case 0x5e6d0c:c.instructions+=8;goto B5e6d0c;
case 0x5e6d0f:c.instructions+=7;goto B5e6d0f;
case 0x5e6d12:c.instructions+=6;goto B5e6d12;
case 0x5e6d13:c.instructions+=5;goto B5e6d13;
case 0x5e6d16:c.instructions+=4;goto B5e6d16;
case 0x5e6d19:c.instructions+=3;goto B5e6d19;
case 0x5e6d1a:c.instructions+=2;goto B5e6d1a;
case 0x5e6d1d:c.instructions+=1;goto B5e6d1d;
case 0x5e6d22:goto L5e6d22;
case 0x5e6d25:c.instructions+=8;goto B5e6d25;
case 0x5e6d28:c.instructions+=7;goto B5e6d28;
case 0x5e6d2a:c.instructions+=6;goto B5e6d2a;
case 0x5e6d2c:c.instructions+=5;goto B5e6d2c;
case 0x5e6d2d:c.instructions+=4;goto B5e6d2d;
case 0x5e6d33:c.instructions+=3;goto B5e6d33;
case 0x5e6d39:c.instructions+=2;goto B5e6d39;
case 0x5e6d3f:c.instructions+=1;goto B5e6d3f;
case 0x5e6d44:goto L5e6d44;
case 0x5e6d47:c.instructions+=4;goto B5e6d47;
case 0x5e6d48:c.instructions+=3;goto B5e6d48;
case 0x5e6d4b:c.instructions+=2;goto B5e6d4b;
case 0x5e6d4e:c.instructions+=1;goto B5e6d4e;
case 0x5e6d53:goto L5e6d53;
case 0x5e6d57:c.instructions+=8;goto B5e6d57;
case 0x5e6d5a:c.instructions+=7;goto B5e6d5a;
case 0x5e6d5e:c.instructions+=6;goto B5e6d5e;
case 0x5e6d5f:c.instructions+=5;goto B5e6d5f;
case 0x5e6d61:c.instructions+=4;goto B5e6d61;
case 0x5e6d62:c.instructions+=3;goto B5e6d62;
case 0x5e6d63:c.instructions+=2;goto B5e6d63;
case 0x5e6d65:c.instructions+=1;goto B5e6d65;
case 0x5e6d6a:goto L5e6d6a;
case 0x5e6d6b:c.instructions+=3;goto B5e6d6b;
case 0x5e6d6d:c.instructions+=2;goto B5e6d6d;
case 0x5e6d6e:c.instructions+=1;goto B5e6d6e;
case 0x5e6d80:goto L5e6d80;
case 0x5e6d81:c.instructions+=12;goto B5e6d81;
case 0x5e6d83:c.instructions+=11;goto B5e6d83;
case 0x5e6d86:c.instructions+=10;goto B5e6d86;
case 0x5e6d88:c.instructions+=9;goto B5e6d88;
case 0x5e6d8d:c.instructions+=8;goto B5e6d8d;
case 0x5e6d93:c.instructions+=7;goto B5e6d93;
case 0x5e6d94:c.instructions+=6;goto B5e6d94;
case 0x5e6d9b:c.instructions+=5;goto B5e6d9b;
case 0x5e6d9e:c.instructions+=4;goto B5e6d9e;
case 0x5e6da3:c.instructions+=3;goto B5e6da3;
case 0x5e6da4:c.instructions+=2;goto B5e6da4;
case 0x5e6da5:c.instructions+=1;goto B5e6da5;
case 0x5e6daa:goto L5e6daa;
case 0x5e6dad:c.instructions+=2;goto B5e6dad;
case 0x5e6daf:c.instructions+=1;goto B5e6daf;
case 0x5e6db1:goto L5e6db1;
case 0x5e6db6:c.instructions+=8;goto B5e6db6;
case 0x5e6db8:c.instructions+=7;goto B5e6db8;
case 0x5e6dba:c.instructions+=6;goto B5e6dba;
case 0x5e6dbd:c.instructions+=5;goto B5e6dbd;
case 0x5e6dbf:c.instructions+=4;goto B5e6dbf;
case 0x5e6dc2:c.instructions+=3;goto B5e6dc2;
case 0x5e6dc5:c.instructions+=2;goto B5e6dc5;
case 0x5e6dc7:c.instructions+=1;goto B5e6dc7;
case 0x5e6dc9:goto L5e6dc9;
case 0x5e6dcb:c.instructions+=2;goto B5e6dcb;
case 0x5e6dcd:c.instructions+=1;goto B5e6dcd;
case 0x5e6dcf:goto L5e6dcf;
case 0x5e6dd2:c.instructions+=2;goto B5e6dd2;
case 0x5e6dd4:c.instructions+=1;goto B5e6dd4;
case 0x5e6dd6:goto L5e6dd6;
case 0x5e6ddc:c.instructions+=1;goto B5e6ddc;
case 0x5e6de3:goto L5e6de3;
case 0x5e6de6:c.instructions+=6;goto B5e6de6;
case 0x5e6de8:c.instructions+=5;goto B5e6de8;
case 0x5e6deb:c.instructions+=4;goto B5e6deb;
case 0x5e6ded:c.instructions+=3;goto B5e6ded;
case 0x5e6dee:c.instructions+=2;goto B5e6dee;
case 0x5e6df1:c.instructions+=1;goto B5e6df1;
case 0x5e6df6:goto L5e6df6;
case 0x5e6dfc:c.instructions+=3;goto B5e6dfc;
case 0x5e6dfd:c.instructions+=2;goto B5e6dfd;
case 0x5e6dfe:c.instructions+=1;goto B5e6dfe;
case 0x5e6e03:goto L5e6e03;
case 0x5e6e06:goto L5e6e06;
case 0x5e6e0c:c.instructions+=2;goto B5e6e0c;
case 0x5e6e0d:c.instructions+=1;goto B5e6e0d;
case 0x5e6e12:goto L5e6e12;
case 0x5e6e15:c.instructions+=4;goto B5e6e15;
case 0x5e6e19:c.instructions+=3;goto B5e6e19;
case 0x5e6e1b:c.instructions+=2;goto B5e6e1b;
case 0x5e6e23:c.instructions+=1;goto B5e6e23;
case 0x5e6e25:goto L5e6e25;
case 0x5e6e28:c.instructions+=13;goto B5e6e28;
case 0x5e6e2b:c.instructions+=12;goto B5e6e2b;
case 0x5e6e2c:c.instructions+=11;goto B5e6e2c;
case 0x5e6e2f:c.instructions+=10;goto B5e6e2f;
case 0x5e6e30:c.instructions+=9;goto B5e6e30;
case 0x5e6e33:c.instructions+=8;goto B5e6e33;
case 0x5e6e34:c.instructions+=7;goto B5e6e34;
case 0x5e6e37:c.instructions+=6;goto B5e6e37;
case 0x5e6e38:c.instructions+=5;goto B5e6e38;
case 0x5e6e3b:c.instructions+=4;goto B5e6e3b;
case 0x5e6e3c:c.instructions+=3;goto B5e6e3c;
case 0x5e6e3d:c.instructions+=2;goto B5e6e3d;
case 0x5e6e3f:c.instructions+=1;goto B5e6e3f;
case 0x5e6e44:goto L5e6e44;
case 0x5e6e46:goto L5e6e46;
case 0x5e6e48:goto L5e6e48;
case 0x5e6e4e:c.instructions+=10;goto B5e6e4e;
case 0x5e6e53:c.instructions+=9;goto B5e6e53;
case 0x5e6e56:c.instructions+=8;goto B5e6e56;
case 0x5e6e58:c.instructions+=7;goto B5e6e58;
case 0x5e6e5c:c.instructions+=6;goto B5e6e5c;
case 0x5e6e63:c.instructions+=5;goto B5e6e63;
case 0x5e6e6a:c.instructions+=4;goto B5e6e6a;
case 0x5e6e6b:c.instructions+=3;goto B5e6e6b;
case 0x5e6e6d:c.instructions+=2;goto B5e6e6d;
case 0x5e6e6e:c.instructions+=1;goto B5e6e6e;
case 0x5e6e70:goto L5e6e70;
case 0x5e6e71:c.instructions+=11;goto B5e6e71;
case 0x5e6e73:c.instructions+=10;goto B5e6e73;
case 0x5e6e76:c.instructions+=9;goto B5e6e76;
case 0x5e6e79:c.instructions+=8;goto B5e6e79;
case 0x5e6e7a:c.instructions+=7;goto B5e6e7a;
case 0x5e6e7d:c.instructions+=6;goto B5e6e7d;
case 0x5e6e7f:c.instructions+=5;goto B5e6e7f;
case 0x5e6e80:c.instructions+=4;goto B5e6e80;
case 0x5e6e83:c.instructions+=3;goto B5e6e83;
case 0x5e6e84:c.instructions+=2;goto B5e6e84;
case 0x5e6e86:c.instructions+=1;goto B5e6e86;
case 0x5e6e88:goto L5e6e88;
case 0x5e6e8b:c.instructions+=3;goto B5e6e8b;
case 0x5e6e8c:c.instructions+=2;goto B5e6e8c;
case 0x5e6e8d:c.instructions+=1;goto B5e6e8d;
case 0x5e6e92:goto L5e6e92;
case 0x5e6e98:c.instructions+=4;goto B5e6e98;
case 0x5e6e9b:c.instructions+=3;goto B5e6e9b;
case 0x5e6e9d:c.instructions+=2;goto B5e6e9d;
case 0x5e6ea0:c.instructions+=1;goto B5e6ea0;
case 0x5e6ea6:goto L5e6ea6;
case 0x5e6ea8:c.instructions+=2;goto B5e6ea8;
case 0x5e6eaa:c.instructions+=1;goto B5e6eaa;
case 0x5e6eac:goto L5e6eac;
case 0x5e6eaf:c.instructions+=9;goto B5e6eaf;
case 0x5e6eb2:c.instructions+=8;goto B5e6eb2;
case 0x5e6eb5:c.instructions+=7;goto B5e6eb5;
case 0x5e6eb6:c.instructions+=6;goto B5e6eb6;
case 0x5e6eb7:c.instructions+=5;goto B5e6eb7;
case 0x5e6eb8:c.instructions+=4;goto B5e6eb8;
case 0x5e6eb9:c.instructions+=3;goto B5e6eb9;
case 0x5e6eba:c.instructions+=2;goto B5e6eba;
case 0x5e6ebb:c.instructions+=1;goto B5e6ebb;
case 0x5e6ec0:goto L5e6ec0;
case 0x5e6ec3:c.instructions+=7;goto B5e6ec3;
case 0x5e6ec5:c.instructions+=6;goto B5e6ec5;
case 0x5e6ec6:c.instructions+=5;goto B5e6ec6;
case 0x5e6ec7:c.instructions+=4;goto B5e6ec7;
case 0x5e6ec8:c.instructions+=3;goto B5e6ec8;
case 0x5e6eca:c.instructions+=2;goto B5e6eca;
case 0x5e6ecb:c.instructions+=1;goto B5e6ecb;
case 0x5e6ece:goto L5e6ece;
case 0x5e6ed4:c.instructions+=2;goto B5e6ed4;
case 0x5e6ed7:c.instructions+=1;goto B5e6ed7;
case 0x5e6ed9:goto L5e6ed9;
case 0x5e6edc:c.instructions+=1;goto B5e6edc;
case 0x5e6ede:goto L5e6ede;
case 0x5e6ee3:c.instructions+=1;goto B5e6ee3;
case 0x5e6ee5:goto L5e6ee5;
case 0x5e6ee7:goto L5e6ee7;
case 0x5e6eea:c.instructions+=2;goto B5e6eea;
case 0x5e6eed:c.instructions+=1;goto B5e6eed;
case 0x5e6eef:goto L5e6eef;
case 0x5e6ef2:c.instructions+=2;goto B5e6ef2;
case 0x5e6ef5:c.instructions+=1;goto B5e6ef5;
case 0x5e6ef7:goto L5e6ef7;
case 0x5e6efa:c.instructions+=5;goto B5e6efa;
case 0x5e6efb:c.instructions+=4;goto B5e6efb;
case 0x5e6efd:c.instructions+=3;goto B5e6efd;
case 0x5e6efe:c.instructions+=2;goto B5e6efe;
case 0x5e6eff:c.instructions+=1;goto B5e6eff;
case 0x5e6f04:goto L5e6f04;
case 0x5e6f06:c.instructions+=1;goto B5e6f06;
case 0x5e6f0c:goto L5e6f0c;
case 0x5e6f0e:c.instructions+=9;goto B5e6f0e;
case 0x5e6f12:c.instructions+=8;goto B5e6f12;
case 0x5e6f13:c.instructions+=7;goto B5e6f13;
case 0x5e6f19:c.instructions+=6;goto B5e6f19;
case 0x5e6f1c:c.instructions+=5;goto B5e6f1c;
case 0x5e6f20:c.instructions+=4;goto B5e6f20;
case 0x5e6f23:c.instructions+=3;goto B5e6f23;
case 0x5e6f24:c.instructions+=2;goto B5e6f24;
case 0x5e6f26:c.instructions+=1;goto B5e6f26;
case 0x5e6f2b:goto L5e6f2b;
case 0x5e6f31:c.instructions+=9;goto B5e6f31;
case 0x5e6f34:c.instructions+=8;goto B5e6f34;
case 0x5e6f39:c.instructions+=7;goto B5e6f39;
case 0x5e6f3c:c.instructions+=6;goto B5e6f3c;
case 0x5e6f3e:c.instructions+=5;goto B5e6f3e;
case 0x5e6f42:c.instructions+=4;goto B5e6f42;
case 0x5e6f46:c.instructions+=3;goto B5e6f46;
case 0x5e6f4c:c.instructions+=2;goto B5e6f4c;
case 0x5e6f50:c.instructions+=1;goto B5e6f50;
case 0x5e6f52:goto L5e6f52;
case 0x5e6f58:c.instructions+=1;goto B5e6f58;
case 0x5e6f5f:goto L5e6f5f;
case 0x5e6f63:c.instructions+=11;goto B5e6f63;
case 0x5e6f66:c.instructions+=10;goto B5e6f66;
case 0x5e6f67:c.instructions+=9;goto B5e6f67;
case 0x5e6f68:c.instructions+=8;goto B5e6f68;
case 0x5e6f6b:c.instructions+=7;goto B5e6f6b;
case 0x5e6f6f:c.instructions+=6;goto B5e6f6f;
case 0x5e6f70:c.instructions+=5;goto B5e6f70;
case 0x5e6f74:c.instructions+=4;goto B5e6f74;
case 0x5e6f75:c.instructions+=3;goto B5e6f75;
case 0x5e6f76:c.instructions+=2;goto B5e6f76;
case 0x5e6f77:c.instructions+=1;goto B5e6f77;
case 0x5e6f7c:goto L5e6f7c;
case 0x5e6f7f:c.instructions+=9;goto B5e6f7f;
case 0x5e6f82:c.instructions+=8;goto B5e6f82;
case 0x5e6f85:c.instructions+=7;goto B5e6f85;
case 0x5e6f86:c.instructions+=6;goto B5e6f86;
case 0x5e6f88:c.instructions+=5;goto B5e6f88;
case 0x5e6f89:c.instructions+=4;goto B5e6f89;
case 0x5e6f8b:c.instructions+=3;goto B5e6f8b;
case 0x5e6f8c:c.instructions+=2;goto B5e6f8c;
case 0x5e6f8e:c.instructions+=1;goto B5e6f8e;
case 0x5e6f93:goto L5e6f93;
case 0x5e6f95:goto L5e6f95;
case 0x5e6f96:c.instructions+=5;goto B5e6f96;
case 0x5e6f97:c.instructions+=4;goto B5e6f97;
case 0x5e6f98:c.instructions+=3;goto B5e6f98;
case 0x5e6f9a:c.instructions+=2;goto B5e6f9a;
case 0x5e6f9b:c.instructions+=1;goto B5e6f9b;
case 0x5e6fa0:goto L5e6fa0;
case 0x5e6fa3:c.instructions+=9;goto B5e6fa3;
case 0x5e6fa4:c.instructions+=8;goto B5e6fa4;
case 0x5e6fa8:c.instructions+=7;goto B5e6fa8;
case 0x5e6fa9:c.instructions+=6;goto B5e6fa9;
case 0x5e6faa:c.instructions+=5;goto B5e6faa;
case 0x5e6fab:c.instructions+=4;goto B5e6fab;
case 0x5e6fad:c.instructions+=3;goto B5e6fad;
case 0x5e6fae:c.instructions+=2;goto B5e6fae;
case 0x5e6fb0:c.instructions+=1;goto B5e6fb0;
case 0x5e6fb5:goto L5e6fb5;
case 0x5e6fb8:c.instructions+=4;goto B5e6fb8;
case 0x5e6fbb:c.instructions+=3;goto B5e6fbb;
case 0x5e6fbc:c.instructions+=2;goto B5e6fbc;
case 0x5e6fbd:c.instructions+=1;goto B5e6fbd;
case 0x5e6fc2:goto L5e6fc2;
case 0x5e6fc6:c.instructions+=5;goto B5e6fc6;
case 0x5e6fc7:c.instructions+=4;goto B5e6fc7;
case 0x5e6fc8:c.instructions+=3;goto B5e6fc8;
case 0x5e6fc9:c.instructions+=2;goto B5e6fc9;
case 0x5e6fca:c.instructions+=1;goto B5e6fca;
case 0x5e6fcf:goto L5e6fcf;
case 0x5e6fd2:c.instructions+=8;goto B5e6fd2;
case 0x5e6fd3:c.instructions+=7;goto B5e6fd3;
case 0x5e6fd6:c.instructions+=6;goto B5e6fd6;
case 0x5e6fd7:c.instructions+=5;goto B5e6fd7;
case 0x5e6fda:c.instructions+=4;goto B5e6fda;
case 0x5e6fdd:c.instructions+=3;goto B5e6fdd;
case 0x5e6fde:c.instructions+=2;goto B5e6fde;
case 0x5e6fdf:c.instructions+=1;goto B5e6fdf;
case 0x5e6fe4:goto L5e6fe4;
case 0x5e6fe7:c.instructions+=2;goto B5e6fe7;
case 0x5e6fe9:c.instructions+=1;goto B5e6fe9;
case 0x5e6fef:goto L5e6fef;
case 0x5e6ff3:c.instructions+=2;goto B5e6ff3;
case 0x5e6ff5:c.instructions+=1;goto B5e6ff5;
case 0x5e6ffb:goto L5e6ffb;
case 0x5e6fff:c.instructions+=1;goto B5e6fff;
default:missing_instruction(c.pc);}
B5e6004:L5e6004:{c.instructions+=1;NFSU2_TR(0x5e6004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6009ull));
TAIL_STATIC(0x5ded90u,5de);
}
B5e6009:L5e6009:{c.instructions+=11;NFSU2_TR(0x5e6009);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5e600d:{NFSU2_TR(0x5e600d);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6014:{NFSU2_TR(0x5e6014);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6017:{NFSU2_TR(0x5e6017);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6019:{NFSU2_TR(0x5e6019);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e601a:{NFSU2_TR(0x5e601a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e601e:{NFSU2_TR(0x5e601e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e601f:{NFSU2_TR(0x5e601f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e6023:{NFSU2_TR(0x5e6023);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6024:{NFSU2_TR(0x5e6024);
__builtin_memmove((R+4),(R+20),4);
}
B5e6026:{NFSU2_TR(0x5e6026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e602bull));
TAIL_STATIC(0x5d53d0u,5d5);
}
B5e602b:L5e602b:{c.instructions+=2;NFSU2_TR(0x5e602b);
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
B5e602d:{NFSU2_TR(0x5e602d);
if(r1(R+518)){{goto L5e60fa;}}
}
B5e6033:L5e6033:{c.instructions+=9;NFSU2_TR(0x5e6033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6036:{NFSU2_TR(0x5e6036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e603c:{NFSU2_TR(0x5e603c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6040:{NFSU2_TR(0x5e6040);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e6043:{NFSU2_TR(0x5e6043);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e6046:{NFSU2_TR(0x5e6046);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e604a:{NFSU2_TR(0x5e604a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e604c:{NFSU2_TR(0x5e604c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e604e:{NFSU2_TR(0x5e604e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e6096;}}
}
B5e6050:L5e6050:{c.instructions+=3;NFSU2_TR(0x5e6050);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6053:{NFSU2_TR(0x5e6053);
u8 U[16];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5e6057:{NFSU2_TR(0x5e6057);
if(r1(R+518)){{goto L5e6096;}}
}
B5e6059:L5e6059:{c.instructions+=2;NFSU2_TR(0x5e6059);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e6063:{NFSU2_TR(0x5e6063);
if(r1(R+518)){{goto L5e6096;}}
}
B5e6065:L5e6065:{c.instructions+=10;NFSU2_TR(0x5e6065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e606b:{NFSU2_TR(0x5e606b);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e6072:{NFSU2_TR(0x5e6072);
u8 U[13];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5e607a:{NFSU2_TR(0x5e607a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e6080:{NFSU2_TR(0x5e6080);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5e6087:{NFSU2_TR(0x5e6087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e608d:{NFSU2_TR(0x5e608d);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6091:{NFSU2_TR(0x5e6091);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e6092:{NFSU2_TR(0x5e6092);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6094:{NFSU2_TR(0x5e6094);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6050u);}goto L5e6050;}}
}
B5e6096:L5e6096:{c.instructions+=13;NFSU2_TR(0x5e6096);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5e609a:{NFSU2_TR(0x5e609a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e60a0:{NFSU2_TR(0x5e60a0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5e60a2:{NFSU2_TR(0x5e60a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e60a6:{NFSU2_TR(0x5e60a6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60ab:{NFSU2_TR(0x5e60ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e60af:{NFSU2_TR(0x5e60af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60b1:{NFSU2_TR(0x5e60b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e60b4:{NFSU2_TR(0x5e60b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5e60b8:{NFSU2_TR(0x5e60b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60b9:{NFSU2_TR(0x5e60b9);
__builtin_memmove((R+4),(R+20),4);
}
B5e60bb:{NFSU2_TR(0x5e60bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e60be:{NFSU2_TR(0x5e60be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e60c3ull));
TAIL_STATIC(0x5e48b0u,5e4);
}
B5e60c3:L5e60c3:{c.instructions+=17;NFSU2_TR(0x5e60c3);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e60c7:{NFSU2_TR(0x5e60c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e60cb:{NFSU2_TR(0x5e60cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e60cf:{NFSU2_TR(0x5e60cf);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e60d2:{NFSU2_TR(0x5e60d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e60d5:{NFSU2_TR(0x5e60d5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e60d9:{NFSU2_TR(0x5e60d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e60dc:{NFSU2_TR(0x5e60dc);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e60e0:{NFSU2_TR(0x5e60e0);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B5e60e2:{NFSU2_TR(0x5e60e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e60e6:{NFSU2_TR(0x5e60e6);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e60e9:{NFSU2_TR(0x5e60e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e60ed:{NFSU2_TR(0x5e60ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60ee:{NFSU2_TR(0x5e60ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60f0:{NFSU2_TR(0x5e60f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e60f1:{NFSU2_TR(0x5e60f1);
__builtin_memmove((R+4),(R+20),4);
}
B5e60f3:{NFSU2_TR(0x5e60f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e60f8ull));
TAIL_STATIC(0x5e48b0u,5e4);
}
B5e60f8:L5e60f8:{c.instructions+=1;NFSU2_TR(0x5e60f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e60fa:L5e60fa:{c.instructions+=2;NFSU2_TR(0x5e60fa);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6101:{NFSU2_TR(0x5e6101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6106ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e6106:L5e6106:{c.instructions+=6;NFSU2_TR(0x5e6106);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e610a:{NFSU2_TR(0x5e610a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e610e:{NFSU2_TR(0x5e610e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e610f:{NFSU2_TR(0x5e610f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6112:{NFSU2_TR(0x5e6112);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6116:{NFSU2_TR(0x5e6116);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e5f90u,5e5);}
}
B5e611c:L5e611c:{c.instructions+=6;NFSU2_TR(0x5e611c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6120:{NFSU2_TR(0x5e6120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6122:{NFSU2_TR(0x5e6122);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e6123:{NFSU2_TR(0x5e6123);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6125:{NFSU2_TR(0x5e6125);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6129:{NFSU2_TR(0x5e6129);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e5f5fu,5e5);}
}
B5e612f:L5e612f:{c.instructions+=9;NFSU2_TR(0x5e612f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6133:{NFSU2_TR(0x5e6133);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6137:{NFSU2_TR(0x5e6137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e613a:{NFSU2_TR(0x5e613a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e613b:{NFSU2_TR(0x5e613b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B5e613e:{NFSU2_TR(0x5e613e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6140:{NFSU2_TR(0x5e6140);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6144:{NFSU2_TR(0x5e6144);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6148:{NFSU2_TR(0x5e6148);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e5f38u,5e5);}
}
B5e614e:L5e614e:{c.instructions+=7;NFSU2_TR(0x5e614e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e614f:{NFSU2_TR(0x5e614f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6150:{NFSU2_TR(0x5e6150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6151:{NFSU2_TR(0x5e6151);
w1(R+0,u8(0x1ull));
}
B5e6153:{NFSU2_TR(0x5e6153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6154:{NFSU2_TR(0x5e6154);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e615a:{NFSU2_TR(0x5e615a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6160:L5e6160:{c.instructions+=5;NFSU2_TR(0x5e6160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6161:{NFSU2_TR(0x5e6161);
__builtin_memmove((R+24),(R+4),4);
}
B5e6163:{NFSU2_TR(0x5e6163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6169:{NFSU2_TR(0x5e6169);
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
B5e616b:{NFSU2_TR(0x5e616b);
if(r1(R+518)){{goto L5e61b6;}}
}
B5e616d:L5e616d:{c.instructions+=4;NFSU2_TR(0x5e616d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e616e:{NFSU2_TR(0x5e616e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6174:{NFSU2_TR(0x5e6174);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6176:{NFSU2_TR(0x5e6176);
if(r1(R+518)){{goto L5e6188;}}
}
B5e6178:L5e6178:{c.instructions+=2;NFSU2_TR(0x5e6178);
__builtin_memmove((R+4),(R+28),4);
}
B5e617a:{NFSU2_TR(0x5e617a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e617full));
TAIL_STATIC(0x5e4d70u,5e4);
}
B5e617f:L5e617f:{c.instructions+=2;NFSU2_TR(0x5e617f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6180:{NFSU2_TR(0x5e6180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6185ull));
TAIL_STATIC(0x575630u,575);
}
B5e6185:L5e6185:{c.instructions+=1;NFSU2_TR(0x5e6185);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6188:L5e6188:{c.instructions+=4;NFSU2_TR(0x5e6188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e618e:{NFSU2_TR(0x5e618e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e618f:{NFSU2_TR(0x5e618f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6199:{NFSU2_TR(0x5e6199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e619eull));
TAIL_STATIC(0x440540u,440);
}
B5e619e:L5e619e:{c.instructions+=4;NFSU2_TR(0x5e619e);
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
B5e61a1:{NFSU2_TR(0x5e61a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e61ab:{NFSU2_TR(0x5e61ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e61b5:{NFSU2_TR(0x5e61b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e61b6:L5e61b6:{c.instructions+=2;NFSU2_TR(0x5e61b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e61b7:{NFSU2_TR(0x5e61b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e61c0:L5e61c0:{c.instructions+=8;NFSU2_TR(0x5e61c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e61c4:{NFSU2_TR(0x5e61c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e61c5:{NFSU2_TR(0x5e61c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e61c8:{NFSU2_TR(0x5e61c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e61c9:{NFSU2_TR(0x5e61c9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e61cb:{NFSU2_TR(0x5e61cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e61cd:{NFSU2_TR(0x5e61cd);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e61cf:{NFSU2_TR(0x5e61cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e61ee;}}
}
B5e61d1:L5e61d1:{c.instructions+=1;NFSU2_TR(0x5e61d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e61d2:L5e61d2:{c.instructions+=3;NFSU2_TR(0x5e61d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e61d4:{NFSU2_TR(0x5e61d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5e61d8:{NFSU2_TR(0x5e61d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e61dd;}}
}
B5e61da:L5e61da:{c.instructions+=1;NFSU2_TR(0x5e61da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e61dd:L5e61dd:{c.instructions+=5;NFSU2_TR(0x5e61dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e61e4:{NFSU2_TR(0x5e61e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B5e61e8:{NFSU2_TR(0x5e61e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e61e9:{NFSU2_TR(0x5e61e9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e61eb:{NFSU2_TR(0x5e61eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e61d2u);}goto L5e61d2;}}
}
B5e61ed:L5e61ed:{c.instructions+=1;NFSU2_TR(0x5e61ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e61ee:L5e61ee:{c.instructions+=13;NFSU2_TR(0x5e61ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e61f1:{NFSU2_TR(0x5e61f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e61f2:{NFSU2_TR(0x5e61f2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5e61f3:{NFSU2_TR(0x5e61f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e61f6:{NFSU2_TR(0x5e61f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e61f9:{NFSU2_TR(0x5e61f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e61fb:{NFSU2_TR(0x5e61fb);
u8 U[4];
w4(U+0,u32(0x5e4f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6200:{NFSU2_TR(0x5e6200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6201:{NFSU2_TR(0x5e6201);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6202:{NFSU2_TR(0x5e6202);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B5e6205:{NFSU2_TR(0x5e6205);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6206:{NFSU2_TR(0x5e6206);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6207:{NFSU2_TR(0x5e6207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e620cull));
TAIL_STATIC(0x57b4a0u,57b);
}
B5e620c:L5e620c:{c.instructions+=4;NFSU2_TR(0x5e620c);
u8 U[4];
w4(U+0,u32(0x2000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6211:{NFSU2_TR(0x5e6211);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6213:{NFSU2_TR(0x5e6213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6214:{NFSU2_TR(0x5e6214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6219ull));
TAIL_STATIC(0x579810u,579);
}
B5e6219:L5e6219:{c.instructions+=4;NFSU2_TR(0x5e6219);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e621c:{NFSU2_TR(0x5e621c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e621d:{NFSU2_TR(0x5e621d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e621e:{NFSU2_TR(0x5e621e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6230:L5e6230:{c.instructions+=6;NFSU2_TR(0x5e6230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e6233:{NFSU2_TR(0x5e6233);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6234:{NFSU2_TR(0x5e6234);
__builtin_memmove((R+28),(R+4),4);
}
B5e6236:{NFSU2_TR(0x5e6236);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e623a:{NFSU2_TR(0x5e623a);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e623f:{NFSU2_TR(0x5e623f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e6357;}}
}
B5e6245:L5e6245:{c.instructions+=5;NFSU2_TR(0x5e6245);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6246:{NFSU2_TR(0x5e6246);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6247:{NFSU2_TR(0x5e6247);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6248:{NFSU2_TR(0x5e6248);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e624a:{NFSU2_TR(0x5e624a);
__builtin_memmove((R+12),(R+12),4);
}
B5e6250:L5e6250:{c.instructions+=2;NFSU2_TR(0x5e6250);
u8 U[7];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5e6254:{NFSU2_TR(0x5e6254);
if(r1(R+518)){{goto L5e6354;}}
}
B5e625a:L5e625a:{c.instructions+=6;NFSU2_TR(0x5e625a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6260:{NFSU2_TR(0x5e6260);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e6262:{NFSU2_TR(0x5e6262);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6264:{NFSU2_TR(0x5e6264);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e626c:{NFSU2_TR(0x5e626c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6270:{NFSU2_TR(0x5e6270);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e62f7;}}
}
B5e6276:L5e6276:{c.instructions+=2;NFSU2_TR(0x5e6276);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x29cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e627c:{NFSU2_TR(0x5e627c);
__builtin_memmove((R+16),(R+16),4);
}
B5e6280:L5e6280:{c.instructions+=4;NFSU2_TR(0x5e6280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6283:{NFSU2_TR(0x5e6283);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6286:{NFSU2_TR(0x5e6286);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6289:{NFSU2_TR(0x5e6289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e62a6;}}
}
B5e628b:L5e628b:{c.instructions+=4;NFSU2_TR(0x5e628b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e628e:{NFSU2_TR(0x5e628e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6290:{NFSU2_TR(0x5e6290);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6293:{NFSU2_TR(0x5e6293);
if(r1(R+518)){{goto L5e6298;}}
}
B5e6295:L5e6295:{c.instructions+=1;NFSU2_TR(0x5e6295);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5e6298:L5e6298:{c.instructions+=2;NFSU2_TR(0x5e6298);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e629c:{NFSU2_TR(0x5e629c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e62db;}}
}
B5e629e:L5e629e:{c.instructions+=3;NFSU2_TR(0x5e629e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e62a2:{NFSU2_TR(0x5e62a2);
__builtin_memmove((R+24),(R+4),4);
}
B5e62a4:{NFSU2_TR(0x5e62a4);
{goto L5e62db;}
}
B5e62a6:L5e62a6:{c.instructions+=2;NFSU2_TR(0x5e62a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e62a9:{NFSU2_TR(0x5e62a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e62db;}}
}
B5e62ab:L5e62ab:{c.instructions+=7;NFSU2_TR(0x5e62ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e62af:{NFSU2_TR(0x5e62af);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e62b0:{NFSU2_TR(0x5e62b0);
w4(R+12,u32(0x64ull));
}
B5e62b5:{NFSU2_TR(0x5e62b5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e62b5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e62b5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e62b7:{NFSU2_TR(0x5e62b7);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5e62b9:{NFSU2_TR(0x5e62b9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e62bb:{NFSU2_TR(0x5e62bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e62d0;}}
}
B5e62bd:L5e62bd:{c.instructions+=2;NFSU2_TR(0x5e62bd);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e62bf:{NFSU2_TR(0x5e62bf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e62d0;}}
}
B5e62c1:L5e62c1:{c.instructions+=3;NFSU2_TR(0x5e62c1);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5e62c6:{NFSU2_TR(0x5e62c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e62c8:{NFSU2_TR(0x5e62c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e62d0;}}
}
B5e62ca:L5e62ca:{c.instructions+=3;NFSU2_TR(0x5e62ca);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5e62cc:{NFSU2_TR(0x5e62cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e62ce:{NFSU2_TR(0x5e62ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e62db;}}
}
B5e62d0:L5e62d0:{c.instructions+=3;NFSU2_TR(0x5e62d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e62d1:{NFSU2_TR(0x5e62d1);
w4(R+4,u32(0x88eb00ull));
}
B5e62d6:{NFSU2_TR(0x5e62d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e62dbull));
TAIL_STATIC(0x5daa40u,5da);
}
B5e62db:L5e62db:{c.instructions+=7;NFSU2_TR(0x5e62db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e62df:{NFSU2_TR(0x5e62df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e62e5:{NFSU2_TR(0x5e62e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e62e6:{NFSU2_TR(0x5e62e6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5e62e9:{NFSU2_TR(0x5e62e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e62eb:{NFSU2_TR(0x5e62eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e62ef:{NFSU2_TR(0x5e62ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6280u);}goto L5e6280;}}
}
B5e62f1:L5e62f1:{c.instructions+=3;NFSU2_TR(0x5e62f1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e62f3:{NFSU2_TR(0x5e62f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e62f5:{NFSU2_TR(0x5e62f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e62fd;}}
}
B5e62f7:L5e62f7:{c.instructions+=2;NFSU2_TR(0x5e62f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e62fb:{NFSU2_TR(0x5e62fb);
{goto L5e634a;}
}
B5e62fd:L5e62fd:{c.instructions+=3;NFSU2_TR(0x5e62fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6300:{NFSU2_TR(0x5e6300);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6302:{NFSU2_TR(0x5e6302);
if(r1(R+518)){{goto L5e630e;}}
}
B5e6304:L5e6304:{c.instructions+=3;NFSU2_TR(0x5e6304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6305:{NFSU2_TR(0x5e6305);
__builtin_memmove((R+4),(R+28),4);
}
B5e6307:{NFSU2_TR(0x5e6307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e630cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e61c0u);}goto L5e61c0;}
}
B5e630c:L5e630c:{c.instructions+=1;NFSU2_TR(0x5e630c);
{goto L5e634a;}
}
B5e630e:L5e630e:{c.instructions+=15;NFSU2_TR(0x5e630e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6311:{NFSU2_TR(0x5e6311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6314:{NFSU2_TR(0x5e6314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6317:{NFSU2_TR(0x5e6317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e631a:{NFSU2_TR(0x5e631a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e631b:{NFSU2_TR(0x5e631b);
u8 U[4];
w4(U+0,u32(0x5df110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6320:{NFSU2_TR(0x5e6320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6321:{NFSU2_TR(0x5e6321);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6322:{NFSU2_TR(0x5e6322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6325:{NFSU2_TR(0x5e6325);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e6328:{NFSU2_TR(0x5e6328);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e632c:{NFSU2_TR(0x5e632c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e632d:{NFSU2_TR(0x5e632d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e632e:{NFSU2_TR(0x5e632e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6335:{NFSU2_TR(0x5e6335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e633aull));
TAIL_STATIC(0x57b4a0u,57b);
}
B5e633a:L5e633a:{c.instructions+=4;NFSU2_TR(0x5e633a);
u8 U[4];
w4(U+0,u32(0x2000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e633f:{NFSU2_TR(0x5e633f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6341:{NFSU2_TR(0x5e6341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6342:{NFSU2_TR(0x5e6342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6347ull));
TAIL_STATIC(0x579810u,579);
}
B5e6347:L5e6347:{c.instructions+=1;NFSU2_TR(0x5e6347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5e634a:L5e634a:{c.instructions+=2;NFSU2_TR(0x5e634a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e634e:{NFSU2_TR(0x5e634e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6250u);}goto L5e6250;}}
}
B5e6354:L5e6354:{c.instructions+=3;NFSU2_TR(0x5e6354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6355:{NFSU2_TR(0x5e6355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6356:{NFSU2_TR(0x5e6356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6357:L5e6357:{c.instructions+=3;NFSU2_TR(0x5e6357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6358:{NFSU2_TR(0x5e6358);
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
B5e635b:{NFSU2_TR(0x5e635b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6360:L5e6360:{c.instructions+=39;NFSU2_TR(0x5e6360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6361:{NFSU2_TR(0x5e6361);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6362:{NFSU2_TR(0x5e6362);
__builtin_memmove((R+24),(R+4),4);
}
B5e6364:{NFSU2_TR(0x5e6364);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e6366:{NFSU2_TR(0x5e6366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6369:{NFSU2_TR(0x5e6369);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e636c:{NFSU2_TR(0x5e636c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e636e:{NFSU2_TR(0x5e636e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6371:{NFSU2_TR(0x5e6371);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6374:{NFSU2_TR(0x5e6374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6376:{NFSU2_TR(0x5e6376);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6379:{NFSU2_TR(0x5e6379);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e637c:{NFSU2_TR(0x5e637c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e637e:{NFSU2_TR(0x5e637e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6381:{NFSU2_TR(0x5e6381);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6384:{NFSU2_TR(0x5e6384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6386:{NFSU2_TR(0x5e6386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6389:{NFSU2_TR(0x5e6389);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e638c:{NFSU2_TR(0x5e638c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e638e:{NFSU2_TR(0x5e638e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6391:{NFSU2_TR(0x5e6391);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6394:{NFSU2_TR(0x5e6394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6396:{NFSU2_TR(0x5e6396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6399:{NFSU2_TR(0x5e6399);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e639c:{NFSU2_TR(0x5e639c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e639e:{NFSU2_TR(0x5e639e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63a1:{NFSU2_TR(0x5e63a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e63a4:{NFSU2_TR(0x5e63a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e63a6:{NFSU2_TR(0x5e63a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63a9:{NFSU2_TR(0x5e63a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e63ab:{NFSU2_TR(0x5e63ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6414ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e63b1:{NFSU2_TR(0x5e63b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e63b3:{NFSU2_TR(0x5e63b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63b6:{NFSU2_TR(0x5e63b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e63b7:{NFSU2_TR(0x5e63b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e63b9:{NFSU2_TR(0x5e63b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63bc:{NFSU2_TR(0x5e63bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63bf:{NFSU2_TR(0x5e63bf);
w4(R+4,u32(0xaf0ull));
}
B5e63c4:{NFSU2_TR(0x5e63c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e63c7:L5e63c7:{c.instructions+=1;NFSU2_TR(0x5e63c7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e63c9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e63c7u);}goto L5e63c7;}
}
B5e63c9:L5e63c9:{c.instructions+=4;NFSU2_TR(0x5e63c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63cf:{NFSU2_TR(0x5e63cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e63d5:{NFSU2_TR(0x5e63d5);
w4(R+12,u32(0x40ull));
}
B5e63da:{NFSU2_TR(0x5e63da);
__builtin_memmove((R+12),(R+12),4);
}
B5e63e0:L5e63e0:{c.instructions+=51;NFSU2_TR(0x5e63e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e63e3:{NFSU2_TR(0x5e63e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e63e6:{NFSU2_TR(0x5e63e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e63e8:{NFSU2_TR(0x5e63e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63eb:{NFSU2_TR(0x5e63eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e63ed:{NFSU2_TR(0x5e63ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63f0:{NFSU2_TR(0x5e63f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e63f3:{NFSU2_TR(0x5e63f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e63f6:{NFSU2_TR(0x5e63f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e63f8:{NFSU2_TR(0x5e63f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e63fb:{NFSU2_TR(0x5e63fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e63fd:{NFSU2_TR(0x5e63fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e63ff:{NFSU2_TR(0x5e63ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6402:{NFSU2_TR(0x5e6402);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6405:{NFSU2_TR(0x5e6405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6407:{NFSU2_TR(0x5e6407);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e640a:{NFSU2_TR(0x5e640a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e640c:{NFSU2_TR(0x5e640c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e640f:{NFSU2_TR(0x5e640f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6412:{NFSU2_TR(0x5e6412);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6415:{NFSU2_TR(0x5e6415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6417:{NFSU2_TR(0x5e6417);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e641a:{NFSU2_TR(0x5e641a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e641c:{NFSU2_TR(0x5e641c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e641f:{NFSU2_TR(0x5e641f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6422:{NFSU2_TR(0x5e6422);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6425:{NFSU2_TR(0x5e6425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6427:{NFSU2_TR(0x5e6427);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e642a:{NFSU2_TR(0x5e642a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e642c:{NFSU2_TR(0x5e642c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e642f:{NFSU2_TR(0x5e642f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6432:{NFSU2_TR(0x5e6432);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6435:{NFSU2_TR(0x5e6435);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6437:{NFSU2_TR(0x5e6437);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e643a:{NFSU2_TR(0x5e643a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e643c:{NFSU2_TR(0x5e643c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e643f:{NFSU2_TR(0x5e643f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6442:{NFSU2_TR(0x5e6442);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6448:{NFSU2_TR(0x5e6448);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e644a:{NFSU2_TR(0x5e644a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e644d:{NFSU2_TR(0x5e644d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6453:{NFSU2_TR(0x5e6453);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e6455:{NFSU2_TR(0x5e6455);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6458:{NFSU2_TR(0x5e6458);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e645e:{NFSU2_TR(0x5e645e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6460:{NFSU2_TR(0x5e6460);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6463:{NFSU2_TR(0x5e6463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6469:{NFSU2_TR(0x5e6469);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
}
B5e646e:{NFSU2_TR(0x5e646e);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5e646f:{NFSU2_TR(0x5e646f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e6471:{NFSU2_TR(0x5e6471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e63e0u);}goto L5e63e0;}}
}
B5e6477:L5e6477:{c.instructions+=3;NFSU2_TR(0x5e6477);
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
B5e6479:{NFSU2_TR(0x5e6479);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x641cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e647f:{NFSU2_TR(0x5e647f);
w4(R+4,u32(0x8ull));
}
B5e6484:L5e6484:{c.instructions+=1;NFSU2_TR(0x5e6484);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e6486;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6484u);}goto L5e6484;}
}
B5e6486:L5e6486:{c.instructions+=5;NFSU2_TR(0x5e6486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6487:{NFSU2_TR(0x5e6487);
__builtin_memmove((R+0),(R+24),4);
}
B5e6489:{NFSU2_TR(0x5e6489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e648a:{NFSU2_TR(0x5e648a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e648b:{NFSU2_TR(0x5e648b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6490:L5e6490:{c.instructions+=17;NFSU2_TR(0x5e6490);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6492:{NFSU2_TR(0x5e6492);
u8 U[4];
w4(U+0,u32(0x779600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6497:{NFSU2_TR(0x5e6497);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e649d:{NFSU2_TR(0x5e649d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e649e:{NFSU2_TR(0x5e649e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e64a5:{NFSU2_TR(0x5e64a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e64a6:{NFSU2_TR(0x5e64a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e64a7:{NFSU2_TR(0x5e64a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e64a8:{NFSU2_TR(0x5e64a8);
__builtin_memmove((R+28),(R+4),4);
}
B5e64aa:{NFSU2_TR(0x5e64aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e64ae:{NFSU2_TR(0x5e64ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6414ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e64b4:{NFSU2_TR(0x5e64b4);
__builtin_memmove((R+0),(R+24),4);
}
B5e64b6:{NFSU2_TR(0x5e64b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e64b8:{NFSU2_TR(0x5e64b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e64c0:{NFSU2_TR(0x5e64c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e64c2:{NFSU2_TR(0x5e64c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e64c5:{NFSU2_TR(0x5e64c5);
if(r1(R+518)){{goto L5e64e0;}}
}
B5e64c7:L5e64c7:{c.instructions+=6;NFSU2_TR(0x5e64c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e64c9:{NFSU2_TR(0x5e64c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e64cc:{NFSU2_TR(0x5e64cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e64ce:{NFSU2_TR(0x5e64ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e64cf:{NFSU2_TR(0x5e64cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e64d2:{NFSU2_TR(0x5e64d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e64d7ull));
TAIL_STATIC(0x575630u,575);
}
B5e64d7:L5e64d7:{c.instructions+=4;NFSU2_TR(0x5e64d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e64d9:{NFSU2_TR(0x5e64d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e64dc:{NFSU2_TR(0x5e64dc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e64de:{NFSU2_TR(0x5e64de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e64c7u);}goto L5e64c7;}}
}
B5e64e0:L5e64e0:{c.instructions+=5;NFSU2_TR(0x5e64e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e64e3:{NFSU2_TR(0x5e64e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e64e6:{NFSU2_TR(0x5e64e6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e64e8:{NFSU2_TR(0x5e64e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e64ed:{NFSU2_TR(0x5e64ed);
if(r1(R+518)){{goto L5e6509;}}
}
B5e64ef:L5e64ef:{c.instructions+=1;NFSU2_TR(0x5e64ef);
}
B5e64f0:L5e64f0:{c.instructions+=6;NFSU2_TR(0x5e64f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e64f2:{NFSU2_TR(0x5e64f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e64f5:{NFSU2_TR(0x5e64f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e64f7:{NFSU2_TR(0x5e64f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e64f8:{NFSU2_TR(0x5e64f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e64fb:{NFSU2_TR(0x5e64fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6500ull));
TAIL_STATIC(0x575630u,575);
}
B5e6500:L5e6500:{c.instructions+=4;NFSU2_TR(0x5e6500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6502:{NFSU2_TR(0x5e6502);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6505:{NFSU2_TR(0x5e6505);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6507:{NFSU2_TR(0x5e6507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e64f0u);}goto L5e64f0;}}
}
B5e6509:L5e6509:{c.instructions+=5;NFSU2_TR(0x5e6509);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e650c:{NFSU2_TR(0x5e650c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e650f:{NFSU2_TR(0x5e650f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6511:{NFSU2_TR(0x5e6511);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e6516:{NFSU2_TR(0x5e6516);
if(r1(R+518)){{goto L5e6531;}}
}
B5e6518:L5e6518:{c.instructions+=6;NFSU2_TR(0x5e6518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e651a:{NFSU2_TR(0x5e651a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e651d:{NFSU2_TR(0x5e651d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e651f:{NFSU2_TR(0x5e651f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6520:{NFSU2_TR(0x5e6520);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6523:{NFSU2_TR(0x5e6523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6528ull));
TAIL_STATIC(0x575630u,575);
}
B5e6528:L5e6528:{c.instructions+=4;NFSU2_TR(0x5e6528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e652a:{NFSU2_TR(0x5e652a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e652d:{NFSU2_TR(0x5e652d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e652f:{NFSU2_TR(0x5e652f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6518u);}goto L5e6518;}}
}
B5e6531:L5e6531:{c.instructions+=5;NFSU2_TR(0x5e6531);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6534:{NFSU2_TR(0x5e6534);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6537:{NFSU2_TR(0x5e6537);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6539:{NFSU2_TR(0x5e6539);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e653e:{NFSU2_TR(0x5e653e);
if(r1(R+518)){{goto L5e6559;}}
}
B5e6540:L5e6540:{c.instructions+=6;NFSU2_TR(0x5e6540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6542:{NFSU2_TR(0x5e6542);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6545:{NFSU2_TR(0x5e6545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e6547:{NFSU2_TR(0x5e6547);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6548:{NFSU2_TR(0x5e6548);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e654b:{NFSU2_TR(0x5e654b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6550ull));
TAIL_STATIC(0x575630u,575);
}
B5e6550:L5e6550:{c.instructions+=4;NFSU2_TR(0x5e6550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6552:{NFSU2_TR(0x5e6552);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6555:{NFSU2_TR(0x5e6555);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6557:{NFSU2_TR(0x5e6557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6540u);}goto L5e6540;}}
}
B5e6559:L5e6559:{c.instructions+=5;NFSU2_TR(0x5e6559);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e655c:{NFSU2_TR(0x5e655c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e655f:{NFSU2_TR(0x5e655f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6561:{NFSU2_TR(0x5e6561);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e6566:{NFSU2_TR(0x5e6566);
if(r1(R+518)){{goto L5e6581;}}
}
B5e6568:L5e6568:{c.instructions+=6;NFSU2_TR(0x5e6568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e656a:{NFSU2_TR(0x5e656a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e656d:{NFSU2_TR(0x5e656d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e656f:{NFSU2_TR(0x5e656f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6570:{NFSU2_TR(0x5e6570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6573:{NFSU2_TR(0x5e6573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6578ull));
TAIL_STATIC(0x575630u,575);
}
B5e6578:L5e6578:{c.instructions+=4;NFSU2_TR(0x5e6578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e657a:{NFSU2_TR(0x5e657a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e657d:{NFSU2_TR(0x5e657d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e657f:{NFSU2_TR(0x5e657f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6568u);}goto L5e6568;}}
}
B5e6581:L5e6581:{c.instructions+=5;NFSU2_TR(0x5e6581);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6584:{NFSU2_TR(0x5e6584);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6587:{NFSU2_TR(0x5e6587);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6589:{NFSU2_TR(0x5e6589);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e658e:{NFSU2_TR(0x5e658e);
if(r1(R+518)){{goto L5e65a9;}}
}
B5e6590:L5e6590:{c.instructions+=6;NFSU2_TR(0x5e6590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6592:{NFSU2_TR(0x5e6592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6595:{NFSU2_TR(0x5e6595);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e6597:{NFSU2_TR(0x5e6597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6598:{NFSU2_TR(0x5e6598);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e659b:{NFSU2_TR(0x5e659b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e65a0ull));
TAIL_STATIC(0x575630u,575);
}
B5e65a0:L5e65a0:{c.instructions+=4;NFSU2_TR(0x5e65a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e65a2:{NFSU2_TR(0x5e65a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e65a5:{NFSU2_TR(0x5e65a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e65a7:{NFSU2_TR(0x5e65a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6590u);}goto L5e6590;}}
}
B5e65a9:L5e65a9:{c.instructions+=5;NFSU2_TR(0x5e65a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e65ac:{NFSU2_TR(0x5e65ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e65af:{NFSU2_TR(0x5e65af);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e65b1:{NFSU2_TR(0x5e65b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e65b6:{NFSU2_TR(0x5e65b6);
if(r1(R+518)){{goto L5e65d1;}}
}
B5e65b8:L5e65b8:{c.instructions+=6;NFSU2_TR(0x5e65b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e65ba:{NFSU2_TR(0x5e65ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e65bd:{NFSU2_TR(0x5e65bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e65bf:{NFSU2_TR(0x5e65bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e65c0:{NFSU2_TR(0x5e65c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e65c3:{NFSU2_TR(0x5e65c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e65c8ull));
TAIL_STATIC(0x575630u,575);
}
B5e65c8:L5e65c8:{c.instructions+=4;NFSU2_TR(0x5e65c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e65ca:{NFSU2_TR(0x5e65ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e65cd:{NFSU2_TR(0x5e65cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e65cf:{NFSU2_TR(0x5e65cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e65b8u);}goto L5e65b8;}}
}
B5e65d1:L5e65d1:{c.instructions+=5;NFSU2_TR(0x5e65d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e65d4:{NFSU2_TR(0x5e65d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e65d7:{NFSU2_TR(0x5e65d7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e65d9:{NFSU2_TR(0x5e65d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e65de:{NFSU2_TR(0x5e65de);
if(r1(R+518)){{goto L5e65f9;}}
}
B5e65e0:L5e65e0:{c.instructions+=6;NFSU2_TR(0x5e65e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e65e2:{NFSU2_TR(0x5e65e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e65e5:{NFSU2_TR(0x5e65e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e65e7:{NFSU2_TR(0x5e65e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e65e8:{NFSU2_TR(0x5e65e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e65eb:{NFSU2_TR(0x5e65eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e65f0ull));
TAIL_STATIC(0x575630u,575);
}
B5e65f0:L5e65f0:{c.instructions+=4;NFSU2_TR(0x5e65f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e65f2:{NFSU2_TR(0x5e65f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e65f5:{NFSU2_TR(0x5e65f5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e65f7:{NFSU2_TR(0x5e65f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e65e0u);}goto L5e65e0;}}
}
B5e65f9:L5e65f9:{c.instructions+=5;NFSU2_TR(0x5e65f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e65fc:{NFSU2_TR(0x5e65fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e65ff:{NFSU2_TR(0x5e65ff);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6601:{NFSU2_TR(0x5e6601);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e6606:{NFSU2_TR(0x5e6606);
if(r1(R+518)){{goto L5e6621;}}
}
B5e6608:L5e6608:{c.instructions+=6;NFSU2_TR(0x5e6608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e660a:{NFSU2_TR(0x5e660a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e660d:{NFSU2_TR(0x5e660d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e660f:{NFSU2_TR(0x5e660f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6610:{NFSU2_TR(0x5e6610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6613:{NFSU2_TR(0x5e6613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6618ull));
TAIL_STATIC(0x575630u,575);
}
B5e6618:L5e6618:{c.instructions+=4;NFSU2_TR(0x5e6618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e661a:{NFSU2_TR(0x5e661a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e661d:{NFSU2_TR(0x5e661d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e661f:{NFSU2_TR(0x5e661f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6608u);}goto L5e6608;}}
}
B5e6621:L5e6621:{c.instructions+=4;NFSU2_TR(0x5e6621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6623:{NFSU2_TR(0x5e6623);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6625:{NFSU2_TR(0x5e6625);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e662d:{NFSU2_TR(0x5e662d);
if(r1(R+518)){{goto L5e6649;}}
}
B5e662f:L5e662f:{c.instructions+=1;NFSU2_TR(0x5e662f);
}
B5e6630:L5e6630:{c.instructions+=6;NFSU2_TR(0x5e6630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6632:{NFSU2_TR(0x5e6632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6635:{NFSU2_TR(0x5e6635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e6637:{NFSU2_TR(0x5e6637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6638:{NFSU2_TR(0x5e6638);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e663b:{NFSU2_TR(0x5e663b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6640ull));
TAIL_STATIC(0x575630u,575);
}
B5e6640:L5e6640:{c.instructions+=4;NFSU2_TR(0x5e6640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6642:{NFSU2_TR(0x5e6642);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6645:{NFSU2_TR(0x5e6645);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6647:{NFSU2_TR(0x5e6647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6630u);}goto L5e6630;}}
}
B5e6649:L5e6649:{c.instructions+=6;NFSU2_TR(0x5e6649);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e664d:{NFSU2_TR(0x5e664d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e664e:{NFSU2_TR(0x5e664e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e664f:{NFSU2_TR(0x5e664f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6656:{NFSU2_TR(0x5e6656);
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
B5e6659:{NFSU2_TR(0x5e6659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6660:L5e6660:{c.instructions+=6;NFSU2_TR(0x5e6660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6661:{NFSU2_TR(0x5e6661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6662:{NFSU2_TR(0x5e6662);
__builtin_memmove((R+28),(R+4),4);
}
B5e6664:{NFSU2_TR(0x5e6664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e6666:{NFSU2_TR(0x5e6666);
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
B5e6668:{NFSU2_TR(0x5e6668);
if(r1(R+518)){{goto L5e6690;}}
}
B5e666a:L5e666a:{c.instructions+=1;NFSU2_TR(0x5e666a);
__builtin_memmove((R+12),(R+12),4);
}
B5e6670:L5e6670:{c.instructions+=6;NFSU2_TR(0x5e6670);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6673:{NFSU2_TR(0x5e6673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6675:{NFSU2_TR(0x5e6675);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e6677:{NFSU2_TR(0x5e6677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e667a:{NFSU2_TR(0x5e667a);
__builtin_memmove((R+4),(R+24),4);
}
B5e667c:{NFSU2_TR(0x5e667c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6681ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5e6681:L5e6681:{c.instructions+=2;NFSU2_TR(0x5e6681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6682:{NFSU2_TR(0x5e6682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6687ull));
TAIL_STATIC(0x575630u,575);
}
B5e6687:L5e6687:{c.instructions+=4;NFSU2_TR(0x5e6687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e6689:{NFSU2_TR(0x5e6689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e668c:{NFSU2_TR(0x5e668c);
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
B5e668e:{NFSU2_TR(0x5e668e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6670u);}goto L5e6670;}}
}
B5e6690:L5e6690:{c.instructions+=3;NFSU2_TR(0x5e6690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6691:{NFSU2_TR(0x5e6691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6692:{NFSU2_TR(0x5e6692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e66a0:L5e66a0:{c.instructions+=6;NFSU2_TR(0x5e66a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e66a1:{NFSU2_TR(0x5e66a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e66a2:{NFSU2_TR(0x5e66a2);
__builtin_memmove((R+28),(R+4),4);
}
B5e66a4:{NFSU2_TR(0x5e66a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e66a6:{NFSU2_TR(0x5e66a6);
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
B5e66a8:{NFSU2_TR(0x5e66a8);
if(r1(R+518)){{goto L5e66d6;}}
}
B5e66aa:L5e66aa:{c.instructions+=1;NFSU2_TR(0x5e66aa);
__builtin_memmove((R+12),(R+12),4);
}
B5e66b0:L5e66b0:{c.instructions+=6;NFSU2_TR(0x5e66b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e66b3:{NFSU2_TR(0x5e66b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e66b5:{NFSU2_TR(0x5e66b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e66b7:{NFSU2_TR(0x5e66b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e66ba:{NFSU2_TR(0x5e66ba);
__builtin_memmove((R+4),(R+24),4);
}
B5e66bc:{NFSU2_TR(0x5e66bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e66c1ull));
TAIL_STATIC(0x5e0a70u,5e0);
}
B5e66c1:L5e66c1:{c.instructions+=4;NFSU2_TR(0x5e66c1);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5e66c6:{NFSU2_TR(0x5e66c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e66c7:{NFSU2_TR(0x5e66c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e66c8:{NFSU2_TR(0x5e66c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e66cdull));
TAIL_STATIC(0x43f920u,43f);
}
B5e66cd:L5e66cd:{c.instructions+=4;NFSU2_TR(0x5e66cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e66cf:{NFSU2_TR(0x5e66cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e66d2:{NFSU2_TR(0x5e66d2);
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
B5e66d4:{NFSU2_TR(0x5e66d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e66b0u);}goto L5e66b0;}}
}
B5e66d6:L5e66d6:{c.instructions+=3;NFSU2_TR(0x5e66d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e66d7:{NFSU2_TR(0x5e66d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e66d8:{NFSU2_TR(0x5e66d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e66e0:L5e66e0:{c.instructions+=3;NFSU2_TR(0x5e66e0);
__builtin_memmove((R+0),gp(0x88f1bc),4);
}
B5e66e5:{NFSU2_TR(0x5e66e5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88f1bcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88f1bcull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88f1bcull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e66ea:{NFSU2_TR(0x5e66ea);
if(r1(R+518)){{goto L5e671f;}}
}
B5e66ec:L5e66ec:{c.instructions+=2;NFSU2_TR(0x5e66ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e66ed:{NFSU2_TR(0x5e66ed);
__builtin_memmove((R+4),(R+4),4);
}
B5e66f0:L5e66f0:{c.instructions+=7;NFSU2_TR(0x5e66f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e66f2:{NFSU2_TR(0x5e66f2);
__builtin_memmove((R+24),(R+0),4);
}
B5e66f4:{NFSU2_TR(0x5e66f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e66f7:{NFSU2_TR(0x5e66f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e66f9:{NFSU2_TR(0x5e66f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e66fc:{NFSU2_TR(0x5e66fc);
__builtin_memmove((R+4),(R+24),4);
}
B5e66fe:{NFSU2_TR(0x5e66fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6703ull));
TAIL_STATIC(0x5e0a70u,5e0);
}
B5e6703:L5e6703:{c.instructions+=4;NFSU2_TR(0x5e6703);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5e6708:{NFSU2_TR(0x5e6708);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6709:{NFSU2_TR(0x5e6709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e670a:{NFSU2_TR(0x5e670a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e670full));
TAIL_STATIC(0x43f920u,43f);
}
B5e670f:L5e670f:{c.instructions+=4;NFSU2_TR(0x5e670f);
__builtin_memmove((R+0),gp(0x88f1bc),4);
}
B5e6714:{NFSU2_TR(0x5e6714);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e6717:{NFSU2_TR(0x5e6717);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88f1bcull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88f1bcull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88f1bcull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e671c:{NFSU2_TR(0x5e671c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e66f0u);}goto L5e66f0;}}
}
B5e671e:L5e671e:{c.instructions+=1;NFSU2_TR(0x5e671e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e671f:L5e671f:{c.instructions+=1;NFSU2_TR(0x5e671f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6720:L5e6720:{c.instructions+=3;NFSU2_TR(0x5e6720);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5e6725:{NFSU2_TR(0x5e6725);
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
B5e6727:{NFSU2_TR(0x5e6727);
if(r1(R+518)){{goto L5e6746;}}
}
B5e6729:L5e6729:{c.instructions+=1;NFSU2_TR(0x5e6729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e672eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e66e0u);}goto L5e66e0;}
}
B5e672e:L5e672e:{c.instructions+=3;NFSU2_TR(0x5e672e);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5e6733:{NFSU2_TR(0x5e6733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6734:{NFSU2_TR(0x5e6734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6739ull));
TAIL_STATIC(0x440e40u,440);
}
B5e6739:L5e6739:{c.instructions+=2;NFSU2_TR(0x5e6739);
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
B5e673c:{NFSU2_TR(0x5e673c);
s4(0x883d80,u32(0x0ull));
}
B5e6746:L5e6746:{c.instructions+=1;NFSU2_TR(0x5e6746);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6750:L5e6750:{c.instructions+=12;NFSU2_TR(0x5e6750);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6756:{NFSU2_TR(0x5e6756);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6758:{NFSU2_TR(0x5e6758);
u8 U[4];
w4(U+0,u32(0x77961bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e675d:{NFSU2_TR(0x5e675d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e675e:{NFSU2_TR(0x5e675e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6765:{NFSU2_TR(0x5e6765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6766:{NFSU2_TR(0x5e6766);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e676a:{NFSU2_TR(0x5e676a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e676c:{NFSU2_TR(0x5e676c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e676d:{NFSU2_TR(0x5e676d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e6773:{NFSU2_TR(0x5e6773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6774:{NFSU2_TR(0x5e6774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6779ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e6779:L5e6779:{c.instructions+=5;NFSU2_TR(0x5e6779);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e677c:{NFSU2_TR(0x5e677c);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e6782:{NFSU2_TR(0x5e6782);
__builtin_memmove((R+24),(R+0),4);
}
B5e6784:{NFSU2_TR(0x5e6784);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B5e6787:{NFSU2_TR(0x5e6787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e678cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e678c:L5e678c:{c.instructions+=8;NFSU2_TR(0x5e678c);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5e678f:{NFSU2_TR(0x5e678f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e6792:{NFSU2_TR(0x5e6792);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B5e6798:{NFSU2_TR(0x5e6798);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e679a:{NFSU2_TR(0x5e679a);
__builtin_memmove((R+24),gp(0x88f1bc),4);
}
B5e67a0:{NFSU2_TR(0x5e67a0);
w4(R+4,u32(0x88f1bcull));
}
B5e67a5:{NFSU2_TR(0x5e67a5);
__builtin_memmove((R+28),(R+0),4);
}
B5e67a7:{NFSU2_TR(0x5e67a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e67acull));
TAIL_STATIC(0x502fd0u,502);
}
B5e67ac:L5e67ac:{c.instructions+=2;NFSU2_TR(0x5e67ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e67ae:{NFSU2_TR(0x5e67ae);
if(r1(R+518)){{goto L5e67bb;}}
}
B5e67b0:L5e67b0:{c.instructions+=2;NFSU2_TR(0x5e67b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e67b3:{NFSU2_TR(0x5e67b3);
if(r1(R+518)){{goto L5e67bb;}}
}
B5e67b5:L5e67b5:{c.instructions+=3;NFSU2_TR(0x5e67b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e67b7:{NFSU2_TR(0x5e67b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e67b9:{NFSU2_TR(0x5e67b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e67b0u);}goto L5e67b0;}}
}
B5e67bb:L5e67bb:{c.instructions+=2;NFSU2_TR(0x5e67bb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x88f1bcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e67c1:{NFSU2_TR(0x5e67c1);
if(r1(R+518)){{goto L5e6800;}}
}
B5e67c3:L5e67c3:{c.instructions+=19;NFSU2_TR(0x5e67c3);
__builtin_memmove((R+0),gp(0x7fb71c),4);
}
B5e67c8:{NFSU2_TR(0x5e67c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e67cb:{NFSU2_TR(0x5e67cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e67ce:{NFSU2_TR(0x5e67ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e67d0:{NFSU2_TR(0x5e67d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e67d2:{NFSU2_TR(0x5e67d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e67d5:{NFSU2_TR(0x5e67d5);
__builtin_memmove((R+0),gp(0x88f1bc),4);
}
B5e67da:{NFSU2_TR(0x5e67da);
__builtin_memmove(gp(0x88f1bc),(R+24),4);
}
B5e67e0:{NFSU2_TR(0x5e67e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e67e3:{NFSU2_TR(0x5e67e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e67e5:{NFSU2_TR(0x5e67e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x88f1bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e67ec:{NFSU2_TR(0x5e67ec);
__builtin_memmove((R+0),(R+24),4);
}
B5e67ee:{NFSU2_TR(0x5e67ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e67f2:{NFSU2_TR(0x5e67f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e67f9:{NFSU2_TR(0x5e67f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e67fa:{NFSU2_TR(0x5e67fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e67fb:{NFSU2_TR(0x5e67fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e67fc:{NFSU2_TR(0x5e67fc);
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
B5e67ff:{NFSU2_TR(0x5e67ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6800:L5e6800:{c.instructions+=3;NFSU2_TR(0x5e6800);
__builtin_memmove((R+4),gp(0x883d80),4);
}
B5e6806:{NFSU2_TR(0x5e6806);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6807:{NFSU2_TR(0x5e6807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e680cull));
TAIL_STATIC(0x43cd10u,43c);
}
B5e680c:L5e680c:{c.instructions+=3;NFSU2_TR(0x5e680c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e680f:{NFSU2_TR(0x5e680f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6811:{NFSU2_TR(0x5e6811);
if(r1(R+518)){{goto L5e683b;}}
}
B5e6813:L5e6813:{c.instructions+=8;NFSU2_TR(0x5e6813);
__builtin_memmove((R+0),gp(0x88f1c0),4);
}
B5e6818:{NFSU2_TR(0x5e6818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e681a:{NFSU2_TR(0x5e681a);
__builtin_memmove((R+24),(R+0),4);
}
B5e681c:{NFSU2_TR(0x5e681c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e681f:{NFSU2_TR(0x5e681f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6821:{NFSU2_TR(0x5e6821);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6824:{NFSU2_TR(0x5e6824);
__builtin_memmove((R+4),(R+24),4);
}
B5e6826:{NFSU2_TR(0x5e6826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e682bull));
TAIL_STATIC(0x5e0a70u,5e0);
}
B5e682b:L5e682b:{c.instructions+=4;NFSU2_TR(0x5e682b);
__builtin_memmove((R+8),gp(0x883d80),4);
}
B5e6831:{NFSU2_TR(0x5e6831);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6832:{NFSU2_TR(0x5e6832);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6833:{NFSU2_TR(0x5e6833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6838ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e6838:L5e6838:{c.instructions+=1;NFSU2_TR(0x5e6838);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e683b:L5e683b:{c.instructions+=3;NFSU2_TR(0x5e683b);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5e6840:{NFSU2_TR(0x5e6840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6841:{NFSU2_TR(0x5e6841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6846ull));
TAIL_STATIC(0x440e50u,440);
}
B5e6846:L5e6846:{c.instructions+=5;NFSU2_TR(0x5e6846);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6849:{NFSU2_TR(0x5e6849);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e684d:{NFSU2_TR(0x5e684d);
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
B5e684f:{NFSU2_TR(0x5e684f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6857:{NFSU2_TR(0x5e6857);
if(r1(R+518)){{goto L5e6864;}}
}
B5e6859:L5e6859:{c.instructions+=4;NFSU2_TR(0x5e6859);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e685a:{NFSU2_TR(0x5e685a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e685b:{NFSU2_TR(0x5e685b);
__builtin_memmove((R+4),(R+0),4);
}
B5e685d:{NFSU2_TR(0x5e685d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6862ull));
TAIL_STATIC(0x5e5820u,5e5);
}
B5e6862:L5e6862:{c.instructions+=1;NFSU2_TR(0x5e6862);
{goto L5e6866;}
}
B5e6864:L5e6864:{c.instructions+=1;NFSU2_TR(0x5e6864);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e6866:L5e6866:{c.instructions+=12;NFSU2_TR(0x5e6866);
__builtin_memmove((R+4),gp(0x88f1bc),4);
}
B5e686c:{NFSU2_TR(0x5e686c);
__builtin_memmove(gp(0x88f1bc),(R+0),4);
}
B5e6871:{NFSU2_TR(0x5e6871);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6874:{NFSU2_TR(0x5e6874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6875:{NFSU2_TR(0x5e6875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6877:{NFSU2_TR(0x5e6877);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e687b:{NFSU2_TR(0x5e687b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e687c:{NFSU2_TR(0x5e687c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x88f1bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6883:{NFSU2_TR(0x5e6883);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e688a:{NFSU2_TR(0x5e688a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e688b:{NFSU2_TR(0x5e688b);
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
B5e688e:{NFSU2_TR(0x5e688e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6890:L5e6890:{c.instructions+=2;NFSU2_TR(0x5e6890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6891:{NFSU2_TR(0x5e6891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6896ull));
TAIL_STATIC(0x5dc9c0u,5dc);
}
B5e6896:L5e6896:{c.instructions+=3;NFSU2_TR(0x5e6896);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e689a:{NFSU2_TR(0x5e689a);
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
B5e689c:{NFSU2_TR(0x5e689c);
if(r1(R+518)){{goto L5e68c0;}}
}
B5e689e:L5e689e:{c.instructions+=12;NFSU2_TR(0x5e689e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e68a0:{NFSU2_TR(0x5e68a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e68a3:{NFSU2_TR(0x5e68a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e68a5:{NFSU2_TR(0x5e68a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e68a8:{NFSU2_TR(0x5e68a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e68ab:{NFSU2_TR(0x5e68ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e68ae:{NFSU2_TR(0x5e68ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e68b1:{NFSU2_TR(0x5e68b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e68b3:{NFSU2_TR(0x5e68b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e68b6:{NFSU2_TR(0x5e68b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e68b9:{NFSU2_TR(0x5e68b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e68bb:{NFSU2_TR(0x5e68bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e68c0ull));
TAIL_STATIC(0x5e5890u,5e5);
}
B5e68c0:L5e68c0:{c.instructions+=2;NFSU2_TR(0x5e68c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e68c1:{NFSU2_TR(0x5e68c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e68d0:L5e68d0:{c.instructions+=20;NFSU2_TR(0x5e68d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e68d1:{NFSU2_TR(0x5e68d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e68d2:{NFSU2_TR(0x5e68d2);
__builtin_memmove((R+28),(R+4),4);
}
B5e68d4:{NFSU2_TR(0x5e68d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e68d8:{NFSU2_TR(0x5e68d8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e68db:{NFSU2_TR(0x5e68db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e68de:{NFSU2_TR(0x5e68de);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e68e1:{NFSU2_TR(0x5e68e1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e68e3:{NFSU2_TR(0x5e68e3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e68e5:{NFSU2_TR(0x5e68e5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e68e7:{NFSU2_TR(0x5e68e7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e68e9:{NFSU2_TR(0x5e68e9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e68eb:{NFSU2_TR(0x5e68eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e68ed:{NFSU2_TR(0x5e68ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e68ef:{NFSU2_TR(0x5e68ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e68f3:{NFSU2_TR(0x5e68f3);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e68f6:{NFSU2_TR(0x5e68f6);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e68f8:{NFSU2_TR(0x5e68f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e68fa:{NFSU2_TR(0x5e68fa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e68fd:{NFSU2_TR(0x5e68fd);
if(r1(R+518)){{goto L5e696c;}}
}
B5e68ff:L5e68ff:{c.instructions+=6;NFSU2_TR(0x5e68ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6903:{NFSU2_TR(0x5e6903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6904:{NFSU2_TR(0x5e6904);
u8 U[4];
w4(U+0,u32(0x883e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6909:{NFSU2_TR(0x5e6909);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e690a:{NFSU2_TR(0x5e690a);
__builtin_memmove((R+4),(R+24),4);
}
B5e690c:{NFSU2_TR(0x5e690c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6911ull));
TAIL_STATIC(0x5dfeb0u,5df);
}
B5e6911:L5e6911:{c.instructions+=2;NFSU2_TR(0x5e6911);
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
B5e6913:{NFSU2_TR(0x5e6913);
if(r1(R+518)){{goto L5e696c;}}
}
B5e6915:L5e6915:{c.instructions+=3;NFSU2_TR(0x5e6915);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e6918:{NFSU2_TR(0x5e6918);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e691a:{NFSU2_TR(0x5e691a);
if(r1(R+518)){{goto L5e6922;}}
}
B5e691c:L5e691c:{c.instructions+=2;NFSU2_TR(0x5e691c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e6920:{NFSU2_TR(0x5e6920);
{goto L5e6924;}
}
B5e6922:L5e6922:{c.instructions+=1;NFSU2_TR(0x5e6922);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e6924:L5e6924:{c.instructions+=3;NFSU2_TR(0x5e6924);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6927:{NFSU2_TR(0x5e6927);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6929:{NFSU2_TR(0x5e6929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e694b;}}
}
B5e692b:L5e692b:{c.instructions+=2;NFSU2_TR(0x5e692b);
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
B5e692d:{NFSU2_TR(0x5e692d);
if(r1(R+518)){{goto L5e696c;}}
}
B5e692f:L5e692f:{c.instructions+=3;NFSU2_TR(0x5e692f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6930:{NFSU2_TR(0x5e6930);
w4(R+4,u32(0x88f768ull));
}
B5e6935:{NFSU2_TR(0x5e6935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e693aull));
TAIL_STATIC(0x591380u,591);
}
B5e693a:L5e693a:{c.instructions+=2;NFSU2_TR(0x5e693a);
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
B5e693c:{NFSU2_TR(0x5e693c);
if(r1(R+518)){{goto L5e696c;}}
}
B5e693e:L5e693e:{c.instructions+=3;NFSU2_TR(0x5e693e);
__builtin_memmove((R+4),(R+28),4);
}
B5e6940:{NFSU2_TR(0x5e6940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6941:{NFSU2_TR(0x5e6941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6946ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6890u);}goto L5e6890;}
}
B5e6946:L5e6946:{c.instructions+=3;NFSU2_TR(0x5e6946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6947:{NFSU2_TR(0x5e6947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6948:{NFSU2_TR(0x5e6948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e694b:L5e694b:{c.instructions+=4;NFSU2_TR(0x5e694b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e694f:{NFSU2_TR(0x5e694f);
w4(R+4,u32(u32(r4(R+4))-u32(m4(0x800dfc))));
}
B5e6955:{NFSU2_TR(0x5e6955);
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
B5e6957:{NFSU2_TR(0x5e6957);
if(r1(R+518)){{goto L5e696c;}}
}
B5e6959:L5e6959:{c.instructions+=3;NFSU2_TR(0x5e6959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e695a:{NFSU2_TR(0x5e695a);
w4(R+4,u32(0x88f768ull));
}
B5e695f:{NFSU2_TR(0x5e695f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6964ull));
TAIL_STATIC(0x591380u,591);
}
B5e6964:L5e6964:{c.instructions+=3;NFSU2_TR(0x5e6964);
__builtin_memmove((R+4),(R+28),4);
}
B5e6966:{NFSU2_TR(0x5e6966);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6967:{NFSU2_TR(0x5e6967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e696cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6890u);}goto L5e6890;}
}
B5e696c:L5e696c:{c.instructions+=3;NFSU2_TR(0x5e696c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e696d:{NFSU2_TR(0x5e696d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e696e:{NFSU2_TR(0x5e696e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6980:L5e6980:{c.instructions+=9;NFSU2_TR(0x5e6980);
__builtin_memmove((R+4),gp(0x800dfc),4);
}
B5e6986:{NFSU2_TR(0x5e6986);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6987:{NFSU2_TR(0x5e6987);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6988:{NFSU2_TR(0x5e6988);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e698c:{NFSU2_TR(0x5e698c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5e6990:{NFSU2_TR(0x5e6990);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B5e6992:{NFSU2_TR(0x5e6992);
__builtin_memmove((R+4),gp(0x88f748),4);
}
B5e6998:{NFSU2_TR(0x5e6998);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x88f748ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x88f748ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x88f748ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e699e:{NFSU2_TR(0x5e699e);
if(r1(R+518)){{goto L5e69e8;}}
}
B5e69a0:L5e69a0:{c.instructions+=1;NFSU2_TR(0x5e69a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e69a1:L5e69a1:{c.instructions+=4;NFSU2_TR(0x5e69a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e69a4:{NFSU2_TR(0x5e69a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e69a6:{NFSU2_TR(0x5e69a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e69a8:{NFSU2_TR(0x5e69a8);
if(r1(R+518)){{goto L5e69b0;}}
}
B5e69aa:L5e69aa:{c.instructions+=2;NFSU2_TR(0x5e69aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e69ae:{NFSU2_TR(0x5e69ae);
{goto L5e69b2;}
}
B5e69b0:L5e69b0:{c.instructions+=1;NFSU2_TR(0x5e69b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e69b2:L5e69b2:{c.instructions+=2;NFSU2_TR(0x5e69b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e69b4:{NFSU2_TR(0x5e69b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e69dd;}}
}
B5e69b6:L5e69b6:{c.instructions+=1;NFSU2_TR(0x5e69b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e69bbull));
TAIL_STATIC(0x5dc9c0u,5dc);
}
B5e69bb:L5e69bb:{c.instructions+=12;NFSU2_TR(0x5e69bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e69bd:{NFSU2_TR(0x5e69bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e69c0:{NFSU2_TR(0x5e69c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e69c2:{NFSU2_TR(0x5e69c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e69c5:{NFSU2_TR(0x5e69c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e69c8:{NFSU2_TR(0x5e69c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e69cb:{NFSU2_TR(0x5e69cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e69ce:{NFSU2_TR(0x5e69ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e69d0:{NFSU2_TR(0x5e69d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e69d3:{NFSU2_TR(0x5e69d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e69d6:{NFSU2_TR(0x5e69d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e69d8:{NFSU2_TR(0x5e69d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e69ddull));
TAIL_STATIC(0x5e5890u,5e5);
}
B5e69dd:L5e69dd:{c.instructions+=3;NFSU2_TR(0x5e69dd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x88f748ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x88f748ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x88f748ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e69e3:{NFSU2_TR(0x5e69e3);
__builtin_memmove((R+4),(R+28),4);
}
B5e69e5:{NFSU2_TR(0x5e69e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e69a1u);}goto L5e69a1;}}
}
B5e69e7:L5e69e7:{c.instructions+=1;NFSU2_TR(0x5e69e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e69e8:L5e69e8:{c.instructions+=3;NFSU2_TR(0x5e69e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e69e9:{NFSU2_TR(0x5e69e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e69ea:{NFSU2_TR(0x5e69ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e69f0:L5e69f0:{c.instructions+=12;NFSU2_TR(0x5e69f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e69f2:{NFSU2_TR(0x5e69f2);
u8 U[4];
w4(U+0,u32(0x77963bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e69f7:{NFSU2_TR(0x5e69f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e69fd:{NFSU2_TR(0x5e69fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e69fe:{NFSU2_TR(0x5e69fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6a05:{NFSU2_TR(0x5e6a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a06:{NFSU2_TR(0x5e6a06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a07:{NFSU2_TR(0x5e6a07);
__builtin_memmove((R+24),(R+4),4);
}
B5e6a09:{NFSU2_TR(0x5e6a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6a0d:{NFSU2_TR(0x5e6a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6a10:{NFSU2_TR(0x5e6a10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6a18:{NFSU2_TR(0x5e6a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6a1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6660u);}goto L5e6660;}
}
B5e6a1d:L5e6a1d:{c.instructions+=2;NFSU2_TR(0x5e6a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6a20:{NFSU2_TR(0x5e6a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6a25ull));
TAIL_STATIC(0x5dc590u,5dc);
}
B5e6a25:L5e6a25:{c.instructions+=5;NFSU2_TR(0x5e6a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6a29:{NFSU2_TR(0x5e6a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6a2a:{NFSU2_TR(0x5e6a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6a31:{NFSU2_TR(0x5e6a31);
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
B5e6a34:{NFSU2_TR(0x5e6a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6a40:L5e6a40:{c.instructions+=5;NFSU2_TR(0x5e6a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6a44:{NFSU2_TR(0x5e6a44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a45:{NFSU2_TR(0x5e6a45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a46:{NFSU2_TR(0x5e6a46);
__builtin_memmove((R+24),(R+4),4);
}
B5e6a48:{NFSU2_TR(0x5e6a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6a4dull));
TAIL_STATIC(0x5d5390u,5d5);
}
B5e6a4d:L5e6a4d:{c.instructions+=2;NFSU2_TR(0x5e6a4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6a4f:{NFSU2_TR(0x5e6a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6a57;}}
}
B5e6a51:L5e6a51:{c.instructions+=3;NFSU2_TR(0x5e6a51);
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
B5e6a53:{NFSU2_TR(0x5e6a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6a54:{NFSU2_TR(0x5e6a54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6a57:L5e6a57:{c.instructions+=5;NFSU2_TR(0x5e6a57);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6a5b:{NFSU2_TR(0x5e6a5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a5c:{NFSU2_TR(0x5e6a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a5d:{NFSU2_TR(0x5e6a5d);
__builtin_memmove((R+4),(R+24),4);
}
B5e6a5f:{NFSU2_TR(0x5e6a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6a64ull));
TAIL_STATIC(0x5e5bb0u,5e5);
}
B5e6a64:L5e6a64:{c.instructions+=5;NFSU2_TR(0x5e6a64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e6a67:{NFSU2_TR(0x5e6a67);
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
B5e6a69:{NFSU2_TR(0x5e6a69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5e6a6c:{NFSU2_TR(0x5e6a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6a6d:{NFSU2_TR(0x5e6a6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6a70:L5e6a70:{c.instructions+=8;NFSU2_TR(0x5e6a70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a71:{NFSU2_TR(0x5e6a71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a72:{NFSU2_TR(0x5e6a72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a73:{NFSU2_TR(0x5e6a73);
__builtin_memmove((R+24),(R+4),4);
}
B5e6a75:{NFSU2_TR(0x5e6a75);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6a7b:{NFSU2_TR(0x5e6a7b);
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
B5e6a7d:{NFSU2_TR(0x5e6a7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6a7e:{NFSU2_TR(0x5e6a7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6be4;}}
}
B5e6a84:L5e6a84:{c.instructions+=1;NFSU2_TR(0x5e6a84);
{goto L5e6a90;}
}
B5e6a90:L5e6a90:{c.instructions+=3;NFSU2_TR(0x5e6a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6a96:{NFSU2_TR(0x5e6a96);
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
B5e6a98:{NFSU2_TR(0x5e6a98);
if(r1(R+518)){{goto L5e6c02;}}
}
B5e6a9e:L5e6a9e:{c.instructions+=3;NFSU2_TR(0x5e6a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6aa4:{NFSU2_TR(0x5e6aa4);
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
B5e6aa6:{NFSU2_TR(0x5e6aa6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e6c02;}}
}
B5e6aac:L5e6aac:{c.instructions+=3;NFSU2_TR(0x5e6aac);
__builtin_memmove((R+4),gp(0x8a329c),4);
}
B5e6ab2:{NFSU2_TR(0x5e6ab2);
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
B5e6ab4:{NFSU2_TR(0x5e6ab4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6c02;}}
}
B5e6aba:L5e6aba:{c.instructions+=2;NFSU2_TR(0x5e6aba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6abd:{NFSU2_TR(0x5e6abd);
if(r1(R+518)){{goto L5e6ac9;}}
}
B5e6abf:L5e6abf:{c.instructions+=2;NFSU2_TR(0x5e6abf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6ac2:{NFSU2_TR(0x5e6ac2);
if(r1(R+518)){{goto L5e6ac9;}}
}
B5e6ac4:L5e6ac4:{c.instructions+=2;NFSU2_TR(0x5e6ac4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6ac7:{NFSU2_TR(0x5e6ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b00;}}
}
B5e6ac9:L5e6ac9:{c.instructions+=2;NFSU2_TR(0x5e6ac9);
__builtin_memmove((R+4),(R+24),4);
}
B5e6acb:{NFSU2_TR(0x5e6acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6ad0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6230u);}goto L5e6230;}
}
B5e6ad0:L5e6ad0:{c.instructions+=3;NFSU2_TR(0x5e6ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6ad3:{NFSU2_TR(0x5e6ad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6ad5:{NFSU2_TR(0x5e6ad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b00;}}
}
B5e6ad7:L5e6ad7:{c.instructions+=3;NFSU2_TR(0x5e6ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6add:{NFSU2_TR(0x5e6add);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6adf:{NFSU2_TR(0x5e6adf);
if(r1(R+518)){{goto L5e6aea;}}
}
B5e6ae1:L5e6ae1:{c.instructions+=3;NFSU2_TR(0x5e6ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6ae7:{NFSU2_TR(0x5e6ae7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5e6ae8:{NFSU2_TR(0x5e6ae8);
{goto L5e6afa;}
}
B5e6aea:L5e6aea:{c.instructions+=3;NFSU2_TR(0x5e6aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6af0:{NFSU2_TR(0x5e6af0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6af3:{NFSU2_TR(0x5e6af3);
if(r1(R+518)){{goto L5e6bf0;}}
}
B5e6af9:L5e6af9:{c.instructions+=1;NFSU2_TR(0x5e6af9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e6afa:L5e6afa:{c.instructions+=1;NFSU2_TR(0x5e6afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6b00:L5e6b00:{c.instructions+=3;NFSU2_TR(0x5e6b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6b06:{NFSU2_TR(0x5e6b06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6b09:{NFSU2_TR(0x5e6b09);
if(r1(R+518)){{goto L5e6b19;}}
}
B5e6b0b:L5e6b0b:{c.instructions+=2;NFSU2_TR(0x5e6b0b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6b0e:{NFSU2_TR(0x5e6b0e);
if(r1(R+518)){{goto L5e6b19;}}
}
B5e6b10:L5e6b10:{c.instructions+=2;NFSU2_TR(0x5e6b10);
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
B5e6b13:{NFSU2_TR(0x5e6b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6c02;}}
}
B5e6b19:L5e6b19:{c.instructions+=3;NFSU2_TR(0x5e6b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6b1c:{NFSU2_TR(0x5e6b1c);
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
B5e6b1e:{NFSU2_TR(0x5e6b1e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e6c02;}}
}
B5e6b24:L5e6b24:{c.instructions+=5;NFSU2_TR(0x5e6b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6b27:{NFSU2_TR(0x5e6b27);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e6b29:{NFSU2_TR(0x5e6b29);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e6b2b:{NFSU2_TR(0x5e6b2b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6b2d:{NFSU2_TR(0x5e6b2d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e6b8f;}}
}
B5e6b2f:L5e6b2f:{c.instructions+=1;NFSU2_TR(0x5e6b2f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e6b31:L5e6b31:{c.instructions+=5;NFSU2_TR(0x5e6b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6b33:{NFSU2_TR(0x5e6b33);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e6b37:{NFSU2_TR(0x5e6b37);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5e6b39:{NFSU2_TR(0x5e6b39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6b3c:{NFSU2_TR(0x5e6b3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b80;}}
}
B5e6b3e:L5e6b3e:{c.instructions+=3;NFSU2_TR(0x5e6b3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6b41:{NFSU2_TR(0x5e6b41);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6b43:{NFSU2_TR(0x5e6b43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b80;}}
}
B5e6b45:L5e6b45:{c.instructions+=11;NFSU2_TR(0x5e6b45);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e6b49:{NFSU2_TR(0x5e6b49);
w4(R+0,u32(0x51eb851full));
}
B5e6b4e:{NFSU2_TR(0x5e6b4e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e6b50:{NFSU2_TR(0x5e6b50);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e6b53:{NFSU2_TR(0x5e6b53);
__builtin_memmove((R+0),(R+8),4);
}
B5e6b55:{NFSU2_TR(0x5e6b55);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e6b58:{NFSU2_TR(0x5e6b58);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e6b5a:{NFSU2_TR(0x5e6b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6b60:{NFSU2_TR(0x5e6b60);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x40ull))));
}
B5e6b63:{NFSU2_TR(0x5e6b63);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6b66:{NFSU2_TR(0x5e6b66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b6d;}}
}
B5e6b68:L5e6b68:{c.instructions+=2;NFSU2_TR(0x5e6b68);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x59ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e6b6b:{NFSU2_TR(0x5e6b6b);
if(r1(R+518)){{goto L5e6b77;}}
}
B5e6b6d:L5e6b6d:{c.instructions+=2;NFSU2_TR(0x5e6b6d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6b70:{NFSU2_TR(0x5e6b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b80;}}
}
B5e6b72:L5e6b72:{c.instructions+=2;NFSU2_TR(0x5e6b72);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e6b75:{NFSU2_TR(0x5e6b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6b80;}}
}
B5e6b77:L5e6b77:{c.instructions+=3;NFSU2_TR(0x5e6b77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6b78:{NFSU2_TR(0x5e6b78);
__builtin_memmove((R+4),(R+24),4);
}
B5e6b7a:{NFSU2_TR(0x5e6b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6b7full));
TAIL_STATIC(0x5df0b0u,5df);
}
B5e6b7f:L5e6b7f:{c.instructions+=1;NFSU2_TR(0x5e6b7f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e6b80:L5e6b80:{c.instructions+=5;NFSU2_TR(0x5e6b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6b83:{NFSU2_TR(0x5e6b83);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5e6b84:{NFSU2_TR(0x5e6b84);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x50ull))));
}
B5e6b87:{NFSU2_TR(0x5e6b87);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6b89:{NFSU2_TR(0x5e6b89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6b31u);}goto L5e6b31;}}
}
B5e6b8b:L5e6b8b:{c.instructions+=2;NFSU2_TR(0x5e6b8b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e6b8d:{NFSU2_TR(0x5e6b8d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e6bfb;}}
}
B5e6b8f:L5e6b8f:{c.instructions+=3;NFSU2_TR(0x5e6b8f);
__builtin_memmove((R+4),(R+24),4);
}
B5e6b91:{NFSU2_TR(0x5e6b91);
s1(0x864f74,u8(0x1ull));
}
B5e6b98:{NFSU2_TR(0x5e6b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6b9dull));
TAIL_STATIC(0x5df1c0u,5df);
}
B5e6b9d:L5e6b9d:{c.instructions+=5;NFSU2_TR(0x5e6b9d);
__builtin_memmove((R+12),(R+0),1);
}
B5e6b9f:{NFSU2_TR(0x5e6b9f);
s1(0x864f74,u8(0x0ull));
}
B5e6ba6:{NFSU2_TR(0x5e6ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6ba9:{NFSU2_TR(0x5e6ba9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6bab:{NFSU2_TR(0x5e6bab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e6bb2;}}
}
B5e6bad:L5e6bad:{c.instructions+=1;NFSU2_TR(0x5e6bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6bb2ull));
TAIL_STATIC(0x570f50u,570);
}
B5e6bb2:L5e6bb2:{c.instructions+=2;NFSU2_TR(0x5e6bb2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e6bb4:{NFSU2_TR(0x5e6bb4);
if(r1(R+518)){{goto L5e6c02;}}
}
B5e6bb6:L5e6bb6:{c.instructions+=6;NFSU2_TR(0x5e6bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6bbc:{NFSU2_TR(0x5e6bbc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e6bbd:{NFSU2_TR(0x5e6bbd);
__builtin_memmove((R+0),(R+8),4);
}
B5e6bbf:{NFSU2_TR(0x5e6bbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6bc2:{NFSU2_TR(0x5e6bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6bc8:{NFSU2_TR(0x5e6bc8);
if(r1(R+518)){{goto L5e6bcf;}}
}
B5e6bca:L5e6bca:{c.instructions+=2;NFSU2_TR(0x5e6bca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6bcd:{NFSU2_TR(0x5e6bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6bd6;}}
}
B5e6bcf:L5e6bcf:{c.instructions+=2;NFSU2_TR(0x5e6bcf);
__builtin_memmove((R+4),(R+24),4);
}
B5e6bd1:{NFSU2_TR(0x5e6bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6bd6ull));
TAIL_STATIC(0x5dac50u,5da);
}
B5e6bd6:L5e6bd6:{c.instructions+=3;NFSU2_TR(0x5e6bd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6bdc:{NFSU2_TR(0x5e6bdc);
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
B5e6bde:{NFSU2_TR(0x5e6bde);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6a90u);}goto L5e6a90;}}
}
B5e6be4:L5e6be4:{c.instructions+=6;NFSU2_TR(0x5e6be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6be5:{NFSU2_TR(0x5e6be5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e6bec:{NFSU2_TR(0x5e6bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6bed:{NFSU2_TR(0x5e6bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6bee:{NFSU2_TR(0x5e6bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6bef:{NFSU2_TR(0x5e6bef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6bf0:L5e6bf0:{c.instructions+=6;NFSU2_TR(0x5e6bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6bf1:{NFSU2_TR(0x5e6bf1);
__builtin_memmove((R+4),(R+24),4);
}
B5e6bf3:{NFSU2_TR(0x5e6bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6bf4:{NFSU2_TR(0x5e6bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6bf5:{NFSU2_TR(0x5e6bf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6bf6:{NFSU2_TR(0x5e6bf6);
TAIL_STATIC(0x5db010u,5db);
}
B5e6bfb:L5e6bfb:{c.instructions+=1;NFSU2_TR(0x5e6bfb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e6c02:L5e6c02:{c.instructions+=5;NFSU2_TR(0x5e6c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6c03:{NFSU2_TR(0x5e6c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6c04:{NFSU2_TR(0x5e6c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6c05:{NFSU2_TR(0x5e6c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6c06:{NFSU2_TR(0x5e6c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6c10:L5e6c10:{c.instructions+=5;NFSU2_TR(0x5e6c10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c11:{NFSU2_TR(0x5e6c11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c12:{NFSU2_TR(0x5e6c12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c14:{NFSU2_TR(0x5e6c14);
__builtin_memmove((R+28),(R+4),4);
}
B5e6c16:{NFSU2_TR(0x5e6c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6c1bull));
TAIL_STATIC(0x5d6190u,5d6);
}
B5e6c1b:L5e6c1b:{c.instructions+=5;NFSU2_TR(0x5e6c1b);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c1d:{NFSU2_TR(0x5e6c1d);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e6c20:{NFSU2_TR(0x5e6c20);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c22:{NFSU2_TR(0x5e6c22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c23:{NFSU2_TR(0x5e6c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6c28ull));
TAIL_STATIC(0x57e480u,57e);
}
B5e6c28:L5e6c28:{c.instructions+=5;NFSU2_TR(0x5e6c28);
__builtin_memmove((R+12),(R+0),4);
}
B5e6c2a:{NFSU2_TR(0x5e6c2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6c30:{NFSU2_TR(0x5e6c30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e6c33:{NFSU2_TR(0x5e6c33);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6c35:{NFSU2_TR(0x5e6c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6c63;}}
}
B5e6c37:L5e6c37:{c.instructions+=3;NFSU2_TR(0x5e6c37);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5e6c3d:{NFSU2_TR(0x5e6c3d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5e6c40:{NFSU2_TR(0x5e6c40);
if(r1(R+518)){{goto L5e6c4f;}}
}
B5e6c42:L5e6c42:{c.instructions+=3;NFSU2_TR(0x5e6c42);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c44:{NFSU2_TR(0x5e6c44);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c46:{NFSU2_TR(0x5e6c46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6c4bull));
TAIL_STATIC(0x5790e0u,579);
}
B5e6c4b:L5e6c4b:{c.instructions+=2;NFSU2_TR(0x5e6c4b);
__builtin_memmove((R+12),(R+0),4);
}
B5e6c4d:{NFSU2_TR(0x5e6c4d);
{goto L5e6c63;}
}
B5e6c4f:L5e6c4f:{c.instructions+=3;NFSU2_TR(0x5e6c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6c52:{NFSU2_TR(0x5e6c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6c54:{NFSU2_TR(0x5e6c54);
if(r1(R+518)){{goto L5e6c63;}}
}
B5e6c56:L5e6c56:{c.instructions+=5;NFSU2_TR(0x5e6c56);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c58:{NFSU2_TR(0x5e6c58);
w4(R+8,u32(s32(s16(r2(R+12)))));
}
B5e6c5b:{NFSU2_TR(0x5e6c5b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c5d:{NFSU2_TR(0x5e6c5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c5e:{NFSU2_TR(0x5e6c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6c63ull));
TAIL_STATIC(0x579130u,579);
}
B5e6c63:L5e6c63:{c.instructions+=2;NFSU2_TR(0x5e6c63);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+12))&u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5e6c66:{NFSU2_TR(0x5e6c66);
if(r1(R+518)){{goto L5e6cba;}}
}
B5e6c68:L5e6c68:{c.instructions+=5;NFSU2_TR(0x5e6c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6c6b:{NFSU2_TR(0x5e6c6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e6c6d:{NFSU2_TR(0x5e6c6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6c6f:{NFSU2_TR(0x5e6c6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6c70:{NFSU2_TR(0x5e6c70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e6c82;}}
}
B5e6c72:L5e6c72:{c.instructions+=1;NFSU2_TR(0x5e6c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e6c74:L5e6c74:{c.instructions+=2;NFSU2_TR(0x5e6c74);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e6c78:{NFSU2_TR(0x5e6c78);
if(r1(R+518)){{goto L5e6c84;}}
}
B5e6c7a:L5e6c7a:{c.instructions+=4;NFSU2_TR(0x5e6c7a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e6c7b:{NFSU2_TR(0x5e6c7b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x50ull))));
}
B5e6c7e:{NFSU2_TR(0x5e6c7e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e6c80:{NFSU2_TR(0x5e6c80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6c74u);}goto L5e6c74;}}
}
B5e6c82:L5e6c82:{c.instructions+=1;NFSU2_TR(0x5e6c82);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e6c84:L5e6c84:{c.instructions+=3;NFSU2_TR(0x5e6c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6c87:{NFSU2_TR(0x5e6c87);
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
B5e6c8a:{NFSU2_TR(0x5e6c8a);
if(r1(R+518)){{goto L5e6cb9;}}
}
B5e6c8c:L5e6c8c:{c.instructions+=3;NFSU2_TR(0x5e6c8c);
w4(R+12,u32(0x3ull));
}
B5e6c91:{NFSU2_TR(0x5e6c91);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e6c93:{NFSU2_TR(0x5e6c93);
if(r1(R+518)){{goto L5e6cb1;}}
}
B5e6c95:L5e6c95:{c.instructions+=3;NFSU2_TR(0x5e6c95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e6c98:{NFSU2_TR(0x5e6c98);
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
B5e6c9a:{NFSU2_TR(0x5e6c9a);
if(r1(R+518)){{goto L5e6cb9;}}
}
B5e6c9c:L5e6c9c:{c.instructions+=1;NFSU2_TR(0x5e6c9c);
__builtin_memmove((R+16),(R+16),4);
}
B5e6ca0:L5e6ca0:{c.instructions+=2;NFSU2_TR(0x5e6ca0);
__builtin_memmove((R+4),(R+28),4);
}
B5e6ca2:{NFSU2_TR(0x5e6ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6ca7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6a70u);}goto L5e6a70;}
}
B5e6ca7:L5e6ca7:{c.instructions+=1;NFSU2_TR(0x5e6ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6cacull));
TAIL_STATIC(0x57ef60u,57e);
}
B5e6cac:L5e6cac:{c.instructions+=2;NFSU2_TR(0x5e6cac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e6caf:{NFSU2_TR(0x5e6caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6ca0u);}goto L5e6ca0;}}
}
B5e6cb1:L5e6cb1:{c.instructions+=3;NFSU2_TR(0x5e6cb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6cb2:{NFSU2_TR(0x5e6cb2);
__builtin_memmove((R+4),(R+28),4);
}
B5e6cb4:{NFSU2_TR(0x5e6cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6cb9ull));
TAIL_STATIC(0x5daa40u,5da);
}
B5e6cb9:L5e6cb9:{c.instructions+=1;NFSU2_TR(0x5e6cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6cba:L5e6cba:{c.instructions+=3;NFSU2_TR(0x5e6cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6cbb:{NFSU2_TR(0x5e6cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6cbc:{NFSU2_TR(0x5e6cbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6cc0:L5e6cc0:{c.instructions+=13;NFSU2_TR(0x5e6cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6cc4:{NFSU2_TR(0x5e6cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6cc5:{NFSU2_TR(0x5e6cc5);
__builtin_memmove((R+24),(R+4),4);
}
B5e6cc7:{NFSU2_TR(0x5e6cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6ccb:{NFSU2_TR(0x5e6ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6cce:{NFSU2_TR(0x5e6cce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6cd2:{NFSU2_TR(0x5e6cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6cdc:{NFSU2_TR(0x5e6cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6cdf:{NFSU2_TR(0x5e6cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6ce2:{NFSU2_TR(0x5e6ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6ce8:{NFSU2_TR(0x5e6ce8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6cea:{NFSU2_TR(0x5e6cea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6ceb:{NFSU2_TR(0x5e6ceb);
if(r1(R+518)){{goto L5e6cf8;}}
}
B5e6ced:L5e6ced:{c.instructions+=2;NFSU2_TR(0x5e6ced);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e6cef:{NFSU2_TR(0x5e6cef);
if(r1(R+518)){{goto L5e6cf8;}}
}
B5e6cf1:L5e6cf1:{c.instructions+=2;NFSU2_TR(0x5e6cf1);
w4(R+0,u32(0x1ull));
}
B5e6cf6:{NFSU2_TR(0x5e6cf6);
{goto L5e6cfa;}
}
B5e6cf8:L5e6cf8:{c.instructions+=1;NFSU2_TR(0x5e6cf8);
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
B5e6cfa:L5e6cfa:{c.instructions+=15;NFSU2_TR(0x5e6cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e6cfe:{NFSU2_TR(0x5e6cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d01:{NFSU2_TR(0x5e6d01);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e6d04:{NFSU2_TR(0x5e6d04);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e6d07:{NFSU2_TR(0x5e6d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e6d09:{NFSU2_TR(0x5e6d09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d0a:{NFSU2_TR(0x5e6d0a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e6d0c:{NFSU2_TR(0x5e6d0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6d0f:{NFSU2_TR(0x5e6d0f);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e6d12:{NFSU2_TR(0x5e6d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d13:{NFSU2_TR(0x5e6d13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6d16:{NFSU2_TR(0x5e6d16);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e6d19:{NFSU2_TR(0x5e6d19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d1a:{NFSU2_TR(0x5e6d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d1d:{NFSU2_TR(0x5e6d1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6d22ull));
TAIL_STATIC(0x43d540u,43d);
}
B5e6d22:L5e6d22:{c.instructions+=9;NFSU2_TR(0x5e6d22);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e6d25:{NFSU2_TR(0x5e6d25);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e6d28:{NFSU2_TR(0x5e6d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e6d2a:{NFSU2_TR(0x5e6d2a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e6d2c:{NFSU2_TR(0x5e6d2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d2d:{NFSU2_TR(0x5e6d2d);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e6d33:{NFSU2_TR(0x5e6d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d39:{NFSU2_TR(0x5e6d39);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e6d3f:{NFSU2_TR(0x5e6d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6d44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6750u);}goto L5e6750;}
}
B5e6d44:L5e6d44:{c.instructions+=5;NFSU2_TR(0x5e6d44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e6d47:{NFSU2_TR(0x5e6d47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d48:{NFSU2_TR(0x5e6d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6d4b:{NFSU2_TR(0x5e6d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d4e:{NFSU2_TR(0x5e6d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6d53ull));
TAIL_STATIC(0x479130u,479);
}
B5e6d53:L5e6d53:{c.instructions+=9;NFSU2_TR(0x5e6d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6d57:{NFSU2_TR(0x5e6d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d5a:{NFSU2_TR(0x5e6d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6d5e:{NFSU2_TR(0x5e6d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d5f:{NFSU2_TR(0x5e6d5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d61:{NFSU2_TR(0x5e6d61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d62:{NFSU2_TR(0x5e6d62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d63:{NFSU2_TR(0x5e6d63);
__builtin_memmove((R+4),(R+24),4);
}
B5e6d65:{NFSU2_TR(0x5e6d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6d6aull));
TAIL_STATIC(0x5dc680u,5dc);
}
B5e6d6a:L5e6d6a:{c.instructions+=4;NFSU2_TR(0x5e6d6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6d6b:{NFSU2_TR(0x5e6d6b);
__builtin_memmove((R+0),(R+24),4);
}
B5e6d6d:{NFSU2_TR(0x5e6d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6d6e:{NFSU2_TR(0x5e6d6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6d80:L5e6d80:{c.instructions+=13;NFSU2_TR(0x5e6d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d81:{NFSU2_TR(0x5e6d81);
__builtin_memmove((R+20),(R+16),4);
}
B5e6d83:{NFSU2_TR(0x5e6d83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e6d86:{NFSU2_TR(0x5e6d86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d88:{NFSU2_TR(0x5e6d88);
u8 U[4];
w4(U+0,u32(0x77965bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d8d:{NFSU2_TR(0x5e6d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6d93:{NFSU2_TR(0x5e6d93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6d94:{NFSU2_TR(0x5e6d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6d9b:{NFSU2_TR(0x5e6d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5e6d9e:{NFSU2_TR(0x5e6d9e);
__builtin_memmove((R+0),gp(0x883d74),4);
}
B5e6da3:{NFSU2_TR(0x5e6da3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6da4:{NFSU2_TR(0x5e6da4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6da5:{NFSU2_TR(0x5e6da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6daaull));
TAIL_STATIC(0x43cd10u,43c);
}
B5e6daa:L5e6daa:{c.instructions+=3;NFSU2_TR(0x5e6daa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6dad:{NFSU2_TR(0x5e6dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6daf:{NFSU2_TR(0x5e6daf);
if(r1(R+518)){{goto L5e6e06;}}
}
B5e6db1:L5e6db1:{c.instructions+=9;NFSU2_TR(0x5e6db1);
__builtin_memmove((R+0),gp(0x88f274),4);
}
B5e6db6:{NFSU2_TR(0x5e6db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6db8:{NFSU2_TR(0x5e6db8);
__builtin_memmove((R+24),(R+0),4);
}
B5e6dba:{NFSU2_TR(0x5e6dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6dbd:{NFSU2_TR(0x5e6dbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6dbf:{NFSU2_TR(0x5e6dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6dc2:{NFSU2_TR(0x5e6dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6dc5:{NFSU2_TR(0x5e6dc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6dc7:{NFSU2_TR(0x5e6dc7);
if(r1(R+518)){{goto L5e6de3;}}
}
B5e6dc9:L5e6dc9:{c.instructions+=3;NFSU2_TR(0x5e6dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e6dcb:{NFSU2_TR(0x5e6dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6dcd:{NFSU2_TR(0x5e6dcd);
if(r1(R+518)){{goto L5e6de3;}}
}
B5e6dcf:L5e6dcf:{c.instructions+=3;NFSU2_TR(0x5e6dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6dd2:{NFSU2_TR(0x5e6dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6dd4:{NFSU2_TR(0x5e6dd4);
if(r1(R+518)){{goto L5e6de3;}}
}
B5e6dd6:L5e6dd6:{c.instructions+=2;NFSU2_TR(0x5e6dd6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5e6ddc:{NFSU2_TR(0x5e6ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6de3:L5e6de3:{c.instructions+=7;NFSU2_TR(0x5e6de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6de6:{NFSU2_TR(0x5e6de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6de8:{NFSU2_TR(0x5e6de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6deb:{NFSU2_TR(0x5e6deb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e6ded:{NFSU2_TR(0x5e6ded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6dee:{NFSU2_TR(0x5e6dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6df1:{NFSU2_TR(0x5e6df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6df6ull));
TAIL_STATIC(0x440ef0u,440);
}
B5e6df6:L5e6df6:{c.instructions+=4;NFSU2_TR(0x5e6df6);
__builtin_memmove((R+4),gp(0x883d74),4);
}
B5e6dfc:{NFSU2_TR(0x5e6dfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6dfd:{NFSU2_TR(0x5e6dfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6dfe:{NFSU2_TR(0x5e6dfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6e03ull));
TAIL_STATIC(0x43f920u,43f);
}
B5e6e03:L5e6e03:{c.instructions+=1;NFSU2_TR(0x5e6e03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e6e06:L5e6e06:{c.instructions+=3;NFSU2_TR(0x5e6e06);
__builtin_memmove((R+8),gp(0x883d74),4);
}
B5e6e0c:{NFSU2_TR(0x5e6e0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e0d:{NFSU2_TR(0x5e6e0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6e12ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B5e6e12:L5e6e12:{c.instructions+=5;NFSU2_TR(0x5e6e12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e6e15:{NFSU2_TR(0x5e6e15);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6e19:{NFSU2_TR(0x5e6e19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6e1b:{NFSU2_TR(0x5e6e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6e23:{NFSU2_TR(0x5e6e23);
if(r1(R+518)){{goto L5e6e46;}}
}
B5e6e25:L5e6e25:{c.instructions+=14;NFSU2_TR(0x5e6e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6e28:{NFSU2_TR(0x5e6e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6e2b:{NFSU2_TR(0x5e6e2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e2c:{NFSU2_TR(0x5e6e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6e2f:{NFSU2_TR(0x5e6e2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e30:{NFSU2_TR(0x5e6e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6e33:{NFSU2_TR(0x5e6e33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e34:{NFSU2_TR(0x5e6e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6e37:{NFSU2_TR(0x5e6e37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e38:{NFSU2_TR(0x5e6e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6e3b:{NFSU2_TR(0x5e6e3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e3c:{NFSU2_TR(0x5e6e3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e3d:{NFSU2_TR(0x5e6e3d);
__builtin_memmove((R+4),(R+0),4);
}
B5e6e3f:{NFSU2_TR(0x5e6e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6e44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6cc0u);}goto L5e6cc0;}
}
B5e6e44:L5e6e44:{c.instructions+=1;NFSU2_TR(0x5e6e44);
{goto L5e6e48;}
}
B5e6e46:L5e6e46:{c.instructions+=1;NFSU2_TR(0x5e6e46);
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
B5e6e48:L5e6e48:{c.instructions+=11;NFSU2_TR(0x5e6e48);
__builtin_memmove((R+4),gp(0x88f270),4);
}
B5e6e4e:{NFSU2_TR(0x5e6e4e);
__builtin_memmove(gp(0x88f270),(R+0),4);
}
B5e6e53:{NFSU2_TR(0x5e6e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6e56:{NFSU2_TR(0x5e6e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e6e58:{NFSU2_TR(0x5e6e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6e5c:{NFSU2_TR(0x5e6e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x88f270ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6e63:{NFSU2_TR(0x5e6e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6e6a:{NFSU2_TR(0x5e6e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6e6b:{NFSU2_TR(0x5e6e6b);
__builtin_memmove((R+16),(R+20),4);
}
B5e6e6d:{NFSU2_TR(0x5e6e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6e6e:{NFSU2_TR(0x5e6e6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6e70:L5e6e70:{c.instructions+=12;NFSU2_TR(0x5e6e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e71:{NFSU2_TR(0x5e6e71);
__builtin_memmove((R+20),(R+16),4);
}
B5e6e73:{NFSU2_TR(0x5e6e73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e6e76:{NFSU2_TR(0x5e6e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5e6e79:{NFSU2_TR(0x5e6e79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e7a:{NFSU2_TR(0x5e6e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e6e7d:{NFSU2_TR(0x5e6e7d);
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
B5e6e7f:{NFSU2_TR(0x5e6e7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e80:{NFSU2_TR(0x5e6e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e6e83:{NFSU2_TR(0x5e6e83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e84:{NFSU2_TR(0x5e6e84);
__builtin_memmove((R+28),(R+4),4);
}
B5e6e86:{NFSU2_TR(0x5e6e86);
if(r1(R+518)){{goto L5e6ea6;}}
}
B5e6e88:L5e6e88:{c.instructions+=4;NFSU2_TR(0x5e6e88);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6e8b:{NFSU2_TR(0x5e6e8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e8c:{NFSU2_TR(0x5e6e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6e8d:{NFSU2_TR(0x5e6e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6e92ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5e6e92:L5e6e92:{c.instructions+=5;NFSU2_TR(0x5e6e92);
{u32 ea_=u32(u32(8013368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e6e98:{NFSU2_TR(0x5e6e98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e6e9b:{NFSU2_TR(0x5e6e9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e6e9d:{NFSU2_TR(0x5e6e9d);
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
B5e6ea0:{NFSU2_TR(0x5e6ea0);
if(r1(R+518)){{goto L5e6f95;}}
}
B5e6ea6:L5e6ea6:{c.instructions+=3;NFSU2_TR(0x5e6ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e6ea8:{NFSU2_TR(0x5e6ea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6eaa:{NFSU2_TR(0x5e6eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6ece;}}
}
B5e6eac:L5e6eac:{c.instructions+=10;NFSU2_TR(0x5e6eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6eaf:{NFSU2_TR(0x5e6eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6eb2:{NFSU2_TR(0x5e6eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6eb5:{NFSU2_TR(0x5e6eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eb6:{NFSU2_TR(0x5e6eb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eb7:{NFSU2_TR(0x5e6eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eb8:{NFSU2_TR(0x5e6eb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eb9:{NFSU2_TR(0x5e6eb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eba:{NFSU2_TR(0x5e6eba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6ebb:{NFSU2_TR(0x5e6ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6ec0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6d80u);}goto L5e6d80;}
}
B5e6ec0:L5e6ec0:{c.instructions+=8;NFSU2_TR(0x5e6ec0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e6ec3:{NFSU2_TR(0x5e6ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6ec5:{NFSU2_TR(0x5e6ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6ec6:{NFSU2_TR(0x5e6ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6ec7:{NFSU2_TR(0x5e6ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6ec8:{NFSU2_TR(0x5e6ec8);
__builtin_memmove((R+16),(R+20),4);
}
B5e6eca:{NFSU2_TR(0x5e6eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6ecb:{NFSU2_TR(0x5e6ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6ece:L5e6ece:{c.instructions+=3;NFSU2_TR(0x5e6ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e6ed4:{NFSU2_TR(0x5e6ed4);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6ed7:{NFSU2_TR(0x5e6ed7);
if(r1(R+518)){{goto L5e6ee5;}}
}
B5e6ed9:L5e6ed9:{c.instructions+=2;NFSU2_TR(0x5e6ed9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e6edc:{NFSU2_TR(0x5e6edc);
if(r1(R+518)){{goto L5e6ee5;}}
}
B5e6ede:L5e6ede:{c.instructions+=2;NFSU2_TR(0x5e6ede);
w4(R+0,u32(0x1ull));
}
B5e6ee3:{NFSU2_TR(0x5e6ee3);
{goto L5e6ee7;}
}
B5e6ee5:L5e6ee5:{c.instructions+=1;NFSU2_TR(0x5e6ee5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e6ee7:L5e6ee7:{c.instructions+=3;NFSU2_TR(0x5e6ee7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e6eea:{NFSU2_TR(0x5e6eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e6eed:{NFSU2_TR(0x5e6eed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6f0c;}}
}
B5e6eef:L5e6eef:{c.instructions+=3;NFSU2_TR(0x5e6eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6ef2:{NFSU2_TR(0x5e6ef2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e6ef5:{NFSU2_TR(0x5e6ef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e6f0c;}}
}
B5e6ef7:L5e6ef7:{c.instructions+=6;NFSU2_TR(0x5e6ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6efa:{NFSU2_TR(0x5e6efa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6efb:{NFSU2_TR(0x5e6efb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6efd:{NFSU2_TR(0x5e6efd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6efe:{NFSU2_TR(0x5e6efe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6eff:{NFSU2_TR(0x5e6eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6f04ull));
TAIL_STATIC(0x5dc680u,5dc);
}
B5e6f04:L5e6f04:{c.instructions+=2;NFSU2_TR(0x5e6f04);
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
B5e6f06:{NFSU2_TR(0x5e6f06);
if(r1(R+518)){{goto L5e6f95;}}
}
B5e6f0c:L5e6f0c:{c.instructions+=10;NFSU2_TR(0x5e6f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e6f0e:{NFSU2_TR(0x5e6f0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6f12:{NFSU2_TR(0x5e6f12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f13:{NFSU2_TR(0x5e6f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6f19:{NFSU2_TR(0x5e6f19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6ull))));
}
B5e6f1c:{NFSU2_TR(0x5e6f1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e6f20:{NFSU2_TR(0x5e6f20);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e6f23:{NFSU2_TR(0x5e6f23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f24:{NFSU2_TR(0x5e6f24);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5e6f26:{NFSU2_TR(0x5e6f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6f2bull));
TAIL_STATIC(0x5d2fc0u,5d2);
}
B5e6f2b:L5e6f2b:{c.instructions+=10;NFSU2_TR(0x5e6f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6f31:{NFSU2_TR(0x5e6f31);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e6f34:{NFSU2_TR(0x5e6f34);
u8 U[13];
w4(U+0,u32(u32(u32(0x6full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B5e6f39:{NFSU2_TR(0x5e6f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6f3c:{NFSU2_TR(0x5e6f3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6f3e:{NFSU2_TR(0x5e6f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e6f42:{NFSU2_TR(0x5e6f42);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e6f46:{NFSU2_TR(0x5e6f46);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e6f4c:{NFSU2_TR(0x5e6f4c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e6f50:{NFSU2_TR(0x5e6f50);
if(r1(R+518)){{goto L5e6f5f;}}
}
B5e6f52:L5e6f52:{c.instructions+=2;NFSU2_TR(0x5e6f52);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e6f58:{NFSU2_TR(0x5e6f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e6f5f:L5e6f5f:{c.instructions+=12;NFSU2_TR(0x5e6f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6f63:{NFSU2_TR(0x5e6f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6f66:{NFSU2_TR(0x5e6f66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f67:{NFSU2_TR(0x5e6f67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f68:{NFSU2_TR(0x5e6f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6f6b:{NFSU2_TR(0x5e6f6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e6f6f:{NFSU2_TR(0x5e6f6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f70:{NFSU2_TR(0x5e6f70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e6f74:{NFSU2_TR(0x5e6f74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f75:{NFSU2_TR(0x5e6f75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f76:{NFSU2_TR(0x5e6f76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f77:{NFSU2_TR(0x5e6f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6f7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e6d80u);}goto L5e6d80;}
}
B5e6f7c:L5e6f7c:{c.instructions+=10;NFSU2_TR(0x5e6f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e6f7f:{NFSU2_TR(0x5e6f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e6f82:{NFSU2_TR(0x5e6f82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5e6f85:{NFSU2_TR(0x5e6f85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f86:{NFSU2_TR(0x5e6f86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f88:{NFSU2_TR(0x5e6f88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f89:{NFSU2_TR(0x5e6f89);
__builtin_memmove((R+24),(R+0),4);
}
B5e6f8b:{NFSU2_TR(0x5e6f8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6f8c:{NFSU2_TR(0x5e6f8c);
__builtin_memmove((R+4),(R+24),4);
}
B5e6f8e:{NFSU2_TR(0x5e6f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6f93ull));
TAIL_STATIC(0x5dc680u,5dc);
}
B5e6f93:L5e6f93:{c.instructions+=1;NFSU2_TR(0x5e6f93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e6f95:L5e6f95:{c.instructions+=6;NFSU2_TR(0x5e6f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6f96:{NFSU2_TR(0x5e6f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6f97:{NFSU2_TR(0x5e6f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e6f98:{NFSU2_TR(0x5e6f98);
__builtin_memmove((R+16),(R+20),4);
}
B5e6f9a:{NFSU2_TR(0x5e6f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e6f9b:{NFSU2_TR(0x5e6f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e6fa0:L5e6fa0:{c.instructions+=10;NFSU2_TR(0x5e6fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e6fa3:{NFSU2_TR(0x5e6fa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fa4:{NFSU2_TR(0x5e6fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e6fa8:{NFSU2_TR(0x5e6fa8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fa9:{NFSU2_TR(0x5e6fa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6faa:{NFSU2_TR(0x5e6faa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fab:{NFSU2_TR(0x5e6fab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fad:{NFSU2_TR(0x5e6fad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fae:{NFSU2_TR(0x5e6fae);
__builtin_memmove((R+20),(R+4),4);
}
B5e6fb0:{NFSU2_TR(0x5e6fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6fb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e68d0u);}goto L5e68d0;}
}
B5e6fb5:L5e6fb5:{c.instructions+=5;NFSU2_TR(0x5e6fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6fb8:{NFSU2_TR(0x5e6fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6fbb:{NFSU2_TR(0x5e6fbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fbc:{NFSU2_TR(0x5e6fbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fbd:{NFSU2_TR(0x5e6fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6fc2ull));
TAIL_STATIC(0x43d220u,43d);
}
B5e6fc2:L5e6fc2:{c.instructions+=6;NFSU2_TR(0x5e6fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6fc6:{NFSU2_TR(0x5e6fc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fc7:{NFSU2_TR(0x5e6fc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fc8:{NFSU2_TR(0x5e6fc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fc9:{NFSU2_TR(0x5e6fc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fca:{NFSU2_TR(0x5e6fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6fcfull));
TAIL_STATIC(0x43d2f0u,43d);
}
B5e6fcf:L5e6fcf:{c.instructions+=9;NFSU2_TR(0x5e6fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6fd2:{NFSU2_TR(0x5e6fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fd3:{NFSU2_TR(0x5e6fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e6fd6:{NFSU2_TR(0x5e6fd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fd7:{NFSU2_TR(0x5e6fd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e6fda:{NFSU2_TR(0x5e6fda);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e6fdd:{NFSU2_TR(0x5e6fdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fde:{NFSU2_TR(0x5e6fde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e6fdf:{NFSU2_TR(0x5e6fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e6fe4ull));
TAIL_STATIC(0x43d470u,43d);
}
B5e6fe4:L5e6fe4:{c.instructions+=3;NFSU2_TR(0x5e6fe4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5e6fe7:{NFSU2_TR(0x5e6fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e6fe9:{NFSU2_TR(0x5e6fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5e70ebu,5e7);}
}
B5e6fef:L5e6fef:{c.instructions+=3;NFSU2_TR(0x5e6fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e6ff3:{NFSU2_TR(0x5e6ff3);
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
B5e6ff5:{NFSU2_TR(0x5e6ff5);
if(r1(R+518)){TAIL_STATIC(0x5e70c2u,5e7);}
}
B5e6ffb:L5e6ffb:{c.instructions+=2;NFSU2_TR(0x5e6ffb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e6fff:{NFSU2_TR(0x5e6fff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e19999aull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5e7007u,5e7);
}
XIT:NFSU2_TR_EXIT(0x5e6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
