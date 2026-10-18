#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 page_5a6(Cpu& c){return body_5a6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a6001:goto L5a6001;
case 0x5a6007:c.instructions+=17;goto B5a6007;
case 0x5a600d:c.instructions+=16;goto B5a600d;
case 0x5a600f:c.instructions+=15;goto B5a600f;
case 0x5a6011:c.instructions+=14;goto B5a6011;
case 0x5a6013:c.instructions+=13;goto B5a6013;
case 0x5a6015:c.instructions+=12;goto B5a6015;
case 0x5a6017:c.instructions+=11;goto B5a6017;
case 0x5a6019:c.instructions+=10;goto B5a6019;
case 0x5a601b:c.instructions+=9;goto B5a601b;
case 0x5a601d:c.instructions+=8;goto B5a601d;
case 0x5a601f:c.instructions+=7;goto B5a601f;
case 0x5a6021:c.instructions+=6;goto B5a6021;
case 0x5a6023:c.instructions+=5;goto B5a6023;
case 0x5a6025:c.instructions+=4;goto B5a6025;
case 0x5a602b:c.instructions+=3;goto B5a602b;
case 0x5a602d:c.instructions+=2;goto B5a602d;
case 0x5a6030:c.instructions+=1;goto B5a6030;
case 0x5a6032:goto L5a6032;
case 0x5a6035:c.instructions+=1;goto B5a6035;
case 0x5a6037:goto L5a6037;
case 0x5a603a:c.instructions+=3;goto B5a603a;
case 0x5a603e:c.instructions+=2;goto B5a603e;
case 0x5a6042:c.instructions+=1;goto B5a6042;
case 0x5a6044:goto L5a6044;
case 0x5a604a:c.instructions+=8;goto B5a604a;
case 0x5a604f:c.instructions+=7;goto B5a604f;
case 0x5a6055:c.instructions+=6;goto B5a6055;
case 0x5a6056:c.instructions+=5;goto B5a6056;
case 0x5a6057:c.instructions+=4;goto B5a6057;
case 0x5a6058:c.instructions+=3;goto B5a6058;
case 0x5a605a:c.instructions+=2;goto B5a605a;
case 0x5a605b:c.instructions+=1;goto B5a605b;
case 0x5a605c:goto L5a605c;
case 0x5a6062:c.instructions+=8;goto B5a6062;
case 0x5a6067:c.instructions+=7;goto B5a6067;
case 0x5a606d:c.instructions+=6;goto B5a606d;
case 0x5a606e:c.instructions+=5;goto B5a606e;
case 0x5a606f:c.instructions+=4;goto B5a606f;
case 0x5a6070:c.instructions+=3;goto B5a6070;
case 0x5a6072:c.instructions+=2;goto B5a6072;
case 0x5a6073:c.instructions+=1;goto B5a6073;
case 0x5a6074:goto L5a6074;
case 0x5a607a:c.instructions+=18;goto B5a607a;
case 0x5a6080:c.instructions+=17;goto B5a6080;
case 0x5a6086:c.instructions+=16;goto B5a6086;
case 0x5a6088:c.instructions+=15;goto B5a6088;
case 0x5a608a:c.instructions+=14;goto B5a608a;
case 0x5a608c:c.instructions+=13;goto B5a608c;
case 0x5a608e:c.instructions+=12;goto B5a608e;
case 0x5a6090:c.instructions+=11;goto B5a6090;
case 0x5a6092:c.instructions+=10;goto B5a6092;
case 0x5a6094:c.instructions+=9;goto B5a6094;
case 0x5a6096:c.instructions+=8;goto B5a6096;
case 0x5a6098:c.instructions+=7;goto B5a6098;
case 0x5a609a:c.instructions+=6;goto B5a609a;
case 0x5a609c:c.instructions+=5;goto B5a609c;
case 0x5a609e:c.instructions+=4;goto B5a609e;
case 0x5a60a4:c.instructions+=3;goto B5a60a4;
case 0x5a60a6:c.instructions+=2;goto B5a60a6;
case 0x5a60a9:c.instructions+=1;goto B5a60a9;
case 0x5a60ab:goto L5a60ab;
case 0x5a60ae:c.instructions+=1;goto B5a60ae;
case 0x5a60b0:goto L5a60b0;
case 0x5a60b3:c.instructions+=3;goto B5a60b3;
case 0x5a60b7:c.instructions+=2;goto B5a60b7;
case 0x5a60bb:c.instructions+=1;goto B5a60bb;
case 0x5a60bd:goto L5a60bd;
case 0x5a60c3:c.instructions+=8;goto B5a60c3;
case 0x5a60c5:c.instructions+=7;goto B5a60c5;
case 0x5a60cb:c.instructions+=6;goto B5a60cb;
case 0x5a60cc:c.instructions+=5;goto B5a60cc;
case 0x5a60cd:c.instructions+=4;goto B5a60cd;
case 0x5a60ce:c.instructions+=3;goto B5a60ce;
case 0x5a60d0:c.instructions+=2;goto B5a60d0;
case 0x5a60d1:c.instructions+=1;goto B5a60d1;
case 0x5a60d2:goto L5a60d2;
case 0x5a60d8:c.instructions+=8;goto B5a60d8;
case 0x5a60de:c.instructions+=7;goto B5a60de;
case 0x5a60df:c.instructions+=6;goto B5a60df;
case 0x5a60e0:c.instructions+=5;goto B5a60e0;
case 0x5a60e2:c.instructions+=4;goto B5a60e2;
case 0x5a60e3:c.instructions+=3;goto B5a60e3;
case 0x5a60e5:c.instructions+=2;goto B5a60e5;
case 0x5a60e6:c.instructions+=1;goto B5a60e6;
case 0x5a60f0:goto L5a60f0;
case 0x5a60f1:c.instructions+=10;goto B5a60f1;
case 0x5a60f3:c.instructions+=9;goto B5a60f3;
case 0x5a60f6:c.instructions+=8;goto B5a60f6;
case 0x5a60f9:c.instructions+=7;goto B5a60f9;
case 0x5a60fc:c.instructions+=6;goto B5a60fc;
case 0x5a60ff:c.instructions+=5;goto B5a60ff;
case 0x5a6100:c.instructions+=4;goto B5a6100;
case 0x5a6102:c.instructions+=3;goto B5a6102;
case 0x5a6105:c.instructions+=2;goto B5a6105;
case 0x5a6108:c.instructions+=1;goto B5a6108;
case 0x5a610a:goto L5a610a;
case 0x5a610d:c.instructions+=21;goto B5a610d;
case 0x5a6110:c.instructions+=20;goto B5a6110;
case 0x5a6113:c.instructions+=19;goto B5a6113;
case 0x5a6119:c.instructions+=18;goto B5a6119;
case 0x5a611f:c.instructions+=17;goto B5a611f;
case 0x5a6125:c.instructions+=16;goto B5a6125;
case 0x5a612b:c.instructions+=15;goto B5a612b;
case 0x5a6131:c.instructions+=14;goto B5a6131;
case 0x5a6135:c.instructions+=13;goto B5a6135;
case 0x5a6139:c.instructions+=12;goto B5a6139;
case 0x5a613f:c.instructions+=11;goto B5a613f;
case 0x5a6141:c.instructions+=10;goto B5a6141;
case 0x5a6143:c.instructions+=9;goto B5a6143;
case 0x5a6145:c.instructions+=8;goto B5a6145;
case 0x5a6147:c.instructions+=7;goto B5a6147;
case 0x5a614b:c.instructions+=6;goto B5a614b;
case 0x5a614d:c.instructions+=5;goto B5a614d;
case 0x5a614f:c.instructions+=4;goto B5a614f;
case 0x5a6155:c.instructions+=3;goto B5a6155;
case 0x5a6157:c.instructions+=2;goto B5a6157;
case 0x5a615a:c.instructions+=1;goto B5a615a;
case 0x5a615c:goto L5a615c;
case 0x5a615f:c.instructions+=2;goto B5a615f;
case 0x5a6162:c.instructions+=1;goto B5a6162;
case 0x5a6164:goto L5a6164;
case 0x5a6167:c.instructions+=2;goto B5a6167;
case 0x5a616a:c.instructions+=1;goto B5a616a;
case 0x5a616c:goto L5a616c;
case 0x5a616f:c.instructions+=8;goto B5a616f;
case 0x5a6172:c.instructions+=7;goto B5a6172;
case 0x5a6175:c.instructions+=6;goto B5a6175;
case 0x5a6177:c.instructions+=5;goto B5a6177;
case 0x5a6179:c.instructions+=4;goto B5a6179;
case 0x5a617d:c.instructions+=3;goto B5a617d;
case 0x5a6181:c.instructions+=2;goto B5a6181;
case 0x5a6184:c.instructions+=1;goto B5a6184;
case 0x5a6188:goto L5a6188;
case 0x5a618c:c.instructions+=3;goto B5a618c;
case 0x5a618d:c.instructions+=2;goto B5a618d;
case 0x5a6192:c.instructions+=1;goto B5a6192;
case 0x5a6197:goto L5a6197;
case 0x5a6199:c.instructions+=4;goto B5a6199;
case 0x5a619a:c.instructions+=3;goto B5a619a;
case 0x5a619c:c.instructions+=2;goto B5a619c;
case 0x5a619d:c.instructions+=1;goto B5a619d;
case 0x5a61a0:goto L5a61a0;
case 0x5a61a4:c.instructions+=2;goto B5a61a4;
case 0x5a61a6:c.instructions+=1;goto B5a61a6;
case 0x5a61a8:goto L5a61a8;
case 0x5a61ac:c.instructions+=9;goto B5a61ac;
case 0x5a61ad:c.instructions+=8;goto B5a61ad;
case 0x5a61b1:c.instructions+=7;goto B5a61b1;
case 0x5a61b2:c.instructions+=6;goto B5a61b2;
case 0x5a61b6:c.instructions+=5;goto B5a61b6;
case 0x5a61b7:c.instructions+=4;goto B5a61b7;
case 0x5a61b8:c.instructions+=3;goto B5a61b8;
case 0x5a61bd:c.instructions+=2;goto B5a61bd;
case 0x5a61bf:c.instructions+=1;goto B5a61bf;
case 0x5a61c3:goto L5a61c3;
case 0x5a61c6:c.instructions+=3;goto B5a61c6;
case 0x5a61c8:c.instructions+=2;goto B5a61c8;
case 0x5a61ca:c.instructions+=1;goto B5a61ca;
case 0x5a61cc:goto L5a61cc;
case 0x5a61cf:c.instructions+=1;goto B5a61cf;
case 0x5a61d0:goto L5a61d0;
case 0x5a61d2:c.instructions+=2;goto B5a61d2;
case 0x5a61d7:c.instructions+=1;goto B5a61d7;
case 0x5a61d9:goto L5a61d9;
case 0x5a61dc:c.instructions+=3;goto B5a61dc;
case 0x5a61de:c.instructions+=2;goto B5a61de;
case 0x5a61e4:c.instructions+=1;goto B5a61e4;
case 0x5a61e6:goto L5a61e6;
case 0x5a61e8:c.instructions+=2;goto B5a61e8;
case 0x5a61ea:c.instructions+=1;goto B5a61ea;
case 0x5a61ec:goto L5a61ec;
case 0x5a61ef:c.instructions+=4;goto B5a61ef;
case 0x5a61f0:c.instructions+=3;goto B5a61f0;
case 0x5a61f3:c.instructions+=2;goto B5a61f3;
case 0x5a61f5:c.instructions+=1;goto B5a61f5;
case 0x5a61f7:goto L5a61f7;
case 0x5a61fb:c.instructions+=4;goto B5a61fb;
case 0x5a61fe:c.instructions+=3;goto B5a61fe;
case 0x5a61ff:c.instructions+=2;goto B5a61ff;
case 0x5a6203:c.instructions+=1;goto B5a6203;
case 0x5a6205:goto L5a6205;
case 0x5a6206:c.instructions+=3;goto B5a6206;
case 0x5a6207:c.instructions+=2;goto B5a6207;
case 0x5a6208:c.instructions+=1;goto B5a6208;
case 0x5a6209:goto L5a6209;
case 0x5a6210:goto L5a6210;
case 0x5a6213:c.instructions+=8;goto B5a6213;
case 0x5a6217:c.instructions+=7;goto B5a6217;
case 0x5a6218:c.instructions+=6;goto B5a6218;
case 0x5a6219:c.instructions+=5;goto B5a6219;
case 0x5a621b:c.instructions+=4;goto B5a621b;
case 0x5a621d:c.instructions+=3;goto B5a621d;
case 0x5a6222:c.instructions+=2;goto B5a6222;
case 0x5a622a:c.instructions+=1;goto B5a622a;
case 0x5a622c:goto L5a622c;
case 0x5a622e:c.instructions+=1;goto B5a622e;
case 0x5a6232:goto L5a6232;
case 0x5a6236:c.instructions+=3;goto B5a6236;
case 0x5a6238:c.instructions+=2;goto B5a6238;
case 0x5a623c:c.instructions+=1;goto B5a623c;
case 0x5a6242:goto L5a6242;
case 0x5a6243:c.instructions+=1;goto B5a6243;
case 0x5a6244:goto L5a6244;
case 0x5a6248:c.instructions+=3;goto B5a6248;
case 0x5a624a:c.instructions+=2;goto B5a624a;
case 0x5a624c:c.instructions+=1;goto B5a624c;
case 0x5a6252:goto L5a6252;
case 0x5a6256:c.instructions+=4;goto B5a6256;
case 0x5a6259:c.instructions+=3;goto B5a6259;
case 0x5a625a:c.instructions+=2;goto B5a625a;
case 0x5a625b:c.instructions+=1;goto B5a625b;
case 0x5a6260:goto L5a6260;
case 0x5a6263:c.instructions+=3;goto B5a6263;
case 0x5a6266:c.instructions+=2;goto B5a6266;
case 0x5a6268:c.instructions+=1;goto B5a6268;
case 0x5a626a:goto L5a626a;
case 0x5a626d:c.instructions+=2;goto B5a626d;
case 0x5a626f:c.instructions+=1;goto B5a626f;
case 0x5a6270:goto L5a6270;
case 0x5a6272:c.instructions+=4;goto B5a6272;
case 0x5a6276:c.instructions+=3;goto B5a6276;
case 0x5a627a:c.instructions+=2;goto B5a627a;
case 0x5a627c:c.instructions+=1;goto B5a627c;
case 0x5a627e:goto L5a627e;
case 0x5a6280:c.instructions+=1;goto B5a6280;
case 0x5a6282:goto L5a6282;
case 0x5a6286:c.instructions+=3;goto B5a6286;
case 0x5a6288:c.instructions+=2;goto B5a6288;
case 0x5a628a:c.instructions+=1;goto B5a628a;
case 0x5a628c:goto L5a628c;
case 0x5a6291:goto L5a6291;
case 0x5a6295:c.instructions+=2;goto B5a6295;
case 0x5a6297:c.instructions+=1;goto B5a6297;
case 0x5a629c:goto L5a629c;
case 0x5a62a0:c.instructions+=3;goto B5a62a0;
case 0x5a62a2:c.instructions+=2;goto B5a62a2;
case 0x5a62a5:c.instructions+=1;goto B5a62a5;
case 0x5a62a7:goto L5a62a7;
case 0x5a62a9:goto L5a62a9;
case 0x5a62ae:goto L5a62ae;
case 0x5a62b2:c.instructions+=2;goto B5a62b2;
case 0x5a62b4:c.instructions+=1;goto B5a62b4;
case 0x5a62b9:goto L5a62b9;
case 0x5a62bd:c.instructions+=3;goto B5a62bd;
case 0x5a62bf:c.instructions+=2;goto B5a62bf;
case 0x5a62c2:c.instructions+=1;goto B5a62c2;
case 0x5a62c4:goto L5a62c4;
case 0x5a62c6:goto L5a62c6;
case 0x5a62c9:c.instructions+=2;goto B5a62c9;
case 0x5a62ca:c.instructions+=1;goto B5a62ca;
case 0x5a62cc:goto L5a62cc;
case 0x5a62d0:goto L5a62d0;
case 0x5a62d4:c.instructions+=3;goto B5a62d4;
case 0x5a62d5:c.instructions+=2;goto B5a62d5;
case 0x5a62d7:c.instructions+=1;goto B5a62d7;
case 0x5a62dd:goto L5a62dd;
case 0x5a62e1:c.instructions+=4;goto B5a62e1;
case 0x5a62e2:c.instructions+=3;goto B5a62e2;
case 0x5a62e4:c.instructions+=2;goto B5a62e4;
case 0x5a62e8:c.instructions+=1;goto B5a62e8;
case 0x5a62ee:goto L5a62ee;
case 0x5a62ef:c.instructions+=1;goto B5a62ef;
case 0x5a62f0:goto L5a62f0;
case 0x5a62f2:c.instructions+=4;goto B5a62f2;
case 0x5a62f3:c.instructions+=3;goto B5a62f3;
case 0x5a62f4:c.instructions+=2;goto B5a62f4;
case 0x5a62f7:c.instructions+=1;goto B5a62f7;
case 0x5a6300:goto L5a6300;
case 0x5a6302:c.instructions+=7;goto B5a6302;
case 0x5a6308:c.instructions+=6;goto B5a6308;
case 0x5a630a:c.instructions+=5;goto B5a630a;
case 0x5a630d:c.instructions+=4;goto B5a630d;
case 0x5a630f:c.instructions+=3;goto B5a630f;
case 0x5a6312:c.instructions+=2;goto B5a6312;
case 0x5a6315:c.instructions+=1;goto B5a6315;
case 0x5a6320:goto L5a6320;
case 0x5a6321:c.instructions+=12;goto B5a6321;
case 0x5a6322:c.instructions+=11;goto B5a6322;
case 0x5a6323:c.instructions+=10;goto B5a6323;
case 0x5a6324:c.instructions+=9;goto B5a6324;
case 0x5a6325:c.instructions+=8;goto B5a6325;
case 0x5a6329:c.instructions+=7;goto B5a6329;
case 0x5a632b:c.instructions+=6;goto B5a632b;
case 0x5a632d:c.instructions+=5;goto B5a632d;
case 0x5a6331:c.instructions+=4;goto B5a6331;
case 0x5a6333:c.instructions+=3;goto B5a6333;
case 0x5a6337:c.instructions+=2;goto B5a6337;
case 0x5a633f:c.instructions+=1;goto B5a633f;
case 0x5a6341:goto L5a6341;
case 0x5a6345:c.instructions+=2;goto B5a6345;
case 0x5a6347:c.instructions+=1;goto B5a6347;
case 0x5a6349:goto L5a6349;
case 0x5a634a:c.instructions+=6;goto B5a634a;
case 0x5a634b:c.instructions+=5;goto B5a634b;
case 0x5a634c:c.instructions+=4;goto B5a634c;
case 0x5a634e:c.instructions+=3;goto B5a634e;
case 0x5a634f:c.instructions+=2;goto B5a634f;
case 0x5a6350:c.instructions+=1;goto B5a6350;
case 0x5a6353:goto L5a6353;
case 0x5a6357:c.instructions+=2;goto B5a6357;
case 0x5a6359:c.instructions+=1;goto B5a6359;
case 0x5a635b:goto L5a635b;
case 0x5a635c:c.instructions+=6;goto B5a635c;
case 0x5a635d:c.instructions+=5;goto B5a635d;
case 0x5a635e:c.instructions+=4;goto B5a635e;
case 0x5a6360:c.instructions+=3;goto B5a6360;
case 0x5a6361:c.instructions+=2;goto B5a6361;
case 0x5a6362:c.instructions+=1;goto B5a6362;
case 0x5a6365:goto L5a6365;
case 0x5a6366:c.instructions+=7;goto B5a6366;
case 0x5a6367:c.instructions+=6;goto B5a6367;
case 0x5a6368:c.instructions+=5;goto B5a6368;
case 0x5a636b:c.instructions+=4;goto B5a636b;
case 0x5a636f:c.instructions+=3;goto B5a636f;
case 0x5a6370:c.instructions+=2;goto B5a6370;
case 0x5a6371:c.instructions+=1;goto B5a6371;
case 0x5a6374:goto L5a6374;
case 0x5a6378:c.instructions+=3;goto B5a6378;
case 0x5a637a:c.instructions+=2;goto B5a637a;
case 0x5a637d:c.instructions+=1;goto B5a637d;
case 0x5a6380:goto L5a6380;
case 0x5a6382:c.instructions+=2;goto B5a6382;
case 0x5a6385:c.instructions+=1;goto B5a6385;
case 0x5a6387:goto L5a6387;
case 0x5a638b:c.instructions+=2;goto B5a638b;
case 0x5a638d:c.instructions+=1;goto B5a638d;
case 0x5a638f:goto L5a638f;
case 0x5a6391:c.instructions+=1;goto B5a6391;
case 0x5a6393:goto L5a6393;
case 0x5a6397:c.instructions+=5;goto B5a6397;
case 0x5a6398:c.instructions+=4;goto B5a6398;
case 0x5a6399:c.instructions+=3;goto B5a6399;
case 0x5a639a:c.instructions+=2;goto B5a639a;
case 0x5a639c:c.instructions+=1;goto B5a639c;
case 0x5a63a1:goto L5a63a1;
case 0x5a63a5:goto L5a63a5;
case 0x5a63a6:c.instructions+=3;goto B5a63a6;
case 0x5a63a9:c.instructions+=2;goto B5a63a9;
case 0x5a63ac:c.instructions+=1;goto B5a63ac;
case 0x5a63ae:goto L5a63ae;
case 0x5a63b2:c.instructions+=3;goto B5a63b2;
case 0x5a63b5:c.instructions+=2;goto B5a63b5;
case 0x5a63ba:c.instructions+=1;goto B5a63ba;
case 0x5a63c0:goto L5a63c0;
case 0x5a63c2:c.instructions+=2;goto B5a63c2;
case 0x5a63c5:c.instructions+=1;goto B5a63c5;
case 0x5a63c7:goto L5a63c7;
case 0x5a63c8:c.instructions+=1;goto B5a63c8;
case 0x5a63cd:goto L5a63cd;
case 0x5a63d0:c.instructions+=2;goto B5a63d0;
case 0x5a63d2:c.instructions+=1;goto B5a63d2;
case 0x5a63d4:goto L5a63d4;
case 0x5a63d6:c.instructions+=4;goto B5a63d6;
case 0x5a63d8:c.instructions+=3;goto B5a63d8;
case 0x5a63d9:c.instructions+=2;goto B5a63d9;
case 0x5a63db:c.instructions+=1;goto B5a63db;
case 0x5a63e0:goto L5a63e0;
case 0x5a63e3:c.instructions+=2;goto B5a63e3;
case 0x5a63e4:c.instructions+=1;goto B5a63e4;
case 0x5a63e6:goto L5a63e6;
case 0x5a63ea:c.instructions+=9;goto B5a63ea;
case 0x5a63ec:c.instructions+=8;goto B5a63ec;
case 0x5a63ed:c.instructions+=7;goto B5a63ed;
case 0x5a63f2:c.instructions+=6;goto B5a63f2;
case 0x5a63f6:c.instructions+=5;goto B5a63f6;
case 0x5a63f7:c.instructions+=4;goto B5a63f7;
case 0x5a63f8:c.instructions+=3;goto B5a63f8;
case 0x5a63f9:c.instructions+=2;goto B5a63f9;
case 0x5a63fa:c.instructions+=1;goto B5a63fa;
case 0x5a6400:goto L5a6400;
case 0x5a6401:c.instructions+=10;goto B5a6401;
case 0x5a6402:c.instructions+=9;goto B5a6402;
case 0x5a6406:c.instructions+=8;goto B5a6406;
case 0x5a6409:c.instructions+=7;goto B5a6409;
case 0x5a640a:c.instructions+=6;goto B5a640a;
case 0x5a640b:c.instructions+=5;goto B5a640b;
case 0x5a640d:c.instructions+=4;goto B5a640d;
case 0x5a640f:c.instructions+=3;goto B5a640f;
case 0x5a6411:c.instructions+=2;goto B5a6411;
case 0x5a6415:c.instructions+=1;goto B5a6415;
case 0x5a6417:goto L5a6417;
case 0x5a6418:c.instructions+=2;goto B5a6418;
case 0x5a641b:c.instructions+=1;goto B5a641b;
case 0x5a6420:goto L5a6420;
case 0x5a6424:c.instructions+=5;goto B5a6424;
case 0x5a6428:c.instructions+=4;goto B5a6428;
case 0x5a642a:c.instructions+=3;goto B5a642a;
case 0x5a642b:c.instructions+=2;goto B5a642b;
case 0x5a642c:c.instructions+=1;goto B5a642c;
case 0x5a6431:goto L5a6431;
case 0x5a6433:c.instructions+=5;goto B5a6433;
case 0x5a6436:c.instructions+=4;goto B5a6436;
case 0x5a6437:c.instructions+=3;goto B5a6437;
case 0x5a643a:c.instructions+=2;goto B5a643a;
case 0x5a643c:c.instructions+=1;goto B5a643c;
case 0x5a643e:goto L5a643e;
case 0x5a643f:goto L5a643f;
case 0x5a6440:c.instructions+=5;goto B5a6440;
case 0x5a6442:c.instructions+=4;goto B5a6442;
case 0x5a6443:c.instructions+=3;goto B5a6443;
case 0x5a6444:c.instructions+=2;goto B5a6444;
case 0x5a6445:c.instructions+=1;goto B5a6445;
case 0x5a6450:goto L5a6450;
case 0x5a6451:c.instructions+=6;goto B5a6451;
case 0x5a6452:c.instructions+=5;goto B5a6452;
case 0x5a6453:c.instructions+=4;goto B5a6453;
case 0x5a6455:c.instructions+=3;goto B5a6455;
case 0x5a6457:c.instructions+=2;goto B5a6457;
case 0x5a6459:c.instructions+=1;goto B5a6459;
case 0x5a645e:goto L5a645e;
case 0x5a6460:c.instructions+=1;goto B5a6460;
case 0x5a6462:goto L5a6462;
case 0x5a6463:c.instructions+=1;goto B5a6463;
case 0x5a6467:goto L5a6467;
case 0x5a6468:c.instructions+=1;goto B5a6468;
case 0x5a646d:goto L5a646d;
case 0x5a6470:c.instructions+=2;goto B5a6470;
case 0x5a6472:c.instructions+=1;goto B5a6472;
case 0x5a6474:goto L5a6474;
case 0x5a6477:c.instructions+=1;goto B5a6477;
case 0x5a6479:goto L5a6479;
case 0x5a647b:c.instructions+=1;goto B5a647b;
case 0x5a647d:goto L5a647d;
case 0x5a647f:c.instructions+=3;goto B5a647f;
case 0x5a6480:c.instructions+=2;goto B5a6480;
case 0x5a6482:c.instructions+=1;goto B5a6482;
case 0x5a6487:goto L5a6487;
case 0x5a6489:goto L5a6489;
case 0x5a648a:c.instructions+=1;goto B5a648a;
case 0x5a648f:goto L5a648f;
case 0x5a6491:c.instructions+=1;goto B5a6491;
case 0x5a6493:goto L5a6493;
case 0x5a6494:goto L5a6494;
case 0x5a6496:c.instructions+=4;goto B5a6496;
case 0x5a6497:c.instructions+=3;goto B5a6497;
case 0x5a6498:c.instructions+=2;goto B5a6498;
case 0x5a6499:c.instructions+=1;goto B5a6499;
case 0x5a64a0:goto L5a64a0;
case 0x5a64a3:c.instructions+=10;goto B5a64a3;
case 0x5a64a4:c.instructions+=9;goto B5a64a4;
case 0x5a64a5:c.instructions+=8;goto B5a64a5;
case 0x5a64a6:c.instructions+=7;goto B5a64a6;
case 0x5a64aa:c.instructions+=6;goto B5a64aa;
case 0x5a64ab:c.instructions+=5;goto B5a64ab;
case 0x5a64ad:c.instructions+=4;goto B5a64ad;
case 0x5a64ae:c.instructions+=3;goto B5a64ae;
case 0x5a64b2:c.instructions+=2;goto B5a64b2;
case 0x5a64b6:c.instructions+=1;goto B5a64b6;
case 0x5a64bb:goto L5a64bb;
case 0x5a64bd:c.instructions+=5;goto B5a64bd;
case 0x5a64c0:c.instructions+=4;goto B5a64c0;
case 0x5a64c5:c.instructions+=3;goto B5a64c5;
case 0x5a64c9:c.instructions+=2;goto B5a64c9;
case 0x5a64cd:c.instructions+=1;goto B5a64cd;
case 0x5a64cf:goto L5a64cf;
case 0x5a64d3:c.instructions+=3;goto B5a64d3;
case 0x5a64d7:c.instructions+=2;goto B5a64d7;
case 0x5a64d9:c.instructions+=1;goto B5a64d9;
case 0x5a64db:goto L5a64db;
case 0x5a64df:c.instructions+=4;goto B5a64df;
case 0x5a64e4:c.instructions+=3;goto B5a64e4;
case 0x5a64e6:c.instructions+=2;goto B5a64e6;
case 0x5a64ea:c.instructions+=1;goto B5a64ea;
case 0x5a64f0:goto L5a64f0;
case 0x5a64f2:c.instructions+=2;goto B5a64f2;
case 0x5a64f6:c.instructions+=1;goto B5a64f6;
case 0x5a64f8:goto L5a64f8;
case 0x5a64f9:c.instructions+=2;goto B5a64f9;
case 0x5a64fa:c.instructions+=1;goto B5a64fa;
case 0x5a64ff:goto L5a64ff;
case 0x5a6501:c.instructions+=3;goto B5a6501;
case 0x5a6504:c.instructions+=2;goto B5a6504;
case 0x5a6506:c.instructions+=1;goto B5a6506;
case 0x5a6508:goto L5a6508;
case 0x5a650b:c.instructions+=4;goto B5a650b;
case 0x5a650d:c.instructions+=3;goto B5a650d;
case 0x5a650f:c.instructions+=2;goto B5a650f;
case 0x5a6511:c.instructions+=1;goto B5a6511;
case 0x5a6513:goto L5a6513;
case 0x5a6516:goto L5a6516;
case 0x5a651a:c.instructions+=4;goto B5a651a;
case 0x5a651c:c.instructions+=3;goto B5a651c;
case 0x5a651e:c.instructions+=2;goto B5a651e;
case 0x5a651f:c.instructions+=1;goto B5a651f;
case 0x5a6524:goto L5a6524;
case 0x5a6526:c.instructions+=5;goto B5a6526;
case 0x5a6529:c.instructions+=4;goto B5a6529;
case 0x5a652a:c.instructions+=3;goto B5a652a;
case 0x5a652d:c.instructions+=2;goto B5a652d;
case 0x5a652f:c.instructions+=1;goto B5a652f;
case 0x5a6531:goto L5a6531;
case 0x5a6535:goto L5a6535;
case 0x5a6539:c.instructions+=4;goto B5a6539;
case 0x5a653d:c.instructions+=3;goto B5a653d;
case 0x5a653f:c.instructions+=2;goto B5a653f;
case 0x5a6543:c.instructions+=1;goto B5a6543;
case 0x5a6547:goto L5a6547;
case 0x5a6548:c.instructions+=3;goto B5a6548;
case 0x5a654a:c.instructions+=2;goto B5a654a;
case 0x5a654e:c.instructions+=1;goto B5a654e;
case 0x5a6550:goto L5a6550;
case 0x5a6554:goto L5a6554;
case 0x5a6558:c.instructions+=4;goto B5a6558;
case 0x5a6559:c.instructions+=3;goto B5a6559;
case 0x5a655b:c.instructions+=2;goto B5a655b;
case 0x5a655f:c.instructions+=1;goto B5a655f;
case 0x5a6561:goto L5a6561;
case 0x5a6565:c.instructions+=6;goto B5a6565;
case 0x5a6566:c.instructions+=5;goto B5a6566;
case 0x5a6567:c.instructions+=4;goto B5a6567;
case 0x5a6568:c.instructions+=3;goto B5a6568;
case 0x5a6569:c.instructions+=2;goto B5a6569;
case 0x5a656c:c.instructions+=1;goto B5a656c;
case 0x5a656f:goto L5a656f;
case 0x5a6570:c.instructions+=6;goto B5a6570;
case 0x5a6571:c.instructions+=5;goto B5a6571;
case 0x5a6572:c.instructions+=4;goto B5a6572;
case 0x5a6574:c.instructions+=3;goto B5a6574;
case 0x5a6575:c.instructions+=2;goto B5a6575;
case 0x5a6578:c.instructions+=1;goto B5a6578;
case 0x5a6580:goto L5a6580;
case 0x5a6583:c.instructions+=9;goto B5a6583;
case 0x5a6584:c.instructions+=8;goto B5a6584;
case 0x5a6585:c.instructions+=7;goto B5a6585;
case 0x5a6586:c.instructions+=6;goto B5a6586;
case 0x5a658a:c.instructions+=5;goto B5a658a;
case 0x5a658c:c.instructions+=4;goto B5a658c;
case 0x5a658d:c.instructions+=3;goto B5a658d;
case 0x5a658f:c.instructions+=2;goto B5a658f;
case 0x5a6597:c.instructions+=1;goto B5a6597;
case 0x5a6599:goto L5a6599;
case 0x5a659d:c.instructions+=2;goto B5a659d;
case 0x5a659f:c.instructions+=1;goto B5a659f;
case 0x5a65a1:goto L5a65a1;
case 0x5a65a5:c.instructions+=3;goto B5a65a5;
case 0x5a65a6:c.instructions+=2;goto B5a65a6;
case 0x5a65aa:c.instructions+=1;goto B5a65aa;
case 0x5a65ac:goto L5a65ac;
case 0x5a65af:c.instructions+=1;goto B5a65af;
case 0x5a65b1:goto L5a65b1;
case 0x5a65b4:c.instructions+=1;goto B5a65b4;
case 0x5a65b6:goto L5a65b6;
case 0x5a65bb:c.instructions+=1;goto B5a65bb;
case 0x5a65bd:goto L5a65bd;
case 0x5a65c2:c.instructions+=1;goto B5a65c2;
case 0x5a65c4:goto L5a65c4;
case 0x5a65c9:goto L5a65c9;
case 0x5a65cd:goto L5a65cd;
case 0x5a65cf:c.instructions+=2;goto B5a65cf;
case 0x5a65d1:c.instructions+=1;goto B5a65d1;
case 0x5a65d3:goto L5a65d3;
case 0x5a65d5:goto L5a65d5;
case 0x5a65da:c.instructions+=1;goto B5a65da;
case 0x5a65e0:goto L5a65e0;
case 0x5a65e4:c.instructions+=3;goto B5a65e4;
case 0x5a65e5:c.instructions+=2;goto B5a65e5;
case 0x5a65e6:c.instructions+=1;goto B5a65e6;
case 0x5a65eb:goto L5a65eb;
case 0x5a65ee:c.instructions+=2;goto B5a65ee;
case 0x5a65f0:c.instructions+=1;goto B5a65f0;
case 0x5a65f2:goto L5a65f2;
case 0x5a65f3:c.instructions+=4;goto B5a65f3;
case 0x5a65f4:c.instructions+=3;goto B5a65f4;
case 0x5a65f5:c.instructions+=2;goto B5a65f5;
case 0x5a65f6:c.instructions+=1;goto B5a65f6;
case 0x5a65fb:goto L5a65fb;
case 0x5a65fe:goto L5a65fe;
case 0x5a65ff:c.instructions+=2;goto B5a65ff;
case 0x5a6602:c.instructions+=1;goto B5a6602;
case 0x5a6604:goto L5a6604;
case 0x5a6608:c.instructions+=3;goto B5a6608;
case 0x5a660a:c.instructions+=2;goto B5a660a;
case 0x5a660d:c.instructions+=1;goto B5a660d;
case 0x5a660f:goto L5a660f;
case 0x5a6614:c.instructions+=1;goto B5a6614;
case 0x5a6617:goto L5a6617;
case 0x5a661a:c.instructions+=8;goto B5a661a;
case 0x5a661d:c.instructions+=7;goto B5a661d;
case 0x5a6620:c.instructions+=6;goto B5a6620;
case 0x5a6623:c.instructions+=5;goto B5a6623;
case 0x5a6625:c.instructions+=4;goto B5a6625;
case 0x5a6628:c.instructions+=3;goto B5a6628;
case 0x5a662b:c.instructions+=2;goto B5a662b;
case 0x5a662e:c.instructions+=1;goto B5a662e;
case 0x5a6630:goto L5a6630;
case 0x5a6632:c.instructions+=1;goto B5a6632;
case 0x5a6634:goto L5a6634;
case 0x5a6637:c.instructions+=3;goto B5a6637;
case 0x5a6638:c.instructions+=2;goto B5a6638;
case 0x5a663a:c.instructions+=1;goto B5a663a;
case 0x5a663c:goto L5a663c;
case 0x5a6640:c.instructions+=7;goto B5a6640;
case 0x5a6646:c.instructions+=6;goto B5a6646;
case 0x5a664a:c.instructions+=5;goto B5a664a;
case 0x5a664c:c.instructions+=4;goto B5a664c;
case 0x5a6652:c.instructions+=3;goto B5a6652;
case 0x5a6654:c.instructions+=2;goto B5a6654;
case 0x5a6657:c.instructions+=1;goto B5a6657;
case 0x5a6659:goto L5a6659;
case 0x5a665f:c.instructions+=3;goto B5a665f;
case 0x5a6661:c.instructions+=2;goto B5a6661;
case 0x5a6664:c.instructions+=1;goto B5a6664;
case 0x5a666a:goto L5a666a;
case 0x5a666c:c.instructions+=4;goto B5a666c;
case 0x5a666e:c.instructions+=3;goto B5a666e;
case 0x5a6671:c.instructions+=2;goto B5a6671;
case 0x5a6677:c.instructions+=1;goto B5a6677;
case 0x5a667d:goto L5a667d;
case 0x5a6682:c.instructions+=1;goto B5a6682;
case 0x5a6685:goto L5a6685;
case 0x5a6688:c.instructions+=6;goto B5a6688;
case 0x5a668c:c.instructions+=5;goto B5a668c;
case 0x5a6690:c.instructions+=4;goto B5a6690;
case 0x5a6696:c.instructions+=3;goto B5a6696;
case 0x5a6698:c.instructions+=2;goto B5a6698;
case 0x5a669b:c.instructions+=1;goto B5a669b;
case 0x5a66a1:goto L5a66a1;
case 0x5a66a5:c.instructions+=5;goto B5a66a5;
case 0x5a66ab:c.instructions+=4;goto B5a66ab;
case 0x5a66af:c.instructions+=3;goto B5a66af;
case 0x5a66b1:c.instructions+=2;goto B5a66b1;
case 0x5a66b4:c.instructions+=1;goto B5a66b4;
case 0x5a66b6:goto L5a66b6;
case 0x5a66b8:c.instructions+=1;goto B5a66b8;
case 0x5a66be:goto L5a66be;
case 0x5a66c1:c.instructions+=8;goto B5a66c1;
case 0x5a66c4:c.instructions+=7;goto B5a66c4;
case 0x5a66c8:c.instructions+=6;goto B5a66c8;
case 0x5a66ca:c.instructions+=5;goto B5a66ca;
case 0x5a66ce:c.instructions+=4;goto B5a66ce;
case 0x5a66d4:c.instructions+=3;goto B5a66d4;
case 0x5a66d6:c.instructions+=2;goto B5a66d6;
case 0x5a66d9:c.instructions+=1;goto B5a66d9;
case 0x5a66df:goto L5a66df;
case 0x5a66e3:c.instructions+=5;goto B5a66e3;
case 0x5a66e9:c.instructions+=4;goto B5a66e9;
case 0x5a66ed:c.instructions+=3;goto B5a66ed;
case 0x5a66ef:c.instructions+=2;goto B5a66ef;
case 0x5a66f2:c.instructions+=1;goto B5a66f2;
case 0x5a66f4:goto L5a66f4;
case 0x5a66f6:c.instructions+=1;goto B5a66f6;
case 0x5a66fc:goto L5a66fc;
case 0x5a66fe:c.instructions+=8;goto B5a66fe;
case 0x5a6701:c.instructions+=7;goto B5a6701;
case 0x5a6705:c.instructions+=6;goto B5a6705;
case 0x5a6707:c.instructions+=5;goto B5a6707;
case 0x5a670b:c.instructions+=4;goto B5a670b;
case 0x5a6711:c.instructions+=3;goto B5a6711;
case 0x5a6713:c.instructions+=2;goto B5a6713;
case 0x5a6716:c.instructions+=1;goto B5a6716;
case 0x5a671c:goto L5a671c;
case 0x5a6720:c.instructions+=5;goto B5a6720;
case 0x5a6726:c.instructions+=4;goto B5a6726;
case 0x5a672a:c.instructions+=3;goto B5a672a;
case 0x5a672c:c.instructions+=2;goto B5a672c;
case 0x5a672f:c.instructions+=1;goto B5a672f;
case 0x5a6731:goto L5a6731;
case 0x5a6733:c.instructions+=1;goto B5a6733;
case 0x5a6739:goto L5a6739;
case 0x5a673c:c.instructions+=8;goto B5a673c;
case 0x5a673e:c.instructions+=7;goto B5a673e;
case 0x5a6742:c.instructions+=6;goto B5a6742;
case 0x5a6744:c.instructions+=5;goto B5a6744;
case 0x5a6748:c.instructions+=4;goto B5a6748;
case 0x5a674e:c.instructions+=3;goto B5a674e;
case 0x5a6750:c.instructions+=2;goto B5a6750;
case 0x5a6753:c.instructions+=1;goto B5a6753;
case 0x5a6759:goto L5a6759;
case 0x5a675d:c.instructions+=5;goto B5a675d;
case 0x5a6763:c.instructions+=4;goto B5a6763;
case 0x5a6767:c.instructions+=3;goto B5a6767;
case 0x5a6769:c.instructions+=2;goto B5a6769;
case 0x5a676c:c.instructions+=1;goto B5a676c;
case 0x5a676e:goto L5a676e;
case 0x5a6770:c.instructions+=1;goto B5a6770;
case 0x5a6776:goto L5a6776;
case 0x5a6779:c.instructions+=6;goto B5a6779;
case 0x5a677c:c.instructions+=5;goto B5a677c;
case 0x5a677f:c.instructions+=4;goto B5a677f;
case 0x5a6781:c.instructions+=3;goto B5a6781;
case 0x5a6784:c.instructions+=2;goto B5a6784;
case 0x5a6786:c.instructions+=1;goto B5a6786;
case 0x5a678c:goto L5a678c;
case 0x5a678e:c.instructions+=1;goto B5a678e;
case 0x5a6790:goto L5a6790;
case 0x5a6793:c.instructions+=5;goto B5a6793;
case 0x5a6797:c.instructions+=4;goto B5a6797;
case 0x5a679d:c.instructions+=3;goto B5a679d;
case 0x5a679f:c.instructions+=2;goto B5a679f;
case 0x5a67a2:c.instructions+=1;goto B5a67a2;
case 0x5a67a8:goto L5a67a8;
case 0x5a67ac:c.instructions+=5;goto B5a67ac;
case 0x5a67b2:c.instructions+=4;goto B5a67b2;
case 0x5a67b6:c.instructions+=3;goto B5a67b6;
case 0x5a67b8:c.instructions+=2;goto B5a67b8;
case 0x5a67bb:c.instructions+=1;goto B5a67bb;
case 0x5a67bd:goto L5a67bd;
case 0x5a67bf:c.instructions+=1;goto B5a67bf;
case 0x5a67c5:goto L5a67c5;
case 0x5a67c8:c.instructions+=4;goto B5a67c8;
case 0x5a67c9:c.instructions+=3;goto B5a67c9;
case 0x5a67cb:c.instructions+=2;goto B5a67cb;
case 0x5a67cd:c.instructions+=1;goto B5a67cd;
case 0x5a67cf:goto L5a67cf;
case 0x5a67d3:goto L5a67d3;
case 0x5a67d5:c.instructions+=5;goto B5a67d5;
case 0x5a67d7:c.instructions+=4;goto B5a67d7;
case 0x5a67dd:c.instructions+=3;goto B5a67dd;
case 0x5a67df:c.instructions+=2;goto B5a67df;
case 0x5a67e2:c.instructions+=1;goto B5a67e2;
case 0x5a67e4:goto L5a67e4;
case 0x5a67e6:c.instructions+=4;goto B5a67e6;
case 0x5a67ec:c.instructions+=3;goto B5a67ec;
case 0x5a67ee:c.instructions+=2;goto B5a67ee;
case 0x5a67f1:c.instructions+=1;goto B5a67f1;
case 0x5a67f3:goto L5a67f3;
case 0x5a67f5:c.instructions+=4;goto B5a67f5;
case 0x5a67fb:c.instructions+=3;goto B5a67fb;
case 0x5a67fd:c.instructions+=2;goto B5a67fd;
case 0x5a6800:c.instructions+=1;goto B5a6800;
case 0x5a6802:goto L5a6802;
case 0x5a6804:c.instructions+=5;goto B5a6804;
case 0x5a680a:c.instructions+=4;goto B5a680a;
case 0x5a680c:c.instructions+=3;goto B5a680c;
case 0x5a680e:c.instructions+=2;goto B5a680e;
case 0x5a6811:c.instructions+=1;goto B5a6811;
case 0x5a6813:goto L5a6813;
case 0x5a6815:c.instructions+=1;goto B5a6815;
case 0x5a681b:goto L5a681b;
case 0x5a6821:c.instructions+=8;goto B5a6821;
case 0x5a6825:c.instructions+=7;goto B5a6825;
case 0x5a6826:c.instructions+=6;goto B5a6826;
case 0x5a6827:c.instructions+=5;goto B5a6827;
case 0x5a682b:c.instructions+=4;goto B5a682b;
case 0x5a682c:c.instructions+=3;goto B5a682c;
case 0x5a682d:c.instructions+=2;goto B5a682d;
case 0x5a6830:c.instructions+=1;goto B5a6830;
case 0x5a6833:goto L5a6833;
case 0x5a6839:c.instructions+=1;goto B5a6839;
case 0x5a683e:goto L5a683e;
case 0x5a6844:c.instructions+=1;goto B5a6844;
case 0x5a6849:goto L5a6849;
case 0x5a684f:c.instructions+=1;goto B5a684f;
case 0x5a6854:goto L5a6854;
case 0x5a685a:c.instructions+=1;goto B5a685a;
case 0x5a685f:goto L5a685f;
case 0x5a6865:c.instructions+=1;goto B5a6865;
case 0x5a686a:goto L5a686a;
case 0x5a6870:c.instructions+=1;goto B5a6870;
case 0x5a6880:goto L5a6880;
case 0x5a6881:c.instructions+=11;goto B5a6881;
case 0x5a6883:c.instructions+=10;goto B5a6883;
case 0x5a6886:c.instructions+=9;goto B5a6886;
case 0x5a688c:c.instructions+=8;goto B5a688c;
case 0x5a688f:c.instructions+=7;goto B5a688f;
case 0x5a6891:c.instructions+=6;goto B5a6891;
case 0x5a6892:c.instructions+=5;goto B5a6892;
case 0x5a6893:c.instructions+=4;goto B5a6893;
case 0x5a6895:c.instructions+=3;goto B5a6895;
case 0x5a6896:c.instructions+=2;goto B5a6896;
case 0x5a689a:c.instructions+=1;goto B5a689a;
case 0x5a689c:goto L5a689c;
case 0x5a68a3:goto L5a68a3;
case 0x5a68a6:c.instructions+=5;goto B5a68a6;
case 0x5a68a8:c.instructions+=4;goto B5a68a8;
case 0x5a68aa:c.instructions+=3;goto B5a68aa;
case 0x5a68b2:c.instructions+=2;goto B5a68b2;
case 0x5a68b6:c.instructions+=1;goto B5a68b6;
case 0x5a68bc:goto L5a68bc;
case 0x5a68bf:c.instructions+=3;goto B5a68bf;
case 0x5a68c5:c.instructions+=2;goto B5a68c5;
case 0x5a68cb:c.instructions+=1;goto B5a68cb;
case 0x5a68d0:goto L5a68d0;
case 0x5a68d1:c.instructions+=2;goto B5a68d1;
case 0x5a68d5:c.instructions+=1;goto B5a68d5;
case 0x5a68d7:goto L5a68d7;
case 0x5a68db:c.instructions+=1;goto B5a68db;
case 0x5a68e0:goto L5a68e0;
case 0x5a68e3:c.instructions+=2;goto B5a68e3;
case 0x5a68e5:c.instructions+=1;goto B5a68e5;
case 0x5a68e7:goto L5a68e7;
case 0x5a68ea:c.instructions+=2;goto B5a68ea;
case 0x5a68ee:c.instructions+=1;goto B5a68ee;
case 0x5a68f0:goto L5a68f0;
case 0x5a68f4:goto L5a68f4;
case 0x5a68f8:c.instructions+=3;goto B5a68f8;
case 0x5a68f9:c.instructions+=2;goto B5a68f9;
case 0x5a68fb:c.instructions+=1;goto B5a68fb;
case 0x5a6900:goto L5a6900;
case 0x5a6904:c.instructions+=3;goto B5a6904;
case 0x5a6909:c.instructions+=2;goto B5a6909;
case 0x5a690b:c.instructions+=1;goto B5a690b;
case 0x5a690f:goto L5a690f;
case 0x5a6911:goto L5a6911;
case 0x5a6913:c.instructions+=4;goto B5a6913;
case 0x5a6918:c.instructions+=3;goto B5a6918;
case 0x5a691a:c.instructions+=2;goto B5a691a;
case 0x5a6921:c.instructions+=1;goto B5a6921;
case 0x5a6923:goto L5a6923;
case 0x5a6925:goto L5a6925;
case 0x5a6926:c.instructions+=2;goto B5a6926;
case 0x5a6928:c.instructions+=1;goto B5a6928;
case 0x5a692d:goto L5a692d;
case 0x5a6932:c.instructions+=7;goto B5a6932;
case 0x5a6936:c.instructions+=6;goto B5a6936;
case 0x5a6939:c.instructions+=5;goto B5a6939;
case 0x5a693b:c.instructions+=4;goto B5a693b;
case 0x5a6941:c.instructions+=3;goto B5a6941;
case 0x5a6943:c.instructions+=2;goto B5a6943;
case 0x5a6946:c.instructions+=1;goto B5a6946;
case 0x5a6948:goto L5a6948;
case 0x5a694d:goto L5a694d;
case 0x5a6951:c.instructions+=3;goto B5a6951;
case 0x5a6954:c.instructions+=2;goto B5a6954;
case 0x5a695c:c.instructions+=1;goto B5a695c;
case 0x5a695e:goto L5a695e;
case 0x5a6962:goto L5a6962;
case 0x5a6966:c.instructions+=4;goto B5a6966;
case 0x5a696b:c.instructions+=3;goto B5a696b;
case 0x5a696d:c.instructions+=2;goto B5a696d;
case 0x5a6971:c.instructions+=1;goto B5a6971;
case 0x5a6977:goto L5a6977;
case 0x5a6980:goto L5a6980;
case 0x5a6984:c.instructions+=2;goto B5a6984;
case 0x5a6986:c.instructions+=1;goto B5a6986;
case 0x5a698c:goto L5a698c;
case 0x5a6994:goto L5a6994;
case 0x5a6998:c.instructions+=2;goto B5a6998;
case 0x5a699a:c.instructions+=1;goto B5a699a;
case 0x5a69a0:goto L5a69a0;
case 0x5a69a4:c.instructions+=11;goto B5a69a4;
case 0x5a69a8:c.instructions+=10;goto B5a69a8;
case 0x5a69aa:c.instructions+=9;goto B5a69aa;
case 0x5a69ad:c.instructions+=8;goto B5a69ad;
case 0x5a69b1:c.instructions+=7;goto B5a69b1;
case 0x5a69b2:c.instructions+=6;goto B5a69b2;
case 0x5a69b4:c.instructions+=5;goto B5a69b4;
case 0x5a69b5:c.instructions+=4;goto B5a69b5;
case 0x5a69b6:c.instructions+=3;goto B5a69b6;
case 0x5a69ba:c.instructions+=2;goto B5a69ba;
case 0x5a69bb:c.instructions+=1;goto B5a69bb;
case 0x5a69c0:goto L5a69c0;
case 0x5a69c3:c.instructions+=2;goto B5a69c3;
case 0x5a69c5:c.instructions+=1;goto B5a69c5;
case 0x5a69cb:goto L5a69cb;
case 0x5a69d0:goto L5a69d0;
case 0x5a69d4:c.instructions+=2;goto B5a69d4;
case 0x5a69d6:c.instructions+=1;goto B5a69d6;
case 0x5a69dc:goto L5a69dc;
case 0x5a69de:c.instructions+=4;goto B5a69de;
case 0x5a69e0:c.instructions+=3;goto B5a69e0;
case 0x5a69e1:c.instructions+=2;goto B5a69e1;
case 0x5a69e5:c.instructions+=1;goto B5a69e5;
case 0x5a69ea:goto L5a69ea;
case 0x5a69ec:c.instructions+=1;goto B5a69ec;
case 0x5a69ee:goto L5a69ee;
case 0x5a69f2:c.instructions+=5;goto B5a69f2;
case 0x5a69f4:c.instructions+=4;goto B5a69f4;
case 0x5a69f6:c.instructions+=3;goto B5a69f6;
case 0x5a69f7:c.instructions+=2;goto B5a69f7;
case 0x5a69fb:c.instructions+=1;goto B5a69fb;
case 0x5a6a00:goto L5a6a00;
case 0x5a6a03:c.instructions+=11;goto B5a6a03;
case 0x5a6a05:c.instructions+=10;goto B5a6a05;
case 0x5a6a07:c.instructions+=9;goto B5a6a07;
case 0x5a6a0b:c.instructions+=8;goto B5a6a0b;
case 0x5a6a0f:c.instructions+=7;goto B5a6a0f;
case 0x5a6a12:c.instructions+=6;goto B5a6a12;
case 0x5a6a14:c.instructions+=5;goto B5a6a14;
case 0x5a6a16:c.instructions+=4;goto B5a6a16;
case 0x5a6a18:c.instructions+=3;goto B5a6a18;
case 0x5a6a1a:c.instructions+=2;goto B5a6a1a;
case 0x5a6a1d:c.instructions+=1;goto B5a6a1d;
case 0x5a6a1f:goto L5a6a1f;
case 0x5a6a23:c.instructions+=5;goto B5a6a23;
case 0x5a6a28:c.instructions+=4;goto B5a6a28;
case 0x5a6a2c:c.instructions+=3;goto B5a6a2c;
case 0x5a6a30:c.instructions+=2;goto B5a6a30;
case 0x5a6a36:c.instructions+=1;goto B5a6a36;
case 0x5a6a3d:goto L5a6a3d;
case 0x5a6a3f:goto L5a6a3f;
case 0x5a6a41:c.instructions+=2;goto B5a6a41;
case 0x5a6a44:c.instructions+=1;goto B5a6a44;
case 0x5a6a46:goto L5a6a46;
case 0x5a6a4b:c.instructions+=1;goto B5a6a4b;
case 0x5a6a4d:goto L5a6a4d;
case 0x5a6a52:c.instructions+=1;goto B5a6a52;
case 0x5a6a54:goto L5a6a54;
case 0x5a6a56:goto L5a6a56;
case 0x5a6a5b:c.instructions+=1;goto B5a6a5b;
case 0x5a6a5d:goto L5a6a5d;
case 0x5a6a5f:c.instructions+=3;goto B5a6a5f;
case 0x5a6a61:c.instructions+=2;goto B5a6a61;
case 0x5a6a64:c.instructions+=1;goto B5a6a64;
case 0x5a6a66:goto L5a6a66;
case 0x5a6a6a:c.instructions+=10;goto B5a6a6a;
case 0x5a6a6c:c.instructions+=9;goto B5a6a6c;
case 0x5a6a6f:c.instructions+=8;goto B5a6a6f;
case 0x5a6a73:c.instructions+=7;goto B5a6a73;
case 0x5a6a74:c.instructions+=6;goto B5a6a74;
case 0x5a6a76:c.instructions+=5;goto B5a6a76;
case 0x5a6a77:c.instructions+=4;goto B5a6a77;
case 0x5a6a78:c.instructions+=3;goto B5a6a78;
case 0x5a6a7c:c.instructions+=2;goto B5a6a7c;
case 0x5a6a7d:c.instructions+=1;goto B5a6a7d;
case 0x5a6a82:goto L5a6a82;
case 0x5a6a85:c.instructions+=2;goto B5a6a85;
case 0x5a6a87:c.instructions+=1;goto B5a6a87;
case 0x5a6a8d:goto L5a6a8d;
case 0x5a6a91:c.instructions+=5;goto B5a6a91;
case 0x5a6a95:c.instructions+=4;goto B5a6a95;
case 0x5a6a96:c.instructions+=3;goto B5a6a96;
case 0x5a6a99:c.instructions+=2;goto B5a6a99;
case 0x5a6a9e:c.instructions+=1;goto B5a6a9e;
case 0x5a6aa2:goto L5a6aa2;
case 0x5a6aa4:goto L5a6aa4;
case 0x5a6aa8:c.instructions+=1;goto B5a6aa8;
case 0x5a6aae:goto L5a6aae;
case 0x5a6ab2:c.instructions+=2;goto B5a6ab2;
case 0x5a6ab4:c.instructions+=1;goto B5a6ab4;
case 0x5a6ab6:goto L5a6ab6;
case 0x5a6aba:c.instructions+=3;goto B5a6aba;
case 0x5a6abe:c.instructions+=2;goto B5a6abe;
case 0x5a6ac0:c.instructions+=1;goto B5a6ac0;
case 0x5a6ac2:goto L5a6ac2;
case 0x5a6ac6:c.instructions+=5;goto B5a6ac6;
case 0x5a6aca:c.instructions+=4;goto B5a6aca;
case 0x5a6acb:c.instructions+=3;goto B5a6acb;
case 0x5a6acc:c.instructions+=2;goto B5a6acc;
case 0x5a6ace:c.instructions+=1;goto B5a6ace;
case 0x5a6ad3:goto L5a6ad3;
case 0x5a6ad8:c.instructions+=1;goto B5a6ad8;
case 0x5a6adc:goto L5a6adc;
case 0x5a6ade:goto L5a6ade;
case 0x5a6ae2:c.instructions+=6;goto B5a6ae2;
case 0x5a6ae6:c.instructions+=5;goto B5a6ae6;
case 0x5a6aea:c.instructions+=4;goto B5a6aea;
case 0x5a6aeb:c.instructions+=3;goto B5a6aeb;
case 0x5a6aed:c.instructions+=2;goto B5a6aed;
case 0x5a6af1:c.instructions+=1;goto B5a6af1;
case 0x5a6af7:goto L5a6af7;
case 0x5a6af9:c.instructions+=3;goto B5a6af9;
case 0x5a6afe:c.instructions+=2;goto B5a6afe;
case 0x5a6b05:c.instructions+=1;goto B5a6b05;
case 0x5a6b07:goto L5a6b07;
case 0x5a6b09:goto L5a6b09;
case 0x5a6b0d:c.instructions+=4;goto B5a6b0d;
case 0x5a6b0f:c.instructions+=3;goto B5a6b0f;
case 0x5a6b10:c.instructions+=2;goto B5a6b10;
case 0x5a6b17:c.instructions+=1;goto B5a6b17;
case 0x5a6b1c:goto L5a6b1c;
case 0x5a6b20:c.instructions+=7;goto B5a6b20;
case 0x5a6b24:c.instructions+=6;goto B5a6b24;
case 0x5a6b27:c.instructions+=5;goto B5a6b27;
case 0x5a6b28:c.instructions+=4;goto B5a6b28;
case 0x5a6b2a:c.instructions+=3;goto B5a6b2a;
case 0x5a6b2e:c.instructions+=2;goto B5a6b2e;
case 0x5a6b32:c.instructions+=1;goto B5a6b32;
case 0x5a6b38:goto L5a6b38;
case 0x5a6b3b:c.instructions+=7;goto B5a6b3b;
case 0x5a6b3c:c.instructions+=6;goto B5a6b3c;
case 0x5a6b3d:c.instructions+=5;goto B5a6b3d;
case 0x5a6b3e:c.instructions+=4;goto B5a6b3e;
case 0x5a6b42:c.instructions+=3;goto B5a6b42;
case 0x5a6b44:c.instructions+=2;goto B5a6b44;
case 0x5a6b45:c.instructions+=1;goto B5a6b45;
case 0x5a6b50:goto L5a6b50;
case 0x5a6b51:c.instructions+=7;goto B5a6b51;
case 0x5a6b55:c.instructions+=6;goto B5a6b55;
case 0x5a6b56:c.instructions+=5;goto B5a6b56;
case 0x5a6b58:c.instructions+=4;goto B5a6b58;
case 0x5a6b5a:c.instructions+=3;goto B5a6b5a;
case 0x5a6b5e:c.instructions+=2;goto B5a6b5e;
case 0x5a6b60:c.instructions+=1;goto B5a6b60;
case 0x5a6b65:goto L5a6b65;
case 0x5a6b6b:c.instructions+=4;goto B5a6b6b;
case 0x5a6b6d:c.instructions+=3;goto B5a6b6d;
case 0x5a6b6f:c.instructions+=2;goto B5a6b6f;
case 0x5a6b72:c.instructions+=1;goto B5a6b72;
case 0x5a6b74:goto L5a6b74;
case 0x5a6b7a:c.instructions+=17;goto B5a6b7a;
case 0x5a6b7e:c.instructions+=16;goto B5a6b7e;
case 0x5a6b80:c.instructions+=15;goto B5a6b80;
case 0x5a6b82:c.instructions+=14;goto B5a6b82;
case 0x5a6b84:c.instructions+=13;goto B5a6b84;
case 0x5a6b8a:c.instructions+=12;goto B5a6b8a;
case 0x5a6b90:c.instructions+=11;goto B5a6b90;
case 0x5a6b92:c.instructions+=10;goto B5a6b92;
case 0x5a6b94:c.instructions+=9;goto B5a6b94;
case 0x5a6b96:c.instructions+=8;goto B5a6b96;
case 0x5a6b9c:c.instructions+=7;goto B5a6b9c;
case 0x5a6b9e:c.instructions+=6;goto B5a6b9e;
case 0x5a6ba4:c.instructions+=5;goto B5a6ba4;
case 0x5a6baa:c.instructions+=4;goto B5a6baa;
case 0x5a6bac:c.instructions+=3;goto B5a6bac;
case 0x5a6bb2:c.instructions+=2;goto B5a6bb2;
case 0x5a6bb8:c.instructions+=1;goto B5a6bb8;
case 0x5a6bbe:goto L5a6bbe;
case 0x5a6bc0:c.instructions+=2;goto B5a6bc0;
case 0x5a6bc1:c.instructions+=1;goto B5a6bc1;
case 0x5a6bd0:goto L5a6bd0;
case 0x5a6bd3:c.instructions+=8;goto B5a6bd3;
case 0x5a6bd4:c.instructions+=7;goto B5a6bd4;
case 0x5a6bd8:c.instructions+=6;goto B5a6bd8;
case 0x5a6bd9:c.instructions+=5;goto B5a6bd9;
case 0x5a6bdb:c.instructions+=4;goto B5a6bdb;
case 0x5a6bdd:c.instructions+=3;goto B5a6bdd;
case 0x5a6be1:c.instructions+=2;goto B5a6be1;
case 0x5a6be3:c.instructions+=1;goto B5a6be3;
case 0x5a6be8:goto L5a6be8;
case 0x5a6bee:c.instructions+=3;goto B5a6bee;
case 0x5a6bf0:c.instructions+=2;goto B5a6bf0;
case 0x5a6bf3:c.instructions+=1;goto B5a6bf3;
case 0x5a6bf9:goto L5a6bf9;
case 0x5a6bfd:c.instructions+=4;goto B5a6bfd;
case 0x5a6bfe:c.instructions+=3;goto B5a6bfe;
case 0x5a6c04:c.instructions+=2;goto B5a6c04;
case 0x5a6c0a:c.instructions+=1;goto B5a6c0a;
case 0x5a6c0f:goto L5a6c0f;
case 0x5a6c12:c.instructions+=2;goto B5a6c12;
case 0x5a6c16:c.instructions+=1;goto B5a6c16;
case 0x5a6c1c:goto L5a6c1c;
case 0x5a6c1f:c.instructions+=1;goto B5a6c1f;
case 0x5a6c25:goto L5a6c25;
case 0x5a6c28:c.instructions+=16;goto B5a6c28;
case 0x5a6c2f:c.instructions+=15;goto B5a6c2f;
case 0x5a6c36:c.instructions+=14;goto B5a6c36;
case 0x5a6c3c:c.instructions+=13;goto B5a6c3c;
case 0x5a6c3f:c.instructions+=12;goto B5a6c3f;
case 0x5a6c45:c.instructions+=11;goto B5a6c45;
case 0x5a6c48:c.instructions+=10;goto B5a6c48;
case 0x5a6c4e:c.instructions+=9;goto B5a6c4e;
case 0x5a6c50:c.instructions+=8;goto B5a6c50;
case 0x5a6c51:c.instructions+=7;goto B5a6c51;
case 0x5a6c57:c.instructions+=6;goto B5a6c57;
case 0x5a6c5a:c.instructions+=5;goto B5a6c5a;
case 0x5a6c60:c.instructions+=4;goto B5a6c60;
case 0x5a6c61:c.instructions+=3;goto B5a6c61;
case 0x5a6c64:c.instructions+=2;goto B5a6c64;
case 0x5a6c6a:c.instructions+=1;goto B5a6c6a;
case 0x5a6c6f:goto L5a6c6f;
case 0x5a6c71:goto L5a6c71;
case 0x5a6c78:c.instructions+=2;goto B5a6c78;
case 0x5a6c7d:c.instructions+=1;goto B5a6c7d;
case 0x5a6c80:goto L5a6c80;
case 0x5a6c82:c.instructions+=4;goto B5a6c82;
case 0x5a6c88:c.instructions+=3;goto B5a6c88;
case 0x5a6c8a:c.instructions+=2;goto B5a6c8a;
case 0x5a6c8d:c.instructions+=1;goto B5a6c8d;
case 0x5a6c8f:goto L5a6c8f;
case 0x5a6c92:c.instructions+=6;goto B5a6c92;
case 0x5a6c93:c.instructions+=5;goto B5a6c93;
case 0x5a6c94:c.instructions+=4;goto B5a6c94;
case 0x5a6c97:c.instructions+=3;goto B5a6c97;
case 0x5a6c9a:c.instructions+=2;goto B5a6c9a;
case 0x5a6c9d:c.instructions+=1;goto B5a6c9d;
case 0x5a6c9f:goto L5a6c9f;
case 0x5a6ca2:c.instructions+=3;goto B5a6ca2;
case 0x5a6ca3:c.instructions+=2;goto B5a6ca3;
case 0x5a6ca9:c.instructions+=1;goto B5a6ca9;
case 0x5a6caa:goto L5a6caa;
case 0x5a6cb0:c.instructions+=18;goto B5a6cb0;
case 0x5a6cb6:c.instructions+=17;goto B5a6cb6;
case 0x5a6cb8:c.instructions+=16;goto B5a6cb8;
case 0x5a6cbc:c.instructions+=15;goto B5a6cbc;
case 0x5a6cbe:c.instructions+=14;goto B5a6cbe;
case 0x5a6cc4:c.instructions+=13;goto B5a6cc4;
case 0x5a6cc6:c.instructions+=12;goto B5a6cc6;
case 0x5a6ccc:c.instructions+=11;goto B5a6ccc;
case 0x5a6cd2:c.instructions+=10;goto B5a6cd2;
case 0x5a6cd4:c.instructions+=9;goto B5a6cd4;
case 0x5a6cd8:c.instructions+=8;goto B5a6cd8;
case 0x5a6cda:c.instructions+=7;goto B5a6cda;
case 0x5a6ce0:c.instructions+=6;goto B5a6ce0;
case 0x5a6ce2:c.instructions+=5;goto B5a6ce2;
case 0x5a6ce8:c.instructions+=4;goto B5a6ce8;
case 0x5a6cec:c.instructions+=3;goto B5a6cec;
case 0x5a6cf2:c.instructions+=2;goto B5a6cf2;
case 0x5a6cf8:c.instructions+=1;goto B5a6cf8;
case 0x5a6cf9:goto L5a6cf9;
case 0x5a6cfa:c.instructions+=2;goto B5a6cfa;
case 0x5a6cfd:c.instructions+=1;goto B5a6cfd;
case 0x5a6d00:goto L5a6d00;
case 0x5a6d01:c.instructions+=7;goto B5a6d01;
case 0x5a6d05:c.instructions+=6;goto B5a6d05;
case 0x5a6d06:c.instructions+=5;goto B5a6d06;
case 0x5a6d08:c.instructions+=4;goto B5a6d08;
case 0x5a6d0a:c.instructions+=3;goto B5a6d0a;
case 0x5a6d0e:c.instructions+=2;goto B5a6d0e;
case 0x5a6d10:c.instructions+=1;goto B5a6d10;
case 0x5a6d15:goto L5a6d15;
case 0x5a6d1b:c.instructions+=4;goto B5a6d1b;
case 0x5a6d1d:c.instructions+=3;goto B5a6d1d;
case 0x5a6d1f:c.instructions+=2;goto B5a6d1f;
case 0x5a6d22:c.instructions+=1;goto B5a6d22;
case 0x5a6d28:goto L5a6d28;
case 0x5a6d2e:c.instructions+=48;goto B5a6d2e;
case 0x5a6d32:c.instructions+=47;goto B5a6d32;
case 0x5a6d34:c.instructions+=46;goto B5a6d34;
case 0x5a6d3a:c.instructions+=45;goto B5a6d3a;
case 0x5a6d40:c.instructions+=44;goto B5a6d40;
case 0x5a6d46:c.instructions+=43;goto B5a6d46;
case 0x5a6d48:c.instructions+=42;goto B5a6d48;
case 0x5a6d4e:c.instructions+=41;goto B5a6d4e;
case 0x5a6d54:c.instructions+=40;goto B5a6d54;
case 0x5a6d5a:c.instructions+=39;goto B5a6d5a;
case 0x5a6d5c:c.instructions+=38;goto B5a6d5c;
case 0x5a6d62:c.instructions+=37;goto B5a6d62;
case 0x5a6d68:c.instructions+=36;goto B5a6d68;
case 0x5a6d6e:c.instructions+=35;goto B5a6d6e;
case 0x5a6d70:c.instructions+=34;goto B5a6d70;
case 0x5a6d76:c.instructions+=33;goto B5a6d76;
case 0x5a6d7c:c.instructions+=32;goto B5a6d7c;
case 0x5a6d82:c.instructions+=31;goto B5a6d82;
case 0x5a6d84:c.instructions+=30;goto B5a6d84;
case 0x5a6d8a:c.instructions+=29;goto B5a6d8a;
case 0x5a6d90:c.instructions+=28;goto B5a6d90;
case 0x5a6d96:c.instructions+=27;goto B5a6d96;
case 0x5a6d98:c.instructions+=26;goto B5a6d98;
case 0x5a6d9e:c.instructions+=25;goto B5a6d9e;
case 0x5a6da4:c.instructions+=24;goto B5a6da4;
case 0x5a6daa:c.instructions+=23;goto B5a6daa;
case 0x5a6dac:c.instructions+=22;goto B5a6dac;
case 0x5a6db2:c.instructions+=21;goto B5a6db2;
case 0x5a6db8:c.instructions+=20;goto B5a6db8;
case 0x5a6dbe:c.instructions+=19;goto B5a6dbe;
case 0x5a6dc0:c.instructions+=18;goto B5a6dc0;
case 0x5a6dc6:c.instructions+=17;goto B5a6dc6;
case 0x5a6dcc:c.instructions+=16;goto B5a6dcc;
case 0x5a6dd2:c.instructions+=15;goto B5a6dd2;
case 0x5a6dd4:c.instructions+=14;goto B5a6dd4;
case 0x5a6dda:c.instructions+=13;goto B5a6dda;
case 0x5a6de0:c.instructions+=12;goto B5a6de0;
case 0x5a6de6:c.instructions+=11;goto B5a6de6;
case 0x5a6de8:c.instructions+=10;goto B5a6de8;
case 0x5a6dee:c.instructions+=9;goto B5a6dee;
case 0x5a6df4:c.instructions+=8;goto B5a6df4;
case 0x5a6dfa:c.instructions+=7;goto B5a6dfa;
case 0x5a6dfc:c.instructions+=6;goto B5a6dfc;
case 0x5a6e02:c.instructions+=5;goto B5a6e02;
case 0x5a6e08:c.instructions+=4;goto B5a6e08;
case 0x5a6e0e:c.instructions+=3;goto B5a6e0e;
case 0x5a6e10:c.instructions+=2;goto B5a6e10;
case 0x5a6e16:c.instructions+=1;goto B5a6e16;
case 0x5a6e1c:goto L5a6e1c;
case 0x5a6e1e:c.instructions+=2;goto B5a6e1e;
case 0x5a6e1f:c.instructions+=1;goto B5a6e1f;
case 0x5a6e30:goto L5a6e30;
case 0x5a6e31:c.instructions+=7;goto B5a6e31;
case 0x5a6e35:c.instructions+=6;goto B5a6e35;
case 0x5a6e36:c.instructions+=5;goto B5a6e36;
case 0x5a6e38:c.instructions+=4;goto B5a6e38;
case 0x5a6e3a:c.instructions+=3;goto B5a6e3a;
case 0x5a6e3e:c.instructions+=2;goto B5a6e3e;
case 0x5a6e40:c.instructions+=1;goto B5a6e40;
case 0x5a6e45:goto L5a6e45;
case 0x5a6e49:c.instructions+=74;goto B5a6e49;
case 0x5a6e4f:c.instructions+=73;goto B5a6e4f;
case 0x5a6e55:c.instructions+=72;goto B5a6e55;
case 0x5a6e57:c.instructions+=71;goto B5a6e57;
case 0x5a6e59:c.instructions+=70;goto B5a6e59;
case 0x5a6e5b:c.instructions+=69;goto B5a6e5b;
case 0x5a6e61:c.instructions+=68;goto B5a6e61;
case 0x5a6e67:c.instructions+=67;goto B5a6e67;
case 0x5a6e6d:c.instructions+=66;goto B5a6e6d;
case 0x5a6e73:c.instructions+=65;goto B5a6e73;
case 0x5a6e79:c.instructions+=64;goto B5a6e79;
case 0x5a6e7b:c.instructions+=63;goto B5a6e7b;
case 0x5a6e7d:c.instructions+=62;goto B5a6e7d;
case 0x5a6e7f:c.instructions+=61;goto B5a6e7f;
case 0x5a6e85:c.instructions+=60;goto B5a6e85;
case 0x5a6e8b:c.instructions+=59;goto B5a6e8b;
case 0x5a6e91:c.instructions+=58;goto B5a6e91;
case 0x5a6e97:c.instructions+=57;goto B5a6e97;
case 0x5a6e9d:c.instructions+=56;goto B5a6e9d;
case 0x5a6e9f:c.instructions+=55;goto B5a6e9f;
case 0x5a6ea1:c.instructions+=54;goto B5a6ea1;
case 0x5a6ea3:c.instructions+=53;goto B5a6ea3;
case 0x5a6ea9:c.instructions+=52;goto B5a6ea9;
case 0x5a6eaf:c.instructions+=51;goto B5a6eaf;
case 0x5a6eb5:c.instructions+=50;goto B5a6eb5;
case 0x5a6ebb:c.instructions+=49;goto B5a6ebb;
case 0x5a6ec1:c.instructions+=48;goto B5a6ec1;
case 0x5a6ec3:c.instructions+=47;goto B5a6ec3;
case 0x5a6ec5:c.instructions+=46;goto B5a6ec5;
case 0x5a6ec7:c.instructions+=45;goto B5a6ec7;
case 0x5a6ecd:c.instructions+=44;goto B5a6ecd;
case 0x5a6ed3:c.instructions+=43;goto B5a6ed3;
case 0x5a6ed9:c.instructions+=42;goto B5a6ed9;
case 0x5a6edf:c.instructions+=41;goto B5a6edf;
case 0x5a6ee5:c.instructions+=40;goto B5a6ee5;
case 0x5a6ee7:c.instructions+=39;goto B5a6ee7;
case 0x5a6ee9:c.instructions+=38;goto B5a6ee9;
case 0x5a6eeb:c.instructions+=37;goto B5a6eeb;
case 0x5a6ef1:c.instructions+=36;goto B5a6ef1;
case 0x5a6ef7:c.instructions+=35;goto B5a6ef7;
case 0x5a6efd:c.instructions+=34;goto B5a6efd;
case 0x5a6f03:c.instructions+=33;goto B5a6f03;
case 0x5a6f09:c.instructions+=32;goto B5a6f09;
case 0x5a6f0b:c.instructions+=31;goto B5a6f0b;
case 0x5a6f0d:c.instructions+=30;goto B5a6f0d;
case 0x5a6f0f:c.instructions+=29;goto B5a6f0f;
case 0x5a6f15:c.instructions+=28;goto B5a6f15;
case 0x5a6f1b:c.instructions+=27;goto B5a6f1b;
case 0x5a6f21:c.instructions+=26;goto B5a6f21;
case 0x5a6f27:c.instructions+=25;goto B5a6f27;
case 0x5a6f2d:c.instructions+=24;goto B5a6f2d;
case 0x5a6f2f:c.instructions+=23;goto B5a6f2f;
case 0x5a6f31:c.instructions+=22;goto B5a6f31;
case 0x5a6f33:c.instructions+=21;goto B5a6f33;
case 0x5a6f39:c.instructions+=20;goto B5a6f39;
case 0x5a6f3f:c.instructions+=19;goto B5a6f3f;
case 0x5a6f45:c.instructions+=18;goto B5a6f45;
case 0x5a6f4b:c.instructions+=17;goto B5a6f4b;
case 0x5a6f51:c.instructions+=16;goto B5a6f51;
case 0x5a6f53:c.instructions+=15;goto B5a6f53;
case 0x5a6f55:c.instructions+=14;goto B5a6f55;
case 0x5a6f57:c.instructions+=13;goto B5a6f57;
case 0x5a6f5d:c.instructions+=12;goto B5a6f5d;
case 0x5a6f63:c.instructions+=11;goto B5a6f63;
case 0x5a6f69:c.instructions+=10;goto B5a6f69;
case 0x5a6f6f:c.instructions+=9;goto B5a6f6f;
case 0x5a6f75:c.instructions+=8;goto B5a6f75;
case 0x5a6f76:c.instructions+=7;goto B5a6f76;
case 0x5a6f78:c.instructions+=6;goto B5a6f78;
case 0x5a6f7a:c.instructions+=5;goto B5a6f7a;
case 0x5a6f7c:c.instructions+=4;goto B5a6f7c;
case 0x5a6f82:c.instructions+=3;goto B5a6f82;
case 0x5a6f88:c.instructions+=2;goto B5a6f88;
case 0x5a6f8e:c.instructions+=1;goto B5a6f8e;
case 0x5a6fa0:goto L5a6fa0;
case 0x5a6fa3:c.instructions+=8;goto B5a6fa3;
case 0x5a6fa4:c.instructions+=7;goto B5a6fa4;
case 0x5a6fa8:c.instructions+=6;goto B5a6fa8;
case 0x5a6fa9:c.instructions+=5;goto B5a6fa9;
case 0x5a6fab:c.instructions+=4;goto B5a6fab;
case 0x5a6fad:c.instructions+=3;goto B5a6fad;
case 0x5a6fb1:c.instructions+=2;goto B5a6fb1;
case 0x5a6fb3:c.instructions+=1;goto B5a6fb3;
case 0x5a6fb8:goto L5a6fb8;
case 0x5a6fbe:c.instructions+=3;goto B5a6fbe;
case 0x5a6fc0:c.instructions+=2;goto B5a6fc0;
case 0x5a6fc3:c.instructions+=1;goto B5a6fc3;
case 0x5a6fc9:goto L5a6fc9;
case 0x5a6fcd:c.instructions+=7;goto B5a6fcd;
case 0x5a6fce:c.instructions+=6;goto B5a6fce;
case 0x5a6fcf:c.instructions+=5;goto B5a6fcf;
case 0x5a6fd5:c.instructions+=4;goto B5a6fd5;
case 0x5a6fd7:c.instructions+=3;goto B5a6fd7;
case 0x5a6fd9:c.instructions+=2;goto B5a6fd9;
case 0x5a6fdb:c.instructions+=1;goto B5a6fdb;
case 0x5a6fdd:goto L5a6fdd;
case 0x5a6fe0:goto L5a6fe0;
case 0x5a6fe2:c.instructions+=9;goto B5a6fe2;
case 0x5a6fe5:c.instructions+=8;goto B5a6fe5;
case 0x5a6fec:c.instructions+=7;goto B5a6fec;
case 0x5a6fee:c.instructions+=6;goto B5a6fee;
case 0x5a6ff1:c.instructions+=5;goto B5a6ff1;
case 0x5a6ff3:c.instructions+=4;goto B5a6ff3;
case 0x5a6ff7:c.instructions+=3;goto B5a6ff7;
case 0x5a6ff9:c.instructions+=2;goto B5a6ff9;
case 0x5a6fff:c.instructions+=1;goto B5a6fff;
default:missing_instruction(c.pc);}
B5a6001:L5a6001:{c.instructions+=18;NFSU2_TR(0x5a6001);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6007:{NFSU2_TR(0x5a6007);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a600d:{NFSU2_TR(0x5a600d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a600f:{NFSU2_TR(0x5a600f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6011:{NFSU2_TR(0x5a6011);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a6013:{NFSU2_TR(0x5a6013);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a6015:{NFSU2_TR(0x5a6015);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6017:{NFSU2_TR(0x5a6017);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a6019:{NFSU2_TR(0x5a6019);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a601b:{NFSU2_TR(0x5a601b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a601d:{NFSU2_TR(0x5a601d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a601f:{NFSU2_TR(0x5a601f);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a6021:{NFSU2_TR(0x5a6021);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6023:{NFSU2_TR(0x5a6023);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6025:{NFSU2_TR(0x5a6025);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a602b:{NFSU2_TR(0x5a602b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a602d:{NFSU2_TR(0x5a602d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6030:{NFSU2_TR(0x5a6030);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6037;}}
}
B5a6032:L5a6032:{c.instructions+=2;NFSU2_TR(0x5a6032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6035:{NFSU2_TR(0x5a6035);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a6037:L5a6037:{c.instructions+=4;NFSU2_TR(0x5a6037);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a603a:{NFSU2_TR(0x5a603a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a603e:{NFSU2_TR(0x5a603e);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
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
B5a6042:{NFSU2_TR(0x5a6042);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a605c;}}
}
B5a6044:L5a6044:{c.instructions+=9;NFSU2_TR(0x5a6044);
{u32 ea_=u32(u32(8372356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a604a:{NFSU2_TR(0x5a604a);
w4(R+0,u32(0x1ull));
}
B5a604f:{NFSU2_TR(0x5a604f);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6055:{NFSU2_TR(0x5a6055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6056:{NFSU2_TR(0x5a6056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6057:{NFSU2_TR(0x5a6057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6058:{NFSU2_TR(0x5a6058);
__builtin_memmove((R+16),(R+20),4);
}
B5a605a:{NFSU2_TR(0x5a605a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a605b:{NFSU2_TR(0x5a605b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a605c:L5a605c:{c.instructions+=9;NFSU2_TR(0x5a605c);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6062:{NFSU2_TR(0x5a6062);
w4(R+0,u32(0x1ull));
}
B5a6067:{NFSU2_TR(0x5a6067);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a606d:{NFSU2_TR(0x5a606d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a606e:{NFSU2_TR(0x5a606e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a606f:{NFSU2_TR(0x5a606f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6070:{NFSU2_TR(0x5a6070);
__builtin_memmove((R+16),(R+20),4);
}
B5a6072:{NFSU2_TR(0x5a6072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6073:{NFSU2_TR(0x5a6073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6074:L5a6074:{c.instructions+=19;NFSU2_TR(0x5a6074);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a607a:{NFSU2_TR(0x5a607a);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6080:{NFSU2_TR(0x5a6080);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6086:{NFSU2_TR(0x5a6086);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a6088:{NFSU2_TR(0x5a6088);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a608a:{NFSU2_TR(0x5a608a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a608c:{NFSU2_TR(0x5a608c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a608e:{NFSU2_TR(0x5a608e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6090:{NFSU2_TR(0x5a6090);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a6092:{NFSU2_TR(0x5a6092);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a6094:{NFSU2_TR(0x5a6094);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6096:{NFSU2_TR(0x5a6096);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a6098:{NFSU2_TR(0x5a6098);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a609a:{NFSU2_TR(0x5a609a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a609c:{NFSU2_TR(0x5a609c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a609e:{NFSU2_TR(0x5a609e);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a60a4:{NFSU2_TR(0x5a60a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a60a6:{NFSU2_TR(0x5a60a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a60a9:{NFSU2_TR(0x5a60a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a60b0;}}
}
B5a60ab:L5a60ab:{c.instructions+=2;NFSU2_TR(0x5a60ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a60ae:{NFSU2_TR(0x5a60ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a60b0:L5a60b0:{c.instructions+=4;NFSU2_TR(0x5a60b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a60b3:{NFSU2_TR(0x5a60b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a60b7:{NFSU2_TR(0x5a60b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a60bb:{NFSU2_TR(0x5a60bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a60d2;}}
}
B5a60bd:L5a60bd:{c.instructions+=9;NFSU2_TR(0x5a60bd);
{u32 ea_=u32(u32(8372356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a60c3:{NFSU2_TR(0x5a60c3);
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
B5a60c5:{NFSU2_TR(0x5a60c5);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a60cb:{NFSU2_TR(0x5a60cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a60cc:{NFSU2_TR(0x5a60cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a60cd:{NFSU2_TR(0x5a60cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a60ce:{NFSU2_TR(0x5a60ce);
__builtin_memmove((R+16),(R+20),4);
}
B5a60d0:{NFSU2_TR(0x5a60d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a60d1:{NFSU2_TR(0x5a60d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a60d2:L5a60d2:{c.instructions+=9;NFSU2_TR(0x5a60d2);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a60d8:{NFSU2_TR(0x5a60d8);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a60de:{NFSU2_TR(0x5a60de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a60df:{NFSU2_TR(0x5a60df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a60e0:{NFSU2_TR(0x5a60e0);
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
B5a60e2:{NFSU2_TR(0x5a60e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a60e3:{NFSU2_TR(0x5a60e3);
__builtin_memmove((R+16),(R+20),4);
}
B5a60e5:{NFSU2_TR(0x5a60e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a60e6:{NFSU2_TR(0x5a60e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a60f0:L5a60f0:{c.instructions+=11;NFSU2_TR(0x5a60f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a60f1:{NFSU2_TR(0x5a60f1);
__builtin_memmove((R+20),(R+16),4);
}
B5a60f3:{NFSU2_TR(0x5a60f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a60f6:{NFSU2_TR(0x5a60f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5a60f9:{NFSU2_TR(0x5a60f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a60fc:{NFSU2_TR(0x5a60fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a60ff:{NFSU2_TR(0x5a60ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6100:{NFSU2_TR(0x5a6100);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a6102:{NFSU2_TR(0x5a6102);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6105:{NFSU2_TR(0x5a6105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6108:{NFSU2_TR(0x5a6108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6164;}}
}
B5a610a:L5a610a:{c.instructions+=22;NFSU2_TR(0x5a610a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a610d:{NFSU2_TR(0x5a610d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6110:{NFSU2_TR(0x5a6110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6113:{NFSU2_TR(0x5a6113);
{u32 ea_=u32(r4(R+8)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6119:{NFSU2_TR(0x5a6119);
{u32 ea_=u32(r4(R+8)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a611f:{NFSU2_TR(0x5a611f);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6125:{NFSU2_TR(0x5a6125);
{u32 ea_=u32(r4(R+8)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a612b:{NFSU2_TR(0x5a612b);
{u32 ea_=u32(r4(R+0)+u32(1060u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a6131:{NFSU2_TR(0x5a6131);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6135:{NFSU2_TR(0x5a6135);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6139:{NFSU2_TR(0x5a6139);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a613f:{NFSU2_TR(0x5a613f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a6141:{NFSU2_TR(0x5a6141);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B5a6143:{NFSU2_TR(0x5a6143);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a6145:{NFSU2_TR(0x5a6145);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5a6147:{NFSU2_TR(0x5a6147);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a614b:{NFSU2_TR(0x5a614b);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a614d:{NFSU2_TR(0x5a614d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a614f:{NFSU2_TR(0x5a614f);
{u32 ea_=u32(r4(R+4)+u32(504u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6155:{NFSU2_TR(0x5a6155);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6157:{NFSU2_TR(0x5a6157);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a615a:{NFSU2_TR(0x5a615a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a6197;}}
}
B5a615c:L5a615c:{c.instructions+=3;NFSU2_TR(0x5a615c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a615f:{NFSU2_TR(0x5a615f);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5a6162:{NFSU2_TR(0x5a6162);
{goto L5a6188;}
}
B5a6164:L5a6164:{c.instructions+=3;NFSU2_TR(0x5a6164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6167:{NFSU2_TR(0x5a6167);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5a616a:{NFSU2_TR(0x5a616a);
if(r1(R+518)){{goto L5a6197;}}
}
B5a616c:L5a616c:{c.instructions+=9;NFSU2_TR(0x5a616c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a616f:{NFSU2_TR(0x5a616f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6172:{NFSU2_TR(0x5a6172);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6175:{NFSU2_TR(0x5a6175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a6177:{NFSU2_TR(0x5a6177);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a6179:{NFSU2_TR(0x5a6179);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a617d:{NFSU2_TR(0x5a617d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6181:{NFSU2_TR(0x5a6181);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B5a6184:{NFSU2_TR(0x5a6184);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6188:L5a6188:{c.instructions+=4;NFSU2_TR(0x5a6188);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a618c:{NFSU2_TR(0x5a618c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a618d:{NFSU2_TR(0x5a618d);
w4(R+24,u32(0x1ull));
}
B5a6192:{NFSU2_TR(0x5a6192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6197ull));
TAIL_STATIC(0x59b8b0u,59b);
}
B5a6197:L5a6197:{c.instructions+=5;NFSU2_TR(0x5a6197);
__builtin_memmove((R+0),(R+24),4);
}
B5a6199:{NFSU2_TR(0x5a6199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a619a:{NFSU2_TR(0x5a619a);
__builtin_memmove((R+16),(R+20),4);
}
B5a619c:{NFSU2_TR(0x5a619c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a619d:{NFSU2_TR(0x5a619d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a61a0:L5a61a0:{c.instructions+=3;NFSU2_TR(0x5a61a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a61a4:{NFSU2_TR(0x5a61a4);
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
B5a61a6:{NFSU2_TR(0x5a61a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a6209;}}
}
B5a61a8:L5a61a8:{c.instructions+=10;NFSU2_TR(0x5a61a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a61ac:{NFSU2_TR(0x5a61ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a61ad:{NFSU2_TR(0x5a61ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a61b1:{NFSU2_TR(0x5a61b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a61b2:{NFSU2_TR(0x5a61b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a61b6:{NFSU2_TR(0x5a61b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a61b7:{NFSU2_TR(0x5a61b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a61b8:{NFSU2_TR(0x5a61b8);
w4(R+28,u32(0x30ull));
}
B5a61bd:{NFSU2_TR(0x5a61bd);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B5a61bf:{NFSU2_TR(0x5a61bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a61c3:L5a61c3:{c.instructions+=4;NFSU2_TR(0x5a61c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a61c6:{NFSU2_TR(0x5a61c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a61c8:{NFSU2_TR(0x5a61c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a61ca:{NFSU2_TR(0x5a61ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5a61f7;}}
}
B5a61cc:L5a61cc:{c.instructions+=2;NFSU2_TR(0x5a61cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a61cf:{NFSU2_TR(0x5a61cf);
}
B5a61d0:L5a61d0:{c.instructions+=3;NFSU2_TR(0x5a61d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a61d2:{NFSU2_TR(0x5a61d2);
u8 U[15];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5a61d7:{NFSU2_TR(0x5a61d7);
if(r1(R+518)){{goto L5a61ec;}}
}
B5a61d9:L5a61d9:{c.instructions+=4;NFSU2_TR(0x5a61d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a61dc:{NFSU2_TR(0x5a61dc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a61de:{NFSU2_TR(0x5a61de);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xbf800000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a61e4:{NFSU2_TR(0x5a61e4);
if(r1(R+518)){{goto L5a61ec;}}
}
B5a61e6:L5a61e6:{c.instructions+=3;NFSU2_TR(0x5a61e6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a61e8:{NFSU2_TR(0x5a61e8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a61ea:{NFSU2_TR(0x5a61ea);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a61ec:L5a61ec:{c.instructions+=5;NFSU2_TR(0x5a61ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a61ef:{NFSU2_TR(0x5a61ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a61f0:{NFSU2_TR(0x5a61f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B5a61f3:{NFSU2_TR(0x5a61f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5a61f5:{NFSU2_TR(0x5a61f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a61d0u);}goto L5a61d0;}}
}
B5a61f7:L5a61f7:{c.instructions+=5;NFSU2_TR(0x5a61f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a61fb:{NFSU2_TR(0x5a61fb);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5a61fe:{NFSU2_TR(0x5a61fe);
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
B5a61ff:{NFSU2_TR(0x5a61ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6203:{NFSU2_TR(0x5a6203);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a61c3u);}goto L5a61c3;}}
}
B5a6205:L5a6205:{c.instructions+=4;NFSU2_TR(0x5a6205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6206:{NFSU2_TR(0x5a6206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6207:{NFSU2_TR(0x5a6207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6208:{NFSU2_TR(0x5a6208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6209:L5a6209:{c.instructions+=1;NFSU2_TR(0x5a6209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6210:L5a6210:{c.instructions+=9;NFSU2_TR(0x5a6210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a6213:{NFSU2_TR(0x5a6213);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6217:{NFSU2_TR(0x5a6217);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6218:{NFSU2_TR(0x5a6218);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6219:{NFSU2_TR(0x5a6219);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a621b:{NFSU2_TR(0x5a621b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a621d:{NFSU2_TR(0x5a621d);
w4(R+0,u32(0x1ull));
}
B5a6222:{NFSU2_TR(0x5a6222);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a622a:{NFSU2_TR(0x5a622a);
if(r1(R+518)){{goto L5a6232;}}
}
B5a622c:L5a622c:{c.instructions+=2;NFSU2_TR(0x5a622c);
__builtin_memmove((R+0),(R+4),4);
}
B5a622e:{NFSU2_TR(0x5a622e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6232:L5a6232:{c.instructions+=4;NFSU2_TR(0x5a6232);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a6236:{NFSU2_TR(0x5a6236);
__builtin_memmove((R+24),(R+0),4);
}
B5a6238:{NFSU2_TR(0x5a6238);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a623c:{NFSU2_TR(0x5a623c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a62f0;}}
}
B5a6242:L5a6242:{c.instructions+=2;NFSU2_TR(0x5a6242);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6243:{NFSU2_TR(0x5a6243);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6244:L5a6244:{c.instructions+=4;NFSU2_TR(0x5a6244);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6248:{NFSU2_TR(0x5a6248);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a624a:{NFSU2_TR(0x5a624a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a624c:{NFSU2_TR(0x5a624c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a62dd;}}
}
B5a6252:L5a6252:{c.instructions+=5;NFSU2_TR(0x5a6252);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6256:{NFSU2_TR(0x5a6256);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5a6259:{NFSU2_TR(0x5a6259);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a625a:{NFSU2_TR(0x5a625a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a625b:{NFSU2_TR(0x5a625b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6260ull));
TAIL_STATIC(0x500100u,500);
}
B5a6260:L5a6260:{c.instructions+=4;NFSU2_TR(0x5a6260);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6263:{NFSU2_TR(0x5a6263);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a6266:{NFSU2_TR(0x5a6266);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6268:{NFSU2_TR(0x5a6268);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5a62d0;}}
}
B5a626a:L5a626a:{c.instructions+=3;NFSU2_TR(0x5a626a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a626d:{NFSU2_TR(0x5a626d);
__builtin_memmove((R+20),(R+4),4);
}
B5a626f:{NFSU2_TR(0x5a626f);
}
B5a6270:L5a6270:{c.instructions+=5;NFSU2_TR(0x5a6270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a6272:{NFSU2_TR(0x5a6272);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6276:{NFSU2_TR(0x5a6276);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5a627a:{NFSU2_TR(0x5a627a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a627c:{NFSU2_TR(0x5a627c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a62c6;}}
}
B5a627e:L5a627e:{c.instructions+=2;NFSU2_TR(0x5a627e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6280:{NFSU2_TR(0x5a6280);
if(r1(R+518)){{goto L5a62c4;}}
}
B5a6282:L5a6282:{c.instructions+=4;NFSU2_TR(0x5a6282);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a6286:{NFSU2_TR(0x5a6286);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6288:{NFSU2_TR(0x5a6288);
__builtin_memmove((R+4),(R+24),4);
}
B5a628a:{NFSU2_TR(0x5a628a);
if(r1(R+518)){{goto L5a62a9;}}
}
B5a628c:L5a628c:{c.instructions+=1;NFSU2_TR(0x5a628c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6291ull));
TAIL_STATIC(0x591130u,591);
}
B5a6291:L5a6291:{c.instructions+=3;NFSU2_TR(0x5a6291);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6295:{NFSU2_TR(0x5a6295);
__builtin_memmove((R+4),(R+28),4);
}
B5a6297:{NFSU2_TR(0x5a6297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a629cull));
TAIL_STATIC(0x591130u,591);
}
B5a629c:L5a629c:{c.instructions+=4;NFSU2_TR(0x5a629c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a62a0:{NFSU2_TR(0x5a62a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a62a2:{NFSU2_TR(0x5a62a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a62a5:{NFSU2_TR(0x5a62a5);
if(r1(R+518)){{goto L5a62c4;}}
}
B5a62a7:L5a62a7:{c.instructions+=1;NFSU2_TR(0x5a62a7);
{goto L5a62c6;}
}
B5a62a9:L5a62a9:{c.instructions+=1;NFSU2_TR(0x5a62a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a62aeull));
TAIL_STATIC(0x591130u,591);
}
B5a62ae:L5a62ae:{c.instructions+=3;NFSU2_TR(0x5a62ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a62b2:{NFSU2_TR(0x5a62b2);
__builtin_memmove((R+4),(R+28),4);
}
B5a62b4:{NFSU2_TR(0x5a62b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a62b9ull));
TAIL_STATIC(0x591130u,591);
}
B5a62b9:L5a62b9:{c.instructions+=4;NFSU2_TR(0x5a62b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a62bd:{NFSU2_TR(0x5a62bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a62bf:{NFSU2_TR(0x5a62bf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a62c2:{NFSU2_TR(0x5a62c2);
if(r1(R+514)){{goto L5a62c6;}}
}
B5a62c4:L5a62c4:{c.instructions+=1;NFSU2_TR(0x5a62c4);
__builtin_memmove((R+28),(R+24),4);
}
B5a62c6:L5a62c6:{c.instructions+=3;NFSU2_TR(0x5a62c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B5a62c9:{NFSU2_TR(0x5a62c9);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5a62ca:{NFSU2_TR(0x5a62ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6270u);}goto L5a6270;}}
}
B5a62cc:L5a62cc:{c.instructions+=1;NFSU2_TR(0x5a62cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a62d0:L5a62d0:{c.instructions+=4;NFSU2_TR(0x5a62d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a62d4:{NFSU2_TR(0x5a62d4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5a62d5:{NFSU2_TR(0x5a62d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a62d7:{NFSU2_TR(0x5a62d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6252u);}goto L5a6252;}}
}
B5a62dd:L5a62dd:{c.instructions+=5;NFSU2_TR(0x5a62dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a62e1:{NFSU2_TR(0x5a62e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a62e2:{NFSU2_TR(0x5a62e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a62e4:{NFSU2_TR(0x5a62e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a62e8:{NFSU2_TR(0x5a62e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6244u);}goto L5a6244;}}
}
B5a62ee:L5a62ee:{c.instructions+=2;NFSU2_TR(0x5a62ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a62ef:{NFSU2_TR(0x5a62ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a62f0:L5a62f0:{c.instructions+=5;NFSU2_TR(0x5a62f0);
__builtin_memmove((R+0),(R+28),4);
}
B5a62f2:{NFSU2_TR(0x5a62f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a62f3:{NFSU2_TR(0x5a62f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a62f4:{NFSU2_TR(0x5a62f4);
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
B5a62f7:{NFSU2_TR(0x5a62f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6300:L5a6300:{c.instructions+=8;NFSU2_TR(0x5a6300);
__builtin_memmove((R+0),(R+4),4);
}
B5a6302:{NFSU2_TR(0x5a6302);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5a6308:{NFSU2_TR(0x5a6308);
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
B5a630a:{NFSU2_TR(0x5a630a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a630d:{NFSU2_TR(0x5a630d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a630f:{NFSU2_TR(0x5a630f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6312:{NFSU2_TR(0x5a6312);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a6315:{NFSU2_TR(0x5a6315);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6320:L5a6320:{c.instructions+=13;NFSU2_TR(0x5a6320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6321:{NFSU2_TR(0x5a6321);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6322:{NFSU2_TR(0x5a6322);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6323:{NFSU2_TR(0x5a6323);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6324:{NFSU2_TR(0x5a6324);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6325:{NFSU2_TR(0x5a6325);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a6329:{NFSU2_TR(0x5a6329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a632b:{NFSU2_TR(0x5a632b);
__builtin_memmove((R+24),(R+4),4);
}
B5a632d:{NFSU2_TR(0x5a632d);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5a6331:{NFSU2_TR(0x5a6331);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6333:{NFSU2_TR(0x5a6333);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a6337:{NFSU2_TR(0x5a6337);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a633f:{NFSU2_TR(0x5a633f);
if(r1(R+518)){{goto L5a6353;}}
}
B5a6341:L5a6341:{c.instructions+=3;NFSU2_TR(0x5a6341);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a6345:{NFSU2_TR(0x5a6345);
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
B5a6347:{NFSU2_TR(0x5a6347);
if(r1(R+518)){{goto L5a6365;}}
}
B5a6349:L5a6349:{c.instructions+=7;NFSU2_TR(0x5a6349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a634a:{NFSU2_TR(0x5a634a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a634b:{NFSU2_TR(0x5a634b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a634c:{NFSU2_TR(0x5a634c);
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
B5a634e:{NFSU2_TR(0x5a634e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a634f:{NFSU2_TR(0x5a634f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6350:{NFSU2_TR(0x5a6350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6353:L5a6353:{c.instructions+=3;NFSU2_TR(0x5a6353);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a6357:{NFSU2_TR(0x5a6357);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6359:{NFSU2_TR(0x5a6359);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6374;}}
}
B5a635b:L5a635b:{c.instructions+=7;NFSU2_TR(0x5a635b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a635c:{NFSU2_TR(0x5a635c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a635d:{NFSU2_TR(0x5a635d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a635e:{NFSU2_TR(0x5a635e);
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
B5a6360:{NFSU2_TR(0x5a6360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6361:{NFSU2_TR(0x5a6361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6362:{NFSU2_TR(0x5a6362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6365:L5a6365:{c.instructions+=8;NFSU2_TR(0x5a6365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6366:{NFSU2_TR(0x5a6366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6367:{NFSU2_TR(0x5a6367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6368:{NFSU2_TR(0x5a6368);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5a636b:{NFSU2_TR(0x5a636b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a636f:{NFSU2_TR(0x5a636f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6370:{NFSU2_TR(0x5a6370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6371:{NFSU2_TR(0x5a6371);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6374:L5a6374:{c.instructions+=4;NFSU2_TR(0x5a6374);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a6378:{NFSU2_TR(0x5a6378);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a637a:{NFSU2_TR(0x5a637a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x54ull))));
}
B5a637d:{NFSU2_TR(0x5a637d);
__builtin_memmove((R+4),(R+4),4);
}
B5a6380:L5a6380:{c.instructions+=3;NFSU2_TR(0x5a6380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a6382:{NFSU2_TR(0x5a6382);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6385:{NFSU2_TR(0x5a6385);
if(r1(R+518)){{goto L5a63a5;}}
}
B5a6387:L5a6387:{c.instructions+=3;NFSU2_TR(0x5a6387);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5a638b:{NFSU2_TR(0x5a638b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a638d:{NFSU2_TR(0x5a638d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a63a5;}}
}
B5a638f:L5a638f:{c.instructions+=2;NFSU2_TR(0x5a638f);
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
B5a6391:{NFSU2_TR(0x5a6391);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a635bu);}goto L5a635b;}}
}
B5a6393:L5a6393:{c.instructions+=6;NFSU2_TR(0x5a6393);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6397:{NFSU2_TR(0x5a6397);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6398:{NFSU2_TR(0x5a6398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6399:{NFSU2_TR(0x5a6399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a639a:{NFSU2_TR(0x5a639a);
__builtin_memmove((R+4),(R+24),4);
}
B5a639c:{NFSU2_TR(0x5a639c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a63a1ull));
TAIL_STATIC(0x599680u,599);
}
B5a63a1:L5a63a1:{c.instructions+=1;NFSU2_TR(0x5a63a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5a63a5:L5a63a5:{c.instructions+=4;NFSU2_TR(0x5a63a5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5a63a6:{NFSU2_TR(0x5a63a6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a63a9:{NFSU2_TR(0x5a63a9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a63ac:{NFSU2_TR(0x5a63ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6380u);}goto L5a6380;}}
}
B5a63ae:L5a63ae:{c.instructions+=4;NFSU2_TR(0x5a63ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a63b2:{NFSU2_TR(0x5a63b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B5a63b5:{NFSU2_TR(0x5a63b5);
w4(R+12,u32(0x5ull));
}
B5a63ba:{NFSU2_TR(0x5a63ba);
__builtin_memmove((R+12),(R+12),4);
}
B5a63c0:L5a63c0:{c.instructions+=3;NFSU2_TR(0x5a63c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a63c2:{NFSU2_TR(0x5a63c2);
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
B5a63c5:{NFSU2_TR(0x5a63c5);
if(r1(R+518)){{goto L5a63e0;}}
}
B5a63c7:L5a63c7:{c.instructions+=2;NFSU2_TR(0x5a63c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a63c8:{NFSU2_TR(0x5a63c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a63cdull));
TAIL_STATIC(0x500150u,500);
}
B5a63cd:L5a63cd:{c.instructions+=3;NFSU2_TR(0x5a63cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a63d0:{NFSU2_TR(0x5a63d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a63d2:{NFSU2_TR(0x5a63d2);
if(r1(R+518)){{goto L5a63e0;}}
}
B5a63d4:L5a63d4:{c.instructions+=5;NFSU2_TR(0x5a63d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a63d6:{NFSU2_TR(0x5a63d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a63d8:{NFSU2_TR(0x5a63d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a63d9:{NFSU2_TR(0x5a63d9);
__builtin_memmove((R+4),(R+24),4);
}
B5a63db:{NFSU2_TR(0x5a63db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a63e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6320u);}goto L5a6320;}
}
B5a63e0:L5a63e0:{c.instructions+=3;NFSU2_TR(0x5a63e0);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a63e3:{NFSU2_TR(0x5a63e3);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a63e4:{NFSU2_TR(0x5a63e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a63c0u);}goto L5a63c0;}}
}
B5a63e6:L5a63e6:{c.instructions+=10;NFSU2_TR(0x5a63e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a63ea:{NFSU2_TR(0x5a63ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a63ec:{NFSU2_TR(0x5a63ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a63ed:{NFSU2_TR(0x5a63ed);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5a63f2:{NFSU2_TR(0x5a63f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a63f6:{NFSU2_TR(0x5a63f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a63f7:{NFSU2_TR(0x5a63f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a63f8:{NFSU2_TR(0x5a63f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a63f9:{NFSU2_TR(0x5a63f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a63fa:{NFSU2_TR(0x5a63fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6400:L5a6400:{c.instructions+=11;NFSU2_TR(0x5a6400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6401:{NFSU2_TR(0x5a6401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6402:{NFSU2_TR(0x5a6402);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a6406:{NFSU2_TR(0x5a6406);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6409:{NFSU2_TR(0x5a6409);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a640a:{NFSU2_TR(0x5a640a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a640b:{NFSU2_TR(0x5a640b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a640d:{NFSU2_TR(0x5a640d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a640f:{NFSU2_TR(0x5a640f);
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
B5a6411:{NFSU2_TR(0x5a6411);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6415:{NFSU2_TR(0x5a6415);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5a643f;}}
}
B5a6417:L5a6417:{c.instructions+=3;NFSU2_TR(0x5a6417);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6418:{NFSU2_TR(0x5a6418);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a641b:{NFSU2_TR(0x5a641b);
{goto L5a6420;}
}
B5a6420:L5a6420:{c.instructions+=6;NFSU2_TR(0x5a6420);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6424:{NFSU2_TR(0x5a6424);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6428:{NFSU2_TR(0x5a6428);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a642a:{NFSU2_TR(0x5a642a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a642b:{NFSU2_TR(0x5a642b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a642c:{NFSU2_TR(0x5a642c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6431ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6320u);}goto L5a6320;}
}
B5a6431:L5a6431:{c.instructions+=6;NFSU2_TR(0x5a6431);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B5a6433:{NFSU2_TR(0x5a6433);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6436:{NFSU2_TR(0x5a6436);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a6437:{NFSU2_TR(0x5a6437);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B5a643a:{NFSU2_TR(0x5a643a);
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
B5a643c:{NFSU2_TR(0x5a643c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6420u);}goto L5a6420;}}
}
B5a643e:L5a643e:{c.instructions+=1;NFSU2_TR(0x5a643e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a643f:L5a643f:{c.instructions+=6;NFSU2_TR(0x5a643f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6440:{NFSU2_TR(0x5a6440);
__builtin_memmove((R+0),(R+20),4);
}
B5a6442:{NFSU2_TR(0x5a6442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6443:{NFSU2_TR(0x5a6443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6444:{NFSU2_TR(0x5a6444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6445:{NFSU2_TR(0x5a6445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6450:L5a6450:{c.instructions+=7;NFSU2_TR(0x5a6450);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6451:{NFSU2_TR(0x5a6451);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6452:{NFSU2_TR(0x5a6452);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6453:{NFSU2_TR(0x5a6453);
__builtin_memmove((R+12),(R+4),4);
}
B5a6455:{NFSU2_TR(0x5a6455);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a6457:{NFSU2_TR(0x5a6457);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a6459:{NFSU2_TR(0x5a6459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a645eull));
TAIL_STATIC(0x500070u,500);
}
B5a645e:L5a645e:{c.instructions+=2;NFSU2_TR(0x5a645e);
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
B5a6460:{NFSU2_TR(0x5a6460);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a6494;}}
}
B5a6462:L5a6462:{c.instructions+=2;NFSU2_TR(0x5a6462);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6463:{NFSU2_TR(0x5a6463);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a6467:L5a6467:{c.instructions+=2;NFSU2_TR(0x5a6467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6468:{NFSU2_TR(0x5a6468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a646dull));
TAIL_STATIC(0x500080u,500);
}
B5a646d:L5a646d:{c.instructions+=3;NFSU2_TR(0x5a646d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5a6470:{NFSU2_TR(0x5a6470);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6472:{NFSU2_TR(0x5a6472);
if(r1(R+518)){{goto L5a6489;}}
}
B5a6474:L5a6474:{c.instructions+=2;NFSU2_TR(0x5a6474);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6477:{NFSU2_TR(0x5a6477);
if(r1(R+518)){{goto L5a647d;}}
}
B5a6479:L5a6479:{c.instructions+=2;NFSU2_TR(0x5a6479);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+20))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a647b:{NFSU2_TR(0x5a647b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6489;}}
}
B5a647d:L5a647d:{c.instructions+=4;NFSU2_TR(0x5a647d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a647f:{NFSU2_TR(0x5a647f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6480:{NFSU2_TR(0x5a6480);
__builtin_memmove((R+4),(R+12),4);
}
B5a6482:{NFSU2_TR(0x5a6482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6487ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6400u);}goto L5a6400;}
}
B5a6487:L5a6487:{c.instructions+=1;NFSU2_TR(0x5a6487);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5a6489:L5a6489:{c.instructions+=2;NFSU2_TR(0x5a6489);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a648a:{NFSU2_TR(0x5a648a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a648full));
TAIL_STATIC(0x500070u,500);
}
B5a648f:L5a648f:{c.instructions+=2;NFSU2_TR(0x5a648f);
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
B5a6491:{NFSU2_TR(0x5a6491);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6467u);}goto L5a6467;}}
}
B5a6493:L5a6493:{c.instructions+=1;NFSU2_TR(0x5a6493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6494:L5a6494:{c.instructions+=5;NFSU2_TR(0x5a6494);
__builtin_memmove((R+0),(R+28),4);
}
B5a6496:{NFSU2_TR(0x5a6496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6497:{NFSU2_TR(0x5a6497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6498:{NFSU2_TR(0x5a6498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6499:{NFSU2_TR(0x5a6499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a64a0:L5a64a0:{c.instructions+=11;NFSU2_TR(0x5a64a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5a64a3:{NFSU2_TR(0x5a64a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64a4:{NFSU2_TR(0x5a64a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64a5:{NFSU2_TR(0x5a64a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64a6:{NFSU2_TR(0x5a64a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a64aa:{NFSU2_TR(0x5a64aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64ab:{NFSU2_TR(0x5a64ab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a64ad:{NFSU2_TR(0x5a64ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64ae:{NFSU2_TR(0x5a64ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64b2:{NFSU2_TR(0x5a64b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64b6:{NFSU2_TR(0x5a64b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a64bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6450u);}goto L5a6450;}
}
B5a64bb:L5a64bb:{c.instructions+=6;NFSU2_TR(0x5a64bb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a64bd:{NFSU2_TR(0x5a64bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a64c0:{NFSU2_TR(0x5a64c0);
w4(R+20,u32(0x9ull));
}
B5a64c5:{NFSU2_TR(0x5a64c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64c9:{NFSU2_TR(0x5a64c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64cd:{NFSU2_TR(0x5a64cd);
if(r1(R+518)){{goto L5a64db;}}
}
B5a64cf:L5a64cf:{c.instructions+=4;NFSU2_TR(0x5a64cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64d3:{NFSU2_TR(0x5a64d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64d7:{NFSU2_TR(0x5a64d7);
__builtin_memmove((R+20),(R+24),4);
}
B5a64d9:{NFSU2_TR(0x5a64d9);
__builtin_memmove((R+28),(R+24),4);
}
B5a64db:L5a64db:{c.instructions+=5;NFSU2_TR(0x5a64db);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a64df:{NFSU2_TR(0x5a64df);
w4(R+24,u32(0x1ull));
}
B5a64e4:{NFSU2_TR(0x5a64e4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a64e6:{NFSU2_TR(0x5a64e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64ea:{NFSU2_TR(0x5a64ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a656f;}}
}
B5a64f0:L5a64f0:{c.instructions+=3;NFSU2_TR(0x5a64f0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a64f2:{NFSU2_TR(0x5a64f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a64f6:{NFSU2_TR(0x5a64f6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a6554;}}
}
B5a64f8:L5a64f8:{c.instructions+=3;NFSU2_TR(0x5a64f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64f9:{NFSU2_TR(0x5a64f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a64fa:{NFSU2_TR(0x5a64fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a64ffull));
TAIL_STATIC(0x500100u,500);
}
B5a64ff:L5a64ff:{c.instructions+=4;NFSU2_TR(0x5a64ff);
__builtin_memmove((R+12),(R+0),4);
}
B5a6501:{NFSU2_TR(0x5a6501);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a6504:{NFSU2_TR(0x5a6504);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6506:{NFSU2_TR(0x5a6506);
if(r1(R+518)){{goto L5a6547;}}
}
B5a6508:L5a6508:{c.instructions+=5;NFSU2_TR(0x5a6508);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a650b:{NFSU2_TR(0x5a650b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a650d:{NFSU2_TR(0x5a650d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a650f:{NFSU2_TR(0x5a650f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6511:{NFSU2_TR(0x5a6511);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5a6535;}}
}
B5a6513:L5a6513:{c.instructions+=1;NFSU2_TR(0x5a6513);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6516:L5a6516:{c.instructions+=5;NFSU2_TR(0x5a6516);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a651a:{NFSU2_TR(0x5a651a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a651c:{NFSU2_TR(0x5a651c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a651e:{NFSU2_TR(0x5a651e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a651f:{NFSU2_TR(0x5a651f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6524ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6320u);}goto L5a6320;}
}
B5a6524:L5a6524:{c.instructions+=6;NFSU2_TR(0x5a6524);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B5a6526:{NFSU2_TR(0x5a6526);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6529:{NFSU2_TR(0x5a6529);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a652a:{NFSU2_TR(0x5a652a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B5a652d:{NFSU2_TR(0x5a652d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5a652f:{NFSU2_TR(0x5a652f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6516u);}goto L5a6516;}}
}
B5a6531:L5a6531:{c.instructions+=1;NFSU2_TR(0x5a6531);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a6535:L5a6535:{c.instructions+=5;NFSU2_TR(0x5a6535);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6539:{NFSU2_TR(0x5a6539);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a653d:{NFSU2_TR(0x5a653d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B5a653f:{NFSU2_TR(0x5a653f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a6543:{NFSU2_TR(0x5a6543);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6547:L5a6547:{c.instructions+=4;NFSU2_TR(0x5a6547);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a6548:{NFSU2_TR(0x5a6548);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a654a:{NFSU2_TR(0x5a654a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a654e:{NFSU2_TR(0x5a654e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a64f8u);}goto L5a64f8;}}
}
B5a6550:L5a6550:{c.instructions+=1;NFSU2_TR(0x5a6550);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a6554:L5a6554:{c.instructions+=5;NFSU2_TR(0x5a6554);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6558:{NFSU2_TR(0x5a6558);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a6559:{NFSU2_TR(0x5a6559);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a655b:{NFSU2_TR(0x5a655b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a655f:{NFSU2_TR(0x5a655f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a64f0u);}goto L5a64f0;}}
}
B5a6561:L5a6561:{c.instructions+=7;NFSU2_TR(0x5a6561);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6565:{NFSU2_TR(0x5a6565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6566:{NFSU2_TR(0x5a6566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6567:{NFSU2_TR(0x5a6567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6568:{NFSU2_TR(0x5a6568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6569:{NFSU2_TR(0x5a6569);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a656c:{NFSU2_TR(0x5a656c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a656f:L5a656f:{c.instructions+=7;NFSU2_TR(0x5a656f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6570:{NFSU2_TR(0x5a6570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6571:{NFSU2_TR(0x5a6571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6572:{NFSU2_TR(0x5a6572);
__builtin_memmove((R+0),(R+12),4);
}
B5a6574:{NFSU2_TR(0x5a6574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6575:{NFSU2_TR(0x5a6575);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a6578:{NFSU2_TR(0x5a6578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6580:L5a6580:{c.instructions+=10;NFSU2_TR(0x5a6580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5a6583:{NFSU2_TR(0x5a6583);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6584:{NFSU2_TR(0x5a6584);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6585:{NFSU2_TR(0x5a6585);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6586:{NFSU2_TR(0x5a6586);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a658a:{NFSU2_TR(0x5a658a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a658c:{NFSU2_TR(0x5a658c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a658d:{NFSU2_TR(0x5a658d);
__builtin_memmove((R+20),(R+4),4);
}
B5a658f:{NFSU2_TR(0x5a658f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a6597:{NFSU2_TR(0x5a6597);
if(r1(R+518)){{goto L5a65a1;}}
}
B5a6599:L5a6599:{c.instructions+=3;NFSU2_TR(0x5a6599);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a659d:{NFSU2_TR(0x5a659d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a659f:{NFSU2_TR(0x5a659f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a65cd;}}
}
B5a65a1:L5a65a1:{c.instructions+=4;NFSU2_TR(0x5a65a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a65a5:{NFSU2_TR(0x5a65a5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a65a6:{NFSU2_TR(0x5a65a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5a65aa:{NFSU2_TR(0x5a65aa);
if(r1(R+518)){{goto L5a65c4;}}
}
B5a65ac:L5a65ac:{c.instructions+=2;NFSU2_TR(0x5a65ac);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a65af:{NFSU2_TR(0x5a65af);
if(r1(R+518)){{goto L5a65c4;}}
}
B5a65b1:L5a65b1:{c.instructions+=2;NFSU2_TR(0x5a65b1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a65b4:{NFSU2_TR(0x5a65b4);
if(r1(R+518)){{goto L5a65bd;}}
}
B5a65b6:L5a65b6:{c.instructions+=2;NFSU2_TR(0x5a65b6);
w4(R+24,u32(0x1ull));
}
B5a65bb:{NFSU2_TR(0x5a65bb);
{goto L5a65c9;}
}
B5a65bd:L5a65bd:{c.instructions+=2;NFSU2_TR(0x5a65bd);
w4(R+24,u32(0x2ull));
}
B5a65c2:{NFSU2_TR(0x5a65c2);
{goto L5a65c9;}
}
B5a65c4:L5a65c4:{c.instructions+=1;NFSU2_TR(0x5a65c4);
w4(R+24,u32(0x3ull));
}
B5a65c9:L5a65c9:{c.instructions+=1;NFSU2_TR(0x5a65c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a65cd:L5a65cd:{c.instructions+=3;NFSU2_TR(0x5a65cd);
__builtin_memmove((R+4),(R+24),4);
}
B5a65cf:{NFSU2_TR(0x5a65cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a65d1:{NFSU2_TR(0x5a65d1);
__builtin_memmove((R+28),(R+12),4);
}
B5a65d3:L5a65d3:{c.instructions+=1;NFSU2_TR(0x5a65d3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a65d5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a65d3u);}goto L5a65d3;}
}
B5a65d5:L5a65d5:{c.instructions+=2;NFSU2_TR(0x5a65d5);
w4(R+28,u32(0x1ull));
}
B5a65da:{NFSU2_TR(0x5a65da);
__builtin_memmove((R+12),(R+12),4);
}
B5a65e0:L5a65e0:{c.instructions+=4;NFSU2_TR(0x5a65e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a65e4:{NFSU2_TR(0x5a65e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65e5:{NFSU2_TR(0x5a65e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65e6:{NFSU2_TR(0x5a65e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a65ebull));
TAIL_STATIC(0x500100u,500);
}
B5a65eb:L5a65eb:{c.instructions+=3;NFSU2_TR(0x5a65eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a65ee:{NFSU2_TR(0x5a65ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a65f0:{NFSU2_TR(0x5a65f0);
if(r1(R+518)){{goto L5a65fe;}}
}
B5a65f2:L5a65f2:{c.instructions+=5;NFSU2_TR(0x5a65f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65f3:{NFSU2_TR(0x5a65f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65f4:{NFSU2_TR(0x5a65f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65f5:{NFSU2_TR(0x5a65f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a65f6:{NFSU2_TR(0x5a65f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a65fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a61a0u);}goto L5a61a0;}
}
B5a65fb:L5a65fb:{c.instructions+=1;NFSU2_TR(0x5a65fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5a65fe:L5a65fe:{c.instructions+=3;NFSU2_TR(0x5a65fe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a65ff:{NFSU2_TR(0x5a65ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6602:{NFSU2_TR(0x5a6602);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a65e0u);}goto L5a65e0;}}
}
B5a6604:L5a6604:{c.instructions+=4;NFSU2_TR(0x5a6604);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6608:{NFSU2_TR(0x5a6608);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a660a:{NFSU2_TR(0x5a660a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a660d:{NFSU2_TR(0x5a660d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a6630;}}
}
B5a660f:L5a660f:{c.instructions+=2;NFSU2_TR(0x5a660f);
w4(R+8,u32(0x3ull));
}
B5a6614:{NFSU2_TR(0x5a6614);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6617:L5a6617:{c.instructions+=9;NFSU2_TR(0x5a6617);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a661a:{NFSU2_TR(0x5a661a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5a661d:{NFSU2_TR(0x5a661d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a6620:{NFSU2_TR(0x5a6620);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5a6623:{NFSU2_TR(0x5a6623);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6625:{NFSU2_TR(0x5a6625);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6628:{NFSU2_TR(0x5a6628);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a662b:{NFSU2_TR(0x5a662b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a662e:{NFSU2_TR(0x5a662e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6617u);}goto L5a6617;}}
}
B5a6630:L5a6630:{c.instructions+=2;NFSU2_TR(0x5a6630);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6632:{NFSU2_TR(0x5a6632);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a663c;}}
}
B5a6634:L5a6634:{c.instructions+=4;NFSU2_TR(0x5a6634);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6637:{NFSU2_TR(0x5a6637);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5a6638:{NFSU2_TR(0x5a6638);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a663a:{NFSU2_TR(0x5a663a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6634u);}goto L5a6634;}}
}
B5a663c:L5a663c:{c.instructions+=8;NFSU2_TR(0x5a663c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a6640:{NFSU2_TR(0x5a6640);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a6646:{NFSU2_TR(0x5a6646);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a664a:{NFSU2_TR(0x5a664a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a664c:{NFSU2_TR(0x5a664c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a6652:{NFSU2_TR(0x5a6652);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6654:{NFSU2_TR(0x5a6654);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6657:{NFSU2_TR(0x5a6657);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a666a;}}
}
B5a6659:L5a6659:{c.instructions+=4;NFSU2_TR(0x5a6659);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a665f:{NFSU2_TR(0x5a665f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6661:{NFSU2_TR(0x5a6661);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6664:{NFSU2_TR(0x5a6664);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a67d3;}}
}
B5a666a:L5a666a:{c.instructions+=5;NFSU2_TR(0x5a666a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a666c:{NFSU2_TR(0x5a666c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a666e:{NFSU2_TR(0x5a666e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6671:{NFSU2_TR(0x5a6671);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6677:{NFSU2_TR(0x5a6677);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a678c;}}
}
B5a667d:L5a667d:{c.instructions+=2;NFSU2_TR(0x5a667d);
w4(R+28,u32(0x3ull));
}
B5a6682:{NFSU2_TR(0x5a6682);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6685:L5a6685:{c.instructions+=7;NFSU2_TR(0x5a6685);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6688:{NFSU2_TR(0x5a6688);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a668c:{NFSU2_TR(0x5a668c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6690:{NFSU2_TR(0x5a6690);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6696:{NFSU2_TR(0x5a6696);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6698:{NFSU2_TR(0x5a6698);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a669b:{NFSU2_TR(0x5a669b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6833;}}
}
B5a66a1:L5a66a1:{c.instructions+=6;NFSU2_TR(0x5a66a1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66a5:{NFSU2_TR(0x5a66a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66ab:{NFSU2_TR(0x5a66ab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a66af:{NFSU2_TR(0x5a66af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a66b1:{NFSU2_TR(0x5a66b1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a66b4:{NFSU2_TR(0x5a66b4);
if(r1(R+514)){{goto L5a66be;}}
}
B5a66b6:L5a66b6:{c.instructions+=2;NFSU2_TR(0x5a66b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a66b8:{NFSU2_TR(0x5a66b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66be:L5a66be:{c.instructions+=9;NFSU2_TR(0x5a66be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a66c1:{NFSU2_TR(0x5a66c1);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a66c4:{NFSU2_TR(0x5a66c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a66c8:{NFSU2_TR(0x5a66c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a66ca:{NFSU2_TR(0x5a66ca);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66ce:{NFSU2_TR(0x5a66ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a66d4:{NFSU2_TR(0x5a66d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a66d6:{NFSU2_TR(0x5a66d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a66d9:{NFSU2_TR(0x5a66d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a683e;}}
}
B5a66df:L5a66df:{c.instructions+=6;NFSU2_TR(0x5a66df);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66e3:{NFSU2_TR(0x5a66e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66e9:{NFSU2_TR(0x5a66e9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a66ed:{NFSU2_TR(0x5a66ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a66ef:{NFSU2_TR(0x5a66ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a66f2:{NFSU2_TR(0x5a66f2);
if(r1(R+514)){{goto L5a66fc;}}
}
B5a66f4:L5a66f4:{c.instructions+=2;NFSU2_TR(0x5a66f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a66f6:{NFSU2_TR(0x5a66f6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a66fc:L5a66fc:{c.instructions+=9;NFSU2_TR(0x5a66fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a66fe:{NFSU2_TR(0x5a66fe);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6701:{NFSU2_TR(0x5a6701);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6705:{NFSU2_TR(0x5a6705);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6707:{NFSU2_TR(0x5a6707);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a670b:{NFSU2_TR(0x5a670b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6711:{NFSU2_TR(0x5a6711);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6713:{NFSU2_TR(0x5a6713);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6716:{NFSU2_TR(0x5a6716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6849;}}
}
B5a671c:L5a671c:{c.instructions+=6;NFSU2_TR(0x5a671c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6720:{NFSU2_TR(0x5a6720);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6726:{NFSU2_TR(0x5a6726);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a672a:{NFSU2_TR(0x5a672a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a672c:{NFSU2_TR(0x5a672c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a672f:{NFSU2_TR(0x5a672f);
if(r1(R+514)){{goto L5a6739;}}
}
B5a6731:L5a6731:{c.instructions+=2;NFSU2_TR(0x5a6731);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6733:{NFSU2_TR(0x5a6733);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6739:L5a6739:{c.instructions+=9;NFSU2_TR(0x5a6739);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a673c:{NFSU2_TR(0x5a673c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a673e:{NFSU2_TR(0x5a673e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6742:{NFSU2_TR(0x5a6742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6744:{NFSU2_TR(0x5a6744);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6748:{NFSU2_TR(0x5a6748);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a674e:{NFSU2_TR(0x5a674e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6750:{NFSU2_TR(0x5a6750);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6753:{NFSU2_TR(0x5a6753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6854;}}
}
B5a6759:L5a6759:{c.instructions+=6;NFSU2_TR(0x5a6759);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a675d:{NFSU2_TR(0x5a675d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6763:{NFSU2_TR(0x5a6763);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6767:{NFSU2_TR(0x5a6767);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6769:{NFSU2_TR(0x5a6769);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a676c:{NFSU2_TR(0x5a676c);
if(r1(R+514)){{goto L5a6776;}}
}
B5a676e:L5a676e:{c.instructions+=2;NFSU2_TR(0x5a676e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6770:{NFSU2_TR(0x5a6770);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6776:L5a6776:{c.instructions+=7;NFSU2_TR(0x5a6776);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6779:{NFSU2_TR(0x5a6779);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a677c:{NFSU2_TR(0x5a677c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5a677f:{NFSU2_TR(0x5a677f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6781:{NFSU2_TR(0x5a6781);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5a6784:{NFSU2_TR(0x5a6784);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6786:{NFSU2_TR(0x5a6786);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6685u);}goto L5a6685;}}
}
B5a678c:L5a678c:{c.instructions+=2;NFSU2_TR(0x5a678c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a678e:{NFSU2_TR(0x5a678e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a67cf;}}
}
B5a6790:L5a6790:{c.instructions+=6;NFSU2_TR(0x5a6790);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6793:{NFSU2_TR(0x5a6793);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6797:{NFSU2_TR(0x5a6797);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a679d:{NFSU2_TR(0x5a679d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a679f:{NFSU2_TR(0x5a679f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a67a2:{NFSU2_TR(0x5a67a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a685f;}}
}
B5a67a8:L5a67a8:{c.instructions+=6;NFSU2_TR(0x5a67a8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a67ac:{NFSU2_TR(0x5a67ac);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a67b2:{NFSU2_TR(0x5a67b2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a67b6:{NFSU2_TR(0x5a67b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a67b8:{NFSU2_TR(0x5a67b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a67bb:{NFSU2_TR(0x5a67bb);
if(r1(R+514)){{goto L5a67c5;}}
}
B5a67bd:L5a67bd:{c.instructions+=2;NFSU2_TR(0x5a67bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a67bf:{NFSU2_TR(0x5a67bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a67c5:L5a67c5:{c.instructions+=5;NFSU2_TR(0x5a67c5);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a67c8:{NFSU2_TR(0x5a67c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a67c9:{NFSU2_TR(0x5a67c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a67cb:{NFSU2_TR(0x5a67cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a67cd:{NFSU2_TR(0x5a67cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6790u);}goto L5a6790;}}
}
B5a67cf:L5a67cf:{c.instructions+=1;NFSU2_TR(0x5a67cf);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a67d3:L5a67d3:{c.instructions+=6;NFSU2_TR(0x5a67d3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a67d5:{NFSU2_TR(0x5a67d5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a67d7:{NFSU2_TR(0x5a67d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a67dd:{NFSU2_TR(0x5a67dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a67df:{NFSU2_TR(0x5a67df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a67e2:{NFSU2_TR(0x5a67e2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a67f3;}}
}
B5a67e4:L5a67e4:{c.instructions+=5;NFSU2_TR(0x5a67e4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a67e6:{NFSU2_TR(0x5a67e6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a67ec:{NFSU2_TR(0x5a67ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a67ee:{NFSU2_TR(0x5a67ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a67f1:{NFSU2_TR(0x5a67f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a681b;}}
}
B5a67f3:L5a67f3:{c.instructions+=5;NFSU2_TR(0x5a67f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a67f5:{NFSU2_TR(0x5a67f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a67fb:{NFSU2_TR(0x5a67fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a67fd:{NFSU2_TR(0x5a67fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6800:{NFSU2_TR(0x5a6800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a686a;}}
}
B5a6802:L5a6802:{c.instructions+=6;NFSU2_TR(0x5a6802);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a6804:{NFSU2_TR(0x5a6804);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a680a:{NFSU2_TR(0x5a680a);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5a680c:{NFSU2_TR(0x5a680c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a680e:{NFSU2_TR(0x5a680e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6811:{NFSU2_TR(0x5a6811);
if(r1(R+514)){{goto L5a681b;}}
}
B5a6813:L5a6813:{c.instructions+=2;NFSU2_TR(0x5a6813);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6815:{NFSU2_TR(0x5a6815);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a681b:L5a681b:{c.instructions+=9;NFSU2_TR(0x5a681b);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6821:{NFSU2_TR(0x5a6821);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6825:{NFSU2_TR(0x5a6825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6826:{NFSU2_TR(0x5a6826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6827:{NFSU2_TR(0x5a6827);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a682b:{NFSU2_TR(0x5a682b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a682c:{NFSU2_TR(0x5a682c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a682d:{NFSU2_TR(0x5a682d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a6830:{NFSU2_TR(0x5a6830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6833:L5a6833:{c.instructions+=2;NFSU2_TR(0x5a6833);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6839:{NFSU2_TR(0x5a6839);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a66beu);}goto L5a66be;}
}
B5a683e:L5a683e:{c.instructions+=2;NFSU2_TR(0x5a683e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6844:{NFSU2_TR(0x5a6844);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a66fcu);}goto L5a66fc;}
}
B5a6849:L5a6849:{c.instructions+=2;NFSU2_TR(0x5a6849);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a684f:{NFSU2_TR(0x5a684f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6739u);}goto L5a6739;}
}
B5a6854:L5a6854:{c.instructions+=2;NFSU2_TR(0x5a6854);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a685a:{NFSU2_TR(0x5a685a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6776u);}goto L5a6776;}
}
B5a685f:L5a685f:{c.instructions+=2;NFSU2_TR(0x5a685f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6865:{NFSU2_TR(0x5a6865);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a67c5u);}goto L5a67c5;}
}
B5a686a:L5a686a:{c.instructions+=2;NFSU2_TR(0x5a686a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6870:{NFSU2_TR(0x5a6870);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a681bu);}goto L5a681b;}
}
B5a6880:L5a6880:{c.instructions+=12;NFSU2_TR(0x5a6880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6881:{NFSU2_TR(0x5a6881);
__builtin_memmove((R+20),(R+16),4);
}
B5a6883:{NFSU2_TR(0x5a6883);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5a6886:{NFSU2_TR(0x5a6886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x15cull))));
}
B5a688c:{NFSU2_TR(0x5a688c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a688f:{NFSU2_TR(0x5a688f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6891:{NFSU2_TR(0x5a6891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6892:{NFSU2_TR(0x5a6892);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6893:{NFSU2_TR(0x5a6893);
__builtin_memmove((R+12),(R+4),4);
}
B5a6895:{NFSU2_TR(0x5a6895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6896:{NFSU2_TR(0x5a6896);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a689a:{NFSU2_TR(0x5a689a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a68a3;}}
}
B5a689c:L5a689c:{c.instructions+=1;NFSU2_TR(0x5a689c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a68a3:L5a68a3:{c.instructions+=6;NFSU2_TR(0x5a68a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a68a6:{NFSU2_TR(0x5a68a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a68a8:{NFSU2_TR(0x5a68a8);
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
B5a68aa:{NFSU2_TR(0x5a68aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a68b2:{NFSU2_TR(0x5a68b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a68b6:{NFSU2_TR(0x5a68b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a6b38;}}
}
B5a68bc:L5a68bc:{c.instructions+=4;NFSU2_TR(0x5a68bc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a68bf:{NFSU2_TR(0x5a68bf);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a68c5:{NFSU2_TR(0x5a68c5);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B5a68cb:{NFSU2_TR(0x5a68cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a68d0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a68d0:L5a68d0:{c.instructions+=3;NFSU2_TR(0x5a68d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a68d1:{NFSU2_TR(0x5a68d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a68d5:{NFSU2_TR(0x5a68d5);
{goto L5a68e0;}
}
B5a68d7:L5a68d7:{c.instructions+=2;NFSU2_TR(0x5a68d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a68db:{NFSU2_TR(0x5a68db);
{goto L5a68e0;}
}
B5a68e0:L5a68e0:{c.instructions+=3;NFSU2_TR(0x5a68e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a68e3:{NFSU2_TR(0x5a68e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a68e5:{NFSU2_TR(0x5a68e5);
if(r1(R+518)){{goto L5a68f0;}}
}
B5a68e7:L5a68e7:{c.instructions+=3;NFSU2_TR(0x5a68e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5a68ea:{NFSU2_TR(0x5a68ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a68ee:{NFSU2_TR(0x5a68ee);
{goto L5a68f4;}
}
B5a68f0:L5a68f0:{c.instructions+=1;NFSU2_TR(0x5a68f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a68f4:L5a68f4:{c.instructions+=4;NFSU2_TR(0x5a68f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a68f8:{NFSU2_TR(0x5a68f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a68f9:{NFSU2_TR(0x5a68f9);
__builtin_memmove((R+4),(R+12),4);
}
B5a68fb:{NFSU2_TR(0x5a68fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6900ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6450u);}goto L5a6450;}
}
B5a6900:L5a6900:{c.instructions+=4;NFSU2_TR(0x5a6900);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6904:{NFSU2_TR(0x5a6904);
w4(R+4,u32(0x25ull));
}
B5a6909:{NFSU2_TR(0x5a6909);
__builtin_memmove((R+24),(R+12),4);
}
B5a690b:{NFSU2_TR(0x5a690b);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5a690f:L5a690f:{c.instructions+=1;NFSU2_TR(0x5a690f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6911;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a690fu);}goto L5a690f;}
}
B5a6911:L5a6911:{c.instructions+=5;NFSU2_TR(0x5a6911);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6913:{NFSU2_TR(0x5a6913);
w4(R+4,u32(0x25ull));
}
B5a6918:{NFSU2_TR(0x5a6918);
__builtin_memmove((R+24),(R+12),4);
}
B5a691a:{NFSU2_TR(0x5a691a);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6921:{NFSU2_TR(0x5a6921);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6923:L5a6923:{c.instructions+=1;NFSU2_TR(0x5a6923);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6925;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6923u);}goto L5a6923;}
}
B5a6925:L5a6925:{c.instructions+=3;NFSU2_TR(0x5a6925);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6926:{NFSU2_TR(0x5a6926);
__builtin_memmove((R+4),(R+12),4);
}
B5a6928:{NFSU2_TR(0x5a6928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a692dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a692d:L5a692d:{c.instructions+=8;NFSU2_TR(0x5a692d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a6932:{NFSU2_TR(0x5a6932);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6936:{NFSU2_TR(0x5a6936);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a6939:{NFSU2_TR(0x5a6939);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a693b:{NFSU2_TR(0x5a693b);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6941:{NFSU2_TR(0x5a6941);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6943:{NFSU2_TR(0x5a6943);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6946:{NFSU2_TR(0x5a6946);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a694d;}}
}
B5a6948:L5a6948:{c.instructions+=1;NFSU2_TR(0x5a6948);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a694d:L5a694d:{c.instructions+=4;NFSU2_TR(0x5a694d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6951:{NFSU2_TR(0x5a6951);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6954:{NFSU2_TR(0x5a6954);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a695c:{NFSU2_TR(0x5a695c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a6962;}}
}
B5a695e:L5a695e:{c.instructions+=1;NFSU2_TR(0x5a695e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6962:L5a6962:{c.instructions+=5;NFSU2_TR(0x5a6962);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6966:{NFSU2_TR(0x5a6966);
w4(R+0,u32(0x1ull));
}
B5a696b:{NFSU2_TR(0x5a696b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a696d:{NFSU2_TR(0x5a696d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6971:{NFSU2_TR(0x5a6971);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a6af7;}}
}
B5a6977:L5a6977:{c.instructions+=1;NFSU2_TR(0x5a6977);
{goto L5a6980;}
}
B5a6980:L5a6980:{c.instructions+=3;NFSU2_TR(0x5a6980);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a6984:{NFSU2_TR(0x5a6984);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6986:{NFSU2_TR(0x5a6986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6af7;}}
}
B5a698c:L5a698c:{c.instructions+=1;NFSU2_TR(0x5a698c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a6994:L5a6994:{c.instructions+=3;NFSU2_TR(0x5a6994);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a6998:{NFSU2_TR(0x5a6998);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a699a:{NFSU2_TR(0x5a699a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6ade;}}
}
B5a69a0:L5a69a0:{c.instructions+=12;NFSU2_TR(0x5a69a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a69a4:{NFSU2_TR(0x5a69a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a69a8:{NFSU2_TR(0x5a69a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a69aa:{NFSU2_TR(0x5a69aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5a69ad:{NFSU2_TR(0x5a69ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a69b1:{NFSU2_TR(0x5a69b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69b2:{NFSU2_TR(0x5a69b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69b4:{NFSU2_TR(0x5a69b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69b5:{NFSU2_TR(0x5a69b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69b6:{NFSU2_TR(0x5a69b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a69ba:{NFSU2_TR(0x5a69ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69bb:{NFSU2_TR(0x5a69bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a69c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6210u);}goto L5a6210;}
}
B5a69c0:L5a69c0:{c.instructions+=3;NFSU2_TR(0x5a69c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5a69c3:{NFSU2_TR(0x5a69c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a69c5:{NFSU2_TR(0x5a69c5);
if(r1(R+518)){{goto L5a6a8d;}}
}
B5a69cb:L5a69cb:{c.instructions+=1;NFSU2_TR(0x5a69cb);
{goto L5a69d0;}
}
B5a69d0:L5a69d0:{c.instructions+=3;NFSU2_TR(0x5a69d0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a69d4:{NFSU2_TR(0x5a69d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a69d6:{NFSU2_TR(0x5a69d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6a8d;}}
}
B5a69dc:L5a69dc:{c.instructions+=5;NFSU2_TR(0x5a69dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69de:{NFSU2_TR(0x5a69de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69e0:{NFSU2_TR(0x5a69e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69e1:{NFSU2_TR(0x5a69e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a69e5:{NFSU2_TR(0x5a69e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a69eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6320u);}goto L5a6320;}
}
B5a69ea:L5a69ea:{c.instructions+=2;NFSU2_TR(0x5a69ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a69ec:{NFSU2_TR(0x5a69ec);
if(r1(R+518)){{goto L5a6a56;}}
}
B5a69ee:L5a69ee:{c.instructions+=6;NFSU2_TR(0x5a69ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a69f2:{NFSU2_TR(0x5a69f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69f4:{NFSU2_TR(0x5a69f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69f6:{NFSU2_TR(0x5a69f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a69f7:{NFSU2_TR(0x5a69f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a69fb:{NFSU2_TR(0x5a69fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6a00ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6a00:L5a6a00:{c.instructions+=12;NFSU2_TR(0x5a6a00);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6a03:{NFSU2_TR(0x5a6a03);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5a6a05:{NFSU2_TR(0x5a6a05);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a6a07:{NFSU2_TR(0x5a6a07);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6a0b:{NFSU2_TR(0x5a6a0b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6a0f:{NFSU2_TR(0x5a6a0f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a6a12:{NFSU2_TR(0x5a6a12);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a6a14:{NFSU2_TR(0x5a6a14);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a6a16:{NFSU2_TR(0x5a6a16);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a6a18:{NFSU2_TR(0x5a6a18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6a1a:{NFSU2_TR(0x5a6a1a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6a1d:{NFSU2_TR(0x5a6a1d);
if(r1(R+514)){{goto L5a6a54;}}
}
B5a6a1f:L5a6a1f:{c.instructions+=6;NFSU2_TR(0x5a6a1f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6a23:{NFSU2_TR(0x5a6a23);
w4(R+4,u32(0x25ull));
}
B5a6a28:{NFSU2_TR(0x5a6a28);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6a2c:{NFSU2_TR(0x5a6a2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6a30:{NFSU2_TR(0x5a6a30);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6a36:{NFSU2_TR(0x5a6a36);
u8 U[4];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6a3d:L5a6a3d:{c.instructions+=1;NFSU2_TR(0x5a6a3d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6a3f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6a3du);}goto L5a6a3d;}
}
B5a6a3f:L5a6a3f:{c.instructions+=3;NFSU2_TR(0x5a6a3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6a41:{NFSU2_TR(0x5a6a41);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6a44:{NFSU2_TR(0x5a6a44);
if(r1(R+514)){{goto L5a6a4d;}}
}
B5a6a46:L5a6a46:{c.instructions+=2;NFSU2_TR(0x5a6a46);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a6a4b:{NFSU2_TR(0x5a6a4b);
{goto L5a6a56;}
}
B5a6a4d:L5a6a4d:{c.instructions+=2;NFSU2_TR(0x5a6a4d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a6a52:{NFSU2_TR(0x5a6a52);
{goto L5a6a56;}
}
B5a6a54:L5a6a54:{c.instructions+=1;NFSU2_TR(0x5a6a54);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6a56:L5a6a56:{c.instructions+=2;NFSU2_TR(0x5a6a56);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a6a5b:{NFSU2_TR(0x5a6a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6a66;}}
}
B5a6a5d:L5a6a5d:{c.instructions+=4;NFSU2_TR(0x5a6a5d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a6a5f:{NFSU2_TR(0x5a6a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6a61:{NFSU2_TR(0x5a6a61);
__builtin_memmove((R+8),(R+518),1);
}
B5a6a64:{NFSU2_TR(0x5a6a64);
__builtin_memmove((R+12),(R+8),4);
}
B5a6a66:L5a6a66:{c.instructions+=11;NFSU2_TR(0x5a6a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6a6a:{NFSU2_TR(0x5a6a6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6a6c:{NFSU2_TR(0x5a6a6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5a6a6f:{NFSU2_TR(0x5a6a6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6a73:{NFSU2_TR(0x5a6a73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6a74:{NFSU2_TR(0x5a6a74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6a76:{NFSU2_TR(0x5a6a76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6a77:{NFSU2_TR(0x5a6a77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6a78:{NFSU2_TR(0x5a6a78);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6a7c:{NFSU2_TR(0x5a6a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6a7d:{NFSU2_TR(0x5a6a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6a82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6210u);}goto L5a6210;}
}
B5a6a82:L5a6a82:{c.instructions+=3;NFSU2_TR(0x5a6a82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5a6a85:{NFSU2_TR(0x5a6a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6a87:{NFSU2_TR(0x5a6a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a69d0u);}goto L5a69d0;}}
}
B5a6a8d:L5a6a8d:{c.instructions+=6;NFSU2_TR(0x5a6a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6a91:{NFSU2_TR(0x5a6a91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a6a95:{NFSU2_TR(0x5a6a95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a6a96:{NFSU2_TR(0x5a6a96);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6a99:{NFSU2_TR(0x5a6a99);
w4(R+4,u32(0x25ull));
}
B5a6a9e:{NFSU2_TR(0x5a6a9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6aa2:L5a6aa2:{c.instructions+=1;NFSU2_TR(0x5a6aa2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6aa4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6aa2u);}goto L5a6aa2;}
}
B5a6aa4:L5a6aa4:{c.instructions+=2;NFSU2_TR(0x5a6aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6aa8:{NFSU2_TR(0x5a6aa8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6994u);}goto L5a6994;}}
}
B5a6aae:L5a6aae:{c.instructions+=3;NFSU2_TR(0x5a6aae);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a6ab2:{NFSU2_TR(0x5a6ab2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a6ab4:{NFSU2_TR(0x5a6ab4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a6ade;}}
}
B5a6ab6:L5a6ab6:{c.instructions+=4;NFSU2_TR(0x5a6ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6aba:{NFSU2_TR(0x5a6aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6abe:{NFSU2_TR(0x5a6abe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6ac0:{NFSU2_TR(0x5a6ac0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a6ade;}}
}
B5a6ac2:L5a6ac2:{c.instructions+=6;NFSU2_TR(0x5a6ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6ac6:{NFSU2_TR(0x5a6ac6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a6aca:{NFSU2_TR(0x5a6aca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6acb:{NFSU2_TR(0x5a6acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6acc:{NFSU2_TR(0x5a6acc);
__builtin_memmove((R+4),(R+24),4);
}
B5a6ace:{NFSU2_TR(0x5a6ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6ad3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a64a0u);}goto L5a64a0;}
}
B5a6ad3:L5a6ad3:{c.instructions+=2;NFSU2_TR(0x5a6ad3);
w4(R+4,u32(0x25ull));
}
B5a6ad8:{NFSU2_TR(0x5a6ad8);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6adc:L5a6adc:{c.instructions+=1;NFSU2_TR(0x5a6adc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6ade;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6adcu);}goto L5a6adc;}
}
B5a6ade:L5a6ade:{c.instructions+=7;NFSU2_TR(0x5a6ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6ae2:{NFSU2_TR(0x5a6ae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6ae6:{NFSU2_TR(0x5a6ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a6aea:{NFSU2_TR(0x5a6aea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a6aeb:{NFSU2_TR(0x5a6aeb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6aed:{NFSU2_TR(0x5a6aed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6af1:{NFSU2_TR(0x5a6af1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6980u);}goto L5a6980;}}
}
B5a6af7:L5a6af7:{c.instructions+=4;NFSU2_TR(0x5a6af7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6af9:{NFSU2_TR(0x5a6af9);
w4(R+4,u32(0x25ull));
}
B5a6afe:{NFSU2_TR(0x5a6afe);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6b05:{NFSU2_TR(0x5a6b05);
__builtin_memmove((R+28),(R+12),4);
}
B5a6b07:L5a6b07:{c.instructions+=1;NFSU2_TR(0x5a6b07);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6b09;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6b07u);}goto L5a6b07;}
}
B5a6b09:L5a6b09:{c.instructions+=5;NFSU2_TR(0x5a6b09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6b0d:{NFSU2_TR(0x5a6b0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b0f:{NFSU2_TR(0x5a6b0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b10:{NFSU2_TR(0x5a6b10);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a6b17:{NFSU2_TR(0x5a6b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6b1cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6b1c:L5a6b1c:{c.instructions+=8;NFSU2_TR(0x5a6b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6b20:{NFSU2_TR(0x5a6b20);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6b24:{NFSU2_TR(0x5a6b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6b27:{NFSU2_TR(0x5a6b27);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5a6b28:{NFSU2_TR(0x5a6b28);
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
B5a6b2a:{NFSU2_TR(0x5a6b2a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6b2e:{NFSU2_TR(0x5a6b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6b32:{NFSU2_TR(0x5a6b32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a68d7u);}goto L5a68d7;}}
}
B5a6b38:L5a6b38:{c.instructions+=8;NFSU2_TR(0x5a6b38);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a6b3b:{NFSU2_TR(0x5a6b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6b3c:{NFSU2_TR(0x5a6b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6b3d:{NFSU2_TR(0x5a6b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6b3e:{NFSU2_TR(0x5a6b3e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a6b42:{NFSU2_TR(0x5a6b42);
__builtin_memmove((R+16),(R+20),4);
}
B5a6b44:{NFSU2_TR(0x5a6b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6b45:{NFSU2_TR(0x5a6b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6b50:L5a6b50:{c.instructions+=8;NFSU2_TR(0x5a6b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b51:{NFSU2_TR(0x5a6b51);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6b55:{NFSU2_TR(0x5a6b55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b56:{NFSU2_TR(0x5a6b56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b58:{NFSU2_TR(0x5a6b58);
__builtin_memmove((R+24),(R+4),4);
}
B5a6b5a:{NFSU2_TR(0x5a6b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6b5e:{NFSU2_TR(0x5a6b5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6b60:{NFSU2_TR(0x5a6b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6b65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6b65:L5a6b65:{c.instructions+=5;NFSU2_TR(0x5a6b65);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6b6b:{NFSU2_TR(0x5a6b6b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a6b6d:{NFSU2_TR(0x5a6b6d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6b6f:{NFSU2_TR(0x5a6b6f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6b72:{NFSU2_TR(0x5a6b72);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a6bbe;}}
}
B5a6b74:L5a6b74:{c.instructions+=18;NFSU2_TR(0x5a6b74);
{u32 ea_=u32(r4(R+24)+u32(836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6b7a:{NFSU2_TR(0x5a6b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6b7e:{NFSU2_TR(0x5a6b7e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6b80:{NFSU2_TR(0x5a6b80);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6b82:{NFSU2_TR(0x5a6b82);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6b84:{NFSU2_TR(0x5a6b84);
{u32 ea_=u32(r4(R+0)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6b8a:{NFSU2_TR(0x5a6b8a);
{u32 ea_=u32(r4(R+24)+u32(840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6b90:{NFSU2_TR(0x5a6b90);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6b92:{NFSU2_TR(0x5a6b92);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6b94:{NFSU2_TR(0x5a6b94);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a6b96:{NFSU2_TR(0x5a6b96);
{u32 ea_=u32(r4(R+0)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6b9c:{NFSU2_TR(0x5a6b9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6b9e:{NFSU2_TR(0x5a6b9e);
{u32 ea_=u32(r4(R+24)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ba4:{NFSU2_TR(0x5a6ba4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a6baa:{NFSU2_TR(0x5a6baa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6bac:{NFSU2_TR(0x5a6bac);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6bb2:{NFSU2_TR(0x5a6bb2);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6bb8:{NFSU2_TR(0x5a6bb8);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6bbe:L5a6bbe:{c.instructions+=3;NFSU2_TR(0x5a6bbe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6bc0:{NFSU2_TR(0x5a6bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6bc1:{NFSU2_TR(0x5a6bc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6bd0:L5a6bd0:{c.instructions+=9;NFSU2_TR(0x5a6bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5a6bd3:{NFSU2_TR(0x5a6bd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6bd4:{NFSU2_TR(0x5a6bd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6bd8:{NFSU2_TR(0x5a6bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6bd9:{NFSU2_TR(0x5a6bd9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6bdb:{NFSU2_TR(0x5a6bdb);
__builtin_memmove((R+20),(R+4),4);
}
B5a6bdd:{NFSU2_TR(0x5a6bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6be1:{NFSU2_TR(0x5a6be1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6be3:{NFSU2_TR(0x5a6be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6be8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6be8:L5a6be8:{c.instructions+=4;NFSU2_TR(0x5a6be8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6bee:{NFSU2_TR(0x5a6bee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6bf0:{NFSU2_TR(0x5a6bf0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6bf3:{NFSU2_TR(0x5a6bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a6cf9;}}
}
B5a6bf9:L5a6bf9:{c.instructions+=5;NFSU2_TR(0x5a6bf9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6bfd:{NFSU2_TR(0x5a6bfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6bfe:{NFSU2_TR(0x5a6bfe);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6c04:{NFSU2_TR(0x5a6c04);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6c0a:{NFSU2_TR(0x5a6c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6c0full));
TAIL_STATIC(0x75bed4u,75b);
}
B5a6c0f:L5a6c0f:{c.instructions+=3;NFSU2_TR(0x5a6c0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6c12:{NFSU2_TR(0x5a6c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a6c16:{NFSU2_TR(0x5a6c16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a6caa;}}
}
B5a6c1c:L5a6c1c:{c.instructions+=2;NFSU2_TR(0x5a6c1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a6c1f:{NFSU2_TR(0x5a6c1f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a6caa;}}
}
B5a6c25:L5a6c25:{c.instructions+=17;NFSU2_TR(0x5a6c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a6c28:{NFSU2_TR(0x5a6c28);
u8 U[16];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5a6c2f:{NFSU2_TR(0x5a6c2f);
u8 U[12];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a6c36:{NFSU2_TR(0x5a6c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c3c:{NFSU2_TR(0x5a6c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6c3f:{NFSU2_TR(0x5a6c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c45:{NFSU2_TR(0x5a6c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6c48:{NFSU2_TR(0x5a6c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c4e:{NFSU2_TR(0x5a6c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a6c50:{NFSU2_TR(0x5a6c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6c51:{NFSU2_TR(0x5a6c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c57:{NFSU2_TR(0x5a6c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6c5a:{NFSU2_TR(0x5a6c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c60:{NFSU2_TR(0x5a6c60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6c61:{NFSU2_TR(0x5a6c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6c64:{NFSU2_TR(0x5a6c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6c6a:{NFSU2_TR(0x5a6c6a);
w4(R+4,u32(0x8ull));
}
B5a6c6f:L5a6c6f:{c.instructions+=1;NFSU2_TR(0x5a6c6f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5a6c71;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6c6fu);}goto L5a6c6f;}
}
B5a6c71:L5a6c71:{c.instructions+=3;NFSU2_TR(0x5a6c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c78:{NFSU2_TR(0x5a6c78);
w4(R+4,u32(0x2ull));
}
B5a6c7d:{NFSU2_TR(0x5a6c7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6c80:L5a6c80:{c.instructions+=5;NFSU2_TR(0x5a6c80);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6c82:{NFSU2_TR(0x5a6c82);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6c88:{NFSU2_TR(0x5a6c88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6c8a:{NFSU2_TR(0x5a6c8a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6c8d:{NFSU2_TR(0x5a6c8d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a6c9f;}}
}
B5a6c8f:L5a6c8f:{c.instructions+=7;NFSU2_TR(0x5a6c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a6c92:{NFSU2_TR(0x5a6c92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a6c93:{NFSU2_TR(0x5a6c93);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5a6c94:{NFSU2_TR(0x5a6c94);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5a6c97:{NFSU2_TR(0x5a6c97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a6c9a:{NFSU2_TR(0x5a6c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6c9d:{NFSU2_TR(0x5a6c9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6c80u);}goto L5a6c80;}}
}
B5a6c9f:L5a6c9f:{c.instructions+=4;NFSU2_TR(0x5a6c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a6ca2:{NFSU2_TR(0x5a6ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6ca3:{NFSU2_TR(0x5a6ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a6ca9:{NFSU2_TR(0x5a6ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6caa:L5a6caa:{c.instructions+=19;NFSU2_TR(0x5a6caa);
{u32 ea_=u32(r4(R+12)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6cb0:{NFSU2_TR(0x5a6cb0);
{u32 ea_=u32(r4(R+20)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6cb6:{NFSU2_TR(0x5a6cb6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6cb8:{NFSU2_TR(0x5a6cb8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6cbc:{NFSU2_TR(0x5a6cbc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a6cbe:{NFSU2_TR(0x5a6cbe);
{u32 ea_=u32(r4(R+12)+u32(460u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6cc4:{NFSU2_TR(0x5a6cc4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6cc6:{NFSU2_TR(0x5a6cc6);
{u32 ea_=u32(r4(R+12)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ccc:{NFSU2_TR(0x5a6ccc);
{u32 ea_=u32(r4(R+20)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6cd2:{NFSU2_TR(0x5a6cd2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6cd4:{NFSU2_TR(0x5a6cd4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6cd8:{NFSU2_TR(0x5a6cd8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a6cda:{NFSU2_TR(0x5a6cda);
{u32 ea_=u32(r4(R+12)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6ce0:{NFSU2_TR(0x5a6ce0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6ce2:{NFSU2_TR(0x5a6ce2);
{u32 ea_=u32(r4(R+20)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ce8:{NFSU2_TR(0x5a6ce8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6cec:{NFSU2_TR(0x5a6cec);
{u32 ea_=u32(r4(R+12)+u32(508u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6cf2:{NFSU2_TR(0x5a6cf2);
{u32 ea_=u32(r4(R+12)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6cf8:{NFSU2_TR(0x5a6cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a6cf9:L5a6cf9:{c.instructions+=3;NFSU2_TR(0x5a6cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a6cfa:{NFSU2_TR(0x5a6cfa);
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
B5a6cfd:{NFSU2_TR(0x5a6cfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6d00:L5a6d00:{c.instructions+=8;NFSU2_TR(0x5a6d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6d01:{NFSU2_TR(0x5a6d01);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6d05:{NFSU2_TR(0x5a6d05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6d06:{NFSU2_TR(0x5a6d06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6d08:{NFSU2_TR(0x5a6d08);
__builtin_memmove((R+24),(R+4),4);
}
B5a6d0a:{NFSU2_TR(0x5a6d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6d0e:{NFSU2_TR(0x5a6d0e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6d10:{NFSU2_TR(0x5a6d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6d15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6d15:L5a6d15:{c.instructions+=5;NFSU2_TR(0x5a6d15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d1b:{NFSU2_TR(0x5a6d1b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a6d1d:{NFSU2_TR(0x5a6d1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6d1f:{NFSU2_TR(0x5a6d1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6d22:{NFSU2_TR(0x5a6d22);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a6e1c;}}
}
B5a6d28:L5a6d28:{c.instructions+=49;NFSU2_TR(0x5a6d28);
{u32 ea_=u32(r4(R+24)+u32(1056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d2e:{NFSU2_TR(0x5a6d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6d32:{NFSU2_TR(0x5a6d32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d34:{NFSU2_TR(0x5a6d34);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d3a:{NFSU2_TR(0x5a6d3a);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6d40:{NFSU2_TR(0x5a6d40);
{u32 ea_=u32(r4(R+24)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d46:{NFSU2_TR(0x5a6d46);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d48:{NFSU2_TR(0x5a6d48);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d4e:{NFSU2_TR(0x5a6d4e);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6d54:{NFSU2_TR(0x5a6d54);
{u32 ea_=u32(r4(R+24)+u32(1064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d5a:{NFSU2_TR(0x5a6d5a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d5c:{NFSU2_TR(0x5a6d5c);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d62:{NFSU2_TR(0x5a6d62);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6d68:{NFSU2_TR(0x5a6d68);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d6e:{NFSU2_TR(0x5a6d6e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d70:{NFSU2_TR(0x5a6d70);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d76:{NFSU2_TR(0x5a6d76);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6d7c:{NFSU2_TR(0x5a6d7c);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d82:{NFSU2_TR(0x5a6d82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d84:{NFSU2_TR(0x5a6d84);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d8a:{NFSU2_TR(0x5a6d8a);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6d90:{NFSU2_TR(0x5a6d90);
{u32 ea_=u32(r4(R+24)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6d96:{NFSU2_TR(0x5a6d96);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6d98:{NFSU2_TR(0x5a6d98);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6d9e:{NFSU2_TR(0x5a6d9e);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6da4:{NFSU2_TR(0x5a6da4);
{u32 ea_=u32(r4(R+24)+u32(1080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6daa:{NFSU2_TR(0x5a6daa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6dac:{NFSU2_TR(0x5a6dac);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6db2:{NFSU2_TR(0x5a6db2);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6db8:{NFSU2_TR(0x5a6db8);
{u32 ea_=u32(r4(R+24)+u32(1084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6dbe:{NFSU2_TR(0x5a6dbe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6dc0:{NFSU2_TR(0x5a6dc0);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6dc6:{NFSU2_TR(0x5a6dc6);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6dcc:{NFSU2_TR(0x5a6dcc);
{u32 ea_=u32(r4(R+24)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6dd2:{NFSU2_TR(0x5a6dd2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6dd4:{NFSU2_TR(0x5a6dd4);
{u32 ea_=u32(r4(R+0)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6dda:{NFSU2_TR(0x5a6dda);
{u32 ea_=u32(r4(R+0)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6de0:{NFSU2_TR(0x5a6de0);
{u32 ea_=u32(r4(R+24)+u32(1092u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6de6:{NFSU2_TR(0x5a6de6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6de8:{NFSU2_TR(0x5a6de8);
{u32 ea_=u32(r4(R+0)+u32(584u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6dee:{NFSU2_TR(0x5a6dee);
{u32 ea_=u32(r4(R+0)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6df4:{NFSU2_TR(0x5a6df4);
{u32 ea_=u32(r4(R+24)+u32(1096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6dfa:{NFSU2_TR(0x5a6dfa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6dfc:{NFSU2_TR(0x5a6dfc);
{u32 ea_=u32(r4(R+0)+u32(588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6e02:{NFSU2_TR(0x5a6e02);
{u32 ea_=u32(r4(R+0)+u32(588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6e08:{NFSU2_TR(0x5a6e08);
{u32 ea_=u32(r4(R+24)+u32(1100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e0e:{NFSU2_TR(0x5a6e0e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a6e10:{NFSU2_TR(0x5a6e10);
{u32 ea_=u32(r4(R+0)+u32(592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6e16:{NFSU2_TR(0x5a6e16);
{u32 ea_=u32(r4(R+0)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6e1c:L5a6e1c:{c.instructions+=3;NFSU2_TR(0x5a6e1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a6e1e:{NFSU2_TR(0x5a6e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6e1f:{NFSU2_TR(0x5a6e1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6e30:L5a6e30:{c.instructions+=8;NFSU2_TR(0x5a6e30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6e31:{NFSU2_TR(0x5a6e31);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6e35:{NFSU2_TR(0x5a6e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6e36:{NFSU2_TR(0x5a6e36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6e38:{NFSU2_TR(0x5a6e38);
__builtin_memmove((R+24),(R+4),4);
}
B5a6e3a:{NFSU2_TR(0x5a6e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6e3e:{NFSU2_TR(0x5a6e3e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6e40:{NFSU2_TR(0x5a6e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6e45ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6e45:L5a6e45:{c.instructions+=75;NFSU2_TR(0x5a6e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6e49:{NFSU2_TR(0x5a6e49);
{u32 ea_=u32(r4(R+0)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e4f:{NFSU2_TR(0x5a6e4f);
{u32 ea_=u32(r4(R+24)+u32(1296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e55:{NFSU2_TR(0x5a6e55);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6e57:{NFSU2_TR(0x5a6e57);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6e59:{NFSU2_TR(0x5a6e59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6e5b:{NFSU2_TR(0x5a6e5b);
{u32 ea_=u32(r4(R+0)+u32(548u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6e61:{NFSU2_TR(0x5a6e61);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6e67:{NFSU2_TR(0x5a6e67);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6e6d:{NFSU2_TR(0x5a6e6d);
{u32 ea_=u32(r4(R+0)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e73:{NFSU2_TR(0x5a6e73);
{u32 ea_=u32(r4(R+24)+u32(1300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e79:{NFSU2_TR(0x5a6e79);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6e7b:{NFSU2_TR(0x5a6e7b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6e7d:{NFSU2_TR(0x5a6e7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6e7f:{NFSU2_TR(0x5a6e7f);
{u32 ea_=u32(r4(R+0)+u32(552u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6e85:{NFSU2_TR(0x5a6e85);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6e8b:{NFSU2_TR(0x5a6e8b);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6e91:{NFSU2_TR(0x5a6e91);
{u32 ea_=u32(r4(R+0)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e97:{NFSU2_TR(0x5a6e97);
{u32 ea_=u32(r4(R+24)+u32(1304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6e9d:{NFSU2_TR(0x5a6e9d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6e9f:{NFSU2_TR(0x5a6e9f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6ea1:{NFSU2_TR(0x5a6ea1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6ea3:{NFSU2_TR(0x5a6ea3);
{u32 ea_=u32(r4(R+0)+u32(556u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6ea9:{NFSU2_TR(0x5a6ea9);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6eaf:{NFSU2_TR(0x5a6eaf);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6eb5:{NFSU2_TR(0x5a6eb5);
{u32 ea_=u32(r4(R+0)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ebb:{NFSU2_TR(0x5a6ebb);
{u32 ea_=u32(r4(R+24)+u32(1308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ec1:{NFSU2_TR(0x5a6ec1);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6ec3:{NFSU2_TR(0x5a6ec3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6ec5:{NFSU2_TR(0x5a6ec5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6ec7:{NFSU2_TR(0x5a6ec7);
{u32 ea_=u32(r4(R+0)+u32(560u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6ecd:{NFSU2_TR(0x5a6ecd);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6ed3:{NFSU2_TR(0x5a6ed3);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6ed9:{NFSU2_TR(0x5a6ed9);
{u32 ea_=u32(r4(R+0)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6edf:{NFSU2_TR(0x5a6edf);
{u32 ea_=u32(r4(R+24)+u32(1312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ee5:{NFSU2_TR(0x5a6ee5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6ee7:{NFSU2_TR(0x5a6ee7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6ee9:{NFSU2_TR(0x5a6ee9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6eeb:{NFSU2_TR(0x5a6eeb);
{u32 ea_=u32(r4(R+0)+u32(564u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6ef1:{NFSU2_TR(0x5a6ef1);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6ef7:{NFSU2_TR(0x5a6ef7);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6efd:{NFSU2_TR(0x5a6efd);
{u32 ea_=u32(r4(R+0)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f03:{NFSU2_TR(0x5a6f03);
{u32 ea_=u32(r4(R+24)+u32(1316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f09:{NFSU2_TR(0x5a6f09);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6f0b:{NFSU2_TR(0x5a6f0b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6f0d:{NFSU2_TR(0x5a6f0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6f0f:{NFSU2_TR(0x5a6f0f);
{u32 ea_=u32(r4(R+0)+u32(568u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6f15:{NFSU2_TR(0x5a6f15);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6f1b:{NFSU2_TR(0x5a6f1b);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6f21:{NFSU2_TR(0x5a6f21);
{u32 ea_=u32(r4(R+0)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f27:{NFSU2_TR(0x5a6f27);
{u32 ea_=u32(r4(R+24)+u32(1320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f2d:{NFSU2_TR(0x5a6f2d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6f2f:{NFSU2_TR(0x5a6f2f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6f31:{NFSU2_TR(0x5a6f31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6f33:{NFSU2_TR(0x5a6f33);
{u32 ea_=u32(r4(R+0)+u32(572u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6f39:{NFSU2_TR(0x5a6f39);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6f3f:{NFSU2_TR(0x5a6f3f);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6f45:{NFSU2_TR(0x5a6f45);
{u32 ea_=u32(r4(R+0)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f4b:{NFSU2_TR(0x5a6f4b);
{u32 ea_=u32(r4(R+24)+u32(1324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f51:{NFSU2_TR(0x5a6f51);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6f53:{NFSU2_TR(0x5a6f53);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a6f55:{NFSU2_TR(0x5a6f55);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6f57:{NFSU2_TR(0x5a6f57);
{u32 ea_=u32(r4(R+0)+u32(576u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6f5d:{NFSU2_TR(0x5a6f5d);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6f63:{NFSU2_TR(0x5a6f63);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6f69:{NFSU2_TR(0x5a6f69);
{u32 ea_=u32(r4(R+0)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f6f:{NFSU2_TR(0x5a6f6f);
{u32 ea_=u32(r4(R+24)+u32(1328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6f75:{NFSU2_TR(0x5a6f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a6f76:{NFSU2_TR(0x5a6f76);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6f78:{NFSU2_TR(0x5a6f78);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5a6f7a:{NFSU2_TR(0x5a6f7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a6f7c:{NFSU2_TR(0x5a6f7c);
{u32 ea_=u32(r4(R+0)+u32(580u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a6f82:{NFSU2_TR(0x5a6f82);
{u32 ea_=u32(r4(R+0)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a6f88:{NFSU2_TR(0x5a6f88);
{u32 ea_=u32(r4(R+0)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6f8e:{NFSU2_TR(0x5a6f8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a6fa0:L5a6fa0:{c.instructions+=9;NFSU2_TR(0x5a6fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5a6fa3:{NFSU2_TR(0x5a6fa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fa4:{NFSU2_TR(0x5a6fa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a6fa8:{NFSU2_TR(0x5a6fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fa9:{NFSU2_TR(0x5a6fa9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fab:{NFSU2_TR(0x5a6fab);
__builtin_memmove((R+12),(R+4),4);
}
B5a6fad:{NFSU2_TR(0x5a6fad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a6fb1:{NFSU2_TR(0x5a6fb1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fb3:{NFSU2_TR(0x5a6fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a6fb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a6580u);}goto L5a6580;}
}
B5a6fb8:L5a6fb8:{c.instructions+=4;NFSU2_TR(0x5a6fb8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a6fbe:{NFSU2_TR(0x5a6fbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a6fc0:{NFSU2_TR(0x5a6fc0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a6fc3:{NFSU2_TR(0x5a6fc3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x5a712du,5a7);}
}
B5a6fc9:L5a6fc9:{c.instructions+=8;NFSU2_TR(0x5a6fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a6fcd:{NFSU2_TR(0x5a6fcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fce:{NFSU2_TR(0x5a6fce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a6fcf:{NFSU2_TR(0x5a6fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5c0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a6fd5:{NFSU2_TR(0x5a6fd5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a6fd7:{NFSU2_TR(0x5a6fd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a6fd9:{NFSU2_TR(0x5a6fd9);
__builtin_memmove((R+8),(R+28),4);
}
B5a6fdb:{NFSU2_TR(0x5a6fdb);
if(r1(R+518)){{goto L5a6fe0;}}
}
B5a6fdd:L5a6fdd:{c.instructions+=1;NFSU2_TR(0x5a6fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a6fe0:L5a6fe0:{c.instructions+=10;NFSU2_TR(0x5a6fe0);
__builtin_memmove((R+4),(R+24),4);
}
B5a6fe2:{NFSU2_TR(0x5a6fe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5a6fe5:{NFSU2_TR(0x5a6fe5);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6fec:{NFSU2_TR(0x5a6fec);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a6fee:{NFSU2_TR(0x5a6fee);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a6ff1:{NFSU2_TR(0x5a6ff1);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a6ff3:{NFSU2_TR(0x5a6ff3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a6ff7:{NFSU2_TR(0x5a6ff7);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a6ff9:{NFSU2_TR(0x5a6ff9);
{u32 ea_=u32(r4(R+4)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a6fff:{NFSU2_TR(0x5a6fff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
TAIL_STATIC(0x5a7001u,5a7);
}
XIT:NFSU2_TR_EXIT(0x5a6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
