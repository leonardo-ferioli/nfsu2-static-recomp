#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 page_5b6(Cpu& c){return body_5b6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b6000:goto L5b6000;
case 0x5b6003:c.instructions+=3;goto B5b6003;
case 0x5b6009:c.instructions+=2;goto B5b6009;
case 0x5b600a:c.instructions+=1;goto B5b600a;
case 0x5b600f:goto L5b600f;
case 0x5b6011:c.instructions+=5;goto B5b6011;
case 0x5b6014:c.instructions+=4;goto B5b6014;
case 0x5b6018:c.instructions+=3;goto B5b6018;
case 0x5b601a:c.instructions+=2;goto B5b601a;
case 0x5b601f:c.instructions+=1;goto B5b601f;
case 0x5b6021:goto L5b6021;
case 0x5b6024:c.instructions+=5;goto B5b6024;
case 0x5b602a:c.instructions+=4;goto B5b602a;
case 0x5b6030:c.instructions+=3;goto B5b6030;
case 0x5b6032:c.instructions+=2;goto B5b6032;
case 0x5b6035:c.instructions+=1;goto B5b6035;
case 0x5b6037:goto L5b6037;
case 0x5b603c:c.instructions+=1;goto B5b603c;
case 0x5b603e:goto L5b603e;
case 0x5b6040:goto L5b6040;
case 0x5b6046:c.instructions+=7;goto B5b6046;
case 0x5b6048:c.instructions+=6;goto B5b6048;
case 0x5b604e:c.instructions+=5;goto B5b604e;
case 0x5b6050:c.instructions+=4;goto B5b6050;
case 0x5b6053:c.instructions+=3;goto B5b6053;
case 0x5b6055:c.instructions+=2;goto B5b6055;
case 0x5b6058:c.instructions+=1;goto B5b6058;
case 0x5b605a:goto L5b605a;
case 0x5b605f:goto L5b605f;
case 0x5b6062:c.instructions+=11;goto B5b6062;
case 0x5b6068:c.instructions+=10;goto B5b6068;
case 0x5b6069:c.instructions+=9;goto B5b6069;
case 0x5b606c:c.instructions+=8;goto B5b606c;
case 0x5b606d:c.instructions+=7;goto B5b606d;
case 0x5b6070:c.instructions+=6;goto B5b6070;
case 0x5b6071:c.instructions+=5;goto B5b6071;
case 0x5b6077:c.instructions+=4;goto B5b6077;
case 0x5b6078:c.instructions+=3;goto B5b6078;
case 0x5b607e:c.instructions+=2;goto B5b607e;
case 0x5b607f:c.instructions+=1;goto B5b607f;
case 0x5b6084:goto L5b6084;
case 0x5b6086:goto L5b6086;
case 0x5b6088:goto L5b6088;
case 0x5b608a:c.instructions+=3;goto B5b608a;
case 0x5b608f:c.instructions+=2;goto B5b608f;
case 0x5b6092:c.instructions+=1;goto B5b6092;
case 0x5b6094:goto L5b6094;
case 0x5b6097:c.instructions+=1;goto B5b6097;
case 0x5b6099:goto L5b6099;
case 0x5b609b:goto L5b609b;
case 0x5b609e:c.instructions+=8;goto B5b609e;
case 0x5b60a1:c.instructions+=7;goto B5b60a1;
case 0x5b60a4:c.instructions+=6;goto B5b60a4;
case 0x5b60a7:c.instructions+=5;goto B5b60a7;
case 0x5b60a9:c.instructions+=4;goto B5b60a9;
case 0x5b60ac:c.instructions+=3;goto B5b60ac;
case 0x5b60ae:c.instructions+=2;goto B5b60ae;
case 0x5b60b0:c.instructions+=1;goto B5b60b0;
case 0x5b60b3:goto L5b60b3;
case 0x5b60b6:c.instructions+=8;goto B5b60b6;
case 0x5b60ba:c.instructions+=7;goto B5b60ba;
case 0x5b60bc:c.instructions+=6;goto B5b60bc;
case 0x5b60bf:c.instructions+=5;goto B5b60bf;
case 0x5b60c2:c.instructions+=4;goto B5b60c2;
case 0x5b60c5:c.instructions+=3;goto B5b60c5;
case 0x5b60c8:c.instructions+=2;goto B5b60c8;
case 0x5b60ca:c.instructions+=1;goto B5b60ca;
case 0x5b60cc:goto L5b60cc;
case 0x5b60d0:c.instructions+=1;goto B5b60d0;
case 0x5b60d2:goto L5b60d2;
case 0x5b60d8:c.instructions+=4;goto B5b60d8;
case 0x5b60de:c.instructions+=3;goto B5b60de;
case 0x5b60e0:c.instructions+=2;goto B5b60e0;
case 0x5b60e2:c.instructions+=1;goto B5b60e2;
case 0x5b60e4:goto L5b60e4;
case 0x5b60e6:c.instructions+=1;goto B5b60e6;
case 0x5b60e8:goto L5b60e8;
case 0x5b60ee:c.instructions+=1;goto B5b60ee;
case 0x5b60f0:goto L5b60f0;
case 0x5b60f6:c.instructions+=1;goto B5b60f6;
case 0x5b60f8:goto L5b60f8;
case 0x5b60fe:c.instructions+=1;goto B5b60fe;
case 0x5b6100:goto L5b6100;
case 0x5b6105:c.instructions+=1;goto B5b6105;
case 0x5b6107:goto L5b6107;
case 0x5b610e:c.instructions+=1;goto B5b610e;
case 0x5b6110:goto L5b6110;
case 0x5b6117:c.instructions+=1;goto B5b6117;
case 0x5b6119:goto L5b6119;
case 0x5b611e:c.instructions+=1;goto B5b611e;
case 0x5b6120:goto L5b6120;
case 0x5b6122:c.instructions+=1;goto B5b6122;
case 0x5b6124:goto L5b6124;
case 0x5b6126:c.instructions+=1;goto B5b6126;
case 0x5b6128:goto L5b6128;
case 0x5b612d:goto L5b612d;
case 0x5b612f:c.instructions+=4;goto B5b612f;
case 0x5b6131:c.instructions+=3;goto B5b6131;
case 0x5b6132:c.instructions+=2;goto B5b6132;
case 0x5b6134:c.instructions+=1;goto B5b6134;
case 0x5b6139:goto L5b6139;
case 0x5b613d:c.instructions+=11;goto B5b613d;
case 0x5b6140:c.instructions+=10;goto B5b6140;
case 0x5b6146:c.instructions+=9;goto B5b6146;
case 0x5b6149:c.instructions+=8;goto B5b6149;
case 0x5b614c:c.instructions+=7;goto B5b614c;
case 0x5b614f:c.instructions+=6;goto B5b614f;
case 0x5b6152:c.instructions+=5;goto B5b6152;
case 0x5b6155:c.instructions+=4;goto B5b6155;
case 0x5b615a:c.instructions+=3;goto B5b615a;
case 0x5b615c:c.instructions+=2;goto B5b615c;
case 0x5b615e:c.instructions+=1;goto B5b615e;
case 0x5b6160:goto L5b6160;
case 0x5b6165:c.instructions+=2;goto B5b6165;
case 0x5b6167:c.instructions+=1;goto B5b6167;
case 0x5b6169:goto L5b6169;
case 0x5b616f:c.instructions+=1;goto B5b616f;
case 0x5b6171:goto L5b6171;
case 0x5b6177:c.instructions+=1;goto B5b6177;
case 0x5b6179:goto L5b6179;
case 0x5b617e:c.instructions+=3;goto B5b617e;
case 0x5b6185:c.instructions+=2;goto B5b6185;
case 0x5b6188:c.instructions+=1;goto B5b6188;
case 0x5b618e:goto L5b618e;
case 0x5b6191:c.instructions+=2;goto B5b6191;
case 0x5b6195:c.instructions+=1;goto B5b6195;
case 0x5b619b:goto L5b619b;
case 0x5b61a0:c.instructions+=2;goto B5b61a0;
case 0x5b61a2:c.instructions+=1;goto B5b61a2;
case 0x5b61a4:goto L5b61a4;
case 0x5b61aa:c.instructions+=1;goto B5b61aa;
case 0x5b61b0:goto L5b61b0;
case 0x5b61b3:c.instructions+=2;goto B5b61b3;
case 0x5b61b6:c.instructions+=1;goto B5b61b6;
case 0x5b61b8:goto L5b61b8;
case 0x5b61bb:c.instructions+=1;goto B5b61bb;
case 0x5b61bd:goto L5b61bd;
case 0x5b61c0:c.instructions+=1;goto B5b61c0;
case 0x5b61c6:goto L5b61c6;
case 0x5b61cc:c.instructions+=1;goto B5b61cc;
case 0x5b61ce:goto L5b61ce;
case 0x5b61d4:c.instructions+=3;goto B5b61d4;
case 0x5b61db:c.instructions+=2;goto B5b61db;
case 0x5b61de:c.instructions+=1;goto B5b61de;
case 0x5b61e4:goto L5b61e4;
case 0x5b61e7:c.instructions+=2;goto B5b61e7;
case 0x5b61e9:c.instructions+=1;goto B5b61e9;
case 0x5b61ec:goto L5b61ec;
case 0x5b61ee:c.instructions+=1;goto B5b61ee;
case 0x5b61f4:goto L5b61f4;
case 0x5b61f7:c.instructions+=2;goto B5b61f7;
case 0x5b61f9:c.instructions+=1;goto B5b61f9;
case 0x5b61fb:goto L5b61fb;
case 0x5b6200:goto L5b6200;
case 0x5b6202:c.instructions+=1;goto B5b6202;
case 0x5b6204:goto L5b6204;
case 0x5b620a:c.instructions+=16;goto B5b620a;
case 0x5b620d:c.instructions+=15;goto B5b620d;
case 0x5b6214:c.instructions+=14;goto B5b6214;
case 0x5b621b:c.instructions+=13;goto B5b621b;
case 0x5b6222:c.instructions+=12;goto B5b6222;
case 0x5b6229:c.instructions+=11;goto B5b6229;
case 0x5b6230:c.instructions+=10;goto B5b6230;
case 0x5b6233:c.instructions+=9;goto B5b6233;
case 0x5b6239:c.instructions+=8;goto B5b6239;
case 0x5b623f:c.instructions+=7;goto B5b623f;
case 0x5b6245:c.instructions+=6;goto B5b6245;
case 0x5b624b:c.instructions+=5;goto B5b624b;
case 0x5b624e:c.instructions+=4;goto B5b624e;
case 0x5b6251:c.instructions+=3;goto B5b6251;
case 0x5b6254:c.instructions+=2;goto B5b6254;
case 0x5b625a:c.instructions+=1;goto B5b625a;
case 0x5b6260:goto L5b6260;
case 0x5b6266:c.instructions+=2;goto B5b6266;
case 0x5b6267:c.instructions+=1;goto B5b6267;
case 0x5b626c:goto L5b626c;
case 0x5b626f:c.instructions+=2;goto B5b626f;
case 0x5b6271:c.instructions+=1;goto B5b6271;
case 0x5b6273:goto L5b6273;
case 0x5b6276:c.instructions+=11;goto B5b6276;
case 0x5b6279:c.instructions+=10;goto B5b6279;
case 0x5b627f:c.instructions+=9;goto B5b627f;
case 0x5b6281:c.instructions+=8;goto B5b6281;
case 0x5b6286:c.instructions+=7;goto B5b6286;
case 0x5b6289:c.instructions+=6;goto B5b6289;
case 0x5b628c:c.instructions+=5;goto B5b628c;
case 0x5b628f:c.instructions+=4;goto B5b628f;
case 0x5b6292:c.instructions+=3;goto B5b6292;
case 0x5b6295:c.instructions+=2;goto B5b6295;
case 0x5b6298:c.instructions+=1;goto B5b6298;
case 0x5b629a:goto L5b629a;
case 0x5b629c:c.instructions+=1;goto B5b629c;
case 0x5b62a1:goto L5b62a1;
case 0x5b62a3:c.instructions+=1;goto B5b62a3;
case 0x5b62a8:goto L5b62a8;
case 0x5b62ab:c.instructions+=6;goto B5b62ab;
case 0x5b62b5:c.instructions+=5;goto B5b62b5;
case 0x5b62b8:c.instructions+=4;goto B5b62b8;
case 0x5b62ba:c.instructions+=3;goto B5b62ba;
case 0x5b62bd:c.instructions+=2;goto B5b62bd;
case 0x5b62c1:c.instructions+=1;goto B5b62c1;
case 0x5b62c6:goto L5b62c6;
case 0x5b62c8:c.instructions+=1;goto B5b62c8;
case 0x5b62cd:goto L5b62cd;
case 0x5b62cf:c.instructions+=1;goto B5b62cf;
case 0x5b62d4:goto L5b62d4;
case 0x5b62d8:c.instructions+=9;goto B5b62d8;
case 0x5b62d9:c.instructions+=8;goto B5b62d9;
case 0x5b62df:c.instructions+=7;goto B5b62df;
case 0x5b62e1:c.instructions+=6;goto B5b62e1;
case 0x5b62e2:c.instructions+=5;goto B5b62e2;
case 0x5b62e3:c.instructions+=4;goto B5b62e3;
case 0x5b62e4:c.instructions+=3;goto B5b62e4;
case 0x5b62eb:c.instructions+=2;goto B5b62eb;
case 0x5b62ee:c.instructions+=1;goto B5b62ee;
case 0x5b6300:goto L5b6300;
case 0x5b6303:c.instructions+=9;goto B5b6303;
case 0x5b6304:c.instructions+=8;goto B5b6304;
case 0x5b6305:c.instructions+=7;goto B5b6305;
case 0x5b6306:c.instructions+=6;goto B5b6306;
case 0x5b6308:c.instructions+=5;goto B5b6308;
case 0x5b630b:c.instructions+=4;goto B5b630b;
case 0x5b630e:c.instructions+=3;goto B5b630e;
case 0x5b6311:c.instructions+=2;goto B5b6311;
case 0x5b6312:c.instructions+=1;goto B5b6312;
case 0x5b6314:goto L5b6314;
case 0x5b6317:c.instructions+=1;goto B5b6317;
case 0x5b6319:goto L5b6319;
case 0x5b631c:c.instructions+=1;goto B5b631c;
case 0x5b631e:goto L5b631e;
case 0x5b6323:goto L5b6323;
case 0x5b6325:c.instructions+=1;goto B5b6325;
case 0x5b6327:goto L5b6327;
case 0x5b632a:c.instructions+=5;goto B5b632a;
case 0x5b6330:c.instructions+=4;goto B5b6330;
case 0x5b6336:c.instructions+=3;goto B5b6336;
case 0x5b6338:c.instructions+=2;goto B5b6338;
case 0x5b633b:c.instructions+=1;goto B5b633b;
case 0x5b633d:goto L5b633d;
case 0x5b6342:c.instructions+=2;goto B5b6342;
case 0x5b6344:c.instructions+=1;goto B5b6344;
case 0x5b6346:goto L5b6346;
case 0x5b634b:c.instructions+=2;goto B5b634b;
case 0x5b634d:c.instructions+=1;goto B5b634d;
case 0x5b634f:goto L5b634f;
case 0x5b6354:c.instructions+=2;goto B5b6354;
case 0x5b6356:c.instructions+=1;goto B5b6356;
case 0x5b6358:goto L5b6358;
case 0x5b635d:c.instructions+=1;goto B5b635d;
case 0x5b635f:goto L5b635f;
case 0x5b6361:goto L5b6361;
case 0x5b6364:c.instructions+=5;goto B5b6364;
case 0x5b636a:c.instructions+=4;goto B5b636a;
case 0x5b6370:c.instructions+=3;goto B5b6370;
case 0x5b6372:c.instructions+=2;goto B5b6372;
case 0x5b6375:c.instructions+=1;goto B5b6375;
case 0x5b6377:goto L5b6377;
case 0x5b637c:c.instructions+=1;goto B5b637c;
case 0x5b637e:goto L5b637e;
case 0x5b6380:goto L5b6380;
case 0x5b6386:c.instructions+=8;goto B5b6386;
case 0x5b6388:c.instructions+=7;goto B5b6388;
case 0x5b638e:c.instructions+=6;goto B5b638e;
case 0x5b6390:c.instructions+=5;goto B5b6390;
case 0x5b6393:c.instructions+=4;goto B5b6393;
case 0x5b6395:c.instructions+=3;goto B5b6395;
case 0x5b6398:c.instructions+=2;goto B5b6398;
case 0x5b639a:c.instructions+=1;goto B5b639a;
case 0x5b639c:goto L5b639c;
case 0x5b63a1:goto L5b63a1;
case 0x5b63a4:c.instructions+=5;goto B5b63a4;
case 0x5b63a7:c.instructions+=4;goto B5b63a7;
case 0x5b63aa:c.instructions+=3;goto B5b63aa;
case 0x5b63ad:c.instructions+=2;goto B5b63ad;
case 0x5b63af:c.instructions+=1;goto B5b63af;
case 0x5b63b1:goto L5b63b1;
case 0x5b63b3:c.instructions+=4;goto B5b63b3;
case 0x5b63b5:c.instructions+=3;goto B5b63b5;
case 0x5b63b7:c.instructions+=2;goto B5b63b7;
case 0x5b63b9:c.instructions+=1;goto B5b63b9;
case 0x5b63be:goto L5b63be;
case 0x5b63c2:c.instructions+=10;goto B5b63c2;
case 0x5b63c5:c.instructions+=9;goto B5b63c5;
case 0x5b63c7:c.instructions+=8;goto B5b63c7;
case 0x5b63ca:c.instructions+=7;goto B5b63ca;
case 0x5b63d1:c.instructions+=6;goto B5b63d1;
case 0x5b63d5:c.instructions+=5;goto B5b63d5;
case 0x5b63d8:c.instructions+=4;goto B5b63d8;
case 0x5b63de:c.instructions+=3;goto B5b63de;
case 0x5b63e0:c.instructions+=2;goto B5b63e0;
case 0x5b63e3:c.instructions+=1;goto B5b63e3;
case 0x5b63e9:goto L5b63e9;
case 0x5b63ef:c.instructions+=8;goto B5b63ef;
case 0x5b63f3:c.instructions+=7;goto B5b63f3;
case 0x5b63f5:c.instructions+=6;goto B5b63f5;
case 0x5b63f8:c.instructions+=5;goto B5b63f8;
case 0x5b63fe:c.instructions+=4;goto B5b63fe;
case 0x5b6400:c.instructions+=3;goto B5b6400;
case 0x5b6402:c.instructions+=2;goto B5b6402;
case 0x5b6405:c.instructions+=1;goto B5b6405;
case 0x5b6407:goto L5b6407;
case 0x5b6409:c.instructions+=1;goto B5b6409;
case 0x5b640f:goto L5b640f;
case 0x5b6415:c.instructions+=11;goto B5b6415;
case 0x5b6418:c.instructions+=10;goto B5b6418;
case 0x5b641e:c.instructions+=9;goto B5b641e;
case 0x5b6424:c.instructions+=8;goto B5b6424;
case 0x5b6427:c.instructions+=7;goto B5b6427;
case 0x5b642a:c.instructions+=6;goto B5b642a;
case 0x5b642c:c.instructions+=5;goto B5b642c;
case 0x5b6432:c.instructions+=4;goto B5b6432;
case 0x5b6434:c.instructions+=3;goto B5b6434;
case 0x5b6436:c.instructions+=2;goto B5b6436;
case 0x5b6439:c.instructions+=1;goto B5b6439;
case 0x5b643b:goto L5b643b;
case 0x5b643d:c.instructions+=1;goto B5b643d;
case 0x5b6443:goto L5b6443;
case 0x5b6449:c.instructions+=11;goto B5b6449;
case 0x5b644c:c.instructions+=10;goto B5b644c;
case 0x5b6452:c.instructions+=9;goto B5b6452;
case 0x5b6458:c.instructions+=8;goto B5b6458;
case 0x5b645b:c.instructions+=7;goto B5b645b;
case 0x5b645e:c.instructions+=6;goto B5b645e;
case 0x5b6460:c.instructions+=5;goto B5b6460;
case 0x5b6466:c.instructions+=4;goto B5b6466;
case 0x5b6468:c.instructions+=3;goto B5b6468;
case 0x5b646a:c.instructions+=2;goto B5b646a;
case 0x5b646d:c.instructions+=1;goto B5b646d;
case 0x5b646f:goto L5b646f;
case 0x5b6471:c.instructions+=1;goto B5b6471;
case 0x5b6477:goto L5b6477;
case 0x5b647d:c.instructions+=10;goto B5b647d;
case 0x5b6480:c.instructions+=9;goto B5b6480;
case 0x5b6486:c.instructions+=8;goto B5b6486;
case 0x5b648c:c.instructions+=7;goto B5b648c;
case 0x5b648f:c.instructions+=6;goto B5b648f;
case 0x5b6492:c.instructions+=5;goto B5b6492;
case 0x5b6498:c.instructions+=4;goto B5b6498;
case 0x5b649a:c.instructions+=3;goto B5b649a;
case 0x5b649c:c.instructions+=2;goto B5b649c;
case 0x5b649f:c.instructions+=1;goto B5b649f;
case 0x5b64a1:goto L5b64a1;
case 0x5b64a3:c.instructions+=1;goto B5b64a3;
case 0x5b64a9:goto L5b64a9;
case 0x5b64af:c.instructions+=3;goto B5b64af;
case 0x5b64b2:c.instructions+=2;goto B5b64b2;
case 0x5b64b8:c.instructions+=1;goto B5b64b8;
case 0x5b64be:goto L5b64be;
case 0x5b64c0:c.instructions+=2;goto B5b64c0;
case 0x5b64c2:c.instructions+=1;goto B5b64c2;
case 0x5b64c8:goto L5b64c8;
case 0x5b64cb:c.instructions+=5;goto B5b64cb;
case 0x5b64d1:c.instructions+=4;goto B5b64d1;
case 0x5b64d7:c.instructions+=3;goto B5b64d7;
case 0x5b64d9:c.instructions+=2;goto B5b64d9;
case 0x5b64df:c.instructions+=1;goto B5b64df;
case 0x5b64e5:goto L5b64e5;
case 0x5b64e7:c.instructions+=5;goto B5b64e7;
case 0x5b64ed:c.instructions+=4;goto B5b64ed;
case 0x5b64f3:c.instructions+=3;goto B5b64f3;
case 0x5b64f5:c.instructions+=2;goto B5b64f5;
case 0x5b64f8:c.instructions+=1;goto B5b64f8;
case 0x5b64fa:goto L5b64fa;
case 0x5b6500:c.instructions+=1;goto B5b6500;
case 0x5b6502:goto L5b6502;
case 0x5b6507:goto L5b6507;
case 0x5b6509:c.instructions+=4;goto B5b6509;
case 0x5b650f:c.instructions+=3;goto B5b650f;
case 0x5b6511:c.instructions+=2;goto B5b6511;
case 0x5b6514:c.instructions+=1;goto B5b6514;
case 0x5b6516:goto L5b6516;
case 0x5b6519:c.instructions+=2;goto B5b6519;
case 0x5b651f:c.instructions+=1;goto B5b651f;
case 0x5b6524:goto L5b6524;
case 0x5b6527:c.instructions+=5;goto B5b6527;
case 0x5b652d:c.instructions+=4;goto B5b652d;
case 0x5b6533:c.instructions+=3;goto B5b6533;
case 0x5b6535:c.instructions+=2;goto B5b6535;
case 0x5b6538:c.instructions+=1;goto B5b6538;
case 0x5b653a:goto L5b653a;
case 0x5b653d:c.instructions+=5;goto B5b653d;
case 0x5b6543:c.instructions+=4;goto B5b6543;
case 0x5b6549:c.instructions+=3;goto B5b6549;
case 0x5b654b:c.instructions+=2;goto B5b654b;
case 0x5b654e:c.instructions+=1;goto B5b654e;
case 0x5b6550:goto L5b6550;
case 0x5b6553:c.instructions+=5;goto B5b6553;
case 0x5b6559:c.instructions+=4;goto B5b6559;
case 0x5b655f:c.instructions+=3;goto B5b655f;
case 0x5b6561:c.instructions+=2;goto B5b6561;
case 0x5b6564:c.instructions+=1;goto B5b6564;
case 0x5b6566:goto L5b6566;
case 0x5b6569:c.instructions+=5;goto B5b6569;
case 0x5b656f:c.instructions+=4;goto B5b656f;
case 0x5b6575:c.instructions+=3;goto B5b6575;
case 0x5b6577:c.instructions+=2;goto B5b6577;
case 0x5b657a:c.instructions+=1;goto B5b657a;
case 0x5b657c:goto L5b657c;
case 0x5b657f:c.instructions+=7;goto B5b657f;
case 0x5b6585:c.instructions+=6;goto B5b6585;
case 0x5b658b:c.instructions+=5;goto B5b658b;
case 0x5b6591:c.instructions+=4;goto B5b6591;
case 0x5b6597:c.instructions+=3;goto B5b6597;
case 0x5b6599:c.instructions+=2;goto B5b6599;
case 0x5b659c:c.instructions+=1;goto B5b659c;
case 0x5b65a2:goto L5b65a2;
case 0x5b65a5:c.instructions+=2;goto B5b65a5;
case 0x5b65ab:c.instructions+=1;goto B5b65ab;
case 0x5b65b0:goto L5b65b0;
case 0x5b65b3:c.instructions+=9;goto B5b65b3;
case 0x5b65b9:c.instructions+=8;goto B5b65b9;
case 0x5b65bc:c.instructions+=7;goto B5b65bc;
case 0x5b65c2:c.instructions+=6;goto B5b65c2;
case 0x5b65c8:c.instructions+=5;goto B5b65c8;
case 0x5b65ce:c.instructions+=4;goto B5b65ce;
case 0x5b65d4:c.instructions+=3;goto B5b65d4;
case 0x5b65d6:c.instructions+=2;goto B5b65d6;
case 0x5b65d9:c.instructions+=1;goto B5b65d9;
case 0x5b65df:goto L5b65df;
case 0x5b65e2:c.instructions+=5;goto B5b65e2;
case 0x5b65e8:c.instructions+=4;goto B5b65e8;
case 0x5b65eb:c.instructions+=3;goto B5b65eb;
case 0x5b65f1:c.instructions+=2;goto B5b65f1;
case 0x5b65f7:c.instructions+=1;goto B5b65f7;
case 0x5b65fc:goto L5b65fc;
case 0x5b6602:c.instructions+=2;goto B5b6602;
case 0x5b6605:c.instructions+=1;goto B5b6605;
case 0x5b660b:goto L5b660b;
case 0x5b6611:c.instructions+=3;goto B5b6611;
case 0x5b6613:c.instructions+=2;goto B5b6613;
case 0x5b6616:c.instructions+=1;goto B5b6616;
case 0x5b661c:goto L5b661c;
case 0x5b6622:c.instructions+=14;goto B5b6622;
case 0x5b6625:c.instructions+=13;goto B5b6625;
case 0x5b662b:c.instructions+=12;goto B5b662b;
case 0x5b662d:c.instructions+=11;goto B5b662d;
case 0x5b6635:c.instructions+=10;goto B5b6635;
case 0x5b6639:c.instructions+=9;goto B5b6639;
case 0x5b663f:c.instructions+=8;goto B5b663f;
case 0x5b6645:c.instructions+=7;goto B5b6645;
case 0x5b6649:c.instructions+=6;goto B5b6649;
case 0x5b664f:c.instructions+=5;goto B5b664f;
case 0x5b6653:c.instructions+=4;goto B5b6653;
case 0x5b6657:c.instructions+=3;goto B5b6657;
case 0x5b6659:c.instructions+=2;goto B5b6659;
case 0x5b665c:c.instructions+=1;goto B5b665c;
case 0x5b665e:goto L5b665e;
case 0x5b6660:c.instructions+=1;goto B5b6660;
case 0x5b6664:goto L5b6664;
case 0x5b666a:c.instructions+=3;goto B5b666a;
case 0x5b666c:c.instructions+=2;goto B5b666c;
case 0x5b666f:c.instructions+=1;goto B5b666f;
case 0x5b6671:goto L5b6671;
case 0x5b6675:c.instructions+=2;goto B5b6675;
case 0x5b6677:c.instructions+=1;goto B5b6677;
case 0x5b6679:goto L5b6679;
case 0x5b667b:goto L5b667b;
case 0x5b667e:c.instructions+=9;goto B5b667e;
case 0x5b6684:c.instructions+=8;goto B5b6684;
case 0x5b668a:c.instructions+=7;goto B5b668a;
case 0x5b668e:c.instructions+=6;goto B5b668e;
case 0x5b6694:c.instructions+=5;goto B5b6694;
case 0x5b6698:c.instructions+=4;goto B5b6698;
case 0x5b669c:c.instructions+=3;goto B5b669c;
case 0x5b669e:c.instructions+=2;goto B5b669e;
case 0x5b66a1:c.instructions+=1;goto B5b66a1;
case 0x5b66a3:goto L5b66a3;
case 0x5b66a5:c.instructions+=1;goto B5b66a5;
case 0x5b66a9:goto L5b66a9;
case 0x5b66ad:c.instructions+=3;goto B5b66ad;
case 0x5b66af:c.instructions+=2;goto B5b66af;
case 0x5b66b2:c.instructions+=1;goto B5b66b2;
case 0x5b66b4:goto L5b66b4;
case 0x5b66b8:c.instructions+=2;goto B5b66b8;
case 0x5b66bd:c.instructions+=1;goto B5b66bd;
case 0x5b66bf:goto L5b66bf;
case 0x5b66c1:goto L5b66c1;
case 0x5b66c4:c.instructions+=9;goto B5b66c4;
case 0x5b66ca:c.instructions+=8;goto B5b66ca;
case 0x5b66d0:c.instructions+=7;goto B5b66d0;
case 0x5b66d4:c.instructions+=6;goto B5b66d4;
case 0x5b66da:c.instructions+=5;goto B5b66da;
case 0x5b66de:c.instructions+=4;goto B5b66de;
case 0x5b66e2:c.instructions+=3;goto B5b66e2;
case 0x5b66e4:c.instructions+=2;goto B5b66e4;
case 0x5b66e7:c.instructions+=1;goto B5b66e7;
case 0x5b66e9:goto L5b66e9;
case 0x5b66eb:c.instructions+=1;goto B5b66eb;
case 0x5b66ef:goto L5b66ef;
case 0x5b66f3:c.instructions+=3;goto B5b66f3;
case 0x5b66f5:c.instructions+=2;goto B5b66f5;
case 0x5b66f8:c.instructions+=1;goto B5b66f8;
case 0x5b66fa:goto L5b66fa;
case 0x5b66fe:c.instructions+=2;goto B5b66fe;
case 0x5b6703:c.instructions+=1;goto B5b6703;
case 0x5b6705:goto L5b6705;
case 0x5b6707:goto L5b6707;
case 0x5b670a:c.instructions+=9;goto B5b670a;
case 0x5b6710:c.instructions+=8;goto B5b6710;
case 0x5b6716:c.instructions+=7;goto B5b6716;
case 0x5b671a:c.instructions+=6;goto B5b671a;
case 0x5b6720:c.instructions+=5;goto B5b6720;
case 0x5b6724:c.instructions+=4;goto B5b6724;
case 0x5b6728:c.instructions+=3;goto B5b6728;
case 0x5b672a:c.instructions+=2;goto B5b672a;
case 0x5b672d:c.instructions+=1;goto B5b672d;
case 0x5b672f:goto L5b672f;
case 0x5b6731:c.instructions+=1;goto B5b6731;
case 0x5b6735:goto L5b6735;
case 0x5b6739:c.instructions+=3;goto B5b6739;
case 0x5b673b:c.instructions+=2;goto B5b673b;
case 0x5b673e:c.instructions+=1;goto B5b673e;
case 0x5b6740:goto L5b6740;
case 0x5b6744:c.instructions+=2;goto B5b6744;
case 0x5b6749:c.instructions+=1;goto B5b6749;
case 0x5b674b:goto L5b674b;
case 0x5b674d:goto L5b674d;
case 0x5b6751:c.instructions+=4;goto B5b6751;
case 0x5b6757:c.instructions+=3;goto B5b6757;
case 0x5b6759:c.instructions+=2;goto B5b6759;
case 0x5b675c:c.instructions+=1;goto B5b675c;
case 0x5b675e:goto L5b675e;
case 0x5b6762:c.instructions+=5;goto B5b6762;
case 0x5b6763:c.instructions+=4;goto B5b6763;
case 0x5b6767:c.instructions+=3;goto B5b6767;
case 0x5b6768:c.instructions+=2;goto B5b6768;
case 0x5b676d:c.instructions+=1;goto B5b676d;
case 0x5b6772:goto L5b6772;
case 0x5b6778:c.instructions+=11;goto B5b6778;
case 0x5b677c:c.instructions+=10;goto B5b677c;
case 0x5b677f:c.instructions+=9;goto B5b677f;
case 0x5b6782:c.instructions+=8;goto B5b6782;
case 0x5b6786:c.instructions+=7;goto B5b6786;
case 0x5b678a:c.instructions+=6;goto B5b678a;
case 0x5b6790:c.instructions+=5;goto B5b6790;
case 0x5b6796:c.instructions+=4;goto B5b6796;
case 0x5b679a:c.instructions+=3;goto B5b679a;
case 0x5b67a0:c.instructions+=2;goto B5b67a0;
case 0x5b67a4:c.instructions+=1;goto B5b67a4;
case 0x5b67a9:goto L5b67a9;
case 0x5b67ac:c.instructions+=7;goto B5b67ac;
case 0x5b67b2:c.instructions+=6;goto B5b67b2;
case 0x5b67b5:c.instructions+=5;goto B5b67b5;
case 0x5b67ba:c.instructions+=4;goto B5b67ba;
case 0x5b67c0:c.instructions+=3;goto B5b67c0;
case 0x5b67c3:c.instructions+=2;goto B5b67c3;
case 0x5b67c9:c.instructions+=1;goto B5b67c9;
case 0x5b67cb:goto L5b67cb;
case 0x5b67cd:goto L5b67cd;
case 0x5b67d0:c.instructions+=2;goto B5b67d0;
case 0x5b67d6:c.instructions+=1;goto B5b67d6;
case 0x5b67dc:goto L5b67dc;
case 0x5b67df:c.instructions+=9;goto B5b67df;
case 0x5b67e5:c.instructions+=8;goto B5b67e5;
case 0x5b67eb:c.instructions+=7;goto B5b67eb;
case 0x5b67f1:c.instructions+=6;goto B5b67f1;
case 0x5b67f4:c.instructions+=5;goto B5b67f4;
case 0x5b67fa:c.instructions+=4;goto B5b67fa;
case 0x5b6800:c.instructions+=3;goto B5b6800;
case 0x5b6805:c.instructions+=2;goto B5b6805;
case 0x5b680b:c.instructions+=1;goto B5b680b;
case 0x5b680d:goto L5b680d;
case 0x5b680e:c.instructions+=2;goto B5b680e;
case 0x5b6811:c.instructions+=1;goto B5b6811;
case 0x5b6812:goto L5b6812;
case 0x5b6814:goto L5b6814;
case 0x5b681a:c.instructions+=1;goto B5b681a;
case 0x5b681c:goto L5b681c;
case 0x5b6822:c.instructions+=2;goto B5b6822;
case 0x5b6828:c.instructions+=1;goto B5b6828;
case 0x5b682a:goto L5b682a;
case 0x5b6830:c.instructions+=15;goto B5b6830;
case 0x5b6833:c.instructions+=14;goto B5b6833;
case 0x5b6835:c.instructions+=13;goto B5b6835;
case 0x5b683b:c.instructions+=12;goto B5b683b;
case 0x5b6841:c.instructions+=11;goto B5b6841;
case 0x5b6844:c.instructions+=10;goto B5b6844;
case 0x5b6846:c.instructions+=9;goto B5b6846;
case 0x5b684c:c.instructions+=8;goto B5b684c;
case 0x5b6852:c.instructions+=7;goto B5b6852;
case 0x5b6858:c.instructions+=6;goto B5b6858;
case 0x5b685b:c.instructions+=5;goto B5b685b;
case 0x5b6861:c.instructions+=4;goto B5b6861;
case 0x5b6867:c.instructions+=3;goto B5b6867;
case 0x5b686d:c.instructions+=2;goto B5b686d;
case 0x5b6873:c.instructions+=1;goto B5b6873;
case 0x5b6875:goto L5b6875;
case 0x5b6876:c.instructions+=2;goto B5b6876;
case 0x5b6879:c.instructions+=1;goto B5b6879;
case 0x5b687a:goto L5b687a;
case 0x5b687d:c.instructions+=1;goto B5b687d;
case 0x5b687f:goto L5b687f;
case 0x5b6885:c.instructions+=1;goto B5b6885;
case 0x5b6887:goto L5b6887;
case 0x5b688d:c.instructions+=2;goto B5b688d;
case 0x5b6893:c.instructions+=1;goto B5b6893;
case 0x5b6895:goto L5b6895;
case 0x5b689b:c.instructions+=15;goto B5b689b;
case 0x5b689e:c.instructions+=14;goto B5b689e;
case 0x5b68a0:c.instructions+=13;goto B5b68a0;
case 0x5b68a6:c.instructions+=12;goto B5b68a6;
case 0x5b68ac:c.instructions+=11;goto B5b68ac;
case 0x5b68af:c.instructions+=10;goto B5b68af;
case 0x5b68b1:c.instructions+=9;goto B5b68b1;
case 0x5b68b7:c.instructions+=8;goto B5b68b7;
case 0x5b68bd:c.instructions+=7;goto B5b68bd;
case 0x5b68c3:c.instructions+=6;goto B5b68c3;
case 0x5b68c6:c.instructions+=5;goto B5b68c6;
case 0x5b68cc:c.instructions+=4;goto B5b68cc;
case 0x5b68d2:c.instructions+=3;goto B5b68d2;
case 0x5b68d8:c.instructions+=2;goto B5b68d8;
case 0x5b68de:c.instructions+=1;goto B5b68de;
case 0x5b68e0:goto L5b68e0;
case 0x5b68e1:c.instructions+=2;goto B5b68e1;
case 0x5b68e4:c.instructions+=1;goto B5b68e4;
case 0x5b68e5:goto L5b68e5;
case 0x5b68e8:c.instructions+=1;goto B5b68e8;
case 0x5b68ea:goto L5b68ea;
case 0x5b68f0:c.instructions+=1;goto B5b68f0;
case 0x5b68f2:goto L5b68f2;
case 0x5b68f8:c.instructions+=2;goto B5b68f8;
case 0x5b68fe:c.instructions+=1;goto B5b68fe;
case 0x5b6900:goto L5b6900;
case 0x5b6906:c.instructions+=15;goto B5b6906;
case 0x5b6909:c.instructions+=14;goto B5b6909;
case 0x5b690b:c.instructions+=13;goto B5b690b;
case 0x5b6911:c.instructions+=12;goto B5b6911;
case 0x5b6917:c.instructions+=11;goto B5b6917;
case 0x5b691a:c.instructions+=10;goto B5b691a;
case 0x5b691c:c.instructions+=9;goto B5b691c;
case 0x5b6922:c.instructions+=8;goto B5b6922;
case 0x5b6928:c.instructions+=7;goto B5b6928;
case 0x5b692e:c.instructions+=6;goto B5b692e;
case 0x5b6931:c.instructions+=5;goto B5b6931;
case 0x5b6937:c.instructions+=4;goto B5b6937;
case 0x5b693d:c.instructions+=3;goto B5b693d;
case 0x5b6942:c.instructions+=2;goto B5b6942;
case 0x5b6948:c.instructions+=1;goto B5b6948;
case 0x5b694a:goto L5b694a;
case 0x5b694b:c.instructions+=2;goto B5b694b;
case 0x5b694e:c.instructions+=1;goto B5b694e;
case 0x5b694f:goto L5b694f;
case 0x5b6951:goto L5b6951;
case 0x5b6957:c.instructions+=1;goto B5b6957;
case 0x5b6959:goto L5b6959;
case 0x5b695f:c.instructions+=2;goto B5b695f;
case 0x5b6965:c.instructions+=1;goto B5b6965;
case 0x5b6967:goto L5b6967;
case 0x5b696d:c.instructions+=5;goto B5b696d;
case 0x5b6970:c.instructions+=4;goto B5b6970;
case 0x5b6972:c.instructions+=3;goto B5b6972;
case 0x5b6978:c.instructions+=2;goto B5b6978;
case 0x5b697e:c.instructions+=1;goto B5b697e;
case 0x5b6980:goto L5b6980;
case 0x5b6981:c.instructions+=5;goto B5b6981;
case 0x5b6982:c.instructions+=4;goto B5b6982;
case 0x5b6983:c.instructions+=3;goto B5b6983;
case 0x5b6984:c.instructions+=2;goto B5b6984;
case 0x5b6987:c.instructions+=1;goto B5b6987;
case 0x5b6990:goto L5b6990;
case 0x5b6991:c.instructions+=4;goto B5b6991;
case 0x5b6992:c.instructions+=3;goto B5b6992;
case 0x5b6994:c.instructions+=2;goto B5b6994;
case 0x5b6998:c.instructions+=1;goto B5b6998;
case 0x5b699a:goto L5b699a;
case 0x5b699c:c.instructions+=3;goto B5b699c;
case 0x5b699e:c.instructions+=2;goto B5b699e;
case 0x5b69a0:c.instructions+=1;goto B5b69a0;
case 0x5b69a5:goto L5b69a5;
case 0x5b69a8:c.instructions+=6;goto B5b69a8;
case 0x5b69ac:c.instructions+=5;goto B5b69ac;
case 0x5b69b0:c.instructions+=4;goto B5b69b0;
case 0x5b69b6:c.instructions+=3;goto B5b69b6;
case 0x5b69b8:c.instructions+=2;goto B5b69b8;
case 0x5b69bb:c.instructions+=1;goto B5b69bb;
case 0x5b69bd:goto L5b69bd;
case 0x5b69bf:c.instructions+=2;goto B5b69bf;
case 0x5b69c1:c.instructions+=1;goto B5b69c1;
case 0x5b69c6:goto L5b69c6;
case 0x5b69ca:c.instructions+=10;goto B5b69ca;
case 0x5b69cc:c.instructions+=9;goto B5b69cc;
case 0x5b69d3:c.instructions+=8;goto B5b69d3;
case 0x5b69d5:c.instructions+=7;goto B5b69d5;
case 0x5b69db:c.instructions+=6;goto B5b69db;
case 0x5b69df:c.instructions+=5;goto B5b69df;
case 0x5b69e3:c.instructions+=4;goto B5b69e3;
case 0x5b69e7:c.instructions+=3;goto B5b69e7;
case 0x5b69e9:c.instructions+=2;goto B5b69e9;
case 0x5b69ec:c.instructions+=1;goto B5b69ec;
case 0x5b69ee:goto L5b69ee;
case 0x5b69f0:c.instructions+=1;goto B5b69f0;
case 0x5b69f4:goto L5b69f4;
case 0x5b69f8:c.instructions+=3;goto B5b69f8;
case 0x5b69fa:c.instructions+=2;goto B5b69fa;
case 0x5b69fb:c.instructions+=1;goto B5b69fb;
case 0x5b69fd:goto L5b69fd;
case 0x5b6a03:c.instructions+=4;goto B5b6a03;
case 0x5b6a09:c.instructions+=3;goto B5b6a09;
case 0x5b6a0f:c.instructions+=2;goto B5b6a0f;
case 0x5b6a11:c.instructions+=1;goto B5b6a11;
case 0x5b6a17:goto L5b6a17;
case 0x5b6a18:c.instructions+=1;goto B5b6a18;
case 0x5b6a20:goto L5b6a20;
case 0x5b6a21:c.instructions+=3;goto B5b6a21;
case 0x5b6a22:c.instructions+=2;goto B5b6a22;
case 0x5b6a24:c.instructions+=1;goto B5b6a24;
case 0x5b6a29:goto L5b6a29;
case 0x5b6a2f:c.instructions+=10;goto B5b6a2f;
case 0x5b6a35:c.instructions+=9;goto B5b6a35;
case 0x5b6a38:c.instructions+=8;goto B5b6a38;
case 0x5b6a3a:c.instructions+=7;goto B5b6a3a;
case 0x5b6a40:c.instructions+=6;goto B5b6a40;
case 0x5b6a42:c.instructions+=5;goto B5b6a42;
case 0x5b6a48:c.instructions+=4;goto B5b6a48;
case 0x5b6a4e:c.instructions+=3;goto B5b6a4e;
case 0x5b6a50:c.instructions+=2;goto B5b6a50;
case 0x5b6a54:c.instructions+=1;goto B5b6a54;
case 0x5b6a56:goto L5b6a56;
case 0x5b6a58:c.instructions+=4;goto B5b6a58;
case 0x5b6a5a:c.instructions+=3;goto B5b6a5a;
case 0x5b6a5c:c.instructions+=2;goto B5b6a5c;
case 0x5b6a5e:c.instructions+=1;goto B5b6a5e;
case 0x5b6a63:goto L5b6a63;
case 0x5b6a69:c.instructions+=13;goto B5b6a69;
case 0x5b6a6f:c.instructions+=12;goto B5b6a6f;
case 0x5b6a70:c.instructions+=11;goto B5b6a70;
case 0x5b6a76:c.instructions+=10;goto B5b6a76;
case 0x5b6a7c:c.instructions+=9;goto B5b6a7c;
case 0x5b6a82:c.instructions+=8;goto B5b6a82;
case 0x5b6a84:c.instructions+=7;goto B5b6a84;
case 0x5b6a8a:c.instructions+=6;goto B5b6a8a;
case 0x5b6a8e:c.instructions+=5;goto B5b6a8e;
case 0x5b6a92:c.instructions+=4;goto B5b6a92;
case 0x5b6a98:c.instructions+=3;goto B5b6a98;
case 0x5b6a9a:c.instructions+=2;goto B5b6a9a;
case 0x5b6a9d:c.instructions+=1;goto B5b6a9d;
case 0x5b6a9f:goto L5b6a9f;
case 0x5b6aa3:c.instructions+=5;goto B5b6aa3;
case 0x5b6aa9:c.instructions+=4;goto B5b6aa9;
case 0x5b6aad:c.instructions+=3;goto B5b6aad;
case 0x5b6aaf:c.instructions+=2;goto B5b6aaf;
case 0x5b6ab2:c.instructions+=1;goto B5b6ab2;
case 0x5b6ab4:goto L5b6ab4;
case 0x5b6ab6:c.instructions+=1;goto B5b6ab6;
case 0x5b6abc:goto L5b6abc;
case 0x5b6abd:c.instructions+=1;goto B5b6abd;
case 0x5b6abe:goto L5b6abe;
case 0x5b6ac4:c.instructions+=2;goto B5b6ac4;
case 0x5b6ac5:c.instructions+=1;goto B5b6ac5;
case 0x5b6ad0:goto L5b6ad0;
case 0x5b6ad3:c.instructions+=8;goto B5b6ad3;
case 0x5b6ad4:c.instructions+=7;goto B5b6ad4;
case 0x5b6ad5:c.instructions+=6;goto B5b6ad5;
case 0x5b6ad7:c.instructions+=5;goto B5b6ad7;
case 0x5b6ada:c.instructions+=4;goto B5b6ada;
case 0x5b6add:c.instructions+=3;goto B5b6add;
case 0x5b6ae1:c.instructions+=2;goto B5b6ae1;
case 0x5b6ae5:c.instructions+=1;goto B5b6ae5;
case 0x5b6aeb:goto L5b6aeb;
case 0x5b6aef:c.instructions+=4;goto B5b6aef;
case 0x5b6af3:c.instructions+=3;goto B5b6af3;
case 0x5b6af7:c.instructions+=2;goto B5b6af7;
case 0x5b6af9:c.instructions+=1;goto B5b6af9;
case 0x5b6afb:goto L5b6afb;
case 0x5b6b01:c.instructions+=8;goto B5b6b01;
case 0x5b6b07:c.instructions+=7;goto B5b6b07;
case 0x5b6b0b:c.instructions+=6;goto B5b6b0b;
case 0x5b6b0c:c.instructions+=5;goto B5b6b0c;
case 0x5b6b0d:c.instructions+=4;goto B5b6b0d;
case 0x5b6b12:c.instructions+=3;goto B5b6b12;
case 0x5b6b14:c.instructions+=2;goto B5b6b14;
case 0x5b6b15:c.instructions+=1;goto B5b6b15;
case 0x5b6b1a:goto L5b6b1a;
case 0x5b6b1e:c.instructions+=1;goto B5b6b1e;
case 0x5b6b21:goto L5b6b21;
case 0x5b6b22:c.instructions+=3;goto B5b6b22;
case 0x5b6b2a:c.instructions+=2;goto B5b6b2a;
case 0x5b6b2b:c.instructions+=1;goto B5b6b2b;
case 0x5b6b30:goto L5b6b30;
case 0x5b6b37:c.instructions+=4;goto B5b6b37;
case 0x5b6b39:c.instructions+=3;goto B5b6b39;
case 0x5b6b3a:c.instructions+=2;goto B5b6b3a;
case 0x5b6b3c:c.instructions+=1;goto B5b6b3c;
case 0x5b6b3e:goto L5b6b3e;
case 0x5b6b45:c.instructions+=1;goto B5b6b45;
case 0x5b6b48:goto L5b6b48;
case 0x5b6b4c:c.instructions+=6;goto B5b6b4c;
case 0x5b6b4e:c.instructions+=5;goto B5b6b4e;
case 0x5b6b50:c.instructions+=4;goto B5b6b50;
case 0x5b6b52:c.instructions+=3;goto B5b6b52;
case 0x5b6b54:c.instructions+=2;goto B5b6b54;
case 0x5b6b57:c.instructions+=1;goto B5b6b57;
case 0x5b6b59:goto L5b6b59;
case 0x5b6b5a:c.instructions+=4;goto B5b6b5a;
case 0x5b6b5d:c.instructions+=3;goto B5b6b5d;
case 0x5b6b60:c.instructions+=2;goto B5b6b60;
case 0x5b6b62:c.instructions+=1;goto B5b6b62;
case 0x5b6b64:goto L5b6b64;
case 0x5b6b66:c.instructions+=1;goto B5b6b66;
case 0x5b6b68:goto L5b6b68;
case 0x5b6b6b:c.instructions+=11;goto B5b6b6b;
case 0x5b6b6f:c.instructions+=10;goto B5b6b6f;
case 0x5b6b71:c.instructions+=9;goto B5b6b71;
case 0x5b6b73:c.instructions+=8;goto B5b6b73;
case 0x5b6b77:c.instructions+=7;goto B5b6b77;
case 0x5b6b79:c.instructions+=6;goto B5b6b79;
case 0x5b6b7b:c.instructions+=5;goto B5b6b7b;
case 0x5b6b7d:c.instructions+=4;goto B5b6b7d;
case 0x5b6b7f:c.instructions+=3;goto B5b6b7f;
case 0x5b6b81:c.instructions+=2;goto B5b6b81;
case 0x5b6b84:c.instructions+=1;goto B5b6b84;
case 0x5b6b86:goto L5b6b86;
case 0x5b6b88:goto L5b6b88;
case 0x5b6b8c:c.instructions+=1;goto B5b6b8c;
case 0x5b6b8e:goto L5b6b8e;
case 0x5b6b92:c.instructions+=1;goto B5b6b92;
case 0x5b6b96:goto L5b6b96;
case 0x5b6b9d:c.instructions+=2;goto B5b6b9d;
case 0x5b6b9f:c.instructions+=1;goto B5b6b9f;
case 0x5b6ba5:goto L5b6ba5;
case 0x5b6bac:goto L5b6bac;
case 0x5b6bae:c.instructions+=1;goto B5b6bae;
case 0x5b6bb4:goto L5b6bb4;
case 0x5b6bb6:c.instructions+=1;goto B5b6bb6;
case 0x5b6bbb:goto L5b6bbb;
case 0x5b6bbd:c.instructions+=1;goto B5b6bbd;
case 0x5b6bbf:goto L5b6bbf;
case 0x5b6bc0:goto L5b6bc0;
case 0x5b6bc1:c.instructions+=1;goto B5b6bc1;
case 0x5b6bc6:goto L5b6bc6;
case 0x5b6bc9:c.instructions+=2;goto B5b6bc9;
case 0x5b6bcb:c.instructions+=1;goto B5b6bcb;
case 0x5b6bcd:goto L5b6bcd;
case 0x5b6bd0:c.instructions+=3;goto B5b6bd0;
case 0x5b6bd2:c.instructions+=2;goto B5b6bd2;
case 0x5b6bd4:c.instructions+=1;goto B5b6bd4;
case 0x5b6bd6:goto L5b6bd6;
case 0x5b6bd9:c.instructions+=1;goto B5b6bd9;
case 0x5b6be0:goto L5b6be0;
case 0x5b6be2:c.instructions+=3;goto B5b6be2;
case 0x5b6bea:c.instructions+=2;goto B5b6bea;
case 0x5b6bf1:c.instructions+=1;goto B5b6bf1;
case 0x5b6bf3:goto L5b6bf3;
case 0x5b6bf6:goto L5b6bf6;
case 0x5b6bf9:c.instructions+=4;goto B5b6bf9;
case 0x5b6bfa:c.instructions+=3;goto B5b6bfa;
case 0x5b6bfd:c.instructions+=2;goto B5b6bfd;
case 0x5b6bff:c.instructions+=1;goto B5b6bff;
case 0x5b6c01:goto L5b6c01;
case 0x5b6c02:c.instructions+=1;goto B5b6c02;
case 0x5b6c07:goto L5b6c07;
case 0x5b6c09:c.instructions+=1;goto B5b6c09;
case 0x5b6c0b:goto L5b6c0b;
case 0x5b6c0d:c.instructions+=1;goto B5b6c0d;
case 0x5b6c10:goto L5b6c10;
case 0x5b6c12:c.instructions+=9;goto B5b6c12;
case 0x5b6c15:c.instructions+=8;goto B5b6c15;
case 0x5b6c17:c.instructions+=7;goto B5b6c17;
case 0x5b6c19:c.instructions+=6;goto B5b6c19;
case 0x5b6c1b:c.instructions+=5;goto B5b6c1b;
case 0x5b6c1e:c.instructions+=4;goto B5b6c1e;
case 0x5b6c22:c.instructions+=3;goto B5b6c22;
case 0x5b6c24:c.instructions+=2;goto B5b6c24;
case 0x5b6c27:c.instructions+=1;goto B5b6c27;
case 0x5b6c29:goto L5b6c29;
case 0x5b6c31:goto L5b6c31;
case 0x5b6c32:c.instructions+=2;goto B5b6c32;
case 0x5b6c35:c.instructions+=1;goto B5b6c35;
case 0x5b6c37:goto L5b6c37;
case 0x5b6c3b:c.instructions+=1;goto B5b6c3b;
case 0x5b6c3d:goto L5b6c3d;
case 0x5b6c43:c.instructions+=4;goto B5b6c43;
case 0x5b6c49:c.instructions+=3;goto B5b6c49;
case 0x5b6c4b:c.instructions+=2;goto B5b6c4b;
case 0x5b6c4d:c.instructions+=1;goto B5b6c4d;
case 0x5b6c4f:goto L5b6c4f;
case 0x5b6c51:c.instructions+=1;goto B5b6c51;
case 0x5b6c53:goto L5b6c53;
case 0x5b6c59:c.instructions+=2;goto B5b6c59;
case 0x5b6c5b:c.instructions+=1;goto B5b6c5b;
case 0x5b6c5d:goto L5b6c5d;
case 0x5b6c63:c.instructions+=2;goto B5b6c63;
case 0x5b6c65:c.instructions+=1;goto B5b6c65;
case 0x5b6c67:goto L5b6c67;
case 0x5b6c6d:c.instructions+=2;goto B5b6c6d;
case 0x5b6c6f:c.instructions+=1;goto B5b6c6f;
case 0x5b6c71:goto L5b6c71;
case 0x5b6c76:c.instructions+=1;goto B5b6c76;
case 0x5b6c78:goto L5b6c78;
case 0x5b6c7e:c.instructions+=2;goto B5b6c7e;
case 0x5b6c80:c.instructions+=1;goto B5b6c80;
case 0x5b6c82:goto L5b6c82;
case 0x5b6c88:c.instructions+=2;goto B5b6c88;
case 0x5b6c8a:c.instructions+=1;goto B5b6c8a;
case 0x5b6c8c:goto L5b6c8c;
case 0x5b6c91:c.instructions+=1;goto B5b6c91;
case 0x5b6c93:goto L5b6c93;
case 0x5b6c95:c.instructions+=1;goto B5b6c95;
case 0x5b6c97:goto L5b6c97;
case 0x5b6c99:c.instructions+=1;goto B5b6c99;
case 0x5b6c9b:goto L5b6c9b;
case 0x5b6ca0:goto L5b6ca0;
case 0x5b6ca2:c.instructions+=4;goto B5b6ca2;
case 0x5b6ca4:c.instructions+=3;goto B5b6ca4;
case 0x5b6ca5:c.instructions+=2;goto B5b6ca5;
case 0x5b6ca7:c.instructions+=1;goto B5b6ca7;
case 0x5b6cac:goto L5b6cac;
case 0x5b6cb0:goto L5b6cb0;
case 0x5b6cb4:c.instructions+=4;goto B5b6cb4;
case 0x5b6cba:c.instructions+=3;goto B5b6cba;
case 0x5b6cbc:c.instructions+=2;goto B5b6cbc;
case 0x5b6cbf:c.instructions+=1;goto B5b6cbf;
case 0x5b6cc1:goto L5b6cc1;
case 0x5b6cc5:c.instructions+=2;goto B5b6cc5;
case 0x5b6cc7:c.instructions+=1;goto B5b6cc7;
case 0x5b6cc9:goto L5b6cc9;
case 0x5b6ccb:c.instructions+=1;goto B5b6ccb;
case 0x5b6cd0:goto L5b6cd0;
case 0x5b6cd4:c.instructions+=5;goto B5b6cd4;
case 0x5b6cdc:c.instructions+=4;goto B5b6cdc;
case 0x5b6ce2:c.instructions+=3;goto B5b6ce2;
case 0x5b6ce6:c.instructions+=2;goto B5b6ce6;
case 0x5b6cea:c.instructions+=1;goto B5b6cea;
case 0x5b6cef:goto L5b6cef;
case 0x5b6cf0:c.instructions+=1;goto B5b6cf0;
case 0x5b6cf1:goto L5b6cf1;
case 0x5b6cf2:c.instructions+=3;goto B5b6cf2;
case 0x5b6cf3:c.instructions+=2;goto B5b6cf3;
case 0x5b6cf6:c.instructions+=1;goto B5b6cf6;
case 0x5b6d00:goto L5b6d00;
case 0x5b6d02:c.instructions+=34;goto B5b6d02;
case 0x5b6d07:c.instructions+=33;goto B5b6d07;
case 0x5b6d0d:c.instructions+=32;goto B5b6d0d;
case 0x5b6d0e:c.instructions+=31;goto B5b6d0e;
case 0x5b6d15:c.instructions+=30;goto B5b6d15;
case 0x5b6d16:c.instructions+=29;goto B5b6d16;
case 0x5b6d17:c.instructions+=28;goto B5b6d17;
case 0x5b6d18:c.instructions+=27;goto B5b6d18;
case 0x5b6d19:c.instructions+=26;goto B5b6d19;
case 0x5b6d1b:c.instructions+=25;goto B5b6d1b;
case 0x5b6d1c:c.instructions+=24;goto B5b6d1c;
case 0x5b6d20:c.instructions+=23;goto B5b6d20;
case 0x5b6d23:c.instructions+=22;goto B5b6d23;
case 0x5b6d25:c.instructions+=21;goto B5b6d25;
case 0x5b6d27:c.instructions+=20;goto B5b6d27;
case 0x5b6d2a:c.instructions+=19;goto B5b6d2a;
case 0x5b6d2e:c.instructions+=18;goto B5b6d2e;
case 0x5b6d31:c.instructions+=17;goto B5b6d31;
case 0x5b6d38:c.instructions+=16;goto B5b6d38;
case 0x5b6d3c:c.instructions+=15;goto B5b6d3c;
case 0x5b6d40:c.instructions+=14;goto B5b6d40;
case 0x5b6d44:c.instructions+=13;goto B5b6d44;
case 0x5b6d48:c.instructions+=12;goto B5b6d48;
case 0x5b6d4e:c.instructions+=11;goto B5b6d4e;
case 0x5b6d55:c.instructions+=10;goto B5b6d55;
case 0x5b6d58:c.instructions+=9;goto B5b6d58;
case 0x5b6d5b:c.instructions+=8;goto B5b6d5b;
case 0x5b6d5e:c.instructions+=7;goto B5b6d5e;
case 0x5b6d63:c.instructions+=6;goto B5b6d63;
case 0x5b6d64:c.instructions+=5;goto B5b6d64;
case 0x5b6d69:c.instructions+=4;goto B5b6d69;
case 0x5b6d6c:c.instructions+=3;goto B5b6d6c;
case 0x5b6d6f:c.instructions+=2;goto B5b6d6f;
case 0x5b6d72:c.instructions+=1;goto B5b6d72;
case 0x5b6d77:goto L5b6d77;
case 0x5b6d7d:c.instructions+=2;goto B5b6d7d;
case 0x5b6d7e:c.instructions+=1;goto B5b6d7e;
case 0x5b6d83:goto L5b6d83;
case 0x5b6d86:c.instructions+=4;goto B5b6d86;
case 0x5b6d8a:c.instructions+=3;goto B5b6d8a;
case 0x5b6d8c:c.instructions+=2;goto B5b6d8c;
case 0x5b6d91:c.instructions+=1;goto B5b6d91;
case 0x5b6d93:goto L5b6d93;
case 0x5b6d96:c.instructions+=4;goto B5b6d96;
case 0x5b6d9c:c.instructions+=3;goto B5b6d9c;
case 0x5b6d9d:c.instructions+=2;goto B5b6d9d;
case 0x5b6d9f:c.instructions+=1;goto B5b6d9f;
case 0x5b6da4:goto L5b6da4;
case 0x5b6da6:goto L5b6da6;
case 0x5b6da8:goto L5b6da8;
case 0x5b6daa:c.instructions+=3;goto B5b6daa;
case 0x5b6daf:c.instructions+=2;goto B5b6daf;
case 0x5b6db2:c.instructions+=1;goto B5b6db2;
case 0x5b6db4:goto L5b6db4;
case 0x5b6db7:c.instructions+=1;goto B5b6db7;
case 0x5b6db9:goto L5b6db9;
case 0x5b6dbb:goto L5b6dbb;
case 0x5b6dbe:c.instructions+=8;goto B5b6dbe;
case 0x5b6dc1:c.instructions+=7;goto B5b6dc1;
case 0x5b6dc3:c.instructions+=6;goto B5b6dc3;
case 0x5b6dc6:c.instructions+=5;goto B5b6dc6;
case 0x5b6dc9:c.instructions+=4;goto B5b6dc9;
case 0x5b6dcb:c.instructions+=3;goto B5b6dcb;
case 0x5b6dcd:c.instructions+=2;goto B5b6dcd;
case 0x5b6dcf:c.instructions+=1;goto B5b6dcf;
case 0x5b6dd2:goto L5b6dd2;
case 0x5b6dd5:c.instructions+=5;goto B5b6dd5;
case 0x5b6ddf:c.instructions+=4;goto B5b6ddf;
case 0x5b6de2:c.instructions+=3;goto B5b6de2;
case 0x5b6de7:c.instructions+=2;goto B5b6de7;
case 0x5b6de8:c.instructions+=1;goto B5b6de8;
case 0x5b6ded:goto L5b6ded;
case 0x5b6df0:c.instructions+=4;goto B5b6df0;
case 0x5b6df4:c.instructions+=3;goto B5b6df4;
case 0x5b6df6:c.instructions+=2;goto B5b6df6;
case 0x5b6dfb:c.instructions+=1;goto B5b6dfb;
case 0x5b6dfd:goto L5b6dfd;
case 0x5b6e00:c.instructions+=7;goto B5b6e00;
case 0x5b6e03:c.instructions+=6;goto B5b6e03;
case 0x5b6e04:c.instructions+=5;goto B5b6e04;
case 0x5b6e07:c.instructions+=4;goto B5b6e07;
case 0x5b6e08:c.instructions+=3;goto B5b6e08;
case 0x5b6e09:c.instructions+=2;goto B5b6e09;
case 0x5b6e0b:c.instructions+=1;goto B5b6e0b;
case 0x5b6e10:goto L5b6e10;
case 0x5b6e12:goto L5b6e12;
case 0x5b6e14:goto L5b6e14;
case 0x5b6e18:c.instructions+=7;goto B5b6e18;
case 0x5b6e1b:c.instructions+=6;goto B5b6e1b;
case 0x5b6e1e:c.instructions+=5;goto B5b6e1e;
case 0x5b6e23:c.instructions+=4;goto B5b6e23;
case 0x5b6e25:c.instructions+=3;goto B5b6e25;
case 0x5b6e28:c.instructions+=2;goto B5b6e28;
case 0x5b6e2d:c.instructions+=1;goto B5b6e2d;
case 0x5b6e32:goto L5b6e32;
case 0x5b6e36:c.instructions+=4;goto B5b6e36;
case 0x5b6e3c:c.instructions+=3;goto B5b6e3c;
case 0x5b6e3e:c.instructions+=2;goto B5b6e3e;
case 0x5b6e41:c.instructions+=1;goto B5b6e41;
case 0x5b6e43:goto L5b6e43;
case 0x5b6e47:c.instructions+=5;goto B5b6e47;
case 0x5b6e4d:c.instructions+=4;goto B5b6e4d;
case 0x5b6e51:c.instructions+=3;goto B5b6e51;
case 0x5b6e53:c.instructions+=2;goto B5b6e53;
case 0x5b6e56:c.instructions+=1;goto B5b6e56;
case 0x5b6e58:goto L5b6e58;
case 0x5b6e5a:c.instructions+=1;goto B5b6e5a;
case 0x5b6e60:goto L5b6e60;
case 0x5b6e66:c.instructions+=10;goto B5b6e66;
case 0x5b6e69:c.instructions+=9;goto B5b6e69;
case 0x5b6e6f:c.instructions+=8;goto B5b6e6f;
case 0x5b6e71:c.instructions+=7;goto B5b6e71;
case 0x5b6e77:c.instructions+=6;goto B5b6e77;
case 0x5b6e7d:c.instructions+=5;goto B5b6e7d;
case 0x5b6e83:c.instructions+=4;goto B5b6e83;
case 0x5b6e86:c.instructions+=3;goto B5b6e86;
case 0x5b6e88:c.instructions+=2;goto B5b6e88;
case 0x5b6e8a:c.instructions+=1;goto B5b6e8a;
case 0x5b6e8c:goto L5b6e8c;
case 0x5b6e8f:c.instructions+=1;goto B5b6e8f;
case 0x5b6e91:goto L5b6e91;
case 0x5b6e97:c.instructions+=1;goto B5b6e97;
case 0x5b6e99:goto L5b6e99;
case 0x5b6e9b:goto L5b6e9b;
case 0x5b6e9e:c.instructions+=7;goto B5b6e9e;
case 0x5b6ea1:c.instructions+=6;goto B5b6ea1;
case 0x5b6ea3:c.instructions+=5;goto B5b6ea3;
case 0x5b6ea6:c.instructions+=4;goto B5b6ea6;
case 0x5b6ea9:c.instructions+=3;goto B5b6ea9;
case 0x5b6eab:c.instructions+=2;goto B5b6eab;
case 0x5b6ead:c.instructions+=1;goto B5b6ead;
case 0x5b6eb0:goto L5b6eb0;
case 0x5b6eb3:c.instructions+=3;goto B5b6eb3;
case 0x5b6eb9:c.instructions+=2;goto B5b6eb9;
case 0x5b6eba:c.instructions+=1;goto B5b6eba;
case 0x5b6ebf:goto L5b6ebf;
case 0x5b6ec2:c.instructions+=2;goto B5b6ec2;
case 0x5b6ec4:c.instructions+=1;goto B5b6ec4;
case 0x5b6ec6:goto L5b6ec6;
case 0x5b6ec9:c.instructions+=11;goto B5b6ec9;
case 0x5b6ecc:c.instructions+=10;goto B5b6ecc;
case 0x5b6ed2:c.instructions+=9;goto B5b6ed2;
case 0x5b6ed4:c.instructions+=8;goto B5b6ed4;
case 0x5b6ed9:c.instructions+=7;goto B5b6ed9;
case 0x5b6edc:c.instructions+=6;goto B5b6edc;
case 0x5b6edf:c.instructions+=5;goto B5b6edf;
case 0x5b6ee2:c.instructions+=4;goto B5b6ee2;
case 0x5b6ee5:c.instructions+=3;goto B5b6ee5;
case 0x5b6ee8:c.instructions+=2;goto B5b6ee8;
case 0x5b6eeb:c.instructions+=1;goto B5b6eeb;
case 0x5b6eed:goto L5b6eed;
case 0x5b6eef:goto L5b6eef;
case 0x5b6ef2:c.instructions+=5;goto B5b6ef2;
case 0x5b6ef5:c.instructions+=4;goto B5b6ef5;
case 0x5b6efb:c.instructions+=3;goto B5b6efb;
case 0x5b6efd:c.instructions+=2;goto B5b6efd;
case 0x5b6f00:c.instructions+=1;goto B5b6f00;
case 0x5b6f02:goto L5b6f02;
case 0x5b6f08:c.instructions+=1;goto B5b6f08;
case 0x5b6f0a:goto L5b6f0a;
case 0x5b6f0d:c.instructions+=2;goto B5b6f0d;
case 0x5b6f13:c.instructions+=1;goto B5b6f13;
case 0x5b6f19:goto L5b6f19;
case 0x5b6f1b:c.instructions+=1;goto B5b6f1b;
case 0x5b6f20:goto L5b6f20;
case 0x5b6f23:c.instructions+=4;goto B5b6f23;
case 0x5b6f25:c.instructions+=3;goto B5b6f25;
case 0x5b6f27:c.instructions+=2;goto B5b6f27;
case 0x5b6f2b:c.instructions+=1;goto B5b6f2b;
case 0x5b6f30:goto L5b6f30;
case 0x5b6f36:c.instructions+=2;goto B5b6f36;
case 0x5b6f37:c.instructions+=1;goto B5b6f37;
case 0x5b6f3c:goto L5b6f3c;
case 0x5b6f3e:c.instructions+=5;goto B5b6f3e;
case 0x5b6f41:c.instructions+=4;goto B5b6f41;
case 0x5b6f45:c.instructions+=3;goto B5b6f45;
case 0x5b6f47:c.instructions+=2;goto B5b6f47;
case 0x5b6f4c:c.instructions+=1;goto B5b6f4c;
case 0x5b6f4e:goto L5b6f4e;
case 0x5b6f51:c.instructions+=15;goto B5b6f51;
case 0x5b6f54:c.instructions+=14;goto B5b6f54;
case 0x5b6f57:c.instructions+=13;goto B5b6f57;
case 0x5b6f58:c.instructions+=12;goto B5b6f58;
case 0x5b6f5e:c.instructions+=11;goto B5b6f5e;
case 0x5b6f5f:c.instructions+=10;goto B5b6f5f;
case 0x5b6f61:c.instructions+=9;goto B5b6f61;
case 0x5b6f62:c.instructions+=8;goto B5b6f62;
case 0x5b6f64:c.instructions+=7;goto B5b6f64;
case 0x5b6f66:c.instructions+=6;goto B5b6f66;
case 0x5b6f69:c.instructions+=5;goto B5b6f69;
case 0x5b6f70:c.instructions+=4;goto B5b6f70;
case 0x5b6f71:c.instructions+=3;goto B5b6f71;
case 0x5b6f75:c.instructions+=2;goto B5b6f75;
case 0x5b6f76:c.instructions+=1;goto B5b6f76;
case 0x5b6f7b:goto L5b6f7b;
case 0x5b6f7d:c.instructions+=1;goto B5b6f7d;
case 0x5b6f7f:goto L5b6f7f;
case 0x5b6f81:goto L5b6f81;
case 0x5b6f85:c.instructions+=9;goto B5b6f85;
case 0x5b6f87:c.instructions+=8;goto B5b6f87;
case 0x5b6f8a:c.instructions+=7;goto B5b6f8a;
case 0x5b6f8d:c.instructions+=6;goto B5b6f8d;
case 0x5b6f8e:c.instructions+=5;goto B5b6f8e;
case 0x5b6f94:c.instructions+=4;goto B5b6f94;
case 0x5b6f99:c.instructions+=3;goto B5b6f99;
case 0x5b6f9c:c.instructions+=2;goto B5b6f9c;
case 0x5b6fa0:c.instructions+=1;goto B5b6fa0;
case 0x5b6fa2:goto L5b6fa2;
case 0x5b6fa4:c.instructions+=1;goto B5b6fa4;
case 0x5b6fa9:goto L5b6fa9;
case 0x5b6fad:c.instructions+=8;goto B5b6fad;
case 0x5b6fae:c.instructions+=7;goto B5b6fae;
case 0x5b6fb0:c.instructions+=6;goto B5b6fb0;
case 0x5b6fb1:c.instructions+=5;goto B5b6fb1;
case 0x5b6fb2:c.instructions+=4;goto B5b6fb2;
case 0x5b6fb3:c.instructions+=3;goto B5b6fb3;
case 0x5b6fba:c.instructions+=2;goto B5b6fba;
case 0x5b6fbd:c.instructions+=1;goto B5b6fbd;
case 0x5b6fc0:goto L5b6fc0;
case 0x5b6fc1:c.instructions+=22;goto B5b6fc1;
case 0x5b6fc3:c.instructions+=21;goto B5b6fc3;
case 0x5b6fc5:c.instructions+=20;goto B5b6fc5;
case 0x5b6fca:c.instructions+=19;goto B5b6fca;
case 0x5b6fd0:c.instructions+=18;goto B5b6fd0;
case 0x5b6fd1:c.instructions+=17;goto B5b6fd1;
case 0x5b6fd8:c.instructions+=16;goto B5b6fd8;
case 0x5b6fd9:c.instructions+=15;goto B5b6fd9;
case 0x5b6fda:c.instructions+=14;goto B5b6fda;
case 0x5b6fdb:c.instructions+=13;goto B5b6fdb;
case 0x5b6fdd:c.instructions+=12;goto B5b6fdd;
case 0x5b6fe0:c.instructions+=11;goto B5b6fe0;
case 0x5b6fe2:c.instructions+=10;goto B5b6fe2;
case 0x5b6fe5:c.instructions+=9;goto B5b6fe5;
case 0x5b6fe7:c.instructions+=8;goto B5b6fe7;
case 0x5b6fea:c.instructions+=7;goto B5b6fea;
case 0x5b6ff1:c.instructions+=6;goto B5b6ff1;
case 0x5b6ff2:c.instructions+=5;goto B5b6ff2;
case 0x5b6ff5:c.instructions+=4;goto B5b6ff5;
case 0x5b6ff8:c.instructions+=3;goto B5b6ff8;
case 0x5b6ffb:c.instructions+=2;goto B5b6ffb;
case 0x5b6ffe:c.instructions+=1;goto B5b6ffe;
default:missing_instruction(c.pc);}
B5b6000:L5b6000:{c.instructions+=4;NFSU2_TR(0x5b6000);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6003:{NFSU2_TR(0x5b6003);
__builtin_memmove((R+4),gp(0x86b2f0),4);
}
B5b6009:{NFSU2_TR(0x5b6009);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b600a:{NFSU2_TR(0x5b600a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b600full));
TAIL_STATIC(0x440e50u,440);
}
B5b600f:L5b600f:{c.instructions+=6;NFSU2_TR(0x5b600f);
__builtin_memmove((R+4),(R+0),4);
}
B5b6011:{NFSU2_TR(0x5b6011);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b6014:{NFSU2_TR(0x5b6014);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6018:{NFSU2_TR(0x5b6018);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b601a:{NFSU2_TR(0x5b601a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b601f:{NFSU2_TR(0x5b601f);
if(r1(R+518)){{goto L5b6086;}}
}
B5b6021:L5b6021:{c.instructions+=6;NFSU2_TR(0x5b6021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b6024:{NFSU2_TR(0x5b6024);
{u32 ea_=u32(r4(R+20)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b602a:{NFSU2_TR(0x5b602a);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6030:{NFSU2_TR(0x5b6030);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6032:{NFSU2_TR(0x5b6032);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6035:{NFSU2_TR(0x5b6035);
if(r1(R+514)){{goto L5b603e;}}
}
B5b6037:L5b6037:{c.instructions+=2;NFSU2_TR(0x5b6037);
w4(R+0,u32(0x1ull));
}
B5b603c:{NFSU2_TR(0x5b603c);
{goto L5b6040;}
}
B5b603e:L5b603e:{c.instructions+=1;NFSU2_TR(0x5b603e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6040:L5b6040:{c.instructions+=8;NFSU2_TR(0x5b6040);
{u32 ea_=u32(r4(R+20)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6046:{NFSU2_TR(0x5b6046);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b6048:{NFSU2_TR(0x5b6048);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b604e:{NFSU2_TR(0x5b604e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6050:{NFSU2_TR(0x5b6050);
__builtin_memmove((R+8),(R+518),1);
}
B5b6053:{NFSU2_TR(0x5b6053);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6055:{NFSU2_TR(0x5b6055);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6058:{NFSU2_TR(0x5b6058);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b605f;}}
}
B5b605a:L5b605a:{c.instructions+=1;NFSU2_TR(0x5b605a);
w4(R+8,u32(0x2ull));
}
B5b605f:L5b605f:{c.instructions+=12;NFSU2_TR(0x5b605f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6062:{NFSU2_TR(0x5b6062);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b6068:{NFSU2_TR(0x5b6068);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6069:{NFSU2_TR(0x5b6069);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b606c:{NFSU2_TR(0x5b606c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b606d:{NFSU2_TR(0x5b606d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6070:{NFSU2_TR(0x5b6070);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6071:{NFSU2_TR(0x5b6071);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7fc2a8ull))));
}
B5b6077:{NFSU2_TR(0x5b6077);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6078:{NFSU2_TR(0x5b6078);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1b0ull))));
}
B5b607e:{NFSU2_TR(0x5b607e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b607f:{NFSU2_TR(0x5b607f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6084ull));
TAIL_STATIC(0x5af9d0u,5af);
}
B5b6084:L5b6084:{c.instructions+=1;NFSU2_TR(0x5b6084);
{goto L5b6088;}
}
B5b6086:L5b6086:{c.instructions+=1;NFSU2_TR(0x5b6086);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6088:L5b6088:{c.instructions+=4;NFSU2_TR(0x5b6088);
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
B5b608a:{NFSU2_TR(0x5b608a);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b608f:{NFSU2_TR(0x5b608f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6092:{NFSU2_TR(0x5b6092);
if(r1(R+518)){{goto L5b6099;}}
}
B5b6094:L5b6094:{c.instructions+=2;NFSU2_TR(0x5b6094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b6097:{NFSU2_TR(0x5b6097);
{goto L5b609b;}
}
B5b6099:L5b6099:{c.instructions+=1;NFSU2_TR(0x5b6099);
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
B5b609b:L5b609b:{c.instructions+=9;NFSU2_TR(0x5b609b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b609e:{NFSU2_TR(0x5b609e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b60a1:{NFSU2_TR(0x5b60a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5b60a4:{NFSU2_TR(0x5b60a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b60a7:{NFSU2_TR(0x5b60a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b60a9:{NFSU2_TR(0x5b60a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b60ac:{NFSU2_TR(0x5b60ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b60ae:{NFSU2_TR(0x5b60ae);
__builtin_memmove((R+4),(R+0),4);
}
B5b60b0:{NFSU2_TR(0x5b60b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b60b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b60b3:L5b60b3:{c.instructions+=9;NFSU2_TR(0x5b60b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b60b6:{NFSU2_TR(0x5b60b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b60ba:{NFSU2_TR(0x5b60ba);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5b60bc:{NFSU2_TR(0x5b60bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b60bf:{NFSU2_TR(0x5b60bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b60c2:{NFSU2_TR(0x5b60c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b60c5:{NFSU2_TR(0x5b60c5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5b60c8:{NFSU2_TR(0x5b60c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b60ca:{NFSU2_TR(0x5b60ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6139;}}
}
B5b60cc:L5b60cc:{c.instructions+=2;NFSU2_TR(0x5b60cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b60d0:{NFSU2_TR(0x5b60d0);
if(r1(R+518)){{goto L5b6139;}}
}
B5b60d2:L5b60d2:{c.instructions+=5;NFSU2_TR(0x5b60d2);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B5b60d8:{NFSU2_TR(0x5b60d8);
__builtin_memmove((R+8),gp(0x890108),4);
}
B5b60de:{NFSU2_TR(0x5b60de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b60e0:{NFSU2_TR(0x5b60e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b60e2:{NFSU2_TR(0x5b60e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6107;}}
}
B5b60e4:L5b60e4:{c.instructions+=2;NFSU2_TR(0x5b60e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b60e6:{NFSU2_TR(0x5b60e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6107;}}
}
B5b60e8:L5b60e8:{c.instructions+=2;NFSU2_TR(0x5b60e8);
u8 U[8];
__builtin_memmove((U+0),gp(0x890114),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b60ee:{NFSU2_TR(0x5b60ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6100;}}
}
B5b60f0:L5b60f0:{c.instructions+=2;NFSU2_TR(0x5b60f0);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b60f6:{NFSU2_TR(0x5b60f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6100;}}
}
B5b60f8:L5b60f8:{c.instructions+=2;NFSU2_TR(0x5b60f8);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+8))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b60fe:{NFSU2_TR(0x5b60fe);
if(r1(R+518)){{goto L5b6107;}}
}
B5b6100:L5b6100:{c.instructions+=2;NFSU2_TR(0x5b6100);
w4(R+0,u32(0x3ull));
}
B5b6105:{NFSU2_TR(0x5b6105);
{goto L5b612d;}
}
B5b6107:L5b6107:{c.instructions+=2;NFSU2_TR(0x5b6107);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e3),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b610e:{NFSU2_TR(0x5b610e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6119;}}
}
B5b6110:L5b6110:{c.instructions+=2;NFSU2_TR(0x5b6110);
u8 U[8];
__builtin_memmove((U+0),gp(0x89010c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6117:{NFSU2_TR(0x5b6117);
if(r1(R+518)){{goto L5b6120;}}
}
B5b6119:L5b6119:{c.instructions+=2;NFSU2_TR(0x5b6119);
w4(R+0,u32(0xaull));
}
B5b611e:{NFSU2_TR(0x5b611e);
{goto L5b612d;}
}
B5b6120:L5b6120:{c.instructions+=2;NFSU2_TR(0x5b6120);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6122:{NFSU2_TR(0x5b6122);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6128;}}
}
B5b6124:L5b6124:{c.instructions+=2;NFSU2_TR(0x5b6124);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6126:{NFSU2_TR(0x5b6126);
if(r1(R+518)){{goto L5b612d;}}
}
B5b6128:L5b6128:{c.instructions+=1;NFSU2_TR(0x5b6128);
w4(R+0,u32(0x2ull));
}
B5b612d:L5b612d:{c.instructions+=5;NFSU2_TR(0x5b612d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b612f:{NFSU2_TR(0x5b612f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6131:{NFSU2_TR(0x5b6131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6132:{NFSU2_TR(0x5b6132);
__builtin_memmove((R+4),(R+20),4);
}
B5b6134:{NFSU2_TR(0x5b6134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6139ull));
TAIL_STATIC(0x5b4dc0u,5b4);
}
B5b6139:L5b6139:{c.instructions+=12;NFSU2_TR(0x5b6139);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5b613d:{NFSU2_TR(0x5b613d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6140:{NFSU2_TR(0x5b6140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6146:{NFSU2_TR(0x5b6146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6149:{NFSU2_TR(0x5b6149);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b614c:{NFSU2_TR(0x5b614c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b614f:{NFSU2_TR(0x5b614f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6152:{NFSU2_TR(0x5b6152);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6155:{NFSU2_TR(0x5b6155);
w4(R+4,u32(0x1ull));
}
B5b615a:{NFSU2_TR(0x5b615a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b615c:{NFSU2_TR(0x5b615c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b615e:{NFSU2_TR(0x5b615e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b618e;}}
}
B5b6160:L5b6160:{c.instructions+=3;NFSU2_TR(0x5b6160);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5b6165:{NFSU2_TR(0x5b6165);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6167:{NFSU2_TR(0x5b6167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6171;}}
}
B5b6169:L5b6169:{c.instructions+=2;NFSU2_TR(0x5b6169);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b616f:{NFSU2_TR(0x5b616f);
if(r1(R+518)){{goto L5b618e;}}
}
B5b6171:L5b6171:{c.instructions+=2;NFSU2_TR(0x5b6171);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6177:{NFSU2_TR(0x5b6177);
if(r1(R+518)){{goto L5b618e;}}
}
B5b6179:L5b6179:{c.instructions+=4;NFSU2_TR(0x5b6179);
__builtin_memmove((R+0),gp(0x89e7f4),4);
}
B5b617e:{NFSU2_TR(0x5b617e);
{u32 ea_=u32((r4(R+0)*4u)+u32(8002024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6185:{NFSU2_TR(0x5b6185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6188:{NFSU2_TR(0x5b6188);
{u32 ea_=u32(r4(R+8)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b618e:L5b618e:{c.instructions+=3;NFSU2_TR(0x5b618e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6191:{NFSU2_TR(0x5b6191);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b6195:{NFSU2_TR(0x5b6195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6260;}}
}
B5b619b:L5b619b:{c.instructions+=3;NFSU2_TR(0x5b619b);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5b61a0:{NFSU2_TR(0x5b61a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b61a2:{NFSU2_TR(0x5b61a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b61b0;}}
}
B5b61a4:L5b61a4:{c.instructions+=2;NFSU2_TR(0x5b61a4);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61aa:{NFSU2_TR(0x5b61aa);
if(r1(R+518)){{goto L5b6260;}}
}
B5b61b0:L5b61b0:{c.instructions+=3;NFSU2_TR(0x5b61b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b61b3:{NFSU2_TR(0x5b61b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61b6:{NFSU2_TR(0x5b61b6);
if(r1(R+518)){{goto L5b61c6;}}
}
B5b61b8:L5b61b8:{c.instructions+=2;NFSU2_TR(0x5b61b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61bb:{NFSU2_TR(0x5b61bb);
if(r1(R+518)){{goto L5b61c6;}}
}
B5b61bd:L5b61bd:{c.instructions+=2;NFSU2_TR(0x5b61bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61c0:{NFSU2_TR(0x5b61c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6260;}}
}
B5b61c6:L5b61c6:{c.instructions+=2;NFSU2_TR(0x5b61c6);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+4)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b61cc:{NFSU2_TR(0x5b61cc);
if(r1(R+518)){{goto L5b61e4;}}
}
B5b61ce:L5b61ce:{c.instructions+=4;NFSU2_TR(0x5b61ce);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B5b61d4:{NFSU2_TR(0x5b61d4);
{u32 ea_=u32((r4(R+4)*4u)+u32(8002036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b61db:{NFSU2_TR(0x5b61db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b61de:{NFSU2_TR(0x5b61de);
{u32 ea_=u32(r4(R+8)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b61e4:L5b61e4:{c.instructions+=3;NFSU2_TR(0x5b61e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b61e7:{NFSU2_TR(0x5b61e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b61e9:{NFSU2_TR(0x5b61e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b61ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b61ec:L5b61ec:{c.instructions+=2;NFSU2_TR(0x5b61ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61ee:{NFSU2_TR(0x5b61ee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b629a;}}
}
B5b61f4:L5b61f4:{c.instructions+=3;NFSU2_TR(0x5b61f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b61f7:{NFSU2_TR(0x5b61f7);
__builtin_memmove((R+4),(R+0),4);
}
B5b61f9:{NFSU2_TR(0x5b61f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b6200;}}
}
B5b61fb:L5b61fb:{c.instructions+=1;NFSU2_TR(0x5b61fb);
w4(R+4,u32(0x9ull));
}
B5b6200:L5b6200:{c.instructions+=2;NFSU2_TR(0x5b6200);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6202:{NFSU2_TR(0x5b6202);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6260;}}
}
B5b6204:L5b6204:{c.instructions+=17;NFSU2_TR(0x5b6204);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B5b620a:{NFSU2_TR(0x5b620a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b620d:{NFSU2_TR(0x5b620d);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6214:{NFSU2_TR(0x5b6214);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b621b:{NFSU2_TR(0x5b621b);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6222:{NFSU2_TR(0x5b6222);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6229:{NFSU2_TR(0x5b6229);
u8 U[12];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5b6230:{NFSU2_TR(0x5b6230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6233:{NFSU2_TR(0x5b6233);
{u32 ea_=u32(r4(R+4)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6239:{NFSU2_TR(0x5b6239);
{u32 ea_=u32(r4(R+4)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b623f:{NFSU2_TR(0x5b623f);
{u32 ea_=u32(r4(R+4)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6245:{NFSU2_TR(0x5b6245);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b624b:{NFSU2_TR(0x5b624b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b624e:{NFSU2_TR(0x5b624e);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6251:{NFSU2_TR(0x5b6251);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6254:{NFSU2_TR(0x5b6254);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b625a:{NFSU2_TR(0x5b625a);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6260:L5b6260:{c.instructions+=3;NFSU2_TR(0x5b6260);
__builtin_memmove((R+8),gp(0x86b2f4),4);
}
B5b6266:{NFSU2_TR(0x5b6266);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6267:{NFSU2_TR(0x5b6267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b626cull));
TAIL_STATIC(0x440e50u,440);
}
B5b626c:L5b626c:{c.instructions+=3;NFSU2_TR(0x5b626c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b626f:{NFSU2_TR(0x5b626f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6271:{NFSU2_TR(0x5b6271);
if(r1(R+518)){{goto L5b62a1;}}
}
B5b6273:L5b6273:{c.instructions+=12;NFSU2_TR(0x5b6273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6276:{NFSU2_TR(0x5b6276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6279:{NFSU2_TR(0x5b6279);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x260ull))));
}
B5b627f:{NFSU2_TR(0x5b627f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b6281:{NFSU2_TR(0x5b6281);
w4(R+4,u32(0x3f800000ull));
}
B5b6286:{NFSU2_TR(0x5b6286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6289:{NFSU2_TR(0x5b6289);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b628c:{NFSU2_TR(0x5b628c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b628f:{NFSU2_TR(0x5b628f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6292:{NFSU2_TR(0x5b6292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6295:{NFSU2_TR(0x5b6295);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6298:{NFSU2_TR(0x5b6298);
{goto L5b62a8;}
}
B5b629a:L5b629a:{c.instructions+=2;NFSU2_TR(0x5b629a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b629c:{NFSU2_TR(0x5b629c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6200u);}goto L5b6200;}
}
B5b62a1:L5b62a1:{c.instructions+=2;NFSU2_TR(0x5b62a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b62a3:{NFSU2_TR(0x5b62a3);
w4(R+4,u32(0x3f800000ull));
}
B5b62a8:L5b62a8:{c.instructions+=7;NFSU2_TR(0x5b62a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b62ab:{NFSU2_TR(0x5b62ab);
s4(0x7fc800,u32(0x0ull));
}
B5b62b5:{NFSU2_TR(0x5b62b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b62b8:{NFSU2_TR(0x5b62b8);
__builtin_memmove((R+4),(R+24),4);
}
B5b62ba:{NFSU2_TR(0x5b62ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b62bd:{NFSU2_TR(0x5b62bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b62c1:{NFSU2_TR(0x5b62c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b62c6ull));
TAIL_STATIC(0x5ab990u,5ab);
}
B5b62c6:L5b62c6:{c.instructions+=2;NFSU2_TR(0x5b62c6);
__builtin_memmove((R+4),(R+24),4);
}
B5b62c8:{NFSU2_TR(0x5b62c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b62cdull));
TAIL_STATIC(0x5a48a0u,5a4);
}
B5b62cd:L5b62cd:{c.instructions+=2;NFSU2_TR(0x5b62cd);
__builtin_memmove((R+4),(R+28),4);
}
B5b62cf:{NFSU2_TR(0x5b62cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b62d4ull));
TAIL_STATIC(0x5b04d0u,5b0);
}
B5b62d4:L5b62d4:{c.instructions+=10;NFSU2_TR(0x5b62d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b62d8:{NFSU2_TR(0x5b62d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b62d9:{NFSU2_TR(0x5b62d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b62df:{NFSU2_TR(0x5b62df);
__builtin_memmove((R+0),(R+24),4);
}
B5b62e1:{NFSU2_TR(0x5b62e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b62e2:{NFSU2_TR(0x5b62e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b62e3:{NFSU2_TR(0x5b62e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b62e4:{NFSU2_TR(0x5b62e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b62eb:{NFSU2_TR(0x5b62eb);
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
B5b62ee:{NFSU2_TR(0x5b62ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6300:L5b6300:{c.instructions+=10;NFSU2_TR(0x5b6300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5b6303:{NFSU2_TR(0x5b6303);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6304:{NFSU2_TR(0x5b6304);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6305:{NFSU2_TR(0x5b6305);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6306:{NFSU2_TR(0x5b6306);
__builtin_memmove((R+24),(R+4),4);
}
B5b6308:{NFSU2_TR(0x5b6308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b630b:{NFSU2_TR(0x5b630b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b630e:{NFSU2_TR(0x5b630e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6311:{NFSU2_TR(0x5b6311);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6312:{NFSU2_TR(0x5b6312);
if(r1(R+518)){{goto L5b631e;}}
}
B5b6314:L5b6314:{c.instructions+=2;NFSU2_TR(0x5b6314);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6317:{NFSU2_TR(0x5b6317);
if(r1(R+518)){{goto L5b631e;}}
}
B5b6319:L5b6319:{c.instructions+=2;NFSU2_TR(0x5b6319);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b631c:{NFSU2_TR(0x5b631c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b631e:L5b631e:{c.instructions+=1;NFSU2_TR(0x5b631e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6323ull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5b6323:L5b6323:{c.instructions+=2;NFSU2_TR(0x5b6323);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6325:{NFSU2_TR(0x5b6325);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b6327:L5b6327:{c.instructions+=6;NFSU2_TR(0x5b6327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b632a:{NFSU2_TR(0x5b632a);
{u32 ea_=u32(r4(R+0)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6330:{NFSU2_TR(0x5b6330);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6336:{NFSU2_TR(0x5b6336);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6338:{NFSU2_TR(0x5b6338);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b633b:{NFSU2_TR(0x5b633b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b633d:L5b633d:{c.instructions+=3;NFSU2_TR(0x5b633d);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B5b6342:{NFSU2_TR(0x5b6342);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6344:{NFSU2_TR(0x5b6344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b6346:L5b6346:{c.instructions+=3;NFSU2_TR(0x5b6346);
__builtin_memmove((R+0),gp(0x890100),4);
}
B5b634b:{NFSU2_TR(0x5b634b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b634d:{NFSU2_TR(0x5b634d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b634f:L5b634f:{c.instructions+=3;NFSU2_TR(0x5b634f);
__builtin_memmove((R+0),gp(0x890110),4);
}
B5b6354:{NFSU2_TR(0x5b6354);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6356:{NFSU2_TR(0x5b6356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b635f;}}
}
B5b6358:L5b6358:{c.instructions+=2;NFSU2_TR(0x5b6358);
w4(R+12,u32(0x1ull));
}
B5b635d:{NFSU2_TR(0x5b635d);
{goto L5b6361;}
}
B5b635f:L5b635f:{c.instructions+=1;NFSU2_TR(0x5b635f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b6361:L5b6361:{c.instructions+=6;NFSU2_TR(0x5b6361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6364:{NFSU2_TR(0x5b6364);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b636a:{NFSU2_TR(0x5b636a);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6370:{NFSU2_TR(0x5b6370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6372:{NFSU2_TR(0x5b6372);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6375:{NFSU2_TR(0x5b6375);
if(r1(R+514)){{goto L5b637e;}}
}
B5b6377:L5b6377:{c.instructions+=2;NFSU2_TR(0x5b6377);
w4(R+0,u32(0x1ull));
}
B5b637c:{NFSU2_TR(0x5b637c);
{goto L5b6380;}
}
B5b637e:L5b637e:{c.instructions+=1;NFSU2_TR(0x5b637e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6380:L5b6380:{c.instructions+=9;NFSU2_TR(0x5b6380);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6386:{NFSU2_TR(0x5b6386);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b6388:{NFSU2_TR(0x5b6388);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b638e:{NFSU2_TR(0x5b638e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6390:{NFSU2_TR(0x5b6390);
__builtin_memmove((R+8),(R+518),1);
}
B5b6393:{NFSU2_TR(0x5b6393);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6395:{NFSU2_TR(0x5b6395);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6398:{NFSU2_TR(0x5b6398);
__builtin_memmove((R+28),(R+8),4);
}
B5b639a:{NFSU2_TR(0x5b639a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b63a1;}}
}
B5b639c:L5b639c:{c.instructions+=1;NFSU2_TR(0x5b639c);
w4(R+28,u32(0x2ull));
}
B5b63a1:L5b63a1:{c.instructions+=6;NFSU2_TR(0x5b63a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b63a4:{NFSU2_TR(0x5b63a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b63a7:{NFSU2_TR(0x5b63a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b63aa:{NFSU2_TR(0x5b63aa);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5b63ad:{NFSU2_TR(0x5b63ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b63af:{NFSU2_TR(0x5b63af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b63be;}}
}
B5b63b1:L5b63b1:{c.instructions+=5;NFSU2_TR(0x5b63b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b63b3:{NFSU2_TR(0x5b63b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b63b5:{NFSU2_TR(0x5b63b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b63b7:{NFSU2_TR(0x5b63b7);
__builtin_memmove((R+4),(R+20),4);
}
B5b63b9:{NFSU2_TR(0x5b63b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b63beull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b63be:L5b63be:{c.instructions+=11;NFSU2_TR(0x5b63be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5b63c2:{NFSU2_TR(0x5b63c2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x51ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5b63c5:{NFSU2_TR(0x5b63c5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B5b63c7:{NFSU2_TR(0x5b63c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b63ca:{NFSU2_TR(0x5b63ca);
{u32 ea_=u32((r4(R+28)*4u)+u32(8372904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b63d1:{NFSU2_TR(0x5b63d1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b63d5:{NFSU2_TR(0x5b63d5);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b63d8:{NFSU2_TR(0x5b63d8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b63de:{NFSU2_TR(0x5b63de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b63e0:{NFSU2_TR(0x5b63e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b63e3:{NFSU2_TR(0x5b63e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b64be;}}
}
B5b63e9:L5b63e9:{c.instructions+=9;NFSU2_TR(0x5b63e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b63ef:{NFSU2_TR(0x5b63ef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b63f3:{NFSU2_TR(0x5b63f3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5b63f5:{NFSU2_TR(0x5b63f5);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b63f8:{NFSU2_TR(0x5b63f8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b63fe:{NFSU2_TR(0x5b63fe);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b6400:{NFSU2_TR(0x5b6400);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6402:{NFSU2_TR(0x5b6402);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6405:{NFSU2_TR(0x5b6405);
if(r1(R+514)){{goto L5b640f;}}
}
B5b6407:L5b6407:{c.instructions+=2;NFSU2_TR(0x5b6407);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6409:{NFSU2_TR(0x5b6409);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b640f:L5b640f:{c.instructions+=12;NFSU2_TR(0x5b640f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b6415:{NFSU2_TR(0x5b6415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6418:{NFSU2_TR(0x5b6418);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b641e:{NFSU2_TR(0x5b641e);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6424:{NFSU2_TR(0x5b6424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6427:{NFSU2_TR(0x5b6427);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b642a:{NFSU2_TR(0x5b642a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b642c:{NFSU2_TR(0x5b642c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6432:{NFSU2_TR(0x5b6432);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b6434:{NFSU2_TR(0x5b6434);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6436:{NFSU2_TR(0x5b6436);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6439:{NFSU2_TR(0x5b6439);
if(r1(R+514)){{goto L5b6443;}}
}
B5b643b:L5b643b:{c.instructions+=2;NFSU2_TR(0x5b643b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b643d:{NFSU2_TR(0x5b643d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6443:L5b6443:{c.instructions+=12;NFSU2_TR(0x5b6443);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b6449:{NFSU2_TR(0x5b6449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b644c:{NFSU2_TR(0x5b644c);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6452:{NFSU2_TR(0x5b6452);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6458:{NFSU2_TR(0x5b6458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b645b:{NFSU2_TR(0x5b645b);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b645e:{NFSU2_TR(0x5b645e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b6460:{NFSU2_TR(0x5b6460);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6466:{NFSU2_TR(0x5b6466);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b6468:{NFSU2_TR(0x5b6468);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b646a:{NFSU2_TR(0x5b646a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b646d:{NFSU2_TR(0x5b646d);
if(r1(R+514)){{goto L5b6477;}}
}
B5b646f:L5b646f:{c.instructions+=2;NFSU2_TR(0x5b646f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6471:{NFSU2_TR(0x5b6471);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6477:L5b6477:{c.instructions+=11;NFSU2_TR(0x5b6477);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b647d:{NFSU2_TR(0x5b647d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6480:{NFSU2_TR(0x5b6480);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6486:{NFSU2_TR(0x5b6486);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b648c:{NFSU2_TR(0x5b648c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b648f:{NFSU2_TR(0x5b648f);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6492:{NFSU2_TR(0x5b6492);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6498:{NFSU2_TR(0x5b6498);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b649a:{NFSU2_TR(0x5b649a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b649c:{NFSU2_TR(0x5b649c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b649f:{NFSU2_TR(0x5b649f);
if(r1(R+514)){{goto L5b64a9;}}
}
B5b64a1:L5b64a1:{c.instructions+=2;NFSU2_TR(0x5b64a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b64a3:{NFSU2_TR(0x5b64a3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b64a9:L5b64a9:{c.instructions+=4;NFSU2_TR(0x5b64a9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b64af:{NFSU2_TR(0x5b64af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b64b2:{NFSU2_TR(0x5b64b2);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b64b8:{NFSU2_TR(0x5b64b8);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b64be:L5b64be:{c.instructions+=3;NFSU2_TR(0x5b64be);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b64c0:{NFSU2_TR(0x5b64c0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b64c2:{NFSU2_TR(0x5b64c2);
if(r1(R+518)){{goto L5b6980;}}
}
B5b64c8:L5b64c8:{c.instructions+=6;NFSU2_TR(0x5b64c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b64cb:{NFSU2_TR(0x5b64cb);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b64d1:{NFSU2_TR(0x5b64d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b64d7:{NFSU2_TR(0x5b64d7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b64d9:{NFSU2_TR(0x5b64d9);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b64df:{NFSU2_TR(0x5b64df);
if(r1(R+518)){{goto L5b65fc;}}
}
B5b64e5:L5b64e5:{c.instructions+=6;NFSU2_TR(0x5b64e5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b64e7:{NFSU2_TR(0x5b64e7);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b64ed:{NFSU2_TR(0x5b64ed);
{u32 ea_=u32(u32(8001572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b64f3:{NFSU2_TR(0x5b64f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b64f5:{NFSU2_TR(0x5b64f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b64f8:{NFSU2_TR(0x5b64f8);
if(r1(R+514)){{goto L5b6502;}}
}
B5b64fa:L5b64fa:{c.instructions+=2;NFSU2_TR(0x5b64fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6500:{NFSU2_TR(0x5b6500);
{goto L5b6507;}
}
B5b6502:L5b6502:{c.instructions+=1;NFSU2_TR(0x5b6502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6507ull));
TAIL_STATIC(0x591d90u,591);
}
B5b6507:L5b6507:{c.instructions+=5;NFSU2_TR(0x5b6507);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b6509:{NFSU2_TR(0x5b6509);
{u32 ea_=u32(u32(8372488u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b650f:{NFSU2_TR(0x5b650f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6511:{NFSU2_TR(0x5b6511);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6514:{NFSU2_TR(0x5b6514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6524;}}
}
B5b6516:L5b6516:{c.instructions+=3;NFSU2_TR(0x5b6516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6519:{NFSU2_TR(0x5b6519);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b651f:{NFSU2_TR(0x5b651f);
{goto L5b67cd;}
}
B5b6524:L5b6524:{c.instructions+=6;NFSU2_TR(0x5b6524);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6527:{NFSU2_TR(0x5b6527);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b652d:{NFSU2_TR(0x5b652d);
{u32 ea_=u32(u32(8372484u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6533:{NFSU2_TR(0x5b6533);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6535:{NFSU2_TR(0x5b6535);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6538:{NFSU2_TR(0x5b6538);
if(r1(R+514)){{goto L5b65b0;}}
}
B5b653a:L5b653a:{c.instructions+=6;NFSU2_TR(0x5b653a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b653d:{NFSU2_TR(0x5b653d);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6543:{NFSU2_TR(0x5b6543);
{u32 ea_=u32(u32(8372484u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6549:{NFSU2_TR(0x5b6549);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b654b:{NFSU2_TR(0x5b654b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b654e:{NFSU2_TR(0x5b654e);
if(r1(R+514)){{goto L5b65b0;}}
}
B5b6550:L5b6550:{c.instructions+=6;NFSU2_TR(0x5b6550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6553:{NFSU2_TR(0x5b6553);
{u32 ea_=u32(r4(R+8)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6559:{NFSU2_TR(0x5b6559);
{u32 ea_=u32(u32(8372484u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b655f:{NFSU2_TR(0x5b655f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6561:{NFSU2_TR(0x5b6561);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6564:{NFSU2_TR(0x5b6564);
if(r1(R+514)){{goto L5b65b0;}}
}
B5b6566:L5b6566:{c.instructions+=6;NFSU2_TR(0x5b6566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6569:{NFSU2_TR(0x5b6569);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b656f:{NFSU2_TR(0x5b656f);
{u32 ea_=u32(u32(8372484u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6575:{NFSU2_TR(0x5b6575);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6577:{NFSU2_TR(0x5b6577);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b657a:{NFSU2_TR(0x5b657a);
if(r1(R+514)){{goto L5b65b0;}}
}
B5b657c:L5b657c:{c.instructions+=8;NFSU2_TR(0x5b657c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b657f:{NFSU2_TR(0x5b657f);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6585:{NFSU2_TR(0x5b6585);
{u32 ea_=u32(r4(R+0)+u32(1080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b658b:{NFSU2_TR(0x5b658b);
{u32 ea_=u32(r4(R+0)+u32(1080u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b6591:{NFSU2_TR(0x5b6591);
{u32 ea_=u32(u32(8372492u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6597:{NFSU2_TR(0x5b6597);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6599:{NFSU2_TR(0x5b6599);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b659c:{NFSU2_TR(0x5b659c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b67cd;}}
}
B5b65a2:L5b65a2:{c.instructions+=3;NFSU2_TR(0x5b65a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b65a5:{NFSU2_TR(0x5b65a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b65ab:{NFSU2_TR(0x5b65ab);
{goto L5b67cd;}
}
B5b65b0:L5b65b0:{c.instructions+=10;NFSU2_TR(0x5b65b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b65b3:{NFSU2_TR(0x5b65b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x438ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b65b9:{NFSU2_TR(0x5b65b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b65bc:{NFSU2_TR(0x5b65bc);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b65c2:{NFSU2_TR(0x5b65c2);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b65c8:{NFSU2_TR(0x5b65c8);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b65ce:{NFSU2_TR(0x5b65ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b65d4:{NFSU2_TR(0x5b65d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b65d6:{NFSU2_TR(0x5b65d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b65d9:{NFSU2_TR(0x5b65d9);
if(r1(R+514)){{goto L5b67cd;}}
}
B5b65df:L5b65df:{c.instructions+=6;NFSU2_TR(0x5b65df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b65e2:{NFSU2_TR(0x5b65e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b65e8:{NFSU2_TR(0x5b65e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b65eb:{NFSU2_TR(0x5b65eb);
__builtin_memmove((R+4),gp(0x7fc118),4);
}
B5b65f1:{NFSU2_TR(0x5b65f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b65f7:{NFSU2_TR(0x5b65f7);
{goto L5b67cd;}
}
B5b65fc:L5b65fc:{c.instructions+=3;NFSU2_TR(0x5b65fc);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5b6602:{NFSU2_TR(0x5b6602);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b6605:{NFSU2_TR(0x5b6605);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b67cb;}}
}
B5b660b:L5b660b:{c.instructions+=4;NFSU2_TR(0x5b660b);
{u32 ea_=u32(u32(8372500u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6611:{NFSU2_TR(0x5b6611);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6613:{NFSU2_TR(0x5b6613);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6616:{NFSU2_TR(0x5b6616);
if(r1(R+514)){{goto L5b67cd;}}
}
B5b661c:L5b661c:{c.instructions+=15;NFSU2_TR(0x5b661c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6622:{NFSU2_TR(0x5b6622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6625:{NFSU2_TR(0x5b6625);
{u32 ea_=u32(u32(8372496u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b662b:{NFSU2_TR(0x5b662b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b662d:{NFSU2_TR(0x5b662d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6635:{NFSU2_TR(0x5b6635);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6639:{NFSU2_TR(0x5b6639);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b663f:{NFSU2_TR(0x5b663f);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6645:{NFSU2_TR(0x5b6645);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6649:{NFSU2_TR(0x5b6649);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b664f:{NFSU2_TR(0x5b664f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6653:{NFSU2_TR(0x5b6653);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b6657:{NFSU2_TR(0x5b6657);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6659:{NFSU2_TR(0x5b6659);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b665c:{NFSU2_TR(0x5b665c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b6664;}}
}
B5b665e:L5b665e:{c.instructions+=2;NFSU2_TR(0x5b665e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6660:{NFSU2_TR(0x5b6660);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6664:L5b6664:{c.instructions+=4;NFSU2_TR(0x5b6664);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b666a:{NFSU2_TR(0x5b666a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b666c:{NFSU2_TR(0x5b666c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b666f:{NFSU2_TR(0x5b666f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6679;}}
}
B5b6671:L5b6671:{c.instructions+=3;NFSU2_TR(0x5b6671);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6675:{NFSU2_TR(0x5b6675);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b6677:{NFSU2_TR(0x5b6677);
{goto L5b667b;}
}
B5b6679:L5b6679:{c.instructions+=1;NFSU2_TR(0x5b6679);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b667b:L5b667b:{c.instructions+=10;NFSU2_TR(0x5b667b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b667e:{NFSU2_TR(0x5b667e);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6684:{NFSU2_TR(0x5b6684);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b668a:{NFSU2_TR(0x5b668a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b668e:{NFSU2_TR(0x5b668e);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6694:{NFSU2_TR(0x5b6694);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6698:{NFSU2_TR(0x5b6698);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b669c:{NFSU2_TR(0x5b669c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b669e:{NFSU2_TR(0x5b669e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b66a1:{NFSU2_TR(0x5b66a1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b66a9;}}
}
B5b66a3:L5b66a3:{c.instructions+=2;NFSU2_TR(0x5b66a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b66a5:{NFSU2_TR(0x5b66a5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b66a9:L5b66a9:{c.instructions+=4;NFSU2_TR(0x5b66a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b66ad:{NFSU2_TR(0x5b66ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b66af:{NFSU2_TR(0x5b66af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b66b2:{NFSU2_TR(0x5b66b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b66bf;}}
}
B5b66b4:L5b66b4:{c.instructions+=3;NFSU2_TR(0x5b66b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b66b8:{NFSU2_TR(0x5b66b8);
w4(R+28,u32(0x1ull));
}
B5b66bd:{NFSU2_TR(0x5b66bd);
{goto L5b66c1;}
}
B5b66bf:L5b66bf:{c.instructions+=1;NFSU2_TR(0x5b66bf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b66c1:L5b66c1:{c.instructions+=10;NFSU2_TR(0x5b66c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b66c4:{NFSU2_TR(0x5b66c4);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b66ca:{NFSU2_TR(0x5b66ca);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b66d0:{NFSU2_TR(0x5b66d0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b66d4:{NFSU2_TR(0x5b66d4);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b66da:{NFSU2_TR(0x5b66da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b66de:{NFSU2_TR(0x5b66de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b66e2:{NFSU2_TR(0x5b66e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b66e4:{NFSU2_TR(0x5b66e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b66e7:{NFSU2_TR(0x5b66e7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b66ef;}}
}
B5b66e9:L5b66e9:{c.instructions+=2;NFSU2_TR(0x5b66e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b66eb:{NFSU2_TR(0x5b66eb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b66ef:L5b66ef:{c.instructions+=4;NFSU2_TR(0x5b66ef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b66f3:{NFSU2_TR(0x5b66f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b66f5:{NFSU2_TR(0x5b66f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b66f8:{NFSU2_TR(0x5b66f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6705;}}
}
B5b66fa:L5b66fa:{c.instructions+=3;NFSU2_TR(0x5b66fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b66fe:{NFSU2_TR(0x5b66fe);
w4(R+28,u32(0x2ull));
}
B5b6703:{NFSU2_TR(0x5b6703);
{goto L5b6707;}
}
B5b6705:L5b6705:{c.instructions+=1;NFSU2_TR(0x5b6705);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6707:L5b6707:{c.instructions+=10;NFSU2_TR(0x5b6707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b670a:{NFSU2_TR(0x5b670a);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6710:{NFSU2_TR(0x5b6710);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6716:{NFSU2_TR(0x5b6716);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b671a:{NFSU2_TR(0x5b671a);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6720:{NFSU2_TR(0x5b6720);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6724:{NFSU2_TR(0x5b6724);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b6728:{NFSU2_TR(0x5b6728);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b672a:{NFSU2_TR(0x5b672a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b672d:{NFSU2_TR(0x5b672d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b6735;}}
}
B5b672f:L5b672f:{c.instructions+=2;NFSU2_TR(0x5b672f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6731:{NFSU2_TR(0x5b6731);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6735:L5b6735:{c.instructions+=4;NFSU2_TR(0x5b6735);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b6739:{NFSU2_TR(0x5b6739);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b673b:{NFSU2_TR(0x5b673b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b673e:{NFSU2_TR(0x5b673e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b674b;}}
}
B5b6740:L5b6740:{c.instructions+=3;NFSU2_TR(0x5b6740);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6744:{NFSU2_TR(0x5b6744);
w4(R+28,u32(0x3ull));
}
B5b6749:{NFSU2_TR(0x5b6749);
{goto L5b674d;}
}
B5b674b:L5b674b:{c.instructions+=1;NFSU2_TR(0x5b674b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b674d:L5b674d:{c.instructions+=5;NFSU2_TR(0x5b674d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6751:{NFSU2_TR(0x5b6751);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6757:{NFSU2_TR(0x5b6757);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6759:{NFSU2_TR(0x5b6759);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b675c:{NFSU2_TR(0x5b675c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b67cd;}}
}
B5b675e:L5b675e:{c.instructions+=6;NFSU2_TR(0x5b675e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6762:{NFSU2_TR(0x5b6762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6763:{NFSU2_TR(0x5b6763);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6767:{NFSU2_TR(0x5b6767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6768:{NFSU2_TR(0x5b6768);
w4(R+4,u32(0x7fc924ull));
}
B5b676d:{NFSU2_TR(0x5b676d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6772ull));
TAIL_STATIC(0x40c840u,40c);
}
B5b6772:L5b6772:{c.instructions+=12;NFSU2_TR(0x5b6772);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6778:{NFSU2_TR(0x5b6778);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b677c:{NFSU2_TR(0x5b677c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b677f:{NFSU2_TR(0x5b677f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
}
B5b6782:{NFSU2_TR(0x5b6782);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6786:{NFSU2_TR(0x5b6786);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b678a:{NFSU2_TR(0x5b678a);
{u32 ea_=u32(r4(R+8)+u32(1076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6790:{NFSU2_TR(0x5b6790);
{u32 ea_=u32(u32(7885072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6796:{NFSU2_TR(0x5b6796);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b679a:{NFSU2_TR(0x5b679a);
{u32 ea_=u32(u32(8372508u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5b67a0:{NFSU2_TR(0x5b67a0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B5b67a4:{NFSU2_TR(0x5b67a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b67a9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5b67a9:L5b67a9:{c.instructions+=8;NFSU2_TR(0x5b67a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b67ac:{NFSU2_TR(0x5b67ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b67b2:{NFSU2_TR(0x5b67b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b67b5:{NFSU2_TR(0x5b67b5);
__builtin_memmove((R+0),gp(0x7fc118),4);
}
B5b67ba:{NFSU2_TR(0x5b67ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x430ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b67c0:{NFSU2_TR(0x5b67c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b67c3:{NFSU2_TR(0x5b67c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b67c9:{NFSU2_TR(0x5b67c9);
{goto L5b67cd;}
}
B5b67cb:L5b67cb:{c.instructions+=1;NFSU2_TR(0x5b67cb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b67cd:L5b67cd:{c.instructions+=3;NFSU2_TR(0x5b67cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b67d0:{NFSU2_TR(0x5b67d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b67d6:{NFSU2_TR(0x5b67d6);
if(r1(R+518)){{goto L5b6980;}}
}
B5b67dc:L5b67dc:{c.instructions+=10;NFSU2_TR(0x5b67dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b67df:{NFSU2_TR(0x5b67df);
{u32 ea_=u32(u32(8372480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b67e5:{NFSU2_TR(0x5b67e5);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b67eb:{NFSU2_TR(0x5b67eb);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b67f1:{NFSU2_TR(0x5b67f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b67f4:{NFSU2_TR(0x5b67f4);
{u32 ea_=u32(r4(R+0)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b67fa:{NFSU2_TR(0x5b67fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6800:{NFSU2_TR(0x5b6800);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b6805:{NFSU2_TR(0x5b6805);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b680b:{NFSU2_TR(0x5b680b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5b6812;}}
}
B5b680d:L5b680d:{c.instructions+=3;NFSU2_TR(0x5b680d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b680e:{NFSU2_TR(0x5b680e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B5b6811:{NFSU2_TR(0x5b6811);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b6812:L5b6812:{c.instructions+=1;NFSU2_TR(0x5b6812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b681c;}}
}
B5b6814:L5b6814:{c.instructions+=2;NFSU2_TR(0x5b6814);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b681a:{NFSU2_TR(0x5b681a);
{goto L5b682a;}
}
B5b681c:L5b681c:{c.instructions+=3;NFSU2_TR(0x5b681c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6822:{NFSU2_TR(0x5b6822);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6828:{NFSU2_TR(0x5b6828);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b682a:L5b682a:{c.instructions+=16;NFSU2_TR(0x5b682a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6830:{NFSU2_TR(0x5b6830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6833:{NFSU2_TR(0x5b6833);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b6835:{NFSU2_TR(0x5b6835);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b683b:{NFSU2_TR(0x5b683b);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6841:{NFSU2_TR(0x5b6841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6844:{NFSU2_TR(0x5b6844);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6846:{NFSU2_TR(0x5b6846);
{u32 ea_=u32(u32(8372480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b684c:{NFSU2_TR(0x5b684c);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6852:{NFSU2_TR(0x5b6852);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6858:{NFSU2_TR(0x5b6858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b685b:{NFSU2_TR(0x5b685b);
{u32 ea_=u32(r4(R+0)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6861:{NFSU2_TR(0x5b6861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6867:{NFSU2_TR(0x5b6867);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5b686d:{NFSU2_TR(0x5b686d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b6873:{NFSU2_TR(0x5b6873);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5b687a;}}
}
B5b6875:L5b6875:{c.instructions+=3;NFSU2_TR(0x5b6875);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5b6876:{NFSU2_TR(0x5b6876);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffffeull))));
}
B5b6879:{NFSU2_TR(0x5b6879);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5b687a:L5b687a:{c.instructions+=2;NFSU2_TR(0x5b687a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b687d:{NFSU2_TR(0x5b687d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6887;}}
}
B5b687f:L5b687f:{c.instructions+=2;NFSU2_TR(0x5b687f);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6885:{NFSU2_TR(0x5b6885);
{goto L5b6895;}
}
B5b6887:L5b6887:{c.instructions+=3;NFSU2_TR(0x5b6887);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b688d:{NFSU2_TR(0x5b688d);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6893:{NFSU2_TR(0x5b6893);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b6895:L5b6895:{c.instructions+=16;NFSU2_TR(0x5b6895);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b689b:{NFSU2_TR(0x5b689b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b689e:{NFSU2_TR(0x5b689e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b68a0:{NFSU2_TR(0x5b68a0);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b68a6:{NFSU2_TR(0x5b68a6);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b68ac:{NFSU2_TR(0x5b68ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b68af:{NFSU2_TR(0x5b68af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b68b1:{NFSU2_TR(0x5b68b1);
{u32 ea_=u32(u32(8372480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b68b7:{NFSU2_TR(0x5b68b7);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b68bd:{NFSU2_TR(0x5b68bd);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b68c3:{NFSU2_TR(0x5b68c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b68c6:{NFSU2_TR(0x5b68c6);
{u32 ea_=u32(r4(R+0)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b68cc:{NFSU2_TR(0x5b68cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b68d2:{NFSU2_TR(0x5b68d2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B5b68d8:{NFSU2_TR(0x5b68d8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b68de:{NFSU2_TR(0x5b68de);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5b68e5;}}
}
B5b68e0:L5b68e0:{c.instructions+=3;NFSU2_TR(0x5b68e0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b68e1:{NFSU2_TR(0x5b68e1);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B5b68e4:{NFSU2_TR(0x5b68e4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b68e5:L5b68e5:{c.instructions+=2;NFSU2_TR(0x5b68e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b68e8:{NFSU2_TR(0x5b68e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b68f2;}}
}
B5b68ea:L5b68ea:{c.instructions+=2;NFSU2_TR(0x5b68ea);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b68f0:{NFSU2_TR(0x5b68f0);
{goto L5b6900;}
}
B5b68f2:L5b68f2:{c.instructions+=3;NFSU2_TR(0x5b68f2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b68f8:{NFSU2_TR(0x5b68f8);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b68fe:{NFSU2_TR(0x5b68fe);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b6900:L5b6900:{c.instructions+=16;NFSU2_TR(0x5b6900);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6906:{NFSU2_TR(0x5b6906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6909:{NFSU2_TR(0x5b6909);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b690b:{NFSU2_TR(0x5b690b);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6911:{NFSU2_TR(0x5b6911);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6917:{NFSU2_TR(0x5b6917);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b691a:{NFSU2_TR(0x5b691a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b691c:{NFSU2_TR(0x5b691c);
{u32 ea_=u32(u32(8372480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6922:{NFSU2_TR(0x5b6922);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6928:{NFSU2_TR(0x5b6928);
{u32 ea_=u32(r4(R+0)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b692e:{NFSU2_TR(0x5b692e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6931:{NFSU2_TR(0x5b6931);
{u32 ea_=u32(r4(R+0)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6937:{NFSU2_TR(0x5b6937);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b693d:{NFSU2_TR(0x5b693d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b6942:{NFSU2_TR(0x5b6942);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b6948:{NFSU2_TR(0x5b6948);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5b694f;}}
}
B5b694a:L5b694a:{c.instructions+=3;NFSU2_TR(0x5b694a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b694b:{NFSU2_TR(0x5b694b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B5b694e:{NFSU2_TR(0x5b694e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b694f:L5b694f:{c.instructions+=1;NFSU2_TR(0x5b694f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6959;}}
}
B5b6951:L5b6951:{c.instructions+=2;NFSU2_TR(0x5b6951);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6957:{NFSU2_TR(0x5b6957);
{goto L5b6967;}
}
B5b6959:L5b6959:{c.instructions+=3;NFSU2_TR(0x5b6959);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b695f:{NFSU2_TR(0x5b695f);
{u32 ea_=u32(u32(8372476u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6965:{NFSU2_TR(0x5b6965);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b6967:L5b6967:{c.instructions+=6;NFSU2_TR(0x5b6967);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b696d:{NFSU2_TR(0x5b696d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b6970:{NFSU2_TR(0x5b6970);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b6972:{NFSU2_TR(0x5b6972);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6978:{NFSU2_TR(0x5b6978);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b697e:{NFSU2_TR(0x5b697e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6980:L5b6980:{c.instructions+=6;NFSU2_TR(0x5b6980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b6981:{NFSU2_TR(0x5b6981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b6982:{NFSU2_TR(0x5b6982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b6983:{NFSU2_TR(0x5b6983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b6984:{NFSU2_TR(0x5b6984);
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
B5b6987:{NFSU2_TR(0x5b6987);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6990:L5b6990:{c.instructions+=5;NFSU2_TR(0x5b6990);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6991:{NFSU2_TR(0x5b6991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6992:{NFSU2_TR(0x5b6992);
__builtin_memmove((R+24),(R+4),4);
}
B5b6994:{NFSU2_TR(0x5b6994);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b6998:{NFSU2_TR(0x5b6998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b69a5;}}
}
B5b699a:L5b699a:{c.instructions+=4;NFSU2_TR(0x5b699a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b699c:{NFSU2_TR(0x5b699c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b699e:{NFSU2_TR(0x5b699e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b69a0:{NFSU2_TR(0x5b69a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b69a5ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b69a5:L5b69a5:{c.instructions+=7;NFSU2_TR(0x5b69a5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b69a8:{NFSU2_TR(0x5b69a8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b69ac:{NFSU2_TR(0x5b69ac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b69b0:{NFSU2_TR(0x5b69b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b69b6:{NFSU2_TR(0x5b69b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b69b8:{NFSU2_TR(0x5b69b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b69bb:{NFSU2_TR(0x5b69bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b69f4;}}
}
B5b69bd:L5b69bd:{c.instructions+=3;NFSU2_TR(0x5b69bd);
__builtin_memmove((R+4),(R+24),4);
}
B5b69bf:{NFSU2_TR(0x5b69bf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b69c1:{NFSU2_TR(0x5b69c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b69c6ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B5b69c6:L5b69c6:{c.instructions+=11;NFSU2_TR(0x5b69c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b69ca:{NFSU2_TR(0x5b69ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b69cc:{NFSU2_TR(0x5b69cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5b69d3:{NFSU2_TR(0x5b69d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b69d5:{NFSU2_TR(0x5b69d5);
{u32 ea_=u32(u32(8002172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b69db:{NFSU2_TR(0x5b69db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b69df:{NFSU2_TR(0x5b69df);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b69e3:{NFSU2_TR(0x5b69e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b69e7:{NFSU2_TR(0x5b69e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b69e9:{NFSU2_TR(0x5b69e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b69ec:{NFSU2_TR(0x5b69ec);
if(r1(R+518)){{goto L5b69f4;}}
}
B5b69ee:L5b69ee:{c.instructions+=2;NFSU2_TR(0x5b69ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b69f0:{NFSU2_TR(0x5b69f0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b69f4:L5b69f4:{c.instructions+=4;NFSU2_TR(0x5b69f4);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b69f8:{NFSU2_TR(0x5b69f8);
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
B5b69fa:{NFSU2_TR(0x5b69fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b69fb:{NFSU2_TR(0x5b69fb);
if(r1(R+518)){{goto L5b6a17;}}
}
B5b69fd:L5b69fd:{c.instructions+=5;NFSU2_TR(0x5b69fd);
{u32 ea_=u32(u32(8827896u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a03:{NFSU2_TR(0x5b6a03);
{u32 ea_=u32(u32(8827900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6a09:{NFSU2_TR(0x5b6a09);
{u32 ea_=u32(u32(8827896u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a0f:{NFSU2_TR(0x5b6a0f);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b6a11:{NFSU2_TR(0x5b6a11);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6a17:L5b6a17:{c.instructions+=2;NFSU2_TR(0x5b6a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6a18:{NFSU2_TR(0x5b6a18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6a20:L5b6a20:{c.instructions+=4;NFSU2_TR(0x5b6a20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6a21:{NFSU2_TR(0x5b6a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6a22:{NFSU2_TR(0x5b6a22);
__builtin_memmove((R+24),(R+4),4);
}
B5b6a24:{NFSU2_TR(0x5b6a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6a29ull));
TAIL_STATIC(0x5b5930u,5b5);
}
B5b6a29:L5b6a29:{c.instructions+=11;NFSU2_TR(0x5b6a29);
{u32 ea_=u32(u32(8827856u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a2f:{NFSU2_TR(0x5b6a2f);
{u32 ea_=u32(u32(8827860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6a35:{NFSU2_TR(0x5b6a35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b6a38:{NFSU2_TR(0x5b6a38);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6a3a:{NFSU2_TR(0x5b6a3a);
{u32 ea_=u32(u32(8827856u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a40:{NFSU2_TR(0x5b6a40);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b6a42:{NFSU2_TR(0x5b6a42);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6a48:{NFSU2_TR(0x5b6a48);
{u32 ea_=u32(u32(8002236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a4e:{NFSU2_TR(0x5b6a4e);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b6a50:{NFSU2_TR(0x5b6a50);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6a54:{NFSU2_TR(0x5b6a54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6a63;}}
}
B5b6a56:L5b6a56:{c.instructions+=5;NFSU2_TR(0x5b6a56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6a58:{NFSU2_TR(0x5b6a58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6a5a:{NFSU2_TR(0x5b6a5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6a5c:{NFSU2_TR(0x5b6a5c);
__builtin_memmove((R+4),(R+24),4);
}
B5b6a5e:{NFSU2_TR(0x5b6a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6a63ull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B5b6a63:L5b6a63:{c.instructions+=14;NFSU2_TR(0x5b6a63);
{u32 ea_=u32(r4(R+24)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6a69:{NFSU2_TR(0x5b6a69);
{u32 ea_=u32(r4(R+24)+u32(720u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6a6f:{NFSU2_TR(0x5b6a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b6a70:{NFSU2_TR(0x5b6a70);
{u32 ea_=u32(u32(8827888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a76:{NFSU2_TR(0x5b6a76);
{u32 ea_=u32(u32(8827892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6a7c:{NFSU2_TR(0x5b6a7c);
{u32 ea_=u32(u32(8827888u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6a82:{NFSU2_TR(0x5b6a82);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b6a84:{NFSU2_TR(0x5b6a84);
{u32 ea_=u32(u32(8002236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6a8a:{NFSU2_TR(0x5b6a8a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b6a8e:{NFSU2_TR(0x5b6a8e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b6a92:{NFSU2_TR(0x5b6a92);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6a98:{NFSU2_TR(0x5b6a98);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6a9a:{NFSU2_TR(0x5b6a9a);
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
B5b6a9d:{NFSU2_TR(0x5b6a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6abe;}}
}
B5b6a9f:L5b6a9f:{c.instructions+=6;NFSU2_TR(0x5b6a9f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6aa3:{NFSU2_TR(0x5b6aa3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6aa9:{NFSU2_TR(0x5b6aa9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6aad:{NFSU2_TR(0x5b6aad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6aaf:{NFSU2_TR(0x5b6aaf);
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
B5b6ab2:{NFSU2_TR(0x5b6ab2);
if(r1(R+514)){{goto L5b6abc;}}
}
B5b6ab4:L5b6ab4:{c.instructions+=2;NFSU2_TR(0x5b6ab4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6ab6:{NFSU2_TR(0x5b6ab6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6abc:L5b6abc:{c.instructions+=2;NFSU2_TR(0x5b6abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6abd:{NFSU2_TR(0x5b6abd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6abe:L5b6abe:{c.instructions+=3;NFSU2_TR(0x5b6abe);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6ac4:{NFSU2_TR(0x5b6ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6ac5:{NFSU2_TR(0x5b6ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6ad0:L5b6ad0:{c.instructions+=9;NFSU2_TR(0x5b6ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b6ad3:{NFSU2_TR(0x5b6ad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ad4:{NFSU2_TR(0x5b6ad4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ad5:{NFSU2_TR(0x5b6ad5);
__builtin_memmove((R+20),(R+4),4);
}
B5b6ad7:{NFSU2_TR(0x5b6ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5b6ada:{NFSU2_TR(0x5b6ada);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6add:{NFSU2_TR(0x5b6add);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ae1:{NFSU2_TR(0x5b6ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ae5:{NFSU2_TR(0x5b6ae5);
if(r1(R+518)){{goto L5b6cf1;}}
}
B5b6aeb:L5b6aeb:{c.instructions+=5;NFSU2_TR(0x5b6aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6aef:{NFSU2_TR(0x5b6aef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6af3:{NFSU2_TR(0x5b6af3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b6af7:{NFSU2_TR(0x5b6af7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6af9:{NFSU2_TR(0x5b6af9);
if(r1(R+518)){{goto L5b6b21;}}
}
B5b6afb:L5b6afb:{c.instructions+=9;NFSU2_TR(0x5b6afb);
__builtin_memmove((R+4),gp(0x86b3fc),4);
}
B5b6b01:{NFSU2_TR(0x5b6b01);
__builtin_memmove((R+8),gp(0x86b3f8),4);
}
B5b6b07:{NFSU2_TR(0x5b6b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6b0b:{NFSU2_TR(0x5b6b0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b0c:{NFSU2_TR(0x5b6b0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b0d:{NFSU2_TR(0x5b6b0d);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b12:{NFSU2_TR(0x5b6b12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b14:{NFSU2_TR(0x5b6b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b15:{NFSU2_TR(0x5b6b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6b1aull));
TAIL_STATIC(0x401790u,401);
}
B5b6b1a:L5b6b1a:{c.instructions+=2;NFSU2_TR(0x5b6b1a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6b1e:{NFSU2_TR(0x5b6b1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5b6b21:L5b6b21:{c.instructions+=4;NFSU2_TR(0x5b6b21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b22:{NFSU2_TR(0x5b6b22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6b2a:{NFSU2_TR(0x5b6b2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6b2b:{NFSU2_TR(0x5b6b2b);
{goto L5b6b30;}
}
B5b6b30:L5b6b30:{c.instructions+=5;NFSU2_TR(0x5b6b30);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5b6b37:{NFSU2_TR(0x5b6b37);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b6b39:{NFSU2_TR(0x5b6b39);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5b6b3a:{NFSU2_TR(0x5b6b3a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6b3c:{NFSU2_TR(0x5b6b3c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b6b96;}}
}
B5b6b3e:L5b6b3e:{c.instructions+=2;NFSU2_TR(0x5b6b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5b6b45:{NFSU2_TR(0x5b6b45);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6b48:L5b6b48:{c.instructions+=7;NFSU2_TR(0x5b6b48);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6b4c:{NFSU2_TR(0x5b6b4c);
__builtin_memmove((R+20),(R+8),4);
}
B5b6b4e:{NFSU2_TR(0x5b6b4e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6b50:{NFSU2_TR(0x5b6b50);
__builtin_memmove((R+12),(R+4),4);
}
B5b6b52:{NFSU2_TR(0x5b6b52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6b54:{NFSU2_TR(0x5b6b54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6b57:{NFSU2_TR(0x5b6b57);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b6b64;}}
}
B5b6b59:L5b6b59:{c.instructions+=5;NFSU2_TR(0x5b6b59);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b6b5a:{NFSU2_TR(0x5b6b5a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5b6b5d:{NFSU2_TR(0x5b6b5d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5b6b60:{NFSU2_TR(0x5b6b60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5b6b62:{NFSU2_TR(0x5b6b62);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6b48u);}goto L5b6b48;}}
}
B5b6b64:L5b6b64:{c.instructions+=2;NFSU2_TR(0x5b6b64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6b66:{NFSU2_TR(0x5b6b66);
if(r1(R+518)){{goto L5b6b8e;}}
}
B5b6b68:L5b6b68:{c.instructions+=12;NFSU2_TR(0x5b6b68);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6b6b:{NFSU2_TR(0x5b6b6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6b6f:{NFSU2_TR(0x5b6b6f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b6b71:{NFSU2_TR(0x5b6b71);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6b73:{NFSU2_TR(0x5b6b73);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6b77:{NFSU2_TR(0x5b6b77);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b6b79:{NFSU2_TR(0x5b6b79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b6b7b:{NFSU2_TR(0x5b6b7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b6b7d:{NFSU2_TR(0x5b6b7d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5b6b7f:{NFSU2_TR(0x5b6b7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6b81:{NFSU2_TR(0x5b6b81);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6b84:{NFSU2_TR(0x5b6b84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6b88;}}
}
B5b6b86:L5b6b86:{c.instructions+=1;NFSU2_TR(0x5b6b86);
__builtin_memmove((R+12),(R+20),4);
}
B5b6b88:L5b6b88:{c.instructions+=2;NFSU2_TR(0x5b6b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b6b8c:{NFSU2_TR(0x5b6b8c);
{goto L5b6bac;}
}
B5b6b8e:L5b6b8e:{c.instructions+=2;NFSU2_TR(0x5b6b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b6b92:{NFSU2_TR(0x5b6b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b6b96:L5b6b96:{c.instructions+=3;NFSU2_TR(0x5b6b96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b6b9d:{NFSU2_TR(0x5b6b9d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6b9f:{NFSU2_TR(0x5b6b9f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b6cb0;}}
}
B5b6ba5:L5b6ba5:{c.instructions+=1;NFSU2_TR(0x5b6ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x86b0ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5b6bac:L5b6bac:{c.instructions+=2;NFSU2_TR(0x5b6bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6bae:{NFSU2_TR(0x5b6bae);
if(r1(R+518)){{goto L5b6cac;}}
}
B5b6bb4:L5b6bb4:{c.instructions+=2;NFSU2_TR(0x5b6bb4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b6bb6:{NFSU2_TR(0x5b6bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6bbbull));
TAIL_STATIC(0x500070u,500);
}
B5b6bbb:L5b6bbb:{c.instructions+=2;NFSU2_TR(0x5b6bbb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6bbd:{NFSU2_TR(0x5b6bbd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b6c0b;}}
}
B5b6bbf:L5b6bbf:{c.instructions+=1;NFSU2_TR(0x5b6bbf);
}
B5b6bc0:L5b6bc0:{c.instructions+=2;NFSU2_TR(0x5b6bc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6bc1:{NFSU2_TR(0x5b6bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6bc6ull));
TAIL_STATIC(0x500080u,500);
}
B5b6bc6:L5b6bc6:{c.instructions+=3;NFSU2_TR(0x5b6bc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b6bc9:{NFSU2_TR(0x5b6bc9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6bcb:{NFSU2_TR(0x5b6bcb);
if(r1(R+518)){{goto L5b6c01;}}
}
B5b6bcd:L5b6bcd:{c.instructions+=4;NFSU2_TR(0x5b6bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6bd0:{NFSU2_TR(0x5b6bd0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b6bd2:{NFSU2_TR(0x5b6bd2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6bd4:{NFSU2_TR(0x5b6bd4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b6c01;}}
}
B5b6bd6:L5b6bd6:{c.instructions+=2;NFSU2_TR(0x5b6bd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b6bd9:{NFSU2_TR(0x5b6bd9);
__builtin_memmove((R+16),(R+16),4);
}
B5b6be0:L5b6be0:{c.instructions+=4;NFSU2_TR(0x5b6be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b6be2:{NFSU2_TR(0x5b6be2);
u8 U[15];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5b6bea:{NFSU2_TR(0x5b6bea);
u8 U[12];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b6bf1:{NFSU2_TR(0x5b6bf1);
if(r1(R+518)){{goto L5b6bf6;}}
}
B5b6bf3:L5b6bf3:{c.instructions+=1;NFSU2_TR(0x5b6bf3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5b6bf6:L5b6bf6:{c.instructions+=5;NFSU2_TR(0x5b6bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6bf9:{NFSU2_TR(0x5b6bf9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b6bfa:{NFSU2_TR(0x5b6bfa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5cull))));
}
B5b6bfd:{NFSU2_TR(0x5b6bfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5b6bff:{NFSU2_TR(0x5b6bff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6be0u);}goto L5b6be0;}}
}
B5b6c01:L5b6c01:{c.instructions+=2;NFSU2_TR(0x5b6c01);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b6c02:{NFSU2_TR(0x5b6c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6c07ull));
TAIL_STATIC(0x500070u,500);
}
B5b6c07:L5b6c07:{c.instructions+=2;NFSU2_TR(0x5b6c07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b6c09:{NFSU2_TR(0x5b6c09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6bc0u);}goto L5b6bc0;}}
}
B5b6c0b:L5b6c0b:{c.instructions+=2;NFSU2_TR(0x5b6c0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6c0d:{NFSU2_TR(0x5b6c0d);
__builtin_memmove((R+4),(R+4),4);
}
B5b6c10:L5b6c10:{c.instructions+=10;NFSU2_TR(0x5b6c10);
__builtin_memmove((R+8),(R+0),1);
}
B5b6c12:{NFSU2_TR(0x5b6c12);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x7ull))));
}
B5b6c15:{NFSU2_TR(0x5b6c15);
w1(R+4,u8(0x7ull));
}
B5b6c17:{NFSU2_TR(0x5b6c17);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B5b6c19:{NFSU2_TR(0x5b6c19);
__builtin_memmove((R+8),(R+0),4);
}
B5b6c1b:{NFSU2_TR(0x5b6c1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5b6c1e:{NFSU2_TR(0x5b6c1e);
u8 U[13];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5b6c22:{NFSU2_TR(0x5b6c22);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r1(U+0))));
}
B5b6c24:{NFSU2_TR(0x5b6c24);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6c27:{NFSU2_TR(0x5b6c27);
if(r1(R+518)){{goto L5b6c31;}}
}
B5b6c29:L5b6c29:{c.instructions+=1;NFSU2_TR(0x5b6c29);
u8 U[13];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5b6c31:L5b6c31:{c.instructions+=3;NFSU2_TR(0x5b6c31);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b6c32:{NFSU2_TR(0x5b6c32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x44ull))));
}
B5b6c35:{NFSU2_TR(0x5b6c35);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6c10u);}goto L5b6c10;}}
}
B5b6c37:L5b6c37:{c.instructions+=2;NFSU2_TR(0x5b6c37);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b6c3b:{NFSU2_TR(0x5b6c3b);
if(r1(R+518)){{goto L5b6cac;}}
}
B5b6c3d:L5b6c3d:{c.instructions+=5;NFSU2_TR(0x5b6c3d);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B5b6c43:{NFSU2_TR(0x5b6c43);
__builtin_memmove((R+8),gp(0x890108),4);
}
B5b6c49:{NFSU2_TR(0x5b6c49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6c4b:{NFSU2_TR(0x5b6c4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6c4d:{NFSU2_TR(0x5b6c4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c78;}}
}
B5b6c4f:L5b6c4f:{c.instructions+=2;NFSU2_TR(0x5b6c4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6c51:{NFSU2_TR(0x5b6c51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c78;}}
}
B5b6c53:L5b6c53:{c.instructions+=3;NFSU2_TR(0x5b6c53);
__builtin_memmove((R+24),gp(0x890114),4);
}
B5b6c59:{NFSU2_TR(0x5b6c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6c5b:{NFSU2_TR(0x5b6c5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c71;}}
}
B5b6c5d:L5b6c5d:{c.instructions+=3;NFSU2_TR(0x5b6c5d);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B5b6c63:{NFSU2_TR(0x5b6c63);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6c65:{NFSU2_TR(0x5b6c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c71;}}
}
B5b6c67:L5b6c67:{c.instructions+=3;NFSU2_TR(0x5b6c67);
__builtin_memmove((R+24),gp(0x890104),4);
}
B5b6c6d:{NFSU2_TR(0x5b6c6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6c6f:{NFSU2_TR(0x5b6c6f);
if(r1(R+518)){{goto L5b6c78;}}
}
B5b6c71:L5b6c71:{c.instructions+=2;NFSU2_TR(0x5b6c71);
w4(R+0,u32(0x3ull));
}
B5b6c76:{NFSU2_TR(0x5b6c76);
{goto L5b6ca0;}
}
B5b6c78:L5b6c78:{c.instructions+=3;NFSU2_TR(0x5b6c78);
__builtin_memmove((R+12),gp(0x89e7e3),1);
}
B5b6c7e:{NFSU2_TR(0x5b6c7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6c80:{NFSU2_TR(0x5b6c80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c8c;}}
}
B5b6c82:L5b6c82:{c.instructions+=3;NFSU2_TR(0x5b6c82);
__builtin_memmove((R+24),gp(0x89010c),4);
}
B5b6c88:{NFSU2_TR(0x5b6c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6c8a:{NFSU2_TR(0x5b6c8a);
if(r1(R+518)){{goto L5b6c93;}}
}
B5b6c8c:L5b6c8c:{c.instructions+=2;NFSU2_TR(0x5b6c8c);
w4(R+0,u32(0xaull));
}
B5b6c91:{NFSU2_TR(0x5b6c91);
{goto L5b6ca0;}
}
B5b6c93:L5b6c93:{c.instructions+=2;NFSU2_TR(0x5b6c93);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6c95:{NFSU2_TR(0x5b6c95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6c9b;}}
}
B5b6c97:L5b6c97:{c.instructions+=2;NFSU2_TR(0x5b6c97);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6c99:{NFSU2_TR(0x5b6c99);
if(r1(R+518)){{goto L5b6ca0;}}
}
B5b6c9b:L5b6c9b:{c.instructions+=1;NFSU2_TR(0x5b6c9b);
w4(R+0,u32(0x2ull));
}
B5b6ca0:L5b6ca0:{c.instructions+=5;NFSU2_TR(0x5b6ca0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ca2:{NFSU2_TR(0x5b6ca2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ca4:{NFSU2_TR(0x5b6ca4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ca5:{NFSU2_TR(0x5b6ca5);
__builtin_memmove((R+4),(R+20),4);
}
B5b6ca7:{NFSU2_TR(0x5b6ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6cacull));
TAIL_STATIC(0x5b4dc0u,5b4);
}
B5b6cac:L5b6cac:{c.instructions+=1;NFSU2_TR(0x5b6cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b6cb0:L5b6cb0:{c.instructions+=5;NFSU2_TR(0x5b6cb0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6cb4:{NFSU2_TR(0x5b6cb4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6cba:{NFSU2_TR(0x5b6cba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6cbc:{NFSU2_TR(0x5b6cbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6cbf:{NFSU2_TR(0x5b6cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6cef;}}
}
B5b6cc1:L5b6cc1:{c.instructions+=3;NFSU2_TR(0x5b6cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6cc5:{NFSU2_TR(0x5b6cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b6cc7:{NFSU2_TR(0x5b6cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6cef;}}
}
B5b6cc9:L5b6cc9:{c.instructions+=2;NFSU2_TR(0x5b6cc9);
__builtin_memmove((R+4),(R+20),4);
}
B5b6ccb:{NFSU2_TR(0x5b6ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6cd0ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B5b6cd0:L5b6cd0:{c.instructions+=6;NFSU2_TR(0x5b6cd0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b6cd4:{NFSU2_TR(0x5b6cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6cdc:{NFSU2_TR(0x5b6cdc);
{u32 ea_=u32(u32(8002172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6ce2:{NFSU2_TR(0x5b6ce2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b6ce6:{NFSU2_TR(0x5b6ce6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6cea:{NFSU2_TR(0x5b6cea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6b30u);}goto L5b6b30;}
}
B5b6cef:L5b6cef:{c.instructions+=2;NFSU2_TR(0x5b6cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b6cf0:{NFSU2_TR(0x5b6cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b6cf1:L5b6cf1:{c.instructions+=4;NFSU2_TR(0x5b6cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b6cf2:{NFSU2_TR(0x5b6cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b6cf3:{NFSU2_TR(0x5b6cf3);
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
B5b6cf6:{NFSU2_TR(0x5b6cf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6d00:L5b6d00:{c.instructions+=35;NFSU2_TR(0x5b6d00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d02:{NFSU2_TR(0x5b6d02);
u8 U[4];
w4(U+0,u32(0x779104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d07:{NFSU2_TR(0x5b6d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6d0d:{NFSU2_TR(0x5b6d0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d0e:{NFSU2_TR(0x5b6d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d15:{NFSU2_TR(0x5b6d15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d16:{NFSU2_TR(0x5b6d16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d17:{NFSU2_TR(0x5b6d17);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d18:{NFSU2_TR(0x5b6d18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d19:{NFSU2_TR(0x5b6d19);
__builtin_memmove((R+24),(R+4),4);
}
B5b6d1b:{NFSU2_TR(0x5b6d1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d1c:{NFSU2_TR(0x5b6d1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d20:{NFSU2_TR(0x5b6d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6d23:{NFSU2_TR(0x5b6d23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b6d25:{NFSU2_TR(0x5b6d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b6d27:{NFSU2_TR(0x5b6d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d2a:{NFSU2_TR(0x5b6d2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d2e:{NFSU2_TR(0x5b6d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d31:{NFSU2_TR(0x5b6d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x7a2428ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d38:{NFSU2_TR(0x5b6d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6d3c:{NFSU2_TR(0x5b6d3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6d40:{NFSU2_TR(0x5b6d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6d44:{NFSU2_TR(0x5b6d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b6d48:{NFSU2_TR(0x5b6d48);
u8 U[4];
w4(U+0,u32(0x7a2538ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b6d4e:{NFSU2_TR(0x5b6d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x7a252cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d55:{NFSU2_TR(0x5b6d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d58:{NFSU2_TR(0x5b6d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d5b:{NFSU2_TR(0x5b6d5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6d5e:{NFSU2_TR(0x5b6d5e);
u8 U[4];
w4(U+0,u32(0x7a2774ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d63:{NFSU2_TR(0x5b6d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d64:{NFSU2_TR(0x5b6d64);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6d69:{NFSU2_TR(0x5b6d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d6c:{NFSU2_TR(0x5b6d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d6f:{NFSU2_TR(0x5b6d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d72:{NFSU2_TR(0x5b6d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6d77ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b6d77:L5b6d77:{c.instructions+=3;NFSU2_TR(0x5b6d77);
__builtin_memmove((R+4),gp(0x86b2e0),4);
}
B5b6d7d:{NFSU2_TR(0x5b6d7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d7e:{NFSU2_TR(0x5b6d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6d83ull));
TAIL_STATIC(0x440e50u,440);
}
B5b6d83:L5b6d83:{c.instructions+=5;NFSU2_TR(0x5b6d83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b6d86:{NFSU2_TR(0x5b6d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6d8a:{NFSU2_TR(0x5b6d8a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6d8c:{NFSU2_TR(0x5b6d8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6d91:{NFSU2_TR(0x5b6d91);
if(r1(R+518)){{goto L5b6da6;}}
}
B5b6d93:L5b6d93:{c.instructions+=5;NFSU2_TR(0x5b6d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6d96:{NFSU2_TR(0x5b6d96);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x110ull))));
}
B5b6d9c:{NFSU2_TR(0x5b6d9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6d9d:{NFSU2_TR(0x5b6d9d);
__builtin_memmove((R+4),(R+0),4);
}
B5b6d9f:{NFSU2_TR(0x5b6d9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6da4ull));
TAIL_STATIC(0x5a7f30u,5a7);
}
B5b6da4:L5b6da4:{c.instructions+=1;NFSU2_TR(0x5b6da4);
{goto L5b6da8;}
}
B5b6da6:L5b6da6:{c.instructions+=1;NFSU2_TR(0x5b6da6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6da8:L5b6da8:{c.instructions+=4;NFSU2_TR(0x5b6da8);
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
B5b6daa:{NFSU2_TR(0x5b6daa);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6daf:{NFSU2_TR(0x5b6daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6db2:{NFSU2_TR(0x5b6db2);
if(r1(R+518)){{goto L5b6db9;}}
}
B5b6db4:L5b6db4:{c.instructions+=2;NFSU2_TR(0x5b6db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b6db7:{NFSU2_TR(0x5b6db7);
{goto L5b6dbb;}
}
B5b6db9:L5b6db9:{c.instructions+=1;NFSU2_TR(0x5b6db9);
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
B5b6dbb:L5b6dbb:{c.instructions+=9;NFSU2_TR(0x5b6dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6dbe:{NFSU2_TR(0x5b6dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b6dc1:{NFSU2_TR(0x5b6dc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b6dc3:{NFSU2_TR(0x5b6dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6dc6:{NFSU2_TR(0x5b6dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6dc9:{NFSU2_TR(0x5b6dc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b6dcb:{NFSU2_TR(0x5b6dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b6dcd:{NFSU2_TR(0x5b6dcd);
__builtin_memmove((R+4),(R+0),4);
}
B5b6dcf:{NFSU2_TR(0x5b6dcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6dd2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b6dd2:L5b6dd2:{c.instructions+=6;NFSU2_TR(0x5b6dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6dd5:{NFSU2_TR(0x5b6dd5);
s4(0x7fc800,u32(0x0ull));
}
B5b6ddf:{NFSU2_TR(0x5b6ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6de2:{NFSU2_TR(0x5b6de2);
__builtin_memmove((R+0),gp(0x86b2fc),4);
}
B5b6de7:{NFSU2_TR(0x5b6de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6de8:{NFSU2_TR(0x5b6de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6dedull));
TAIL_STATIC(0x440e50u,440);
}
B5b6ded:L5b6ded:{c.instructions+=5;NFSU2_TR(0x5b6ded);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b6df0:{NFSU2_TR(0x5b6df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6df4:{NFSU2_TR(0x5b6df4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6df6:{NFSU2_TR(0x5b6df6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6dfb:{NFSU2_TR(0x5b6dfb);
if(r1(R+518)){{goto L5b6e12;}}
}
B5b6dfd:L5b6dfd:{c.instructions+=8;NFSU2_TR(0x5b6dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6e00:{NFSU2_TR(0x5b6e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6e03:{NFSU2_TR(0x5b6e03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6e04:{NFSU2_TR(0x5b6e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6e07:{NFSU2_TR(0x5b6e07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6e08:{NFSU2_TR(0x5b6e08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6e09:{NFSU2_TR(0x5b6e09);
__builtin_memmove((R+4),(R+0),4);
}
B5b6e0b:{NFSU2_TR(0x5b6e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6e10ull));
TAIL_STATIC(0x5b0030u,5b0);
}
B5b6e10:L5b6e10:{c.instructions+=1;NFSU2_TR(0x5b6e10);
{goto L5b6e14;}
}
B5b6e12:L5b6e12:{c.instructions+=1;NFSU2_TR(0x5b6e12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6e14:L5b6e14:{c.instructions+=8;NFSU2_TR(0x5b6e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b6e18:{NFSU2_TR(0x5b6e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6e1b:{NFSU2_TR(0x5b6e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6e1e:{NFSU2_TR(0x5b6e1e);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6e23:{NFSU2_TR(0x5b6e23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6e25:{NFSU2_TR(0x5b6e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b6e28:{NFSU2_TR(0x5b6e28);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6e2d:{NFSU2_TR(0x5b6e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6e32ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6990u);}goto L5b6990;}
}
B5b6e32:L5b6e32:{c.instructions+=5;NFSU2_TR(0x5b6e32);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b6e36:{NFSU2_TR(0x5b6e36);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6e3c:{NFSU2_TR(0x5b6e3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6e3e:{NFSU2_TR(0x5b6e3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6e41:{NFSU2_TR(0x5b6e41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b6e91;}}
}
B5b6e43:L5b6e43:{c.instructions+=6;NFSU2_TR(0x5b6e43);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6e47:{NFSU2_TR(0x5b6e47);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6e4d:{NFSU2_TR(0x5b6e4d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b6e51:{NFSU2_TR(0x5b6e51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b6e53:{NFSU2_TR(0x5b6e53);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b6e56:{NFSU2_TR(0x5b6e56);
if(r1(R+514)){{goto L5b6e60;}}
}
B5b6e58:L5b6e58:{c.instructions+=2;NFSU2_TR(0x5b6e58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6e5a:{NFSU2_TR(0x5b6e5a);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6e60:L5b6e60:{c.instructions+=11;NFSU2_TR(0x5b6e60);
{u32 ea_=u32(u32(8001896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6e66:{NFSU2_TR(0x5b6e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6e69:{NFSU2_TR(0x5b6e69);
{u32 ea_=u32(u32(8001892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b6e6f:{NFSU2_TR(0x5b6e6f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5b6e71:{NFSU2_TR(0x5b6e71);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b6e77:{NFSU2_TR(0x5b6e77);
{u32 ea_=u32(u32(8001892u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b6e7d:{NFSU2_TR(0x5b6e7d);
{u32 ea_=u32(r4(R+0)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6e83:{NFSU2_TR(0x5b6e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6e86:{NFSU2_TR(0x5b6e86);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b6e88:{NFSU2_TR(0x5b6e88);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b6e8a:{NFSU2_TR(0x5b6e8a);
if(r1(R+518)){{goto L5b6e99;}}
}
B5b6e8c:L5b6e8c:{c.instructions+=2;NFSU2_TR(0x5b6e8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6e8f:{NFSU2_TR(0x5b6e8f);
{goto L5b6e9b;}
}
B5b6e91:L5b6e91:{c.instructions+=2;NFSU2_TR(0x5b6e91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6e97:{NFSU2_TR(0x5b6e97);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6e60u);}goto L5b6e60;}
}
B5b6e99:L5b6e99:{c.instructions+=1;NFSU2_TR(0x5b6e99);
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
B5b6e9b:L5b6e9b:{c.instructions+=8;NFSU2_TR(0x5b6e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b6e9e:{NFSU2_TR(0x5b6e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b6ea1:{NFSU2_TR(0x5b6ea1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b6ea3:{NFSU2_TR(0x5b6ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ea6:{NFSU2_TR(0x5b6ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ea9:{NFSU2_TR(0x5b6ea9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b6eab:{NFSU2_TR(0x5b6eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b6ead:{NFSU2_TR(0x5b6ead);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6eb0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b6eb0:L5b6eb0:{c.instructions+=4;NFSU2_TR(0x5b6eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6eb3:{NFSU2_TR(0x5b6eb3);
__builtin_memmove((R+4),gp(0x86b2f4),4);
}
B5b6eb9:{NFSU2_TR(0x5b6eb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6eba:{NFSU2_TR(0x5b6eba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6ebfull));
TAIL_STATIC(0x440e50u,440);
}
B5b6ebf:L5b6ebf:{c.instructions+=3;NFSU2_TR(0x5b6ebf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b6ec2:{NFSU2_TR(0x5b6ec2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6ec4:{NFSU2_TR(0x5b6ec4);
if(r1(R+518)){{goto L5b6eed;}}
}
B5b6ec6:L5b6ec6:{c.instructions+=12;NFSU2_TR(0x5b6ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6ec9:{NFSU2_TR(0x5b6ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6ecc:{NFSU2_TR(0x5b6ecc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x260ull))));
}
B5b6ed2:{NFSU2_TR(0x5b6ed2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b6ed4:{NFSU2_TR(0x5b6ed4);
w4(R+4,u32(0x3f800000ull));
}
B5b6ed9:{NFSU2_TR(0x5b6ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6edc:{NFSU2_TR(0x5b6edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6edf:{NFSU2_TR(0x5b6edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ee2:{NFSU2_TR(0x5b6ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ee5:{NFSU2_TR(0x5b6ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ee8:{NFSU2_TR(0x5b6ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6eeb:{NFSU2_TR(0x5b6eeb);
{goto L5b6eef;}
}
B5b6eed:L5b6eed:{c.instructions+=1;NFSU2_TR(0x5b6eed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6eef:L5b6eef:{c.instructions+=6;NFSU2_TR(0x5b6eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ef2:{NFSU2_TR(0x5b6ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6ef5:{NFSU2_TR(0x5b6ef5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b6efb:{NFSU2_TR(0x5b6efb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b6efd:{NFSU2_TR(0x5b6efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6f00:{NFSU2_TR(0x5b6f00);
if(r1(R+518)){{goto L5b6f0a;}}
}
B5b6f02:L5b6f02:{c.instructions+=2;NFSU2_TR(0x5b6f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6f08:{NFSU2_TR(0x5b6f08);
{goto L5b6f19;}
}
B5b6f0a:L5b6f0a:{c.instructions+=3;NFSU2_TR(0x5b6f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6f0d:{NFSU2_TR(0x5b6f0d);
{u32 ea_=u32(r4(R+8)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b6f13:{NFSU2_TR(0x5b6f13);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b6f19:L5b6f19:{c.instructions+=2;NFSU2_TR(0x5b6f19);
__builtin_memmove((R+4),(R+24),4);
}
B5b6f1b:{NFSU2_TR(0x5b6f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6f20ull));
TAIL_STATIC(0x5a29a0u,5a2);
}
B5b6f20:L5b6f20:{c.instructions+=5;NFSU2_TR(0x5b6f20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6f23:{NFSU2_TR(0x5b6f23);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b6f25:{NFSU2_TR(0x5b6f25);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b6f27:{NFSU2_TR(0x5b6f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6f2b:{NFSU2_TR(0x5b6f2b);
{goto L5b6f30;}
}
B5b6f30:L5b6f30:{c.instructions+=3;NFSU2_TR(0x5b6f30);
__builtin_memmove((R+4),gp(0x86b2e8),4);
}
B5b6f36:{NFSU2_TR(0x5b6f36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6f37:{NFSU2_TR(0x5b6f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6f3cull));
TAIL_STATIC(0x440e50u,440);
}
B5b6f3c:L5b6f3c:{c.instructions+=6;NFSU2_TR(0x5b6f3c);
__builtin_memmove((R+4),(R+0),4);
}
B5b6f3e:{NFSU2_TR(0x5b6f3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b6f41:{NFSU2_TR(0x5b6f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6f45:{NFSU2_TR(0x5b6f45);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b6f47:{NFSU2_TR(0x5b6f47);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6f4c:{NFSU2_TR(0x5b6f4c);
if(r1(R+518)){{goto L5b6f7f;}}
}
B5b6f4e:L5b6f4e:{c.instructions+=16;NFSU2_TR(0x5b6f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b6f51:{NFSU2_TR(0x5b6f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b6f54:{NFSU2_TR(0x5b6f54);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B5b6f57:{NFSU2_TR(0x5b6f57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6f58:{NFSU2_TR(0x5b6f58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x270ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6f5e:{NFSU2_TR(0x5b6f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6f5f:{NFSU2_TR(0x5b6f5f);
__builtin_memmove((R+0),(R+12),4);
}
B5b6f61:{NFSU2_TR(0x5b6f61);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5b6f62:{NFSU2_TR(0x5b6f62);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5b6f64:{NFSU2_TR(0x5b6f64);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5b6f66:{NFSU2_TR(0x5b6f66);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b6f69:{NFSU2_TR(0x5b6f69);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b6f70:{NFSU2_TR(0x5b6f70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6f71:{NFSU2_TR(0x5b6f71);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5b6f75:{NFSU2_TR(0x5b6f75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6f76:{NFSU2_TR(0x5b6f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6f7bull));
TAIL_STATIC(0x5a8160u,5a8);
}
B5b6f7b:L5b6f7b:{c.instructions+=2;NFSU2_TR(0x5b6f7b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b6f7d:{NFSU2_TR(0x5b6f7d);
{goto L5b6f81;}
}
B5b6f7f:L5b6f7f:{c.instructions+=1;NFSU2_TR(0x5b6f7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b6f81:L5b6f81:{c.instructions+=10;NFSU2_TR(0x5b6f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6f85:{NFSU2_TR(0x5b6f85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b6f87:{NFSU2_TR(0x5b6f87);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5b6f8a:{NFSU2_TR(0x5b6f8a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B5b6f8d:{NFSU2_TR(0x5b6f8d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b6f8e:{NFSU2_TR(0x5b6f8e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b6f94:{NFSU2_TR(0x5b6f94);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b6f99:{NFSU2_TR(0x5b6f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6f9c:{NFSU2_TR(0x5b6f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6fa0:{NFSU2_TR(0x5b6fa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b6f30u);}goto L5b6f30;}}
}
B5b6fa2:L5b6fa2:{c.instructions+=2;NFSU2_TR(0x5b6fa2);
__builtin_memmove((R+4),(R+24),4);
}
B5b6fa4:{NFSU2_TR(0x5b6fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b6fa9ull));
TAIL_STATIC(0x5a2a60u,5a2);
}
B5b6fa9:L5b6fa9:{c.instructions+=9;NFSU2_TR(0x5b6fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6fad:{NFSU2_TR(0x5b6fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b6fae:{NFSU2_TR(0x5b6fae);
__builtin_memmove((R+0),(R+24),4);
}
B5b6fb0:{NFSU2_TR(0x5b6fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b6fb1:{NFSU2_TR(0x5b6fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b6fb2:{NFSU2_TR(0x5b6fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b6fb3:{NFSU2_TR(0x5b6fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6fba:{NFSU2_TR(0x5b6fba);
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
B5b6fbd:{NFSU2_TR(0x5b6fbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b6fc0:L5b6fc0:{c.instructions+=23;NFSU2_TR(0x5b6fc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fc1:{NFSU2_TR(0x5b6fc1);
__builtin_memmove((R+20),(R+16),4);
}
B5b6fc3:{NFSU2_TR(0x5b6fc3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fc5:{NFSU2_TR(0x5b6fc5);
u8 U[4];
w4(U+0,u32(0x779139ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fca:{NFSU2_TR(0x5b6fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6fd0:{NFSU2_TR(0x5b6fd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fd1:{NFSU2_TR(0x5b6fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6fd8:{NFSU2_TR(0x5b6fd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fd9:{NFSU2_TR(0x5b6fd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fda:{NFSU2_TR(0x5b6fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6fdb:{NFSU2_TR(0x5b6fdb);
__builtin_memmove((R+24),(R+4),4);
}
B5b6fdd:{NFSU2_TR(0x5b6fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b6fe0:{NFSU2_TR(0x5b6fe0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b6fe2:{NFSU2_TR(0x5b6fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6fe5:{NFSU2_TR(0x5b6fe5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b6fe7:{NFSU2_TR(0x5b6fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6fea:{NFSU2_TR(0x5b6fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x7a2428ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ff1:{NFSU2_TR(0x5b6ff1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b6ff2:{NFSU2_TR(0x5b6ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ff5:{NFSU2_TR(0x5b6ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b6ff8:{NFSU2_TR(0x5b6ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b6ffb:{NFSU2_TR(0x5b6ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b6ffe:{NFSU2_TR(0x5b6ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x5b7001u,5b7);
}
XIT:NFSU2_TR_EXIT(0x5b6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
