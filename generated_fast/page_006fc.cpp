#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_6fd(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6fc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6fc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 page_6fc(Cpu& c){return body_6fc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6fc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6fc001:goto L6fc001;
case 0x6fc002:c.instructions+=1;goto B6fc002;
case 0x6fc007:goto L6fc007;
case 0x6fc008:c.instructions+=4;goto B6fc008;
case 0x6fc00a:c.instructions+=3;goto B6fc00a;
case 0x6fc00c:c.instructions+=2;goto B6fc00c;
case 0x6fc00d:c.instructions+=1;goto B6fc00d;
case 0x6fc01e:goto L6fc01e;
case 0x6fc01f:c.instructions+=4;goto B6fc01f;
case 0x6fc021:c.instructions+=3;goto B6fc021;
case 0x6fc023:c.instructions+=2;goto B6fc023;
case 0x6fc024:c.instructions+=1;goto B6fc024;
case 0x6fc029:goto L6fc029;
case 0x6fc02a:c.instructions+=5;goto B6fc02a;
case 0x6fc02c:c.instructions+=4;goto B6fc02c;
case 0x6fc02d:c.instructions+=3;goto B6fc02d;
case 0x6fc030:c.instructions+=2;goto B6fc030;
case 0x6fc032:c.instructions+=1;goto B6fc032;
case 0x6fc037:goto L6fc037;
case 0x6fc03c:c.instructions+=3;goto B6fc03c;
case 0x6fc03e:c.instructions+=2;goto B6fc03e;
case 0x6fc03f:c.instructions+=1;goto B6fc03f;
case 0x6fc041:goto L6fc041;
case 0x6fc043:c.instructions+=1;goto B6fc043;
case 0x6fc048:goto L6fc048;
case 0x6fc04a:c.instructions+=2;goto B6fc04a;
case 0x6fc04b:c.instructions+=1;goto B6fc04b;
case 0x6fc04d:goto L6fc04d;
case 0x6fc050:c.instructions+=4;goto B6fc050;
case 0x6fc052:c.instructions+=3;goto B6fc052;
case 0x6fc055:c.instructions+=2;goto B6fc055;
case 0x6fc056:c.instructions+=1;goto B6fc056;
case 0x6fc05b:goto L6fc05b;
case 0x6fc05d:goto L6fc05d;
case 0x6fc05f:goto L6fc05f;
case 0x6fc064:goto L6fc064;
case 0x6fc065:c.instructions+=2;goto B6fc065;
case 0x6fc066:c.instructions+=1;goto B6fc066;
case 0x6fc067:goto L6fc067;
case 0x6fc069:c.instructions+=2;goto B6fc069;
case 0x6fc06b:c.instructions+=1;goto B6fc06b;
case 0x6fc06d:goto L6fc06d;
case 0x6fc06f:c.instructions+=1;goto B6fc06f;
case 0x6fc074:goto L6fc074;
case 0x6fc075:goto L6fc075;
case 0x6fc076:c.instructions+=16;goto B6fc076;
case 0x6fc078:c.instructions+=15;goto B6fc078;
case 0x6fc079:c.instructions+=14;goto B6fc079;
case 0x6fc07a:c.instructions+=13;goto B6fc07a;
case 0x6fc07d:c.instructions+=12;goto B6fc07d;
case 0x6fc07f:c.instructions+=11;goto B6fc07f;
case 0x6fc082:c.instructions+=10;goto B6fc082;
case 0x6fc085:c.instructions+=9;goto B6fc085;
case 0x6fc088:c.instructions+=8;goto B6fc088;
case 0x6fc08a:c.instructions+=7;goto B6fc08a;
case 0x6fc08d:c.instructions+=6;goto B6fc08d;
case 0x6fc08e:c.instructions+=5;goto B6fc08e;
case 0x6fc08f:c.instructions+=4;goto B6fc08f;
case 0x6fc090:c.instructions+=3;goto B6fc090;
case 0x6fc093:c.instructions+=2;goto B6fc093;
case 0x6fc096:c.instructions+=1;goto B6fc096;
case 0x6fc09b:goto L6fc09b;
case 0x6fc09c:c.instructions+=1;goto B6fc09c;
case 0x6fc0b8:goto L6fc0b8;
case 0x6fc0b9:c.instructions+=4;goto B6fc0b9;
case 0x6fc0bb:c.instructions+=3;goto B6fc0bb;
case 0x6fc0bc:c.instructions+=2;goto B6fc0bc;
case 0x6fc0be:c.instructions+=1;goto B6fc0be;
case 0x6fc0c3:goto L6fc0c3;
case 0x6fc0c7:c.instructions+=1;goto B6fc0c7;
case 0x6fc0c9:goto L6fc0c9;
case 0x6fc0ce:c.instructions+=2;goto B6fc0ce;
case 0x6fc0cf:c.instructions+=1;goto B6fc0cf;
case 0x6fc0d4:goto L6fc0d4;
case 0x6fc0d5:c.instructions+=1;goto B6fc0d5;
case 0x6fc0d6:goto L6fc0d6;
case 0x6fc0d8:c.instructions+=3;goto B6fc0d8;
case 0x6fc0d9:c.instructions+=2;goto B6fc0d9;
case 0x6fc0da:c.instructions+=1;goto B6fc0da;
case 0x6fc0dd:goto L6fc0dd;
case 0x6fc0de:c.instructions+=4;goto B6fc0de;
case 0x6fc0e0:c.instructions+=3;goto B6fc0e0;
case 0x6fc0e1:c.instructions+=2;goto B6fc0e1;
case 0x6fc0e3:c.instructions+=1;goto B6fc0e3;
case 0x6fc0e8:goto L6fc0e8;
case 0x6fc0ec:c.instructions+=1;goto B6fc0ec;
case 0x6fc0ee:goto L6fc0ee;
case 0x6fc0f0:c.instructions+=2;goto B6fc0f0;
case 0x6fc0f1:c.instructions+=1;goto B6fc0f1;
case 0x6fc0f6:goto L6fc0f6;
case 0x6fc0f7:c.instructions+=1;goto B6fc0f7;
case 0x6fc0f8:goto L6fc0f8;
case 0x6fc0fa:c.instructions+=3;goto B6fc0fa;
case 0x6fc0fb:c.instructions+=2;goto B6fc0fb;
case 0x6fc0fc:c.instructions+=1;goto B6fc0fc;
case 0x6fc0ff:goto L6fc0ff;
case 0x6fc100:c.instructions+=5;goto B6fc100;
case 0x6fc102:c.instructions+=4;goto B6fc102;
case 0x6fc105:c.instructions+=3;goto B6fc105;
case 0x6fc10a:c.instructions+=2;goto B6fc10a;
case 0x6fc10b:c.instructions+=1;goto B6fc10b;
case 0x6fc10c:goto L6fc10c;
case 0x6fc10d:c.instructions+=17;goto B6fc10d;
case 0x6fc10f:c.instructions+=16;goto B6fc10f;
case 0x6fc112:c.instructions+=15;goto B6fc112;
case 0x6fc115:c.instructions+=14;goto B6fc115;
case 0x6fc11b:c.instructions+=13;goto B6fc11b;
case 0x6fc11f:c.instructions+=12;goto B6fc11f;
case 0x6fc122:c.instructions+=11;goto B6fc122;
case 0x6fc125:c.instructions+=10;goto B6fc125;
case 0x6fc128:c.instructions+=9;goto B6fc128;
case 0x6fc12b:c.instructions+=8;goto B6fc12b;
case 0x6fc12e:c.instructions+=7;goto B6fc12e;
case 0x6fc12f:c.instructions+=6;goto B6fc12f;
case 0x6fc132:c.instructions+=5;goto B6fc132;
case 0x6fc135:c.instructions+=4;goto B6fc135;
case 0x6fc137:c.instructions+=3;goto B6fc137;
case 0x6fc13e:c.instructions+=2;goto B6fc13e;
case 0x6fc145:c.instructions+=1;goto B6fc145;
case 0x6fc147:goto L6fc147;
case 0x6fc148:c.instructions+=1;goto B6fc148;
case 0x6fc149:goto L6fc149;
case 0x6fc14a:c.instructions+=6;goto B6fc14a;
case 0x6fc14c:c.instructions+=5;goto B6fc14c;
case 0x6fc14f:c.instructions+=4;goto B6fc14f;
case 0x6fc155:c.instructions+=3;goto B6fc155;
case 0x6fc158:c.instructions+=2;goto B6fc158;
case 0x6fc15a:c.instructions+=1;goto B6fc15a;
case 0x6fc15d:goto L6fc15d;
case 0x6fc15e:c.instructions+=1;goto B6fc15e;
case 0x6fc15f:goto L6fc15f;
case 0x6fc160:c.instructions+=17;goto B6fc160;
case 0x6fc162:c.instructions+=16;goto B6fc162;
case 0x6fc165:c.instructions+=15;goto B6fc165;
case 0x6fc168:c.instructions+=14;goto B6fc168;
case 0x6fc16e:c.instructions+=13;goto B6fc16e;
case 0x6fc172:c.instructions+=12;goto B6fc172;
case 0x6fc175:c.instructions+=11;goto B6fc175;
case 0x6fc178:c.instructions+=10;goto B6fc178;
case 0x6fc17b:c.instructions+=9;goto B6fc17b;
case 0x6fc17e:c.instructions+=8;goto B6fc17e;
case 0x6fc181:c.instructions+=7;goto B6fc181;
case 0x6fc182:c.instructions+=6;goto B6fc182;
case 0x6fc185:c.instructions+=5;goto B6fc185;
case 0x6fc188:c.instructions+=4;goto B6fc188;
case 0x6fc18a:c.instructions+=3;goto B6fc18a;
case 0x6fc191:c.instructions+=2;goto B6fc191;
case 0x6fc198:c.instructions+=1;goto B6fc198;
case 0x6fc19a:goto L6fc19a;
case 0x6fc19b:c.instructions+=1;goto B6fc19b;
case 0x6fc19c:goto L6fc19c;
case 0x6fc19d:c.instructions+=17;goto B6fc19d;
case 0x6fc19f:c.instructions+=16;goto B6fc19f;
case 0x6fc1a2:c.instructions+=15;goto B6fc1a2;
case 0x6fc1a5:c.instructions+=14;goto B6fc1a5;
case 0x6fc1ab:c.instructions+=13;goto B6fc1ab;
case 0x6fc1af:c.instructions+=12;goto B6fc1af;
case 0x6fc1b2:c.instructions+=11;goto B6fc1b2;
case 0x6fc1b5:c.instructions+=10;goto B6fc1b5;
case 0x6fc1b8:c.instructions+=9;goto B6fc1b8;
case 0x6fc1bb:c.instructions+=8;goto B6fc1bb;
case 0x6fc1be:c.instructions+=7;goto B6fc1be;
case 0x6fc1bf:c.instructions+=6;goto B6fc1bf;
case 0x6fc1c2:c.instructions+=5;goto B6fc1c2;
case 0x6fc1c5:c.instructions+=4;goto B6fc1c5;
case 0x6fc1c7:c.instructions+=3;goto B6fc1c7;
case 0x6fc1ce:c.instructions+=2;goto B6fc1ce;
case 0x6fc1d5:c.instructions+=1;goto B6fc1d5;
case 0x6fc1d7:goto L6fc1d7;
case 0x6fc1d8:c.instructions+=1;goto B6fc1d8;
case 0x6fc1d9:goto L6fc1d9;
case 0x6fc1da:c.instructions+=6;goto B6fc1da;
case 0x6fc1dc:c.instructions+=5;goto B6fc1dc;
case 0x6fc1e2:c.instructions+=4;goto B6fc1e2;
case 0x6fc1e4:c.instructions+=3;goto B6fc1e4;
case 0x6fc1e6:c.instructions+=2;goto B6fc1e6;
case 0x6fc1e9:c.instructions+=1;goto B6fc1e9;
case 0x6fc1ec:goto L6fc1ec;
case 0x6fc1ed:c.instructions+=1;goto B6fc1ed;
case 0x6fc1ee:goto L6fc1ee;
case 0x6fc1ef:c.instructions+=6;goto B6fc1ef;
case 0x6fc1f1:c.instructions+=5;goto B6fc1f1;
case 0x6fc1f4:c.instructions+=4;goto B6fc1f4;
case 0x6fc1fa:c.instructions+=3;goto B6fc1fa;
case 0x6fc1fd:c.instructions+=2;goto B6fc1fd;
case 0x6fc1ff:c.instructions+=1;goto B6fc1ff;
case 0x6fc202:goto L6fc202;
case 0x6fc203:c.instructions+=1;goto B6fc203;
case 0x6fc204:goto L6fc204;
case 0x6fc205:c.instructions+=13;goto B6fc205;
case 0x6fc207:c.instructions+=12;goto B6fc207;
case 0x6fc209:c.instructions+=11;goto B6fc209;
case 0x6fc20c:c.instructions+=10;goto B6fc20c;
case 0x6fc20e:c.instructions+=9;goto B6fc20e;
case 0x6fc210:c.instructions+=8;goto B6fc210;
case 0x6fc213:c.instructions+=7;goto B6fc213;
case 0x6fc216:c.instructions+=6;goto B6fc216;
case 0x6fc219:c.instructions+=5;goto B6fc219;
case 0x6fc21c:c.instructions+=4;goto B6fc21c;
case 0x6fc21f:c.instructions+=3;goto B6fc21f;
case 0x6fc222:c.instructions+=2;goto B6fc222;
case 0x6fc223:c.instructions+=1;goto B6fc223;
case 0x6fc226:goto L6fc226;
case 0x6fc227:c.instructions+=19;goto B6fc227;
case 0x6fc229:c.instructions+=18;goto B6fc229;
case 0x6fc22c:c.instructions+=17;goto B6fc22c;
case 0x6fc22f:c.instructions+=16;goto B6fc22f;
case 0x6fc232:c.instructions+=15;goto B6fc232;
case 0x6fc235:c.instructions+=14;goto B6fc235;
case 0x6fc238:c.instructions+=13;goto B6fc238;
case 0x6fc23b:c.instructions+=12;goto B6fc23b;
case 0x6fc23e:c.instructions+=11;goto B6fc23e;
case 0x6fc241:c.instructions+=10;goto B6fc241;
case 0x6fc244:c.instructions+=9;goto B6fc244;
case 0x6fc245:c.instructions+=8;goto B6fc245;
case 0x6fc248:c.instructions+=7;goto B6fc248;
case 0x6fc24a:c.instructions+=6;goto B6fc24a;
case 0x6fc24d:c.instructions+=5;goto B6fc24d;
case 0x6fc253:c.instructions+=4;goto B6fc253;
case 0x6fc254:c.instructions+=3;goto B6fc254;
case 0x6fc255:c.instructions+=2;goto B6fc255;
case 0x6fc256:c.instructions+=1;goto B6fc256;
case 0x6fc259:goto L6fc259;
case 0x6fc25c:c.instructions+=4;goto B6fc25c;
case 0x6fc260:c.instructions+=3;goto B6fc260;
case 0x6fc267:c.instructions+=2;goto B6fc267;
case 0x6fc26a:c.instructions+=1;goto B6fc26a;
case 0x6fc26f:goto L6fc26f;
case 0x6fc270:c.instructions+=6;goto B6fc270;
case 0x6fc272:c.instructions+=5;goto B6fc272;
case 0x6fc273:c.instructions+=4;goto B6fc273;
case 0x6fc275:c.instructions+=3;goto B6fc275;
case 0x6fc279:c.instructions+=2;goto B6fc279;
case 0x6fc27d:c.instructions+=1;goto B6fc27d;
case 0x6fc27f:goto L6fc27f;
case 0x6fc280:goto L6fc280;
case 0x6fc283:c.instructions+=8;goto B6fc283;
case 0x6fc286:c.instructions+=7;goto B6fc286;
case 0x6fc28b:c.instructions+=6;goto B6fc28b;
case 0x6fc28e:c.instructions+=5;goto B6fc28e;
case 0x6fc290:c.instructions+=4;goto B6fc290;
case 0x6fc293:c.instructions+=3;goto B6fc293;
case 0x6fc294:c.instructions+=2;goto B6fc294;
case 0x6fc298:c.instructions+=1;goto B6fc298;
case 0x6fc29d:goto L6fc29d;
case 0x6fc2a1:c.instructions+=4;goto B6fc2a1;
case 0x6fc2a2:c.instructions+=3;goto B6fc2a2;
case 0x6fc2a3:c.instructions+=2;goto B6fc2a3;
case 0x6fc2a7:c.instructions+=1;goto B6fc2a7;
case 0x6fc2a9:goto L6fc2a9;
case 0x6fc2aa:goto L6fc2aa;
case 0x6fc2ab:c.instructions+=2;goto B6fc2ab;
case 0x6fc2ac:c.instructions+=1;goto B6fc2ac;
case 0x6fc2af:goto L6fc2af;
case 0x6fc2b0:c.instructions+=6;goto B6fc2b0;
case 0x6fc2b2:c.instructions+=5;goto B6fc2b2;
case 0x6fc2b6:c.instructions+=4;goto B6fc2b6;
case 0x6fc2b7:c.instructions+=3;goto B6fc2b7;
case 0x6fc2b9:c.instructions+=2;goto B6fc2b9;
case 0x6fc2bf:c.instructions+=1;goto B6fc2bf;
case 0x6fc2c1:goto L6fc2c1;
case 0x6fc2c2:c.instructions+=1;goto B6fc2c2;
case 0x6fc2c7:goto L6fc2c7;
case 0x6fc2c8:goto L6fc2c8;
case 0x6fc2ca:c.instructions+=3;goto B6fc2ca;
case 0x6fc2cb:c.instructions+=2;goto B6fc2cb;
case 0x6fc2cc:c.instructions+=1;goto B6fc2cc;
case 0x6fc2cf:goto L6fc2cf;
case 0x6fc2d0:c.instructions+=5;goto B6fc2d0;
case 0x6fc2d2:c.instructions+=4;goto B6fc2d2;
case 0x6fc2d5:c.instructions+=3;goto B6fc2d5;
case 0x6fc2d6:c.instructions+=2;goto B6fc2d6;
case 0x6fc2d7:c.instructions+=1;goto B6fc2d7;
case 0x6fc2dc:goto L6fc2dc;
case 0x6fc2df:c.instructions+=15;goto B6fc2df;
case 0x6fc2e2:c.instructions+=14;goto B6fc2e2;
case 0x6fc2e5:c.instructions+=13;goto B6fc2e5;
case 0x6fc2e6:c.instructions+=12;goto B6fc2e6;
case 0x6fc2e8:c.instructions+=11;goto B6fc2e8;
case 0x6fc2ee:c.instructions+=10;goto B6fc2ee;
case 0x6fc2f1:c.instructions+=9;goto B6fc2f1;
case 0x6fc2f4:c.instructions+=8;goto B6fc2f4;
case 0x6fc2f7:c.instructions+=7;goto B6fc2f7;
case 0x6fc2fa:c.instructions+=6;goto B6fc2fa;
case 0x6fc2fd:c.instructions+=5;goto B6fc2fd;
case 0x6fc2fe:c.instructions+=4;goto B6fc2fe;
case 0x6fc301:c.instructions+=3;goto B6fc301;
case 0x6fc303:c.instructions+=2;goto B6fc303;
case 0x6fc306:c.instructions+=1;goto B6fc306;
case 0x6fc308:goto L6fc308;
case 0x6fc30b:c.instructions+=3;goto B6fc30b;
case 0x6fc30c:c.instructions+=2;goto B6fc30c;
case 0x6fc30e:c.instructions+=1;goto B6fc30e;
case 0x6fc310:goto L6fc310;
case 0x6fc313:c.instructions+=2;goto B6fc313;
case 0x6fc317:c.instructions+=1;goto B6fc317;
case 0x6fc319:goto L6fc319;
case 0x6fc31a:goto L6fc31a;
case 0x6fc31d:goto L6fc31d;
case 0x6fc323:c.instructions+=3;goto B6fc323;
case 0x6fc325:c.instructions+=2;goto B6fc325;
case 0x6fc326:c.instructions+=1;goto B6fc326;
case 0x6fc327:goto L6fc327;
case 0x6fc328:c.instructions+=7;goto B6fc328;
case 0x6fc32a:c.instructions+=6;goto B6fc32a;
case 0x6fc32b:c.instructions+=5;goto B6fc32b;
case 0x6fc32d:c.instructions+=4;goto B6fc32d;
case 0x6fc332:c.instructions+=3;goto B6fc332;
case 0x6fc334:c.instructions+=2;goto B6fc334;
case 0x6fc335:c.instructions+=1;goto B6fc335;
case 0x6fc337:goto L6fc337;
case 0x6fc339:goto L6fc339;
case 0x6fc33b:c.instructions+=4;goto B6fc33b;
case 0x6fc33d:c.instructions+=3;goto B6fc33d;
case 0x6fc33f:c.instructions+=2;goto B6fc33f;
case 0x6fc340:c.instructions+=1;goto B6fc340;
case 0x6fc342:goto L6fc342;
case 0x6fc345:c.instructions+=1;goto B6fc345;
case 0x6fc34a:goto L6fc34a;
case 0x6fc34d:c.instructions+=4;goto B6fc34d;
case 0x6fc34e:c.instructions+=3;goto B6fc34e;
case 0x6fc34f:c.instructions+=2;goto B6fc34f;
case 0x6fc351:c.instructions+=1;goto B6fc351;
case 0x6fc353:goto L6fc353;
case 0x6fc354:c.instructions+=1;goto B6fc354;
case 0x6fc359:goto L6fc359;
case 0x6fc35c:c.instructions+=8;goto B6fc35c;
case 0x6fc361:c.instructions+=7;goto B6fc361;
case 0x6fc364:c.instructions+=6;goto B6fc364;
case 0x6fc367:c.instructions+=5;goto B6fc367;
case 0x6fc36a:c.instructions+=4;goto B6fc36a;
case 0x6fc371:c.instructions+=3;goto B6fc371;
case 0x6fc376:c.instructions+=2;goto B6fc376;
case 0x6fc378:c.instructions+=1;goto B6fc378;
case 0x6fc37a:goto L6fc37a;
case 0x6fc37d:c.instructions+=3;goto B6fc37d;
case 0x6fc37f:c.instructions+=2;goto B6fc37f;
case 0x6fc382:c.instructions+=1;goto B6fc382;
case 0x6fc384:goto L6fc384;
case 0x6fc386:c.instructions+=1;goto B6fc386;
case 0x6fc388:goto L6fc388;
case 0x6fc38a:goto L6fc38a;
case 0x6fc38c:c.instructions+=2;goto B6fc38c;
case 0x6fc38f:c.instructions+=1;goto B6fc38f;
case 0x6fc391:goto L6fc391;
case 0x6fc393:c.instructions+=1;goto B6fc393;
case 0x6fc395:goto L6fc395;
case 0x6fc397:c.instructions+=1;goto B6fc397;
case 0x6fc398:goto L6fc398;
case 0x6fc39b:c.instructions+=1;goto B6fc39b;
case 0x6fc39d:goto L6fc39d;
case 0x6fc3a4:c.instructions+=1;goto B6fc3a4;
case 0x6fc3a9:goto L6fc3a9;
case 0x6fc3aa:c.instructions+=1;goto B6fc3aa;
case 0x6fc3af:goto L6fc3af;
case 0x6fc3b1:c.instructions+=3;goto B6fc3b1;
case 0x6fc3b2:c.instructions+=2;goto B6fc3b2;
case 0x6fc3b3:c.instructions+=1;goto B6fc3b3;
case 0x6fc3b5:goto L6fc3b5;
case 0x6fc3b8:c.instructions+=7;goto B6fc3b8;
case 0x6fc3bd:c.instructions+=6;goto B6fc3bd;
case 0x6fc3c0:c.instructions+=5;goto B6fc3c0;
case 0x6fc3c3:c.instructions+=4;goto B6fc3c3;
case 0x6fc3c6:c.instructions+=3;goto B6fc3c6;
case 0x6fc3cd:c.instructions+=2;goto B6fc3cd;
case 0x6fc3d3:c.instructions+=1;goto B6fc3d3;
case 0x6fc3d5:goto L6fc3d5;
case 0x6fc3d8:c.instructions+=5;goto B6fc3d8;
case 0x6fc3dd:c.instructions+=4;goto B6fc3dd;
case 0x6fc3e0:c.instructions+=3;goto B6fc3e0;
case 0x6fc3e5:c.instructions+=2;goto B6fc3e5;
case 0x6fc3e8:c.instructions+=1;goto B6fc3e8;
case 0x6fc3eb:goto L6fc3eb;
case 0x6fc3f1:c.instructions+=1;goto B6fc3f1;
case 0x6fc3f6:goto L6fc3f6;
case 0x6fc3f9:c.instructions+=2;goto B6fc3f9;
case 0x6fc3ff:c.instructions+=1;goto B6fc3ff;
case 0x6fc404:goto L6fc404;
case 0x6fc407:c.instructions+=2;goto B6fc407;
case 0x6fc40d:c.instructions+=1;goto B6fc40d;
case 0x6fc412:goto L6fc412;
case 0x6fc415:c.instructions+=2;goto B6fc415;
case 0x6fc418:c.instructions+=1;goto B6fc418;
case 0x6fc41a:goto L6fc41a;
case 0x6fc41c:goto L6fc41c;
case 0x6fc423:c.instructions+=1;goto B6fc423;
case 0x6fc428:goto L6fc428;
case 0x6fc429:c.instructions+=1;goto B6fc429;
case 0x6fc42b:goto L6fc42b;
case 0x6fc42c:c.instructions+=2;goto B6fc42c;
case 0x6fc42d:c.instructions+=1;goto B6fc42d;
case 0x6fc42e:goto L6fc42e;
case 0x6fc42f:c.instructions+=5;goto B6fc42f;
case 0x6fc431:c.instructions+=4;goto B6fc431;
case 0x6fc434:c.instructions+=3;goto B6fc434;
case 0x6fc437:c.instructions+=2;goto B6fc437;
case 0x6fc43a:c.instructions+=1;goto B6fc43a;
case 0x6fc43c:goto L6fc43c;
case 0x6fc43e:c.instructions+=4;goto B6fc43e;
case 0x6fc441:c.instructions+=3;goto B6fc441;
case 0x6fc442:c.instructions+=2;goto B6fc442;
case 0x6fc444:c.instructions+=1;goto B6fc444;
case 0x6fc446:goto L6fc446;
case 0x6fc449:c.instructions+=3;goto B6fc449;
case 0x6fc44a:c.instructions+=2;goto B6fc44a;
case 0x6fc44c:c.instructions+=1;goto B6fc44c;
case 0x6fc44f:goto L6fc44f;
case 0x6fc451:c.instructions+=3;goto B6fc451;
case 0x6fc452:c.instructions+=2;goto B6fc452;
case 0x6fc454:c.instructions+=1;goto B6fc454;
case 0x6fc456:goto L6fc456;
case 0x6fc458:goto L6fc458;
case 0x6fc45a:c.instructions+=1;goto B6fc45a;
case 0x6fc45c:goto L6fc45c;
case 0x6fc460:c.instructions+=3;goto B6fc460;
case 0x6fc462:c.instructions+=2;goto B6fc462;
case 0x6fc465:c.instructions+=1;goto B6fc465;
case 0x6fc467:goto L6fc467;
case 0x6fc46a:c.instructions+=1;goto B6fc46a;
case 0x6fc46c:goto L6fc46c;
case 0x6fc46e:c.instructions+=1;goto B6fc46e;
case 0x6fc471:goto L6fc471;
case 0x6fc472:c.instructions+=2;goto B6fc472;
case 0x6fc474:c.instructions+=1;goto B6fc474;
case 0x6fc476:goto L6fc476;
case 0x6fc478:c.instructions+=4;goto B6fc478;
case 0x6fc47b:c.instructions+=3;goto B6fc47b;
case 0x6fc47c:c.instructions+=2;goto B6fc47c;
case 0x6fc47f:c.instructions+=1;goto B6fc47f;
case 0x6fc484:goto L6fc484;
case 0x6fc486:c.instructions+=4;goto B6fc486;
case 0x6fc487:c.instructions+=3;goto B6fc487;
case 0x6fc488:c.instructions+=2;goto B6fc488;
case 0x6fc48b:c.instructions+=1;goto B6fc48b;
case 0x6fc490:goto L6fc490;
case 0x6fc493:c.instructions+=3;goto B6fc493;
case 0x6fc494:c.instructions+=2;goto B6fc494;
case 0x6fc495:c.instructions+=1;goto B6fc495;
case 0x6fc496:goto L6fc496;
case 0x6fc497:c.instructions+=5;goto B6fc497;
case 0x6fc499:c.instructions+=4;goto B6fc499;
case 0x6fc49a:c.instructions+=3;goto B6fc49a;
case 0x6fc49d:c.instructions+=2;goto B6fc49d;
case 0x6fc49f:c.instructions+=1;goto B6fc49f;
case 0x6fc4a4:goto L6fc4a4;
case 0x6fc4a6:c.instructions+=2;goto B6fc4a6;
case 0x6fc4a7:c.instructions+=1;goto B6fc4a7;
case 0x6fc4a9:goto L6fc4a9;
case 0x6fc4ab:goto L6fc4ab;
case 0x6fc4ad:c.instructions+=3;goto B6fc4ad;
case 0x6fc4ae:c.instructions+=2;goto B6fc4ae;
case 0x6fc4af:c.instructions+=1;goto B6fc4af;
case 0x6fc4b0:goto L6fc4b0;
case 0x6fc4b1:c.instructions+=5;goto B6fc4b1;
case 0x6fc4b3:c.instructions+=4;goto B6fc4b3;
case 0x6fc4b6:c.instructions+=3;goto B6fc4b6;
case 0x6fc4b8:c.instructions+=2;goto B6fc4b8;
case 0x6fc4b9:c.instructions+=1;goto B6fc4b9;
case 0x6fc4bc:goto L6fc4bc;
case 0x6fc4c0:c.instructions+=5;goto B6fc4c0;
case 0x6fc4c4:c.instructions+=4;goto B6fc4c4;
case 0x6fc4c6:c.instructions+=3;goto B6fc4c6;
case 0x6fc4c7:c.instructions+=2;goto B6fc4c7;
case 0x6fc4ca:c.instructions+=1;goto B6fc4ca;
case 0x6fc4cc:goto L6fc4cc;
case 0x6fc4ce:goto L6fc4ce;
case 0x6fc4cf:c.instructions+=2;goto B6fc4cf;
case 0x6fc4d0:c.instructions+=1;goto B6fc4d0;
case 0x6fc4d1:goto L6fc4d1;
case 0x6fc4d2:c.instructions+=3;goto B6fc4d2;
case 0x6fc4d4:c.instructions+=2;goto B6fc4d4;
case 0x6fc4d7:c.instructions+=1;goto B6fc4d7;
case 0x6fc4dc:goto L6fc4dc;
case 0x6fc4e3:c.instructions+=2;goto B6fc4e3;
case 0x6fc4e4:c.instructions+=1;goto B6fc4e4;
case 0x6fc4e7:goto L6fc4e7;
case 0x6fc4e8:c.instructions+=12;goto B6fc4e8;
case 0x6fc4ea:c.instructions+=11;goto B6fc4ea;
case 0x6fc4eb:c.instructions+=10;goto B6fc4eb;
case 0x6fc4ec:c.instructions+=9;goto B6fc4ec;
case 0x6fc4ee:c.instructions+=8;goto B6fc4ee;
case 0x6fc4f0:c.instructions+=7;goto B6fc4f0;
case 0x6fc4f1:c.instructions+=6;goto B6fc4f1;
case 0x6fc4f3:c.instructions+=5;goto B6fc4f3;
case 0x6fc4f6:c.instructions+=4;goto B6fc4f6;
case 0x6fc4fc:c.instructions+=3;goto B6fc4fc;
case 0x6fc4fe:c.instructions+=2;goto B6fc4fe;
case 0x6fc500:c.instructions+=1;goto B6fc500;
case 0x6fc501:goto L6fc501;
case 0x6fc503:goto L6fc503;
case 0x6fc508:goto L6fc508;
case 0x6fc50f:c.instructions+=11;goto B6fc50f;
case 0x6fc512:c.instructions+=10;goto B6fc512;
case 0x6fc519:c.instructions+=9;goto B6fc519;
case 0x6fc51b:c.instructions+=8;goto B6fc51b;
case 0x6fc51c:c.instructions+=7;goto B6fc51c;
case 0x6fc51d:c.instructions+=6;goto B6fc51d;
case 0x6fc523:c.instructions+=5;goto B6fc523;
case 0x6fc526:c.instructions+=4;goto B6fc526;
case 0x6fc52d:c.instructions+=3;goto B6fc52d;
case 0x6fc52e:c.instructions+=2;goto B6fc52e;
case 0x6fc52f:c.instructions+=1;goto B6fc52f;
case 0x6fc532:goto L6fc532;
case 0x6fc533:c.instructions+=14;goto B6fc533;
case 0x6fc535:c.instructions+=13;goto B6fc535;
case 0x6fc536:c.instructions+=12;goto B6fc536;
case 0x6fc537:c.instructions+=11;goto B6fc537;
case 0x6fc538:c.instructions+=10;goto B6fc538;
case 0x6fc53a:c.instructions+=9;goto B6fc53a;
case 0x6fc53c:c.instructions+=8;goto B6fc53c;
case 0x6fc53d:c.instructions+=7;goto B6fc53d;
case 0x6fc543:c.instructions+=6;goto B6fc543;
case 0x6fc545:c.instructions+=5;goto B6fc545;
case 0x6fc547:c.instructions+=4;goto B6fc547;
case 0x6fc549:c.instructions+=3;goto B6fc549;
case 0x6fc54f:c.instructions+=2;goto B6fc54f;
case 0x6fc555:c.instructions+=1;goto B6fc555;
case 0x6fc557:goto L6fc557;
case 0x6fc559:goto L6fc559;
case 0x6fc55a:c.instructions+=4;goto B6fc55a;
case 0x6fc55c:c.instructions+=3;goto B6fc55c;
case 0x6fc55f:c.instructions+=2;goto B6fc55f;
case 0x6fc565:c.instructions+=1;goto B6fc565;
case 0x6fc566:goto L6fc566;
case 0x6fc568:goto L6fc568;
case 0x6fc56d:goto L6fc56d;
case 0x6fc56f:c.instructions+=4;goto B6fc56f;
case 0x6fc572:c.instructions+=3;goto B6fc572;
case 0x6fc578:c.instructions+=2;goto B6fc578;
case 0x6fc579:c.instructions+=1;goto B6fc579;
case 0x6fc57e:goto L6fc57e;
case 0x6fc581:c.instructions+=26;goto B6fc581;
case 0x6fc586:c.instructions+=25;goto B6fc586;
case 0x6fc589:c.instructions+=24;goto B6fc589;
case 0x6fc58f:c.instructions+=23;goto B6fc58f;
case 0x6fc592:c.instructions+=22;goto B6fc592;
case 0x6fc598:c.instructions+=21;goto B6fc598;
case 0x6fc59e:c.instructions+=20;goto B6fc59e;
case 0x6fc5a4:c.instructions+=19;goto B6fc5a4;
case 0x6fc5aa:c.instructions+=18;goto B6fc5aa;
case 0x6fc5b0:c.instructions+=17;goto B6fc5b0;
case 0x6fc5b2:c.instructions+=16;goto B6fc5b2;
case 0x6fc5b8:c.instructions+=15;goto B6fc5b8;
case 0x6fc5b9:c.instructions+=14;goto B6fc5b9;
case 0x6fc5bf:c.instructions+=13;goto B6fc5bf;
case 0x6fc5c0:c.instructions+=12;goto B6fc5c0;
case 0x6fc5c3:c.instructions+=11;goto B6fc5c3;
case 0x6fc5c9:c.instructions+=10;goto B6fc5c9;
case 0x6fc5ca:c.instructions+=9;goto B6fc5ca;
case 0x6fc5d1:c.instructions+=8;goto B6fc5d1;
case 0x6fc5d2:c.instructions+=7;goto B6fc5d2;
case 0x6fc5dc:c.instructions+=6;goto B6fc5dc;
case 0x6fc5e3:c.instructions+=5;goto B6fc5e3;
case 0x6fc5ea:c.instructions+=4;goto B6fc5ea;
case 0x6fc5eb:c.instructions+=3;goto B6fc5eb;
case 0x6fc5ec:c.instructions+=2;goto B6fc5ec;
case 0x6fc5ed:c.instructions+=1;goto B6fc5ed;
case 0x6fc5f0:goto L6fc5f0;
case 0x6fc5f1:c.instructions+=15;goto B6fc5f1;
case 0x6fc5f3:c.instructions+=14;goto B6fc5f3;
case 0x6fc5f6:c.instructions+=13;goto B6fc5f6;
case 0x6fc5f9:c.instructions+=12;goto B6fc5f9;
case 0x6fc5fa:c.instructions+=11;goto B6fc5fa;
case 0x6fc5fb:c.instructions+=10;goto B6fc5fb;
case 0x6fc5fc:c.instructions+=9;goto B6fc5fc;
case 0x6fc5fe:c.instructions+=8;goto B6fc5fe;
case 0x6fc604:c.instructions+=7;goto B6fc604;
case 0x6fc607:c.instructions+=6;goto B6fc607;
case 0x6fc609:c.instructions+=5;goto B6fc609;
case 0x6fc60f:c.instructions+=4;goto B6fc60f;
case 0x6fc610:c.instructions+=3;goto B6fc610;
case 0x6fc616:c.instructions+=2;goto B6fc616;
case 0x6fc618:c.instructions+=1;goto B6fc618;
case 0x6fc61a:goto L6fc61a;
case 0x6fc61c:goto L6fc61c;
case 0x6fc61e:c.instructions+=2;goto B6fc61e;
case 0x6fc624:c.instructions+=1;goto B6fc624;
case 0x6fc625:goto L6fc625;
case 0x6fc627:goto L6fc627;
case 0x6fc629:c.instructions+=2;goto B6fc629;
case 0x6fc62c:c.instructions+=1;goto B6fc62c;
case 0x6fc62e:goto L6fc62e;
case 0x6fc630:c.instructions+=3;goto B6fc630;
case 0x6fc633:c.instructions+=2;goto B6fc633;
case 0x6fc634:c.instructions+=1;goto B6fc634;
case 0x6fc639:goto L6fc639;
case 0x6fc63b:c.instructions+=4;goto B6fc63b;
case 0x6fc63e:c.instructions+=3;goto B6fc63e;
case 0x6fc644:c.instructions+=2;goto B6fc644;
case 0x6fc645:c.instructions+=1;goto B6fc645;
case 0x6fc64a:goto L6fc64a;
case 0x6fc64d:c.instructions+=1;goto B6fc64d;
case 0x6fc64f:goto L6fc64f;
case 0x6fc655:c.instructions+=4;goto B6fc655;
case 0x6fc656:c.instructions+=3;goto B6fc656;
case 0x6fc657:c.instructions+=2;goto B6fc657;
case 0x6fc65a:c.instructions+=1;goto B6fc65a;
case 0x6fc65f:goto L6fc65f;
case 0x6fc662:goto L6fc662;
case 0x6fc665:c.instructions+=25;goto B6fc665;
case 0x6fc66a:c.instructions+=24;goto B6fc66a;
case 0x6fc66d:c.instructions+=23;goto B6fc66d;
case 0x6fc673:c.instructions+=22;goto B6fc673;
case 0x6fc676:c.instructions+=21;goto B6fc676;
case 0x6fc67c:c.instructions+=20;goto B6fc67c;
case 0x6fc682:c.instructions+=19;goto B6fc682;
case 0x6fc688:c.instructions+=18;goto B6fc688;
case 0x6fc68e:c.instructions+=17;goto B6fc68e;
case 0x6fc694:c.instructions+=16;goto B6fc694;
case 0x6fc696:c.instructions+=15;goto B6fc696;
case 0x6fc69c:c.instructions+=14;goto B6fc69c;
case 0x6fc69d:c.instructions+=13;goto B6fc69d;
case 0x6fc6a3:c.instructions+=12;goto B6fc6a3;
case 0x6fc6a4:c.instructions+=11;goto B6fc6a4;
case 0x6fc6aa:c.instructions+=10;goto B6fc6aa;
case 0x6fc6ab:c.instructions+=9;goto B6fc6ab;
case 0x6fc6b2:c.instructions+=8;goto B6fc6b2;
case 0x6fc6b3:c.instructions+=7;goto B6fc6b3;
case 0x6fc6bd:c.instructions+=6;goto B6fc6bd;
case 0x6fc6c4:c.instructions+=5;goto B6fc6c4;
case 0x6fc6cb:c.instructions+=4;goto B6fc6cb;
case 0x6fc6cc:c.instructions+=3;goto B6fc6cc;
case 0x6fc6cd:c.instructions+=2;goto B6fc6cd;
case 0x6fc6ce:c.instructions+=1;goto B6fc6ce;
case 0x6fc6d1:goto L6fc6d1;
case 0x6fc6d2:c.instructions+=15;goto B6fc6d2;
case 0x6fc6d4:c.instructions+=14;goto B6fc6d4;
case 0x6fc6d5:c.instructions+=13;goto B6fc6d5;
case 0x6fc6d6:c.instructions+=12;goto B6fc6d6;
case 0x6fc6d8:c.instructions+=11;goto B6fc6d8;
case 0x6fc6df:c.instructions+=10;goto B6fc6df;
case 0x6fc6e1:c.instructions+=9;goto B6fc6e1;
case 0x6fc6e2:c.instructions+=8;goto B6fc6e2;
case 0x6fc6e4:c.instructions+=7;goto B6fc6e4;
case 0x6fc6e7:c.instructions+=6;goto B6fc6e7;
case 0x6fc6ed:c.instructions+=5;goto B6fc6ed;
case 0x6fc6ef:c.instructions+=4;goto B6fc6ef;
case 0x6fc6f1:c.instructions+=3;goto B6fc6f1;
case 0x6fc6fb:c.instructions+=2;goto B6fc6fb;
case 0x6fc702:c.instructions+=1;goto B6fc702;
case 0x6fc703:goto L6fc703;
case 0x6fc705:goto L6fc705;
case 0x6fc70a:goto L6fc70a;
case 0x6fc70d:c.instructions+=10;goto B6fc70d;
case 0x6fc710:c.instructions+=9;goto B6fc710;
case 0x6fc717:c.instructions+=8;goto B6fc717;
case 0x6fc718:c.instructions+=7;goto B6fc718;
case 0x6fc722:c.instructions+=6;goto B6fc722;
case 0x6fc729:c.instructions+=5;goto B6fc729;
case 0x6fc730:c.instructions+=4;goto B6fc730;
case 0x6fc735:c.instructions+=3;goto B6fc735;
case 0x6fc736:c.instructions+=2;goto B6fc736;
case 0x6fc737:c.instructions+=1;goto B6fc737;
case 0x6fc73a:goto L6fc73a;
case 0x6fc73b:c.instructions+=17;goto B6fc73b;
case 0x6fc73d:c.instructions+=16;goto B6fc73d;
case 0x6fc740:c.instructions+=15;goto B6fc740;
case 0x6fc741:c.instructions+=14;goto B6fc741;
case 0x6fc742:c.instructions+=13;goto B6fc742;
case 0x6fc744:c.instructions+=12;goto B6fc744;
case 0x6fc745:c.instructions+=11;goto B6fc745;
case 0x6fc74b:c.instructions+=10;goto B6fc74b;
case 0x6fc74e:c.instructions+=9;goto B6fc74e;
case 0x6fc754:c.instructions+=8;goto B6fc754;
case 0x6fc756:c.instructions+=7;goto B6fc756;
case 0x6fc75c:c.instructions+=6;goto B6fc75c;
case 0x6fc75f:c.instructions+=5;goto B6fc75f;
case 0x6fc765:c.instructions+=4;goto B6fc765;
case 0x6fc766:c.instructions+=3;goto B6fc766;
case 0x6fc768:c.instructions+=2;goto B6fc768;
case 0x6fc76f:c.instructions+=1;goto B6fc76f;
case 0x6fc771:goto L6fc771;
case 0x6fc773:goto L6fc773;
case 0x6fc775:c.instructions+=5;goto B6fc775;
case 0x6fc77b:c.instructions+=4;goto B6fc77b;
case 0x6fc77d:c.instructions+=3;goto B6fc77d;
case 0x6fc780:c.instructions+=2;goto B6fc780;
case 0x6fc781:c.instructions+=1;goto B6fc781;
case 0x6fc786:goto L6fc786;
case 0x6fc789:c.instructions+=11;goto B6fc789;
case 0x6fc78c:c.instructions+=10;goto B6fc78c;
case 0x6fc793:c.instructions+=9;goto B6fc793;
case 0x6fc794:c.instructions+=8;goto B6fc794;
case 0x6fc79e:c.instructions+=7;goto B6fc79e;
case 0x6fc7a5:c.instructions+=6;goto B6fc7a5;
case 0x6fc7ac:c.instructions+=5;goto B6fc7ac;
case 0x6fc7ad:c.instructions+=4;goto B6fc7ad;
case 0x6fc7b2:c.instructions+=3;goto B6fc7b2;
case 0x6fc7b3:c.instructions+=2;goto B6fc7b3;
case 0x6fc7b4:c.instructions+=1;goto B6fc7b4;
case 0x6fc7b7:goto L6fc7b7;
case 0x6fc7b8:c.instructions+=12;goto B6fc7b8;
case 0x6fc7ba:c.instructions+=11;goto B6fc7ba;
case 0x6fc7bb:c.instructions+=10;goto B6fc7bb;
case 0x6fc7bc:c.instructions+=9;goto B6fc7bc;
case 0x6fc7bd:c.instructions+=8;goto B6fc7bd;
case 0x6fc7bf:c.instructions+=7;goto B6fc7bf;
case 0x6fc7c6:c.instructions+=6;goto B6fc7c6;
case 0x6fc7c8:c.instructions+=5;goto B6fc7c8;
case 0x6fc7c9:c.instructions+=4;goto B6fc7c9;
case 0x6fc7cf:c.instructions+=3;goto B6fc7cf;
case 0x6fc7d1:c.instructions+=2;goto B6fc7d1;
case 0x6fc7d3:c.instructions+=1;goto B6fc7d3;
case 0x6fc7d5:goto L6fc7d5;
case 0x6fc7d7:goto L6fc7d7;
case 0x6fc7d8:c.instructions+=3;goto B6fc7d8;
case 0x6fc7de:c.instructions+=2;goto B6fc7de;
case 0x6fc7e0:c.instructions+=1;goto B6fc7e0;
case 0x6fc7e2:goto L6fc7e2;
case 0x6fc7e4:goto L6fc7e4;
case 0x6fc7e5:c.instructions+=4;goto B6fc7e5;
case 0x6fc7e7:c.instructions+=3;goto B6fc7e7;
case 0x6fc7ea:c.instructions+=2;goto B6fc7ea;
case 0x6fc7f0:c.instructions+=1;goto B6fc7f0;
case 0x6fc7f1:goto L6fc7f1;
case 0x6fc7f3:goto L6fc7f3;
case 0x6fc7f8:goto L6fc7f8;
case 0x6fc7fa:c.instructions+=3;goto B6fc7fa;
case 0x6fc7fd:c.instructions+=2;goto B6fc7fd;
case 0x6fc7fe:c.instructions+=1;goto B6fc7fe;
case 0x6fc803:goto L6fc803;
case 0x6fc806:c.instructions+=3;goto B6fc806;
case 0x6fc808:c.instructions+=2;goto B6fc808;
case 0x6fc80b:c.instructions+=1;goto B6fc80b;
case 0x6fc80e:goto L6fc80e;
case 0x6fc815:c.instructions+=9;goto B6fc815;
case 0x6fc816:c.instructions+=8;goto B6fc816;
case 0x6fc81d:c.instructions+=7;goto B6fc81d;
case 0x6fc824:c.instructions+=6;goto B6fc824;
case 0x6fc82e:c.instructions+=5;goto B6fc82e;
case 0x6fc835:c.instructions+=4;goto B6fc835;
case 0x6fc836:c.instructions+=3;goto B6fc836;
case 0x6fc837:c.instructions+=2;goto B6fc837;
case 0x6fc838:c.instructions+=1;goto B6fc838;
case 0x6fc83b:goto L6fc83b;
case 0x6fc83c:c.instructions+=13;goto B6fc83c;
case 0x6fc83e:c.instructions+=12;goto B6fc83e;
case 0x6fc841:c.instructions+=11;goto B6fc841;
case 0x6fc844:c.instructions+=10;goto B6fc844;
case 0x6fc845:c.instructions+=9;goto B6fc845;
case 0x6fc846:c.instructions+=8;goto B6fc846;
case 0x6fc847:c.instructions+=7;goto B6fc847;
case 0x6fc849:c.instructions+=6;goto B6fc849;
case 0x6fc84b:c.instructions+=5;goto B6fc84b;
case 0x6fc851:c.instructions+=4;goto B6fc851;
case 0x6fc852:c.instructions+=3;goto B6fc852;
case 0x6fc854:c.instructions+=2;goto B6fc854;
case 0x6fc856:c.instructions+=1;goto B6fc856;
case 0x6fc85c:goto L6fc85c;
case 0x6fc85e:goto L6fc85e;
case 0x6fc85f:c.instructions+=2;goto B6fc85f;
case 0x6fc865:c.instructions+=1;goto B6fc865;
case 0x6fc867:goto L6fc867;
case 0x6fc869:goto L6fc869;
case 0x6fc86b:c.instructions+=2;goto B6fc86b;
case 0x6fc86c:c.instructions+=1;goto B6fc86c;
case 0x6fc872:goto L6fc872;
case 0x6fc874:goto L6fc874;
case 0x6fc878:c.instructions+=2;goto B6fc878;
case 0x6fc87e:c.instructions+=1;goto B6fc87e;
case 0x6fc880:goto L6fc880;
case 0x6fc882:c.instructions+=3;goto B6fc882;
case 0x6fc885:c.instructions+=2;goto B6fc885;
case 0x6fc886:c.instructions+=1;goto B6fc886;
case 0x6fc88b:goto L6fc88b;
case 0x6fc88d:c.instructions+=3;goto B6fc88d;
case 0x6fc890:c.instructions+=2;goto B6fc890;
case 0x6fc891:c.instructions+=1;goto B6fc891;
case 0x6fc896:goto L6fc896;
case 0x6fc899:c.instructions+=1;goto B6fc899;
case 0x6fc89b:goto L6fc89b;
case 0x6fc89c:c.instructions+=3;goto B6fc89c;
case 0x6fc89d:c.instructions+=2;goto B6fc89d;
case 0x6fc8a0:c.instructions+=1;goto B6fc8a0;
case 0x6fc8a5:goto L6fc8a5;
case 0x6fc8a8:goto L6fc8a8;
case 0x6fc8aa:c.instructions+=6;goto B6fc8aa;
case 0x6fc8ab:c.instructions+=5;goto B6fc8ab;
case 0x6fc8ad:c.instructions+=4;goto B6fc8ad;
case 0x6fc8b0:c.instructions+=3;goto B6fc8b0;
case 0x6fc8b2:c.instructions+=2;goto B6fc8b2;
case 0x6fc8b4:c.instructions+=1;goto B6fc8b4;
case 0x6fc8b5:goto L6fc8b5;
case 0x6fc8b7:goto L6fc8b7;
case 0x6fc8bc:goto L6fc8bc;
case 0x6fc8bf:c.instructions+=3;goto B6fc8bf;
case 0x6fc8c1:c.instructions+=2;goto B6fc8c1;
case 0x6fc8c4:c.instructions+=1;goto B6fc8c4;
case 0x6fc8c7:goto L6fc8c7;
case 0x6fc8ce:c.instructions+=9;goto B6fc8ce;
case 0x6fc8cf:c.instructions+=8;goto B6fc8cf;
case 0x6fc8d6:c.instructions+=7;goto B6fc8d6;
case 0x6fc8dd:c.instructions+=6;goto B6fc8dd;
case 0x6fc8e7:c.instructions+=5;goto B6fc8e7;
case 0x6fc8ee:c.instructions+=4;goto B6fc8ee;
case 0x6fc8ef:c.instructions+=3;goto B6fc8ef;
case 0x6fc8f0:c.instructions+=2;goto B6fc8f0;
case 0x6fc8f1:c.instructions+=1;goto B6fc8f1;
case 0x6fc8f4:goto L6fc8f4;
case 0x6fc8fb:c.instructions+=1;goto B6fc8fb;
case 0x6fc8fe:goto L6fc8fe;
case 0x6fc8ff:c.instructions+=5;goto B6fc8ff;
case 0x6fc901:c.instructions+=4;goto B6fc901;
case 0x6fc905:c.instructions+=3;goto B6fc905;
case 0x6fc906:c.instructions+=2;goto B6fc906;
case 0x6fc908:c.instructions+=1;goto B6fc908;
case 0x6fc90a:goto L6fc90a;
case 0x6fc911:c.instructions+=1;goto B6fc911;
case 0x6fc913:goto L6fc913;
case 0x6fc918:c.instructions+=3;goto B6fc918;
case 0x6fc91a:c.instructions+=2;goto B6fc91a;
case 0x6fc91c:c.instructions+=1;goto B6fc91c;
case 0x6fc921:goto L6fc921;
case 0x6fc924:c.instructions+=5;goto B6fc924;
case 0x6fc927:c.instructions+=4;goto B6fc927;
case 0x6fc929:c.instructions+=3;goto B6fc929;
case 0x6fc92b:c.instructions+=2;goto B6fc92b;
case 0x6fc92d:c.instructions+=1;goto B6fc92d;
case 0x6fc930:goto L6fc930;
case 0x6fc934:goto L6fc934;
case 0x6fc935:c.instructions+=2;goto B6fc935;
case 0x6fc936:c.instructions+=1;goto B6fc936;
case 0x6fc939:goto L6fc939;
case 0x6fc93b:c.instructions+=5;goto B6fc93b;
case 0x6fc93e:c.instructions+=4;goto B6fc93e;
case 0x6fc940:c.instructions+=3;goto B6fc940;
case 0x6fc943:c.instructions+=2;goto B6fc943;
case 0x6fc944:c.instructions+=1;goto B6fc944;
case 0x6fc947:goto L6fc947;
case 0x6fc94a:goto L6fc94a;
case 0x6fc94b:c.instructions+=23;goto B6fc94b;
case 0x6fc94d:c.instructions+=22;goto B6fc94d;
case 0x6fc950:c.instructions+=21;goto B6fc950;
case 0x6fc952:c.instructions+=20;goto B6fc952;
case 0x6fc953:c.instructions+=19;goto B6fc953;
case 0x6fc954:c.instructions+=18;goto B6fc954;
case 0x6fc955:c.instructions+=17;goto B6fc955;
case 0x6fc957:c.instructions+=16;goto B6fc957;
case 0x6fc95a:c.instructions+=15;goto B6fc95a;
case 0x6fc95d:c.instructions+=14;goto B6fc95d;
case 0x6fc961:c.instructions+=13;goto B6fc961;
case 0x6fc964:c.instructions+=12;goto B6fc964;
case 0x6fc967:c.instructions+=11;goto B6fc967;
case 0x6fc96a:c.instructions+=10;goto B6fc96a;
case 0x6fc96d:c.instructions+=9;goto B6fc96d;
case 0x6fc970:c.instructions+=8;goto B6fc970;
case 0x6fc973:c.instructions+=7;goto B6fc973;
case 0x6fc974:c.instructions+=6;goto B6fc974;
case 0x6fc975:c.instructions+=5;goto B6fc975;
case 0x6fc976:c.instructions+=4;goto B6fc976;
case 0x6fc977:c.instructions+=3;goto B6fc977;
case 0x6fc97a:c.instructions+=2;goto B6fc97a;
case 0x6fc97b:c.instructions+=1;goto B6fc97b;
case 0x6fc980:goto L6fc980;
case 0x6fc981:c.instructions+=1;goto B6fc981;
case 0x6fc986:goto L6fc986;
case 0x6fc988:c.instructions+=3;goto B6fc988;
case 0x6fc989:c.instructions+=2;goto B6fc989;
case 0x6fc98a:c.instructions+=1;goto B6fc98a;
case 0x6fc98c:goto L6fc98c;
case 0x6fc98f:c.instructions+=5;goto B6fc98f;
case 0x6fc992:c.instructions+=4;goto B6fc992;
case 0x6fc995:c.instructions+=3;goto B6fc995;
case 0x6fc998:c.instructions+=2;goto B6fc998;
case 0x6fc99e:c.instructions+=1;goto B6fc99e;
case 0x6fc9a0:goto L6fc9a0;
case 0x6fc9a7:goto L6fc9a7;
case 0x6fc9aa:c.instructions+=6;goto B6fc9aa;
case 0x6fc9ac:c.instructions+=5;goto B6fc9ac;
case 0x6fc9b2:c.instructions+=4;goto B6fc9b2;
case 0x6fc9b8:c.instructions+=3;goto B6fc9b8;
case 0x6fc9bb:c.instructions+=2;goto B6fc9bb;
case 0x6fc9bd:c.instructions+=1;goto B6fc9bd;
case 0x6fc9c0:goto L6fc9c0;
case 0x6fc9c3:c.instructions+=4;goto B6fc9c3;
case 0x6fc9c5:c.instructions+=3;goto B6fc9c5;
case 0x6fc9c6:c.instructions+=2;goto B6fc9c6;
case 0x6fc9c8:c.instructions+=1;goto B6fc9c8;
case 0x6fc9cb:goto L6fc9cb;
case 0x6fc9cc:c.instructions+=4;goto B6fc9cc;
case 0x6fc9cd:c.instructions+=3;goto B6fc9cd;
case 0x6fc9ce:c.instructions+=2;goto B6fc9ce;
case 0x6fc9cf:c.instructions+=1;goto B6fc9cf;
case 0x6fc9d2:goto L6fc9d2;
case 0x6fc9d3:c.instructions+=13;goto B6fc9d3;
case 0x6fc9d5:c.instructions+=12;goto B6fc9d5;
case 0x6fc9db:c.instructions+=11;goto B6fc9db;
case 0x6fc9dc:c.instructions+=10;goto B6fc9dc;
case 0x6fc9de:c.instructions+=9;goto B6fc9de;
case 0x6fc9df:c.instructions+=8;goto B6fc9df;
case 0x6fc9e5:c.instructions+=7;goto B6fc9e5;
case 0x6fc9e6:c.instructions+=6;goto B6fc9e6;
case 0x6fc9ec:c.instructions+=5;goto B6fc9ec;
case 0x6fc9ed:c.instructions+=4;goto B6fc9ed;
case 0x6fc9f3:c.instructions+=3;goto B6fc9f3;
case 0x6fc9f8:c.instructions+=2;goto B6fc9f8;
case 0x6fc9f9:c.instructions+=1;goto B6fc9f9;
case 0x6fc9fe:goto L6fc9fe;
case 0x6fca04:c.instructions+=3;goto B6fca04;
case 0x6fca07:c.instructions+=2;goto B6fca07;
case 0x6fca09:c.instructions+=1;goto B6fca09;
case 0x6fca0e:goto L6fca0e;
case 0x6fca14:c.instructions+=2;goto B6fca14;
case 0x6fca15:c.instructions+=1;goto B6fca15;
case 0x6fca1a:goto L6fca1a;
case 0x6fca1c:c.instructions+=3;goto B6fca1c;
case 0x6fca22:c.instructions+=2;goto B6fca22;
case 0x6fca23:c.instructions+=1;goto B6fca23;
case 0x6fca29:goto L6fca29;
case 0x6fca2a:goto L6fca2a;
case 0x6fca31:c.instructions+=1;goto B6fca31;
case 0x6fca37:goto L6fca37;
case 0x6fca3d:c.instructions+=6;goto B6fca3d;
case 0x6fca3f:c.instructions+=5;goto B6fca3f;
case 0x6fca41:c.instructions+=4;goto B6fca41;
case 0x6fca46:c.instructions+=3;goto B6fca46;
case 0x6fca47:c.instructions+=2;goto B6fca47;
case 0x6fca49:c.instructions+=1;goto B6fca49;
case 0x6fca50:goto L6fca50;
case 0x6fca52:goto L6fca52;
case 0x6fca58:goto L6fca58;
case 0x6fca5a:c.instructions+=4;goto B6fca5a;
case 0x6fca5c:c.instructions+=3;goto B6fca5c;
case 0x6fca61:c.instructions+=2;goto B6fca61;
case 0x6fca62:c.instructions+=1;goto B6fca62;
case 0x6fca64:goto L6fca64;
case 0x6fca66:goto L6fca66;
case 0x6fca6c:goto L6fca6c;
case 0x6fca6e:c.instructions+=5;goto B6fca6e;
case 0x6fca6f:c.instructions+=4;goto B6fca6f;
case 0x6fca75:c.instructions+=3;goto B6fca75;
case 0x6fca77:c.instructions+=2;goto B6fca77;
case 0x6fca7e:c.instructions+=1;goto B6fca7e;
case 0x6fca80:goto L6fca80;
case 0x6fca82:goto L6fca82;
case 0x6fca83:c.instructions+=2;goto B6fca83;
case 0x6fca89:c.instructions+=1;goto B6fca89;
case 0x6fca8b:goto L6fca8b;
case 0x6fca8d:goto L6fca8d;
case 0x6fca93:c.instructions+=2;goto B6fca93;
case 0x6fca94:c.instructions+=1;goto B6fca94;
case 0x6fca99:goto L6fca99;
case 0x6fca9c:c.instructions+=2;goto B6fca9c;
case 0x6fcaa3:c.instructions+=1;goto B6fcaa3;
case 0x6fcaa5:goto L6fcaa5;
case 0x6fcaa7:c.instructions+=7;goto B6fcaa7;
case 0x6fcaa8:c.instructions+=6;goto B6fcaa8;
case 0x6fcaae:c.instructions+=5;goto B6fcaae;
case 0x6fcab0:c.instructions+=4;goto B6fcab0;
case 0x6fcab2:c.instructions+=3;goto B6fcab2;
case 0x6fcab4:c.instructions+=2;goto B6fcab4;
case 0x6fcab5:c.instructions+=1;goto B6fcab5;
case 0x6fcab6:goto L6fcab6;
case 0x6fcab8:goto L6fcab8;
case 0x6fcabd:goto L6fcabd;
case 0x6fcac0:goto L6fcac0;
case 0x6fcac6:c.instructions+=2;goto B6fcac6;
case 0x6fcac8:c.instructions+=1;goto B6fcac8;
case 0x6fcacd:goto L6fcacd;
case 0x6fcad3:c.instructions+=8;goto B6fcad3;
case 0x6fcad4:c.instructions+=7;goto B6fcad4;
case 0x6fcad5:c.instructions+=6;goto B6fcad5;
case 0x6fcadb:c.instructions+=5;goto B6fcadb;
case 0x6fcadc:c.instructions+=4;goto B6fcadc;
case 0x6fcae2:c.instructions+=3;goto B6fcae2;
case 0x6fcae7:c.instructions+=2;goto B6fcae7;
case 0x6fcae8:c.instructions+=1;goto B6fcae8;
case 0x6fcaed:goto L6fcaed;
case 0x6fcaf3:c.instructions+=3;goto B6fcaf3;
case 0x6fcaf6:c.instructions+=2;goto B6fcaf6;
case 0x6fcaf8:c.instructions+=1;goto B6fcaf8;
case 0x6fcafd:goto L6fcafd;
case 0x6fcb03:c.instructions+=2;goto B6fcb03;
case 0x6fcb04:c.instructions+=1;goto B6fcb04;
case 0x6fcb09:goto L6fcb09;
case 0x6fcb10:c.instructions+=2;goto B6fcb10;
case 0x6fcb11:c.instructions+=1;goto B6fcb11;
case 0x6fcb13:goto L6fcb13;
case 0x6fcb1a:c.instructions+=1;goto B6fcb1a;
case 0x6fcb1c:goto L6fcb1c;
case 0x6fcb1e:c.instructions+=5;goto B6fcb1e;
case 0x6fcb24:c.instructions+=4;goto B6fcb24;
case 0x6fcb26:c.instructions+=3;goto B6fcb26;
case 0x6fcb2c:c.instructions+=2;goto B6fcb2c;
case 0x6fcb2d:c.instructions+=1;goto B6fcb2d;
case 0x6fcb32:goto L6fcb32;
case 0x6fcb34:c.instructions+=1;goto B6fcb34;
case 0x6fcb35:goto L6fcb35;
case 0x6fcb37:goto L6fcb37;
case 0x6fcb3d:c.instructions+=3;goto B6fcb3d;
case 0x6fcb3f:c.instructions+=2;goto B6fcb3f;
case 0x6fcb46:c.instructions+=1;goto B6fcb46;
case 0x6fcb4b:goto L6fcb4b;
case 0x6fcb4e:c.instructions+=1;goto B6fcb4e;
case 0x6fcb51:goto L6fcb51;
case 0x6fcb58:c.instructions+=1;goto B6fcb58;
case 0x6fcb5a:goto L6fcb5a;
case 0x6fcb60:c.instructions+=1;goto B6fcb60;
case 0x6fcb62:goto L6fcb62;
case 0x6fcb69:c.instructions+=1;goto B6fcb69;
case 0x6fcb6b:goto L6fcb6b;
case 0x6fcb6d:c.instructions+=3;goto B6fcb6d;
case 0x6fcb6e:c.instructions+=2;goto B6fcb6e;
case 0x6fcb70:c.instructions+=1;goto B6fcb70;
case 0x6fcb73:goto L6fcb73;
case 0x6fcb75:goto L6fcb75;
case 0x6fcb7b:c.instructions+=7;goto B6fcb7b;
case 0x6fcb7c:c.instructions+=6;goto B6fcb7c;
case 0x6fcb82:c.instructions+=5;goto B6fcb82;
case 0x6fcb83:c.instructions+=4;goto B6fcb83;
case 0x6fcb86:c.instructions+=3;goto B6fcb86;
case 0x6fcb8b:c.instructions+=2;goto B6fcb8b;
case 0x6fcb8c:c.instructions+=1;goto B6fcb8c;
case 0x6fcb91:goto L6fcb91;
case 0x6fcb94:c.instructions+=1;goto B6fcb94;
case 0x6fcb97:goto L6fcb97;
case 0x6fcb9d:c.instructions+=5;goto B6fcb9d;
case 0x6fcb9f:c.instructions+=4;goto B6fcb9f;
case 0x6fcba2:c.instructions+=3;goto B6fcba2;
case 0x6fcba4:c.instructions+=2;goto B6fcba4;
case 0x6fcba5:c.instructions+=1;goto B6fcba5;
case 0x6fcba8:goto L6fcba8;
case 0x6fcbae:c.instructions+=3;goto B6fcbae;
case 0x6fcbaf:c.instructions+=2;goto B6fcbaf;
case 0x6fcbb5:c.instructions+=1;goto B6fcbb5;
case 0x6fcbba:goto L6fcbba;
case 0x6fcbbc:c.instructions+=3;goto B6fcbbc;
case 0x6fcbc2:c.instructions+=2;goto B6fcbc2;
case 0x6fcbc3:c.instructions+=1;goto B6fcbc3;
case 0x6fcbc9:goto L6fcbc9;
case 0x6fcbca:goto L6fcbca;
case 0x6fcbd0:c.instructions+=2;goto B6fcbd0;
case 0x6fcbd6:c.instructions+=1;goto B6fcbd6;
case 0x6fcbd8:goto L6fcbd8;
case 0x6fcbde:c.instructions+=1;goto B6fcbde;
case 0x6fcbe0:goto L6fcbe0;
case 0x6fcbe6:goto L6fcbe6;
case 0x6fcbe8:c.instructions+=9;goto B6fcbe8;
case 0x6fcbeb:c.instructions+=8;goto B6fcbeb;
case 0x6fcbed:c.instructions+=7;goto B6fcbed;
case 0x6fcbf0:c.instructions+=6;goto B6fcbf0;
case 0x6fcbf3:c.instructions+=5;goto B6fcbf3;
case 0x6fcbf9:c.instructions+=4;goto B6fcbf9;
case 0x6fcbfc:c.instructions+=3;goto B6fcbfc;
case 0x6fcc02:c.instructions+=2;goto B6fcc02;
case 0x6fcc04:c.instructions+=1;goto B6fcc04;
case 0x6fcc07:goto L6fcc07;
case 0x6fcc08:c.instructions+=3;goto B6fcc08;
case 0x6fcc09:c.instructions+=2;goto B6fcc09;
case 0x6fcc0a:c.instructions+=1;goto B6fcc0a;
case 0x6fcc0d:goto L6fcc0d;
case 0x6fcc0e:c.instructions+=11;goto B6fcc0e;
case 0x6fcc0f:c.instructions+=10;goto B6fcc0f;
case 0x6fcc11:c.instructions+=9;goto B6fcc11;
case 0x6fcc13:c.instructions+=8;goto B6fcc13;
case 0x6fcc18:c.instructions+=7;goto B6fcc18;
case 0x6fcc1e:c.instructions+=6;goto B6fcc1e;
case 0x6fcc20:c.instructions+=5;goto B6fcc20;
case 0x6fcc24:c.instructions+=4;goto B6fcc24;
case 0x6fcc2a:c.instructions+=3;goto B6fcc2a;
case 0x6fcc2c:c.instructions+=2;goto B6fcc2c;
case 0x6fcc2f:c.instructions+=1;goto B6fcc2f;
case 0x6fcc34:goto L6fcc34;
case 0x6fcc37:c.instructions+=5;goto B6fcc37;
case 0x6fcc39:c.instructions+=4;goto B6fcc39;
case 0x6fcc3b:c.instructions+=3;goto B6fcc3b;
case 0x6fcc3d:c.instructions+=2;goto B6fcc3d;
case 0x6fcc43:c.instructions+=1;goto B6fcc43;
case 0x6fcc46:goto L6fcc46;
case 0x6fcc47:c.instructions+=2;goto B6fcc47;
case 0x6fcc48:c.instructions+=1;goto B6fcc48;
case 0x6fcc4b:goto L6fcc4b;
case 0x6fcc4c:c.instructions+=8;goto B6fcc4c;
case 0x6fcc4e:c.instructions+=7;goto B6fcc4e;
case 0x6fcc4f:c.instructions+=6;goto B6fcc4f;
case 0x6fcc52:c.instructions+=5;goto B6fcc52;
case 0x6fcc54:c.instructions+=4;goto B6fcc54;
case 0x6fcc57:c.instructions+=3;goto B6fcc57;
case 0x6fcc59:c.instructions+=2;goto B6fcc59;
case 0x6fcc5c:c.instructions+=1;goto B6fcc5c;
case 0x6fcc5e:goto L6fcc5e;
case 0x6fcc65:goto L6fcc65;
case 0x6fcc68:c.instructions+=2;goto B6fcc68;
case 0x6fcc6b:c.instructions+=1;goto B6fcc6b;
case 0x6fcc6d:goto L6fcc6d;
case 0x6fcc70:c.instructions+=2;goto B6fcc70;
case 0x6fcc73:c.instructions+=1;goto B6fcc73;
case 0x6fcc75:goto L6fcc75;
case 0x6fcc78:c.instructions+=2;goto B6fcc78;
case 0x6fcc7b:c.instructions+=1;goto B6fcc7b;
case 0x6fcc7d:goto L6fcc7d;
case 0x6fcc80:c.instructions+=2;goto B6fcc80;
case 0x6fcc83:c.instructions+=1;goto B6fcc83;
case 0x6fcc85:goto L6fcc85;
case 0x6fcc88:c.instructions+=2;goto B6fcc88;
case 0x6fcc8b:c.instructions+=1;goto B6fcc8b;
case 0x6fcc8d:goto L6fcc8d;
case 0x6fcc90:goto L6fcc90;
case 0x6fcc92:c.instructions+=4;goto B6fcc92;
case 0x6fcc94:c.instructions+=3;goto B6fcc94;
case 0x6fcc96:c.instructions+=2;goto B6fcc96;
case 0x6fcc97:c.instructions+=1;goto B6fcc97;
case 0x6fcc99:goto L6fcc99;
case 0x6fcc9c:c.instructions+=2;goto B6fcc9c;
case 0x6fcc9f:c.instructions+=1;goto B6fcc9f;
case 0x6fcca1:goto L6fcca1;
case 0x6fcca4:c.instructions+=1;goto B6fcca4;
case 0x6fcca7:goto L6fcca7;
case 0x6fcca9:c.instructions+=4;goto B6fcca9;
case 0x6fccab:c.instructions+=3;goto B6fccab;
case 0x6fccad:c.instructions+=2;goto B6fccad;
case 0x6fccae:c.instructions+=1;goto B6fccae;
case 0x6fccb0:goto L6fccb0;
case 0x6fccb2:goto L6fccb2;
case 0x6fccb4:c.instructions+=1;goto B6fccb4;
case 0x6fccb6:goto L6fccb6;
case 0x6fccb7:c.instructions+=1;goto B6fccb7;
case 0x6fccbc:goto L6fccbc;
case 0x6fccbe:goto L6fccbe;
case 0x6fccc0:c.instructions+=1;goto B6fccc0;
case 0x6fccc2:goto L6fccc2;
case 0x6fccc5:goto L6fccc5;
case 0x6fccc6:c.instructions+=2;goto B6fccc6;
case 0x6fccc7:c.instructions+=1;goto B6fccc7;
case 0x6fccea:goto L6fccea;
case 0x6fcceb:c.instructions+=7;goto B6fcceb;
case 0x6fcced:c.instructions+=6;goto B6fcced;
case 0x6fccf0:c.instructions+=5;goto B6fccf0;
case 0x6fccf3:c.instructions+=4;goto B6fccf3;
case 0x6fccf6:c.instructions+=3;goto B6fccf6;
case 0x6fccfa:c.instructions+=2;goto B6fccfa;
case 0x6fccfb:c.instructions+=1;goto B6fccfb;
case 0x6fccfe:goto L6fccfe;
case 0x6fccff:c.instructions+=6;goto B6fccff;
case 0x6fcd01:c.instructions+=5;goto B6fcd01;
case 0x6fcd06:c.instructions+=4;goto B6fcd06;
case 0x6fcd09:c.instructions+=3;goto B6fcd09;
case 0x6fcd0f:c.instructions+=2;goto B6fcd0f;
case 0x6fcd10:c.instructions+=1;goto B6fcd10;
case 0x6fcd15:goto L6fcd15;
case 0x6fcd18:c.instructions+=2;goto B6fcd18;
case 0x6fcd19:c.instructions+=1;goto B6fcd19;
case 0x6fcd1c:goto L6fcd1c;
case 0x6fcd1d:c.instructions+=4;goto B6fcd1d;
case 0x6fcd1f:c.instructions+=3;goto B6fcd1f;
case 0x6fcd22:c.instructions+=2;goto B6fcd22;
case 0x6fcd25:c.instructions+=1;goto B6fcd25;
case 0x6fcd2a:goto L6fcd2a;
case 0x6fcd2b:c.instructions+=3;goto B6fcd2b;
case 0x6fcd2c:c.instructions+=2;goto B6fcd2c;
case 0x6fcd2d:c.instructions+=1;goto B6fcd2d;
case 0x6fcd30:goto L6fcd30;
case 0x6fcd33:goto L6fcd33;
case 0x6fcd36:goto L6fcd36;
case 0x6fcd38:goto L6fcd38;
case 0x6fcd39:c.instructions+=19;goto B6fcd39;
case 0x6fcd3b:c.instructions+=18;goto B6fcd3b;
case 0x6fcd3e:c.instructions+=17;goto B6fcd3e;
case 0x6fcd41:c.instructions+=16;goto B6fcd41;
case 0x6fcd42:c.instructions+=15;goto B6fcd42;
case 0x6fcd44:c.instructions+=14;goto B6fcd44;
case 0x6fcd45:c.instructions+=13;goto B6fcd45;
case 0x6fcd48:c.instructions+=12;goto B6fcd48;
case 0x6fcd49:c.instructions+=11;goto B6fcd49;
case 0x6fcd4b:c.instructions+=10;goto B6fcd4b;
case 0x6fcd4c:c.instructions+=9;goto B6fcd4c;
case 0x6fcd4d:c.instructions+=8;goto B6fcd4d;
case 0x6fcd4e:c.instructions+=7;goto B6fcd4e;
case 0x6fcd4f:c.instructions+=6;goto B6fcd4f;
case 0x6fcd52:c.instructions+=5;goto B6fcd52;
case 0x6fcd55:c.instructions+=4;goto B6fcd55;
case 0x6fcd57:c.instructions+=3;goto B6fcd57;
case 0x6fcd5a:c.instructions+=2;goto B6fcd5a;
case 0x6fcd5b:c.instructions+=1;goto B6fcd5b;
case 0x6fcd5e:goto L6fcd5e;
case 0x6fcd60:goto L6fcd60;
case 0x6fcd62:c.instructions+=20;goto B6fcd62;
case 0x6fcd66:c.instructions+=19;goto B6fcd66;
case 0x6fcd69:c.instructions+=18;goto B6fcd69;
case 0x6fcd6c:c.instructions+=17;goto B6fcd6c;
case 0x6fcd6f:c.instructions+=16;goto B6fcd6f;
case 0x6fcd72:c.instructions+=15;goto B6fcd72;
case 0x6fcd76:c.instructions+=14;goto B6fcd76;
case 0x6fcd79:c.instructions+=13;goto B6fcd79;
case 0x6fcd7d:c.instructions+=12;goto B6fcd7d;
case 0x6fcd80:c.instructions+=11;goto B6fcd80;
case 0x6fcd83:c.instructions+=10;goto B6fcd83;
case 0x6fcd86:c.instructions+=9;goto B6fcd86;
case 0x6fcd8a:c.instructions+=8;goto B6fcd8a;
case 0x6fcd8e:c.instructions+=7;goto B6fcd8e;
case 0x6fcd94:c.instructions+=6;goto B6fcd94;
case 0x6fcd96:c.instructions+=5;goto B6fcd96;
case 0x6fcd99:c.instructions+=4;goto B6fcd99;
case 0x6fcd9c:c.instructions+=3;goto B6fcd9c;
case 0x6fcda2:c.instructions+=2;goto B6fcda2;
case 0x6fcda8:c.instructions+=1;goto B6fcda8;
case 0x6fcdad:goto L6fcdad;
case 0x6fcdb3:c.instructions+=6;goto B6fcdb3;
case 0x6fcdb9:c.instructions+=5;goto B6fcdb9;
case 0x6fcdbb:c.instructions+=4;goto B6fcdbb;
case 0x6fcdbe:c.instructions+=3;goto B6fcdbe;
case 0x6fcdc4:c.instructions+=2;goto B6fcdc4;
case 0x6fcdca:c.instructions+=1;goto B6fcdca;
case 0x6fcdcf:goto L6fcdcf;
case 0x6fcdd5:c.instructions+=10;goto B6fcdd5;
case 0x6fcddb:c.instructions+=9;goto B6fcddb;
case 0x6fcde1:c.instructions+=8;goto B6fcde1;
case 0x6fcde8:c.instructions+=7;goto B6fcde8;
case 0x6fcdee:c.instructions+=6;goto B6fcdee;
case 0x6fcdf4:c.instructions+=5;goto B6fcdf4;
case 0x6fcdfa:c.instructions+=4;goto B6fcdfa;
case 0x6fce00:c.instructions+=3;goto B6fce00;
case 0x6fce06:c.instructions+=2;goto B6fce06;
case 0x6fce0c:c.instructions+=1;goto B6fce0c;
case 0x6fce11:goto L6fce11;
case 0x6fce17:c.instructions+=1;goto B6fce17;
case 0x6fce1c:goto L6fce1c;
case 0x6fce23:c.instructions+=9;goto B6fce23;
case 0x6fce29:c.instructions+=8;goto B6fce29;
case 0x6fce30:c.instructions+=7;goto B6fce30;
case 0x6fce3a:c.instructions+=6;goto B6fce3a;
case 0x6fce44:c.instructions+=5;goto B6fce44;
case 0x6fce46:c.instructions+=4;goto B6fce46;
case 0x6fce48:c.instructions+=3;goto B6fce48;
case 0x6fce49:c.instructions+=2;goto B6fce49;
case 0x6fce4c:c.instructions+=1;goto B6fce4c;
case 0x6fce52:goto L6fce52;
case 0x6fce54:goto L6fce54;
case 0x6fce56:c.instructions+=10;goto B6fce56;
case 0x6fce57:c.instructions+=9;goto B6fce57;
case 0x6fce58:c.instructions+=8;goto B6fce58;
case 0x6fce59:c.instructions+=7;goto B6fce59;
case 0x6fce5a:c.instructions+=6;goto B6fce5a;
case 0x6fce5c:c.instructions+=5;goto B6fce5c;
case 0x6fce62:c.instructions+=4;goto B6fce62;
case 0x6fce63:c.instructions+=3;goto B6fce63;
case 0x6fce66:c.instructions+=2;goto B6fce66;
case 0x6fce67:c.instructions+=1;goto B6fce67;
case 0x6fce6c:goto L6fce6c;
case 0x6fce6f:c.instructions+=2;goto B6fce6f;
case 0x6fce70:c.instructions+=1;goto B6fce70;
case 0x6fce75:goto L6fce75;
case 0x6fce76:c.instructions+=7;goto B6fce76;
case 0x6fce77:c.instructions+=6;goto B6fce77;
case 0x6fce7a:c.instructions+=5;goto B6fce7a;
case 0x6fce7b:c.instructions+=4;goto B6fce7b;
case 0x6fce7d:c.instructions+=3;goto B6fce7d;
case 0x6fce7e:c.instructions+=2;goto B6fce7e;
case 0x6fce7f:c.instructions+=1;goto B6fce7f;
case 0x6fce82:goto L6fce82;
case 0x6fce83:c.instructions+=13;goto B6fce83;
case 0x6fce85:c.instructions+=12;goto B6fce85;
case 0x6fce86:c.instructions+=11;goto B6fce86;
case 0x6fce87:c.instructions+=10;goto B6fce87;
case 0x6fce88:c.instructions+=9;goto B6fce88;
case 0x6fce8a:c.instructions+=8;goto B6fce8a;
case 0x6fce8c:c.instructions+=7;goto B6fce8c;
case 0x6fce8d:c.instructions+=6;goto B6fce8d;
case 0x6fce8f:c.instructions+=5;goto B6fce8f;
case 0x6fce92:c.instructions+=4;goto B6fce92;
case 0x6fce98:c.instructions+=3;goto B6fce98;
case 0x6fce9a:c.instructions+=2;goto B6fce9a;
case 0x6fce9c:c.instructions+=1;goto B6fce9c;
case 0x6fce9d:goto L6fce9d;
case 0x6fce9f:goto L6fce9f;
case 0x6fcea4:goto L6fcea4;
case 0x6fcea7:c.instructions+=14;goto B6fcea7;
case 0x6fceaa:c.instructions+=13;goto B6fceaa;
case 0x6fceaf:c.instructions+=12;goto B6fceaf;
case 0x6fceb2:c.instructions+=11;goto B6fceb2;
case 0x6fceb8:c.instructions+=10;goto B6fceb8;
case 0x6fcebb:c.instructions+=9;goto B6fcebb;
case 0x6fcec1:c.instructions+=8;goto B6fcec1;
case 0x6fcec4:c.instructions+=7;goto B6fcec4;
case 0x6fcec7:c.instructions+=6;goto B6fcec7;
case 0x6fceca:c.instructions+=5;goto B6fceca;
case 0x6fcecb:c.instructions+=4;goto B6fcecb;
case 0x6fcece:c.instructions+=3;goto B6fcece;
case 0x6fcecf:c.instructions+=2;goto B6fcecf;
case 0x6fced1:c.instructions+=1;goto B6fced1;
case 0x6fced6:goto L6fced6;
case 0x6fced7:c.instructions+=4;goto B6fced7;
case 0x6fceda:c.instructions+=3;goto B6fceda;
case 0x6fcedc:c.instructions+=2;goto B6fcedc;
case 0x6fcedf:c.instructions+=1;goto B6fcedf;
case 0x6fcee4:goto L6fcee4;
case 0x6fcee5:c.instructions+=8;goto B6fcee5;
case 0x6fcee8:c.instructions+=7;goto B6fcee8;
case 0x6fceec:c.instructions+=6;goto B6fceec;
case 0x6fceed:c.instructions+=5;goto B6fceed;
case 0x6fceee:c.instructions+=4;goto B6fceee;
case 0x6fcef4:c.instructions+=3;goto B6fcef4;
case 0x6fcef5:c.instructions+=2;goto B6fcef5;
case 0x6fcef7:c.instructions+=1;goto B6fcef7;
case 0x6fcefc:goto L6fcefc;
case 0x6fcefe:c.instructions+=3;goto B6fcefe;
case 0x6fceff:c.instructions+=2;goto B6fceff;
case 0x6fcf01:c.instructions+=1;goto B6fcf01;
case 0x6fcf06:goto L6fcf06;
case 0x6fcf0d:c.instructions+=12;goto B6fcf0d;
case 0x6fcf0f:c.instructions+=11;goto B6fcf0f;
case 0x6fcf15:c.instructions+=10;goto B6fcf15;
case 0x6fcf16:c.instructions+=9;goto B6fcf16;
case 0x6fcf17:c.instructions+=8;goto B6fcf17;
case 0x6fcf1d:c.instructions+=7;goto B6fcf1d;
case 0x6fcf27:c.instructions+=6;goto B6fcf27;
case 0x6fcf2a:c.instructions+=5;goto B6fcf2a;
case 0x6fcf31:c.instructions+=4;goto B6fcf31;
case 0x6fcf32:c.instructions+=3;goto B6fcf32;
case 0x6fcf33:c.instructions+=2;goto B6fcf33;
case 0x6fcf34:c.instructions+=1;goto B6fcf34;
case 0x6fcf37:goto L6fcf37;
case 0x6fcf38:c.instructions+=21;goto B6fcf38;
case 0x6fcf3a:c.instructions+=20;goto B6fcf3a;
case 0x6fcf3d:c.instructions+=19;goto B6fcf3d;
case 0x6fcf3e:c.instructions+=18;goto B6fcf3e;
case 0x6fcf3f:c.instructions+=17;goto B6fcf3f;
case 0x6fcf41:c.instructions+=16;goto B6fcf41;
case 0x6fcf44:c.instructions+=15;goto B6fcf44;
case 0x6fcf47:c.instructions+=14;goto B6fcf47;
case 0x6fcf4a:c.instructions+=13;goto B6fcf4a;
case 0x6fcf4c:c.instructions+=12;goto B6fcf4c;
case 0x6fcf53:c.instructions+=11;goto B6fcf53;
case 0x6fcf56:c.instructions+=10;goto B6fcf56;
case 0x6fcf57:c.instructions+=9;goto B6fcf57;
case 0x6fcf5d:c.instructions+=8;goto B6fcf5d;
case 0x6fcf63:c.instructions+=7;goto B6fcf63;
case 0x6fcf66:c.instructions+=6;goto B6fcf66;
case 0x6fcf69:c.instructions+=5;goto B6fcf69;
case 0x6fcf6b:c.instructions+=4;goto B6fcf6b;
case 0x6fcf6c:c.instructions+=3;goto B6fcf6c;
case 0x6fcf6d:c.instructions+=2;goto B6fcf6d;
case 0x6fcf6e:c.instructions+=1;goto B6fcf6e;
case 0x6fcf71:goto L6fcf71;
case 0x6fcf72:c.instructions+=3;goto B6fcf72;
case 0x6fcf73:c.instructions+=2;goto B6fcf73;
case 0x6fcf74:c.instructions+=1;goto B6fcf74;
case 0x6fcf77:goto L6fcf77;
case 0x6fcf78:c.instructions+=9;goto B6fcf78;
case 0x6fcf7a:c.instructions+=8;goto B6fcf7a;
case 0x6fcf80:c.instructions+=7;goto B6fcf80;
case 0x6fcf81:c.instructions+=6;goto B6fcf81;
case 0x6fcf83:c.instructions+=5;goto B6fcf83;
case 0x6fcf86:c.instructions+=4;goto B6fcf86;
case 0x6fcf89:c.instructions+=3;goto B6fcf89;
case 0x6fcf8a:c.instructions+=2;goto B6fcf8a;
case 0x6fcf8b:c.instructions+=1;goto B6fcf8b;
case 0x6fcf91:goto L6fcf91;
case 0x6fcf92:c.instructions+=1;goto B6fcf92;
case 0x6fcf98:goto L6fcf98;
case 0x6fcf99:c.instructions+=1;goto B6fcf99;
case 0x6fcf9f:goto L6fcf9f;
case 0x6fcfa0:c.instructions+=1;goto B6fcfa0;
case 0x6fcfa6:goto L6fcfa6;
case 0x6fcfa7:c.instructions+=1;goto B6fcfa7;
case 0x6fcfa9:goto L6fcfa9;
case 0x6fcfaa:c.instructions+=1;goto B6fcfaa;
case 0x6fcfb0:goto L6fcfb0;
case 0x6fcfb3:c.instructions+=6;goto B6fcfb3;
case 0x6fcfb5:c.instructions+=5;goto B6fcfb5;
case 0x6fcfb8:c.instructions+=4;goto B6fcfb8;
case 0x6fcfbb:c.instructions+=3;goto B6fcfbb;
case 0x6fcfbd:c.instructions+=2;goto B6fcfbd;
case 0x6fcfc3:c.instructions+=1;goto B6fcfc3;
case 0x6fcfc6:goto L6fcfc6;
case 0x6fcfcd:c.instructions+=3;goto B6fcfcd;
case 0x6fcfd0:c.instructions+=2;goto B6fcfd0;
case 0x6fcfd2:c.instructions+=1;goto B6fcfd2;
case 0x6fcfd4:goto L6fcfd4;
case 0x6fcfda:c.instructions+=1;goto B6fcfda;
case 0x6fcfdc:goto L6fcfdc;
case 0x6fcfe2:c.instructions+=2;goto B6fcfe2;
case 0x6fcfe3:c.instructions+=1;goto B6fcfe3;
case 0x6fcfe6:goto L6fcfe6;
case 0x6fcfeb:goto L6fcfeb;
case 0x6fcfee:goto L6fcfee;
case 0x6fcff4:c.instructions+=4;goto B6fcff4;
case 0x6fcff7:c.instructions+=3;goto B6fcff7;
case 0x6fcffd:c.instructions+=2;goto B6fcffd;
case 0x6fcfff:c.instructions+=1;goto B6fcfff;
default:missing_instruction(c.pc);}
B6fc001:L6fc001:{c.instructions+=2;NFSU2_TR(0x6fc001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc002:{NFSU2_TR(0x6fc002);
{goto L6fccea;}
}
B6fc007:L6fc007:{c.instructions+=5;NFSU2_TR(0x6fc007);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc008:{NFSU2_TR(0x6fc008);
__builtin_memmove((R+20),(R+16),4);
}
B6fc00a:{NFSU2_TR(0x6fc00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fc00c:{NFSU2_TR(0x6fc00c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc00d:{NFSU2_TR(0x6fc00d);
{goto L6fcd30;}
}
B6fc01e:L6fc01e:{c.instructions+=5;NFSU2_TR(0x6fc01e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc01f:{NFSU2_TR(0x6fc01f);
__builtin_memmove((R+20),(R+16),4);
}
B6fc021:{NFSU2_TR(0x6fc021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fc023:{NFSU2_TR(0x6fc023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc024:{NFSU2_TR(0x6fc024);
{goto L6fccfe;}
}
B6fc029:L6fc029:{c.instructions+=6;NFSU2_TR(0x6fc029);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc02a:{NFSU2_TR(0x6fc02a);
__builtin_memmove((R+20),(R+16),4);
}
B6fc02c:{NFSU2_TR(0x6fc02c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc02d:{NFSU2_TR(0x6fc02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fc030:{NFSU2_TR(0x6fc030);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fc032:{NFSU2_TR(0x6fc032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc037ull));
{goto L6fc0ff;}
}
B6fc037:L6fc037:{c.instructions+=4;NFSU2_TR(0x6fc037);
__builtin_memmove((R+0),gp(0x8ad91c),4);
}
B6fc03c:{NFSU2_TR(0x6fc03c);
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
B6fc03e:{NFSU2_TR(0x6fc03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc03f:{NFSU2_TR(0x6fc03f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc064;}}
}
B6fc041:L6fc041:{c.instructions+=2;NFSU2_TR(0x6fc041);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc043:{NFSU2_TR(0x6fc043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc048ull));
TAIL_STATIC(0x6fbec0u,6fb);
}
B6fc048:L6fc048:{c.instructions+=3;NFSU2_TR(0x6fc048);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fc04a:{NFSU2_TR(0x6fc04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc04b:{NFSU2_TR(0x6fc04b);
if(r1(R+518)){{goto L6fc05d;}}
}
B6fc04d:L6fc04d:{c.instructions+=5;NFSU2_TR(0x6fc04d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc050:{NFSU2_TR(0x6fc050);
__builtin_memmove((R+4),(R+0),4);
}
B6fc052:{NFSU2_TR(0x6fc052);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc055:{NFSU2_TR(0x6fc055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc056:{NFSU2_TR(0x6fc056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc05bull));
TAIL_STATIC(0x6fbed6u,6fb);
}
B6fc05b:L6fc05b:{c.instructions+=1;NFSU2_TR(0x6fc05b);
{goto L6fc05f;}
}
B6fc05d:L6fc05d:{c.instructions+=1;NFSU2_TR(0x6fc05d);
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
B6fc05f:L6fc05f:{c.instructions+=1;NFSU2_TR(0x6fc05f);
__builtin_memmove(gp(0x8ad91c),(R+0),4);
}
B6fc064:L6fc064:{c.instructions+=3;NFSU2_TR(0x6fc064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc065:{NFSU2_TR(0x6fc065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc066:{NFSU2_TR(0x6fc066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc067:L6fc067:{c.instructions+=3;NFSU2_TR(0x6fc067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fc069:{NFSU2_TR(0x6fc069);
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
B6fc06b:{NFSU2_TR(0x6fc06b);
if(r1(R+518)){{goto L6fc074;}}
}
B6fc06d:L6fc06d:{c.instructions+=2;NFSU2_TR(0x6fc06d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc06f:{NFSU2_TR(0x6fc06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc074ull));
{goto L6fc0b8;}
}
B6fc074:L6fc074:{c.instructions+=1;NFSU2_TR(0x6fc074);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc075:L6fc075:{c.instructions+=17;NFSU2_TR(0x6fc075);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc076:{NFSU2_TR(0x6fc076);
__builtin_memmove((R+20),(R+16),4);
}
B6fc078:{NFSU2_TR(0x6fc078);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc079:{NFSU2_TR(0x6fc079);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc07a:{NFSU2_TR(0x6fc07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc07d:{NFSU2_TR(0x6fc07d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6fc07f:{NFSU2_TR(0x6fc07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc082:{NFSU2_TR(0x6fc082);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc085:{NFSU2_TR(0x6fc085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc088:{NFSU2_TR(0x6fc088);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc08a:{NFSU2_TR(0x6fc08a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc08d:{NFSU2_TR(0x6fc08d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fc08e:{NFSU2_TR(0x6fc08e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc08f:{NFSU2_TR(0x6fc08f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc090:{NFSU2_TR(0x6fc090);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc093:{NFSU2_TR(0x6fc093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc096:{NFSU2_TR(0x6fc096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc09bull));
{goto L6fc4e7;}
}
B6fc09b:L6fc09b:{c.instructions+=2;NFSU2_TR(0x6fc09b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc09c:{NFSU2_TR(0x6fc09c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc0b8:L6fc0b8:{c.instructions+=5;NFSU2_TR(0x6fc0b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0b9:{NFSU2_TR(0x6fc0b9);
__builtin_memmove((R+20),(R+16),4);
}
B6fc0bb:{NFSU2_TR(0x6fc0bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0bc:{NFSU2_TR(0x6fc0bc);
__builtin_memmove((R+24),(R+4),4);
}
B6fc0be:{NFSU2_TR(0x6fc0be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc0c3ull));
{goto L6fc4b0;}
}
B6fc0c3:L6fc0c3:{c.instructions+=2;NFSU2_TR(0x6fc0c3);
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
B6fc0c7:{NFSU2_TR(0x6fc0c7);
if(r1(R+518)){{goto L6fc0d6;}}
}
B6fc0c9:L6fc0c9:{c.instructions+=3;NFSU2_TR(0x6fc0c9);
u8 U[4];
w4(U+0,u32(0x2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0ce:{NFSU2_TR(0x6fc0ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0cf:{NFSU2_TR(0x6fc0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc0d4ull));
{goto L6fc1ee;}
}
B6fc0d4:L6fc0d4:{c.instructions+=2;NFSU2_TR(0x6fc0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc0d5:{NFSU2_TR(0x6fc0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc0d6:L6fc0d6:{c.instructions+=4;NFSU2_TR(0x6fc0d6);
__builtin_memmove((R+0),(R+24),4);
}
B6fc0d8:{NFSU2_TR(0x6fc0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc0d9:{NFSU2_TR(0x6fc0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc0da:{NFSU2_TR(0x6fc0da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc0dd:L6fc0dd:{c.instructions+=5;NFSU2_TR(0x6fc0dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0de:{NFSU2_TR(0x6fc0de);
__builtin_memmove((R+20),(R+16),4);
}
B6fc0e0:{NFSU2_TR(0x6fc0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0e1:{NFSU2_TR(0x6fc0e1);
__builtin_memmove((R+24),(R+4),4);
}
B6fc0e3:{NFSU2_TR(0x6fc0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc0e8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc067u);}goto L6fc067;}
}
B6fc0e8:L6fc0e8:{c.instructions+=2;NFSU2_TR(0x6fc0e8);
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
B6fc0ec:{NFSU2_TR(0x6fc0ec);
if(r1(R+518)){{goto L6fc0f8;}}
}
B6fc0ee:L6fc0ee:{c.instructions+=3;NFSU2_TR(0x6fc0ee);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0f0:{NFSU2_TR(0x6fc0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc0f1:{NFSU2_TR(0x6fc0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc0f6ull));
{goto L6fc1ee;}
}
B6fc0f6:L6fc0f6:{c.instructions+=2;NFSU2_TR(0x6fc0f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc0f7:{NFSU2_TR(0x6fc0f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc0f8:L6fc0f8:{c.instructions+=4;NFSU2_TR(0x6fc0f8);
__builtin_memmove((R+0),(R+24),4);
}
B6fc0fa:{NFSU2_TR(0x6fc0fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc0fb:{NFSU2_TR(0x6fc0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc0fc:{NFSU2_TR(0x6fc0fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc0ff:L6fc0ff:{c.instructions+=6;NFSU2_TR(0x6fc0ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc100:{NFSU2_TR(0x6fc100);
__builtin_memmove((R+20),(R+16),4);
}
B6fc102:{NFSU2_TR(0x6fc102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc105:{NFSU2_TR(0x6fc105);
__builtin_memmove(gp(0x8ad920),(R+0),4);
}
B6fc10a:{NFSU2_TR(0x6fc10a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc10b:{NFSU2_TR(0x6fc10b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc10c:L6fc10c:{c.instructions+=18;NFSU2_TR(0x6fc10c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc10d:{NFSU2_TR(0x6fc10d);
__builtin_memmove((R+20),(R+16),4);
}
B6fc10f:{NFSU2_TR(0x6fc10f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6fc112:{NFSU2_TR(0x6fc112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc115:{NFSU2_TR(0x6fc115);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc11b:{NFSU2_TR(0x6fc11b);
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
B6fc11f:{NFSU2_TR(0x6fc11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc122:{NFSU2_TR(0x6fc122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc125:{NFSU2_TR(0x6fc125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc128:{NFSU2_TR(0x6fc128);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc12b:{NFSU2_TR(0x6fc12b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc12e:{NFSU2_TR(0x6fc12e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc12f:{NFSU2_TR(0x6fc12f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc132:{NFSU2_TR(0x6fc132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc135:{NFSU2_TR(0x6fc135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc137:{NFSU2_TR(0x6fc137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc13e:{NFSU2_TR(0x6fc13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc145:{NFSU2_TR(0x6fc145);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc147ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fc147:L6fc147:{c.instructions+=2;NFSU2_TR(0x6fc147);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc148:{NFSU2_TR(0x6fc148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc149:L6fc149:{c.instructions+=7;NFSU2_TR(0x6fc149);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc14a:{NFSU2_TR(0x6fc14a);
__builtin_memmove((R+20),(R+16),4);
}
B6fc14c:{NFSU2_TR(0x6fc14c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc14f:{NFSU2_TR(0x6fc14f);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc155:{NFSU2_TR(0x6fc155);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc158:{NFSU2_TR(0x6fc158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc15a:{NFSU2_TR(0x6fc15a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc15dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc15d:L6fc15d:{c.instructions+=2;NFSU2_TR(0x6fc15d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc15e:{NFSU2_TR(0x6fc15e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc15f:L6fc15f:{c.instructions+=18;NFSU2_TR(0x6fc15f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc160:{NFSU2_TR(0x6fc160);
__builtin_memmove((R+20),(R+16),4);
}
B6fc162:{NFSU2_TR(0x6fc162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6fc165:{NFSU2_TR(0x6fc165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc168:{NFSU2_TR(0x6fc168);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc16e:{NFSU2_TR(0x6fc16e);
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
B6fc172:{NFSU2_TR(0x6fc172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc175:{NFSU2_TR(0x6fc175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc178:{NFSU2_TR(0x6fc178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc17b:{NFSU2_TR(0x6fc17b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc17e:{NFSU2_TR(0x6fc17e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc181:{NFSU2_TR(0x6fc181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc182:{NFSU2_TR(0x6fc182);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc185:{NFSU2_TR(0x6fc185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc188:{NFSU2_TR(0x6fc188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc18a:{NFSU2_TR(0x6fc18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc191:{NFSU2_TR(0x6fc191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc198:{NFSU2_TR(0x6fc198);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc19aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fc19a:L6fc19a:{c.instructions+=2;NFSU2_TR(0x6fc19a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc19b:{NFSU2_TR(0x6fc19b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc19c:L6fc19c:{c.instructions+=18;NFSU2_TR(0x6fc19c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc19d:{NFSU2_TR(0x6fc19d);
__builtin_memmove((R+20),(R+16),4);
}
B6fc19f:{NFSU2_TR(0x6fc19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6fc1a2:{NFSU2_TR(0x6fc1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc1a5:{NFSU2_TR(0x6fc1a5);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc1ab:{NFSU2_TR(0x6fc1ab);
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
B6fc1af:{NFSU2_TR(0x6fc1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc1b2:{NFSU2_TR(0x6fc1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc1b5:{NFSU2_TR(0x6fc1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc1b8:{NFSU2_TR(0x6fc1b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc1bb:{NFSU2_TR(0x6fc1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc1be:{NFSU2_TR(0x6fc1be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc1bf:{NFSU2_TR(0x6fc1bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc1c2:{NFSU2_TR(0x6fc1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc1c5:{NFSU2_TR(0x6fc1c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc1c7:{NFSU2_TR(0x6fc1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc1ce:{NFSU2_TR(0x6fc1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc1d5:{NFSU2_TR(0x6fc1d5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc1d7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6fc1d7:L6fc1d7:{c.instructions+=2;NFSU2_TR(0x6fc1d7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc1d8:{NFSU2_TR(0x6fc1d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc1d9:L6fc1d9:{c.instructions+=7;NFSU2_TR(0x6fc1d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc1da:{NFSU2_TR(0x6fc1da);
__builtin_memmove((R+20),(R+16),4);
}
B6fc1dc:{NFSU2_TR(0x6fc1dc);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc1e2:{NFSU2_TR(0x6fc1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc1e4:{NFSU2_TR(0x6fc1e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc1e6:{NFSU2_TR(0x6fc1e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc1e9:{NFSU2_TR(0x6fc1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc1ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc1ec:L6fc1ec:{c.instructions+=2;NFSU2_TR(0x6fc1ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc1ed:{NFSU2_TR(0x6fc1ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc1ee:L6fc1ee:{c.instructions+=7;NFSU2_TR(0x6fc1ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc1ef:{NFSU2_TR(0x6fc1ef);
__builtin_memmove((R+20),(R+16),4);
}
B6fc1f1:{NFSU2_TR(0x6fc1f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc1f4:{NFSU2_TR(0x6fc1f4);
__builtin_memmove((R+4),gp(0x8ad920),4);
}
B6fc1fa:{NFSU2_TR(0x6fc1fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc1fd:{NFSU2_TR(0x6fc1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc1ff:{NFSU2_TR(0x6fc1ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc202ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc202:L6fc202:{c.instructions+=2;NFSU2_TR(0x6fc202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc203:{NFSU2_TR(0x6fc203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc204:L6fc204:{c.instructions+=14;NFSU2_TR(0x6fc204);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc205:{NFSU2_TR(0x6fc205);
__builtin_memmove((R+20),(R+16),4);
}
B6fc207:{NFSU2_TR(0x6fc207);
__builtin_memmove((R+0),(R+4),4);
}
B6fc209:{NFSU2_TR(0x6fc209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc20c:{NFSU2_TR(0x6fc20c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fc20e:{NFSU2_TR(0x6fc20e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fc210:{NFSU2_TR(0x6fc210);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc213:{NFSU2_TR(0x6fc213);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc216:{NFSU2_TR(0x6fc216);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc219:{NFSU2_TR(0x6fc219);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc21c:{NFSU2_TR(0x6fc21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc21f:{NFSU2_TR(0x6fc21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc222:{NFSU2_TR(0x6fc222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc223:{NFSU2_TR(0x6fc223);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc226:L6fc226:{c.instructions+=20;NFSU2_TR(0x6fc226);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc227:{NFSU2_TR(0x6fc227);
__builtin_memmove((R+20),(R+16),4);
}
B6fc229:{NFSU2_TR(0x6fc229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc22c:{NFSU2_TR(0x6fc22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc22f:{NFSU2_TR(0x6fc22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc232:{NFSU2_TR(0x6fc232);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc235:{NFSU2_TR(0x6fc235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc238:{NFSU2_TR(0x6fc238);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc23b:{NFSU2_TR(0x6fc23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc23e:{NFSU2_TR(0x6fc23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc241:{NFSU2_TR(0x6fc241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc244:{NFSU2_TR(0x6fc244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc245:{NFSU2_TR(0x6fc245);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc248:{NFSU2_TR(0x6fc248);
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
B6fc24a:{NFSU2_TR(0x6fc24a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc24d:{NFSU2_TR(0x6fc24d);
u8 U[4];
w4(U+0,u32(0x4d433032ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6fc253:{NFSU2_TR(0x6fc253);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc254:{NFSU2_TR(0x6fc254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc255:{NFSU2_TR(0x6fc255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc256:{NFSU2_TR(0x6fc256);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc259:L6fc259:{c.instructions+=5;NFSU2_TR(0x6fc259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6fc25c:{NFSU2_TR(0x6fc25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc260:{NFSU2_TR(0x6fc260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc267:{NFSU2_TR(0x6fc267);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6fc26a:{NFSU2_TR(0x6fc26a);
TAIL_STATIC(0x495a00u,495);
}
B6fc26f:L6fc26f:{c.instructions+=7;NFSU2_TR(0x6fc26f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc270:{NFSU2_TR(0x6fc270);
__builtin_memmove((R+20),(R+16),4);
}
B6fc272:{NFSU2_TR(0x6fc272);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc273:{NFSU2_TR(0x6fc273);
__builtin_memmove((R+24),(R+4),4);
}
B6fc275:{NFSU2_TR(0x6fc275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc279:{NFSU2_TR(0x6fc279);
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
B6fc27d:{NFSU2_TR(0x6fc27d);
if(r1(R+518)){{goto L6fc2aa;}}
}
B6fc27f:L6fc27f:{c.instructions+=1;NFSU2_TR(0x6fc27f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc280:L6fc280:{c.instructions+=9;NFSU2_TR(0x6fc280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fc283:{NFSU2_TR(0x6fc283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc286:{NFSU2_TR(0x6fc286);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6fc28b:{NFSU2_TR(0x6fc28b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc28e:{NFSU2_TR(0x6fc28e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc290:{NFSU2_TR(0x6fc290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc293:{NFSU2_TR(0x6fc293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc294:{NFSU2_TR(0x6fc294);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6fc298:{NFSU2_TR(0x6fc298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc29dull));
TAIL_STATIC(0x6fdd62u,6fd);
}
B6fc29d:L6fc29d:{c.instructions+=5;NFSU2_TR(0x6fc29d);
u8 U[55];
w4(U+5,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+47,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+9),gp(u32(r4(U+5))),4);
__builtin_memmove((U+51),(U+9),4);
__builtin_memmove((U+9),gp(u32(r4(U+5))),4);
w4(U+9,sar<u32>(r4(U+9),u64(r4(U+47))));
s4(u32(r4(U+5)),r4(U+9));
w1(U+32,u8((r4(U+47))==(u32(0x0ull))));
w4(U+33,u32(u32(r4(U+47))-u32(u32(0x1ull))));
w4(U+37,sar<u32>(r4(U+51),u64(r4(U+33))));
w4(U+41,u32(u32(r4(U+37))&u32(u32(0x1ull))));
w1(U+45,u8((r4(U+41))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+32),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+32))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+46,u8((r4(U+47))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+46),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+46))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+13,u8((r4(U+47))!=(u32(0x0ull))));
__builtin_memmove((U+9),gp(u32(r4(U+5))),4);
w1(U+14,u8(s32(r4(U+9))<s32(u32(0x0ull))));
w1(U+15,u8(!(r1(U+13))));
w1(U+16,u8(u32(r1(U+15))&u32(r1(R+519))));
w1(U+17,u8(u32(r1(U+13))&u32(r1(U+14))));
w1(R+519,u8(u32(r1(U+16))|u32(r1(U+17))));
__builtin_memmove((U+9),gp(u32(r4(U+5))),4);
w1(U+18,u8((r4(U+9))==(u32(0x0ull))));
w1(U+19,u8(!(r1(U+13))));
w1(U+20,u8(u32(r1(U+19))&u32(r1(R+518))));
w1(U+21,u8(u32(r1(U+13))&u32(r1(U+18))));
w1(R+518,u8(u32(r1(U+20))|u32(r1(U+21))));
__builtin_memmove((U+9),gp(u32(r4(U+5))),4);
w4(U+22,u32(u32(r4(U+9))&u32(u32(0xffull))));
w1(U+26,u8(__builtin_popcountll(u64(r4(U+22)))));
w1(U+27,u8(u32(r1(U+26))&u32(u8(0x1ull))));
w1(U+28,u8((r1(U+27))==(u8(0x0ull))));
w1(U+29,u8(!(r1(U+13))));
w1(U+30,u8(u32(r1(U+29))&u32(r1(R+514))));
w1(U+31,u8(u32(r1(U+13))&u32(r1(U+28))));
w1(R+514,u8(u32(r1(U+30))|u32(r1(U+31))));
}
B6fc2a1:{NFSU2_TR(0x6fc2a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc2a2:{NFSU2_TR(0x6fc2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc2a3:{NFSU2_TR(0x6fc2a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6fc2a7:{NFSU2_TR(0x6fc2a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc280u);}goto L6fc280;}}
}
B6fc2a9:L6fc2a9:{c.instructions+=1;NFSU2_TR(0x6fc2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc2aa:L6fc2aa:{c.instructions+=3;NFSU2_TR(0x6fc2aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc2ab:{NFSU2_TR(0x6fc2ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc2ac:{NFSU2_TR(0x6fc2ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc2af:L6fc2af:{c.instructions+=7;NFSU2_TR(0x6fc2af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2b0:{NFSU2_TR(0x6fc2b0);
__builtin_memmove((R+20),(R+16),4);
}
B6fc2b2:{NFSU2_TR(0x6fc2b2);
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
B6fc2b6:{NFSU2_TR(0x6fc2b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2b7:{NFSU2_TR(0x6fc2b7);
__builtin_memmove((R+24),(R+4),4);
}
B6fc2b9:{NFSU2_TR(0x6fc2b9);
u8 U[4];
w4(U+0,u32(0x7c32e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6fc2bf:{NFSU2_TR(0x6fc2bf);
if(r1(R+518)){{goto L6fc2c8;}}
}
B6fc2c1:L6fc2c1:{c.instructions+=2;NFSU2_TR(0x6fc2c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2c2:{NFSU2_TR(0x6fc2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc2c7ull));
TAIL_STATIC(0x575630u,575);
}
B6fc2c7:L6fc2c7:{c.instructions+=1;NFSU2_TR(0x6fc2c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc2c8:L6fc2c8:{c.instructions+=4;NFSU2_TR(0x6fc2c8);
__builtin_memmove((R+0),(R+24),4);
}
B6fc2ca:{NFSU2_TR(0x6fc2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc2cb:{NFSU2_TR(0x6fc2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc2cc:{NFSU2_TR(0x6fc2cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc2cf:L6fc2cf:{c.instructions+=6;NFSU2_TR(0x6fc2cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2d0:{NFSU2_TR(0x6fc2d0);
__builtin_memmove((R+20),(R+16),4);
}
B6fc2d2:{NFSU2_TR(0x6fc2d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc2d5:{NFSU2_TR(0x6fc2d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2d6:{NFSU2_TR(0x6fc2d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc2d7:{NFSU2_TR(0x6fc2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc2dcull));
TAIL_STATIC(0x75fa2eu,75f);
}
B6fc2dc:L6fc2dc:{c.instructions+=16;NFSU2_TR(0x6fc2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc2df:{NFSU2_TR(0x6fc2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fc2e2:{NFSU2_TR(0x6fc2e2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x64ull))));
}
B6fc2e5:{NFSU2_TR(0x6fc2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc2e6:{NFSU2_TR(0x6fc2e6);
__builtin_memmove((R+4),(R+8),4);
}
B6fc2e8:{NFSU2_TR(0x6fc2e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x16dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6fc2ee:{NFSU2_TR(0x6fc2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6fc2f1:{NFSU2_TR(0x6fc2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6fc2f4:{NFSU2_TR(0x6fc2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6fc2f7:{NFSU2_TR(0x6fc2f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6fc2fa:{NFSU2_TR(0x6fc2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6fc2fd:{NFSU2_TR(0x6fc2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc2fe:{NFSU2_TR(0x6fc2fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6fc301:{NFSU2_TR(0x6fc301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B6fc303:{NFSU2_TR(0x6fc303);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fc306:{NFSU2_TR(0x6fc306);
if(r1(R+518)){{goto L6fc310;}}
}
B6fc308:L6fc308:{c.instructions+=4;NFSU2_TR(0x6fc308);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6fc30b:{NFSU2_TR(0x6fc30b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fc30c:{NFSU2_TR(0x6fc30c);
__builtin_memmove((R+0),(R+8),4);
}
B6fc30e:{NFSU2_TR(0x6fc30e);
{goto L6fc31d;}
}
B6fc310:L6fc310:{c.instructions+=3;NFSU2_TR(0x6fc310);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6fc313:{NFSU2_TR(0x6fc313);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fc317:{NFSU2_TR(0x6fc317);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6fc31a;}}
}
B6fc319:L6fc319:{c.instructions+=1;NFSU2_TR(0x6fc319);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6fc31a:L6fc31a:{c.instructions+=1;NFSU2_TR(0x6fc31a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc31d:L6fc31d:{c.instructions+=4;NFSU2_TR(0x6fc31d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x15180ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6fc323:{NFSU2_TR(0x6fc323);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fc325:{NFSU2_TR(0x6fc325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc326:{NFSU2_TR(0x6fc326);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc327:L6fc327:{c.instructions+=8;NFSU2_TR(0x6fc327);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc328:{NFSU2_TR(0x6fc328);
__builtin_memmove((R+20),(R+16),4);
}
B6fc32a:{NFSU2_TR(0x6fc32a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc32b:{NFSU2_TR(0x6fc32b);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc32d:{NFSU2_TR(0x6fc32d);
w4(R+8,u32(0x8ad928ull));
}
B6fc332:{NFSU2_TR(0x6fc332);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc334:{NFSU2_TR(0x6fc334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc335:{NFSU2_TR(0x6fc335);
__builtin_memmove((R+28),(R+8),4);
}
B6fc337:L6fc337:{c.instructions+=1;NFSU2_TR(0x6fc337);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc339;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc337u);}goto L6fc337;}
}
B6fc339:L6fc339:{c.instructions+=5;NFSU2_TR(0x6fc339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc33b:{NFSU2_TR(0x6fc33b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fc33d:{NFSU2_TR(0x6fc33d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6fc33f:{NFSU2_TR(0x6fc33f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc340:{NFSU2_TR(0x6fc340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc3a9;}}
}
B6fc342:L6fc342:{c.instructions+=2;NFSU2_TR(0x6fc342);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc345:{NFSU2_TR(0x6fc345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc34aull));
TAIL_STATIC(0x75fc32u,75f);
}
B6fc34a:L6fc34a:{c.instructions+=5;NFSU2_TR(0x6fc34a);
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
B6fc34d:{NFSU2_TR(0x6fc34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc34e:{NFSU2_TR(0x6fc34e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc34f:{NFSU2_TR(0x6fc34f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fc351:{NFSU2_TR(0x6fc351);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc359;}}
}
B6fc353:L6fc353:{c.instructions+=2;NFSU2_TR(0x6fc353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc354:{NFSU2_TR(0x6fc354);
{goto L6fc41c;}
}
B6fc359:L6fc359:{c.instructions+=9;NFSU2_TR(0x6fc359);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc35c:{NFSU2_TR(0x6fc35c);
__builtin_memmove((R+0),gp(0x8ad928),4);
}
B6fc361:{NFSU2_TR(0x6fc361);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fc364:{NFSU2_TR(0x6fc364);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6fc367:{NFSU2_TR(0x6fc367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc36a:{NFSU2_TR(0x6fc36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ad93cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc371:{NFSU2_TR(0x6fc371);
__builtin_memmove((R+0),gp(0x8ad938),4);
}
B6fc376:{NFSU2_TR(0x6fc376);
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
B6fc378:{NFSU2_TR(0x6fc378);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fc39d;}}
}
B6fc37a:L6fc37a:{c.instructions+=4;NFSU2_TR(0x6fc37a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc37d:{NFSU2_TR(0x6fc37d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fc37f:{NFSU2_TR(0x6fc37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc382:{NFSU2_TR(0x6fc382);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fc388;}}
}
B6fc384:L6fc384:{c.instructions+=2;NFSU2_TR(0x6fc384);
__builtin_memmove((R+0),(R+4),4);
}
B6fc386:{NFSU2_TR(0x6fc386);
{goto L6fc38a;}
}
B6fc388:L6fc388:{c.instructions+=1;NFSU2_TR(0x6fc388);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc38a:L6fc38a:{c.instructions+=3;NFSU2_TR(0x6fc38a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6fc38c:{NFSU2_TR(0x6fc38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc38f:{NFSU2_TR(0x6fc38f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6fc395;}}
}
B6fc391:L6fc391:{c.instructions+=2;NFSU2_TR(0x6fc391);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc393:{NFSU2_TR(0x6fc393);
{goto L6fc398;}
}
B6fc395:L6fc395:{c.instructions+=2;NFSU2_TR(0x6fc395);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc397:{NFSU2_TR(0x6fc397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc398:L6fc398:{c.instructions+=2;NFSU2_TR(0x6fc398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc39b:{NFSU2_TR(0x6fc39b);
{goto L6fc3eb;}
}
B6fc39d:L6fc39d:{c.instructions+=2;NFSU2_TR(0x6fc39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3a4:{NFSU2_TR(0x6fc3a4);
{goto L6fc42b;}
}
B6fc3a9:L6fc3a9:{c.instructions+=2;NFSU2_TR(0x6fc3a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc3aa:{NFSU2_TR(0x6fc3aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc3afull));
TAIL_STATIC(0x75fd15u,75f);
}
B6fc3af:L6fc3af:{c.instructions+=4;NFSU2_TR(0x6fc3af);
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
B6fc3b1:{NFSU2_TR(0x6fc3b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc3b2:{NFSU2_TR(0x6fc3b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc3b3:{NFSU2_TR(0x6fc3b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc41a;}}
}
B6fc3b5:L6fc3b5:{c.instructions+=8;NFSU2_TR(0x6fc3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3b8:{NFSU2_TR(0x6fc3b8);
__builtin_memmove((R+0),gp(0x8ad928),4);
}
B6fc3bd:{NFSU2_TR(0x6fc3bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fc3c0:{NFSU2_TR(0x6fc3c0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6fc3c3:{NFSU2_TR(0x6fc3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3c6:{NFSU2_TR(0x6fc3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ad93cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3cd:{NFSU2_TR(0x6fc3cd);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ad938),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fc3d3:{NFSU2_TR(0x6fc3d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc39du);}goto L6fc39d;}}
}
B6fc3d5:L6fc3d5:{c.instructions+=6;NFSU2_TR(0x6fc3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3d8:{NFSU2_TR(0x6fc3d8);
__builtin_memmove((R+0),gp(0x8ad938),4);
}
B6fc3dd:{NFSU2_TR(0x6fc3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3e0:{NFSU2_TR(0x6fc3e0);
__builtin_memmove((R+0),gp(0x8ad938),4);
}
B6fc3e5:{NFSU2_TR(0x6fc3e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
}
B6fc3e8:{NFSU2_TR(0x6fc3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3eb:L6fc3eb:{c.instructions+=2;NFSU2_TR(0x6fc3eb);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad92c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc3f1:{NFSU2_TR(0x6fc3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc3f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc2cfu);}goto L6fc2cf;}
}
B6fc3f6:L6fc3f6:{c.instructions+=3;NFSU2_TR(0x6fc3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc3f9:{NFSU2_TR(0x6fc3f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad934),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc3ff:{NFSU2_TR(0x6fc3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc404ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc2cfu);}goto L6fc2cf;}
}
B6fc404:L6fc404:{c.instructions+=3;NFSU2_TR(0x6fc404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc407:{NFSU2_TR(0x6fc407);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ad930),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc40d:{NFSU2_TR(0x6fc40d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc412ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc2cfu);}goto L6fc2cf;}
}
B6fc412:L6fc412:{c.instructions+=3;NFSU2_TR(0x6fc412);
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
B6fc415:{NFSU2_TR(0x6fc415);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc418:{NFSU2_TR(0x6fc418);
{goto L6fc42b;}
}
B6fc41a:L6fc41a:{c.instructions+=1;NFSU2_TR(0x6fc41a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fc41c:L6fc41c:{c.instructions+=2;NFSU2_TR(0x6fc41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc423:{NFSU2_TR(0x6fc423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc428ull));
TAIL_STATIC(0x75fbaeu,75f);
}
B6fc428:L6fc428:{c.instructions+=2;NFSU2_TR(0x6fc428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc429:{NFSU2_TR(0x6fc429);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fc42b:L6fc42b:{c.instructions+=3;NFSU2_TR(0x6fc42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc42c:{NFSU2_TR(0x6fc42c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc42d:{NFSU2_TR(0x6fc42d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc42e:L6fc42e:{c.instructions+=6;NFSU2_TR(0x6fc42e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc42f:{NFSU2_TR(0x6fc42f);
__builtin_memmove((R+20),(R+16),4);
}
B6fc431:{NFSU2_TR(0x6fc431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6fc434:{NFSU2_TR(0x6fc434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc437:{NFSU2_TR(0x6fc437);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc43a:{NFSU2_TR(0x6fc43a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6fc43c:L6fc43c:{c.instructions+=5;NFSU2_TR(0x6fc43c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6fc43e:{NFSU2_TR(0x6fc43e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6fc441:{NFSU2_TR(0x6fc441);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fc442:{NFSU2_TR(0x6fc442);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fc444:{NFSU2_TR(0x6fc444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc43cu);}goto L6fc43c;}}
}
B6fc446:L6fc446:{c.instructions+=4;NFSU2_TR(0x6fc446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc449:{NFSU2_TR(0x6fc449);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc44a:{NFSU2_TR(0x6fc44a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6fc44c:{NFSU2_TR(0x6fc44c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc44f:L6fc44f:{c.instructions+=4;NFSU2_TR(0x6fc44f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fc451:{NFSU2_TR(0x6fc451);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6fc452:{NFSU2_TR(0x6fc452);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fc454:{NFSU2_TR(0x6fc454);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc44fu);}goto L6fc44f;}}
}
B6fc456:L6fc456:{c.instructions+=1;NFSU2_TR(0x6fc456);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6fc458:L6fc458:{c.instructions+=2;NFSU2_TR(0x6fc458);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fc45a:{NFSU2_TR(0x6fc45a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6fc476;}}
}
B6fc45c:L6fc45c:{c.instructions+=4;NFSU2_TR(0x6fc45c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6fc460:{NFSU2_TR(0x6fc460);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6fc462:{NFSU2_TR(0x6fc462);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fc465:{NFSU2_TR(0x6fc465);
if(r1(R+518)){{goto L6fc46c;}}
}
B6fc467:L6fc467:{c.instructions+=2;NFSU2_TR(0x6fc467);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6fc46a:{NFSU2_TR(0x6fc46a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc471;}}
}
B6fc46c:L6fc46c:{c.instructions+=2;NFSU2_TR(0x6fc46c);
__builtin_memmove((R+24),(R+4),4);
}
B6fc46e:{NFSU2_TR(0x6fc46e);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B6fc471:L6fc471:{c.instructions+=3;NFSU2_TR(0x6fc471);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6fc472:{NFSU2_TR(0x6fc472);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fc474:{NFSU2_TR(0x6fc474);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc458u);}goto L6fc458;}}
}
B6fc476:L6fc476:{c.instructions+=5;NFSU2_TR(0x6fc476);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc478:{NFSU2_TR(0x6fc478);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc47b:{NFSU2_TR(0x6fc47b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc47c:{NFSU2_TR(0x6fc47c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc47f:{NFSU2_TR(0x6fc47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc484ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc484:L6fc484:{c.instructions+=5;NFSU2_TR(0x6fc484);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc486:{NFSU2_TR(0x6fc486);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6fc487:{NFSU2_TR(0x6fc487);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc488:{NFSU2_TR(0x6fc488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc48b:{NFSU2_TR(0x6fc48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc490ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc490:L6fc490:{c.instructions+=4;NFSU2_TR(0x6fc490);
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
B6fc493:{NFSU2_TR(0x6fc493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc494:{NFSU2_TR(0x6fc494);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc495:{NFSU2_TR(0x6fc495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc496:L6fc496:{c.instructions+=6;NFSU2_TR(0x6fc496);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc497:{NFSU2_TR(0x6fc497);
__builtin_memmove((R+20),(R+16),4);
}
B6fc499:{NFSU2_TR(0x6fc499);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc49a:{NFSU2_TR(0x6fc49a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc49d:{NFSU2_TR(0x6fc49d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fc49f:{NFSU2_TR(0x6fc49f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc4a4ull));
TAIL_STATIC(0x75fdf3u,75f);
}
B6fc4a4:L6fc4a4:{c.instructions+=3;NFSU2_TR(0x6fc4a4);
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
B6fc4a6:{NFSU2_TR(0x6fc4a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc4a7:{NFSU2_TR(0x6fc4a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc4ab;}}
}
B6fc4a9:L6fc4a9:{c.instructions+=1;NFSU2_TR(0x6fc4a9);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+12),u8(0x1ull)));
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6fc4ab:L6fc4ab:{c.instructions+=4;NFSU2_TR(0x6fc4ab);
__builtin_memmove((R+0),(R+12),1);
}
B6fc4ad:{NFSU2_TR(0x6fc4ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc4ae:{NFSU2_TR(0x6fc4ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc4af:{NFSU2_TR(0x6fc4af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc4b0:L6fc4b0:{c.instructions+=6;NFSU2_TR(0x6fc4b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4b1:{NFSU2_TR(0x6fc4b1);
__builtin_memmove((R+24),(R+4),4);
}
B6fc4b3:{NFSU2_TR(0x6fc4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc4b6:{NFSU2_TR(0x6fc4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc4b8:{NFSU2_TR(0x6fc4b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4b9:{NFSU2_TR(0x6fc4b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc4bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc4bc:L6fc4bc:{c.instructions+=6;NFSU2_TR(0x6fc4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc4c0:{NFSU2_TR(0x6fc4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc4c4:{NFSU2_TR(0x6fc4c4);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4c6:{NFSU2_TR(0x6fc4c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc4c7:{NFSU2_TR(0x6fc4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc4ca:{NFSU2_TR(0x6fc4ca);
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
B6fc4cc:L6fc4cc:{c.instructions+=1;NFSU2_TR(0x6fc4cc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc4ce;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc4ccu);}goto L6fc4cc;}
}
B6fc4ce:L6fc4ce:{c.instructions+=3;NFSU2_TR(0x6fc4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc4cf:{NFSU2_TR(0x6fc4cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc4d0:{NFSU2_TR(0x6fc4d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc4d1:L6fc4d1:{c.instructions+=4;NFSU2_TR(0x6fc4d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4d2:{NFSU2_TR(0x6fc4d2);
__builtin_memmove((R+24),(R+4),4);
}
B6fc4d4:{NFSU2_TR(0x6fc4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc4d7:{NFSU2_TR(0x6fc4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc4dcull));
TAIL_STATIC(0x6fdfb9u,6fd);
}
B6fc4dc:L6fc4dc:{c.instructions+=3;NFSU2_TR(0x6fc4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc4e3:{NFSU2_TR(0x6fc4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc4e4:{NFSU2_TR(0x6fc4e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc4e7:L6fc4e7:{c.instructions+=13;NFSU2_TR(0x6fc4e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4e8:{NFSU2_TR(0x6fc4e8);
__builtin_memmove((R+20),(R+16),4);
}
B6fc4ea:{NFSU2_TR(0x6fc4ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4eb:{NFSU2_TR(0x6fc4eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4ec:{NFSU2_TR(0x6fc4ec);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4ee:{NFSU2_TR(0x6fc4ee);
__builtin_memmove((R+24),(R+4),4);
}
B6fc4f0:{NFSU2_TR(0x6fc4f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc4f1:{NFSU2_TR(0x6fc4f1);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc4f3:{NFSU2_TR(0x6fc4f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc4f6:{NFSU2_TR(0x6fc4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc4fc:{NFSU2_TR(0x6fc4fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc4fe:{NFSU2_TR(0x6fc4fe);
__builtin_memmove((R+28),(R+8),4);
}
B6fc500:{NFSU2_TR(0x6fc500);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc501:L6fc501:{c.instructions+=1;NFSU2_TR(0x6fc501);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc503;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc501u);}goto L6fc501;}
}
B6fc503:L6fc503:{c.instructions+=1;NFSU2_TR(0x6fc503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc508ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc508:L6fc508:{c.instructions+=12;NFSU2_TR(0x6fc508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc50f:{NFSU2_TR(0x6fc50f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fc512:{NFSU2_TR(0x6fc512);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
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
B6fc519:{NFSU2_TR(0x6fc519);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc51b:{NFSU2_TR(0x6fc51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc51c:{NFSU2_TR(0x6fc51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc51d:{NFSU2_TR(0x6fc51d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc523:{NFSU2_TR(0x6fc523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc526:{NFSU2_TR(0x6fc526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc52d:{NFSU2_TR(0x6fc52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc52e:{NFSU2_TR(0x6fc52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc52f:{NFSU2_TR(0x6fc52f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc532:L6fc532:{c.instructions+=15;NFSU2_TR(0x6fc532);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc533:{NFSU2_TR(0x6fc533);
__builtin_memmove((R+20),(R+16),4);
}
B6fc535:{NFSU2_TR(0x6fc535);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc536:{NFSU2_TR(0x6fc536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc537:{NFSU2_TR(0x6fc537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc538:{NFSU2_TR(0x6fc538);
__builtin_memmove((R+24),(R+4),4);
}
B6fc53a:{NFSU2_TR(0x6fc53a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc53c:{NFSU2_TR(0x6fc53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc53d:{NFSU2_TR(0x6fc53d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc543:{NFSU2_TR(0x6fc543);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6fc545:{NFSU2_TR(0x6fc545);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc547:{NFSU2_TR(0x6fc547);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc549:{NFSU2_TR(0x6fc549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc54f:{NFSU2_TR(0x6fc54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc555:{NFSU2_TR(0x6fc555);
__builtin_memmove((R+28),(R+8),4);
}
B6fc557:L6fc557:{c.instructions+=1;NFSU2_TR(0x6fc557);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc559;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc557u);}goto L6fc557;}
}
B6fc559:L6fc559:{c.instructions+=5;NFSU2_TR(0x6fc559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc55a:{NFSU2_TR(0x6fc55a);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc55c:{NFSU2_TR(0x6fc55c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc55f:{NFSU2_TR(0x6fc55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc565:{NFSU2_TR(0x6fc565);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc566:L6fc566:{c.instructions+=1;NFSU2_TR(0x6fc566);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc568;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc566u);}goto L6fc566;}
}
B6fc568:L6fc568:{c.instructions+=1;NFSU2_TR(0x6fc568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc56dull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc56d:L6fc56d:{c.instructions+=5;NFSU2_TR(0x6fc56d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc56f:{NFSU2_TR(0x6fc56f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc572:{NFSU2_TR(0x6fc572);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc578:{NFSU2_TR(0x6fc578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc579:{NFSU2_TR(0x6fc579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc57eull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc57e:L6fc57e:{c.instructions+=27;NFSU2_TR(0x6fc57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc581:{NFSU2_TR(0x6fc581);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fc586:{NFSU2_TR(0x6fc586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc589:{NFSU2_TR(0x6fc589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc58f:{NFSU2_TR(0x6fc58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc592:{NFSU2_TR(0x6fc592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc598:{NFSU2_TR(0x6fc598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc59e:{NFSU2_TR(0x6fc59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5a4:{NFSU2_TR(0x6fc5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5aa:{NFSU2_TR(0x6fc5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5b0:{NFSU2_TR(0x6fc5b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc5b2:{NFSU2_TR(0x6fc5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc5b8:{NFSU2_TR(0x6fc5b8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc5b9:{NFSU2_TR(0x6fc5b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc5bf:{NFSU2_TR(0x6fc5bf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc5c0:{NFSU2_TR(0x6fc5c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6fc5c3:{NFSU2_TR(0x6fc5c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc5c9:{NFSU2_TR(0x6fc5c9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc5ca:{NFSU2_TR(0x6fc5ca);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc5d1:{NFSU2_TR(0x6fc5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc5d2:{NFSU2_TR(0x6fc5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5dc:{NFSU2_TR(0x6fc5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5e3:{NFSU2_TR(0x6fc5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc5ea:{NFSU2_TR(0x6fc5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc5eb:{NFSU2_TR(0x6fc5eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc5ec:{NFSU2_TR(0x6fc5ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc5ed:{NFSU2_TR(0x6fc5ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc5f0:L6fc5f0:{c.instructions+=16;NFSU2_TR(0x6fc5f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc5f1:{NFSU2_TR(0x6fc5f1);
__builtin_memmove((R+20),(R+16),4);
}
B6fc5f3:{NFSU2_TR(0x6fc5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc5f6:{NFSU2_TR(0x6fc5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc5f9:{NFSU2_TR(0x6fc5f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc5fa:{NFSU2_TR(0x6fc5fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc5fb:{NFSU2_TR(0x6fc5fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc5fc:{NFSU2_TR(0x6fc5fc);
__builtin_memmove((R+24),(R+4),4);
}
B6fc5fe:{NFSU2_TR(0x6fc5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc604:{NFSU2_TR(0x6fc604);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc607:{NFSU2_TR(0x6fc607);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc609:{NFSU2_TR(0x6fc609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc60f:{NFSU2_TR(0x6fc60f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc610:{NFSU2_TR(0x6fc610);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc616:{NFSU2_TR(0x6fc616);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc618:{NFSU2_TR(0x6fc618);
__builtin_memmove((R+28),(R+12),4);
}
B6fc61a:L6fc61a:{c.instructions+=1;NFSU2_TR(0x6fc61a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc61c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc61au);}goto L6fc61a;}
}
B6fc61c:L6fc61c:{c.instructions+=3;NFSU2_TR(0x6fc61c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc61e:{NFSU2_TR(0x6fc61e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc624:{NFSU2_TR(0x6fc624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc625:L6fc625:{c.instructions+=1;NFSU2_TR(0x6fc625);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc627;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc625u);}goto L6fc625;}
}
B6fc627:L6fc627:{c.instructions+=3;NFSU2_TR(0x6fc627);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fc629:{NFSU2_TR(0x6fc629);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fc62c:{NFSU2_TR(0x6fc62c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc64f;}}
}
B6fc62e:L6fc62e:{c.instructions+=4;NFSU2_TR(0x6fc62e);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc630:{NFSU2_TR(0x6fc630);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc633:{NFSU2_TR(0x6fc633);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc634:{NFSU2_TR(0x6fc634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc639ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc639:L6fc639:{c.instructions+=5;NFSU2_TR(0x6fc639);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc63b:{NFSU2_TR(0x6fc63b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc63e:{NFSU2_TR(0x6fc63e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc644:{NFSU2_TR(0x6fc644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc645:{NFSU2_TR(0x6fc645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc64aull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc64a:L6fc64a:{c.instructions+=2;NFSU2_TR(0x6fc64a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6fc64d:{NFSU2_TR(0x6fc64d);
{goto L6fc662;}
}
B6fc64f:L6fc64f:{c.instructions+=5;NFSU2_TR(0x6fc64f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc655:{NFSU2_TR(0x6fc655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc656:{NFSU2_TR(0x6fc656);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc657:{NFSU2_TR(0x6fc657);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc65a:{NFSU2_TR(0x6fc65a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc65full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc42eu);}goto L6fc42e;}
}
B6fc65f:L6fc65f:{c.instructions+=1;NFSU2_TR(0x6fc65f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fc662:L6fc662:{c.instructions+=26;NFSU2_TR(0x6fc662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc665:{NFSU2_TR(0x6fc665);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fc66a:{NFSU2_TR(0x6fc66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc66d:{NFSU2_TR(0x6fc66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc673:{NFSU2_TR(0x6fc673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc676:{NFSU2_TR(0x6fc676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc67c:{NFSU2_TR(0x6fc67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc682:{NFSU2_TR(0x6fc682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc688:{NFSU2_TR(0x6fc688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc68e:{NFSU2_TR(0x6fc68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc694:{NFSU2_TR(0x6fc694);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc696:{NFSU2_TR(0x6fc696);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc69c:{NFSU2_TR(0x6fc69c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc69d:{NFSU2_TR(0x6fc69d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc6a3:{NFSU2_TR(0x6fc6a3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc6a4:{NFSU2_TR(0x6fc6a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc6aa:{NFSU2_TR(0x6fc6aa);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc6ab:{NFSU2_TR(0x6fc6ab);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc6b2:{NFSU2_TR(0x6fc6b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc6b3:{NFSU2_TR(0x6fc6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc6bd:{NFSU2_TR(0x6fc6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc6c4:{NFSU2_TR(0x6fc6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc6cb:{NFSU2_TR(0x6fc6cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc6cc:{NFSU2_TR(0x6fc6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc6cd:{NFSU2_TR(0x6fc6cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc6ce:{NFSU2_TR(0x6fc6ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc6d1:L6fc6d1:{c.instructions+=16;NFSU2_TR(0x6fc6d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc6d2:{NFSU2_TR(0x6fc6d2);
__builtin_memmove((R+20),(R+16),4);
}
B6fc6d4:{NFSU2_TR(0x6fc6d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc6d5:{NFSU2_TR(0x6fc6d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc6d6:{NFSU2_TR(0x6fc6d6);
__builtin_memmove((R+24),(R+4),4);
}
B6fc6d8:{NFSU2_TR(0x6fc6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc6df:{NFSU2_TR(0x6fc6df);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc6e1:{NFSU2_TR(0x6fc6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc6e2:{NFSU2_TR(0x6fc6e2);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc6e4:{NFSU2_TR(0x6fc6e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc6e7:{NFSU2_TR(0x6fc6e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc6ed:{NFSU2_TR(0x6fc6ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc6ef:{NFSU2_TR(0x6fc6ef);
__builtin_memmove((R+28),(R+8),4);
}
B6fc6f1:{NFSU2_TR(0x6fc6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc6fb:{NFSU2_TR(0x6fc6fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc702:{NFSU2_TR(0x6fc702);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc703:L6fc703:{c.instructions+=1;NFSU2_TR(0x6fc703);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc705;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc703u);}goto L6fc703;}
}
B6fc705:L6fc705:{c.instructions+=1;NFSU2_TR(0x6fc705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc70aull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc70a:L6fc70a:{c.instructions+=11;NFSU2_TR(0x6fc70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc70d:{NFSU2_TR(0x6fc70d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fc710:{NFSU2_TR(0x6fc710);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc717:{NFSU2_TR(0x6fc717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc718:{NFSU2_TR(0x6fc718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc722:{NFSU2_TR(0x6fc722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc729:{NFSU2_TR(0x6fc729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc730:{NFSU2_TR(0x6fc730);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fc735:{NFSU2_TR(0x6fc735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc736:{NFSU2_TR(0x6fc736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc737:{NFSU2_TR(0x6fc737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc73a:L6fc73a:{c.instructions+=18;NFSU2_TR(0x6fc73a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc73b:{NFSU2_TR(0x6fc73b);
__builtin_memmove((R+20),(R+16),4);
}
B6fc73d:{NFSU2_TR(0x6fc73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc740:{NFSU2_TR(0x6fc740);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc741:{NFSU2_TR(0x6fc741);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc742:{NFSU2_TR(0x6fc742);
__builtin_memmove((R+24),(R+4),4);
}
B6fc744:{NFSU2_TR(0x6fc744);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc745:{NFSU2_TR(0x6fc745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc74b:{NFSU2_TR(0x6fc74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc74e:{NFSU2_TR(0x6fc74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc754:{NFSU2_TR(0x6fc754);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc756:{NFSU2_TR(0x6fc756);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc75c:{NFSU2_TR(0x6fc75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6fc75f:{NFSU2_TR(0x6fc75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc765:{NFSU2_TR(0x6fc765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc766:{NFSU2_TR(0x6fc766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc768:{NFSU2_TR(0x6fc768);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc76f:{NFSU2_TR(0x6fc76f);
__builtin_memmove((R+28),(R+12),4);
}
B6fc771:L6fc771:{c.instructions+=1;NFSU2_TR(0x6fc771);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc773;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc771u);}goto L6fc771;}
}
B6fc773:L6fc773:{c.instructions+=6;NFSU2_TR(0x6fc773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc775:{NFSU2_TR(0x6fc775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc77b:{NFSU2_TR(0x6fc77b);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc77d:{NFSU2_TR(0x6fc77d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6fc780:{NFSU2_TR(0x6fc780);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc781:{NFSU2_TR(0x6fc781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc786ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc786:L6fc786:{c.instructions+=12;NFSU2_TR(0x6fc786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc789:{NFSU2_TR(0x6fc789);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fc78c:{NFSU2_TR(0x6fc78c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc793:{NFSU2_TR(0x6fc793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc794:{NFSU2_TR(0x6fc794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc79e:{NFSU2_TR(0x6fc79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc7a5:{NFSU2_TR(0x6fc7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc7ac:{NFSU2_TR(0x6fc7ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc7ad:{NFSU2_TR(0x6fc7ad);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fc7b2:{NFSU2_TR(0x6fc7b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc7b3:{NFSU2_TR(0x6fc7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc7b4:{NFSU2_TR(0x6fc7b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc7b7:L6fc7b7:{c.instructions+=13;NFSU2_TR(0x6fc7b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7b8:{NFSU2_TR(0x6fc7b8);
__builtin_memmove((R+20),(R+16),4);
}
B6fc7ba:{NFSU2_TR(0x6fc7ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7bb:{NFSU2_TR(0x6fc7bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7bc:{NFSU2_TR(0x6fc7bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7bd:{NFSU2_TR(0x6fc7bd);
__builtin_memmove((R+24),(R+4),4);
}
B6fc7bf:{NFSU2_TR(0x6fc7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc7c6:{NFSU2_TR(0x6fc7c6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7c8:{NFSU2_TR(0x6fc7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc7c9:{NFSU2_TR(0x6fc7c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fc7cf:{NFSU2_TR(0x6fc7cf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7d1:{NFSU2_TR(0x6fc7d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc7d3:{NFSU2_TR(0x6fc7d3);
__builtin_memmove((R+28),(R+8),4);
}
B6fc7d5:L6fc7d5:{c.instructions+=1;NFSU2_TR(0x6fc7d5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc7d7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc7d5u);}goto L6fc7d5;}
}
B6fc7d7:L6fc7d7:{c.instructions+=4;NFSU2_TR(0x6fc7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc7d8:{NFSU2_TR(0x6fc7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc7de:{NFSU2_TR(0x6fc7de);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7e0:{NFSU2_TR(0x6fc7e0);
__builtin_memmove((R+28),(R+12),4);
}
B6fc7e2:L6fc7e2:{c.instructions+=1;NFSU2_TR(0x6fc7e2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc7e4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc7e2u);}goto L6fc7e2;}
}
B6fc7e4:L6fc7e4:{c.instructions+=5;NFSU2_TR(0x6fc7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc7e5:{NFSU2_TR(0x6fc7e5);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7e7:{NFSU2_TR(0x6fc7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc7ea:{NFSU2_TR(0x6fc7ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc7f0:{NFSU2_TR(0x6fc7f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7f1:L6fc7f1:{c.instructions+=1;NFSU2_TR(0x6fc7f1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc7f3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc7f1u);}goto L6fc7f1;}
}
B6fc7f3:L6fc7f3:{c.instructions+=1;NFSU2_TR(0x6fc7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc7f8ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc7f8:L6fc7f8:{c.instructions+=4;NFSU2_TR(0x6fc7f8);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7fa:{NFSU2_TR(0x6fc7fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc7fd:{NFSU2_TR(0x6fc7fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc7fe:{NFSU2_TR(0x6fc7fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc803ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc803:L6fc803:{c.instructions+=4;NFSU2_TR(0x6fc803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc806:{NFSU2_TR(0x6fc806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc808:{NFSU2_TR(0x6fc808);
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
B6fc80b:{NFSU2_TR(0x6fc80b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc80eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc80e:L6fc80e:{c.instructions+=10;NFSU2_TR(0x6fc80e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc815:{NFSU2_TR(0x6fc815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc816:{NFSU2_TR(0x6fc816);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc81d:{NFSU2_TR(0x6fc81d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc824:{NFSU2_TR(0x6fc824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc82e:{NFSU2_TR(0x6fc82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc835:{NFSU2_TR(0x6fc835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc836:{NFSU2_TR(0x6fc836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc837:{NFSU2_TR(0x6fc837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc838:{NFSU2_TR(0x6fc838);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc83b:L6fc83b:{c.instructions+=14;NFSU2_TR(0x6fc83b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc83c:{NFSU2_TR(0x6fc83c);
__builtin_memmove((R+20),(R+16),4);
}
B6fc83e:{NFSU2_TR(0x6fc83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6fc841:{NFSU2_TR(0x6fc841);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc844:{NFSU2_TR(0x6fc844);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc845:{NFSU2_TR(0x6fc845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc846:{NFSU2_TR(0x6fc846);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc847:{NFSU2_TR(0x6fc847);
__builtin_memmove((R+24),(R+4),4);
}
B6fc849:{NFSU2_TR(0x6fc849);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc84b:{NFSU2_TR(0x6fc84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc851:{NFSU2_TR(0x6fc851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc852:{NFSU2_TR(0x6fc852);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc854:{NFSU2_TR(0x6fc854);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc856:{NFSU2_TR(0x6fc856);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc85c:L6fc85c:{c.instructions+=1;NFSU2_TR(0x6fc85c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc85e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc85cu);}goto L6fc85c;}
}
B6fc85e:L6fc85e:{c.instructions+=3;NFSU2_TR(0x6fc85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc85f:{NFSU2_TR(0x6fc85f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc865:{NFSU2_TR(0x6fc865);
__builtin_memmove((R+28),(R+12),4);
}
B6fc867:L6fc867:{c.instructions+=1;NFSU2_TR(0x6fc867);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc869;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc867u);}goto L6fc867;}
}
B6fc869:L6fc869:{c.instructions+=3;NFSU2_TR(0x6fc869);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc86b:{NFSU2_TR(0x6fc86b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc86c:{NFSU2_TR(0x6fc86c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc872:L6fc872:{c.instructions+=1;NFSU2_TR(0x6fc872);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc874;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc872u);}goto L6fc872;}
}
B6fc874:L6fc874:{c.instructions+=3;NFSU2_TR(0x6fc874);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fc878:{NFSU2_TR(0x6fc878);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc87e:{NFSU2_TR(0x6fc87e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc89b;}}
}
B6fc880:L6fc880:{c.instructions+=4;NFSU2_TR(0x6fc880);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc882:{NFSU2_TR(0x6fc882);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc885:{NFSU2_TR(0x6fc885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc886:{NFSU2_TR(0x6fc886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc88bull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc88b:L6fc88b:{c.instructions+=4;NFSU2_TR(0x6fc88b);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc88d:{NFSU2_TR(0x6fc88d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc890:{NFSU2_TR(0x6fc890);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc891:{NFSU2_TR(0x6fc891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc896ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc896:L6fc896:{c.instructions+=2;NFSU2_TR(0x6fc896);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6fc899:{NFSU2_TR(0x6fc899);
{goto L6fc8a8;}
}
B6fc89b:L6fc89b:{c.instructions+=4;NFSU2_TR(0x6fc89b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc89c:{NFSU2_TR(0x6fc89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc89d:{NFSU2_TR(0x6fc89d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc8a0:{NFSU2_TR(0x6fc8a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc8a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc42eu);}goto L6fc42e;}
}
B6fc8a5:L6fc8a5:{c.instructions+=1;NFSU2_TR(0x6fc8a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fc8a8:L6fc8a8:{c.instructions+=7;NFSU2_TR(0x6fc8a8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc8aa:{NFSU2_TR(0x6fc8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc8ab:{NFSU2_TR(0x6fc8ab);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc8ad:{NFSU2_TR(0x6fc8ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc8b0:{NFSU2_TR(0x6fc8b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc8b2:{NFSU2_TR(0x6fc8b2);
__builtin_memmove((R+28),(R+12),4);
}
B6fc8b4:{NFSU2_TR(0x6fc8b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc8b5:L6fc8b5:{c.instructions+=1;NFSU2_TR(0x6fc8b5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fc8b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc8b5u);}goto L6fc8b5;}
}
B6fc8b7:L6fc8b7:{c.instructions+=1;NFSU2_TR(0x6fc8b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc8bcull));
TAIL_STATIC(0x75c840u,75c);
}
B6fc8bc:L6fc8bc:{c.instructions+=4;NFSU2_TR(0x6fc8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc8bf:{NFSU2_TR(0x6fc8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc8c1:{NFSU2_TR(0x6fc8c1);
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
B6fc8c4:{NFSU2_TR(0x6fc8c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc8c7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc8c7:L6fc8c7:{c.instructions+=10;NFSU2_TR(0x6fc8c7);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fc8ce:{NFSU2_TR(0x6fc8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc8cf:{NFSU2_TR(0x6fc8cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc8d6:{NFSU2_TR(0x6fc8d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc8dd:{NFSU2_TR(0x6fc8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc8e7:{NFSU2_TR(0x6fc8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc8ee:{NFSU2_TR(0x6fc8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc8ef:{NFSU2_TR(0x6fc8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc8f0:{NFSU2_TR(0x6fc8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc8f1:{NFSU2_TR(0x6fc8f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc8f4:L6fc8f4:{c.instructions+=2;NFSU2_TR(0x6fc8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc8fb:{NFSU2_TR(0x6fc8fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc8fe:L6fc8fe:{c.instructions+=6;NFSU2_TR(0x6fc8fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc8ff:{NFSU2_TR(0x6fc8ff);
__builtin_memmove((R+20),(R+16),4);
}
B6fc901:{NFSU2_TR(0x6fc901);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6fc905:{NFSU2_TR(0x6fc905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc906:{NFSU2_TR(0x6fc906);
__builtin_memmove((R+24),(R+4),4);
}
B6fc908:{NFSU2_TR(0x6fc908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc913;}}
}
B6fc90a:L6fc90a:{c.instructions+=2;NFSU2_TR(0x6fc90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc911:{NFSU2_TR(0x6fc911);
{goto L6fc934;}
}
B6fc913:L6fc913:{c.instructions+=4;NFSU2_TR(0x6fc913);
u8 U[4];
w4(U+0,u32(0x500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc918:{NFSU2_TR(0x6fc918);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc91a:{NFSU2_TR(0x6fc91a);
__builtin_memmove((R+4),(R+24),4);
}
B6fc91c:{NFSU2_TR(0x6fc91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc921ull));
TAIL_STATIC(0x6fdc24u,6fd);
}
B6fc921:L6fc921:{c.instructions+=6;NFSU2_TR(0x6fc921);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fc924:{NFSU2_TR(0x6fc924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc927:{NFSU2_TR(0x6fc927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc929:{NFSU2_TR(0x6fc929);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc92b:{NFSU2_TR(0x6fc92b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc92d:{NFSU2_TR(0x6fc92d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc930ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc930:L6fc930:{c.instructions+=1;NFSU2_TR(0x6fc930);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fc934:L6fc934:{c.instructions+=3;NFSU2_TR(0x6fc934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc935:{NFSU2_TR(0x6fc935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fc936:{NFSU2_TR(0x6fc936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc939:L6fc939:{c.instructions+=6;NFSU2_TR(0x6fc939);
__builtin_memmove((R+0),(R+4),4);
}
B6fc93b:{NFSU2_TR(0x6fc93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc93e:{NFSU2_TR(0x6fc93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fc940:{NFSU2_TR(0x6fc940);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fc943:{NFSU2_TR(0x6fc943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc944:{NFSU2_TR(0x6fc944);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc947ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc947:L6fc947:{c.instructions+=1;NFSU2_TR(0x6fc947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc94a:L6fc94a:{c.instructions+=24;NFSU2_TR(0x6fc94a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc94b:{NFSU2_TR(0x6fc94b);
__builtin_memmove((R+20),(R+16),4);
}
B6fc94d:{NFSU2_TR(0x6fc94d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6fc950:{NFSU2_TR(0x6fc950);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fc952:{NFSU2_TR(0x6fc952);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc953:{NFSU2_TR(0x6fc953);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc954:{NFSU2_TR(0x6fc954);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc955:{NFSU2_TR(0x6fc955);
__builtin_memmove((R+24),(R+4),4);
}
B6fc957:{NFSU2_TR(0x6fc957);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc95a:{NFSU2_TR(0x6fc95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6fc95d:{NFSU2_TR(0x6fc95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc961:{NFSU2_TR(0x6fc961);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc964:{NFSU2_TR(0x6fc964);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc967:{NFSU2_TR(0x6fc967);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc96a:{NFSU2_TR(0x6fc96a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fc96d:{NFSU2_TR(0x6fc96d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fc970:{NFSU2_TR(0x6fc970);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc973:{NFSU2_TR(0x6fc973);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc974:{NFSU2_TR(0x6fc974);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc975:{NFSU2_TR(0x6fc975);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc976:{NFSU2_TR(0x6fc976);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fc977:{NFSU2_TR(0x6fc977);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc97a:{NFSU2_TR(0x6fc97a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc97b:{NFSU2_TR(0x6fc97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc980ull));
TAIL_STATIC(0x75fe71u,75f);
}
B6fc980:L6fc980:{c.instructions+=2;NFSU2_TR(0x6fc980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc981:{NFSU2_TR(0x6fc981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc986ull));
TAIL_STATIC(0x75fe1fu,75f);
}
B6fc986:L6fc986:{c.instructions+=4;NFSU2_TR(0x6fc986);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6fc988:{NFSU2_TR(0x6fc988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc989:{NFSU2_TR(0x6fc989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc98a:{NFSU2_TR(0x6fc98a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fc9a0;}}
}
B6fc98c:L6fc98c:{c.instructions+=6;NFSU2_TR(0x6fc98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc98f:{NFSU2_TR(0x6fc98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc992:{NFSU2_TR(0x6fc992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc995:{NFSU2_TR(0x6fc995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fc998:{NFSU2_TR(0x6fc998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc99e:{NFSU2_TR(0x6fc99e);
{goto L6fc9a7;}
}
B6fc9a0:L6fc9a0:{c.instructions+=1;NFSU2_TR(0x6fc9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fc9a7:L6fc9a7:{c.instructions+=7;NFSU2_TR(0x6fc9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fc9aa:{NFSU2_TR(0x6fc9aa);
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
B6fc9ac:{NFSU2_TR(0x6fc9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc9b2:{NFSU2_TR(0x6fc9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc9b8:{NFSU2_TR(0x6fc9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fc9bb:{NFSU2_TR(0x6fc9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc9bd:{NFSU2_TR(0x6fc9bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc9c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc9c0:L6fc9c0:{c.instructions+=5;NFSU2_TR(0x6fc9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fc9c3:{NFSU2_TR(0x6fc9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fc9c5:{NFSU2_TR(0x6fc9c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9c6:{NFSU2_TR(0x6fc9c6);
__builtin_memmove((R+4),(R+24),4);
}
B6fc9c8:{NFSU2_TR(0x6fc9c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc9cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fc9cb:L6fc9cb:{c.instructions+=5;NFSU2_TR(0x6fc9cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fc9cc:{NFSU2_TR(0x6fc9cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fc9cd:{NFSU2_TR(0x6fc9cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fc9ce:{NFSU2_TR(0x6fc9ce);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fc9cf:{NFSU2_TR(0x6fc9cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fc9d2:L6fc9d2:{c.instructions+=14;NFSU2_TR(0x6fc9d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9d3:{NFSU2_TR(0x6fc9d3);
__builtin_memmove((R+20),(R+16),4);
}
B6fc9d5:{NFSU2_TR(0x6fc9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x248ull))));
}
B6fc9db:{NFSU2_TR(0x6fc9db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9dc:{NFSU2_TR(0x6fc9dc);
__builtin_memmove((R+12),(R+4),4);
}
B6fc9de:{NFSU2_TR(0x6fc9de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9df:{NFSU2_TR(0x6fc9df);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc9e5:{NFSU2_TR(0x6fc9e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9e6:{NFSU2_TR(0x6fc9e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fc9ec:{NFSU2_TR(0x6fc9ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9ed:{NFSU2_TR(0x6fc9ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fc9f3:{NFSU2_TR(0x6fc9f3);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9f8:{NFSU2_TR(0x6fc9f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fc9f9:{NFSU2_TR(0x6fc9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fc9feull));
TAIL_STATIC(0x75c784u,75c);
}
B6fc9fe:L6fc9fe:{c.instructions+=4;NFSU2_TR(0x6fc9fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fca04:{NFSU2_TR(0x6fca04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fca07:{NFSU2_TR(0x6fca07);
__builtin_memmove((R+4),(R+24),4);
}
B6fca09:{NFSU2_TR(0x6fca09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fca0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc259u);}goto L6fc259;}
}
B6fca0e:L6fca0e:{c.instructions+=3;NFSU2_TR(0x6fca0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fca14:{NFSU2_TR(0x6fca14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca15:{NFSU2_TR(0x6fca15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fca1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc327u);}goto L6fc327;}
}
B6fca1a:L6fca1a:{c.instructions+=4;NFSU2_TR(0x6fca1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fca1c:{NFSU2_TR(0x6fca1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fca22:{NFSU2_TR(0x6fca22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fca23:{NFSU2_TR(0x6fca23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcbca;}}
}
B6fca29:L6fca29:{c.instructions+=1;NFSU2_TR(0x6fca29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca2a:L6fca2a:{c.instructions+=2;NFSU2_TR(0x6fca2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fca31:{NFSU2_TR(0x6fca31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcba8;}}
}
B6fca37:L6fca37:{c.instructions+=7;NFSU2_TR(0x6fca37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fca3d:{NFSU2_TR(0x6fca3d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca3f:{NFSU2_TR(0x6fca3f);
__builtin_memmove((R+28),(R+0),4);
}
B6fca41:{NFSU2_TR(0x6fca41);
w4(R+24,u32(0x7c32f4ull));
}
B6fca46:{NFSU2_TR(0x6fca46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fca47:{NFSU2_TR(0x6fca47);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6fca49:{NFSU2_TR(0x6fca49);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fca50:L6fca50:{c.instructions+=1;NFSU2_TR(0x6fca50);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fca52;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fca50u);}goto L6fca50;}}
}
B6fca52:L6fca52:{c.instructions+=1;NFSU2_TR(0x6fca52);
if(r1(R+518)){{goto L6fcba8;}}
}
B6fca58:L6fca58:{c.instructions+=5;NFSU2_TR(0x6fca58);
__builtin_memmove((R+28),(R+0),4);
}
B6fca5a:{NFSU2_TR(0x6fca5a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca5c:{NFSU2_TR(0x6fca5c);
w4(R+24,u32(0x7c32f0ull));
}
B6fca61:{NFSU2_TR(0x6fca61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fca62:{NFSU2_TR(0x6fca62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fca64:L6fca64:{c.instructions+=1;NFSU2_TR(0x6fca64);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6fca66;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fca64u);}goto L6fca64;}}
}
B6fca66:L6fca66:{c.instructions+=1;NFSU2_TR(0x6fca66);
if(r1(R+518)){{goto L6fcba8;}}
}
B6fca6c:L6fca6c:{c.instructions+=6;NFSU2_TR(0x6fca6c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca6e:{NFSU2_TR(0x6fca6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fca6f:{NFSU2_TR(0x6fca6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fca75:{NFSU2_TR(0x6fca75);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca77:{NFSU2_TR(0x6fca77);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fca7e:{NFSU2_TR(0x6fca7e);
__builtin_memmove((R+28),(R+24),4);
}
B6fca80:L6fca80:{c.instructions+=1;NFSU2_TR(0x6fca80);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fca82;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fca80u);}goto L6fca80;}
}
B6fca82:L6fca82:{c.instructions+=3;NFSU2_TR(0x6fca82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fca83:{NFSU2_TR(0x6fca83);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fca89:{NFSU2_TR(0x6fca89);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca8b:L6fca8b:{c.instructions+=1;NFSU2_TR(0x6fca8b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fca8d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fca8bu);}goto L6fca8b;}
}
B6fca8d:L6fca8d:{c.instructions+=3;NFSU2_TR(0x6fca8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fca93:{NFSU2_TR(0x6fca93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fca94:{NFSU2_TR(0x6fca94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fca99ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fca99:L6fca99:{c.instructions+=3;NFSU2_TR(0x6fca99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fca9c:{NFSU2_TR(0x6fca9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fcaa3:{NFSU2_TR(0x6fcaa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcac0;}}
}
B6fcaa5:L6fcaa5:{c.instructions+=8;NFSU2_TR(0x6fcaa5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcaa7:{NFSU2_TR(0x6fcaa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcaa8:{NFSU2_TR(0x6fcaa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fcaae:{NFSU2_TR(0x6fcaae);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcab0:{NFSU2_TR(0x6fcab0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fcab2:{NFSU2_TR(0x6fcab2);
__builtin_memmove((R+28),(R+8),4);
}
B6fcab4:{NFSU2_TR(0x6fcab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcab5:{NFSU2_TR(0x6fcab5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcab6:L6fcab6:{c.instructions+=1;NFSU2_TR(0x6fcab6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fcab8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcab6u);}goto L6fcab6;}
}
B6fcab8:L6fcab8:{c.instructions+=1;NFSU2_TR(0x6fcab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcabdull));
TAIL_STATIC(0x75c840u,75c);
}
B6fcabd:L6fcabd:{c.instructions+=1;NFSU2_TR(0x6fcabd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fcac0:L6fcac0:{c.instructions+=3;NFSU2_TR(0x6fcac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcac6:{NFSU2_TR(0x6fcac6);
__builtin_memmove((R+4),(R+28),4);
}
B6fcac8:{NFSU2_TR(0x6fcac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcacdull));
TAIL_STATIC(0x495a00u,495);
}
B6fcacd:L6fcacd:{c.instructions+=9;NFSU2_TR(0x6fcacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcad3:{NFSU2_TR(0x6fcad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcad4:{NFSU2_TR(0x6fcad4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcad5:{NFSU2_TR(0x6fcad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcadb:{NFSU2_TR(0x6fcadb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcadc:{NFSU2_TR(0x6fcadc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcae2:{NFSU2_TR(0x6fcae2);
u8 U[4];
w4(U+0,u32(0x7c32e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcae7:{NFSU2_TR(0x6fcae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcae8:{NFSU2_TR(0x6fcae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcaedull));
TAIL_STATIC(0x75c784u,75c);
}
B6fcaed:L6fcaed:{c.instructions+=4;NFSU2_TR(0x6fcaed);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcaf3:{NFSU2_TR(0x6fcaf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6fcaf6:{NFSU2_TR(0x6fcaf6);
__builtin_memmove((R+4),(R+24),4);
}
B6fcaf8:{NFSU2_TR(0x6fcaf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcafdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc259u);}goto L6fc259;}
}
B6fcafd:L6fcafd:{c.instructions+=3;NFSU2_TR(0x6fcafd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb03:{NFSU2_TR(0x6fcb03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb04:{NFSU2_TR(0x6fcb04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcb09ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc327u);}goto L6fc327;}
}
B6fcb09:L6fcb09:{c.instructions+=3;NFSU2_TR(0x6fcb09);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fcb10:{NFSU2_TR(0x6fcb10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcb11:{NFSU2_TR(0x6fcb11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcb51;}}
}
B6fcb13:L6fcb13:{c.instructions+=2;NFSU2_TR(0x6fcb13);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fcb1a:{NFSU2_TR(0x6fcb1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcb51;}}
}
B6fcb1c:L6fcb1c:{c.instructions+=6;NFSU2_TR(0x6fcb1c);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb1e:{NFSU2_TR(0x6fcb1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2b0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcb24:{NFSU2_TR(0x6fcb24);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fcb26:{NFSU2_TR(0x6fcb26);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb2c:{NFSU2_TR(0x6fcb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb2d:{NFSU2_TR(0x6fcb2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcb32ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fcb32:L6fcb32:{c.instructions+=2;NFSU2_TR(0x6fcb32);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb34:{NFSU2_TR(0x6fcb34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcb35:L6fcb35:{c.instructions+=1;NFSU2_TR(0x6fcb35);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fcb37;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcb35u);}goto L6fcb35;}
}
B6fcb37:L6fcb37:{c.instructions+=4;NFSU2_TR(0x6fcb37);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcb3d:{NFSU2_TR(0x6fcb3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fcb3f:{NFSU2_TR(0x6fcb3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcb46:{NFSU2_TR(0x6fcb46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcb4bull));
TAIL_STATIC(0x75fbaeu,75f);
}
B6fcb4b:L6fcb4b:{c.instructions+=2;NFSU2_TR(0x6fcb4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6fcb4e:{NFSU2_TR(0x6fcb4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6fcb51:L6fcb51:{c.instructions+=2;NFSU2_TR(0x6fcb51);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
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
B6fcb58:{NFSU2_TR(0x6fcb58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcb62;}}
}
B6fcb5a:L6fcb5a:{c.instructions+=2;NFSU2_TR(0x6fcb5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcb60:{NFSU2_TR(0x6fcb60);
{goto L6fcb97;}
}
B6fcb62:L6fcb62:{c.instructions+=2;NFSU2_TR(0x6fcb62);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6fcb69:{NFSU2_TR(0x6fcb69);
if(r1(R+518)){{goto L6fcba8;}}
}
B6fcb6b:L6fcb6b:{c.instructions+=4;NFSU2_TR(0x6fcb6b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb6d:{NFSU2_TR(0x6fcb6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcb6e:{NFSU2_TR(0x6fcb6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fcb70:{NFSU2_TR(0x6fcb70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcb73:L6fcb73:{c.instructions+=1;NFSU2_TR(0x6fcb73);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fcb75;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcb73u);}goto L6fcb73;}
}
B6fcb75:L6fcb75:{c.instructions+=8;NFSU2_TR(0x6fcb75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x154ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb7b:{NFSU2_TR(0x6fcb7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb7c:{NFSU2_TR(0x6fcb7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb82:{NFSU2_TR(0x6fcb82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb83:{NFSU2_TR(0x6fcb83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb86:{NFSU2_TR(0x6fcb86);
u8 U[4];
w4(U+0,u32(0x7c2fc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb8b:{NFSU2_TR(0x6fcb8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcb8c:{NFSU2_TR(0x6fcb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcb91ull));
TAIL_STATIC(0x75c784u,75c);
}
B6fcb91:L6fcb91:{c.instructions+=2;NFSU2_TR(0x6fcb91);
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
B6fcb94:{NFSU2_TR(0x6fcb94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcb97:L6fcb97:{c.instructions+=6;NFSU2_TR(0x6fcb97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcb9d:{NFSU2_TR(0x6fcb9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fcb9f:{NFSU2_TR(0x6fcb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcba2:{NFSU2_TR(0x6fcba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fcba4:{NFSU2_TR(0x6fcba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcba5:{NFSU2_TR(0x6fcba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcba8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcba8:L6fcba8:{c.instructions+=4;NFSU2_TR(0x6fcba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcbae:{NFSU2_TR(0x6fcbae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcbaf:{NFSU2_TR(0x6fcbaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcbb5:{NFSU2_TR(0x6fcbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcbbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc327u);}goto L6fc327;}
}
B6fcbba:L6fcbba:{c.instructions+=4;NFSU2_TR(0x6fcbba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fcbbc:{NFSU2_TR(0x6fcbbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fcbc2:{NFSU2_TR(0x6fcbc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcbc3:{NFSU2_TR(0x6fcbc3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fca2au);}goto L6fca2a;}}
}
B6fcbc9:L6fcbc9:{c.instructions+=1;NFSU2_TR(0x6fcbc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcbca:L6fcbca:{c.instructions+=3;NFSU2_TR(0x6fcbca);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6fcbd0:{NFSU2_TR(0x6fcbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcbd6:{NFSU2_TR(0x6fcbd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcbe0;}}
}
B6fcbd8:L6fcbd8:{c.instructions+=2;NFSU2_TR(0x6fcbd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fcbde:{NFSU2_TR(0x6fcbde);
{goto L6fcbe6;}
}
B6fcbe0:L6fcbe0:{c.instructions+=1;NFSU2_TR(0x6fcbe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6fcbe6:L6fcbe6:{c.instructions+=10;NFSU2_TR(0x6fcbe6);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B6fcbe8:{NFSU2_TR(0x6fcbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcbeb:{NFSU2_TR(0x6fcbeb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6fcbed:{NFSU2_TR(0x6fcbed);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff7ull))));
}
B6fcbf0:{NFSU2_TR(0x6fcbf0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x9ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x9ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fcbf3:{NFSU2_TR(0x6fcbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcbf9:{NFSU2_TR(0x6fcbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcbfc:{NFSU2_TR(0x6fcbfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcc02:{NFSU2_TR(0x6fcc02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcc04:{NFSU2_TR(0x6fcc04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcc07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcc07:L6fcc07:{c.instructions+=4;NFSU2_TR(0x6fcc07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcc08:{NFSU2_TR(0x6fcc08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fcc09:{NFSU2_TR(0x6fcc09);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fcc0a:{NFSU2_TR(0x6fcc0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcc0d:L6fcc0d:{c.instructions+=12;NFSU2_TR(0x6fcc0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc0e:{NFSU2_TR(0x6fcc0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc0f:{NFSU2_TR(0x6fcc0f);
__builtin_memmove((R+24),(R+4),4);
}
B6fcc11:{NFSU2_TR(0x6fcc11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fcc13:{NFSU2_TR(0x6fcc13);
u8 U[4];
w4(U+0,u32(0x500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc18:{NFSU2_TR(0x6fcc18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcc1e:{NFSU2_TR(0x6fcc1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc20:{NFSU2_TR(0x6fcc20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcc24:{NFSU2_TR(0x6fcc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcc2a:{NFSU2_TR(0x6fcc2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6fcc2c:{NFSU2_TR(0x6fcc2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcc2f:{NFSU2_TR(0x6fcc2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcc34ull));
TAIL_STATIC(0x6fdc24u,6fd);
}
B6fcc34:L6fcc34:{c.instructions+=6;NFSU2_TR(0x6fcc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcc37:{NFSU2_TR(0x6fcc37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcc39:{NFSU2_TR(0x6fcc39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc3b:{NFSU2_TR(0x6fcc3b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6fcc3d:{NFSU2_TR(0x6fcc3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcc43:{NFSU2_TR(0x6fcc43);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcc46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcc46:L6fcc46:{c.instructions+=3;NFSU2_TR(0x6fcc46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcc47:{NFSU2_TR(0x6fcc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcc48:{NFSU2_TR(0x6fcc48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcc4b:L6fcc4b:{c.instructions+=9;NFSU2_TR(0x6fcc4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc4c:{NFSU2_TR(0x6fcc4c);
__builtin_memmove((R+20),(R+16),4);
}
B6fcc4e:{NFSU2_TR(0x6fcc4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc4f:{NFSU2_TR(0x6fcc4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fcc52:{NFSU2_TR(0x6fcc52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcc54:{NFSU2_TR(0x6fcc54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff9ull))));
}
B6fcc57:{NFSU2_TR(0x6fcc57);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fcc59:{NFSU2_TR(0x6fcc59);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fcc5c:{NFSU2_TR(0x6fcc5c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6fccb0;}}
}
B6fcc5e:L6fcc5e:{c.instructions+=1;NFSU2_TR(0x6fcc5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6fcccaull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcc65:L6fcc65:{c.instructions+=3;NFSU2_TR(0x6fcc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc68:{NFSU2_TR(0x6fcc68);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc6b:{NFSU2_TR(0x6fcc6b);
{goto L6fcc90;}
}
B6fcc6d:L6fcc6d:{c.instructions+=3;NFSU2_TR(0x6fcc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc70:{NFSU2_TR(0x6fcc70);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc73:{NFSU2_TR(0x6fcc73);
{goto L6fcca7;}
}
B6fcc75:L6fcc75:{c.instructions+=3;NFSU2_TR(0x6fcc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc78:{NFSU2_TR(0x6fcc78);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc7b:{NFSU2_TR(0x6fcc7b);
{goto L6fcca7;}
}
B6fcc7d:L6fcc7d:{c.instructions+=3;NFSU2_TR(0x6fcc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc80:{NFSU2_TR(0x6fcc80);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc83:{NFSU2_TR(0x6fcc83);
{goto L6fcca7;}
}
B6fcc85:L6fcc85:{c.instructions+=3;NFSU2_TR(0x6fcc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc88:{NFSU2_TR(0x6fcc88);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc8b:{NFSU2_TR(0x6fcc8b);
{goto L6fcca7;}
}
B6fcc8d:L6fcc8d:{c.instructions+=1;NFSU2_TR(0x6fcc8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6fcc90:L6fcc90:{c.instructions+=5;NFSU2_TR(0x6fcc90);
w1(R+0,u8(~u32(r1(R+0))));
}
B6fcc92:{NFSU2_TR(0x6fcc92);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcc94:{NFSU2_TR(0x6fcc94);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B6fcc96:{NFSU2_TR(0x6fcc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fcc97:{NFSU2_TR(0x6fcc97);
{goto L6fccb2;}
}
B6fcc99:L6fcc99:{c.instructions+=3;NFSU2_TR(0x6fcc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcc9c:{NFSU2_TR(0x6fcc9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcc9f:{NFSU2_TR(0x6fcc9f);
{goto L6fcca7;}
}
B6fcca1:L6fcca1:{c.instructions+=2;NFSU2_TR(0x6fcca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcca4:{NFSU2_TR(0x6fcca4);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6fcca7:L6fcca7:{c.instructions+=5;NFSU2_TR(0x6fcca7);
w1(R+0,u8(~u32(r1(R+0))));
}
B6fcca9:{NFSU2_TR(0x6fcca9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6fccab:{NFSU2_TR(0x6fccab);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B6fccad:{NFSU2_TR(0x6fccad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6fccae:{NFSU2_TR(0x6fccae);
{goto L6fccb2;}
}
B6fccb0:L6fccb0:{c.instructions+=1;NFSU2_TR(0x6fccb0);
w1(R+0,u8(0x1ull));
}
B6fccb2:L6fccb2:{c.instructions+=2;NFSU2_TR(0x6fccb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6fccb4:{NFSU2_TR(0x6fccb4);
if(r1(R+518)){{goto L6fccbe;}}
}
B6fccb6:L6fccb6:{c.instructions+=2;NFSU2_TR(0x6fccb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fccb7:{NFSU2_TR(0x6fccb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fccbcull));
TAIL_STATIC(0x6fdc3eu,6fd);
}
B6fccbc:L6fccbc:{c.instructions+=1;NFSU2_TR(0x6fccbc);
{goto L6fccc5;}
}
B6fccbe:L6fccbe:{c.instructions+=2;NFSU2_TR(0x6fccbe);
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
B6fccc0:{NFSU2_TR(0x6fccc0);
if(r1(R+518)){{goto L6fccc5;}}
}
B6fccc2:L6fccc2:{c.instructions+=1;NFSU2_TR(0x6fccc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fccc5:L6fccc5:{c.instructions+=3;NFSU2_TR(0x6fccc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fccc6:{NFSU2_TR(0x6fccc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fccc7:{NFSU2_TR(0x6fccc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fccea:L6fccea:{c.instructions+=8;NFSU2_TR(0x6fccea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcceb:{NFSU2_TR(0x6fcceb);
__builtin_memmove((R+20),(R+16),4);
}
B6fcced:{NFSU2_TR(0x6fcced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fccf0:{NFSU2_TR(0x6fccf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fccf3:{NFSU2_TR(0x6fccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fccf6:{NFSU2_TR(0x6fccf6);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6fccfa:{NFSU2_TR(0x6fccfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fccfb:{NFSU2_TR(0x6fccfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fccfe:L6fccfe:{c.instructions+=7;NFSU2_TR(0x6fccfe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fccff:{NFSU2_TR(0x6fccff);
__builtin_memmove((R+20),(R+16),4);
}
B6fcd01:{NFSU2_TR(0x6fcd01);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd06:{NFSU2_TR(0x6fcd06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcd09:{NFSU2_TR(0x6fcd09);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x174ull))));
}
B6fcd0f:{NFSU2_TR(0x6fcd0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd10:{NFSU2_TR(0x6fcd10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcd15ull));
TAIL_STATIC(0x75fecau,75f);
}
B6fcd15:L6fcd15:{c.instructions+=3;NFSU2_TR(0x6fcd15);
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
B6fcd18:{NFSU2_TR(0x6fcd18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fcd19:{NFSU2_TR(0x6fcd19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcd1c:L6fcd1c:{c.instructions+=5;NFSU2_TR(0x6fcd1c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd1d:{NFSU2_TR(0x6fcd1d);
__builtin_memmove((R+20),(R+16),4);
}
B6fcd1f:{NFSU2_TR(0x6fcd1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcd22:{NFSU2_TR(0x6fcd22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcd25:{NFSU2_TR(0x6fcd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcd2aull));
TAIL_STATIC(0x6fe173u,6fe);
}
B6fcd2a:L6fcd2a:{c.instructions+=4;NFSU2_TR(0x6fcd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcd2b:{NFSU2_TR(0x6fcd2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcd2c:{NFSU2_TR(0x6fcd2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fcd2d:{NFSU2_TR(0x6fcd2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcd30:L6fcd30:{c.instructions+=1;NFSU2_TR(0x6fcd30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcd33:L6fcd33:{c.instructions+=1;NFSU2_TR(0x6fcd33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcd36:L6fcd36:{c.instructions+=1;NFSU2_TR(0x6fcd36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcd38:L6fcd38:{c.instructions+=20;NFSU2_TR(0x6fcd38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd39:{NFSU2_TR(0x6fcd39);
__builtin_memmove((R+20),(R+16),4);
}
B6fcd3b:{NFSU2_TR(0x6fcd3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6fcd3e:{NFSU2_TR(0x6fcd3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcd41:{NFSU2_TR(0x6fcd41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd42:{NFSU2_TR(0x6fcd42);
__builtin_memmove((R+12),(R+4),4);
}
B6fcd44:{NFSU2_TR(0x6fcd44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd45:{NFSU2_TR(0x6fcd45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fcd48:{NFSU2_TR(0x6fcd48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd49:{NFSU2_TR(0x6fcd49);
__builtin_memmove((R+28),(R+12),4);
}
B6fcd4b:{NFSU2_TR(0x6fcd4b);
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
B6fcd4c:{NFSU2_TR(0x6fcd4c);
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
B6fcd4d:{NFSU2_TR(0x6fcd4d);
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
B6fcd4e:{NFSU2_TR(0x6fcd4e);
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
B6fcd4f:{NFSU2_TR(0x6fcd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6fcd52:{NFSU2_TR(0x6fcd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd55:{NFSU2_TR(0x6fcd55);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcd57:{NFSU2_TR(0x6fcd57);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcd5a:{NFSU2_TR(0x6fcd5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcd5b:{NFSU2_TR(0x6fcd5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcd5e:L6fcd5e:{c.instructions+=1;NFSU2_TR(0x6fcd5e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6fcd60;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcd5eu);}goto L6fcd5e;}
}
B6fcd60:L6fcd60:{c.instructions+=21;NFSU2_TR(0x6fcd60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6fcd62:{NFSU2_TR(0x6fcd62);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcd66:{NFSU2_TR(0x6fcd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd69:{NFSU2_TR(0x6fcd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd6c:{NFSU2_TR(0x6fcd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd6f:{NFSU2_TR(0x6fcd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd72:{NFSU2_TR(0x6fcd72);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcd76:{NFSU2_TR(0x6fcd76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6fcd79:{NFSU2_TR(0x6fcd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd7d:{NFSU2_TR(0x6fcd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd80:{NFSU2_TR(0x6fcd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd83:{NFSU2_TR(0x6fcd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd86:{NFSU2_TR(0x6fcd86);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcd8a:{NFSU2_TR(0x6fcd8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcd8e:{NFSU2_TR(0x6fcd8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcd94:{NFSU2_TR(0x6fcd94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6fcd96:{NFSU2_TR(0x6fcd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd99:{NFSU2_TR(0x6fcd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcd9c:{NFSU2_TR(0x6fcd9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcda2:{NFSU2_TR(0x6fcda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcda8:{NFSU2_TR(0x6fcda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcdadull));
TAIL_STATIC(0x4aec00u,4ae);
}
B6fcdad:L6fcdad:{c.instructions+=7;NFSU2_TR(0x6fcdad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcdb3:{NFSU2_TR(0x6fcdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdb9:{NFSU2_TR(0x6fcdb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6fcdbb:{NFSU2_TR(0x6fcdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdbe:{NFSU2_TR(0x6fcdbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcdc4:{NFSU2_TR(0x6fcdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdca:{NFSU2_TR(0x6fcdca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcdcfull));
TAIL_STATIC(0x6fda88u,6fd);
}
B6fcdcf:L6fcdcf:{c.instructions+=11;NFSU2_TR(0x6fcdcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x278ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fcdd5:{NFSU2_TR(0x6fcdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcddb:{NFSU2_TR(0x6fcddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcde1:{NFSU2_TR(0x6fcde1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fcde8:{NFSU2_TR(0x6fcde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdee:{NFSU2_TR(0x6fcdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdf4:{NFSU2_TR(0x6fcdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcdfa:{NFSU2_TR(0x6fcdfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fce00:{NFSU2_TR(0x6fce00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fce06:{NFSU2_TR(0x6fce06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fce0c:{NFSU2_TR(0x6fce0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fce11ull));
TAIL_STATIC(0x6fdaa6u,6fd);
}
B6fce11:L6fce11:{c.instructions+=2;NFSU2_TR(0x6fce11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fce17:{NFSU2_TR(0x6fce17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fce1cull));
TAIL_STATIC(0x6fdaa6u,6fd);
}
B6fce1c:L6fce1c:{c.instructions+=10;NFSU2_TR(0x6fce1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6fce23:{NFSU2_TR(0x6fce23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fce29:{NFSU2_TR(0x6fce29);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6fce30:{NFSU2_TR(0x6fce30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fce3a:{NFSU2_TR(0x6fce3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fce44:{NFSU2_TR(0x6fce44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fce46:{NFSU2_TR(0x6fce46);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce48:{NFSU2_TR(0x6fce48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fce49:{NFSU2_TR(0x6fce49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fce4c:{NFSU2_TR(0x6fce4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fce52:L6fce52:{c.instructions+=1;NFSU2_TR(0x6fce52);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fce54;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fce52u);}goto L6fce52;}
}
B6fce54:L6fce54:{c.instructions+=11;NFSU2_TR(0x6fce54);
__builtin_memmove((R+28),(R+24),4);
}
B6fce56:{NFSU2_TR(0x6fce56);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce57:{NFSU2_TR(0x6fce57);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce58:{NFSU2_TR(0x6fce58);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce59:{NFSU2_TR(0x6fce59);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce5a:{NFSU2_TR(0x6fce5a);
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
B6fce5c:{NFSU2_TR(0x6fce5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fce62:{NFSU2_TR(0x6fce62);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce63:{NFSU2_TR(0x6fce63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fce66:{NFSU2_TR(0x6fce66);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6fce67:{NFSU2_TR(0x6fce67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fce6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc204u);}goto L6fc204;}
}
B6fce6c:L6fce6c:{c.instructions+=3;NFSU2_TR(0x6fce6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fce6f:{NFSU2_TR(0x6fce6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce70:{NFSU2_TR(0x6fce70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fce75ull));
TAIL_STATIC(0x6fe3e3u,6fe);
}
B6fce75:L6fce75:{c.instructions+=8;NFSU2_TR(0x6fce75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fce76:{NFSU2_TR(0x6fce76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fce77:{NFSU2_TR(0x6fce77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fce7a:{NFSU2_TR(0x6fce7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fce7b:{NFSU2_TR(0x6fce7b);
__builtin_memmove((R+0),(R+12),4);
}
B6fce7d:{NFSU2_TR(0x6fce7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fce7e:{NFSU2_TR(0x6fce7e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fce7f:{NFSU2_TR(0x6fce7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fce82:L6fce82:{c.instructions+=14;NFSU2_TR(0x6fce82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce83:{NFSU2_TR(0x6fce83);
__builtin_memmove((R+20),(R+16),4);
}
B6fce85:{NFSU2_TR(0x6fce85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce86:{NFSU2_TR(0x6fce86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce87:{NFSU2_TR(0x6fce87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce88:{NFSU2_TR(0x6fce88);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce8a:{NFSU2_TR(0x6fce8a);
__builtin_memmove((R+24),(R+4),4);
}
B6fce8c:{NFSU2_TR(0x6fce8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6fce8d:{NFSU2_TR(0x6fce8d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce8f:{NFSU2_TR(0x6fce8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fce92:{NFSU2_TR(0x6fce92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+8),(U+0),4);
}
B6fce98:{NFSU2_TR(0x6fce98);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fce9a:{NFSU2_TR(0x6fce9a);
__builtin_memmove((R+28),(R+8),4);
}
B6fce9c:{NFSU2_TR(0x6fce9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fce9d:L6fce9d:{c.instructions+=1;NFSU2_TR(0x6fce9d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6fce9f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fce9du);}goto L6fce9d;}
}
B6fce9f:L6fce9f:{c.instructions+=1;NFSU2_TR(0x6fce9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcea4ull));
TAIL_STATIC(0x75c840u,75c);
}
B6fcea4:L6fcea4:{c.instructions+=15;NFSU2_TR(0x6fcea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6fcea7:{NFSU2_TR(0x6fcea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fceaa:{NFSU2_TR(0x6fceaa);
__builtin_memmove(gp(0x8ada40),(R+0),4);
}
B6fceaf:{NFSU2_TR(0x6fceaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fceb2:{NFSU2_TR(0x6fceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fceb8:{NFSU2_TR(0x6fceb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcebb:{NFSU2_TR(0x6fcebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcec1:{NFSU2_TR(0x6fcec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6fcec4:{NFSU2_TR(0x6fcec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcec7:{NFSU2_TR(0x6fcec7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6fceca:{NFSU2_TR(0x6fceca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcecb:{NFSU2_TR(0x6fcecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcece:{NFSU2_TR(0x6fcece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcecf:{NFSU2_TR(0x6fcecf);
__builtin_memmove((R+4),(R+24),4);
}
B6fced1:{NFSU2_TR(0x6fced1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fced6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcd1cu);}goto L6fcd1c;}
}
B6fced6:L6fced6:{c.instructions+=5;NFSU2_TR(0x6fced6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fced7:{NFSU2_TR(0x6fced7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fceda:{NFSU2_TR(0x6fceda);
__builtin_memmove((R+4),(R+24),4);
}
B6fcedc:{NFSU2_TR(0x6fcedc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcedf:{NFSU2_TR(0x6fcedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcee4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcd1cu);}goto L6fcd1c;}
}
B6fcee4:L6fcee4:{c.instructions+=9;NFSU2_TR(0x6fcee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcee5:{NFSU2_TR(0x6fcee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcee8:{NFSU2_TR(0x6fcee8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6fceec:{NFSU2_TR(0x6fceec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fceed:{NFSU2_TR(0x6fceed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fceee:{NFSU2_TR(0x6fceee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcef4:{NFSU2_TR(0x6fcef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcef5:{NFSU2_TR(0x6fcef5);
__builtin_memmove((R+4),(R+28),4);
}
B6fcef7:{NFSU2_TR(0x6fcef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcefcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fc226u);}goto L6fc226;}
}
B6fcefc:L6fcefc:{c.instructions+=4;NFSU2_TR(0x6fcefc);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcefe:{NFSU2_TR(0x6fcefe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fceff:{NFSU2_TR(0x6fceff);
__builtin_memmove((R+4),(R+24),4);
}
B6fcf01:{NFSU2_TR(0x6fcf01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcf06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6fcd1cu);}goto L6fcd1c;}
}
B6fcf06:L6fcf06:{c.instructions+=13;NFSU2_TR(0x6fcf06);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B6fcf0d:{NFSU2_TR(0x6fcf0d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf0f:{NFSU2_TR(0x6fcf0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf15:{NFSU2_TR(0x6fcf15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6fcf16:{NFSU2_TR(0x6fcf16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcf17:{NFSU2_TR(0x6fcf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf1d:{NFSU2_TR(0x6fcf1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf27:{NFSU2_TR(0x6fcf27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf2a:{NFSU2_TR(0x6fcf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf31:{NFSU2_TR(0x6fcf31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcf32:{NFSU2_TR(0x6fcf32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6fcf33:{NFSU2_TR(0x6fcf33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6fcf34:{NFSU2_TR(0x6fcf34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcf37:L6fcf37:{c.instructions+=22;NFSU2_TR(0x6fcf37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf38:{NFSU2_TR(0x6fcf38);
__builtin_memmove((R+20),(R+16),4);
}
B6fcf3a:{NFSU2_TR(0x6fcf3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6fcf3d:{NFSU2_TR(0x6fcf3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf3e:{NFSU2_TR(0x6fcf3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf3f:{NFSU2_TR(0x6fcf3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6fcf41:{NFSU2_TR(0x6fcf41);
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
B6fcf44:{NFSU2_TR(0x6fcf44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6fcf47:{NFSU2_TR(0x6fcf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf4a:{NFSU2_TR(0x6fcf4a);
__builtin_memmove((R+28),(R+16),4);
}
B6fcf4c:{NFSU2_TR(0x6fcf4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x10000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf53:{NFSU2_TR(0x6fcf53);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcf56:{NFSU2_TR(0x6fcf56);
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
B6fcf57:{NFSU2_TR(0x6fcf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf5d:{NFSU2_TR(0x6fcf5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf63:{NFSU2_TR(0x6fcf63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcf66:{NFSU2_TR(0x6fcf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcf69:{NFSU2_TR(0x6fcf69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6fcf6b:{NFSU2_TR(0x6fcf6b);
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
B6fcf6c:{NFSU2_TR(0x6fcf6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf6d:{NFSU2_TR(0x6fcf6d);
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
B6fcf6e:{NFSU2_TR(0x6fcf6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcf71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcf71:L6fcf71:{c.instructions+=4;NFSU2_TR(0x6fcf71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6fcf72:{NFSU2_TR(0x6fcf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6fcf73:{NFSU2_TR(0x6fcf73);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6fcf74:{NFSU2_TR(0x6fcf74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6fcf77:L6fcf77:{c.instructions+=10;NFSU2_TR(0x6fcf77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf78:{NFSU2_TR(0x6fcf78);
__builtin_memmove((R+20),(R+16),4);
}
B6fcf7a:{NFSU2_TR(0x6fcf7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x170ull))));
}
B6fcf80:{NFSU2_TR(0x6fcf80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf81:{NFSU2_TR(0x6fcf81);
__builtin_memmove((R+12),(R+4),4);
}
B6fcf83:{NFSU2_TR(0x6fcf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6fcf86:{NFSU2_TR(0x6fcf86);
w1(R+512,u8((r4(R+0))<(u32(0x9ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fcf89:{NFSU2_TR(0x6fcf89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf8a:{NFSU2_TR(0x6fcf8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcf8b:{NFSU2_TR(0x6fcf8b);
if(r1(R+518)){TAIL_STATIC(0x6fd248u,6fd);}
}
B6fcf91:L6fcf91:{c.instructions+=2;NFSU2_TR(0x6fcf91);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fcf92:{NFSU2_TR(0x6fcf92);
if(r1(R+518)){TAIL_STATIC(0x6fd21bu,6fd);}
}
B6fcf98:L6fcf98:{c.instructions+=2;NFSU2_TR(0x6fcf98);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fcf99:{NFSU2_TR(0x6fcf99);
if(r1(R+518)){TAIL_STATIC(0x6fd083u,6fd);}
}
B6fcf9f:L6fcf9f:{c.instructions+=2;NFSU2_TR(0x6fcf9f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fcfa0:{NFSU2_TR(0x6fcfa0);
if(r1(R+518)){TAIL_STATIC(0x6fd031u,6fd);}
}
B6fcfa6:L6fcfa6:{c.instructions+=2;NFSU2_TR(0x6fcfa6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6fcfa7:{NFSU2_TR(0x6fcfa7);
if(r1(R+518)){TAIL_STATIC(0x6fd01bu,6fd);}
}
B6fcfa9:L6fcfa9:{c.instructions+=2;NFSU2_TR(0x6fcfa9);
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
B6fcfaa:{NFSU2_TR(0x6fcfaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6fd22bu,6fd);}
}
B6fcfb0:L6fcfb0:{c.instructions+=7;NFSU2_TR(0x6fcfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcfb3:{NFSU2_TR(0x6fcfb3);
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
B6fcfb5:{NFSU2_TR(0x6fcfb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcfb8:{NFSU2_TR(0x6fcfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6fcfbb:{NFSU2_TR(0x6fcfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcfbd:{NFSU2_TR(0x6fcfbd);
__builtin_memmove(gp(0x8ada40),(R+24),4);
}
B6fcfc3:{NFSU2_TR(0x6fcfc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcfc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcfc6:L6fcfc6:{c.instructions+=4;NFSU2_TR(0x6fcfc6);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e8ull))));
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
B6fcfcd:{NFSU2_TR(0x6fcfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcfd0:{NFSU2_TR(0x6fcfd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcfd2:{NFSU2_TR(0x6fcfd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6fd007u,6fd);}
}
B6fcfd4:L6fcfd4:{c.instructions+=2;NFSU2_TR(0x6fcfd4);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
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
B6fcfda:{NFSU2_TR(0x6fcfda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6fcfeb;}}
}
B6fcfdc:L6fcfdc:{c.instructions+=3;NFSU2_TR(0x6fcfdc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x9cull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x9cull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x9cull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6fcfe2:{NFSU2_TR(0x6fcfe2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6fcfe3:{NFSU2_TR(0x6fcfe3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcfe6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcfe6:L6fcfe6:{c.instructions+=1;NFSU2_TR(0x6fcfe6);
TAIL_STATIC(0x6fd22bu,6fd);
}
B6fcfeb:L6fcfeb:{c.instructions+=1;NFSU2_TR(0x6fcfeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fcfeeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6fcfee:L6fcfee:{c.instructions+=5;NFSU2_TR(0x6fcfee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcff4:{NFSU2_TR(0x6fcff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6fcff7:{NFSU2_TR(0x6fcff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6fcffd:{NFSU2_TR(0x6fcffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6fcfff:{NFSU2_TR(0x6fcfff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6fd002ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6fc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
