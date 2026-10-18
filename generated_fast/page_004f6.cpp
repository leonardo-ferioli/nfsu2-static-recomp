#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4f7(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f6(u8* __restrict R,Cpu& c);
u32 page_4f6(Cpu& c){return body_4f6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f6000:goto L4f6000;
case 0x4f6003:c.instructions+=11;goto B4f6003;
case 0x4f6006:c.instructions+=10;goto B4f6006;
case 0x4f6009:c.instructions+=9;goto B4f6009;
case 0x4f600a:c.instructions+=8;goto B4f600a;
case 0x4f600e:c.instructions+=7;goto B4f600e;
case 0x4f6012:c.instructions+=6;goto B4f6012;
case 0x4f6014:c.instructions+=5;goto B4f6014;
case 0x4f6015:c.instructions+=4;goto B4f6015;
case 0x4f6016:c.instructions+=3;goto B4f6016;
case 0x4f601d:c.instructions+=2;goto B4f601d;
case 0x4f6020:c.instructions+=1;goto B4f6020;
case 0x4f6030:goto L4f6030;
case 0x4f6032:c.instructions+=25;goto B4f6032;
case 0x4f6037:c.instructions+=24;goto B4f6037;
case 0x4f603d:c.instructions+=23;goto B4f603d;
case 0x4f603e:c.instructions+=22;goto B4f603e;
case 0x4f6045:c.instructions+=21;goto B4f6045;
case 0x4f6046:c.instructions+=20;goto B4f6046;
case 0x4f604a:c.instructions+=19;goto B4f604a;
case 0x4f604b:c.instructions+=18;goto B4f604b;
case 0x4f604c:c.instructions+=17;goto B4f604c;
case 0x4f604e:c.instructions+=16;goto B4f604e;
case 0x4f6050:c.instructions+=15;goto B4f6050;
case 0x4f6051:c.instructions+=14;goto B4f6051;
case 0x4f6055:c.instructions+=13;goto B4f6055;
case 0x4f6057:c.instructions+=12;goto B4f6057;
case 0x4f605a:c.instructions+=11;goto B4f605a;
case 0x4f605d:c.instructions+=10;goto B4f605d;
case 0x4f6064:c.instructions+=9;goto B4f6064;
case 0x4f6067:c.instructions+=8;goto B4f6067;
case 0x4f606a:c.instructions+=7;goto B4f606a;
case 0x4f606d:c.instructions+=6;goto B4f606d;
case 0x4f6070:c.instructions+=5;goto B4f6070;
case 0x4f6073:c.instructions+=4;goto B4f6073;
case 0x4f6078:c.instructions+=3;goto B4f6078;
case 0x4f607c:c.instructions+=2;goto B4f607c;
case 0x4f607f:c.instructions+=1;goto B4f607f;
case 0x4f6084:goto L4f6084;
case 0x4f6087:c.instructions+=3;goto B4f6087;
case 0x4f6088:c.instructions+=2;goto B4f6088;
case 0x4f6089:c.instructions+=1;goto B4f6089;
case 0x4f608e:goto L4f608e;
case 0x4f6090:c.instructions+=3;goto B4f6090;
case 0x4f6093:c.instructions+=2;goto B4f6093;
case 0x4f6095:c.instructions+=1;goto B4f6095;
case 0x4f6097:goto L4f6097;
case 0x4f609c:goto L4f609c;
case 0x4f609e:c.instructions+=1;goto B4f609e;
case 0x4f60a0:goto L4f60a0;
case 0x4f60a3:c.instructions+=1;goto B4f60a3;
case 0x4f60a5:goto L4f60a5;
case 0x4f60a7:goto L4f60a7;
case 0x4f60aa:c.instructions+=4;goto B4f60aa;
case 0x4f60ac:c.instructions+=3;goto B4f60ac;
case 0x4f60af:c.instructions+=2;goto B4f60af;
case 0x4f60b2:c.instructions+=1;goto B4f60b2;
case 0x4f60b4:goto L4f60b4;
case 0x4f60b9:c.instructions+=2;goto B4f60b9;
case 0x4f60bc:c.instructions+=1;goto B4f60bc;
case 0x4f60c1:goto L4f60c1;
case 0x4f60c4:c.instructions+=3;goto B4f60c4;
case 0x4f60c5:c.instructions+=2;goto B4f60c5;
case 0x4f60c6:c.instructions+=1;goto B4f60c6;
case 0x4f60cb:goto L4f60cb;
case 0x4f60cd:c.instructions+=3;goto B4f60cd;
case 0x4f60d0:c.instructions+=2;goto B4f60d0;
case 0x4f60d2:c.instructions+=1;goto B4f60d2;
case 0x4f60d4:goto L4f60d4;
case 0x4f60d9:goto L4f60d9;
case 0x4f60db:c.instructions+=1;goto B4f60db;
case 0x4f60dd:goto L4f60dd;
case 0x4f60e0:c.instructions+=1;goto B4f60e0;
case 0x4f60e2:goto L4f60e2;
case 0x4f60e4:goto L4f60e4;
case 0x4f60e7:c.instructions+=4;goto B4f60e7;
case 0x4f60e9:c.instructions+=3;goto B4f60e9;
case 0x4f60ec:c.instructions+=2;goto B4f60ec;
case 0x4f60ef:c.instructions+=1;goto B4f60ef;
case 0x4f60f1:goto L4f60f1;
case 0x4f60f5:c.instructions+=14;goto B4f60f5;
case 0x4f60f8:c.instructions+=13;goto B4f60f8;
case 0x4f60fb:c.instructions+=12;goto B4f60fb;
case 0x4f60fe:c.instructions+=11;goto B4f60fe;
case 0x4f6101:c.instructions+=10;goto B4f6101;
case 0x4f6104:c.instructions+=9;goto B4f6104;
case 0x4f6105:c.instructions+=8;goto B4f6105;
case 0x4f610c:c.instructions+=7;goto B4f610c;
case 0x4f6113:c.instructions+=6;goto B4f6113;
case 0x4f6115:c.instructions+=5;goto B4f6115;
case 0x4f6116:c.instructions+=4;goto B4f6116;
case 0x4f6117:c.instructions+=3;goto B4f6117;
case 0x4f611e:c.instructions+=2;goto B4f611e;
case 0x4f6121:c.instructions+=1;goto B4f6121;
case 0x4f6130:goto L4f6130;
case 0x4f6132:c.instructions+=24;goto B4f6132;
case 0x4f6137:c.instructions+=23;goto B4f6137;
case 0x4f613d:c.instructions+=22;goto B4f613d;
case 0x4f613e:c.instructions+=21;goto B4f613e;
case 0x4f6145:c.instructions+=20;goto B4f6145;
case 0x4f6148:c.instructions+=19;goto B4f6148;
case 0x4f614c:c.instructions+=18;goto B4f614c;
case 0x4f614d:c.instructions+=17;goto B4f614d;
case 0x4f614e:c.instructions+=16;goto B4f614e;
case 0x4f614f:c.instructions+=15;goto B4f614f;
case 0x4f6151:c.instructions+=14;goto B4f6151;
case 0x4f6153:c.instructions+=13;goto B4f6153;
case 0x4f6154:c.instructions+=12;goto B4f6154;
case 0x4f6158:c.instructions+=11;goto B4f6158;
case 0x4f615a:c.instructions+=10;goto B4f615a;
case 0x4f615d:c.instructions+=9;goto B4f615d;
case 0x4f6160:c.instructions+=8;goto B4f6160;
case 0x4f6167:c.instructions+=7;goto B4f6167;
case 0x4f616a:c.instructions+=6;goto B4f616a;
case 0x4f616d:c.instructions+=5;goto B4f616d;
case 0x4f6170:c.instructions+=4;goto B4f6170;
case 0x4f6174:c.instructions+=3;goto B4f6174;
case 0x4f6177:c.instructions+=2;goto B4f6177;
case 0x4f617c:c.instructions+=1;goto B4f617c;
case 0x4f6180:goto L4f6180;
case 0x4f6185:c.instructions+=8;goto B4f6185;
case 0x4f6188:c.instructions+=7;goto B4f6188;
case 0x4f618b:c.instructions+=6;goto B4f618b;
case 0x4f618d:c.instructions+=5;goto B4f618d;
case 0x4f618e:c.instructions+=4;goto B4f618e;
case 0x4f6194:c.instructions+=3;goto B4f6194;
case 0x4f619b:c.instructions+=2;goto B4f619b;
case 0x4f619e:c.instructions+=1;goto B4f619e;
case 0x4f61a3:goto L4f61a3;
case 0x4f61a6:c.instructions+=4;goto B4f61a6;
case 0x4f61a9:c.instructions+=3;goto B4f61a9;
case 0x4f61ac:c.instructions+=2;goto B4f61ac;
case 0x4f61ad:c.instructions+=1;goto B4f61ad;
case 0x4f61af:goto L4f61af;
case 0x4f61b9:c.instructions+=3;goto B4f61b9;
case 0x4f61bf:c.instructions+=2;goto B4f61bf;
case 0x4f61c5:c.instructions+=1;goto B4f61c5;
case 0x4f61cb:goto L4f61cb;
case 0x4f61d1:c.instructions+=3;goto B4f61d1;
case 0x4f61d6:c.instructions+=2;goto B4f61d6;
case 0x4f61da:c.instructions+=1;goto B4f61da;
case 0x4f61e0:goto L4f61e0;
case 0x4f61e1:c.instructions+=5;goto B4f61e1;
case 0x4f61e6:c.instructions+=4;goto B4f61e6;
case 0x4f61ea:c.instructions+=3;goto B4f61ea;
case 0x4f61ec:c.instructions+=2;goto B4f61ec;
case 0x4f61ed:c.instructions+=1;goto B4f61ed;
case 0x4f61f2:goto L4f61f2;
case 0x4f61f6:c.instructions+=2;goto B4f61f6;
case 0x4f61f7:c.instructions+=1;goto B4f61f7;
case 0x4f61fc:goto L4f61fc;
case 0x4f61ff:c.instructions+=3;goto B4f61ff;
case 0x4f6200:c.instructions+=2;goto B4f6200;
case 0x4f6201:c.instructions+=1;goto B4f6201;
case 0x4f6206:goto L4f6206;
case 0x4f6208:c.instructions+=3;goto B4f6208;
case 0x4f620b:c.instructions+=2;goto B4f620b;
case 0x4f620d:c.instructions+=1;goto B4f620d;
case 0x4f620f:goto L4f620f;
case 0x4f6214:goto L4f6214;
case 0x4f6216:c.instructions+=1;goto B4f6216;
case 0x4f6218:goto L4f6218;
case 0x4f621b:c.instructions+=1;goto B4f621b;
case 0x4f621d:goto L4f621d;
case 0x4f621f:goto L4f621f;
case 0x4f6222:c.instructions+=4;goto B4f6222;
case 0x4f6224:c.instructions+=3;goto B4f6224;
case 0x4f6227:c.instructions+=2;goto B4f6227;
case 0x4f622a:c.instructions+=1;goto B4f622a;
case 0x4f622c:goto L4f622c;
case 0x4f622d:c.instructions+=2;goto B4f622d;
case 0x4f6230:c.instructions+=1;goto B4f6230;
case 0x4f6235:goto L4f6235;
case 0x4f6236:c.instructions+=5;goto B4f6236;
case 0x4f623b:c.instructions+=4;goto B4f623b;
case 0x4f623f:c.instructions+=3;goto B4f623f;
case 0x4f6241:c.instructions+=2;goto B4f6241;
case 0x4f6242:c.instructions+=1;goto B4f6242;
case 0x4f6247:goto L4f6247;
case 0x4f624b:c.instructions+=2;goto B4f624b;
case 0x4f624c:c.instructions+=1;goto B4f624c;
case 0x4f6251:goto L4f6251;
case 0x4f6254:c.instructions+=3;goto B4f6254;
case 0x4f6255:c.instructions+=2;goto B4f6255;
case 0x4f6256:c.instructions+=1;goto B4f6256;
case 0x4f625b:goto L4f625b;
case 0x4f625d:c.instructions+=3;goto B4f625d;
case 0x4f6260:c.instructions+=2;goto B4f6260;
case 0x4f6262:c.instructions+=1;goto B4f6262;
case 0x4f6264:goto L4f6264;
case 0x4f6269:goto L4f6269;
case 0x4f626b:c.instructions+=1;goto B4f626b;
case 0x4f626d:goto L4f626d;
case 0x4f6270:c.instructions+=1;goto B4f6270;
case 0x4f6272:goto L4f6272;
case 0x4f6274:goto L4f6274;
case 0x4f6277:c.instructions+=4;goto B4f6277;
case 0x4f6279:c.instructions+=3;goto B4f6279;
case 0x4f627c:c.instructions+=2;goto B4f627c;
case 0x4f627f:c.instructions+=1;goto B4f627f;
case 0x4f6281:goto L4f6281;
case 0x4f6282:c.instructions+=2;goto B4f6282;
case 0x4f6284:c.instructions+=1;goto B4f6284;
case 0x4f6289:goto L4f6289;
case 0x4f628a:c.instructions+=5;goto B4f628a;
case 0x4f628f:c.instructions+=4;goto B4f628f;
case 0x4f6293:c.instructions+=3;goto B4f6293;
case 0x4f6295:c.instructions+=2;goto B4f6295;
case 0x4f6296:c.instructions+=1;goto B4f6296;
case 0x4f629b:goto L4f629b;
case 0x4f629f:c.instructions+=2;goto B4f629f;
case 0x4f62a0:c.instructions+=1;goto B4f62a0;
case 0x4f62a5:goto L4f62a5;
case 0x4f62a8:c.instructions+=3;goto B4f62a8;
case 0x4f62a9:c.instructions+=2;goto B4f62a9;
case 0x4f62aa:c.instructions+=1;goto B4f62aa;
case 0x4f62af:goto L4f62af;
case 0x4f62b1:c.instructions+=3;goto B4f62b1;
case 0x4f62b4:c.instructions+=2;goto B4f62b4;
case 0x4f62b6:c.instructions+=1;goto B4f62b6;
case 0x4f62b8:goto L4f62b8;
case 0x4f62bd:goto L4f62bd;
case 0x4f62bf:c.instructions+=1;goto B4f62bf;
case 0x4f62c1:goto L4f62c1;
case 0x4f62c4:c.instructions+=1;goto B4f62c4;
case 0x4f62c6:goto L4f62c6;
case 0x4f62c8:goto L4f62c8;
case 0x4f62cb:c.instructions+=4;goto B4f62cb;
case 0x4f62cd:c.instructions+=3;goto B4f62cd;
case 0x4f62d0:c.instructions+=2;goto B4f62d0;
case 0x4f62d3:c.instructions+=1;goto B4f62d3;
case 0x4f62d5:goto L4f62d5;
case 0x4f62d6:c.instructions+=2;goto B4f62d6;
case 0x4f62d9:c.instructions+=1;goto B4f62d9;
case 0x4f62de:goto L4f62de;
case 0x4f62df:c.instructions+=5;goto B4f62df;
case 0x4f62e4:c.instructions+=4;goto B4f62e4;
case 0x4f62e8:c.instructions+=3;goto B4f62e8;
case 0x4f62ea:c.instructions+=2;goto B4f62ea;
case 0x4f62eb:c.instructions+=1;goto B4f62eb;
case 0x4f62f0:goto L4f62f0;
case 0x4f62f4:c.instructions+=2;goto B4f62f4;
case 0x4f62f5:c.instructions+=1;goto B4f62f5;
case 0x4f62fa:goto L4f62fa;
case 0x4f62fd:c.instructions+=3;goto B4f62fd;
case 0x4f62fe:c.instructions+=2;goto B4f62fe;
case 0x4f62ff:c.instructions+=1;goto B4f62ff;
case 0x4f6304:goto L4f6304;
case 0x4f6306:c.instructions+=3;goto B4f6306;
case 0x4f6309:c.instructions+=2;goto B4f6309;
case 0x4f630b:c.instructions+=1;goto B4f630b;
case 0x4f630d:goto L4f630d;
case 0x4f6312:goto L4f6312;
case 0x4f6314:c.instructions+=1;goto B4f6314;
case 0x4f6316:goto L4f6316;
case 0x4f6319:c.instructions+=1;goto B4f6319;
case 0x4f631b:goto L4f631b;
case 0x4f631d:goto L4f631d;
case 0x4f6320:c.instructions+=4;goto B4f6320;
case 0x4f6322:c.instructions+=3;goto B4f6322;
case 0x4f6325:c.instructions+=2;goto B4f6325;
case 0x4f6328:c.instructions+=1;goto B4f6328;
case 0x4f632a:goto L4f632a;
case 0x4f632b:c.instructions+=2;goto B4f632b;
case 0x4f632e:c.instructions+=1;goto B4f632e;
case 0x4f6333:goto L4f6333;
case 0x4f6337:c.instructions+=6;goto B4f6337;
case 0x4f6339:c.instructions+=5;goto B4f6339;
case 0x4f633c:c.instructions+=4;goto B4f633c;
case 0x4f633e:c.instructions+=3;goto B4f633e;
case 0x4f6341:c.instructions+=2;goto B4f6341;
case 0x4f6346:c.instructions+=1;goto B4f6346;
case 0x4f6347:goto L4f6347;
case 0x4f6349:goto L4f6349;
case 0x4f634f:c.instructions+=5;goto B4f634f;
case 0x4f6352:c.instructions+=4;goto B4f6352;
case 0x4f6355:c.instructions+=3;goto B4f6355;
case 0x4f6357:c.instructions+=2;goto B4f6357;
case 0x4f635b:c.instructions+=1;goto B4f635b;
case 0x4f6361:goto L4f6361;
case 0x4f6363:goto L4f6363;
case 0x4f6368:c.instructions+=1;goto B4f6368;
case 0x4f636d:goto L4f636d;
case 0x4f6370:c.instructions+=3;goto B4f6370;
case 0x4f6371:c.instructions+=2;goto B4f6371;
case 0x4f6372:c.instructions+=1;goto B4f6372;
case 0x4f6377:goto L4f6377;
case 0x4f6379:c.instructions+=3;goto B4f6379;
case 0x4f637c:c.instructions+=2;goto B4f637c;
case 0x4f637e:c.instructions+=1;goto B4f637e;
case 0x4f6380:goto L4f6380;
case 0x4f6385:goto L4f6385;
case 0x4f6387:c.instructions+=1;goto B4f6387;
case 0x4f6389:goto L4f6389;
case 0x4f638c:c.instructions+=1;goto B4f638c;
case 0x4f638e:goto L4f638e;
case 0x4f6390:goto L4f6390;
case 0x4f6393:c.instructions+=4;goto B4f6393;
case 0x4f6395:c.instructions+=3;goto B4f6395;
case 0x4f6398:c.instructions+=2;goto B4f6398;
case 0x4f639b:c.instructions+=1;goto B4f639b;
case 0x4f639d:goto L4f639d;
case 0x4f63a2:c.instructions+=2;goto B4f63a2;
case 0x4f63a8:c.instructions+=1;goto B4f63a8;
case 0x4f63ad:goto L4f63ad;
case 0x4f63b0:c.instructions+=3;goto B4f63b0;
case 0x4f63b1:c.instructions+=2;goto B4f63b1;
case 0x4f63b2:c.instructions+=1;goto B4f63b2;
case 0x4f63b7:goto L4f63b7;
case 0x4f63b9:c.instructions+=3;goto B4f63b9;
case 0x4f63bc:c.instructions+=2;goto B4f63bc;
case 0x4f63be:c.instructions+=1;goto B4f63be;
case 0x4f63c0:goto L4f63c0;
case 0x4f63c5:goto L4f63c5;
case 0x4f63c7:c.instructions+=1;goto B4f63c7;
case 0x4f63c9:goto L4f63c9;
case 0x4f63cc:c.instructions+=1;goto B4f63cc;
case 0x4f63ce:goto L4f63ce;
case 0x4f63d0:goto L4f63d0;
case 0x4f63d3:c.instructions+=4;goto B4f63d3;
case 0x4f63d5:c.instructions+=3;goto B4f63d5;
case 0x4f63d8:c.instructions+=2;goto B4f63d8;
case 0x4f63db:c.instructions+=1;goto B4f63db;
case 0x4f63dd:goto L4f63dd;
case 0x4f63e1:c.instructions+=15;goto B4f63e1;
case 0x4f63e7:c.instructions+=14;goto B4f63e7;
case 0x4f63ec:c.instructions+=13;goto B4f63ec;
case 0x4f63f2:c.instructions+=12;goto B4f63f2;
case 0x4f63f3:c.instructions+=11;goto B4f63f3;
case 0x4f63f9:c.instructions+=10;goto B4f63f9;
case 0x4f6400:c.instructions+=9;goto B4f6400;
case 0x4f6407:c.instructions+=8;goto B4f6407;
case 0x4f640e:c.instructions+=7;goto B4f640e;
case 0x4f6410:c.instructions+=6;goto B4f6410;
case 0x4f6411:c.instructions+=5;goto B4f6411;
case 0x4f6412:c.instructions+=4;goto B4f6412;
case 0x4f6413:c.instructions+=3;goto B4f6413;
case 0x4f641a:c.instructions+=2;goto B4f641a;
case 0x4f641d:c.instructions+=1;goto B4f641d;
case 0x4f6420:goto L4f6420;
case 0x4f6422:c.instructions+=23;goto B4f6422;
case 0x4f6427:c.instructions+=22;goto B4f6427;
case 0x4f642d:c.instructions+=21;goto B4f642d;
case 0x4f642e:c.instructions+=20;goto B4f642e;
case 0x4f6435:c.instructions+=19;goto B4f6435;
case 0x4f6436:c.instructions+=18;goto B4f6436;
case 0x4f643a:c.instructions+=17;goto B4f643a;
case 0x4f643b:c.instructions+=16;goto B4f643b;
case 0x4f643c:c.instructions+=15;goto B4f643c;
case 0x4f643e:c.instructions+=14;goto B4f643e;
case 0x4f6440:c.instructions+=13;goto B4f6440;
case 0x4f6441:c.instructions+=12;goto B4f6441;
case 0x4f6445:c.instructions+=11;goto B4f6445;
case 0x4f6447:c.instructions+=10;goto B4f6447;
case 0x4f644a:c.instructions+=9;goto B4f644a;
case 0x4f644d:c.instructions+=8;goto B4f644d;
case 0x4f6454:c.instructions+=7;goto B4f6454;
case 0x4f6457:c.instructions+=6;goto B4f6457;
case 0x4f645a:c.instructions+=5;goto B4f645a;
case 0x4f645d:c.instructions+=4;goto B4f645d;
case 0x4f6462:c.instructions+=3;goto B4f6462;
case 0x4f6466:c.instructions+=2;goto B4f6466;
case 0x4f6469:c.instructions+=1;goto B4f6469;
case 0x4f646e:goto L4f646e;
case 0x4f6471:c.instructions+=3;goto B4f6471;
case 0x4f6472:c.instructions+=2;goto B4f6472;
case 0x4f6473:c.instructions+=1;goto B4f6473;
case 0x4f6478:goto L4f6478;
case 0x4f647a:c.instructions+=3;goto B4f647a;
case 0x4f647d:c.instructions+=2;goto B4f647d;
case 0x4f647f:c.instructions+=1;goto B4f647f;
case 0x4f6481:goto L4f6481;
case 0x4f6486:goto L4f6486;
case 0x4f6488:c.instructions+=1;goto B4f6488;
case 0x4f648a:goto L4f648a;
case 0x4f648d:c.instructions+=1;goto B4f648d;
case 0x4f648f:goto L4f648f;
case 0x4f6491:goto L4f6491;
case 0x4f6494:c.instructions+=4;goto B4f6494;
case 0x4f6496:c.instructions+=3;goto B4f6496;
case 0x4f6499:c.instructions+=2;goto B4f6499;
case 0x4f649c:c.instructions+=1;goto B4f649c;
case 0x4f649e:goto L4f649e;
case 0x4f64a3:c.instructions+=2;goto B4f64a3;
case 0x4f64a6:c.instructions+=1;goto B4f64a6;
case 0x4f64ab:goto L4f64ab;
case 0x4f64ae:c.instructions+=3;goto B4f64ae;
case 0x4f64af:c.instructions+=2;goto B4f64af;
case 0x4f64b0:c.instructions+=1;goto B4f64b0;
case 0x4f64b5:goto L4f64b5;
case 0x4f64b7:c.instructions+=3;goto B4f64b7;
case 0x4f64ba:c.instructions+=2;goto B4f64ba;
case 0x4f64bc:c.instructions+=1;goto B4f64bc;
case 0x4f64be:goto L4f64be;
case 0x4f64c3:goto L4f64c3;
case 0x4f64c5:c.instructions+=1;goto B4f64c5;
case 0x4f64c7:goto L4f64c7;
case 0x4f64ca:c.instructions+=1;goto B4f64ca;
case 0x4f64cc:goto L4f64cc;
case 0x4f64ce:goto L4f64ce;
case 0x4f64d1:c.instructions+=4;goto B4f64d1;
case 0x4f64d3:c.instructions+=3;goto B4f64d3;
case 0x4f64d6:c.instructions+=2;goto B4f64d6;
case 0x4f64d9:c.instructions+=1;goto B4f64d9;
case 0x4f64db:goto L4f64db;
case 0x4f64dc:c.instructions+=2;goto B4f64dc;
case 0x4f64df:c.instructions+=1;goto B4f64df;
case 0x4f64e4:goto L4f64e4;
case 0x4f64e8:c.instructions+=8;goto B4f64e8;
case 0x4f64eb:c.instructions+=7;goto B4f64eb;
case 0x4f64ec:c.instructions+=6;goto B4f64ec;
case 0x4f64ee:c.instructions+=5;goto B4f64ee;
case 0x4f64ef:c.instructions+=4;goto B4f64ef;
case 0x4f64f0:c.instructions+=3;goto B4f64f0;
case 0x4f64f7:c.instructions+=2;goto B4f64f7;
case 0x4f64fa:c.instructions+=1;goto B4f64fa;
case 0x4f6500:goto L4f6500;
case 0x4f6502:c.instructions+=24;goto B4f6502;
case 0x4f6507:c.instructions+=23;goto B4f6507;
case 0x4f650d:c.instructions+=22;goto B4f650d;
case 0x4f650e:c.instructions+=21;goto B4f650e;
case 0x4f6515:c.instructions+=20;goto B4f6515;
case 0x4f6518:c.instructions+=19;goto B4f6518;
case 0x4f651c:c.instructions+=18;goto B4f651c;
case 0x4f651d:c.instructions+=17;goto B4f651d;
case 0x4f651e:c.instructions+=16;goto B4f651e;
case 0x4f6520:c.instructions+=15;goto B4f6520;
case 0x4f6522:c.instructions+=14;goto B4f6522;
case 0x4f6523:c.instructions+=13;goto B4f6523;
case 0x4f6527:c.instructions+=12;goto B4f6527;
case 0x4f6529:c.instructions+=11;goto B4f6529;
case 0x4f652c:c.instructions+=10;goto B4f652c;
case 0x4f652f:c.instructions+=9;goto B4f652f;
case 0x4f6536:c.instructions+=8;goto B4f6536;
case 0x4f6539:c.instructions+=7;goto B4f6539;
case 0x4f653c:c.instructions+=6;goto B4f653c;
case 0x4f653f:c.instructions+=5;goto B4f653f;
case 0x4f6545:c.instructions+=4;goto B4f6545;
case 0x4f654a:c.instructions+=3;goto B4f654a;
case 0x4f654e:c.instructions+=2;goto B4f654e;
case 0x4f6554:c.instructions+=1;goto B4f6554;
case 0x4f6559:goto L4f6559;
case 0x4f655c:c.instructions+=3;goto B4f655c;
case 0x4f655d:c.instructions+=2;goto B4f655d;
case 0x4f655e:c.instructions+=1;goto B4f655e;
case 0x4f6563:goto L4f6563;
case 0x4f6565:c.instructions+=3;goto B4f6565;
case 0x4f6568:c.instructions+=2;goto B4f6568;
case 0x4f656a:c.instructions+=1;goto B4f656a;
case 0x4f656c:goto L4f656c;
case 0x4f6571:goto L4f6571;
case 0x4f6573:c.instructions+=1;goto B4f6573;
case 0x4f6575:goto L4f6575;
case 0x4f6578:c.instructions+=1;goto B4f6578;
case 0x4f657a:goto L4f657a;
case 0x4f657c:goto L4f657c;
case 0x4f657f:c.instructions+=4;goto B4f657f;
case 0x4f6581:c.instructions+=3;goto B4f6581;
case 0x4f6584:c.instructions+=2;goto B4f6584;
case 0x4f6587:c.instructions+=1;goto B4f6587;
case 0x4f6589:goto L4f6589;
case 0x4f658e:c.instructions+=1;goto B4f658e;
case 0x4f6593:goto L4f6593;
case 0x4f6596:c.instructions+=3;goto B4f6596;
case 0x4f6597:c.instructions+=2;goto B4f6597;
case 0x4f6598:c.instructions+=1;goto B4f6598;
case 0x4f659d:goto L4f659d;
case 0x4f659f:c.instructions+=3;goto B4f659f;
case 0x4f65a2:c.instructions+=2;goto B4f65a2;
case 0x4f65a4:c.instructions+=1;goto B4f65a4;
case 0x4f65a6:goto L4f65a6;
case 0x4f65ab:goto L4f65ab;
case 0x4f65ad:c.instructions+=1;goto B4f65ad;
case 0x4f65af:goto L4f65af;
case 0x4f65b2:c.instructions+=1;goto B4f65b2;
case 0x4f65b4:goto L4f65b4;
case 0x4f65b6:goto L4f65b6;
case 0x4f65b9:c.instructions+=4;goto B4f65b9;
case 0x4f65bb:c.instructions+=3;goto B4f65bb;
case 0x4f65be:c.instructions+=2;goto B4f65be;
case 0x4f65c1:c.instructions+=1;goto B4f65c1;
case 0x4f65c3:goto L4f65c3;
case 0x4f65c8:c.instructions+=1;goto B4f65c8;
case 0x4f65cd:goto L4f65cd;
case 0x4f65ce:c.instructions+=3;goto B4f65ce;
case 0x4f65d1:c.instructions+=2;goto B4f65d1;
case 0x4f65d2:c.instructions+=1;goto B4f65d2;
case 0x4f65d7:goto L4f65d7;
case 0x4f65d9:c.instructions+=3;goto B4f65d9;
case 0x4f65dc:c.instructions+=2;goto B4f65dc;
case 0x4f65de:c.instructions+=1;goto B4f65de;
case 0x4f65e0:goto L4f65e0;
case 0x4f65e5:goto L4f65e5;
case 0x4f65e7:c.instructions+=1;goto B4f65e7;
case 0x4f65e9:goto L4f65e9;
case 0x4f65ec:c.instructions+=1;goto B4f65ec;
case 0x4f65ee:goto L4f65ee;
case 0x4f65f0:goto L4f65f0;
case 0x4f65f3:c.instructions+=4;goto B4f65f3;
case 0x4f65f5:c.instructions+=3;goto B4f65f5;
case 0x4f65f8:c.instructions+=2;goto B4f65f8;
case 0x4f65fb:c.instructions+=1;goto B4f65fb;
case 0x4f65fd:goto L4f65fd;
case 0x4f6602:c.instructions+=1;goto B4f6602;
case 0x4f6607:goto L4f6607;
case 0x4f660a:c.instructions+=3;goto B4f660a;
case 0x4f660b:c.instructions+=2;goto B4f660b;
case 0x4f660c:c.instructions+=1;goto B4f660c;
case 0x4f6611:goto L4f6611;
case 0x4f6613:c.instructions+=3;goto B4f6613;
case 0x4f6616:c.instructions+=2;goto B4f6616;
case 0x4f6618:c.instructions+=1;goto B4f6618;
case 0x4f661a:goto L4f661a;
case 0x4f661f:goto L4f661f;
case 0x4f6621:c.instructions+=1;goto B4f6621;
case 0x4f6623:goto L4f6623;
case 0x4f6626:c.instructions+=1;goto B4f6626;
case 0x4f6628:goto L4f6628;
case 0x4f662a:goto L4f662a;
case 0x4f662d:c.instructions+=4;goto B4f662d;
case 0x4f662f:c.instructions+=3;goto B4f662f;
case 0x4f6632:c.instructions+=2;goto B4f6632;
case 0x4f6635:c.instructions+=1;goto B4f6635;
case 0x4f6637:goto L4f6637;
case 0x4f663c:c.instructions+=2;goto B4f663c;
case 0x4f663f:c.instructions+=1;goto B4f663f;
case 0x4f6644:goto L4f6644;
case 0x4f6647:c.instructions+=3;goto B4f6647;
case 0x4f6648:c.instructions+=2;goto B4f6648;
case 0x4f6649:c.instructions+=1;goto B4f6649;
case 0x4f664e:goto L4f664e;
case 0x4f6650:c.instructions+=3;goto B4f6650;
case 0x4f6653:c.instructions+=2;goto B4f6653;
case 0x4f6655:c.instructions+=1;goto B4f6655;
case 0x4f6657:goto L4f6657;
case 0x4f665c:goto L4f665c;
case 0x4f665e:c.instructions+=1;goto B4f665e;
case 0x4f6660:goto L4f6660;
case 0x4f6663:c.instructions+=1;goto B4f6663;
case 0x4f6665:goto L4f6665;
case 0x4f6667:goto L4f6667;
case 0x4f666a:c.instructions+=4;goto B4f666a;
case 0x4f666c:c.instructions+=3;goto B4f666c;
case 0x4f666f:c.instructions+=2;goto B4f666f;
case 0x4f6672:c.instructions+=1;goto B4f6672;
case 0x4f6674:goto L4f6674;
case 0x4f6679:c.instructions+=2;goto B4f6679;
case 0x4f667c:c.instructions+=1;goto B4f667c;
case 0x4f6681:goto L4f6681;
case 0x4f6682:c.instructions+=3;goto B4f6682;
case 0x4f6685:c.instructions+=2;goto B4f6685;
case 0x4f6686:c.instructions+=1;goto B4f6686;
case 0x4f668b:goto L4f668b;
case 0x4f668d:c.instructions+=3;goto B4f668d;
case 0x4f6690:c.instructions+=2;goto B4f6690;
case 0x4f6692:c.instructions+=1;goto B4f6692;
case 0x4f6694:goto L4f6694;
case 0x4f6699:goto L4f6699;
case 0x4f669b:c.instructions+=1;goto B4f669b;
case 0x4f669d:goto L4f669d;
case 0x4f66a0:c.instructions+=1;goto B4f66a0;
case 0x4f66a2:goto L4f66a2;
case 0x4f66a4:goto L4f66a4;
case 0x4f66a7:c.instructions+=4;goto B4f66a7;
case 0x4f66a9:c.instructions+=3;goto B4f66a9;
case 0x4f66ac:c.instructions+=2;goto B4f66ac;
case 0x4f66af:c.instructions+=1;goto B4f66af;
case 0x4f66b1:goto L4f66b1;
case 0x4f66b6:c.instructions+=2;goto B4f66b6;
case 0x4f66b9:c.instructions+=1;goto B4f66b9;
case 0x4f66be:goto L4f66be;
case 0x4f66c1:c.instructions+=3;goto B4f66c1;
case 0x4f66c2:c.instructions+=2;goto B4f66c2;
case 0x4f66c3:c.instructions+=1;goto B4f66c3;
case 0x4f66c8:goto L4f66c8;
case 0x4f66ca:c.instructions+=3;goto B4f66ca;
case 0x4f66cd:c.instructions+=2;goto B4f66cd;
case 0x4f66cf:c.instructions+=1;goto B4f66cf;
case 0x4f66d1:goto L4f66d1;
case 0x4f66d6:goto L4f66d6;
case 0x4f66d8:c.instructions+=1;goto B4f66d8;
case 0x4f66da:goto L4f66da;
case 0x4f66dd:c.instructions+=1;goto B4f66dd;
case 0x4f66df:goto L4f66df;
case 0x4f66e1:goto L4f66e1;
case 0x4f66e4:c.instructions+=4;goto B4f66e4;
case 0x4f66e6:c.instructions+=3;goto B4f66e6;
case 0x4f66e9:c.instructions+=2;goto B4f66e9;
case 0x4f66ec:c.instructions+=1;goto B4f66ec;
case 0x4f66ee:goto L4f66ee;
case 0x4f66f3:c.instructions+=2;goto B4f66f3;
case 0x4f66f6:c.instructions+=1;goto B4f66f6;
case 0x4f66fb:goto L4f66fb;
case 0x4f66fe:c.instructions+=3;goto B4f66fe;
case 0x4f66ff:c.instructions+=2;goto B4f66ff;
case 0x4f6700:c.instructions+=1;goto B4f6700;
case 0x4f6705:goto L4f6705;
case 0x4f6707:c.instructions+=3;goto B4f6707;
case 0x4f670a:c.instructions+=2;goto B4f670a;
case 0x4f670c:c.instructions+=1;goto B4f670c;
case 0x4f670e:goto L4f670e;
case 0x4f6713:goto L4f6713;
case 0x4f6715:c.instructions+=1;goto B4f6715;
case 0x4f6717:goto L4f6717;
case 0x4f671a:c.instructions+=1;goto B4f671a;
case 0x4f671c:goto L4f671c;
case 0x4f671e:goto L4f671e;
case 0x4f6721:c.instructions+=4;goto B4f6721;
case 0x4f6723:c.instructions+=3;goto B4f6723;
case 0x4f6726:c.instructions+=2;goto B4f6726;
case 0x4f6729:c.instructions+=1;goto B4f6729;
case 0x4f672b:goto L4f672b;
case 0x4f6730:c.instructions+=2;goto B4f6730;
case 0x4f6733:c.instructions+=1;goto B4f6733;
case 0x4f6738:goto L4f6738;
case 0x4f6739:c.instructions+=3;goto B4f6739;
case 0x4f673c:c.instructions+=2;goto B4f673c;
case 0x4f673d:c.instructions+=1;goto B4f673d;
case 0x4f6742:goto L4f6742;
case 0x4f6744:c.instructions+=3;goto B4f6744;
case 0x4f6747:c.instructions+=2;goto B4f6747;
case 0x4f6749:c.instructions+=1;goto B4f6749;
case 0x4f674b:goto L4f674b;
case 0x4f6750:goto L4f6750;
case 0x4f6752:c.instructions+=1;goto B4f6752;
case 0x4f6754:goto L4f6754;
case 0x4f6757:c.instructions+=1;goto B4f6757;
case 0x4f6759:goto L4f6759;
case 0x4f675b:goto L4f675b;
case 0x4f675e:c.instructions+=4;goto B4f675e;
case 0x4f6760:c.instructions+=3;goto B4f6760;
case 0x4f6763:c.instructions+=2;goto B4f6763;
case 0x4f6766:c.instructions+=1;goto B4f6766;
case 0x4f6768:goto L4f6768;
case 0x4f676d:c.instructions+=2;goto B4f676d;
case 0x4f6770:c.instructions+=1;goto B4f6770;
case 0x4f6775:goto L4f6775;
case 0x4f6778:c.instructions+=3;goto B4f6778;
case 0x4f6779:c.instructions+=2;goto B4f6779;
case 0x4f677a:c.instructions+=1;goto B4f677a;
case 0x4f677f:goto L4f677f;
case 0x4f6781:c.instructions+=3;goto B4f6781;
case 0x4f6784:c.instructions+=2;goto B4f6784;
case 0x4f6786:c.instructions+=1;goto B4f6786;
case 0x4f6788:goto L4f6788;
case 0x4f678d:goto L4f678d;
case 0x4f678f:c.instructions+=1;goto B4f678f;
case 0x4f6791:goto L4f6791;
case 0x4f6794:c.instructions+=1;goto B4f6794;
case 0x4f6796:goto L4f6796;
case 0x4f6798:goto L4f6798;
case 0x4f679b:c.instructions+=4;goto B4f679b;
case 0x4f679d:c.instructions+=3;goto B4f679d;
case 0x4f67a0:c.instructions+=2;goto B4f67a0;
case 0x4f67a3:c.instructions+=1;goto B4f67a3;
case 0x4f67a5:goto L4f67a5;
case 0x4f67aa:c.instructions+=2;goto B4f67aa;
case 0x4f67ad:c.instructions+=1;goto B4f67ad;
case 0x4f67b2:goto L4f67b2;
case 0x4f67b5:c.instructions+=3;goto B4f67b5;
case 0x4f67b6:c.instructions+=2;goto B4f67b6;
case 0x4f67b7:c.instructions+=1;goto B4f67b7;
case 0x4f67bc:goto L4f67bc;
case 0x4f67be:c.instructions+=3;goto B4f67be;
case 0x4f67c1:c.instructions+=2;goto B4f67c1;
case 0x4f67c3:c.instructions+=1;goto B4f67c3;
case 0x4f67c5:goto L4f67c5;
case 0x4f67ca:goto L4f67ca;
case 0x4f67cc:c.instructions+=1;goto B4f67cc;
case 0x4f67ce:goto L4f67ce;
case 0x4f67d1:c.instructions+=1;goto B4f67d1;
case 0x4f67d3:goto L4f67d3;
case 0x4f67d5:goto L4f67d5;
case 0x4f67d8:c.instructions+=4;goto B4f67d8;
case 0x4f67da:c.instructions+=3;goto B4f67da;
case 0x4f67dd:c.instructions+=2;goto B4f67dd;
case 0x4f67e0:c.instructions+=1;goto B4f67e0;
case 0x4f67e2:goto L4f67e2;
case 0x4f67e7:c.instructions+=2;goto B4f67e7;
case 0x4f67e9:c.instructions+=1;goto B4f67e9;
case 0x4f67eb:goto L4f67eb;
case 0x4f67ee:c.instructions+=2;goto B4f67ee;
case 0x4f67ef:c.instructions+=1;goto B4f67ef;
case 0x4f67f4:goto L4f67f4;
case 0x4f67f7:c.instructions+=2;goto B4f67f7;
case 0x4f67f8:c.instructions+=1;goto B4f67f8;
case 0x4f67fd:goto L4f67fd;
case 0x4f6800:goto L4f6800;
case 0x4f6805:c.instructions+=1;goto B4f6805;
case 0x4f680a:goto L4f680a;
case 0x4f680d:c.instructions+=3;goto B4f680d;
case 0x4f680e:c.instructions+=2;goto B4f680e;
case 0x4f680f:c.instructions+=1;goto B4f680f;
case 0x4f6814:goto L4f6814;
case 0x4f6816:c.instructions+=3;goto B4f6816;
case 0x4f6819:c.instructions+=2;goto B4f6819;
case 0x4f681b:c.instructions+=1;goto B4f681b;
case 0x4f681d:goto L4f681d;
case 0x4f6822:goto L4f6822;
case 0x4f6824:c.instructions+=1;goto B4f6824;
case 0x4f6826:goto L4f6826;
case 0x4f6829:c.instructions+=1;goto B4f6829;
case 0x4f682b:goto L4f682b;
case 0x4f682d:goto L4f682d;
case 0x4f6830:c.instructions+=4;goto B4f6830;
case 0x4f6832:c.instructions+=3;goto B4f6832;
case 0x4f6835:c.instructions+=2;goto B4f6835;
case 0x4f6838:c.instructions+=1;goto B4f6838;
case 0x4f683a:goto L4f683a;
case 0x4f683d:c.instructions+=3;goto B4f683d;
case 0x4f683f:c.instructions+=2;goto B4f683f;
case 0x4f6842:c.instructions+=1;goto B4f6842;
case 0x4f6843:goto L4f6843;
case 0x4f6846:c.instructions+=6;goto B4f6846;
case 0x4f6847:c.instructions+=5;goto B4f6847;
case 0x4f684c:c.instructions+=4;goto B4f684c;
case 0x4f6850:c.instructions+=3;goto B4f6850;
case 0x4f6852:c.instructions+=2;goto B4f6852;
case 0x4f6853:c.instructions+=1;goto B4f6853;
case 0x4f6858:goto L4f6858;
case 0x4f685c:c.instructions+=2;goto B4f685c;
case 0x4f685d:c.instructions+=1;goto B4f685d;
case 0x4f6862:goto L4f6862;
case 0x4f6865:c.instructions+=3;goto B4f6865;
case 0x4f6866:c.instructions+=2;goto B4f6866;
case 0x4f6867:c.instructions+=1;goto B4f6867;
case 0x4f686c:goto L4f686c;
case 0x4f686e:c.instructions+=3;goto B4f686e;
case 0x4f6871:c.instructions+=2;goto B4f6871;
case 0x4f6873:c.instructions+=1;goto B4f6873;
case 0x4f6875:goto L4f6875;
case 0x4f687a:goto L4f687a;
case 0x4f687c:c.instructions+=1;goto B4f687c;
case 0x4f687e:goto L4f687e;
case 0x4f6881:c.instructions+=1;goto B4f6881;
case 0x4f6883:goto L4f6883;
case 0x4f6885:goto L4f6885;
case 0x4f6888:c.instructions+=4;goto B4f6888;
case 0x4f688a:c.instructions+=3;goto B4f688a;
case 0x4f688d:c.instructions+=2;goto B4f688d;
case 0x4f6890:c.instructions+=1;goto B4f6890;
case 0x4f6892:goto L4f6892;
case 0x4f6894:c.instructions+=4;goto B4f6894;
case 0x4f6896:c.instructions+=3;goto B4f6896;
case 0x4f6899:c.instructions+=2;goto B4f6899;
case 0x4f689c:c.instructions+=1;goto B4f689c;
case 0x4f689e:goto L4f689e;
case 0x4f68a2:c.instructions+=3;goto B4f68a2;
case 0x4f68a3:c.instructions+=2;goto B4f68a3;
case 0x4f68a8:c.instructions+=1;goto B4f68a8;
case 0x4f68ad:goto L4f68ad;
case 0x4f68af:c.instructions+=4;goto B4f68af;
case 0x4f68b4:c.instructions+=3;goto B4f68b4;
case 0x4f68b5:c.instructions+=2;goto B4f68b5;
case 0x4f68b8:c.instructions+=1;goto B4f68b8;
case 0x4f68bd:goto L4f68bd;
case 0x4f68c2:c.instructions+=3;goto B4f68c2;
case 0x4f68c4:c.instructions+=2;goto B4f68c4;
case 0x4f68c5:c.instructions+=1;goto B4f68c5;
case 0x4f68c7:goto L4f68c7;
case 0x4f68c9:c.instructions+=1;goto B4f68c9;
case 0x4f68cb:goto L4f68cb;
case 0x4f68d2:c.instructions+=8;goto B4f68d2;
case 0x4f68d4:c.instructions+=7;goto B4f68d4;
case 0x4f68d8:c.instructions+=6;goto B4f68d8;
case 0x4f68d9:c.instructions+=5;goto B4f68d9;
case 0x4f68da:c.instructions+=4;goto B4f68da;
case 0x4f68db:c.instructions+=3;goto B4f68db;
case 0x4f68de:c.instructions+=2;goto B4f68de;
case 0x4f68df:c.instructions+=1;goto B4f68df;
case 0x4f68e4:goto L4f68e4;
case 0x4f68e8:c.instructions+=4;goto B4f68e8;
case 0x4f68ea:c.instructions+=3;goto B4f68ea;
case 0x4f68ec:c.instructions+=2;goto B4f68ec;
case 0x4f68ed:c.instructions+=1;goto B4f68ed;
case 0x4f68f2:goto L4f68f2;
case 0x4f68f5:c.instructions+=2;goto B4f68f5;
case 0x4f68f7:c.instructions+=1;goto B4f68f7;
case 0x4f68f9:goto L4f68f9;
case 0x4f68fd:c.instructions+=4;goto B4f68fd;
case 0x4f6900:c.instructions+=3;goto B4f6900;
case 0x4f6901:c.instructions+=2;goto B4f6901;
case 0x4f6902:c.instructions+=1;goto B4f6902;
case 0x4f6907:goto L4f6907;
case 0x4f690a:c.instructions+=1;goto B4f690a;
case 0x4f690c:goto L4f690c;
case 0x4f6912:goto L4f6912;
case 0x4f6916:c.instructions+=4;goto B4f6916;
case 0x4f6919:c.instructions+=3;goto B4f6919;
case 0x4f691a:c.instructions+=2;goto B4f691a;
case 0x4f691b:c.instructions+=1;goto B4f691b;
case 0x4f6920:goto L4f6920;
case 0x4f6923:goto L4f6923;
case 0x4f6926:c.instructions+=13;goto B4f6926;
case 0x4f6927:c.instructions+=12;goto B4f6927;
case 0x4f692b:c.instructions+=11;goto B4f692b;
case 0x4f692c:c.instructions+=10;goto B4f692c;
case 0x4f6932:c.instructions+=9;goto B4f6932;
case 0x4f6938:c.instructions+=8;goto B4f6938;
case 0x4f693f:c.instructions+=7;goto B4f693f;
case 0x4f6946:c.instructions+=6;goto B4f6946;
case 0x4f694d:c.instructions+=5;goto B4f694d;
case 0x4f6954:c.instructions+=4;goto B4f6954;
case 0x4f695b:c.instructions+=3;goto B4f695b;
case 0x4f6962:c.instructions+=2;goto B4f6962;
case 0x4f6969:c.instructions+=1;goto B4f6969;
case 0x4f696e:goto L4f696e;
case 0x4f6971:c.instructions+=2;goto B4f6971;
case 0x4f6973:c.instructions+=1;goto B4f6973;
case 0x4f6978:goto L4f6978;
case 0x4f697e:c.instructions+=5;goto B4f697e;
case 0x4f6981:c.instructions+=4;goto B4f6981;
case 0x4f6982:c.instructions+=3;goto B4f6982;
case 0x4f6986:c.instructions+=2;goto B4f6986;
case 0x4f6987:c.instructions+=1;goto B4f6987;
case 0x4f698c:goto L4f698c;
case 0x4f698f:c.instructions+=2;goto B4f698f;
case 0x4f6991:c.instructions+=1;goto B4f6991;
case 0x4f6996:goto L4f6996;
case 0x4f6998:c.instructions+=7;goto B4f6998;
case 0x4f699a:c.instructions+=6;goto B4f699a;
case 0x4f699c:c.instructions+=5;goto B4f699c;
case 0x4f69a2:c.instructions+=4;goto B4f69a2;
case 0x4f69ac:c.instructions+=3;goto B4f69ac;
case 0x4f69b2:c.instructions+=2;goto B4f69b2;
case 0x4f69b8:c.instructions+=1;goto B4f69b8;
case 0x4f69bd:goto L4f69bd;
case 0x4f69c1:c.instructions+=7;goto B4f69c1;
case 0x4f69c2:c.instructions+=6;goto B4f69c2;
case 0x4f69c4:c.instructions+=5;goto B4f69c4;
case 0x4f69c5:c.instructions+=4;goto B4f69c5;
case 0x4f69c6:c.instructions+=3;goto B4f69c6;
case 0x4f69cd:c.instructions+=2;goto B4f69cd;
case 0x4f69d0:c.instructions+=1;goto B4f69d0;
case 0x4f69e0:goto L4f69e0;
case 0x4f69e2:c.instructions+=25;goto B4f69e2;
case 0x4f69e7:c.instructions+=24;goto B4f69e7;
case 0x4f69ed:c.instructions+=23;goto B4f69ed;
case 0x4f69ee:c.instructions+=22;goto B4f69ee;
case 0x4f69f5:c.instructions+=21;goto B4f69f5;
case 0x4f69f6:c.instructions+=20;goto B4f69f6;
case 0x4f69fa:c.instructions+=19;goto B4f69fa;
case 0x4f69fb:c.instructions+=18;goto B4f69fb;
case 0x4f69fc:c.instructions+=17;goto B4f69fc;
case 0x4f69fe:c.instructions+=16;goto B4f69fe;
case 0x4f6a00:c.instructions+=15;goto B4f6a00;
case 0x4f6a01:c.instructions+=14;goto B4f6a01;
case 0x4f6a05:c.instructions+=13;goto B4f6a05;
case 0x4f6a07:c.instructions+=12;goto B4f6a07;
case 0x4f6a0a:c.instructions+=11;goto B4f6a0a;
case 0x4f6a0d:c.instructions+=10;goto B4f6a0d;
case 0x4f6a14:c.instructions+=9;goto B4f6a14;
case 0x4f6a17:c.instructions+=8;goto B4f6a17;
case 0x4f6a1a:c.instructions+=7;goto B4f6a1a;
case 0x4f6a1d:c.instructions+=6;goto B4f6a1d;
case 0x4f6a22:c.instructions+=5;goto B4f6a22;
case 0x4f6a26:c.instructions+=4;goto B4f6a26;
case 0x4f6a29:c.instructions+=3;goto B4f6a29;
case 0x4f6a2c:c.instructions+=2;goto B4f6a2c;
case 0x4f6a30:c.instructions+=1;goto B4f6a30;
case 0x4f6a35:goto L4f6a35;
case 0x4f6a38:c.instructions+=3;goto B4f6a38;
case 0x4f6a39:c.instructions+=2;goto B4f6a39;
case 0x4f6a3a:c.instructions+=1;goto B4f6a3a;
case 0x4f6a3f:goto L4f6a3f;
case 0x4f6a41:c.instructions+=3;goto B4f6a41;
case 0x4f6a44:c.instructions+=2;goto B4f6a44;
case 0x4f6a46:c.instructions+=1;goto B4f6a46;
case 0x4f6a48:goto L4f6a48;
case 0x4f6a4d:goto L4f6a4d;
case 0x4f6a4f:c.instructions+=1;goto B4f6a4f;
case 0x4f6a51:goto L4f6a51;
case 0x4f6a54:c.instructions+=1;goto B4f6a54;
case 0x4f6a56:goto L4f6a56;
case 0x4f6a58:goto L4f6a58;
case 0x4f6a5b:c.instructions+=4;goto B4f6a5b;
case 0x4f6a5d:c.instructions+=3;goto B4f6a5d;
case 0x4f6a60:c.instructions+=2;goto B4f6a60;
case 0x4f6a63:c.instructions+=1;goto B4f6a63;
case 0x4f6a65:goto L4f6a65;
case 0x4f6a66:c.instructions+=4;goto B4f6a66;
case 0x4f6a67:c.instructions+=3;goto B4f6a67;
case 0x4f6a69:c.instructions+=2;goto B4f6a69;
case 0x4f6a6c:c.instructions+=1;goto B4f6a6c;
case 0x4f6a71:goto L4f6a71;
case 0x4f6a75:c.instructions+=7;goto B4f6a75;
case 0x4f6a76:c.instructions+=6;goto B4f6a76;
case 0x4f6a78:c.instructions+=5;goto B4f6a78;
case 0x4f6a79:c.instructions+=4;goto B4f6a79;
case 0x4f6a7a:c.instructions+=3;goto B4f6a7a;
case 0x4f6a81:c.instructions+=2;goto B4f6a81;
case 0x4f6a84:c.instructions+=1;goto B4f6a84;
case 0x4f6a90:goto L4f6a90;
case 0x4f6a92:c.instructions+=25;goto B4f6a92;
case 0x4f6a97:c.instructions+=24;goto B4f6a97;
case 0x4f6a9d:c.instructions+=23;goto B4f6a9d;
case 0x4f6a9e:c.instructions+=22;goto B4f6a9e;
case 0x4f6aa5:c.instructions+=21;goto B4f6aa5;
case 0x4f6aa6:c.instructions+=20;goto B4f6aa6;
case 0x4f6aaa:c.instructions+=19;goto B4f6aaa;
case 0x4f6aab:c.instructions+=18;goto B4f6aab;
case 0x4f6aac:c.instructions+=17;goto B4f6aac;
case 0x4f6aae:c.instructions+=16;goto B4f6aae;
case 0x4f6ab0:c.instructions+=15;goto B4f6ab0;
case 0x4f6ab1:c.instructions+=14;goto B4f6ab1;
case 0x4f6ab5:c.instructions+=13;goto B4f6ab5;
case 0x4f6ab7:c.instructions+=12;goto B4f6ab7;
case 0x4f6aba:c.instructions+=11;goto B4f6aba;
case 0x4f6abd:c.instructions+=10;goto B4f6abd;
case 0x4f6ac0:c.instructions+=9;goto B4f6ac0;
case 0x4f6ac7:c.instructions+=8;goto B4f6ac7;
case 0x4f6aca:c.instructions+=7;goto B4f6aca;
case 0x4f6acd:c.instructions+=6;goto B4f6acd;
case 0x4f6ad2:c.instructions+=5;goto B4f6ad2;
case 0x4f6ad6:c.instructions+=4;goto B4f6ad6;
case 0x4f6ad9:c.instructions+=3;goto B4f6ad9;
case 0x4f6adc:c.instructions+=2;goto B4f6adc;
case 0x4f6adf:c.instructions+=1;goto B4f6adf;
case 0x4f6ae4:goto L4f6ae4;
case 0x4f6ae7:c.instructions+=3;goto B4f6ae7;
case 0x4f6ae8:c.instructions+=2;goto B4f6ae8;
case 0x4f6ae9:c.instructions+=1;goto B4f6ae9;
case 0x4f6aee:goto L4f6aee;
case 0x4f6af0:c.instructions+=3;goto B4f6af0;
case 0x4f6af3:c.instructions+=2;goto B4f6af3;
case 0x4f6af5:c.instructions+=1;goto B4f6af5;
case 0x4f6af7:goto L4f6af7;
case 0x4f6afc:goto L4f6afc;
case 0x4f6afe:c.instructions+=1;goto B4f6afe;
case 0x4f6b00:goto L4f6b00;
case 0x4f6b03:c.instructions+=1;goto B4f6b03;
case 0x4f6b05:goto L4f6b05;
case 0x4f6b07:goto L4f6b07;
case 0x4f6b0a:c.instructions+=4;goto B4f6b0a;
case 0x4f6b0c:c.instructions+=3;goto B4f6b0c;
case 0x4f6b0f:c.instructions+=2;goto B4f6b0f;
case 0x4f6b12:c.instructions+=1;goto B4f6b12;
case 0x4f6b14:goto L4f6b14;
case 0x4f6b19:c.instructions+=2;goto B4f6b19;
case 0x4f6b1c:c.instructions+=1;goto B4f6b1c;
case 0x4f6b21:goto L4f6b21;
case 0x4f6b24:c.instructions+=3;goto B4f6b24;
case 0x4f6b25:c.instructions+=2;goto B4f6b25;
case 0x4f6b26:c.instructions+=1;goto B4f6b26;
case 0x4f6b2b:goto L4f6b2b;
case 0x4f6b2d:c.instructions+=3;goto B4f6b2d;
case 0x4f6b30:c.instructions+=2;goto B4f6b30;
case 0x4f6b32:c.instructions+=1;goto B4f6b32;
case 0x4f6b34:goto L4f6b34;
case 0x4f6b39:goto L4f6b39;
case 0x4f6b3b:c.instructions+=1;goto B4f6b3b;
case 0x4f6b3d:goto L4f6b3d;
case 0x4f6b40:c.instructions+=1;goto B4f6b40;
case 0x4f6b42:goto L4f6b42;
case 0x4f6b44:goto L4f6b44;
case 0x4f6b47:c.instructions+=4;goto B4f6b47;
case 0x4f6b49:c.instructions+=3;goto B4f6b49;
case 0x4f6b4c:c.instructions+=2;goto B4f6b4c;
case 0x4f6b4f:c.instructions+=1;goto B4f6b4f;
case 0x4f6b51:goto L4f6b51;
case 0x4f6b56:c.instructions+=2;goto B4f6b56;
case 0x4f6b59:c.instructions+=1;goto B4f6b59;
case 0x4f6b5e:goto L4f6b5e;
case 0x4f6b5f:c.instructions+=3;goto B4f6b5f;
case 0x4f6b62:c.instructions+=2;goto B4f6b62;
case 0x4f6b63:c.instructions+=1;goto B4f6b63;
case 0x4f6b68:goto L4f6b68;
case 0x4f6b6a:c.instructions+=3;goto B4f6b6a;
case 0x4f6b6d:c.instructions+=2;goto B4f6b6d;
case 0x4f6b6f:c.instructions+=1;goto B4f6b6f;
case 0x4f6b71:goto L4f6b71;
case 0x4f6b76:goto L4f6b76;
case 0x4f6b78:c.instructions+=1;goto B4f6b78;
case 0x4f6b7a:goto L4f6b7a;
case 0x4f6b7d:c.instructions+=1;goto B4f6b7d;
case 0x4f6b7f:goto L4f6b7f;
case 0x4f6b81:goto L4f6b81;
case 0x4f6b84:c.instructions+=4;goto B4f6b84;
case 0x4f6b86:c.instructions+=3;goto B4f6b86;
case 0x4f6b89:c.instructions+=2;goto B4f6b89;
case 0x4f6b8c:c.instructions+=1;goto B4f6b8c;
case 0x4f6b8e:goto L4f6b8e;
case 0x4f6b93:c.instructions+=2;goto B4f6b93;
case 0x4f6b96:c.instructions+=1;goto B4f6b96;
case 0x4f6b9b:goto L4f6b9b;
case 0x4f6b9e:c.instructions+=3;goto B4f6b9e;
case 0x4f6b9f:c.instructions+=2;goto B4f6b9f;
case 0x4f6ba0:c.instructions+=1;goto B4f6ba0;
case 0x4f6ba5:goto L4f6ba5;
case 0x4f6ba7:c.instructions+=3;goto B4f6ba7;
case 0x4f6baa:c.instructions+=2;goto B4f6baa;
case 0x4f6bac:c.instructions+=1;goto B4f6bac;
case 0x4f6bae:goto L4f6bae;
case 0x4f6bb3:goto L4f6bb3;
case 0x4f6bb5:c.instructions+=1;goto B4f6bb5;
case 0x4f6bb7:goto L4f6bb7;
case 0x4f6bba:c.instructions+=1;goto B4f6bba;
case 0x4f6bbc:goto L4f6bbc;
case 0x4f6bbe:goto L4f6bbe;
case 0x4f6bc1:c.instructions+=4;goto B4f6bc1;
case 0x4f6bc3:c.instructions+=3;goto B4f6bc3;
case 0x4f6bc6:c.instructions+=2;goto B4f6bc6;
case 0x4f6bc9:c.instructions+=1;goto B4f6bc9;
case 0x4f6bcb:goto L4f6bcb;
case 0x4f6bcc:c.instructions+=5;goto B4f6bcc;
case 0x4f6bcd:c.instructions+=4;goto B4f6bcd;
case 0x4f6bcf:c.instructions+=3;goto B4f6bcf;
case 0x4f6bd6:c.instructions+=2;goto B4f6bd6;
case 0x4f6bdd:c.instructions+=1;goto B4f6bdd;
case 0x4f6be2:goto L4f6be2;
case 0x4f6be6:c.instructions+=7;goto B4f6be6;
case 0x4f6be7:c.instructions+=6;goto B4f6be7;
case 0x4f6be9:c.instructions+=5;goto B4f6be9;
case 0x4f6bea:c.instructions+=4;goto B4f6bea;
case 0x4f6beb:c.instructions+=3;goto B4f6beb;
case 0x4f6bf2:c.instructions+=2;goto B4f6bf2;
case 0x4f6bf5:c.instructions+=1;goto B4f6bf5;
case 0x4f6c00:goto L4f6c00;
case 0x4f6c02:c.instructions+=40;goto B4f6c02;
case 0x4f6c07:c.instructions+=39;goto B4f6c07;
case 0x4f6c0d:c.instructions+=38;goto B4f6c0d;
case 0x4f6c0e:c.instructions+=37;goto B4f6c0e;
case 0x4f6c15:c.instructions+=36;goto B4f6c15;
case 0x4f6c18:c.instructions+=35;goto B4f6c18;
case 0x4f6c1c:c.instructions+=34;goto B4f6c1c;
case 0x4f6c1d:c.instructions+=33;goto B4f6c1d;
case 0x4f6c1e:c.instructions+=32;goto B4f6c1e;
case 0x4f6c1f:c.instructions+=31;goto B4f6c1f;
case 0x4f6c21:c.instructions+=30;goto B4f6c21;
case 0x4f6c23:c.instructions+=29;goto B4f6c23;
case 0x4f6c24:c.instructions+=28;goto B4f6c24;
case 0x4f6c28:c.instructions+=27;goto B4f6c28;
case 0x4f6c2a:c.instructions+=26;goto B4f6c2a;
case 0x4f6c2d:c.instructions+=25;goto B4f6c2d;
case 0x4f6c30:c.instructions+=24;goto B4f6c30;
case 0x4f6c37:c.instructions+=23;goto B4f6c37;
case 0x4f6c3a:c.instructions+=22;goto B4f6c3a;
case 0x4f6c3d:c.instructions+=21;goto B4f6c3d;
case 0x4f6c40:c.instructions+=20;goto B4f6c40;
case 0x4f6c43:c.instructions+=19;goto B4f6c43;
case 0x4f6c46:c.instructions+=18;goto B4f6c46;
case 0x4f6c49:c.instructions+=17;goto B4f6c49;
case 0x4f6c50:c.instructions+=16;goto B4f6c50;
case 0x4f6c57:c.instructions+=15;goto B4f6c57;
case 0x4f6c5a:c.instructions+=14;goto B4f6c5a;
case 0x4f6c5d:c.instructions+=13;goto B4f6c5d;
case 0x4f6c60:c.instructions+=12;goto B4f6c60;
case 0x4f6c63:c.instructions+=11;goto B4f6c63;
case 0x4f6c69:c.instructions+=10;goto B4f6c69;
case 0x4f6c6f:c.instructions+=9;goto B4f6c6f;
case 0x4f6c74:c.instructions+=8;goto B4f6c74;
case 0x4f6c78:c.instructions+=7;goto B4f6c78;
case 0x4f6c7b:c.instructions+=6;goto B4f6c7b;
case 0x4f6c81:c.instructions+=5;goto B4f6c81;
case 0x4f6c87:c.instructions+=4;goto B4f6c87;
case 0x4f6c8d:c.instructions+=3;goto B4f6c8d;
case 0x4f6c93:c.instructions+=2;goto B4f6c93;
case 0x4f6c99:c.instructions+=1;goto B4f6c99;
case 0x4f6c9e:goto L4f6c9e;
case 0x4f6ca1:c.instructions+=3;goto B4f6ca1;
case 0x4f6ca2:c.instructions+=2;goto B4f6ca2;
case 0x4f6ca3:c.instructions+=1;goto B4f6ca3;
case 0x4f6ca8:goto L4f6ca8;
case 0x4f6caa:c.instructions+=3;goto B4f6caa;
case 0x4f6cad:c.instructions+=2;goto B4f6cad;
case 0x4f6caf:c.instructions+=1;goto B4f6caf;
case 0x4f6cb1:goto L4f6cb1;
case 0x4f6cb6:goto L4f6cb6;
case 0x4f6cb8:c.instructions+=1;goto B4f6cb8;
case 0x4f6cba:goto L4f6cba;
case 0x4f6cbd:c.instructions+=1;goto B4f6cbd;
case 0x4f6cbf:goto L4f6cbf;
case 0x4f6cc1:goto L4f6cc1;
case 0x4f6cc4:c.instructions+=4;goto B4f6cc4;
case 0x4f6cc6:c.instructions+=3;goto B4f6cc6;
case 0x4f6cc9:c.instructions+=2;goto B4f6cc9;
case 0x4f6ccc:c.instructions+=1;goto B4f6ccc;
case 0x4f6cce:goto L4f6cce;
case 0x4f6cd3:c.instructions+=3;goto B4f6cd3;
case 0x4f6cd4:c.instructions+=2;goto B4f6cd4;
case 0x4f6cd7:c.instructions+=1;goto B4f6cd7;
case 0x4f6cdc:goto L4f6cdc;
case 0x4f6ce1:c.instructions+=1;goto B4f6ce1;
case 0x4f6ce6:goto L4f6ce6;
case 0x4f6ce9:c.instructions+=3;goto B4f6ce9;
case 0x4f6cea:c.instructions+=2;goto B4f6cea;
case 0x4f6ceb:c.instructions+=1;goto B4f6ceb;
case 0x4f6cf0:goto L4f6cf0;
case 0x4f6cf2:c.instructions+=3;goto B4f6cf2;
case 0x4f6cf5:c.instructions+=2;goto B4f6cf5;
case 0x4f6cf7:c.instructions+=1;goto B4f6cf7;
case 0x4f6cf9:goto L4f6cf9;
case 0x4f6cfe:goto L4f6cfe;
case 0x4f6d00:c.instructions+=1;goto B4f6d00;
case 0x4f6d02:goto L4f6d02;
case 0x4f6d05:c.instructions+=1;goto B4f6d05;
case 0x4f6d07:goto L4f6d07;
case 0x4f6d09:goto L4f6d09;
case 0x4f6d0c:c.instructions+=4;goto B4f6d0c;
case 0x4f6d0e:c.instructions+=3;goto B4f6d0e;
case 0x4f6d11:c.instructions+=2;goto B4f6d11;
case 0x4f6d14:c.instructions+=1;goto B4f6d14;
case 0x4f6d16:goto L4f6d16;
case 0x4f6d1b:c.instructions+=2;goto B4f6d1b;
case 0x4f6d1e:c.instructions+=1;goto B4f6d1e;
case 0x4f6d23:goto L4f6d23;
case 0x4f6d24:c.instructions+=3;goto B4f6d24;
case 0x4f6d27:c.instructions+=2;goto B4f6d27;
case 0x4f6d28:c.instructions+=1;goto B4f6d28;
case 0x4f6d2d:goto L4f6d2d;
case 0x4f6d2f:c.instructions+=3;goto B4f6d2f;
case 0x4f6d32:c.instructions+=2;goto B4f6d32;
case 0x4f6d34:c.instructions+=1;goto B4f6d34;
case 0x4f6d36:goto L4f6d36;
case 0x4f6d3b:goto L4f6d3b;
case 0x4f6d3d:c.instructions+=1;goto B4f6d3d;
case 0x4f6d3f:goto L4f6d3f;
case 0x4f6d42:c.instructions+=1;goto B4f6d42;
case 0x4f6d44:goto L4f6d44;
case 0x4f6d46:goto L4f6d46;
case 0x4f6d49:c.instructions+=4;goto B4f6d49;
case 0x4f6d4b:c.instructions+=3;goto B4f6d4b;
case 0x4f6d4e:c.instructions+=2;goto B4f6d4e;
case 0x4f6d51:c.instructions+=1;goto B4f6d51;
case 0x4f6d53:goto L4f6d53;
case 0x4f6d58:c.instructions+=2;goto B4f6d58;
case 0x4f6d5b:c.instructions+=1;goto B4f6d5b;
case 0x4f6d60:goto L4f6d60;
case 0x4f6d63:c.instructions+=3;goto B4f6d63;
case 0x4f6d64:c.instructions+=2;goto B4f6d64;
case 0x4f6d65:c.instructions+=1;goto B4f6d65;
case 0x4f6d6a:goto L4f6d6a;
case 0x4f6d6c:c.instructions+=3;goto B4f6d6c;
case 0x4f6d6f:c.instructions+=2;goto B4f6d6f;
case 0x4f6d71:c.instructions+=1;goto B4f6d71;
case 0x4f6d73:goto L4f6d73;
case 0x4f6d78:goto L4f6d78;
case 0x4f6d7a:c.instructions+=1;goto B4f6d7a;
case 0x4f6d7c:goto L4f6d7c;
case 0x4f6d7f:c.instructions+=1;goto B4f6d7f;
case 0x4f6d81:goto L4f6d81;
case 0x4f6d83:goto L4f6d83;
case 0x4f6d86:c.instructions+=4;goto B4f6d86;
case 0x4f6d88:c.instructions+=3;goto B4f6d88;
case 0x4f6d8b:c.instructions+=2;goto B4f6d8b;
case 0x4f6d8e:c.instructions+=1;goto B4f6d8e;
case 0x4f6d90:goto L4f6d90;
case 0x4f6d93:c.instructions+=3;goto B4f6d93;
case 0x4f6d96:c.instructions+=2;goto B4f6d96;
case 0x4f6d9b:c.instructions+=1;goto B4f6d9b;
case 0x4f6da0:goto L4f6da0;
case 0x4f6da1:c.instructions+=2;goto B4f6da1;
case 0x4f6da2:c.instructions+=1;goto B4f6da2;
case 0x4f6da7:goto L4f6da7;
case 0x4f6daa:c.instructions+=3;goto B4f6daa;
case 0x4f6daf:c.instructions+=2;goto B4f6daf;
case 0x4f6db2:c.instructions+=1;goto B4f6db2;
case 0x4f6db7:goto L4f6db7;
case 0x4f6db8:c.instructions+=2;goto B4f6db8;
case 0x4f6db9:c.instructions+=1;goto B4f6db9;
case 0x4f6dbe:goto L4f6dbe;
case 0x4f6dc1:c.instructions+=3;goto B4f6dc1;
case 0x4f6dc2:c.instructions+=2;goto B4f6dc2;
case 0x4f6dc5:c.instructions+=1;goto B4f6dc5;
case 0x4f6dca:goto L4f6dca;
case 0x4f6dcd:c.instructions+=2;goto B4f6dcd;
case 0x4f6dce:c.instructions+=1;goto B4f6dce;
case 0x4f6dd3:goto L4f6dd3;
case 0x4f6dd8:c.instructions+=1;goto B4f6dd8;
case 0x4f6ddd:goto L4f6ddd;
case 0x4f6de0:c.instructions+=3;goto B4f6de0;
case 0x4f6de1:c.instructions+=2;goto B4f6de1;
case 0x4f6de2:c.instructions+=1;goto B4f6de2;
case 0x4f6de7:goto L4f6de7;
case 0x4f6de9:c.instructions+=3;goto B4f6de9;
case 0x4f6dec:c.instructions+=2;goto B4f6dec;
case 0x4f6dee:c.instructions+=1;goto B4f6dee;
case 0x4f6df0:goto L4f6df0;
case 0x4f6df5:goto L4f6df5;
case 0x4f6df7:c.instructions+=1;goto B4f6df7;
case 0x4f6df9:goto L4f6df9;
case 0x4f6dfc:c.instructions+=1;goto B4f6dfc;
case 0x4f6dfe:goto L4f6dfe;
case 0x4f6e00:goto L4f6e00;
case 0x4f6e03:c.instructions+=4;goto B4f6e03;
case 0x4f6e05:c.instructions+=3;goto B4f6e05;
case 0x4f6e08:c.instructions+=2;goto B4f6e08;
case 0x4f6e0b:c.instructions+=1;goto B4f6e0b;
case 0x4f6e0d:goto L4f6e0d;
case 0x4f6e12:c.instructions+=1;goto B4f6e12;
case 0x4f6e17:goto L4f6e17;
case 0x4f6e1a:c.instructions+=3;goto B4f6e1a;
case 0x4f6e1b:c.instructions+=2;goto B4f6e1b;
case 0x4f6e1c:c.instructions+=1;goto B4f6e1c;
case 0x4f6e21:goto L4f6e21;
case 0x4f6e23:c.instructions+=3;goto B4f6e23;
case 0x4f6e26:c.instructions+=2;goto B4f6e26;
case 0x4f6e28:c.instructions+=1;goto B4f6e28;
case 0x4f6e2a:goto L4f6e2a;
case 0x4f6e2f:goto L4f6e2f;
case 0x4f6e31:c.instructions+=1;goto B4f6e31;
case 0x4f6e33:goto L4f6e33;
case 0x4f6e36:c.instructions+=1;goto B4f6e36;
case 0x4f6e38:goto L4f6e38;
case 0x4f6e3a:goto L4f6e3a;
case 0x4f6e3d:c.instructions+=4;goto B4f6e3d;
case 0x4f6e3f:c.instructions+=3;goto B4f6e3f;
case 0x4f6e42:c.instructions+=2;goto B4f6e42;
case 0x4f6e45:c.instructions+=1;goto B4f6e45;
case 0x4f6e47:goto L4f6e47;
case 0x4f6e4c:c.instructions+=2;goto B4f6e4c;
case 0x4f6e4f:c.instructions+=1;goto B4f6e4f;
case 0x4f6e54:goto L4f6e54;
case 0x4f6e55:c.instructions+=3;goto B4f6e55;
case 0x4f6e58:c.instructions+=2;goto B4f6e58;
case 0x4f6e59:c.instructions+=1;goto B4f6e59;
case 0x4f6e5e:goto L4f6e5e;
case 0x4f6e60:c.instructions+=3;goto B4f6e60;
case 0x4f6e63:c.instructions+=2;goto B4f6e63;
case 0x4f6e65:c.instructions+=1;goto B4f6e65;
case 0x4f6e67:goto L4f6e67;
case 0x4f6e6c:goto L4f6e6c;
case 0x4f6e6e:c.instructions+=1;goto B4f6e6e;
case 0x4f6e70:goto L4f6e70;
case 0x4f6e73:c.instructions+=1;goto B4f6e73;
case 0x4f6e75:goto L4f6e75;
case 0x4f6e77:goto L4f6e77;
case 0x4f6e7a:c.instructions+=4;goto B4f6e7a;
case 0x4f6e7c:c.instructions+=3;goto B4f6e7c;
case 0x4f6e7f:c.instructions+=2;goto B4f6e7f;
case 0x4f6e82:c.instructions+=1;goto B4f6e82;
case 0x4f6e84:goto L4f6e84;
case 0x4f6e89:c.instructions+=2;goto B4f6e89;
case 0x4f6e8c:c.instructions+=1;goto B4f6e8c;
case 0x4f6e91:goto L4f6e91;
case 0x4f6e94:c.instructions+=3;goto B4f6e94;
case 0x4f6e95:c.instructions+=2;goto B4f6e95;
case 0x4f6e96:c.instructions+=1;goto B4f6e96;
case 0x4f6e9b:goto L4f6e9b;
case 0x4f6e9d:c.instructions+=3;goto B4f6e9d;
case 0x4f6ea0:c.instructions+=2;goto B4f6ea0;
case 0x4f6ea2:c.instructions+=1;goto B4f6ea2;
case 0x4f6ea4:goto L4f6ea4;
case 0x4f6ea9:goto L4f6ea9;
case 0x4f6eab:c.instructions+=1;goto B4f6eab;
case 0x4f6ead:goto L4f6ead;
case 0x4f6eb0:c.instructions+=1;goto B4f6eb0;
case 0x4f6eb2:goto L4f6eb2;
case 0x4f6eb4:goto L4f6eb4;
case 0x4f6eb7:c.instructions+=4;goto B4f6eb7;
case 0x4f6eb9:c.instructions+=3;goto B4f6eb9;
case 0x4f6ebc:c.instructions+=2;goto B4f6ebc;
case 0x4f6ebf:c.instructions+=1;goto B4f6ebf;
case 0x4f6ec1:goto L4f6ec1;
case 0x4f6ec6:c.instructions+=2;goto B4f6ec6;
case 0x4f6ec9:c.instructions+=1;goto B4f6ec9;
case 0x4f6ece:goto L4f6ece;
case 0x4f6ed1:c.instructions+=3;goto B4f6ed1;
case 0x4f6ed2:c.instructions+=2;goto B4f6ed2;
case 0x4f6ed3:c.instructions+=1;goto B4f6ed3;
case 0x4f6ed8:goto L4f6ed8;
case 0x4f6eda:c.instructions+=3;goto B4f6eda;
case 0x4f6edd:c.instructions+=2;goto B4f6edd;
case 0x4f6edf:c.instructions+=1;goto B4f6edf;
case 0x4f6ee1:goto L4f6ee1;
case 0x4f6ee6:goto L4f6ee6;
case 0x4f6ee8:c.instructions+=1;goto B4f6ee8;
case 0x4f6eea:goto L4f6eea;
case 0x4f6eed:c.instructions+=1;goto B4f6eed;
case 0x4f6eef:goto L4f6eef;
case 0x4f6ef1:goto L4f6ef1;
case 0x4f6ef4:c.instructions+=4;goto B4f6ef4;
case 0x4f6ef6:c.instructions+=3;goto B4f6ef6;
case 0x4f6ef9:c.instructions+=2;goto B4f6ef9;
case 0x4f6efc:c.instructions+=1;goto B4f6efc;
case 0x4f6efe:goto L4f6efe;
case 0x4f6f03:c.instructions+=2;goto B4f6f03;
case 0x4f6f06:c.instructions+=1;goto B4f6f06;
case 0x4f6f0b:goto L4f6f0b;
case 0x4f6f0c:c.instructions+=3;goto B4f6f0c;
case 0x4f6f0f:c.instructions+=2;goto B4f6f0f;
case 0x4f6f10:c.instructions+=1;goto B4f6f10;
case 0x4f6f15:goto L4f6f15;
case 0x4f6f17:c.instructions+=3;goto B4f6f17;
case 0x4f6f1a:c.instructions+=2;goto B4f6f1a;
case 0x4f6f1c:c.instructions+=1;goto B4f6f1c;
case 0x4f6f1e:goto L4f6f1e;
case 0x4f6f23:goto L4f6f23;
case 0x4f6f25:c.instructions+=1;goto B4f6f25;
case 0x4f6f27:goto L4f6f27;
case 0x4f6f2a:c.instructions+=1;goto B4f6f2a;
case 0x4f6f2c:goto L4f6f2c;
case 0x4f6f2e:goto L4f6f2e;
case 0x4f6f31:c.instructions+=4;goto B4f6f31;
case 0x4f6f33:c.instructions+=3;goto B4f6f33;
case 0x4f6f36:c.instructions+=2;goto B4f6f36;
case 0x4f6f39:c.instructions+=1;goto B4f6f39;
case 0x4f6f3b:goto L4f6f3b;
case 0x4f6f40:c.instructions+=2;goto B4f6f40;
case 0x4f6f43:c.instructions+=1;goto B4f6f43;
case 0x4f6f48:goto L4f6f48;
case 0x4f6f4b:c.instructions+=3;goto B4f6f4b;
case 0x4f6f4c:c.instructions+=2;goto B4f6f4c;
case 0x4f6f4d:c.instructions+=1;goto B4f6f4d;
case 0x4f6f52:goto L4f6f52;
case 0x4f6f54:c.instructions+=3;goto B4f6f54;
case 0x4f6f57:c.instructions+=2;goto B4f6f57;
case 0x4f6f59:c.instructions+=1;goto B4f6f59;
case 0x4f6f5b:goto L4f6f5b;
case 0x4f6f60:goto L4f6f60;
case 0x4f6f62:c.instructions+=1;goto B4f6f62;
case 0x4f6f64:goto L4f6f64;
case 0x4f6f67:c.instructions+=1;goto B4f6f67;
case 0x4f6f69:goto L4f6f69;
case 0x4f6f6b:goto L4f6f6b;
case 0x4f6f6e:c.instructions+=4;goto B4f6f6e;
case 0x4f6f70:c.instructions+=3;goto B4f6f70;
case 0x4f6f73:c.instructions+=2;goto B4f6f73;
case 0x4f6f76:c.instructions+=1;goto B4f6f76;
case 0x4f6f78:goto L4f6f78;
case 0x4f6f7d:c.instructions+=2;goto B4f6f7d;
case 0x4f6f80:c.instructions+=1;goto B4f6f80;
case 0x4f6f85:goto L4f6f85;
case 0x4f6f88:c.instructions+=3;goto B4f6f88;
case 0x4f6f89:c.instructions+=2;goto B4f6f89;
case 0x4f6f8a:c.instructions+=1;goto B4f6f8a;
case 0x4f6f8f:goto L4f6f8f;
case 0x4f6f91:c.instructions+=3;goto B4f6f91;
case 0x4f6f94:c.instructions+=2;goto B4f6f94;
case 0x4f6f96:c.instructions+=1;goto B4f6f96;
case 0x4f6f98:goto L4f6f98;
case 0x4f6f9d:goto L4f6f9d;
case 0x4f6f9f:c.instructions+=1;goto B4f6f9f;
case 0x4f6fa1:goto L4f6fa1;
case 0x4f6fa4:c.instructions+=1;goto B4f6fa4;
case 0x4f6fa6:goto L4f6fa6;
case 0x4f6fa8:goto L4f6fa8;
case 0x4f6fab:c.instructions+=4;goto B4f6fab;
case 0x4f6fad:c.instructions+=3;goto B4f6fad;
case 0x4f6fb0:c.instructions+=2;goto B4f6fb0;
case 0x4f6fb3:c.instructions+=1;goto B4f6fb3;
case 0x4f6fb5:goto L4f6fb5;
case 0x4f6fba:c.instructions+=2;goto B4f6fba;
case 0x4f6fbd:c.instructions+=1;goto B4f6fbd;
case 0x4f6fc2:goto L4f6fc2;
case 0x4f6fc3:c.instructions+=3;goto B4f6fc3;
case 0x4f6fc6:c.instructions+=2;goto B4f6fc6;
case 0x4f6fc7:c.instructions+=1;goto B4f6fc7;
case 0x4f6fcc:goto L4f6fcc;
case 0x4f6fce:c.instructions+=3;goto B4f6fce;
case 0x4f6fd1:c.instructions+=2;goto B4f6fd1;
case 0x4f6fd3:c.instructions+=1;goto B4f6fd3;
case 0x4f6fd5:goto L4f6fd5;
case 0x4f6fda:goto L4f6fda;
case 0x4f6fdc:c.instructions+=1;goto B4f6fdc;
case 0x4f6fde:goto L4f6fde;
case 0x4f6fe1:c.instructions+=1;goto B4f6fe1;
case 0x4f6fe3:goto L4f6fe3;
case 0x4f6fe5:goto L4f6fe5;
case 0x4f6fe8:c.instructions+=4;goto B4f6fe8;
case 0x4f6fea:c.instructions+=3;goto B4f6fea;
case 0x4f6fed:c.instructions+=2;goto B4f6fed;
case 0x4f6ff0:c.instructions+=1;goto B4f6ff0;
case 0x4f6ff2:goto L4f6ff2;
case 0x4f6ff6:c.instructions+=2;goto B4f6ff6;
case 0x4f6ffd:c.instructions+=1;goto B4f6ffd;
default:missing_instruction(c.pc);}
B4f6000:L4f6000:{c.instructions+=12;NFSU2_TR(0x4f6000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6003:{NFSU2_TR(0x4f6003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6006:{NFSU2_TR(0x4f6006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6009:{NFSU2_TR(0x4f6009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f600a:{NFSU2_TR(0x4f600a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f600e:{NFSU2_TR(0x4f600e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6012:{NFSU2_TR(0x4f6012);
__builtin_memmove((R+0),(R+24),4);
}
B4f6014:{NFSU2_TR(0x4f6014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f6015:{NFSU2_TR(0x4f6015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6016:{NFSU2_TR(0x4f6016);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f601d:{NFSU2_TR(0x4f601d);
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
B4f6020:{NFSU2_TR(0x4f6020);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6030:L4f6030:{c.instructions+=26;NFSU2_TR(0x4f6030);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6032:{NFSU2_TR(0x4f6032);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6037:{NFSU2_TR(0x4f6037);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f603d:{NFSU2_TR(0x4f603d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f603e:{NFSU2_TR(0x4f603e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6045:{NFSU2_TR(0x4f6045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6046:{NFSU2_TR(0x4f6046);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f604a:{NFSU2_TR(0x4f604a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f604b:{NFSU2_TR(0x4f604b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f604c:{NFSU2_TR(0x4f604c);
__builtin_memmove((R+24),(R+4),4);
}
B4f604e:{NFSU2_TR(0x4f604e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6050:{NFSU2_TR(0x4f6050);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6051:{NFSU2_TR(0x4f6051);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6055:{NFSU2_TR(0x4f6055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6057:{NFSU2_TR(0x4f6057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f605a:{NFSU2_TR(0x4f605a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f605d:{NFSU2_TR(0x4f605d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6064:{NFSU2_TR(0x4f6064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6067:{NFSU2_TR(0x4f6067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f606a:{NFSU2_TR(0x4f606a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f606d:{NFSU2_TR(0x4f606d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6070:{NFSU2_TR(0x4f6070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6073:{NFSU2_TR(0x4f6073);
u8 U[4];
w4(U+0,u32(0x798760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6078:{NFSU2_TR(0x4f6078);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f607c:{NFSU2_TR(0x4f607c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f607f:{NFSU2_TR(0x4f607f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6084ull));
TAIL_STATIC(0x505450u,505);
}
B4f6084:L4f6084:{c.instructions+=4;NFSU2_TR(0x4f6084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6087:{NFSU2_TR(0x4f6087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6088:{NFSU2_TR(0x4f6088);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6089:{NFSU2_TR(0x4f6089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f608eull));
TAIL_STATIC(0x537a10u,537);
}
B4f608e:L4f608e:{c.instructions+=4;NFSU2_TR(0x4f608e);
__builtin_memmove((R+28),(R+0),4);
}
B4f6090:{NFSU2_TR(0x4f6090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6093:{NFSU2_TR(0x4f6093);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6095:{NFSU2_TR(0x4f6095);
if(r1(R+518)){{goto L4f60b4;}}
}
B4f6097:L4f6097:{c.instructions+=1;NFSU2_TR(0x4f6097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f609cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f609c:L4f609c:{c.instructions+=2;NFSU2_TR(0x4f609c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f609e:{NFSU2_TR(0x4f609e);
if(r1(R+518)){{goto L4f60a5;}}
}
B4f60a0:L4f60a0:{c.instructions+=2;NFSU2_TR(0x4f60a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60a3:{NFSU2_TR(0x4f60a3);
{goto L4f60a7;}
}
B4f60a5:L4f60a5:{c.instructions+=1;NFSU2_TR(0x4f60a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f60a7:L4f60a7:{c.instructions+=5;NFSU2_TR(0x4f60a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f60aa:{NFSU2_TR(0x4f60aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f60ac:{NFSU2_TR(0x4f60ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60af:{NFSU2_TR(0x4f60af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60b2:{NFSU2_TR(0x4f60b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f60b4:L4f60b4:{c.instructions+=3;NFSU2_TR(0x4f60b4);
u8 U[4];
w4(U+0,u32(0x79874cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f60b9:{NFSU2_TR(0x4f60b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60bc:{NFSU2_TR(0x4f60bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f60c1ull));
TAIL_STATIC(0x505450u,505);
}
B4f60c1:L4f60c1:{c.instructions+=4;NFSU2_TR(0x4f60c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f60c4:{NFSU2_TR(0x4f60c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f60c5:{NFSU2_TR(0x4f60c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f60c6:{NFSU2_TR(0x4f60c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f60cbull));
TAIL_STATIC(0x537a10u,537);
}
B4f60cb:L4f60cb:{c.instructions+=4;NFSU2_TR(0x4f60cb);
__builtin_memmove((R+28),(R+0),4);
}
B4f60cd:{NFSU2_TR(0x4f60cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f60d0:{NFSU2_TR(0x4f60d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f60d2:{NFSU2_TR(0x4f60d2);
if(r1(R+518)){{goto L4f60f1;}}
}
B4f60d4:L4f60d4:{c.instructions+=1;NFSU2_TR(0x4f60d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f60d9ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f60d9:L4f60d9:{c.instructions+=2;NFSU2_TR(0x4f60d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f60db:{NFSU2_TR(0x4f60db);
if(r1(R+518)){{goto L4f60e2;}}
}
B4f60dd:L4f60dd:{c.instructions+=2;NFSU2_TR(0x4f60dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60e0:{NFSU2_TR(0x4f60e0);
{goto L4f60e4;}
}
B4f60e2:L4f60e2:{c.instructions+=1;NFSU2_TR(0x4f60e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f60e4:L4f60e4:{c.instructions+=5;NFSU2_TR(0x4f60e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f60e7:{NFSU2_TR(0x4f60e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f60e9:{NFSU2_TR(0x4f60e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60ec:{NFSU2_TR(0x4f60ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60ef:{NFSU2_TR(0x4f60ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f60f1:L4f60f1:{c.instructions+=15;NFSU2_TR(0x4f60f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f60f5:{NFSU2_TR(0x4f60f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60f8:{NFSU2_TR(0x4f60f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f60fb:{NFSU2_TR(0x4f60fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f60fe:{NFSU2_TR(0x4f60fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6101:{NFSU2_TR(0x4f6101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6104:{NFSU2_TR(0x4f6104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f6105:{NFSU2_TR(0x4f6105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0xff962020ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f610c:{NFSU2_TR(0x4f610c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0xff00ff00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6113:{NFSU2_TR(0x4f6113);
__builtin_memmove((R+0),(R+24),4);
}
B4f6115:{NFSU2_TR(0x4f6115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f6116:{NFSU2_TR(0x4f6116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6117:{NFSU2_TR(0x4f6117);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f611e:{NFSU2_TR(0x4f611e);
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
B4f6121:{NFSU2_TR(0x4f6121);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6130:L4f6130:{c.instructions+=25;NFSU2_TR(0x4f6130);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6132:{NFSU2_TR(0x4f6132);
u8 U[4];
w4(U+0,u32(0x7768f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6137:{NFSU2_TR(0x4f6137);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f613d:{NFSU2_TR(0x4f613d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f613e:{NFSU2_TR(0x4f613e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6145:{NFSU2_TR(0x4f6145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4f6148:{NFSU2_TR(0x4f6148);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f614c:{NFSU2_TR(0x4f614c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f614d:{NFSU2_TR(0x4f614d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f614e:{NFSU2_TR(0x4f614e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f614f:{NFSU2_TR(0x4f614f);
__builtin_memmove((R+24),(R+4),4);
}
B4f6151:{NFSU2_TR(0x4f6151);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4f6153:{NFSU2_TR(0x4f6153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6154:{NFSU2_TR(0x4f6154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6158:{NFSU2_TR(0x4f6158);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f615a:{NFSU2_TR(0x4f615a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f615d:{NFSU2_TR(0x4f615d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6160:{NFSU2_TR(0x4f6160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6167:{NFSU2_TR(0x4f6167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f616a:{NFSU2_TR(0x4f616a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f616d:{NFSU2_TR(0x4f616d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6170:{NFSU2_TR(0x4f6170);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6174:{NFSU2_TR(0x4f6174);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f6177:{NFSU2_TR(0x4f6177);
w4(R+12,u32(0x6ull));
}
B4f617c:{NFSU2_TR(0x4f617c);
__builtin_memmove((R+16),(R+16),4);
}
B4f6180:L4f6180:{c.instructions+=9;NFSU2_TR(0x4f6180);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6185:{NFSU2_TR(0x4f6185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6188:{NFSU2_TR(0x4f6188);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f618b:{NFSU2_TR(0x4f618b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f618d:{NFSU2_TR(0x4f618d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f618e:{NFSU2_TR(0x4f618e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f6194:{NFSU2_TR(0x4f6194);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f619b:{NFSU2_TR(0x4f619b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f619e:{NFSU2_TR(0x4f619e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f61a3ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f61a3:L4f61a3:{c.instructions+=5;NFSU2_TR(0x4f61a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f61a6:{NFSU2_TR(0x4f61a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f61a9:{NFSU2_TR(0x4f61a9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x34ull))));
}
B4f61ac:{NFSU2_TR(0x4f61ac);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4f61ad:{NFSU2_TR(0x4f61ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f6180u);}goto L4f6180;}}
}
B4f61af:L4f61af:{c.instructions+=4;NFSU2_TR(0x4f61af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f61b9:{NFSU2_TR(0x4f61b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f61bf:{NFSU2_TR(0x4f61bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f61c5:{NFSU2_TR(0x4f61c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f6363;}}
}
B4f61cb:L4f61cb:{c.instructions+=4;NFSU2_TR(0x4f61cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4f61d1:{NFSU2_TR(0x4f61d1);
w4(R+20,u32(0x1ull));
}
B4f61d6:{NFSU2_TR(0x4f61d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f61da:{NFSU2_TR(0x4f61da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f61e0:L4f61e0:{c.instructions+=6;NFSU2_TR(0x4f61e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f61e1:{NFSU2_TR(0x4f61e1);
u8 U[4];
w4(U+0,u32(0x7987c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f61e6:{NFSU2_TR(0x4f61e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f61ea:{NFSU2_TR(0x4f61ea);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f61ec:{NFSU2_TR(0x4f61ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f61ed:{NFSU2_TR(0x4f61ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f61f2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f61f2:L4f61f2:{c.instructions+=3;NFSU2_TR(0x4f61f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f61f6:{NFSU2_TR(0x4f61f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f61f7:{NFSU2_TR(0x4f61f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f61fcull));
TAIL_STATIC(0x505450u,505);
}
B4f61fc:L4f61fc:{c.instructions+=4;NFSU2_TR(0x4f61fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f61ff:{NFSU2_TR(0x4f61ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6200:{NFSU2_TR(0x4f6200);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6201:{NFSU2_TR(0x4f6201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6206ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6206:L4f6206:{c.instructions+=4;NFSU2_TR(0x4f6206);
__builtin_memmove((R+28),(R+0),4);
}
B4f6208:{NFSU2_TR(0x4f6208);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f620b:{NFSU2_TR(0x4f620b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f620d:{NFSU2_TR(0x4f620d);
if(r1(R+518)){{goto L4f622c;}}
}
B4f620f:L4f620f:{c.instructions+=1;NFSU2_TR(0x4f620f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6214ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6214:L4f6214:{c.instructions+=2;NFSU2_TR(0x4f6214);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f6216:{NFSU2_TR(0x4f6216);
if(r1(R+518)){{goto L4f621d;}}
}
B4f6218:L4f6218:{c.instructions+=2;NFSU2_TR(0x4f6218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f621b:{NFSU2_TR(0x4f621b);
{goto L4f621f;}
}
B4f621d:L4f621d:{c.instructions+=1;NFSU2_TR(0x4f621d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f621f:L4f621f:{c.instructions+=5;NFSU2_TR(0x4f621f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6222:{NFSU2_TR(0x4f6222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6224:{NFSU2_TR(0x4f6224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6227:{NFSU2_TR(0x4f6227);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f622a:{NFSU2_TR(0x4f622a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f622c:L4f622c:{c.instructions+=3;NFSU2_TR(0x4f622c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f622d:{NFSU2_TR(0x4f622d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6230:{NFSU2_TR(0x4f6230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6235ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f6235:L4f6235:{c.instructions+=6;NFSU2_TR(0x4f6235);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6236:{NFSU2_TR(0x4f6236);
u8 U[4];
w4(U+0,u32(0x7987b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f623b:{NFSU2_TR(0x4f623b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f623f:{NFSU2_TR(0x4f623f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6241:{NFSU2_TR(0x4f6241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6242:{NFSU2_TR(0x4f6242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6247ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f6247:L4f6247:{c.instructions+=3;NFSU2_TR(0x4f6247);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f624b:{NFSU2_TR(0x4f624b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f624c:{NFSU2_TR(0x4f624c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6251ull));
TAIL_STATIC(0x505450u,505);
}
B4f6251:L4f6251:{c.instructions+=4;NFSU2_TR(0x4f6251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6254:{NFSU2_TR(0x4f6254);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6255:{NFSU2_TR(0x4f6255);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6256:{NFSU2_TR(0x4f6256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f625bull));
TAIL_STATIC(0x537a60u,537);
}
B4f625b:L4f625b:{c.instructions+=4;NFSU2_TR(0x4f625b);
__builtin_memmove((R+28),(R+0),4);
}
B4f625d:{NFSU2_TR(0x4f625d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f6260:{NFSU2_TR(0x4f6260);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f6262:{NFSU2_TR(0x4f6262);
if(r1(R+518)){{goto L4f6281;}}
}
B4f6264:L4f6264:{c.instructions+=1;NFSU2_TR(0x4f6264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6269ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6269:L4f6269:{c.instructions+=2;NFSU2_TR(0x4f6269);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f626b:{NFSU2_TR(0x4f626b);
if(r1(R+518)){{goto L4f6272;}}
}
B4f626d:L4f626d:{c.instructions+=2;NFSU2_TR(0x4f626d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6270:{NFSU2_TR(0x4f6270);
{goto L4f6274;}
}
B4f6272:L4f6272:{c.instructions+=1;NFSU2_TR(0x4f6272);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6274:L4f6274:{c.instructions+=5;NFSU2_TR(0x4f6274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6277:{NFSU2_TR(0x4f6277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6279:{NFSU2_TR(0x4f6279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f627c:{NFSU2_TR(0x4f627c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f627f:{NFSU2_TR(0x4f627f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6281:L4f6281:{c.instructions+=3;NFSU2_TR(0x4f6281);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6282:{NFSU2_TR(0x4f6282);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f6284:{NFSU2_TR(0x4f6284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6289ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f6289:L4f6289:{c.instructions+=6;NFSU2_TR(0x4f6289);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f628a:{NFSU2_TR(0x4f628a);
u8 U[4];
w4(U+0,u32(0x7987a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f628f:{NFSU2_TR(0x4f628f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f6293:{NFSU2_TR(0x4f6293);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6295:{NFSU2_TR(0x4f6295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6296:{NFSU2_TR(0x4f6296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f629bull));
TAIL_STATIC(0x50c960u,50c);
}
B4f629b:L4f629b:{c.instructions+=3;NFSU2_TR(0x4f629b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f629f:{NFSU2_TR(0x4f629f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62a0:{NFSU2_TR(0x4f62a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62a5ull));
TAIL_STATIC(0x505450u,505);
}
B4f62a5:L4f62a5:{c.instructions+=4;NFSU2_TR(0x4f62a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f62a8:{NFSU2_TR(0x4f62a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62a9:{NFSU2_TR(0x4f62a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62aa:{NFSU2_TR(0x4f62aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62afull));
TAIL_STATIC(0x537a10u,537);
}
B4f62af:L4f62af:{c.instructions+=4;NFSU2_TR(0x4f62af);
__builtin_memmove((R+28),(R+0),4);
}
B4f62b1:{NFSU2_TR(0x4f62b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f62b4:{NFSU2_TR(0x4f62b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f62b6:{NFSU2_TR(0x4f62b6);
if(r1(R+518)){{goto L4f62d5;}}
}
B4f62b8:L4f62b8:{c.instructions+=1;NFSU2_TR(0x4f62b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62bdull));
TAIL_STATIC(0x440ec0u,440);
}
B4f62bd:L4f62bd:{c.instructions+=2;NFSU2_TR(0x4f62bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f62bf:{NFSU2_TR(0x4f62bf);
if(r1(R+518)){{goto L4f62c6;}}
}
B4f62c1:L4f62c1:{c.instructions+=2;NFSU2_TR(0x4f62c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f62c4:{NFSU2_TR(0x4f62c4);
{goto L4f62c8;}
}
B4f62c6:L4f62c6:{c.instructions+=1;NFSU2_TR(0x4f62c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f62c8:L4f62c8:{c.instructions+=5;NFSU2_TR(0x4f62c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f62cb:{NFSU2_TR(0x4f62cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f62cd:{NFSU2_TR(0x4f62cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f62d0:{NFSU2_TR(0x4f62d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f62d3:{NFSU2_TR(0x4f62d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f62d5:L4f62d5:{c.instructions+=3;NFSU2_TR(0x4f62d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62d6:{NFSU2_TR(0x4f62d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f62d9:{NFSU2_TR(0x4f62d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62deull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f62de:L4f62de:{c.instructions+=6;NFSU2_TR(0x4f62de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62df:{NFSU2_TR(0x4f62df);
u8 U[4];
w4(U+0,u32(0x798790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62e4:{NFSU2_TR(0x4f62e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f62e8:{NFSU2_TR(0x4f62e8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62ea:{NFSU2_TR(0x4f62ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62eb:{NFSU2_TR(0x4f62eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62f0ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f62f0:L4f62f0:{c.instructions+=3;NFSU2_TR(0x4f62f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f62f4:{NFSU2_TR(0x4f62f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62f5:{NFSU2_TR(0x4f62f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f62faull));
TAIL_STATIC(0x505450u,505);
}
B4f62fa:L4f62fa:{c.instructions+=4;NFSU2_TR(0x4f62fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f62fd:{NFSU2_TR(0x4f62fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62fe:{NFSU2_TR(0x4f62fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f62ff:{NFSU2_TR(0x4f62ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6304ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6304:L4f6304:{c.instructions+=4;NFSU2_TR(0x4f6304);
__builtin_memmove((R+28),(R+0),4);
}
B4f6306:{NFSU2_TR(0x4f6306);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f6309:{NFSU2_TR(0x4f6309);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f630b:{NFSU2_TR(0x4f630b);
if(r1(R+518)){{goto L4f632a;}}
}
B4f630d:L4f630d:{c.instructions+=1;NFSU2_TR(0x4f630d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6312ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6312:L4f6312:{c.instructions+=2;NFSU2_TR(0x4f6312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f6314:{NFSU2_TR(0x4f6314);
if(r1(R+518)){{goto L4f631b;}}
}
B4f6316:L4f6316:{c.instructions+=2;NFSU2_TR(0x4f6316);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6319:{NFSU2_TR(0x4f6319);
{goto L4f631d;}
}
B4f631b:L4f631b:{c.instructions+=1;NFSU2_TR(0x4f631b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f631d:L4f631d:{c.instructions+=5;NFSU2_TR(0x4f631d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6320:{NFSU2_TR(0x4f6320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6322:{NFSU2_TR(0x4f6322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6325:{NFSU2_TR(0x4f6325);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6328:{NFSU2_TR(0x4f6328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f632a:L4f632a:{c.instructions+=3;NFSU2_TR(0x4f632a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f632b:{NFSU2_TR(0x4f632b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f632e:{NFSU2_TR(0x4f632e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6333ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f6333:L4f6333:{c.instructions+=7;NFSU2_TR(0x4f6333);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6337:{NFSU2_TR(0x4f6337);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6339:{NFSU2_TR(0x4f6339);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f633c:{NFSU2_TR(0x4f633c);
__builtin_memmove((R+28),(R+8),4);
}
B4f633e:{NFSU2_TR(0x4f633e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4f6341:{NFSU2_TR(0x4f6341);
w4(R+4,u32(0xcull));
}
B4f6346:{NFSU2_TR(0x4f6346);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4f6347:L4f6347:{c.instructions+=1;NFSU2_TR(0x4f6347);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4f6349;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f6347u);}goto L4f6347;}
}
B4f6349:L4f6349:{c.instructions+=6;NFSU2_TR(0x4f6349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f634f:{NFSU2_TR(0x4f634f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B4f6352:{NFSU2_TR(0x4f6352);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f6355:{NFSU2_TR(0x4f6355);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f6357:{NFSU2_TR(0x4f6357);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f635b:{NFSU2_TR(0x4f635b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f61e0u);}goto L4f61e0;}}
}
B4f6361:L4f6361:{c.instructions+=1;NFSU2_TR(0x4f6361);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4f6363:L4f6363:{c.instructions+=2;NFSU2_TR(0x4f6363);
u8 U[4];
w4(U+0,u32(0x798780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6368:{NFSU2_TR(0x4f6368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f636dull));
TAIL_STATIC(0x505450u,505);
}
B4f636d:L4f636d:{c.instructions+=4;NFSU2_TR(0x4f636d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6370:{NFSU2_TR(0x4f6370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6371:{NFSU2_TR(0x4f6371);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6372:{NFSU2_TR(0x4f6372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6377ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6377:L4f6377:{c.instructions+=4;NFSU2_TR(0x4f6377);
__builtin_memmove((R+28),(R+0),4);
}
B4f6379:{NFSU2_TR(0x4f6379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f637c:{NFSU2_TR(0x4f637c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f637e:{NFSU2_TR(0x4f637e);
if(r1(R+518)){{goto L4f639d;}}
}
B4f6380:L4f6380:{c.instructions+=1;NFSU2_TR(0x4f6380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6385ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6385:L4f6385:{c.instructions+=2;NFSU2_TR(0x4f6385);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6387:{NFSU2_TR(0x4f6387);
if(r1(R+518)){{goto L4f638e;}}
}
B4f6389:L4f6389:{c.instructions+=2;NFSU2_TR(0x4f6389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f638c:{NFSU2_TR(0x4f638c);
{goto L4f6390;}
}
B4f638e:L4f638e:{c.instructions+=1;NFSU2_TR(0x4f638e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6390:L4f6390:{c.instructions+=5;NFSU2_TR(0x4f6390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6393:{NFSU2_TR(0x4f6393);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6395:{NFSU2_TR(0x4f6395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6398:{NFSU2_TR(0x4f6398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f639b:{NFSU2_TR(0x4f639b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f639d:L4f639d:{c.instructions+=3;NFSU2_TR(0x4f639d);
u8 U[4];
w4(U+0,u32(0x798770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f63a2:{NFSU2_TR(0x4f63a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63a8:{NFSU2_TR(0x4f63a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f63adull));
TAIL_STATIC(0x505450u,505);
}
B4f63ad:L4f63ad:{c.instructions+=4;NFSU2_TR(0x4f63ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f63b0:{NFSU2_TR(0x4f63b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f63b1:{NFSU2_TR(0x4f63b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f63b2:{NFSU2_TR(0x4f63b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f63b7ull));
TAIL_STATIC(0x537a60u,537);
}
B4f63b7:L4f63b7:{c.instructions+=4;NFSU2_TR(0x4f63b7);
__builtin_memmove((R+28),(R+0),4);
}
B4f63b9:{NFSU2_TR(0x4f63b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f63bc:{NFSU2_TR(0x4f63bc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f63be:{NFSU2_TR(0x4f63be);
if(r1(R+518)){{goto L4f63dd;}}
}
B4f63c0:L4f63c0:{c.instructions+=1;NFSU2_TR(0x4f63c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f63c5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f63c5:L4f63c5:{c.instructions+=2;NFSU2_TR(0x4f63c5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f63c7:{NFSU2_TR(0x4f63c7);
if(r1(R+518)){{goto L4f63ce;}}
}
B4f63c9:L4f63c9:{c.instructions+=2;NFSU2_TR(0x4f63c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63cc:{NFSU2_TR(0x4f63cc);
{goto L4f63d0;}
}
B4f63ce:L4f63ce:{c.instructions+=1;NFSU2_TR(0x4f63ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f63d0:L4f63d0:{c.instructions+=5;NFSU2_TR(0x4f63d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f63d3:{NFSU2_TR(0x4f63d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f63d5:{NFSU2_TR(0x4f63d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63d8:{NFSU2_TR(0x4f63d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63db:{NFSU2_TR(0x4f63db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f63dd:L4f63dd:{c.instructions+=16;NFSU2_TR(0x4f63dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f63e1:{NFSU2_TR(0x4f63e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63e7:{NFSU2_TR(0x4f63e7);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4f63ec:{NFSU2_TR(0x4f63ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63f2:{NFSU2_TR(0x4f63f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f63f3:{NFSU2_TR(0x4f63f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f63f9:{NFSU2_TR(0x4f63f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6400:{NFSU2_TR(0x4f6400);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6407:{NFSU2_TR(0x4f6407);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f640e:{NFSU2_TR(0x4f640e);
__builtin_memmove((R+0),(R+24),4);
}
B4f6410:{NFSU2_TR(0x4f6410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f6411:{NFSU2_TR(0x4f6411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f6412:{NFSU2_TR(0x4f6412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6413:{NFSU2_TR(0x4f6413);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f641a:{NFSU2_TR(0x4f641a);
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
B4f641d:{NFSU2_TR(0x4f641d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6420:L4f6420:{c.instructions+=24;NFSU2_TR(0x4f6420);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6422:{NFSU2_TR(0x4f6422);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6427:{NFSU2_TR(0x4f6427);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f642d:{NFSU2_TR(0x4f642d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f642e:{NFSU2_TR(0x4f642e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6435:{NFSU2_TR(0x4f6435);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6436:{NFSU2_TR(0x4f6436);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f643a:{NFSU2_TR(0x4f643a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f643b:{NFSU2_TR(0x4f643b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f643c:{NFSU2_TR(0x4f643c);
__builtin_memmove((R+24),(R+4),4);
}
B4f643e:{NFSU2_TR(0x4f643e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6440:{NFSU2_TR(0x4f6440);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6441:{NFSU2_TR(0x4f6441);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6445:{NFSU2_TR(0x4f6445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6447:{NFSU2_TR(0x4f6447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f644a:{NFSU2_TR(0x4f644a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f644d:{NFSU2_TR(0x4f644d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6454:{NFSU2_TR(0x4f6454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6457:{NFSU2_TR(0x4f6457);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f645a:{NFSU2_TR(0x4f645a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f645d:{NFSU2_TR(0x4f645d);
u8 U[4];
w4(U+0,u32(0x7987e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6462:{NFSU2_TR(0x4f6462);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6466:{NFSU2_TR(0x4f6466);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6469:{NFSU2_TR(0x4f6469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f646eull));
TAIL_STATIC(0x505450u,505);
}
B4f646e:L4f646e:{c.instructions+=4;NFSU2_TR(0x4f646e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6471:{NFSU2_TR(0x4f6471);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6472:{NFSU2_TR(0x4f6472);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6473:{NFSU2_TR(0x4f6473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6478ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6478:L4f6478:{c.instructions+=4;NFSU2_TR(0x4f6478);
__builtin_memmove((R+28),(R+0),4);
}
B4f647a:{NFSU2_TR(0x4f647a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f647d:{NFSU2_TR(0x4f647d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f647f:{NFSU2_TR(0x4f647f);
if(r1(R+518)){{goto L4f649e;}}
}
B4f6481:L4f6481:{c.instructions+=1;NFSU2_TR(0x4f6481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6486ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6486:L4f6486:{c.instructions+=2;NFSU2_TR(0x4f6486);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6488:{NFSU2_TR(0x4f6488);
if(r1(R+518)){{goto L4f648f;}}
}
B4f648a:L4f648a:{c.instructions+=2;NFSU2_TR(0x4f648a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f648d:{NFSU2_TR(0x4f648d);
{goto L4f6491;}
}
B4f648f:L4f648f:{c.instructions+=1;NFSU2_TR(0x4f648f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6491:L4f6491:{c.instructions+=5;NFSU2_TR(0x4f6491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6494:{NFSU2_TR(0x4f6494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6496:{NFSU2_TR(0x4f6496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6499:{NFSU2_TR(0x4f6499);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f649c:{NFSU2_TR(0x4f649c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f649e:L4f649e:{c.instructions+=3;NFSU2_TR(0x4f649e);
u8 U[4];
w4(U+0,u32(0x7987d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f64a3:{NFSU2_TR(0x4f64a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64a6:{NFSU2_TR(0x4f64a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f64abull));
TAIL_STATIC(0x505450u,505);
}
B4f64ab:L4f64ab:{c.instructions+=4;NFSU2_TR(0x4f64ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f64ae:{NFSU2_TR(0x4f64ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f64af:{NFSU2_TR(0x4f64af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f64b0:{NFSU2_TR(0x4f64b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f64b5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f64b5:L4f64b5:{c.instructions+=4;NFSU2_TR(0x4f64b5);
__builtin_memmove((R+28),(R+0),4);
}
B4f64b7:{NFSU2_TR(0x4f64b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f64ba:{NFSU2_TR(0x4f64ba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f64bc:{NFSU2_TR(0x4f64bc);
if(r1(R+518)){{goto L4f64db;}}
}
B4f64be:L4f64be:{c.instructions+=1;NFSU2_TR(0x4f64be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f64c3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f64c3:L4f64c3:{c.instructions+=2;NFSU2_TR(0x4f64c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f64c5:{NFSU2_TR(0x4f64c5);
if(r1(R+518)){{goto L4f64cc;}}
}
B4f64c7:L4f64c7:{c.instructions+=2;NFSU2_TR(0x4f64c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64ca:{NFSU2_TR(0x4f64ca);
{goto L4f64ce;}
}
B4f64cc:L4f64cc:{c.instructions+=1;NFSU2_TR(0x4f64cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f64ce:L4f64ce:{c.instructions+=5;NFSU2_TR(0x4f64ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f64d1:{NFSU2_TR(0x4f64d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f64d3:{NFSU2_TR(0x4f64d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64d6:{NFSU2_TR(0x4f64d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64d9:{NFSU2_TR(0x4f64d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f64db:L4f64db:{c.instructions+=3;NFSU2_TR(0x4f64db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f64dc:{NFSU2_TR(0x4f64dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64df:{NFSU2_TR(0x4f64df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f64e4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f64e4:L4f64e4:{c.instructions+=9;NFSU2_TR(0x4f64e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f64e8:{NFSU2_TR(0x4f64e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f64eb:{NFSU2_TR(0x4f64eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f64ec:{NFSU2_TR(0x4f64ec);
__builtin_memmove((R+0),(R+24),4);
}
B4f64ee:{NFSU2_TR(0x4f64ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f64ef:{NFSU2_TR(0x4f64ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f64f0:{NFSU2_TR(0x4f64f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f64f7:{NFSU2_TR(0x4f64f7);
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
B4f64fa:{NFSU2_TR(0x4f64fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6500:L4f6500:{c.instructions+=25;NFSU2_TR(0x4f6500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6502:{NFSU2_TR(0x4f6502);
u8 U[4];
w4(U+0,u32(0x776938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6507:{NFSU2_TR(0x4f6507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f650d:{NFSU2_TR(0x4f650d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f650e:{NFSU2_TR(0x4f650e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6515:{NFSU2_TR(0x4f6515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B4f6518:{NFSU2_TR(0x4f6518);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f651c:{NFSU2_TR(0x4f651c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f651d:{NFSU2_TR(0x4f651d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f651e:{NFSU2_TR(0x4f651e);
__builtin_memmove((R+24),(R+4),4);
}
B4f6520:{NFSU2_TR(0x4f6520);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6522:{NFSU2_TR(0x4f6522);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6523:{NFSU2_TR(0x4f6523);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6527:{NFSU2_TR(0x4f6527);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6529:{NFSU2_TR(0x4f6529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f652c:{NFSU2_TR(0x4f652c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f652f:{NFSU2_TR(0x4f652f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x10000060ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6536:{NFSU2_TR(0x4f6536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6539:{NFSU2_TR(0x4f6539);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f653c:{NFSU2_TR(0x4f653c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f653f:{NFSU2_TR(0x4f653f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6545:{NFSU2_TR(0x4f6545);
u8 U[4];
w4(U+0,u32(0x798854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f654a:{NFSU2_TR(0x4f654a);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f654e:{NFSU2_TR(0x4f654e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6554:{NFSU2_TR(0x4f6554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6559ull));
TAIL_STATIC(0x505450u,505);
}
B4f6559:L4f6559:{c.instructions+=4;NFSU2_TR(0x4f6559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f655c:{NFSU2_TR(0x4f655c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f655d:{NFSU2_TR(0x4f655d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f655e:{NFSU2_TR(0x4f655e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6563ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6563:L4f6563:{c.instructions+=4;NFSU2_TR(0x4f6563);
__builtin_memmove((R+28),(R+0),4);
}
B4f6565:{NFSU2_TR(0x4f6565);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6568:{NFSU2_TR(0x4f6568);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f656a:{NFSU2_TR(0x4f656a);
if(r1(R+518)){{goto L4f6589;}}
}
B4f656c:L4f656c:{c.instructions+=1;NFSU2_TR(0x4f656c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6571ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6571:L4f6571:{c.instructions+=2;NFSU2_TR(0x4f6571);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6573:{NFSU2_TR(0x4f6573);
if(r1(R+518)){{goto L4f657a;}}
}
B4f6575:L4f6575:{c.instructions+=2;NFSU2_TR(0x4f6575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6578:{NFSU2_TR(0x4f6578);
{goto L4f657c;}
}
B4f657a:L4f657a:{c.instructions+=1;NFSU2_TR(0x4f657a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f657c:L4f657c:{c.instructions+=5;NFSU2_TR(0x4f657c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f657f:{NFSU2_TR(0x4f657f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6581:{NFSU2_TR(0x4f6581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6584:{NFSU2_TR(0x4f6584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6587:{NFSU2_TR(0x4f6587);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6589:L4f6589:{c.instructions+=2;NFSU2_TR(0x4f6589);
u8 U[4];
w4(U+0,u32(0x798840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f658e:{NFSU2_TR(0x4f658e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6593ull));
TAIL_STATIC(0x505450u,505);
}
B4f6593:L4f6593:{c.instructions+=4;NFSU2_TR(0x4f6593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6596:{NFSU2_TR(0x4f6596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6597:{NFSU2_TR(0x4f6597);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6598:{NFSU2_TR(0x4f6598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f659dull));
TAIL_STATIC(0x537a60u,537);
}
B4f659d:L4f659d:{c.instructions+=4;NFSU2_TR(0x4f659d);
__builtin_memmove((R+28),(R+0),4);
}
B4f659f:{NFSU2_TR(0x4f659f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f65a2:{NFSU2_TR(0x4f65a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f65a4:{NFSU2_TR(0x4f65a4);
if(r1(R+518)){{goto L4f65c3;}}
}
B4f65a6:L4f65a6:{c.instructions+=1;NFSU2_TR(0x4f65a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f65abull));
TAIL_STATIC(0x440ec0u,440);
}
B4f65ab:L4f65ab:{c.instructions+=2;NFSU2_TR(0x4f65ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f65ad:{NFSU2_TR(0x4f65ad);
if(r1(R+518)){{goto L4f65b4;}}
}
B4f65af:L4f65af:{c.instructions+=2;NFSU2_TR(0x4f65af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65b2:{NFSU2_TR(0x4f65b2);
{goto L4f65b6;}
}
B4f65b4:L4f65b4:{c.instructions+=1;NFSU2_TR(0x4f65b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f65b6:L4f65b6:{c.instructions+=5;NFSU2_TR(0x4f65b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f65b9:{NFSU2_TR(0x4f65b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f65bb:{NFSU2_TR(0x4f65bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65be:{NFSU2_TR(0x4f65be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65c1:{NFSU2_TR(0x4f65c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f65c3:L4f65c3:{c.instructions+=2;NFSU2_TR(0x4f65c3);
u8 U[4];
w4(U+0,u32(0x79882cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f65c8:{NFSU2_TR(0x4f65c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f65cdull));
TAIL_STATIC(0x505450u,505);
}
B4f65cd:L4f65cd:{c.instructions+=4;NFSU2_TR(0x4f65cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f65ce:{NFSU2_TR(0x4f65ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f65d1:{NFSU2_TR(0x4f65d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f65d2:{NFSU2_TR(0x4f65d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f65d7ull));
TAIL_STATIC(0x537a60u,537);
}
B4f65d7:L4f65d7:{c.instructions+=4;NFSU2_TR(0x4f65d7);
__builtin_memmove((R+28),(R+0),4);
}
B4f65d9:{NFSU2_TR(0x4f65d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f65dc:{NFSU2_TR(0x4f65dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f65de:{NFSU2_TR(0x4f65de);
if(r1(R+518)){{goto L4f65fd;}}
}
B4f65e0:L4f65e0:{c.instructions+=1;NFSU2_TR(0x4f65e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f65e5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f65e5:L4f65e5:{c.instructions+=2;NFSU2_TR(0x4f65e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f65e7:{NFSU2_TR(0x4f65e7);
if(r1(R+518)){{goto L4f65ee;}}
}
B4f65e9:L4f65e9:{c.instructions+=2;NFSU2_TR(0x4f65e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65ec:{NFSU2_TR(0x4f65ec);
{goto L4f65f0;}
}
B4f65ee:L4f65ee:{c.instructions+=1;NFSU2_TR(0x4f65ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f65f0:L4f65f0:{c.instructions+=5;NFSU2_TR(0x4f65f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f65f3:{NFSU2_TR(0x4f65f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f65f5:{NFSU2_TR(0x4f65f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65f8:{NFSU2_TR(0x4f65f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f65fb:{NFSU2_TR(0x4f65fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f65fd:L4f65fd:{c.instructions+=2;NFSU2_TR(0x4f65fd);
u8 U[4];
w4(U+0,u32(0x798620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6602:{NFSU2_TR(0x4f6602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6607ull));
TAIL_STATIC(0x505450u,505);
}
B4f6607:L4f6607:{c.instructions+=4;NFSU2_TR(0x4f6607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f660a:{NFSU2_TR(0x4f660a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f660b:{NFSU2_TR(0x4f660b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f660c:{NFSU2_TR(0x4f660c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6611ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6611:L4f6611:{c.instructions+=4;NFSU2_TR(0x4f6611);
__builtin_memmove((R+28),(R+0),4);
}
B4f6613:{NFSU2_TR(0x4f6613);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6616:{NFSU2_TR(0x4f6616);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6618:{NFSU2_TR(0x4f6618);
if(r1(R+518)){{goto L4f6637;}}
}
B4f661a:L4f661a:{c.instructions+=1;NFSU2_TR(0x4f661a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f661full));
TAIL_STATIC(0x440ec0u,440);
}
B4f661f:L4f661f:{c.instructions+=2;NFSU2_TR(0x4f661f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6621:{NFSU2_TR(0x4f6621);
if(r1(R+518)){{goto L4f6628;}}
}
B4f6623:L4f6623:{c.instructions+=2;NFSU2_TR(0x4f6623);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6626:{NFSU2_TR(0x4f6626);
{goto L4f662a;}
}
B4f6628:L4f6628:{c.instructions+=1;NFSU2_TR(0x4f6628);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f662a:L4f662a:{c.instructions+=5;NFSU2_TR(0x4f662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f662d:{NFSU2_TR(0x4f662d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f662f:{NFSU2_TR(0x4f662f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6632:{NFSU2_TR(0x4f6632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6635:{NFSU2_TR(0x4f6635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6637:L4f6637:{c.instructions+=3;NFSU2_TR(0x4f6637);
u8 U[4];
w4(U+0,u32(0x798820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f663c:{NFSU2_TR(0x4f663c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f663f:{NFSU2_TR(0x4f663f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6644ull));
TAIL_STATIC(0x505450u,505);
}
B4f6644:L4f6644:{c.instructions+=4;NFSU2_TR(0x4f6644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6647:{NFSU2_TR(0x4f6647);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6648:{NFSU2_TR(0x4f6648);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6649:{NFSU2_TR(0x4f6649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f664eull));
TAIL_STATIC(0x537a60u,537);
}
B4f664e:L4f664e:{c.instructions+=4;NFSU2_TR(0x4f664e);
__builtin_memmove((R+28),(R+0),4);
}
B4f6650:{NFSU2_TR(0x4f6650);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6653:{NFSU2_TR(0x4f6653);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6655:{NFSU2_TR(0x4f6655);
if(r1(R+518)){{goto L4f6674;}}
}
B4f6657:L4f6657:{c.instructions+=1;NFSU2_TR(0x4f6657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f665cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f665c:L4f665c:{c.instructions+=2;NFSU2_TR(0x4f665c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f665e:{NFSU2_TR(0x4f665e);
if(r1(R+518)){{goto L4f6665;}}
}
B4f6660:L4f6660:{c.instructions+=2;NFSU2_TR(0x4f6660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6663:{NFSU2_TR(0x4f6663);
{goto L4f6667;}
}
B4f6665:L4f6665:{c.instructions+=1;NFSU2_TR(0x4f6665);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6667:L4f6667:{c.instructions+=5;NFSU2_TR(0x4f6667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f666a:{NFSU2_TR(0x4f666a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f666c:{NFSU2_TR(0x4f666c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f666f:{NFSU2_TR(0x4f666f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6672:{NFSU2_TR(0x4f6672);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6674:L4f6674:{c.instructions+=3;NFSU2_TR(0x4f6674);
u8 U[4];
w4(U+0,u32(0x798638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6679:{NFSU2_TR(0x4f6679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f667c:{NFSU2_TR(0x4f667c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6681ull));
TAIL_STATIC(0x505450u,505);
}
B4f6681:L4f6681:{c.instructions+=4;NFSU2_TR(0x4f6681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6682:{NFSU2_TR(0x4f6682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6685:{NFSU2_TR(0x4f6685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6686:{NFSU2_TR(0x4f6686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f668bull));
TAIL_STATIC(0x537a60u,537);
}
B4f668b:L4f668b:{c.instructions+=4;NFSU2_TR(0x4f668b);
__builtin_memmove((R+28),(R+0),4);
}
B4f668d:{NFSU2_TR(0x4f668d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6690:{NFSU2_TR(0x4f6690);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6692:{NFSU2_TR(0x4f6692);
if(r1(R+518)){{goto L4f66b1;}}
}
B4f6694:L4f6694:{c.instructions+=1;NFSU2_TR(0x4f6694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6699ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6699:L4f6699:{c.instructions+=2;NFSU2_TR(0x4f6699);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f669b:{NFSU2_TR(0x4f669b);
if(r1(R+518)){{goto L4f66a2;}}
}
B4f669d:L4f669d:{c.instructions+=2;NFSU2_TR(0x4f669d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66a0:{NFSU2_TR(0x4f66a0);
{goto L4f66a4;}
}
B4f66a2:L4f66a2:{c.instructions+=1;NFSU2_TR(0x4f66a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f66a4:L4f66a4:{c.instructions+=5;NFSU2_TR(0x4f66a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f66a7:{NFSU2_TR(0x4f66a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f66a9:{NFSU2_TR(0x4f66a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66ac:{NFSU2_TR(0x4f66ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66af:{NFSU2_TR(0x4f66af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f66b1:L4f66b1:{c.instructions+=3;NFSU2_TR(0x4f66b1);
u8 U[4];
w4(U+0,u32(0x7985d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f66b6:{NFSU2_TR(0x4f66b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66b9:{NFSU2_TR(0x4f66b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f66beull));
TAIL_STATIC(0x505450u,505);
}
B4f66be:L4f66be:{c.instructions+=4;NFSU2_TR(0x4f66be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f66c1:{NFSU2_TR(0x4f66c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f66c2:{NFSU2_TR(0x4f66c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f66c3:{NFSU2_TR(0x4f66c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f66c8ull));
TAIL_STATIC(0x537a10u,537);
}
B4f66c8:L4f66c8:{c.instructions+=4;NFSU2_TR(0x4f66c8);
__builtin_memmove((R+28),(R+0),4);
}
B4f66ca:{NFSU2_TR(0x4f66ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f66cd:{NFSU2_TR(0x4f66cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f66cf:{NFSU2_TR(0x4f66cf);
if(r1(R+518)){{goto L4f66ee;}}
}
B4f66d1:L4f66d1:{c.instructions+=1;NFSU2_TR(0x4f66d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f66d6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f66d6:L4f66d6:{c.instructions+=2;NFSU2_TR(0x4f66d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f66d8:{NFSU2_TR(0x4f66d8);
if(r1(R+518)){{goto L4f66df;}}
}
B4f66da:L4f66da:{c.instructions+=2;NFSU2_TR(0x4f66da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66dd:{NFSU2_TR(0x4f66dd);
{goto L4f66e1;}
}
B4f66df:L4f66df:{c.instructions+=1;NFSU2_TR(0x4f66df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f66e1:L4f66e1:{c.instructions+=5;NFSU2_TR(0x4f66e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f66e4:{NFSU2_TR(0x4f66e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f66e6:{NFSU2_TR(0x4f66e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66e9:{NFSU2_TR(0x4f66e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66ec:{NFSU2_TR(0x4f66ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f66ee:L4f66ee:{c.instructions+=3;NFSU2_TR(0x4f66ee);
u8 U[4];
w4(U+0,u32(0x798810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f66f3:{NFSU2_TR(0x4f66f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f66f6:{NFSU2_TR(0x4f66f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f66fbull));
TAIL_STATIC(0x505450u,505);
}
B4f66fb:L4f66fb:{c.instructions+=4;NFSU2_TR(0x4f66fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f66fe:{NFSU2_TR(0x4f66fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f66ff:{NFSU2_TR(0x4f66ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6700:{NFSU2_TR(0x4f6700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6705ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6705:L4f6705:{c.instructions+=4;NFSU2_TR(0x4f6705);
__builtin_memmove((R+28),(R+0),4);
}
B4f6707:{NFSU2_TR(0x4f6707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f670a:{NFSU2_TR(0x4f670a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f670c:{NFSU2_TR(0x4f670c);
if(r1(R+518)){{goto L4f672b;}}
}
B4f670e:L4f670e:{c.instructions+=1;NFSU2_TR(0x4f670e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6713ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6713:L4f6713:{c.instructions+=2;NFSU2_TR(0x4f6713);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6715:{NFSU2_TR(0x4f6715);
if(r1(R+518)){{goto L4f671c;}}
}
B4f6717:L4f6717:{c.instructions+=2;NFSU2_TR(0x4f6717);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f671a:{NFSU2_TR(0x4f671a);
{goto L4f671e;}
}
B4f671c:L4f671c:{c.instructions+=1;NFSU2_TR(0x4f671c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f671e:L4f671e:{c.instructions+=5;NFSU2_TR(0x4f671e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6721:{NFSU2_TR(0x4f6721);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6723:{NFSU2_TR(0x4f6723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6726:{NFSU2_TR(0x4f6726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6729:{NFSU2_TR(0x4f6729);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f672b:L4f672b:{c.instructions+=3;NFSU2_TR(0x4f672b);
u8 U[4];
w4(U+0,u32(0x7985fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6730:{NFSU2_TR(0x4f6730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6733:{NFSU2_TR(0x4f6733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6738ull));
TAIL_STATIC(0x505450u,505);
}
B4f6738:L4f6738:{c.instructions+=4;NFSU2_TR(0x4f6738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6739:{NFSU2_TR(0x4f6739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f673c:{NFSU2_TR(0x4f673c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f673d:{NFSU2_TR(0x4f673d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6742ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6742:L4f6742:{c.instructions+=4;NFSU2_TR(0x4f6742);
__builtin_memmove((R+28),(R+0),4);
}
B4f6744:{NFSU2_TR(0x4f6744);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6747:{NFSU2_TR(0x4f6747);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6749:{NFSU2_TR(0x4f6749);
if(r1(R+518)){{goto L4f6768;}}
}
B4f674b:L4f674b:{c.instructions+=1;NFSU2_TR(0x4f674b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6750ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6750:L4f6750:{c.instructions+=2;NFSU2_TR(0x4f6750);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6752:{NFSU2_TR(0x4f6752);
if(r1(R+518)){{goto L4f6759;}}
}
B4f6754:L4f6754:{c.instructions+=2;NFSU2_TR(0x4f6754);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6757:{NFSU2_TR(0x4f6757);
{goto L4f675b;}
}
B4f6759:L4f6759:{c.instructions+=1;NFSU2_TR(0x4f6759);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f675b:L4f675b:{c.instructions+=5;NFSU2_TR(0x4f675b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f675e:{NFSU2_TR(0x4f675e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6760:{NFSU2_TR(0x4f6760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6763:{NFSU2_TR(0x4f6763);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6766:{NFSU2_TR(0x4f6766);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6768:L4f6768:{c.instructions+=3;NFSU2_TR(0x4f6768);
u8 U[4];
w4(U+0,u32(0x798610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f676d:{NFSU2_TR(0x4f676d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6770:{NFSU2_TR(0x4f6770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6775ull));
TAIL_STATIC(0x505450u,505);
}
B4f6775:L4f6775:{c.instructions+=4;NFSU2_TR(0x4f6775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6778:{NFSU2_TR(0x4f6778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6779:{NFSU2_TR(0x4f6779);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f677a:{NFSU2_TR(0x4f677a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f677full));
TAIL_STATIC(0x537a10u,537);
}
B4f677f:L4f677f:{c.instructions+=4;NFSU2_TR(0x4f677f);
__builtin_memmove((R+28),(R+0),4);
}
B4f6781:{NFSU2_TR(0x4f6781);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6784:{NFSU2_TR(0x4f6784);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6786:{NFSU2_TR(0x4f6786);
if(r1(R+518)){{goto L4f67a5;}}
}
B4f6788:L4f6788:{c.instructions+=1;NFSU2_TR(0x4f6788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f678dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f678d:L4f678d:{c.instructions+=2;NFSU2_TR(0x4f678d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f678f:{NFSU2_TR(0x4f678f);
if(r1(R+518)){{goto L4f6796;}}
}
B4f6791:L4f6791:{c.instructions+=2;NFSU2_TR(0x4f6791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6794:{NFSU2_TR(0x4f6794);
{goto L4f6798;}
}
B4f6796:L4f6796:{c.instructions+=1;NFSU2_TR(0x4f6796);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6798:L4f6798:{c.instructions+=5;NFSU2_TR(0x4f6798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f679b:{NFSU2_TR(0x4f679b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f679d:{NFSU2_TR(0x4f679d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67a0:{NFSU2_TR(0x4f67a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67a3:{NFSU2_TR(0x4f67a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f67a5:L4f67a5:{c.instructions+=3;NFSU2_TR(0x4f67a5);
u8 U[4];
w4(U+0,u32(0x7987f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f67aa:{NFSU2_TR(0x4f67aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67ad:{NFSU2_TR(0x4f67ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f67b2ull));
TAIL_STATIC(0x505450u,505);
}
B4f67b2:L4f67b2:{c.instructions+=4;NFSU2_TR(0x4f67b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f67b5:{NFSU2_TR(0x4f67b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f67b6:{NFSU2_TR(0x4f67b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f67b7:{NFSU2_TR(0x4f67b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f67bcull));
TAIL_STATIC(0x537a60u,537);
}
B4f67bc:L4f67bc:{c.instructions+=4;NFSU2_TR(0x4f67bc);
__builtin_memmove((R+28),(R+0),4);
}
B4f67be:{NFSU2_TR(0x4f67be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f67c1:{NFSU2_TR(0x4f67c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f67c3:{NFSU2_TR(0x4f67c3);
if(r1(R+518)){{goto L4f67e2;}}
}
B4f67c5:L4f67c5:{c.instructions+=1;NFSU2_TR(0x4f67c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f67caull));
TAIL_STATIC(0x440ec0u,440);
}
B4f67ca:L4f67ca:{c.instructions+=2;NFSU2_TR(0x4f67ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f67cc:{NFSU2_TR(0x4f67cc);
if(r1(R+518)){{goto L4f67d3;}}
}
B4f67ce:L4f67ce:{c.instructions+=2;NFSU2_TR(0x4f67ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67d1:{NFSU2_TR(0x4f67d1);
{goto L4f67d5;}
}
B4f67d3:L4f67d3:{c.instructions+=1;NFSU2_TR(0x4f67d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f67d5:L4f67d5:{c.instructions+=5;NFSU2_TR(0x4f67d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f67d8:{NFSU2_TR(0x4f67d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f67da:{NFSU2_TR(0x4f67da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67dd:{NFSU2_TR(0x4f67dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f67e0:{NFSU2_TR(0x4f67e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f67e2:L4f67e2:{c.instructions+=3;NFSU2_TR(0x4f67e2);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4f67e7:{NFSU2_TR(0x4f67e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f67e9:{NFSU2_TR(0x4f67e9);
if(r1(R+518)){{goto L4f6800;}}
}
B4f67eb:L4f67eb:{c.instructions+=3;NFSU2_TR(0x4f67eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f67ee:{NFSU2_TR(0x4f67ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f67ef:{NFSU2_TR(0x4f67ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f67f4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f67f4:L4f67f4:{c.instructions+=3;NFSU2_TR(0x4f67f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f67f7:{NFSU2_TR(0x4f67f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f67f8:{NFSU2_TR(0x4f67f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f67fdull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f67fd:L4f67fd:{c.instructions+=1;NFSU2_TR(0x4f67fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f6800:L4f6800:{c.instructions+=2;NFSU2_TR(0x4f6800);
u8 U[4];
w4(U+0,u32(0x798544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6805:{NFSU2_TR(0x4f6805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f680aull));
TAIL_STATIC(0x505450u,505);
}
B4f680a:L4f680a:{c.instructions+=4;NFSU2_TR(0x4f680a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f680d:{NFSU2_TR(0x4f680d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f680e:{NFSU2_TR(0x4f680e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f680f:{NFSU2_TR(0x4f680f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6814ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6814:L4f6814:{c.instructions+=4;NFSU2_TR(0x4f6814);
__builtin_memmove((R+28),(R+0),4);
}
B4f6816:{NFSU2_TR(0x4f6816);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6819:{NFSU2_TR(0x4f6819);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f681b:{NFSU2_TR(0x4f681b);
if(r1(R+518)){{goto L4f683a;}}
}
B4f681d:L4f681d:{c.instructions+=1;NFSU2_TR(0x4f681d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6822ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6822:L4f6822:{c.instructions+=2;NFSU2_TR(0x4f6822);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6824:{NFSU2_TR(0x4f6824);
if(r1(R+518)){{goto L4f682b;}}
}
B4f6826:L4f6826:{c.instructions+=2;NFSU2_TR(0x4f6826);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6829:{NFSU2_TR(0x4f6829);
{goto L4f682d;}
}
B4f682b:L4f682b:{c.instructions+=1;NFSU2_TR(0x4f682b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f682d:L4f682d:{c.instructions+=5;NFSU2_TR(0x4f682d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6830:{NFSU2_TR(0x4f6830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6832:{NFSU2_TR(0x4f6832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6835:{NFSU2_TR(0x4f6835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6838:{NFSU2_TR(0x4f6838);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f683a:L4f683a:{c.instructions+=4;NFSU2_TR(0x4f683a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f683d:{NFSU2_TR(0x4f683d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f683f:{NFSU2_TR(0x4f683f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6842:{NFSU2_TR(0x4f6842);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6843:L4f6843:{c.instructions+=7;NFSU2_TR(0x4f6843);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f6846:{NFSU2_TR(0x4f6846);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6847:{NFSU2_TR(0x4f6847);
u8 U[4];
w4(U+0,u32(0x798574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f684c:{NFSU2_TR(0x4f684c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f6850:{NFSU2_TR(0x4f6850);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6852:{NFSU2_TR(0x4f6852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6853:{NFSU2_TR(0x4f6853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6858ull));
TAIL_STATIC(0x50c960u,50c);
}
B4f6858:L4f6858:{c.instructions+=3;NFSU2_TR(0x4f6858);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f685c:{NFSU2_TR(0x4f685c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f685d:{NFSU2_TR(0x4f685d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6862ull));
TAIL_STATIC(0x505450u,505);
}
B4f6862:L4f6862:{c.instructions+=4;NFSU2_TR(0x4f6862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6865:{NFSU2_TR(0x4f6865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6866:{NFSU2_TR(0x4f6866);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6867:{NFSU2_TR(0x4f6867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f686cull));
TAIL_STATIC(0x537a60u,537);
}
B4f686c:L4f686c:{c.instructions+=4;NFSU2_TR(0x4f686c);
__builtin_memmove((R+28),(R+0),4);
}
B4f686e:{NFSU2_TR(0x4f686e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f6871:{NFSU2_TR(0x4f6871);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f6873:{NFSU2_TR(0x4f6873);
if(r1(R+518)){{goto L4f6892;}}
}
B4f6875:L4f6875:{c.instructions+=1;NFSU2_TR(0x4f6875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f687aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f687a:L4f687a:{c.instructions+=2;NFSU2_TR(0x4f687a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f687c:{NFSU2_TR(0x4f687c);
if(r1(R+518)){{goto L4f6883;}}
}
B4f687e:L4f687e:{c.instructions+=2;NFSU2_TR(0x4f687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6881:{NFSU2_TR(0x4f6881);
{goto L4f6885;}
}
B4f6883:L4f6883:{c.instructions+=1;NFSU2_TR(0x4f6883);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6885:L4f6885:{c.instructions+=5;NFSU2_TR(0x4f6885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6888:{NFSU2_TR(0x4f6888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f688a:{NFSU2_TR(0x4f688a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f688d:{NFSU2_TR(0x4f688d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6890:{NFSU2_TR(0x4f6890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6892:L4f6892:{c.instructions+=5;NFSU2_TR(0x4f6892);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f6894:{NFSU2_TR(0x4f6894);
__builtin_memmove((R+0),(R+20),4);
}
B4f6896:{NFSU2_TR(0x4f6896);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4f6899:{NFSU2_TR(0x4f6899);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f689c:{NFSU2_TR(0x4f689c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f6843u);}goto L4f6843;}}
}
B4f689e:L4f689e:{c.instructions+=4;NFSU2_TR(0x4f689e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f68a2:{NFSU2_TR(0x4f68a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68a3:{NFSU2_TR(0x4f68a3);
w4(R+4,u32(0x89e7a0ull));
}
B4f68a8:{NFSU2_TR(0x4f68a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f68adull));
TAIL_STATIC(0x5ed960u,5ed);
}
B4f68ad:L4f68ad:{c.instructions+=5;NFSU2_TR(0x4f68ad);
__builtin_memmove((R+28),(R+0),4);
}
B4f68af:{NFSU2_TR(0x4f68af);
w4(R+12,u32(0x1ull));
}
B4f68b4:{NFSU2_TR(0x4f68b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68b5:{NFSU2_TR(0x4f68b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f68b8:{NFSU2_TR(0x4f68b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f68bdull));
TAIL_STATIC(0x5b5350u,5b5);
}
B4f68bd:L4f68bd:{c.instructions+=4;NFSU2_TR(0x4f68bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
}
B4f68c2:{NFSU2_TR(0x4f68c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f68c4:{NFSU2_TR(0x4f68c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f68c5:{NFSU2_TR(0x4f68c5);
if(r1(R+518)){{goto L4f6923;}}
}
B4f68c7:L4f68c7:{c.instructions+=2;NFSU2_TR(0x4f68c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f68c9:{NFSU2_TR(0x4f68c9);
if(r1(R+518)){{goto L4f6923;}}
}
B4f68cb:L4f68cb:{c.instructions+=9;NFSU2_TR(0x4f68cb);
w4(R+8,u32(m1(0x83aa1a)));
}
B4f68d2:{NFSU2_TR(0x4f68d2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68d4:{NFSU2_TR(0x4f68d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f68d8:{NFSU2_TR(0x4f68d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68d9:{NFSU2_TR(0x4f68d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68da:{NFSU2_TR(0x4f68da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68db:{NFSU2_TR(0x4f68db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f68de:{NFSU2_TR(0x4f68de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68df:{NFSU2_TR(0x4f68df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f68e4ull));
TAIL_STATIC(0x5ed9b0u,5ed);
}
B4f68e4:L4f68e4:{c.instructions+=5;NFSU2_TR(0x4f68e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f68e8:{NFSU2_TR(0x4f68e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68ea:{NFSU2_TR(0x4f68ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68ec:{NFSU2_TR(0x4f68ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f68ed:{NFSU2_TR(0x4f68ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f68f2ull));
TAIL_STATIC(0x4901d0u,490);
}
B4f68f2:L4f68f2:{c.instructions+=3;NFSU2_TR(0x4f68f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4f68f5:{NFSU2_TR(0x4f68f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f68f7:{NFSU2_TR(0x4f68f7);
if(r1(R+518)){{goto L4f690c;}}
}
B4f68f9:L4f68f9:{c.instructions+=5;NFSU2_TR(0x4f68f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f68fd:{NFSU2_TR(0x4f68fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6900:{NFSU2_TR(0x4f6900);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6901:{NFSU2_TR(0x4f6901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6902:{NFSU2_TR(0x4f6902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6907ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f6907:L4f6907:{c.instructions+=2;NFSU2_TR(0x4f6907);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f690a:{NFSU2_TR(0x4f690a);
{goto L4f6912;}
}
B4f690c:L4f690c:{c.instructions+=1;NFSU2_TR(0x4f690c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6912:L4f6912:{c.instructions+=5;NFSU2_TR(0x4f6912);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6916:{NFSU2_TR(0x4f6916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6919:{NFSU2_TR(0x4f6919);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f691a:{NFSU2_TR(0x4f691a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f691b:{NFSU2_TR(0x4f691b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6920ull));
TAIL_STATIC(0x50c990u,50c);
}
B4f6920:L4f6920:{c.instructions+=1;NFSU2_TR(0x4f6920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f6923:L4f6923:{c.instructions+=14;NFSU2_TR(0x4f6923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6926:{NFSU2_TR(0x4f6926);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6927:{NFSU2_TR(0x4f6927);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f692b:{NFSU2_TR(0x4f692b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f692c:{NFSU2_TR(0x4f692c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6932:{NFSU2_TR(0x4f6932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6938:{NFSU2_TR(0x4f6938);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f693f:{NFSU2_TR(0x4f693f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6946:{NFSU2_TR(0x4f6946);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f694d:{NFSU2_TR(0x4f694d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6954:{NFSU2_TR(0x4f6954);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f695b:{NFSU2_TR(0x4f695b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6962:{NFSU2_TR(0x4f6962);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6969:{NFSU2_TR(0x4f6969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f696eull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4f696e:L4f696e:{c.instructions+=3;NFSU2_TR(0x4f696e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f6971:{NFSU2_TR(0x4f6971);
__builtin_memmove((R+4),(R+0),4);
}
B4f6973:{NFSU2_TR(0x4f6973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6978ull));
TAIL_STATIC(0x5054d0u,505);
}
B4f6978:L4f6978:{c.instructions+=6;NFSU2_TR(0x4f6978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f697e:{NFSU2_TR(0x4f697e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6981:{NFSU2_TR(0x4f6981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6982:{NFSU2_TR(0x4f6982);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f6986:{NFSU2_TR(0x4f6986);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6987:{NFSU2_TR(0x4f6987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f698cull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4f698c:L4f698c:{c.instructions+=3;NFSU2_TR(0x4f698c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f698f:{NFSU2_TR(0x4f698f);
__builtin_memmove((R+4),(R+0),4);
}
B4f6991:{NFSU2_TR(0x4f6991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6996ull));
TAIL_STATIC(0x5054d0u,505);
}
B4f6996:L4f6996:{c.instructions+=8;NFSU2_TR(0x4f6996);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6998:{NFSU2_TR(0x4f6998);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f699a:{NFSU2_TR(0x4f699a);
__builtin_memmove((R+4),(R+24),4);
}
B4f699c:{NFSU2_TR(0x4f699c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f69a2:{NFSU2_TR(0x4f69a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f69ac:{NFSU2_TR(0x4f69ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f69b2:{NFSU2_TR(0x4f69b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f69b8:{NFSU2_TR(0x4f69b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f69bdull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f69bd:L4f69bd:{c.instructions+=8;NFSU2_TR(0x4f69bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f69c1:{NFSU2_TR(0x4f69c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f69c2:{NFSU2_TR(0x4f69c2);
__builtin_memmove((R+0),(R+24),4);
}
B4f69c4:{NFSU2_TR(0x4f69c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f69c5:{NFSU2_TR(0x4f69c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f69c6:{NFSU2_TR(0x4f69c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f69cd:{NFSU2_TR(0x4f69cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x50ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f69d0:{NFSU2_TR(0x4f69d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f69e0:L4f69e0:{c.instructions+=26;NFSU2_TR(0x4f69e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69e2:{NFSU2_TR(0x4f69e2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69e7:{NFSU2_TR(0x4f69e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f69ed:{NFSU2_TR(0x4f69ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69ee:{NFSU2_TR(0x4f69ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f69f5:{NFSU2_TR(0x4f69f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69f6:{NFSU2_TR(0x4f69f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f69fa:{NFSU2_TR(0x4f69fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69fb:{NFSU2_TR(0x4f69fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f69fc:{NFSU2_TR(0x4f69fc);
__builtin_memmove((R+24),(R+4),4);
}
B4f69fe:{NFSU2_TR(0x4f69fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6a00:{NFSU2_TR(0x4f6a00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a01:{NFSU2_TR(0x4f6a01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a05:{NFSU2_TR(0x4f6a05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6a07:{NFSU2_TR(0x4f6a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a0a:{NFSU2_TR(0x4f6a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a0d:{NFSU2_TR(0x4f6a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x20000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a14:{NFSU2_TR(0x4f6a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a17:{NFSU2_TR(0x4f6a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a1a:{NFSU2_TR(0x4f6a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a1d:{NFSU2_TR(0x4f6a1d);
u8 U[4];
w4(U+0,u32(0x798860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a22:{NFSU2_TR(0x4f6a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a26:{NFSU2_TR(0x4f6a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a29:{NFSU2_TR(0x4f6a29);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6a2c:{NFSU2_TR(0x4f6a2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f6a30:{NFSU2_TR(0x4f6a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6a35ull));
TAIL_STATIC(0x505450u,505);
}
B4f6a35:L4f6a35:{c.instructions+=4;NFSU2_TR(0x4f6a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6a38:{NFSU2_TR(0x4f6a38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a39:{NFSU2_TR(0x4f6a39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a3a:{NFSU2_TR(0x4f6a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6a3full));
TAIL_STATIC(0x537a60u,537);
}
B4f6a3f:L4f6a3f:{c.instructions+=4;NFSU2_TR(0x4f6a3f);
__builtin_memmove((R+28),(R+0),4);
}
B4f6a41:{NFSU2_TR(0x4f6a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6a44:{NFSU2_TR(0x4f6a44);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6a46:{NFSU2_TR(0x4f6a46);
if(r1(R+518)){{goto L4f6a65;}}
}
B4f6a48:L4f6a48:{c.instructions+=1;NFSU2_TR(0x4f6a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6a4dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6a4d:L4f6a4d:{c.instructions+=2;NFSU2_TR(0x4f6a4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6a4f:{NFSU2_TR(0x4f6a4f);
if(r1(R+518)){{goto L4f6a56;}}
}
B4f6a51:L4f6a51:{c.instructions+=2;NFSU2_TR(0x4f6a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a54:{NFSU2_TR(0x4f6a54);
{goto L4f6a58;}
}
B4f6a56:L4f6a56:{c.instructions+=1;NFSU2_TR(0x4f6a56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6a58:L4f6a58:{c.instructions+=5;NFSU2_TR(0x4f6a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6a5b:{NFSU2_TR(0x4f6a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6a5d:{NFSU2_TR(0x4f6a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a60:{NFSU2_TR(0x4f6a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a63:{NFSU2_TR(0x4f6a63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6a65:L4f6a65:{c.instructions+=5;NFSU2_TR(0x4f6a65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a66:{NFSU2_TR(0x4f6a66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a67:{NFSU2_TR(0x4f6a67);
__builtin_memmove((R+4),(R+24),4);
}
B4f6a69:{NFSU2_TR(0x4f6a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a6c:{NFSU2_TR(0x4f6a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6a71ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f6a71:L4f6a71:{c.instructions+=8;NFSU2_TR(0x4f6a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6a75:{NFSU2_TR(0x4f6a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f6a76:{NFSU2_TR(0x4f6a76);
__builtin_memmove((R+0),(R+24),4);
}
B4f6a78:{NFSU2_TR(0x4f6a78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f6a79:{NFSU2_TR(0x4f6a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6a7a:{NFSU2_TR(0x4f6a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6a81:{NFSU2_TR(0x4f6a81);
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
B4f6a84:{NFSU2_TR(0x4f6a84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6a90:L4f6a90:{c.instructions+=26;NFSU2_TR(0x4f6a90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a92:{NFSU2_TR(0x4f6a92);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a97:{NFSU2_TR(0x4f6a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6a9d:{NFSU2_TR(0x4f6a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6a9e:{NFSU2_TR(0x4f6a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6aa5:{NFSU2_TR(0x4f6aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6aa6:{NFSU2_TR(0x4f6aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6aaa:{NFSU2_TR(0x4f6aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6aab:{NFSU2_TR(0x4f6aab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6aac:{NFSU2_TR(0x4f6aac);
__builtin_memmove((R+24),(R+4),4);
}
B4f6aae:{NFSU2_TR(0x4f6aae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6ab0:{NFSU2_TR(0x4f6ab0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ab1:{NFSU2_TR(0x4f6ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ab5:{NFSU2_TR(0x4f6ab5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6ab7:{NFSU2_TR(0x4f6ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6aba:{NFSU2_TR(0x4f6aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6abd:{NFSU2_TR(0x4f6abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ac0:{NFSU2_TR(0x4f6ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ac7:{NFSU2_TR(0x4f6ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6aca:{NFSU2_TR(0x4f6aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6acd:{NFSU2_TR(0x4f6acd);
u8 U[4];
w4(U+0,u32(0x798894ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ad2:{NFSU2_TR(0x4f6ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ad6:{NFSU2_TR(0x4f6ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ad9:{NFSU2_TR(0x4f6ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6adc:{NFSU2_TR(0x4f6adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6adf:{NFSU2_TR(0x4f6adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ae4ull));
TAIL_STATIC(0x505450u,505);
}
B4f6ae4:L4f6ae4:{c.instructions+=4;NFSU2_TR(0x4f6ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6ae7:{NFSU2_TR(0x4f6ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ae8:{NFSU2_TR(0x4f6ae8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ae9:{NFSU2_TR(0x4f6ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6aeeull));
TAIL_STATIC(0x537a60u,537);
}
B4f6aee:L4f6aee:{c.instructions+=4;NFSU2_TR(0x4f6aee);
__builtin_memmove((R+28),(R+0),4);
}
B4f6af0:{NFSU2_TR(0x4f6af0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6af3:{NFSU2_TR(0x4f6af3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6af5:{NFSU2_TR(0x4f6af5);
if(r1(R+518)){{goto L4f6b14;}}
}
B4f6af7:L4f6af7:{c.instructions+=1;NFSU2_TR(0x4f6af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6afcull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6afc:L4f6afc:{c.instructions+=2;NFSU2_TR(0x4f6afc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6afe:{NFSU2_TR(0x4f6afe);
if(r1(R+518)){{goto L4f6b05;}}
}
B4f6b00:L4f6b00:{c.instructions+=2;NFSU2_TR(0x4f6b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b03:{NFSU2_TR(0x4f6b03);
{goto L4f6b07;}
}
B4f6b05:L4f6b05:{c.instructions+=1;NFSU2_TR(0x4f6b05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6b07:L4f6b07:{c.instructions+=5;NFSU2_TR(0x4f6b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6b0a:{NFSU2_TR(0x4f6b0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6b0c:{NFSU2_TR(0x4f6b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b0f:{NFSU2_TR(0x4f6b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b12:{NFSU2_TR(0x4f6b12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6b14:L4f6b14:{c.instructions+=3;NFSU2_TR(0x4f6b14);
u8 U[4];
w4(U+0,u32(0x798884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b19:{NFSU2_TR(0x4f6b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b1c:{NFSU2_TR(0x4f6b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b21ull));
TAIL_STATIC(0x505450u,505);
}
B4f6b21:L4f6b21:{c.instructions+=4;NFSU2_TR(0x4f6b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6b24:{NFSU2_TR(0x4f6b24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b25:{NFSU2_TR(0x4f6b25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b26:{NFSU2_TR(0x4f6b26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b2bull));
TAIL_STATIC(0x537a60u,537);
}
B4f6b2b:L4f6b2b:{c.instructions+=4;NFSU2_TR(0x4f6b2b);
__builtin_memmove((R+28),(R+0),4);
}
B4f6b2d:{NFSU2_TR(0x4f6b2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6b30:{NFSU2_TR(0x4f6b30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6b32:{NFSU2_TR(0x4f6b32);
if(r1(R+518)){{goto L4f6b51;}}
}
B4f6b34:L4f6b34:{c.instructions+=1;NFSU2_TR(0x4f6b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b39ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6b39:L4f6b39:{c.instructions+=2;NFSU2_TR(0x4f6b39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6b3b:{NFSU2_TR(0x4f6b3b);
if(r1(R+518)){{goto L4f6b42;}}
}
B4f6b3d:L4f6b3d:{c.instructions+=2;NFSU2_TR(0x4f6b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b40:{NFSU2_TR(0x4f6b40);
{goto L4f6b44;}
}
B4f6b42:L4f6b42:{c.instructions+=1;NFSU2_TR(0x4f6b42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6b44:L4f6b44:{c.instructions+=5;NFSU2_TR(0x4f6b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6b47:{NFSU2_TR(0x4f6b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6b49:{NFSU2_TR(0x4f6b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b4c:{NFSU2_TR(0x4f6b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b4f:{NFSU2_TR(0x4f6b4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6b51:L4f6b51:{c.instructions+=3;NFSU2_TR(0x4f6b51);
u8 U[4];
w4(U+0,u32(0x798878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b56:{NFSU2_TR(0x4f6b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b59:{NFSU2_TR(0x4f6b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b5eull));
TAIL_STATIC(0x505450u,505);
}
B4f6b5e:L4f6b5e:{c.instructions+=4;NFSU2_TR(0x4f6b5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b5f:{NFSU2_TR(0x4f6b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6b62:{NFSU2_TR(0x4f6b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b63:{NFSU2_TR(0x4f6b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b68ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6b68:L4f6b68:{c.instructions+=4;NFSU2_TR(0x4f6b68);
__builtin_memmove((R+28),(R+0),4);
}
B4f6b6a:{NFSU2_TR(0x4f6b6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6b6d:{NFSU2_TR(0x4f6b6d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6b6f:{NFSU2_TR(0x4f6b6f);
if(r1(R+518)){{goto L4f6b8e;}}
}
B4f6b71:L4f6b71:{c.instructions+=1;NFSU2_TR(0x4f6b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b76ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6b76:L4f6b76:{c.instructions+=2;NFSU2_TR(0x4f6b76);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6b78:{NFSU2_TR(0x4f6b78);
if(r1(R+518)){{goto L4f6b7f;}}
}
B4f6b7a:L4f6b7a:{c.instructions+=2;NFSU2_TR(0x4f6b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b7d:{NFSU2_TR(0x4f6b7d);
{goto L4f6b81;}
}
B4f6b7f:L4f6b7f:{c.instructions+=1;NFSU2_TR(0x4f6b7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6b81:L4f6b81:{c.instructions+=5;NFSU2_TR(0x4f6b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6b84:{NFSU2_TR(0x4f6b84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6b86:{NFSU2_TR(0x4f6b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b89:{NFSU2_TR(0x4f6b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b8c:{NFSU2_TR(0x4f6b8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6b8e:L4f6b8e:{c.instructions+=3;NFSU2_TR(0x4f6b8e);
u8 U[4];
w4(U+0,u32(0x79886cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b93:{NFSU2_TR(0x4f6b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6b96:{NFSU2_TR(0x4f6b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6b9bull));
TAIL_STATIC(0x505450u,505);
}
B4f6b9b:L4f6b9b:{c.instructions+=4;NFSU2_TR(0x4f6b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6b9e:{NFSU2_TR(0x4f6b9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6b9f:{NFSU2_TR(0x4f6b9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ba0:{NFSU2_TR(0x4f6ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ba5ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6ba5:L4f6ba5:{c.instructions+=4;NFSU2_TR(0x4f6ba5);
__builtin_memmove((R+28),(R+0),4);
}
B4f6ba7:{NFSU2_TR(0x4f6ba7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6baa:{NFSU2_TR(0x4f6baa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6bac:{NFSU2_TR(0x4f6bac);
if(r1(R+518)){{goto L4f6bcb;}}
}
B4f6bae:L4f6bae:{c.instructions+=1;NFSU2_TR(0x4f6bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6bb3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6bb3:L4f6bb3:{c.instructions+=2;NFSU2_TR(0x4f6bb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6bb5:{NFSU2_TR(0x4f6bb5);
if(r1(R+518)){{goto L4f6bbc;}}
}
B4f6bb7:L4f6bb7:{c.instructions+=2;NFSU2_TR(0x4f6bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bba:{NFSU2_TR(0x4f6bba);
{goto L4f6bbe;}
}
B4f6bbc:L4f6bbc:{c.instructions+=1;NFSU2_TR(0x4f6bbc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6bbe:L4f6bbe:{c.instructions+=5;NFSU2_TR(0x4f6bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6bc1:{NFSU2_TR(0x4f6bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6bc3:{NFSU2_TR(0x4f6bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bc6:{NFSU2_TR(0x4f6bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bc9:{NFSU2_TR(0x4f6bc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6bcb:L4f6bcb:{c.instructions+=6;NFSU2_TR(0x4f6bcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6bcc:{NFSU2_TR(0x4f6bcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6bcd:{NFSU2_TR(0x4f6bcd);
__builtin_memmove((R+4),(R+24),4);
}
B4f6bcf:{NFSU2_TR(0x4f6bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x96005a7dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bd6:{NFSU2_TR(0x4f6bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x9600b4faull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bdd:{NFSU2_TR(0x4f6bdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6be2ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4f6be2:L4f6be2:{c.instructions+=8;NFSU2_TR(0x4f6be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6be6:{NFSU2_TR(0x4f6be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f6be7:{NFSU2_TR(0x4f6be7);
__builtin_memmove((R+0),(R+24),4);
}
B4f6be9:{NFSU2_TR(0x4f6be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f6bea:{NFSU2_TR(0x4f6bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f6beb:{NFSU2_TR(0x4f6beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6bf2:{NFSU2_TR(0x4f6bf2);
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
B4f6bf5:{NFSU2_TR(0x4f6bf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f6c00:L4f6c00:{c.instructions+=41;NFSU2_TR(0x4f6c00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c02:{NFSU2_TR(0x4f6c02);
u8 U[4];
w4(U+0,u32(0x776958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c07:{NFSU2_TR(0x4f6c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6c0d:{NFSU2_TR(0x4f6c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c0e:{NFSU2_TR(0x4f6c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c15:{NFSU2_TR(0x4f6c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B4f6c18:{NFSU2_TR(0x4f6c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6c1c:{NFSU2_TR(0x4f6c1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c1d:{NFSU2_TR(0x4f6c1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c1e:{NFSU2_TR(0x4f6c1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c1f:{NFSU2_TR(0x4f6c1f);
__builtin_memmove((R+24),(R+4),4);
}
B4f6c21:{NFSU2_TR(0x4f6c21);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f6c23:{NFSU2_TR(0x4f6c23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c24:{NFSU2_TR(0x4f6c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c28:{NFSU2_TR(0x4f6c28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f6c2a:{NFSU2_TR(0x4f6c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c2d:{NFSU2_TR(0x4f6c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c30:{NFSU2_TR(0x4f6c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c37:{NFSU2_TR(0x4f6c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c3a:{NFSU2_TR(0x4f6c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c3d:{NFSU2_TR(0x4f6c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c40:{NFSU2_TR(0x4f6c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c43:{NFSU2_TR(0x4f6c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c46:{NFSU2_TR(0x4f6c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c49:{NFSU2_TR(0x4f6c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c50:{NFSU2_TR(0x4f6c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c57:{NFSU2_TR(0x4f6c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c5a:{NFSU2_TR(0x4f6c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c5d:{NFSU2_TR(0x4f6c5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c60:{NFSU2_TR(0x4f6c60);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c63:{NFSU2_TR(0x4f6c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c69:{NFSU2_TR(0x4f6c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c6f:{NFSU2_TR(0x4f6c6f);
u8 U[4];
w4(U+0,u32(0x7989f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6c74:{NFSU2_TR(0x4f6c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c78:{NFSU2_TR(0x4f6c78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c7b:{NFSU2_TR(0x4f6c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c81:{NFSU2_TR(0x4f6c81);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c87:{NFSU2_TR(0x4f6c87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f6c8d:{NFSU2_TR(0x4f6c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c93:{NFSU2_TR(0x4f6c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6c99:{NFSU2_TR(0x4f6c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6c9eull));
TAIL_STATIC(0x505450u,505);
}
B4f6c9e:L4f6c9e:{c.instructions+=4;NFSU2_TR(0x4f6c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6ca1:{NFSU2_TR(0x4f6ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ca2:{NFSU2_TR(0x4f6ca2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ca3:{NFSU2_TR(0x4f6ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ca8ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6ca8:L4f6ca8:{c.instructions+=4;NFSU2_TR(0x4f6ca8);
__builtin_memmove((R+28),(R+0),4);
}
B4f6caa:{NFSU2_TR(0x4f6caa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6cad:{NFSU2_TR(0x4f6cad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6caf:{NFSU2_TR(0x4f6caf);
if(r1(R+518)){{goto L4f6cce;}}
}
B4f6cb1:L4f6cb1:{c.instructions+=1;NFSU2_TR(0x4f6cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6cb6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6cb6:L4f6cb6:{c.instructions+=2;NFSU2_TR(0x4f6cb6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6cb8:{NFSU2_TR(0x4f6cb8);
if(r1(R+518)){{goto L4f6cbf;}}
}
B4f6cba:L4f6cba:{c.instructions+=2;NFSU2_TR(0x4f6cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6cbd:{NFSU2_TR(0x4f6cbd);
{goto L4f6cc1;}
}
B4f6cbf:L4f6cbf:{c.instructions+=1;NFSU2_TR(0x4f6cbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6cc1:L4f6cc1:{c.instructions+=5;NFSU2_TR(0x4f6cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6cc4:{NFSU2_TR(0x4f6cc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6cc6:{NFSU2_TR(0x4f6cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6cc9:{NFSU2_TR(0x4f6cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ccc:{NFSU2_TR(0x4f6ccc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6cce:L4f6cce:{c.instructions+=4;NFSU2_TR(0x4f6cce);
u8 U[4];
w4(U+0,u32(0xb8387a0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6cd3:{NFSU2_TR(0x4f6cd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6cd4:{NFSU2_TR(0x4f6cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6cd7:{NFSU2_TR(0x4f6cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6cdcull));
TAIL_STATIC(0x50c900u,50c);
}
B4f6cdc:L4f6cdc:{c.instructions+=2;NFSU2_TR(0x4f6cdc);
u8 U[4];
w4(U+0,u32(0x7987d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ce1:{NFSU2_TR(0x4f6ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ce6ull));
TAIL_STATIC(0x505450u,505);
}
B4f6ce6:L4f6ce6:{c.instructions+=4;NFSU2_TR(0x4f6ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6ce9:{NFSU2_TR(0x4f6ce9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6cea:{NFSU2_TR(0x4f6cea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ceb:{NFSU2_TR(0x4f6ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6cf0ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6cf0:L4f6cf0:{c.instructions+=4;NFSU2_TR(0x4f6cf0);
__builtin_memmove((R+28),(R+0),4);
}
B4f6cf2:{NFSU2_TR(0x4f6cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f6cf5:{NFSU2_TR(0x4f6cf5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6cf7:{NFSU2_TR(0x4f6cf7);
if(r1(R+518)){{goto L4f6d16;}}
}
B4f6cf9:L4f6cf9:{c.instructions+=1;NFSU2_TR(0x4f6cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6cfeull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6cfe:L4f6cfe:{c.instructions+=2;NFSU2_TR(0x4f6cfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6d00:{NFSU2_TR(0x4f6d00);
if(r1(R+518)){{goto L4f6d07;}}
}
B4f6d02:L4f6d02:{c.instructions+=2;NFSU2_TR(0x4f6d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d05:{NFSU2_TR(0x4f6d05);
{goto L4f6d09;}
}
B4f6d07:L4f6d07:{c.instructions+=1;NFSU2_TR(0x4f6d07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6d09:L4f6d09:{c.instructions+=5;NFSU2_TR(0x4f6d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6d0c:{NFSU2_TR(0x4f6d0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6d0e:{NFSU2_TR(0x4f6d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d11:{NFSU2_TR(0x4f6d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d14:{NFSU2_TR(0x4f6d14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6d16:L4f6d16:{c.instructions+=3;NFSU2_TR(0x4f6d16);
u8 U[4];
w4(U+0,u32(0x7989e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d1b:{NFSU2_TR(0x4f6d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d1e:{NFSU2_TR(0x4f6d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d23ull));
TAIL_STATIC(0x505450u,505);
}
B4f6d23:L4f6d23:{c.instructions+=4;NFSU2_TR(0x4f6d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d24:{NFSU2_TR(0x4f6d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6d27:{NFSU2_TR(0x4f6d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d28:{NFSU2_TR(0x4f6d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d2dull));
TAIL_STATIC(0x537a10u,537);
}
B4f6d2d:L4f6d2d:{c.instructions+=4;NFSU2_TR(0x4f6d2d);
__builtin_memmove((R+28),(R+0),4);
}
B4f6d2f:{NFSU2_TR(0x4f6d2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6d32:{NFSU2_TR(0x4f6d32);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6d34:{NFSU2_TR(0x4f6d34);
if(r1(R+518)){{goto L4f6d53;}}
}
B4f6d36:L4f6d36:{c.instructions+=1;NFSU2_TR(0x4f6d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d3bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6d3b:L4f6d3b:{c.instructions+=2;NFSU2_TR(0x4f6d3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6d3d:{NFSU2_TR(0x4f6d3d);
if(r1(R+518)){{goto L4f6d44;}}
}
B4f6d3f:L4f6d3f:{c.instructions+=2;NFSU2_TR(0x4f6d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d42:{NFSU2_TR(0x4f6d42);
{goto L4f6d46;}
}
B4f6d44:L4f6d44:{c.instructions+=1;NFSU2_TR(0x4f6d44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6d46:L4f6d46:{c.instructions+=5;NFSU2_TR(0x4f6d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6d49:{NFSU2_TR(0x4f6d49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6d4b:{NFSU2_TR(0x4f6d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d4e:{NFSU2_TR(0x4f6d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d51:{NFSU2_TR(0x4f6d51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6d53:L4f6d53:{c.instructions+=3;NFSU2_TR(0x4f6d53);
u8 U[4];
w4(U+0,u32(0x7989d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d58:{NFSU2_TR(0x4f6d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d5b:{NFSU2_TR(0x4f6d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d60ull));
TAIL_STATIC(0x505450u,505);
}
B4f6d60:L4f6d60:{c.instructions+=4;NFSU2_TR(0x4f6d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6d63:{NFSU2_TR(0x4f6d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d64:{NFSU2_TR(0x4f6d64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d65:{NFSU2_TR(0x4f6d65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d6aull));
TAIL_STATIC(0x537a10u,537);
}
B4f6d6a:L4f6d6a:{c.instructions+=4;NFSU2_TR(0x4f6d6a);
__builtin_memmove((R+28),(R+0),4);
}
B4f6d6c:{NFSU2_TR(0x4f6d6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6d6f:{NFSU2_TR(0x4f6d6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6d71:{NFSU2_TR(0x4f6d71);
if(r1(R+518)){{goto L4f6d90;}}
}
B4f6d73:L4f6d73:{c.instructions+=1;NFSU2_TR(0x4f6d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6d78ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6d78:L4f6d78:{c.instructions+=2;NFSU2_TR(0x4f6d78);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6d7a:{NFSU2_TR(0x4f6d7a);
if(r1(R+518)){{goto L4f6d81;}}
}
B4f6d7c:L4f6d7c:{c.instructions+=2;NFSU2_TR(0x4f6d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d7f:{NFSU2_TR(0x4f6d7f);
{goto L4f6d83;}
}
B4f6d81:L4f6d81:{c.instructions+=1;NFSU2_TR(0x4f6d81);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6d83:L4f6d83:{c.instructions+=5;NFSU2_TR(0x4f6d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6d86:{NFSU2_TR(0x4f6d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6d88:{NFSU2_TR(0x4f6d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d8b:{NFSU2_TR(0x4f6d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d8e:{NFSU2_TR(0x4f6d8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6d90:L4f6d90:{c.instructions+=4;NFSU2_TR(0x4f6d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6d93:{NFSU2_TR(0x4f6d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f6d96:{NFSU2_TR(0x4f6d96);
u8 U[4];
w4(U+0,u32(0x7989c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6d9b:{NFSU2_TR(0x4f6d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6da0ull));
TAIL_STATIC(0x505450u,505);
}
B4f6da0:L4f6da0:{c.instructions+=3;NFSU2_TR(0x4f6da0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6da1:{NFSU2_TR(0x4f6da1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6da2:{NFSU2_TR(0x4f6da2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6da7ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6da7:L4f6da7:{c.instructions+=4;NFSU2_TR(0x4f6da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f6daa:{NFSU2_TR(0x4f6daa);
u8 U[4];
w4(U+0,u32(0x7989b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6daf:{NFSU2_TR(0x4f6daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6db2:{NFSU2_TR(0x4f6db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6db7ull));
TAIL_STATIC(0x505450u,505);
}
B4f6db7:L4f6db7:{c.instructions+=3;NFSU2_TR(0x4f6db7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6db8:{NFSU2_TR(0x4f6db8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6db9:{NFSU2_TR(0x4f6db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6dbeull));
TAIL_STATIC(0x537a10u,537);
}
B4f6dbe:L4f6dbe:{c.instructions+=4;NFSU2_TR(0x4f6dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6dc1:{NFSU2_TR(0x4f6dc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6dc2:{NFSU2_TR(0x4f6dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6dc5:{NFSU2_TR(0x4f6dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6dcaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f6dca:L4f6dca:{c.instructions+=3;NFSU2_TR(0x4f6dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6dcd:{NFSU2_TR(0x4f6dcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6dce:{NFSU2_TR(0x4f6dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6dd3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f6dd3:L4f6dd3:{c.instructions+=2;NFSU2_TR(0x4f6dd3);
u8 U[4];
w4(U+0,u32(0x7989a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6dd8:{NFSU2_TR(0x4f6dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6dddull));
TAIL_STATIC(0x505450u,505);
}
B4f6ddd:L4f6ddd:{c.instructions+=4;NFSU2_TR(0x4f6ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6de0:{NFSU2_TR(0x4f6de0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6de1:{NFSU2_TR(0x4f6de1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6de2:{NFSU2_TR(0x4f6de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6de7ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6de7:L4f6de7:{c.instructions+=4;NFSU2_TR(0x4f6de7);
__builtin_memmove((R+28),(R+0),4);
}
B4f6de9:{NFSU2_TR(0x4f6de9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4f6dec:{NFSU2_TR(0x4f6dec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6dee:{NFSU2_TR(0x4f6dee);
if(r1(R+518)){{goto L4f6e0d;}}
}
B4f6df0:L4f6df0:{c.instructions+=1;NFSU2_TR(0x4f6df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6df5ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6df5:L4f6df5:{c.instructions+=2;NFSU2_TR(0x4f6df5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6df7:{NFSU2_TR(0x4f6df7);
if(r1(R+518)){{goto L4f6dfe;}}
}
B4f6df9:L4f6df9:{c.instructions+=2;NFSU2_TR(0x4f6df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6dfc:{NFSU2_TR(0x4f6dfc);
{goto L4f6e00;}
}
B4f6dfe:L4f6dfe:{c.instructions+=1;NFSU2_TR(0x4f6dfe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6e00:L4f6e00:{c.instructions+=5;NFSU2_TR(0x4f6e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6e03:{NFSU2_TR(0x4f6e03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6e05:{NFSU2_TR(0x4f6e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e08:{NFSU2_TR(0x4f6e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e0b:{NFSU2_TR(0x4f6e0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6e0d:L4f6e0d:{c.instructions+=2;NFSU2_TR(0x4f6e0d);
u8 U[4];
w4(U+0,u32(0x79898cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e12:{NFSU2_TR(0x4f6e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e17ull));
TAIL_STATIC(0x505450u,505);
}
B4f6e17:L4f6e17:{c.instructions+=4;NFSU2_TR(0x4f6e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6e1a:{NFSU2_TR(0x4f6e1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e1b:{NFSU2_TR(0x4f6e1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e1c:{NFSU2_TR(0x4f6e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e21ull));
TAIL_STATIC(0x537a60u,537);
}
B4f6e21:L4f6e21:{c.instructions+=4;NFSU2_TR(0x4f6e21);
__builtin_memmove((R+28),(R+0),4);
}
B4f6e23:{NFSU2_TR(0x4f6e23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6e26:{NFSU2_TR(0x4f6e26);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6e28:{NFSU2_TR(0x4f6e28);
if(r1(R+518)){{goto L4f6e47;}}
}
B4f6e2a:L4f6e2a:{c.instructions+=1;NFSU2_TR(0x4f6e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e2full));
TAIL_STATIC(0x440ec0u,440);
}
B4f6e2f:L4f6e2f:{c.instructions+=2;NFSU2_TR(0x4f6e2f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6e31:{NFSU2_TR(0x4f6e31);
if(r1(R+518)){{goto L4f6e38;}}
}
B4f6e33:L4f6e33:{c.instructions+=2;NFSU2_TR(0x4f6e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e36:{NFSU2_TR(0x4f6e36);
{goto L4f6e3a;}
}
B4f6e38:L4f6e38:{c.instructions+=1;NFSU2_TR(0x4f6e38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6e3a:L4f6e3a:{c.instructions+=5;NFSU2_TR(0x4f6e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6e3d:{NFSU2_TR(0x4f6e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6e3f:{NFSU2_TR(0x4f6e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e42:{NFSU2_TR(0x4f6e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e45:{NFSU2_TR(0x4f6e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6e47:L4f6e47:{c.instructions+=3;NFSU2_TR(0x4f6e47);
u8 U[4];
w4(U+0,u32(0x798970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e4c:{NFSU2_TR(0x4f6e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e4f:{NFSU2_TR(0x4f6e4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e54ull));
TAIL_STATIC(0x505450u,505);
}
B4f6e54:L4f6e54:{c.instructions+=4;NFSU2_TR(0x4f6e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e55:{NFSU2_TR(0x4f6e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6e58:{NFSU2_TR(0x4f6e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e59:{NFSU2_TR(0x4f6e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e5eull));
TAIL_STATIC(0x537a60u,537);
}
B4f6e5e:L4f6e5e:{c.instructions+=4;NFSU2_TR(0x4f6e5e);
__builtin_memmove((R+28),(R+0),4);
}
B4f6e60:{NFSU2_TR(0x4f6e60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6e63:{NFSU2_TR(0x4f6e63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6e65:{NFSU2_TR(0x4f6e65);
if(r1(R+518)){{goto L4f6e84;}}
}
B4f6e67:L4f6e67:{c.instructions+=1;NFSU2_TR(0x4f6e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e6cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6e6c:L4f6e6c:{c.instructions+=2;NFSU2_TR(0x4f6e6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6e6e:{NFSU2_TR(0x4f6e6e);
if(r1(R+518)){{goto L4f6e75;}}
}
B4f6e70:L4f6e70:{c.instructions+=2;NFSU2_TR(0x4f6e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e73:{NFSU2_TR(0x4f6e73);
{goto L4f6e77;}
}
B4f6e75:L4f6e75:{c.instructions+=1;NFSU2_TR(0x4f6e75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6e77:L4f6e77:{c.instructions+=5;NFSU2_TR(0x4f6e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6e7a:{NFSU2_TR(0x4f6e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6e7c:{NFSU2_TR(0x4f6e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e7f:{NFSU2_TR(0x4f6e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e82:{NFSU2_TR(0x4f6e82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6e84:L4f6e84:{c.instructions+=3;NFSU2_TR(0x4f6e84);
u8 U[4];
w4(U+0,u32(0x79894cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e89:{NFSU2_TR(0x4f6e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6e8c:{NFSU2_TR(0x4f6e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e91ull));
TAIL_STATIC(0x505450u,505);
}
B4f6e91:L4f6e91:{c.instructions+=4;NFSU2_TR(0x4f6e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6e94:{NFSU2_TR(0x4f6e94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e95:{NFSU2_TR(0x4f6e95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6e96:{NFSU2_TR(0x4f6e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6e9bull));
TAIL_STATIC(0x537a60u,537);
}
B4f6e9b:L4f6e9b:{c.instructions+=4;NFSU2_TR(0x4f6e9b);
__builtin_memmove((R+28),(R+0),4);
}
B4f6e9d:{NFSU2_TR(0x4f6e9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6ea0:{NFSU2_TR(0x4f6ea0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6ea2:{NFSU2_TR(0x4f6ea2);
if(r1(R+518)){{goto L4f6ec1;}}
}
B4f6ea4:L4f6ea4:{c.instructions+=1;NFSU2_TR(0x4f6ea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ea9ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6ea9:L4f6ea9:{c.instructions+=2;NFSU2_TR(0x4f6ea9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6eab:{NFSU2_TR(0x4f6eab);
if(r1(R+518)){{goto L4f6eb2;}}
}
B4f6ead:L4f6ead:{c.instructions+=2;NFSU2_TR(0x4f6ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6eb0:{NFSU2_TR(0x4f6eb0);
{goto L4f6eb4;}
}
B4f6eb2:L4f6eb2:{c.instructions+=1;NFSU2_TR(0x4f6eb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6eb4:L4f6eb4:{c.instructions+=5;NFSU2_TR(0x4f6eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6eb7:{NFSU2_TR(0x4f6eb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6eb9:{NFSU2_TR(0x4f6eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ebc:{NFSU2_TR(0x4f6ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ebf:{NFSU2_TR(0x4f6ebf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6ec1:L4f6ec1:{c.instructions+=3;NFSU2_TR(0x4f6ec1);
u8 U[4];
w4(U+0,u32(0x798940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ec6:{NFSU2_TR(0x4f6ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ec9:{NFSU2_TR(0x4f6ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6eceull));
TAIL_STATIC(0x505450u,505);
}
B4f6ece:L4f6ece:{c.instructions+=4;NFSU2_TR(0x4f6ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6ed1:{NFSU2_TR(0x4f6ed1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ed2:{NFSU2_TR(0x4f6ed2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6ed3:{NFSU2_TR(0x4f6ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ed8ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6ed8:L4f6ed8:{c.instructions+=4;NFSU2_TR(0x4f6ed8);
__builtin_memmove((R+28),(R+0),4);
}
B4f6eda:{NFSU2_TR(0x4f6eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6edd:{NFSU2_TR(0x4f6edd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6edf:{NFSU2_TR(0x4f6edf);
if(r1(R+518)){{goto L4f6efe;}}
}
B4f6ee1:L4f6ee1:{c.instructions+=1;NFSU2_TR(0x4f6ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6ee6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6ee6:L4f6ee6:{c.instructions+=2;NFSU2_TR(0x4f6ee6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6ee8:{NFSU2_TR(0x4f6ee8);
if(r1(R+518)){{goto L4f6eef;}}
}
B4f6eea:L4f6eea:{c.instructions+=2;NFSU2_TR(0x4f6eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6eed:{NFSU2_TR(0x4f6eed);
{goto L4f6ef1;}
}
B4f6eef:L4f6eef:{c.instructions+=1;NFSU2_TR(0x4f6eef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6ef1:L4f6ef1:{c.instructions+=5;NFSU2_TR(0x4f6ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6ef4:{NFSU2_TR(0x4f6ef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6ef6:{NFSU2_TR(0x4f6ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ef9:{NFSU2_TR(0x4f6ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6efc:{NFSU2_TR(0x4f6efc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6efe:L4f6efe:{c.instructions+=3;NFSU2_TR(0x4f6efe);
u8 U[4];
w4(U+0,u32(0x798934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f03:{NFSU2_TR(0x4f6f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f06:{NFSU2_TR(0x4f6f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f0bull));
TAIL_STATIC(0x505450u,505);
}
B4f6f0b:L4f6f0b:{c.instructions+=4;NFSU2_TR(0x4f6f0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f0c:{NFSU2_TR(0x4f6f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6f0f:{NFSU2_TR(0x4f6f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f10:{NFSU2_TR(0x4f6f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f15ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6f15:L4f6f15:{c.instructions+=4;NFSU2_TR(0x4f6f15);
__builtin_memmove((R+28),(R+0),4);
}
B4f6f17:{NFSU2_TR(0x4f6f17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6f1a:{NFSU2_TR(0x4f6f1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f1c:{NFSU2_TR(0x4f6f1c);
if(r1(R+518)){{goto L4f6f3b;}}
}
B4f6f1e:L4f6f1e:{c.instructions+=1;NFSU2_TR(0x4f6f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f23ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6f23:L4f6f23:{c.instructions+=2;NFSU2_TR(0x4f6f23);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f25:{NFSU2_TR(0x4f6f25);
if(r1(R+518)){{goto L4f6f2c;}}
}
B4f6f27:L4f6f27:{c.instructions+=2;NFSU2_TR(0x4f6f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f2a:{NFSU2_TR(0x4f6f2a);
{goto L4f6f2e;}
}
B4f6f2c:L4f6f2c:{c.instructions+=1;NFSU2_TR(0x4f6f2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6f2e:L4f6f2e:{c.instructions+=5;NFSU2_TR(0x4f6f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6f31:{NFSU2_TR(0x4f6f31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6f33:{NFSU2_TR(0x4f6f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f36:{NFSU2_TR(0x4f6f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f39:{NFSU2_TR(0x4f6f39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6f3b:L4f6f3b:{c.instructions+=3;NFSU2_TR(0x4f6f3b);
u8 U[4];
w4(U+0,u32(0x798928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f40:{NFSU2_TR(0x4f6f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f43:{NFSU2_TR(0x4f6f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f48ull));
TAIL_STATIC(0x505450u,505);
}
B4f6f48:L4f6f48:{c.instructions+=4;NFSU2_TR(0x4f6f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6f4b:{NFSU2_TR(0x4f6f4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f4c:{NFSU2_TR(0x4f6f4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f4d:{NFSU2_TR(0x4f6f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f52ull));
TAIL_STATIC(0x537a10u,537);
}
B4f6f52:L4f6f52:{c.instructions+=4;NFSU2_TR(0x4f6f52);
__builtin_memmove((R+28),(R+0),4);
}
B4f6f54:{NFSU2_TR(0x4f6f54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6f57:{NFSU2_TR(0x4f6f57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f59:{NFSU2_TR(0x4f6f59);
if(r1(R+518)){{goto L4f6f78;}}
}
B4f6f5b:L4f6f5b:{c.instructions+=1;NFSU2_TR(0x4f6f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f60ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6f60:L4f6f60:{c.instructions+=2;NFSU2_TR(0x4f6f60);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f62:{NFSU2_TR(0x4f6f62);
if(r1(R+518)){{goto L4f6f69;}}
}
B4f6f64:L4f6f64:{c.instructions+=2;NFSU2_TR(0x4f6f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f67:{NFSU2_TR(0x4f6f67);
{goto L4f6f6b;}
}
B4f6f69:L4f6f69:{c.instructions+=1;NFSU2_TR(0x4f6f69);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6f6b:L4f6f6b:{c.instructions+=5;NFSU2_TR(0x4f6f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6f6e:{NFSU2_TR(0x4f6f6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6f70:{NFSU2_TR(0x4f6f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f73:{NFSU2_TR(0x4f6f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f76:{NFSU2_TR(0x4f6f76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6f78:L4f6f78:{c.instructions+=3;NFSU2_TR(0x4f6f78);
u8 U[4];
w4(U+0,u32(0x798910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f7d:{NFSU2_TR(0x4f6f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6f80:{NFSU2_TR(0x4f6f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f85ull));
TAIL_STATIC(0x505450u,505);
}
B4f6f85:L4f6f85:{c.instructions+=4;NFSU2_TR(0x4f6f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f6f88:{NFSU2_TR(0x4f6f88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f89:{NFSU2_TR(0x4f6f89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6f8a:{NFSU2_TR(0x4f6f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f8full));
TAIL_STATIC(0x537a10u,537);
}
B4f6f8f:L4f6f8f:{c.instructions+=4;NFSU2_TR(0x4f6f8f);
__builtin_memmove((R+28),(R+0),4);
}
B4f6f91:{NFSU2_TR(0x4f6f91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6f94:{NFSU2_TR(0x4f6f94);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f96:{NFSU2_TR(0x4f6f96);
if(r1(R+518)){{goto L4f6fb5;}}
}
B4f6f98:L4f6f98:{c.instructions+=1;NFSU2_TR(0x4f6f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6f9dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6f9d:L4f6f9d:{c.instructions+=2;NFSU2_TR(0x4f6f9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6f9f:{NFSU2_TR(0x4f6f9f);
if(r1(R+518)){{goto L4f6fa6;}}
}
B4f6fa1:L4f6fa1:{c.instructions+=2;NFSU2_TR(0x4f6fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fa4:{NFSU2_TR(0x4f6fa4);
{goto L4f6fa8;}
}
B4f6fa6:L4f6fa6:{c.instructions+=1;NFSU2_TR(0x4f6fa6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6fa8:L4f6fa8:{c.instructions+=5;NFSU2_TR(0x4f6fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6fab:{NFSU2_TR(0x4f6fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6fad:{NFSU2_TR(0x4f6fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fb0:{NFSU2_TR(0x4f6fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fb3:{NFSU2_TR(0x4f6fb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6fb5:L4f6fb5:{c.instructions+=3;NFSU2_TR(0x4f6fb5);
u8 U[4];
w4(U+0,u32(0x798900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6fba:{NFSU2_TR(0x4f6fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fbd:{NFSU2_TR(0x4f6fbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6fc2ull));
TAIL_STATIC(0x505450u,505);
}
B4f6fc2:L4f6fc2:{c.instructions+=4;NFSU2_TR(0x4f6fc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6fc3:{NFSU2_TR(0x4f6fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6fc6:{NFSU2_TR(0x4f6fc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f6fc7:{NFSU2_TR(0x4f6fc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6fccull));
TAIL_STATIC(0x537a10u,537);
}
B4f6fcc:L4f6fcc:{c.instructions+=4;NFSU2_TR(0x4f6fcc);
__builtin_memmove((R+28),(R+0),4);
}
B4f6fce:{NFSU2_TR(0x4f6fce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f6fd1:{NFSU2_TR(0x4f6fd1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6fd3:{NFSU2_TR(0x4f6fd3);
if(r1(R+518)){{goto L4f6ff2;}}
}
B4f6fd5:L4f6fd5:{c.instructions+=1;NFSU2_TR(0x4f6fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f6fdaull));
TAIL_STATIC(0x440ec0u,440);
}
B4f6fda:L4f6fda:{c.instructions+=2;NFSU2_TR(0x4f6fda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f6fdc:{NFSU2_TR(0x4f6fdc);
if(r1(R+518)){{goto L4f6fe3;}}
}
B4f6fde:L4f6fde:{c.instructions+=2;NFSU2_TR(0x4f6fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fe1:{NFSU2_TR(0x4f6fe1);
{goto L4f6fe5;}
}
B4f6fe3:L4f6fe3:{c.instructions+=1;NFSU2_TR(0x4f6fe3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f6fe5:L4f6fe5:{c.instructions+=5;NFSU2_TR(0x4f6fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f6fe8:{NFSU2_TR(0x4f6fe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f6fea:{NFSU2_TR(0x4f6fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6fed:{NFSU2_TR(0x4f6fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f6ff0:{NFSU2_TR(0x4f6ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f6ff2:L4f6ff2:{c.instructions+=3;NFSU2_TR(0x4f6ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f6ff6:{NFSU2_TR(0x4f6ff6);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+12)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4f6ffd:{NFSU2_TR(0x4f6ffd);
if(r1(R+518)){TAIL_STATIC(0x4f70c2u,4f7);}
TAIL_STATIC(0x4f7003u,4f7);
}
XIT:NFSU2_TR_EXIT(0x4f6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
