#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ff,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ff,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ff(u8* __restrict R,Cpu& c);
u32 page_6ff(Cpu& c){return body_6ff(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ff(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ff000:goto L6ff000;
case 0x6ff003:c.instructions+=3;goto B6ff003;
case 0x6ff006:c.instructions+=2;goto B6ff006;
case 0x6ff008:c.instructions+=1;goto B6ff008;
case 0x6ff00a:goto L6ff00a;
case 0x6ff010:goto L6ff010;
case 0x6ff016:c.instructions+=5;goto B6ff016;
case 0x6ff017:c.instructions+=4;goto B6ff017;
case 0x6ff01a:c.instructions+=3;goto B6ff01a;
case 0x6ff01c:c.instructions+=2;goto B6ff01c;
case 0x6ff01f:c.instructions+=1;goto B6ff01f;
case 0x6ff024:goto L6ff024;
case 0x6ff027:c.instructions+=2;goto B6ff027;
case 0x6ff029:c.instructions+=1;goto B6ff029;
case 0x6ff02e:goto L6ff02e;
case 0x6ff030:c.instructions+=1;goto B6ff030;
case 0x6ff032:goto L6ff032;
case 0x6ff034:goto L6ff034;
case 0x6ff035:c.instructions+=2;goto B6ff035;
case 0x6ff036:c.instructions+=1;goto B6ff036;
case 0x6ff039:goto L6ff039;
case 0x6ff03a:c.instructions+=5;goto B6ff03a;
case 0x6ff03c:c.instructions+=4;goto B6ff03c;
case 0x6ff03f:c.instructions+=3;goto B6ff03f;
case 0x6ff040:c.instructions+=2;goto B6ff040;
case 0x6ff042:c.instructions+=1;goto B6ff042;
case 0x6ff047:goto L6ff047;
case 0x6ff04a:c.instructions+=4;goto B6ff04a;
case 0x6ff04d:c.instructions+=3;goto B6ff04d;
case 0x6ff04e:c.instructions+=2;goto B6ff04e;
case 0x6ff04f:c.instructions+=1;goto B6ff04f;
case 0x6ff054:goto L6ff054;
case 0x6ff056:c.instructions+=4;goto B6ff056;
case 0x6ff057:c.instructions+=3;goto B6ff057;
case 0x6ff058:c.instructions+=2;goto B6ff058;
case 0x6ff059:c.instructions+=1;goto B6ff059;
case 0x6ff05b:goto L6ff05b;
case 0x6ff05e:c.instructions+=3;goto B6ff05e;
case 0x6ff05f:c.instructions+=2;goto B6ff05f;
case 0x6ff062:c.instructions+=1;goto B6ff062;
case 0x6ff067:goto L6ff067;
case 0x6ff069:c.instructions+=3;goto B6ff069;
case 0x6ff06a:c.instructions+=2;goto B6ff06a;
case 0x6ff06b:c.instructions+=1;goto B6ff06b;
case 0x6ff06d:goto L6ff06d;
case 0x6ff072:goto L6ff072;
case 0x6ff074:c.instructions+=2;goto B6ff074;
case 0x6ff075:c.instructions+=1;goto B6ff075;
case 0x6ff076:goto L6ff076;
case 0x6ff07b:goto L6ff07b;
case 0x6ff07d:c.instructions+=4;goto B6ff07d;
case 0x6ff080:c.instructions+=3;goto B6ff080;
case 0x6ff083:c.instructions+=2;goto B6ff083;
case 0x6ff084:c.instructions+=1;goto B6ff084;
case 0x6ff085:goto L6ff085;
case 0x6ff086:c.instructions+=7;goto B6ff086;
case 0x6ff088:c.instructions+=6;goto B6ff088;
case 0x6ff08e:c.instructions+=5;goto B6ff08e;
case 0x6ff090:c.instructions+=4;goto B6ff090;
case 0x6ff092:c.instructions+=3;goto B6ff092;
case 0x6ff095:c.instructions+=2;goto B6ff095;
case 0x6ff09a:c.instructions+=1;goto B6ff09a;
case 0x6ff0a0:goto L6ff0a0;
case 0x6ff0a3:c.instructions+=2;goto B6ff0a3;
case 0x6ff0a4:c.instructions+=1;goto B6ff0a4;
case 0x6ff0af:goto L6ff0af;
case 0x6ff0b0:c.instructions+=4;goto B6ff0b0;
case 0x6ff0b2:c.instructions+=3;goto B6ff0b2;
case 0x6ff0b5:c.instructions+=2;goto B6ff0b5;
case 0x6ff0b8:c.instructions+=1;goto B6ff0b8;
case 0x6ff0ba:goto L6ff0ba;
case 0x6ff0bc:c.instructions+=1;goto B6ff0bc;
case 0x6ff0be:goto L6ff0be;
case 0x6ff0c1:c.instructions+=1;goto B6ff0c1;
case 0x6ff0c3:goto L6ff0c3;
case 0x6ff0c4:c.instructions+=1;goto B6ff0c4;
case 0x6ff0c7:goto L6ff0c7;
case 0x6ff0c8:c.instructions+=6;goto B6ff0c8;
case 0x6ff0ca:c.instructions+=5;goto B6ff0ca;
case 0x6ff0cb:c.instructions+=4;goto B6ff0cb;
case 0x6ff0ce:c.instructions+=3;goto B6ff0ce;
case 0x6ff0d0:c.instructions+=2;goto B6ff0d0;
case 0x6ff0d3:c.instructions+=1;goto B6ff0d3;
case 0x6ff0d5:goto L6ff0d5;
case 0x6ff0d6:c.instructions+=7;goto B6ff0d6;
case 0x6ff0d7:c.instructions+=6;goto B6ff0d7;
case 0x6ff0d9:c.instructions+=5;goto B6ff0d9;
case 0x6ff0db:c.instructions+=4;goto B6ff0db;
case 0x6ff0de:c.instructions+=3;goto B6ff0de;
case 0x6ff0e1:c.instructions+=2;goto B6ff0e1;
case 0x6ff0e4:c.instructions+=1;goto B6ff0e4;
case 0x6ff0e6:goto L6ff0e6;
case 0x6ff0e7:goto L6ff0e7;
case 0x6ff0ea:c.instructions+=8;goto B6ff0ea;
case 0x6ff0ed:c.instructions+=7;goto B6ff0ed;
case 0x6ff0ee:c.instructions+=6;goto B6ff0ee;
case 0x6ff0f0:c.instructions+=5;goto B6ff0f0;
case 0x6ff0f2:c.instructions+=4;goto B6ff0f2;
case 0x6ff0f4:c.instructions+=3;goto B6ff0f4;
case 0x6ff0f7:c.instructions+=2;goto B6ff0f7;
case 0x6ff0fb:c.instructions+=1;goto B6ff0fb;
case 0x6ff0fd:goto L6ff0fd;
case 0x6ff0ff:c.instructions+=1;goto B6ff0ff;
case 0x6ff101:goto L6ff101;
case 0x6ff103:goto L6ff103;
case 0x6ff105:c.instructions+=3;goto B6ff105;
case 0x6ff107:c.instructions+=2;goto B6ff107;
case 0x6ff10a:c.instructions+=1;goto B6ff10a;
case 0x6ff10c:goto L6ff10c;
case 0x6ff10f:c.instructions+=1;goto B6ff10f;
case 0x6ff110:goto L6ff110;
case 0x6ff111:c.instructions+=2;goto B6ff111;
case 0x6ff113:c.instructions+=1;goto B6ff113;
case 0x6ff115:goto L6ff115;
case 0x6ff117:c.instructions+=1;goto B6ff117;
case 0x6ff119:goto L6ff119;
case 0x6ff11b:goto L6ff11b;
case 0x6ff11c:c.instructions+=2;goto B6ff11c;
case 0x6ff11e:c.instructions+=1;goto B6ff11e;
case 0x6ff120:goto L6ff120;
case 0x6ff122:c.instructions+=1;goto B6ff122;
case 0x6ff124:goto L6ff124;
case 0x6ff126:c.instructions+=1;goto B6ff126;
case 0x6ff128:goto L6ff128;
case 0x6ff12a:goto L6ff12a;
case 0x6ff12d:c.instructions+=3;goto B6ff12d;
case 0x6ff12f:c.instructions+=2;goto B6ff12f;
case 0x6ff130:c.instructions+=1;goto B6ff130;
case 0x6ff131:goto L6ff131;
case 0x6ff132:c.instructions+=1;goto B6ff132;
case 0x6ff139:goto L6ff139;
case 0x6ff13a:c.instructions+=8;goto B6ff13a;
case 0x6ff13c:c.instructions+=7;goto B6ff13c;
case 0x6ff13f:c.instructions+=6;goto B6ff13f;
case 0x6ff140:c.instructions+=5;goto B6ff140;
case 0x6ff142:c.instructions+=4;goto B6ff142;
case 0x6ff143:c.instructions+=3;goto B6ff143;
case 0x6ff145:c.instructions+=2;goto B6ff145;
case 0x6ff147:c.instructions+=1;goto B6ff147;
case 0x6ff149:goto L6ff149;
case 0x6ff14d:c.instructions+=2;goto B6ff14d;
case 0x6ff14e:c.instructions+=1;goto B6ff14e;
case 0x6ff153:goto L6ff153;
case 0x6ff155:c.instructions+=2;goto B6ff155;
case 0x6ff156:c.instructions+=1;goto B6ff156;
case 0x6ff158:goto L6ff158;
case 0x6ff159:c.instructions+=2;goto B6ff159;
case 0x6ff15b:c.instructions+=1;goto B6ff15b;
case 0x6ff15d:goto L6ff15d;
case 0x6ff160:c.instructions+=7;goto B6ff160;
case 0x6ff163:c.instructions+=6;goto B6ff163;
case 0x6ff165:c.instructions+=5;goto B6ff165;
case 0x6ff167:c.instructions+=4;goto B6ff167;
case 0x6ff168:c.instructions+=3;goto B6ff168;
case 0x6ff169:c.instructions+=2;goto B6ff169;
case 0x6ff16a:c.instructions+=1;goto B6ff16a;
case 0x6ff16b:goto L6ff16b;
case 0x6ff16c:c.instructions+=8;goto B6ff16c;
case 0x6ff16e:c.instructions+=7;goto B6ff16e;
case 0x6ff16f:c.instructions+=6;goto B6ff16f;
case 0x6ff170:c.instructions+=5;goto B6ff170;
case 0x6ff174:c.instructions+=4;goto B6ff174;
case 0x6ff177:c.instructions+=3;goto B6ff177;
case 0x6ff178:c.instructions+=2;goto B6ff178;
case 0x6ff179:c.instructions+=1;goto B6ff179;
case 0x6ff17b:goto L6ff17b;
case 0x6ff17e:c.instructions+=3;goto B6ff17e;
case 0x6ff180:c.instructions+=2;goto B6ff180;
case 0x6ff182:c.instructions+=1;goto B6ff182;
case 0x6ff185:goto L6ff185;
case 0x6ff188:c.instructions+=3;goto B6ff188;
case 0x6ff18b:c.instructions+=2;goto B6ff18b;
case 0x6ff18d:c.instructions+=1;goto B6ff18d;
case 0x6ff18f:goto L6ff18f;
case 0x6ff192:c.instructions+=2;goto B6ff192;
case 0x6ff193:c.instructions+=1;goto B6ff193;
case 0x6ff198:goto L6ff198;
case 0x6ff19a:c.instructions+=3;goto B6ff19a;
case 0x6ff19d:c.instructions+=2;goto B6ff19d;
case 0x6ff19e:c.instructions+=1;goto B6ff19e;
case 0x6ff1a3:goto L6ff1a3;
case 0x6ff1a5:c.instructions+=3;goto B6ff1a5;
case 0x6ff1a6:c.instructions+=2;goto B6ff1a6;
case 0x6ff1a7:c.instructions+=1;goto B6ff1a7;
case 0x6ff1a9:goto L6ff1a9;
case 0x6ff1ac:c.instructions+=3;goto B6ff1ac;
case 0x6ff1ad:c.instructions+=2;goto B6ff1ad;
case 0x6ff1b0:c.instructions+=1;goto B6ff1b0;
case 0x6ff1b2:goto L6ff1b2;
case 0x6ff1b5:c.instructions+=4;goto B6ff1b5;
case 0x6ff1b9:c.instructions+=3;goto B6ff1b9;
case 0x6ff1bc:c.instructions+=2;goto B6ff1bc;
case 0x6ff1c0:c.instructions+=1;goto B6ff1c0;
case 0x6ff1c2:goto L6ff1c2;
case 0x6ff1c3:c.instructions+=3;goto B6ff1c3;
case 0x6ff1c4:c.instructions+=2;goto B6ff1c4;
case 0x6ff1c5:c.instructions+=1;goto B6ff1c5;
case 0x6ff1c6:goto L6ff1c6;
case 0x6ff1c7:c.instructions+=8;goto B6ff1c7;
case 0x6ff1c9:c.instructions+=7;goto B6ff1c9;
case 0x6ff1cc:c.instructions+=6;goto B6ff1cc;
case 0x6ff1cd:c.instructions+=5;goto B6ff1cd;
case 0x6ff1cf:c.instructions+=4;goto B6ff1cf;
case 0x6ff1d1:c.instructions+=3;goto B6ff1d1;
case 0x6ff1d4:c.instructions+=2;goto B6ff1d4;
case 0x6ff1d8:c.instructions+=1;goto B6ff1d8;
case 0x6ff1da:goto L6ff1da;
case 0x6ff1dd:c.instructions+=2;goto B6ff1dd;
case 0x6ff1df:c.instructions+=1;goto B6ff1df;
case 0x6ff1e1:goto L6ff1e1;
case 0x6ff1e3:c.instructions+=1;goto B6ff1e3;
case 0x6ff1e5:goto L6ff1e5;
case 0x6ff1e6:c.instructions+=2;goto B6ff1e6;
case 0x6ff1e9:c.instructions+=1;goto B6ff1e9;
case 0x6ff1eb:goto L6ff1eb;
case 0x6ff1ed:goto L6ff1ed;
case 0x6ff1f0:c.instructions+=2;goto B6ff1f0;
case 0x6ff1f3:c.instructions+=1;goto B6ff1f3;
case 0x6ff1f6:goto L6ff1f6;
case 0x6ff1fa:c.instructions+=12;goto B6ff1fa;
case 0x6ff201:c.instructions+=11;goto B6ff201;
case 0x6ff208:c.instructions+=10;goto B6ff208;
case 0x6ff20f:c.instructions+=9;goto B6ff20f;
case 0x6ff216:c.instructions+=8;goto B6ff216;
case 0x6ff21d:c.instructions+=7;goto B6ff21d;
case 0x6ff220:c.instructions+=6;goto B6ff220;
case 0x6ff227:c.instructions+=5;goto B6ff227;
case 0x6ff22e:c.instructions+=4;goto B6ff22e;
case 0x6ff235:c.instructions+=3;goto B6ff235;
case 0x6ff23c:c.instructions+=2;goto B6ff23c;
case 0x6ff23f:c.instructions+=1;goto B6ff23f;
case 0x6ff240:goto L6ff240;
case 0x6ff243:c.instructions+=3;goto B6ff243;
case 0x6ff247:c.instructions+=2;goto B6ff247;
case 0x6ff248:c.instructions+=1;goto B6ff248;
case 0x6ff24d:goto L6ff24d;
case 0x6ff24f:c.instructions+=2;goto B6ff24f;
case 0x6ff250:c.instructions+=1;goto B6ff250;
case 0x6ff252:goto L6ff252;
case 0x6ff255:c.instructions+=2;goto B6ff255;
case 0x6ff259:c.instructions+=1;goto B6ff259;
case 0x6ff25b:goto L6ff25b;
case 0x6ff25e:c.instructions+=1;goto B6ff25e;
case 0x6ff260:goto L6ff260;
case 0x6ff263:c.instructions+=1;goto B6ff263;
case 0x6ff267:goto L6ff267;
case 0x6ff26a:c.instructions+=2;goto B6ff26a;
case 0x6ff26b:c.instructions+=1;goto B6ff26b;
case 0x6ff26d:goto L6ff26d;
case 0x6ff270:c.instructions+=1;goto B6ff270;
case 0x6ff273:goto L6ff273;
case 0x6ff274:c.instructions+=2;goto B6ff274;
case 0x6ff275:c.instructions+=1;goto B6ff275;
case 0x6ff276:goto L6ff276;
case 0x6ff277:c.instructions+=8;goto B6ff277;
case 0x6ff279:c.instructions+=7;goto B6ff279;
case 0x6ff27a:c.instructions+=6;goto B6ff27a;
case 0x6ff27b:c.instructions+=5;goto B6ff27b;
case 0x6ff27c:c.instructions+=4;goto B6ff27c;
case 0x6ff27e:c.instructions+=3;goto B6ff27e;
case 0x6ff280:c.instructions+=2;goto B6ff280;
case 0x6ff284:c.instructions+=1;goto B6ff284;
case 0x6ff286:goto L6ff286;
case 0x6ff288:goto L6ff288;
case 0x6ff28b:c.instructions+=2;goto B6ff28b;
case 0x6ff28e:c.instructions+=1;goto B6ff28e;
case 0x6ff290:goto L6ff290;
case 0x6ff293:c.instructions+=1;goto B6ff293;
case 0x6ff295:goto L6ff295;
case 0x6ff296:c.instructions+=2;goto B6ff296;
case 0x6ff298:c.instructions+=1;goto B6ff298;
case 0x6ff29a:goto L6ff29a;
case 0x6ff29c:goto L6ff29c;
case 0x6ff29e:c.instructions+=3;goto B6ff29e;
case 0x6ff2a0:c.instructions+=2;goto B6ff2a0;
case 0x6ff2a3:c.instructions+=1;goto B6ff2a3;
case 0x6ff2a6:goto L6ff2a6;
case 0x6ff2a8:c.instructions+=4;goto B6ff2a8;
case 0x6ff2ab:c.instructions+=3;goto B6ff2ab;
case 0x6ff2ac:c.instructions+=2;goto B6ff2ac;
case 0x6ff2ae:c.instructions+=1;goto B6ff2ae;
case 0x6ff2b3:goto L6ff2b3;
case 0x6ff2b5:c.instructions+=5;goto B6ff2b5;
case 0x6ff2b8:c.instructions+=4;goto B6ff2b8;
case 0x6ff2bb:c.instructions+=3;goto B6ff2bb;
case 0x6ff2bd:c.instructions+=2;goto B6ff2bd;
case 0x6ff2bf:c.instructions+=1;goto B6ff2bf;
case 0x6ff2c1:goto L6ff2c1;
case 0x6ff2c3:c.instructions+=2;goto B6ff2c3;
case 0x6ff2c6:c.instructions+=1;goto B6ff2c6;
case 0x6ff2c9:goto L6ff2c9;
case 0x6ff2cc:c.instructions+=3;goto B6ff2cc;
case 0x6ff2ce:c.instructions+=2;goto B6ff2ce;
case 0x6ff2cf:c.instructions+=1;goto B6ff2cf;
case 0x6ff2d1:goto L6ff2d1;
case 0x6ff2d3:c.instructions+=2;goto B6ff2d3;
case 0x6ff2d4:c.instructions+=1;goto B6ff2d4;
case 0x6ff2d5:goto L6ff2d5;
case 0x6ff2d8:c.instructions+=4;goto B6ff2d8;
case 0x6ff2da:c.instructions+=3;goto B6ff2da;
case 0x6ff2dc:c.instructions+=2;goto B6ff2dc;
case 0x6ff2dd:c.instructions+=1;goto B6ff2dd;
case 0x6ff2de:goto L6ff2de;
case 0x6ff2df:c.instructions+=13;goto B6ff2df;
case 0x6ff2e1:c.instructions+=12;goto B6ff2e1;
case 0x6ff2e2:c.instructions+=11;goto B6ff2e2;
case 0x6ff2e3:c.instructions+=10;goto B6ff2e3;
case 0x6ff2e4:c.instructions+=9;goto B6ff2e4;
case 0x6ff2e7:c.instructions+=8;goto B6ff2e7;
case 0x6ff2e8:c.instructions+=7;goto B6ff2e8;
case 0x6ff2e9:c.instructions+=6;goto B6ff2e9;
case 0x6ff2eb:c.instructions+=5;goto B6ff2eb;
case 0x6ff2ed:c.instructions+=4;goto B6ff2ed;
case 0x6ff2ef:c.instructions+=3;goto B6ff2ef;
case 0x6ff2f1:c.instructions+=2;goto B6ff2f1;
case 0x6ff2f4:c.instructions+=1;goto B6ff2f4;
case 0x6ff2f6:goto L6ff2f6;
case 0x6ff2f9:c.instructions+=2;goto B6ff2f9;
case 0x6ff2fa:c.instructions+=1;goto B6ff2fa;
case 0x6ff2ff:goto L6ff2ff;
case 0x6ff300:c.instructions+=3;goto B6ff300;
case 0x6ff302:c.instructions+=2;goto B6ff302;
case 0x6ff304:c.instructions+=1;goto B6ff304;
case 0x6ff306:goto L6ff306;
case 0x6ff309:goto L6ff309;
case 0x6ff30d:c.instructions+=2;goto B6ff30d;
case 0x6ff311:c.instructions+=1;goto B6ff311;
case 0x6ff313:goto L6ff313;
case 0x6ff316:c.instructions+=6;goto B6ff316;
case 0x6ff319:c.instructions+=5;goto B6ff319;
case 0x6ff31c:c.instructions+=4;goto B6ff31c;
case 0x6ff31e:c.instructions+=3;goto B6ff31e;
case 0x6ff320:c.instructions+=2;goto B6ff320;
case 0x6ff323:c.instructions+=1;goto B6ff323;
case 0x6ff325:goto L6ff325;
case 0x6ff328:c.instructions+=2;goto B6ff328;
case 0x6ff32a:c.instructions+=1;goto B6ff32a;
case 0x6ff32c:goto L6ff32c;
case 0x6ff32f:c.instructions+=6;goto B6ff32f;
case 0x6ff332:c.instructions+=5;goto B6ff332;
case 0x6ff335:c.instructions+=4;goto B6ff335;
case 0x6ff338:c.instructions+=3;goto B6ff338;
case 0x6ff33b:c.instructions+=2;goto B6ff33b;
case 0x6ff33e:c.instructions+=1;goto B6ff33e;
case 0x6ff340:goto L6ff340;
case 0x6ff341:c.instructions+=2;goto B6ff341;
case 0x6ff344:c.instructions+=1;goto B6ff344;
case 0x6ff346:goto L6ff346;
case 0x6ff349:c.instructions+=1;goto B6ff349;
case 0x6ff34b:goto L6ff34b;
case 0x6ff34e:c.instructions+=3;goto B6ff34e;
case 0x6ff351:c.instructions+=2;goto B6ff351;
case 0x6ff354:c.instructions+=1;goto B6ff354;
case 0x6ff356:goto L6ff356;
case 0x6ff359:goto L6ff359;
case 0x6ff35a:c.instructions+=2;goto B6ff35a;
case 0x6ff35c:c.instructions+=1;goto B6ff35c;
case 0x6ff35e:goto L6ff35e;
case 0x6ff360:goto L6ff360;
case 0x6ff363:c.instructions+=3;goto B6ff363;
case 0x6ff365:c.instructions+=2;goto B6ff365;
case 0x6ff367:c.instructions+=1;goto B6ff367;
case 0x6ff36a:goto L6ff36a;
case 0x6ff36b:c.instructions+=4;goto B6ff36b;
case 0x6ff36c:c.instructions+=3;goto B6ff36c;
case 0x6ff36d:c.instructions+=2;goto B6ff36d;
case 0x6ff36e:c.instructions+=1;goto B6ff36e;
case 0x6ff36f:goto L6ff36f;
case 0x6ff372:c.instructions+=9;goto B6ff372;
case 0x6ff374:c.instructions+=8;goto B6ff374;
case 0x6ff377:c.instructions+=7;goto B6ff377;
case 0x6ff379:c.instructions+=6;goto B6ff379;
case 0x6ff37c:c.instructions+=5;goto B6ff37c;
case 0x6ff37e:c.instructions+=4;goto B6ff37e;
case 0x6ff380:c.instructions+=3;goto B6ff380;
case 0x6ff383:c.instructions+=2;goto B6ff383;
case 0x6ff385:c.instructions+=1;goto B6ff385;
case 0x6ff387:goto L6ff387;
case 0x6ff389:c.instructions+=20;goto B6ff389;
case 0x6ff38d:c.instructions+=19;goto B6ff38d;
case 0x6ff391:c.instructions+=18;goto B6ff391;
case 0x6ff393:c.instructions+=17;goto B6ff393;
case 0x6ff394:c.instructions+=16;goto B6ff394;
case 0x6ff397:c.instructions+=15;goto B6ff397;
case 0x6ff39a:c.instructions+=14;goto B6ff39a;
case 0x6ff39c:c.instructions+=13;goto B6ff39c;
case 0x6ff3a2:c.instructions+=12;goto B6ff3a2;
case 0x6ff3a9:c.instructions+=11;goto B6ff3a9;
case 0x6ff3b0:c.instructions+=10;goto B6ff3b0;
case 0x6ff3b7:c.instructions+=9;goto B6ff3b7;
case 0x6ff3bb:c.instructions+=8;goto B6ff3bb;
case 0x6ff3bf:c.instructions+=7;goto B6ff3bf;
case 0x6ff3c3:c.instructions+=6;goto B6ff3c3;
case 0x6ff3c7:c.instructions+=5;goto B6ff3c7;
case 0x6ff3ca:c.instructions+=4;goto B6ff3ca;
case 0x6ff3cd:c.instructions+=3;goto B6ff3cd;
case 0x6ff3d0:c.instructions+=2;goto B6ff3d0;
case 0x6ff3d3:c.instructions+=1;goto B6ff3d3;
case 0x6ff3d4:goto L6ff3d4;
case 0x6ff3d5:c.instructions+=5;goto B6ff3d5;
case 0x6ff3d7:c.instructions+=4;goto B6ff3d7;
case 0x6ff3da:c.instructions+=3;goto B6ff3da;
case 0x6ff3dc:c.instructions+=2;goto B6ff3dc;
case 0x6ff3dd:c.instructions+=1;goto B6ff3dd;
case 0x6ff3e0:goto L6ff3e0;
case 0x6ff3e1:c.instructions+=5;goto B6ff3e1;
case 0x6ff3e3:c.instructions+=4;goto B6ff3e3;
case 0x6ff3e6:c.instructions+=3;goto B6ff3e6;
case 0x6ff3e9:c.instructions+=2;goto B6ff3e9;
case 0x6ff3ea:c.instructions+=1;goto B6ff3ea;
case 0x6ff3ed:goto L6ff3ed;
case 0x6ff3ee:c.instructions+=5;goto B6ff3ee;
case 0x6ff3f0:c.instructions+=4;goto B6ff3f0;
case 0x6ff3f3:c.instructions+=3;goto B6ff3f3;
case 0x6ff3f6:c.instructions+=2;goto B6ff3f6;
case 0x6ff3f7:c.instructions+=1;goto B6ff3f7;
case 0x6ff3fa:goto L6ff3fa;
case 0x6ff3fb:c.instructions+=5;goto B6ff3fb;
case 0x6ff3fd:c.instructions+=4;goto B6ff3fd;
case 0x6ff400:c.instructions+=3;goto B6ff400;
case 0x6ff403:c.instructions+=2;goto B6ff403;
case 0x6ff404:c.instructions+=1;goto B6ff404;
case 0x6ff407:goto L6ff407;
case 0x6ff408:c.instructions+=5;goto B6ff408;
case 0x6ff40a:c.instructions+=4;goto B6ff40a;
case 0x6ff40d:c.instructions+=3;goto B6ff40d;
case 0x6ff410:c.instructions+=2;goto B6ff410;
case 0x6ff411:c.instructions+=1;goto B6ff411;
case 0x6ff414:goto L6ff414;
case 0x6ff415:c.instructions+=5;goto B6ff415;
case 0x6ff417:c.instructions+=4;goto B6ff417;
case 0x6ff41a:c.instructions+=3;goto B6ff41a;
case 0x6ff41d:c.instructions+=2;goto B6ff41d;
case 0x6ff41e:c.instructions+=1;goto B6ff41e;
case 0x6ff421:goto L6ff421;
case 0x6ff422:c.instructions+=5;goto B6ff422;
case 0x6ff424:c.instructions+=4;goto B6ff424;
case 0x6ff427:c.instructions+=3;goto B6ff427;
case 0x6ff42a:c.instructions+=2;goto B6ff42a;
case 0x6ff42b:c.instructions+=1;goto B6ff42b;
case 0x6ff42e:goto L6ff42e;
case 0x6ff42f:c.instructions+=5;goto B6ff42f;
case 0x6ff431:c.instructions+=4;goto B6ff431;
case 0x6ff434:c.instructions+=3;goto B6ff434;
case 0x6ff437:c.instructions+=2;goto B6ff437;
case 0x6ff438:c.instructions+=1;goto B6ff438;
case 0x6ff43b:goto L6ff43b;
case 0x6ff43c:c.instructions+=5;goto B6ff43c;
case 0x6ff43e:c.instructions+=4;goto B6ff43e;
case 0x6ff441:c.instructions+=3;goto B6ff441;
case 0x6ff444:c.instructions+=2;goto B6ff444;
case 0x6ff445:c.instructions+=1;goto B6ff445;
case 0x6ff448:goto L6ff448;
case 0x6ff449:c.instructions+=5;goto B6ff449;
case 0x6ff44b:c.instructions+=4;goto B6ff44b;
case 0x6ff44e:c.instructions+=3;goto B6ff44e;
case 0x6ff451:c.instructions+=2;goto B6ff451;
case 0x6ff452:c.instructions+=1;goto B6ff452;
case 0x6ff455:goto L6ff455;
case 0x6ff456:c.instructions+=5;goto B6ff456;
case 0x6ff458:c.instructions+=4;goto B6ff458;
case 0x6ff45b:c.instructions+=3;goto B6ff45b;
case 0x6ff45e:c.instructions+=2;goto B6ff45e;
case 0x6ff45f:c.instructions+=1;goto B6ff45f;
case 0x6ff462:goto L6ff462;
case 0x6ff463:c.instructions+=5;goto B6ff463;
case 0x6ff465:c.instructions+=4;goto B6ff465;
case 0x6ff468:c.instructions+=3;goto B6ff468;
case 0x6ff46b:c.instructions+=2;goto B6ff46b;
case 0x6ff46c:c.instructions+=1;goto B6ff46c;
case 0x6ff46f:goto L6ff46f;
case 0x6ff470:c.instructions+=5;goto B6ff470;
case 0x6ff472:c.instructions+=4;goto B6ff472;
case 0x6ff475:c.instructions+=3;goto B6ff475;
case 0x6ff478:c.instructions+=2;goto B6ff478;
case 0x6ff479:c.instructions+=1;goto B6ff479;
case 0x6ff47c:goto L6ff47c;
case 0x6ff47d:c.instructions+=10;goto B6ff47d;
case 0x6ff47f:c.instructions+=9;goto B6ff47f;
case 0x6ff480:c.instructions+=8;goto B6ff480;
case 0x6ff481:c.instructions+=7;goto B6ff481;
case 0x6ff484:c.instructions+=6;goto B6ff484;
case 0x6ff486:c.instructions+=5;goto B6ff486;
case 0x6ff489:c.instructions+=4;goto B6ff489;
case 0x6ff48c:c.instructions+=3;goto B6ff48c;
case 0x6ff48d:c.instructions+=2;goto B6ff48d;
case 0x6ff48f:c.instructions+=1;goto B6ff48f;
case 0x6ff494:goto L6ff494;
case 0x6ff496:c.instructions+=2;goto B6ff496;
case 0x6ff497:c.instructions+=1;goto B6ff497;
case 0x6ff499:goto L6ff499;
case 0x6ff49a:c.instructions+=7;goto B6ff49a;
case 0x6ff49f:c.instructions+=6;goto B6ff49f;
case 0x6ff4a0:c.instructions+=5;goto B6ff4a0;
case 0x6ff4a3:c.instructions+=4;goto B6ff4a3;
case 0x6ff4a5:c.instructions+=3;goto B6ff4a5;
case 0x6ff4a6:c.instructions+=2;goto B6ff4a6;
case 0x6ff4a8:c.instructions+=1;goto B6ff4a8;
case 0x6ff4ad:goto L6ff4ad;
case 0x6ff4af:c.instructions+=2;goto B6ff4af;
case 0x6ff4b0:c.instructions+=1;goto B6ff4b0;
case 0x6ff4b2:goto L6ff4b2;
case 0x6ff4b4:goto L6ff4b4;
case 0x6ff4b6:c.instructions+=4;goto B6ff4b6;
case 0x6ff4b8:c.instructions+=3;goto B6ff4b8;
case 0x6ff4ba:c.instructions+=2;goto B6ff4ba;
case 0x6ff4bd:c.instructions+=1;goto B6ff4bd;
case 0x6ff4bf:goto L6ff4bf;
case 0x6ff4c2:goto L6ff4c2;
case 0x6ff4c5:c.instructions+=1;goto B6ff4c5;
case 0x6ff4c7:goto L6ff4c7;
case 0x6ff4c9:goto L6ff4c9;
case 0x6ff4cb:c.instructions+=17;goto B6ff4cb;
case 0x6ff4ce:c.instructions+=16;goto B6ff4ce;
case 0x6ff4d1:c.instructions+=15;goto B6ff4d1;
case 0x6ff4d3:c.instructions+=14;goto B6ff4d3;
case 0x6ff4d6:c.instructions+=13;goto B6ff4d6;
case 0x6ff4da:c.instructions+=12;goto B6ff4da;
case 0x6ff4dc:c.instructions+=11;goto B6ff4dc;
case 0x6ff4df:c.instructions+=10;goto B6ff4df;
case 0x6ff4e3:c.instructions+=9;goto B6ff4e3;
case 0x6ff4e5:c.instructions+=8;goto B6ff4e5;
case 0x6ff4e8:c.instructions+=7;goto B6ff4e8;
case 0x6ff4ec:c.instructions+=6;goto B6ff4ec;
case 0x6ff4ee:c.instructions+=5;goto B6ff4ee;
case 0x6ff4f2:c.instructions+=4;goto B6ff4f2;
case 0x6ff4f3:c.instructions+=3;goto B6ff4f3;
case 0x6ff4f6:c.instructions+=2;goto B6ff4f6;
case 0x6ff4f9:c.instructions+=1;goto B6ff4f9;
case 0x6ff4fb:goto L6ff4fb;
case 0x6ff4fc:c.instructions+=3;goto B6ff4fc;
case 0x6ff4fd:c.instructions+=2;goto B6ff4fd;
case 0x6ff4fe:c.instructions+=1;goto B6ff4fe;
case 0x6ff501:goto L6ff501;
case 0x6ff502:c.instructions+=37;goto B6ff502;
case 0x6ff504:c.instructions+=36;goto B6ff504;
case 0x6ff50a:c.instructions+=35;goto B6ff50a;
case 0x6ff50b:c.instructions+=34;goto B6ff50b;
case 0x6ff50c:c.instructions+=33;goto B6ff50c;
case 0x6ff50f:c.instructions+=32;goto B6ff50f;
case 0x6ff510:c.instructions+=31;goto B6ff510;
case 0x6ff512:c.instructions+=30;goto B6ff512;
case 0x6ff514:c.instructions+=29;goto B6ff514;
case 0x6ff517:c.instructions+=28;goto B6ff517;
case 0x6ff51a:c.instructions+=27;goto B6ff51a;
case 0x6ff51d:c.instructions+=26;goto B6ff51d;
case 0x6ff520:c.instructions+=25;goto B6ff520;
case 0x6ff523:c.instructions+=24;goto B6ff523;
case 0x6ff526:c.instructions+=23;goto B6ff526;
case 0x6ff529:c.instructions+=22;goto B6ff529;
case 0x6ff52c:c.instructions+=21;goto B6ff52c;
case 0x6ff52f:c.instructions+=20;goto B6ff52f;
case 0x6ff532:c.instructions+=19;goto B6ff532;
case 0x6ff535:c.instructions+=18;goto B6ff535;
case 0x6ff538:c.instructions+=17;goto B6ff538;
case 0x6ff53b:c.instructions+=16;goto B6ff53b;
case 0x6ff53e:c.instructions+=15;goto B6ff53e;
case 0x6ff541:c.instructions+=14;goto B6ff541;
case 0x6ff544:c.instructions+=13;goto B6ff544;
case 0x6ff54e:c.instructions+=12;goto B6ff54e;
case 0x6ff558:c.instructions+=11;goto B6ff558;
case 0x6ff562:c.instructions+=10;goto B6ff562;
case 0x6ff56c:c.instructions+=9;goto B6ff56c;
case 0x6ff576:c.instructions+=8;goto B6ff576;
case 0x6ff57d:c.instructions+=7;goto B6ff57d;
case 0x6ff584:c.instructions+=6;goto B6ff584;
case 0x6ff58b:c.instructions+=5;goto B6ff58b;
case 0x6ff592:c.instructions+=4;goto B6ff592;
case 0x6ff599:c.instructions+=3;goto B6ff599;
case 0x6ff5a0:c.instructions+=2;goto B6ff5a0;
case 0x6ff5a7:c.instructions+=1;goto B6ff5a7;
case 0x6ff5ae:goto L6ff5ae;
case 0x6ff5b5:c.instructions+=1;goto B6ff5b5;
case 0x6ff5b8:goto L6ff5b8;
case 0x6ff5ba:c.instructions+=3;goto B6ff5ba;
case 0x6ff5bb:c.instructions+=2;goto B6ff5bb;
case 0x6ff5bd:c.instructions+=1;goto B6ff5bd;
case 0x6ff5bf:goto L6ff5bf;
case 0x6ff5c1:c.instructions+=4;goto B6ff5c1;
case 0x6ff5c8:c.instructions+=3;goto B6ff5c8;
case 0x6ff5cb:c.instructions+=2;goto B6ff5cb;
case 0x6ff5ce:c.instructions+=1;goto B6ff5ce;
case 0x6ff5d0:goto L6ff5d0;
case 0x6ff5d4:c.instructions+=4;goto B6ff5d4;
case 0x6ff5d8:c.instructions+=3;goto B6ff5d8;
case 0x6ff5dc:c.instructions+=2;goto B6ff5dc;
case 0x6ff5df:c.instructions+=1;goto B6ff5df;
case 0x6ff5e1:goto L6ff5e1;
case 0x6ff5e4:c.instructions+=4;goto B6ff5e4;
case 0x6ff5e7:c.instructions+=3;goto B6ff5e7;
case 0x6ff5ea:c.instructions+=2;goto B6ff5ea;
case 0x6ff5ed:c.instructions+=1;goto B6ff5ed;
case 0x6ff5ef:goto L6ff5ef;
case 0x6ff5f3:c.instructions+=1;goto B6ff5f3;
case 0x6ff5f5:goto L6ff5f5;
case 0x6ff5f8:c.instructions+=2;goto B6ff5f8;
case 0x6ff5fc:c.instructions+=1;goto B6ff5fc;
case 0x6ff5fe:goto L6ff5fe;
case 0x6ff601:c.instructions+=14;goto B6ff601;
case 0x6ff604:c.instructions+=13;goto B6ff604;
case 0x6ff607:c.instructions+=12;goto B6ff607;
case 0x6ff60a:c.instructions+=11;goto B6ff60a;
case 0x6ff60d:c.instructions+=10;goto B6ff60d;
case 0x6ff60e:c.instructions+=9;goto B6ff60e;
case 0x6ff610:c.instructions+=8;goto B6ff610;
case 0x6ff616:c.instructions+=7;goto B6ff616;
case 0x6ff617:c.instructions+=6;goto B6ff617;
case 0x6ff61d:c.instructions+=5;goto B6ff61d;
case 0x6ff61e:c.instructions+=4;goto B6ff61e;
case 0x6ff621:c.instructions+=3;goto B6ff621;
case 0x6ff622:c.instructions+=2;goto B6ff622;
case 0x6ff625:c.instructions+=1;goto B6ff625;
case 0x6ff62a:goto L6ff62a;
case 0x6ff62d:c.instructions+=2;goto B6ff62d;
case 0x6ff630:c.instructions+=1;goto B6ff630;
case 0x6ff632:goto L6ff632;
case 0x6ff635:c.instructions+=1;goto B6ff635;
case 0x6ff638:goto L6ff638;
case 0x6ff63b:c.instructions+=1;goto B6ff63b;
case 0x6ff63d:goto L6ff63d;
case 0x6ff640:c.instructions+=1;goto B6ff640;
case 0x6ff644:goto L6ff644;
case 0x6ff647:c.instructions+=3;goto B6ff647;
case 0x6ff64a:c.instructions+=2;goto B6ff64a;
case 0x6ff64d:c.instructions+=1;goto B6ff64d;
case 0x6ff64f:goto L6ff64f;
case 0x6ff652:c.instructions+=1;goto B6ff652;
case 0x6ff654:goto L6ff654;
case 0x6ff657:c.instructions+=2;goto B6ff657;
case 0x6ff65b:c.instructions+=1;goto B6ff65b;
case 0x6ff660:goto L6ff660;
case 0x6ff663:c.instructions+=8;goto B6ff663;
case 0x6ff665:c.instructions+=7;goto B6ff665;
case 0x6ff668:c.instructions+=6;goto B6ff668;
case 0x6ff66a:c.instructions+=5;goto B6ff66a;
case 0x6ff66c:c.instructions+=4;goto B6ff66c;
case 0x6ff66f:c.instructions+=3;goto B6ff66f;
case 0x6ff672:c.instructions+=2;goto B6ff672;
case 0x6ff673:c.instructions+=1;goto B6ff673;
case 0x6ff678:goto L6ff678;
case 0x6ff67a:c.instructions+=2;goto B6ff67a;
case 0x6ff67b:c.instructions+=1;goto B6ff67b;
case 0x6ff67d:goto L6ff67d;
case 0x6ff682:c.instructions+=7;goto B6ff682;
case 0x6ff683:c.instructions+=6;goto B6ff683;
case 0x6ff685:c.instructions+=5;goto B6ff685;
case 0x6ff688:c.instructions+=4;goto B6ff688;
case 0x6ff68a:c.instructions+=3;goto B6ff68a;
case 0x6ff68b:c.instructions+=2;goto B6ff68b;
case 0x6ff68e:c.instructions+=1;goto B6ff68e;
case 0x6ff693:goto L6ff693;
case 0x6ff696:c.instructions+=1;goto B6ff696;
case 0x6ff698:goto L6ff698;
case 0x6ff69a:goto L6ff69a;
case 0x6ff69d:c.instructions+=6;goto B6ff69d;
case 0x6ff6a0:c.instructions+=5;goto B6ff6a0;
case 0x6ff6a2:c.instructions+=4;goto B6ff6a2;
case 0x6ff6a4:c.instructions+=3;goto B6ff6a4;
case 0x6ff6a7:c.instructions+=2;goto B6ff6a7;
case 0x6ff6a9:c.instructions+=1;goto B6ff6a9;
case 0x6ff6ac:goto L6ff6ac;
case 0x6ff6b0:c.instructions+=1;goto B6ff6b0;
case 0x6ff6b2:goto L6ff6b2;
case 0x6ff6b3:goto L6ff6b3;
case 0x6ff6b6:c.instructions+=1;goto B6ff6b6;
case 0x6ff6b8:goto L6ff6b8;
case 0x6ff6b9:c.instructions+=3;goto B6ff6b9;
case 0x6ff6bc:c.instructions+=2;goto B6ff6bc;
case 0x6ff6bf:c.instructions+=1;goto B6ff6bf;
case 0x6ff6c1:goto L6ff6c1;
case 0x6ff6c5:c.instructions+=1;goto B6ff6c5;
case 0x6ff6ca:goto L6ff6ca;
case 0x6ff6cc:c.instructions+=2;goto B6ff6cc;
case 0x6ff6cf:c.instructions+=1;goto B6ff6cf;
case 0x6ff6d1:goto L6ff6d1;
case 0x6ff6d5:c.instructions+=1;goto B6ff6d5;
case 0x6ff6db:goto L6ff6db;
case 0x6ff6de:c.instructions+=15;goto B6ff6de;
case 0x6ff6e1:c.instructions+=14;goto B6ff6e1;
case 0x6ff6e5:c.instructions+=13;goto B6ff6e5;
case 0x6ff6e8:c.instructions+=12;goto B6ff6e8;
case 0x6ff6eb:c.instructions+=11;goto B6ff6eb;
case 0x6ff6ec:c.instructions+=10;goto B6ff6ec;
case 0x6ff6ee:c.instructions+=9;goto B6ff6ee;
case 0x6ff6f4:c.instructions+=8;goto B6ff6f4;
case 0x6ff6f5:c.instructions+=7;goto B6ff6f5;
case 0x6ff6fb:c.instructions+=6;goto B6ff6fb;
case 0x6ff6fc:c.instructions+=5;goto B6ff6fc;
case 0x6ff6ff:c.instructions+=4;goto B6ff6ff;
case 0x6ff700:c.instructions+=3;goto B6ff700;
case 0x6ff703:c.instructions+=2;goto B6ff703;
case 0x6ff706:c.instructions+=1;goto B6ff706;
case 0x6ff70b:goto L6ff70b;
case 0x6ff70e:c.instructions+=3;goto B6ff70e;
case 0x6ff711:c.instructions+=2;goto B6ff711;
case 0x6ff714:c.instructions+=1;goto B6ff714;
case 0x6ff716:goto L6ff716;
case 0x6ff71d:goto L6ff71d;
case 0x6ff720:c.instructions+=2;goto B6ff720;
case 0x6ff723:c.instructions+=1;goto B6ff723;
case 0x6ff725:goto L6ff725;
case 0x6ff728:c.instructions+=2;goto B6ff728;
case 0x6ff72b:c.instructions+=1;goto B6ff72b;
case 0x6ff72d:goto L6ff72d;
case 0x6ff730:c.instructions+=2;goto B6ff730;
case 0x6ff733:c.instructions+=1;goto B6ff733;
case 0x6ff735:goto L6ff735;
case 0x6ff738:c.instructions+=2;goto B6ff738;
case 0x6ff73b:c.instructions+=1;goto B6ff73b;
case 0x6ff73d:goto L6ff73d;
case 0x6ff740:c.instructions+=2;goto B6ff740;
case 0x6ff743:c.instructions+=1;goto B6ff743;
case 0x6ff745:goto L6ff745;
case 0x6ff748:c.instructions+=2;goto B6ff748;
case 0x6ff74b:c.instructions+=1;goto B6ff74b;
case 0x6ff74d:goto L6ff74d;
case 0x6ff750:c.instructions+=2;goto B6ff750;
case 0x6ff753:c.instructions+=1;goto B6ff753;
case 0x6ff755:goto L6ff755;
case 0x6ff758:c.instructions+=2;goto B6ff758;
case 0x6ff75b:c.instructions+=1;goto B6ff75b;
case 0x6ff75d:goto L6ff75d;
case 0x6ff760:c.instructions+=2;goto B6ff760;
case 0x6ff763:c.instructions+=1;goto B6ff763;
case 0x6ff765:goto L6ff765;
case 0x6ff768:c.instructions+=2;goto B6ff768;
case 0x6ff76b:c.instructions+=1;goto B6ff76b;
case 0x6ff76d:goto L6ff76d;
case 0x6ff770:c.instructions+=2;goto B6ff770;
case 0x6ff773:c.instructions+=1;goto B6ff773;
case 0x6ff775:goto L6ff775;
case 0x6ff778:c.instructions+=2;goto B6ff778;
case 0x6ff77b:c.instructions+=1;goto B6ff77b;
case 0x6ff77d:goto L6ff77d;
case 0x6ff780:c.instructions+=1;goto B6ff780;
case 0x6ff783:goto L6ff783;
case 0x6ff786:c.instructions+=1;goto B6ff786;
case 0x6ff789:goto L6ff789;
case 0x6ff78c:c.instructions+=2;goto B6ff78c;
case 0x6ff78f:c.instructions+=1;goto B6ff78f;
case 0x6ff791:goto L6ff791;
case 0x6ff792:c.instructions+=1;goto B6ff792;
case 0x6ff795:goto L6ff795;
case 0x6ff798:c.instructions+=1;goto B6ff798;
case 0x6ff79e:goto L6ff79e;
case 0x6ff7a0:goto L6ff7a0;
case 0x6ff7a1:c.instructions+=2;goto B6ff7a1;
case 0x6ff7a5:c.instructions+=1;goto B6ff7a5;
case 0x6ff7a8:goto L6ff7a8;
case 0x6ff7ac:c.instructions+=2;goto B6ff7ac;
case 0x6ff7af:c.instructions+=1;goto B6ff7af;
case 0x6ff7b5:goto L6ff7b5;
case 0x6ff7b9:c.instructions+=3;goto B6ff7b9;
case 0x6ff7bb:c.instructions+=2;goto B6ff7bb;
case 0x6ff7be:c.instructions+=1;goto B6ff7be;
case 0x6ff7c1:goto L6ff7c1;
case 0x6ff7c4:c.instructions+=3;goto B6ff7c4;
case 0x6ff7c6:c.instructions+=2;goto B6ff7c6;
case 0x6ff7c8:c.instructions+=1;goto B6ff7c8;
case 0x6ff7ca:goto L6ff7ca;
case 0x6ff7ce:c.instructions+=1;goto B6ff7ce;
case 0x6ff7d0:goto L6ff7d0;
case 0x6ff7d2:c.instructions+=1;goto B6ff7d2;
case 0x6ff7d4:goto L6ff7d4;
case 0x6ff7d8:c.instructions+=9;goto B6ff7d8;
case 0x6ff7db:c.instructions+=8;goto B6ff7db;
case 0x6ff7df:c.instructions+=7;goto B6ff7df;
case 0x6ff7e2:c.instructions+=6;goto B6ff7e2;
case 0x6ff7e5:c.instructions+=5;goto B6ff7e5;
case 0x6ff7e6:c.instructions+=4;goto B6ff7e6;
case 0x6ff7e7:c.instructions+=3;goto B6ff7e7;
case 0x6ff7e9:c.instructions+=2;goto B6ff7e9;
case 0x6ff7ed:c.instructions+=1;goto B6ff7ed;
case 0x6ff7ef:goto L6ff7ef;
case 0x6ff7f1:goto L6ff7f1;
case 0x6ff7f3:c.instructions+=7;goto B6ff7f3;
case 0x6ff7f6:c.instructions+=6;goto B6ff7f6;
case 0x6ff7f8:c.instructions+=5;goto B6ff7f8;
case 0x6ff7fb:c.instructions+=4;goto B6ff7fb;
case 0x6ff7ff:c.instructions+=3;goto B6ff7ff;
case 0x6ff801:c.instructions+=2;goto B6ff801;
case 0x6ff803:c.instructions+=1;goto B6ff803;
case 0x6ff804:goto L6ff804;
case 0x6ff806:goto L6ff806;
case 0x6ff809:c.instructions+=2;goto B6ff809;
case 0x6ff80c:c.instructions+=1;goto B6ff80c;
case 0x6ff811:goto L6ff811;
case 0x6ff815:c.instructions+=1;goto B6ff815;
case 0x6ff817:goto L6ff817;
case 0x6ff81a:c.instructions+=2;goto B6ff81a;
case 0x6ff81b:c.instructions+=1;goto B6ff81b;
case 0x6ff81e:goto L6ff81e;
case 0x6ff821:c.instructions+=3;goto B6ff821;
case 0x6ff823:c.instructions+=2;goto B6ff823;
case 0x6ff826:c.instructions+=1;goto B6ff826;
case 0x6ff828:goto L6ff828;
case 0x6ff82a:goto L6ff82a;
case 0x6ff82d:c.instructions+=2;goto B6ff82d;
case 0x6ff830:c.instructions+=1;goto B6ff830;
case 0x6ff832:goto L6ff832;
case 0x6ff835:c.instructions+=1;goto B6ff835;
case 0x6ff837:goto L6ff837;
case 0x6ff838:c.instructions+=3;goto B6ff838;
case 0x6ff839:c.instructions+=2;goto B6ff839;
case 0x6ff83c:c.instructions+=1;goto B6ff83c;
case 0x6ff83e:goto L6ff83e;
case 0x6ff841:c.instructions+=3;goto B6ff841;
case 0x6ff844:c.instructions+=2;goto B6ff844;
case 0x6ff847:c.instructions+=1;goto B6ff847;
case 0x6ff849:goto L6ff849;
case 0x6ff84c:c.instructions+=4;goto B6ff84c;
case 0x6ff84e:c.instructions+=3;goto B6ff84e;
case 0x6ff850:c.instructions+=2;goto B6ff850;
case 0x6ff853:c.instructions+=1;goto B6ff853;
case 0x6ff856:goto L6ff856;
case 0x6ff859:c.instructions+=3;goto B6ff859;
case 0x6ff85c:c.instructions+=2;goto B6ff85c;
case 0x6ff860:c.instructions+=1;goto B6ff860;
case 0x6ff862:goto L6ff862;
case 0x6ff865:c.instructions+=7;goto B6ff865;
case 0x6ff868:c.instructions+=6;goto B6ff868;
case 0x6ff86b:c.instructions+=5;goto B6ff86b;
case 0x6ff86e:c.instructions+=4;goto B6ff86e;
case 0x6ff871:c.instructions+=3;goto B6ff871;
case 0x6ff874:c.instructions+=2;goto B6ff874;
case 0x6ff876:c.instructions+=1;goto B6ff876;
case 0x6ff878:goto L6ff878;
case 0x6ff87a:goto L6ff87a;
case 0x6ff87c:c.instructions+=8;goto B6ff87c;
case 0x6ff87f:c.instructions+=7;goto B6ff87f;
case 0x6ff883:c.instructions+=6;goto B6ff883;
case 0x6ff886:c.instructions+=5;goto B6ff886;
case 0x6ff889:c.instructions+=4;goto B6ff889;
case 0x6ff88a:c.instructions+=3;goto B6ff88a;
case 0x6ff88d:c.instructions+=2;goto B6ff88d;
case 0x6ff890:c.instructions+=1;goto B6ff890;
case 0x6ff895:goto L6ff895;
case 0x6ff898:c.instructions+=6;goto B6ff898;
case 0x6ff89a:c.instructions+=5;goto B6ff89a;
case 0x6ff89d:c.instructions+=4;goto B6ff89d;
case 0x6ff89e:c.instructions+=3;goto B6ff89e;
case 0x6ff8a1:c.instructions+=2;goto B6ff8a1;
case 0x6ff8a5:c.instructions+=1;goto B6ff8a5;
case 0x6ff8aa:goto L6ff8aa;
case 0x6ff8ad:c.instructions+=1;goto B6ff8ad;
case 0x6ff8af:goto L6ff8af;
case 0x6ff8b2:c.instructions+=7;goto B6ff8b2;
case 0x6ff8b5:c.instructions+=6;goto B6ff8b5;
case 0x6ff8b8:c.instructions+=5;goto B6ff8b8;
case 0x6ff8bb:c.instructions+=4;goto B6ff8bb;
case 0x6ff8be:c.instructions+=3;goto B6ff8be;
case 0x6ff8c1:c.instructions+=2;goto B6ff8c1;
case 0x6ff8c3:c.instructions+=1;goto B6ff8c3;
case 0x6ff8c5:goto L6ff8c5;
case 0x6ff8c7:goto L6ff8c7;
case 0x6ff8c9:c.instructions+=8;goto B6ff8c9;
case 0x6ff8cc:c.instructions+=7;goto B6ff8cc;
case 0x6ff8d0:c.instructions+=6;goto B6ff8d0;
case 0x6ff8d3:c.instructions+=5;goto B6ff8d3;
case 0x6ff8d6:c.instructions+=4;goto B6ff8d6;
case 0x6ff8d7:c.instructions+=3;goto B6ff8d7;
case 0x6ff8da:c.instructions+=2;goto B6ff8da;
case 0x6ff8dd:c.instructions+=1;goto B6ff8dd;
case 0x6ff8e2:goto L6ff8e2;
case 0x6ff8e5:c.instructions+=6;goto B6ff8e5;
case 0x6ff8e7:c.instructions+=5;goto B6ff8e7;
case 0x6ff8ea:c.instructions+=4;goto B6ff8ea;
case 0x6ff8eb:c.instructions+=3;goto B6ff8eb;
case 0x6ff8ee:c.instructions+=2;goto B6ff8ee;
case 0x6ff8f2:c.instructions+=1;goto B6ff8f2;
case 0x6ff8f7:goto L6ff8f7;
case 0x6ff8fa:c.instructions+=1;goto B6ff8fa;
case 0x6ff8fc:goto L6ff8fc;
case 0x6ff8ff:c.instructions+=7;goto B6ff8ff;
case 0x6ff902:c.instructions+=6;goto B6ff902;
case 0x6ff905:c.instructions+=5;goto B6ff905;
case 0x6ff908:c.instructions+=4;goto B6ff908;
case 0x6ff90b:c.instructions+=3;goto B6ff90b;
case 0x6ff90e:c.instructions+=2;goto B6ff90e;
case 0x6ff910:c.instructions+=1;goto B6ff910;
case 0x6ff912:goto L6ff912;
case 0x6ff914:goto L6ff914;
case 0x6ff916:c.instructions+=8;goto B6ff916;
case 0x6ff919:c.instructions+=7;goto B6ff919;
case 0x6ff91d:c.instructions+=6;goto B6ff91d;
case 0x6ff920:c.instructions+=5;goto B6ff920;
case 0x6ff923:c.instructions+=4;goto B6ff923;
case 0x6ff924:c.instructions+=3;goto B6ff924;
case 0x6ff927:c.instructions+=2;goto B6ff927;
case 0x6ff92a:c.instructions+=1;goto B6ff92a;
case 0x6ff92f:goto L6ff92f;
case 0x6ff932:c.instructions+=6;goto B6ff932;
case 0x6ff934:c.instructions+=5;goto B6ff934;
case 0x6ff937:c.instructions+=4;goto B6ff937;
case 0x6ff938:c.instructions+=3;goto B6ff938;
case 0x6ff93b:c.instructions+=2;goto B6ff93b;
case 0x6ff93f:c.instructions+=1;goto B6ff93f;
case 0x6ff944:goto L6ff944;
case 0x6ff947:c.instructions+=1;goto B6ff947;
case 0x6ff949:goto L6ff949;
case 0x6ff94c:c.instructions+=7;goto B6ff94c;
case 0x6ff94f:c.instructions+=6;goto B6ff94f;
case 0x6ff952:c.instructions+=5;goto B6ff952;
case 0x6ff955:c.instructions+=4;goto B6ff955;
case 0x6ff958:c.instructions+=3;goto B6ff958;
case 0x6ff95b:c.instructions+=2;goto B6ff95b;
case 0x6ff95d:c.instructions+=1;goto B6ff95d;
case 0x6ff95f:goto L6ff95f;
case 0x6ff961:goto L6ff961;
case 0x6ff963:c.instructions+=8;goto B6ff963;
case 0x6ff966:c.instructions+=7;goto B6ff966;
case 0x6ff96a:c.instructions+=6;goto B6ff96a;
case 0x6ff96d:c.instructions+=5;goto B6ff96d;
case 0x6ff970:c.instructions+=4;goto B6ff970;
case 0x6ff971:c.instructions+=3;goto B6ff971;
case 0x6ff974:c.instructions+=2;goto B6ff974;
case 0x6ff977:c.instructions+=1;goto B6ff977;
case 0x6ff97c:goto L6ff97c;
case 0x6ff97f:c.instructions+=6;goto B6ff97f;
case 0x6ff981:c.instructions+=5;goto B6ff981;
case 0x6ff984:c.instructions+=4;goto B6ff984;
case 0x6ff985:c.instructions+=3;goto B6ff985;
case 0x6ff988:c.instructions+=2;goto B6ff988;
case 0x6ff98c:c.instructions+=1;goto B6ff98c;
case 0x6ff991:goto L6ff991;
case 0x6ff994:c.instructions+=1;goto B6ff994;
case 0x6ff996:goto L6ff996;
case 0x6ff999:c.instructions+=4;goto B6ff999;
case 0x6ff99c:c.instructions+=3;goto B6ff99c;
case 0x6ff99f:c.instructions+=2;goto B6ff99f;
case 0x6ff9a0:c.instructions+=1;goto B6ff9a0;
case 0x6ff9a5:goto L6ff9a5;
case 0x6ff9a8:c.instructions+=2;goto B6ff9a8;
case 0x6ff9a9:c.instructions+=1;goto B6ff9a9;
case 0x6ff9ab:goto L6ff9ab;
case 0x6ff9ae:c.instructions+=4;goto B6ff9ae;
case 0x6ff9b0:c.instructions+=3;goto B6ff9b0;
case 0x6ff9b3:c.instructions+=2;goto B6ff9b3;
case 0x6ff9b7:c.instructions+=1;goto B6ff9b7;
case 0x6ff9bc:goto L6ff9bc;
case 0x6ff9bf:c.instructions+=2;goto B6ff9bf;
case 0x6ff9c1:c.instructions+=1;goto B6ff9c1;
case 0x6ff9c3:goto L6ff9c3;
case 0x6ff9c5:goto L6ff9c5;
case 0x6ff9c8:c.instructions+=6;goto B6ff9c8;
case 0x6ff9cb:c.instructions+=5;goto B6ff9cb;
case 0x6ff9cd:c.instructions+=4;goto B6ff9cd;
case 0x6ff9d1:c.instructions+=3;goto B6ff9d1;
case 0x6ff9d4:c.instructions+=2;goto B6ff9d4;
case 0x6ff9d8:c.instructions+=1;goto B6ff9d8;
case 0x6ff9dd:goto L6ff9dd;
case 0x6ff9e0:c.instructions+=1;goto B6ff9e0;
case 0x6ff9e2:goto L6ff9e2;
case 0x6ff9e5:c.instructions+=4;goto B6ff9e5;
case 0x6ff9e8:c.instructions+=3;goto B6ff9e8;
case 0x6ff9eb:c.instructions+=2;goto B6ff9eb;
case 0x6ff9ec:c.instructions+=1;goto B6ff9ec;
case 0x6ff9f1:goto L6ff9f1;
case 0x6ff9f4:c.instructions+=2;goto B6ff9f4;
case 0x6ff9f5:c.instructions+=1;goto B6ff9f5;
case 0x6ff9f7:goto L6ff9f7;
case 0x6ff9fa:c.instructions+=4;goto B6ff9fa;
case 0x6ff9fc:c.instructions+=3;goto B6ff9fc;
case 0x6ff9ff:c.instructions+=2;goto B6ff9ff;
case 0x6ffa03:c.instructions+=1;goto B6ffa03;
case 0x6ffa08:goto L6ffa08;
case 0x6ffa0b:c.instructions+=2;goto B6ffa0b;
case 0x6ffa0d:c.instructions+=1;goto B6ffa0d;
case 0x6ffa0f:goto L6ffa0f;
case 0x6ffa11:goto L6ffa11;
case 0x6ffa14:c.instructions+=6;goto B6ffa14;
case 0x6ffa17:c.instructions+=5;goto B6ffa17;
case 0x6ffa19:c.instructions+=4;goto B6ffa19;
case 0x6ffa1d:c.instructions+=3;goto B6ffa1d;
case 0x6ffa20:c.instructions+=2;goto B6ffa20;
case 0x6ffa24:c.instructions+=1;goto B6ffa24;
case 0x6ffa29:goto L6ffa29;
case 0x6ffa2c:c.instructions+=1;goto B6ffa2c;
case 0x6ffa2e:goto L6ffa2e;
case 0x6ffa31:c.instructions+=7;goto B6ffa31;
case 0x6ffa34:c.instructions+=6;goto B6ffa34;
case 0x6ffa37:c.instructions+=5;goto B6ffa37;
case 0x6ffa3a:c.instructions+=4;goto B6ffa3a;
case 0x6ffa3d:c.instructions+=3;goto B6ffa3d;
case 0x6ffa40:c.instructions+=2;goto B6ffa40;
case 0x6ffa42:c.instructions+=1;goto B6ffa42;
case 0x6ffa44:goto L6ffa44;
case 0x6ffa46:goto L6ffa46;
case 0x6ffa48:c.instructions+=8;goto B6ffa48;
case 0x6ffa4b:c.instructions+=7;goto B6ffa4b;
case 0x6ffa4f:c.instructions+=6;goto B6ffa4f;
case 0x6ffa52:c.instructions+=5;goto B6ffa52;
case 0x6ffa55:c.instructions+=4;goto B6ffa55;
case 0x6ffa56:c.instructions+=3;goto B6ffa56;
case 0x6ffa59:c.instructions+=2;goto B6ffa59;
case 0x6ffa5c:c.instructions+=1;goto B6ffa5c;
case 0x6ffa61:goto L6ffa61;
case 0x6ffa64:c.instructions+=6;goto B6ffa64;
case 0x6ffa66:c.instructions+=5;goto B6ffa66;
case 0x6ffa69:c.instructions+=4;goto B6ffa69;
case 0x6ffa6a:c.instructions+=3;goto B6ffa6a;
case 0x6ffa6d:c.instructions+=2;goto B6ffa6d;
case 0x6ffa71:c.instructions+=1;goto B6ffa71;
case 0x6ffa76:goto L6ffa76;
case 0x6ffa79:c.instructions+=1;goto B6ffa79;
case 0x6ffa7b:goto L6ffa7b;
case 0x6ffa7e:c.instructions+=7;goto B6ffa7e;
case 0x6ffa81:c.instructions+=6;goto B6ffa81;
case 0x6ffa84:c.instructions+=5;goto B6ffa84;
case 0x6ffa87:c.instructions+=4;goto B6ffa87;
case 0x6ffa8a:c.instructions+=3;goto B6ffa8a;
case 0x6ffa8d:c.instructions+=2;goto B6ffa8d;
case 0x6ffa8f:c.instructions+=1;goto B6ffa8f;
case 0x6ffa91:goto L6ffa91;
case 0x6ffa93:goto L6ffa93;
case 0x6ffa95:c.instructions+=8;goto B6ffa95;
case 0x6ffa98:c.instructions+=7;goto B6ffa98;
case 0x6ffa9b:c.instructions+=6;goto B6ffa9b;
case 0x6ffa9e:c.instructions+=5;goto B6ffa9e;
case 0x6ffaa1:c.instructions+=4;goto B6ffaa1;
case 0x6ffaa2:c.instructions+=3;goto B6ffaa2;
case 0x6ffaa5:c.instructions+=2;goto B6ffaa5;
case 0x6ffaa8:c.instructions+=1;goto B6ffaa8;
case 0x6ffaad:goto L6ffaad;
case 0x6ffab0:c.instructions+=6;goto B6ffab0;
case 0x6ffab2:c.instructions+=5;goto B6ffab2;
case 0x6ffab5:c.instructions+=4;goto B6ffab5;
case 0x6ffab6:c.instructions+=3;goto B6ffab6;
case 0x6ffab9:c.instructions+=2;goto B6ffab9;
case 0x6ffabc:c.instructions+=1;goto B6ffabc;
case 0x6ffac1:goto L6ffac1;
case 0x6ffac4:c.instructions+=1;goto B6ffac4;
case 0x6ffac6:goto L6ffac6;
case 0x6ffac9:c.instructions+=7;goto B6ffac9;
case 0x6ffacc:c.instructions+=6;goto B6ffacc;
case 0x6ffacf:c.instructions+=5;goto B6ffacf;
case 0x6ffad2:c.instructions+=4;goto B6ffad2;
case 0x6ffad5:c.instructions+=3;goto B6ffad5;
case 0x6ffad8:c.instructions+=2;goto B6ffad8;
case 0x6ffada:c.instructions+=1;goto B6ffada;
case 0x6ffadc:goto L6ffadc;
case 0x6ffade:goto L6ffade;
case 0x6ffae0:c.instructions+=8;goto B6ffae0;
case 0x6ffae3:c.instructions+=7;goto B6ffae3;
case 0x6ffae7:c.instructions+=6;goto B6ffae7;
case 0x6ffaea:c.instructions+=5;goto B6ffaea;
case 0x6ffaed:c.instructions+=4;goto B6ffaed;
case 0x6ffaee:c.instructions+=3;goto B6ffaee;
case 0x6ffaf1:c.instructions+=2;goto B6ffaf1;
case 0x6ffaf4:c.instructions+=1;goto B6ffaf4;
case 0x6ffaf9:goto L6ffaf9;
case 0x6ffafc:c.instructions+=6;goto B6ffafc;
case 0x6ffafe:c.instructions+=5;goto B6ffafe;
case 0x6ffb01:c.instructions+=4;goto B6ffb01;
case 0x6ffb02:c.instructions+=3;goto B6ffb02;
case 0x6ffb05:c.instructions+=2;goto B6ffb05;
case 0x6ffb09:c.instructions+=1;goto B6ffb09;
case 0x6ffb0e:goto L6ffb0e;
case 0x6ffb11:c.instructions+=1;goto B6ffb11;
case 0x6ffb13:goto L6ffb13;
case 0x6ffb16:c.instructions+=7;goto B6ffb16;
case 0x6ffb19:c.instructions+=6;goto B6ffb19;
case 0x6ffb1c:c.instructions+=5;goto B6ffb1c;
case 0x6ffb1f:c.instructions+=4;goto B6ffb1f;
case 0x6ffb22:c.instructions+=3;goto B6ffb22;
case 0x6ffb25:c.instructions+=2;goto B6ffb25;
case 0x6ffb27:c.instructions+=1;goto B6ffb27;
case 0x6ffb29:goto L6ffb29;
case 0x6ffb2b:goto L6ffb2b;
case 0x6ffb2d:c.instructions+=8;goto B6ffb2d;
case 0x6ffb30:c.instructions+=7;goto B6ffb30;
case 0x6ffb35:c.instructions+=6;goto B6ffb35;
case 0x6ffb38:c.instructions+=5;goto B6ffb38;
case 0x6ffb3b:c.instructions+=4;goto B6ffb3b;
case 0x6ffb3c:c.instructions+=3;goto B6ffb3c;
case 0x6ffb3f:c.instructions+=2;goto B6ffb3f;
case 0x6ffb42:c.instructions+=1;goto B6ffb42;
case 0x6ffb47:goto L6ffb47;
case 0x6ffb4a:c.instructions+=6;goto B6ffb4a;
case 0x6ffb4c:c.instructions+=5;goto B6ffb4c;
case 0x6ffb4f:c.instructions+=4;goto B6ffb4f;
case 0x6ffb50:c.instructions+=3;goto B6ffb50;
case 0x6ffb53:c.instructions+=2;goto B6ffb53;
case 0x6ffb57:c.instructions+=1;goto B6ffb57;
case 0x6ffb5c:goto L6ffb5c;
case 0x6ffb5f:c.instructions+=1;goto B6ffb5f;
case 0x6ffb61:goto L6ffb61;
case 0x6ffb64:c.instructions+=7;goto B6ffb64;
case 0x6ffb67:c.instructions+=6;goto B6ffb67;
case 0x6ffb6a:c.instructions+=5;goto B6ffb6a;
case 0x6ffb6d:c.instructions+=4;goto B6ffb6d;
case 0x6ffb70:c.instructions+=3;goto B6ffb70;
case 0x6ffb73:c.instructions+=2;goto B6ffb73;
case 0x6ffb75:c.instructions+=1;goto B6ffb75;
case 0x6ffb77:goto L6ffb77;
case 0x6ffb79:goto L6ffb79;
case 0x6ffb7b:c.instructions+=8;goto B6ffb7b;
case 0x6ffb7e:c.instructions+=7;goto B6ffb7e;
case 0x6ffb83:c.instructions+=6;goto B6ffb83;
case 0x6ffb86:c.instructions+=5;goto B6ffb86;
case 0x6ffb89:c.instructions+=4;goto B6ffb89;
case 0x6ffb8a:c.instructions+=3;goto B6ffb8a;
case 0x6ffb8d:c.instructions+=2;goto B6ffb8d;
case 0x6ffb90:c.instructions+=1;goto B6ffb90;
case 0x6ffb95:goto L6ffb95;
case 0x6ffb98:c.instructions+=6;goto B6ffb98;
case 0x6ffb9a:c.instructions+=5;goto B6ffb9a;
case 0x6ffb9d:c.instructions+=4;goto B6ffb9d;
case 0x6ffb9e:c.instructions+=3;goto B6ffb9e;
case 0x6ffba1:c.instructions+=2;goto B6ffba1;
case 0x6ffba5:c.instructions+=1;goto B6ffba5;
case 0x6ffbaa:goto L6ffbaa;
case 0x6ffbad:c.instructions+=1;goto B6ffbad;
case 0x6ffbaf:goto L6ffbaf;
case 0x6ffbb2:c.instructions+=7;goto B6ffbb2;
case 0x6ffbb5:c.instructions+=6;goto B6ffbb5;
case 0x6ffbb8:c.instructions+=5;goto B6ffbb8;
case 0x6ffbbb:c.instructions+=4;goto B6ffbbb;
case 0x6ffbbe:c.instructions+=3;goto B6ffbbe;
case 0x6ffbc1:c.instructions+=2;goto B6ffbc1;
case 0x6ffbc3:c.instructions+=1;goto B6ffbc3;
case 0x6ffbc5:goto L6ffbc5;
case 0x6ffbc7:goto L6ffbc7;
case 0x6ffbc9:c.instructions+=8;goto B6ffbc9;
case 0x6ffbcc:c.instructions+=7;goto B6ffbcc;
case 0x6ffbd1:c.instructions+=6;goto B6ffbd1;
case 0x6ffbd4:c.instructions+=5;goto B6ffbd4;
case 0x6ffbd7:c.instructions+=4;goto B6ffbd7;
case 0x6ffbd8:c.instructions+=3;goto B6ffbd8;
case 0x6ffbdb:c.instructions+=2;goto B6ffbdb;
case 0x6ffbde:c.instructions+=1;goto B6ffbde;
case 0x6ffbe3:goto L6ffbe3;
case 0x6ffbe6:c.instructions+=6;goto B6ffbe6;
case 0x6ffbe8:c.instructions+=5;goto B6ffbe8;
case 0x6ffbeb:c.instructions+=4;goto B6ffbeb;
case 0x6ffbec:c.instructions+=3;goto B6ffbec;
case 0x6ffbef:c.instructions+=2;goto B6ffbef;
case 0x6ffbf3:c.instructions+=1;goto B6ffbf3;
case 0x6ffbf5:goto L6ffbf5;
case 0x6ffbf8:c.instructions+=1;goto B6ffbf8;
case 0x6ffbfa:goto L6ffbfa;
case 0x6ffbfd:c.instructions+=7;goto B6ffbfd;
case 0x6ffc00:c.instructions+=6;goto B6ffc00;
case 0x6ffc03:c.instructions+=5;goto B6ffc03;
case 0x6ffc06:c.instructions+=4;goto B6ffc06;
case 0x6ffc09:c.instructions+=3;goto B6ffc09;
case 0x6ffc0c:c.instructions+=2;goto B6ffc0c;
case 0x6ffc0e:c.instructions+=1;goto B6ffc0e;
case 0x6ffc10:goto L6ffc10;
case 0x6ffc12:goto L6ffc12;
case 0x6ffc14:c.instructions+=8;goto B6ffc14;
case 0x6ffc17:c.instructions+=7;goto B6ffc17;
case 0x6ffc1c:c.instructions+=6;goto B6ffc1c;
case 0x6ffc1f:c.instructions+=5;goto B6ffc1f;
case 0x6ffc22:c.instructions+=4;goto B6ffc22;
case 0x6ffc23:c.instructions+=3;goto B6ffc23;
case 0x6ffc26:c.instructions+=2;goto B6ffc26;
case 0x6ffc29:c.instructions+=1;goto B6ffc29;
case 0x6ffc2e:goto L6ffc2e;
case 0x6ffc31:c.instructions+=5;goto B6ffc31;
case 0x6ffc33:c.instructions+=4;goto B6ffc33;
case 0x6ffc36:c.instructions+=3;goto B6ffc36;
case 0x6ffc37:c.instructions+=2;goto B6ffc37;
case 0x6ffc3a:c.instructions+=1;goto B6ffc3a;
case 0x6ffc3e:goto L6ffc3e;
case 0x6ffc41:goto L6ffc41;
case 0x6ffc44:goto L6ffc44;
case 0x6ffc45:c.instructions+=3;goto B6ffc45;
case 0x6ffc48:c.instructions+=2;goto B6ffc48;
case 0x6ffc4b:c.instructions+=1;goto B6ffc4b;
case 0x6ffc4d:goto L6ffc4d;
case 0x6ffc50:c.instructions+=2;goto B6ffc50;
case 0x6ffc53:c.instructions+=1;goto B6ffc53;
case 0x6ffc56:goto L6ffc56;
case 0x6ffc59:c.instructions+=2;goto B6ffc59;
case 0x6ffc5c:c.instructions+=1;goto B6ffc5c;
case 0x6ffc62:goto L6ffc62;
case 0x6ffc63:c.instructions+=4;goto B6ffc63;
case 0x6ffc64:c.instructions+=3;goto B6ffc64;
case 0x6ffc65:c.instructions+=2;goto B6ffc65;
case 0x6ffc66:c.instructions+=1;goto B6ffc66;
case 0x6ffcb6:goto L6ffcb6;
case 0x6ffcb7:c.instructions+=5;goto B6ffcb7;
case 0x6ffcb9:c.instructions+=4;goto B6ffcb9;
case 0x6ffcbd:c.instructions+=3;goto B6ffcbd;
case 0x6ffcbe:c.instructions+=2;goto B6ffcbe;
case 0x6ffcc0:c.instructions+=1;goto B6ffcc0;
case 0x6ffcc2:goto L6ffcc2;
case 0x6ffcc3:c.instructions+=6;goto B6ffcc3;
case 0x6ffcc8:c.instructions+=5;goto B6ffcc8;
case 0x6ffccb:c.instructions+=4;goto B6ffccb;
case 0x6ffccd:c.instructions+=3;goto B6ffccd;
case 0x6ffccf:c.instructions+=2;goto B6ffccf;
case 0x6ffcd0:c.instructions+=1;goto B6ffcd0;
case 0x6ffcd5:goto L6ffcd5;
case 0x6ffcd9:c.instructions+=1;goto B6ffcd9;
case 0x6ffcdb:goto L6ffcdb;
case 0x6ffcdc:c.instructions+=1;goto B6ffcdc;
case 0x6ffce2:goto L6ffce2;
case 0x6ffce3:goto L6ffce3;
case 0x6ffce5:c.instructions+=2;goto B6ffce5;
case 0x6ffce6:c.instructions+=1;goto B6ffce6;
case 0x6ffce8:goto L6ffce8;
case 0x6ffcec:c.instructions+=1;goto B6ffcec;
case 0x6ffcee:goto L6ffcee;
case 0x6ffcef:c.instructions+=1;goto B6ffcef;
case 0x6ffcf5:goto L6ffcf5;
case 0x6ffcf6:goto L6ffcf6;
case 0x6ffcf8:goto L6ffcf8;
case 0x6ffcf9:c.instructions+=2;goto B6ffcf9;
case 0x6ffcfa:c.instructions+=1;goto B6ffcfa;
case 0x6ffd00:goto L6ffd00;
case 0x6ffd01:c.instructions+=7;goto B6ffd01;
case 0x6ffd02:c.instructions+=6;goto B6ffd02;
case 0x6ffd03:c.instructions+=5;goto B6ffd03;
case 0x6ffd04:c.instructions+=4;goto B6ffd04;
case 0x6ffd08:c.instructions+=3;goto B6ffd08;
case 0x6ffd0c:c.instructions+=2;goto B6ffd0c;
case 0x6ffd10:c.instructions+=1;goto B6ffd10;
case 0x6ffd14:goto L6ffd14;
case 0x6ffd16:c.instructions+=20;goto B6ffd16;
case 0x6ffd18:c.instructions+=19;goto B6ffd18;
case 0x6ffd1a:c.instructions+=18;goto B6ffd1a;
case 0x6ffd1b:c.instructions+=17;goto B6ffd1b;
case 0x6ffd1e:c.instructions+=16;goto B6ffd1e;
case 0x6ffd20:c.instructions+=15;goto B6ffd20;
case 0x6ffd23:c.instructions+=14;goto B6ffd23;
case 0x6ffd25:c.instructions+=13;goto B6ffd25;
case 0x6ffd27:c.instructions+=12;goto B6ffd27;
case 0x6ffd28:c.instructions+=11;goto B6ffd28;
case 0x6ffd2b:c.instructions+=10;goto B6ffd2b;
case 0x6ffd2d:c.instructions+=9;goto B6ffd2d;
case 0x6ffd2f:c.instructions+=8;goto B6ffd2f;
case 0x6ffd32:c.instructions+=7;goto B6ffd32;
case 0x6ffd35:c.instructions+=6;goto B6ffd35;
case 0x6ffd39:c.instructions+=5;goto B6ffd39;
case 0x6ffd3b:c.instructions+=4;goto B6ffd3b;
case 0x6ffd3e:c.instructions+=3;goto B6ffd3e;
case 0x6ffd41:c.instructions+=2;goto B6ffd41;
case 0x6ffd43:c.instructions+=1;goto B6ffd43;
case 0x6ffd45:goto L6ffd45;
case 0x6ffd46:c.instructions+=4;goto B6ffd46;
case 0x6ffd47:c.instructions+=3;goto B6ffd47;
case 0x6ffd48:c.instructions+=2;goto B6ffd48;
case 0x6ffd49:c.instructions+=1;goto B6ffd49;
case 0x6ffd4a:goto L6ffd4a;
case 0x6ffd4b:c.instructions+=10;goto B6ffd4b;
case 0x6ffd4c:c.instructions+=9;goto B6ffd4c;
case 0x6ffd4d:c.instructions+=8;goto B6ffd4d;
case 0x6ffd4e:c.instructions+=7;goto B6ffd4e;
case 0x6ffd52:c.instructions+=6;goto B6ffd52;
case 0x6ffd56:c.instructions+=5;goto B6ffd56;
case 0x6ffd5a:c.instructions+=4;goto B6ffd5a;
case 0x6ffd5e:c.instructions+=3;goto B6ffd5e;
case 0x6ffd62:c.instructions+=2;goto B6ffd62;
case 0x6ffd64:c.instructions+=1;goto B6ffd64;
case 0x6ffd66:goto L6ffd66;
case 0x6ffd68:c.instructions+=20;goto B6ffd68;
case 0x6ffd69:c.instructions+=19;goto B6ffd69;
case 0x6ffd6b:c.instructions+=18;goto B6ffd6b;
case 0x6ffd6c:c.instructions+=17;goto B6ffd6c;
case 0x6ffd74:c.instructions+=16;goto B6ffd74;
case 0x6ffd7c:c.instructions+=15;goto B6ffd7c;
case 0x6ffd7e:c.instructions+=14;goto B6ffd7e;
case 0x6ffd81:c.instructions+=13;goto B6ffd81;
case 0x6ffd84:c.instructions+=12;goto B6ffd84;
case 0x6ffd87:c.instructions+=11;goto B6ffd87;
case 0x6ffd8f:c.instructions+=10;goto B6ffd8f;
case 0x6ffd97:c.instructions+=9;goto B6ffd97;
case 0x6ffd9a:c.instructions+=8;goto B6ffd9a;
case 0x6ffd9d:c.instructions+=7;goto B6ffd9d;
case 0x6ffda0:c.instructions+=6;goto B6ffda0;
case 0x6ffda3:c.instructions+=5;goto B6ffda3;
case 0x6ffda5:c.instructions+=4;goto B6ffda5;
case 0x6ffda7:c.instructions+=3;goto B6ffda7;
case 0x6ffda9:c.instructions+=2;goto B6ffda9;
case 0x6ffdad:c.instructions+=1;goto B6ffdad;
case 0x6ffdaf:goto L6ffdaf;
case 0x6ffdb0:c.instructions+=4;goto B6ffdb0;
case 0x6ffdb1:c.instructions+=3;goto B6ffdb1;
case 0x6ffdb2:c.instructions+=2;goto B6ffdb2;
case 0x6ffdb3:c.instructions+=1;goto B6ffdb3;
case 0x6ffdb4:goto L6ffdb4;
case 0x6ffdb5:c.instructions+=14;goto B6ffdb5;
case 0x6ffdb6:c.instructions+=13;goto B6ffdb6;
case 0x6ffdb7:c.instructions+=12;goto B6ffdb7;
case 0x6ffdb8:c.instructions+=11;goto B6ffdb8;
case 0x6ffdbc:c.instructions+=10;goto B6ffdbc;
case 0x6ffdc0:c.instructions+=9;goto B6ffdc0;
case 0x6ffdc4:c.instructions+=8;goto B6ffdc4;
case 0x6ffdc8:c.instructions+=7;goto B6ffdc8;
case 0x6ffdcc:c.instructions+=6;goto B6ffdcc;
case 0x6ffdd3:c.instructions+=5;goto B6ffdd3;
case 0x6ffdda:c.instructions+=4;goto B6ffdda;
case 0x6ffde1:c.instructions+=3;goto B6ffde1;
case 0x6ffde8:c.instructions+=2;goto B6ffde8;
case 0x6ffdea:c.instructions+=1;goto B6ffdea;
case 0x6ffdec:goto L6ffdec;
case 0x6ffdee:c.instructions+=30;goto B6ffdee;
case 0x6ffdef:c.instructions+=29;goto B6ffdef;
case 0x6ffdf1:c.instructions+=28;goto B6ffdf1;
case 0x6ffdf2:c.instructions+=27;goto B6ffdf2;
case 0x6ffdfa:c.instructions+=26;goto B6ffdfa;
case 0x6ffe02:c.instructions+=25;goto B6ffe02;
case 0x6ffe04:c.instructions+=24;goto B6ffe04;
case 0x6ffe07:c.instructions+=23;goto B6ffe07;
case 0x6ffe0a:c.instructions+=22;goto B6ffe0a;
case 0x6ffe0d:c.instructions+=21;goto B6ffe0d;
case 0x6ffe15:c.instructions+=20;goto B6ffe15;
case 0x6ffe1d:c.instructions+=19;goto B6ffe1d;
case 0x6ffe20:c.instructions+=18;goto B6ffe20;
case 0x6ffe23:c.instructions+=17;goto B6ffe23;
case 0x6ffe26:c.instructions+=16;goto B6ffe26;
case 0x6ffe29:c.instructions+=15;goto B6ffe29;
case 0x6ffe2c:c.instructions+=14;goto B6ffe2c;
case 0x6ffe2f:c.instructions+=13;goto B6ffe2f;
case 0x6ffe32:c.instructions+=12;goto B6ffe32;
case 0x6ffe35:c.instructions+=11;goto B6ffe35;
case 0x6ffe38:c.instructions+=10;goto B6ffe38;
case 0x6ffe3c:c.instructions+=9;goto B6ffe3c;
case 0x6ffe3f:c.instructions+=8;goto B6ffe3f;
case 0x6ffe42:c.instructions+=7;goto B6ffe42;
case 0x6ffe46:c.instructions+=6;goto B6ffe46;
case 0x6ffe49:c.instructions+=5;goto B6ffe49;
case 0x6ffe4b:c.instructions+=4;goto B6ffe4b;
case 0x6ffe4d:c.instructions+=3;goto B6ffe4d;
case 0x6ffe4f:c.instructions+=2;goto B6ffe4f;
case 0x6ffe53:c.instructions+=1;goto B6ffe53;
case 0x6ffe55:goto L6ffe55;
case 0x6ffe56:c.instructions+=4;goto B6ffe56;
case 0x6ffe57:c.instructions+=3;goto B6ffe57;
case 0x6ffe58:c.instructions+=2;goto B6ffe58;
case 0x6ffe59:c.instructions+=1;goto B6ffe59;
case 0x6ffe5a:goto L6ffe5a;
case 0x6ffe5b:c.instructions+=14;goto B6ffe5b;
case 0x6ffe5c:c.instructions+=13;goto B6ffe5c;
case 0x6ffe5d:c.instructions+=12;goto B6ffe5d;
case 0x6ffe5e:c.instructions+=11;goto B6ffe5e;
case 0x6ffe62:c.instructions+=10;goto B6ffe62;
case 0x6ffe66:c.instructions+=9;goto B6ffe66;
case 0x6ffe6a:c.instructions+=8;goto B6ffe6a;
case 0x6ffe6e:c.instructions+=7;goto B6ffe6e;
case 0x6ffe72:c.instructions+=6;goto B6ffe72;
case 0x6ffe79:c.instructions+=5;goto B6ffe79;
case 0x6ffe80:c.instructions+=4;goto B6ffe80;
case 0x6ffe87:c.instructions+=3;goto B6ffe87;
case 0x6ffe8e:c.instructions+=2;goto B6ffe8e;
case 0x6ffe90:c.instructions+=1;goto B6ffe90;
case 0x6ffe92:goto L6ffe92;
case 0x6ffe94:c.instructions+=42;goto B6ffe94;
case 0x6ffe95:c.instructions+=41;goto B6ffe95;
case 0x6ffe97:c.instructions+=40;goto B6ffe97;
case 0x6ffe98:c.instructions+=39;goto B6ffe98;
case 0x6ffea0:c.instructions+=38;goto B6ffea0;
case 0x6ffea8:c.instructions+=37;goto B6ffea8;
case 0x6ffeaa:c.instructions+=36;goto B6ffeaa;
case 0x6ffead:c.instructions+=35;goto B6ffead;
case 0x6ffeb0:c.instructions+=34;goto B6ffeb0;
case 0x6ffeb3:c.instructions+=33;goto B6ffeb3;
case 0x6ffebb:c.instructions+=32;goto B6ffebb;
case 0x6ffec3:c.instructions+=31;goto B6ffec3;
case 0x6ffec6:c.instructions+=30;goto B6ffec6;
case 0x6ffec9:c.instructions+=29;goto B6ffec9;
case 0x6ffecc:c.instructions+=28;goto B6ffecc;
case 0x6ffecf:c.instructions+=27;goto B6ffecf;
case 0x6ffed1:c.instructions+=26;goto B6ffed1;
case 0x6ffed4:c.instructions+=25;goto B6ffed4;
case 0x6ffed7:c.instructions+=24;goto B6ffed7;
case 0x6ffeda:c.instructions+=23;goto B6ffeda;
case 0x6ffedd:c.instructions+=22;goto B6ffedd;
case 0x6ffee0:c.instructions+=21;goto B6ffee0;
case 0x6ffee3:c.instructions+=20;goto B6ffee3;
case 0x6ffee6:c.instructions+=19;goto B6ffee6;
case 0x6ffee9:c.instructions+=18;goto B6ffee9;
case 0x6ffeec:c.instructions+=17;goto B6ffeec;
case 0x6ffeef:c.instructions+=16;goto B6ffeef;
case 0x6ffef2:c.instructions+=15;goto B6ffef2;
case 0x6ffef6:c.instructions+=14;goto B6ffef6;
case 0x6ffefa:c.instructions+=13;goto B6ffefa;
case 0x6ffefd:c.instructions+=12;goto B6ffefd;
case 0x6fff00:c.instructions+=11;goto B6fff00;
case 0x6fff03:c.instructions+=10;goto B6fff03;
case 0x6fff06:c.instructions+=9;goto B6fff06;
case 0x6fff0a:c.instructions+=8;goto B6fff0a;
case 0x6fff0e:c.instructions+=7;goto B6fff0e;
case 0x6fff11:c.instructions+=6;goto B6fff11;
case 0x6fff14:c.instructions+=5;goto B6fff14;
case 0x6fff16:c.instructions+=4;goto B6fff16;
case 0x6fff1a:c.instructions+=3;goto B6fff1a;
case 0x6fff1e:c.instructions+=2;goto B6fff1e;
case 0x6fff20:c.instructions+=1;goto B6fff20;
case 0x6fff26:goto L6fff26;
case 0x6fff27:c.instructions+=4;goto B6fff27;
case 0x6fff28:c.instructions+=3;goto B6fff28;
case 0x6fff29:c.instructions+=2;goto B6fff29;
case 0x6fff2a:c.instructions+=1;goto B6fff2a;
case 0x6fff2b:goto L6fff2b;
case 0x6fff2f:c.instructions+=10;goto B6fff2f;
case 0x6fff33:c.instructions+=9;goto B6fff33;
case 0x6fff37:c.instructions+=8;goto B6fff37;
case 0x6fff3e:c.instructions+=7;goto B6fff3e;
case 0x6fff45:c.instructions+=6;goto B6fff45;
case 0x6fff4c:c.instructions+=5;goto B6fff4c;
case 0x6fff53:c.instructions+=4;goto B6fff53;
case 0x6fff5a:c.instructions+=3;goto B6fff5a;
case 0x6fff5d:c.instructions+=2;goto B6fff5d;
case 0x6fff61:c.instructions+=1;goto B6fff61;
case 0x6fff64:goto L6fff64;
case 0x6fff67:c.instructions+=22;goto B6fff67;
case 0x6fff6a:c.instructions+=21;goto B6fff6a;
case 0x6fff6e:c.instructions+=20;goto B6fff6e;
case 0x6fff71:c.instructions+=19;goto B6fff71;
case 0x6fff74:c.instructions+=18;goto B6fff74;
case 0x6fff77:c.instructions+=17;goto B6fff77;
case 0x6fff7b:c.instructions+=16;goto B6fff7b;
case 0x6fff7e:c.instructions+=15;goto B6fff7e;
case 0x6fff81:c.instructions+=14;goto B6fff81;
case 0x6fff84:c.instructions+=13;goto B6fff84;
case 0x6fff87:c.instructions+=12;goto B6fff87;
case 0x6fff8a:c.instructions+=11;goto B6fff8a;
case 0x6fff8d:c.instructions+=10;goto B6fff8d;
case 0x6fff91:c.instructions+=9;goto B6fff91;
case 0x6fff94:c.instructions+=8;goto B6fff94;
case 0x6fff97:c.instructions+=7;goto B6fff97;
case 0x6fff99:c.instructions+=6;goto B6fff99;
case 0x6fff9c:c.instructions+=5;goto B6fff9c;
case 0x6fffa0:c.instructions+=4;goto B6fffa0;
case 0x6fffa3:c.instructions+=3;goto B6fffa3;
case 0x6fffa6:c.instructions+=2;goto B6fffa6;
case 0x6fffaa:c.instructions+=1;goto B6fffaa;
case 0x6fffac:goto L6fffac;
case 0x6fffad:goto L6fffad;
case 0x6fffae:c.instructions+=19;goto B6fffae;
case 0x6fffb2:c.instructions+=18;goto B6fffb2;
case 0x6fffb6:c.instructions+=17;goto B6fffb6;
case 0x6fffba:c.instructions+=16;goto B6fffba;
case 0x6fffbe:c.instructions+=15;goto B6fffbe;
case 0x6fffc5:c.instructions+=14;goto B6fffc5;
case 0x6fffcc:c.instructions+=13;goto B6fffcc;
case 0x6fffd3:c.instructions+=12;goto B6fffd3;
case 0x6fffda:c.instructions+=11;goto B6fffda;
case 0x6fffe1:c.instructions+=10;goto B6fffe1;
case 0x6fffe4:c.instructions+=9;goto B6fffe4;
case 0x6fffe7:c.instructions+=8;goto B6fffe7;
case 0x6fffeb:c.instructions+=7;goto B6fffeb;
case 0x6fffef:c.instructions+=6;goto B6fffef;
case 0x6ffff2:c.instructions+=5;goto B6ffff2;
case 0x6ffff5:c.instructions+=4;goto B6ffff5;
case 0x6ffff8:c.instructions+=3;goto B6ffff8;
case 0x6ffffb:c.instructions+=2;goto B6ffffb;
case 0x6ffffe:c.instructions+=1;goto B6ffffe;
default:missing_instruction(c.pc);}
B6ff000:L6ff000:{c.instructions+=4;NFSU2_TR(0x6ff000);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ff003:{NFSU2_TR(0x6ff003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff006:{NFSU2_TR(0x6ff006);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ff008:{NFSU2_TR(0x6ff008);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ff010;}}
}
B6ff00a:L6ff00a:{c.instructions+=1;NFSU2_TR(0x6ff00a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ff010:L6ff010:{c.instructions+=6;NFSU2_TR(0x6ff010);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ff016:{NFSU2_TR(0x6ff016);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff017:{NFSU2_TR(0x6ff017);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ff01a:{NFSU2_TR(0x6ff01a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff01c:{NFSU2_TR(0x6ff01c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ff01f:{NFSU2_TR(0x6ff01f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff024ull));
TAIL_STATIC(0x723e9du,723);
}
B6ff024:L6ff024:{c.instructions+=3;NFSU2_TR(0x6ff024);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ff027:{NFSU2_TR(0x6ff027);
__builtin_memmove((R+24),(R+0),4);
}
B6ff029:{NFSU2_TR(0x6ff029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff02eull));
TAIL_STATIC(0x721fa7u,721);
}
B6ff02e:L6ff02e:{c.instructions+=2;NFSU2_TR(0x6ff02e);
__builtin_memmove((R+0),(R+24),4);
}
B6ff030:{NFSU2_TR(0x6ff030);
{goto L6ff034;}
}
B6ff032:L6ff032:{c.instructions+=1;NFSU2_TR(0x6ff032);
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
B6ff034:L6ff034:{c.instructions+=3;NFSU2_TR(0x6ff034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff035:{NFSU2_TR(0x6ff035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff036:{NFSU2_TR(0x6ff036);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff039:L6ff039:{c.instructions+=6;NFSU2_TR(0x6ff039);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff03a:{NFSU2_TR(0x6ff03a);
__builtin_memmove((R+20),(R+16),4);
}
B6ff03c:{NFSU2_TR(0x6ff03c);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff03f:{NFSU2_TR(0x6ff03f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff040:{NFSU2_TR(0x6ff040);
__builtin_memmove((R+24),(R+4),4);
}
B6ff042:{NFSU2_TR(0x6ff042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff047ull));
TAIL_STATIC(0x721f99u,721);
}
B6ff047:L6ff047:{c.instructions+=5;NFSU2_TR(0x6ff047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ff04a:{NFSU2_TR(0x6ff04a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff04d:{NFSU2_TR(0x6ff04d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff04e:{NFSU2_TR(0x6ff04e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff04f:{NFSU2_TR(0x6ff04f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff054ull));
TAIL_STATIC(0x722eceu,722);
}
B6ff054:L6ff054:{c.instructions+=5;NFSU2_TR(0x6ff054);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ff056:{NFSU2_TR(0x6ff056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff057:{NFSU2_TR(0x6ff057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff058:{NFSU2_TR(0x6ff058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff059:{NFSU2_TR(0x6ff059);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ff06d;}}
}
B6ff05b:L6ff05b:{c.instructions+=4;NFSU2_TR(0x6ff05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff05e:{NFSU2_TR(0x6ff05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff05f:{NFSU2_TR(0x6ff05f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ff062:{NFSU2_TR(0x6ff062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff067ull));
TAIL_STATIC(0x722db5u,722);
}
B6ff067:L6ff067:{c.instructions+=4;NFSU2_TR(0x6ff067);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ff069:{NFSU2_TR(0x6ff069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff06a:{NFSU2_TR(0x6ff06a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff06b:{NFSU2_TR(0x6ff06b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ff076;}}
}
B6ff06d:L6ff06d:{c.instructions+=1;NFSU2_TR(0x6ff06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff072ull));
TAIL_STATIC(0x721fa7u,721);
}
B6ff072:L6ff072:{c.instructions+=3;NFSU2_TR(0x6ff072);
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
B6ff074:{NFSU2_TR(0x6ff074);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff075:{NFSU2_TR(0x6ff075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff076:L6ff076:{c.instructions+=1;NFSU2_TR(0x6ff076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff07bull));
TAIL_STATIC(0x721fa7u,721);
}
B6ff07b:L6ff07b:{c.instructions+=5;NFSU2_TR(0x6ff07b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff07d:{NFSU2_TR(0x6ff07d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B6ff080:{NFSU2_TR(0x6ff080);
__builtin_memmove((R+0),(R+518),1);
}
B6ff083:{NFSU2_TR(0x6ff083);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff084:{NFSU2_TR(0x6ff084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff085:L6ff085:{c.instructions+=8;NFSU2_TR(0x6ff085);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff086:{NFSU2_TR(0x6ff086);
__builtin_memmove((R+20),(R+16),4);
}
B6ff088:{NFSU2_TR(0x6ff088);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff08e:{NFSU2_TR(0x6ff08e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff090:{NFSU2_TR(0x6ff090);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff092:{NFSU2_TR(0x6ff092);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ff095:{NFSU2_TR(0x6ff095);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff09a:{NFSU2_TR(0x6ff09a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff0a0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ff0a0:L6ff0a0:{c.instructions+=3;NFSU2_TR(0x6ff0a0);
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
B6ff0a3:{NFSU2_TR(0x6ff0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff0a4:{NFSU2_TR(0x6ff0a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff0af:L6ff0af:{c.instructions+=5;NFSU2_TR(0x6ff0af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0b0:{NFSU2_TR(0x6ff0b0);
__builtin_memmove((R+20),(R+16),4);
}
B6ff0b2:{NFSU2_TR(0x6ff0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff0b5:{NFSU2_TR(0x6ff0b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6ff0b8:{NFSU2_TR(0x6ff0b8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ff0be;}}
}
B6ff0ba:L6ff0ba:{c.instructions+=2;NFSU2_TR(0x6ff0ba);
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
B6ff0bc:{NFSU2_TR(0x6ff0bc);
{goto L6ff0c3;}
}
B6ff0be:L6ff0be:{c.instructions+=2;NFSU2_TR(0x6ff0be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff0c1:{NFSU2_TR(0x6ff0c1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff0c3:L6ff0c3:{c.instructions+=2;NFSU2_TR(0x6ff0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff0c4:{NFSU2_TR(0x6ff0c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff0c7:L6ff0c7:{c.instructions+=7;NFSU2_TR(0x6ff0c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0c8:{NFSU2_TR(0x6ff0c8);
__builtin_memmove((R+20),(R+16),4);
}
B6ff0ca:{NFSU2_TR(0x6ff0ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0cb:{NFSU2_TR(0x6ff0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff0ce:{NFSU2_TR(0x6ff0ce);
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
B6ff0d0:{NFSU2_TR(0x6ff0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff0d3:{NFSU2_TR(0x6ff0d3);
if(r1(R+518)){{goto L6ff131;}}
}
B6ff0d5:L6ff0d5:{c.instructions+=8;NFSU2_TR(0x6ff0d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0d6:{NFSU2_TR(0x6ff0d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0d7:{NFSU2_TR(0x6ff0d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ff0d9:{NFSU2_TR(0x6ff0d9);
__builtin_memmove((R+4),(R+0),4);
}
B6ff0db:{NFSU2_TR(0x6ff0db);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ff0de:{NFSU2_TR(0x6ff0de);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6ff0e1:{NFSU2_TR(0x6ff0e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff0e4:{NFSU2_TR(0x6ff0e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ff110;}}
}
B6ff0e6:L6ff0e6:{c.instructions+=1;NFSU2_TR(0x6ff0e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff0e7:L6ff0e7:{c.instructions+=9;NFSU2_TR(0x6ff0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff0ea:{NFSU2_TR(0x6ff0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ff0ed:{NFSU2_TR(0x6ff0ed);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6ff0ee:{NFSU2_TR(0x6ff0ee);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6ff0f0:{NFSU2_TR(0x6ff0f0);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6ff0f2:{NFSU2_TR(0x6ff0f2);
__builtin_memmove((R+8),(R+0),4);
}
B6ff0f4:{NFSU2_TR(0x6ff0f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6ff0f7:{NFSU2_TR(0x6ff0f7);
u8 U[24];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+12))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ff0fb:{NFSU2_TR(0x6ff0fb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ff101;}}
}
B6ff0fd:L6ff0fd:{c.instructions+=2;NFSU2_TR(0x6ff0fd);
__builtin_memmove((R+4),(R+0),4);
}
B6ff0ff:{NFSU2_TR(0x6ff0ff);
{goto L6ff103;}
}
B6ff101:L6ff101:{c.instructions+=1;NFSU2_TR(0x6ff101);
__builtin_memmove((R+24),(R+0),4);
}
B6ff103:L6ff103:{c.instructions+=4;NFSU2_TR(0x6ff103);
__builtin_memmove((R+0),(R+4),4);
}
B6ff105:{NFSU2_TR(0x6ff105);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6ff107:{NFSU2_TR(0x6ff107);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff10a:{NFSU2_TR(0x6ff10a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff0e7u);}goto L6ff0e7;}}
}
B6ff10c:L6ff10c:{c.instructions+=2;NFSU2_TR(0x6ff10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff10f:{NFSU2_TR(0x6ff10f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff110:L6ff110:{c.instructions+=3;NFSU2_TR(0x6ff110);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ff111:{NFSU2_TR(0x6ff111);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff113:{NFSU2_TR(0x6ff113);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ff119;}}
}
B6ff115:L6ff115:{c.instructions+=2;NFSU2_TR(0x6ff115);
__builtin_memmove((R+8),(R+4),4);
}
B6ff117:{NFSU2_TR(0x6ff117);
{goto L6ff11b;}
}
B6ff119:L6ff119:{c.instructions+=1;NFSU2_TR(0x6ff119);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ff11b:L6ff11b:{c.instructions+=3;NFSU2_TR(0x6ff11b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ff11c:{NFSU2_TR(0x6ff11c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ff11e:{NFSU2_TR(0x6ff11e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ff12a;}}
}
B6ff120:L6ff120:{c.instructions+=2;NFSU2_TR(0x6ff120);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff122:{NFSU2_TR(0x6ff122);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ff128;}}
}
B6ff124:L6ff124:{c.instructions+=2;NFSU2_TR(0x6ff124);
__builtin_memmove((R+0),(R+4),4);
}
B6ff126:{NFSU2_TR(0x6ff126);
{goto L6ff12a;}
}
B6ff128:L6ff128:{c.instructions+=1;NFSU2_TR(0x6ff128);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff12a:L6ff12a:{c.instructions+=4;NFSU2_TR(0x6ff12a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff12d:{NFSU2_TR(0x6ff12d);
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
B6ff12f:{NFSU2_TR(0x6ff12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ff130:{NFSU2_TR(0x6ff130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff131:L6ff131:{c.instructions+=2;NFSU2_TR(0x6ff131);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff132:{NFSU2_TR(0x6ff132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff139:L6ff139:{c.instructions+=9;NFSU2_TR(0x6ff139);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff13a:{NFSU2_TR(0x6ff13a);
__builtin_memmove((R+20),(R+16),4);
}
B6ff13c:{NFSU2_TR(0x6ff13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff13f:{NFSU2_TR(0x6ff13f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff140:{NFSU2_TR(0x6ff140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ff142:{NFSU2_TR(0x6ff142);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff143:{NFSU2_TR(0x6ff143);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ff145:{NFSU2_TR(0x6ff145);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff147:{NFSU2_TR(0x6ff147);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff15d;}}
}
B6ff149:L6ff149:{c.instructions+=3;NFSU2_TR(0x6ff149);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B6ff14d:{NFSU2_TR(0x6ff14d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff14e:{NFSU2_TR(0x6ff14e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff153ull));
TAIL_STATIC(0x75dfb2u,75d);
}
B6ff153:L6ff153:{c.instructions+=3;NFSU2_TR(0x6ff153);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff155:{NFSU2_TR(0x6ff155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff156:{NFSU2_TR(0x6ff156);
if(r1(R+518)){{goto L6ff15d;}}
}
B6ff158:L6ff158:{c.instructions+=3;NFSU2_TR(0x6ff158);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ff159:{NFSU2_TR(0x6ff159);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+10)));
w4(U+14,u32(u32(r4(R+24))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff15b:{NFSU2_TR(0x6ff15b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff149u);}goto L6ff149;}}
}
B6ff15d:L6ff15d:{c.instructions+=8;NFSU2_TR(0x6ff15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff160:{NFSU2_TR(0x6ff160);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ff163:{NFSU2_TR(0x6ff163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ff165:{NFSU2_TR(0x6ff165);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,u8((r4(U+0))<(r4(R+24))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+24))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff167:{NFSU2_TR(0x6ff167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff168:{NFSU2_TR(0x6ff168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff169:{NFSU2_TR(0x6ff169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff16a:{NFSU2_TR(0x6ff16a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff16b:L6ff16b:{c.instructions+=9;NFSU2_TR(0x6ff16b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff16c:{NFSU2_TR(0x6ff16c);
__builtin_memmove((R+20),(R+16),4);
}
B6ff16e:{NFSU2_TR(0x6ff16e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff16f:{NFSU2_TR(0x6ff16f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff170:{NFSU2_TR(0x6ff170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff174:{NFSU2_TR(0x6ff174);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff177:{NFSU2_TR(0x6ff177);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff178:{NFSU2_TR(0x6ff178);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff179:{NFSU2_TR(0x6ff179);
if(r1(R+518)){{goto L6ff1b2;}}
}
B6ff17b:L6ff17b:{c.instructions+=4;NFSU2_TR(0x6ff17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff17e:{NFSU2_TR(0x6ff17e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6ff180:{NFSU2_TR(0x6ff180);
__builtin_memmove((R+24),(R+28),4);
}
B6ff182:{NFSU2_TR(0x6ff182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff185:L6ff185:{c.instructions+=4;NFSU2_TR(0x6ff185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff188:{NFSU2_TR(0x6ff188);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B6ff18b:{NFSU2_TR(0x6ff18b);
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
B6ff18d:{NFSU2_TR(0x6ff18d);
if(r1(R+518)){{goto L6ff1b2;}}
}
B6ff18f:L6ff18f:{c.instructions+=3;NFSU2_TR(0x6ff18f);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6ff192:{NFSU2_TR(0x6ff192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff193:{NFSU2_TR(0x6ff193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff198ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6ff198:L6ff198:{c.instructions+=4;NFSU2_TR(0x6ff198);
__builtin_memmove((R+12),(R+0),4);
}
B6ff19a:{NFSU2_TR(0x6ff19a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6ff19d:{NFSU2_TR(0x6ff19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff19e:{NFSU2_TR(0x6ff19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff1a3ull));
TAIL_STATIC(0x75ded8u,75d);
}
B6ff1a3:L6ff1a3:{c.instructions+=4;NFSU2_TR(0x6ff1a3);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff1a5:{NFSU2_TR(0x6ff1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff1a6:{NFSU2_TR(0x6ff1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff1a7:{NFSU2_TR(0x6ff1a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff1c2;}}
}
B6ff1a9:L6ff1a9:{c.instructions+=4;NFSU2_TR(0x6ff1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff1ac:{NFSU2_TR(0x6ff1ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ff1ad:{NFSU2_TR(0x6ff1ad);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff1b0:{NFSU2_TR(0x6ff1b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff185u);}goto L6ff185;}}
}
B6ff1b2:L6ff1b2:{c.instructions+=5;NFSU2_TR(0x6ff1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff1b5:{NFSU2_TR(0x6ff1b5);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(s32(s8(r1(U+8)))));
}
B6ff1b9:{NFSU2_TR(0x6ff1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff1bc:{NFSU2_TR(0x6ff1bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(s32(s8(r1(U+8)))));
}
B6ff1c0:{NFSU2_TR(0x6ff1c0);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff1c2:L6ff1c2:{c.instructions+=4;NFSU2_TR(0x6ff1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff1c3:{NFSU2_TR(0x6ff1c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff1c4:{NFSU2_TR(0x6ff1c4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff1c5:{NFSU2_TR(0x6ff1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff1c6:L6ff1c6:{c.instructions+=9;NFSU2_TR(0x6ff1c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff1c7:{NFSU2_TR(0x6ff1c7);
__builtin_memmove((R+20),(R+16),4);
}
B6ff1c9:{NFSU2_TR(0x6ff1c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B6ff1cc:{NFSU2_TR(0x6ff1cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff1cd:{NFSU2_TR(0x6ff1cd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ff1cf:{NFSU2_TR(0x6ff1cf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ff1d1:{NFSU2_TR(0x6ff1d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff1d4:{NFSU2_TR(0x6ff1d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff1d8:{NFSU2_TR(0x6ff1d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff1f6;}}
}
B6ff1da:L6ff1da:{c.instructions+=3;NFSU2_TR(0x6ff1da);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B6ff1dd:{NFSU2_TR(0x6ff1dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ff1df:{NFSU2_TR(0x6ff1df);
if(r1(R+518)){{goto L6ff1ed;}}
}
B6ff1e1:L6ff1e1:{c.instructions+=2;NFSU2_TR(0x6ff1e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ff1e3:{NFSU2_TR(0x6ff1e3);
if(r1(R+518)){{goto L6ff1ed;}}
}
B6ff1e5:L6ff1e5:{c.instructions+=3;NFSU2_TR(0x6ff1e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ff1e6:{NFSU2_TR(0x6ff1e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6ff1e9:{NFSU2_TR(0x6ff1e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff1dau);}goto L6ff1da;}}
}
B6ff1eb:L6ff1eb:{c.instructions+=1;NFSU2_TR(0x6ff1eb);
{goto L6ff1f6;}
}
B6ff1ed:L6ff1ed:{c.instructions+=3;NFSU2_TR(0x6ff1ed);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B6ff1f0:{NFSU2_TR(0x6ff1f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff1f3:{NFSU2_TR(0x6ff1f3);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6ff1f6:L6ff1f6:{c.instructions+=13;NFSU2_TR(0x6ff1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff1fa:{NFSU2_TR(0x6ff1fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x7a858cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff201:{NFSU2_TR(0x6ff201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7a7de4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff208:{NFSU2_TR(0x6ff208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x7c34a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff20f:{NFSU2_TR(0x6ff20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x7a8594ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff216:{NFSU2_TR(0x6ff216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x7c349cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff21d:{NFSU2_TR(0x6ff21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff220:{NFSU2_TR(0x6ff220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff227:{NFSU2_TR(0x6ff227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff22e:{NFSU2_TR(0x6ff22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff235:{NFSU2_TR(0x6ff235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff23c:{NFSU2_TR(0x6ff23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff23f:{NFSU2_TR(0x6ff23f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff240:L6ff240:{c.instructions+=4;NFSU2_TR(0x6ff240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff243:{NFSU2_TR(0x6ff243);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ff247:{NFSU2_TR(0x6ff247);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff248:{NFSU2_TR(0x6ff248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff24dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff16bu);}goto L6ff16b;}
}
B6ff24d:L6ff24d:{c.instructions+=3;NFSU2_TR(0x6ff24d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff24f:{NFSU2_TR(0x6ff24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff250:{NFSU2_TR(0x6ff250);
if(r1(R+518)){{goto L6ff260;}}
}
B6ff252:L6ff252:{c.instructions+=3;NFSU2_TR(0x6ff252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff255:{NFSU2_TR(0x6ff255);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
}
B6ff259:{NFSU2_TR(0x6ff259);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff240u);}goto L6ff240;}}
}
B6ff25b:L6ff25b:{c.instructions+=2;NFSU2_TR(0x6ff25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff25e:{NFSU2_TR(0x6ff25e);
{goto L6ff267;}
}
B6ff260:L6ff260:{c.instructions+=2;NFSU2_TR(0x6ff260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff263:{NFSU2_TR(0x6ff263);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff267:L6ff267:{c.instructions+=3;NFSU2_TR(0x6ff267);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6ff26a:{NFSU2_TR(0x6ff26a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ff26b:{NFSU2_TR(0x6ff26b);
if(r1(R+518)){{goto L6ff273;}}
}
B6ff26d:L6ff26d:{c.instructions+=2;NFSU2_TR(0x6ff26d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ff270:{NFSU2_TR(0x6ff270);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6ff273:L6ff273:{c.instructions+=3;NFSU2_TR(0x6ff273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff274:{NFSU2_TR(0x6ff274);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff275:{NFSU2_TR(0x6ff275);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff276:L6ff276:{c.instructions+=9;NFSU2_TR(0x6ff276);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff277:{NFSU2_TR(0x6ff277);
__builtin_memmove((R+20),(R+16),4);
}
B6ff279:{NFSU2_TR(0x6ff279);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff27a:{NFSU2_TR(0x6ff27a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff27b:{NFSU2_TR(0x6ff27b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff27c:{NFSU2_TR(0x6ff27c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ff27e:{NFSU2_TR(0x6ff27e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff280:{NFSU2_TR(0x6ff280);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff284:{NFSU2_TR(0x6ff284);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff2a6;}}
}
B6ff286:L6ff286:{c.instructions+=1;NFSU2_TR(0x6ff286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff288:L6ff288:{c.instructions+=3;NFSU2_TR(0x6ff288);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B6ff28b:{NFSU2_TR(0x6ff28b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ff28e:{NFSU2_TR(0x6ff28e);
if(r1(R+518)){{goto L6ff29c;}}
}
B6ff290:L6ff290:{c.instructions+=2;NFSU2_TR(0x6ff290);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ff293:{NFSU2_TR(0x6ff293);
if(r1(R+518)){{goto L6ff29c;}}
}
B6ff295:L6ff295:{c.instructions+=3;NFSU2_TR(0x6ff295);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ff296:{NFSU2_TR(0x6ff296);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+10)));
w4(U+14,u32(u32(r4(R+28))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff298:{NFSU2_TR(0x6ff298);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff288u);}goto L6ff288;}}
}
B6ff29a:L6ff29a:{c.instructions+=1;NFSU2_TR(0x6ff29a);
{goto L6ff2a6;}
}
B6ff29c:L6ff29c:{c.instructions+=4;NFSU2_TR(0x6ff29c);
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
B6ff29e:{NFSU2_TR(0x6ff29e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ff2a0:{NFSU2_TR(0x6ff2a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff2a3:{NFSU2_TR(0x6ff2a3);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6ff2a6:L6ff2a6:{c.instructions+=5;NFSU2_TR(0x6ff2a6);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2a8:{NFSU2_TR(0x6ff2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff2ab:{NFSU2_TR(0x6ff2ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2ac:{NFSU2_TR(0x6ff2ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6ff2ae:{NFSU2_TR(0x6ff2ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff2b3ull));
TAIL_STATIC(0x760cf1u,760);
}
B6ff2b3:L6ff2b3:{c.instructions+=6;NFSU2_TR(0x6ff2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff2b5:{NFSU2_TR(0x6ff2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6ff2b8:{NFSU2_TR(0x6ff2b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ff2bb:{NFSU2_TR(0x6ff2bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+24)),r4(U+0));
}
B6ff2bd:{NFSU2_TR(0x6ff2bd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ff2bf:{NFSU2_TR(0x6ff2bf);
if(r1(R+518)){{goto L6ff2c9;}}
}
B6ff2c1:L6ff2c1:{c.instructions+=3;NFSU2_TR(0x6ff2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff2c3:{NFSU2_TR(0x6ff2c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6ff2c6:{NFSU2_TR(0x6ff2c6);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6ff2c9:L6ff2c9:{c.instructions+=4;NFSU2_TR(0x6ff2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff2cc:{NFSU2_TR(0x6ff2cc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+10)));
w4(U+14,u32(u32(r4(R+4))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff2ce:{NFSU2_TR(0x6ff2ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ff2cf:{NFSU2_TR(0x6ff2cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff2d5;}}
}
B6ff2d1:L6ff2d1:{c.instructions+=3;NFSU2_TR(0x6ff2d1);
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
B6ff2d3:{NFSU2_TR(0x6ff2d3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff2d4:{NFSU2_TR(0x6ff2d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff2d5:L6ff2d5:{c.instructions+=5;NFSU2_TR(0x6ff2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff2d8:{NFSU2_TR(0x6ff2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ff2da:{NFSU2_TR(0x6ff2da);
w1(R+0,u8(0x1ull));
}
B6ff2dc:{NFSU2_TR(0x6ff2dc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff2dd:{NFSU2_TR(0x6ff2dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff2de:L6ff2de:{c.instructions+=14;NFSU2_TR(0x6ff2de);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2df:{NFSU2_TR(0x6ff2df);
__builtin_memmove((R+20),(R+16),4);
}
B6ff2e1:{NFSU2_TR(0x6ff2e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2e2:{NFSU2_TR(0x6ff2e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2e3:{NFSU2_TR(0x6ff2e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2e4:{NFSU2_TR(0x6ff2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff2e7:{NFSU2_TR(0x6ff2e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2e8:{NFSU2_TR(0x6ff2e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2e9:{NFSU2_TR(0x6ff2e9);
__builtin_memmove((R+28),(R+0),4);
}
B6ff2eb:{NFSU2_TR(0x6ff2eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff2ed:{NFSU2_TR(0x6ff2ed);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ff2ef:{NFSU2_TR(0x6ff2ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff2f1:{NFSU2_TR(0x6ff2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff2f4:{NFSU2_TR(0x6ff2f4);
if(r1(R+518)){{goto L6ff360;}}
}
B6ff2f6:L6ff2f6:{c.instructions+=3;NFSU2_TR(0x6ff2f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff2f9:{NFSU2_TR(0x6ff2f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff2fa:{NFSU2_TR(0x6ff2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff2ffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff139u);}goto L6ff139;}
}
B6ff2ff:L6ff2ff:{c.instructions+=4;NFSU2_TR(0x6ff2ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff300:{NFSU2_TR(0x6ff300);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ff302:{NFSU2_TR(0x6ff302);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ff304:{NFSU2_TR(0x6ff304);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff360;}}
}
B6ff306:L6ff306:{c.instructions+=1;NFSU2_TR(0x6ff306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ff309:L6ff309:{c.instructions+=3;NFSU2_TR(0x6ff309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff30d:{NFSU2_TR(0x6ff30d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff311:{NFSU2_TR(0x6ff311);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff359;}}
}
B6ff313:L6ff313:{c.instructions+=7;NFSU2_TR(0x6ff313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff316:{NFSU2_TR(0x6ff316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff319:{NFSU2_TR(0x6ff319);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ff31c:{NFSU2_TR(0x6ff31c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff31e:{NFSU2_TR(0x6ff31e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff320:{NFSU2_TR(0x6ff320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff323:{NFSU2_TR(0x6ff323);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff346;}}
}
B6ff325:L6ff325:{c.instructions+=3;NFSU2_TR(0x6ff325);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ff328:{NFSU2_TR(0x6ff328);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
}
B6ff32a:{NFSU2_TR(0x6ff32a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ff346;}}
}
B6ff32c:L6ff32c:{c.instructions+=7;NFSU2_TR(0x6ff32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff32f:{NFSU2_TR(0x6ff32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff332:{NFSU2_TR(0x6ff332);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ff335:{NFSU2_TR(0x6ff335);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B6ff338:{NFSU2_TR(0x6ff338);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6ff33b:{NFSU2_TR(0x6ff33b);
u8 U[11];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(R+8))-u32(r1(U+9))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6ff33e:{NFSU2_TR(0x6ff33e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff346;}}
}
B6ff340:L6ff340:{c.instructions+=3;NFSU2_TR(0x6ff340);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ff341:{NFSU2_TR(0x6ff341);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ff344:{NFSU2_TR(0x6ff344);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff325u);}goto L6ff325;}}
}
B6ff346:L6ff346:{c.instructions+=2;NFSU2_TR(0x6ff346);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff349:{NFSU2_TR(0x6ff349);
if(r1(R+518)){{goto L6ff36f;}}
}
B6ff34b:L6ff34b:{c.instructions+=4;NFSU2_TR(0x6ff34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff34e:{NFSU2_TR(0x6ff34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff351:{NFSU2_TR(0x6ff351);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ff354:{NFSU2_TR(0x6ff354);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff313u);}goto L6ff313;}}
}
B6ff356:L6ff356:{c.instructions+=1;NFSU2_TR(0x6ff356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff359:L6ff359:{c.instructions+=3;NFSU2_TR(0x6ff359);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ff35a:{NFSU2_TR(0x6ff35a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
}
B6ff35c:{NFSU2_TR(0x6ff35c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff309u);}goto L6ff309;}}
}
B6ff35e:L6ff35e:{c.instructions+=1;NFSU2_TR(0x6ff35e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ff360:L6ff360:{c.instructions+=4;NFSU2_TR(0x6ff360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff363:{NFSU2_TR(0x6ff363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6ff365:{NFSU2_TR(0x6ff365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6ff367:{NFSU2_TR(0x6ff367);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff36a:L6ff36a:{c.instructions+=5;NFSU2_TR(0x6ff36a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ff36b:{NFSU2_TR(0x6ff36b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff36c:{NFSU2_TR(0x6ff36c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff36d:{NFSU2_TR(0x6ff36d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ff36e:{NFSU2_TR(0x6ff36e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff36f:L6ff36f:{c.instructions+=10;NFSU2_TR(0x6ff36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ff372:{NFSU2_TR(0x6ff372);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6ff374:{NFSU2_TR(0x6ff374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ff377:{NFSU2_TR(0x6ff377);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ff379:{NFSU2_TR(0x6ff379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff37c:{NFSU2_TR(0x6ff37c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6ff37e:{NFSU2_TR(0x6ff37e);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,u8((r4(U+0))<(r4(R+4))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+4))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6ff380:{NFSU2_TR(0x6ff380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff383:{NFSU2_TR(0x6ff383);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ff385:{NFSU2_TR(0x6ff385);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff36au);}goto L6ff36a;}
}
B6ff387:L6ff387:{c.instructions+=21;NFSU2_TR(0x6ff387);
__builtin_memmove((R+0),(R+4),4);
}
B6ff389:{NFSU2_TR(0x6ff389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff38d:{NFSU2_TR(0x6ff38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff391:{NFSU2_TR(0x6ff391);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff393:{NFSU2_TR(0x6ff393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff394:{NFSU2_TR(0x6ff394);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff397:{NFSU2_TR(0x6ff397);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff39a:{NFSU2_TR(0x6ff39a);
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
B6ff39c:{NFSU2_TR(0x6ff39c);
u8 U[4];
w4(U+0,u32(0x20ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ff3a2:{NFSU2_TR(0x6ff3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x15eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3a9:{NFSU2_TR(0x6ff3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x258ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3b0:{NFSU2_TR(0x6ff3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3b7:{NFSU2_TR(0x6ff3b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff3bb:{NFSU2_TR(0x6ff3bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x25ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff3bf:{NFSU2_TR(0x6ff3bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff3c3:{NFSU2_TR(0x6ff3c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x27ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff3c7:{NFSU2_TR(0x6ff3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3ca:{NFSU2_TR(0x6ff3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3cd:{NFSU2_TR(0x6ff3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3d0:{NFSU2_TR(0x6ff3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3d3:{NFSU2_TR(0x6ff3d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff3d4:L6ff3d4:{c.instructions+=6;NFSU2_TR(0x6ff3d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff3d5:{NFSU2_TR(0x6ff3d5);
__builtin_memmove((R+20),(R+16),4);
}
B6ff3d7:{NFSU2_TR(0x6ff3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff3da:{NFSU2_TR(0x6ff3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ff3dc:{NFSU2_TR(0x6ff3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff3dd:{NFSU2_TR(0x6ff3dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff3e0:L6ff3e0:{c.instructions+=6;NFSU2_TR(0x6ff3e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff3e1:{NFSU2_TR(0x6ff3e1);
__builtin_memmove((R+20),(R+16),4);
}
B6ff3e3:{NFSU2_TR(0x6ff3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff3e6:{NFSU2_TR(0x6ff3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3e9:{NFSU2_TR(0x6ff3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff3ea:{NFSU2_TR(0x6ff3ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff3ed:L6ff3ed:{c.instructions+=6;NFSU2_TR(0x6ff3ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff3ee:{NFSU2_TR(0x6ff3ee);
__builtin_memmove((R+20),(R+16),4);
}
B6ff3f0:{NFSU2_TR(0x6ff3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff3f3:{NFSU2_TR(0x6ff3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff3f6:{NFSU2_TR(0x6ff3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff3f7:{NFSU2_TR(0x6ff3f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff3fa:L6ff3fa:{c.instructions+=6;NFSU2_TR(0x6ff3fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff3fb:{NFSU2_TR(0x6ff3fb);
__builtin_memmove((R+20),(R+16),4);
}
B6ff3fd:{NFSU2_TR(0x6ff3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff400:{NFSU2_TR(0x6ff400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff403:{NFSU2_TR(0x6ff403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff404:{NFSU2_TR(0x6ff404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff407:L6ff407:{c.instructions+=6;NFSU2_TR(0x6ff407);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff408:{NFSU2_TR(0x6ff408);
__builtin_memmove((R+20),(R+16),4);
}
B6ff40a:{NFSU2_TR(0x6ff40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff40d:{NFSU2_TR(0x6ff40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff410:{NFSU2_TR(0x6ff410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff411:{NFSU2_TR(0x6ff411);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff414:L6ff414:{c.instructions+=6;NFSU2_TR(0x6ff414);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff415:{NFSU2_TR(0x6ff415);
__builtin_memmove((R+20),(R+16),4);
}
B6ff417:{NFSU2_TR(0x6ff417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff41a:{NFSU2_TR(0x6ff41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff41d:{NFSU2_TR(0x6ff41d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff41e:{NFSU2_TR(0x6ff41e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff421:L6ff421:{c.instructions+=6;NFSU2_TR(0x6ff421);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff422:{NFSU2_TR(0x6ff422);
__builtin_memmove((R+20),(R+16),4);
}
B6ff424:{NFSU2_TR(0x6ff424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff427:{NFSU2_TR(0x6ff427);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff42a:{NFSU2_TR(0x6ff42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff42b:{NFSU2_TR(0x6ff42b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff42e:L6ff42e:{c.instructions+=6;NFSU2_TR(0x6ff42e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff42f:{NFSU2_TR(0x6ff42f);
__builtin_memmove((R+20),(R+16),4);
}
B6ff431:{NFSU2_TR(0x6ff431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff434:{NFSU2_TR(0x6ff434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff437:{NFSU2_TR(0x6ff437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff438:{NFSU2_TR(0x6ff438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff43b:L6ff43b:{c.instructions+=6;NFSU2_TR(0x6ff43b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff43c:{NFSU2_TR(0x6ff43c);
__builtin_memmove((R+20),(R+16),4);
}
B6ff43e:{NFSU2_TR(0x6ff43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff441:{NFSU2_TR(0x6ff441);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff444:{NFSU2_TR(0x6ff444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff445:{NFSU2_TR(0x6ff445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff448:L6ff448:{c.instructions+=6;NFSU2_TR(0x6ff448);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff449:{NFSU2_TR(0x6ff449);
__builtin_memmove((R+20),(R+16),4);
}
B6ff44b:{NFSU2_TR(0x6ff44b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ff44e:{NFSU2_TR(0x6ff44e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff451:{NFSU2_TR(0x6ff451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff452:{NFSU2_TR(0x6ff452);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff455:L6ff455:{c.instructions+=6;NFSU2_TR(0x6ff455);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff456:{NFSU2_TR(0x6ff456);
__builtin_memmove((R+20),(R+16),4);
}
B6ff458:{NFSU2_TR(0x6ff458);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ff45b:{NFSU2_TR(0x6ff45b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff45e:{NFSU2_TR(0x6ff45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff45f:{NFSU2_TR(0x6ff45f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff462:L6ff462:{c.instructions+=6;NFSU2_TR(0x6ff462);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff463:{NFSU2_TR(0x6ff463);
__builtin_memmove((R+20),(R+16),4);
}
B6ff465:{NFSU2_TR(0x6ff465);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ff468:{NFSU2_TR(0x6ff468);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff46b:{NFSU2_TR(0x6ff46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff46c:{NFSU2_TR(0x6ff46c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff46f:L6ff46f:{c.instructions+=6;NFSU2_TR(0x6ff46f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff470:{NFSU2_TR(0x6ff470);
__builtin_memmove((R+20),(R+16),4);
}
B6ff472:{NFSU2_TR(0x6ff472);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ff475:{NFSU2_TR(0x6ff475);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff478:{NFSU2_TR(0x6ff478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff479:{NFSU2_TR(0x6ff479);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff47c:L6ff47c:{c.instructions+=11;NFSU2_TR(0x6ff47c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff47d:{NFSU2_TR(0x6ff47d);
__builtin_memmove((R+20),(R+16),4);
}
B6ff47f:{NFSU2_TR(0x6ff47f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff480:{NFSU2_TR(0x6ff480);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff481:{NFSU2_TR(0x6ff481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff484:{NFSU2_TR(0x6ff484);
__builtin_memmove((R+0),(R+28),4);
}
B6ff486:{NFSU2_TR(0x6ff486);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff489:{NFSU2_TR(0x6ff489);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff48c:{NFSU2_TR(0x6ff48c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff48d:{NFSU2_TR(0x6ff48d);
__builtin_memmove((R+24),(R+4),4);
}
B6ff48f:{NFSU2_TR(0x6ff48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff494ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff085u);}goto L6ff085;}
}
B6ff494:L6ff494:{c.instructions+=3;NFSU2_TR(0x6ff494);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff496:{NFSU2_TR(0x6ff496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff497:{NFSU2_TR(0x6ff497);
if(r1(R+518)){{goto L6ff4b2;}}
}
B6ff499:L6ff499:{c.instructions+=8;NFSU2_TR(0x6ff499);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff49a:{NFSU2_TR(0x6ff49a);
u8 U[4];
w4(U+0,u32(0x6ff387ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff49f:{NFSU2_TR(0x6ff49f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff4a0:{NFSU2_TR(0x6ff4a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff4a3:{NFSU2_TR(0x6ff4a3);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff4a5:{NFSU2_TR(0x6ff4a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff4a6:{NFSU2_TR(0x6ff4a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ff4a8:{NFSU2_TR(0x6ff4a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff4adull));
TAIL_STATIC(0x401650u,401);
}
B6ff4ad:L6ff4ad:{c.instructions+=3;NFSU2_TR(0x6ff4ad);
__builtin_memmove((R+0),(R+12),4);
}
B6ff4af:{NFSU2_TR(0x6ff4af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff4b0:{NFSU2_TR(0x6ff4b0);
{goto L6ff4b4;}
}
B6ff4b2:L6ff4b2:{c.instructions+=1;NFSU2_TR(0x6ff4b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff4b4:L6ff4b4:{c.instructions+=5;NFSU2_TR(0x6ff4b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ff4b6:{NFSU2_TR(0x6ff4b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff4b8:{NFSU2_TR(0x6ff4b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6ff4ba:{NFSU2_TR(0x6ff4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff4bd:{NFSU2_TR(0x6ff4bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff4c2;}}
}
B6ff4bf:L6ff4bf:{c.instructions+=1;NFSU2_TR(0x6ff4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff4c2:L6ff4c2:{c.instructions+=2;NFSU2_TR(0x6ff4c2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ff4c5:{NFSU2_TR(0x6ff4c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff4fb;}}
}
B6ff4c7:L6ff4c7:{c.instructions+=1;NFSU2_TR(0x6ff4c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff4c9:L6ff4c9:{c.instructions+=18;NFSU2_TR(0x6ff4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff4cb:{NFSU2_TR(0x6ff4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff4ce:{NFSU2_TR(0x6ff4ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ff4d1:{NFSU2_TR(0x6ff4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff4d3:{NFSU2_TR(0x6ff4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff4d6:{NFSU2_TR(0x6ff4d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff4da:{NFSU2_TR(0x6ff4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff4dc:{NFSU2_TR(0x6ff4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff4df:{NFSU2_TR(0x6ff4df);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff4e3:{NFSU2_TR(0x6ff4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff4e5:{NFSU2_TR(0x6ff4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff4e8:{NFSU2_TR(0x6ff4e8);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff4ec:{NFSU2_TR(0x6ff4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff4ee:{NFSU2_TR(0x6ff4ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff4f2:{NFSU2_TR(0x6ff4f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ff4f3:{NFSU2_TR(0x6ff4f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
}
B6ff4f6:{NFSU2_TR(0x6ff4f6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ff4f9:{NFSU2_TR(0x6ff4f9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff4c9u);}goto L6ff4c9;}}
}
B6ff4fb:L6ff4fb:{c.instructions+=4;NFSU2_TR(0x6ff4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ff4fc:{NFSU2_TR(0x6ff4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff4fd:{NFSU2_TR(0x6ff4fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ff4fe:{NFSU2_TR(0x6ff4fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ff501:L6ff501:{c.instructions+=38;NFSU2_TR(0x6ff501);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff502:{NFSU2_TR(0x6ff502);
__builtin_memmove((R+20),(R+16),4);
}
B6ff504:{NFSU2_TR(0x6ff504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B6ff50a:{NFSU2_TR(0x6ff50a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff50b:{NFSU2_TR(0x6ff50b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff50c:{NFSU2_TR(0x6ff50c);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B6ff50f:{NFSU2_TR(0x6ff50f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff510:{NFSU2_TR(0x6ff510);
__builtin_memmove((R+12),(R+4),4);
}
B6ff512:{NFSU2_TR(0x6ff512);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ff514:{NFSU2_TR(0x6ff514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff517:{NFSU2_TR(0x6ff517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff51a:{NFSU2_TR(0x6ff51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff51d:{NFSU2_TR(0x6ff51d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff520:{NFSU2_TR(0x6ff520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff523:{NFSU2_TR(0x6ff523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff526:{NFSU2_TR(0x6ff526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff529:{NFSU2_TR(0x6ff529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff52c:{NFSU2_TR(0x6ff52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff52f:{NFSU2_TR(0x6ff52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff532:{NFSU2_TR(0x6ff532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff535:{NFSU2_TR(0x6ff535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff538:{NFSU2_TR(0x6ff538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff53b:{NFSU2_TR(0x6ff53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff53e:{NFSU2_TR(0x6ff53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff541:{NFSU2_TR(0x6ff541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff544:{NFSU2_TR(0x6ff544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
w4(U+4,u32(0x7c34f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff54e:{NFSU2_TR(0x6ff54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w4(U+4,u32(0x7c34e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff558:{NFSU2_TR(0x6ff558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
w4(U+4,u32(0x7c34e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff562:{NFSU2_TR(0x6ff562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
w4(U+4,u32(0x7c34dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff56c:{NFSU2_TR(0x6ff56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
w4(U+4,u32(0x7c34d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff576:{NFSU2_TR(0x6ff576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
w4(U+4,u32(0x7c34ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff57d:{NFSU2_TR(0x6ff57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
w4(U+4,u32(0x7c34c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff584:{NFSU2_TR(0x6ff584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
w4(U+4,u32(0x7c34b4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff58b:{NFSU2_TR(0x6ff58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
w4(U+4,u32(0x7a8804ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff592:{NFSU2_TR(0x6ff592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
w4(U+4,u32(0x7c34b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff599:{NFSU2_TR(0x6ff599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
w4(U+4,u32(0x7a1104ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff5a0:{NFSU2_TR(0x6ff5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
w4(U+4,u32(0x7c34acull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff5a7:{NFSU2_TR(0x6ff5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
w4(U+4,u32(0x7a0bb4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff5ae:L6ff5ae:{c.instructions+=2;NFSU2_TR(0x6ff5ae);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff5b5:{NFSU2_TR(0x6ff5b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ff5b8:L6ff5b8:{c.instructions+=4;NFSU2_TR(0x6ff5b8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ff5ba:{NFSU2_TR(0x6ff5ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ff5bb:{NFSU2_TR(0x6ff5bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ff5bd:{NFSU2_TR(0x6ff5bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff5b8u);}goto L6ff5b8;}}
}
B6ff5bf:L6ff5bf:{c.instructions+=5;NFSU2_TR(0x6ff5bf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6ff5c1:{NFSU2_TR(0x6ff5c1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff5c8:{NFSU2_TR(0x6ff5c8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6ff5cb:{NFSU2_TR(0x6ff5cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x34ull))));
}
B6ff5ce:{NFSU2_TR(0x6ff5ce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff5aeu);}goto L6ff5ae;}}
}
B6ff5d0:L6ff5d0:{c.instructions+=5;NFSU2_TR(0x6ff5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff5d4:{NFSU2_TR(0x6ff5d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff5d8:{NFSU2_TR(0x6ff5d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff5dc:{NFSU2_TR(0x6ff5dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff5df:{NFSU2_TR(0x6ff5df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ff654;}}
}
B6ff5e1:L6ff5e1:{c.instructions+=5;NFSU2_TR(0x6ff5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff5e4:{NFSU2_TR(0x6ff5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff5e7:{NFSU2_TR(0x6ff5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6ff5ea:{NFSU2_TR(0x6ff5ea);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff5ed:{NFSU2_TR(0x6ff5ed);
if(r1(R+518)){{goto L6ff5f5;}}
}
B6ff5ef:L6ff5ef:{c.instructions+=2;NFSU2_TR(0x6ff5ef);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ff5f3:{NFSU2_TR(0x6ff5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff638;}}
}
B6ff5f5:L6ff5f5:{c.instructions+=3;NFSU2_TR(0x6ff5f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff5f8:{NFSU2_TR(0x6ff5f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff5fc:{NFSU2_TR(0x6ff5fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff638;}}
}
B6ff5fe:L6ff5fe:{c.instructions+=15;NFSU2_TR(0x6ff5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff601:{NFSU2_TR(0x6ff601);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff604:{NFSU2_TR(0x6ff604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff607:{NFSU2_TR(0x6ff607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff60a:{NFSU2_TR(0x6ff60a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff60d:{NFSU2_TR(0x6ff60d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff60e:{NFSU2_TR(0x6ff60e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff610:{NFSU2_TR(0x6ff610);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff616:{NFSU2_TR(0x6ff616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff617:{NFSU2_TR(0x6ff617);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff61d:{NFSU2_TR(0x6ff61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff61e:{NFSU2_TR(0x6ff61e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff621:{NFSU2_TR(0x6ff621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff622:{NFSU2_TR(0x6ff622);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff625:{NFSU2_TR(0x6ff625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff62aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff2deu);}goto L6ff2de;}
}
B6ff62a:L6ff62a:{c.instructions+=3;NFSU2_TR(0x6ff62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ff62d:{NFSU2_TR(0x6ff62d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff630:{NFSU2_TR(0x6ff630);
if(r1(R+518)){{goto L6ff638;}}
}
B6ff632:L6ff632:{c.instructions+=2;NFSU2_TR(0x6ff632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff635:{NFSU2_TR(0x6ff635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff638:L6ff638:{c.instructions+=2;NFSU2_TR(0x6ff638);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff63b:{NFSU2_TR(0x6ff63b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff644;}}
}
B6ff63d:L6ff63d:{c.instructions+=2;NFSU2_TR(0x6ff63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff640:{NFSU2_TR(0x6ff640);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff644:L6ff644:{c.instructions+=4;NFSU2_TR(0x6ff644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff647:{NFSU2_TR(0x6ff647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff64a:{NFSU2_TR(0x6ff64a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ff64d:{NFSU2_TR(0x6ff64d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff5e1u);}goto L6ff5e1;}}
}
B6ff64f:L6ff64f:{c.instructions+=2;NFSU2_TR(0x6ff64f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff652:{NFSU2_TR(0x6ff652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff660;}}
}
B6ff654:L6ff654:{c.instructions+=3;NFSU2_TR(0x6ff654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6ff657:{NFSU2_TR(0x6ff657);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
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
B6ff65b:{NFSU2_TR(0x6ff65b);
{goto L6ffc62;}
}
B6ff660:L6ff660:{c.instructions+=9;NFSU2_TR(0x6ff660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff663:{NFSU2_TR(0x6ff663);
__builtin_memmove((R+0),(R+24),4);
}
B6ff665:{NFSU2_TR(0x6ff665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff668:{NFSU2_TR(0x6ff668);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6ff66a:{NFSU2_TR(0x6ff66a);
__builtin_memmove((R+0),(R+28),4);
}
B6ff66c:{NFSU2_TR(0x6ff66c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff66f:{NFSU2_TR(0x6ff66f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff672:{NFSU2_TR(0x6ff672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff673:{NFSU2_TR(0x6ff673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff678ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff085u);}goto L6ff085;}
}
B6ff678:L6ff678:{c.instructions+=3;NFSU2_TR(0x6ff678);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff67a:{NFSU2_TR(0x6ff67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff67b:{NFSU2_TR(0x6ff67b);
if(r1(R+518)){{goto L6ff698;}}
}
B6ff67d:L6ff67d:{c.instructions+=8;NFSU2_TR(0x6ff67d);
u8 U[4];
w4(U+0,u32(0x6ff387ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff682:{NFSU2_TR(0x6ff682);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff683:{NFSU2_TR(0x6ff683);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ff685:{NFSU2_TR(0x6ff685);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ff688:{NFSU2_TR(0x6ff688);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff68a:{NFSU2_TR(0x6ff68a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff68b:{NFSU2_TR(0x6ff68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff68e:{NFSU2_TR(0x6ff68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff693ull));
TAIL_STATIC(0x401650u,401);
}
B6ff693:L6ff693:{c.instructions+=2;NFSU2_TR(0x6ff693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff696:{NFSU2_TR(0x6ff696);
{goto L6ff69a;}
}
B6ff698:L6ff698:{c.instructions+=1;NFSU2_TR(0x6ff698);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff69a:L6ff69a:{c.instructions+=7;NFSU2_TR(0x6ff69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff69d:{NFSU2_TR(0x6ff69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff6a0:{NFSU2_TR(0x6ff6a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ff6a2:{NFSU2_TR(0x6ff6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6ff6a4:{NFSU2_TR(0x6ff6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff6a7:{NFSU2_TR(0x6ff6a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff6a9:{NFSU2_TR(0x6ff6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff6ac:L6ff6ac:{c.instructions+=2;NFSU2_TR(0x6ff6ac);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6ff6b0:{NFSU2_TR(0x6ff6b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff6b3;}}
}
B6ff6b2:L6ff6b2:{c.instructions+=1;NFSU2_TR(0x6ff6b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ff6b3:L6ff6b3:{c.instructions+=2;NFSU2_TR(0x6ff6b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff6b6:{NFSU2_TR(0x6ff6b6);
if(r1(R+518)){{goto L6ff6c1;}}
}
B6ff6b8:L6ff6b8:{c.instructions+=4;NFSU2_TR(0x6ff6b8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ff6b9:{NFSU2_TR(0x6ff6b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ff6bc:{NFSU2_TR(0x6ff6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff6bf:{NFSU2_TR(0x6ff6bf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff6acu);}goto L6ff6ac;}}
}
B6ff6c1:L6ff6c1:{c.instructions+=2;NFSU2_TR(0x6ff6c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff6c5:{NFSU2_TR(0x6ff6c5);
{goto L6ff795;}
}
B6ff6ca:L6ff6ca:{c.instructions+=3;NFSU2_TR(0x6ff6ca);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ff6cc:{NFSU2_TR(0x6ff6cc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff6cf:{NFSU2_TR(0x6ff6cf);
if(r1(R+518)){{goto L6ff6db;}}
}
B6ff6d1:L6ff6d1:{c.instructions+=2;NFSU2_TR(0x6ff6d1);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ff6d5:{NFSU2_TR(0x6ff6d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff789;}}
}
B6ff6db:L6ff6db:{c.instructions+=16;NFSU2_TR(0x6ff6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff6de:{NFSU2_TR(0x6ff6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff6e1:{NFSU2_TR(0x6ff6e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff6e5:{NFSU2_TR(0x6ff6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff6e8:{NFSU2_TR(0x6ff6e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff6eb:{NFSU2_TR(0x6ff6eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff6ec:{NFSU2_TR(0x6ff6ec);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff6ee:{NFSU2_TR(0x6ff6ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff6f4:{NFSU2_TR(0x6ff6f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff6f5:{NFSU2_TR(0x6ff6f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff6fb:{NFSU2_TR(0x6ff6fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff6fc:{NFSU2_TR(0x6ff6fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff6ff:{NFSU2_TR(0x6ff6ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff700:{NFSU2_TR(0x6ff700);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff703:{NFSU2_TR(0x6ff703);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff706:{NFSU2_TR(0x6ff706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff70bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff2deu);}goto L6ff2de;}
}
B6ff70b:L6ff70b:{c.instructions+=4;NFSU2_TR(0x6ff70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff70e:{NFSU2_TR(0x6ff70e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ff711:{NFSU2_TR(0x6ff711);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ff714:{NFSU2_TR(0x6ff714);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ff783;}}
}
B6ff716:L6ff716:{c.instructions+=1;NFSU2_TR(0x6ff716);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6ffc69ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ff71d:L6ff71d:{c.instructions+=3;NFSU2_TR(0x6ff71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff720:{NFSU2_TR(0x6ff720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff723:{NFSU2_TR(0x6ff723);
{goto L6ff783;}
}
B6ff725:L6ff725:{c.instructions+=3;NFSU2_TR(0x6ff725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff728:{NFSU2_TR(0x6ff728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff72b:{NFSU2_TR(0x6ff72b);
{goto L6ff783;}
}
B6ff72d:L6ff72d:{c.instructions+=3;NFSU2_TR(0x6ff72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff730:{NFSU2_TR(0x6ff730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff733:{NFSU2_TR(0x6ff733);
{goto L6ff783;}
}
B6ff735:L6ff735:{c.instructions+=3;NFSU2_TR(0x6ff735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff738:{NFSU2_TR(0x6ff738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff73b:{NFSU2_TR(0x6ff73b);
{goto L6ff783;}
}
B6ff73d:L6ff73d:{c.instructions+=3;NFSU2_TR(0x6ff73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff740:{NFSU2_TR(0x6ff740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff743:{NFSU2_TR(0x6ff743);
{goto L6ff783;}
}
B6ff745:L6ff745:{c.instructions+=3;NFSU2_TR(0x6ff745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff748:{NFSU2_TR(0x6ff748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff74b:{NFSU2_TR(0x6ff74b);
{goto L6ff783;}
}
B6ff74d:L6ff74d:{c.instructions+=3;NFSU2_TR(0x6ff74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff750:{NFSU2_TR(0x6ff750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff753:{NFSU2_TR(0x6ff753);
{goto L6ff783;}
}
B6ff755:L6ff755:{c.instructions+=3;NFSU2_TR(0x6ff755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff758:{NFSU2_TR(0x6ff758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff75b:{NFSU2_TR(0x6ff75b);
{goto L6ff783;}
}
B6ff75d:L6ff75d:{c.instructions+=3;NFSU2_TR(0x6ff75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff760:{NFSU2_TR(0x6ff760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff763:{NFSU2_TR(0x6ff763);
{goto L6ff783;}
}
B6ff765:L6ff765:{c.instructions+=3;NFSU2_TR(0x6ff765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff768:{NFSU2_TR(0x6ff768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff76b:{NFSU2_TR(0x6ff76b);
{goto L6ff783;}
}
B6ff76d:L6ff76d:{c.instructions+=3;NFSU2_TR(0x6ff76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff770:{NFSU2_TR(0x6ff770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff773:{NFSU2_TR(0x6ff773);
{goto L6ff783;}
}
B6ff775:L6ff775:{c.instructions+=3;NFSU2_TR(0x6ff775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff778:{NFSU2_TR(0x6ff778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff77b:{NFSU2_TR(0x6ff77b);
{goto L6ff783;}
}
B6ff77d:L6ff77d:{c.instructions+=2;NFSU2_TR(0x6ff77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff780:{NFSU2_TR(0x6ff780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff783:L6ff783:{c.instructions+=2;NFSU2_TR(0x6ff783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff786:{NFSU2_TR(0x6ff786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff789:L6ff789:{c.instructions+=3;NFSU2_TR(0x6ff789);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6ff78c:{NFSU2_TR(0x6ff78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ff78f:{NFSU2_TR(0x6ff78f);
if(r1(R+518)){{goto L6ff7a0;}}
}
B6ff791:L6ff791:{c.instructions+=2;NFSU2_TR(0x6ff791);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ff792:{NFSU2_TR(0x6ff792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff795:L6ff795:{c.instructions+=2;NFSU2_TR(0x6ff795);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ff798:{NFSU2_TR(0x6ff798);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff6cau);}goto L6ff6ca;}}
}
B6ff79e:L6ff79e:{c.instructions+=1;NFSU2_TR(0x6ff79e);
{goto L6ff7a8;}
}
B6ff7a0:L6ff7a0:{c.instructions+=3;NFSU2_TR(0x6ff7a0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ff7a1:{NFSU2_TR(0x6ff7a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff7a5:{NFSU2_TR(0x6ff7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7a8:L6ff7a8:{c.instructions+=3;NFSU2_TR(0x6ff7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7ac:{NFSU2_TR(0x6ff7ac);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ff7af:{NFSU2_TR(0x6ff7af);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ffc62;}}
}
B6ff7b5:L6ff7b5:{c.instructions+=4;NFSU2_TR(0x6ff7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7b9:{NFSU2_TR(0x6ff7b9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6ff7bb:{NFSU2_TR(0x6ff7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7be:{NFSU2_TR(0x6ff7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7c1:L6ff7c1:{c.instructions+=4;NFSU2_TR(0x6ff7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ff7c4:{NFSU2_TR(0x6ff7c4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ff7c6:{NFSU2_TR(0x6ff7c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ff7c8:{NFSU2_TR(0x6ff7c8);
if(r1(R+518)){{goto L6ff811;}}
}
B6ff7ca:L6ff7ca:{c.instructions+=2;NFSU2_TR(0x6ff7ca);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ff7ce:{NFSU2_TR(0x6ff7ce);
if(r1(R+518)){{goto L6ff81e;}}
}
B6ff7d0:L6ff7d0:{c.instructions+=2;NFSU2_TR(0x6ff7d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ff7d2:{NFSU2_TR(0x6ff7d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff806;}}
}
B6ff7d4:L6ff7d4:{c.instructions+=10;NFSU2_TR(0x6ff7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7d8:{NFSU2_TR(0x6ff7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7db:{NFSU2_TR(0x6ff7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x34ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff7df:{NFSU2_TR(0x6ff7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff7e2:{NFSU2_TR(0x6ff7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff7e5:{NFSU2_TR(0x6ff7e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ff7e6:{NFSU2_TR(0x6ff7e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ff7e7:{NFSU2_TR(0x6ff7e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6ff7e9:{NFSU2_TR(0x6ff7e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff7ed:{NFSU2_TR(0x6ff7ed);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ff7f1;}}
}
B6ff7ef:L6ff7ef:{c.instructions+=1;NFSU2_TR(0x6ff7ef);
__builtin_memmove((R+0),(R+4),4);
}
B6ff7f1:L6ff7f1:{c.instructions+=8;NFSU2_TR(0x6ff7f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ff7f3:{NFSU2_TR(0x6ff7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff7f6:{NFSU2_TR(0x6ff7f6);
__builtin_memmove((R+28),(R+0),4);
}
B6ff7f8:{NFSU2_TR(0x6ff7f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6ff7fb:{NFSU2_TR(0x6ff7fb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ff7ff:{NFSU2_TR(0x6ff7ff);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff801:{NFSU2_TR(0x6ff801);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6ff803:{NFSU2_TR(0x6ff803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff804:L6ff804:{c.instructions+=1;NFSU2_TR(0x6ff804);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ff806;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff804u);}goto L6ff804;}
}
B6ff806:L6ff806:{c.instructions+=3;NFSU2_TR(0x6ff806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff809:{NFSU2_TR(0x6ff809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff80c:{NFSU2_TR(0x6ff80c);
{goto L6ffc56;}
}
B6ff811:L6ff811:{c.instructions+=2;NFSU2_TR(0x6ff811);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6ff815:{NFSU2_TR(0x6ff815);
if(r1(R+518)){{goto L6ff81e;}}
}
B6ff817:L6ff817:{c.instructions+=3;NFSU2_TR(0x6ff817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ff81a:{NFSU2_TR(0x6ff81a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ff81b:{NFSU2_TR(0x6ff81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff81e:L6ff81e:{c.instructions+=4;NFSU2_TR(0x6ff81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff821:{NFSU2_TR(0x6ff821);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff823:{NFSU2_TR(0x6ff823);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ff826:{NFSU2_TR(0x6ff826);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ff83e;}}
}
B6ff828:L6ff828:{c.instructions+=1;NFSU2_TR(0x6ff828);
__builtin_memmove((R+8),(R+4),4);
}
B6ff82a:L6ff82a:{c.instructions+=3;NFSU2_TR(0x6ff82a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B6ff82d:{NFSU2_TR(0x6ff82d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ff830:{NFSU2_TR(0x6ff830);
if(r1(R+518)){{goto L6ff83e;}}
}
B6ff832:L6ff832:{c.instructions+=2;NFSU2_TR(0x6ff832);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ff835:{NFSU2_TR(0x6ff835);
if(r1(R+518)){{goto L6ff83e;}}
}
B6ff837:L6ff837:{c.instructions+=4;NFSU2_TR(0x6ff837);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ff838:{NFSU2_TR(0x6ff838);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ff839:{NFSU2_TR(0x6ff839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ff83c:{NFSU2_TR(0x6ff83c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff82au);}goto L6ff82a;}}
}
B6ff83e:L6ff83e:{c.instructions+=4;NFSU2_TR(0x6ff83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff841:{NFSU2_TR(0x6ff841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6ff844:{NFSU2_TR(0x6ff844);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff847:{NFSU2_TR(0x6ff847);
if(r1(R+518)){{goto L6ff856;}}
}
B6ff849:L6ff849:{c.instructions+=5;NFSU2_TR(0x6ff849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff84c:{NFSU2_TR(0x6ff84c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6ff84e:{NFSU2_TR(0x6ff84e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ff850:{NFSU2_TR(0x6ff850);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6ff853:{NFSU2_TR(0x6ff853);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6ff856:L6ff856:{c.instructions+=4;NFSU2_TR(0x6ff856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ff859:{NFSU2_TR(0x6ff859);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff85c:{NFSU2_TR(0x6ff85c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ff860:{NFSU2_TR(0x6ff860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff8aa;}}
}
B6ff862:L6ff862:{c.instructions+=8;NFSU2_TR(0x6ff862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff865:{NFSU2_TR(0x6ff865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff868:{NFSU2_TR(0x6ff868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff86b:{NFSU2_TR(0x6ff86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff86e:{NFSU2_TR(0x6ff86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff871:{NFSU2_TR(0x6ff871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff874:{NFSU2_TR(0x6ff874);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff876:{NFSU2_TR(0x6ff876);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ff87a;}}
}
B6ff878:L6ff878:{c.instructions+=1;NFSU2_TR(0x6ff878);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff87a:L6ff87a:{c.instructions+=9;NFSU2_TR(0x6ff87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff87c:{NFSU2_TR(0x6ff87c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff87f:{NFSU2_TR(0x6ff87f);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff883:{NFSU2_TR(0x6ff883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff886:{NFSU2_TR(0x6ff886);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff889:{NFSU2_TR(0x6ff889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff88a:{NFSU2_TR(0x6ff88a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff88d:{NFSU2_TR(0x6ff88d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff890:{NFSU2_TR(0x6ff890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff895ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ff895:L6ff895:{c.instructions+=7;NFSU2_TR(0x6ff895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff898:{NFSU2_TR(0x6ff898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff89a:{NFSU2_TR(0x6ff89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff89d:{NFSU2_TR(0x6ff89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff89e:{NFSU2_TR(0x6ff89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff8a1:{NFSU2_TR(0x6ff8a1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff8a5:{NFSU2_TR(0x6ff8a5);
{goto L6ffc3e;}
}
B6ff8aa:L6ff8aa:{c.instructions+=2;NFSU2_TR(0x6ff8aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff8ad:{NFSU2_TR(0x6ff8ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff8f7;}}
}
B6ff8af:L6ff8af:{c.instructions+=8;NFSU2_TR(0x6ff8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff8b2:{NFSU2_TR(0x6ff8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff8b5:{NFSU2_TR(0x6ff8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff8b8:{NFSU2_TR(0x6ff8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff8bb:{NFSU2_TR(0x6ff8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff8be:{NFSU2_TR(0x6ff8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff8c1:{NFSU2_TR(0x6ff8c1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff8c3:{NFSU2_TR(0x6ff8c3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ff8c7;}}
}
B6ff8c5:L6ff8c5:{c.instructions+=1;NFSU2_TR(0x6ff8c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff8c7:L6ff8c7:{c.instructions+=9;NFSU2_TR(0x6ff8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff8c9:{NFSU2_TR(0x6ff8c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff8cc:{NFSU2_TR(0x6ff8cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff8d0:{NFSU2_TR(0x6ff8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff8d3:{NFSU2_TR(0x6ff8d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff8d6:{NFSU2_TR(0x6ff8d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff8d7:{NFSU2_TR(0x6ff8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff8da:{NFSU2_TR(0x6ff8da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff8dd:{NFSU2_TR(0x6ff8dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff8e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ff8e2:L6ff8e2:{c.instructions+=7;NFSU2_TR(0x6ff8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff8e5:{NFSU2_TR(0x6ff8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff8e7:{NFSU2_TR(0x6ff8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff8ea:{NFSU2_TR(0x6ff8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff8eb:{NFSU2_TR(0x6ff8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff8ee:{NFSU2_TR(0x6ff8ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff8f2:{NFSU2_TR(0x6ff8f2);
{goto L6ffc3e;}
}
B6ff8f7:L6ff8f7:{c.instructions+=2;NFSU2_TR(0x6ff8f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff8fa:{NFSU2_TR(0x6ff8fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff944;}}
}
B6ff8fc:L6ff8fc:{c.instructions+=8;NFSU2_TR(0x6ff8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff8ff:{NFSU2_TR(0x6ff8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff902:{NFSU2_TR(0x6ff902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff905:{NFSU2_TR(0x6ff905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff908:{NFSU2_TR(0x6ff908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff90b:{NFSU2_TR(0x6ff90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff90e:{NFSU2_TR(0x6ff90e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff910:{NFSU2_TR(0x6ff910);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ff914;}}
}
B6ff912:L6ff912:{c.instructions+=1;NFSU2_TR(0x6ff912);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff914:L6ff914:{c.instructions+=9;NFSU2_TR(0x6ff914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff916:{NFSU2_TR(0x6ff916);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff919:{NFSU2_TR(0x6ff919);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff91d:{NFSU2_TR(0x6ff91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff920:{NFSU2_TR(0x6ff920);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff923:{NFSU2_TR(0x6ff923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff924:{NFSU2_TR(0x6ff924);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff927:{NFSU2_TR(0x6ff927);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff92a:{NFSU2_TR(0x6ff92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff92full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ff92f:L6ff92f:{c.instructions+=7;NFSU2_TR(0x6ff92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff932:{NFSU2_TR(0x6ff932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff934:{NFSU2_TR(0x6ff934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff937:{NFSU2_TR(0x6ff937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff938:{NFSU2_TR(0x6ff938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff93b:{NFSU2_TR(0x6ff93b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff93f:{NFSU2_TR(0x6ff93f);
{goto L6ffc3e;}
}
B6ff944:L6ff944:{c.instructions+=2;NFSU2_TR(0x6ff944);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff947:{NFSU2_TR(0x6ff947);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff991;}}
}
B6ff949:L6ff949:{c.instructions+=8;NFSU2_TR(0x6ff949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff94c:{NFSU2_TR(0x6ff94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff94f:{NFSU2_TR(0x6ff94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff952:{NFSU2_TR(0x6ff952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff955:{NFSU2_TR(0x6ff955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff958:{NFSU2_TR(0x6ff958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff95b:{NFSU2_TR(0x6ff95b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff95d:{NFSU2_TR(0x6ff95d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ff961;}}
}
B6ff95f:L6ff95f:{c.instructions+=1;NFSU2_TR(0x6ff95f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff961:L6ff961:{c.instructions+=9;NFSU2_TR(0x6ff961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff963:{NFSU2_TR(0x6ff963);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff966:{NFSU2_TR(0x6ff966);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff96a:{NFSU2_TR(0x6ff96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ff96d:{NFSU2_TR(0x6ff96d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ff970:{NFSU2_TR(0x6ff970);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff971:{NFSU2_TR(0x6ff971);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ff974:{NFSU2_TR(0x6ff974);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ff977:{NFSU2_TR(0x6ff977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff97cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ff97c:L6ff97c:{c.instructions+=7;NFSU2_TR(0x6ff97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff97f:{NFSU2_TR(0x6ff97f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ff981:{NFSU2_TR(0x6ff981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff984:{NFSU2_TR(0x6ff984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff985:{NFSU2_TR(0x6ff985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff988:{NFSU2_TR(0x6ff988);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff98c:{NFSU2_TR(0x6ff98c);
{goto L6ffc3e;}
}
B6ff991:L6ff991:{c.instructions+=2;NFSU2_TR(0x6ff991);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff994:{NFSU2_TR(0x6ff994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ff9dd;}}
}
B6ff996:L6ff996:{c.instructions+=5;NFSU2_TR(0x6ff996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff999:{NFSU2_TR(0x6ff999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff99c:{NFSU2_TR(0x6ff99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff99f:{NFSU2_TR(0x6ff99f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff9a0:{NFSU2_TR(0x6ff9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff9a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff1c6u);}goto L6ff1c6;}
}
B6ff9a5:L6ff9a5:{c.instructions+=3;NFSU2_TR(0x6ff9a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff9a8:{NFSU2_TR(0x6ff9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff9a9:{NFSU2_TR(0x6ff9a9);
if(r1(R+518)){{goto L6ff9bc;}}
}
B6ff9ab:L6ff9ab:{c.instructions+=5;NFSU2_TR(0x6ff9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff9ae:{NFSU2_TR(0x6ff9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff9b0:{NFSU2_TR(0x6ff9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff9b3:{NFSU2_TR(0x6ff9b3);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff9b7:{NFSU2_TR(0x6ff9b7);
{goto L6ffc41;}
}
B6ff9bc:L6ff9bc:{c.instructions+=3;NFSU2_TR(0x6ff9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff9bf:{NFSU2_TR(0x6ff9bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ff9c1:{NFSU2_TR(0x6ff9c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ff9c5;}}
}
B6ff9c3:L6ff9c3:{c.instructions+=1;NFSU2_TR(0x6ff9c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ff9c5:L6ff9c5:{c.instructions+=7;NFSU2_TR(0x6ff9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff9c8:{NFSU2_TR(0x6ff9c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ff9cb:{NFSU2_TR(0x6ff9cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff9cd:{NFSU2_TR(0x6ff9cd);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ff9d1:{NFSU2_TR(0x6ff9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff9d4:{NFSU2_TR(0x6ff9d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ff9d8:{NFSU2_TR(0x6ff9d8);
{goto L6ffc41;}
}
B6ff9dd:L6ff9dd:{c.instructions+=2;NFSU2_TR(0x6ff9dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ff9e0:{NFSU2_TR(0x6ff9e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffa29;}}
}
B6ff9e2:L6ff9e2:{c.instructions+=5;NFSU2_TR(0x6ff9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ff9e5:{NFSU2_TR(0x6ff9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ff9e8:{NFSU2_TR(0x6ff9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ff9eb:{NFSU2_TR(0x6ff9eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ff9ec:{NFSU2_TR(0x6ff9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ff9f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff1c6u);}goto L6ff1c6;}
}
B6ff9f1:L6ff9f1:{c.instructions+=3;NFSU2_TR(0x6ff9f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ff9f4:{NFSU2_TR(0x6ff9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ff9f5:{NFSU2_TR(0x6ff9f5);
if(r1(R+518)){{goto L6ffa08;}}
}
B6ff9f7:L6ff9f7:{c.instructions+=5;NFSU2_TR(0x6ff9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ff9fa:{NFSU2_TR(0x6ff9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ff9fc:{NFSU2_TR(0x6ff9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ff9ff:{NFSU2_TR(0x6ff9ff);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ffa03:{NFSU2_TR(0x6ffa03);
{goto L6ffc41;}
}
B6ffa08:L6ffa08:{c.instructions+=3;NFSU2_TR(0x6ffa08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa0b:{NFSU2_TR(0x6ffa0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffa0d:{NFSU2_TR(0x6ffa0d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffa11;}}
}
B6ffa0f:L6ffa0f:{c.instructions+=1;NFSU2_TR(0x6ffa0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffa11:L6ffa11:{c.instructions+=7;NFSU2_TR(0x6ffa11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffa14:{NFSU2_TR(0x6ffa14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffa17:{NFSU2_TR(0x6ffa17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffa19:{NFSU2_TR(0x6ffa19);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ffa1d:{NFSU2_TR(0x6ffa1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffa20:{NFSU2_TR(0x6ffa20);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ffa24:{NFSU2_TR(0x6ffa24);
{goto L6ffc41;}
}
B6ffa29:L6ffa29:{c.instructions+=2;NFSU2_TR(0x6ffa29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffa2c:{NFSU2_TR(0x6ffa2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffa76;}}
}
B6ffa2e:L6ffa2e:{c.instructions+=8;NFSU2_TR(0x6ffa2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa31:{NFSU2_TR(0x6ffa31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffa34:{NFSU2_TR(0x6ffa34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa37:{NFSU2_TR(0x6ffa37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa3a:{NFSU2_TR(0x6ffa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa3d:{NFSU2_TR(0x6ffa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa40:{NFSU2_TR(0x6ffa40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffa42:{NFSU2_TR(0x6ffa42);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffa46;}}
}
B6ffa44:L6ffa44:{c.instructions+=1;NFSU2_TR(0x6ffa44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffa46:L6ffa46:{c.instructions+=9;NFSU2_TR(0x6ffa46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffa48:{NFSU2_TR(0x6ffa48);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffa4b:{NFSU2_TR(0x6ffa4b);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ffa4f:{NFSU2_TR(0x6ffa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa52:{NFSU2_TR(0x6ffa52);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffa55:{NFSU2_TR(0x6ffa55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffa56:{NFSU2_TR(0x6ffa56);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffa59:{NFSU2_TR(0x6ffa59);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffa5c:{NFSU2_TR(0x6ffa5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffa61ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffa61:L6ffa61:{c.instructions+=7;NFSU2_TR(0x6ffa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa64:{NFSU2_TR(0x6ffa64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffa66:{NFSU2_TR(0x6ffa66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffa69:{NFSU2_TR(0x6ffa69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffa6a:{NFSU2_TR(0x6ffa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffa6d:{NFSU2_TR(0x6ffa6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ffa71:{NFSU2_TR(0x6ffa71);
{goto L6ffc3e;}
}
B6ffa76:L6ffa76:{c.instructions+=2;NFSU2_TR(0x6ffa76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffa79:{NFSU2_TR(0x6ffa79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffac1;}}
}
B6ffa7b:L6ffa7b:{c.instructions+=8;NFSU2_TR(0x6ffa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa7e:{NFSU2_TR(0x6ffa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffa81:{NFSU2_TR(0x6ffa81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa84:{NFSU2_TR(0x6ffa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa87:{NFSU2_TR(0x6ffa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa8a:{NFSU2_TR(0x6ffa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffa8d:{NFSU2_TR(0x6ffa8d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffa8f:{NFSU2_TR(0x6ffa8f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffa93;}}
}
B6ffa91:L6ffa91:{c.instructions+=1;NFSU2_TR(0x6ffa91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffa93:L6ffa93:{c.instructions+=9;NFSU2_TR(0x6ffa93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffa95:{NFSU2_TR(0x6ffa95);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffa98:{NFSU2_TR(0x6ffa98);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ffa9b:{NFSU2_TR(0x6ffa9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffa9e:{NFSU2_TR(0x6ffa9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffaa1:{NFSU2_TR(0x6ffaa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffaa2:{NFSU2_TR(0x6ffaa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffaa5:{NFSU2_TR(0x6ffaa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffaa8:{NFSU2_TR(0x6ffaa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffaadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffaad:L6ffaad:{c.instructions+=7;NFSU2_TR(0x6ffaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffab0:{NFSU2_TR(0x6ffab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffab2:{NFSU2_TR(0x6ffab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffab5:{NFSU2_TR(0x6ffab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffab6:{NFSU2_TR(0x6ffab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffab9:{NFSU2_TR(0x6ffab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ffabc:{NFSU2_TR(0x6ffabc);
{goto L6ffc3e;}
}
B6ffac1:L6ffac1:{c.instructions+=2;NFSU2_TR(0x6ffac1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffac4:{NFSU2_TR(0x6ffac4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffb0e;}}
}
B6ffac6:L6ffac6:{c.instructions+=8;NFSU2_TR(0x6ffac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffac9:{NFSU2_TR(0x6ffac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffacc:{NFSU2_TR(0x6ffacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffacf:{NFSU2_TR(0x6ffacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffad2:{NFSU2_TR(0x6ffad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffad5:{NFSU2_TR(0x6ffad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffad8:{NFSU2_TR(0x6ffad8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffada:{NFSU2_TR(0x6ffada);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffade;}}
}
B6ffadc:L6ffadc:{c.instructions+=1;NFSU2_TR(0x6ffadc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffade:L6ffade:{c.instructions+=9;NFSU2_TR(0x6ffade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffae0:{NFSU2_TR(0x6ffae0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffae3:{NFSU2_TR(0x6ffae3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ffae7:{NFSU2_TR(0x6ffae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffaea:{NFSU2_TR(0x6ffaea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffaed:{NFSU2_TR(0x6ffaed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffaee:{NFSU2_TR(0x6ffaee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffaf1:{NFSU2_TR(0x6ffaf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffaf4:{NFSU2_TR(0x6ffaf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffaf9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffaf9:L6ffaf9:{c.instructions+=7;NFSU2_TR(0x6ffaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffafc:{NFSU2_TR(0x6ffafc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffafe:{NFSU2_TR(0x6ffafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffb01:{NFSU2_TR(0x6ffb01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffb02:{NFSU2_TR(0x6ffb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffb05:{NFSU2_TR(0x6ffb05);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ffb09:{NFSU2_TR(0x6ffb09);
{goto L6ffc3e;}
}
B6ffb0e:L6ffb0e:{c.instructions+=2;NFSU2_TR(0x6ffb0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffb11:{NFSU2_TR(0x6ffb11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffb5c;}}
}
B6ffb13:L6ffb13:{c.instructions+=8;NFSU2_TR(0x6ffb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb16:{NFSU2_TR(0x6ffb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffb19:{NFSU2_TR(0x6ffb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb1c:{NFSU2_TR(0x6ffb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb1f:{NFSU2_TR(0x6ffb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb22:{NFSU2_TR(0x6ffb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb25:{NFSU2_TR(0x6ffb25);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffb27:{NFSU2_TR(0x6ffb27);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffb2b;}}
}
B6ffb29:L6ffb29:{c.instructions+=1;NFSU2_TR(0x6ffb29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffb2b:L6ffb2b:{c.instructions+=9;NFSU2_TR(0x6ffb2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffb2d:{NFSU2_TR(0x6ffb2d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffb30:{NFSU2_TR(0x6ffb30);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6ffb35:{NFSU2_TR(0x6ffb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb38:{NFSU2_TR(0x6ffb38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffb3b:{NFSU2_TR(0x6ffb3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffb3c:{NFSU2_TR(0x6ffb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffb3f:{NFSU2_TR(0x6ffb3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffb42:{NFSU2_TR(0x6ffb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffb47ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffb47:L6ffb47:{c.instructions+=7;NFSU2_TR(0x6ffb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb4a:{NFSU2_TR(0x6ffb4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffb4c:{NFSU2_TR(0x6ffb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffb4f:{NFSU2_TR(0x6ffb4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffb50:{NFSU2_TR(0x6ffb50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ffb53:{NFSU2_TR(0x6ffb53);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6ffb57:{NFSU2_TR(0x6ffb57);
{goto L6ffc3e;}
}
B6ffb5c:L6ffb5c:{c.instructions+=2;NFSU2_TR(0x6ffb5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffb5f:{NFSU2_TR(0x6ffb5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffbaa;}}
}
B6ffb61:L6ffb61:{c.instructions+=8;NFSU2_TR(0x6ffb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb64:{NFSU2_TR(0x6ffb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffb67:{NFSU2_TR(0x6ffb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb6a:{NFSU2_TR(0x6ffb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb6d:{NFSU2_TR(0x6ffb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb70:{NFSU2_TR(0x6ffb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb73:{NFSU2_TR(0x6ffb73);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffb75:{NFSU2_TR(0x6ffb75);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffb79;}}
}
B6ffb77:L6ffb77:{c.instructions+=1;NFSU2_TR(0x6ffb77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffb79:L6ffb79:{c.instructions+=9;NFSU2_TR(0x6ffb79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffb7b:{NFSU2_TR(0x6ffb7b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffb7e:{NFSU2_TR(0x6ffb7e);
u8 U[13];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6ffb83:{NFSU2_TR(0x6ffb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffb86:{NFSU2_TR(0x6ffb86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffb89:{NFSU2_TR(0x6ffb89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffb8a:{NFSU2_TR(0x6ffb8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffb8d:{NFSU2_TR(0x6ffb8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffb90:{NFSU2_TR(0x6ffb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffb95ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffb95:L6ffb95:{c.instructions+=7;NFSU2_TR(0x6ffb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffb98:{NFSU2_TR(0x6ffb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffb9a:{NFSU2_TR(0x6ffb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffb9d:{NFSU2_TR(0x6ffb9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffb9e:{NFSU2_TR(0x6ffb9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ffba1:{NFSU2_TR(0x6ffba1);
u8 U[13];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6ffba5:{NFSU2_TR(0x6ffba5);
{goto L6ffc3e;}
}
B6ffbaa:L6ffbaa:{c.instructions+=2;NFSU2_TR(0x6ffbaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffbad:{NFSU2_TR(0x6ffbad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffbf5;}}
}
B6ffbaf:L6ffbaf:{c.instructions+=8;NFSU2_TR(0x6ffbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffbb2:{NFSU2_TR(0x6ffbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffbb5:{NFSU2_TR(0x6ffbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffbb8:{NFSU2_TR(0x6ffbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffbbb:{NFSU2_TR(0x6ffbbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffbbe:{NFSU2_TR(0x6ffbbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffbc1:{NFSU2_TR(0x6ffbc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffbc3:{NFSU2_TR(0x6ffbc3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffbc7;}}
}
B6ffbc5:L6ffbc5:{c.instructions+=1;NFSU2_TR(0x6ffbc5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffbc7:L6ffbc7:{c.instructions+=9;NFSU2_TR(0x6ffbc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffbc9:{NFSU2_TR(0x6ffbc9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffbcc:{NFSU2_TR(0x6ffbcc);
u8 U[13];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6ffbd1:{NFSU2_TR(0x6ffbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffbd4:{NFSU2_TR(0x6ffbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffbd7:{NFSU2_TR(0x6ffbd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffbd8:{NFSU2_TR(0x6ffbd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffbdb:{NFSU2_TR(0x6ffbdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffbde:{NFSU2_TR(0x6ffbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffbe3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffbe3:L6ffbe3:{c.instructions+=7;NFSU2_TR(0x6ffbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffbe6:{NFSU2_TR(0x6ffbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffbe8:{NFSU2_TR(0x6ffbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffbeb:{NFSU2_TR(0x6ffbeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffbec:{NFSU2_TR(0x6ffbec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ffbef:{NFSU2_TR(0x6ffbef);
u8 U[13];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6ffbf3:{NFSU2_TR(0x6ffbf3);
{goto L6ffc3e;}
}
B6ffbf5:L6ffbf5:{c.instructions+=2;NFSU2_TR(0x6ffbf5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffbf8:{NFSU2_TR(0x6ffbf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ffc44;}}
}
B6ffbfa:L6ffbfa:{c.instructions+=8;NFSU2_TR(0x6ffbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffbfd:{NFSU2_TR(0x6ffbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6ffc00:{NFSU2_TR(0x6ffc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffc03:{NFSU2_TR(0x6ffc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffc06:{NFSU2_TR(0x6ffc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffc09:{NFSU2_TR(0x6ffc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffc0c:{NFSU2_TR(0x6ffc0c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ffc0e:{NFSU2_TR(0x6ffc0e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ffc12;}}
}
B6ffc10:L6ffc10:{c.instructions+=1;NFSU2_TR(0x6ffc10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffc12:L6ffc12:{c.instructions+=9;NFSU2_TR(0x6ffc12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ffc14:{NFSU2_TR(0x6ffc14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ffc17:{NFSU2_TR(0x6ffc17);
u8 U[13];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6ffc1c:{NFSU2_TR(0x6ffc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffc1f:{NFSU2_TR(0x6ffc1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ffc22:{NFSU2_TR(0x6ffc22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffc23:{NFSU2_TR(0x6ffc23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffc26:{NFSU2_TR(0x6ffc26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffc29:{NFSU2_TR(0x6ffc29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffc2eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff276u);}goto L6ff276;}
}
B6ffc2e:L6ffc2e:{c.instructions+=6;NFSU2_TR(0x6ffc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffc31:{NFSU2_TR(0x6ffc31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ffc33:{NFSU2_TR(0x6ffc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffc36:{NFSU2_TR(0x6ffc36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffc37:{NFSU2_TR(0x6ffc37);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ffc3a:{NFSU2_TR(0x6ffc3a);
u8 U[13];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6ffc3e:L6ffc3e:{c.instructions+=1;NFSU2_TR(0x6ffc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ffc41:L6ffc41:{c.instructions+=1;NFSU2_TR(0x6ffc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ffc44:L6ffc44:{c.instructions+=4;NFSU2_TR(0x6ffc44);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ffc45:{NFSU2_TR(0x6ffc45);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ffc48:{NFSU2_TR(0x6ffc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ffc4b:{NFSU2_TR(0x6ffc4b);
if(r1(R+518)){{goto L6ffc56;}}
}
B6ffc4d:L6ffc4d:{c.instructions+=3;NFSU2_TR(0x6ffc4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ffc50:{NFSU2_TR(0x6ffc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffc53:{NFSU2_TR(0x6ffc53);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6ffc56:L6ffc56:{c.instructions+=3;NFSU2_TR(0x6ffc56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffc59:{NFSU2_TR(0x6ffc59);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6ffc5c:{NFSU2_TR(0x6ffc5c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ff7c1u);}goto L6ff7c1;}}
}
B6ffc62:L6ffc62:{c.instructions+=5;NFSU2_TR(0x6ffc62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ffc63:{NFSU2_TR(0x6ffc63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffc64:{NFSU2_TR(0x6ffc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffc65:{NFSU2_TR(0x6ffc65);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ffc66:{NFSU2_TR(0x6ffc66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ffcb6:L6ffcb6:{c.instructions+=6;NFSU2_TR(0x6ffcb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcb7:{NFSU2_TR(0x6ffcb7);
__builtin_memmove((R+20),(R+16),4);
}
B6ffcb9:{NFSU2_TR(0x6ffcb9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ffcbd:{NFSU2_TR(0x6ffcbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcbe:{NFSU2_TR(0x6ffcbe);
__builtin_memmove((R+28),(R+4),4);
}
B6ffcc0:{NFSU2_TR(0x6ffcc0);
if(r1(R+518)){{goto L6ffce8;}}
}
B6ffcc2:L6ffcc2:{c.instructions+=7;NFSU2_TR(0x6ffcc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcc3:{NFSU2_TR(0x6ffcc3);
u8 U[4];
w4(U+0,u32(0x6996f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcc8:{NFSU2_TR(0x6ffcc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffccb:{NFSU2_TR(0x6ffccb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6ffccd:{NFSU2_TR(0x6ffccd);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffccf:{NFSU2_TR(0x6ffccf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcd0:{NFSU2_TR(0x6ffcd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffcd5ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B6ffcd5:L6ffcd5:{c.instructions+=2;NFSU2_TR(0x6ffcd5);
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
B6ffcd9:{NFSU2_TR(0x6ffcd9);
if(r1(R+518)){{goto L6ffce3;}}
}
B6ffcdb:L6ffcdb:{c.instructions+=2;NFSU2_TR(0x6ffcdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcdc:{NFSU2_TR(0x6ffcdc);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffce2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ffce2:L6ffce2:{c.instructions+=1;NFSU2_TR(0x6ffce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffce3:L6ffce3:{c.instructions+=3;NFSU2_TR(0x6ffce3);
__builtin_memmove((R+0),(R+24),4);
}
B6ffce5:{NFSU2_TR(0x6ffce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffce6:{NFSU2_TR(0x6ffce6);
{goto L6ffcf8;}
}
B6ffce8:L6ffce8:{c.instructions+=2;NFSU2_TR(0x6ffce8);
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
B6ffcec:{NFSU2_TR(0x6ffcec);
if(r1(R+518)){{goto L6ffcf6;}}
}
B6ffcee:L6ffcee:{c.instructions+=2;NFSU2_TR(0x6ffcee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffcef:{NFSU2_TR(0x6ffcef);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ffcf5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6ffcf5:L6ffcf5:{c.instructions+=1;NFSU2_TR(0x6ffcf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ffcf6:L6ffcf6:{c.instructions+=1;NFSU2_TR(0x6ffcf6);
__builtin_memmove((R+0),(R+28),4);
}
B6ffcf8:L6ffcf8:{c.instructions+=3;NFSU2_TR(0x6ffcf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ffcf9:{NFSU2_TR(0x6ffcf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ffcfa:{NFSU2_TR(0x6ffcfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ffd00:L6ffd00:{c.instructions+=8;NFSU2_TR(0x6ffd00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd01:{NFSU2_TR(0x6ffd01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd02:{NFSU2_TR(0x6ffd02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd03:{NFSU2_TR(0x6ffd03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd04:{NFSU2_TR(0x6ffd04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffd08:{NFSU2_TR(0x6ffd08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffd0c:{NFSU2_TR(0x6ffd0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ffd10:{NFSU2_TR(0x6ffd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ffd14:L6ffd14:{c.instructions+=21;NFSU2_TR(0x6ffd14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffd16:{NFSU2_TR(0x6ffd16);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffd18:{NFSU2_TR(0x6ffd18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffd1a:{NFSU2_TR(0x6ffd1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ffd1b:{NFSU2_TR(0x6ffd1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6ffd1e:{NFSU2_TR(0x6ffd1e);
__builtin_memmove((R+24),(R+0),4);
}
B6ffd20:{NFSU2_TR(0x6ffd20);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6ffd23:{NFSU2_TR(0x6ffd23);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffd25:{NFSU2_TR(0x6ffd25);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6ffd27:{NFSU2_TR(0x6ffd27);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ffd28:{NFSU2_TR(0x6ffd28);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6ffd2b:{NFSU2_TR(0x6ffd2b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6ffd2d:{NFSU2_TR(0x6ffd2d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6ffd2f:{NFSU2_TR(0x6ffd2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6ffd32:{NFSU2_TR(0x6ffd32);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6ffd35:{NFSU2_TR(0x6ffd35);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ffd39:{NFSU2_TR(0x6ffd39);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6ffd3b:{NFSU2_TR(0x6ffd3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6ffd3e:{NFSU2_TR(0x6ffd3e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6ffd41:{NFSU2_TR(0x6ffd41);
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
B6ffd43:{NFSU2_TR(0x6ffd43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ffd14u);}goto L6ffd14;}}
}
B6ffd45:L6ffd45:{c.instructions+=5;NFSU2_TR(0x6ffd45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ffd46:{NFSU2_TR(0x6ffd46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ffd47:{NFSU2_TR(0x6ffd47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffd48:{NFSU2_TR(0x6ffd48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffd49:{NFSU2_TR(0x6ffd49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ffd4a:L6ffd4a:{c.instructions+=11;NFSU2_TR(0x6ffd4a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd4b:{NFSU2_TR(0x6ffd4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd4c:{NFSU2_TR(0x6ffd4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd4d:{NFSU2_TR(0x6ffd4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffd4e:{NFSU2_TR(0x6ffd4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffd52:{NFSU2_TR(0x6ffd52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffd56:{NFSU2_TR(0x6ffd56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ffd5a:{NFSU2_TR(0x6ffd5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ffd5e:{NFSU2_TR(0x6ffd5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ffd62:{NFSU2_TR(0x6ffd62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffd64:{NFSU2_TR(0x6ffd64);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffd66:L6ffd66:{c.instructions+=21;NFSU2_TR(0x6ffd66);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffd68:{NFSU2_TR(0x6ffd68);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ffd69:{NFSU2_TR(0x6ffd69);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6ffd6b:{NFSU2_TR(0x6ffd6b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ffd6c:{NFSU2_TR(0x6ffd6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8151e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B6ffd74:{NFSU2_TR(0x6ffd74);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8159e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B6ffd7c:{NFSU2_TR(0x6ffd7c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffd7e:{NFSU2_TR(0x6ffd7e);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B6ffd81:{NFSU2_TR(0x6ffd81);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6ffd84:{NFSU2_TR(0x6ffd84);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6ffd87:{NFSU2_TR(0x6ffd87);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B6ffd8f:{NFSU2_TR(0x6ffd8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B6ffd97:{NFSU2_TR(0x6ffd97);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B6ffd9a:{NFSU2_TR(0x6ffd9a);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B6ffd9d:{NFSU2_TR(0x6ffd9d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B6ffda0:{NFSU2_TR(0x6ffda0);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B6ffda3:{NFSU2_TR(0x6ffda3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffda5:{NFSU2_TR(0x6ffda5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffda7:{NFSU2_TR(0x6ffda7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6ffda9:{NFSU2_TR(0x6ffda9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6ffdad:{NFSU2_TR(0x6ffdad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ffd66u);}goto L6ffd66;}}
}
B6ffdaf:L6ffdaf:{c.instructions+=5;NFSU2_TR(0x6ffdaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ffdb0:{NFSU2_TR(0x6ffdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ffdb1:{NFSU2_TR(0x6ffdb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffdb2:{NFSU2_TR(0x6ffdb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffdb3:{NFSU2_TR(0x6ffdb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ffdb4:L6ffdb4:{c.instructions+=15;NFSU2_TR(0x6ffdb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffdb5:{NFSU2_TR(0x6ffdb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffdb6:{NFSU2_TR(0x6ffdb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffdb7:{NFSU2_TR(0x6ffdb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffdb8:{NFSU2_TR(0x6ffdb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffdbc:{NFSU2_TR(0x6ffdbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffdc0:{NFSU2_TR(0x6ffdc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ffdc4:{NFSU2_TR(0x6ffdc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ffdc8:{NFSU2_TR(0x6ffdc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ffdcc:{NFSU2_TR(0x6ffdcc);
__builtin_memmove((R+4416),gp(0x8b1308),8);
}
B6ffdd3:{NFSU2_TR(0x6ffdd3);
__builtin_memmove((R+4432),gp(0x8b02e0),8);
}
B6ffdda:{NFSU2_TR(0x6ffdda);
__builtin_memmove((R+4448),gp(0x8b02e8),8);
}
B6ffde1:{NFSU2_TR(0x6ffde1);
__builtin_memmove((R+4464),gp(0x8b1300),8);
}
B6ffde8:{NFSU2_TR(0x6ffde8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffdea:{NFSU2_TR(0x6ffdea);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffdec:L6ffdec:{c.instructions+=31;NFSU2_TR(0x6ffdec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffdee:{NFSU2_TR(0x6ffdee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ffdef:{NFSU2_TR(0x6ffdef);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6ffdf1:{NFSU2_TR(0x6ffdf1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ffdf2:{NFSU2_TR(0x6ffdf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8151e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B6ffdfa:{NFSU2_TR(0x6ffdfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8159e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B6ffe02:{NFSU2_TR(0x6ffe02);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffe04:{NFSU2_TR(0x6ffe04);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B6ffe07:{NFSU2_TR(0x6ffe07);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6ffe0a:{NFSU2_TR(0x6ffe0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6ffe0d:{NFSU2_TR(0x6ffe0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B6ffe15:{NFSU2_TR(0x6ffe15);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B6ffe1d:{NFSU2_TR(0x6ffe1d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B6ffe20:{NFSU2_TR(0x6ffe20);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B6ffe23:{NFSU2_TR(0x6ffe23);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6ffe26:{NFSU2_TR(0x6ffe26);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B6ffe29:{NFSU2_TR(0x6ffe29);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6ffe2c:{NFSU2_TR(0x6ffe2c);
__builtin_memmove((R+4368),(R+4352),8);
}
B6ffe2f:{NFSU2_TR(0x6ffe2f);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B6ffe32:{NFSU2_TR(0x6ffe32);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B6ffe35:{NFSU2_TR(0x6ffe35);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4464))));
}
B6ffe38:{NFSU2_TR(0x6ffe38);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xbull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xbull))));
}
B6ffe3c:{NFSU2_TR(0x6ffe3c);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B6ffe3f:{NFSU2_TR(0x6ffe3f);
__builtin_memmove((R+4368),(R+4352),8);
}
B6ffe42:{NFSU2_TR(0x6ffe42);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B6ffe46:{NFSU2_TR(0x6ffe46);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B6ffe49:{NFSU2_TR(0x6ffe49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffe4b:{NFSU2_TR(0x6ffe4b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffe4d:{NFSU2_TR(0x6ffe4d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6ffe4f:{NFSU2_TR(0x6ffe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6ffe53:{NFSU2_TR(0x6ffe53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ffdecu);}goto L6ffdec;}}
}
B6ffe55:L6ffe55:{c.instructions+=5;NFSU2_TR(0x6ffe55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ffe56:{NFSU2_TR(0x6ffe56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ffe57:{NFSU2_TR(0x6ffe57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ffe58:{NFSU2_TR(0x6ffe58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ffe59:{NFSU2_TR(0x6ffe59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ffe5a:L6ffe5a:{c.instructions+=15;NFSU2_TR(0x6ffe5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffe5b:{NFSU2_TR(0x6ffe5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffe5c:{NFSU2_TR(0x6ffe5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffe5d:{NFSU2_TR(0x6ffe5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ffe5e:{NFSU2_TR(0x6ffe5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ffe62:{NFSU2_TR(0x6ffe62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ffe66:{NFSU2_TR(0x6ffe66);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ffe6a:{NFSU2_TR(0x6ffe6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ffe6e:{NFSU2_TR(0x6ffe6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ffe72:{NFSU2_TR(0x6ffe72);
__builtin_memmove((R+4416),gp(0x8b1308),8);
}
B6ffe79:{NFSU2_TR(0x6ffe79);
__builtin_memmove((R+4432),gp(0x8b02e0),8);
}
B6ffe80:{NFSU2_TR(0x6ffe80);
__builtin_memmove((R+4448),gp(0x8b02e8),8);
}
B6ffe87:{NFSU2_TR(0x6ffe87);
__builtin_memmove((R+4464),gp(0x8b1300),8);
}
B6ffe8e:{NFSU2_TR(0x6ffe8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffe90:{NFSU2_TR(0x6ffe90);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ffe92:L6ffe92:{c.instructions+=43;NFSU2_TR(0x6ffe92);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffe94:{NFSU2_TR(0x6ffe94);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ffe95:{NFSU2_TR(0x6ffe95);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6ffe97:{NFSU2_TR(0x6ffe97);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ffe98:{NFSU2_TR(0x6ffe98);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8151e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B6ffea0:{NFSU2_TR(0x6ffea0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8159e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B6ffea8:{NFSU2_TR(0x6ffea8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ffeaa:{NFSU2_TR(0x6ffeaa);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B6ffead:{NFSU2_TR(0x6ffead);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6ffeb0:{NFSU2_TR(0x6ffeb0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6ffeb3:{NFSU2_TR(0x6ffeb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B6ffebb:{NFSU2_TR(0x6ffebb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8149e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B6ffec3:{NFSU2_TR(0x6ffec3);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B6ffec6:{NFSU2_TR(0x6ffec6);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4390))));
}
B6ffec9:{NFSU2_TR(0x6ffec9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B6ffecc:{NFSU2_TR(0x6ffecc);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B6ffecf:{NFSU2_TR(0x6ffecf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ffed1:{NFSU2_TR(0x6ffed1);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B6ffed4:{NFSU2_TR(0x6ffed4);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6ffed7:{NFSU2_TR(0x6ffed7);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6ffeda:{NFSU2_TR(0x6ffeda);
__builtin_memmove((R+4384),(R+4352),8);
}
B6ffedd:{NFSU2_TR(0x6ffedd);
__builtin_memmove((R+4400),(R+4368),8);
}
B6ffee0:{NFSU2_TR(0x6ffee0);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B6ffee3:{NFSU2_TR(0x6ffee3);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B6ffee6:{NFSU2_TR(0x6ffee6);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B6ffee9:{NFSU2_TR(0x6ffee9);
{wv<8>((R+4368),uo::pmaddwd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B6ffeec:{NFSU2_TR(0x6ffeec);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4464))));
}
B6ffeef:{NFSU2_TR(0x6ffeef);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4464))));
}
B6ffef2:{NFSU2_TR(0x6ffef2);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0xbull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0xbull))));
}
B6ffef6:{NFSU2_TR(0x6ffef6);
w4(R+4400,shr<u32>(r4(R+4400),u64(u32(0xbull))));
w4(R+4404,shr<u32>(r4(R+4404),u64(u32(0xbull))));
}
B6ffefa:{NFSU2_TR(0x6ffefa);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B6ffefd:{NFSU2_TR(0x6ffefd);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B6fff00:{NFSU2_TR(0x6fff00);
__builtin_memmove((R+4384),(R+4352),8);
}
B6fff03:{NFSU2_TR(0x6fff03);
__builtin_memmove((R+4400),(R+4368),8);
}
B6fff06:{NFSU2_TR(0x6fff06);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B6fff0a:{NFSU2_TR(0x6fff0a);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x10ull))));
}
B6fff0e:{NFSU2_TR(0x6fff0e);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B6fff11:{NFSU2_TR(0x6fff11);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B6fff14:{NFSU2_TR(0x6fff14);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fff16:{NFSU2_TR(0x6fff16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6fff1a:{NFSU2_TR(0x6fff1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6fff1e:{NFSU2_TR(0x6fff1e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6fff20:{NFSU2_TR(0x6fff20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ffe92u);}goto L6ffe92;}}
}
B6fff26:L6fff26:{c.instructions+=5;NFSU2_TR(0x6fff26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fff27:{NFSU2_TR(0x6fff27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fff28:{NFSU2_TR(0x6fff28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fff29:{NFSU2_TR(0x6fff29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fff2a:{NFSU2_TR(0x6fff2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fff2b:L6fff2b:{c.instructions+=11;NFSU2_TR(0x6fff2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fff2f:{NFSU2_TR(0x6fff2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fff33:{NFSU2_TR(0x6fff33);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fff37:{NFSU2_TR(0x6fff37);
__builtin_memmove((R+4400),gp(0x8161e0),8);
}
B6fff3e:{NFSU2_TR(0x6fff3e);
__builtin_memmove((R+4416),gp(0x8b1308),8);
}
B6fff45:{NFSU2_TR(0x6fff45);
__builtin_memmove((R+4432),gp(0x8b02e0),8);
}
B6fff4c:{NFSU2_TR(0x6fff4c);
__builtin_memmove((R+4448),gp(0x8b02e8),8);
}
B6fff53:{NFSU2_TR(0x6fff53);
__builtin_memmove((R+4464),gp(0x8b1300),8);
}
B6fff5a:{NFSU2_TR(0x6fff5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(R+4352,u64(r4(U+0)));
}
B6fff5d:{NFSU2_TR(0x6fff5d);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x1ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x1ull))));
}
B6fff61:{NFSU2_TR(0x6fff61);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4400))));
}
B6fff64:L6fff64:{c.instructions+=23;NFSU2_TR(0x6fff64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(R+4384,u64(r4(U+0)));
}
B6fff67:{NFSU2_TR(0x6fff67);
__builtin_memmove((R+4368),(R+4384),8);
}
B6fff6a:{NFSU2_TR(0x6fff6a);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x1ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x1ull))));
}
B6fff6e:{NFSU2_TR(0x6fff6e);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4400))));
}
B6fff71:{NFSU2_TR(0x6fff71);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6fff74:{NFSU2_TR(0x6fff74);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(R+4384))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(R+4385))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(R+4386))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(R+4387))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(R+4388))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(R+4389))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(R+4390))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(R+4391))));
}
B6fff77:{NFSU2_TR(0x6fff77);
w8(R+4368,shl<u64>(r8(R+4368),u64(u64(0x20ull))));
}
B6fff7b:{NFSU2_TR(0x6fff7b);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4368))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4372))));
}
B6fff7e:{NFSU2_TR(0x6fff7e);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6fff81:{NFSU2_TR(0x6fff81);
__builtin_memmove((R+4368),(R+4352),8);
}
B6fff84:{NFSU2_TR(0x6fff84);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B6fff87:{NFSU2_TR(0x6fff87);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B6fff8a:{NFSU2_TR(0x6fff8a);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4464))));
}
B6fff8d:{NFSU2_TR(0x6fff8d);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xbull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xbull))));
}
B6fff91:{NFSU2_TR(0x6fff91);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6fff94:{NFSU2_TR(0x6fff94);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B6fff97:{NFSU2_TR(0x6fff97);
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
B6fff99:{NFSU2_TR(0x6fff99);
__builtin_memmove((R+4368),(R+4352),8);
}
B6fff9c:{NFSU2_TR(0x6fff9c);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B6fffa0:{NFSU2_TR(0x6fffa0);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4352))));
}
B6fffa3:{NFSU2_TR(0x6fffa3);
__builtin_memmove((R+4352),(R+4384),8);
}
B6fffa6:{NFSU2_TR(0x6fffa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6fffaa:{NFSU2_TR(0x6fffaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fff64u);}goto L6fff64;}}
}
B6fffac:L6fffac:{c.instructions+=1;NFSU2_TR(0x6fffac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fffad:L6fffad:{c.instructions+=20;NFSU2_TR(0x6fffad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fffae:{NFSU2_TR(0x6fffae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fffb2:{NFSU2_TR(0x6fffb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fffb6:{NFSU2_TR(0x6fffb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fffba:{NFSU2_TR(0x6fffba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fffbe:{NFSU2_TR(0x6fffbe);
__builtin_memmove((R+4400),gp(0x8161e0),8);
}
B6fffc5:{NFSU2_TR(0x6fffc5);
__builtin_memmove((R+4416),gp(0x8b1308),8);
}
B6fffcc:{NFSU2_TR(0x6fffcc);
__builtin_memmove((R+4432),gp(0x8b02e0),8);
}
B6fffd3:{NFSU2_TR(0x6fffd3);
__builtin_memmove((R+4448),gp(0x8b02e8),8);
}
B6fffda:{NFSU2_TR(0x6fffda);
__builtin_memmove((R+4464),gp(0x8b1300),8);
}
B6fffe1:{NFSU2_TR(0x6fffe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(R+4352,u64(r4(U+0)));
}
B6fffe4:{NFSU2_TR(0x6fffe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(R+4368,u64(r4(U+0)));
}
B6fffe7:{NFSU2_TR(0x6fffe7);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x1ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x1ull))));
}
B6fffeb:{NFSU2_TR(0x6fffeb);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x1ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x1ull))));
}
B6fffef:{NFSU2_TR(0x6fffef);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4400))));
}
B6ffff2:{NFSU2_TR(0x6ffff2);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4400))));
}
B6ffff5:{NFSU2_TR(0x6ffff5);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(R+4368))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(R+4369))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(R+4370))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(R+4371))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(R+4372))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(R+4373))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(R+4374))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(R+4375))));
}
B6ffff8:{NFSU2_TR(0x6ffff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w8(R+4368,u64(r4(U+0)));
}
B6ffffb:{NFSU2_TR(0x6ffffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(R+4384,u64(r4(U+0)));
}
B6ffffe:{NFSU2_TR(0x6ffffe);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x1ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x1ull))));
TAIL_STATIC(0x700002u,700);
}
XIT:NFSU2_TR_EXIT(0x6ff,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
