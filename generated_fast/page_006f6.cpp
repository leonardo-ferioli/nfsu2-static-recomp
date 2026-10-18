#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 page_6f6(Cpu& c){return body_6f6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f6003:goto L6f6003;
case 0x6f6005:c.instructions+=1;goto B6f6005;
case 0x6f600b:goto L6f600b;
case 0x6f600e:c.instructions+=2;goto B6f600e;
case 0x6f600f:c.instructions+=1;goto B6f600f;
case 0x6f6015:goto L6f6015;
case 0x6f6018:c.instructions+=21;goto B6f6018;
case 0x6f601c:c.instructions+=20;goto B6f601c;
case 0x6f6021:c.instructions+=19;goto B6f6021;
case 0x6f6024:c.instructions+=18;goto B6f6024;
case 0x6f6027:c.instructions+=17;goto B6f6027;
case 0x6f602c:c.instructions+=16;goto B6f602c;
case 0x6f602e:c.instructions+=15;goto B6f602e;
case 0x6f6031:c.instructions+=14;goto B6f6031;
case 0x6f6033:c.instructions+=13;goto B6f6033;
case 0x6f6036:c.instructions+=12;goto B6f6036;
case 0x6f6039:c.instructions+=11;goto B6f6039;
case 0x6f603c:c.instructions+=10;goto B6f603c;
case 0x6f603f:c.instructions+=9;goto B6f603f;
case 0x6f6041:c.instructions+=8;goto B6f6041;
case 0x6f6044:c.instructions+=7;goto B6f6044;
case 0x6f6049:c.instructions+=6;goto B6f6049;
case 0x6f604a:c.instructions+=5;goto B6f604a;
case 0x6f604b:c.instructions+=4;goto B6f604b;
case 0x6f604c:c.instructions+=3;goto B6f604c;
case 0x6f604f:c.instructions+=2;goto B6f604f;
case 0x6f6056:c.instructions+=1;goto B6f6056;
case 0x6f605c:goto L6f605c;
case 0x6f605e:c.instructions+=6;goto B6f605e;
case 0x6f6063:c.instructions+=5;goto B6f6063;
case 0x6f6064:c.instructions+=4;goto B6f6064;
case 0x6f6069:c.instructions+=3;goto B6f6069;
case 0x6f606b:c.instructions+=2;goto B6f606b;
case 0x6f606d:c.instructions+=1;goto B6f606d;
case 0x6f606f:goto L6f606f;
case 0x6f6071:goto L6f6071;
case 0x6f6073:goto L6f6073;
case 0x6f607a:c.instructions+=1;goto B6f607a;
case 0x6f607c:goto L6f607c;
case 0x6f6081:c.instructions+=3;goto B6f6081;
case 0x6f6083:c.instructions+=2;goto B6f6083;
case 0x6f6085:c.instructions+=1;goto B6f6085;
case 0x6f6087:goto L6f6087;
case 0x6f6089:goto L6f6089;
case 0x6f608b:goto L6f608b;
case 0x6f6092:c.instructions+=1;goto B6f6092;
case 0x6f6094:goto L6f6094;
case 0x6f6099:c.instructions+=3;goto B6f6099;
case 0x6f609b:c.instructions+=2;goto B6f609b;
case 0x6f609d:c.instructions+=1;goto B6f609d;
case 0x6f609f:goto L6f609f;
case 0x6f60a1:goto L6f60a1;
case 0x6f60a3:goto L6f60a3;
case 0x6f60aa:c.instructions+=1;goto B6f60aa;
case 0x6f60ac:goto L6f60ac;
case 0x6f60ae:c.instructions+=3;goto B6f60ae;
case 0x6f60b3:c.instructions+=2;goto B6f60b3;
case 0x6f60b5:c.instructions+=1;goto B6f60b5;
case 0x6f60b7:goto L6f60b7;
case 0x6f60b9:goto L6f60b9;
case 0x6f60bb:goto L6f60bb;
case 0x6f60c2:goto L6f60c2;
case 0x6f60c5:c.instructions+=31;goto B6f60c5;
case 0x6f60c8:c.instructions+=30;goto B6f60c8;
case 0x6f60cd:c.instructions+=29;goto B6f60cd;
case 0x6f60cf:c.instructions+=28;goto B6f60cf;
case 0x6f60d2:c.instructions+=27;goto B6f60d2;
case 0x6f60d4:c.instructions+=26;goto B6f60d4;
case 0x6f60d7:c.instructions+=25;goto B6f60d7;
case 0x6f60da:c.instructions+=24;goto B6f60da;
case 0x6f60dd:c.instructions+=23;goto B6f60dd;
case 0x6f60e0:c.instructions+=22;goto B6f60e0;
case 0x6f60e2:c.instructions+=21;goto B6f60e2;
case 0x6f60e5:c.instructions+=20;goto B6f60e5;
case 0x6f60e8:c.instructions+=19;goto B6f60e8;
case 0x6f60ee:c.instructions+=18;goto B6f60ee;
case 0x6f60f0:c.instructions+=17;goto B6f60f0;
case 0x6f60f2:c.instructions+=16;goto B6f60f2;
case 0x6f60f5:c.instructions+=15;goto B6f60f5;
case 0x6f60fa:c.instructions+=14;goto B6f60fa;
case 0x6f60fd:c.instructions+=13;goto B6f60fd;
case 0x6f6100:c.instructions+=12;goto B6f6100;
case 0x6f6106:c.instructions+=11;goto B6f6106;
case 0x6f6109:c.instructions+=10;goto B6f6109;
case 0x6f610e:c.instructions+=9;goto B6f610e;
case 0x6f6110:c.instructions+=8;goto B6f6110;
case 0x6f6113:c.instructions+=7;goto B6f6113;
case 0x6f6115:c.instructions+=6;goto B6f6115;
case 0x6f6118:c.instructions+=5;goto B6f6118;
case 0x6f611b:c.instructions+=4;goto B6f611b;
case 0x6f611e:c.instructions+=3;goto B6f611e;
case 0x6f6123:c.instructions+=2;goto B6f6123;
case 0x6f6129:c.instructions+=1;goto B6f6129;
case 0x6f612b:goto L6f612b;
case 0x6f6132:c.instructions+=1;goto B6f6132;
case 0x6f6134:goto L6f6134;
case 0x6f6137:c.instructions+=11;goto B6f6137;
case 0x6f613a:c.instructions+=10;goto B6f613a;
case 0x6f613f:c.instructions+=9;goto B6f613f;
case 0x6f6141:c.instructions+=8;goto B6f6141;
case 0x6f6144:c.instructions+=7;goto B6f6144;
case 0x6f6146:c.instructions+=6;goto B6f6146;
case 0x6f6149:c.instructions+=5;goto B6f6149;
case 0x6f614c:c.instructions+=4;goto B6f614c;
case 0x6f614f:c.instructions+=3;goto B6f614f;
case 0x6f6152:c.instructions+=2;goto B6f6152;
case 0x6f6157:c.instructions+=1;goto B6f6157;
case 0x6f615d:goto L6f615d;
case 0x6f6160:c.instructions+=13;goto B6f6160;
case 0x6f6163:c.instructions+=12;goto B6f6163;
case 0x6f6168:c.instructions+=11;goto B6f6168;
case 0x6f616a:c.instructions+=10;goto B6f616a;
case 0x6f616d:c.instructions+=9;goto B6f616d;
case 0x6f616f:c.instructions+=8;goto B6f616f;
case 0x6f6172:c.instructions+=7;goto B6f6172;
case 0x6f6175:c.instructions+=6;goto B6f6175;
case 0x6f6178:c.instructions+=5;goto B6f6178;
case 0x6f617b:c.instructions+=4;goto B6f617b;
case 0x6f6180:c.instructions+=3;goto B6f6180;
case 0x6f6186:c.instructions+=2;goto B6f6186;
case 0x6f618c:c.instructions+=1;goto B6f618c;
case 0x6f618e:goto L6f618e;
case 0x6f6195:goto L6f6195;
case 0x6f6199:c.instructions+=1;goto B6f6199;
case 0x6f619b:goto L6f619b;
case 0x6f619e:c.instructions+=9;goto B6f619e;
case 0x6f61a1:c.instructions+=8;goto B6f61a1;
case 0x6f61a6:c.instructions+=7;goto B6f61a6;
case 0x6f61a8:c.instructions+=6;goto B6f61a8;
case 0x6f61ab:c.instructions+=5;goto B6f61ab;
case 0x6f61ad:c.instructions+=4;goto B6f61ad;
case 0x6f61b0:c.instructions+=3;goto B6f61b0;
case 0x6f61b3:c.instructions+=2;goto B6f61b3;
case 0x6f61b6:c.instructions+=1;goto B6f61b6;
case 0x6f61b8:goto L6f61b8;
case 0x6f61bd:goto L6f61bd;
case 0x6f61c0:c.instructions+=3;goto B6f61c0;
case 0x6f61c6:c.instructions+=2;goto B6f61c6;
case 0x6f61cb:c.instructions+=1;goto B6f61cb;
case 0x6f61d1:goto L6f61d1;
case 0x6f61d5:c.instructions+=7;goto B6f61d5;
case 0x6f61d8:c.instructions+=6;goto B6f61d8;
case 0x6f61dc:c.instructions+=5;goto B6f61dc;
case 0x6f61dd:c.instructions+=4;goto B6f61dd;
case 0x6f61de:c.instructions+=3;goto B6f61de;
case 0x6f61df:c.instructions+=2;goto B6f61df;
case 0x6f61e0:c.instructions+=1;goto B6f61e0;
case 0x6f61e1:goto L6f61e1;
case 0x6f61e6:c.instructions+=2;goto B6f61e6;
case 0x6f61eb:c.instructions+=1;goto B6f61eb;
case 0x6f61ed:goto L6f61ed;
case 0x6f61f2:c.instructions+=2;goto B6f61f2;
case 0x6f61f7:c.instructions+=1;goto B6f61f7;
case 0x6f61f9:goto L6f61f9;
case 0x6f61fe:c.instructions+=1;goto B6f61fe;
case 0x6f6200:goto L6f6200;
case 0x6f6205:c.instructions+=1;goto B6f6205;
case 0x6f6206:goto L6f6206;
case 0x6f620b:c.instructions+=1;goto B6f620b;
case 0x6f620c:goto L6f620c;
case 0x6f6211:c.instructions+=1;goto B6f6211;
case 0x6f6212:goto L6f6212;
case 0x6f6217:c.instructions+=2;goto B6f6217;
case 0x6f6219:c.instructions+=1;goto B6f6219;
case 0x6f621b:goto L6f621b;
case 0x6f6221:c.instructions+=1;goto B6f6221;
case 0x6f6223:goto L6f6223;
case 0x6f622a:c.instructions+=1;goto B6f622a;
case 0x6f622c:goto L6f622c;
case 0x6f6231:c.instructions+=1;goto B6f6231;
case 0x6f6232:goto L6f6232;
case 0x6f6237:c.instructions+=1;goto B6f6237;
case 0x6f6238:goto L6f6238;
case 0x6f623d:c.instructions+=1;goto B6f623d;
case 0x6f623e:goto L6f623e;
case 0x6f6243:c.instructions+=1;goto B6f6243;
case 0x6f6245:goto L6f6245;
case 0x6f624a:c.instructions+=1;goto B6f624a;
case 0x6f624b:goto L6f624b;
case 0x6f6250:c.instructions+=2;goto B6f6250;
case 0x6f6255:c.instructions+=1;goto B6f6255;
case 0x6f6257:goto L6f6257;
case 0x6f625c:goto L6f625c;
case 0x6f625d:goto L6f625d;
case 0x6f6264:c.instructions+=1;goto B6f6264;
case 0x6f6266:goto L6f6266;
case 0x6f626b:c.instructions+=2;goto B6f626b;
case 0x6f6271:c.instructions+=1;goto B6f6271;
case 0x6f6272:goto L6f6272;
case 0x6f6279:c.instructions+=1;goto B6f6279;
case 0x6f627e:goto L6f627e;
case 0x6f6283:goto L6f6283;
case 0x6f6285:c.instructions+=3;goto B6f6285;
case 0x6f6287:c.instructions+=2;goto B6f6287;
case 0x6f628c:c.instructions+=1;goto B6f628c;
case 0x6f628e:goto L6f628e;
case 0x6f6293:goto L6f6293;
case 0x6f6295:c.instructions+=2;goto B6f6295;
case 0x6f6296:c.instructions+=1;goto B6f6296;
case 0x6f6298:goto L6f6298;
case 0x6f6299:c.instructions+=6;goto B6f6299;
case 0x6f629a:c.instructions+=5;goto B6f629a;
case 0x6f629b:c.instructions+=4;goto B6f629b;
case 0x6f629c:c.instructions+=3;goto B6f629c;
case 0x6f629e:c.instructions+=2;goto B6f629e;
case 0x6f629f:c.instructions+=1;goto B6f629f;
case 0x6f62a4:goto L6f62a4;
case 0x6f62a6:c.instructions+=3;goto B6f62a6;
case 0x6f62a8:c.instructions+=2;goto B6f62a8;
case 0x6f62aa:c.instructions+=1;goto B6f62aa;
case 0x6f62ac:goto L6f62ac;
case 0x6f62b2:c.instructions+=2;goto B6f62b2;
case 0x6f62b8:c.instructions+=1;goto B6f62b8;
case 0x6f62bd:goto L6f62bd;
case 0x6f62c2:goto L6f62c2;
case 0x6f62c4:c.instructions+=5;goto B6f62c4;
case 0x6f62c5:c.instructions+=4;goto B6f62c5;
case 0x6f62c7:c.instructions+=3;goto B6f62c7;
case 0x6f62c8:c.instructions+=2;goto B6f62c8;
case 0x6f62ca:c.instructions+=1;goto B6f62ca;
case 0x6f62cc:goto L6f62cc;
case 0x6f62ce:goto L6f62ce;
case 0x6f62d0:c.instructions+=2;goto B6f62d0;
case 0x6f62d5:c.instructions+=1;goto B6f62d5;
case 0x6f62da:goto L6f62da;
case 0x6f62db:c.instructions+=1;goto B6f62db;
case 0x6f62dc:goto L6f62dc;
case 0x6f62de:c.instructions+=4;goto B6f62de;
case 0x6f62df:c.instructions+=3;goto B6f62df;
case 0x6f62e1:c.instructions+=2;goto B6f62e1;
case 0x6f62e2:c.instructions+=1;goto B6f62e2;
case 0x6f62e3:goto L6f62e3;
case 0x6f62e8:c.instructions+=1;goto B6f62e8;
case 0x6f62e9:goto L6f62e9;
case 0x6f62ea:c.instructions+=6;goto B6f62ea;
case 0x6f62ec:c.instructions+=5;goto B6f62ec;
case 0x6f62ee:c.instructions+=4;goto B6f62ee;
case 0x6f62f0:c.instructions+=3;goto B6f62f0;
case 0x6f62f2:c.instructions+=2;goto B6f62f2;
case 0x6f62f4:c.instructions+=1;goto B6f62f4;
case 0x6f62fa:goto L6f62fa;
case 0x6f62fc:c.instructions+=1;goto B6f62fc;
case 0x6f62fe:goto L6f62fe;
case 0x6f6301:c.instructions+=4;goto B6f6301;
case 0x6f6304:c.instructions+=3;goto B6f6304;
case 0x6f6306:c.instructions+=2;goto B6f6306;
case 0x6f6307:c.instructions+=1;goto B6f6307;
case 0x6f6308:goto L6f6308;
case 0x6f630a:c.instructions+=2;goto B6f630a;
case 0x6f630b:c.instructions+=1;goto B6f630b;
case 0x6f630c:goto L6f630c;
case 0x6f630d:c.instructions+=4;goto B6f630d;
case 0x6f630f:c.instructions+=3;goto B6f630f;
case 0x6f6312:c.instructions+=2;goto B6f6312;
case 0x6f6315:c.instructions+=1;goto B6f6315;
case 0x6f631b:goto L6f631b;
case 0x6f631c:c.instructions+=1;goto B6f631c;
case 0x6f631d:goto L6f631d;
case 0x6f631e:c.instructions+=5;goto B6f631e;
case 0x6f6320:c.instructions+=4;goto B6f6320;
case 0x6f6323:c.instructions+=3;goto B6f6323;
case 0x6f6325:c.instructions+=2;goto B6f6325;
case 0x6f6328:c.instructions+=1;goto B6f6328;
case 0x6f632e:goto L6f632e;
case 0x6f6330:c.instructions+=4;goto B6f6330;
case 0x6f6332:c.instructions+=3;goto B6f6332;
case 0x6f6333:c.instructions+=2;goto B6f6333;
case 0x6f6334:c.instructions+=1;goto B6f6334;
case 0x6f6335:goto L6f6335;
case 0x6f6336:c.instructions+=5;goto B6f6336;
case 0x6f6338:c.instructions+=4;goto B6f6338;
case 0x6f633b:c.instructions+=3;goto B6f633b;
case 0x6f633d:c.instructions+=2;goto B6f633d;
case 0x6f6340:c.instructions+=1;goto B6f6340;
case 0x6f6346:goto L6f6346;
case 0x6f6347:c.instructions+=1;goto B6f6347;
case 0x6f6348:goto L6f6348;
case 0x6f6349:c.instructions+=2;goto B6f6349;
case 0x6f634b:c.instructions+=1;goto B6f634b;
case 0x6f6350:goto L6f6350;
case 0x6f6352:c.instructions+=8;goto B6f6352;
case 0x6f6355:c.instructions+=7;goto B6f6355;
case 0x6f635b:c.instructions+=6;goto B6f635b;
case 0x6f635c:c.instructions+=5;goto B6f635c;
case 0x6f635e:c.instructions+=4;goto B6f635e;
case 0x6f635f:c.instructions+=3;goto B6f635f;
case 0x6f6362:c.instructions+=2;goto B6f6362;
case 0x6f6365:c.instructions+=1;goto B6f6365;
case 0x6f636b:goto L6f636b;
case 0x6f636d:c.instructions+=4;goto B6f636d;
case 0x6f636f:c.instructions+=3;goto B6f636f;
case 0x6f6370:c.instructions+=2;goto B6f6370;
case 0x6f6371:c.instructions+=1;goto B6f6371;
case 0x6f6372:goto L6f6372;
case 0x6f6373:c.instructions+=4;goto B6f6373;
case 0x6f6375:c.instructions+=3;goto B6f6375;
case 0x6f6378:c.instructions+=2;goto B6f6378;
case 0x6f637b:c.instructions+=1;goto B6f637b;
case 0x6f6381:goto L6f6381;
case 0x6f6382:c.instructions+=1;goto B6f6382;
case 0x6f6383:goto L6f6383;
case 0x6f638a:c.instructions+=1;goto B6f638a;
case 0x6f638c:goto L6f638c;
case 0x6f638d:c.instructions+=2;goto B6f638d;
case 0x6f638e:c.instructions+=1;goto B6f638e;
case 0x6f6393:goto L6f6393;
case 0x6f6398:c.instructions+=1;goto B6f6398;
case 0x6f639d:goto L6f639d;
case 0x6f639e:c.instructions+=2;goto B6f639e;
case 0x6f63a0:c.instructions+=1;goto B6f63a0;
case 0x6f63a5:goto L6f63a5;
case 0x6f63aa:goto L6f63aa;
case 0x6f63ac:c.instructions+=2;goto B6f63ac;
case 0x6f63ae:c.instructions+=1;goto B6f63ae;
case 0x6f63b0:goto L6f63b0;
case 0x6f63b2:goto L6f63b2;
case 0x6f63b5:c.instructions+=2;goto B6f63b5;
case 0x6f63bb:c.instructions+=1;goto B6f63bb;
case 0x6f63bd:goto L6f63bd;
case 0x6f63bf:c.instructions+=1;goto B6f63bf;
case 0x6f63c4:goto L6f63c4;
case 0x6f63cb:c.instructions+=1;goto B6f63cb;
case 0x6f63cd:goto L6f63cd;
case 0x6f63ce:c.instructions+=1;goto B6f63ce;
case 0x6f63cf:goto L6f63cf;
case 0x6f63d1:c.instructions+=1;goto B6f63d1;
case 0x6f63d2:goto L6f63d2;
case 0x6f63d9:c.instructions+=1;goto B6f63d9;
case 0x6f63db:goto L6f63db;
case 0x6f63dc:c.instructions+=5;goto B6f63dc;
case 0x6f63dd:c.instructions+=4;goto B6f63dd;
case 0x6f63e2:c.instructions+=3;goto B6f63e2;
case 0x6f63e3:c.instructions+=2;goto B6f63e3;
case 0x6f63ed:c.instructions+=1;goto B6f63ed;
case 0x6f63f2:goto L6f63f2;
case 0x6f63f7:c.instructions+=2;goto B6f63f7;
case 0x6f63f8:c.instructions+=1;goto B6f63f8;
case 0x6f63fd:goto L6f63fd;
case 0x6f63ff:c.instructions+=3;goto B6f63ff;
case 0x6f6400:c.instructions+=2;goto B6f6400;
case 0x6f6401:c.instructions+=1;goto B6f6401;
case 0x6f6403:goto L6f6403;
case 0x6f6405:c.instructions+=2;goto B6f6405;
case 0x6f6406:c.instructions+=1;goto B6f6406;
case 0x6f640b:goto L6f640b;
case 0x6f640c:c.instructions+=1;goto B6f640c;
case 0x6f640d:goto L6f640d;
case 0x6f640e:c.instructions+=1;goto B6f640e;
case 0x6f6413:goto L6f6413;
case 0x6f6414:c.instructions+=1;goto B6f6414;
case 0x6f6419:goto L6f6419;
case 0x6f6420:c.instructions+=4;goto B6f6420;
case 0x6f6421:c.instructions+=3;goto B6f6421;
case 0x6f6422:c.instructions+=2;goto B6f6422;
case 0x6f6427:c.instructions+=1;goto B6f6427;
case 0x6f642c:goto L6f642c;
case 0x6f6433:c.instructions+=2;goto B6f6433;
case 0x6f6434:c.instructions+=1;goto B6f6434;
case 0x6f6435:goto L6f6435;
case 0x6f6436:goto L6f6436;
case 0x6f6437:c.instructions+=4;goto B6f6437;
case 0x6f6438:c.instructions+=3;goto B6f6438;
case 0x6f6439:c.instructions+=2;goto B6f6439;
case 0x6f643e:c.instructions+=1;goto B6f643e;
case 0x6f6443:goto L6f6443;
case 0x6f6444:c.instructions+=3;goto B6f6444;
case 0x6f6449:c.instructions+=2;goto B6f6449;
case 0x6f644b:c.instructions+=1;goto B6f644b;
case 0x6f6450:goto L6f6450;
case 0x6f6452:c.instructions+=6;goto B6f6452;
case 0x6f6453:c.instructions+=5;goto B6f6453;
case 0x6f6455:c.instructions+=4;goto B6f6455;
case 0x6f645a:c.instructions+=3;goto B6f645a;
case 0x6f6460:c.instructions+=2;goto B6f6460;
case 0x6f6466:c.instructions+=1;goto B6f6466;
case 0x6f646b:goto L6f646b;
case 0x6f646c:c.instructions+=3;goto B6f646c;
case 0x6f646e:c.instructions+=2;goto B6f646e;
case 0x6f6474:c.instructions+=1;goto B6f6474;
case 0x6f6479:goto L6f6479;
case 0x6f647a:c.instructions+=6;goto B6f647a;
case 0x6f647b:c.instructions+=5;goto B6f647b;
case 0x6f647c:c.instructions+=4;goto B6f647c;
case 0x6f647d:c.instructions+=3;goto B6f647d;
case 0x6f6482:c.instructions+=2;goto B6f6482;
case 0x6f6487:c.instructions+=1;goto B6f6487;
case 0x6f648c:goto L6f648c;
case 0x6f648f:c.instructions+=3;goto B6f648f;
case 0x6f6491:c.instructions+=2;goto B6f6491;
case 0x6f6493:c.instructions+=1;goto B6f6493;
case 0x6f6495:goto L6f6495;
case 0x6f649a:goto L6f649a;
case 0x6f649b:c.instructions+=4;goto B6f649b;
case 0x6f649c:c.instructions+=3;goto B6f649c;
case 0x6f64a2:c.instructions+=2;goto B6f64a2;
case 0x6f64a3:c.instructions+=1;goto B6f64a3;
case 0x6f64a4:goto L6f64a4;
case 0x6f64a5:c.instructions+=3;goto B6f64a5;
case 0x6f64a6:c.instructions+=2;goto B6f64a6;
case 0x6f64a7:c.instructions+=1;goto B6f64a7;
case 0x6f64ac:goto L6f64ac;
case 0x6f64ad:c.instructions+=6;goto B6f64ad;
case 0x6f64af:c.instructions+=5;goto B6f64af;
case 0x6f64b0:c.instructions+=4;goto B6f64b0;
case 0x6f64b3:c.instructions+=3;goto B6f64b3;
case 0x6f64ba:c.instructions+=2;goto B6f64ba;
case 0x6f64bb:c.instructions+=1;goto B6f64bb;
case 0x6f64bd:goto L6f64bd;
case 0x6f64c2:goto L6f64c2;
case 0x6f64c7:c.instructions+=2;goto B6f64c7;
case 0x6f64c9:c.instructions+=1;goto B6f64c9;
case 0x6f64ce:goto L6f64ce;
case 0x6f64d1:c.instructions+=1;goto B6f64d1;
case 0x6f64d3:goto L6f64d3;
case 0x6f64da:c.instructions+=2;goto B6f64da;
case 0x6f64dc:c.instructions+=1;goto B6f64dc;
case 0x6f64de:goto L6f64de;
case 0x6f64e0:c.instructions+=1;goto B6f64e0;
case 0x6f64e2:goto L6f64e2;
case 0x6f64e4:c.instructions+=1;goto B6f64e4;
case 0x6f64e6:goto L6f64e6;
case 0x6f64e8:c.instructions+=1;goto B6f64e8;
case 0x6f64ea:goto L6f64ea;
case 0x6f64eb:c.instructions+=2;goto B6f64eb;
case 0x6f64ee:c.instructions+=1;goto B6f64ee;
case 0x6f64f0:goto L6f64f0;
case 0x6f64f3:c.instructions+=1;goto B6f64f3;
case 0x6f64f5:goto L6f64f5;
case 0x6f64fc:goto L6f64fc;
case 0x6f64fe:c.instructions+=4;goto B6f64fe;
case 0x6f64ff:c.instructions+=3;goto B6f64ff;
case 0x6f6500:c.instructions+=2;goto B6f6500;
case 0x6f6501:c.instructions+=1;goto B6f6501;
case 0x6f6506:goto L6f6506;
case 0x6f6508:c.instructions+=4;goto B6f6508;
case 0x6f6509:c.instructions+=3;goto B6f6509;
case 0x6f650a:c.instructions+=2;goto B6f650a;
case 0x6f650b:c.instructions+=1;goto B6f650b;
case 0x6f6510:goto L6f6510;
case 0x6f6511:c.instructions+=3;goto B6f6511;
case 0x6f6513:c.instructions+=2;goto B6f6513;
case 0x6f651a:c.instructions+=1;goto B6f651a;
case 0x6f651c:goto L6f651c;
case 0x6f651d:c.instructions+=3;goto B6f651d;
case 0x6f6522:c.instructions+=2;goto B6f6522;
case 0x6f6524:c.instructions+=1;goto B6f6524;
case 0x6f6529:goto L6f6529;
case 0x6f652c:c.instructions+=1;goto B6f652c;
case 0x6f652e:goto L6f652e;
case 0x6f6535:c.instructions+=1;goto B6f6535;
case 0x6f6537:goto L6f6537;
case 0x6f6538:c.instructions+=2;goto B6f6538;
case 0x6f653b:c.instructions+=1;goto B6f653b;
case 0x6f653d:goto L6f653d;
case 0x6f6540:c.instructions+=1;goto B6f6540;
case 0x6f6542:goto L6f6542;
case 0x6f6543:c.instructions+=3;goto B6f6543;
case 0x6f654a:c.instructions+=2;goto B6f654a;
case 0x6f654c:c.instructions+=1;goto B6f654c;
case 0x6f654e:goto L6f654e;
case 0x6f6550:c.instructions+=3;goto B6f6550;
case 0x6f6551:c.instructions+=2;goto B6f6551;
case 0x6f6553:c.instructions+=1;goto B6f6553;
case 0x6f6555:goto L6f6555;
case 0x6f6556:c.instructions+=2;goto B6f6556;
case 0x6f655d:c.instructions+=1;goto B6f655d;
case 0x6f655f:goto L6f655f;
case 0x6f6561:goto L6f6561;
case 0x6f6562:goto L6f6562;
case 0x6f6569:goto L6f6569;
case 0x6f656a:goto L6f656a;
case 0x6f656c:c.instructions+=1;goto B6f656c;
case 0x6f6571:goto L6f6571;
case 0x6f6576:c.instructions+=1;goto B6f6576;
case 0x6f6577:goto L6f6577;
case 0x6f657a:c.instructions+=1;goto B6f657a;
case 0x6f657c:goto L6f657c;
case 0x6f657f:c.instructions+=2;goto B6f657f;
case 0x6f6584:c.instructions+=1;goto B6f6584;
case 0x6f6586:goto L6f6586;
case 0x6f6587:c.instructions+=1;goto B6f6587;
case 0x6f658c:goto L6f658c;
case 0x6f658d:c.instructions+=1;goto B6f658d;
case 0x6f658e:goto L6f658e;
case 0x6f6595:c.instructions+=1;goto B6f6595;
case 0x6f6597:goto L6f6597;
case 0x6f659c:c.instructions+=1;goto B6f659c;
case 0x6f65a1:goto L6f65a1;
case 0x6f65a2:goto L6f65a2;
case 0x6f65c1:goto L6f65c1;
case 0x6f65c2:c.instructions+=3;goto B6f65c2;
case 0x6f65c4:c.instructions+=2;goto B6f65c4;
case 0x6f65c7:c.instructions+=1;goto B6f65c7;
case 0x6f65cc:goto L6f65cc;
case 0x6f65ce:c.instructions+=1;goto B6f65ce;
case 0x6f65d0:goto L6f65d0;
case 0x6f65d3:c.instructions+=2;goto B6f65d3;
case 0x6f65d8:c.instructions+=1;goto B6f65d8;
case 0x6f65da:goto L6f65da;
case 0x6f65dc:goto L6f65dc;
case 0x6f65e4:c.instructions+=1;goto B6f65e4;
case 0x6f65e6:goto L6f65e6;
case 0x6f65e7:c.instructions+=2;goto B6f65e7;
case 0x6f65ea:c.instructions+=1;goto B6f65ea;
case 0x6f65ec:goto L6f65ec;
case 0x6f65ed:c.instructions+=1;goto B6f65ed;
case 0x6f65ee:goto L6f65ee;
case 0x6f65f5:goto L6f65f5;
case 0x6f65f6:c.instructions+=1;goto B6f65f6;
case 0x6f65f7:goto L6f65f7;
case 0x6f65f8:c.instructions+=2;goto B6f65f8;
case 0x6f65fa:c.instructions+=1;goto B6f65fa;
case 0x6f65fc:goto L6f65fc;
case 0x6f6603:c.instructions+=2;goto B6f6603;
case 0x6f6606:c.instructions+=1;goto B6f6606;
case 0x6f6608:goto L6f6608;
case 0x6f6609:c.instructions+=2;goto B6f6609;
case 0x6f660c:c.instructions+=1;goto B6f660c;
case 0x6f660e:goto L6f660e;
case 0x6f660f:c.instructions+=1;goto B6f660f;
case 0x6f6610:goto L6f6610;
case 0x6f6618:c.instructions+=2;goto B6f6618;
case 0x6f6619:c.instructions+=1;goto B6f6619;
case 0x6f6628:goto L6f6628;
case 0x6f6629:c.instructions+=9;goto B6f6629;
case 0x6f662b:c.instructions+=8;goto B6f662b;
case 0x6f662e:c.instructions+=7;goto B6f662e;
case 0x6f6631:c.instructions+=6;goto B6f6631;
case 0x6f6634:c.instructions+=5;goto B6f6634;
case 0x6f6636:c.instructions+=4;goto B6f6636;
case 0x6f6639:c.instructions+=3;goto B6f6639;
case 0x6f663c:c.instructions+=2;goto B6f663c;
case 0x6f663d:c.instructions+=1;goto B6f663d;
case 0x6f663e:goto L6f663e;
case 0x6f663f:goto L6f663f;
case 0x6f6640:c.instructions+=14;goto B6f6640;
case 0x6f6642:c.instructions+=13;goto B6f6642;
case 0x6f6643:c.instructions+=12;goto B6f6643;
case 0x6f6646:c.instructions+=11;goto B6f6646;
case 0x6f6649:c.instructions+=10;goto B6f6649;
case 0x6f664c:c.instructions+=9;goto B6f664c;
case 0x6f664d:c.instructions+=8;goto B6f664d;
case 0x6f6650:c.instructions+=7;goto B6f6650;
case 0x6f6653:c.instructions+=6;goto B6f6653;
case 0x6f6656:c.instructions+=5;goto B6f6656;
case 0x6f6659:c.instructions+=4;goto B6f6659;
case 0x6f665f:c.instructions+=3;goto B6f665f;
case 0x6f6662:c.instructions+=2;goto B6f6662;
case 0x6f6664:c.instructions+=1;goto B6f6664;
case 0x6f6666:goto L6f6666;
case 0x6f666c:c.instructions+=2;goto B6f666c;
case 0x6f666e:c.instructions+=1;goto B6f666e;
case 0x6f6670:goto L6f6670;
case 0x6f6673:c.instructions+=8;goto B6f6673;
case 0x6f6675:c.instructions+=7;goto B6f6675;
case 0x6f6677:c.instructions+=6;goto B6f6677;
case 0x6f6679:c.instructions+=5;goto B6f6679;
case 0x6f667c:c.instructions+=4;goto B6f667c;
case 0x6f667d:c.instructions+=3;goto B6f667d;
case 0x6f667e:c.instructions+=2;goto B6f667e;
case 0x6f6681:c.instructions+=1;goto B6f6681;
case 0x6f6684:goto L6f6684;
case 0x6f6687:c.instructions+=2;goto B6f6687;
case 0x6f668d:c.instructions+=1;goto B6f668d;
case 0x6f6693:goto L6f6693;
case 0x6f6696:c.instructions+=5;goto B6f6696;
case 0x6f6699:c.instructions+=4;goto B6f6699;
case 0x6f669a:c.instructions+=3;goto B6f669a;
case 0x6f669b:c.instructions+=2;goto B6f669b;
case 0x6f669c:c.instructions+=1;goto B6f669c;
case 0x6f669f:goto L6f669f;
case 0x6f66a0:c.instructions+=18;goto B6f66a0;
case 0x6f66a2:c.instructions+=17;goto B6f66a2;
case 0x6f66a3:c.instructions+=16;goto B6f66a3;
case 0x6f66a4:c.instructions+=15;goto B6f66a4;
case 0x6f66a7:c.instructions+=14;goto B6f66a7;
case 0x6f66aa:c.instructions+=13;goto B6f66aa;
case 0x6f66ad:c.instructions+=12;goto B6f66ad;
case 0x6f66ae:c.instructions+=11;goto B6f66ae;
case 0x6f66b1:c.instructions+=10;goto B6f66b1;
case 0x6f66b4:c.instructions+=9;goto B6f66b4;
case 0x6f66ba:c.instructions+=8;goto B6f66ba;
case 0x6f66bd:c.instructions+=7;goto B6f66bd;
case 0x6f66c3:c.instructions+=6;goto B6f66c3;
case 0x6f66c6:c.instructions+=5;goto B6f66c6;
case 0x6f66c9:c.instructions+=4;goto B6f66c9;
case 0x6f66cc:c.instructions+=3;goto B6f66cc;
case 0x6f66ce:c.instructions+=2;goto B6f66ce;
case 0x6f66d0:c.instructions+=1;goto B6f66d0;
case 0x6f66d2:goto L6f66d2;
case 0x6f66d4:goto L6f66d4;
case 0x6f66d6:c.instructions+=1;goto B6f66d6;
case 0x6f66d8:goto L6f66d8;
case 0x6f66db:c.instructions+=2;goto B6f66db;
case 0x6f66e1:c.instructions+=1;goto B6f66e1;
case 0x6f66e4:goto L6f66e4;
case 0x6f66e7:c.instructions+=7;goto B6f66e7;
case 0x6f66e9:c.instructions+=6;goto B6f66e9;
case 0x6f66eb:c.instructions+=5;goto B6f66eb;
case 0x6f66ed:c.instructions+=4;goto B6f66ed;
case 0x6f66ee:c.instructions+=3;goto B6f66ee;
case 0x6f66f1:c.instructions+=2;goto B6f66f1;
case 0x6f66f4:c.instructions+=1;goto B6f66f4;
case 0x6f66f7:goto L6f66f7;
case 0x6f66fa:c.instructions+=11;goto B6f66fa;
case 0x6f66fc:c.instructions+=10;goto B6f66fc;
case 0x6f66fd:c.instructions+=9;goto B6f66fd;
case 0x6f6703:c.instructions+=8;goto B6f6703;
case 0x6f6705:c.instructions+=7;goto B6f6705;
case 0x6f6707:c.instructions+=6;goto B6f6707;
case 0x6f6708:c.instructions+=5;goto B6f6708;
case 0x6f670b:c.instructions+=4;goto B6f670b;
case 0x6f670c:c.instructions+=3;goto B6f670c;
case 0x6f670d:c.instructions+=2;goto B6f670d;
case 0x6f670e:c.instructions+=1;goto B6f670e;
case 0x6f6711:goto L6f6711;
case 0x6f6712:c.instructions+=8;goto B6f6712;
case 0x6f6714:c.instructions+=7;goto B6f6714;
case 0x6f6717:c.instructions+=6;goto B6f6717;
case 0x6f671a:c.instructions+=5;goto B6f671a;
case 0x6f671d:c.instructions+=4;goto B6f671d;
case 0x6f6721:c.instructions+=3;goto B6f6721;
case 0x6f6725:c.instructions+=2;goto B6f6725;
case 0x6f6726:c.instructions+=1;goto B6f6726;
case 0x6f6729:goto L6f6729;
case 0x6f672a:c.instructions+=13;goto B6f672a;
case 0x6f672c:c.instructions+=12;goto B6f672c;
case 0x6f672d:c.instructions+=11;goto B6f672d;
case 0x6f6730:c.instructions+=10;goto B6f6730;
case 0x6f6733:c.instructions+=9;goto B6f6733;
case 0x6f6736:c.instructions+=8;goto B6f6736;
case 0x6f6739:c.instructions+=7;goto B6f6739;
case 0x6f673f:c.instructions+=6;goto B6f673f;
case 0x6f6742:c.instructions+=5;goto B6f6742;
case 0x6f6748:c.instructions+=4;goto B6f6748;
case 0x6f674b:c.instructions+=3;goto B6f674b;
case 0x6f674c:c.instructions+=2;goto B6f674c;
case 0x6f674d:c.instructions+=1;goto B6f674d;
case 0x6f6750:goto L6f6750;
case 0x6f6751:c.instructions+=7;goto B6f6751;
case 0x6f6753:c.instructions+=6;goto B6f6753;
case 0x6f6756:c.instructions+=5;goto B6f6756;
case 0x6f6758:c.instructions+=4;goto B6f6758;
case 0x6f6759:c.instructions+=3;goto B6f6759;
case 0x6f675a:c.instructions+=2;goto B6f675a;
case 0x6f675b:c.instructions+=1;goto B6f675b;
case 0x6f675d:goto L6f675d;
case 0x6f6762:goto L6f6762;
case 0x6f6764:c.instructions+=1;goto B6f6764;
case 0x6f6766:goto L6f6766;
case 0x6f6768:goto L6f6768;
case 0x6f676b:c.instructions+=12;goto B6f676b;
case 0x6f676e:c.instructions+=11;goto B6f676e;
case 0x6f6771:c.instructions+=10;goto B6f6771;
case 0x6f6774:c.instructions+=9;goto B6f6774;
case 0x6f6777:c.instructions+=8;goto B6f6777;
case 0x6f6779:c.instructions+=7;goto B6f6779;
case 0x6f677b:c.instructions+=6;goto B6f677b;
case 0x6f677e:c.instructions+=5;goto B6f677e;
case 0x6f6781:c.instructions+=4;goto B6f6781;
case 0x6f6784:c.instructions+=3;goto B6f6784;
case 0x6f6787:c.instructions+=2;goto B6f6787;
case 0x6f678a:c.instructions+=1;goto B6f678a;
case 0x6f678c:goto L6f678c;
case 0x6f678f:c.instructions+=2;goto B6f678f;
case 0x6f6791:c.instructions+=1;goto B6f6791;
case 0x6f6794:goto L6f6794;
case 0x6f6797:c.instructions+=4;goto B6f6797;
case 0x6f6799:c.instructions+=3;goto B6f6799;
case 0x6f679a:c.instructions+=2;goto B6f679a;
case 0x6f679c:c.instructions+=1;goto B6f679c;
case 0x6f67a1:goto L6f67a1;
case 0x6f67a7:c.instructions+=2;goto B6f67a7;
case 0x6f67aa:c.instructions+=1;goto B6f67aa;
case 0x6f67ac:goto L6f67ac;
case 0x6f67af:goto L6f67af;
case 0x6f67b1:c.instructions+=1;goto B6f67b1;
case 0x6f67b3:goto L6f67b3;
case 0x6f67b6:c.instructions+=2;goto B6f67b6;
case 0x6f67b8:c.instructions+=1;goto B6f67b8;
case 0x6f67bb:goto L6f67bb;
case 0x6f67be:c.instructions+=4;goto B6f67be;
case 0x6f67c0:c.instructions+=3;goto B6f67c0;
case 0x6f67c1:c.instructions+=2;goto B6f67c1;
case 0x6f67c3:c.instructions+=1;goto B6f67c3;
case 0x6f67c8:goto L6f67c8;
case 0x6f67cb:c.instructions+=2;goto B6f67cb;
case 0x6f67ce:c.instructions+=1;goto B6f67ce;
case 0x6f67d0:goto L6f67d0;
case 0x6f67d1:c.instructions+=5;goto B6f67d1;
case 0x6f67d3:c.instructions+=4;goto B6f67d3;
case 0x6f67d4:c.instructions+=3;goto B6f67d4;
case 0x6f67d5:c.instructions+=2;goto B6f67d5;
case 0x6f67d6:c.instructions+=1;goto B6f67d6;
case 0x6f67d7:goto L6f67d7;
case 0x6f67d8:c.instructions+=15;goto B6f67d8;
case 0x6f67da:c.instructions+=14;goto B6f67da;
case 0x6f67db:c.instructions+=13;goto B6f67db;
case 0x6f67dc:c.instructions+=12;goto B6f67dc;
case 0x6f67df:c.instructions+=11;goto B6f67df;
case 0x6f67e2:c.instructions+=10;goto B6f67e2;
case 0x6f67e3:c.instructions+=9;goto B6f67e3;
case 0x6f67e6:c.instructions+=8;goto B6f67e6;
case 0x6f67ea:c.instructions+=7;goto B6f67ea;
case 0x6f67ec:c.instructions+=6;goto B6f67ec;
case 0x6f67f2:c.instructions+=5;goto B6f67f2;
case 0x6f67f3:c.instructions+=4;goto B6f67f3;
case 0x6f67f6:c.instructions+=3;goto B6f67f6;
case 0x6f67f7:c.instructions+=2;goto B6f67f7;
case 0x6f67fa:c.instructions+=1;goto B6f67fa;
case 0x6f67ff:goto L6f67ff;
case 0x6f6801:c.instructions+=2;goto B6f6801;
case 0x6f6803:c.instructions+=1;goto B6f6803;
case 0x6f6805:goto L6f6805;
case 0x6f6807:c.instructions+=3;goto B6f6807;
case 0x6f6809:c.instructions+=2;goto B6f6809;
case 0x6f680c:c.instructions+=1;goto B6f680c;
case 0x6f6811:goto L6f6811;
case 0x6f6814:c.instructions+=3;goto B6f6814;
case 0x6f6816:c.instructions+=2;goto B6f6816;
case 0x6f6819:c.instructions+=1;goto B6f6819;
case 0x6f681b:goto L6f681b;
case 0x6f681d:c.instructions+=8;goto B6f681d;
case 0x6f681f:c.instructions+=7;goto B6f681f;
case 0x6f6820:c.instructions+=6;goto B6f6820;
case 0x6f6821:c.instructions+=5;goto B6f6821;
case 0x6f6827:c.instructions+=4;goto B6f6827;
case 0x6f6828:c.instructions+=3;goto B6f6828;
case 0x6f682a:c.instructions+=2;goto B6f682a;
case 0x6f682b:c.instructions+=1;goto B6f682b;
case 0x6f6830:goto L6f6830;
case 0x6f6836:c.instructions+=2;goto B6f6836;
case 0x6f6837:c.instructions+=1;goto B6f6837;
case 0x6f683c:goto L6f683c;
case 0x6f683f:c.instructions+=3;goto B6f683f;
case 0x6f6841:c.instructions+=2;goto B6f6841;
case 0x6f6844:c.instructions+=1;goto B6f6844;
case 0x6f6846:goto L6f6846;
case 0x6f6849:c.instructions+=1;goto B6f6849;
case 0x6f684e:goto L6f684e;
case 0x6f6851:c.instructions+=4;goto B6f6851;
case 0x6f6857:c.instructions+=3;goto B6f6857;
case 0x6f685c:c.instructions+=2;goto B6f685c;
case 0x6f685d:c.instructions+=1;goto B6f685d;
case 0x6f6862:goto L6f6862;
case 0x6f6865:c.instructions+=30;goto B6f6865;
case 0x6f6869:c.instructions+=29;goto B6f6869;
case 0x6f686b:c.instructions+=28;goto B6f686b;
case 0x6f686c:c.instructions+=27;goto B6f686c;
case 0x6f686f:c.instructions+=26;goto B6f686f;
case 0x6f6872:c.instructions+=25;goto B6f6872;
case 0x6f6875:c.instructions+=24;goto B6f6875;
case 0x6f6878:c.instructions+=23;goto B6f6878;
case 0x6f687b:c.instructions+=22;goto B6f687b;
case 0x6f687e:c.instructions+=21;goto B6f687e;
case 0x6f6881:c.instructions+=20;goto B6f6881;
case 0x6f6884:c.instructions+=19;goto B6f6884;
case 0x6f6887:c.instructions+=18;goto B6f6887;
case 0x6f688a:c.instructions+=17;goto B6f688a;
case 0x6f688d:c.instructions+=16;goto B6f688d;
case 0x6f6890:c.instructions+=15;goto B6f6890;
case 0x6f6893:c.instructions+=14;goto B6f6893;
case 0x6f6899:c.instructions+=13;goto B6f6899;
case 0x6f689c:c.instructions+=12;goto B6f689c;
case 0x6f689d:c.instructions+=11;goto B6f689d;
case 0x6f68a0:c.instructions+=10;goto B6f68a0;
case 0x6f68a7:c.instructions+=9;goto B6f68a7;
case 0x6f68ae:c.instructions+=8;goto B6f68ae;
case 0x6f68b5:c.instructions+=7;goto B6f68b5;
case 0x6f68bc:c.instructions+=6;goto B6f68bc;
case 0x6f68c3:c.instructions+=5;goto B6f68c3;
case 0x6f68ca:c.instructions+=4;goto B6f68ca;
case 0x6f68cd:c.instructions+=3;goto B6f68cd;
case 0x6f68d0:c.instructions+=2;goto B6f68d0;
case 0x6f68d2:c.instructions+=1;goto B6f68d2;
case 0x6f68d4:goto L6f68d4;
case 0x6f68d5:c.instructions+=5;goto B6f68d5;
case 0x6f68db:c.instructions+=4;goto B6f68db;
case 0x6f68dc:c.instructions+=3;goto B6f68dc;
case 0x6f68dd:c.instructions+=2;goto B6f68dd;
case 0x6f68e0:c.instructions+=1;goto B6f68e0;
case 0x6f68e5:goto L6f68e5;
case 0x6f68e8:c.instructions+=9;goto B6f68e8;
case 0x6f68ea:c.instructions+=8;goto B6f68ea;
case 0x6f68ed:c.instructions+=7;goto B6f68ed;
case 0x6f68ee:c.instructions+=6;goto B6f68ee;
case 0x6f68f1:c.instructions+=5;goto B6f68f1;
case 0x6f68f3:c.instructions+=4;goto B6f68f3;
case 0x6f68f4:c.instructions+=3;goto B6f68f4;
case 0x6f68f5:c.instructions+=2;goto B6f68f5;
case 0x6f68f8:c.instructions+=1;goto B6f68f8;
case 0x6f68fd:goto L6f68fd;
case 0x6f6900:c.instructions+=3;goto B6f6900;
case 0x6f6903:c.instructions+=2;goto B6f6903;
case 0x6f6906:c.instructions+=1;goto B6f6906;
case 0x6f6908:goto L6f6908;
case 0x6f690a:c.instructions+=4;goto B6f690a;
case 0x6f690d:c.instructions+=3;goto B6f690d;
case 0x6f690e:c.instructions+=2;goto B6f690e;
case 0x6f6910:c.instructions+=1;goto B6f6910;
case 0x6f6912:goto L6f6912;
case 0x6f6915:c.instructions+=8;goto B6f6915;
case 0x6f691c:c.instructions+=7;goto B6f691c;
case 0x6f6922:c.instructions+=6;goto B6f6922;
case 0x6f6925:c.instructions+=5;goto B6f6925;
case 0x6f6926:c.instructions+=4;goto B6f6926;
case 0x6f692c:c.instructions+=3;goto B6f692c;
case 0x6f692d:c.instructions+=2;goto B6f692d;
case 0x6f6930:c.instructions+=1;goto B6f6930;
case 0x6f6935:goto L6f6935;
case 0x6f6938:c.instructions+=4;goto B6f6938;
case 0x6f693b:c.instructions+=3;goto B6f693b;
case 0x6f693c:c.instructions+=2;goto B6f693c;
case 0x6f693f:c.instructions+=1;goto B6f693f;
case 0x6f6944:goto L6f6944;
case 0x6f6946:c.instructions+=4;goto B6f6946;
case 0x6f6949:c.instructions+=3;goto B6f6949;
case 0x6f694e:c.instructions+=2;goto B6f694e;
case 0x6f694f:c.instructions+=1;goto B6f694f;
case 0x6f6951:goto L6f6951;
case 0x6f6952:c.instructions+=6;goto B6f6952;
case 0x6f6953:c.instructions+=5;goto B6f6953;
case 0x6f6955:c.instructions+=4;goto B6f6955;
case 0x6f6956:c.instructions+=3;goto B6f6956;
case 0x6f6958:c.instructions+=2;goto B6f6958;
case 0x6f6959:c.instructions+=1;goto B6f6959;
case 0x6f695c:goto L6f695c;
case 0x6f695d:c.instructions+=13;goto B6f695d;
case 0x6f695f:c.instructions+=12;goto B6f695f;
case 0x6f6960:c.instructions+=11;goto B6f6960;
case 0x6f6963:c.instructions+=10;goto B6f6963;
case 0x6f6964:c.instructions+=9;goto B6f6964;
case 0x6f6967:c.instructions+=8;goto B6f6967;
case 0x6f6969:c.instructions+=7;goto B6f6969;
case 0x6f696f:c.instructions+=6;goto B6f696f;
case 0x6f6971:c.instructions+=5;goto B6f6971;
case 0x6f6974:c.instructions+=4;goto B6f6974;
case 0x6f6977:c.instructions+=3;goto B6f6977;
case 0x6f6979:c.instructions+=2;goto B6f6979;
case 0x6f697c:c.instructions+=1;goto B6f697c;
case 0x6f697f:goto L6f697f;
case 0x6f6981:c.instructions+=2;goto B6f6981;
case 0x6f6984:c.instructions+=1;goto B6f6984;
case 0x6f6989:goto L6f6989;
case 0x6f698a:c.instructions+=5;goto B6f698a;
case 0x6f698b:c.instructions+=4;goto B6f698b;
case 0x6f698d:c.instructions+=3;goto B6f698d;
case 0x6f698e:c.instructions+=2;goto B6f698e;
case 0x6f6991:c.instructions+=1;goto B6f6991;
case 0x6f6996:goto L6f6996;
case 0x6f699b:c.instructions+=2;goto B6f699b;
case 0x6f699c:c.instructions+=1;goto B6f699c;
case 0x6f69a1:goto L6f69a1;
case 0x6f69a2:c.instructions+=4;goto B6f69a2;
case 0x6f69a3:c.instructions+=3;goto B6f69a3;
case 0x6f69a4:c.instructions+=2;goto B6f69a4;
case 0x6f69a7:c.instructions+=1;goto B6f69a7;
case 0x6f69ac:goto L6f69ac;
case 0x6f69ad:c.instructions+=3;goto B6f69ad;
case 0x6f69ae:c.instructions+=2;goto B6f69ae;
case 0x6f69af:c.instructions+=1;goto B6f69af;
case 0x6f69b2:goto L6f69b2;
case 0x6f69b3:c.instructions+=11;goto B6f69b3;
case 0x6f69b5:c.instructions+=10;goto B6f69b5;
case 0x6f69b6:c.instructions+=9;goto B6f69b6;
case 0x6f69b9:c.instructions+=8;goto B6f69b9;
case 0x6f69ba:c.instructions+=7;goto B6f69ba;
case 0x6f69bc:c.instructions+=6;goto B6f69bc;
case 0x6f69bf:c.instructions+=5;goto B6f69bf;
case 0x6f69c2:c.instructions+=4;goto B6f69c2;
case 0x6f69c4:c.instructions+=3;goto B6f69c4;
case 0x6f69c5:c.instructions+=2;goto B6f69c5;
case 0x6f69c8:c.instructions+=1;goto B6f69c8;
case 0x6f69cd:goto L6f69cd;
case 0x6f69cf:c.instructions+=2;goto B6f69cf;
case 0x6f69d0:c.instructions+=1;goto B6f69d0;
case 0x6f69d5:goto L6f69d5;
case 0x6f69d6:c.instructions+=4;goto B6f69d6;
case 0x6f69d7:c.instructions+=3;goto B6f69d7;
case 0x6f69d8:c.instructions+=2;goto B6f69d8;
case 0x6f69db:c.instructions+=1;goto B6f69db;
case 0x6f69e0:goto L6f69e0;
case 0x6f69e1:c.instructions+=3;goto B6f69e1;
case 0x6f69e2:c.instructions+=2;goto B6f69e2;
case 0x6f69e3:c.instructions+=1;goto B6f69e3;
case 0x6f69e6:goto L6f69e6;
case 0x6f69e7:c.instructions+=14;goto B6f69e7;
case 0x6f69e9:c.instructions+=13;goto B6f69e9;
case 0x6f69ef:c.instructions+=12;goto B6f69ef;
case 0x6f69f0:c.instructions+=11;goto B6f69f0;
case 0x6f69f1:c.instructions+=10;goto B6f69f1;
case 0x6f69f4:c.instructions+=9;goto B6f69f4;
case 0x6f69f5:c.instructions+=8;goto B6f69f5;
case 0x6f69f7:c.instructions+=7;goto B6f69f7;
case 0x6f69f9:c.instructions+=6;goto B6f69f9;
case 0x6f69fe:c.instructions+=5;goto B6f69fe;
case 0x6f69ff:c.instructions+=4;goto B6f69ff;
case 0x6f6a02:c.instructions+=3;goto B6f6a02;
case 0x6f6a05:c.instructions+=2;goto B6f6a05;
case 0x6f6a08:c.instructions+=1;goto B6f6a08;
case 0x6f6a0d:goto L6f6a0d;
case 0x6f6a10:c.instructions+=2;goto B6f6a10;
case 0x6f6a12:c.instructions+=1;goto B6f6a12;
case 0x6f6a14:goto L6f6a14;
case 0x6f6a17:goto L6f6a17;
case 0x6f6a19:c.instructions+=2;goto B6f6a19;
case 0x6f6a1b:c.instructions+=1;goto B6f6a1b;
case 0x6f6a1d:goto L6f6a1d;
case 0x6f6a1f:c.instructions+=1;goto B6f6a1f;
case 0x6f6a21:goto L6f6a21;
case 0x6f6a22:goto L6f6a22;
case 0x6f6a24:c.instructions+=2;goto B6f6a24;
case 0x6f6a25:c.instructions+=1;goto B6f6a25;
case 0x6f6a2a:goto L6f6a2a;
case 0x6f6a2c:c.instructions+=5;goto B6f6a2c;
case 0x6f6a2e:c.instructions+=4;goto B6f6a2e;
case 0x6f6a2f:c.instructions+=3;goto B6f6a2f;
case 0x6f6a30:c.instructions+=2;goto B6f6a30;
case 0x6f6a33:c.instructions+=1;goto B6f6a33;
case 0x6f6a35:goto L6f6a35;
case 0x6f6a37:c.instructions+=5;goto B6f6a37;
case 0x6f6a38:c.instructions+=4;goto B6f6a38;
case 0x6f6a3e:c.instructions+=3;goto B6f6a3e;
case 0x6f6a3f:c.instructions+=2;goto B6f6a3f;
case 0x6f6a40:c.instructions+=1;goto B6f6a40;
case 0x6f6a45:goto L6f6a45;
case 0x6f6a47:c.instructions+=7;goto B6f6a47;
case 0x6f6a49:c.instructions+=6;goto B6f6a49;
case 0x6f6a4c:c.instructions+=5;goto B6f6a4c;
case 0x6f6a4d:c.instructions+=4;goto B6f6a4d;
case 0x6f6a54:c.instructions+=3;goto B6f6a54;
case 0x6f6a57:c.instructions+=2;goto B6f6a57;
case 0x6f6a5a:c.instructions+=1;goto B6f6a5a;
case 0x6f6a5c:goto L6f6a5c;
case 0x6f6a62:c.instructions+=1;goto B6f6a62;
case 0x6f6a66:goto L6f6a66;
case 0x6f6a69:c.instructions+=4;goto B6f6a69;
case 0x6f6a6c:c.instructions+=3;goto B6f6a6c;
case 0x6f6a6e:c.instructions+=2;goto B6f6a6e;
case 0x6f6a71:c.instructions+=1;goto B6f6a71;
case 0x6f6a77:goto L6f6a77;
case 0x6f6a7a:c.instructions+=1;goto B6f6a7a;
case 0x6f6a7c:goto L6f6a7c;
case 0x6f6a7f:c.instructions+=1;goto B6f6a7f;
case 0x6f6a81:goto L6f6a81;
case 0x6f6a87:c.instructions+=1;goto B6f6a87;
case 0x6f6a8a:goto L6f6a8a;
case 0x6f6a8c:c.instructions+=3;goto B6f6a8c;
case 0x6f6a8e:c.instructions+=2;goto B6f6a8e;
case 0x6f6a90:c.instructions+=1;goto B6f6a90;
case 0x6f6a92:goto L6f6a92;
case 0x6f6a94:c.instructions+=1;goto B6f6a94;
case 0x6f6a96:goto L6f6a96;
case 0x6f6a99:c.instructions+=3;goto B6f6a99;
case 0x6f6a9b:c.instructions+=2;goto B6f6a9b;
case 0x6f6a9e:c.instructions+=1;goto B6f6a9e;
case 0x6f6aa0:goto L6f6aa0;
case 0x6f6aa1:c.instructions+=5;goto B6f6aa1;
case 0x6f6aa2:c.instructions+=4;goto B6f6aa2;
case 0x6f6aa3:c.instructions+=3;goto B6f6aa3;
case 0x6f6aa4:c.instructions+=2;goto B6f6aa4;
case 0x6f6aa6:c.instructions+=1;goto B6f6aa6;
case 0x6f6aa8:goto L6f6aa8;
case 0x6f6aaa:c.instructions+=1;goto B6f6aaa;
case 0x6f6aac:goto L6f6aac;
case 0x6f6aae:c.instructions+=1;goto B6f6aae;
case 0x6f6ab1:goto L6f6ab1;
case 0x6f6ab3:c.instructions+=2;goto B6f6ab3;
case 0x6f6ab6:c.instructions+=1;goto B6f6ab6;
case 0x6f6ab8:goto L6f6ab8;
case 0x6f6abb:c.instructions+=7;goto B6f6abb;
case 0x6f6abc:c.instructions+=6;goto B6f6abc;
case 0x6f6abf:c.instructions+=5;goto B6f6abf;
case 0x6f6ac0:c.instructions+=4;goto B6f6ac0;
case 0x6f6ac1:c.instructions+=3;goto B6f6ac1;
case 0x6f6ac4:c.instructions+=2;goto B6f6ac4;
case 0x6f6ac7:c.instructions+=1;goto B6f6ac7;
case 0x6f6acc:goto L6f6acc;
case 0x6f6acf:c.instructions+=2;goto B6f6acf;
case 0x6f6ad1:c.instructions+=1;goto B6f6ad1;
case 0x6f6ad3:goto L6f6ad3;
case 0x6f6ad6:c.instructions+=1;goto B6f6ad6;
case 0x6f6ad8:goto L6f6ad8;
case 0x6f6adb:c.instructions+=1;goto B6f6adb;
case 0x6f6add:goto L6f6add;
case 0x6f6adf:c.instructions+=1;goto B6f6adf;
case 0x6f6ae1:goto L6f6ae1;
case 0x6f6ae3:c.instructions+=2;goto B6f6ae3;
case 0x6f6ae5:c.instructions+=1;goto B6f6ae5;
case 0x6f6ae7:goto L6f6ae7;
case 0x6f6aea:c.instructions+=1;goto B6f6aea;
case 0x6f6aec:goto L6f6aec;
case 0x6f6aef:c.instructions+=1;goto B6f6aef;
case 0x6f6af4:goto L6f6af4;
case 0x6f6af7:c.instructions+=13;goto B6f6af7;
case 0x6f6af9:c.instructions+=12;goto B6f6af9;
case 0x6f6afc:c.instructions+=11;goto B6f6afc;
case 0x6f6aff:c.instructions+=10;goto B6f6aff;
case 0x6f6b00:c.instructions+=9;goto B6f6b00;
case 0x6f6b03:c.instructions+=8;goto B6f6b03;
case 0x6f6b06:c.instructions+=7;goto B6f6b06;
case 0x6f6b09:c.instructions+=6;goto B6f6b09;
case 0x6f6b0a:c.instructions+=5;goto B6f6b0a;
case 0x6f6b0b:c.instructions+=4;goto B6f6b0b;
case 0x6f6b0e:c.instructions+=3;goto B6f6b0e;
case 0x6f6b11:c.instructions+=2;goto B6f6b11;
case 0x6f6b14:c.instructions+=1;goto B6f6b14;
case 0x6f6b19:goto L6f6b19;
case 0x6f6b1c:c.instructions+=6;goto B6f6b1c;
case 0x6f6b1f:c.instructions+=5;goto B6f6b1f;
case 0x6f6b21:c.instructions+=4;goto B6f6b21;
case 0x6f6b23:c.instructions+=3;goto B6f6b23;
case 0x6f6b26:c.instructions+=2;goto B6f6b26;
case 0x6f6b29:c.instructions+=1;goto B6f6b29;
case 0x6f6b2b:goto L6f6b2b;
case 0x6f6b2e:goto L6f6b2e;
case 0x6f6b2f:c.instructions+=4;goto B6f6b2f;
case 0x6f6b30:c.instructions+=3;goto B6f6b30;
case 0x6f6b31:c.instructions+=2;goto B6f6b31;
case 0x6f6b32:c.instructions+=1;goto B6f6b32;
case 0x6f6b35:goto L6f6b35;
case 0x6f6b37:c.instructions+=2;goto B6f6b37;
case 0x6f6b39:c.instructions+=1;goto B6f6b39;
case 0x6f6b3b:goto L6f6b3b;
case 0x6f6b3d:c.instructions+=2;goto B6f6b3d;
case 0x6f6b3f:c.instructions+=1;goto B6f6b3f;
case 0x6f6b41:goto L6f6b41;
case 0x6f6b44:c.instructions+=3;goto B6f6b44;
case 0x6f6b46:c.instructions+=2;goto B6f6b46;
case 0x6f6b48:c.instructions+=1;goto B6f6b48;
case 0x6f6b4a:goto L6f6b4a;
case 0x6f6b4e:c.instructions+=3;goto B6f6b4e;
case 0x6f6b51:c.instructions+=2;goto B6f6b51;
case 0x6f6b55:c.instructions+=1;goto B6f6b55;
case 0x6f6b56:goto L6f6b56;
case 0x6f6b58:c.instructions+=3;goto B6f6b58;
case 0x6f6b5a:c.instructions+=2;goto B6f6b5a;
case 0x6f6b5c:c.instructions+=1;goto B6f6b5c;
case 0x6f6b5e:goto L6f6b5e;
case 0x6f6b61:c.instructions+=1;goto B6f6b61;
case 0x6f6b63:goto L6f6b63;
case 0x6f6b66:c.instructions+=2;goto B6f6b66;
case 0x6f6b68:c.instructions+=1;goto B6f6b68;
case 0x6f6b6a:goto L6f6b6a;
case 0x6f6b6b:c.instructions+=3;goto B6f6b6b;
case 0x6f6b6d:c.instructions+=2;goto B6f6b6d;
case 0x6f6b6f:c.instructions+=1;goto B6f6b6f;
case 0x6f6b70:goto L6f6b70;
case 0x6f6b73:c.instructions+=1;goto B6f6b73;
case 0x6f6b75:goto L6f6b75;
case 0x6f6b76:goto L6f6b76;
case 0x6f6b77:c.instructions+=3;goto B6f6b77;
case 0x6f6b7c:c.instructions+=2;goto B6f6b7c;
case 0x6f6b7e:c.instructions+=1;goto B6f6b7e;
case 0x6f6b83:goto L6f6b83;
case 0x6f6b85:c.instructions+=16;goto B6f6b85;
case 0x6f6b8b:c.instructions+=15;goto B6f6b8b;
case 0x6f6b8e:c.instructions+=14;goto B6f6b8e;
case 0x6f6b91:c.instructions+=13;goto B6f6b91;
case 0x6f6b94:c.instructions+=12;goto B6f6b94;
case 0x6f6b97:c.instructions+=11;goto B6f6b97;
case 0x6f6b9a:c.instructions+=10;goto B6f6b9a;
case 0x6f6b9d:c.instructions+=9;goto B6f6b9d;
case 0x6f6ba0:c.instructions+=8;goto B6f6ba0;
case 0x6f6ba3:c.instructions+=7;goto B6f6ba3;
case 0x6f6ba6:c.instructions+=6;goto B6f6ba6;
case 0x6f6ba9:c.instructions+=5;goto B6f6ba9;
case 0x6f6bac:c.instructions+=4;goto B6f6bac;
case 0x6f6baf:c.instructions+=3;goto B6f6baf;
case 0x6f6bb1:c.instructions+=2;goto B6f6bb1;
case 0x6f6bb2:c.instructions+=1;goto B6f6bb2;
case 0x6f6bb3:goto L6f6bb3;
case 0x6f6bb4:c.instructions+=4;goto B6f6bb4;
case 0x6f6bb6:c.instructions+=3;goto B6f6bb6;
case 0x6f6bb7:c.instructions+=2;goto B6f6bb7;
case 0x6f6bb9:c.instructions+=1;goto B6f6bb9;
case 0x6f6bbe:goto L6f6bbe;
case 0x6f6bc2:c.instructions+=1;goto B6f6bc2;
case 0x6f6bc4:goto L6f6bc4;
case 0x6f6bc5:c.instructions+=1;goto B6f6bc5;
case 0x6f6bca:goto L6f6bca;
case 0x6f6bcb:goto L6f6bcb;
case 0x6f6bcd:c.instructions+=3;goto B6f6bcd;
case 0x6f6bce:c.instructions+=2;goto B6f6bce;
case 0x6f6bcf:c.instructions+=1;goto B6f6bcf;
case 0x6f6bd2:goto L6f6bd2;
case 0x6f6bd3:c.instructions+=4;goto B6f6bd3;
case 0x6f6bd5:c.instructions+=3;goto B6f6bd5;
case 0x6f6bd8:c.instructions+=2;goto B6f6bd8;
case 0x6f6bde:c.instructions+=1;goto B6f6bde;
case 0x6f6be3:goto L6f6be3;
case 0x6f6be6:c.instructions+=1;goto B6f6be6;
case 0x6f6beb:goto L6f6beb;
case 0x6f6bee:c.instructions+=1;goto B6f6bee;
case 0x6f6bf3:goto L6f6bf3;
case 0x6f6bf6:c.instructions+=1;goto B6f6bf6;
case 0x6f6bfb:goto L6f6bfb;
case 0x6f6c01:c.instructions+=2;goto B6f6c01;
case 0x6f6c02:c.instructions+=1;goto B6f6c02;
case 0x6f6c03:goto L6f6c03;
case 0x6f6c04:c.instructions+=6;goto B6f6c04;
case 0x6f6c06:c.instructions+=5;goto B6f6c06;
case 0x6f6c0a:c.instructions+=4;goto B6f6c0a;
case 0x6f6c0b:c.instructions+=3;goto B6f6c0b;
case 0x6f6c0d:c.instructions+=2;goto B6f6c0d;
case 0x6f6c13:c.instructions+=1;goto B6f6c13;
case 0x6f6c15:goto L6f6c15;
case 0x6f6c16:c.instructions+=1;goto B6f6c16;
case 0x6f6c1b:goto L6f6c1b;
case 0x6f6c1c:goto L6f6c1c;
case 0x6f6c1e:c.instructions+=3;goto B6f6c1e;
case 0x6f6c1f:c.instructions+=2;goto B6f6c1f;
case 0x6f6c20:c.instructions+=1;goto B6f6c20;
case 0x6f6c23:goto L6f6c23;
case 0x6f6c24:c.instructions+=7;goto B6f6c24;
case 0x6f6c26:c.instructions+=6;goto B6f6c26;
case 0x6f6c28:c.instructions+=5;goto B6f6c28;
case 0x6f6c2b:c.instructions+=4;goto B6f6c2b;
case 0x6f6c2c:c.instructions+=3;goto B6f6c2c;
case 0x6f6c2f:c.instructions+=2;goto B6f6c2f;
case 0x6f6c35:c.instructions+=1;goto B6f6c35;
case 0x6f6c37:goto L6f6c37;
case 0x6f6c39:c.instructions+=4;goto B6f6c39;
case 0x6f6c3c:c.instructions+=3;goto B6f6c3c;
case 0x6f6c3d:c.instructions+=2;goto B6f6c3d;
case 0x6f6c3f:c.instructions+=1;goto B6f6c3f;
case 0x6f6c41:goto L6f6c41;
case 0x6f6c42:c.instructions+=2;goto B6f6c42;
case 0x6f6c43:c.instructions+=1;goto B6f6c43;
case 0x6f6c46:goto L6f6c46;
case 0x6f6c47:goto L6f6c47;
case 0x6f6c48:c.instructions+=8;goto B6f6c48;
case 0x6f6c4a:c.instructions+=7;goto B6f6c4a;
case 0x6f6c4d:c.instructions+=6;goto B6f6c4d;
case 0x6f6c53:c.instructions+=5;goto B6f6c53;
case 0x6f6c58:c.instructions+=4;goto B6f6c58;
case 0x6f6c5e:c.instructions+=3;goto B6f6c5e;
case 0x6f6c64:c.instructions+=2;goto B6f6c64;
case 0x6f6c65:c.instructions+=1;goto B6f6c65;
case 0x6f6c66:goto L6f6c66;
case 0x6f6c67:c.instructions+=5;goto B6f6c67;
case 0x6f6c69:c.instructions+=4;goto B6f6c69;
case 0x6f6c6f:c.instructions+=3;goto B6f6c6f;
case 0x6f6c70:c.instructions+=2;goto B6f6c70;
case 0x6f6c73:c.instructions+=1;goto B6f6c73;
case 0x6f6c78:goto L6f6c78;
case 0x6f6c7d:c.instructions+=5;goto B6f6c7d;
case 0x6f6c80:c.instructions+=4;goto B6f6c80;
case 0x6f6c83:c.instructions+=3;goto B6f6c83;
case 0x6f6c89:c.instructions+=2;goto B6f6c89;
case 0x6f6c8c:c.instructions+=1;goto B6f6c8c;
case 0x6f6c8e:goto L6f6c8e;
case 0x6f6c95:goto L6f6c95;
case 0x6f6c98:c.instructions+=1;goto B6f6c98;
case 0x6f6c9d:goto L6f6c9d;
case 0x6f6ca3:c.instructions+=10;goto B6f6ca3;
case 0x6f6ca6:c.instructions+=9;goto B6f6ca6;
case 0x6f6cac:c.instructions+=8;goto B6f6cac;
case 0x6f6cb1:c.instructions+=7;goto B6f6cb1;
case 0x6f6cb2:c.instructions+=6;goto B6f6cb2;
case 0x6f6cb4:c.instructions+=5;goto B6f6cb4;
case 0x6f6cb7:c.instructions+=4;goto B6f6cb7;
case 0x6f6cb9:c.instructions+=3;goto B6f6cb9;
case 0x6f6cba:c.instructions+=2;goto B6f6cba;
case 0x6f6cbb:c.instructions+=1;goto B6f6cbb;
case 0x6f6cbe:goto L6f6cbe;
case 0x6f6cbf:c.instructions+=9;goto B6f6cbf;
case 0x6f6cc1:c.instructions+=8;goto B6f6cc1;
case 0x6f6cc4:c.instructions+=7;goto B6f6cc4;
case 0x6f6cc5:c.instructions+=6;goto B6f6cc5;
case 0x6f6cc6:c.instructions+=5;goto B6f6cc6;
case 0x6f6cc7:c.instructions+=4;goto B6f6cc7;
case 0x6f6cca:c.instructions+=3;goto B6f6cca;
case 0x6f6ccc:c.instructions+=2;goto B6f6ccc;
case 0x6f6cce:c.instructions+=1;goto B6f6cce;
case 0x6f6cd0:goto L6f6cd0;
case 0x6f6cd5:goto L6f6cd5;
case 0x6f6cd7:c.instructions+=1;goto B6f6cd7;
case 0x6f6cda:goto L6f6cda;
case 0x6f6cdc:c.instructions+=3;goto B6f6cdc;
case 0x6f6cdd:c.instructions+=2;goto B6f6cdd;
case 0x6f6cdf:c.instructions+=1;goto B6f6cdf;
case 0x6f6ce1:goto L6f6ce1;
case 0x6f6ce7:c.instructions+=24;goto B6f6ce7;
case 0x6f6ceb:c.instructions+=23;goto B6f6ceb;
case 0x6f6ced:c.instructions+=22;goto B6f6ced;
case 0x6f6cf0:c.instructions+=21;goto B6f6cf0;
case 0x6f6cf2:c.instructions+=20;goto B6f6cf2;
case 0x6f6cf3:c.instructions+=19;goto B6f6cf3;
case 0x6f6cf6:c.instructions+=18;goto B6f6cf6;
case 0x6f6cf9:c.instructions+=17;goto B6f6cf9;
case 0x6f6cfc:c.instructions+=16;goto B6f6cfc;
case 0x6f6cff:c.instructions+=15;goto B6f6cff;
case 0x6f6d02:c.instructions+=14;goto B6f6d02;
case 0x6f6d05:c.instructions+=13;goto B6f6d05;
case 0x6f6d08:c.instructions+=12;goto B6f6d08;
case 0x6f6d0b:c.instructions+=11;goto B6f6d0b;
case 0x6f6d0c:c.instructions+=10;goto B6f6d0c;
case 0x6f6d13:c.instructions+=9;goto B6f6d13;
case 0x6f6d1a:c.instructions+=8;goto B6f6d1a;
case 0x6f6d21:c.instructions+=7;goto B6f6d21;
case 0x6f6d28:c.instructions+=6;goto B6f6d28;
case 0x6f6d2b:c.instructions+=5;goto B6f6d2b;
case 0x6f6d32:c.instructions+=4;goto B6f6d32;
case 0x6f6d35:c.instructions+=3;goto B6f6d35;
case 0x6f6d37:c.instructions+=2;goto B6f6d37;
case 0x6f6d38:c.instructions+=1;goto B6f6d38;
case 0x6f6d3a:goto L6f6d3a;
case 0x6f6d3b:c.instructions+=4;goto B6f6d3b;
case 0x6f6d3c:c.instructions+=3;goto B6f6d3c;
case 0x6f6d3d:c.instructions+=2;goto B6f6d3d;
case 0x6f6d40:c.instructions+=1;goto B6f6d40;
case 0x6f6d45:goto L6f6d45;
case 0x6f6d48:c.instructions+=5;goto B6f6d48;
case 0x6f6d49:c.instructions+=4;goto B6f6d49;
case 0x6f6d4a:c.instructions+=3;goto B6f6d4a;
case 0x6f6d4b:c.instructions+=2;goto B6f6d4b;
case 0x6f6d4c:c.instructions+=1;goto B6f6d4c;
case 0x6f6d4f:goto L6f6d4f;
case 0x6f6d55:c.instructions+=9;goto B6f6d55;
case 0x6f6d5a:c.instructions+=8;goto B6f6d5a;
case 0x6f6d5d:c.instructions+=7;goto B6f6d5d;
case 0x6f6d63:c.instructions+=6;goto B6f6d63;
case 0x6f6d66:c.instructions+=5;goto B6f6d66;
case 0x6f6d6c:c.instructions+=4;goto B6f6d6c;
case 0x6f6d72:c.instructions+=3;goto B6f6d72;
case 0x6f6d78:c.instructions+=2;goto B6f6d78;
case 0x6f6d7f:c.instructions+=1;goto B6f6d7f;
case 0x6f6d81:goto L6f6d81;
case 0x6f6d82:c.instructions+=8;goto B6f6d82;
case 0x6f6d84:c.instructions+=7;goto B6f6d84;
case 0x6f6d85:c.instructions+=6;goto B6f6d85;
case 0x6f6d88:c.instructions+=5;goto B6f6d88;
case 0x6f6d8b:c.instructions+=4;goto B6f6d8b;
case 0x6f6d91:c.instructions+=3;goto B6f6d91;
case 0x6f6d94:c.instructions+=2;goto B6f6d94;
case 0x6f6d96:c.instructions+=1;goto B6f6d96;
case 0x6f6d99:goto L6f6d99;
case 0x6f6d9c:c.instructions+=10;goto B6f6d9c;
case 0x6f6d9e:c.instructions+=9;goto B6f6d9e;
case 0x6f6da1:c.instructions+=8;goto B6f6da1;
case 0x6f6da4:c.instructions+=7;goto B6f6da4;
case 0x6f6da7:c.instructions+=6;goto B6f6da7;
case 0x6f6da9:c.instructions+=5;goto B6f6da9;
case 0x6f6dac:c.instructions+=4;goto B6f6dac;
case 0x6f6daf:c.instructions+=3;goto B6f6daf;
case 0x6f6db0:c.instructions+=2;goto B6f6db0;
case 0x6f6db1:c.instructions+=1;goto B6f6db1;
case 0x6f6db2:goto L6f6db2;
case 0x6f6db3:c.instructions+=7;goto B6f6db3;
case 0x6f6db5:c.instructions+=6;goto B6f6db5;
case 0x6f6dba:c.instructions+=5;goto B6f6dba;
case 0x6f6dbb:c.instructions+=4;goto B6f6dbb;
case 0x6f6dbc:c.instructions+=3;goto B6f6dbc;
case 0x6f6dc2:c.instructions+=2;goto B6f6dc2;
case 0x6f6dc8:c.instructions+=1;goto B6f6dc8;
case 0x6f6dcd:goto L6f6dcd;
case 0x6f6dd2:c.instructions+=5;goto B6f6dd2;
case 0x6f6dd5:c.instructions+=4;goto B6f6dd5;
case 0x6f6dd6:c.instructions+=3;goto B6f6dd6;
case 0x6f6ddb:c.instructions+=2;goto B6f6ddb;
case 0x6f6de1:c.instructions+=1;goto B6f6de1;
case 0x6f6de6:goto L6f6de6;
case 0x6f6deb:c.instructions+=4;goto B6f6deb;
case 0x6f6dee:c.instructions+=3;goto B6f6dee;
case 0x6f6df4:c.instructions+=2;goto B6f6df4;
case 0x6f6df6:c.instructions+=1;goto B6f6df6;
case 0x6f6df9:goto L6f6df9;
case 0x6f6dfb:c.instructions+=5;goto B6f6dfb;
case 0x6f6dfc:c.instructions+=4;goto B6f6dfc;
case 0x6f6dfe:c.instructions+=3;goto B6f6dfe;
case 0x6f6dff:c.instructions+=2;goto B6f6dff;
case 0x6f6e01:c.instructions+=1;goto B6f6e01;
case 0x6f6e03:goto L6f6e03;
case 0x6f6e05:c.instructions+=7;goto B6f6e05;
case 0x6f6e0b:c.instructions+=6;goto B6f6e0b;
case 0x6f6e0d:c.instructions+=5;goto B6f6e0d;
case 0x6f6e0f:c.instructions+=4;goto B6f6e0f;
case 0x6f6e11:c.instructions+=3;goto B6f6e11;
case 0x6f6e12:c.instructions+=2;goto B6f6e12;
case 0x6f6e13:c.instructions+=1;goto B6f6e13;
case 0x6f6e15:goto L6f6e15;
case 0x6f6e18:c.instructions+=3;goto B6f6e18;
case 0x6f6e1b:c.instructions+=2;goto B6f6e1b;
case 0x6f6e1e:c.instructions+=1;goto B6f6e1e;
case 0x6f6e20:goto L6f6e20;
case 0x6f6e23:c.instructions+=1;goto B6f6e23;
case 0x6f6e25:goto L6f6e25;
case 0x6f6e29:goto L6f6e29;
case 0x6f6e2f:c.instructions+=6;goto B6f6e2f;
case 0x6f6e35:c.instructions+=5;goto B6f6e35;
case 0x6f6e36:c.instructions+=4;goto B6f6e36;
case 0x6f6e38:c.instructions+=3;goto B6f6e38;
case 0x6f6e3b:c.instructions+=2;goto B6f6e3b;
case 0x6f6e3c:c.instructions+=1;goto B6f6e3c;
case 0x6f6e3d:goto L6f6e3d;
case 0x6f6e42:goto L6f6e42;
case 0x6f6e44:c.instructions+=3;goto B6f6e44;
case 0x6f6e45:c.instructions+=2;goto B6f6e45;
case 0x6f6e46:c.instructions+=1;goto B6f6e46;
case 0x6f6e48:goto L6f6e48;
case 0x6f6e4d:c.instructions+=4;goto B6f6e4d;
case 0x6f6e53:c.instructions+=3;goto B6f6e53;
case 0x6f6e57:c.instructions+=2;goto B6f6e57;
case 0x6f6e59:c.instructions+=1;goto B6f6e59;
case 0x6f6e5c:goto L6f6e5c;
case 0x6f6e5e:c.instructions+=3;goto B6f6e5e;
case 0x6f6e5f:c.instructions+=2;goto B6f6e5f;
case 0x6f6e61:c.instructions+=1;goto B6f6e61;
case 0x6f6e63:goto L6f6e63;
case 0x6f6e65:c.instructions+=6;goto B6f6e65;
case 0x6f6e67:c.instructions+=5;goto B6f6e67;
case 0x6f6e6a:c.instructions+=4;goto B6f6e6a;
case 0x6f6e6c:c.instructions+=3;goto B6f6e6c;
case 0x6f6e6d:c.instructions+=2;goto B6f6e6d;
case 0x6f6e6e:c.instructions+=1;goto B6f6e6e;
case 0x6f6e70:goto L6f6e70;
case 0x6f6e72:c.instructions+=1;goto B6f6e72;
case 0x6f6e74:goto L6f6e74;
case 0x6f6e78:goto L6f6e78;
case 0x6f6e79:c.instructions+=1;goto B6f6e79;
case 0x6f6e7a:goto L6f6e7a;
case 0x6f6e7b:c.instructions+=7;goto B6f6e7b;
case 0x6f6e7d:c.instructions+=6;goto B6f6e7d;
case 0x6f6e82:c.instructions+=5;goto B6f6e82;
case 0x6f6e88:c.instructions+=4;goto B6f6e88;
case 0x6f6e89:c.instructions+=3;goto B6f6e89;
case 0x6f6e8a:c.instructions+=2;goto B6f6e8a;
case 0x6f6e8b:c.instructions+=1;goto B6f6e8b;
case 0x6f6e8d:goto L6f6e8d;
case 0x6f6e8e:goto L6f6e8e;
case 0x6f6e91:c.instructions+=1;goto B6f6e91;
case 0x6f6e93:goto L6f6e93;
case 0x6f6e96:c.instructions+=2;goto B6f6e96;
case 0x6f6e99:c.instructions+=1;goto B6f6e99;
case 0x6f6e9b:goto L6f6e9b;
case 0x6f6e9f:c.instructions+=1;goto B6f6e9f;
case 0x6f6ea1:goto L6f6ea1;
case 0x6f6ea3:c.instructions+=1;goto B6f6ea3;
case 0x6f6ea6:goto L6f6ea6;
case 0x6f6ea9:goto L6f6ea9;
case 0x6f6ead:c.instructions+=1;goto B6f6ead;
case 0x6f6eaf:goto L6f6eaf;
case 0x6f6eb2:c.instructions+=5;goto B6f6eb2;
case 0x6f6eb8:c.instructions+=4;goto B6f6eb8;
case 0x6f6eba:c.instructions+=3;goto B6f6eba;
case 0x6f6ebd:c.instructions+=2;goto B6f6ebd;
case 0x6f6ec0:c.instructions+=1;goto B6f6ec0;
case 0x6f6ec5:goto L6f6ec5;
case 0x6f6ec7:c.instructions+=3;goto B6f6ec7;
case 0x6f6ec8:c.instructions+=2;goto B6f6ec8;
case 0x6f6ec9:c.instructions+=1;goto B6f6ec9;
case 0x6f6ece:goto L6f6ece;
case 0x6f6ed2:c.instructions+=4;goto B6f6ed2;
case 0x6f6ed3:c.instructions+=3;goto B6f6ed3;
case 0x6f6ed4:c.instructions+=2;goto B6f6ed4;
case 0x6f6ed6:c.instructions+=1;goto B6f6ed6;
case 0x6f6ed8:goto L6f6ed8;
case 0x6f6edb:c.instructions+=1;goto B6f6edb;
case 0x6f6edd:goto L6f6edd;
case 0x6f6edf:c.instructions+=4;goto B6f6edf;
case 0x6f6ee2:c.instructions+=3;goto B6f6ee2;
case 0x6f6ee3:c.instructions+=2;goto B6f6ee3;
case 0x6f6ee5:c.instructions+=1;goto B6f6ee5;
case 0x6f6ee7:goto L6f6ee7;
case 0x6f6ee9:c.instructions+=1;goto B6f6ee9;
case 0x6f6eea:goto L6f6eea;
case 0x6f6eed:c.instructions+=3;goto B6f6eed;
case 0x6f6eee:c.instructions+=2;goto B6f6eee;
case 0x6f6ef0:c.instructions+=1;goto B6f6ef0;
case 0x6f6ef2:goto L6f6ef2;
case 0x6f6ef7:c.instructions+=4;goto B6f6ef7;
case 0x6f6efc:c.instructions+=3;goto B6f6efc;
case 0x6f6efe:c.instructions+=2;goto B6f6efe;
case 0x6f6f04:c.instructions+=1;goto B6f6f04;
case 0x6f6f06:goto L6f6f06;
case 0x6f6f08:c.instructions+=3;goto B6f6f08;
case 0x6f6f09:c.instructions+=2;goto B6f6f09;
case 0x6f6f0b:c.instructions+=1;goto B6f6f0b;
case 0x6f6f0d:goto L6f6f0d;
case 0x6f6f0f:c.instructions+=2;goto B6f6f0f;
case 0x6f6f11:c.instructions+=1;goto B6f6f11;
case 0x6f6f12:goto L6f6f12;
case 0x6f6f15:c.instructions+=3;goto B6f6f15;
case 0x6f6f16:c.instructions+=2;goto B6f6f16;
case 0x6f6f18:c.instructions+=1;goto B6f6f18;
case 0x6f6f1a:goto L6f6f1a;
case 0x6f6f1c:goto L6f6f1c;
case 0x6f6f21:c.instructions+=1;goto B6f6f21;
case 0x6f6f27:goto L6f6f27;
case 0x6f6f29:c.instructions+=5;goto B6f6f29;
case 0x6f6f2a:c.instructions+=4;goto B6f6f2a;
case 0x6f6f2c:c.instructions+=3;goto B6f6f2c;
case 0x6f6f2d:c.instructions+=2;goto B6f6f2d;
case 0x6f6f2f:c.instructions+=1;goto B6f6f2f;
case 0x6f6f31:goto L6f6f31;
case 0x6f6f33:c.instructions+=1;goto B6f6f33;
case 0x6f6f34:goto L6f6f34;
case 0x6f6f37:c.instructions+=3;goto B6f6f37;
case 0x6f6f38:c.instructions+=2;goto B6f6f38;
case 0x6f6f3a:c.instructions+=1;goto B6f6f3a;
case 0x6f6f3c:goto L6f6f3c;
case 0x6f6f3f:c.instructions+=3;goto B6f6f3f;
case 0x6f6f44:c.instructions+=2;goto B6f6f44;
case 0x6f6f46:c.instructions+=1;goto B6f6f46;
case 0x6f6f48:goto L6f6f48;
case 0x6f6f4a:c.instructions+=3;goto B6f6f4a;
case 0x6f6f4b:c.instructions+=2;goto B6f6f4b;
case 0x6f6f4d:c.instructions+=1;goto B6f6f4d;
case 0x6f6f4f:goto L6f6f4f;
case 0x6f6f51:c.instructions+=2;goto B6f6f51;
case 0x6f6f53:c.instructions+=1;goto B6f6f53;
case 0x6f6f54:goto L6f6f54;
case 0x6f6f57:c.instructions+=3;goto B6f6f57;
case 0x6f6f58:c.instructions+=2;goto B6f6f58;
case 0x6f6f5a:c.instructions+=1;goto B6f6f5a;
case 0x6f6f5c:goto L6f6f5c;
case 0x6f6f5e:c.instructions+=2;goto B6f6f5e;
case 0x6f6f61:c.instructions+=1;goto B6f6f61;
case 0x6f6f63:goto L6f6f63;
case 0x6f6f65:goto L6f6f65;
case 0x6f6f67:c.instructions+=2;goto B6f6f67;
case 0x6f6f6a:c.instructions+=1;goto B6f6f6a;
case 0x6f6f6b:goto L6f6f6b;
case 0x6f6f6d:goto L6f6f6d;
case 0x6f6f72:goto L6f6f72;
case 0x6f6f73:c.instructions+=6;goto B6f6f73;
case 0x6f6f76:c.instructions+=5;goto B6f6f76;
case 0x6f6f77:c.instructions+=4;goto B6f6f77;
case 0x6f6f78:c.instructions+=3;goto B6f6f78;
case 0x6f6f79:c.instructions+=2;goto B6f6f79;
case 0x6f6f7a:c.instructions+=1;goto B6f6f7a;
case 0x6f6f7b:goto L6f6f7b;
case 0x6f6f7c:c.instructions+=11;goto B6f6f7c;
case 0x6f6f7e:c.instructions+=10;goto B6f6f7e;
case 0x6f6f7f:c.instructions+=9;goto B6f6f7f;
case 0x6f6f80:c.instructions+=8;goto B6f6f80;
case 0x6f6f86:c.instructions+=7;goto B6f6f86;
case 0x6f6f8a:c.instructions+=6;goto B6f6f8a;
case 0x6f6f8c:c.instructions+=5;goto B6f6f8c;
case 0x6f6f92:c.instructions+=4;goto B6f6f92;
case 0x6f6f93:c.instructions+=3;goto B6f6f93;
case 0x6f6f94:c.instructions+=2;goto B6f6f94;
case 0x6f6f95:c.instructions+=1;goto B6f6f95;
case 0x6f6f97:goto L6f6f97;
case 0x6f6f9d:c.instructions+=1;goto B6f6f9d;
case 0x6f6fa0:goto L6f6fa0;
case 0x6f6fa3:c.instructions+=3;goto B6f6fa3;
case 0x6f6fa5:c.instructions+=2;goto B6f6fa5;
case 0x6f6fa7:c.instructions+=1;goto B6f6fa7;
case 0x6f6fa9:goto L6f6fa9;
case 0x6f6fac:goto L6f6fac;
case 0x6f6fae:c.instructions+=3;goto B6f6fae;
case 0x6f6fb0:c.instructions+=2;goto B6f6fb0;
case 0x6f6fb2:c.instructions+=1;goto B6f6fb2;
case 0x6f6fb4:goto L6f6fb4;
case 0x6f6fb6:c.instructions+=1;goto B6f6fb6;
case 0x6f6fb8:goto L6f6fb8;
case 0x6f6fbb:c.instructions+=3;goto B6f6fbb;
case 0x6f6fbd:c.instructions+=2;goto B6f6fbd;
case 0x6f6fc0:c.instructions+=1;goto B6f6fc0;
case 0x6f6fc2:goto L6f6fc2;
case 0x6f6fc3:c.instructions+=5;goto B6f6fc3;
case 0x6f6fc4:c.instructions+=4;goto B6f6fc4;
case 0x6f6fc5:c.instructions+=3;goto B6f6fc5;
case 0x6f6fc6:c.instructions+=2;goto B6f6fc6;
case 0x6f6fc8:c.instructions+=1;goto B6f6fc8;
case 0x6f6fca:goto L6f6fca;
case 0x6f6fcc:c.instructions+=1;goto B6f6fcc;
case 0x6f6fce:goto L6f6fce;
case 0x6f6fd0:c.instructions+=1;goto B6f6fd0;
case 0x6f6fd3:goto L6f6fd3;
case 0x6f6fd5:c.instructions+=1;goto B6f6fd5;
case 0x6f6fd7:goto L6f6fd7;
case 0x6f6fda:c.instructions+=3;goto B6f6fda;
case 0x6f6fde:c.instructions+=2;goto B6f6fde;
case 0x6f6fe1:c.instructions+=1;goto B6f6fe1;
case 0x6f6fe3:goto L6f6fe3;
case 0x6f6fe6:c.instructions+=1;goto B6f6fe6;
case 0x6f6fe8:goto L6f6fe8;
case 0x6f6fea:c.instructions+=1;goto B6f6fea;
case 0x6f6fef:goto L6f6fef;
case 0x6f6ff5:c.instructions+=1;goto B6f6ff5;
case 0x6f6ff7:goto L6f6ff7;
case 0x6f6ff8:c.instructions+=2;goto B6f6ff8;
case 0x6f6ffb:c.instructions+=1;goto B6f6ffb;
case 0x6f6ffd:goto L6f6ffd;
default:missing_instruction(c.pc);}
B6f6003:L6f6003:{c.instructions+=2;NFSU2_TR(0x6f6003);
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
B6f6005:{NFSU2_TR(0x6f6005);
if(r1(R+518)){{goto L6f61b8;}}
}
B6f600b:L6f600b:{c.instructions+=3;NFSU2_TR(0x6f600b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f600e:{NFSU2_TR(0x6f600e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f600f:{NFSU2_TR(0x6f600f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6015ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f6015:L6f6015:{c.instructions+=22;NFSU2_TR(0x6f6015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6018:{NFSU2_TR(0x6f6018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f601c:{NFSU2_TR(0x6f601c);
__builtin_memmove(gp(0x8ad454),(R+0),4);
}
B6f6021:{NFSU2_TR(0x6f6021);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6024:{NFSU2_TR(0x6f6024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6027:{NFSU2_TR(0x6f6027);
w4(R+0,u32(0x0ull));
}
B6f602c:{NFSU2_TR(0x6f602c);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f602c_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f602c_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f602c_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f602c_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f602c_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f602c_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f602c_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f602c_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f602c_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f602c_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f602c_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f602c_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f602c_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f602c_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f602c_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f602c_65;}
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_35:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_37:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_39:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_41:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_43:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_45:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_47:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_49:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_51:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_53:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_55:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_57:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_59:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_61:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_63:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_65:;
{SPILL();c.pc=0x6f602cu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f602c_67;
L6f602c_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f602e:{NFSU2_TR(0x6f602e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6031:{NFSU2_TR(0x6f6031);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f6033:{NFSU2_TR(0x6f6033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6036:{NFSU2_TR(0x6f6036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6039:{NFSU2_TR(0x6f6039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f603c:{NFSU2_TR(0x6f603c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f603f:{NFSU2_TR(0x6f603f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6041:{NFSU2_TR(0x6f6041);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6044:{NFSU2_TR(0x6f6044);
w4(R+28,u32(0x8ad45cull));
}
B6f6049:{NFSU2_TR(0x6f6049);
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
B6f604a:{NFSU2_TR(0x6f604a);
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
B6f604b:{NFSU2_TR(0x6f604b);
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
B6f604c:{NFSU2_TR(0x6f604c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f604f:{NFSU2_TR(0x6f604f);
s1(0x8ad468,u8(0x0ull));
}
B6f6056:{NFSU2_TR(0x6f6056);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f61d1;}}
}
B6f605c:L6f605c:{c.instructions+=7;NFSU2_TR(0x6f605c);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f605e:{NFSU2_TR(0x6f605e);
w4(R+0,u32(0x8ad45cull));
}
B6f6063:{NFSU2_TR(0x6f6063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f6064:{NFSU2_TR(0x6f6064);
w4(R+28,u32(0x7ab4bcull));
}
B6f6069:{NFSU2_TR(0x6f6069);
__builtin_memmove((R+24),(R+0),4);
}
B6f606b:{NFSU2_TR(0x6f606b);
__builtin_memmove((R+4),(R+8),4);
}
B6f606d:{NFSU2_TR(0x6f606d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f606f:L6f606f:{c.instructions+=1;NFSU2_TR(0x6f606f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f6071;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f606fu);}goto L6f606f;}}
}
B6f6071:L6f6071:{c.instructions+=1;NFSU2_TR(0x6f6071);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f607c;}}
}
B6f6073:L6f6073:{c.instructions+=2;NFSU2_TR(0x6f6073);
s1(0x8ad45b,u8(u32(m1(0x8ad45b))|u32(u8(0x1ull))));
}
B6f607a:{NFSU2_TR(0x6f607a);
{goto L6f60c2;}
}
B6f607c:L6f607c:{c.instructions+=4;NFSU2_TR(0x6f607c);
w4(R+28,u32(0x7b7258ull));
}
B6f6081:{NFSU2_TR(0x6f6081);
__builtin_memmove((R+24),(R+0),4);
}
B6f6083:{NFSU2_TR(0x6f6083);
__builtin_memmove((R+4),(R+8),4);
}
B6f6085:{NFSU2_TR(0x6f6085);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f6087:L6f6087:{c.instructions+=1;NFSU2_TR(0x6f6087);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f6089;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6087u);}goto L6f6087;}}
}
B6f6089:L6f6089:{c.instructions+=1;NFSU2_TR(0x6f6089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6094;}}
}
B6f608b:L6f608b:{c.instructions+=2;NFSU2_TR(0x6f608b);
s1(0x8ad45b,u8(u32(m1(0x8ad45b))|u32(u8(0x2ull))));
}
B6f6092:{NFSU2_TR(0x6f6092);
{goto L6f60c2;}
}
B6f6094:L6f6094:{c.instructions+=4;NFSU2_TR(0x6f6094);
w4(R+28,u32(0x7c2dc8ull));
}
B6f6099:{NFSU2_TR(0x6f6099);
__builtin_memmove((R+24),(R+0),4);
}
B6f609b:{NFSU2_TR(0x6f609b);
__builtin_memmove((R+4),(R+8),4);
}
B6f609d:{NFSU2_TR(0x6f609d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6f609f:L6f609f:{c.instructions+=1;NFSU2_TR(0x6f609f);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f60a1;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f609fu);}goto L6f609f;}}
}
B6f60a1:L6f60a1:{c.instructions+=1;NFSU2_TR(0x6f60a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f60ac;}}
}
B6f60a3:L6f60a3:{c.instructions+=2;NFSU2_TR(0x6f60a3);
s1(0x8ad45b,u8(u32(m1(0x8ad45b))|u32(u8(0x4ull))));
}
B6f60aa:{NFSU2_TR(0x6f60aa);
{goto L6f60c2;}
}
B6f60ac:L6f60ac:{c.instructions+=4;NFSU2_TR(0x6f60ac);
__builtin_memmove((R+24),(R+0),4);
}
B6f60ae:{NFSU2_TR(0x6f60ae);
w4(R+28,u32(0x7c2db8ull));
}
B6f60b3:{NFSU2_TR(0x6f60b3);
__builtin_memmove((R+4),(R+8),4);
}
B6f60b5:{NFSU2_TR(0x6f60b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f60b7:L6f60b7:{c.instructions+=1;NFSU2_TR(0x6f60b7);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f60b9;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f60b7u);}goto L6f60b7;}}
}
B6f60b9:L6f60b9:{c.instructions+=1;NFSU2_TR(0x6f60b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f60c2;}}
}
B6f60bb:L6f60bb:{c.instructions+=1;NFSU2_TR(0x6f60bb);
s1(0x8ad45b,u8(u32(m1(0x8ad45b))|u32(u8(0x8ull))));
}
B6f60c2:L6f60c2:{c.instructions+=32;NFSU2_TR(0x6f60c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f60c5:{NFSU2_TR(0x6f60c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f60c8:{NFSU2_TR(0x6f60c8);
w4(R+0,u32(0x1ull));
}
B6f60cd:{NFSU2_TR(0x6f60cd);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f60cd_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f60cd_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f60cd_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f60cd_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f60cd_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f60cd_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f60cd_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f60cd_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f60cd_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f60cd_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f60cd_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f60cd_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f60cd_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f60cd_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f60cd_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f60cd_65;}
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_35:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_37:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_39:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_41:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_43:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_45:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_47:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_49:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_51:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_53:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_55:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_57:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_59:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_61:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_63:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_65:;
{SPILL();c.pc=0x6f60cdu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f60cd_67;
L6f60cd_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f60cf:{NFSU2_TR(0x6f60cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f60d2:{NFSU2_TR(0x6f60d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f60d4:{NFSU2_TR(0x6f60d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f60d7:{NFSU2_TR(0x6f60d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f60da:{NFSU2_TR(0x6f60da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f60dd:{NFSU2_TR(0x6f60dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f60e0:{NFSU2_TR(0x6f60e0);
__builtin_memmove((R+4),(R+0),4);
}
B6f60e2:{NFSU2_TR(0x6f60e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f60e5:{NFSU2_TR(0x6f60e5);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B6f60e8:{NFSU2_TR(0x6f60e8);
__builtin_memmove(gp(0x8ad458),(R+4),1);
}
B6f60ee:{NFSU2_TR(0x6f60ee);
__builtin_memmove((R+4),(R+0),4);
}
B6f60f0:{NFSU2_TR(0x6f60f0);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B6f60f2:{NFSU2_TR(0x6f60f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f60f5:{NFSU2_TR(0x6f60f5);
__builtin_memmove(gp(0x8ad45a),(R+0),1);
}
B6f60fa:{NFSU2_TR(0x6f60fa);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B6f60fd:{NFSU2_TR(0x6f60fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6100:{NFSU2_TR(0x6f6100);
__builtin_memmove(gp(0x8ad459),(R+4),1);
}
B6f6106:{NFSU2_TR(0x6f6106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6109:{NFSU2_TR(0x6f6109);
w4(R+0,u32(0x80000000ull));
}
B6f610e:{NFSU2_TR(0x6f610e);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f610e_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f610e_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f610e_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f610e_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f610e_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f610e_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f610e_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f610e_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f610e_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f610e_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f610e_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f610e_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f610e_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f610e_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f610e_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f610e_65;}
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_35:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_37:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_39:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_41:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_43:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_45:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_47:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_49:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_51:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_53:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_55:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_57:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_59:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_61:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_63:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_65:;
{SPILL();c.pc=0x6f610eu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f610e_67;
L6f610e_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f6110:{NFSU2_TR(0x6f6110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6113:{NFSU2_TR(0x6f6113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f6115:{NFSU2_TR(0x6f6115);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6118:{NFSU2_TR(0x6f6118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f611b:{NFSU2_TR(0x6f611b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f611e:{NFSU2_TR(0x6f611e);
w4(R+28,u32(0x2000000ull));
}
B6f6123:{NFSU2_TR(0x6f6123);
u8 U[4];
w4(U+0,u32(u32(m4(0x8ad458))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6129:{NFSU2_TR(0x6f6129);
if(r1(R+518)){{goto L6f615d;}}
}
B6f612b:L6f612b:{c.instructions+=2;NFSU2_TR(0x6f612b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x80000000ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6132:{NFSU2_TR(0x6f6132);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f615d;}}
}
B6f6134:L6f6134:{c.instructions+=12;NFSU2_TR(0x6f6134);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6137:{NFSU2_TR(0x6f6137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f613a:{NFSU2_TR(0x6f613a);
w4(R+0,u32(0x80000001ull));
}
B6f613f:{NFSU2_TR(0x6f613f);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f613f_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f613f_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f613f_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f613f_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f613f_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f613f_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f613f_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f613f_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f613f_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f613f_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f613f_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f613f_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f613f_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f613f_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f613f_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f613f_65;}
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_35:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_37:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_39:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_41:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_43:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_45:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_47:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_49:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_51:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_53:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_55:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_57:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_59:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_61:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_63:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_65:;
{SPILL();c.pc=0x6f613fu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f613f_67;
L6f613f_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f6141:{NFSU2_TR(0x6f6141);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6144:{NFSU2_TR(0x6f6144);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f6146:{NFSU2_TR(0x6f6146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6149:{NFSU2_TR(0x6f6149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f614c:{NFSU2_TR(0x6f614c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f614f:{NFSU2_TR(0x6f614f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6152:{NFSU2_TR(0x6f6152);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80400000ull))));
}
B6f6157:{NFSU2_TR(0x6f6157);
s4(0x8ad450,u32(u32(m4(0x8ad450))|u32(r4(R+0))));
}
B6f615d:L6f615d:{c.instructions+=14;NFSU2_TR(0x6f615d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6160:{NFSU2_TR(0x6f6160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6163:{NFSU2_TR(0x6f6163);
w4(R+0,u32(0x1ull));
}
B6f6168:{NFSU2_TR(0x6f6168);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f6168_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f6168_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f6168_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f6168_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f6168_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f6168_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f6168_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f6168_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f6168_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f6168_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f6168_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f6168_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f6168_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f6168_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f6168_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f6168_65;}
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_35:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_37:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_39:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_41:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_43:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_45:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_47:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_49:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_51:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_53:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_55:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_57:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_59:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_61:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_63:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_65:;
{SPILL();c.pc=0x6f6168u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f6168_67;
L6f6168_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f616a:{NFSU2_TR(0x6f616a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f616d:{NFSU2_TR(0x6f616d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f616f:{NFSU2_TR(0x6f616f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6172:{NFSU2_TR(0x6f6172);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6175:{NFSU2_TR(0x6f6175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6178:{NFSU2_TR(0x6f6178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f617b:{NFSU2_TR(0x6f617b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x6000000ull))));
}
B6f6180:{NFSU2_TR(0x6f6180);
s4(0x8ad450,u32(u32(m4(0x8ad450))|u32(r4(R+0))));
}
B6f6186:{NFSU2_TR(0x6f6186);
u8 U[4];
w4(U+0,u32(u32(m4(0x8ad450))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f618c:{NFSU2_TR(0x6f618c);
if(r1(R+518)){{goto L6f6195;}}
}
B6f618e:L6f618e:{c.instructions+=1;NFSU2_TR(0x6f618e);
s1(0x8ad452,u8(u32(m1(0x8ad452))|u32(u8(0x40ull))));
}
B6f6195:L6f6195:{c.instructions+=2;NFSU2_TR(0x6f6195);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f6199:{NFSU2_TR(0x6f6199);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f61d1;}}
}
B6f619b:L6f619b:{c.instructions+=10;NFSU2_TR(0x6f619b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f619e:{NFSU2_TR(0x6f619e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f61a1:{NFSU2_TR(0x6f61a1);
w4(R+0,u32(0x2ull));
}
B6f61a6:{NFSU2_TR(0x6f61a6);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L6f61a6_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L6f61a6_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L6f61a6_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L6f61a6_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L6f61a6_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L6f61a6_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L6f61a6_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L6f61a6_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L6f61a6_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L6f61a6_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L6f61a6_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L6f61a6_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L6f61a6_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L6f61a6_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L6f61a6_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L6f61a6_65;}
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_35:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_37:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_39:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_41:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_43:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_45:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_47:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_49:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_51:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_53:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_55:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_57:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_59:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_61:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_63:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_65:;
{SPILL();c.pc=0x6f61a6u;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L6f61a6_67;
L6f61a6_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B6f61a8:{NFSU2_TR(0x6f61a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f61ab:{NFSU2_TR(0x6f61ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f61ad:{NFSU2_TR(0x6f61ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f61b0:{NFSU2_TR(0x6f61b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f61b3:{NFSU2_TR(0x6f61b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f61b6:{NFSU2_TR(0x6f61b6);
{goto L6f61d1;}
}
B6f61b8:L6f61b8:{c.instructions+=1;NFSU2_TR(0x6f61b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f61bdull));
TAIL_STATIC(0x6f5fc5u,6f5);
}
B6f61bd:L6f61bd:{c.instructions+=4;NFSU2_TR(0x6f61bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f61c0:{NFSU2_TR(0x6f61c0);
w4(R+0,u32(u32(r4(R+0))^u32(m4(0x8ad458))));
}
B6f61c6:{NFSU2_TR(0x6f61c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
}
B6f61cb:{NFSU2_TR(0x6f61cb);
s4(0x8ad458,u32(u32(m4(0x8ad458))^u32(r4(R+0))));
}
B6f61d1:L6f61d1:{c.instructions+=8;NFSU2_TR(0x6f61d1);
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
B6f61d5:{NFSU2_TR(0x6f61d5);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B6f61d8:{NFSU2_TR(0x6f61d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f61dc:{NFSU2_TR(0x6f61dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f61dd:{NFSU2_TR(0x6f61dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f61de:{NFSU2_TR(0x6f61de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f61df:{NFSU2_TR(0x6f61df);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f61e0:{NFSU2_TR(0x6f61e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f61e1:L6f61e1:{c.instructions+=3;NFSU2_TR(0x6f61e1);
__builtin_memmove((R+0),gp(0x8ad458),4);
}
B6f61e6:{NFSU2_TR(0x6f61e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f61eb:{NFSU2_TR(0x6f61eb);
if(r1(R+518)){{goto L6f6212;}}
}
B6f61ed:L6f61ed:{c.instructions+=3;NFSU2_TR(0x6f61ed);
__builtin_memmove((R+0),gp(0x8ad450),4);
}
B6f61f2:{NFSU2_TR(0x6f61f2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x2000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f61f7:{NFSU2_TR(0x6f61f7);
if(r1(R+518)){{goto L6f620c;}}
}
B6f61f9:L6f61f9:{c.instructions+=2;NFSU2_TR(0x6f61f9);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f61fe:{NFSU2_TR(0x6f61fe);
if(r1(R+518)){{goto L6f6206;}}
}
B6f6200:L6f6200:{c.instructions+=2;NFSU2_TR(0x6f6200);
w4(R+0,u32(0x7c2e20ull));
}
B6f6205:{NFSU2_TR(0x6f6205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6206:L6f6206:{c.instructions+=2;NFSU2_TR(0x6f6206);
w4(R+0,u32(0x7c2e14ull));
}
B6f620b:{NFSU2_TR(0x6f620b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f620c:L6f620c:{c.instructions+=2;NFSU2_TR(0x6f620c);
w4(R+0,u32(0x7c2e08ull));
}
B6f6211:{NFSU2_TR(0x6f6211);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6212:L6f6212:{c.instructions+=3;NFSU2_TR(0x6f6212);
w4(R+4,u32(0x2000000ull));
}
B6f6217:{NFSU2_TR(0x6f6217);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6219:{NFSU2_TR(0x6f6219);
if(r1(R+518)){{goto L6f623e;}}
}
B6f621b:L6f621b:{c.instructions+=2;NFSU2_TR(0x6f621b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(m4(0x8ad450))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6221:{NFSU2_TR(0x6f6221);
if(r1(R+518)){{goto L6f6238;}}
}
B6f6223:L6f6223:{c.instructions+=2;NFSU2_TR(0x6f6223);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad454),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f622a:{NFSU2_TR(0x6f622a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f6232;}}
}
B6f622c:L6f622c:{c.instructions+=2;NFSU2_TR(0x6f622c);
w4(R+0,u32(0x7c2dfcull));
}
B6f6231:{NFSU2_TR(0x6f6231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6232:L6f6232:{c.instructions+=2;NFSU2_TR(0x6f6232);
w4(R+0,u32(0x7c2df0ull));
}
B6f6237:{NFSU2_TR(0x6f6237);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6238:L6f6238:{c.instructions+=2;NFSU2_TR(0x6f6238);
w4(R+0,u32(0x7c2de8ull));
}
B6f623d:{NFSU2_TR(0x6f623d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f623e:L6f623e:{c.instructions+=2;NFSU2_TR(0x6f623e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6243:{NFSU2_TR(0x6f6243);
if(r1(R+518)){{goto L6f624b;}}
}
B6f6245:L6f6245:{c.instructions+=2;NFSU2_TR(0x6f6245);
w4(R+0,u32(0x7c2de0ull));
}
B6f624a:{NFSU2_TR(0x6f624a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f624b:L6f624b:{c.instructions+=3;NFSU2_TR(0x6f624b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x8000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6250:{NFSU2_TR(0x6f6250);
w4(R+0,u32(0x7c2dd8ull));
}
B6f6255:{NFSU2_TR(0x6f6255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f625c;}}
}
B6f6257:L6f6257:{c.instructions+=1;NFSU2_TR(0x6f6257);
w4(R+0,u32(0x78fe78ull));
}
B6f625c:L6f625c:{c.instructions+=1;NFSU2_TR(0x6f625c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f625d:L6f625d:{c.instructions+=2;NFSU2_TR(0x6f625d);
u8 U[5];
__builtin_memmove((U+3),gp(0x8ad480),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6264:{NFSU2_TR(0x6f6264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6272;}}
}
B6f6266:L6f6266:{c.instructions+=3;NFSU2_TR(0x6f6266);
__builtin_memmove((R+0),gp(0x8ad448),4);
}
B6f626b:{NFSU2_TR(0x6f626b);
__builtin_memmove((R+8),gp(0x8ad44c),4);
}
B6f6271:{NFSU2_TR(0x6f6271);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6272:L6f6272:{c.instructions+=2;NFSU2_TR(0x6f6272);
s1(0x8ad480,u8(0x1ull));
}
B6f6279:{NFSU2_TR(0x6f6279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f627eull));
TAIL_STATIC(0x6f5fe7u,6f5);
}
B6f627e:L6f627e:{c.instructions+=1;NFSU2_TR(0x6f627e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6283ull));
TAIL_STATIC(0x6f5e41u,6f5);
}
B6f6283:L6f6283:{c.instructions+=4;NFSU2_TR(0x6f6283);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f6285:{NFSU2_TR(0x6f6285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6287:{NFSU2_TR(0x6f6287);
w4(R+4,u32(0xf4240ull));
}
B6f628c:{NFSU2_TR(0x6f628c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6298;}}
}
B6f628e:L6f628e:{c.instructions+=1;NFSU2_TR(0x6f628e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6293ull));
TAIL_STATIC(0x6f5f14u,6f5);
}
B6f6293:L6f6293:{c.instructions+=3;NFSU2_TR(0x6f6293);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6295:{NFSU2_TR(0x6f6295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6296:{NFSU2_TR(0x6f6296);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f6298:L6f6298:{c.instructions+=7;NFSU2_TR(0x6f6298);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6299:{NFSU2_TR(0x6f6299);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f629a:{NFSU2_TR(0x6f629a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f629b:{NFSU2_TR(0x6f629b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f629c:{NFSU2_TR(0x6f629c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f629e:{NFSU2_TR(0x6f629e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f629f:{NFSU2_TR(0x6f629f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f62a4ull));
TAIL_STATIC(0x75c750u,75c);
}
B6f62a4:L6f62a4:{c.instructions+=4;NFSU2_TR(0x6f62a4);
__builtin_memmove((R+28),(R+8),4);
}
B6f62a6:{NFSU2_TR(0x6f62a6);
__builtin_memmove((R+24),(R+0),4);
}
B6f62a8:{NFSU2_TR(0x6f62a8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f62aa:{NFSU2_TR(0x6f62aa);
if(r1(R+518)){{goto L6f62ce;}}
}
B6f62ac:L6f62ac:{c.instructions+=3;NFSU2_TR(0x6f62ac);
__builtin_memmove(gp(0x8ad448),(R+24),4);
}
B6f62b2:{NFSU2_TR(0x6f62b2);
__builtin_memmove(gp(0x8ad44c),(R+28),4);
}
B6f62b8:{NFSU2_TR(0x6f62b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f62bdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f61e1u);}goto L6f61e1;}
}
B6f62bd:L6f62bd:{c.instructions+=1;NFSU2_TR(0x6f62bd);
w4(R+8,u32(0x8ad46cull));
}
B6f62c2:L6f62c2:{c.instructions+=6;NFSU2_TR(0x6f62c2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f62c4:{NFSU2_TR(0x6f62c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f62c5:{NFSU2_TR(0x6f62c5);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B6f62c7:{NFSU2_TR(0x6f62c7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f62c8:{NFSU2_TR(0x6f62c8);
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
B6f62ca:{NFSU2_TR(0x6f62ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f62c2u);}goto L6f62c2;}}
}
B6f62cc:L6f62cc:{c.instructions+=1;NFSU2_TR(0x6f62cc);
{goto L6f62dc;}
}
B6f62ce:L6f62ce:{c.instructions+=3;NFSU2_TR(0x6f62ce);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62d0:{NFSU2_TR(0x6f62d0);
u8 U[4];
w4(U+0,u32(0x8ad448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62d5:{NFSU2_TR(0x6f62d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f62daull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f62da:L6f62da:{c.instructions+=2;NFSU2_TR(0x6f62da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f62db:{NFSU2_TR(0x6f62db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f62dc:L6f62dc:{c.instructions+=5;NFSU2_TR(0x6f62dc);
__builtin_memmove((R+8),(R+28),4);
}
B6f62de:{NFSU2_TR(0x6f62de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f62df:{NFSU2_TR(0x6f62df);
__builtin_memmove((R+0),(R+24),4);
}
B6f62e1:{NFSU2_TR(0x6f62e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f62e2:{NFSU2_TR(0x6f62e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f62e3:L6f62e3:{c.instructions+=2;NFSU2_TR(0x6f62e3);
w4(R+0,u32(0x8ad448ull));
}
B6f62e8:{NFSU2_TR(0x6f62e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f62e9:L6f62e9:{c.instructions+=7;NFSU2_TR(0x6f62e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62ea:{NFSU2_TR(0x6f62ea);
__builtin_memmove((R+20),(R+16),4);
}
B6f62ec:{NFSU2_TR(0x6f62ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62ee:{NFSU2_TR(0x6f62ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62f0:{NFSU2_TR(0x6f62f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62f2:{NFSU2_TR(0x6f62f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f62f4:{NFSU2_TR(0x6f62f4);
u8 U[4];
__builtin_memmove((U+0),gp(0x783210),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f62faull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f62fa:L6f62fa:{c.instructions+=2;NFSU2_TR(0x6f62fa);
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
B6f62fc:{NFSU2_TR(0x6f62fc);
if(r1(R+518)){{goto L6f6308;}}
}
B6f62fe:L6f62fe:{c.instructions+=5;NFSU2_TR(0x6f62fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6301:{NFSU2_TR(0x6f6301);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6304:{NFSU2_TR(0x6f6304);
w1(R+0,u8(0x1ull));
}
B6f6306:{NFSU2_TR(0x6f6306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6307:{NFSU2_TR(0x6f6307);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6308:L6f6308:{c.instructions+=3;NFSU2_TR(0x6f6308);
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
B6f630a:{NFSU2_TR(0x6f630a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f630b:{NFSU2_TR(0x6f630b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f630c:L6f630c:{c.instructions+=5;NFSU2_TR(0x6f630c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f630d:{NFSU2_TR(0x6f630d);
__builtin_memmove((R+20),(R+16),4);
}
B6f630f:{NFSU2_TR(0x6f630f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6312:{NFSU2_TR(0x6f6312);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6315:{NFSU2_TR(0x6f6315);
u8 U[4];
__builtin_memmove((U+0),gp(0x783214),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f631bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f631b:L6f631b:{c.instructions+=2;NFSU2_TR(0x6f631b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f631c:{NFSU2_TR(0x6f631c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f631d:L6f631d:{c.instructions+=6;NFSU2_TR(0x6f631d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f631e:{NFSU2_TR(0x6f631e);
__builtin_memmove((R+20),(R+16),4);
}
B6f6320:{NFSU2_TR(0x6f6320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6323:{NFSU2_TR(0x6f6323);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6325:{NFSU2_TR(0x6f6325);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6328:{NFSU2_TR(0x6f6328);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f632eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f632e:L6f632e:{c.instructions+=5;NFSU2_TR(0x6f632e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f6330:{NFSU2_TR(0x6f6330);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f6332:{NFSU2_TR(0x6f6332);
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
B6f6333:{NFSU2_TR(0x6f6333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6334:{NFSU2_TR(0x6f6334);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6335:L6f6335:{c.instructions+=6;NFSU2_TR(0x6f6335);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6336:{NFSU2_TR(0x6f6336);
__builtin_memmove((R+20),(R+16),4);
}
B6f6338:{NFSU2_TR(0x6f6338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f633b:{NFSU2_TR(0x6f633b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f633d:{NFSU2_TR(0x6f633d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6340:{NFSU2_TR(0x6f6340);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6346ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f6346:L6f6346:{c.instructions+=2;NFSU2_TR(0x6f6346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6347:{NFSU2_TR(0x6f6347);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6348:L6f6348:{c.instructions+=3;NFSU2_TR(0x6f6348);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6349:{NFSU2_TR(0x6f6349);
__builtin_memmove((R+20),(R+16),4);
}
B6f634b:{NFSU2_TR(0x6f634b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6350ull));
TAIL_STATIC(0x6f57a1u,6f5);
}
B6f6350:L6f6350:{c.instructions+=9;NFSU2_TR(0x6f6350);
__builtin_memmove((R+4),(R+0),4);
}
B6f6352:{NFSU2_TR(0x6f6352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6355:{NFSU2_TR(0x6f6355);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x3e8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B6f635b:{NFSU2_TR(0x6f635b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f635c:{NFSU2_TR(0x6f635c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f635c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f635c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f635e:{NFSU2_TR(0x6f635e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f635f:{NFSU2_TR(0x6f635f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6362:{NFSU2_TR(0x6f6362);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6365:{NFSU2_TR(0x6f6365);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f636bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f636b:L6f636b:{c.instructions+=5;NFSU2_TR(0x6f636b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6f636d:{NFSU2_TR(0x6f636d);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f636f:{NFSU2_TR(0x6f636f);
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
B6f6370:{NFSU2_TR(0x6f6370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6371:{NFSU2_TR(0x6f6371);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6372:L6f6372:{c.instructions+=5;NFSU2_TR(0x6f6372);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6373:{NFSU2_TR(0x6f6373);
__builtin_memmove((R+20),(R+16),4);
}
B6f6375:{NFSU2_TR(0x6f6375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6378:{NFSU2_TR(0x6f6378);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f637b:{NFSU2_TR(0x6f637b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6381ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f6381:L6f6381:{c.instructions+=2;NFSU2_TR(0x6f6381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6382:{NFSU2_TR(0x6f6382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6383:L6f6383:{c.instructions+=2;NFSU2_TR(0x6f6383);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad4c4),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f638a:{NFSU2_TR(0x6f638a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f63cf;}}
}
B6f638c:L6f638c:{c.instructions+=3;NFSU2_TR(0x6f638c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f638d:{NFSU2_TR(0x6f638d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f638e:{NFSU2_TR(0x6f638e);
w4(R+28,u32(0x8ad4f0ull));
}
B6f6393:L6f6393:{c.instructions+=2;NFSU2_TR(0x6f6393);
u8 U[4];
w4(U+0,u32(0x8ad4b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6398:{NFSU2_TR(0x6f6398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f639dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6335u);}goto L6f6335;}
}
B6f639d:L6f639d:{c.instructions+=3;NFSU2_TR(0x6f639d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f639e:{NFSU2_TR(0x6f639e);
__builtin_memmove((R+4),(R+28),4);
}
B6f63a0:{NFSU2_TR(0x6f63a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f63a5ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f63a5:L6f63a5:{c.instructions+=1;NFSU2_TR(0x6f63a5);
w4(R+24,u32(0x8ad4c8ull));
}
B6f63aa:L6f63aa:{c.instructions+=3;NFSU2_TR(0x6f63aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f63ac:{NFSU2_TR(0x6f63ac);
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
B6f63ae:{NFSU2_TR(0x6f63ae);
if(r1(R+518)){{goto L6f63bd;}}
}
B6f63b0:L6f63b0:{c.instructions+=1;NFSU2_TR(0x6f63b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f63b2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f63b2:L6f63b2:{c.instructions+=3;NFSU2_TR(0x6f63b2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f63b5:{NFSU2_TR(0x6f63b5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ad4e8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ad4e8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f63bb:{NFSU2_TR(0x6f63bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f63aau);}goto L6f63aa;}}
}
B6f63bd:L6f63bd:{c.instructions+=2;NFSU2_TR(0x6f63bd);
__builtin_memmove((R+4),(R+28),4);
}
B6f63bf:{NFSU2_TR(0x6f63bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f63c4ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f63c4:L6f63c4:{c.instructions+=2;NFSU2_TR(0x6f63c4);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad4c4),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f63cb:{NFSU2_TR(0x6f63cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6393u);}goto L6f6393;}}
}
B6f63cd:L6f63cd:{c.instructions+=2;NFSU2_TR(0x6f63cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f63ce:{NFSU2_TR(0x6f63ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f63cf:L6f63cf:{c.instructions+=2;NFSU2_TR(0x6f63cf);
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
B6f63d1:{NFSU2_TR(0x6f63d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f63d2:L6f63d2:{c.instructions+=2;NFSU2_TR(0x6f63d2);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad4ec),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f63d9:{NFSU2_TR(0x6f63d9);
if(r1(R+518)){{goto L6f6435;}}
}
B6f63db:L6f63db:{c.instructions+=6;NFSU2_TR(0x6f63db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f63dc:{NFSU2_TR(0x6f63dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f63dd:{NFSU2_TR(0x6f63dd);
w4(R+28,u32(0x8ad4b0ull));
}
B6f63e2:{NFSU2_TR(0x6f63e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f63e3:{NFSU2_TR(0x6f63e3);
s4(0x8ad4c4,u32(0x1ull));
}
B6f63ed:{NFSU2_TR(0x6f63ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f63f2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f630cu);}goto L6f630c;}
}
B6f63f2:L6f63f2:{c.instructions+=3;NFSU2_TR(0x6f63f2);
w4(R+24,u32(0x8ad4b8ull));
}
B6f63f7:{NFSU2_TR(0x6f63f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f63f8:{NFSU2_TR(0x6f63f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f63fdull));
TAIL_STATIC(0x6f58c1u,6f5);
}
B6f63fd:L6f63fd:{c.instructions+=4;NFSU2_TR(0x6f63fd);
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
B6f63ff:{NFSU2_TR(0x6f63ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6400:{NFSU2_TR(0x6f6400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6401:{NFSU2_TR(0x6f6401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f640d;}}
}
B6f6403:L6f6403:{c.instructions+=3;NFSU2_TR(0x6f6403);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6405:{NFSU2_TR(0x6f6405);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6406:{NFSU2_TR(0x6f6406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f640bull));
TAIL_STATIC(0x6f5a04u,6f5);
}
B6f640b:L6f640b:{c.instructions+=2;NFSU2_TR(0x6f640b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f640c:{NFSU2_TR(0x6f640c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f640d:L6f640d:{c.instructions+=2;NFSU2_TR(0x6f640d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f640e:{NFSU2_TR(0x6f640e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6413ull));
TAIL_STATIC(0x6f5859u,6f5);
}
B6f6413:L6f6413:{c.instructions+=2;NFSU2_TR(0x6f6413);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6414:{NFSU2_TR(0x6f6414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6419ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6372u);}goto L6f6372;}
}
B6f6419:L6f6419:{c.instructions+=5;NFSU2_TR(0x6f6419);
s4(0x8ad4e8,u32(u32(m4(0x8ad4e8))&u32(u32(0x0ull))));
}
B6f6420:{NFSU2_TR(0x6f6420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6421:{NFSU2_TR(0x6f6421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6422:{NFSU2_TR(0x6f6422);
w4(R+4,u32(0x8ad4f0ull));
}
B6f6427:{NFSU2_TR(0x6f6427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f642cull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f642c:L6f642c:{c.instructions+=3;NFSU2_TR(0x6f642c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8ad4ec,u32(u32(m4(0x8ad4ec))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8ad4ec))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8ad4ec))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8ad4ec))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6433:{NFSU2_TR(0x6f6433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6434:{NFSU2_TR(0x6f6434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6435:L6f6435:{c.instructions+=1;NFSU2_TR(0x6f6435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6436:L6f6436:{c.instructions+=5;NFSU2_TR(0x6f6436);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6437:{NFSU2_TR(0x6f6437);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6438:{NFSU2_TR(0x6f6438);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6439:{NFSU2_TR(0x6f6439);
u8 U[4];
w4(U+0,u32(0x6f63d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f643e:{NFSU2_TR(0x6f643e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6443ull));
{goto L6f65c1;}
}
B6f6443:L6f6443:{c.instructions+=4;NFSU2_TR(0x6f6443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6444:{NFSU2_TR(0x6f6444);
w4(R+24,u32(0x8ad4f0ull));
}
B6f6449:{NFSU2_TR(0x6f6449);
__builtin_memmove((R+4),(R+24),4);
}
B6f644b:{NFSU2_TR(0x6f644b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6450ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B6f6450:L6f6450:{c.instructions+=7;NFSU2_TR(0x6f6450);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f6452:{NFSU2_TR(0x6f6452);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6453:{NFSU2_TR(0x6f6453);
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
B6f6455:{NFSU2_TR(0x6f6455);
u8 U[4];
w4(U+0,u32(0x8ad4b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f645a:{NFSU2_TR(0x6f645a);
__builtin_memmove(gp(0x8ad4ec),(R+28),4);
}
B6f6460:{NFSU2_TR(0x6f6460);
__builtin_memmove(gp(0x8ad4c4),(R+12),4);
}
B6f6466:{NFSU2_TR(0x6f6466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f646bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f62e9u);}goto L6f62e9;}
}
B6f646b:L6f646b:{c.instructions+=4;NFSU2_TR(0x6f646b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f646c:{NFSU2_TR(0x6f646c);
__builtin_memmove((R+4),(R+24),4);
}
B6f646e:{NFSU2_TR(0x6f646e);
__builtin_memmove(gp(0x8ad4e8),(R+28),4);
}
B6f6474:{NFSU2_TR(0x6f6474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6479ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f6479:L6f6479:{c.instructions+=7;NFSU2_TR(0x6f6479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f647a:{NFSU2_TR(0x6f647a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f647b:{NFSU2_TR(0x6f647b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f647c:{NFSU2_TR(0x6f647c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f647d:{NFSU2_TR(0x6f647d);
u8 U[4];
w4(U+0,u32(0x6f6383ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6482:{NFSU2_TR(0x6f6482);
u8 U[4];
w4(U+0,u32(0x8ad4b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6487:{NFSU2_TR(0x6f6487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f648cull));
TAIL_STATIC(0x6f5a40u,6f5);
}
B6f648c:L6f648c:{c.instructions+=4;NFSU2_TR(0x6f648c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f648f:{NFSU2_TR(0x6f648f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6491:{NFSU2_TR(0x6f6491);
__builtin_memmove((R+4),(R+24),4);
}
B6f6493:{NFSU2_TR(0x6f6493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f64a4;}}
}
B6f6495:L6f6495:{c.instructions+=1;NFSU2_TR(0x6f6495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f649aull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B6f649a:L6f649a:{c.instructions+=5;NFSU2_TR(0x6f649a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f649b:{NFSU2_TR(0x6f649b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f649c:{NFSU2_TR(0x6f649c);
__builtin_memmove(gp(0x8ad4ec),(R+12),4);
}
B6f64a2:{NFSU2_TR(0x6f64a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f64a3:{NFSU2_TR(0x6f64a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f64a4:L6f64a4:{c.instructions+=4;NFSU2_TR(0x6f64a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f64a5:{NFSU2_TR(0x6f64a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f64a6:{NFSU2_TR(0x6f64a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f64a7:{NFSU2_TR(0x6f64a7);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f64ac:L6f64ac:{c.instructions+=7;NFSU2_TR(0x6f64ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f64ad:{NFSU2_TR(0x6f64ad);
__builtin_memmove((R+20),(R+16),4);
}
B6f64af:{NFSU2_TR(0x6f64af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f64b0:{NFSU2_TR(0x6f64b0);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6f64b3:{NFSU2_TR(0x6f64b3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ad4ec),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f64ba:{NFSU2_TR(0x6f64ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f64bb:{NFSU2_TR(0x6f64bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f64c2;}}
}
B6f64bd:L6f64bd:{c.instructions+=1;NFSU2_TR(0x6f64bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f64c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6436u);}goto L6f6436;}
}
B6f64c2:L6f64c2:{c.instructions+=3;NFSU2_TR(0x6f64c2);
w4(R+28,u32(0x8ad4f0ull));
}
B6f64c7:{NFSU2_TR(0x6f64c7);
__builtin_memmove((R+4),(R+28),4);
}
B6f64c9:{NFSU2_TR(0x6f64c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f64ceull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f64ce:L6f64ce:{c.instructions+=2;NFSU2_TR(0x6f64ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f64d1:{NFSU2_TR(0x6f64d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f64d3:L6f64d3:{c.instructions+=3;NFSU2_TR(0x6f64d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad4c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6f64da:{NFSU2_TR(0x6f64da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f64dc:{NFSU2_TR(0x6f64dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f64e6;}}
}
B6f64de:L6f64de:{c.instructions+=2;NFSU2_TR(0x6f64de);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f64e0:{NFSU2_TR(0x6f64e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f64e6;}}
}
B6f64e2:L6f64e2:{c.instructions+=2;NFSU2_TR(0x6f64e2);
__builtin_memmove((R+24),(R+4),4);
}
B6f64e4:{NFSU2_TR(0x6f64e4);
{goto L6f64ea;}
}
B6f64e6:L6f64e6:{c.instructions+=2;NFSU2_TR(0x6f64e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f64e8:{NFSU2_TR(0x6f64e8);
if(r1(R+518)){{goto L6f6506;}}
}
B6f64ea:L6f64ea:{c.instructions+=3;NFSU2_TR(0x6f64ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f64eb:{NFSU2_TR(0x6f64eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f64ee:{NFSU2_TR(0x6f64ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f64d3u);}goto L6f64d3;}}
}
B6f64f0:L6f64f0:{c.instructions+=2;NFSU2_TR(0x6f64f0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f64f3:{NFSU2_TR(0x6f64f3);
if(r1(R+518)){{goto L6f64fc;}}
}
B6f64f5:L6f64f5:{c.instructions+=1;NFSU2_TR(0x6f64f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad4c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f64fc:L6f64fc:{c.instructions+=5;NFSU2_TR(0x6f64fc);
__builtin_memmove((R+4),(R+28),4);
}
B6f64fe:{NFSU2_TR(0x6f64fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f64ff:{NFSU2_TR(0x6f64ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6500:{NFSU2_TR(0x6f6500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6501:{NFSU2_TR(0x6f6501);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f6506:L6f6506:{c.instructions+=5;NFSU2_TR(0x6f6506);
__builtin_memmove((R+4),(R+28),4);
}
B6f6508:{NFSU2_TR(0x6f6508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6509:{NFSU2_TR(0x6f6509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f650a:{NFSU2_TR(0x6f650a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f650b:{NFSU2_TR(0x6f650b);
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f6510:L6f6510:{c.instructions+=4;NFSU2_TR(0x6f6510);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6511:{NFSU2_TR(0x6f6511);
__builtin_memmove((R+20),(R+16),4);
}
B6f6513:{NFSU2_TR(0x6f6513);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad4ec),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f651a:{NFSU2_TR(0x6f651a);
if(r1(R+518)){{goto L6f658c;}}
}
B6f651c:L6f651c:{c.instructions+=4;NFSU2_TR(0x6f651c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f651d:{NFSU2_TR(0x6f651d);
w4(R+12,u32(0x8ad4f0ull));
}
B6f6522:{NFSU2_TR(0x6f6522);
__builtin_memmove((R+4),(R+12),4);
}
B6f6524:{NFSU2_TR(0x6f6524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6529ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f6529:L6f6529:{c.instructions+=2;NFSU2_TR(0x6f6529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f652c:{NFSU2_TR(0x6f652c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f652e:L6f652e:{c.instructions+=2;NFSU2_TR(0x6f652e);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad4c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6f6535:{NFSU2_TR(0x6f6535);
if(r1(R+518)){{goto L6f653d;}}
}
B6f6537:L6f6537:{c.instructions+=3;NFSU2_TR(0x6f6537);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6538:{NFSU2_TR(0x6f6538);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f653b:{NFSU2_TR(0x6f653b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f652eu);}goto L6f652e;}}
}
B6f653d:L6f653d:{c.instructions+=2;NFSU2_TR(0x6f653d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f6540:{NFSU2_TR(0x6f6540);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f656a;}}
}
B6f6542:L6f6542:{c.instructions+=4;NFSU2_TR(0x6f6542);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6543:{NFSU2_TR(0x6f6543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad4c8ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6f654a:{NFSU2_TR(0x6f654a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f654c:{NFSU2_TR(0x6f654c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6569;}}
}
B6f654e:L6f654e:{c.instructions+=4;NFSU2_TR(0x6f654e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6550:{NFSU2_TR(0x6f6550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6551:{NFSU2_TR(0x6f6551);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f6553:{NFSU2_TR(0x6f6553);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f6562;}}
}
B6f6555:L6f6555:{c.instructions+=3;NFSU2_TR(0x6f6555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6556:{NFSU2_TR(0x6f6556);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad4ccull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f655d:{NFSU2_TR(0x6f655d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6f655f:L6f655f:{c.instructions+=1;NFSU2_TR(0x6f655f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f6561;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f655fu);}goto L6f655f;}
}
B6f6561:L6f6561:{c.instructions+=1;NFSU2_TR(0x6f6561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6562:L6f6562:{c.instructions+=1;NFSU2_TR(0x6f6562);
s4(0x8ad4e4,u32(u32(m4(0x8ad4e4))&u32(u32(0x0ull))));
}
B6f6569:L6f6569:{c.instructions+=1;NFSU2_TR(0x6f6569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f656a:L6f656a:{c.instructions+=2;NFSU2_TR(0x6f656a);
__builtin_memmove((R+4),(R+12),4);
}
B6f656c:{NFSU2_TR(0x6f656c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6571ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f6571:L6f6571:{c.instructions+=2;NFSU2_TR(0x6f6571);
w4(R+0,u32(0x8ad4c8ull));
}
B6f6576:{NFSU2_TR(0x6f6576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f6577:L6f6577:{c.instructions+=2;NFSU2_TR(0x6f6577);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f657a:{NFSU2_TR(0x6f657a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f658c;}}
}
B6f657c:L6f657c:{c.instructions+=3;NFSU2_TR(0x6f657c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f657f:{NFSU2_TR(0x6f657f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8ad4e8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8ad4e8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f6584:{NFSU2_TR(0x6f6584);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6577u);}goto L6f6577;}}
}
B6f6586:L6f6586:{c.instructions+=2;NFSU2_TR(0x6f6586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6587:{NFSU2_TR(0x6f6587);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f63d2u);}goto L6f63d2;}
}
B6f658c:L6f658c:{c.instructions+=2;NFSU2_TR(0x6f658c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f658d:{NFSU2_TR(0x6f658d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f658e:L6f658e:{c.instructions+=2;NFSU2_TR(0x6f658e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad4e8),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6595:{NFSU2_TR(0x6f6595);
if(r1(R+518)){{goto L6f65a2;}}
}
B6f6597:L6f6597:{c.instructions+=2;NFSU2_TR(0x6f6597);
u8 U[4];
w4(U+0,u32(0x8ad4b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f659c:{NFSU2_TR(0x6f659c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f65a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f630cu);}goto L6f630c;}
}
B6f65a1:L6f65a1:{c.instructions+=1;NFSU2_TR(0x6f65a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f65a2:L6f65a2:{c.instructions+=1;NFSU2_TR(0x6f65a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f65c1:L6f65c1:{c.instructions+=4;NFSU2_TR(0x6f65c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f65c2:{NFSU2_TR(0x6f65c2);
__builtin_memmove((R+20),(R+16),4);
}
B6f65c4:{NFSU2_TR(0x6f65c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f65c7:{NFSU2_TR(0x6f65c7);
w4(R+0,u32(0x8ad510ull));
}
B6f65cc:L6f65cc:{c.instructions+=2;NFSU2_TR(0x6f65cc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6f65ce:{NFSU2_TR(0x6f65ce);
if(r1(R+518)){{goto L6f65f5;}}
}
B6f65d0:L6f65d0:{c.instructions+=3;NFSU2_TR(0x6f65d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6f65d3:{NFSU2_TR(0x6f65d3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8ad610ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8ad610ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f65d8:{NFSU2_TR(0x6f65d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f65ccu);}goto L6f65cc;}}
}
B6f65da:L6f65da:{c.instructions+=1;NFSU2_TR(0x6f65da);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f65dc:L6f65dc:{c.instructions+=2;NFSU2_TR(0x6f65dc);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad510ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6f65e4:{NFSU2_TR(0x6f65e4);
if(r1(R+518)){{goto L6f65ee;}}
}
B6f65e6:L6f65e6:{c.instructions+=3;NFSU2_TR(0x6f65e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f65e7:{NFSU2_TR(0x6f65e7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f65ea:{NFSU2_TR(0x6f65ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f65dcu);}goto L6f65dc;}}
}
B6f65ec:L6f65ec:{c.instructions+=2;NFSU2_TR(0x6f65ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f65ed:{NFSU2_TR(0x6f65ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f65ee:L6f65ee:{c.instructions+=1;NFSU2_TR(0x6f65ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad510ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f65f5:L6f65f5:{c.instructions+=2;NFSU2_TR(0x6f65f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f65f6:{NFSU2_TR(0x6f65f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f65f7:L6f65f7:{c.instructions+=3;NFSU2_TR(0x6f65f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f65f8:{NFSU2_TR(0x6f65f8);
__builtin_memmove((R+20),(R+16),4);
}
B6f65fa:{NFSU2_TR(0x6f65fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f65fc:L6f65fc:{c.instructions+=3;NFSU2_TR(0x6f65fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad510ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6f6603:{NFSU2_TR(0x6f6603);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6606:{NFSU2_TR(0x6f6606);
if(r1(R+518)){{goto L6f6610;}}
}
B6f6608:L6f6608:{c.instructions+=3;NFSU2_TR(0x6f6608);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6609:{NFSU2_TR(0x6f6609);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f660c:{NFSU2_TR(0x6f660c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f65fcu);}goto L6f65fc;}}
}
B6f660e:L6f660e:{c.instructions+=2;NFSU2_TR(0x6f660e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f660f:{NFSU2_TR(0x6f660f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6610:L6f6610:{c.instructions+=3;NFSU2_TR(0x6f6610);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ad510ull))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6f6618:{NFSU2_TR(0x6f6618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6619:{NFSU2_TR(0x6f6619);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6628:L6f6628:{c.instructions+=10;NFSU2_TR(0x6f6628);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6629:{NFSU2_TR(0x6f6629);
__builtin_memmove((R+20),(R+16),4);
}
B6f662b:{NFSU2_TR(0x6f662b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f662e:{NFSU2_TR(0x6f662e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6631:{NFSU2_TR(0x6f6631);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f6634:{NFSU2_TR(0x6f6634);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6f6636:{NFSU2_TR(0x6f6636);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f6639:{NFSU2_TR(0x6f6639);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x58ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f663c:{NFSU2_TR(0x6f663c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f663d:{NFSU2_TR(0x6f663d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f663e:L6f663e:{c.instructions+=1;NFSU2_TR(0x6f663e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f663f:L6f663f:{c.instructions+=15;NFSU2_TR(0x6f663f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6640:{NFSU2_TR(0x6f6640);
__builtin_memmove((R+20),(R+16),4);
}
B6f6642:{NFSU2_TR(0x6f6642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6643:{NFSU2_TR(0x6f6643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6646:{NFSU2_TR(0x6f6646);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f6649:{NFSU2_TR(0x6f6649);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f664c:{NFSU2_TR(0x6f664c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f664d:{NFSU2_TR(0x6f664d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6650:{NFSU2_TR(0x6f6650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6f6653:{NFSU2_TR(0x6f6653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6656:{NFSU2_TR(0x6f6656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f6659:{NFSU2_TR(0x6f6659);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f665f:{NFSU2_TR(0x6f665f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))+u32(r4(U+4))));
w4(R+8,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6f6662:{NFSU2_TR(0x6f6662);
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
B6f6664:{NFSU2_TR(0x6f6664);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6670;}}
}
B6f6666:L6f6666:{c.instructions+=3;NFSU2_TR(0x6f6666);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f666c:{NFSU2_TR(0x6f666c);
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
B6f666e:{NFSU2_TR(0x6f666e);
if(r1(R+518)){{goto L6f6693;}}
}
B6f6670:L6f6670:{c.instructions+=9;NFSU2_TR(0x6f6670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6673:{NFSU2_TR(0x6f6673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f6675:{NFSU2_TR(0x6f6675);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6677:{NFSU2_TR(0x6f6677);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6679:{NFSU2_TR(0x6f6679);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f667c:{NFSU2_TR(0x6f667c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f667d:{NFSU2_TR(0x6f667d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f667e:{NFSU2_TR(0x6f667e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6681:{NFSU2_TR(0x6f6681);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6684ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f6684:L6f6684:{c.instructions+=3;NFSU2_TR(0x6f6684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6687:{NFSU2_TR(0x6f6687);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f668d:{NFSU2_TR(0x6f668d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6693:L6f6693:{c.instructions+=6;NFSU2_TR(0x6f6693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6696:{NFSU2_TR(0x6f6696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f6699:{NFSU2_TR(0x6f6699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f669a:{NFSU2_TR(0x6f669a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f669b:{NFSU2_TR(0x6f669b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f669c:{NFSU2_TR(0x6f669c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f669f:L6f669f:{c.instructions+=19;NFSU2_TR(0x6f669f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66a0:{NFSU2_TR(0x6f66a0);
__builtin_memmove((R+20),(R+16),4);
}
B6f66a2:{NFSU2_TR(0x6f66a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66a3:{NFSU2_TR(0x6f66a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66a4:{NFSU2_TR(0x6f66a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f66a7:{NFSU2_TR(0x6f66a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f66aa:{NFSU2_TR(0x6f66aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f66ad:{NFSU2_TR(0x6f66ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66ae:{NFSU2_TR(0x6f66ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f66b1:{NFSU2_TR(0x6f66b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f66b4:{NFSU2_TR(0x6f66b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6f66ba:{NFSU2_TR(0x6f66ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f66bd:{NFSU2_TR(0x6f66bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+4))));
w4(R+0,u32(u32(r4(U+12))-u32(r4(U+8))));
}
B6f66c3:{NFSU2_TR(0x6f66c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6f66c6:{NFSU2_TR(0x6f66c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f66c9:{NFSU2_TR(0x6f66c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+0))+u32(r4(U+4))));
w4(R+0,u32(u32(r4(U+12))+u32(r4(U+8))));
}
B6f66cc:{NFSU2_TR(0x6f66cc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f66ce:{NFSU2_TR(0x6f66ce);
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
B6f66d0:{NFSU2_TR(0x6f66d0);
if(r1(R+512)){{goto L6f66e4;}}
}
B6f66d2:L6f66d2:{c.instructions+=1;NFSU2_TR(0x6f66d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f66d8;}}
}
B6f66d4:L6f66d4:{c.instructions+=2;NFSU2_TR(0x6f66d4);
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
B6f66d6:{NFSU2_TR(0x6f66d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f66e4;}}
}
B6f66d8:L6f66d8:{c.instructions+=3;NFSU2_TR(0x6f66d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f66db:{NFSU2_TR(0x6f66db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B6f66e1:{NFSU2_TR(0x6f66e1);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f66e4:L6f66e4:{c.instructions+=8;NFSU2_TR(0x6f66e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f66e7:{NFSU2_TR(0x6f66e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f66e9:{NFSU2_TR(0x6f66e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66eb:{NFSU2_TR(0x6f66eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66ed:{NFSU2_TR(0x6f66ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f66ee:{NFSU2_TR(0x6f66ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f66f1:{NFSU2_TR(0x6f66f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f66f4:{NFSU2_TR(0x6f66f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f66f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f66f7:L6f66f7:{c.instructions+=12;NFSU2_TR(0x6f66f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f66fa:{NFSU2_TR(0x6f66fa);
__builtin_memmove((R+28),(R+0),4);
}
B6f66fc:{NFSU2_TR(0x6f66fc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f66fd:{NFSU2_TR(0x6f66fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6703:{NFSU2_TR(0x6f6703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B6f6705:{NFSU2_TR(0x6f6705);
__builtin_memmove((R+0),(R+28),4);
}
B6f6707:{NFSU2_TR(0x6f6707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6708:{NFSU2_TR(0x6f6708);
u8 U[24];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(U+4))+u32(r4(R+8))));
w1(U+16,carry<u32>(r4(U+12),r4(U+8)));
w1(R+512,u8((r1(R+512))||(r1(U+16))));
w1(U+17,scarry<u32>(r4(U+12),r4(U+8)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+17))!=0)));
w4(U+4,u32(u32(r4(U+12))+u32(r4(U+8))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+18,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+23))==(u8(0x0ull))));
}
B6f670b:{NFSU2_TR(0x6f670b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f670c:{NFSU2_TR(0x6f670c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f670d:{NFSU2_TR(0x6f670d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f670e:{NFSU2_TR(0x6f670e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6711:L6f6711:{c.instructions+=9;NFSU2_TR(0x6f6711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6712:{NFSU2_TR(0x6f6712);
__builtin_memmove((R+20),(R+16),4);
}
B6f6714:{NFSU2_TR(0x6f6714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f6717:{NFSU2_TR(0x6f6717);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f671a:{NFSU2_TR(0x6f671a);
u8 U[45];
w4(U+37,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6f671d:{NFSU2_TR(0x6f671d);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6f6721:{NFSU2_TR(0x6f6721);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6f6725:{NFSU2_TR(0x6f6725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6726:{NFSU2_TR(0x6f6726);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6729:L6f6729:{c.instructions+=14;NFSU2_TR(0x6f6729);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f672a:{NFSU2_TR(0x6f672a);
__builtin_memmove((R+20),(R+16),4);
}
B6f672c:{NFSU2_TR(0x6f672c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f672d:{NFSU2_TR(0x6f672d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6730:{NFSU2_TR(0x6f6730);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f6733:{NFSU2_TR(0x6f6733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f6736:{NFSU2_TR(0x6f6736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6739:{NFSU2_TR(0x6f6739);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f673f:{NFSU2_TR(0x6f673f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6f6742:{NFSU2_TR(0x6f6742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f6748:{NFSU2_TR(0x6f6748);
u8 U[24];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+8,u32(r1(R+512)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+12,u32(u32(r4(R+8))+u32(r4(U+4))));
w1(U+16,carry<u32>(r4(U+12),r4(U+8)));
w1(R+512,u8((r1(R+512))||(r1(U+16))));
w1(U+17,scarry<u32>(r4(U+12),r4(U+8)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+17))!=0)));
w4(R+8,u32(u32(r4(U+12))+u32(r4(U+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+18,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+22,u8(__builtin_popcountll(u64(r4(U+18)))));
w1(U+23,u8(u32(r1(U+22))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+23))==(u8(0x0ull))));
}
B6f674b:{NFSU2_TR(0x6f674b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f674c:{NFSU2_TR(0x6f674c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f674d:{NFSU2_TR(0x6f674d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6750:L6f6750:{c.instructions+=8;NFSU2_TR(0x6f6750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6751:{NFSU2_TR(0x6f6751);
__builtin_memmove((R+20),(R+16),4);
}
B6f6753:{NFSU2_TR(0x6f6753);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6756:{NFSU2_TR(0x6f6756);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6758:{NFSU2_TR(0x6f6758);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6759:{NFSU2_TR(0x6f6759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f675a:{NFSU2_TR(0x6f675a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f675b:{NFSU2_TR(0x6f675b);
if(r1(R+518)){{goto L6f6766;}}
}
B6f675d:L6f675d:{c.instructions+=1;NFSU2_TR(0x6f675d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6762ull));
{goto L6f6b76;}
}
B6f6762:L6f6762:{c.instructions+=2;NFSU2_TR(0x6f6762);
__builtin_memmove((R+24),(R+0),4);
}
B6f6764:{NFSU2_TR(0x6f6764);
{goto L6f6768;}
}
B6f6766:L6f6766:{c.instructions+=1;NFSU2_TR(0x6f6766);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f6768:L6f6768:{c.instructions+=13;NFSU2_TR(0x6f6768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f676b:{NFSU2_TR(0x6f676b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5bull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f676e:{NFSU2_TR(0x6f676e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff8ull))));
}
B6f6771:{NFSU2_TR(0x6f6771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f6774:{NFSU2_TR(0x6f6774);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f6777:{NFSU2_TR(0x6f6777);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6f6779:{NFSU2_TR(0x6f6779);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f677b:{NFSU2_TR(0x6f677b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f677e:{NFSU2_TR(0x6f677e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6781:{NFSU2_TR(0x6f6781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6784:{NFSU2_TR(0x6f6784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6787:{NFSU2_TR(0x6f6787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f678a:{NFSU2_TR(0x6f678a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f67af;}}
}
B6f678c:L6f678c:{c.instructions+=3;NFSU2_TR(0x6f678c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f678f:{NFSU2_TR(0x6f678f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f6791:{NFSU2_TR(0x6f6791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6794:L6f6794:{c.instructions+=5;NFSU2_TR(0x6f6794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6797:{NFSU2_TR(0x6f6797);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6f6799:{NFSU2_TR(0x6f6799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f679a:{NFSU2_TR(0x6f679a);
__builtin_memmove((R+4),(R+28),4);
}
B6f679c:{NFSU2_TR(0x6f679c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f67a1ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f67a1:L6f67a1:{c.instructions+=3;NFSU2_TR(0x6f67a1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x120ull))));
}
B6f67a7:{NFSU2_TR(0x6f67a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f67aa:{NFSU2_TR(0x6f67aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6794u);}goto L6f6794;}}
}
B6f67ac:L6f67ac:{c.instructions+=1;NFSU2_TR(0x6f67ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f67af:L6f67af:{c.instructions+=2;NFSU2_TR(0x6f67af);
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
B6f67b1:{NFSU2_TR(0x6f67b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f67d0;}}
}
B6f67b3:L6f67b3:{c.instructions+=3;NFSU2_TR(0x6f67b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f67b6:{NFSU2_TR(0x6f67b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f67b8:{NFSU2_TR(0x6f67b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f67bb:L6f67bb:{c.instructions+=5;NFSU2_TR(0x6f67bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f67be:{NFSU2_TR(0x6f67be);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6f67c0:{NFSU2_TR(0x6f67c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67c1:{NFSU2_TR(0x6f67c1);
__builtin_memmove((R+4),(R+28),4);
}
B6f67c3:{NFSU2_TR(0x6f67c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f67c8ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f67c8:L6f67c8:{c.instructions+=3;NFSU2_TR(0x6f67c8);
w1(R+512,carry<u32>(r4(R+12),u32(0x20ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6f67cb:{NFSU2_TR(0x6f67cb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B6f67ce:{NFSU2_TR(0x6f67ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f67bbu);}goto L6f67bb;}}
}
B6f67d0:L6f67d0:{c.instructions+=6;NFSU2_TR(0x6f67d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f67d1:{NFSU2_TR(0x6f67d1);
__builtin_memmove((R+0),(R+24),4);
}
B6f67d3:{NFSU2_TR(0x6f67d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f67d4:{NFSU2_TR(0x6f67d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f67d5:{NFSU2_TR(0x6f67d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f67d6:{NFSU2_TR(0x6f67d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f67d7:L6f67d7:{c.instructions+=16;NFSU2_TR(0x6f67d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67d8:{NFSU2_TR(0x6f67d8);
__builtin_memmove((R+12),(R+16),4);
}
B6f67da:{NFSU2_TR(0x6f67da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67db:{NFSU2_TR(0x6f67db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67dc:{NFSU2_TR(0x6f67dc);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xffffffc0ull))));
}
B6f67df:{NFSU2_TR(0x6f67df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f67e2:{NFSU2_TR(0x6f67e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67e3:{NFSU2_TR(0x6f67e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f67e6:{NFSU2_TR(0x6f67e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f67ea:{NFSU2_TR(0x6f67ea);
__builtin_memmove((R+20),(R+16),4);
}
B6f67ec:{NFSU2_TR(0x6f67ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1f8ull))));
}
B6f67f2:{NFSU2_TR(0x6f67f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67f3:{NFSU2_TR(0x6f67f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f67f6:{NFSU2_TR(0x6f67f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f67f7:{NFSU2_TR(0x6f67f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B6f67fa:{NFSU2_TR(0x6f67fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f67ffull));
{goto L6f6b56;}
}
B6f67ff:L6f67ff:{c.instructions+=3;NFSU2_TR(0x6f67ff);
__builtin_memmove((R+24),(R+0),4);
}
B6f6801:{NFSU2_TR(0x6f6801);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6803:{NFSU2_TR(0x6f6803);
if(r1(R+518)){{goto L6f6846;}}
}
B6f6805:L6f6805:{c.instructions+=4;NFSU2_TR(0x6f6805);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6807:{NFSU2_TR(0x6f6807);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6809:{NFSU2_TR(0x6f6809);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f680c:{NFSU2_TR(0x6f680c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6811ull));
TAIL_STATIC(0x6f8710u,6f8);
}
B6f6811:L6f6811:{c.instructions+=4;NFSU2_TR(0x6f6811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f6814:{NFSU2_TR(0x6f6814);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6816:{NFSU2_TR(0x6f6816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6819:{NFSU2_TR(0x6f6819);
if(r1(R+518)){{goto L6f6846;}}
}
B6f681b:L6f681b:{c.instructions+=9;NFSU2_TR(0x6f681b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f681d:{NFSU2_TR(0x6f681d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f681f:{NFSU2_TR(0x6f681f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6820:{NFSU2_TR(0x6f6820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6821:{NFSU2_TR(0x6f6821);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6827:{NFSU2_TR(0x6f6827);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6828:{NFSU2_TR(0x6f6828);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f682a:{NFSU2_TR(0x6f682a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f682b:{NFSU2_TR(0x6f682b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6830ull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f6830:L6f6830:{c.instructions+=3;NFSU2_TR(0x6f6830);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6836:{NFSU2_TR(0x6f6836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6837:{NFSU2_TR(0x6f6837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f683cull));
TAIL_STATIC(0x6fa93bu,6fa);
}
B6f683c:L6f683c:{c.instructions+=4;NFSU2_TR(0x6f683c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6f683f:{NFSU2_TR(0x6f683f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6841:{NFSU2_TR(0x6f6841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6844:{NFSU2_TR(0x6f6844);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f684e;}}
}
B6f6846:L6f6846:{c.instructions+=2;NFSU2_TR(0x6f6846);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6849:{NFSU2_TR(0x6f6849);
{goto L6f6951;}
}
B6f684e:L6f684e:{c.instructions+=5;NFSU2_TR(0x6f684e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6851:{NFSU2_TR(0x6f6851);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6857:{NFSU2_TR(0x6f6857);
u8 U[4];
w4(U+0,u32(0x7c2eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f685c:{NFSU2_TR(0x6f685c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f685d:{NFSU2_TR(0x6f685d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6862ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f6862:L6f6862:{c.instructions+=31;NFSU2_TR(0x6f6862);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6865:{NFSU2_TR(0x6f6865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6869:{NFSU2_TR(0x6f6869);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f686b:{NFSU2_TR(0x6f686b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f686c:{NFSU2_TR(0x6f686c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f686f:{NFSU2_TR(0x6f686f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6872:{NFSU2_TR(0x6f6872);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6875:{NFSU2_TR(0x6f6875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6878:{NFSU2_TR(0x6f6878);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f687b:{NFSU2_TR(0x6f687b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f687e:{NFSU2_TR(0x6f687e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f6881:{NFSU2_TR(0x6f6881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f6884:{NFSU2_TR(0x6f6884);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6887:{NFSU2_TR(0x6f6887);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f688a:{NFSU2_TR(0x6f688a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f688d:{NFSU2_TR(0x6f688d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f6890:{NFSU2_TR(0x6f6890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6893:{NFSU2_TR(0x6f6893);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f6899:{NFSU2_TR(0x6f6899);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f689c:{NFSU2_TR(0x6f689c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f689d:{NFSU2_TR(0x6f689d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f68a0:{NFSU2_TR(0x6f68a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68a7:{NFSU2_TR(0x6f68a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x129ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68ae:{NFSU2_TR(0x6f68ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68b5:{NFSU2_TR(0x6f68b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7c2e74ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68bc:{NFSU2_TR(0x6f68bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x7c2e68ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68c3:{NFSU2_TR(0x6f68c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f68ca:{NFSU2_TR(0x6f68ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f68cd:{NFSU2_TR(0x6f68cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f68d0:{NFSU2_TR(0x6f68d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f68d2:{NFSU2_TR(0x6f68d2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f68d4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f68d4:L6f68d4:{c.instructions+=6;NFSU2_TR(0x6f68d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68d5:{NFSU2_TR(0x6f68d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f68db:{NFSU2_TR(0x6f68db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68dc:{NFSU2_TR(0x6f68dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68dd:{NFSU2_TR(0x6f68dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f68e0:{NFSU2_TR(0x6f68e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f68e5ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f68e5:L6f68e5:{c.instructions+=10;NFSU2_TR(0x6f68e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f68e8:{NFSU2_TR(0x6f68e8);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68ea:{NFSU2_TR(0x6f68ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
}
B6f68ed:{NFSU2_TR(0x6f68ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68ee:{NFSU2_TR(0x6f68ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f68f1:{NFSU2_TR(0x6f68f1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6f68f3:{NFSU2_TR(0x6f68f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68f4:{NFSU2_TR(0x6f68f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f68f5:{NFSU2_TR(0x6f68f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f68f8:{NFSU2_TR(0x6f68f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f68fdull));
TAIL_STATIC(0x6f8738u,6f8);
}
B6f68fd:L6f68fd:{c.instructions+=4;NFSU2_TR(0x6f68fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6900:{NFSU2_TR(0x6f6900);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6903:{NFSU2_TR(0x6f6903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6f6906:{NFSU2_TR(0x6f6906);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6f6908:L6f6908:{c.instructions+=5;NFSU2_TR(0x6f6908);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f690a:{NFSU2_TR(0x6f690a);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f690d:{NFSU2_TR(0x6f690d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f690e:{NFSU2_TR(0x6f690e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6910:{NFSU2_TR(0x6f6910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6908u);}goto L6f6908;}}
}
B6f6912:L6f6912:{c.instructions+=9;NFSU2_TR(0x6f6912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6915:{NFSU2_TR(0x6f6915);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
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
B6f691c:{NFSU2_TR(0x6f691c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6922:{NFSU2_TR(0x6f6922);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6925:{NFSU2_TR(0x6f6925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6926:{NFSU2_TR(0x6f6926);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f692c:{NFSU2_TR(0x6f692c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f692d:{NFSU2_TR(0x6f692d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6930:{NFSU2_TR(0x6f6930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6935ull));
{goto L6f6d81;}
}
B6f6935:L6f6935:{c.instructions+=5;NFSU2_TR(0x6f6935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6938:{NFSU2_TR(0x6f6938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f693b:{NFSU2_TR(0x6f693b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f693c:{NFSU2_TR(0x6f693c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f693f:{NFSU2_TR(0x6f693f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6944ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f6944:L6f6944:{c.instructions+=5;NFSU2_TR(0x6f6944);
__builtin_memmove((R+0),(R+24),4);
}
B6f6946:{NFSU2_TR(0x6f6946);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f6949:{NFSU2_TR(0x6f6949);
w4(R+4,u32(0x120ull));
}
B6f694e:{NFSU2_TR(0x6f694e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f694f:{NFSU2_TR(0x6f694f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f694f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f694f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f6951:L6f6951:{c.instructions+=7;NFSU2_TR(0x6f6951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6952:{NFSU2_TR(0x6f6952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6953:{NFSU2_TR(0x6f6953);
__builtin_memmove((R+16),(R+20),4);
}
B6f6955:{NFSU2_TR(0x6f6955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6956:{NFSU2_TR(0x6f6956);
__builtin_memmove((R+16),(R+12),4);
}
B6f6958:{NFSU2_TR(0x6f6958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f6959:{NFSU2_TR(0x6f6959);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f695c:L6f695c:{c.instructions+=14;NFSU2_TR(0x6f695c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f695d:{NFSU2_TR(0x6f695d);
__builtin_memmove((R+20),(R+16),4);
}
B6f695f:{NFSU2_TR(0x6f695f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6960:{NFSU2_TR(0x6f6960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6963:{NFSU2_TR(0x6f6963);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6964:{NFSU2_TR(0x6f6964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f6967:{NFSU2_TR(0x6f6967);
__builtin_memmove((R+28),(R+4),4);
}
B6f6969:{NFSU2_TR(0x6f6969);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f696f:{NFSU2_TR(0x6f696f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f6971:{NFSU2_TR(0x6f6971);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f6974:{NFSU2_TR(0x6f6974);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f6977:{NFSU2_TR(0x6f6977);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6979:{NFSU2_TR(0x6f6979);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f697c:{NFSU2_TR(0x6f697c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f697full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f697f:L6f697f:{c.instructions+=3;NFSU2_TR(0x6f697f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6981:{NFSU2_TR(0x6f6981);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6984:{NFSU2_TR(0x6f6984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6989ull));
TAIL_STATIC(0x6f879au,6f8);
}
B6f6989:L6f6989:{c.instructions+=6;NFSU2_TR(0x6f6989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f698a:{NFSU2_TR(0x6f698a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f698b:{NFSU2_TR(0x6f698b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f698d:{NFSU2_TR(0x6f698d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f698e:{NFSU2_TR(0x6f698e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6991:{NFSU2_TR(0x6f6991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6996ull));
TAIL_STATIC(0x6f807cu,6f8);
}
B6f6996:L6f6996:{c.instructions+=3;NFSU2_TR(0x6f6996);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f699b:{NFSU2_TR(0x6f699b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f699c:{NFSU2_TR(0x6f699c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f69a1ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f69a1:L6f69a1:{c.instructions+=5;NFSU2_TR(0x6f69a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69a2:{NFSU2_TR(0x6f69a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69a3:{NFSU2_TR(0x6f69a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69a4:{NFSU2_TR(0x6f69a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69a7:{NFSU2_TR(0x6f69a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f69acull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f69ac:L6f69ac:{c.instructions+=4;NFSU2_TR(0x6f69ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f69ad:{NFSU2_TR(0x6f69ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f69ae:{NFSU2_TR(0x6f69ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f69af:{NFSU2_TR(0x6f69af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f69b2:L6f69b2:{c.instructions+=12;NFSU2_TR(0x6f69b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69b3:{NFSU2_TR(0x6f69b3);
__builtin_memmove((R+20),(R+16),4);
}
B6f69b5:{NFSU2_TR(0x6f69b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69b6:{NFSU2_TR(0x6f69b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f69b9:{NFSU2_TR(0x6f69b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69ba:{NFSU2_TR(0x6f69ba);
__builtin_memmove((R+28),(R+4),4);
}
B6f69bc:{NFSU2_TR(0x6f69bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f69bf:{NFSU2_TR(0x6f69bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6f69c2:{NFSU2_TR(0x6f69c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69c4:{NFSU2_TR(0x6f69c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69c5:{NFSU2_TR(0x6f69c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69c8:{NFSU2_TR(0x6f69c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f69cdull));
TAIL_STATIC(0x6f807cu,6f8);
}
B6f69cd:L6f69cd:{c.instructions+=3;NFSU2_TR(0x6f69cd);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69cf:{NFSU2_TR(0x6f69cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69d0:{NFSU2_TR(0x6f69d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f69d5ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f69d5:L6f69d5:{c.instructions+=5;NFSU2_TR(0x6f69d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69d6:{NFSU2_TR(0x6f69d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69d7:{NFSU2_TR(0x6f69d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69d8:{NFSU2_TR(0x6f69d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f69db:{NFSU2_TR(0x6f69db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f69e0ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f69e0:L6f69e0:{c.instructions+=4;NFSU2_TR(0x6f69e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f69e1:{NFSU2_TR(0x6f69e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f69e2:{NFSU2_TR(0x6f69e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f69e3:{NFSU2_TR(0x6f69e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f69e6:L6f69e6:{c.instructions+=15;NFSU2_TR(0x6f69e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69e7:{NFSU2_TR(0x6f69e7);
__builtin_memmove((R+20),(R+16),4);
}
B6f69e9:{NFSU2_TR(0x6f69e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x118ull))));
}
B6f69ef:{NFSU2_TR(0x6f69ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69f0:{NFSU2_TR(0x6f69f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69f1:{NFSU2_TR(0x6f69f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f69f4:{NFSU2_TR(0x6f69f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69f5:{NFSU2_TR(0x6f69f5);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69f7:{NFSU2_TR(0x6f69f7);
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
B6f69f9:{NFSU2_TR(0x6f69f9);
u8 U[4];
w4(U+0,u32(0x7c2e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69fe:{NFSU2_TR(0x6f69fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f69ff:{NFSU2_TR(0x6f69ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a02:{NFSU2_TR(0x6f6a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a05:{NFSU2_TR(0x6f6a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a08:{NFSU2_TR(0x6f6a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6a0dull));
TAIL_STATIC(0x75f1d0u,75f);
}
B6f6a0d:L6f6a0d:{c.instructions+=3;NFSU2_TR(0x6f6a0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f6a10:{NFSU2_TR(0x6f6a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6a12:{NFSU2_TR(0x6f6a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6a17;}}
}
B6f6a14:L6f6a14:{c.instructions+=1;NFSU2_TR(0x6f6a14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B6f6a17:L6f6a17:{c.instructions+=3;NFSU2_TR(0x6f6a17);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6f6a19:{NFSU2_TR(0x6f6a19);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6a1b:{NFSU2_TR(0x6f6a1b);
if(r1(R+518)){{goto L6f6a21;}}
}
B6f6a1d:L6f6a1d:{c.instructions+=2;NFSU2_TR(0x6f6a1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6a1f:{NFSU2_TR(0x6f6a1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6a22;}}
}
B6f6a21:L6f6a21:{c.instructions+=1;NFSU2_TR(0x6f6a21);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6a22:L6f6a22:{c.instructions+=3;NFSU2_TR(0x6f6a22);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6a24:{NFSU2_TR(0x6f6a24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6a25:{NFSU2_TR(0x6f6a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6a2aull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f6a2a:L6f6a2a:{c.instructions+=6;NFSU2_TR(0x6f6a2a);
__builtin_memmove((R+28),(R+0),4);
}
B6f6a2c:{NFSU2_TR(0x6f6a2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6a2e:{NFSU2_TR(0x6f6a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6a2f:{NFSU2_TR(0x6f6a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6a30:{NFSU2_TR(0x6f6a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a33:{NFSU2_TR(0x6f6a33);
if(r1(R+518)){{goto L6f6a5c;}}
}
B6f6a35:L6f6a35:{c.instructions+=6;NFSU2_TR(0x6f6a35);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f6a37:{NFSU2_TR(0x6f6a37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6a38:{NFSU2_TR(0x6f6a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6a3e:{NFSU2_TR(0x6f6a3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6a3f:{NFSU2_TR(0x6f6a3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6a40:{NFSU2_TR(0x6f6a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6a45ull));
TAIL_STATIC(0x75c840u,75c);
}
B6f6a45:L6f6a45:{c.instructions+=8;NFSU2_TR(0x6f6a45);
__builtin_memmove((R+0),(R+28),4);
}
B6f6a47:{NFSU2_TR(0x6f6a47);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f6a49:{NFSU2_TR(0x6f6a49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f6a4c:{NFSU2_TR(0x6f6a4c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6a4d:{NFSU2_TR(0x6f6a4d);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffee8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6f6a54:{NFSU2_TR(0x6f6a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a57:{NFSU2_TR(0x6f6a57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f6a5a:{NFSU2_TR(0x6f6a5a);
{goto L6f6a66;}
}
B6f6a5c:L6f6a5c:{c.instructions+=2;NFSU2_TR(0x6f6a5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f6a62:{NFSU2_TR(0x6f6a62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f6a66:L6f6a66:{c.instructions+=5;NFSU2_TR(0x6f6a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6a69:{NFSU2_TR(0x6f6a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6a6c:{NFSU2_TR(0x6f6a6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6a6e:{NFSU2_TR(0x6f6a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6a71:{NFSU2_TR(0x6f6a71);
if(r1(R+518)){{goto L6f6b2b;}}
}
B6f6a77:L6f6a77:{c.instructions+=2;NFSU2_TR(0x6f6a77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6a7a:{NFSU2_TR(0x6f6a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6aec;}}
}
B6f6a7c:L6f6a7c:{c.instructions+=2;NFSU2_TR(0x6f6a7c);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6a7f:{NFSU2_TR(0x6f6a7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6ab8;}}
}
B6f6a81:L6f6a81:{c.instructions+=2;NFSU2_TR(0x6f6a81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6a87:{NFSU2_TR(0x6f6a87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6a8a:L6f6a8a:{c.instructions+=4;NFSU2_TR(0x6f6a8a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f6a8c:{NFSU2_TR(0x6f6a8c);
__builtin_memmove((R+4),(R+8),1);
}
B6f6a8e:{NFSU2_TR(0x6f6a8e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6a90:{NFSU2_TR(0x6f6a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6aac;}}
}
B6f6a92:L6f6a92:{c.instructions+=2;NFSU2_TR(0x6f6a92);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f6a94:{NFSU2_TR(0x6f6a94);
if(r1(R+518)){{goto L6f6aa8;}}
}
B6f6a96:L6f6a96:{c.instructions+=4;NFSU2_TR(0x6f6a96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6f6a99:{NFSU2_TR(0x6f6a99);
__builtin_memmove((R+4),(R+8),1);
}
B6f6a9b:{NFSU2_TR(0x6f6a9b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6a9e:{NFSU2_TR(0x6f6a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6aac;}}
}
B6f6aa0:L6f6aa0:{c.instructions+=6;NFSU2_TR(0x6f6aa0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6aa1:{NFSU2_TR(0x6f6aa1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6aa2:{NFSU2_TR(0x6f6aa2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6aa3:{NFSU2_TR(0x6f6aa3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6aa4:{NFSU2_TR(0x6f6aa4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f6aa6:{NFSU2_TR(0x6f6aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6a8au);}goto L6f6a8a;}}
}
B6f6aa8:L6f6aa8:{c.instructions+=2;NFSU2_TR(0x6f6aa8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f6aaa:{NFSU2_TR(0x6f6aaa);
{goto L6f6ab1;}
}
B6f6aac:L6f6aac:{c.instructions+=2;NFSU2_TR(0x6f6aac);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f6aae:{NFSU2_TR(0x6f6aae);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f6ab1:L6f6ab1:{c.instructions+=3;NFSU2_TR(0x6f6ab1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6ab3:{NFSU2_TR(0x6f6ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6ab6:{NFSU2_TR(0x6f6ab6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6add;}}
}
B6f6ab8:L6f6ab8:{c.instructions+=8;NFSU2_TR(0x6f6ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6abb:{NFSU2_TR(0x6f6abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6abc:{NFSU2_TR(0x6f6abc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6abf:{NFSU2_TR(0x6f6abf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6ac0:{NFSU2_TR(0x6f6ac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6ac1:{NFSU2_TR(0x6f6ac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6ac4:{NFSU2_TR(0x6f6ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6ac7:{NFSU2_TR(0x6f6ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6accull));
TAIL_STATIC(0x6faa2eu,6fa);
}
B6f6acc:L6f6acc:{c.instructions+=3;NFSU2_TR(0x6f6acc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6f6acf:{NFSU2_TR(0x6f6acf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6ad1:{NFSU2_TR(0x6f6ad1);
if(r1(R+518)){{goto L6f6ad8;}}
}
B6f6ad3:L6f6ad3:{c.instructions+=2;NFSU2_TR(0x6f6ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ad6:{NFSU2_TR(0x6f6ad6);
{goto L6f6add;}
}
B6f6ad8:L6f6ad8:{c.instructions+=2;NFSU2_TR(0x6f6ad8);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6adb:{NFSU2_TR(0x6f6adb);
if(r1(R+518)){{goto L6f6b2b;}}
}
B6f6add:L6f6add:{c.instructions+=2;NFSU2_TR(0x6f6add);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6adf:{NFSU2_TR(0x6f6adf);
if(r1(R+518)){{goto L6f6ae7;}}
}
B6f6ae1:L6f6ae1:{c.instructions+=3;NFSU2_TR(0x6f6ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f6ae3:{NFSU2_TR(0x6f6ae3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6ae5:{NFSU2_TR(0x6f6ae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6a77u);}goto L6f6a77;}}
}
B6f6ae7:L6f6ae7:{c.instructions+=2;NFSU2_TR(0x6f6ae7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6aea:{NFSU2_TR(0x6f6aea);
if(r1(R+518)){{goto L6f6b2b;}}
}
B6f6aec:L6f6aec:{c.instructions+=2;NFSU2_TR(0x6f6aec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6aef:{NFSU2_TR(0x6f6aef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6af4ull));
{goto L6f6b56;}
}
B6f6af4:L6f6af4:{c.instructions+=14;NFSU2_TR(0x6f6af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f6af7:{NFSU2_TR(0x6f6af7);
__builtin_memmove((R+24),(R+0),4);
}
B6f6af9:{NFSU2_TR(0x6f6af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6afc:{NFSU2_TR(0x6f6afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6aff:{NFSU2_TR(0x6f6aff);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f6b00:{NFSU2_TR(0x6f6b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b03:{NFSU2_TR(0x6f6b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b06:{NFSU2_TR(0x6f6b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6b09:{NFSU2_TR(0x6f6b09);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f6b0a:{NFSU2_TR(0x6f6b0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6b0b:{NFSU2_TR(0x6f6b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6b0e:{NFSU2_TR(0x6f6b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b11:{NFSU2_TR(0x6f6b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b14:{NFSU2_TR(0x6f6b14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6b19ull));
TAIL_STATIC(0x6f805cu,6f8);
}
B6f6b19:L6f6b19:{c.instructions+=7;NFSU2_TR(0x6f6b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6b1c:{NFSU2_TR(0x6f6b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6b1f:{NFSU2_TR(0x6f6b1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f6b21:{NFSU2_TR(0x6f6b21);
__builtin_memmove((R+0),(R+24),4);
}
B6f6b23:{NFSU2_TR(0x6f6b23);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f6b26:{NFSU2_TR(0x6f6b26);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6f6b29:{NFSU2_TR(0x6f6b29);
{goto L6f6b2e;}
}
B6f6b2b:L6f6b2b:{c.instructions+=1;NFSU2_TR(0x6f6b2b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6b2e:L6f6b2e:{c.instructions+=5;NFSU2_TR(0x6f6b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6b2f:{NFSU2_TR(0x6f6b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6b30:{NFSU2_TR(0x6f6b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f6b31:{NFSU2_TR(0x6f6b31);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f6b32:{NFSU2_TR(0x6f6b32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6b35:L6f6b35:{c.instructions+=3;NFSU2_TR(0x6f6b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f6b37:{NFSU2_TR(0x6f6b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6b39:{NFSU2_TR(0x6f6b39);
if(r1(R+518)){{goto L6f6b4a;}}
}
B6f6b3b:L6f6b3b:{c.instructions+=3;NFSU2_TR(0x6f6b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f6b3d:{NFSU2_TR(0x6f6b3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6b3f:{NFSU2_TR(0x6f6b3f);
if(r1(R+518)){{goto L6f6b4a;}}
}
B6f6b41:L6f6b41:{c.instructions+=4;NFSU2_TR(0x6f6b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6f6b44:{NFSU2_TR(0x6f6b44);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6b46:{NFSU2_TR(0x6f6b46);
__builtin_memmove((R+0),(R+8),4);
}
B6f6b48:{NFSU2_TR(0x6f6b48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6b3bu);}goto L6f6b3b;}}
}
B6f6b4a:L6f6b4a:{c.instructions+=4;NFSU2_TR(0x6f6b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b4e:{NFSU2_TR(0x6f6b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6f6b51:{NFSU2_TR(0x6f6b51);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B6f6b55:{NFSU2_TR(0x6f6b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6b56:L6f6b56:{c.instructions+=4;NFSU2_TR(0x6f6b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f6b58:{NFSU2_TR(0x6f6b58);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f6b5a:{NFSU2_TR(0x6f6b5a);
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
B6f6b5c:{NFSU2_TR(0x6f6b5c);
if(r1(R+518)){{goto L6f6b75;}}
}
B6f6b5e:L6f6b5e:{c.instructions+=2;NFSU2_TR(0x6f6b5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6b61:{NFSU2_TR(0x6f6b61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6b6a;}}
}
B6f6b63:L6f6b63:{c.instructions+=3;NFSU2_TR(0x6f6b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b66:{NFSU2_TR(0x6f6b66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f6b68:{NFSU2_TR(0x6f6b68);
{goto L6f6b70;}
}
B6f6b6a:L6f6b6a:{c.instructions+=4;NFSU2_TR(0x6f6b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6b6b:{NFSU2_TR(0x6f6b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f6b6d:{NFSU2_TR(0x6f6b6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f6b6f:{NFSU2_TR(0x6f6b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6b70:L6f6b70:{c.instructions+=2;NFSU2_TR(0x6f6b70);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B6f6b73:{NFSU2_TR(0x6f6b73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f6b75:L6f6b75:{c.instructions+=1;NFSU2_TR(0x6f6b75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6b76:L6f6b76:{c.instructions+=4;NFSU2_TR(0x6f6b76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6b77:{NFSU2_TR(0x6f6b77);
u8 U[4];
w4(U+0,u32(0x7c2e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6b7c:{NFSU2_TR(0x6f6b7c);
__builtin_memmove((R+24),(R+4),4);
}
B6f6b7e:{NFSU2_TR(0x6f6b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6b83ull));
{goto L6f6c23;}
}
B6f6b83:L6f6b83:{c.instructions+=17;NFSU2_TR(0x6f6b83);
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
B6f6b85:{NFSU2_TR(0x6f6b85);
u8 U[4];
w4(U+0,u32(0x7c2e2cull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f6b8b:{NFSU2_TR(0x6f6b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b8e:{NFSU2_TR(0x6f6b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b91:{NFSU2_TR(0x6f6b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b94:{NFSU2_TR(0x6f6b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b97:{NFSU2_TR(0x6f6b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b9a:{NFSU2_TR(0x6f6b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6b9d:{NFSU2_TR(0x6f6b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ba0:{NFSU2_TR(0x6f6ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ba3:{NFSU2_TR(0x6f6ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ba6:{NFSU2_TR(0x6f6ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ba9:{NFSU2_TR(0x6f6ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6bac:{NFSU2_TR(0x6f6bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6baf:{NFSU2_TR(0x6f6baf);
__builtin_memmove((R+0),(R+24),4);
}
B6f6bb1:{NFSU2_TR(0x6f6bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6bb2:{NFSU2_TR(0x6f6bb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6bb3:L6f6bb3:{c.instructions+=5;NFSU2_TR(0x6f6bb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6bb4:{NFSU2_TR(0x6f6bb4);
__builtin_memmove((R+20),(R+16),4);
}
B6f6bb6:{NFSU2_TR(0x6f6bb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6bb7:{NFSU2_TR(0x6f6bb7);
__builtin_memmove((R+24),(R+4),4);
}
B6f6bb9:{NFSU2_TR(0x6f6bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6bbeull));
{goto L6f6bd2;}
}
B6f6bbe:L6f6bbe:{c.instructions+=2;NFSU2_TR(0x6f6bbe);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f6bc2:{NFSU2_TR(0x6f6bc2);
if(r1(R+518)){{goto L6f6bcb;}}
}
B6f6bc4:L6f6bc4:{c.instructions+=2;NFSU2_TR(0x6f6bc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6bc5:{NFSU2_TR(0x6f6bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6bcaull));
TAIL_STATIC(0x575630u,575);
}
B6f6bca:L6f6bca:{c.instructions+=1;NFSU2_TR(0x6f6bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6bcb:L6f6bcb:{c.instructions+=4;NFSU2_TR(0x6f6bcb);
__builtin_memmove((R+0),(R+24),4);
}
B6f6bcd:{NFSU2_TR(0x6f6bcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6bce:{NFSU2_TR(0x6f6bce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6bcf:{NFSU2_TR(0x6f6bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6bd2:L6f6bd2:{c.instructions+=5;NFSU2_TR(0x6f6bd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6bd3:{NFSU2_TR(0x6f6bd3);
__builtin_memmove((R+24),(R+4),4);
}
B6f6bd5:{NFSU2_TR(0x6f6bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6bd8:{NFSU2_TR(0x6f6bd8);
u8 U[4];
w4(U+0,u32(0x7c2e2cull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f6bde:{NFSU2_TR(0x6f6bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6be3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6b35u);}goto L6f6b35;}
}
B6f6be3:L6f6be3:{c.instructions+=2;NFSU2_TR(0x6f6be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6be6:{NFSU2_TR(0x6f6be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6bebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6b35u);}goto L6f6b35;}
}
B6f6beb:L6f6beb:{c.instructions+=2;NFSU2_TR(0x6f6beb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6bee:{NFSU2_TR(0x6f6bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6bf3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6b35u);}goto L6f6b35;}
}
B6f6bf3:L6f6bf3:{c.instructions+=2;NFSU2_TR(0x6f6bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6bf6:{NFSU2_TR(0x6f6bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6bfbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6b35u);}goto L6f6b35;}
}
B6f6bfb:L6f6bfb:{c.instructions+=3;NFSU2_TR(0x6f6bfb);
u8 U[4];
w4(U+0,u32(0x7a0358ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f6c01:{NFSU2_TR(0x6f6c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6c02:{NFSU2_TR(0x6f6c02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6c03:L6f6c03:{c.instructions+=7;NFSU2_TR(0x6f6c03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c04:{NFSU2_TR(0x6f6c04);
__builtin_memmove((R+20),(R+16),4);
}
B6f6c06:{NFSU2_TR(0x6f6c06);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6f6c0a:{NFSU2_TR(0x6f6c0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c0b:{NFSU2_TR(0x6f6c0b);
__builtin_memmove((R+24),(R+4),4);
}
B6f6c0d:{NFSU2_TR(0x6f6c0d);
u8 U[4];
w4(U+0,u32(0x7c2ec0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f6c13:{NFSU2_TR(0x6f6c13);
if(r1(R+518)){{goto L6f6c1c;}}
}
B6f6c15:L6f6c15:{c.instructions+=2;NFSU2_TR(0x6f6c15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c16:{NFSU2_TR(0x6f6c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6c1bull));
TAIL_STATIC(0x575630u,575);
}
B6f6c1b:L6f6c1b:{c.instructions+=1;NFSU2_TR(0x6f6c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6c1c:L6f6c1c:{c.instructions+=4;NFSU2_TR(0x6f6c1c);
__builtin_memmove((R+0),(R+24),4);
}
B6f6c1e:{NFSU2_TR(0x6f6c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6c1f:{NFSU2_TR(0x6f6c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6c20:{NFSU2_TR(0x6f6c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6c23:L6f6c23:{c.instructions+=8;NFSU2_TR(0x6f6c23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c24:{NFSU2_TR(0x6f6c24);
__builtin_memmove((R+20),(R+16),4);
}
B6f6c26:{NFSU2_TR(0x6f6c26);
__builtin_memmove((R+0),(R+4),4);
}
B6f6c28:{NFSU2_TR(0x6f6c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6c2b:{NFSU2_TR(0x6f6c2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c2c:{NFSU2_TR(0x6f6c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6c2f:{NFSU2_TR(0x6f6c2f);
u8 U[4];
w4(U+0,u32(0x7a0358ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6f6c35:{NFSU2_TR(0x6f6c35);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B6f6c37:L6f6c37:{c.instructions+=5;NFSU2_TR(0x6f6c37);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f6c39:{NFSU2_TR(0x6f6c39);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f6c3c:{NFSU2_TR(0x6f6c3c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f6c3d:{NFSU2_TR(0x6f6c3d);
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
B6f6c3f:{NFSU2_TR(0x6f6c3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6c37u);}goto L6f6c37;}}
}
B6f6c41:L6f6c41:{c.instructions+=3;NFSU2_TR(0x6f6c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6c42:{NFSU2_TR(0x6f6c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6c43:{NFSU2_TR(0x6f6c43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6c46:L6f6c46:{c.instructions+=1;NFSU2_TR(0x6f6c46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6c47:L6f6c47:{c.instructions+=9;NFSU2_TR(0x6f6c47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c48:{NFSU2_TR(0x6f6c48);
__builtin_memmove((R+20),(R+16),4);
}
B6f6c4a:{NFSU2_TR(0x6f6c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6c4d:{NFSU2_TR(0x6f6c4d);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f6c53:{NFSU2_TR(0x6f6c53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f6c58:{NFSU2_TR(0x6f6c58);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x84ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f6c5e:{NFSU2_TR(0x6f6c5e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6f6c64:{NFSU2_TR(0x6f6c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6c65:{NFSU2_TR(0x6f6c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6c66:L6f6c66:{c.instructions+=6;NFSU2_TR(0x6f6c66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c67:{NFSU2_TR(0x6f6c67);
__builtin_memmove((R+20),(R+16),4);
}
B6f6c69:{NFSU2_TR(0x6f6c69);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f6c6f:{NFSU2_TR(0x6f6c6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6c70:{NFSU2_TR(0x6f6c70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B6f6c73:{NFSU2_TR(0x6f6c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6c78ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B6f6c78:L6f6c78:{c.instructions+=6;NFSU2_TR(0x6f6c78);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6c7d:{NFSU2_TR(0x6f6c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6c80:{NFSU2_TR(0x6f6c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6c83:{NFSU2_TR(0x6f6c83);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f6c89:{NFSU2_TR(0x6f6c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6c8c:{NFSU2_TR(0x6f6c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6c95;}}
}
B6f6c8e:L6f6c8e:{c.instructions+=1;NFSU2_TR(0x6f6c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6c95:L6f6c95:{c.instructions+=2;NFSU2_TR(0x6f6c95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6c98:{NFSU2_TR(0x6f6c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6c9dull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B6f6c9d:L6f6c9d:{c.instructions+=11;NFSU2_TR(0x6f6c9d);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f6ca3:{NFSU2_TR(0x6f6ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6ca6:{NFSU2_TR(0x6f6ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6f6cac:{NFSU2_TR(0x6f6cac);
w4(R+4,u32(0x84ull));
}
B6f6cb1:{NFSU2_TR(0x6f6cb1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f6cb2:{NFSU2_TR(0x6f6cb2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f6cb2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6f6cb2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6f6cb4:{NFSU2_TR(0x6f6cb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f6cb7:{NFSU2_TR(0x6f6cb7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6cb9:{NFSU2_TR(0x6f6cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6cba:{NFSU2_TR(0x6f6cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6cbb:{NFSU2_TR(0x6f6cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6cbe:L6f6cbe:{c.instructions+=10;NFSU2_TR(0x6f6cbe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6cbf:{NFSU2_TR(0x6f6cbf);
__builtin_memmove((R+20),(R+16),4);
}
B6f6cc1:{NFSU2_TR(0x6f6cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6f6cc4:{NFSU2_TR(0x6f6cc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6cc5:{NFSU2_TR(0x6f6cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6cc6:{NFSU2_TR(0x6f6cc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6cc7:{NFSU2_TR(0x6f6cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6cca:{NFSU2_TR(0x6f6cca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6ccc:{NFSU2_TR(0x6f6ccc);
__builtin_memmove((R+12),(R+4),4);
}
B6f6cce:{NFSU2_TR(0x6f6cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6cd5;}}
}
B6f6cd0:L6f6cd0:{c.instructions+=1;NFSU2_TR(0x6f6cd0);
w4(R+28,u32(0x783fe5ull));
}
B6f6cd5:L6f6cd5:{c.instructions+=2;NFSU2_TR(0x6f6cd5);
__builtin_memmove((R+0),(R+28),4);
}
B6f6cd7:{NFSU2_TR(0x6f6cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6cda:L6f6cda:{c.instructions+=4;NFSU2_TR(0x6f6cda);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f6cdc:{NFSU2_TR(0x6f6cdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6cdd:{NFSU2_TR(0x6f6cdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6cdf:{NFSU2_TR(0x6f6cdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6cdau);}goto L6f6cda;}}
}
B6f6ce1:L6f6ce1:{c.instructions+=25;NFSU2_TR(0x6f6ce1);
__builtin_memmove((R+4),gp(0x813aa4),4);
}
B6f6ce7:{NFSU2_TR(0x6f6ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6ceb:{NFSU2_TR(0x6f6ceb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f6ced:{NFSU2_TR(0x6f6ced);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6cf0:{NFSU2_TR(0x6f6cf0);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f6cf2:{NFSU2_TR(0x6f6cf2);
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
B6f6cf3:{NFSU2_TR(0x6f6cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6cf6:{NFSU2_TR(0x6f6cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6cf9:{NFSU2_TR(0x6f6cf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6cfc:{NFSU2_TR(0x6f6cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6cff:{NFSU2_TR(0x6f6cff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6d02:{NFSU2_TR(0x6f6d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d05:{NFSU2_TR(0x6f6d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f6d08:{NFSU2_TR(0x6f6d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f6d0b:{NFSU2_TR(0x6f6d0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d0c:{NFSU2_TR(0x6f6d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d13:{NFSU2_TR(0x6f6d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x1b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d1a:{NFSU2_TR(0x6f6d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d21:{NFSU2_TR(0x6f6d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7c2f08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d28:{NFSU2_TR(0x6f6d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d2b:{NFSU2_TR(0x6f6d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d32:{NFSU2_TR(0x6f6d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d35:{NFSU2_TR(0x6f6d35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f6d37:{NFSU2_TR(0x6f6d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d38:{NFSU2_TR(0x6f6d38);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6d3aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f6d3a:L6f6d3a:{c.instructions+=5;NFSU2_TR(0x6f6d3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d3b:{NFSU2_TR(0x6f6d3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d3c:{NFSU2_TR(0x6f6d3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d3d:{NFSU2_TR(0x6f6d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6d40:{NFSU2_TR(0x6f6d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6d45ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B6f6d45:L6f6d45:{c.instructions+=6;NFSU2_TR(0x6f6d45);
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
B6f6d48:{NFSU2_TR(0x6f6d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6d49:{NFSU2_TR(0x6f6d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6d4a:{NFSU2_TR(0x6f6d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f6d4b:{NFSU2_TR(0x6f6d4b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f6d4c:{NFSU2_TR(0x6f6d4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6d4f:L6f6d4f:{c.instructions+=10;NFSU2_TR(0x6f6d4f);
__builtin_memmove((R+4),gp(0x813aac),4);
}
B6f6d55:{NFSU2_TR(0x6f6d55);
__builtin_memmove((R+0),gp(0x813aa8),4);
}
B6f6d5a:{NFSU2_TR(0x6f6d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f6d5d:{NFSU2_TR(0x6f6d5d);
__builtin_memmove((R+4),gp(0x813ab0),4);
}
B6f6d63:{NFSU2_TR(0x6f6d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f6d66:{NFSU2_TR(0x6f6d66);
__builtin_memmove((R+4),gp(0x813ab8),4);
}
B6f6d6c:{NFSU2_TR(0x6f6d6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x85ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f6d72:{NFSU2_TR(0x6f6d72);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),m4(0x813ab4)));
w1(R+523,scarry<u32>(r4(R+4),m4(0x813ab4)));
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x813ab4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6d78:{NFSU2_TR(0x6f6d78);
u8 U[12];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f6d7f:{NFSU2_TR(0x6f6d7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6d81:L6f6d81:{c.instructions+=9;NFSU2_TR(0x6f6d81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d82:{NFSU2_TR(0x6f6d82);
__builtin_memmove((R+20),(R+16),4);
}
B6f6d84:{NFSU2_TR(0x6f6d84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6d85:{NFSU2_TR(0x6f6d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6d88:{NFSU2_TR(0x6f6d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6d8b:{NFSU2_TR(0x6f6d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6d91:{NFSU2_TR(0x6f6d91);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6d94:{NFSU2_TR(0x6f6d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f6d96:{NFSU2_TR(0x6f6d96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6d99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f6d99:L6f6d99:{c.instructions+=11;NFSU2_TR(0x6f6d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6d9c:{NFSU2_TR(0x6f6d9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f6d9e:{NFSU2_TR(0x6f6d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6da1:{NFSU2_TR(0x6f6da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6da4:{NFSU2_TR(0x6f6da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6da7:{NFSU2_TR(0x6f6da7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f6da9:{NFSU2_TR(0x6f6da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6dac:{NFSU2_TR(0x6f6dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6daf:{NFSU2_TR(0x6f6daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6db0:{NFSU2_TR(0x6f6db0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6db1:{NFSU2_TR(0x6f6db1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6db2:L6f6db2:{c.instructions+=8;NFSU2_TR(0x6f6db2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6db3:{NFSU2_TR(0x6f6db3);
__builtin_memmove((R+20),(R+16),4);
}
B6f6db5:{NFSU2_TR(0x6f6db5);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6dba:{NFSU2_TR(0x6f6dba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6dbb:{NFSU2_TR(0x6f6dbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6dbc:{NFSU2_TR(0x6f6dbc);
u8 U[4];
__builtin_memmove((U+0),gp(0x813ab4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6dc2:{NFSU2_TR(0x6f6dc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6dc8:{NFSU2_TR(0x6f6dc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6dcdull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f6dcd:L6f6dcd:{c.instructions+=6;NFSU2_TR(0x6f6dcd);
__builtin_memmove((R+0),gp(0x813ab0),4);
}
B6f6dd2:{NFSU2_TR(0x6f6dd2);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6f6dd5:{NFSU2_TR(0x6f6dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6dd6:{NFSU2_TR(0x6f6dd6);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6ddb:{NFSU2_TR(0x6f6ddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6f6de1:{NFSU2_TR(0x6f6de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6de6ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f6de6:L6f6de6:{c.instructions+=5;NFSU2_TR(0x6f6de6);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6deb:{NFSU2_TR(0x6f6deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f6dee:{NFSU2_TR(0x6f6dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6df4:{NFSU2_TR(0x6f6df4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6f6df6:{NFSU2_TR(0x6f6df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6f6df9:L6f6df9:{c.instructions+=6;NFSU2_TR(0x6f6df9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f6dfb:{NFSU2_TR(0x6f6dfb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6dfc:{NFSU2_TR(0x6f6dfc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B6f6dfe:{NFSU2_TR(0x6f6dfe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6dff:{NFSU2_TR(0x6f6dff);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6e01:{NFSU2_TR(0x6f6e01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6df9u);}goto L6f6df9;}}
}
B6f6e03:L6f6e03:{c.instructions+=8;NFSU2_TR(0x6f6e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f6e05:{NFSU2_TR(0x6f6e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6e0b:{NFSU2_TR(0x6f6e0b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f6e0d:{NFSU2_TR(0x6f6e0d);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e0f:{NFSU2_TR(0x6f6e0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6f6e11:{NFSU2_TR(0x6f6e11);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6e12:{NFSU2_TR(0x6f6e12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e13:{NFSU2_TR(0x6f6e13);
{goto L6f6e3d;}
}
B6f6e15:L6f6e15:{c.instructions+=4;NFSU2_TR(0x6f6e15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f6e18:{NFSU2_TR(0x6f6e18);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f6e1b:{NFSU2_TR(0x6f6e1b);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6f6e1e:{NFSU2_TR(0x6f6e1e);
if(r1(R+518)){{goto L6f6e25;}}
}
B6f6e20:L6f6e20:{c.instructions+=2;NFSU2_TR(0x6f6e20);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6f6e23:{NFSU2_TR(0x6f6e23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6e29;}}
}
B6f6e25:L6f6e25:{c.instructions+=1;NFSU2_TR(0x6f6e25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f6e29:L6f6e29:{c.instructions+=7;NFSU2_TR(0x6f6e29);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f6e2f:{NFSU2_TR(0x6f6e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6e35:{NFSU2_TR(0x6f6e35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6e36:{NFSU2_TR(0x6f6e36);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e38:{NFSU2_TR(0x6f6e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f6e3b:{NFSU2_TR(0x6f6e3b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6e3c:{NFSU2_TR(0x6f6e3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e3d:L6f6e3d:{c.instructions+=1;NFSU2_TR(0x6f6e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6e42ull));
TAIL_STATIC(0x75cf10u,75c);
}
B6f6e42:L6f6e42:{c.instructions+=4;NFSU2_TR(0x6f6e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6e44:{NFSU2_TR(0x6f6e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6e45:{NFSU2_TR(0x6f6e45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6e46:{NFSU2_TR(0x6f6e46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6e15u);}goto L6f6e15;}}
}
B6f6e48:L6f6e48:{c.instructions+=5;NFSU2_TR(0x6f6e48);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6e4d:{NFSU2_TR(0x6f6e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6e53:{NFSU2_TR(0x6f6e53);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6f6e57:{NFSU2_TR(0x6f6e57);
__builtin_memmove((R+0),(R+4),4);
}
B6f6e59:{NFSU2_TR(0x6f6e59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6e5c:L6f6e5c:{c.instructions+=4;NFSU2_TR(0x6f6e5c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6f6e5e:{NFSU2_TR(0x6f6e5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6e5f:{NFSU2_TR(0x6f6e5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6e61:{NFSU2_TR(0x6f6e61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6e5cu);}goto L6f6e5c;}}
}
B6f6e63:L6f6e63:{c.instructions+=7;NFSU2_TR(0x6f6e63);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6f6e65:{NFSU2_TR(0x6f6e65);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6f6e67:{NFSU2_TR(0x6f6e67);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f6e6a:{NFSU2_TR(0x6f6e6a);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6e6c:{NFSU2_TR(0x6f6e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6e6d:{NFSU2_TR(0x6f6e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6e6e:{NFSU2_TR(0x6f6e6e);
if(r1(R+518)){{goto L6f6e74;}}
}
B6f6e70:L6f6e70:{c.instructions+=2;NFSU2_TR(0x6f6e70);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5cull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5cull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6e72:{NFSU2_TR(0x6f6e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6e78;}}
}
B6f6e74:L6f6e74:{c.instructions+=1;NFSU2_TR(0x6f6e74);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6f6e78:L6f6e78:{c.instructions+=2;NFSU2_TR(0x6f6e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6e79:{NFSU2_TR(0x6f6e79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6e7a:L6f6e7a:{c.instructions+=8;NFSU2_TR(0x6f6e7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e7b:{NFSU2_TR(0x6f6e7b);
__builtin_memmove((R+20),(R+16),4);
}
B6f6e7d:{NFSU2_TR(0x6f6e7d);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6e82:{NFSU2_TR(0x6f6e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6e88:{NFSU2_TR(0x6f6e88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e89:{NFSU2_TR(0x6f6e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e8a:{NFSU2_TR(0x6f6e8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6e8b:{NFSU2_TR(0x6f6e8b);
{goto L6f6ea9;}
}
B6f6e8d:L6f6e8d:{c.instructions+=1;NFSU2_TR(0x6f6e8d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6e8e:L6f6e8e:{c.instructions+=2;NFSU2_TR(0x6f6e8e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6e91:{NFSU2_TR(0x6f6e91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6e8du);}goto L6f6e8d;}}
}
B6f6e93:L6f6e93:{c.instructions+=3;NFSU2_TR(0x6f6e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6e96:{NFSU2_TR(0x6f6e96);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6e99:{NFSU2_TR(0x6f6e99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6ea6;}}
}
B6f6e9b:L6f6e9b:{c.instructions+=2;NFSU2_TR(0x6f6e9b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6e9f:{NFSU2_TR(0x6f6e9f);
if(r1(R+518)){{goto L6f6ea6;}}
}
B6f6ea1:L6f6ea1:{c.instructions+=2;NFSU2_TR(0x6f6ea1);
__builtin_memmove((R+0),(R+4),4);
}
B6f6ea3:{NFSU2_TR(0x6f6ea3);
u8 U[1];
w1(U+0,u8(0x2full));
s1(u32(r4(R+0)),r1(U+0));
}
B6f6ea6:L6f6ea6:{c.instructions+=1;NFSU2_TR(0x6f6ea6);
u8 U[1];
w1(U+0,u8(0x3bull));
s1(u32(r4(R+0)),r1(U+0));
}
B6f6ea9:L6f6ea9:{c.instructions+=2;NFSU2_TR(0x6f6ea9);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6ead:{NFSU2_TR(0x6f6ead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6e8eu);}goto L6f6e8e;}}
}
B6f6eaf:L6f6eaf:{c.instructions+=6;NFSU2_TR(0x6f6eaf);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6f6eb2:{NFSU2_TR(0x6f6eb2);
__builtin_memmove((R+24),gp(0x813ab4),4);
}
B6f6eb8:{NFSU2_TR(0x6f6eb8);
__builtin_memmove((R+0),(R+24),4);
}
B6f6eba:{NFSU2_TR(0x6f6eba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6f6ebd:{NFSU2_TR(0x6f6ebd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f6ec0:{NFSU2_TR(0x6f6ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6ec5ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B6f6ec5:L6f6ec5:{c.instructions+=4;NFSU2_TR(0x6f6ec5);
__builtin_memmove((R+12),(R+16),4);
}
B6f6ec7:{NFSU2_TR(0x6f6ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6ec8:{NFSU2_TR(0x6f6ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6ec9:{NFSU2_TR(0x6f6ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6eceull));
TAIL_STATIC(0x6fafedu,6fa);
}
B6f6ece:L6f6ece:{c.instructions+=5;NFSU2_TR(0x6f6ece);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6ed2:{NFSU2_TR(0x6f6ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6ed3:{NFSU2_TR(0x6f6ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6ed4:{NFSU2_TR(0x6f6ed4);
__builtin_memmove((R+8),(R+12),4);
}
B6f6ed6:{NFSU2_TR(0x6f6ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6f1c;}}
}
B6f6ed8:L6f6ed8:{c.instructions+=2;NFSU2_TR(0x6f6ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6edb:{NFSU2_TR(0x6f6edb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6f6edd:L6f6edd:{c.instructions+=5;NFSU2_TR(0x6f6edd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f6edf:{NFSU2_TR(0x6f6edf);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6f6ee2:{NFSU2_TR(0x6f6ee2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6ee3:{NFSU2_TR(0x6f6ee3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6ee5:{NFSU2_TR(0x6f6ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6eddu);}goto L6f6edd;}}
}
B6f6ee7:L6f6ee7:{c.instructions+=2;NFSU2_TR(0x6f6ee7);
__builtin_memmove((R+28),(R+12),4);
}
B6f6ee9:{NFSU2_TR(0x6f6ee9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f6eea:L6f6eea:{c.instructions+=4;NFSU2_TR(0x6f6eea);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f6eed:{NFSU2_TR(0x6f6eed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6eee:{NFSU2_TR(0x6f6eee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6ef0:{NFSU2_TR(0x6f6ef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6eeau);}goto L6f6eea;}}
}
B6f6ef2:L6f6ef2:{c.instructions+=5;NFSU2_TR(0x6f6ef2);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6ef7:{NFSU2_TR(0x6f6ef7);
w4(R+24,u32(0x7ab870ull));
}
B6f6efc:{NFSU2_TR(0x6f6efc);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B6f6efe:{NFSU2_TR(0x6f6efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6f04:{NFSU2_TR(0x6f6f04);
__builtin_memmove((R+8),(R+0),4);
}
B6f6f06:L6f6f06:{c.instructions+=4;NFSU2_TR(0x6f6f06);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f6f08:{NFSU2_TR(0x6f6f08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6f09:{NFSU2_TR(0x6f6f09);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f0b:{NFSU2_TR(0x6f6f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f06u);}goto L6f6f06;}}
}
B6f6f0d:L6f6f0d:{c.instructions+=3;NFSU2_TR(0x6f6f0d);
__builtin_memmove((R+28),(R+12),4);
}
B6f6f0f:{NFSU2_TR(0x6f6f0f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6f6f11:{NFSU2_TR(0x6f6f11);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f6f12:L6f6f12:{c.instructions+=4;NFSU2_TR(0x6f6f12);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f6f15:{NFSU2_TR(0x6f6f15);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6f16:{NFSU2_TR(0x6f6f16);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f18:{NFSU2_TR(0x6f6f18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f12u);}goto L6f6f12;}}
}
B6f6f1a:L6f6f1a:{c.instructions+=1;NFSU2_TR(0x6f6f1a);
{goto L6f6f5c;}
}
B6f6f1c:L6f6f1c:{c.instructions+=2;NFSU2_TR(0x6f6f1c);
__builtin_memmove((R+0),gp(0x8ad610),4);
}
B6f6f21:{NFSU2_TR(0x6f6f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f6f27:L6f6f27:{c.instructions+=6;NFSU2_TR(0x6f6f27);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6f6f29:{NFSU2_TR(0x6f6f29);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f6f2a:{NFSU2_TR(0x6f6f2a);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B6f6f2c:{NFSU2_TR(0x6f6f2c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f6f2d:{NFSU2_TR(0x6f6f2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f2f:{NFSU2_TR(0x6f6f2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f27u);}goto L6f6f27;}}
}
B6f6f31:L6f6f31:{c.instructions+=2;NFSU2_TR(0x6f6f31);
__builtin_memmove((R+28),(R+12),4);
}
B6f6f33:{NFSU2_TR(0x6f6f33);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f6f34:L6f6f34:{c.instructions+=4;NFSU2_TR(0x6f6f34);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f6f37:{NFSU2_TR(0x6f6f37);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6f38:{NFSU2_TR(0x6f6f38);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f3a:{NFSU2_TR(0x6f6f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f34u);}goto L6f6f34;}}
}
B6f6f3c:L6f6f3c:{c.instructions+=4;NFSU2_TR(0x6f6f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6f3f:{NFSU2_TR(0x6f6f3f);
w4(R+24,u32(0x7ab870ull));
}
B6f6f44:{NFSU2_TR(0x6f6f44);
u8 U[36];
__builtin_memmove((U+18),(R+28),4);
w4(U+22,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+26,u32(r1(R+522)));
w4(U+30,u32(u32(u32(0x4ull))*u32(r4(U+26))));
w4(R+28,u32(u32(r4(U+22))-u32(r4(U+30))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),2);
__builtin_memmove((U+34),(U+16),2);
s2(u32(r4(U+18)),r2(U+34));
}
B6f6f46:{NFSU2_TR(0x6f6f46);
__builtin_memmove((R+8),(R+0),4);
}
B6f6f48:L6f6f48:{c.instructions+=4;NFSU2_TR(0x6f6f48);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6f6f4a:{NFSU2_TR(0x6f6f4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6f4b:{NFSU2_TR(0x6f6f4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f4d:{NFSU2_TR(0x6f6f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f48u);}goto L6f6f48;}}
}
B6f6f4f:L6f6f4f:{c.instructions+=3;NFSU2_TR(0x6f6f4f);
__builtin_memmove((R+28),(R+12),4);
}
B6f6f51:{NFSU2_TR(0x6f6f51);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6f6f53:{NFSU2_TR(0x6f6f53);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f6f54:L6f6f54:{c.instructions+=4;NFSU2_TR(0x6f6f54);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f6f57:{NFSU2_TR(0x6f6f57);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6f58:{NFSU2_TR(0x6f6f58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6f5a:{NFSU2_TR(0x6f6f5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f54u);}goto L6f6f54;}}
}
B6f6f5c:L6f6f5c:{c.instructions+=3;NFSU2_TR(0x6f6f5c);
__builtin_memmove((R+4),(R+0),4);
}
B6f6f5e:{NFSU2_TR(0x6f6f5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6f6f61:{NFSU2_TR(0x6f6f61);
__builtin_memmove((R+24),(R+8),4);
}
B6f6f63:L6f6f63:{c.instructions+=1;NFSU2_TR(0x6f6f63);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6f6f65;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f63u);}goto L6f6f63;}
}
B6f6f65:L6f6f65:{c.instructions+=3;NFSU2_TR(0x6f6f65);
__builtin_memmove((R+4),(R+0),4);
}
B6f6f67:{NFSU2_TR(0x6f6f67);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f6f6a:{NFSU2_TR(0x6f6f6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f6b:L6f6f6b:{c.instructions+=1;NFSU2_TR(0x6f6f6b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6f6f6d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6f6bu);}goto L6f6f6b;}
}
B6f6f6d:L6f6f6d:{c.instructions+=1;NFSU2_TR(0x6f6f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f6f72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6db2u);}goto L6f6db2;}
}
B6f6f72:L6f6f72:{c.instructions+=7;NFSU2_TR(0x6f6f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f6f73:{NFSU2_TR(0x6f6f73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+16),(U+0),4);
}
B6f6f76:{NFSU2_TR(0x6f6f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f6f77:{NFSU2_TR(0x6f6f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f6f78:{NFSU2_TR(0x6f6f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f6f79:{NFSU2_TR(0x6f6f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f6f7a:{NFSU2_TR(0x6f6f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f6f7b:L6f6f7b:{c.instructions+=12;NFSU2_TR(0x6f6f7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f7c:{NFSU2_TR(0x6f6f7c);
__builtin_memmove((R+20),(R+16),4);
}
B6f6f7e:{NFSU2_TR(0x6f6f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f7f:{NFSU2_TR(0x6f6f7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f80:{NFSU2_TR(0x6f6f80);
__builtin_memmove((R+8),gp(0x813ab0),4);
}
B6f6f86:{NFSU2_TR(0x6f6f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6f8a:{NFSU2_TR(0x6f6f8a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6f8c:{NFSU2_TR(0x6f6f8c);
__builtin_memmove((R+4),gp(0x8ad610),4);
}
B6f6f92:{NFSU2_TR(0x6f6f92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f93:{NFSU2_TR(0x6f6f93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f94:{NFSU2_TR(0x6f6f94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f6f95:{NFSU2_TR(0x6f6f95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f6fe3;}}
}
B6f6f97:L6f6f97:{c.instructions+=2;NFSU2_TR(0x6f6f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6f9d:{NFSU2_TR(0x6f6f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f6fa0:L6f6fa0:{c.instructions+=4;NFSU2_TR(0x6f6fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6fa3:{NFSU2_TR(0x6f6fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f6fa5:{NFSU2_TR(0x6f6fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6fa7:{NFSU2_TR(0x6f6fa7);
if(r1(R+518)){{goto L6f6fe8;}}
}
B6f6fa9:L6f6fa9:{c.instructions+=1;NFSU2_TR(0x6f6fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f6fac:L6f6fac:{c.instructions+=4;NFSU2_TR(0x6f6fac);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6f6fae:{NFSU2_TR(0x6f6fae);
__builtin_memmove((R+0),(R+12),1);
}
B6f6fb0:{NFSU2_TR(0x6f6fb0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6fb2:{NFSU2_TR(0x6f6fb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6fce;}}
}
B6f6fb4:L6f6fb4:{c.instructions+=2;NFSU2_TR(0x6f6fb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6fb6:{NFSU2_TR(0x6f6fb6);
if(r1(R+518)){{goto L6f6fca;}}
}
B6f6fb8:L6f6fb8:{c.instructions+=4;NFSU2_TR(0x6f6fb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f6fbb:{NFSU2_TR(0x6f6fbb);
__builtin_memmove((R+0),(R+12),1);
}
B6f6fbd:{NFSU2_TR(0x6f6fbd);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6f6fc0:{NFSU2_TR(0x6f6fc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6fce;}}
}
B6f6fc2:L6f6fc2:{c.instructions+=6;NFSU2_TR(0x6f6fc2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6fc3:{NFSU2_TR(0x6f6fc3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f6fc4:{NFSU2_TR(0x6f6fc4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6fc5:{NFSU2_TR(0x6f6fc5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f6fc6:{NFSU2_TR(0x6f6fc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f6fc8:{NFSU2_TR(0x6f6fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6facu);}goto L6f6fac;}}
}
B6f6fca:L6f6fca:{c.instructions+=2;NFSU2_TR(0x6f6fca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f6fcc:{NFSU2_TR(0x6f6fcc);
{goto L6f6fd3;}
}
B6f6fce:L6f6fce:{c.instructions+=2;NFSU2_TR(0x6f6fce);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f6fd0:{NFSU2_TR(0x6f6fd0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f6fd3:L6f6fd3:{c.instructions+=2;NFSU2_TR(0x6f6fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f6fd5:{NFSU2_TR(0x6f6fd5);
if(r1(R+518)){{goto L6f6fe3;}}
}
B6f6fd7:L6f6fd7:{c.instructions+=4;NFSU2_TR(0x6f6fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6fda:{NFSU2_TR(0x6f6fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f6fde:{NFSU2_TR(0x6f6fde);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f6fe1:{NFSU2_TR(0x6f6fe1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6fa0u);}goto L6f6fa0;}}
}
B6f6fe3:L6f6fe3:{c.instructions+=2;NFSU2_TR(0x6f6fe3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f6fe6:{NFSU2_TR(0x6f6fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f6fef;}}
}
B6f6fe8:L6f6fe8:{c.instructions+=2;NFSU2_TR(0x6f6fe8);
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
B6f6fea:{NFSU2_TR(0x6f6fea);
TAIL_STATIC(0x6f70a4u,6f7);
}
B6f6fef:L6f6fef:{c.instructions+=2;NFSU2_TR(0x6f6fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f6ff5:{NFSU2_TR(0x6f6ff5);
TAIL_STATIC(0x6f7013u,6f7);
}
B6f6ff7:L6f6ff7:{c.instructions+=3;NFSU2_TR(0x6f6ff7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f6ff8:{NFSU2_TR(0x6f6ff8);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6f6ffb:{NFSU2_TR(0x6f6ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f6ff7u);}goto L6f6ff7;}}
}
B6f6ffd:L6f6ffd:{c.instructions+=1;NFSU2_TR(0x6f6ffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x6f7000u,6f7);
}
XIT:NFSU2_TR_EXIT(0x6f6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
