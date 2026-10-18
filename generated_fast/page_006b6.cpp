#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6b3(u8* __restrict R,Cpu& c);
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 body_6b5(u8* __restrict R,Cpu& c);
u32 body_6b7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b6(u8* __restrict R,Cpu& c);
u32 page_6b6(Cpu& c){return body_6b6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b6002:goto L6b6002;
case 0x6b6005:c.instructions+=4;goto B6b6005;
case 0x6b6007:c.instructions+=3;goto B6b6007;
case 0x6b6009:c.instructions+=2;goto B6b6009;
case 0x6b600c:c.instructions+=1;goto B6b600c;
case 0x6b600e:goto L6b600e;
case 0x6b6011:c.instructions+=1;goto B6b6011;
case 0x6b6014:goto L6b6014;
case 0x6b6016:c.instructions+=3;goto B6b6016;
case 0x6b6019:c.instructions+=2;goto B6b6019;
case 0x6b601d:c.instructions+=1;goto B6b601d;
case 0x6b601f:goto L6b601f;
case 0x6b6026:c.instructions+=1;goto B6b6026;
case 0x6b6028:goto L6b6028;
case 0x6b602b:c.instructions+=1;goto B6b602b;
case 0x6b6031:goto L6b6031;
case 0x6b6034:c.instructions+=1;goto B6b6034;
case 0x6b603a:goto L6b603a;
case 0x6b6040:goto L6b6040;
case 0x6b6043:c.instructions+=2;goto B6b6043;
case 0x6b6046:c.instructions+=1;goto B6b6046;
case 0x6b604b:goto L6b604b;
case 0x6b604d:c.instructions+=1;goto B6b604d;
case 0x6b604e:goto L6b604e;
case 0x6b6051:c.instructions+=2;goto B6b6051;
case 0x6b6052:c.instructions+=1;goto B6b6052;
case 0x6b6054:goto L6b6054;
case 0x6b6056:c.instructions+=1;goto B6b6056;
case 0x6b6058:goto L6b6058;
case 0x6b605c:c.instructions+=1;goto B6b605c;
case 0x6b6062:goto L6b6062;
case 0x6b6067:c.instructions+=2;goto B6b6067;
case 0x6b606c:c.instructions+=1;goto B6b606c;
case 0x6b6071:goto L6b6071;
case 0x6b6077:c.instructions+=15;goto B6b6077;
case 0x6b607a:c.instructions+=14;goto B6b607a;
case 0x6b607d:c.instructions+=13;goto B6b607d;
case 0x6b6081:c.instructions+=12;goto B6b6081;
case 0x6b6084:c.instructions+=11;goto B6b6084;
case 0x6b6085:c.instructions+=10;goto B6b6085;
case 0x6b608b:c.instructions+=9;goto B6b608b;
case 0x6b608c:c.instructions+=8;goto B6b608c;
case 0x6b608f:c.instructions+=7;goto B6b608f;
case 0x6b6092:c.instructions+=6;goto B6b6092;
case 0x6b6095:c.instructions+=5;goto B6b6095;
case 0x6b609b:c.instructions+=4;goto B6b609b;
case 0x6b609c:c.instructions+=3;goto B6b609c;
case 0x6b609d:c.instructions+=2;goto B6b609d;
case 0x6b609f:c.instructions+=1;goto B6b609f;
case 0x6b60a4:goto L6b60a4;
case 0x6b60aa:c.instructions+=6;goto B6b60aa;
case 0x6b60ae:c.instructions+=5;goto B6b60ae;
case 0x6b60b2:c.instructions+=4;goto B6b60b2;
case 0x6b60b7:c.instructions+=3;goto B6b60b7;
case 0x6b60bc:c.instructions+=2;goto B6b60bc;
case 0x6b60bf:c.instructions+=1;goto B6b60bf;
case 0x6b60c1:goto L6b60c1;
case 0x6b60c6:c.instructions+=1;goto B6b60c6;
case 0x6b60c8:goto L6b60c8;
case 0x6b60ce:c.instructions+=3;goto B6b60ce;
case 0x6b60d1:c.instructions+=2;goto B6b60d1;
case 0x6b60d7:c.instructions+=1;goto B6b60d7;
case 0x6b60d9:goto L6b60d9;
case 0x6b60dc:c.instructions+=6;goto B6b60dc;
case 0x6b60de:c.instructions+=5;goto B6b60de;
case 0x6b60e1:c.instructions+=4;goto B6b60e1;
case 0x6b60e4:c.instructions+=3;goto B6b60e4;
case 0x6b60ea:c.instructions+=2;goto B6b60ea;
case 0x6b60ed:c.instructions+=1;goto B6b60ed;
case 0x6b60ef:goto L6b60ef;
case 0x6b60f2:c.instructions+=1;goto B6b60f2;
case 0x6b60f5:goto L6b60f5;
case 0x6b60f8:c.instructions+=3;goto B6b60f8;
case 0x6b60fb:c.instructions+=2;goto B6b60fb;
case 0x6b60fe:c.instructions+=1;goto B6b60fe;
case 0x6b6100:goto L6b6100;
case 0x6b6103:c.instructions+=1;goto B6b6103;
case 0x6b6106:goto L6b6106;
case 0x6b6108:c.instructions+=4;goto B6b6108;
case 0x6b610b:c.instructions+=3;goto B6b610b;
case 0x6b610e:c.instructions+=2;goto B6b610e;
case 0x6b6111:c.instructions+=1;goto B6b6111;
case 0x6b6113:goto L6b6113;
case 0x6b6119:c.instructions+=3;goto B6b6119;
case 0x6b611c:c.instructions+=2;goto B6b611c;
case 0x6b611e:c.instructions+=1;goto B6b611e;
case 0x6b6120:goto L6b6120;
case 0x6b6126:c.instructions+=3;goto B6b6126;
case 0x6b6129:c.instructions+=2;goto B6b6129;
case 0x6b612c:c.instructions+=1;goto B6b612c;
case 0x6b612e:goto L6b612e;
case 0x6b6131:c.instructions+=3;goto B6b6131;
case 0x6b6133:c.instructions+=2;goto B6b6133;
case 0x6b6135:c.instructions+=1;goto B6b6135;
case 0x6b6137:goto L6b6137;
case 0x6b6139:c.instructions+=4;goto B6b6139;
case 0x6b613b:c.instructions+=3;goto B6b613b;
case 0x6b6141:c.instructions+=2;goto B6b6141;
case 0x6b6147:c.instructions+=1;goto B6b6147;
case 0x6b6149:goto L6b6149;
case 0x6b614b:c.instructions+=2;goto B6b614b;
case 0x6b6151:c.instructions+=1;goto B6b6151;
case 0x6b6153:goto L6b6153;
case 0x6b6156:c.instructions+=3;goto B6b6156;
case 0x6b615d:c.instructions+=2;goto B6b615d;
case 0x6b6160:c.instructions+=1;goto B6b6160;
case 0x6b6163:goto L6b6163;
case 0x6b6165:c.instructions+=1;goto B6b6165;
case 0x6b6167:goto L6b6167;
case 0x6b616e:goto L6b616e;
case 0x6b6171:c.instructions+=2;goto B6b6171;
case 0x6b6174:c.instructions+=1;goto B6b6174;
case 0x6b6176:goto L6b6176;
case 0x6b617a:c.instructions+=3;goto B6b617a;
case 0x6b617c:c.instructions+=2;goto B6b617c;
case 0x6b617d:c.instructions+=1;goto B6b617d;
case 0x6b617f:goto L6b617f;
case 0x6b6182:c.instructions+=3;goto B6b6182;
case 0x6b6185:c.instructions+=2;goto B6b6185;
case 0x6b6188:c.instructions+=1;goto B6b6188;
case 0x6b618a:goto L6b618a;
case 0x6b618d:c.instructions+=1;goto B6b618d;
case 0x6b618f:goto L6b618f;
case 0x6b6195:c.instructions+=2;goto B6b6195;
case 0x6b619c:c.instructions+=1;goto B6b619c;
case 0x6b619e:goto L6b619e;
case 0x6b61a1:goto L6b61a1;
case 0x6b61a7:c.instructions+=9;goto B6b61a7;
case 0x6b61a9:c.instructions+=8;goto B6b61a9;
case 0x6b61ac:c.instructions+=7;goto B6b61ac;
case 0x6b61af:c.instructions+=6;goto B6b61af;
case 0x6b61b1:c.instructions+=5;goto B6b61b1;
case 0x6b61b3:c.instructions+=4;goto B6b61b3;
case 0x6b61b9:c.instructions+=3;goto B6b61b9;
case 0x6b61bc:c.instructions+=2;goto B6b61bc;
case 0x6b61bf:c.instructions+=1;goto B6b61bf;
case 0x6b61c1:goto L6b61c1;
case 0x6b61c3:c.instructions+=3;goto B6b61c3;
case 0x6b61c9:c.instructions+=2;goto B6b61c9;
case 0x6b61cf:c.instructions+=1;goto B6b61cf;
case 0x6b61d1:goto L6b61d1;
case 0x6b61d5:c.instructions+=1;goto B6b61d5;
case 0x6b61d7:goto L6b61d7;
case 0x6b61da:c.instructions+=4;goto B6b61da;
case 0x6b61e0:c.instructions+=3;goto B6b61e0;
case 0x6b61e3:c.instructions+=2;goto B6b61e3;
case 0x6b61e7:c.instructions+=1;goto B6b61e7;
case 0x6b61e9:goto L6b61e9;
case 0x6b61ec:c.instructions+=1;goto B6b61ec;
case 0x6b61ee:goto L6b61ee;
case 0x6b61f1:c.instructions+=4;goto B6b61f1;
case 0x6b61f3:c.instructions+=3;goto B6b61f3;
case 0x6b61f4:c.instructions+=2;goto B6b61f4;
case 0x6b61f7:c.instructions+=1;goto B6b61f7;
case 0x6b61fd:goto L6b61fd;
case 0x6b6201:c.instructions+=1;goto B6b6201;
case 0x6b6203:goto L6b6203;
case 0x6b6205:c.instructions+=1;goto B6b6205;
case 0x6b6207:goto L6b6207;
case 0x6b6208:c.instructions+=4;goto B6b6208;
case 0x6b620b:c.instructions+=3;goto B6b620b;
case 0x6b620e:c.instructions+=2;goto B6b620e;
case 0x6b6211:c.instructions+=1;goto B6b6211;
case 0x6b6213:goto L6b6213;
case 0x6b6216:c.instructions+=1;goto B6b6216;
case 0x6b6218:goto L6b6218;
case 0x6b621a:goto L6b621a;
case 0x6b621d:goto L6b621d;
case 0x6b621f:c.instructions+=4;goto B6b621f;
case 0x6b6222:c.instructions+=3;goto B6b6222;
case 0x6b6225:c.instructions+=2;goto B6b6225;
case 0x6b6227:c.instructions+=1;goto B6b6227;
case 0x6b6229:goto L6b6229;
case 0x6b622d:c.instructions+=1;goto B6b622d;
case 0x6b622f:goto L6b622f;
case 0x6b6232:c.instructions+=1;goto B6b6232;
case 0x6b6234:goto L6b6234;
case 0x6b6237:c.instructions+=1;goto B6b6237;
case 0x6b6239:goto L6b6239;
case 0x6b623a:goto L6b623a;
case 0x6b623d:c.instructions+=2;goto B6b623d;
case 0x6b6240:c.instructions+=1;goto B6b6240;
case 0x6b6242:goto L6b6242;
case 0x6b6245:goto L6b6245;
case 0x6b6247:c.instructions+=2;goto B6b6247;
case 0x6b6249:c.instructions+=1;goto B6b6249;
case 0x6b624b:goto L6b624b;
case 0x6b624e:c.instructions+=1;goto B6b624e;
case 0x6b6250:goto L6b6250;
case 0x6b6256:c.instructions+=1;goto B6b6256;
case 0x6b625c:goto L6b625c;
case 0x6b625f:c.instructions+=1;goto B6b625f;
case 0x6b6265:goto L6b6265;
case 0x6b626b:c.instructions+=3;goto B6b626b;
case 0x6b6271:c.instructions+=2;goto B6b6271;
case 0x6b6274:c.instructions+=1;goto B6b6274;
case 0x6b627a:goto L6b627a;
case 0x6b6281:c.instructions+=1;goto B6b6281;
case 0x6b6287:goto L6b6287;
case 0x6b628b:c.instructions+=1;goto B6b628b;
case 0x6b6291:goto L6b6291;
case 0x6b6294:c.instructions+=18;goto B6b6294;
case 0x6b629a:c.instructions+=17;goto B6b629a;
case 0x6b629d:c.instructions+=16;goto B6b629d;
case 0x6b629e:c.instructions+=15;goto B6b629e;
case 0x6b62a0:c.instructions+=14;goto B6b62a0;
case 0x6b62a3:c.instructions+=13;goto B6b62a3;
case 0x6b62a4:c.instructions+=12;goto B6b62a4;
case 0x6b62a7:c.instructions+=11;goto B6b62a7;
case 0x6b62aa:c.instructions+=10;goto B6b62aa;
case 0x6b62ad:c.instructions+=9;goto B6b62ad;
case 0x6b62ae:c.instructions+=8;goto B6b62ae;
case 0x6b62b1:c.instructions+=7;goto B6b62b1;
case 0x6b62b4:c.instructions+=6;goto B6b62b4;
case 0x6b62b7:c.instructions+=5;goto B6b62b7;
case 0x6b62bd:c.instructions+=4;goto B6b62bd;
case 0x6b62bf:c.instructions+=3;goto B6b62bf;
case 0x6b62c0:c.instructions+=2;goto B6b62c0;
case 0x6b62c1:c.instructions+=1;goto B6b62c1;
case 0x6b62c6:goto L6b62c6;
case 0x6b62c8:c.instructions+=4;goto B6b62c8;
case 0x6b62cb:c.instructions+=3;goto B6b62cb;
case 0x6b62cd:c.instructions+=2;goto B6b62cd;
case 0x6b62ce:c.instructions+=1;goto B6b62ce;
case 0x6b62d0:goto L6b62d0;
case 0x6b62d3:goto L6b62d3;
case 0x6b62d6:c.instructions+=1;goto B6b62d6;
case 0x6b62d8:goto L6b62d8;
case 0x6b62df:c.instructions+=1;goto B6b62df;
case 0x6b62e2:goto L6b62e2;
case 0x6b62e4:goto L6b62e4;
case 0x6b62e7:goto L6b62e7;
case 0x6b62e9:c.instructions+=1;goto B6b62e9;
case 0x6b62ee:goto L6b62ee;
case 0x6b62f0:c.instructions+=1;goto B6b62f0;
case 0x6b62f2:goto L6b62f2;
case 0x6b62f4:c.instructions+=1;goto B6b62f4;
case 0x6b62f9:goto L6b62f9;
case 0x6b62fc:c.instructions+=1;goto B6b62fc;
case 0x6b62fe:goto L6b62fe;
case 0x6b6301:goto L6b6301;
case 0x6b6304:c.instructions+=1;goto B6b6304;
case 0x6b630a:goto L6b630a;
case 0x6b6310:c.instructions+=7;goto B6b6310;
case 0x6b6313:c.instructions+=6;goto B6b6313;
case 0x6b6316:c.instructions+=5;goto B6b6316;
case 0x6b6317:c.instructions+=4;goto B6b6317;
case 0x6b631a:c.instructions+=3;goto B6b631a;
case 0x6b631d:c.instructions+=2;goto B6b631d;
case 0x6b631f:c.instructions+=1;goto B6b631f;
case 0x6b6324:goto L6b6324;
case 0x6b6326:c.instructions+=1;goto B6b6326;
case 0x6b632c:goto L6b632c;
case 0x6b6332:c.instructions+=3;goto B6b6332;
case 0x6b6335:c.instructions+=2;goto B6b6335;
case 0x6b6338:c.instructions+=1;goto B6b6338;
case 0x6b633d:goto L6b633d;
case 0x6b633f:c.instructions+=1;goto B6b633f;
case 0x6b6345:goto L6b6345;
case 0x6b6348:c.instructions+=10;goto B6b6348;
case 0x6b634b:c.instructions+=9;goto B6b634b;
case 0x6b634e:c.instructions+=8;goto B6b634e;
case 0x6b6354:c.instructions+=7;goto B6b6354;
case 0x6b6357:c.instructions+=6;goto B6b6357;
case 0x6b635a:c.instructions+=5;goto B6b635a;
case 0x6b635c:c.instructions+=4;goto B6b635c;
case 0x6b635f:c.instructions+=3;goto B6b635f;
case 0x6b6362:c.instructions+=2;goto B6b6362;
case 0x6b6365:c.instructions+=1;goto B6b6365;
case 0x6b6368:goto L6b6368;
case 0x6b636a:goto L6b636a;
case 0x6b636c:c.instructions+=1;goto B6b636c;
case 0x6b636f:goto L6b636f;
case 0x6b6371:goto L6b6371;
case 0x6b6377:c.instructions+=6;goto B6b6377;
case 0x6b637a:c.instructions+=5;goto B6b637a;
case 0x6b637d:c.instructions+=4;goto B6b637d;
case 0x6b6380:c.instructions+=3;goto B6b6380;
case 0x6b6383:c.instructions+=2;goto B6b6383;
case 0x6b6386:c.instructions+=1;goto B6b6386;
case 0x6b6389:goto L6b6389;
case 0x6b638b:goto L6b638b;
case 0x6b6391:c.instructions+=4;goto B6b6391;
case 0x6b6394:c.instructions+=3;goto B6b6394;
case 0x6b6395:c.instructions+=2;goto B6b6395;
case 0x6b6397:c.instructions+=1;goto B6b6397;
case 0x6b639c:goto L6b639c;
case 0x6b639e:c.instructions+=1;goto B6b639e;
case 0x6b63a4:goto L6b63a4;
case 0x6b63a6:c.instructions+=5;goto B6b63a6;
case 0x6b63a8:c.instructions+=4;goto B6b63a8;
case 0x6b63ab:c.instructions+=3;goto B6b63ab;
case 0x6b63ae:c.instructions+=2;goto B6b63ae;
case 0x6b63b1:c.instructions+=1;goto B6b63b1;
case 0x6b63b7:goto L6b63b7;
case 0x6b63ba:c.instructions+=2;goto B6b63ba;
case 0x6b63bd:c.instructions+=1;goto B6b63bd;
case 0x6b63c3:goto L6b63c3;
case 0x6b63c6:c.instructions+=6;goto B6b63c6;
case 0x6b63c9:c.instructions+=5;goto B6b63c9;
case 0x6b63cc:c.instructions+=4;goto B6b63cc;
case 0x6b63cf:c.instructions+=3;goto B6b63cf;
case 0x6b63d3:c.instructions+=2;goto B6b63d3;
case 0x6b63d5:c.instructions+=1;goto B6b63d5;
case 0x6b63d7:goto L6b63d7;
case 0x6b63da:c.instructions+=1;goto B6b63da;
case 0x6b63e0:goto L6b63e0;
case 0x6b63e3:c.instructions+=1;goto B6b63e3;
case 0x6b63e5:goto L6b63e5;
case 0x6b63e6:c.instructions+=8;goto B6b63e6;
case 0x6b63e8:c.instructions+=7;goto B6b63e8;
case 0x6b63e9:c.instructions+=6;goto B6b63e9;
case 0x6b63ec:c.instructions+=5;goto B6b63ec;
case 0x6b63ed:c.instructions+=4;goto B6b63ed;
case 0x6b63f0:c.instructions+=3;goto B6b63f0;
case 0x6b63f2:c.instructions+=2;goto B6b63f2;
case 0x6b63f8:c.instructions+=1;goto B6b63f8;
case 0x6b63fd:goto L6b63fd;
case 0x6b6400:c.instructions+=6;goto B6b6400;
case 0x6b6403:c.instructions+=5;goto B6b6403;
case 0x6b6406:c.instructions+=4;goto B6b6406;
case 0x6b6409:c.instructions+=3;goto B6b6409;
case 0x6b640c:c.instructions+=2;goto B6b640c;
case 0x6b6410:c.instructions+=1;goto B6b6410;
case 0x6b6416:goto L6b6416;
case 0x6b6419:c.instructions+=15;goto B6b6419;
case 0x6b641c:c.instructions+=14;goto B6b641c;
case 0x6b641f:c.instructions+=13;goto B6b641f;
case 0x6b6422:c.instructions+=12;goto B6b6422;
case 0x6b6425:c.instructions+=11;goto B6b6425;
case 0x6b6428:c.instructions+=10;goto B6b6428;
case 0x6b642b:c.instructions+=9;goto B6b642b;
case 0x6b642e:c.instructions+=8;goto B6b642e;
case 0x6b6431:c.instructions+=7;goto B6b6431;
case 0x6b6434:c.instructions+=6;goto B6b6434;
case 0x6b6437:c.instructions+=5;goto B6b6437;
case 0x6b643a:c.instructions+=4;goto B6b643a;
case 0x6b643b:c.instructions+=3;goto B6b643b;
case 0x6b643e:c.instructions+=2;goto B6b643e;
case 0x6b6441:c.instructions+=1;goto B6b6441;
case 0x6b6443:goto L6b6443;
case 0x6b6446:c.instructions+=3;goto B6b6446;
case 0x6b6447:c.instructions+=2;goto B6b6447;
case 0x6b644a:c.instructions+=1;goto B6b644a;
case 0x6b644f:goto L6b644f;
case 0x6b6455:c.instructions+=4;goto B6b6455;
case 0x6b6458:c.instructions+=3;goto B6b6458;
case 0x6b645b:c.instructions+=2;goto B6b645b;
case 0x6b645d:c.instructions+=1;goto B6b645d;
case 0x6b6463:goto L6b6463;
case 0x6b6465:c.instructions+=2;goto B6b6465;
case 0x6b6467:c.instructions+=1;goto B6b6467;
case 0x6b646d:goto L6b646d;
case 0x6b6472:c.instructions+=9;goto B6b6472;
case 0x6b6474:c.instructions+=8;goto B6b6474;
case 0x6b6477:c.instructions+=7;goto B6b6477;
case 0x6b6479:c.instructions+=6;goto B6b6479;
case 0x6b647b:c.instructions+=5;goto B6b647b;
case 0x6b647f:c.instructions+=4;goto B6b647f;
case 0x6b6482:c.instructions+=3;goto B6b6482;
case 0x6b6484:c.instructions+=2;goto B6b6484;
case 0x6b6487:c.instructions+=1;goto B6b6487;
case 0x6b648d:goto L6b648d;
case 0x6b6491:goto L6b6491;
case 0x6b6494:c.instructions+=1;goto B6b6494;
case 0x6b6496:goto L6b6496;
case 0x6b6498:c.instructions+=2;goto B6b6498;
case 0x6b649a:c.instructions+=1;goto B6b649a;
case 0x6b64a0:goto L6b64a0;
case 0x6b64a3:goto L6b64a3;
case 0x6b64a6:c.instructions+=4;goto B6b64a6;
case 0x6b64a9:c.instructions+=3;goto B6b64a9;
case 0x6b64ac:c.instructions+=2;goto B6b64ac;
case 0x6b64ae:c.instructions+=1;goto B6b64ae;
case 0x6b64b0:goto L6b64b0;
case 0x6b64b3:c.instructions+=6;goto B6b64b3;
case 0x6b64b6:c.instructions+=5;goto B6b64b6;
case 0x6b64b9:c.instructions+=4;goto B6b64b9;
case 0x6b64bb:c.instructions+=3;goto B6b64bb;
case 0x6b64be:c.instructions+=2;goto B6b64be;
case 0x6b64c1:c.instructions+=1;goto B6b64c1;
case 0x6b64c3:goto L6b64c3;
case 0x6b64c6:goto L6b64c6;
case 0x6b64c9:c.instructions+=4;goto B6b64c9;
case 0x6b64ca:c.instructions+=3;goto B6b64ca;
case 0x6b64cd:c.instructions+=2;goto B6b64cd;
case 0x6b64cf:c.instructions+=1;goto B6b64cf;
case 0x6b64d1:goto L6b64d1;
case 0x6b64d3:goto L6b64d3;
case 0x6b64d6:c.instructions+=1;goto B6b64d6;
case 0x6b64d8:goto L6b64d8;
case 0x6b64db:c.instructions+=5;goto B6b64db;
case 0x6b64de:c.instructions+=4;goto B6b64de;
case 0x6b64e1:c.instructions+=3;goto B6b64e1;
case 0x6b64e4:c.instructions+=2;goto B6b64e4;
case 0x6b64e6:c.instructions+=1;goto B6b64e6;
case 0x6b64e8:goto L6b64e8;
case 0x6b64ec:c.instructions+=3;goto B6b64ec;
case 0x6b64ef:c.instructions+=2;goto B6b64ef;
case 0x6b64f2:c.instructions+=1;goto B6b64f2;
case 0x6b64f4:goto L6b64f4;
case 0x6b64f7:c.instructions+=1;goto B6b64f7;
case 0x6b64f9:goto L6b64f9;
case 0x6b64fb:goto L6b64fb;
case 0x6b64fd:c.instructions+=3;goto B6b64fd;
case 0x6b6500:c.instructions+=2;goto B6b6500;
case 0x6b6503:c.instructions+=1;goto B6b6503;
case 0x6b6505:goto L6b6505;
case 0x6b6508:c.instructions+=2;goto B6b6508;
case 0x6b650b:c.instructions+=1;goto B6b650b;
case 0x6b650d:goto L6b650d;
case 0x6b650f:c.instructions+=2;goto B6b650f;
case 0x6b6511:c.instructions+=1;goto B6b6511;
case 0x6b6513:goto L6b6513;
case 0x6b6516:goto L6b6516;
case 0x6b6519:c.instructions+=4;goto B6b6519;
case 0x6b651c:c.instructions+=3;goto B6b651c;
case 0x6b651f:c.instructions+=2;goto B6b651f;
case 0x6b6521:c.instructions+=1;goto B6b6521;
case 0x6b6523:goto L6b6523;
case 0x6b6526:c.instructions+=6;goto B6b6526;
case 0x6b6529:c.instructions+=5;goto B6b6529;
case 0x6b652c:c.instructions+=4;goto B6b652c;
case 0x6b652e:c.instructions+=3;goto B6b652e;
case 0x6b6531:c.instructions+=2;goto B6b6531;
case 0x6b6534:c.instructions+=1;goto B6b6534;
case 0x6b6536:goto L6b6536;
case 0x6b6539:goto L6b6539;
case 0x6b653c:c.instructions+=4;goto B6b653c;
case 0x6b653d:c.instructions+=3;goto B6b653d;
case 0x6b6540:c.instructions+=2;goto B6b6540;
case 0x6b6542:c.instructions+=1;goto B6b6542;
case 0x6b6544:goto L6b6544;
case 0x6b6547:c.instructions+=6;goto B6b6547;
case 0x6b6549:c.instructions+=5;goto B6b6549;
case 0x6b654c:c.instructions+=4;goto B6b654c;
case 0x6b654f:c.instructions+=3;goto B6b654f;
case 0x6b6552:c.instructions+=2;goto B6b6552;
case 0x6b6555:c.instructions+=1;goto B6b6555;
case 0x6b655b:goto L6b655b;
case 0x6b655e:c.instructions+=1;goto B6b655e;
case 0x6b6561:goto L6b6561;
case 0x6b6567:c.instructions+=1;goto B6b6567;
case 0x6b656d:goto L6b656d;
case 0x6b6570:c.instructions+=2;goto B6b6570;
case 0x6b6577:c.instructions+=1;goto B6b6577;
case 0x6b6579:goto L6b6579;
case 0x6b657c:c.instructions+=3;goto B6b657c;
case 0x6b657f:c.instructions+=2;goto B6b657f;
case 0x6b6582:c.instructions+=1;goto B6b6582;
case 0x6b6588:goto L6b6588;
case 0x6b658b:c.instructions+=3;goto B6b658b;
case 0x6b658e:c.instructions+=2;goto B6b658e;
case 0x6b6591:c.instructions+=1;goto B6b6591;
case 0x6b6597:goto L6b6597;
case 0x6b659a:c.instructions+=3;goto B6b659a;
case 0x6b659e:c.instructions+=2;goto B6b659e;
case 0x6b65a0:c.instructions+=1;goto B6b65a0;
case 0x6b65a2:goto L6b65a2;
case 0x6b65a4:goto L6b65a4;
case 0x6b65a6:c.instructions+=4;goto B6b65a6;
case 0x6b65a9:c.instructions+=3;goto B6b65a9;
case 0x6b65b0:c.instructions+=2;goto B6b65b0;
case 0x6b65b2:c.instructions+=1;goto B6b65b2;
case 0x6b65b4:goto L6b65b4;
case 0x6b65b6:goto L6b65b6;
case 0x6b65bd:c.instructions+=2;goto B6b65bd;
case 0x6b65bf:c.instructions+=1;goto B6b65bf;
case 0x6b65c1:goto L6b65c1;
case 0x6b65c3:goto L6b65c3;
case 0x6b65ca:c.instructions+=2;goto B6b65ca;
case 0x6b65cc:c.instructions+=1;goto B6b65cc;
case 0x6b65ce:goto L6b65ce;
case 0x6b65d0:goto L6b65d0;
case 0x6b65d7:c.instructions+=2;goto B6b65d7;
case 0x6b65d9:c.instructions+=1;goto B6b65d9;
case 0x6b65db:goto L6b65db;
case 0x6b65dd:goto L6b65dd;
case 0x6b65e0:c.instructions+=1;goto B6b65e0;
case 0x6b65e6:goto L6b65e6;
case 0x6b65e9:goto L6b65e9;
case 0x6b65eb:c.instructions+=3;goto B6b65eb;
case 0x6b65ee:c.instructions+=2;goto B6b65ee;
case 0x6b65f1:c.instructions+=1;goto B6b65f1;
case 0x6b65f3:goto L6b65f3;
case 0x6b65f6:c.instructions+=5;goto B6b65f6;
case 0x6b65fc:c.instructions+=4;goto B6b65fc;
case 0x6b65ff:c.instructions+=3;goto B6b65ff;
case 0x6b6602:c.instructions+=2;goto B6b6602;
case 0x6b6604:c.instructions+=1;goto B6b6604;
case 0x6b6609:goto L6b6609;
case 0x6b660c:c.instructions+=2;goto B6b660c;
case 0x6b660f:c.instructions+=1;goto B6b660f;
case 0x6b6611:goto L6b6611;
case 0x6b6614:c.instructions+=15;goto B6b6614;
case 0x6b6617:c.instructions+=14;goto B6b6617;
case 0x6b661e:c.instructions+=13;goto B6b661e;
case 0x6b6621:c.instructions+=12;goto B6b6621;
case 0x6b6624:c.instructions+=11;goto B6b6624;
case 0x6b6625:c.instructions+=10;goto B6b6625;
case 0x6b6626:c.instructions+=9;goto B6b6626;
case 0x6b6627:c.instructions+=8;goto B6b6627;
case 0x6b662a:c.instructions+=7;goto B6b662a;
case 0x6b662d:c.instructions+=6;goto B6b662d;
case 0x6b6633:c.instructions+=5;goto B6b6633;
case 0x6b6634:c.instructions+=4;goto B6b6634;
case 0x6b6635:c.instructions+=3;goto B6b6635;
case 0x6b663b:c.instructions+=2;goto B6b663b;
case 0x6b663d:c.instructions+=1;goto B6b663d;
case 0x6b6642:goto L6b6642;
case 0x6b6645:c.instructions+=1;goto B6b6645;
case 0x6b6647:goto L6b6647;
case 0x6b664a:goto L6b664a;
case 0x6b664d:c.instructions+=8;goto B6b664d;
case 0x6b664f:c.instructions+=7;goto B6b664f;
case 0x6b6652:c.instructions+=6;goto B6b6652;
case 0x6b6654:c.instructions+=5;goto B6b6654;
case 0x6b6657:c.instructions+=4;goto B6b6657;
case 0x6b665e:c.instructions+=3;goto B6b665e;
case 0x6b6661:c.instructions+=2;goto B6b6661;
case 0x6b6664:c.instructions+=1;goto B6b6664;
case 0x6b6666:goto L6b6666;
case 0x6b6669:c.instructions+=3;goto B6b6669;
case 0x6b666d:c.instructions+=2;goto B6b666d;
case 0x6b666f:c.instructions+=1;goto B6b666f;
case 0x6b6671:goto L6b6671;
case 0x6b6673:goto L6b6673;
case 0x6b6675:c.instructions+=1;goto B6b6675;
case 0x6b667a:goto L6b667a;
case 0x6b667f:goto L6b667f;
case 0x6b6681:c.instructions+=4;goto B6b6681;
case 0x6b6684:c.instructions+=3;goto B6b6684;
case 0x6b6687:c.instructions+=2;goto B6b6687;
case 0x6b668a:c.instructions+=1;goto B6b668a;
case 0x6b6690:goto L6b6690;
case 0x6b6693:goto L6b6693;
case 0x6b6696:c.instructions+=10;goto B6b6696;
case 0x6b6699:c.instructions+=9;goto B6b6699;
case 0x6b669c:c.instructions+=8;goto B6b669c;
case 0x6b669f:c.instructions+=7;goto B6b669f;
case 0x6b66a2:c.instructions+=6;goto B6b66a2;
case 0x6b66a5:c.instructions+=5;goto B6b66a5;
case 0x6b66a8:c.instructions+=4;goto B6b66a8;
case 0x6b66ae:c.instructions+=3;goto B6b66ae;
case 0x6b66b3:c.instructions+=2;goto B6b66b3;
case 0x6b66b8:c.instructions+=1;goto B6b66b8;
case 0x6b66ba:goto L6b66ba;
case 0x6b66bd:c.instructions+=2;goto B6b66bd;
case 0x6b66c0:c.instructions+=1;goto B6b66c0;
case 0x6b66c2:goto L6b66c2;
case 0x6b66c5:c.instructions+=2;goto B6b66c5;
case 0x6b66c8:c.instructions+=1;goto B6b66c8;
case 0x6b66cb:goto L6b66cb;
case 0x6b66d1:c.instructions+=13;goto B6b66d1;
case 0x6b66d4:c.instructions+=12;goto B6b66d4;
case 0x6b66d7:c.instructions+=11;goto B6b66d7;
case 0x6b66da:c.instructions+=10;goto B6b66da;
case 0x6b66db:c.instructions+=9;goto B6b66db;
case 0x6b66de:c.instructions+=8;goto B6b66de;
case 0x6b66df:c.instructions+=7;goto B6b66df;
case 0x6b66e2:c.instructions+=6;goto B6b66e2;
case 0x6b66e5:c.instructions+=5;goto B6b66e5;
case 0x6b66eb:c.instructions+=4;goto B6b66eb;
case 0x6b66ec:c.instructions+=3;goto B6b66ec;
case 0x6b66ed:c.instructions+=2;goto B6b66ed;
case 0x6b66ef:c.instructions+=1;goto B6b66ef;
case 0x6b66f4:goto L6b66f4;
case 0x6b66f7:c.instructions+=1;goto B6b66f7;
case 0x6b66f9:goto L6b66f9;
case 0x6b66fc:goto L6b66fc;
case 0x6b66ff:c.instructions+=23;goto B6b66ff;
case 0x6b6702:c.instructions+=22;goto B6b6702;
case 0x6b6704:c.instructions+=21;goto B6b6704;
case 0x6b6707:c.instructions+=20;goto B6b6707;
case 0x6b6709:c.instructions+=19;goto B6b6709;
case 0x6b670f:c.instructions+=18;goto B6b670f;
case 0x6b6716:c.instructions+=17;goto B6b6716;
case 0x6b6719:c.instructions+=16;goto B6b6719;
case 0x6b671c:c.instructions+=15;goto B6b671c;
case 0x6b671f:c.instructions+=14;goto B6b671f;
case 0x6b6720:c.instructions+=13;goto B6b6720;
case 0x6b6726:c.instructions+=12;goto B6b6726;
case 0x6b6727:c.instructions+=11;goto B6b6727;
case 0x6b672a:c.instructions+=10;goto B6b672a;
case 0x6b672c:c.instructions+=9;goto B6b672c;
case 0x6b672f:c.instructions+=8;goto B6b672f;
case 0x6b6732:c.instructions+=7;goto B6b6732;
case 0x6b6738:c.instructions+=6;goto B6b6738;
case 0x6b6739:c.instructions+=5;goto B6b6739;
case 0x6b673a:c.instructions+=4;goto B6b673a;
case 0x6b673b:c.instructions+=3;goto B6b673b;
case 0x6b673d:c.instructions+=2;goto B6b673d;
case 0x6b6740:c.instructions+=1;goto B6b6740;
case 0x6b6745:goto L6b6745;
case 0x6b6748:c.instructions+=2;goto B6b6748;
case 0x6b674b:c.instructions+=1;goto B6b674b;
case 0x6b674d:goto L6b674d;
case 0x6b6750:c.instructions+=15;goto B6b6750;
case 0x6b6753:c.instructions+=14;goto B6b6753;
case 0x6b675a:c.instructions+=13;goto B6b675a;
case 0x6b675d:c.instructions+=12;goto B6b675d;
case 0x6b6760:c.instructions+=11;goto B6b6760;
case 0x6b6761:c.instructions+=10;goto B6b6761;
case 0x6b6762:c.instructions+=9;goto B6b6762;
case 0x6b6763:c.instructions+=8;goto B6b6763;
case 0x6b6766:c.instructions+=7;goto B6b6766;
case 0x6b6769:c.instructions+=6;goto B6b6769;
case 0x6b676f:c.instructions+=5;goto B6b676f;
case 0x6b6770:c.instructions+=4;goto B6b6770;
case 0x6b6771:c.instructions+=3;goto B6b6771;
case 0x6b6777:c.instructions+=2;goto B6b6777;
case 0x6b6779:c.instructions+=1;goto B6b6779;
case 0x6b677e:goto L6b677e;
case 0x6b6781:c.instructions+=1;goto B6b6781;
case 0x6b6783:goto L6b6783;
case 0x6b6786:goto L6b6786;
case 0x6b6789:c.instructions+=8;goto B6b6789;
case 0x6b678b:c.instructions+=7;goto B6b678b;
case 0x6b678e:c.instructions+=6;goto B6b678e;
case 0x6b6790:c.instructions+=5;goto B6b6790;
case 0x6b6793:c.instructions+=4;goto B6b6793;
case 0x6b679a:c.instructions+=3;goto B6b679a;
case 0x6b679d:c.instructions+=2;goto B6b679d;
case 0x6b67a0:c.instructions+=1;goto B6b67a0;
case 0x6b67a2:goto L6b67a2;
case 0x6b67a4:c.instructions+=1;goto B6b67a4;
case 0x6b67a9:goto L6b67a9;
case 0x6b67ac:c.instructions+=9;goto B6b67ac;
case 0x6b67b2:c.instructions+=8;goto B6b67b2;
case 0x6b67b5:c.instructions+=7;goto B6b67b5;
case 0x6b67b7:c.instructions+=6;goto B6b67b7;
case 0x6b67ba:c.instructions+=5;goto B6b67ba;
case 0x6b67bd:c.instructions+=4;goto B6b67bd;
case 0x6b67c0:c.instructions+=3;goto B6b67c0;
case 0x6b67c3:c.instructions+=2;goto B6b67c3;
case 0x6b67c6:c.instructions+=1;goto B6b67c6;
case 0x6b67cc:goto L6b67cc;
case 0x6b67cf:goto L6b67cf;
case 0x6b67d2:c.instructions+=3;goto B6b67d2;
case 0x6b67d6:c.instructions+=2;goto B6b67d6;
case 0x6b67d8:c.instructions+=1;goto B6b67d8;
case 0x6b67da:goto L6b67da;
case 0x6b67dc:goto L6b67dc;
case 0x6b67df:c.instructions+=3;goto B6b67df;
case 0x6b67e2:c.instructions+=2;goto B6b67e2;
case 0x6b67e8:c.instructions+=1;goto B6b67e8;
case 0x6b67ee:goto L6b67ee;
case 0x6b67f0:c.instructions+=2;goto B6b67f0;
case 0x6b67f6:c.instructions+=1;goto B6b67f6;
case 0x6b67f8:goto L6b67f8;
case 0x6b67fe:c.instructions+=3;goto B6b67fe;
case 0x6b6803:c.instructions+=2;goto B6b6803;
case 0x6b6808:c.instructions+=1;goto B6b6808;
case 0x6b680a:goto L6b680a;
case 0x6b680d:c.instructions+=1;goto B6b680d;
case 0x6b680f:goto L6b680f;
case 0x6b6811:c.instructions+=1;goto B6b6811;
case 0x6b6816:goto L6b6816;
case 0x6b6818:c.instructions+=1;goto B6b6818;
case 0x6b681a:goto L6b681a;
case 0x6b681c:goto L6b681c;
case 0x6b681e:goto L6b681e;
case 0x6b681f:c.instructions+=4;goto B6b681f;
case 0x6b6820:c.instructions+=3;goto B6b6820;
case 0x6b6821:c.instructions+=2;goto B6b6821;
case 0x6b6822:c.instructions+=1;goto B6b6822;
case 0x6b6825:goto L6b6825;
case 0x6b6829:c.instructions+=1;goto B6b6829;
case 0x6b682f:goto L6b682f;
case 0x6b6833:c.instructions+=1;goto B6b6833;
case 0x6b6839:goto L6b6839;
case 0x6b683f:c.instructions+=1;goto B6b683f;
case 0x6b6844:goto L6b6844;
case 0x6b6847:c.instructions+=1;goto B6b6847;
case 0x6b684d:goto L6b684d;
case 0x6b6850:c.instructions+=1;goto B6b6850;
case 0x6b6856:goto L6b6856;
case 0x6b685c:c.instructions+=1;goto B6b685c;
case 0x6b685e:goto L6b685e;
case 0x6b6864:c.instructions+=4;goto B6b6864;
case 0x6b6869:c.instructions+=3;goto B6b6869;
case 0x6b686e:c.instructions+=2;goto B6b686e;
case 0x6b6870:c.instructions+=1;goto B6b6870;
case 0x6b6872:goto L6b6872;
case 0x6b6875:c.instructions+=1;goto B6b6875;
case 0x6b6877:goto L6b6877;
case 0x6b6879:c.instructions+=1;goto B6b6879;
case 0x6b687f:goto L6b687f;
case 0x6b6885:goto L6b6885;
case 0x6b6888:goto L6b6888;
case 0x6b688d:c.instructions+=3;goto B6b688d;
case 0x6b6892:c.instructions+=2;goto B6b6892;
case 0x6b6895:c.instructions+=1;goto B6b6895;
case 0x6b689a:goto L6b689a;
case 0x6b689f:c.instructions+=1;goto B6b689f;
case 0x6b68a4:goto L6b68a4;
case 0x6b68a6:c.instructions+=11;goto B6b68a6;
case 0x6b68a7:c.instructions+=10;goto B6b68a7;
case 0x6b68a9:c.instructions+=9;goto B6b68a9;
case 0x6b68ac:c.instructions+=8;goto B6b68ac;
case 0x6b68ad:c.instructions+=7;goto B6b68ad;
case 0x6b68af:c.instructions+=6;goto B6b68af;
case 0x6b68b2:c.instructions+=5;goto B6b68b2;
case 0x6b68b3:c.instructions+=4;goto B6b68b3;
case 0x6b68b4:c.instructions+=3;goto B6b68b4;
case 0x6b68b7:c.instructions+=2;goto B6b68b7;
case 0x6b68ba:c.instructions+=1;goto B6b68ba;
case 0x6b68c0:goto L6b68c0;
case 0x6b68c3:c.instructions+=4;goto B6b68c3;
case 0x6b68c6:c.instructions+=3;goto B6b68c6;
case 0x6b68c8:c.instructions+=2;goto B6b68c8;
case 0x6b68cb:c.instructions+=1;goto B6b68cb;
case 0x6b68d1:goto L6b68d1;
case 0x6b68d4:c.instructions+=2;goto B6b68d4;
case 0x6b68d7:c.instructions+=1;goto B6b68d7;
case 0x6b68dd:goto L6b68dd;
case 0x6b68df:c.instructions+=4;goto B6b68df;
case 0x6b68e2:c.instructions+=3;goto B6b68e2;
case 0x6b68e9:c.instructions+=2;goto B6b68e9;
case 0x6b68ec:c.instructions+=1;goto B6b68ec;
case 0x6b68f2:goto L6b68f2;
case 0x6b68f5:c.instructions+=2;goto B6b68f5;
case 0x6b68f8:c.instructions+=1;goto B6b68f8;
case 0x6b68fb:goto L6b68fb;
case 0x6b68fe:c.instructions+=6;goto B6b68fe;
case 0x6b6901:c.instructions+=5;goto B6b6901;
case 0x6b6904:c.instructions+=4;goto B6b6904;
case 0x6b6907:c.instructions+=3;goto B6b6907;
case 0x6b6909:c.instructions+=2;goto B6b6909;
case 0x6b690c:c.instructions+=1;goto B6b690c;
case 0x6b690e:goto L6b690e;
case 0x6b6911:c.instructions+=1;goto B6b6911;
case 0x6b6913:goto L6b6913;
case 0x6b6916:goto L6b6916;
case 0x6b6918:c.instructions+=2;goto B6b6918;
case 0x6b691a:c.instructions+=1;goto B6b691a;
case 0x6b691c:goto L6b691c;
case 0x6b691f:c.instructions+=1;goto B6b691f;
case 0x6b6921:goto L6b6921;
case 0x6b6922:c.instructions+=3;goto B6b6922;
case 0x6b6925:c.instructions+=2;goto B6b6925;
case 0x6b6928:c.instructions+=1;goto B6b6928;
case 0x6b692a:goto L6b692a;
case 0x6b692c:goto L6b692c;
case 0x6b692f:c.instructions+=1;goto B6b692f;
case 0x6b6931:goto L6b6931;
case 0x6b6934:goto L6b6934;
case 0x6b6936:c.instructions+=2;goto B6b6936;
case 0x6b6938:c.instructions+=1;goto B6b6938;
case 0x6b693a:goto L6b693a;
case 0x6b693e:c.instructions+=1;goto B6b693e;
case 0x6b6940:goto L6b6940;
case 0x6b6943:c.instructions+=1;goto B6b6943;
case 0x6b6945:goto L6b6945;
case 0x6b6948:c.instructions+=4;goto B6b6948;
case 0x6b694b:c.instructions+=3;goto B6b694b;
case 0x6b694f:c.instructions+=2;goto B6b694f;
case 0x6b6952:c.instructions+=1;goto B6b6952;
case 0x6b6954:goto L6b6954;
case 0x6b6955:c.instructions+=3;goto B6b6955;
case 0x6b6958:c.instructions+=2;goto B6b6958;
case 0x6b695b:c.instructions+=1;goto B6b695b;
case 0x6b695d:goto L6b695d;
case 0x6b6960:goto L6b6960;
case 0x6b6962:goto L6b6962;
case 0x6b6966:goto L6b6966;
case 0x6b6969:c.instructions+=4;goto B6b6969;
case 0x6b696a:c.instructions+=3;goto B6b696a;
case 0x6b696d:c.instructions+=2;goto B6b696d;
case 0x6b6970:c.instructions+=1;goto B6b6970;
case 0x6b6972:goto L6b6972;
case 0x6b6976:c.instructions+=1;goto B6b6976;
case 0x6b6978:goto L6b6978;
case 0x6b697b:c.instructions+=4;goto B6b697b;
case 0x6b697c:c.instructions+=3;goto B6b697c;
case 0x6b697f:c.instructions+=2;goto B6b697f;
case 0x6b6982:c.instructions+=1;goto B6b6982;
case 0x6b6988:goto L6b6988;
case 0x6b698a:goto L6b698a;
case 0x6b698b:c.instructions+=4;goto B6b698b;
case 0x6b698c:c.instructions+=3;goto B6b698c;
case 0x6b698d:c.instructions+=2;goto B6b698d;
case 0x6b698e:c.instructions+=1;goto B6b698e;
case 0x6b6991:goto L6b6991;
case 0x6b6994:c.instructions+=3;goto B6b6994;
case 0x6b6997:c.instructions+=2;goto B6b6997;
case 0x6b699a:c.instructions+=1;goto B6b699a;
case 0x6b699c:goto L6b699c;
case 0x6b699e:c.instructions+=20;goto B6b699e;
case 0x6b699f:c.instructions+=19;goto B6b699f;
case 0x6b69a1:c.instructions+=18;goto B6b69a1;
case 0x6b69a2:c.instructions+=17;goto B6b69a2;
case 0x6b69a3:c.instructions+=16;goto B6b69a3;
case 0x6b69a6:c.instructions+=15;goto B6b69a6;
case 0x6b69a7:c.instructions+=14;goto B6b69a7;
case 0x6b69aa:c.instructions+=13;goto B6b69aa;
case 0x6b69ab:c.instructions+=12;goto B6b69ab;
case 0x6b69ad:c.instructions+=11;goto B6b69ad;
case 0x6b69b3:c.instructions+=10;goto B6b69b3;
case 0x6b69b4:c.instructions+=9;goto B6b69b4;
case 0x6b69b6:c.instructions+=8;goto B6b69b6;
case 0x6b69b7:c.instructions+=7;goto B6b69b7;
case 0x6b69b9:c.instructions+=6;goto B6b69b9;
case 0x6b69bc:c.instructions+=5;goto B6b69bc;
case 0x6b69be:c.instructions+=4;goto B6b69be;
case 0x6b69c1:c.instructions+=3;goto B6b69c1;
case 0x6b69c4:c.instructions+=2;goto B6b69c4;
case 0x6b69c6:c.instructions+=1;goto B6b69c6;
case 0x6b69c8:goto L6b69c8;
case 0x6b69cd:c.instructions+=1;goto B6b69cd;
case 0x6b69d2:goto L6b69d2;
case 0x6b69d5:c.instructions+=5;goto B6b69d5;
case 0x6b69d7:c.instructions+=4;goto B6b69d7;
case 0x6b69d9:c.instructions+=3;goto B6b69d9;
case 0x6b69dc:c.instructions+=2;goto B6b69dc;
case 0x6b69df:c.instructions+=1;goto B6b69df;
case 0x6b69e1:goto L6b69e1;
case 0x6b69e3:c.instructions+=2;goto B6b69e3;
case 0x6b69e6:c.instructions+=1;goto B6b69e6;
case 0x6b69e8:goto L6b69e8;
case 0x6b69eb:goto L6b69eb;
case 0x6b69ed:c.instructions+=2;goto B6b69ed;
case 0x6b69ef:c.instructions+=1;goto B6b69ef;
case 0x6b69f1:goto L6b69f1;
case 0x6b69f4:c.instructions+=3;goto B6b69f4;
case 0x6b69f7:c.instructions+=2;goto B6b69f7;
case 0x6b69fa:c.instructions+=1;goto B6b69fa;
case 0x6b69fd:goto L6b69fd;
case 0x6b69ff:c.instructions+=3;goto B6b69ff;
case 0x6b6a02:c.instructions+=2;goto B6b6a02;
case 0x6b6a05:c.instructions+=1;goto B6b6a05;
case 0x6b6a0b:goto L6b6a0b;
case 0x6b6a0c:c.instructions+=3;goto B6b6a0c;
case 0x6b6a0f:c.instructions+=2;goto B6b6a0f;
case 0x6b6a11:c.instructions+=1;goto B6b6a11;
case 0x6b6a13:goto L6b6a13;
case 0x6b6a15:goto L6b6a15;
case 0x6b6a18:c.instructions+=6;goto B6b6a18;
case 0x6b6a1a:c.instructions+=5;goto B6b6a1a;
case 0x6b6a1d:c.instructions+=4;goto B6b6a1d;
case 0x6b6a20:c.instructions+=3;goto B6b6a20;
case 0x6b6a23:c.instructions+=2;goto B6b6a23;
case 0x6b6a26:c.instructions+=1;goto B6b6a26;
case 0x6b6a28:goto L6b6a28;
case 0x6b6a2a:c.instructions+=3;goto B6b6a2a;
case 0x6b6a2d:c.instructions+=2;goto B6b6a2d;
case 0x6b6a30:c.instructions+=1;goto B6b6a30;
case 0x6b6a36:goto L6b6a36;
case 0x6b6a39:c.instructions+=8;goto B6b6a39;
case 0x6b6a3c:c.instructions+=7;goto B6b6a3c;
case 0x6b6a3f:c.instructions+=6;goto B6b6a3f;
case 0x6b6a40:c.instructions+=5;goto B6b6a40;
case 0x6b6a43:c.instructions+=4;goto B6b6a43;
case 0x6b6a44:c.instructions+=3;goto B6b6a44;
case 0x6b6a47:c.instructions+=2;goto B6b6a47;
case 0x6b6a4a:c.instructions+=1;goto B6b6a4a;
case 0x6b6a4f:goto L6b6a4f;
case 0x6b6a51:c.instructions+=1;goto B6b6a51;
case 0x6b6a53:goto L6b6a53;
case 0x6b6a55:c.instructions+=3;goto B6b6a55;
case 0x6b6a5b:c.instructions+=2;goto B6b6a5b;
case 0x6b6a5f:c.instructions+=1;goto B6b6a5f;
case 0x6b6a61:goto L6b6a61;
case 0x6b6a67:c.instructions+=1;goto B6b6a67;
case 0x6b6a69:goto L6b6a69;
case 0x6b6a6f:c.instructions+=1;goto B6b6a6f;
case 0x6b6a71:goto L6b6a71;
case 0x6b6a77:c.instructions+=1;goto B6b6a77;
case 0x6b6a79:goto L6b6a79;
case 0x6b6a7f:c.instructions+=1;goto B6b6a7f;
case 0x6b6a81:goto L6b6a81;
case 0x6b6a83:goto L6b6a83;
case 0x6b6a89:c.instructions+=1;goto B6b6a89;
case 0x6b6a8b:goto L6b6a8b;
case 0x6b6a8d:c.instructions+=2;goto B6b6a8d;
case 0x6b6a90:c.instructions+=1;goto B6b6a90;
case 0x6b6a92:goto L6b6a92;
case 0x6b6a95:c.instructions+=6;goto B6b6a95;
case 0x6b6a98:c.instructions+=5;goto B6b6a98;
case 0x6b6a9a:c.instructions+=4;goto B6b6a9a;
case 0x6b6a9d:c.instructions+=3;goto B6b6a9d;
case 0x6b6aa4:c.instructions+=2;goto B6b6aa4;
case 0x6b6aa6:c.instructions+=1;goto B6b6aa6;
case 0x6b6aa8:goto L6b6aa8;
case 0x6b6aab:c.instructions+=2;goto B6b6aab;
case 0x6b6aad:c.instructions+=1;goto B6b6aad;
case 0x6b6aaf:goto L6b6aaf;
case 0x6b6ab1:c.instructions+=3;goto B6b6ab1;
case 0x6b6ab4:c.instructions+=2;goto B6b6ab4;
case 0x6b6aba:c.instructions+=1;goto B6b6aba;
case 0x6b6abd:goto L6b6abd;
case 0x6b6ac0:c.instructions+=5;goto B6b6ac0;
case 0x6b6ac3:c.instructions+=4;goto B6b6ac3;
case 0x6b6ac6:c.instructions+=3;goto B6b6ac6;
case 0x6b6aca:c.instructions+=2;goto B6b6aca;
case 0x6b6acd:c.instructions+=1;goto B6b6acd;
case 0x6b6acf:goto L6b6acf;
case 0x6b6ad2:c.instructions+=4;goto B6b6ad2;
case 0x6b6ad5:c.instructions+=3;goto B6b6ad5;
case 0x6b6ad7:c.instructions+=2;goto B6b6ad7;
case 0x6b6ada:c.instructions+=1;goto B6b6ada;
case 0x6b6ae0:goto L6b6ae0;
case 0x6b6ae2:goto L6b6ae2;
case 0x6b6ae3:c.instructions+=4;goto B6b6ae3;
case 0x6b6ae4:c.instructions+=3;goto B6b6ae4;
case 0x6b6ae5:c.instructions+=2;goto B6b6ae5;
case 0x6b6ae6:c.instructions+=1;goto B6b6ae6;
case 0x6b6ae9:goto L6b6ae9;
case 0x6b6aec:c.instructions+=5;goto B6b6aec;
case 0x6b6aee:c.instructions+=4;goto B6b6aee;
case 0x6b6af1:c.instructions+=3;goto B6b6af1;
case 0x6b6af3:c.instructions+=2;goto B6b6af3;
case 0x6b6af6:c.instructions+=1;goto B6b6af6;
case 0x6b6af8:goto L6b6af8;
case 0x6b6afa:c.instructions+=2;goto B6b6afa;
case 0x6b6afb:c.instructions+=1;goto B6b6afb;
case 0x6b6afd:goto L6b6afd;
case 0x6b6aff:c.instructions+=12;goto B6b6aff;
case 0x6b6b00:c.instructions+=11;goto B6b6b00;
case 0x6b6b02:c.instructions+=10;goto B6b6b02;
case 0x6b6b05:c.instructions+=9;goto B6b6b05;
case 0x6b6b06:c.instructions+=8;goto B6b6b06;
case 0x6b6b08:c.instructions+=7;goto B6b6b08;
case 0x6b6b0b:c.instructions+=6;goto B6b6b0b;
case 0x6b6b0c:c.instructions+=5;goto B6b6b0c;
case 0x6b6b0d:c.instructions+=4;goto B6b6b0d;
case 0x6b6b0f:c.instructions+=3;goto B6b6b0f;
case 0x6b6b12:c.instructions+=2;goto B6b6b12;
case 0x6b6b15:c.instructions+=1;goto B6b6b15;
case 0x6b6b1b:goto L6b6b1b;
case 0x6b6b1e:c.instructions+=1;goto B6b6b1e;
case 0x6b6b21:goto L6b6b21;
case 0x6b6b24:c.instructions+=3;goto B6b6b24;
case 0x6b6b26:c.instructions+=2;goto B6b6b26;
case 0x6b6b28:c.instructions+=1;goto B6b6b28;
case 0x6b6b2e:goto L6b6b2e;
case 0x6b6b30:c.instructions+=16;goto B6b6b30;
case 0x6b6b32:c.instructions+=15;goto B6b6b32;
case 0x6b6b34:c.instructions+=14;goto B6b6b34;
case 0x6b6b37:c.instructions+=13;goto B6b6b37;
case 0x6b6b38:c.instructions+=12;goto B6b6b38;
case 0x6b6b3b:c.instructions+=11;goto B6b6b3b;
case 0x6b6b3c:c.instructions+=10;goto B6b6b3c;
case 0x6b6b3f:c.instructions+=9;goto B6b6b3f;
case 0x6b6b40:c.instructions+=8;goto B6b6b40;
case 0x6b6b41:c.instructions+=7;goto B6b6b41;
case 0x6b6b43:c.instructions+=6;goto B6b6b43;
case 0x6b6b46:c.instructions+=5;goto B6b6b46;
case 0x6b6b49:c.instructions+=4;goto B6b6b49;
case 0x6b6b4f:c.instructions+=3;goto B6b6b4f;
case 0x6b6b51:c.instructions+=2;goto B6b6b51;
case 0x6b6b54:c.instructions+=1;goto B6b6b54;
case 0x6b6b59:goto L6b6b59;
case 0x6b6b5d:c.instructions+=1;goto B6b6b5d;
case 0x6b6b63:goto L6b6b63;
case 0x6b6b66:c.instructions+=1;goto B6b6b66;
case 0x6b6b6c:goto L6b6b6c;
case 0x6b6b6f:c.instructions+=10;goto B6b6b6f;
case 0x6b6b75:c.instructions+=9;goto B6b6b75;
case 0x6b6b7b:c.instructions+=8;goto B6b6b7b;
case 0x6b6b7d:c.instructions+=7;goto B6b6b7d;
case 0x6b6b7f:c.instructions+=6;goto B6b6b7f;
case 0x6b6b82:c.instructions+=5;goto B6b6b82;
case 0x6b6b83:c.instructions+=4;goto B6b6b83;
case 0x6b6b84:c.instructions+=3;goto B6b6b84;
case 0x6b6b85:c.instructions+=2;goto B6b6b85;
case 0x6b6b87:c.instructions+=1;goto B6b6b87;
case 0x6b6b8c:goto L6b6b8c;
case 0x6b6b8e:c.instructions+=8;goto B6b6b8e;
case 0x6b6b90:c.instructions+=7;goto B6b6b90;
case 0x6b6b93:c.instructions+=6;goto B6b6b93;
case 0x6b6b94:c.instructions+=5;goto B6b6b94;
case 0x6b6b9a:c.instructions+=4;goto B6b6b9a;
case 0x6b6b9c:c.instructions+=3;goto B6b6b9c;
case 0x6b6ba2:c.instructions+=2;goto B6b6ba2;
case 0x6b6ba5:c.instructions+=1;goto B6b6ba5;
case 0x6b6baa:goto L6b6baa;
case 0x6b6bae:c.instructions+=2;goto B6b6bae;
case 0x6b6bb1:c.instructions+=1;goto B6b6bb1;
case 0x6b6bb7:goto L6b6bb7;
case 0x6b6bb9:c.instructions+=1;goto B6b6bb9;
case 0x6b6bbf:goto L6b6bbf;
case 0x6b6bc1:c.instructions+=14;goto B6b6bc1;
case 0x6b6bc2:c.instructions+=13;goto B6b6bc2;
case 0x6b6bc3:c.instructions+=12;goto B6b6bc3;
case 0x6b6bc4:c.instructions+=11;goto B6b6bc4;
case 0x6b6bc7:c.instructions+=10;goto B6b6bc7;
case 0x6b6bc8:c.instructions+=9;goto B6b6bc8;
case 0x6b6bcb:c.instructions+=8;goto B6b6bcb;
case 0x6b6bcc:c.instructions+=7;goto B6b6bcc;
case 0x6b6bcf:c.instructions+=6;goto B6b6bcf;
case 0x6b6bd0:c.instructions+=5;goto B6b6bd0;
case 0x6b6bd3:c.instructions+=4;goto B6b6bd3;
case 0x6b6bd5:c.instructions+=3;goto B6b6bd5;
case 0x6b6bd7:c.instructions+=2;goto B6b6bd7;
case 0x6b6bda:c.instructions+=1;goto B6b6bda;
case 0x6b6bdf:goto L6b6bdf;
case 0x6b6be3:c.instructions+=1;goto B6b6be3;
case 0x6b6be9:goto L6b6be9;
case 0x6b6bea:c.instructions+=12;goto B6b6bea;
case 0x6b6beb:c.instructions+=11;goto B6b6beb;
case 0x6b6bee:c.instructions+=10;goto B6b6bee;
case 0x6b6bef:c.instructions+=9;goto B6b6bef;
case 0x6b6bf2:c.instructions+=8;goto B6b6bf2;
case 0x6b6bf3:c.instructions+=7;goto B6b6bf3;
case 0x6b6bf6:c.instructions+=6;goto B6b6bf6;
case 0x6b6bf7:c.instructions+=5;goto B6b6bf7;
case 0x6b6bfa:c.instructions+=4;goto B6b6bfa;
case 0x6b6bfc:c.instructions+=3;goto B6b6bfc;
case 0x6b6bfe:c.instructions+=2;goto B6b6bfe;
case 0x6b6c01:c.instructions+=1;goto B6b6c01;
case 0x6b6c06:goto L6b6c06;
case 0x6b6c09:c.instructions+=2;goto B6b6c09;
case 0x6b6c0c:c.instructions+=1;goto B6b6c0c;
case 0x6b6c12:goto L6b6c12;
case 0x6b6c15:c.instructions+=1;goto B6b6c15;
case 0x6b6c17:goto L6b6c17;
case 0x6b6c1a:c.instructions+=1;goto B6b6c1a;
case 0x6b6c20:goto L6b6c20;
case 0x6b6c24:c.instructions+=1;goto B6b6c24;
case 0x6b6c2a:goto L6b6c2a;
case 0x6b6c2c:c.instructions+=5;goto B6b6c2c;
case 0x6b6c2e:c.instructions+=4;goto B6b6c2e;
case 0x6b6c2f:c.instructions+=3;goto B6b6c2f;
case 0x6b6c31:c.instructions+=2;goto B6b6c31;
case 0x6b6c34:c.instructions+=1;goto B6b6c34;
case 0x6b6c3a:goto L6b6c3a;
case 0x6b6c3d:c.instructions+=3;goto B6b6c3d;
case 0x6b6c42:c.instructions+=2;goto B6b6c42;
case 0x6b6c47:c.instructions+=1;goto B6b6c47;
case 0x6b6c49:goto L6b6c49;
case 0x6b6c4e:c.instructions+=1;goto B6b6c4e;
case 0x6b6c54:goto L6b6c54;
case 0x6b6c57:c.instructions+=3;goto B6b6c57;
case 0x6b6c5a:c.instructions+=2;goto B6b6c5a;
case 0x6b6c61:c.instructions+=1;goto B6b6c61;
case 0x6b6c64:goto L6b6c64;
case 0x6b6c66:c.instructions+=3;goto B6b6c66;
case 0x6b6c69:c.instructions+=2;goto B6b6c69;
case 0x6b6c6c:c.instructions+=1;goto B6b6c6c;
case 0x6b6c6e:goto L6b6c6e;
case 0x6b6c72:goto L6b6c72;
case 0x6b6c75:c.instructions+=2;goto B6b6c75;
case 0x6b6c77:c.instructions+=1;goto B6b6c77;
case 0x6b6c79:goto L6b6c79;
case 0x6b6c7f:c.instructions+=1;goto B6b6c7f;
case 0x6b6c85:goto L6b6c85;
case 0x6b6c86:c.instructions+=3;goto B6b6c86;
case 0x6b6c89:c.instructions+=2;goto B6b6c89;
case 0x6b6c8c:c.instructions+=1;goto B6b6c8c;
case 0x6b6c8e:goto L6b6c8e;
case 0x6b6c92:c.instructions+=1;goto B6b6c92;
case 0x6b6c98:goto L6b6c98;
case 0x6b6c9e:c.instructions+=3;goto B6b6c9e;
case 0x6b6ca3:c.instructions+=2;goto B6b6ca3;
case 0x6b6ca8:c.instructions+=1;goto B6b6ca8;
case 0x6b6cae:goto L6b6cae;
case 0x6b6cb0:c.instructions+=1;goto B6b6cb0;
case 0x6b6cb5:goto L6b6cb5;
case 0x6b6cb7:c.instructions+=2;goto B6b6cb7;
case 0x6b6cb9:c.instructions+=1;goto B6b6cb9;
case 0x6b6cbb:goto L6b6cbb;
case 0x6b6cbd:c.instructions+=1;goto B6b6cbd;
case 0x6b6cc2:goto L6b6cc2;
case 0x6b6cc5:c.instructions+=1;goto B6b6cc5;
case 0x6b6cc7:goto L6b6cc7;
case 0x6b6cca:goto L6b6cca;
case 0x6b6ccd:c.instructions+=2;goto B6b6ccd;
case 0x6b6ccf:c.instructions+=1;goto B6b6ccf;
case 0x6b6cd5:goto L6b6cd5;
case 0x6b6cd6:c.instructions+=4;goto B6b6cd6;
case 0x6b6cd8:c.instructions+=3;goto B6b6cd8;
case 0x6b6cda:c.instructions+=2;goto B6b6cda;
case 0x6b6cdf:c.instructions+=1;goto B6b6cdf;
case 0x6b6ce4:goto L6b6ce4;
case 0x6b6ce6:c.instructions+=2;goto B6b6ce6;
case 0x6b6ce8:c.instructions+=1;goto B6b6ce8;
case 0x6b6cee:goto L6b6cee;
case 0x6b6cf3:goto L6b6cf3;
case 0x6b6cf5:c.instructions+=3;goto B6b6cf5;
case 0x6b6cf6:c.instructions+=2;goto B6b6cf6;
case 0x6b6cf8:c.instructions+=1;goto B6b6cf8;
case 0x6b6cfe:goto L6b6cfe;
case 0x6b6d01:c.instructions+=3;goto B6b6d01;
case 0x6b6d07:c.instructions+=2;goto B6b6d07;
case 0x6b6d0d:c.instructions+=1;goto B6b6d0d;
case 0x6b6d13:goto L6b6d13;
case 0x6b6d15:c.instructions+=7;goto B6b6d15;
case 0x6b6d17:c.instructions+=6;goto B6b6d17;
case 0x6b6d18:c.instructions+=5;goto B6b6d18;
case 0x6b6d1b:c.instructions+=4;goto B6b6d1b;
case 0x6b6d1e:c.instructions+=3;goto B6b6d1e;
case 0x6b6d21:c.instructions+=2;goto B6b6d21;
case 0x6b6d24:c.instructions+=1;goto B6b6d24;
case 0x6b6d27:goto L6b6d27;
case 0x6b6d29:c.instructions+=3;goto B6b6d29;
case 0x6b6d2c:c.instructions+=2;goto B6b6d2c;
case 0x6b6d2f:c.instructions+=1;goto B6b6d2f;
case 0x6b6d31:goto L6b6d31;
case 0x6b6d34:goto L6b6d34;
case 0x6b6d37:c.instructions+=5;goto B6b6d37;
case 0x6b6d39:c.instructions+=4;goto B6b6d39;
case 0x6b6d3c:c.instructions+=3;goto B6b6d3c;
case 0x6b6d3f:c.instructions+=2;goto B6b6d3f;
case 0x6b6d43:c.instructions+=1;goto B6b6d43;
case 0x6b6d45:goto L6b6d45;
case 0x6b6d49:goto L6b6d49;
case 0x6b6d4d:c.instructions+=1;goto B6b6d4d;
case 0x6b6d4f:goto L6b6d4f;
case 0x6b6d51:goto L6b6d51;
case 0x6b6d55:c.instructions+=1;goto B6b6d55;
case 0x6b6d5b:goto L6b6d5b;
case 0x6b6d5c:c.instructions+=2;goto B6b6d5c;
case 0x6b6d5f:c.instructions+=1;goto B6b6d5f;
case 0x6b6d61:goto L6b6d61;
case 0x6b6d65:c.instructions+=1;goto B6b6d65;
case 0x6b6d67:goto L6b6d67;
case 0x6b6d69:c.instructions+=1;goto B6b6d69;
case 0x6b6d6f:goto L6b6d6f;
case 0x6b6d71:c.instructions+=1;goto B6b6d71;
case 0x6b6d76:goto L6b6d76;
case 0x6b6d78:c.instructions+=1;goto B6b6d78;
case 0x6b6d7a:goto L6b6d7a;
case 0x6b6d7c:c.instructions+=1;goto B6b6d7c;
case 0x6b6d81:goto L6b6d81;
case 0x6b6d84:c.instructions+=1;goto B6b6d84;
case 0x6b6d86:goto L6b6d86;
case 0x6b6d8a:goto L6b6d8a;
case 0x6b6d8e:c.instructions+=1;goto B6b6d8e;
case 0x6b6d94:goto L6b6d94;
case 0x6b6d97:c.instructions+=9;goto B6b6d97;
case 0x6b6d99:c.instructions+=8;goto B6b6d99;
case 0x6b6d9b:c.instructions+=7;goto B6b6d9b;
case 0x6b6d9d:c.instructions+=6;goto B6b6d9d;
case 0x6b6d9f:c.instructions+=5;goto B6b6d9f;
case 0x6b6da5:c.instructions+=4;goto B6b6da5;
case 0x6b6da7:c.instructions+=3;goto B6b6da7;
case 0x6b6dad:c.instructions+=2;goto B6b6dad;
case 0x6b6dae:c.instructions+=1;goto B6b6dae;
case 0x6b6db3:goto L6b6db3;
case 0x6b6db5:c.instructions+=2;goto B6b6db5;
case 0x6b6db7:c.instructions+=1;goto B6b6db7;
case 0x6b6dbd:goto L6b6dbd;
case 0x6b6dbf:goto L6b6dbf;
case 0x6b6dc1:goto L6b6dc1;
case 0x6b6dc4:c.instructions+=9;goto B6b6dc4;
case 0x6b6dc6:c.instructions+=8;goto B6b6dc6;
case 0x6b6dc9:c.instructions+=7;goto B6b6dc9;
case 0x6b6dcc:c.instructions+=6;goto B6b6dcc;
case 0x6b6dcf:c.instructions+=5;goto B6b6dcf;
case 0x6b6dd2:c.instructions+=4;goto B6b6dd2;
case 0x6b6dd5:c.instructions+=3;goto B6b6dd5;
case 0x6b6dd8:c.instructions+=2;goto B6b6dd8;
case 0x6b6ddb:c.instructions+=1;goto B6b6ddb;
case 0x6b6ddd:goto L6b6ddd;
case 0x6b6de0:c.instructions+=15;goto B6b6de0;
case 0x6b6de2:c.instructions+=14;goto B6b6de2;
case 0x6b6de5:c.instructions+=13;goto B6b6de5;
case 0x6b6de8:c.instructions+=12;goto B6b6de8;
case 0x6b6deb:c.instructions+=11;goto B6b6deb;
case 0x6b6dee:c.instructions+=10;goto B6b6dee;
case 0x6b6df0:c.instructions+=9;goto B6b6df0;
case 0x6b6df3:c.instructions+=8;goto B6b6df3;
case 0x6b6df6:c.instructions+=7;goto B6b6df6;
case 0x6b6df9:c.instructions+=6;goto B6b6df9;
case 0x6b6dfc:c.instructions+=5;goto B6b6dfc;
case 0x6b6dff:c.instructions+=4;goto B6b6dff;
case 0x6b6e02:c.instructions+=3;goto B6b6e02;
case 0x6b6e05:c.instructions+=2;goto B6b6e05;
case 0x6b6e09:c.instructions+=1;goto B6b6e09;
case 0x6b6e0b:goto L6b6e0b;
case 0x6b6e0e:c.instructions+=3;goto B6b6e0e;
case 0x6b6e11:c.instructions+=2;goto B6b6e11;
case 0x6b6e14:c.instructions+=1;goto B6b6e14;
case 0x6b6e16:goto L6b6e16;
case 0x6b6e19:c.instructions+=2;goto B6b6e19;
case 0x6b6e1c:c.instructions+=1;goto B6b6e1c;
case 0x6b6e1e:goto L6b6e1e;
case 0x6b6e23:c.instructions+=1;goto B6b6e23;
case 0x6b6e28:goto L6b6e28;
case 0x6b6e2b:c.instructions+=1;goto B6b6e2b;
case 0x6b6e2d:goto L6b6e2d;
case 0x6b6e30:c.instructions+=2;goto B6b6e30;
case 0x6b6e33:c.instructions+=1;goto B6b6e33;
case 0x6b6e35:goto L6b6e35;
case 0x6b6e36:goto L6b6e36;
case 0x6b6e39:c.instructions+=1;goto B6b6e39;
case 0x6b6e3b:goto L6b6e3b;
case 0x6b6e3e:c.instructions+=1;goto B6b6e3e;
case 0x6b6e40:goto L6b6e40;
case 0x6b6e43:c.instructions+=2;goto B6b6e43;
case 0x6b6e46:c.instructions+=1;goto B6b6e46;
case 0x6b6e48:goto L6b6e48;
case 0x6b6e49:c.instructions+=8;goto B6b6e49;
case 0x6b6e4b:c.instructions+=7;goto B6b6e4b;
case 0x6b6e4c:c.instructions+=6;goto B6b6e4c;
case 0x6b6e4f:c.instructions+=5;goto B6b6e4f;
case 0x6b6e50:c.instructions+=4;goto B6b6e50;
case 0x6b6e51:c.instructions+=3;goto B6b6e51;
case 0x6b6e57:c.instructions+=2;goto B6b6e57;
case 0x6b6e59:c.instructions+=1;goto B6b6e59;
case 0x6b6e5e:goto L6b6e5e;
case 0x6b6e61:c.instructions+=2;goto B6b6e61;
case 0x6b6e64:c.instructions+=1;goto B6b6e64;
case 0x6b6e6a:goto L6b6e6a;
case 0x6b6e6d:c.instructions+=4;goto B6b6e6d;
case 0x6b6e70:c.instructions+=3;goto B6b6e70;
case 0x6b6e73:c.instructions+=2;goto B6b6e73;
case 0x6b6e75:c.instructions+=1;goto B6b6e75;
case 0x6b6e7a:goto L6b6e7a;
case 0x6b6e7c:c.instructions+=8;goto B6b6e7c;
case 0x6b6e7f:c.instructions+=7;goto B6b6e7f;
case 0x6b6e82:c.instructions+=6;goto B6b6e82;
case 0x6b6e85:c.instructions+=5;goto B6b6e85;
case 0x6b6e88:c.instructions+=4;goto B6b6e88;
case 0x6b6e8b:c.instructions+=3;goto B6b6e8b;
case 0x6b6e8d:c.instructions+=2;goto B6b6e8d;
case 0x6b6e8f:c.instructions+=1;goto B6b6e8f;
case 0x6b6e95:goto L6b6e95;
case 0x6b6e98:c.instructions+=1;goto B6b6e98;
case 0x6b6e9b:goto L6b6e9b;
case 0x6b6e9c:c.instructions+=8;goto B6b6e9c;
case 0x6b6e9e:c.instructions+=7;goto B6b6e9e;
case 0x6b6e9f:c.instructions+=6;goto B6b6e9f;
case 0x6b6ea2:c.instructions+=5;goto B6b6ea2;
case 0x6b6ea3:c.instructions+=4;goto B6b6ea3;
case 0x6b6ea6:c.instructions+=3;goto B6b6ea6;
case 0x6b6ea8:c.instructions+=2;goto B6b6ea8;
case 0x6b6eae:c.instructions+=1;goto B6b6eae;
case 0x6b6eb3:goto L6b6eb3;
case 0x6b6eb5:c.instructions+=3;goto B6b6eb5;
case 0x6b6eb8:c.instructions+=2;goto B6b6eb8;
case 0x6b6ebb:c.instructions+=1;goto B6b6ebb;
case 0x6b6ec1:goto L6b6ec1;
case 0x6b6ec4:c.instructions+=12;goto B6b6ec4;
case 0x6b6ec7:c.instructions+=11;goto B6b6ec7;
case 0x6b6eca:c.instructions+=10;goto B6b6eca;
case 0x6b6ecc:c.instructions+=9;goto B6b6ecc;
case 0x6b6ecf:c.instructions+=8;goto B6b6ecf;
case 0x6b6ed2:c.instructions+=7;goto B6b6ed2;
case 0x6b6ed5:c.instructions+=6;goto B6b6ed5;
case 0x6b6ed8:c.instructions+=5;goto B6b6ed8;
case 0x6b6edb:c.instructions+=4;goto B6b6edb;
case 0x6b6ede:c.instructions+=3;goto B6b6ede;
case 0x6b6ee0:c.instructions+=2;goto B6b6ee0;
case 0x6b6ee3:c.instructions+=1;goto B6b6ee3;
case 0x6b6ee8:goto L6b6ee8;
case 0x6b6eeb:c.instructions+=17;goto B6b6eeb;
case 0x6b6eee:c.instructions+=16;goto B6b6eee;
case 0x6b6ef1:c.instructions+=15;goto B6b6ef1;
case 0x6b6ef4:c.instructions+=14;goto B6b6ef4;
case 0x6b6ef7:c.instructions+=13;goto B6b6ef7;
case 0x6b6efa:c.instructions+=12;goto B6b6efa;
case 0x6b6efd:c.instructions+=11;goto B6b6efd;
case 0x6b6f00:c.instructions+=10;goto B6b6f00;
case 0x6b6f03:c.instructions+=9;goto B6b6f03;
case 0x6b6f06:c.instructions+=8;goto B6b6f06;
case 0x6b6f09:c.instructions+=7;goto B6b6f09;
case 0x6b6f0c:c.instructions+=6;goto B6b6f0c;
case 0x6b6f0f:c.instructions+=5;goto B6b6f0f;
case 0x6b6f13:c.instructions+=4;goto B6b6f13;
case 0x6b6f14:c.instructions+=3;goto B6b6f14;
case 0x6b6f17:c.instructions+=2;goto B6b6f17;
case 0x6b6f1a:c.instructions+=1;goto B6b6f1a;
case 0x6b6f20:goto L6b6f20;
case 0x6b6f23:goto L6b6f23;
case 0x6b6f26:c.instructions+=5;goto B6b6f26;
case 0x6b6f29:c.instructions+=4;goto B6b6f29;
case 0x6b6f2c:c.instructions+=3;goto B6b6f2c;
case 0x6b6f2d:c.instructions+=2;goto B6b6f2d;
case 0x6b6f2f:c.instructions+=1;goto B6b6f2f;
case 0x6b6f34:goto L6b6f34;
case 0x6b6f36:c.instructions+=2;goto B6b6f36;
case 0x6b6f38:c.instructions+=1;goto B6b6f38;
case 0x6b6f3a:goto L6b6f3a;
case 0x6b6f3d:c.instructions+=2;goto B6b6f3d;
case 0x6b6f40:c.instructions+=1;goto B6b6f40;
case 0x6b6f44:goto L6b6f44;
case 0x6b6f47:c.instructions+=4;goto B6b6f47;
case 0x6b6f4a:c.instructions+=3;goto B6b6f4a;
case 0x6b6f4e:c.instructions+=2;goto B6b6f4e;
case 0x6b6f51:c.instructions+=1;goto B6b6f51;
case 0x6b6f57:goto L6b6f57;
case 0x6b6f59:goto L6b6f59;
case 0x6b6f5c:c.instructions+=2;goto B6b6f5c;
case 0x6b6f5e:c.instructions+=1;goto B6b6f5e;
case 0x6b6f60:goto L6b6f60;
case 0x6b6f62:c.instructions+=1;goto B6b6f62;
case 0x6b6f67:goto L6b6f67;
case 0x6b6f69:c.instructions+=5;goto B6b6f69;
case 0x6b6f6a:c.instructions+=4;goto B6b6f6a;
case 0x6b6f6b:c.instructions+=3;goto B6b6f6b;
case 0x6b6f6c:c.instructions+=2;goto B6b6f6c;
case 0x6b6f6d:c.instructions+=1;goto B6b6f6d;
case 0x6b6f70:goto L6b6f70;
case 0x6b6f75:c.instructions+=1;goto B6b6f75;
case 0x6b6f77:goto L6b6f77;
case 0x6b6f7d:c.instructions+=10;goto B6b6f7d;
case 0x6b6f80:c.instructions+=9;goto B6b6f80;
case 0x6b6f85:c.instructions+=8;goto B6b6f85;
case 0x6b6f86:c.instructions+=7;goto B6b6f86;
case 0x6b6f89:c.instructions+=6;goto B6b6f89;
case 0x6b6f8c:c.instructions+=5;goto B6b6f8c;
case 0x6b6f91:c.instructions+=4;goto B6b6f91;
case 0x6b6f96:c.instructions+=3;goto B6b6f96;
case 0x6b6f99:c.instructions+=2;goto B6b6f99;
case 0x6b6f9a:c.instructions+=1;goto B6b6f9a;
case 0x6b6f9f:goto L6b6f9f;
case 0x6b6fa2:c.instructions+=1;goto B6b6fa2;
case 0x6b6fa4:goto L6b6fa4;
case 0x6b6fa9:goto L6b6fa9;
case 0x6b6fac:c.instructions+=6;goto B6b6fac;
case 0x6b6faf:c.instructions+=5;goto B6b6faf;
case 0x6b6fb2:c.instructions+=4;goto B6b6fb2;
case 0x6b6fb7:c.instructions+=3;goto B6b6fb7;
case 0x6b6fba:c.instructions+=2;goto B6b6fba;
case 0x6b6fbb:c.instructions+=1;goto B6b6fbb;
case 0x6b6fc0:goto L6b6fc0;
case 0x6b6fc3:goto L6b6fc3;
case 0x6b6fc8:c.instructions+=1;goto B6b6fc8;
case 0x6b6fca:goto L6b6fca;
case 0x6b6fcf:c.instructions+=1;goto B6b6fcf;
case 0x6b6fd1:goto L6b6fd1;
case 0x6b6fd3:c.instructions+=15;goto B6b6fd3;
case 0x6b6fd4:c.instructions+=14;goto B6b6fd4;
case 0x6b6fd6:c.instructions+=13;goto B6b6fd6;
case 0x6b6fdc:c.instructions+=12;goto B6b6fdc;
case 0x6b6fe0:c.instructions+=11;goto B6b6fe0;
case 0x6b6fe1:c.instructions+=10;goto B6b6fe1;
case 0x6b6fe2:c.instructions+=9;goto B6b6fe2;
case 0x6b6fe3:c.instructions+=8;goto B6b6fe3;
case 0x6b6fe5:c.instructions+=7;goto B6b6fe5;
case 0x6b6fe9:c.instructions+=6;goto B6b6fe9;
case 0x6b6fec:c.instructions+=5;goto B6b6fec;
case 0x6b6fed:c.instructions+=4;goto B6b6fed;
case 0x6b6fee:c.instructions+=3;goto B6b6fee;
case 0x6b6ff0:c.instructions+=2;goto B6b6ff0;
case 0x6b6ff1:c.instructions+=1;goto B6b6ff1;
case 0x6b6ff7:goto L6b6ff7;
case 0x6b6ffa:c.instructions+=2;goto B6b6ffa;
case 0x6b6ffd:c.instructions+=1;goto B6b6ffd;
default:missing_instruction(c.pc);}
B6b6002:L6b6002:{c.instructions+=5;NFSU2_TR(0x6b6002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6005:{NFSU2_TR(0x6b6005);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b6007:{NFSU2_TR(0x6b6007);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6009:{NFSU2_TR(0x6b6009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b600c:{NFSU2_TR(0x6b600c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6071;}}
}
B6b600e:L6b600e:{c.instructions+=2;NFSU2_TR(0x6b600e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6011:{NFSU2_TR(0x6b6011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6014:L6b6014:{c.instructions+=4;NFSU2_TR(0x6b6014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b6016:{NFSU2_TR(0x6b6016);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b6019:{NFSU2_TR(0x6b6019);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b601d:{NFSU2_TR(0x6b601d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b604b;}}
}
B6b601f:L6b601f:{c.instructions+=2;NFSU2_TR(0x6b601f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6026:{NFSU2_TR(0x6b6026);
{goto L6b604e;}
}
B6b6028:L6b6028:{c.instructions+=2;NFSU2_TR(0x6b6028);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b602b:{NFSU2_TR(0x6b602b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b6031:L6b6031:{c.instructions+=2;NFSU2_TR(0x6b6031);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6034:{NFSU2_TR(0x6b6034);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b603a:L6b603a:{c.instructions+=1;NFSU2_TR(0x6b603a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6040:L6b6040:{c.instructions+=3;NFSU2_TR(0x6b6040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6043:{NFSU2_TR(0x6b6043);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6046:{NFSU2_TR(0x6b6046);
{goto L6b6888;}
}
B6b604b:L6b604b:{c.instructions+=2;NFSU2_TR(0x6b604b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b604d:{NFSU2_TR(0x6b604d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b604e:L6b604e:{c.instructions+=3;NFSU2_TR(0x6b604e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b6051:{NFSU2_TR(0x6b6051);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b6052:{NFSU2_TR(0x6b6052);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6014u);}goto L6b6014;}}
}
B6b6054:L6b6054:{c.instructions+=2;NFSU2_TR(0x6b6054);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6056:{NFSU2_TR(0x6b6056);
if(r1(R+518)){{goto L6b6071;}}
}
B6b6058:L6b6058:{c.instructions+=2;NFSU2_TR(0x6b6058);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b605c:{NFSU2_TR(0x6b605c);
if(r1(R+518)){{goto L6b67dc;}}
}
B6b6062:L6b6062:{c.instructions+=3;NFSU2_TR(0x6b6062);
u8 U[4];
w4(U+0,u32(0x7bc898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6067:{NFSU2_TR(0x6b6067);
u8 U[4];
w4(U+0,u32(0x12c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b606c:{NFSU2_TR(0x6b606c);
TAIL_STATIC(0x6b5a56u,6b5);
}
B6b6071:L6b6071:{c.instructions+=16;NFSU2_TR(0x6b6071);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6077:{NFSU2_TR(0x6b6077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b607a:{NFSU2_TR(0x6b607a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b607d:{NFSU2_TR(0x6b607d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6081:{NFSU2_TR(0x6b6081);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b6084:{NFSU2_TR(0x6b6084);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6085:{NFSU2_TR(0x6b6085);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b608b:{NFSU2_TR(0x6b608b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b608c:{NFSU2_TR(0x6b608c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b608f:{NFSU2_TR(0x6b608f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b6092:{NFSU2_TR(0x6b6092);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6095:{NFSU2_TR(0x6b6095);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b609b:{NFSU2_TR(0x6b609b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b609c:{NFSU2_TR(0x6b609c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b609d:{NFSU2_TR(0x6b609d);
__builtin_memmove((R+4),(R+12),4);
}
B6b609f:{NFSU2_TR(0x6b609f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b60a4ull));
TAIL_STATIC(0x6b4b1bu,6b4);
}
B6b60a4:L6b60a4:{c.instructions+=7;NFSU2_TR(0x6b60a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b60aa:{NFSU2_TR(0x6b60aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b60ae:{NFSU2_TR(0x6b60ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b60b2:{NFSU2_TR(0x6b60b2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b60b7:{NFSU2_TR(0x6b60b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b60bc:{NFSU2_TR(0x6b60bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b60bf:{NFSU2_TR(0x6b60bf);
if(r1(R+518)){{goto L6b60c8;}}
}
B6b60c1:L6b60c1:{c.instructions+=2;NFSU2_TR(0x6b60c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x103ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b60c6:{NFSU2_TR(0x6b60c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6106;}}
}
B6b60c8:L6b60c8:{c.instructions+=4;NFSU2_TR(0x6b60c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b60ce:{NFSU2_TR(0x6b60ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b60d1:{NFSU2_TR(0x6b60d1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x50000004ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b60d7:{NFSU2_TR(0x6b60d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6106;}}
}
B6b60d9:L6b60d9:{c.instructions+=7;NFSU2_TR(0x6b60d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b60dc:{NFSU2_TR(0x6b60dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b60de:{NFSU2_TR(0x6b60de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b60e1:{NFSU2_TR(0x6b60e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b60e4:{NFSU2_TR(0x6b60e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b60ea:{NFSU2_TR(0x6b60ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b60ed:{NFSU2_TR(0x6b60ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b60f5;}}
}
B6b60ef:L6b60ef:{c.instructions+=2;NFSU2_TR(0x6b60ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b60f2:{NFSU2_TR(0x6b60f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b60f5:L6b60f5:{c.instructions+=4;NFSU2_TR(0x6b60f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b60f8:{NFSU2_TR(0x6b60f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b60fb:{NFSU2_TR(0x6b60fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b60fe:{NFSU2_TR(0x6b60fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6106;}}
}
B6b6100:L6b6100:{c.instructions+=2;NFSU2_TR(0x6b6100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6103:{NFSU2_TR(0x6b6103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6106:L6b6106:{c.instructions+=5;NFSU2_TR(0x6b6106);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b6108:{NFSU2_TR(0x6b6108);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b610b:{NFSU2_TR(0x6b610b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b610e:{NFSU2_TR(0x6b610e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6111:{NFSU2_TR(0x6b6111);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b618f;}}
}
B6b6113:L6b6113:{c.instructions+=4;NFSU2_TR(0x6b6113);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b6119:{NFSU2_TR(0x6b6119);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b611c:{NFSU2_TR(0x6b611c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b611e:{NFSU2_TR(0x6b611e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b617f;}}
}
B6b6120:L6b6120:{c.instructions+=4;NFSU2_TR(0x6b6120);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6126:{NFSU2_TR(0x6b6126);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b6129:{NFSU2_TR(0x6b6129);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b612c:{NFSU2_TR(0x6b612c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6b612e:L6b612e:{c.instructions+=4;NFSU2_TR(0x6b612e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6131:{NFSU2_TR(0x6b6131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6133:{NFSU2_TR(0x6b6133);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6135:{NFSU2_TR(0x6b6135);
if(r1(R+518)){{goto L6b6176;}}
}
B6b6137:L6b6137:{c.instructions+=5;NFSU2_TR(0x6b6137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6139:{NFSU2_TR(0x6b6139);
__builtin_memmove((R+8),(R+4),4);
}
B6b613b:{NFSU2_TR(0x6b613b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b6141:{NFSU2_TR(0x6b6141);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6147:{NFSU2_TR(0x6b6147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6176;}}
}
B6b6149:L6b6149:{c.instructions+=3;NFSU2_TR(0x6b6149);
__builtin_memmove((R+8),(R+4),4);
}
B6b614b:{NFSU2_TR(0x6b614b);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6b6151:{NFSU2_TR(0x6b6151);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6176;}}
}
B6b6153:L6b6153:{c.instructions+=4;NFSU2_TR(0x6b6153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6156:{NFSU2_TR(0x6b6156);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b615d:{NFSU2_TR(0x6b615d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6160:{NFSU2_TR(0x6b6160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6163:L6b6163:{c.instructions+=2;NFSU2_TR(0x6b6163);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b6165:{NFSU2_TR(0x6b6165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b616e;}}
}
B6b6167:L6b6167:{c.instructions+=1;NFSU2_TR(0x6b6167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b616e:L6b616e:{c.instructions+=3;NFSU2_TR(0x6b616e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b6171:{NFSU2_TR(0x6b6171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6174:{NFSU2_TR(0x6b6174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6163u);}goto L6b6163;}}
}
B6b6176:L6b6176:{c.instructions+=4;NFSU2_TR(0x6b6176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b617a:{NFSU2_TR(0x6b617a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b617c:{NFSU2_TR(0x6b617c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6b617d:{NFSU2_TR(0x6b617d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b612eu);}goto L6b612e;}}
}
B6b617f:L6b617f:{c.instructions+=4;NFSU2_TR(0x6b617f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6182:{NFSU2_TR(0x6b6182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6185:{NFSU2_TR(0x6b6185);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6188:{NFSU2_TR(0x6b6188);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6113u);}goto L6b6113;}}
}
B6b618a:L6b618a:{c.instructions+=2;NFSU2_TR(0x6b618a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b618d:{NFSU2_TR(0x6b618d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b619e;}}
}
B6b618f:L6b618f:{c.instructions+=3;NFSU2_TR(0x6b618f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6195:{NFSU2_TR(0x6b6195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b619c:{NFSU2_TR(0x6b619c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b61a1;}}
}
B6b619e:L6b619e:{c.instructions+=1;NFSU2_TR(0x6b619e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b61a1:L6b61a1:{c.instructions+=10;NFSU2_TR(0x6b61a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b61a7:{NFSU2_TR(0x6b61a7);
__builtin_memmove((R+0),(R+24),4);
}
B6b61a9:{NFSU2_TR(0x6b61a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b61ac:{NFSU2_TR(0x6b61ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b61af:{NFSU2_TR(0x6b61af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b61b1:{NFSU2_TR(0x6b61b1);
__builtin_memmove((R+24),(R+4),4);
}
B6b61b3:{NFSU2_TR(0x6b61b3);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6b61b9:{NFSU2_TR(0x6b61b9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b61bc:{NFSU2_TR(0x6b61bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b61bf:{NFSU2_TR(0x6b61bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b621a;}}
}
B6b61c1:L6b61c1:{c.instructions+=4;NFSU2_TR(0x6b61c1);
__builtin_memmove((R+24),(R+4),4);
}
B6b61c3:{NFSU2_TR(0x6b61c3);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6b61c9:{NFSU2_TR(0x6b61c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b61cf:{NFSU2_TR(0x6b61cf);
if(r1(R+518)){{goto L6b621a;}}
}
B6b61d1:L6b61d1:{c.instructions+=2;NFSU2_TR(0x6b61d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b61d5:{NFSU2_TR(0x6b61d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b621a;}}
}
B6b61d7:L6b61d7:{c.instructions+=5;NFSU2_TR(0x6b61d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b61da:{NFSU2_TR(0x6b61da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b61e0:{NFSU2_TR(0x6b61e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b61e3:{NFSU2_TR(0x6b61e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b61e7:{NFSU2_TR(0x6b61e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b621a;}}
}
B6b61e9:L6b61e9:{c.instructions+=2;NFSU2_TR(0x6b61e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b61ec:{NFSU2_TR(0x6b61ec);
if(r1(R+518)){{goto L6b621a;}}
}
B6b61ee:L6b61ee:{c.instructions+=5;NFSU2_TR(0x6b61ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b61f1:{NFSU2_TR(0x6b61f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b61f3:{NFSU2_TR(0x6b61f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b61f4:{NFSU2_TR(0x6b61f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b61f7:{NFSU2_TR(0x6b61f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b61fd:L6b61fd:{c.instructions+=2;NFSU2_TR(0x6b61fd);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+8))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b6201:{NFSU2_TR(0x6b6201);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6207;}}
}
B6b6203:L6b6203:{c.instructions+=2;NFSU2_TR(0x6b6203);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b6205:{NFSU2_TR(0x6b6205);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6213;}}
}
B6b6207:L6b6207:{c.instructions+=5;NFSU2_TR(0x6b6207);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b6208:{NFSU2_TR(0x6b6208);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6b620b:{NFSU2_TR(0x6b620b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b620e:{NFSU2_TR(0x6b620e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6211:{NFSU2_TR(0x6b6211);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b61fdu);}goto L6b61fd;}}
}
B6b6213:L6b6213:{c.instructions+=2;NFSU2_TR(0x6b6213);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6216:{NFSU2_TR(0x6b6216);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6245;}}
}
B6b6218:L6b6218:{c.instructions+=1;NFSU2_TR(0x6b6218);
{goto L6b621d;}
}
B6b621a:L6b621a:{c.instructions+=1;NFSU2_TR(0x6b621a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b621d:L6b621d:{c.instructions+=5;NFSU2_TR(0x6b621d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b621f:{NFSU2_TR(0x6b621f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6222:{NFSU2_TR(0x6b6222);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6b6225:{NFSU2_TR(0x6b6225);
__builtin_memmove((R+28),(R+0),4);
}
B6b6227:{NFSU2_TR(0x6b6227);
{goto L6b623a;}
}
B6b6229:L6b6229:{c.instructions+=2;NFSU2_TR(0x6b6229);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+8))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b622d:{NFSU2_TR(0x6b622d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b6239;}}
}
B6b622f:L6b622f:{c.instructions+=2;NFSU2_TR(0x6b622f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6232:{NFSU2_TR(0x6b6232);
if(r1(R+518)){{goto L6b6239;}}
}
B6b6234:L6b6234:{c.instructions+=2;NFSU2_TR(0x6b6234);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6237:{NFSU2_TR(0x6b6237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6242;}}
}
B6b6239:L6b6239:{c.instructions+=1;NFSU2_TR(0x6b6239);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b623a:L6b623a:{c.instructions+=3;NFSU2_TR(0x6b623a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b623d:{NFSU2_TR(0x6b623d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6240:{NFSU2_TR(0x6b6240);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6229u);}goto L6b6229;}}
}
B6b6242:L6b6242:{c.instructions+=1;NFSU2_TR(0x6b6242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6245:L6b6245:{c.instructions+=3;NFSU2_TR(0x6b6245);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b6247:{NFSU2_TR(0x6b6247);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6249:{NFSU2_TR(0x6b6249);
if(r1(R+518)){{goto L6b625c;}}
}
B6b624b:L6b624b:{c.instructions+=2;NFSU2_TR(0x6b624b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b624e:{NFSU2_TR(0x6b624e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b625c;}}
}
B6b6250:L6b6250:{c.instructions+=2;NFSU2_TR(0x6b6250);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6256:{NFSU2_TR(0x6b6256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6844;}}
}
B6b625c:L6b625c:{c.instructions+=2;NFSU2_TR(0x6b625c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b625f:{NFSU2_TR(0x6b625f);
if(r1(R+518)){{goto L6b685e;}}
}
B6b6265:L6b6265:{c.instructions+=4;NFSU2_TR(0x6b6265);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b626b:{NFSU2_TR(0x6b626b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6271:{NFSU2_TR(0x6b6271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6274:{NFSU2_TR(0x6b6274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b65e9;}}
}
B6b627a:L6b627a:{c.instructions+=2;NFSU2_TR(0x6b627a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x104ull))));
}
B6b6281:{NFSU2_TR(0x6b6281);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65e9;}}
}
B6b6287:L6b6287:{c.instructions+=2;NFSU2_TR(0x6b6287);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b628b:{NFSU2_TR(0x6b628b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b65e9;}}
}
B6b6291:L6b6291:{c.instructions+=19;NFSU2_TR(0x6b6291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6294:{NFSU2_TR(0x6b6294);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b629a:{NFSU2_TR(0x6b629a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b629d:{NFSU2_TR(0x6b629d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b629e:{NFSU2_TR(0x6b629e);
__builtin_memmove((R+24),(R+4),4);
}
B6b62a0:{NFSU2_TR(0x6b62a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b62a3:{NFSU2_TR(0x6b62a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62a4:{NFSU2_TR(0x6b62a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b62a7:{NFSU2_TR(0x6b62a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b62aa:{NFSU2_TR(0x6b62aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b62ad:{NFSU2_TR(0x6b62ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62ae:{NFSU2_TR(0x6b62ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b62b1:{NFSU2_TR(0x6b62b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b62b4:{NFSU2_TR(0x6b62b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b62b7:{NFSU2_TR(0x6b62b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b62bd:{NFSU2_TR(0x6b62bd);
__builtin_memmove((R+4),(R+12),4);
}
B6b62bf:{NFSU2_TR(0x6b62bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62c0:{NFSU2_TR(0x6b62c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62c1:{NFSU2_TR(0x6b62c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b62c6ull));
TAIL_STATIC(0x6b4cb9u,6b4);
}
B6b62c6:L6b62c6:{c.instructions+=5;NFSU2_TR(0x6b62c6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b62c8:{NFSU2_TR(0x6b62c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b62cb:{NFSU2_TR(0x6b62cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62cd:{NFSU2_TR(0x6b62cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b62ce:{NFSU2_TR(0x6b62ce);
if(r1(R+518)){{goto L6b62d3;}}
}
B6b62d0:L6b62d0:{c.instructions+=1;NFSU2_TR(0x6b62d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b62d3:L6b62d3:{c.instructions+=2;NFSU2_TR(0x6b62d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b62d6:{NFSU2_TR(0x6b62d6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b62e2;}}
}
B6b62d8:L6b62d8:{c.instructions+=2;NFSU2_TR(0x6b62d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b62df:{NFSU2_TR(0x6b62df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b62e2:L6b62e2:{c.instructions+=1;NFSU2_TR(0x6b62e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b62e7;}}
}
B6b62e4:L6b62e4:{c.instructions+=1;NFSU2_TR(0x6b62e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b62e7:L6b62e7:{c.instructions+=2;NFSU2_TR(0x6b62e7);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b62e9:{NFSU2_TR(0x6b62e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b62eeull));
TAIL_STATIC(0x699317u,699);
}
B6b62ee:L6b62ee:{c.instructions+=2;NFSU2_TR(0x6b62ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b62f0:{NFSU2_TR(0x6b62f0);
if(r1(R+518)){{goto L6b62fe;}}
}
B6b62f2:L6b62f2:{c.instructions+=2;NFSU2_TR(0x6b62f2);
__builtin_memmove((R+4),(R+0),4);
}
B6b62f4:{NFSU2_TR(0x6b62f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b62f9ull));
TAIL_STATIC(0x698e7du,698);
}
B6b62f9:L6b62f9:{c.instructions+=2;NFSU2_TR(0x6b62f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b62fc:{NFSU2_TR(0x6b62fc);
{goto L6b6301;}
}
B6b62fe:L6b62fe:{c.instructions+=1;NFSU2_TR(0x6b62fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6301:L6b6301:{c.instructions+=2;NFSU2_TR(0x6b6301);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6b6304:{NFSU2_TR(0x6b6304);
if(r1(R+518)){{goto L6b689a;}}
}
B6b630a:L6b630a:{c.instructions+=8;NFSU2_TR(0x6b630a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6310:{NFSU2_TR(0x6b6310);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6313:{NFSU2_TR(0x6b6313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6316:{NFSU2_TR(0x6b6316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6317:{NFSU2_TR(0x6b6317);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b631a:{NFSU2_TR(0x6b631a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b631d:{NFSU2_TR(0x6b631d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6b631f:{NFSU2_TR(0x6b631f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6324ull));
TAIL_STATIC(0x699362u,699);
}
B6b6324:L6b6324:{c.instructions+=2;NFSU2_TR(0x6b6324);
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
B6b6326:{NFSU2_TR(0x6b6326);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b681e;}}
}
B6b632c:L6b632c:{c.instructions+=4;NFSU2_TR(0x6b632c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6332:{NFSU2_TR(0x6b6332);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b6335:{NFSU2_TR(0x6b6335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6338:{NFSU2_TR(0x6b6338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b633dull));
TAIL_STATIC(0x698eb3u,698);
}
B6b633d:L6b633d:{c.instructions+=2;NFSU2_TR(0x6b633d);
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
B6b633f:{NFSU2_TR(0x6b633f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b681e;}}
}
B6b6345:L6b6345:{c.instructions+=11;NFSU2_TR(0x6b6345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6348:{NFSU2_TR(0x6b6348);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b634b:{NFSU2_TR(0x6b634b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b634e:{NFSU2_TR(0x6b634e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6354:{NFSU2_TR(0x6b6354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6357:{NFSU2_TR(0x6b6357);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b635a:{NFSU2_TR(0x6b635a);
__builtin_memmove((R+0),(R+4),4);
}
B6b635c:{NFSU2_TR(0x6b635c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b635f:{NFSU2_TR(0x6b635f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b6362:{NFSU2_TR(0x6b6362);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b6365:{NFSU2_TR(0x6b6365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6368:L6b6368:{c.instructions+=1;NFSU2_TR(0x6b6368);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b636a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6368u);}goto L6b6368;}
}
B6b636a:L6b636a:{c.instructions+=2;NFSU2_TR(0x6b636a);
__builtin_memmove((R+4),(R+0),4);
}
B6b636c:{NFSU2_TR(0x6b636c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6b636f:L6b636f:{c.instructions+=1;NFSU2_TR(0x6b636f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b6371;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b636fu);}goto L6b636f;}
}
B6b6371:L6b6371:{c.instructions+=7;NFSU2_TR(0x6b6371);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6377:{NFSU2_TR(0x6b6377);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b637a:{NFSU2_TR(0x6b637a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b637d:{NFSU2_TR(0x6b637d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6380:{NFSU2_TR(0x6b6380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6383:{NFSU2_TR(0x6b6383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6386:{NFSU2_TR(0x6b6386);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b6389:L6b6389:{c.instructions+=1;NFSU2_TR(0x6b6389);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b638b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6389u);}goto L6b6389;}
}
B6b638b:L6b638b:{c.instructions+=5;NFSU2_TR(0x6b638b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6391:{NFSU2_TR(0x6b6391);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6394:{NFSU2_TR(0x6b6394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6395:{NFSU2_TR(0x6b6395);
__builtin_memmove((R+4),(R+12),4);
}
B6b6397:{NFSU2_TR(0x6b6397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b639cull));
TAIL_STATIC(0x699b26u,699);
}
B6b639c:L6b639c:{c.instructions+=2;NFSU2_TR(0x6b639c);
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
B6b639e:{NFSU2_TR(0x6b639e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b681e;}}
}
B6b63a4:L6b63a4:{c.instructions+=6;NFSU2_TR(0x6b63a4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b63a6:{NFSU2_TR(0x6b63a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b63a8:{NFSU2_TR(0x6b63a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b63ab:{NFSU2_TR(0x6b63ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b63ae:{NFSU2_TR(0x6b63ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b63b1:{NFSU2_TR(0x6b63b1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6597;}}
}
B6b63b7:L6b63b7:{c.instructions+=3;NFSU2_TR(0x6b63b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b63ba:{NFSU2_TR(0x6b63ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b63bd:{NFSU2_TR(0x6b63bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6588;}}
}
B6b63c3:L6b63c3:{c.instructions+=7;NFSU2_TR(0x6b63c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b63c6:{NFSU2_TR(0x6b63c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b63c9:{NFSU2_TR(0x6b63c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b63cc:{NFSU2_TR(0x6b63cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b63cf:{NFSU2_TR(0x6b63cf);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b63d3:{NFSU2_TR(0x6b63d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b63d5:{NFSU2_TR(0x6b63d5);
if(r1(R+518)){{goto L6b63e0;}}
}
B6b63d7:L6b63d7:{c.instructions+=2;NFSU2_TR(0x6b63d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b63da:{NFSU2_TR(0x6b63da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6579;}}
}
B6b63e0:L6b63e0:{c.instructions+=2;NFSU2_TR(0x6b63e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b63e3:{NFSU2_TR(0x6b63e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6443;}}
}
B6b63e5:L6b63e5:{c.instructions+=9;NFSU2_TR(0x6b63e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b63e6:{NFSU2_TR(0x6b63e6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b63e8:{NFSU2_TR(0x6b63e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b63e9:{NFSU2_TR(0x6b63e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b63ec:{NFSU2_TR(0x6b63ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b63ed:{NFSU2_TR(0x6b63ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b63f0:{NFSU2_TR(0x6b63f0);
__builtin_memmove((R+4),(R+12),4);
}
B6b63f2:{NFSU2_TR(0x6b63f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b63f8:{NFSU2_TR(0x6b63f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b63fdull));
TAIL_STATIC(0x699c39u,699);
}
B6b63fd:L6b63fd:{c.instructions+=7;NFSU2_TR(0x6b63fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6400:{NFSU2_TR(0x6b6400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6403:{NFSU2_TR(0x6b6403);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6406:{NFSU2_TR(0x6b6406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6409:{NFSU2_TR(0x6b6409);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b640c:{NFSU2_TR(0x6b640c);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6b6410:{NFSU2_TR(0x6b6410);
if(r1(R+518)){{goto L6b689a;}}
}
B6b6416:L6b6416:{c.instructions+=16;NFSU2_TR(0x6b6416);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6419:{NFSU2_TR(0x6b6419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b641c:{NFSU2_TR(0x6b641c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b641f:{NFSU2_TR(0x6b641f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6422:{NFSU2_TR(0x6b6422);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6425:{NFSU2_TR(0x6b6425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6428:{NFSU2_TR(0x6b6428);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b642b:{NFSU2_TR(0x6b642b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b642e:{NFSU2_TR(0x6b642e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6431:{NFSU2_TR(0x6b6431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6434:{NFSU2_TR(0x6b6434);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6437:{NFSU2_TR(0x6b6437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b643a:{NFSU2_TR(0x6b643a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b643b:{NFSU2_TR(0x6b643b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b643e:{NFSU2_TR(0x6b643e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6441:{NFSU2_TR(0x6b6441);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b63e5u);}goto L6b63e5;}}
}
B6b6443:L6b6443:{c.instructions+=4;NFSU2_TR(0x6b6443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6446:{NFSU2_TR(0x6b6446);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b6447:{NFSU2_TR(0x6b6447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b644a:{NFSU2_TR(0x6b644a);
{goto L6b6561;}
}
B6b644f:L6b644f:{c.instructions+=5;NFSU2_TR(0x6b644f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6455:{NFSU2_TR(0x6b6455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6458:{NFSU2_TR(0x6b6458);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b645b:{NFSU2_TR(0x6b645b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b645d:{NFSU2_TR(0x6b645d);
if(r1(R+518)){{goto L6b655b;}}
}
B6b6463:L6b6463:{c.instructions+=3;NFSU2_TR(0x6b6463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6465:{NFSU2_TR(0x6b6465);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6467:{NFSU2_TR(0x6b6467);
if(r1(R+518)){{goto L6b655b;}}
}
B6b646d:L6b646d:{c.instructions+=10;NFSU2_TR(0x6b646d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b6472:{NFSU2_TR(0x6b6472);
__builtin_memmove((R+4),(R+0),4);
}
B6b6474:{NFSU2_TR(0x6b6474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6477:{NFSU2_TR(0x6b6477);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b6479:{NFSU2_TR(0x6b6479);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b6479);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b6479);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b647b:{NFSU2_TR(0x6b647b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b647f:{NFSU2_TR(0x6b647f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6482:{NFSU2_TR(0x6b6482);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6484:{NFSU2_TR(0x6b6484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6487:{NFSU2_TR(0x6b6487);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b655b;}}
}
B6b648d:L6b648d:{c.instructions+=1;NFSU2_TR(0x6b648d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6491:L6b6491:{c.instructions+=2;NFSU2_TR(0x6b6491);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6b6494:{NFSU2_TR(0x6b6494);
if(r1(R+512)){{goto L6b64d3;}}
}
B6b6496:L6b6496:{c.instructions+=3;NFSU2_TR(0x6b6496);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6498:{NFSU2_TR(0x6b6498);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b649a:{NFSU2_TR(0x6b649a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6544;}}
}
B6b64a0:L6b64a0:{c.instructions+=1;NFSU2_TR(0x6b64a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64a3:L6b64a3:{c.instructions+=5;NFSU2_TR(0x6b64a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64a6:{NFSU2_TR(0x6b64a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b64a9:{NFSU2_TR(0x6b64a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64ac:{NFSU2_TR(0x6b64ac);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b64ae:{NFSU2_TR(0x6b64ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b64c6;}}
}
B6b64b0:L6b64b0:{c.instructions+=7;NFSU2_TR(0x6b64b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64b3:{NFSU2_TR(0x6b64b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64b6:{NFSU2_TR(0x6b64b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b64b9:{NFSU2_TR(0x6b64b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b64bb:{NFSU2_TR(0x6b64bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64be:{NFSU2_TR(0x6b64be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b64c1:{NFSU2_TR(0x6b64c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b64c6;}}
}
B6b64c3:L6b64c3:{c.instructions+=1;NFSU2_TR(0x6b64c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b64c6:L6b64c6:{c.instructions+=5;NFSU2_TR(0x6b64c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b64c9:{NFSU2_TR(0x6b64c9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b64ca:{NFSU2_TR(0x6b64ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b64cd:{NFSU2_TR(0x6b64cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6b64cf:{NFSU2_TR(0x6b64cf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b64a3u);}goto L6b64a3;}}
}
B6b64d1:L6b64d1:{c.instructions+=1;NFSU2_TR(0x6b64d1);
{goto L6b6544;}
}
B6b64d3:L6b64d3:{c.instructions+=2;NFSU2_TR(0x6b64d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b64d6:{NFSU2_TR(0x6b64d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b650d;}}
}
B6b64d8:L6b64d8:{c.instructions+=6;NFSU2_TR(0x6b64d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64db:{NFSU2_TR(0x6b64db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b64de:{NFSU2_TR(0x6b64de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b64e1:{NFSU2_TR(0x6b64e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64e4:{NFSU2_TR(0x6b64e4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b64e6:{NFSU2_TR(0x6b64e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6544;}}
}
B6b64e8:L6b64e8:{c.instructions+=4;NFSU2_TR(0x6b64e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b64ec:{NFSU2_TR(0x6b64ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64ef:{NFSU2_TR(0x6b64ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64f2:{NFSU2_TR(0x6b64f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b64f9;}}
}
B6b64f4:L6b64f4:{c.instructions+=2;NFSU2_TR(0x6b64f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b64f7:{NFSU2_TR(0x6b64f7);
{goto L6b64fb;}
}
B6b64f9:L6b64f9:{c.instructions+=1;NFSU2_TR(0x6b64f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b64fb:L6b64fb:{c.instructions+=4;NFSU2_TR(0x6b64fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b64fd:{NFSU2_TR(0x6b64fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6500:{NFSU2_TR(0x6b6500);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6503:{NFSU2_TR(0x6b6503);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6544;}}
}
B6b6505:L6b6505:{c.instructions+=3;NFSU2_TR(0x6b6505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6508:{NFSU2_TR(0x6b6508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b650b:{NFSU2_TR(0x6b650b);
{goto L6b6544;}
}
B6b650d:L6b650d:{c.instructions+=3;NFSU2_TR(0x6b650d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b650f:{NFSU2_TR(0x6b650f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6511:{NFSU2_TR(0x6b6511);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6544;}}
}
B6b6513:L6b6513:{c.instructions+=1;NFSU2_TR(0x6b6513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6516:L6b6516:{c.instructions+=5;NFSU2_TR(0x6b6516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6519:{NFSU2_TR(0x6b6519);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b651c:{NFSU2_TR(0x6b651c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b651f:{NFSU2_TR(0x6b651f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b6521:{NFSU2_TR(0x6b6521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6539;}}
}
B6b6523:L6b6523:{c.instructions+=7;NFSU2_TR(0x6b6523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6526:{NFSU2_TR(0x6b6526);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6529:{NFSU2_TR(0x6b6529);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b652c:{NFSU2_TR(0x6b652c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b652e:{NFSU2_TR(0x6b652e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6531:{NFSU2_TR(0x6b6531);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6534:{NFSU2_TR(0x6b6534);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6539;}}
}
B6b6536:L6b6536:{c.instructions+=1;NFSU2_TR(0x6b6536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6539:L6b6539:{c.instructions+=5;NFSU2_TR(0x6b6539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b653c:{NFSU2_TR(0x6b653c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b653d:{NFSU2_TR(0x6b653d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b6540:{NFSU2_TR(0x6b6540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6b6542:{NFSU2_TR(0x6b6542);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6516u);}goto L6b6516;}}
}
B6b6544:L6b6544:{c.instructions+=7;NFSU2_TR(0x6b6544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6547:{NFSU2_TR(0x6b6547);
__builtin_memmove((R+0),(R+4),4);
}
B6b6549:{NFSU2_TR(0x6b6549);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b654c:{NFSU2_TR(0x6b654c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b654f:{NFSU2_TR(0x6b654f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6552:{NFSU2_TR(0x6b6552);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6555:{NFSU2_TR(0x6b6555);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6491u);}goto L6b6491;}}
}
B6b655b:L6b655b:{c.instructions+=2;NFSU2_TR(0x6b655b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b655e:{NFSU2_TR(0x6b655e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6561:L6b6561:{c.instructions+=2;NFSU2_TR(0x6b6561);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6567:{NFSU2_TR(0x6b6567);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b644fu);}goto L6b644f;}}
}
B6b656d:L6b656d:{c.instructions+=3;NFSU2_TR(0x6b656d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6570:{NFSU2_TR(0x6b6570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6577:{NFSU2_TR(0x6b6577);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6579:L6b6579:{c.instructions+=4;NFSU2_TR(0x6b6579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b657c:{NFSU2_TR(0x6b657c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b657f:{NFSU2_TR(0x6b657f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6582:{NFSU2_TR(0x6b6582);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b63c3u);}goto L6b63c3;}}
}
B6b6588:L6b6588:{c.instructions+=4;NFSU2_TR(0x6b6588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b658b:{NFSU2_TR(0x6b658b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b658e:{NFSU2_TR(0x6b658e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6591:{NFSU2_TR(0x6b6591);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b63b7u);}goto L6b63b7;}}
}
B6b6597:L6b6597:{c.instructions+=4;NFSU2_TR(0x6b6597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b659a:{NFSU2_TR(0x6b659a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b659e:{NFSU2_TR(0x6b659e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b65a0:{NFSU2_TR(0x6b65a0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65a4;}}
}
B6b65a2:L6b65a2:{c.instructions+=1;NFSU2_TR(0x6b65a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b65a4:L6b65a4:{c.instructions+=5;NFSU2_TR(0x6b65a4);
__builtin_memmove((R+0),(R+8),4);
}
B6b65a6:{NFSU2_TR(0x6b65a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b65a9:{NFSU2_TR(0x6b65a9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b65b0:{NFSU2_TR(0x6b65b0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b65b2:{NFSU2_TR(0x6b65b2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65b6;}}
}
B6b65b4:L6b65b4:{c.instructions+=1;NFSU2_TR(0x6b65b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b65b6:L6b65b6:{c.instructions+=3;NFSU2_TR(0x6b65b6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b65bd:{NFSU2_TR(0x6b65bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b65bf:{NFSU2_TR(0x6b65bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65c3;}}
}
B6b65c1:L6b65c1:{c.instructions+=1;NFSU2_TR(0x6b65c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b65c3:L6b65c3:{c.instructions+=3;NFSU2_TR(0x6b65c3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6b65ca:{NFSU2_TR(0x6b65ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b65cc:{NFSU2_TR(0x6b65cc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65d0;}}
}
B6b65ce:L6b65ce:{c.instructions+=1;NFSU2_TR(0x6b65ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b65d0:L6b65d0:{c.instructions+=3;NFSU2_TR(0x6b65d0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff3cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b65d7:{NFSU2_TR(0x6b65d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6b65d9:{NFSU2_TR(0x6b65d9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b65dd;}}
}
B6b65db:L6b65db:{c.instructions+=1;NFSU2_TR(0x6b65db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b65dd:L6b65dd:{c.instructions+=2;NFSU2_TR(0x6b65dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b65e0:{NFSU2_TR(0x6b65e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b67dc;}}
}
B6b65e6:L6b65e6:{c.instructions+=1;NFSU2_TR(0x6b65e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b65e9:L6b65e9:{c.instructions+=4;NFSU2_TR(0x6b65e9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b65eb:{NFSU2_TR(0x6b65eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b65ee:{NFSU2_TR(0x6b65ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b65f1:{NFSU2_TR(0x6b65f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6609;}}
}
B6b65f3:L6b65f3:{c.instructions+=6;NFSU2_TR(0x6b65f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b65f6:{NFSU2_TR(0x6b65f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b65fc:{NFSU2_TR(0x6b65fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b65ff:{NFSU2_TR(0x6b65ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6602:{NFSU2_TR(0x6b6602);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b6604:{NFSU2_TR(0x6b6604);
{goto L6b67dc;}
}
B6b6609:L6b6609:{c.instructions+=3;NFSU2_TR(0x6b6609);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b660c:{NFSU2_TR(0x6b660c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b660f:{NFSU2_TR(0x6b660f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6666;}}
}
B6b6611:L6b6611:{c.instructions+=16;NFSU2_TR(0x6b6611);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6614:{NFSU2_TR(0x6b6614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6617:{NFSU2_TR(0x6b6617);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b661e:{NFSU2_TR(0x6b661e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b6621:{NFSU2_TR(0x6b6621);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b6624:{NFSU2_TR(0x6b6624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6625:{NFSU2_TR(0x6b6625);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6626:{NFSU2_TR(0x6b6626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6627:{NFSU2_TR(0x6b6627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b662a:{NFSU2_TR(0x6b662a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b662d:{NFSU2_TR(0x6b662d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6633:{NFSU2_TR(0x6b6633);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b6634:{NFSU2_TR(0x6b6634);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6635:{NFSU2_TR(0x6b6635);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b663b:{NFSU2_TR(0x6b663b);
__builtin_memmove((R+4),(R+12),4);
}
B6b663d:{NFSU2_TR(0x6b663d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6642ull));
TAIL_STATIC(0x6b322bu,6b3);
}
B6b6642:L6b6642:{c.instructions+=2;NFSU2_TR(0x6b6642);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6645:{NFSU2_TR(0x6b6645);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b664a;}}
}
B6b6647:L6b6647:{c.instructions+=1;NFSU2_TR(0x6b6647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b664a:L6b664a:{c.instructions+=9;NFSU2_TR(0x6b664a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b664d:{NFSU2_TR(0x6b664d);
__builtin_memmove((R+4),(R+28),4);
}
B6b664f:{NFSU2_TR(0x6b664f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b6652:{NFSU2_TR(0x6b6652);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6b6654:{NFSU2_TR(0x6b6654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6657:{NFSU2_TR(0x6b6657);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b665e:{NFSU2_TR(0x6b665e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6661:{NFSU2_TR(0x6b6661);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6664:{NFSU2_TR(0x6b6664);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6611u);}goto L6b6611;}}
}
B6b6666:L6b6666:{c.instructions+=4;NFSU2_TR(0x6b6666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6669:{NFSU2_TR(0x6b6669);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6b666d:{NFSU2_TR(0x6b666d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
}
B6b666f:{NFSU2_TR(0x6b666f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b6673;}}
}
B6b6671:L6b6671:{c.instructions+=1;NFSU2_TR(0x6b6671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6b6673:L6b6673:{c.instructions+=2;NFSU2_TR(0x6b6673);
__builtin_memmove((R+4),(R+12),4);
}
B6b6675:{NFSU2_TR(0x6b6675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b667aull));
TAIL_STATIC(0x6b4c7au,6b4);
}
B6b667a:L6b667a:{c.instructions+=1;NFSU2_TR(0x6b667a);
{goto L6b67dc;}
}
B6b667f:L6b667f:{c.instructions+=5;NFSU2_TR(0x6b667f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b6681:{NFSU2_TR(0x6b6681);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6684:{NFSU2_TR(0x6b6684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6687:{NFSU2_TR(0x6b6687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b668a:{NFSU2_TR(0x6b668a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b67cf;}}
}
B6b6690:L6b6690:{c.instructions+=1;NFSU2_TR(0x6b6690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6693:L6b6693:{c.instructions+=11;NFSU2_TR(0x6b6693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6696:{NFSU2_TR(0x6b6696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6699:{NFSU2_TR(0x6b6699);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b669c:{NFSU2_TR(0x6b669c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b669f:{NFSU2_TR(0x6b669f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b66a2:{NFSU2_TR(0x6b66a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b66a5:{NFSU2_TR(0x6b66a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b66a8:{NFSU2_TR(0x6b66a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b66ae:{NFSU2_TR(0x6b66ae);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b66b3:{NFSU2_TR(0x6b66b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b66b8:{NFSU2_TR(0x6b66b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b66c2;}}
}
B6b66ba:L6b66ba:{c.instructions+=3;NFSU2_TR(0x6b66ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b66bd:{NFSU2_TR(0x6b66bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b66c0:{NFSU2_TR(0x6b66c0);
{goto L6b66cb;}
}
B6b66c2:L6b66c2:{c.instructions+=3;NFSU2_TR(0x6b66c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b66c5:{NFSU2_TR(0x6b66c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b66c8:{NFSU2_TR(0x6b66c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b66cb:L6b66cb:{c.instructions+=14;NFSU2_TR(0x6b66cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b66d1:{NFSU2_TR(0x6b66d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b66d4:{NFSU2_TR(0x6b66d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b66d7:{NFSU2_TR(0x6b66d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b66da:{NFSU2_TR(0x6b66da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b66db:{NFSU2_TR(0x6b66db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b66de:{NFSU2_TR(0x6b66de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b66df:{NFSU2_TR(0x6b66df);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b66e2:{NFSU2_TR(0x6b66e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b66e5:{NFSU2_TR(0x6b66e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b66eb:{NFSU2_TR(0x6b66eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b66ec:{NFSU2_TR(0x6b66ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b66ed:{NFSU2_TR(0x6b66ed);
__builtin_memmove((R+4),(R+12),4);
}
B6b66ef:{NFSU2_TR(0x6b66ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b66f4ull));
TAIL_STATIC(0x6b322bu,6b3);
}
B6b66f4:L6b66f4:{c.instructions+=2;NFSU2_TR(0x6b66f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b66f7:{NFSU2_TR(0x6b66f7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b66fc;}}
}
B6b66f9:L6b66f9:{c.instructions+=1;NFSU2_TR(0x6b66f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b66fc:L6b66fc:{c.instructions+=24;NFSU2_TR(0x6b66fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b66ff:{NFSU2_TR(0x6b66ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6702:{NFSU2_TR(0x6b6702);
__builtin_memmove((R+4),(R+28),4);
}
B6b6704:{NFSU2_TR(0x6b6704);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b6707:{NFSU2_TR(0x6b6707);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6b6709:{NFSU2_TR(0x6b6709);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b670f:{NFSU2_TR(0x6b670f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b6716:{NFSU2_TR(0x6b6716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6719:{NFSU2_TR(0x6b6719);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b671c:{NFSU2_TR(0x6b671c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b671f:{NFSU2_TR(0x6b671f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6720:{NFSU2_TR(0x6b6720);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b6726:{NFSU2_TR(0x6b6726);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6727:{NFSU2_TR(0x6b6727);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b672a:{NFSU2_TR(0x6b672a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b672c:{NFSU2_TR(0x6b672c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b672f:{NFSU2_TR(0x6b672f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6732:{NFSU2_TR(0x6b6732);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6738:{NFSU2_TR(0x6b6738);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b6739:{NFSU2_TR(0x6b6739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b673a:{NFSU2_TR(0x6b673a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b673b:{NFSU2_TR(0x6b673b);
__builtin_memmove((R+4),(R+12),4);
}
B6b673d:{NFSU2_TR(0x6b673d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6740:{NFSU2_TR(0x6b6740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6745ull));
TAIL_STATIC(0x6b4b1bu,6b4);
}
B6b6745:L6b6745:{c.instructions+=3;NFSU2_TR(0x6b6745);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6748:{NFSU2_TR(0x6b6748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b674b:{NFSU2_TR(0x6b674b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b67a2;}}
}
B6b674d:L6b674d:{c.instructions+=16;NFSU2_TR(0x6b674d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6750:{NFSU2_TR(0x6b6750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6753:{NFSU2_TR(0x6b6753);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b675a:{NFSU2_TR(0x6b675a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b675d:{NFSU2_TR(0x6b675d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b6760:{NFSU2_TR(0x6b6760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6761:{NFSU2_TR(0x6b6761);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6762:{NFSU2_TR(0x6b6762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6763:{NFSU2_TR(0x6b6763);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6766:{NFSU2_TR(0x6b6766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6769:{NFSU2_TR(0x6b6769);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b676f:{NFSU2_TR(0x6b676f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b6770:{NFSU2_TR(0x6b6770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6771:{NFSU2_TR(0x6b6771);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6777:{NFSU2_TR(0x6b6777);
__builtin_memmove((R+4),(R+12),4);
}
B6b6779:{NFSU2_TR(0x6b6779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b677eull));
TAIL_STATIC(0x6b322bu,6b3);
}
B6b677e:L6b677e:{c.instructions+=2;NFSU2_TR(0x6b677e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6781:{NFSU2_TR(0x6b6781);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6786;}}
}
B6b6783:L6b6783:{c.instructions+=1;NFSU2_TR(0x6b6783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6786:L6b6786:{c.instructions+=9;NFSU2_TR(0x6b6786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6789:{NFSU2_TR(0x6b6789);
__builtin_memmove((R+4),(R+28),4);
}
B6b678b:{NFSU2_TR(0x6b678b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b678e:{NFSU2_TR(0x6b678e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6b6790:{NFSU2_TR(0x6b6790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6793:{NFSU2_TR(0x6b6793);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b679a:{NFSU2_TR(0x6b679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b679d:{NFSU2_TR(0x6b679d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b67a0:{NFSU2_TR(0x6b67a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b674du);}goto L6b674d;}}
}
B6b67a2:L6b67a2:{c.instructions+=2;NFSU2_TR(0x6b67a2);
__builtin_memmove((R+4),(R+12),4);
}
B6b67a4:{NFSU2_TR(0x6b67a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b67a9ull));
TAIL_STATIC(0x6b4c7au,6b4);
}
B6b67a9:L6b67a9:{c.instructions+=10;NFSU2_TR(0x6b67a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b67ac:{NFSU2_TR(0x6b67ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b67b2:{NFSU2_TR(0x6b67b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b67b5:{NFSU2_TR(0x6b67b5);
__builtin_memmove((R+4),(R+8),4);
}
B6b67b7:{NFSU2_TR(0x6b67b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b67ba:{NFSU2_TR(0x6b67ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b67bd:{NFSU2_TR(0x6b67bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b67c0:{NFSU2_TR(0x6b67c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b67c3:{NFSU2_TR(0x6b67c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b67c6:{NFSU2_TR(0x6b67c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6693u);}goto L6b6693;}}
}
B6b67cc:L6b67cc:{c.instructions+=1;NFSU2_TR(0x6b67cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b67cf:L6b67cf:{c.instructions+=4;NFSU2_TR(0x6b67cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b67d2:{NFSU2_TR(0x6b67d2);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b67d6:{NFSU2_TR(0x6b67d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
}
B6b67d8:{NFSU2_TR(0x6b67d8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b67dc;}}
}
B6b67da:L6b67da:{c.instructions+=1;NFSU2_TR(0x6b67da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b67dc:L6b67dc:{c.instructions+=4;NFSU2_TR(0x6b67dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b67df:{NFSU2_TR(0x6b67df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b67e2:{NFSU2_TR(0x6b67e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b67e8:{NFSU2_TR(0x6b67e8);
if(r1(R+512)){TAIL_STATIC(0x6b5e5bu,6b5);}
}
B6b67ee:L6b67ee:{c.instructions+=3;NFSU2_TR(0x6b67ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b67f0:{NFSU2_TR(0x6b67f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b67f6:{NFSU2_TR(0x6b67f6);
if(r1(R+518)){{goto L6b681c;}}
}
B6b67f8:L6b67f8:{c.instructions+=4;NFSU2_TR(0x6b67f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b67fe:{NFSU2_TR(0x6b67fe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b6803:{NFSU2_TR(0x6b6803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6808:{NFSU2_TR(0x6b6808);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b681c;}}
}
B6b680a:L6b680a:{c.instructions+=2;NFSU2_TR(0x6b680a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b680d:{NFSU2_TR(0x6b680d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b681c;}}
}
B6b680f:L6b680f:{c.instructions+=2;NFSU2_TR(0x6b680f);
__builtin_memmove((R+4),(R+12),4);
}
B6b6811:{NFSU2_TR(0x6b6811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6816ull));
TAIL_STATIC(0x6b58aau,6b5);
}
B6b6816:L6b6816:{c.instructions+=2;NFSU2_TR(0x6b6816);
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
B6b6818:{NFSU2_TR(0x6b6818);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b681e;}}
}
B6b681a:L6b681a:{c.instructions+=1;NFSU2_TR(0x6b681a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b681c:L6b681c:{c.instructions+=1;NFSU2_TR(0x6b681c);
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
B6b681e:L6b681e:{c.instructions+=5;NFSU2_TR(0x6b681e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b681f:{NFSU2_TR(0x6b681f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b6820:{NFSU2_TR(0x6b6820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b6821:{NFSU2_TR(0x6b6821);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b6822:{NFSU2_TR(0x6b6822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b6825:L6b6825:{c.instructions+=2;NFSU2_TR(0x6b6825);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6829:{NFSU2_TR(0x6b6829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b682f:L6b682f:{c.instructions+=2;NFSU2_TR(0x6b682f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6833:{NFSU2_TR(0x6b6833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b6839:L6b6839:{c.instructions+=2;NFSU2_TR(0x6b6839);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b683f:{NFSU2_TR(0x6b683f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6040u);}goto L6b6040;}
}
B6b6844:L6b6844:{c.instructions+=2;NFSU2_TR(0x6b6844);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6847:{NFSU2_TR(0x6b6847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b684d:L6b684d:{c.instructions+=2;NFSU2_TR(0x6b684d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6850:{NFSU2_TR(0x6b6850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b6856:L6b6856:{c.instructions+=2;NFSU2_TR(0x6b6856);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b685c:{NFSU2_TR(0x6b685c);
{goto L6b6885;}
}
B6b685e:L6b685e:{c.instructions+=5;NFSU2_TR(0x6b685e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6864:{NFSU2_TR(0x6b6864);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b6869:{NFSU2_TR(0x6b6869);
w4(R+4,u32(0x104ull));
}
B6b686e:{NFSU2_TR(0x6b686e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6870:{NFSU2_TR(0x6b6870);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b687f;}}
}
B6b6872:L6b6872:{c.instructions+=2;NFSU2_TR(0x6b6872);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6875:{NFSU2_TR(0x6b6875);
if(r1(R+518)){{goto L6b687f;}}
}
B6b6877:L6b6877:{c.instructions+=2;NFSU2_TR(0x6b6877);
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
B6b6879:{NFSU2_TR(0x6b6879);
if(r1(R+518)){TAIL_STATIC(0x6b5a61u,6b5);}
}
B6b687f:L6b687f:{c.instructions+=1;NFSU2_TR(0x6b687f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6885:L6b6885:{c.instructions+=1;NFSU2_TR(0x6b6885);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6888:L6b6888:{c.instructions+=4;NFSU2_TR(0x6b6888);
u8 U[4];
w4(U+0,u32(0x7bc840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b688d:{NFSU2_TR(0x6b688d);
u8 U[4];
w4(U+0,u32(0x11a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6892:{NFSU2_TR(0x6b6892);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6895:{NFSU2_TR(0x6b6895);
TAIL_STATIC(0x6b5a58u,6b5);
}
B6b689a:L6b689a:{c.instructions+=2;NFSU2_TR(0x6b689a);
w4(R+0,u32(0x8007000eull));
}
B6b689f:{NFSU2_TR(0x6b689f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b681eu);}goto L6b681e;}
}
B6b68a4:L6b68a4:{c.instructions+=12;NFSU2_TR(0x6b68a4);
__builtin_memmove((R+28),(R+28),4);
}
B6b68a6:{NFSU2_TR(0x6b68a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b68a7:{NFSU2_TR(0x6b68a7);
__builtin_memmove((R+20),(R+16),4);
}
B6b68a9:{NFSU2_TR(0x6b68a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6b68ac:{NFSU2_TR(0x6b68ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b68ad:{NFSU2_TR(0x6b68ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b68af:{NFSU2_TR(0x6b68af);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b68b2:{NFSU2_TR(0x6b68b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b68b3:{NFSU2_TR(0x6b68b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b68b4:{NFSU2_TR(0x6b68b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b68b7:{NFSU2_TR(0x6b68b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b68ba:{NFSU2_TR(0x6b68ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6988;}}
}
B6b68c0:L6b68c0:{c.instructions+=5;NFSU2_TR(0x6b68c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b68c3:{NFSU2_TR(0x6b68c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b68c6:{NFSU2_TR(0x6b68c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b68c8:{NFSU2_TR(0x6b68c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b68cb:{NFSU2_TR(0x6b68cb);
if(r1(R+518)){{goto L6b6978;}}
}
B6b68d1:L6b68d1:{c.instructions+=3;NFSU2_TR(0x6b68d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b68d4:{NFSU2_TR(0x6b68d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b68d7:{NFSU2_TR(0x6b68d7);
if(r1(R+512)){{goto L6b6978;}}
}
B6b68dd:L6b68dd:{c.instructions+=5;NFSU2_TR(0x6b68dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b68df:{NFSU2_TR(0x6b68df);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b68e2:{NFSU2_TR(0x6b68e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b68e9:{NFSU2_TR(0x6b68e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b68ec:{NFSU2_TR(0x6b68ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6991;}}
}
B6b68f2:L6b68f2:{c.instructions+=3;NFSU2_TR(0x6b68f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b68f5:{NFSU2_TR(0x6b68f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b68f8:{NFSU2_TR(0x6b68f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b68fb:L6b68fb:{c.instructions+=7;NFSU2_TR(0x6b68fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b68fe:{NFSU2_TR(0x6b68fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b6901:{NFSU2_TR(0x6b6901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6904:{NFSU2_TR(0x6b6904);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b6907:{NFSU2_TR(0x6b6907);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6909:{NFSU2_TR(0x6b6909);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b690c:{NFSU2_TR(0x6b690c);
if(r1(R+518)){{goto L6b692c;}}
}
B6b690e:L6b690e:{c.instructions+=2;NFSU2_TR(0x6b690e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6911:{NFSU2_TR(0x6b6911);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b6960;}}
}
B6b6913:L6b6913:{c.instructions+=1;NFSU2_TR(0x6b6913);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6916:L6b6916:{c.instructions+=3;NFSU2_TR(0x6b6916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6918:{NFSU2_TR(0x6b6918);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b691a:{NFSU2_TR(0x6b691a);
if(r1(R+518)){{goto L6b695d;}}
}
B6b691c:L6b691c:{c.instructions+=2;NFSU2_TR(0x6b691c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b691f:{NFSU2_TR(0x6b691f);
if(r1(R+518)){{goto L6b695d;}}
}
B6b6921:L6b6921:{c.instructions+=4;NFSU2_TR(0x6b6921);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b6922:{NFSU2_TR(0x6b6922);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b6925:{NFSU2_TR(0x6b6925);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b6928:{NFSU2_TR(0x6b6928);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6916u);}goto L6b6916;}}
}
B6b692a:L6b692a:{c.instructions+=1;NFSU2_TR(0x6b692a);
{goto L6b695d;}
}
B6b692c:L6b692c:{c.instructions+=2;NFSU2_TR(0x6b692c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b692f:{NFSU2_TR(0x6b692f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b6960;}}
}
B6b6931:L6b6931:{c.instructions+=1;NFSU2_TR(0x6b6931);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b6934:L6b6934:{c.instructions+=3;NFSU2_TR(0x6b6934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6936:{NFSU2_TR(0x6b6936);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6938:{NFSU2_TR(0x6b6938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6940;}}
}
B6b693a:L6b693a:{c.instructions+=2;NFSU2_TR(0x6b693a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b693e:{NFSU2_TR(0x6b693e);
if(r1(R+518)){{goto L6b695d;}}
}
B6b6940:L6b6940:{c.instructions+=2;NFSU2_TR(0x6b6940);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6943:{NFSU2_TR(0x6b6943);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6954;}}
}
B6b6945:L6b6945:{c.instructions+=5;NFSU2_TR(0x6b6945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6948:{NFSU2_TR(0x6b6948);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b694b:{NFSU2_TR(0x6b694b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b694f:{NFSU2_TR(0x6b694f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6952:{NFSU2_TR(0x6b6952);
if(r1(R+518)){{goto L6b695d;}}
}
B6b6954:L6b6954:{c.instructions+=4;NFSU2_TR(0x6b6954);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b6955:{NFSU2_TR(0x6b6955);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b6958:{NFSU2_TR(0x6b6958);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b695b:{NFSU2_TR(0x6b695b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6934u);}goto L6b6934;}}
}
B6b695d:L6b695d:{c.instructions+=1;NFSU2_TR(0x6b695d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6960:L6b6960:{c.instructions+=1;NFSU2_TR(0x6b6960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6966;}}
}
B6b6962:L6b6962:{c.instructions+=1;NFSU2_TR(0x6b6962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6966:L6b6966:{c.instructions+=5;NFSU2_TR(0x6b6966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6969:{NFSU2_TR(0x6b6969);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b696a:{NFSU2_TR(0x6b696a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b696d:{NFSU2_TR(0x6b696d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6970:{NFSU2_TR(0x6b6970);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b68fbu);}goto L6b68fb;}}
}
B6b6972:L6b6972:{c.instructions+=2;NFSU2_TR(0x6b6972);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b6976:{NFSU2_TR(0x6b6976);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6991;}}
}
B6b6978:L6b6978:{c.instructions+=5;NFSU2_TR(0x6b6978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b697b:{NFSU2_TR(0x6b697b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b697c:{NFSU2_TR(0x6b697c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b697f:{NFSU2_TR(0x6b697f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6982:{NFSU2_TR(0x6b6982);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b68c0u);}goto L6b68c0;}}
}
B6b6988:L6b6988:{c.instructions+=1;NFSU2_TR(0x6b6988);
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
B6b698a:L6b698a:{c.instructions+=5;NFSU2_TR(0x6b698a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b698b:{NFSU2_TR(0x6b698b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b698c:{NFSU2_TR(0x6b698c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b698d:{NFSU2_TR(0x6b698d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b698e:{NFSU2_TR(0x6b698e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b6991:L6b6991:{c.instructions+=4;NFSU2_TR(0x6b6991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6994:{NFSU2_TR(0x6b6994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6997:{NFSU2_TR(0x6b6997);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b699a:{NFSU2_TR(0x6b699a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b698au);}goto L6b698a;}
}
B6b699c:L6b699c:{c.instructions+=21;NFSU2_TR(0x6b699c);
__builtin_memmove((R+28),(R+28),4);
}
B6b699e:{NFSU2_TR(0x6b699e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b699f:{NFSU2_TR(0x6b699f);
__builtin_memmove((R+20),(R+16),4);
}
B6b69a1:{NFSU2_TR(0x6b69a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69a2:{NFSU2_TR(0x6b69a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69a3:{NFSU2_TR(0x6b69a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69a6:{NFSU2_TR(0x6b69a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69a7:{NFSU2_TR(0x6b69a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b69aa:{NFSU2_TR(0x6b69aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69ab:{NFSU2_TR(0x6b69ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b69ad:{NFSU2_TR(0x6b69ad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b69b3:{NFSU2_TR(0x6b69b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69b4:{NFSU2_TR(0x6b69b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b69b6:{NFSU2_TR(0x6b69b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b69b7:{NFSU2_TR(0x6b69b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b69b9:{NFSU2_TR(0x6b69b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69bc:{NFSU2_TR(0x6b69bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b69be:{NFSU2_TR(0x6b69be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69c1:{NFSU2_TR(0x6b69c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b69c4:{NFSU2_TR(0x6b69c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b69c6:{NFSU2_TR(0x6b69c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b69d2;}}
}
B6b69c8:L6b69c8:{c.instructions+=2;NFSU2_TR(0x6b69c8);
w4(R+0,u32(0x80004005ull));
}
B6b69cd:{NFSU2_TR(0x6b69cd);
{goto L6b6ae2;}
}
B6b69d2:L6b69d2:{c.instructions+=6;NFSU2_TR(0x6b69d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69d5:{NFSU2_TR(0x6b69d5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b69d7:{NFSU2_TR(0x6b69d7);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b69d7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b69d7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b69d9:{NFSU2_TR(0x6b69d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b69dc:{NFSU2_TR(0x6b69dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b69df:{NFSU2_TR(0x6b69df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6a28;}}
}
B6b69e1:L6b69e1:{c.instructions+=3;NFSU2_TR(0x6b69e1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b69e3:{NFSU2_TR(0x6b69e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b69e6:{NFSU2_TR(0x6b69e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6a28;}}
}
B6b69e8:L6b69e8:{c.instructions+=1;NFSU2_TR(0x6b69e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b69eb:L6b69eb:{c.instructions+=3;NFSU2_TR(0x6b69eb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b69ed:{NFSU2_TR(0x6b69ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b69ef:{NFSU2_TR(0x6b69ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6a15;}}
}
B6b69f1:L6b69f1:{c.instructions+=4;NFSU2_TR(0x6b69f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69f4:{NFSU2_TR(0x6b69f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b69f7:{NFSU2_TR(0x6b69f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b69fa:{NFSU2_TR(0x6b69fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b69fd:L6b69fd:{c.instructions+=4;NFSU2_TR(0x6b69fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b69ff:{NFSU2_TR(0x6b69ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b6a02:{NFSU2_TR(0x6b6a02);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6a05:{NFSU2_TR(0x6b6a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6af8;}}
}
B6b6a0b:L6b6a0b:{c.instructions+=4;NFSU2_TR(0x6b6a0b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b6a0c:{NFSU2_TR(0x6b6a0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b6a0f:{NFSU2_TR(0x6b6a0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6b6a11:{NFSU2_TR(0x6b6a11);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b69fdu);}goto L6b69fd;}}
}
B6b6a13:L6b6a13:{c.instructions+=1;NFSU2_TR(0x6b6a13);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6a15:L6b6a15:{c.instructions+=7;NFSU2_TR(0x6b6a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6a18:{NFSU2_TR(0x6b6a18);
__builtin_memmove((R+0),(R+24),4);
}
B6b6a1a:{NFSU2_TR(0x6b6a1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b6a1d:{NFSU2_TR(0x6b6a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6a20:{NFSU2_TR(0x6b6a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6a23:{NFSU2_TR(0x6b6a23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b6a26:{NFSU2_TR(0x6b6a26);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b69ebu);}goto L6b69eb;}}
}
B6b6a28:L6b6a28:{c.instructions+=4;NFSU2_TR(0x6b6a28);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a2a:{NFSU2_TR(0x6b6a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6a2d:{NFSU2_TR(0x6b6a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6a30:{NFSU2_TR(0x6b6a30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6ae0;}}
}
B6b6a36:L6b6a36:{c.instructions+=9;NFSU2_TR(0x6b6a36);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6a39:{NFSU2_TR(0x6b6a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6a3c:{NFSU2_TR(0x6b6a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6a3f:{NFSU2_TR(0x6b6a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6a40:{NFSU2_TR(0x6b6a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b6a43:{NFSU2_TR(0x6b6a43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6a44:{NFSU2_TR(0x6b6a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6a47:{NFSU2_TR(0x6b6a47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6a4a:{NFSU2_TR(0x6b6a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6a4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b68a4u);}goto L6b68a4;}
}
B6b6a4f:L6b6a4f:{c.instructions+=2;NFSU2_TR(0x6b6a4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6a51:{NFSU2_TR(0x6b6a51);
if(r1(R+518)){{goto L6b6acf;}}
}
B6b6a53:L6b6a53:{c.instructions+=4;NFSU2_TR(0x6b6a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6a55:{NFSU2_TR(0x6b6a55);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b6a5b:{NFSU2_TR(0x6b6a5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6a5f:{NFSU2_TR(0x6b6a5f);
if(r1(R+518)){{goto L6b6a83;}}
}
B6b6a61:L6b6a61:{c.instructions+=2;NFSU2_TR(0x6b6a61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a67:{NFSU2_TR(0x6b6a67);
if(r1(R+518)){{goto L6b6a8b;}}
}
B6b6a69:L6b6a69:{c.instructions+=2;NFSU2_TR(0x6b6a69);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a6f:{NFSU2_TR(0x6b6a6f);
if(r1(R+518)){{goto L6b6a8b;}}
}
B6b6a71:L6b6a71:{c.instructions+=2;NFSU2_TR(0x6b6a71);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a77:{NFSU2_TR(0x6b6a77);
if(r1(R+518)){{goto L6b6a8b;}}
}
B6b6a79:L6b6a79:{c.instructions+=2;NFSU2_TR(0x6b6a79);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a7f:{NFSU2_TR(0x6b6a7f);
if(r1(R+518)){{goto L6b6a8b;}}
}
B6b6a81:L6b6a81:{c.instructions+=1;NFSU2_TR(0x6b6a81);
{goto L6b6acf;}
}
B6b6a83:L6b6a83:{c.instructions+=2;NFSU2_TR(0x6b6a83);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6a89:{NFSU2_TR(0x6b6a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6acf;}}
}
B6b6a8b:L6b6a8b:{c.instructions+=3;NFSU2_TR(0x6b6a8b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b6a8d:{NFSU2_TR(0x6b6a8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6a90:{NFSU2_TR(0x6b6a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6ae9;}}
}
B6b6a92:L6b6a92:{c.instructions+=7;NFSU2_TR(0x6b6a92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6a95:{NFSU2_TR(0x6b6a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6a98:{NFSU2_TR(0x6b6a98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b6a9a:{NFSU2_TR(0x6b6a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6a9d:{NFSU2_TR(0x6b6a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6aa4:{NFSU2_TR(0x6b6aa4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b6aa6:{NFSU2_TR(0x6b6aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6aaf;}}
}
B6b6aa8:L6b6aa8:{c.instructions+=3;NFSU2_TR(0x6b6aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6aab:{NFSU2_TR(0x6b6aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6aad:{NFSU2_TR(0x6b6aad);
{goto L6b6abd;}
}
B6b6aaf:L6b6aaf:{c.instructions+=4;NFSU2_TR(0x6b6aaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6ab1:{NFSU2_TR(0x6b6ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6ab4:{NFSU2_TR(0x6b6ab4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b6aba:{NFSU2_TR(0x6b6aba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6abd:L6b6abd:{c.instructions+=6;NFSU2_TR(0x6b6abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6ac0:{NFSU2_TR(0x6b6ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6ac3:{NFSU2_TR(0x6b6ac3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6ac6:{NFSU2_TR(0x6b6ac6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6b6aca:{NFSU2_TR(0x6b6aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6acd:{NFSU2_TR(0x6b6acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b6acf:L6b6acf:{c.instructions+=5;NFSU2_TR(0x6b6acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ad2:{NFSU2_TR(0x6b6ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6ad5:{NFSU2_TR(0x6b6ad5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6b6ad7:{NFSU2_TR(0x6b6ad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6ada:{NFSU2_TR(0x6b6ada);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6a36u);}goto L6b6a36;}}
}
B6b6ae0:L6b6ae0:{c.instructions+=1;NFSU2_TR(0x6b6ae0);
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
B6b6ae2:L6b6ae2:{c.instructions+=5;NFSU2_TR(0x6b6ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b6ae3:{NFSU2_TR(0x6b6ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b6ae4:{NFSU2_TR(0x6b6ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b6ae5:{NFSU2_TR(0x6b6ae5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b6ae6:{NFSU2_TR(0x6b6ae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b6ae9:L6b6ae9:{c.instructions+=6;NFSU2_TR(0x6b6ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6aec:{NFSU2_TR(0x6b6aec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b6aee:{NFSU2_TR(0x6b6aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6af1:{NFSU2_TR(0x6b6af1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b6af3:{NFSU2_TR(0x6b6af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6af6:{NFSU2_TR(0x6b6af6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b6af8:L6b6af8:{c.instructions+=3;NFSU2_TR(0x6b6af8);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b6afa:{NFSU2_TR(0x6b6afa);
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
B6b6afb:{NFSU2_TR(0x6b6afb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6ae2u);}goto L6b6ae2;}
}
B6b6afd:L6b6afd:{c.instructions+=13;NFSU2_TR(0x6b6afd);
__builtin_memmove((R+28),(R+28),4);
}
B6b6aff:{NFSU2_TR(0x6b6aff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b00:{NFSU2_TR(0x6b6b00);
__builtin_memmove((R+20),(R+16),4);
}
B6b6b02:{NFSU2_TR(0x6b6b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B6b6b05:{NFSU2_TR(0x6b6b05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b06:{NFSU2_TR(0x6b6b06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b6b08:{NFSU2_TR(0x6b6b08);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6b0b:{NFSU2_TR(0x6b6b0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b0c:{NFSU2_TR(0x6b6b0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b0d:{NFSU2_TR(0x6b6b0d);
__builtin_memmove((R+24),(R+4),4);
}
B6b6b0f:{NFSU2_TR(0x6b6b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6b12:{NFSU2_TR(0x6b6b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6b15:{NFSU2_TR(0x6b6b15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6f57;}}
}
B6b6b1b:L6b6b1b:{c.instructions+=2;NFSU2_TR(0x6b6b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6b1e:{NFSU2_TR(0x6b6b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6b21:L6b6b21:{c.instructions+=4;NFSU2_TR(0x6b6b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6b24:{NFSU2_TR(0x6b6b24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b6b26:{NFSU2_TR(0x6b6b26);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6b28:{NFSU2_TR(0x6b6b28);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6b2e:L6b6b2e:{c.instructions+=17;NFSU2_TR(0x6b6b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b6b30:{NFSU2_TR(0x6b6b30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b32:{NFSU2_TR(0x6b6b32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b34:{NFSU2_TR(0x6b6b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6b37:{NFSU2_TR(0x6b6b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b38:{NFSU2_TR(0x6b6b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6b3b:{NFSU2_TR(0x6b6b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b3c:{NFSU2_TR(0x6b6b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6b3f:{NFSU2_TR(0x6b6b3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b40:{NFSU2_TR(0x6b6b40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b41:{NFSU2_TR(0x6b6b41);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b43:{NFSU2_TR(0x6b6b43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6b46:{NFSU2_TR(0x6b6b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6b49:{NFSU2_TR(0x6b6b49);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6b6b4f:{NFSU2_TR(0x6b6b4f);
__builtin_memmove((R+4),(R+24),4);
}
B6b6b51:{NFSU2_TR(0x6b6b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6b54:{NFSU2_TR(0x6b6b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6b59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b699cu);}goto L6b699c;}
}
B6b6b59:L6b6b59:{c.instructions+=2;NFSU2_TR(0x6b6b59);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6b5d:{NFSU2_TR(0x6b6b5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6c17;}}
}
B6b6b63:L6b6b63:{c.instructions+=2;NFSU2_TR(0x6b6b63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6b66:{NFSU2_TR(0x6b6b66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f44;}}
}
B6b6b6c:L6b6b6c:{c.instructions+=11;NFSU2_TR(0x6b6b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b6b6f:{NFSU2_TR(0x6b6b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6b75:{NFSU2_TR(0x6b6b75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6b7b:{NFSU2_TR(0x6b6b7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b7d:{NFSU2_TR(0x6b6b7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b7f:{NFSU2_TR(0x6b6b7f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6b6b82:{NFSU2_TR(0x6b6b82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b83:{NFSU2_TR(0x6b6b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b84:{NFSU2_TR(0x6b6b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b85:{NFSU2_TR(0x6b6b85);
__builtin_memmove((R+4),(R+24),4);
}
B6b6b87:{NFSU2_TR(0x6b6b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6b8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b68a4u);}goto L6b68a4;}
}
B6b6b8c:L6b6b8c:{c.instructions+=9;NFSU2_TR(0x6b6b8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b8e:{NFSU2_TR(0x6b6b8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b90:{NFSU2_TR(0x6b6b90);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6b6b93:{NFSU2_TR(0x6b6b93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6b94:{NFSU2_TR(0x6b6b94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6b9a:{NFSU2_TR(0x6b6b9a);
__builtin_memmove((R+4),(R+24),4);
}
B6b6b9c:{NFSU2_TR(0x6b6b9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6ba2:{NFSU2_TR(0x6b6ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ba5:{NFSU2_TR(0x6b6ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6baaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b68a4u);}goto L6b68a4;}
}
B6b6baa:L6b6baa:{c.instructions+=3;NFSU2_TR(0x6b6baa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6bae:{NFSU2_TR(0x6b6bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6bb1:{NFSU2_TR(0x6b6bb1);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6bb7:L6b6bb7:{c.instructions+=2;NFSU2_TR(0x6b6bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6bb9:{NFSU2_TR(0x6b6bb9);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6bbf:L6b6bbf:{c.instructions+=15;NFSU2_TR(0x6b6bbf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6bc1:{NFSU2_TR(0x6b6bc1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b6bc2:{NFSU2_TR(0x6b6bc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bc3:{NFSU2_TR(0x6b6bc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bc4:{NFSU2_TR(0x6b6bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bc7:{NFSU2_TR(0x6b6bc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bc8:{NFSU2_TR(0x6b6bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bcb:{NFSU2_TR(0x6b6bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bcc:{NFSU2_TR(0x6b6bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bcf:{NFSU2_TR(0x6b6bcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bd0:{NFSU2_TR(0x6b6bd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6bd3:{NFSU2_TR(0x6b6bd3);
__builtin_memmove((R+4),(R+24),4);
}
B6b6bd5:{NFSU2_TR(0x6b6bd5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bd7:{NFSU2_TR(0x6b6bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6bda:{NFSU2_TR(0x6b6bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6bdfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b699cu);}goto L6b699c;}
}
B6b6bdf:L6b6bdf:{c.instructions+=2;NFSU2_TR(0x6b6bdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6be3:{NFSU2_TR(0x6b6be3);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6be9:L6b6be9:{c.instructions+=13;NFSU2_TR(0x6b6be9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bea:{NFSU2_TR(0x6b6bea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6beb:{NFSU2_TR(0x6b6beb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bee:{NFSU2_TR(0x6b6bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bef:{NFSU2_TR(0x6b6bef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bf2:{NFSU2_TR(0x6b6bf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bf3:{NFSU2_TR(0x6b6bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6bf6:{NFSU2_TR(0x6b6bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bf7:{NFSU2_TR(0x6b6bf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6bfa:{NFSU2_TR(0x6b6bfa);
__builtin_memmove((R+4),(R+24),4);
}
B6b6bfc:{NFSU2_TR(0x6b6bfc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6bfe:{NFSU2_TR(0x6b6bfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6c01:{NFSU2_TR(0x6b6c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6c06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b699cu);}goto L6b699c;}
}
B6b6c06:L6b6c06:{c.instructions+=3;NFSU2_TR(0x6b6c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6c09:{NFSU2_TR(0x6b6c09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6c0c:{NFSU2_TR(0x6b6c0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f44;}}
}
B6b6c12:L6b6c12:{c.instructions+=2;NFSU2_TR(0x6b6c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b6c15:{NFSU2_TR(0x6b6c15);
{goto L6b6c20;}
}
B6b6c17:L6b6c17:{c.instructions+=2;NFSU2_TR(0x6b6c17);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6c1a:{NFSU2_TR(0x6b6c1a);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6c20:L6b6c20:{c.instructions+=2;NFSU2_TR(0x6b6c20);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6c24:{NFSU2_TR(0x6b6c24);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6c2a:L6b6c2a:{c.instructions+=6;NFSU2_TR(0x6b6c2a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6c2c:{NFSU2_TR(0x6b6c2c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b6c2e:{NFSU2_TR(0x6b6c2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b6c2f:{NFSU2_TR(0x6b6c2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6c31:{NFSU2_TR(0x6b6c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6c34:{NFSU2_TR(0x6b6c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6cf3;}}
}
B6b6c3a:L6b6c3a:{c.instructions+=4;NFSU2_TR(0x6b6c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6c3d:{NFSU2_TR(0x6b6c3d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b6c42:{NFSU2_TR(0x6b6c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6c47:{NFSU2_TR(0x6b6c47);
if(r1(R+518)){{goto L6b6c54;}}
}
B6b6c49:L6b6c49:{c.instructions+=2;NFSU2_TR(0x6b6c49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6c4e:{NFSU2_TR(0x6b6c4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f44;}}
}
B6b6c54:L6b6c54:{c.instructions+=4;NFSU2_TR(0x6b6c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6c57:{NFSU2_TR(0x6b6c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b6c5a:{NFSU2_TR(0x6b6c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6c61:{NFSU2_TR(0x6b6c61);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6b6c64:L6b6c64:{c.instructions+=4;NFSU2_TR(0x6b6c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6c66:{NFSU2_TR(0x6b6c66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b6c69:{NFSU2_TR(0x6b6c69);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6c6c:{NFSU2_TR(0x6b6c6c);
if(r1(R+518)){{goto L6b6c72;}}
}
B6b6c6e:L6b6c6e:{c.instructions+=1;NFSU2_TR(0x6b6c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6c72:L6b6c72:{c.instructions+=3;NFSU2_TR(0x6b6c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6c75:{NFSU2_TR(0x6b6c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6c77:{NFSU2_TR(0x6b6c77);
if(r1(R+518)){{goto L6b6c85;}}
}
B6b6c79:L6b6c79:{c.instructions+=2;NFSU2_TR(0x6b6c79);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6c7f:{NFSU2_TR(0x6b6c7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f70;}}
}
B6b6c85:L6b6c85:{c.instructions+=4;NFSU2_TR(0x6b6c85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b6c86:{NFSU2_TR(0x6b6c86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b6c89:{NFSU2_TR(0x6b6c89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6b6c8c:{NFSU2_TR(0x6b6c8c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6c64u);}goto L6b6c64;}}
}
B6b6c8e:L6b6c8e:{c.instructions+=2;NFSU2_TR(0x6b6c8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6c92:{NFSU2_TR(0x6b6c92);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6c98:L6b6c98:{c.instructions+=4;NFSU2_TR(0x6b6c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6c9e:{NFSU2_TR(0x6b6c9e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b6ca3:{NFSU2_TR(0x6b6ca3);
w1(R+512,u8((r4(R+0))<(u32(0x102ull))));
}
B6b6ca8:{NFSU2_TR(0x6b6ca8);
if(r1(R+512)){{goto L6b6f77;}}
}
B6b6cae:L6b6cae:{c.instructions+=2;NFSU2_TR(0x6b6cae);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cb0:{NFSU2_TR(0x6b6cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6cb5ull));
TAIL_STATIC(0x699317u,699);
}
B6b6cb5:L6b6cb5:{c.instructions+=3;NFSU2_TR(0x6b6cb5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6cb7:{NFSU2_TR(0x6b6cb7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6cb9:{NFSU2_TR(0x6b6cb9);
if(r1(R+518)){{goto L6b6cc7;}}
}
B6b6cbb:L6b6cbb:{c.instructions+=2;NFSU2_TR(0x6b6cbb);
__builtin_memmove((R+4),(R+0),4);
}
B6b6cbd:{NFSU2_TR(0x6b6cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6cc2ull));
TAIL_STATIC(0x698e7du,698);
}
B6b6cc2:L6b6cc2:{c.instructions+=2;NFSU2_TR(0x6b6cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6cc5:{NFSU2_TR(0x6b6cc5);
{goto L6b6cca;}
}
B6b6cc7:L6b6cc7:{c.instructions+=1;NFSU2_TR(0x6b6cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6cca:L6b6cca:{c.instructions+=3;NFSU2_TR(0x6b6cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6ccd:{NFSU2_TR(0x6b6ccd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6ccf:{NFSU2_TR(0x6b6ccf);
if(r1(R+518)){{goto L6b6fca;}}
}
B6b6cd5:L6b6cd5:{c.instructions+=5;NFSU2_TR(0x6b6cd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cd6:{NFSU2_TR(0x6b6cd6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cd8:{NFSU2_TR(0x6b6cd8);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cda:{NFSU2_TR(0x6b6cda);
u8 U[4];
w4(U+0,u32(0x72600003ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cdf:{NFSU2_TR(0x6b6cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6ce4ull));
TAIL_STATIC(0x699362u,699);
}
B6b6ce4:L6b6ce4:{c.instructions+=3;NFSU2_TR(0x6b6ce4);
__builtin_memmove((R+28),(R+0),4);
}
B6b6ce6:{NFSU2_TR(0x6b6ce6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b6ce8:{NFSU2_TR(0x6b6ce8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b6f59;}}
}
B6b6cee:L6b6cee:{c.instructions+=1;NFSU2_TR(0x6b6cee);
{goto L6b6dbf;}
}
B6b6cf3:L6b6cf3:{c.instructions+=4;NFSU2_TR(0x6b6cf3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6cf5:{NFSU2_TR(0x6b6cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b6cf6:{NFSU2_TR(0x6b6cf6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6cf8:{NFSU2_TR(0x6b6cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f44;}}
}
B6b6cfe:L6b6cfe:{c.instructions+=4;NFSU2_TR(0x6b6cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6d01:{NFSU2_TR(0x6b6d01);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b6d07:{NFSU2_TR(0x6b6d07);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6d0d:{NFSU2_TR(0x6b6d0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6f44;}}
}
B6b6d13:L6b6d13:{c.instructions+=8;NFSU2_TR(0x6b6d13);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6d15:{NFSU2_TR(0x6b6d15);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6d17:{NFSU2_TR(0x6b6d17);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b6d18:{NFSU2_TR(0x6b6d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d1b:{NFSU2_TR(0x6b6d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d1e:{NFSU2_TR(0x6b6d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d21:{NFSU2_TR(0x6b6d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d24:{NFSU2_TR(0x6b6d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d27:L6b6d27:{c.instructions+=4;NFSU2_TR(0x6b6d27);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6d29:{NFSU2_TR(0x6b6d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6d2c:{NFSU2_TR(0x6b6d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6d2f:{NFSU2_TR(0x6b6d2f);
if(r1(R+518)){{goto L6b6d34;}}
}
B6b6d31:L6b6d31:{c.instructions+=1;NFSU2_TR(0x6b6d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6d34:L6b6d34:{c.instructions+=6;NFSU2_TR(0x6b6d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6d37:{NFSU2_TR(0x6b6d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b6d39:{NFSU2_TR(0x6b6d39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6d3c:{NFSU2_TR(0x6b6d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6d3f:{NFSU2_TR(0x6b6d3f);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b6d43:{NFSU2_TR(0x6b6d43);
if(r1(R+518)){{goto L6b6d49;}}
}
B6b6d45:L6b6d45:{c.instructions+=1;NFSU2_TR(0x6b6d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d49:L6b6d49:{c.instructions+=2;NFSU2_TR(0x6b6d49);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b6d4d:{NFSU2_TR(0x6b6d4d);
if(r1(R+518)){{goto L6b6d51;}}
}
B6b6d4f:L6b6d4f:{c.instructions+=1;NFSU2_TR(0x6b6d4f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6d51:L6b6d51:{c.instructions+=2;NFSU2_TR(0x6b6d51);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6d55:{NFSU2_TR(0x6b6d55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6fa4;}}
}
B6b6d5b:L6b6d5b:{c.instructions+=3;NFSU2_TR(0x6b6d5b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b6d5c:{NFSU2_TR(0x6b6d5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6b6d5f:{NFSU2_TR(0x6b6d5f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6d27u);}goto L6b6d27;}}
}
B6b6d61:L6b6d61:{c.instructions+=2;NFSU2_TR(0x6b6d61);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6d65:{NFSU2_TR(0x6b6d65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b6d6f;}}
}
B6b6d67:L6b6d67:{c.instructions+=2;NFSU2_TR(0x6b6d67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6d69:{NFSU2_TR(0x6b6d69);
if(r1(R+518)){{goto L6b6f44;}}
}
B6b6d6f:L6b6d6f:{c.instructions+=2;NFSU2_TR(0x6b6d6f);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6d71:{NFSU2_TR(0x6b6d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6d76ull));
TAIL_STATIC(0x699317u,699);
}
B6b6d76:L6b6d76:{c.instructions+=2;NFSU2_TR(0x6b6d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6d78:{NFSU2_TR(0x6b6d78);
if(r1(R+518)){{goto L6b6d86;}}
}
B6b6d7a:L6b6d7a:{c.instructions+=2;NFSU2_TR(0x6b6d7a);
__builtin_memmove((R+4),(R+0),4);
}
B6b6d7c:{NFSU2_TR(0x6b6d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6d81ull));
TAIL_STATIC(0x698e7du,698);
}
B6b6d81:L6b6d81:{c.instructions+=2;NFSU2_TR(0x6b6d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d84:{NFSU2_TR(0x6b6d84);
{goto L6b6d8a;}
}
B6b6d86:L6b6d86:{c.instructions+=1;NFSU2_TR(0x6b6d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6d8a:L6b6d8a:{c.instructions+=2;NFSU2_TR(0x6b6d8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6d8e:{NFSU2_TR(0x6b6d8e);
if(r1(R+518)){{goto L6b6fca;}}
}
B6b6d94:L6b6d94:{c.instructions+=10;NFSU2_TR(0x6b6d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6d97:{NFSU2_TR(0x6b6d97);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B6b6d99:{NFSU2_TR(0x6b6d99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6d9b:{NFSU2_TR(0x6b6d9b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b6d9d:{NFSU2_TR(0x6b6d9d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6d9f:{NFSU2_TR(0x6b6d9f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x100000ull))));
}
B6b6da5:{NFSU2_TR(0x6b6da5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6da7:{NFSU2_TR(0x6b6da7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x72700002ull))));
}
B6b6dad:{NFSU2_TR(0x6b6dad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6dae:{NFSU2_TR(0x6b6dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6db3ull));
TAIL_STATIC(0x699362u,699);
}
B6b6db3:L6b6db3:{c.instructions+=3;NFSU2_TR(0x6b6db3);
__builtin_memmove((R+28),(R+0),4);
}
B6b6db5:{NFSU2_TR(0x6b6db5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b6db7:{NFSU2_TR(0x6b6db7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b6f59;}}
}
B6b6dbd:L6b6dbd:{c.instructions+=1;NFSU2_TR(0x6b6dbd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6dbf:L6b6dbf:{c.instructions+=1;NFSU2_TR(0x6b6dbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b6dc1:L6b6dc1:{c.instructions+=10;NFSU2_TR(0x6b6dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6dc4:{NFSU2_TR(0x6b6dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6dc6:{NFSU2_TR(0x6b6dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6dc9:{NFSU2_TR(0x6b6dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6dcc:{NFSU2_TR(0x6b6dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b6dcf:{NFSU2_TR(0x6b6dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6dd2:{NFSU2_TR(0x6b6dd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6dd5:{NFSU2_TR(0x6b6dd5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b6dd8:{NFSU2_TR(0x6b6dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6b6ddb:{NFSU2_TR(0x6b6ddb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6dc1u);}goto L6b6dc1;}}
}
B6b6ddd:L6b6ddd:{c.instructions+=16;NFSU2_TR(0x6b6ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6de0:{NFSU2_TR(0x6b6de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6de2:{NFSU2_TR(0x6b6de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6de5:{NFSU2_TR(0x6b6de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6de8:{NFSU2_TR(0x6b6de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6deb:{NFSU2_TR(0x6b6deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6dee:{NFSU2_TR(0x6b6dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6df0:{NFSU2_TR(0x6b6df0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b6df3:{NFSU2_TR(0x6b6df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6df6:{NFSU2_TR(0x6b6df6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6df9:{NFSU2_TR(0x6b6df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6dfc:{NFSU2_TR(0x6b6dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6dff:{NFSU2_TR(0x6b6dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6e02:{NFSU2_TR(0x6b6e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6e05:{NFSU2_TR(0x6b6e05);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b6e09:{NFSU2_TR(0x6b6e09);
if(r1(R+518)){{goto L6b6e28;}}
}
B6b6e0b:L6b6e0b:{c.instructions+=4;NFSU2_TR(0x6b6e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b6e0e:{NFSU2_TR(0x6b6e0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6e11:{NFSU2_TR(0x6b6e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e14:{NFSU2_TR(0x6b6e14);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b6e1e;}}
}
B6b6e16:L6b6e16:{c.instructions+=3;NFSU2_TR(0x6b6e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6e19:{NFSU2_TR(0x6b6e19);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b6e1c:{NFSU2_TR(0x6b6e1c);
if(r1(R+518)){{goto L6b6e48;}}
}
B6b6e1e:L6b6e1e:{c.instructions+=2;NFSU2_TR(0x6b6e1e);
w4(R+28,u32(0x80004005ull));
}
B6b6e23:{NFSU2_TR(0x6b6e23);
{goto L6b6f59;}
}
B6b6e28:L6b6e28:{c.instructions+=2;NFSU2_TR(0x6b6e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6e2b:{NFSU2_TR(0x6b6e2b);
{goto L6b6e36;}
}
B6b6e2d:L6b6e2d:{c.instructions+=3;NFSU2_TR(0x6b6e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6e30:{NFSU2_TR(0x6b6e30);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b6e33:{NFSU2_TR(0x6b6e33);
if(r1(R+518)){{goto L6b6e3b;}}
}
B6b6e35:L6b6e35:{c.instructions+=1;NFSU2_TR(0x6b6e35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b6e36:L6b6e36:{c.instructions+=2;NFSU2_TR(0x6b6e36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b6e39:{NFSU2_TR(0x6b6e39);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6e2du);}goto L6b6e2d;}}
}
B6b6e3b:L6b6e3b:{c.instructions+=2;NFSU2_TR(0x6b6e3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6e3e:{NFSU2_TR(0x6b6e3e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6e1eu);}goto L6b6e1e;}}
}
B6b6e40:L6b6e40:{c.instructions+=3;NFSU2_TR(0x6b6e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e43:{NFSU2_TR(0x6b6e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e46:{NFSU2_TR(0x6b6e46);
__builtin_memmove((R+28),(R+0),4);
}
B6b6e48:L6b6e48:{c.instructions+=9;NFSU2_TR(0x6b6e48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e49:{NFSU2_TR(0x6b6e49);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b6e4b:{NFSU2_TR(0x6b6e4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e4c:{NFSU2_TR(0x6b6e4c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b6e4f:{NFSU2_TR(0x6b6e4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e50:{NFSU2_TR(0x6b6e50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e51:{NFSU2_TR(0x6b6e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6e57:{NFSU2_TR(0x6b6e57);
__builtin_memmove((R+4),(R+24),4);
}
B6b6e59:{NFSU2_TR(0x6b6e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6e5eull));
TAIL_STATIC(0x699c39u,699);
}
B6b6e5e:L6b6e5e:{c.instructions+=3;NFSU2_TR(0x6b6e5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6e61:{NFSU2_TR(0x6b6e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e64:{NFSU2_TR(0x6b6e64);
if(r1(R+518)){{goto L6b6fca;}}
}
B6b6e6a:L6b6e6a:{c.instructions+=5;NFSU2_TR(0x6b6e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6e6d:{NFSU2_TR(0x6b6e6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b6e70:{NFSU2_TR(0x6b6e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6e73:{NFSU2_TR(0x6b6e73);
__builtin_memmove((R+4),(R+12),4);
}
B6b6e75:{NFSU2_TR(0x6b6e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6e7aull));
TAIL_STATIC(0x699765u,699);
}
B6b6e7a:L6b6e7a:{c.instructions+=9;NFSU2_TR(0x6b6e7a);
__builtin_memmove((R+0),(R+28),4);
}
B6b6e7c:{NFSU2_TR(0x6b6e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b6e7f:{NFSU2_TR(0x6b6e7f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3ull))));
}
B6b6e82:{NFSU2_TR(0x6b6e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e85:{NFSU2_TR(0x6b6e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6e88:{NFSU2_TR(0x6b6e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e8b:{NFSU2_TR(0x6b6e8b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b6e8d:{NFSU2_TR(0x6b6e8d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b6e8f:{NFSU2_TR(0x6b6e8f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b6f23;}}
}
B6b6e95:L6b6e95:{c.instructions+=2;NFSU2_TR(0x6b6e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b6e98:{NFSU2_TR(0x6b6e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6e9b:L6b6e9b:{c.instructions+=9;NFSU2_TR(0x6b6e9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e9c:{NFSU2_TR(0x6b6e9c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b6e9e:{NFSU2_TR(0x6b6e9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6e9f:{NFSU2_TR(0x6b6e9f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b6ea2:{NFSU2_TR(0x6b6ea2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6ea3:{NFSU2_TR(0x6b6ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6ea6:{NFSU2_TR(0x6b6ea6);
__builtin_memmove((R+4),(R+24),4);
}
B6b6ea8:{NFSU2_TR(0x6b6ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6eae:{NFSU2_TR(0x6b6eae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6eb3ull));
TAIL_STATIC(0x699c39u,699);
}
B6b6eb3:L6b6eb3:{c.instructions+=4;NFSU2_TR(0x6b6eb3);
__builtin_memmove((R+4),(R+0),4);
}
B6b6eb5:{NFSU2_TR(0x6b6eb5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b6eb8:{NFSU2_TR(0x6b6eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ebb:{NFSU2_TR(0x6b6ebb);
if(r1(R+518)){{goto L6b6fca;}}
}
B6b6ec1:L6b6ec1:{c.instructions+=13;NFSU2_TR(0x6b6ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6ec4:{NFSU2_TR(0x6b6ec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b6ec7:{NFSU2_TR(0x6b6ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6eca:{NFSU2_TR(0x6b6eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b6ecc:{NFSU2_TR(0x6b6ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6ecf:{NFSU2_TR(0x6b6ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6ed2:{NFSU2_TR(0x6b6ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6ed5:{NFSU2_TR(0x6b6ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b6ed8:{NFSU2_TR(0x6b6ed8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b6edb:{NFSU2_TR(0x6b6edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6ede:{NFSU2_TR(0x6b6ede);
__builtin_memmove((R+4),(R+28),4);
}
B6b6ee0:{NFSU2_TR(0x6b6ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ee3:{NFSU2_TR(0x6b6ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6ee8ull));
TAIL_STATIC(0x699765u,699);
}
B6b6ee8:L6b6ee8:{c.instructions+=18;NFSU2_TR(0x6b6ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6eeb:{NFSU2_TR(0x6b6eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6eee:{NFSU2_TR(0x6b6eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ef1:{NFSU2_TR(0x6b6ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6ef4:{NFSU2_TR(0x6b6ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ef7:{NFSU2_TR(0x6b6ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6efa:{NFSU2_TR(0x6b6efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6efd:{NFSU2_TR(0x6b6efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f00:{NFSU2_TR(0x6b6f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6f03:{NFSU2_TR(0x6b6f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6f06:{NFSU2_TR(0x6b6f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b6f09:{NFSU2_TR(0x6b6f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f0c:{NFSU2_TR(0x6b6f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6f0f:{NFSU2_TR(0x6b6f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6f13:{NFSU2_TR(0x6b6f13);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b6f14:{NFSU2_TR(0x6b6f14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b6f17:{NFSU2_TR(0x6b6f17);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6f1a:{NFSU2_TR(0x6b6f1a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6e9bu);}goto L6b6e9b;}}
}
B6b6f20:L6b6f20:{c.instructions+=1;NFSU2_TR(0x6b6f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b6f23:L6b6f23:{c.instructions+=6;NFSU2_TR(0x6b6f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f26:{NFSU2_TR(0x6b6f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6f29:{NFSU2_TR(0x6b6f29);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b6f2c:{NFSU2_TR(0x6b6f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f2d:{NFSU2_TR(0x6b6f2d);
__builtin_memmove((R+4),(R+24),4);
}
B6b6f2f:{NFSU2_TR(0x6b6f2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6f34ull));
TAIL_STATIC(0x699b26u,699);
}
B6b6f34:L6b6f34:{c.instructions+=3;NFSU2_TR(0x6b6f34);
__builtin_memmove((R+28),(R+0),4);
}
B6b6f36:{NFSU2_TR(0x6b6f36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b6f38:{NFSU2_TR(0x6b6f38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b6f59;}}
}
B6b6f3a:L6b6f3a:{c.instructions+=3;NFSU2_TR(0x6b6f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f3d:{NFSU2_TR(0x6b6f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b6f40:{NFSU2_TR(0x6b6f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6f44:L6b6f44:{c.instructions+=5;NFSU2_TR(0x6b6f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6f47:{NFSU2_TR(0x6b6f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f4a:{NFSU2_TR(0x6b6f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6f4e:{NFSU2_TR(0x6b6f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b6f51:{NFSU2_TR(0x6b6f51);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6b21u);}goto L6b6b21;}}
}
B6b6f57:L6b6f57:{c.instructions+=1;NFSU2_TR(0x6b6f57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b6f59:L6b6f59:{c.instructions+=3;NFSU2_TR(0x6b6f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6f5c:{NFSU2_TR(0x6b6f5c);
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
B6b6f5e:{NFSU2_TR(0x6b6f5e);
if(r1(R+518)){{goto L6b6f67;}}
}
B6b6f60:L6b6f60:{c.instructions+=2;NFSU2_TR(0x6b6f60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f62:{NFSU2_TR(0x6b6f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6f67ull));
TAIL_STATIC(0x6739efu,673);
}
B6b6f67:L6b6f67:{c.instructions+=6;NFSU2_TR(0x6b6f67);
__builtin_memmove((R+0),(R+28),4);
}
B6b6f69:{NFSU2_TR(0x6b6f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b6f6a:{NFSU2_TR(0x6b6f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b6f6b:{NFSU2_TR(0x6b6f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b6f6c:{NFSU2_TR(0x6b6f6c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b6f6d:{NFSU2_TR(0x6b6f6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b6f70:L6b6f70:{c.instructions+=2;NFSU2_TR(0x6b6f70);
u8 U[4];
w4(U+0,u32(0x7bc978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f75:{NFSU2_TR(0x6b6f75);
{goto L6b6fa9;}
}
B6b6f77:L6b6f77:{c.instructions+=11;NFSU2_TR(0x6b6f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f7d:{NFSU2_TR(0x6b6f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6f80:{NFSU2_TR(0x6b6f80);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b6f85:{NFSU2_TR(0x6b6f85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f86:{NFSU2_TR(0x6b6f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6f89:{NFSU2_TR(0x6b6f89);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6f8c:{NFSU2_TR(0x6b6f8c);
u8 U[4];
w4(U+0,u32(0x7bc920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f91:{NFSU2_TR(0x6b6f91);
u8 U[4];
w4(U+0,u32(0x11b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f96:{NFSU2_TR(0x6b6f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6f99:{NFSU2_TR(0x6b6f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6f9a:{NFSU2_TR(0x6b6f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6f9full));
TAIL_STATIC(0x69e936u,69e);
}
B6b6f9f:L6b6f9f:{c.instructions+=2;NFSU2_TR(0x6b6f9f);
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
B6b6fa2:{NFSU2_TR(0x6b6fa2);
{goto L6b6fc3;}
}
B6b6fa4:L6b6fa4:{c.instructions+=1;NFSU2_TR(0x6b6fa4);
u8 U[4];
w4(U+0,u32(0x7bc8c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fa9:L6b6fa9:{c.instructions+=7;NFSU2_TR(0x6b6fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b6fac:{NFSU2_TR(0x6b6fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6faf:{NFSU2_TR(0x6b6faf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b6fb2:{NFSU2_TR(0x6b6fb2);
u8 U[4];
w4(U+0,u32(0x11b7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fb7:{NFSU2_TR(0x6b6fb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b6fba:{NFSU2_TR(0x6b6fba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fbb:{NFSU2_TR(0x6b6fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b6fc0ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b6fc0:L6b6fc0:{c.instructions+=1;NFSU2_TR(0x6b6fc0);
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
B6b6fc3:L6b6fc3:{c.instructions+=2;NFSU2_TR(0x6b6fc3);
w4(R+28,u32(0x80004005ull));
}
B6b6fc8:{NFSU2_TR(0x6b6fc8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6f67u);}goto L6b6f67;}
}
B6b6fca:L6b6fca:{c.instructions+=2;NFSU2_TR(0x6b6fca);
w4(R+28,u32(0x8007000eull));
}
B6b6fcf:{NFSU2_TR(0x6b6fcf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b6f59u);}goto L6b6f59;}
}
B6b6fd1:L6b6fd1:{c.instructions+=16;NFSU2_TR(0x6b6fd1);
__builtin_memmove((R+28),(R+28),4);
}
B6b6fd3:{NFSU2_TR(0x6b6fd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fd4:{NFSU2_TR(0x6b6fd4);
__builtin_memmove((R+20),(R+16),4);
}
B6b6fd6:{NFSU2_TR(0x6b6fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B6b6fdc:{NFSU2_TR(0x6b6fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b6fe0:{NFSU2_TR(0x6b6fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fe1:{NFSU2_TR(0x6b6fe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fe2:{NFSU2_TR(0x6b6fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b6fe3:{NFSU2_TR(0x6b6fe3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b6fe5:{NFSU2_TR(0x6b6fe5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b6fe9:{NFSU2_TR(0x6b6fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b6fec:{NFSU2_TR(0x6b6fec);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b6fed:{NFSU2_TR(0x6b6fed);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b6fee:{NFSU2_TR(0x6b6fee);
__builtin_memmove((R+12),(R+4),4);
}
B6b6ff0:{NFSU2_TR(0x6b6ff0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b6ff1:{NFSU2_TR(0x6b6ff1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b755au,6b7);}
}
B6b6ff7:L6b6ff7:{c.instructions+=3;NFSU2_TR(0x6b6ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b6ffa:{NFSU2_TR(0x6b6ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b6ffd:{NFSU2_TR(0x6b6ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6b7000u,6b7);
}
XIT:NFSU2_TR_EXIT(0x6b6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
