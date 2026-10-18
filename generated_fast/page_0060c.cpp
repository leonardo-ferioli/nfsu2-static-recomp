#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60c(u8* __restrict R,Cpu& c);
u32 page_60c(Cpu& c){return body_60c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60c001:goto L60c001;
case 0x60c004:c.instructions+=2;goto B60c004;
case 0x60c008:c.instructions+=1;goto B60c008;
case 0x60c010:goto L60c010;
case 0x60c017:c.instructions+=9;goto B60c017;
case 0x60c018:c.instructions+=8;goto B60c018;
case 0x60c01b:c.instructions+=7;goto B60c01b;
case 0x60c01c:c.instructions+=6;goto B60c01c;
case 0x60c020:c.instructions+=5;goto B60c020;
case 0x60c023:c.instructions+=4;goto B60c023;
case 0x60c027:c.instructions+=3;goto B60c027;
case 0x60c02b:c.instructions+=2;goto B60c02b;
case 0x60c02c:c.instructions+=1;goto B60c02c;
case 0x60c031:goto L60c031;
case 0x60c032:c.instructions+=3;goto B60c032;
case 0x60c034:c.instructions+=2;goto B60c034;
case 0x60c038:c.instructions+=1;goto B60c038;
case 0x60c03d:goto L60c03d;
case 0x60c041:c.instructions+=3;goto B60c041;
case 0x60c042:c.instructions+=2;goto B60c042;
case 0x60c043:c.instructions+=1;goto B60c043;
case 0x60c050:goto L60c050;
case 0x60c051:c.instructions+=13;goto B60c051;
case 0x60c055:c.instructions+=12;goto B60c055;
case 0x60c056:c.instructions+=11;goto B60c056;
case 0x60c05a:c.instructions+=10;goto B60c05a;
case 0x60c05b:c.instructions+=9;goto B60c05b;
case 0x60c05d:c.instructions+=8;goto B60c05d;
case 0x60c064:c.instructions+=7;goto B60c064;
case 0x60c065:c.instructions+=6;goto B60c065;
case 0x60c068:c.instructions+=5;goto B60c068;
case 0x60c06b:c.instructions+=4;goto B60c06b;
case 0x60c06c:c.instructions+=3;goto B60c06c;
case 0x60c06e:c.instructions+=2;goto B60c06e;
case 0x60c072:c.instructions+=1;goto B60c072;
case 0x60c077:goto L60c077;
case 0x60c078:c.instructions+=3;goto B60c078;
case 0x60c07a:c.instructions+=2;goto B60c07a;
case 0x60c07e:c.instructions+=1;goto B60c07e;
case 0x60c083:goto L60c083;
case 0x60c087:c.instructions+=13;goto B60c087;
case 0x60c08b:c.instructions+=12;goto B60c08b;
case 0x60c08c:c.instructions+=11;goto B60c08c;
case 0x60c08e:c.instructions+=10;goto B60c08e;
case 0x60c095:c.instructions+=9;goto B60c095;
case 0x60c098:c.instructions+=8;goto B60c098;
case 0x60c09b:c.instructions+=7;goto B60c09b;
case 0x60c09e:c.instructions+=6;goto B60c09e;
case 0x60c0a2:c.instructions+=5;goto B60c0a2;
case 0x60c0a3:c.instructions+=4;goto B60c0a3;
case 0x60c0a4:c.instructions+=3;goto B60c0a4;
case 0x60c0a5:c.instructions+=2;goto B60c0a5;
case 0x60c0a8:c.instructions+=1;goto B60c0a8;
case 0x60c0b0:goto L60c0b0;
case 0x60c0b3:c.instructions+=5;goto B60c0b3;
case 0x60c0b4:c.instructions+=4;goto B60c0b4;
case 0x60c0b6:c.instructions+=3;goto B60c0b6;
case 0x60c0b8:c.instructions+=2;goto B60c0b8;
case 0x60c0b9:c.instructions+=1;goto B60c0b9;
case 0x60c0bb:goto L60c0bb;
case 0x60c0bf:c.instructions+=1;goto B60c0bf;
case 0x60c0c2:goto L60c0c2;
case 0x60c0c4:c.instructions+=1;goto B60c0c4;
case 0x60c0c6:goto L60c0c6;
case 0x60c0c9:c.instructions+=3;goto B60c0c9;
case 0x60c0d0:c.instructions+=2;goto B60c0d0;
case 0x60c0d3:c.instructions+=1;goto B60c0d3;
case 0x60c0d5:goto L60c0d5;
case 0x60c0d6:c.instructions+=3;goto B60c0d6;
case 0x60c0d9:c.instructions+=2;goto B60c0d9;
case 0x60c0db:c.instructions+=1;goto B60c0db;
case 0x60c0dd:goto L60c0dd;
case 0x60c0e0:goto L60c0e0;
case 0x60c0e1:c.instructions+=2;goto B60c0e1;
case 0x60c0e2:c.instructions+=1;goto B60c0e2;
case 0x60c0f0:goto L60c0f0;
case 0x60c0f4:c.instructions+=4;goto B60c0f4;
case 0x60c0f5:c.instructions+=3;goto B60c0f5;
case 0x60c0f6:c.instructions+=2;goto B60c0f6;
case 0x60c0f8:c.instructions+=1;goto B60c0f8;
case 0x60c0fd:goto L60c0fd;
case 0x60c100:c.instructions+=1;goto B60c100;
case 0x60c102:goto L60c102;
case 0x60c105:c.instructions+=4;goto B60c105;
case 0x60c108:c.instructions+=3;goto B60c108;
case 0x60c10c:c.instructions+=2;goto B60c10c;
case 0x60c10d:c.instructions+=1;goto B60c10d;
case 0x60c110:goto L60c110;
case 0x60c112:c.instructions+=2;goto B60c112;
case 0x60c113:c.instructions+=1;goto B60c113;
case 0x60c120:goto L60c120;
case 0x60c121:c.instructions+=6;goto B60c121;
case 0x60c122:c.instructions+=5;goto B60c122;
case 0x60c125:c.instructions+=4;goto B60c125;
case 0x60c127:c.instructions+=3;goto B60c127;
case 0x60c129:c.instructions+=2;goto B60c129;
case 0x60c12a:c.instructions+=1;goto B60c12a;
case 0x60c12c:goto L60c12c;
case 0x60c130:c.instructions+=1;goto B60c130;
case 0x60c133:goto L60c133;
case 0x60c136:c.instructions+=2;goto B60c136;
case 0x60c13d:c.instructions+=1;goto B60c13d;
case 0x60c13f:goto L60c13f;
case 0x60c140:c.instructions+=3;goto B60c140;
case 0x60c143:c.instructions+=2;goto B60c143;
case 0x60c145:c.instructions+=1;goto B60c145;
case 0x60c147:goto L60c147;
case 0x60c148:c.instructions+=4;goto B60c148;
case 0x60c149:c.instructions+=3;goto B60c149;
case 0x60c14b:c.instructions+=2;goto B60c14b;
case 0x60c14c:c.instructions+=1;goto B60c14c;
case 0x60c14f:goto L60c14f;
case 0x60c152:c.instructions+=1;goto B60c152;
case 0x60c154:goto L60c154;
case 0x60c155:c.instructions+=6;goto B60c155;
case 0x60c158:c.instructions+=5;goto B60c158;
case 0x60c159:c.instructions+=4;goto B60c159;
case 0x60c15c:c.instructions+=3;goto B60c15c;
case 0x60c160:c.instructions+=2;goto B60c160;
case 0x60c161:c.instructions+=1;goto B60c161;
case 0x60c170:goto L60c170;
case 0x60c174:c.instructions+=4;goto B60c174;
case 0x60c175:c.instructions+=3;goto B60c175;
case 0x60c176:c.instructions+=2;goto B60c176;
case 0x60c178:c.instructions+=1;goto B60c178;
case 0x60c17d:goto L60c17d;
case 0x60c180:c.instructions+=1;goto B60c180;
case 0x60c182:goto L60c182;
case 0x60c184:c.instructions+=1;goto B60c184;
case 0x60c186:goto L60c186;
case 0x60c189:c.instructions+=4;goto B60c189;
case 0x60c18c:c.instructions+=3;goto B60c18c;
case 0x60c190:c.instructions+=2;goto B60c190;
case 0x60c191:c.instructions+=1;goto B60c191;
case 0x60c194:goto L60c194;
case 0x60c196:c.instructions+=2;goto B60c196;
case 0x60c197:c.instructions+=1;goto B60c197;
case 0x60c1a0:goto L60c1a0;
case 0x60c1a1:c.instructions+=9;goto B60c1a1;
case 0x60c1a3:c.instructions+=8;goto B60c1a3;
case 0x60c1a6:c.instructions+=7;goto B60c1a6;
case 0x60c1a9:c.instructions+=6;goto B60c1a9;
case 0x60c1ab:c.instructions+=5;goto B60c1ab;
case 0x60c1af:c.instructions+=4;goto B60c1af;
case 0x60c1b0:c.instructions+=3;goto B60c1b0;
case 0x60c1b4:c.instructions+=2;goto B60c1b4;
case 0x60c1b5:c.instructions+=1;goto B60c1b5;
case 0x60c1ba:goto L60c1ba;
case 0x60c1be:c.instructions+=5;goto B60c1be;
case 0x60c1c2:c.instructions+=4;goto B60c1c2;
case 0x60c1c8:c.instructions+=3;goto B60c1c8;
case 0x60c1ca:c.instructions+=2;goto B60c1ca;
case 0x60c1cb:c.instructions+=1;goto B60c1cb;
case 0x60c1d0:goto L60c1d0;
case 0x60c1d4:c.instructions+=16;goto B60c1d4;
case 0x60c1d8:c.instructions+=15;goto B60c1d8;
case 0x60c1da:c.instructions+=14;goto B60c1da;
case 0x60c1dc:c.instructions+=13;goto B60c1dc;
case 0x60c1e0:c.instructions+=12;goto B60c1e0;
case 0x60c1e2:c.instructions+=11;goto B60c1e2;
case 0x60c1e3:c.instructions+=10;goto B60c1e3;
case 0x60c1e5:c.instructions+=9;goto B60c1e5;
case 0x60c1e7:c.instructions+=8;goto B60c1e7;
case 0x60c1ea:c.instructions+=7;goto B60c1ea;
case 0x60c1ed:c.instructions+=6;goto B60c1ed;
case 0x60c1f0:c.instructions+=5;goto B60c1f0;
case 0x60c1f3:c.instructions+=4;goto B60c1f3;
case 0x60c1f5:c.instructions+=3;goto B60c1f5;
case 0x60c1f7:c.instructions+=2;goto B60c1f7;
case 0x60c1fd:c.instructions+=1;goto B60c1fd;
case 0x60c202:goto L60c202;
case 0x60c208:c.instructions+=3;goto B60c208;
case 0x60c20a:c.instructions+=2;goto B60c20a;
case 0x60c20c:c.instructions+=1;goto B60c20c;
case 0x60c211:goto L60c211;
case 0x60c213:c.instructions+=2;goto B60c213;
case 0x60c215:c.instructions+=1;goto B60c215;
case 0x60c217:goto L60c217;
case 0x60c219:c.instructions+=1;goto B60c219;
case 0x60c21b:goto L60c21b;
case 0x60c21e:c.instructions+=1;goto B60c21e;
case 0x60c220:goto L60c220;
case 0x60c225:goto L60c225;
case 0x60c227:c.instructions+=1;goto B60c227;
case 0x60c229:goto L60c229;
case 0x60c22b:c.instructions+=1;goto B60c22b;
case 0x60c22d:goto L60c22d;
case 0x60c230:c.instructions+=1;goto B60c230;
case 0x60c232:goto L60c232;
case 0x60c237:goto L60c237;
case 0x60c239:c.instructions+=11;goto B60c239;
case 0x60c23b:c.instructions+=10;goto B60c23b;
case 0x60c241:c.instructions+=9;goto B60c241;
case 0x60c243:c.instructions+=8;goto B60c243;
case 0x60c245:c.instructions+=7;goto B60c245;
case 0x60c247:c.instructions+=6;goto B60c247;
case 0x60c249:c.instructions+=5;goto B60c249;
case 0x60c24b:c.instructions+=4;goto B60c24b;
case 0x60c24e:c.instructions+=3;goto B60c24e;
case 0x60c250:c.instructions+=2;goto B60c250;
case 0x60c252:c.instructions+=1;goto B60c252;
case 0x60c254:goto L60c254;
case 0x60c257:c.instructions+=1;goto B60c257;
case 0x60c259:goto L60c259;
case 0x60c25e:c.instructions+=3;goto B60c25e;
case 0x60c260:c.instructions+=2;goto B60c260;
case 0x60c261:c.instructions+=1;goto B60c261;
case 0x60c262:goto L60c262;
case 0x60c267:c.instructions+=3;goto B60c267;
case 0x60c269:c.instructions+=2;goto B60c269;
case 0x60c26a:c.instructions+=1;goto B60c26a;
case 0x60c26b:goto L60c26b;
case 0x60c26e:c.instructions+=2;goto B60c26e;
case 0x60c271:c.instructions+=1;goto B60c271;
case 0x60c273:goto L60c273;
case 0x60c276:goto L60c276;
case 0x60c277:c.instructions+=1;goto B60c277;
case 0x60c280:goto L60c280;
case 0x60c281:c.instructions+=15;goto B60c281;
case 0x60c283:c.instructions+=14;goto B60c283;
case 0x60c286:c.instructions+=13;goto B60c286;
case 0x60c287:c.instructions+=12;goto B60c287;
case 0x60c288:c.instructions+=11;goto B60c288;
case 0x60c28b:c.instructions+=10;goto B60c28b;
case 0x60c28e:c.instructions+=9;goto B60c28e;
case 0x60c291:c.instructions+=8;goto B60c291;
case 0x60c293:c.instructions+=7;goto B60c293;
case 0x60c299:c.instructions+=6;goto B60c299;
case 0x60c29b:c.instructions+=5;goto B60c29b;
case 0x60c29e:c.instructions+=4;goto B60c29e;
case 0x60c2a0:c.instructions+=3;goto B60c2a0;
case 0x60c2a2:c.instructions+=2;goto B60c2a2;
case 0x60c2a5:c.instructions+=1;goto B60c2a5;
case 0x60c2a7:goto L60c2a7;
case 0x60c2a8:c.instructions+=2;goto B60c2a8;
case 0x60c2ab:c.instructions+=1;goto B60c2ab;
case 0x60c2b0:goto L60c2b0;
case 0x60c2b3:c.instructions+=20;goto B60c2b3;
case 0x60c2b6:c.instructions+=19;goto B60c2b6;
case 0x60c2b8:c.instructions+=18;goto B60c2b8;
case 0x60c2ba:c.instructions+=17;goto B60c2ba;
case 0x60c2bc:c.instructions+=16;goto B60c2bc;
case 0x60c2be:c.instructions+=15;goto B60c2be;
case 0x60c2c0:c.instructions+=14;goto B60c2c0;
case 0x60c2c2:c.instructions+=13;goto B60c2c2;
case 0x60c2c4:c.instructions+=12;goto B60c2c4;
case 0x60c2c6:c.instructions+=11;goto B60c2c6;
case 0x60c2c8:c.instructions+=10;goto B60c2c8;
case 0x60c2ca:c.instructions+=9;goto B60c2ca;
case 0x60c2cc:c.instructions+=8;goto B60c2cc;
case 0x60c2ce:c.instructions+=7;goto B60c2ce;
case 0x60c2d0:c.instructions+=6;goto B60c2d0;
case 0x60c2d6:c.instructions+=5;goto B60c2d6;
case 0x60c2d8:c.instructions+=4;goto B60c2d8;
case 0x60c2de:c.instructions+=3;goto B60c2de;
case 0x60c2e0:c.instructions+=2;goto B60c2e0;
case 0x60c2e3:c.instructions+=1;goto B60c2e3;
case 0x60c2e5:goto L60c2e5;
case 0x60c2e6:c.instructions+=2;goto B60c2e6;
case 0x60c2e7:c.instructions+=1;goto B60c2e7;
case 0x60c2ec:goto L60c2ec;
case 0x60c2ef:c.instructions+=1;goto B60c2ef;
case 0x60c2f2:goto L60c2f2;
case 0x60c2f5:c.instructions+=4;goto B60c2f5;
case 0x60c2f6:c.instructions+=3;goto B60c2f6;
case 0x60c2f9:c.instructions+=2;goto B60c2f9;
case 0x60c2fb:c.instructions+=1;goto B60c2fb;
case 0x60c2fd:goto L60c2fd;
case 0x60c2fe:goto L60c2fe;
case 0x60c301:c.instructions+=11;goto B60c301;
case 0x60c304:c.instructions+=10;goto B60c304;
case 0x60c305:c.instructions+=9;goto B60c305;
case 0x60c308:c.instructions+=8;goto B60c308;
case 0x60c30a:c.instructions+=7;goto B60c30a;
case 0x60c30c:c.instructions+=6;goto B60c30c;
case 0x60c30e:c.instructions+=5;goto B60c30e;
case 0x60c311:c.instructions+=4;goto B60c311;
case 0x60c312:c.instructions+=3;goto B60c312;
case 0x60c315:c.instructions+=2;goto B60c315;
case 0x60c316:c.instructions+=1;goto B60c316;
case 0x60c320:goto L60c320;
case 0x60c321:c.instructions+=34;goto B60c321;
case 0x60c323:c.instructions+=33;goto B60c323;
case 0x60c326:c.instructions+=32;goto B60c326;
case 0x60c32c:c.instructions+=31;goto B60c32c;
case 0x60c32d:c.instructions+=30;goto B60c32d;
case 0x60c330:c.instructions+=29;goto B60c330;
case 0x60c331:c.instructions+=28;goto B60c331;
case 0x60c334:c.instructions+=27;goto B60c334;
case 0x60c335:c.instructions+=26;goto B60c335;
case 0x60c337:c.instructions+=25;goto B60c337;
case 0x60c339:c.instructions+=24;goto B60c339;
case 0x60c33b:c.instructions+=23;goto B60c33b;
case 0x60c33c:c.instructions+=22;goto B60c33c;
case 0x60c340:c.instructions+=21;goto B60c340;
case 0x60c341:c.instructions+=20;goto B60c341;
case 0x60c345:c.instructions+=19;goto B60c345;
case 0x60c346:c.instructions+=18;goto B60c346;
case 0x60c34a:c.instructions+=17;goto B60c34a;
case 0x60c352:c.instructions+=16;goto B60c352;
case 0x60c35a:c.instructions+=15;goto B60c35a;
case 0x60c362:c.instructions+=14;goto B60c362;
case 0x60c36a:c.instructions+=13;goto B60c36a;
case 0x60c372:c.instructions+=12;goto B60c372;
case 0x60c37d:c.instructions+=11;goto B60c37d;
case 0x60c388:c.instructions+=10;goto B60c388;
case 0x60c393:c.instructions+=9;goto B60c393;
case 0x60c39e:c.instructions+=8;goto B60c39e;
case 0x60c3a9:c.instructions+=7;goto B60c3a9;
case 0x60c3b4:c.instructions+=6;goto B60c3b4;
case 0x60c3bf:c.instructions+=5;goto B60c3bf;
case 0x60c3ca:c.instructions+=4;goto B60c3ca;
case 0x60c3d5:c.instructions+=3;goto B60c3d5;
case 0x60c3e0:c.instructions+=2;goto B60c3e0;
case 0x60c3eb:c.instructions+=1;goto B60c3eb;
case 0x60c3f0:goto L60c3f0;
case 0x60c3f4:c.instructions+=41;goto B60c3f4;
case 0x60c3f7:c.instructions+=40;goto B60c3f7;
case 0x60c3fa:c.instructions+=39;goto B60c3fa;
case 0x60c3fe:c.instructions+=38;goto B60c3fe;
case 0x60c401:c.instructions+=37;goto B60c401;
case 0x60c403:c.instructions+=36;goto B60c403;
case 0x60c407:c.instructions+=35;goto B60c407;
case 0x60c409:c.instructions+=34;goto B60c409;
case 0x60c40c:c.instructions+=33;goto B60c40c;
case 0x60c40e:c.instructions+=32;goto B60c40e;
case 0x60c412:c.instructions+=31;goto B60c412;
case 0x60c419:c.instructions+=30;goto B60c419;
case 0x60c41d:c.instructions+=29;goto B60c41d;
case 0x60c41f:c.instructions+=28;goto B60c41f;
case 0x60c421:c.instructions+=27;goto B60c421;
case 0x60c428:c.instructions+=26;goto B60c428;
case 0x60c42c:c.instructions+=25;goto B60c42c;
case 0x60c42e:c.instructions+=24;goto B60c42e;
case 0x60c432:c.instructions+=23;goto B60c432;
case 0x60c434:c.instructions+=22;goto B60c434;
case 0x60c436:c.instructions+=21;goto B60c436;
case 0x60c43d:c.instructions+=20;goto B60c43d;
case 0x60c43f:c.instructions+=19;goto B60c43f;
case 0x60c441:c.instructions+=18;goto B60c441;
case 0x60c448:c.instructions+=17;goto B60c448;
case 0x60c44c:c.instructions+=16;goto B60c44c;
case 0x60c44e:c.instructions+=15;goto B60c44e;
case 0x60c453:c.instructions+=14;goto B60c453;
case 0x60c457:c.instructions+=13;goto B60c457;
case 0x60c459:c.instructions+=12;goto B60c459;
case 0x60c45b:c.instructions+=11;goto B60c45b;
case 0x60c462:c.instructions+=10;goto B60c462;
case 0x60c464:c.instructions+=9;goto B60c464;
case 0x60c466:c.instructions+=8;goto B60c466;
case 0x60c46d:c.instructions+=7;goto B60c46d;
case 0x60c471:c.instructions+=6;goto B60c471;
case 0x60c475:c.instructions+=5;goto B60c475;
case 0x60c477:c.instructions+=4;goto B60c477;
case 0x60c47e:c.instructions+=3;goto B60c47e;
case 0x60c485:c.instructions+=2;goto B60c485;
case 0x60c48c:c.instructions+=1;goto B60c48c;
case 0x60c48e:goto L60c48e;
case 0x60c491:goto L60c491;
case 0x60c497:c.instructions+=4;goto B60c497;
case 0x60c49a:c.instructions+=3;goto B60c49a;
case 0x60c49d:c.instructions+=2;goto B60c49d;
case 0x60c4a1:c.instructions+=1;goto B60c4a1;
case 0x60c4a3:goto L60c4a3;
case 0x60c4a9:c.instructions+=2;goto B60c4a9;
case 0x60c4b0:c.instructions+=1;goto B60c4b0;
case 0x60c4b2:goto L60c4b2;
case 0x60c4b6:goto L60c4b6;
case 0x60c4bc:c.instructions+=1;goto B60c4bc;
case 0x60c4be:goto L60c4be;
case 0x60c4c3:c.instructions+=1;goto B60c4c3;
case 0x60c4c5:goto L60c4c5;
case 0x60c4c7:c.instructions+=1;goto B60c4c7;
case 0x60c4ca:goto L60c4ca;
case 0x60c4ce:c.instructions+=5;goto B60c4ce;
case 0x60c4d2:c.instructions+=4;goto B60c4d2;
case 0x60c4d6:c.instructions+=3;goto B60c4d6;
case 0x60c4dc:c.instructions+=2;goto B60c4dc;
case 0x60c4de:c.instructions+=1;goto B60c4de;
case 0x60c4e0:goto L60c4e0;
case 0x60c4e2:c.instructions+=3;goto B60c4e2;
case 0x60c4e4:c.instructions+=2;goto B60c4e4;
case 0x60c4e9:c.instructions+=1;goto B60c4e9;
case 0x60c4ef:goto L60c4ef;
case 0x60c4f6:c.instructions+=1;goto B60c4f6;
case 0x60c4fc:goto L60c4fc;
case 0x60c4fe:c.instructions+=11;goto B60c4fe;
case 0x60c500:c.instructions+=10;goto B60c500;
case 0x60c504:c.instructions+=9;goto B60c504;
case 0x60c507:c.instructions+=8;goto B60c507;
case 0x60c50a:c.instructions+=7;goto B60c50a;
case 0x60c50e:c.instructions+=6;goto B60c50e;
case 0x60c511:c.instructions+=5;goto B60c511;
case 0x60c514:c.instructions+=4;goto B60c514;
case 0x60c516:c.instructions+=3;goto B60c516;
case 0x60c519:c.instructions+=2;goto B60c519;
case 0x60c51d:c.instructions+=1;goto B60c51d;
case 0x60c523:goto L60c523;
case 0x60c525:c.instructions+=2;goto B60c525;
case 0x60c527:c.instructions+=1;goto B60c527;
case 0x60c529:goto L60c529;
case 0x60c52d:c.instructions+=1;goto B60c52d;
case 0x60c530:goto L60c530;
case 0x60c533:c.instructions+=8;goto B60c533;
case 0x60c535:c.instructions+=7;goto B60c535;
case 0x60c539:c.instructions+=6;goto B60c539;
case 0x60c53c:c.instructions+=5;goto B60c53c;
case 0x60c540:c.instructions+=4;goto B60c540;
case 0x60c545:c.instructions+=3;goto B60c545;
case 0x60c547:c.instructions+=2;goto B60c547;
case 0x60c54b:c.instructions+=1;goto B60c54b;
case 0x60c54d:goto L60c54d;
case 0x60c551:c.instructions+=4;goto B60c551;
case 0x60c552:c.instructions+=3;goto B60c552;
case 0x60c556:c.instructions+=2;goto B60c556;
case 0x60c557:c.instructions+=1;goto B60c557;
case 0x60c55c:goto L60c55c;
case 0x60c560:c.instructions+=1;goto B60c560;
case 0x60c563:goto L60c563;
case 0x60c567:c.instructions+=13;goto B60c567;
case 0x60c56b:c.instructions+=12;goto B60c56b;
case 0x60c56f:c.instructions+=11;goto B60c56f;
case 0x60c573:c.instructions+=10;goto B60c573;
case 0x60c577:c.instructions+=9;goto B60c577;
case 0x60c579:c.instructions+=8;goto B60c579;
case 0x60c57d:c.instructions+=7;goto B60c57d;
case 0x60c581:c.instructions+=6;goto B60c581;
case 0x60c583:c.instructions+=5;goto B60c583;
case 0x60c585:c.instructions+=4;goto B60c585;
case 0x60c58b:c.instructions+=3;goto B60c58b;
case 0x60c58d:c.instructions+=2;goto B60c58d;
case 0x60c590:c.instructions+=1;goto B60c590;
case 0x60c592:goto L60c592;
case 0x60c597:c.instructions+=5;goto B60c597;
case 0x60c599:c.instructions+=4;goto B60c599;
case 0x60c59a:c.instructions+=3;goto B60c59a;
case 0x60c59d:c.instructions+=2;goto B60c59d;
case 0x60c59f:c.instructions+=1;goto B60c59f;
case 0x60c5a1:goto L60c5a1;
case 0x60c5a3:c.instructions+=1;goto B60c5a3;
case 0x60c5a5:goto L60c5a5;
case 0x60c5aa:goto L60c5aa;
case 0x60c5ae:c.instructions+=5;goto B60c5ae;
case 0x60c5b0:c.instructions+=4;goto B60c5b0;
case 0x60c5b4:c.instructions+=3;goto B60c5b4;
case 0x60c5b7:c.instructions+=2;goto B60c5b7;
case 0x60c5ba:c.instructions+=1;goto B60c5ba;
case 0x60c5c0:goto L60c5c0;
case 0x60c5c3:c.instructions+=1;goto B60c5c3;
case 0x60c5c8:goto L60c5c8;
case 0x60c5cb:c.instructions+=1;goto B60c5cb;
case 0x60c5cd:goto L60c5cd;
case 0x60c5cf:c.instructions+=2;goto B60c5cf;
case 0x60c5d1:c.instructions+=1;goto B60c5d1;
case 0x60c5d3:goto L60c5d3;
case 0x60c5d7:c.instructions+=2;goto B60c5d7;
case 0x60c5da:c.instructions+=1;goto B60c5da;
case 0x60c5e0:goto L60c5e0;
case 0x60c5e3:c.instructions+=8;goto B60c5e3;
case 0x60c5e8:c.instructions+=7;goto B60c5e8;
case 0x60c5ea:c.instructions+=6;goto B60c5ea;
case 0x60c5ec:c.instructions+=5;goto B60c5ec;
case 0x60c5f0:c.instructions+=4;goto B60c5f0;
case 0x60c5f3:c.instructions+=3;goto B60c5f3;
case 0x60c5f7:c.instructions+=2;goto B60c5f7;
case 0x60c5fb:c.instructions+=1;goto B60c5fb;
case 0x60c5fd:goto L60c5fd;
case 0x60c601:c.instructions+=4;goto B60c601;
case 0x60c602:c.instructions+=3;goto B60c602;
case 0x60c606:c.instructions+=2;goto B60c606;
case 0x60c607:c.instructions+=1;goto B60c607;
case 0x60c60c:goto L60c60c;
case 0x60c610:c.instructions+=1;goto B60c610;
case 0x60c613:goto L60c613;
case 0x60c617:c.instructions+=13;goto B60c617;
case 0x60c61b:c.instructions+=12;goto B60c61b;
case 0x60c61f:c.instructions+=11;goto B60c61f;
case 0x60c623:c.instructions+=10;goto B60c623;
case 0x60c627:c.instructions+=9;goto B60c627;
case 0x60c629:c.instructions+=8;goto B60c629;
case 0x60c62d:c.instructions+=7;goto B60c62d;
case 0x60c631:c.instructions+=6;goto B60c631;
case 0x60c633:c.instructions+=5;goto B60c633;
case 0x60c635:c.instructions+=4;goto B60c635;
case 0x60c63b:c.instructions+=3;goto B60c63b;
case 0x60c63d:c.instructions+=2;goto B60c63d;
case 0x60c640:c.instructions+=1;goto B60c640;
case 0x60c646:goto L60c646;
case 0x60c648:c.instructions+=7;goto B60c648;
case 0x60c64b:c.instructions+=6;goto B60c64b;
case 0x60c64f:c.instructions+=5;goto B60c64f;
case 0x60c651:c.instructions+=4;goto B60c651;
case 0x60c652:c.instructions+=3;goto B60c652;
case 0x60c655:c.instructions+=2;goto B60c655;
case 0x60c657:c.instructions+=1;goto B60c657;
case 0x60c659:goto L60c659;
case 0x60c65e:goto L60c65e;
case 0x60c661:goto L60c661;
case 0x60c664:c.instructions+=4;goto B60c664;
case 0x60c667:c.instructions+=3;goto B60c667;
case 0x60c66d:c.instructions+=2;goto B60c66d;
case 0x60c671:c.instructions+=1;goto B60c671;
case 0x60c677:goto L60c677;
case 0x60c678:c.instructions+=5;goto B60c678;
case 0x60c679:c.instructions+=4;goto B60c679;
case 0x60c67a:c.instructions+=3;goto B60c67a;
case 0x60c67c:c.instructions+=2;goto B60c67c;
case 0x60c67d:c.instructions+=1;goto B60c67d;
case 0x60c680:goto L60c680;
case 0x60c682:c.instructions+=4;goto B60c682;
case 0x60c687:c.instructions+=3;goto B60c687;
case 0x60c68c:c.instructions+=2;goto B60c68c;
case 0x60c68e:c.instructions+=1;goto B60c68e;
case 0x60c693:goto L60c693;
case 0x60c696:c.instructions+=2;goto B60c696;
case 0x60c69b:c.instructions+=1;goto B60c69b;
case 0x60c6a0:goto L60c6a0;
case 0x60c6a1:c.instructions+=5;goto B60c6a1;
case 0x60c6a3:c.instructions+=4;goto B60c6a3;
case 0x60c6a8:c.instructions+=3;goto B60c6a8;
case 0x60c6ad:c.instructions+=2;goto B60c6ad;
case 0x60c6af:c.instructions+=1;goto B60c6af;
case 0x60c6b4:goto L60c6b4;
case 0x60c6b7:c.instructions+=2;goto B60c6b7;
case 0x60c6bc:c.instructions+=1;goto B60c6bc;
case 0x60c6c1:goto L60c6c1;
case 0x60c6c4:c.instructions+=2;goto B60c6c4;
case 0x60c6c5:c.instructions+=1;goto B60c6c5;
case 0x60c6ca:goto L60c6ca;
case 0x60c6cc:c.instructions+=4;goto B60c6cc;
case 0x60c6cf:c.instructions+=3;goto B60c6cf;
case 0x60c6d2:c.instructions+=2;goto B60c6d2;
case 0x60c6d8:c.instructions+=1;goto B60c6d8;
case 0x60c6da:goto L60c6da;
case 0x60c6dc:c.instructions+=34;goto B60c6dc;
case 0x60c6e2:c.instructions+=33;goto B60c6e2;
case 0x60c6e8:c.instructions+=32;goto B60c6e8;
case 0x60c6e9:c.instructions+=31;goto B60c6e9;
case 0x60c6eb:c.instructions+=30;goto B60c6eb;
case 0x60c6f0:c.instructions+=29;goto B60c6f0;
case 0x60c6fa:c.instructions+=28;goto B60c6fa;
case 0x60c704:c.instructions+=27;goto B60c704;
case 0x60c70e:c.instructions+=26;goto B60c70e;
case 0x60c718:c.instructions+=25;goto B60c718;
case 0x60c722:c.instructions+=24;goto B60c722;
case 0x60c72c:c.instructions+=23;goto B60c72c;
case 0x60c736:c.instructions+=22;goto B60c736;
case 0x60c740:c.instructions+=21;goto B60c740;
case 0x60c74a:c.instructions+=20;goto B60c74a;
case 0x60c754:c.instructions+=19;goto B60c754;
case 0x60c75e:c.instructions+=18;goto B60c75e;
case 0x60c768:c.instructions+=17;goto B60c768;
case 0x60c772:c.instructions+=16;goto B60c772;
case 0x60c77c:c.instructions+=15;goto B60c77c;
case 0x60c786:c.instructions+=14;goto B60c786;
case 0x60c790:c.instructions+=13;goto B60c790;
case 0x60c796:c.instructions+=12;goto B60c796;
case 0x60c79c:c.instructions+=11;goto B60c79c;
case 0x60c7a2:c.instructions+=10;goto B60c7a2;
case 0x60c7a8:c.instructions+=9;goto B60c7a8;
case 0x60c7b2:c.instructions+=8;goto B60c7b2;
case 0x60c7b8:c.instructions+=7;goto B60c7b8;
case 0x60c7be:c.instructions+=6;goto B60c7be;
case 0x60c7c8:c.instructions+=5;goto B60c7c8;
case 0x60c7d2:c.instructions+=4;goto B60c7d2;
case 0x60c7dc:c.instructions+=3;goto B60c7dc;
case 0x60c7e2:c.instructions+=2;goto B60c7e2;
case 0x60c7ec:c.instructions+=1;goto B60c7ec;
case 0x60c7f1:goto L60c7f1;
case 0x60c7f4:c.instructions+=2;goto B60c7f4;
case 0x60c7f5:c.instructions+=1;goto B60c7f5;
case 0x60c7fa:goto L60c7fa;
case 0x60c7fd:c.instructions+=3;goto B60c7fd;
case 0x60c802:c.instructions+=2;goto B60c802;
case 0x60c803:c.instructions+=1;goto B60c803;
case 0x60c810:goto L60c810;
case 0x60c815:c.instructions+=2;goto B60c815;
case 0x60c816:c.instructions+=1;goto B60c816;
case 0x60c81b:goto L60c81b;
case 0x60c81c:c.instructions+=1;goto B60c81c;
case 0x60c820:goto L60c820;
case 0x60c825:c.instructions+=2;goto B60c825;
case 0x60c82a:c.instructions+=1;goto B60c82a;
case 0x60c82f:goto L60c82f;
case 0x60c834:c.instructions+=1;goto B60c834;
case 0x60c839:goto L60c839;
case 0x60c83c:c.instructions+=3;goto B60c83c;
case 0x60c83d:c.instructions+=2;goto B60c83d;
case 0x60c842:c.instructions+=1;goto B60c842;
case 0x60c847:goto L60c847;
case 0x60c850:goto L60c850;
case 0x60c854:c.instructions+=3;goto B60c854;
case 0x60c857:c.instructions+=2;goto B60c857;
case 0x60c85a:c.instructions+=1;goto B60c85a;
case 0x60c85c:goto L60c85c;
case 0x60c863:c.instructions+=1;goto B60c863;
case 0x60c86a:goto L60c86a;
case 0x60c86f:c.instructions+=1;goto B60c86f;
case 0x60c870:goto L60c870;
case 0x60c872:c.instructions+=1;goto B60c872;
case 0x60c8a0:goto L60c8a0;
case 0x60c8a4:c.instructions+=3;goto B60c8a4;
case 0x60c8a7:c.instructions+=2;goto B60c8a7;
case 0x60c8aa:c.instructions+=1;goto B60c8aa;
case 0x60c8ac:goto L60c8ac;
case 0x60c8b3:c.instructions+=1;goto B60c8b3;
case 0x60c8ba:goto L60c8ba;
case 0x60c8bf:c.instructions+=1;goto B60c8bf;
case 0x60c8c0:goto L60c8c0;
case 0x60c8c2:c.instructions+=1;goto B60c8c2;
case 0x60c8f0:goto L60c8f0;
case 0x60c8f4:c.instructions+=2;goto B60c8f4;
case 0x60c8f7:c.instructions+=1;goto B60c8f7;
case 0x60c8f9:goto L60c8f9;
case 0x60c900:c.instructions+=1;goto B60c900;
case 0x60c907:goto L60c907;
case 0x60c90c:c.instructions+=1;goto B60c90c;
case 0x60c90d:goto L60c90d;
case 0x60c90f:c.instructions+=1;goto B60c90f;
case 0x60c940:goto L60c940;
case 0x60c946:c.instructions+=7;goto B60c946;
case 0x60c94c:c.instructions+=6;goto B60c94c;
case 0x60c94d:c.instructions+=5;goto B60c94d;
case 0x60c94e:c.instructions+=4;goto B60c94e;
case 0x60c954:c.instructions+=3;goto B60c954;
case 0x60c957:c.instructions+=2;goto B60c957;
case 0x60c959:c.instructions+=1;goto B60c959;
case 0x60c95b:goto L60c95b;
case 0x60c961:c.instructions+=1;goto B60c961;
case 0x60c967:goto L60c967;
case 0x60c96d:c.instructions+=1;goto B60c96d;
case 0x60c96f:goto L60c96f;
case 0x60c975:c.instructions+=1;goto B60c975;
case 0x60c97b:goto L60c97b;
case 0x60c981:c.instructions+=1;goto B60c981;
case 0x60c983:goto L60c983;
case 0x60c989:c.instructions+=1;goto B60c989;
case 0x60c98f:goto L60c98f;
case 0x60c995:c.instructions+=1;goto B60c995;
case 0x60c997:goto L60c997;
case 0x60c99d:c.instructions+=1;goto B60c99d;
case 0x60c9a3:goto L60c9a3;
case 0x60c9a9:c.instructions+=1;goto B60c9a9;
case 0x60c9ab:goto L60c9ab;
case 0x60c9b1:c.instructions+=1;goto B60c9b1;
case 0x60c9b7:goto L60c9b7;
case 0x60c9bd:c.instructions+=1;goto B60c9bd;
case 0x60c9bf:goto L60c9bf;
case 0x60c9c5:c.instructions+=1;goto B60c9c5;
case 0x60c9cb:goto L60c9cb;
case 0x60c9d1:c.instructions+=1;goto B60c9d1;
case 0x60c9d3:goto L60c9d3;
case 0x60c9d9:c.instructions+=1;goto B60c9d9;
case 0x60c9df:goto L60c9df;
case 0x60c9e5:c.instructions+=1;goto B60c9e5;
case 0x60c9e7:goto L60c9e7;
case 0x60c9ed:c.instructions+=1;goto B60c9ed;
case 0x60c9f3:goto L60c9f3;
case 0x60c9f9:c.instructions+=1;goto B60c9f9;
case 0x60c9fb:goto L60c9fb;
case 0x60ca01:c.instructions+=1;goto B60ca01;
case 0x60ca07:goto L60ca07;
case 0x60ca0d:c.instructions+=1;goto B60ca0d;
case 0x60ca0f:goto L60ca0f;
case 0x60ca15:c.instructions+=1;goto B60ca15;
case 0x60ca1b:goto L60ca1b;
case 0x60ca21:c.instructions+=1;goto B60ca21;
case 0x60ca23:goto L60ca23;
case 0x60ca29:c.instructions+=1;goto B60ca29;
case 0x60ca2f:goto L60ca2f;
case 0x60ca35:c.instructions+=1;goto B60ca35;
case 0x60ca37:goto L60ca37;
case 0x60ca3d:c.instructions+=1;goto B60ca3d;
case 0x60ca43:goto L60ca43;
case 0x60ca49:c.instructions+=1;goto B60ca49;
case 0x60ca4b:goto L60ca4b;
case 0x60ca51:c.instructions+=1;goto B60ca51;
case 0x60ca57:goto L60ca57;
case 0x60ca5d:c.instructions+=1;goto B60ca5d;
case 0x60ca5f:goto L60ca5f;
case 0x60ca65:c.instructions+=1;goto B60ca65;
case 0x60ca6b:goto L60ca6b;
case 0x60ca71:c.instructions+=1;goto B60ca71;
case 0x60ca73:goto L60ca73;
case 0x60ca79:c.instructions+=1;goto B60ca79;
case 0x60ca7f:goto L60ca7f;
case 0x60ca85:c.instructions+=1;goto B60ca85;
case 0x60ca87:goto L60ca87;
case 0x60ca8d:c.instructions+=1;goto B60ca8d;
case 0x60ca93:goto L60ca93;
case 0x60ca99:c.instructions+=1;goto B60ca99;
case 0x60ca9b:goto L60ca9b;
case 0x60caa1:c.instructions+=1;goto B60caa1;
case 0x60caa7:goto L60caa7;
case 0x60caad:c.instructions+=1;goto B60caad;
case 0x60caaf:goto L60caaf;
case 0x60cab5:c.instructions+=1;goto B60cab5;
case 0x60cabb:goto L60cabb;
case 0x60cac1:c.instructions+=1;goto B60cac1;
case 0x60cac3:goto L60cac3;
case 0x60cac9:c.instructions+=1;goto B60cac9;
case 0x60cacf:goto L60cacf;
case 0x60cad5:c.instructions+=1;goto B60cad5;
case 0x60cad7:goto L60cad7;
case 0x60cadd:c.instructions+=1;goto B60cadd;
case 0x60cae3:goto L60cae3;
case 0x60cae9:c.instructions+=1;goto B60cae9;
case 0x60caeb:goto L60caeb;
case 0x60caf1:c.instructions+=1;goto B60caf1;
case 0x60caf7:goto L60caf7;
case 0x60cafd:c.instructions+=1;goto B60cafd;
case 0x60caff:goto L60caff;
case 0x60cb05:c.instructions+=1;goto B60cb05;
case 0x60cb0b:goto L60cb0b;
case 0x60cb11:c.instructions+=1;goto B60cb11;
case 0x60cb13:goto L60cb13;
case 0x60cb19:c.instructions+=1;goto B60cb19;
case 0x60cb1f:goto L60cb1f;
case 0x60cb25:c.instructions+=1;goto B60cb25;
case 0x60cb27:goto L60cb27;
case 0x60cb2d:c.instructions+=1;goto B60cb2d;
case 0x60cb33:goto L60cb33;
case 0x60cb35:c.instructions+=5;goto B60cb35;
case 0x60cb37:c.instructions+=4;goto B60cb37;
case 0x60cb39:c.instructions+=3;goto B60cb39;
case 0x60cb3b:c.instructions+=2;goto B60cb3b;
case 0x60cb3c:c.instructions+=1;goto B60cb3c;
case 0x60cb3e:goto L60cb3e;
case 0x60cb44:c.instructions+=2;goto B60cb44;
case 0x60cb46:c.instructions+=1;goto B60cb46;
case 0x60cb48:goto L60cb48;
case 0x60cb4d:c.instructions+=1;goto B60cb4d;
case 0x60cb4f:goto L60cb4f;
case 0x60cb55:c.instructions+=2;goto B60cb55;
case 0x60cb57:c.instructions+=1;goto B60cb57;
case 0x60cb59:goto L60cb59;
case 0x60cb5e:c.instructions+=1;goto B60cb5e;
case 0x60cb60:goto L60cb60;
case 0x60cb67:c.instructions+=7;goto B60cb67;
case 0x60cb6d:c.instructions+=6;goto B60cb6d;
case 0x60cb73:c.instructions+=5;goto B60cb73;
case 0x60cb7a:c.instructions+=4;goto B60cb7a;
case 0x60cb7b:c.instructions+=3;goto B60cb7b;
case 0x60cb82:c.instructions+=2;goto B60cb82;
case 0x60cb89:c.instructions+=1;goto B60cb89;
case 0x60cb8b:goto L60cb8b;
case 0x60cb91:c.instructions+=1;goto B60cb91;
case 0x60cb97:goto L60cb97;
case 0x60cb9d:c.instructions+=1;goto B60cb9d;
case 0x60cb9f:goto L60cb9f;
case 0x60cba5:c.instructions+=1;goto B60cba5;
case 0x60cbab:goto L60cbab;
case 0x60cbb1:c.instructions+=1;goto B60cbb1;
case 0x60cbb3:goto L60cbb3;
case 0x60cbb9:c.instructions+=1;goto B60cbb9;
case 0x60cbbf:goto L60cbbf;
case 0x60cbc5:c.instructions+=1;goto B60cbc5;
case 0x60cbc7:goto L60cbc7;
case 0x60cbcd:c.instructions+=1;goto B60cbcd;
case 0x60cbd3:goto L60cbd3;
case 0x60cbd9:c.instructions+=1;goto B60cbd9;
case 0x60cbdb:goto L60cbdb;
case 0x60cbe1:c.instructions+=1;goto B60cbe1;
case 0x60cbe7:goto L60cbe7;
case 0x60cbed:c.instructions+=1;goto B60cbed;
case 0x60cbef:goto L60cbef;
case 0x60cbf5:c.instructions+=1;goto B60cbf5;
case 0x60cbfb:goto L60cbfb;
case 0x60cc01:c.instructions+=1;goto B60cc01;
case 0x60cc03:goto L60cc03;
case 0x60cc09:c.instructions+=1;goto B60cc09;
case 0x60cc0f:goto L60cc0f;
case 0x60cc15:c.instructions+=1;goto B60cc15;
case 0x60cc17:goto L60cc17;
case 0x60cc1d:c.instructions+=1;goto B60cc1d;
case 0x60cc23:goto L60cc23;
case 0x60cc29:c.instructions+=1;goto B60cc29;
case 0x60cc2b:goto L60cc2b;
case 0x60cc31:c.instructions+=1;goto B60cc31;
case 0x60cc37:goto L60cc37;
case 0x60cc3d:c.instructions+=1;goto B60cc3d;
case 0x60cc3f:goto L60cc3f;
case 0x60cc45:c.instructions+=1;goto B60cc45;
case 0x60cc4b:goto L60cc4b;
case 0x60cc51:c.instructions+=1;goto B60cc51;
case 0x60cc53:goto L60cc53;
case 0x60cc59:c.instructions+=1;goto B60cc59;
case 0x60cc5f:goto L60cc5f;
case 0x60cc65:c.instructions+=1;goto B60cc65;
case 0x60cc67:goto L60cc67;
case 0x60cc6d:c.instructions+=1;goto B60cc6d;
case 0x60cc73:goto L60cc73;
case 0x60cc79:c.instructions+=1;goto B60cc79;
case 0x60cc7b:goto L60cc7b;
case 0x60cc81:c.instructions+=1;goto B60cc81;
case 0x60cc87:goto L60cc87;
case 0x60cc8d:c.instructions+=1;goto B60cc8d;
case 0x60cc8f:goto L60cc8f;
case 0x60cc95:c.instructions+=1;goto B60cc95;
case 0x60cc9b:goto L60cc9b;
case 0x60cca1:c.instructions+=1;goto B60cca1;
case 0x60cca3:goto L60cca3;
case 0x60cca9:c.instructions+=1;goto B60cca9;
case 0x60ccaf:goto L60ccaf;
case 0x60ccb5:c.instructions+=1;goto B60ccb5;
case 0x60ccb7:goto L60ccb7;
case 0x60ccbd:c.instructions+=1;goto B60ccbd;
case 0x60ccc3:goto L60ccc3;
case 0x60ccc9:c.instructions+=1;goto B60ccc9;
case 0x60cccb:goto L60cccb;
case 0x60ccd1:c.instructions+=1;goto B60ccd1;
case 0x60ccd7:goto L60ccd7;
case 0x60ccdd:c.instructions+=1;goto B60ccdd;
case 0x60ccdf:goto L60ccdf;
case 0x60cce5:c.instructions+=1;goto B60cce5;
case 0x60cceb:goto L60cceb;
case 0x60ccf1:c.instructions+=1;goto B60ccf1;
case 0x60ccf3:goto L60ccf3;
case 0x60ccf9:c.instructions+=1;goto B60ccf9;
case 0x60ccff:goto L60ccff;
case 0x60cd05:c.instructions+=1;goto B60cd05;
case 0x60cd07:goto L60cd07;
case 0x60cd0d:c.instructions+=1;goto B60cd0d;
case 0x60cd13:goto L60cd13;
case 0x60cd19:c.instructions+=1;goto B60cd19;
case 0x60cd1b:goto L60cd1b;
case 0x60cd21:c.instructions+=1;goto B60cd21;
case 0x60cd27:goto L60cd27;
case 0x60cd2d:c.instructions+=1;goto B60cd2d;
case 0x60cd2f:goto L60cd2f;
case 0x60cd35:c.instructions+=1;goto B60cd35;
case 0x60cd3b:goto L60cd3b;
case 0x60cd41:c.instructions+=1;goto B60cd41;
case 0x60cd43:goto L60cd43;
case 0x60cd49:c.instructions+=1;goto B60cd49;
case 0x60cd4f:goto L60cd4f;
case 0x60cd55:c.instructions+=1;goto B60cd55;
case 0x60cd57:goto L60cd57;
case 0x60cd5d:c.instructions+=1;goto B60cd5d;
case 0x60cd63:goto L60cd63;
case 0x60cd69:c.instructions+=1;goto B60cd69;
case 0x60cd6b:goto L60cd6b;
case 0x60cd71:c.instructions+=1;goto B60cd71;
case 0x60cd77:goto L60cd77;
case 0x60cd7d:c.instructions+=1;goto B60cd7d;
case 0x60cd7f:goto L60cd7f;
case 0x60cd85:c.instructions+=1;goto B60cd85;
case 0x60cd8b:goto L60cd8b;
case 0x60cd91:c.instructions+=1;goto B60cd91;
case 0x60cd93:goto L60cd93;
case 0x60cd99:c.instructions+=1;goto B60cd99;
case 0x60cd9f:goto L60cd9f;
case 0x60cda5:c.instructions+=1;goto B60cda5;
case 0x60cda7:goto L60cda7;
case 0x60cdad:c.instructions+=1;goto B60cdad;
case 0x60cdb3:goto L60cdb3;
case 0x60cdb9:c.instructions+=1;goto B60cdb9;
case 0x60cdbb:goto L60cdbb;
case 0x60cdc1:c.instructions+=1;goto B60cdc1;
case 0x60cdc7:goto L60cdc7;
case 0x60cdcd:c.instructions+=1;goto B60cdcd;
case 0x60cdcf:goto L60cdcf;
case 0x60cdd5:c.instructions+=1;goto B60cdd5;
case 0x60cddb:goto L60cddb;
case 0x60cde1:c.instructions+=1;goto B60cde1;
case 0x60cde3:goto L60cde3;
case 0x60cde9:c.instructions+=1;goto B60cde9;
case 0x60cdef:goto L60cdef;
case 0x60cdf5:c.instructions+=1;goto B60cdf5;
case 0x60cdf7:goto L60cdf7;
case 0x60cdfd:c.instructions+=1;goto B60cdfd;
case 0x60ce03:goto L60ce03;
case 0x60ce09:c.instructions+=2;goto B60ce09;
case 0x60ce0a:c.instructions+=1;goto B60ce0a;
case 0x60ce0c:goto L60ce0c;
case 0x60ce12:c.instructions+=1;goto B60ce12;
case 0x60ce18:goto L60ce18;
case 0x60ce1e:c.instructions+=2;goto B60ce1e;
case 0x60ce1f:c.instructions+=1;goto B60ce1f;
case 0x60ce21:goto L60ce21;
case 0x60ce27:c.instructions+=1;goto B60ce27;
case 0x60ce2d:goto L60ce2d;
case 0x60ce33:c.instructions+=1;goto B60ce33;
case 0x60ce35:goto L60ce35;
case 0x60ce3b:c.instructions+=1;goto B60ce3b;
case 0x60ce41:goto L60ce41;
case 0x60ce47:c.instructions+=1;goto B60ce47;
case 0x60ce49:goto L60ce49;
case 0x60ce4f:c.instructions+=1;goto B60ce4f;
case 0x60ce55:goto L60ce55;
case 0x60ce56:c.instructions+=2;goto B60ce56;
case 0x60ce57:c.instructions+=1;goto B60ce57;
case 0x60ce60:goto L60ce60;
case 0x60ce64:c.instructions+=9;goto B60ce64;
case 0x60ce66:c.instructions+=8;goto B60ce66;
case 0x60ce6a:c.instructions+=7;goto B60ce6a;
case 0x60ce6c:c.instructions+=6;goto B60ce6c;
case 0x60ce6e:c.instructions+=5;goto B60ce6e;
case 0x60ce70:c.instructions+=4;goto B60ce70;
case 0x60ce76:c.instructions+=3;goto B60ce76;
case 0x60ce78:c.instructions+=2;goto B60ce78;
case 0x60ce7b:c.instructions+=1;goto B60ce7b;
case 0x60ce7d:goto L60ce7d;
case 0x60ce83:c.instructions+=3;goto B60ce83;
case 0x60ce85:c.instructions+=2;goto B60ce85;
case 0x60ce88:c.instructions+=1;goto B60ce88;
case 0x60ce8a:goto L60ce8a;
case 0x60ce8d:c.instructions+=5;goto B60ce8d;
case 0x60ce90:c.instructions+=4;goto B60ce90;
case 0x60ce96:c.instructions+=3;goto B60ce96;
case 0x60ce98:c.instructions+=2;goto B60ce98;
case 0x60ce9b:c.instructions+=1;goto B60ce9b;
case 0x60ce9d:goto L60ce9d;
case 0x60ce9f:c.instructions+=2;goto B60ce9f;
case 0x60cea4:c.instructions+=1;goto B60cea4;
case 0x60cea5:goto L60cea5;
case 0x60ceab:c.instructions+=3;goto B60ceab;
case 0x60cead:c.instructions+=2;goto B60cead;
case 0x60ceb0:c.instructions+=1;goto B60ceb0;
case 0x60ceb2:goto L60ceb2;
case 0x60ceb7:c.instructions+=1;goto B60ceb7;
case 0x60ceb8:goto L60ceb8;
case 0x60ceba:c.instructions+=1;goto B60ceba;
case 0x60cec0:goto L60cec0;
case 0x60cec4:c.instructions+=4;goto B60cec4;
case 0x60cec8:c.instructions+=3;goto B60cec8;
case 0x60cec9:c.instructions+=2;goto B60cec9;
case 0x60ceca:c.instructions+=1;goto B60ceca;
case 0x60cecf:goto L60cecf;
case 0x60ced2:c.instructions+=1;goto B60ced2;
case 0x60cee0:goto L60cee0;
case 0x60cee4:c.instructions+=12;goto B60cee4;
case 0x60cee5:c.instructions+=11;goto B60cee5;
case 0x60cee6:c.instructions+=10;goto B60cee6;
case 0x60ceea:c.instructions+=9;goto B60ceea;
case 0x60ceeb:c.instructions+=8;goto B60ceeb;
case 0x60ceef:c.instructions+=7;goto B60ceef;
case 0x60cef0:c.instructions+=6;goto B60cef0;
case 0x60cef1:c.instructions+=5;goto B60cef1;
case 0x60cef3:c.instructions+=4;goto B60cef3;
case 0x60cef4:c.instructions+=3;goto B60cef4;
case 0x60cef5:c.instructions+=2;goto B60cef5;
case 0x60cefa:c.instructions+=1;goto B60cefa;
case 0x60ceff:goto L60ceff;
case 0x60cf04:c.instructions+=3;goto B60cf04;
case 0x60cf07:c.instructions+=2;goto B60cf07;
case 0x60cf09:c.instructions+=1;goto B60cf09;
case 0x60cf0b:goto L60cf0b;
case 0x60cf10:goto L60cf10;
case 0x60cf13:c.instructions+=2;goto B60cf13;
case 0x60cf15:c.instructions+=1;goto B60cf15;
case 0x60cf17:goto L60cf17;
case 0x60cf1a:c.instructions+=1;goto B60cf1a;
case 0x60cf20:goto L60cf20;
case 0x60cf23:c.instructions+=16;goto B60cf23;
case 0x60cf27:c.instructions+=15;goto B60cf27;
case 0x60cf2a:c.instructions+=14;goto B60cf2a;
case 0x60cf2d:c.instructions+=13;goto B60cf2d;
case 0x60cf2f:c.instructions+=12;goto B60cf2f;
case 0x60cf31:c.instructions+=11;goto B60cf31;
case 0x60cf33:c.instructions+=10;goto B60cf33;
case 0x60cf36:c.instructions+=9;goto B60cf36;
case 0x60cf39:c.instructions+=8;goto B60cf39;
case 0x60cf3b:c.instructions+=7;goto B60cf3b;
case 0x60cf3d:c.instructions+=6;goto B60cf3d;
case 0x60cf3f:c.instructions+=5;goto B60cf3f;
case 0x60cf41:c.instructions+=4;goto B60cf41;
case 0x60cf47:c.instructions+=3;goto B60cf47;
case 0x60cf49:c.instructions+=2;goto B60cf49;
case 0x60cf4c:c.instructions+=1;goto B60cf4c;
case 0x60cf4e:goto L60cf4e;
case 0x60cf4f:c.instructions+=2;goto B60cf4f;
case 0x60cf52:c.instructions+=1;goto B60cf52;
case 0x60cf54:goto L60cf54;
case 0x60cf58:c.instructions+=7;goto B60cf58;
case 0x60cf5b:c.instructions+=6;goto B60cf5b;
case 0x60cf5e:c.instructions+=5;goto B60cf5e;
case 0x60cf61:c.instructions+=4;goto B60cf61;
case 0x60cf64:c.instructions+=3;goto B60cf64;
case 0x60cf65:c.instructions+=2;goto B60cf65;
case 0x60cf67:c.instructions+=1;goto B60cf67;
case 0x60cf69:goto L60cf69;
case 0x60cf6b:c.instructions+=5;goto B60cf6b;
case 0x60cf6c:c.instructions+=4;goto B60cf6c;
case 0x60cf6d:c.instructions+=3;goto B60cf6d;
case 0x60cf6e:c.instructions+=2;goto B60cf6e;
case 0x60cf6f:c.instructions+=1;goto B60cf6f;
case 0x60cf70:goto L60cf70;
case 0x60cf74:c.instructions+=6;goto B60cf74;
case 0x60cf78:c.instructions+=5;goto B60cf78;
case 0x60cf7a:c.instructions+=4;goto B60cf7a;
case 0x60cf80:c.instructions+=3;goto B60cf80;
case 0x60cf82:c.instructions+=2;goto B60cf82;
case 0x60cf85:c.instructions+=1;goto B60cf85;
case 0x60cf87:goto L60cf87;
case 0x60cf8c:c.instructions+=1;goto B60cf8c;
case 0x60cf8d:goto L60cf8d;
case 0x60cf8f:c.instructions+=1;goto B60cf8f;
case 0x60cf90:goto L60cf90;
case 0x60cf91:c.instructions+=23;goto B60cf91;
case 0x60cf93:c.instructions+=22;goto B60cf93;
case 0x60cf96:c.instructions+=21;goto B60cf96;
case 0x60cf98:c.instructions+=20;goto B60cf98;
case 0x60cf9b:c.instructions+=19;goto B60cf9b;
case 0x60cfa1:c.instructions+=18;goto B60cfa1;
case 0x60cfa4:c.instructions+=17;goto B60cfa4;
case 0x60cfaa:c.instructions+=16;goto B60cfaa;
case 0x60cfad:c.instructions+=15;goto B60cfad;
case 0x60cfb3:c.instructions+=14;goto B60cfb3;
case 0x60cfb9:c.instructions+=13;goto B60cfb9;
case 0x60cfbb:c.instructions+=12;goto B60cfbb;
case 0x60cfc1:c.instructions+=11;goto B60cfc1;
case 0x60cfc3:c.instructions+=10;goto B60cfc3;
case 0x60cfc5:c.instructions+=9;goto B60cfc5;
case 0x60cfcb:c.instructions+=8;goto B60cfcb;
case 0x60cfcd:c.instructions+=7;goto B60cfcd;
case 0x60cfcf:c.instructions+=6;goto B60cfcf;
case 0x60cfd1:c.instructions+=5;goto B60cfd1;
case 0x60cfd3:c.instructions+=4;goto B60cfd3;
case 0x60cfd9:c.instructions+=3;goto B60cfd9;
case 0x60cfdb:c.instructions+=2;goto B60cfdb;
case 0x60cfde:c.instructions+=1;goto B60cfde;
case 0x60cfe0:goto L60cfe0;
case 0x60cfe2:goto L60cfe2;
case 0x60cfe8:c.instructions+=3;goto B60cfe8;
case 0x60cfea:c.instructions+=2;goto B60cfea;
case 0x60cfed:c.instructions+=1;goto B60cfed;
case 0x60cfef:goto L60cfef;
case 0x60cff4:c.instructions+=3;goto B60cff4;
case 0x60cff6:c.instructions+=2;goto B60cff6;
case 0x60cff7:c.instructions+=1;goto B60cff7;
case 0x60cff8:goto L60cff8;
case 0x60cffa:c.instructions+=3;goto B60cffa;
case 0x60cffc:c.instructions+=2;goto B60cffc;
case 0x60cffd:c.instructions+=1;goto B60cffd;
default:missing_instruction(c.pc);}
B60c001:L60c001:{c.instructions+=3;NFSU2_TR(0x60c001);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B60c004:{NFSU2_TR(0x60c004);
{u32 ea_=u32(r4(R+4)+r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c008:{NFSU2_TR(0x60c008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c010:L60c010:{c.instructions+=10;NFSU2_TR(0x60c010);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B60c017:{NFSU2_TR(0x60c017);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c018:{NFSU2_TR(0x60c018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60c01b:{NFSU2_TR(0x60c01b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c01c:{NFSU2_TR(0x60c01c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60c020:{NFSU2_TR(0x60c020);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B60c023:{NFSU2_TR(0x60c023);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B60c027:{NFSU2_TR(0x60c027);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c02b:{NFSU2_TR(0x60c02b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c02c:{NFSU2_TR(0x60c02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c031ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B60c031:L60c031:{c.instructions+=4;NFSU2_TR(0x60c031);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c032:{NFSU2_TR(0x60c032);
__builtin_memmove((R+4),(R+24),4);
}
B60c034:{NFSU2_TR(0x60c034);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c038:{NFSU2_TR(0x60c038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c03dull));
TAIL_STATIC(0x60bfa0u,60b);
}
B60c03d:L60c03d:{c.instructions+=4;NFSU2_TR(0x60c03d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60c041:{NFSU2_TR(0x60c041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c042:{NFSU2_TR(0x60c042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c043:{NFSU2_TR(0x60c043);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c050:L60c050:{c.instructions+=14;NFSU2_TR(0x60c050);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c051:{NFSU2_TR(0x60c051);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60c055:{NFSU2_TR(0x60c055);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c056:{NFSU2_TR(0x60c056);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B60c05a:{NFSU2_TR(0x60c05a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c05b:{NFSU2_TR(0x60c05b);
__builtin_memmove((R+24),(R+4),4);
}
B60c05d:{NFSU2_TR(0x60c05d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B60c064:{NFSU2_TR(0x60c064);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c065:{NFSU2_TR(0x60c065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60c068:{NFSU2_TR(0x60c068);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B60c06b:{NFSU2_TR(0x60c06b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c06c:{NFSU2_TR(0x60c06c);
__builtin_memmove((R+4),(R+20),4);
}
B60c06e:{NFSU2_TR(0x60c06e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B60c072:{NFSU2_TR(0x60c072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c077ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B60c077:L60c077:{c.instructions+=4;NFSU2_TR(0x60c077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c078:{NFSU2_TR(0x60c078);
__builtin_memmove((R+4),(R+28),4);
}
B60c07a:{NFSU2_TR(0x60c07a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c07e:{NFSU2_TR(0x60c07e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c083ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B60c083:L60c083:{c.instructions+=14;NFSU2_TR(0x60c083);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60c087:{NFSU2_TR(0x60c087);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c08b:{NFSU2_TR(0x60c08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c08c:{NFSU2_TR(0x60c08c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c08e:{NFSU2_TR(0x60c08e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B60c095:{NFSU2_TR(0x60c095);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c098:{NFSU2_TR(0x60c098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B60c09b:{NFSU2_TR(0x60c09b);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B60c09e:{NFSU2_TR(0x60c09e);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c0a2:{NFSU2_TR(0x60c0a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c0a3:{NFSU2_TR(0x60c0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60c0a4:{NFSU2_TR(0x60c0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60c0a5:{NFSU2_TR(0x60c0a5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c0a8:{NFSU2_TR(0x60c0a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c0b0:L60c0b0:{c.instructions+=6;NFSU2_TR(0x60c0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60c0b3:{NFSU2_TR(0x60c0b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c0b4:{NFSU2_TR(0x60c0b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60c0b6:{NFSU2_TR(0x60c0b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c0b8:{NFSU2_TR(0x60c0b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c0b9:{NFSU2_TR(0x60c0b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c0dd;}}
}
B60c0bb:L60c0bb:{c.instructions+=2;NFSU2_TR(0x60c0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60c0bf:{NFSU2_TR(0x60c0bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B60c0c2:L60c0c2:{c.instructions+=2;NFSU2_TR(0x60c0c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c0c4:{NFSU2_TR(0x60c0c4);
if(r1(R+518)){{goto L60c0d5;}}
}
B60c0c6:L60c0c6:{c.instructions+=4;NFSU2_TR(0x60c0c6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B60c0c9:{NFSU2_TR(0x60c0c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B60c0d0:{NFSU2_TR(0x60c0d0);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
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
B60c0d3:{NFSU2_TR(0x60c0d3);
if(r1(R+518)){{goto L60c0e0;}}
}
B60c0d5:L60c0d5:{c.instructions+=4;NFSU2_TR(0x60c0d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60c0d6:{NFSU2_TR(0x60c0d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B60c0d9:{NFSU2_TR(0x60c0d9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c0db:{NFSU2_TR(0x60c0db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c0c2u);}goto L60c0c2;}}
}
B60c0dd:L60c0dd:{c.instructions+=1;NFSU2_TR(0x60c0dd);
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
B60c0e0:L60c0e0:{c.instructions+=3;NFSU2_TR(0x60c0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c0e1:{NFSU2_TR(0x60c0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c0e2:{NFSU2_TR(0x60c0e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c0f0:L60c0f0:{c.instructions+=5;NFSU2_TR(0x60c0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c0f4:{NFSU2_TR(0x60c0f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c0f5:{NFSU2_TR(0x60c0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c0f6:{NFSU2_TR(0x60c0f6);
__builtin_memmove((R+24),(R+4),4);
}
B60c0f8:{NFSU2_TR(0x60c0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c0fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c0b0u);}goto L60c0b0;}
}
B60c0fd:L60c0fd:{c.instructions+=2;NFSU2_TR(0x60c0fd);
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
B60c100:{NFSU2_TR(0x60c100);
if(r1(R+518)){{goto L60c110;}}
}
B60c102:L60c102:{c.instructions+=5;NFSU2_TR(0x60c102);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B60c105:{NFSU2_TR(0x60c105);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B60c108:{NFSU2_TR(0x60c108);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B60c10c:{NFSU2_TR(0x60c10c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c10d:{NFSU2_TR(0x60c10d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c110:L60c110:{c.instructions+=3;NFSU2_TR(0x60c110);
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
B60c112:{NFSU2_TR(0x60c112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c113:{NFSU2_TR(0x60c113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c120:L60c120:{c.instructions+=7;NFSU2_TR(0x60c120);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c121:{NFSU2_TR(0x60c121);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c122:{NFSU2_TR(0x60c122);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60c125:{NFSU2_TR(0x60c125);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60c127:{NFSU2_TR(0x60c127);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c129:{NFSU2_TR(0x60c129);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c12a:{NFSU2_TR(0x60c12a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c147;}}
}
B60c12c:L60c12c:{c.instructions+=2;NFSU2_TR(0x60c12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60c130:{NFSU2_TR(0x60c130);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60c133:L60c133:{c.instructions+=3;NFSU2_TR(0x60c133);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B60c136:{NFSU2_TR(0x60c136);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B60c13d:{NFSU2_TR(0x60c13d);
if(r1(R+518)){{goto L60c14f;}}
}
B60c13f:L60c13f:{c.instructions+=4;NFSU2_TR(0x60c13f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60c140:{NFSU2_TR(0x60c140);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B60c143:{NFSU2_TR(0x60c143);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c145:{NFSU2_TR(0x60c145);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c133u);}goto L60c133;}}
}
B60c147:L60c147:{c.instructions+=5;NFSU2_TR(0x60c147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c148:{NFSU2_TR(0x60c148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c149:{NFSU2_TR(0x60c149);
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
B60c14b:{NFSU2_TR(0x60c14b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60c14c:{NFSU2_TR(0x60c14c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c14f:L60c14f:{c.instructions+=2;NFSU2_TR(0x60c14f);
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
B60c152:{NFSU2_TR(0x60c152);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c147u);}goto L60c147;}}
}
B60c154:L60c154:{c.instructions+=7;NFSU2_TR(0x60c154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c155:{NFSU2_TR(0x60c155);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B60c158:{NFSU2_TR(0x60c158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c159:{NFSU2_TR(0x60c159);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B60c15c:{NFSU2_TR(0x60c15c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B60c160:{NFSU2_TR(0x60c160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60c161:{NFSU2_TR(0x60c161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c170:L60c170:{c.instructions+=5;NFSU2_TR(0x60c170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c174:{NFSU2_TR(0x60c174);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c175:{NFSU2_TR(0x60c175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c176:{NFSU2_TR(0x60c176);
__builtin_memmove((R+24),(R+4),4);
}
B60c178:{NFSU2_TR(0x60c178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c17dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c0b0u);}goto L60c0b0;}
}
B60c17d:L60c17d:{c.instructions+=2;NFSU2_TR(0x60c17d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c180:{NFSU2_TR(0x60c180);
if(r1(R+518)){{goto L60c194;}}
}
B60c182:L60c182:{c.instructions+=2;NFSU2_TR(0x60c182);
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
B60c184:{NFSU2_TR(0x60c184);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c194;}}
}
B60c186:L60c186:{c.instructions+=5;NFSU2_TR(0x60c186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B60c189:{NFSU2_TR(0x60c189);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B60c18c:{NFSU2_TR(0x60c18c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B60c190:{NFSU2_TR(0x60c190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c191:{NFSU2_TR(0x60c191);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c194:L60c194:{c.instructions+=3;NFSU2_TR(0x60c194);
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
B60c196:{NFSU2_TR(0x60c196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c197:{NFSU2_TR(0x60c197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c1a0:L60c1a0:{c.instructions+=10;NFSU2_TR(0x60c1a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c1a1:{NFSU2_TR(0x60c1a1);
__builtin_memmove((R+20),(R+16),4);
}
B60c1a3:{NFSU2_TR(0x60c1a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60c1a6:{NFSU2_TR(0x60c1a6);
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
B60c1a9:{NFSU2_TR(0x60c1a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60c1ab:{NFSU2_TR(0x60c1ab);
__builtin_memmove((R+0),(R+16),4);
}
B60c1af:{NFSU2_TR(0x60c1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c1b0:{NFSU2_TR(0x60c1b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60c1b4:{NFSU2_TR(0x60c1b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c1b5:{NFSU2_TR(0x60c1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c1baull));
TAIL_STATIC(0x5ec250u,5ec);
}
B60c1ba:L60c1ba:{c.instructions+=6;NFSU2_TR(0x60c1ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c1be:{NFSU2_TR(0x60c1be);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c1c2:{NFSU2_TR(0x60c1c2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c1c8:{NFSU2_TR(0x60c1c8);
__builtin_memmove((R+16),(R+20),4);
}
B60c1ca:{NFSU2_TR(0x60c1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60c1cb:{NFSU2_TR(0x60c1cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c1d0:L60c1d0:{c.instructions+=17;NFSU2_TR(0x60c1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c1d4:{NFSU2_TR(0x60c1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c1d8:{NFSU2_TR(0x60c1d8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c1da:{NFSU2_TR(0x60c1da);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c1dc:{NFSU2_TR(0x60c1dc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60c1e0:{NFSU2_TR(0x60c1e0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c1e2:{NFSU2_TR(0x60c1e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c1e3:{NFSU2_TR(0x60c1e3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c1e5:{NFSU2_TR(0x60c1e5);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B60c1e7:{NFSU2_TR(0x60c1e7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c1ea:{NFSU2_TR(0x60c1ea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c1ed:{NFSU2_TR(0x60c1ed);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c1f0:{NFSU2_TR(0x60c1f0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c1f3:{NFSU2_TR(0x60c1f3);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B60c1f5:{NFSU2_TR(0x60c1f5);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B60c1f7:{NFSU2_TR(0x60c1f7);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c1fd:{NFSU2_TR(0x60c1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c202ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60c202:L60c202:{c.instructions+=4;NFSU2_TR(0x60c202);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c208:{NFSU2_TR(0x60c208);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60c20a:{NFSU2_TR(0x60c20a);
__builtin_memmove((R+24),(R+0),4);
}
B60c20c:{NFSU2_TR(0x60c20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c211ull));
TAIL_STATIC(0x75bed4u,75b);
}
B60c211:L60c211:{c.instructions+=3;NFSU2_TR(0x60c211);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B60c213:{NFSU2_TR(0x60c213);
__builtin_memmove((R+4),(R+0),4);
}
B60c215:{NFSU2_TR(0x60c215);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60c21b;}}
}
B60c217:L60c217:{c.instructions+=2;NFSU2_TR(0x60c217);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B60c219:{NFSU2_TR(0x60c219);
{goto L60c225;}
}
B60c21b:L60c21b:{c.instructions+=2;NFSU2_TR(0x60c21b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c21e:{NFSU2_TR(0x60c21e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c225;}}
}
B60c220:L60c220:{c.instructions+=1;NFSU2_TR(0x60c220);
w4(R+24,u32(0x7ull));
}
B60c225:L60c225:{c.instructions+=2;NFSU2_TR(0x60c225);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B60c227:{NFSU2_TR(0x60c227);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60c22d;}}
}
B60c229:L60c229:{c.instructions+=2;NFSU2_TR(0x60c229);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60c22b:{NFSU2_TR(0x60c22b);
{goto L60c237;}
}
B60c22d:L60c22d:{c.instructions+=2;NFSU2_TR(0x60c22d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c230:{NFSU2_TR(0x60c230);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c237;}}
}
B60c232:L60c232:{c.instructions+=1;NFSU2_TR(0x60c232);
w4(R+4,u32(0x7ull));
}
B60c237:L60c237:{c.instructions+=12;NFSU2_TR(0x60c237);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B60c239:{NFSU2_TR(0x60c239);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B60c23b:{NFSU2_TR(0x60c23b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c241:{NFSU2_TR(0x60c241);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60c243:{NFSU2_TR(0x60c243);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60c245:{NFSU2_TR(0x60c245);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60c247:{NFSU2_TR(0x60c247);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60c249:{NFSU2_TR(0x60c249);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B60c24b:{NFSU2_TR(0x60c24b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60c24e:{NFSU2_TR(0x60c24e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60c250:{NFSU2_TR(0x60c250);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60c252:{NFSU2_TR(0x60c252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c26b;}}
}
B60c254:L60c254:{c.instructions+=2;NFSU2_TR(0x60c254);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60c257:{NFSU2_TR(0x60c257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c262;}}
}
B60c259:L60c259:{c.instructions+=4;NFSU2_TR(0x60c259);
w4(R+0,u32(0x8ull));
}
B60c25e:{NFSU2_TR(0x60c25e);
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
B60c260:{NFSU2_TR(0x60c260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c261:{NFSU2_TR(0x60c261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c262:L60c262:{c.instructions+=4;NFSU2_TR(0x60c262);
w4(R+0,u32(0x10ull));
}
B60c267:{NFSU2_TR(0x60c267);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60c269:{NFSU2_TR(0x60c269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c26a:{NFSU2_TR(0x60c26a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c26b:L60c26b:{c.instructions+=3;NFSU2_TR(0x60c26b);
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
B60c26e:{NFSU2_TR(0x60c26e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60c271:{NFSU2_TR(0x60c271);
if(r1(R+518)){{goto L60c276;}}
}
B60c273:L60c273:{c.instructions+=1;NFSU2_TR(0x60c273);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60c276:L60c276:{c.instructions+=2;NFSU2_TR(0x60c276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c277:{NFSU2_TR(0x60c277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c280:L60c280:{c.instructions+=16;NFSU2_TR(0x60c280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c281:{NFSU2_TR(0x60c281);
__builtin_memmove((R+20),(R+16),4);
}
B60c283:{NFSU2_TR(0x60c283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c286:{NFSU2_TR(0x60c286);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c287:{NFSU2_TR(0x60c287);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c288:{NFSU2_TR(0x60c288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B60c28b:{NFSU2_TR(0x60c28b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B60c28e:{NFSU2_TR(0x60c28e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B60c291:{NFSU2_TR(0x60c291);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B60c293:{NFSU2_TR(0x60c293);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x803ae0ull))));
}
B60c299:{NFSU2_TR(0x60c299);
__builtin_memmove((R+4),(R+0),4);
}
B60c29b:{NFSU2_TR(0x60c29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c29e:{NFSU2_TR(0x60c29e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60c2a0:{NFSU2_TR(0x60c2a0);
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
B60c2a2:{NFSU2_TR(0x60c2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c2a5:{NFSU2_TR(0x60c2a5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c2fe;}}
}
B60c2a7:L60c2a7:{c.instructions+=3;NFSU2_TR(0x60c2a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c2a8:{NFSU2_TR(0x60c2a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c2ab:{NFSU2_TR(0x60c2ab);
{goto L60c2b0;}
}
B60c2b0:L60c2b0:{c.instructions+=21;NFSU2_TR(0x60c2b0);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c2b3:{NFSU2_TR(0x60c2b3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c2b6:{NFSU2_TR(0x60c2b6);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c2b8:{NFSU2_TR(0x60c2b8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60c2ba:{NFSU2_TR(0x60c2ba);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60c2bc:{NFSU2_TR(0x60c2bc);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60c2be:{NFSU2_TR(0x60c2be);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60c2c0:{NFSU2_TR(0x60c2c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c2c2:{NFSU2_TR(0x60c2c2);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B60c2c4:{NFSU2_TR(0x60c2c4);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B60c2c6:{NFSU2_TR(0x60c2c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c2c8:{NFSU2_TR(0x60c2c8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60c2ca:{NFSU2_TR(0x60c2ca);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B60c2cc:{NFSU2_TR(0x60c2cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60c2ce:{NFSU2_TR(0x60c2ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60c2d0:{NFSU2_TR(0x60c2d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60c2d6:{NFSU2_TR(0x60c2d6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60c2d8:{NFSU2_TR(0x60c2d8);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60c2de:{NFSU2_TR(0x60c2de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60c2e0:{NFSU2_TR(0x60c2e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60c2e3:{NFSU2_TR(0x60c2e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c2f2;}}
}
B60c2e5:L60c2e5:{c.instructions+=3;NFSU2_TR(0x60c2e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c2e6:{NFSU2_TR(0x60c2e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c2e7:{NFSU2_TR(0x60c2e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c2ecull));
TAIL_STATIC(0x43cf10u,43c);
}
B60c2ec:L60c2ec:{c.instructions+=2;NFSU2_TR(0x60c2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c2ef:{NFSU2_TR(0x60c2ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60c2f2:L60c2f2:{c.instructions+=5;NFSU2_TR(0x60c2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c2f5:{NFSU2_TR(0x60c2f5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60c2f6:{NFSU2_TR(0x60c2f6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60c2f9:{NFSU2_TR(0x60c2f9);
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
B60c2fb:{NFSU2_TR(0x60c2fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c2b0u);}goto L60c2b0;}}
}
B60c2fd:L60c2fd:{c.instructions+=1;NFSU2_TR(0x60c2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c2fe:L60c2fe:{c.instructions+=12;NFSU2_TR(0x60c2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c301:{NFSU2_TR(0x60c301);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c304:{NFSU2_TR(0x60c304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c305:{NFSU2_TR(0x60c305);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c308:{NFSU2_TR(0x60c308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60c30a:{NFSU2_TR(0x60c30a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60c30c:{NFSU2_TR(0x60c30c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B60c30e:{NFSU2_TR(0x60c30e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c311:{NFSU2_TR(0x60c311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60c312:{NFSU2_TR(0x60c312);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c315:{NFSU2_TR(0x60c315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60c316:{NFSU2_TR(0x60c316);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c320:L60c320:{c.instructions+=35;NFSU2_TR(0x60c320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c321:{NFSU2_TR(0x60c321);
__builtin_memmove((R+20),(R+16),4);
}
B60c323:{NFSU2_TR(0x60c323);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60c326:{NFSU2_TR(0x60c326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B60c32c:{NFSU2_TR(0x60c32c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c32d:{NFSU2_TR(0x60c32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60c330:{NFSU2_TR(0x60c330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c331:{NFSU2_TR(0x60c331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60c334:{NFSU2_TR(0x60c334);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c335:{NFSU2_TR(0x60c335);
__builtin_memmove((R+0),(R+12),4);
}
B60c337:{NFSU2_TR(0x60c337);
w4(R+0,u32(0-u32(r4(R+0))));
}
B60c339:{NFSU2_TR(0x60c339);
__builtin_memmove((R+28),(R+4),4);
}
B60c33b:{NFSU2_TR(0x60c33b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c33c:{NFSU2_TR(0x60c33c);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60c340:{NFSU2_TR(0x60c340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c341:{NFSU2_TR(0x60c341);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60c345:{NFSU2_TR(0x60c345);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c346:{NFSU2_TR(0x60c346);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c34a:{NFSU2_TR(0x60c34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c352:{NFSU2_TR(0x60c352);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c35a:{NFSU2_TR(0x60c35a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c362:{NFSU2_TR(0x60c362);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c36a:{NFSU2_TR(0x60c36a);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c372:{NFSU2_TR(0x60c372);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c37d:{NFSU2_TR(0x60c37d);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c388:{NFSU2_TR(0x60c388);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c393:{NFSU2_TR(0x60c393);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c39e:{NFSU2_TR(0x60c39e);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3a9:{NFSU2_TR(0x60c3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3b4:{NFSU2_TR(0x60c3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3bf:{NFSU2_TR(0x60c3bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3ca:{NFSU2_TR(0x60c3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3d5:{NFSU2_TR(0x60c3d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3e0:{NFSU2_TR(0x60c3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60c3eb:{NFSU2_TR(0x60c3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c3f0ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B60c3f0:L60c3f0:{c.instructions+=42;NFSU2_TR(0x60c3f0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c3f4:{NFSU2_TR(0x60c3f4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c3f7:{NFSU2_TR(0x60c3f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60c3fa:{NFSU2_TR(0x60c3fa);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c3fe:{NFSU2_TR(0x60c3fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60c401:{NFSU2_TR(0x60c401);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c403:{NFSU2_TR(0x60c403);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c407:{NFSU2_TR(0x60c407);
__builtin_memmove((R+8),(R+28),4);
}
B60c409:{NFSU2_TR(0x60c409);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B60c40c:{NFSU2_TR(0x60c40c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c40e:{NFSU2_TR(0x60c40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c412:{NFSU2_TR(0x60c412);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c419:{NFSU2_TR(0x60c419);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c41d:{NFSU2_TR(0x60c41d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c41f:{NFSU2_TR(0x60c41f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c421:{NFSU2_TR(0x60c421);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60c428:{NFSU2_TR(0x60c428);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c42c:{NFSU2_TR(0x60c42c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c42e:{NFSU2_TR(0x60c42e);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c432:{NFSU2_TR(0x60c432);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c434:{NFSU2_TR(0x60c434);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c436:{NFSU2_TR(0x60c436);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c43d:{NFSU2_TR(0x60c43d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c43f:{NFSU2_TR(0x60c43f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c441:{NFSU2_TR(0x60c441);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60c448:{NFSU2_TR(0x60c448);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c44c:{NFSU2_TR(0x60c44c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c44e:{NFSU2_TR(0x60c44e);
w4(R+24,u32(0x803aecull));
}
B60c453:{NFSU2_TR(0x60c453);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c457:{NFSU2_TR(0x60c457);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c459:{NFSU2_TR(0x60c459);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c45b:{NFSU2_TR(0x60c45b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c462:{NFSU2_TR(0x60c462);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c464:{NFSU2_TR(0x60c464);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c466:{NFSU2_TR(0x60c466);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60c46d:{NFSU2_TR(0x60c46d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c471:{NFSU2_TR(0x60c471);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c475:{NFSU2_TR(0x60c475);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60c477:{NFSU2_TR(0x60c477);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c47e:{NFSU2_TR(0x60c47e);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c485:{NFSU2_TR(0x60c485);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c48c:{NFSU2_TR(0x60c48c);
{goto L60c491;}
}
B60c48e:L60c48e:{c.instructions+=1;NFSU2_TR(0x60c48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60c491:L60c491:{c.instructions+=5;NFSU2_TR(0x60c491);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803c2cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803c2cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c497:{NFSU2_TR(0x60c497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c49a:{NFSU2_TR(0x60c49a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c49d:{NFSU2_TR(0x60c49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c4a1:{NFSU2_TR(0x60c4a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60c4b2;}}
}
B60c4a3:L60c4a3:{c.instructions+=3;NFSU2_TR(0x60c4a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803c7cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803c7cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c4a9:{NFSU2_TR(0x60c4a9);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60c4b0:{NFSU2_TR(0x60c4b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c4b6;}}
}
B60c4b2:L60c4b2:{c.instructions+=1;NFSU2_TR(0x60c4b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c4b6:L60c4b6:{c.instructions+=2;NFSU2_TR(0x60c4b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x803b3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x803b3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c4bc:{NFSU2_TR(0x60c4bc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60c4e0;}}
}
B60c4be:L60c4be:{c.instructions+=2;NFSU2_TR(0x60c4be);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w1(R+512,u8((r2(U+0))<(u16(0x8000ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x8000ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B60c4c3:{NFSU2_TR(0x60c4c3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L60c4ca;}}
}
B60c4c5:L60c4c5:{c.instructions+=2;NFSU2_TR(0x60c4c5);
w4(R+12,u32(0-u32(r4(R+12))));
}
B60c4c7:{NFSU2_TR(0x60c4c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c4ca:L60c4ca:{c.instructions+=6;NFSU2_TR(0x60c4ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B60c4ce:{NFSU2_TR(0x60c4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c4d2:{NFSU2_TR(0x60c4d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60c4d6:{NFSU2_TR(0x60c4d6);
{u32 ea_=u32(u32(8398444u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B60c4dc:{NFSU2_TR(0x60c4dc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60c4de:{NFSU2_TR(0x60c4de);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c4e0:L60c4e0:{c.instructions+=4;NFSU2_TR(0x60c4e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60c4e2:{NFSU2_TR(0x60c4e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c4e4:{NFSU2_TR(0x60c4e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60c4e9:{NFSU2_TR(0x60c4e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c5aa;}}
}
B60c4ef:L60c4ef:{c.instructions+=2;NFSU2_TR(0x60c4ef);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c4f6:{NFSU2_TR(0x60c4f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c5aa;}}
}
B60c4fc:L60c4fc:{c.instructions+=12;NFSU2_TR(0x60c4fc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c4fe:{NFSU2_TR(0x60c4fe);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c500:{NFSU2_TR(0x60c500);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c504:{NFSU2_TR(0x60c504);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c507:{NFSU2_TR(0x60c507);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c50a:{NFSU2_TR(0x60c50a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c50e:{NFSU2_TR(0x60c50e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c511:{NFSU2_TR(0x60c511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c514:{NFSU2_TR(0x60c514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c516:{NFSU2_TR(0x60c516);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c519:{NFSU2_TR(0x60c519);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c51d:{NFSU2_TR(0x60c51d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c5c8;}}
}
B60c523:L60c523:{c.instructions+=3;NFSU2_TR(0x60c523);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60c525:{NFSU2_TR(0x60c525);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c527:{NFSU2_TR(0x60c527);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60c5a1;}}
}
B60c529:L60c529:{c.instructions+=2;NFSU2_TR(0x60c529);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c52d:{NFSU2_TR(0x60c52d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c530:L60c530:{c.instructions+=9;NFSU2_TR(0x60c530);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c533:{NFSU2_TR(0x60c533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60c535:{NFSU2_TR(0x60c535);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c539:{NFSU2_TR(0x60c539);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c53c:{NFSU2_TR(0x60c53c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c540:{NFSU2_TR(0x60c540);
__builtin_memmove((R+0),gp(0x8a1bd8),4);
}
B60c545:{NFSU2_TR(0x60c545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c547:{NFSU2_TR(0x60c547);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c54b:{NFSU2_TR(0x60c54b);
if(r1(R+518)){{goto L60c563;}}
}
B60c54d:L60c54d:{c.instructions+=5;NFSU2_TR(0x60c54d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60c551:{NFSU2_TR(0x60c551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c552:{NFSU2_TR(0x60c552);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60c556:{NFSU2_TR(0x60c556);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c557:{NFSU2_TR(0x60c557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c55cull));
TAIL_STATIC(0x43cf10u,43c);
}
B60c55c:L60c55c:{c.instructions+=2;NFSU2_TR(0x60c55c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60c560:{NFSU2_TR(0x60c560);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60c563:L60c563:{c.instructions+=14;NFSU2_TR(0x60c563);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c567:{NFSU2_TR(0x60c567);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c56b:{NFSU2_TR(0x60c56b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c56f:{NFSU2_TR(0x60c56f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c573:{NFSU2_TR(0x60c573);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c577:{NFSU2_TR(0x60c577);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c579:{NFSU2_TR(0x60c579);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c57d:{NFSU2_TR(0x60c57d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c581:{NFSU2_TR(0x60c581);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c583:{NFSU2_TR(0x60c583);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c585:{NFSU2_TR(0x60c585);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60c58b:{NFSU2_TR(0x60c58b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60c58d:{NFSU2_TR(0x60c58d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60c590:{NFSU2_TR(0x60c590);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60c5a1;}}
}
B60c592:L60c592:{c.instructions+=6;NFSU2_TR(0x60c592);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60c597:{NFSU2_TR(0x60c597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60c599:{NFSU2_TR(0x60c599);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60c59a:{NFSU2_TR(0x60c59a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60c59d:{NFSU2_TR(0x60c59d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c59f:{NFSU2_TR(0x60c59f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c530u);}goto L60c530;}}
}
B60c5a1:L60c5a1:{c.instructions+=2;NFSU2_TR(0x60c5a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B60c5a3:{NFSU2_TR(0x60c5a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60c5aa;}}
}
B60c5a5:L60c5a5:{c.instructions+=1;NFSU2_TR(0x60c5a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B60c5aa:L60c5aa:{c.instructions+=6;NFSU2_TR(0x60c5aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60c5ae:{NFSU2_TR(0x60c5ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60c5b0:{NFSU2_TR(0x60c5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c5b4:{NFSU2_TR(0x60c5b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B60c5b7:{NFSU2_TR(0x60c5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c5ba:{NFSU2_TR(0x60c5ba);
if(r1(R+518)){{goto L60c65e;}}
}
B60c5c0:L60c5c0:{c.instructions+=2;NFSU2_TR(0x60c5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60c5c3:{NFSU2_TR(0x60c5c3);
{goto L60c661;}
}
B60c5c8:L60c5c8:{c.instructions+=2;NFSU2_TR(0x60c5c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c5cb:{NFSU2_TR(0x60c5cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c5aau);}goto L60c5aa;}}
}
B60c5cd:L60c5cd:{c.instructions+=3;NFSU2_TR(0x60c5cd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60c5cf:{NFSU2_TR(0x60c5cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c5d1:{NFSU2_TR(0x60c5d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c5aau);}goto L60c5aa;}}
}
B60c5d3:L60c5d3:{c.instructions+=3;NFSU2_TR(0x60c5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c5d7:{NFSU2_TR(0x60c5d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c5da:{NFSU2_TR(0x60c5da);
__builtin_memmove((R+12),(R+12),4);
}
B60c5e0:L60c5e0:{c.instructions+=9;NFSU2_TR(0x60c5e0);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c5e3:{NFSU2_TR(0x60c5e3);
__builtin_memmove((R+0),gp(0x8a1bd8),4);
}
B60c5e8:{NFSU2_TR(0x60c5e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60c5ea:{NFSU2_TR(0x60c5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60c5ec:{NFSU2_TR(0x60c5ec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c5f0:{NFSU2_TR(0x60c5f0);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c5f3:{NFSU2_TR(0x60c5f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c5f7:{NFSU2_TR(0x60c5f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60c5fb:{NFSU2_TR(0x60c5fb);
if(r1(R+518)){{goto L60c613;}}
}
B60c5fd:L60c5fd:{c.instructions+=5;NFSU2_TR(0x60c5fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60c601:{NFSU2_TR(0x60c601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c602:{NFSU2_TR(0x60c602);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60c606:{NFSU2_TR(0x60c606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c607:{NFSU2_TR(0x60c607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c60cull));
TAIL_STATIC(0x43cf10u,43c);
}
B60c60c:L60c60c:{c.instructions+=2;NFSU2_TR(0x60c60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60c610:{NFSU2_TR(0x60c610);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60c613:L60c613:{c.instructions+=14;NFSU2_TR(0x60c613);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c617:{NFSU2_TR(0x60c617);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60c61b:{NFSU2_TR(0x60c61b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c61f:{NFSU2_TR(0x60c61f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c623:{NFSU2_TR(0x60c623);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c627:{NFSU2_TR(0x60c627);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c629:{NFSU2_TR(0x60c629);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60c62d:{NFSU2_TR(0x60c62d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60c631:{NFSU2_TR(0x60c631);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60c633:{NFSU2_TR(0x60c633);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60c635:{NFSU2_TR(0x60c635);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60c63b:{NFSU2_TR(0x60c63b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60c63d:{NFSU2_TR(0x60c63d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60c640:{NFSU2_TR(0x60c640);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c5a5u);}goto L60c5a5;}}
}
B60c646:L60c646:{c.instructions+=8;NFSU2_TR(0x60c646);
__builtin_memmove((R+0),(R+4),4);
}
B60c648:{NFSU2_TR(0x60c648);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B60c64b:{NFSU2_TR(0x60c64b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c64f:{NFSU2_TR(0x60c64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60c651:{NFSU2_TR(0x60c651);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60c652:{NFSU2_TR(0x60c652);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60c655:{NFSU2_TR(0x60c655);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c657:{NFSU2_TR(0x60c657);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c5e0u);}goto L60c5e0;}}
}
B60c659:L60c659:{c.instructions+=1;NFSU2_TR(0x60c659);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c5aau);}goto L60c5aa;}
}
B60c65e:L60c65e:{c.instructions+=1;NFSU2_TR(0x60c65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60c661:L60c661:{c.instructions+=5;NFSU2_TR(0x60c661);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x50ull))));
}
B60c664:{NFSU2_TR(0x60c664);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B60c667:{NFSU2_TR(0x60c667);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x803e5cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x803e5cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x803e5cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60c66d:{NFSU2_TR(0x60c66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c671:{NFSU2_TR(0x60c671);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c48eu);}goto L60c48e;}}
}
B60c677:L60c677:{c.instructions+=6;NFSU2_TR(0x60c677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60c678:{NFSU2_TR(0x60c678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c679:{NFSU2_TR(0x60c679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60c67a:{NFSU2_TR(0x60c67a);
__builtin_memmove((R+16),(R+20),4);
}
B60c67c:{NFSU2_TR(0x60c67c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60c67d:{NFSU2_TR(0x60c67d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c680:L60c680:{c.instructions+=5;NFSU2_TR(0x60c680);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c682:{NFSU2_TR(0x60c682);
u8 U[4];
w4(U+0,u32(0x7a8394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c687:{NFSU2_TR(0x60c687);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c68c:{NFSU2_TR(0x60c68c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c68e:{NFSU2_TR(0x60c68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c693ull));
TAIL_STATIC(0x440df0u,440);
}
B60c693:L60c693:{c.instructions+=3;NFSU2_TR(0x60c693);
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
B60c696:{NFSU2_TR(0x60c696);
__builtin_memmove(gp(0x8a1be4),(R+0),4);
}
B60c69b:{NFSU2_TR(0x60c69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c6a0:L60c6a0:{c.instructions+=6;NFSU2_TR(0x60c6a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6a1:{NFSU2_TR(0x60c6a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6a3:{NFSU2_TR(0x60c6a3);
u8 U[4];
w4(U+0,u32(0x7a83bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6a8:{NFSU2_TR(0x60c6a8);
u8 U[4];
w4(U+0,u32(0x226ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6ad:{NFSU2_TR(0x60c6ad);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6af:{NFSU2_TR(0x60c6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c6b4ull));
TAIL_STATIC(0x440df0u,440);
}
B60c6b4:L60c6b4:{c.instructions+=3;NFSU2_TR(0x60c6b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B60c6b7:{NFSU2_TR(0x60c6b7);
__builtin_memmove(gp(0x8a1c1c),(R+0),4);
}
B60c6bc:{NFSU2_TR(0x60c6bc);
w4(R+24,u32(0x8027c4ull));
}
B60c6c1:L60c6c1:{c.instructions+=3;NFSU2_TR(0x60c6c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c6c4:{NFSU2_TR(0x60c6c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6c5:{NFSU2_TR(0x60c6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c6caull));
TAIL_STATIC(0x43db50u,43d);
}
B60c6ca:L60c6ca:{c.instructions+=5;NFSU2_TR(0x60c6ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60c6cc:{NFSU2_TR(0x60c6cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B60c6cf:{NFSU2_TR(0x60c6cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60c6d2:{NFSU2_TR(0x60c6d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8028b4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8028b4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60c6d8:{NFSU2_TR(0x60c6d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60c6c1u);}goto L60c6c1;}}
}
B60c6da:L60c6da:{c.instructions+=35;NFSU2_TR(0x60c6da);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60c6dc:{NFSU2_TR(0x60c6dc);
__builtin_memmove(gp(0x8a05d4),(R+4),4);
}
B60c6e2:{NFSU2_TR(0x60c6e2);
__builtin_memmove(gp(0x8a05d8),(R+4),4);
}
B60c6e8:{NFSU2_TR(0x60c6e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6e9:{NFSU2_TR(0x60c6e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6eb:{NFSU2_TR(0x60c6eb);
u8 U[4];
w4(U+0,u32(0x7a83a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c6f0:{NFSU2_TR(0x60c6f0);
s4(0x8a3b10,u32(0x3f800000ull));
}
B60c6fa:{NFSU2_TR(0x60c6fa);
s4(0x8a3b14,u32(0x0ull));
}
B60c704:{NFSU2_TR(0x60c704);
s4(0x8a3b18,u32(0x0ull));
}
B60c70e:{NFSU2_TR(0x60c70e);
s4(0x8a3b1c,u32(0x0ull));
}
B60c718:{NFSU2_TR(0x60c718);
s4(0x8a3b20,u32(0x0ull));
}
B60c722:{NFSU2_TR(0x60c722);
s4(0x8a3b24,u32(0x3f800000ull));
}
B60c72c:{NFSU2_TR(0x60c72c);
s4(0x8a3b28,u32(0x0ull));
}
B60c736:{NFSU2_TR(0x60c736);
s4(0x8a3b2c,u32(0x0ull));
}
B60c740:{NFSU2_TR(0x60c740);
s4(0x8a3b30,u32(0x0ull));
}
B60c74a:{NFSU2_TR(0x60c74a);
s4(0x8a3b34,u32(0x0ull));
}
B60c754:{NFSU2_TR(0x60c754);
s4(0x8a3b38,u32(0x3f800000ull));
}
B60c75e:{NFSU2_TR(0x60c75e);
s4(0x8a3b3c,u32(0x0ull));
}
B60c768:{NFSU2_TR(0x60c768);
s4(0x8a3b40,u32(0x0ull));
}
B60c772:{NFSU2_TR(0x60c772);
s4(0x8a3b44,u32(0x0ull));
}
B60c77c:{NFSU2_TR(0x60c77c);
s4(0x8a3b48,u32(0x0ull));
}
B60c786:{NFSU2_TR(0x60c786);
s4(0x8a3b4c,u32(0x3f800000ull));
}
B60c790:{NFSU2_TR(0x60c790);
__builtin_memmove(gp(0x8a05dc),(R+4),4);
}
B60c796:{NFSU2_TR(0x60c796);
__builtin_memmove(gp(0x8a30f8),(R+4),4);
}
B60c79c:{NFSU2_TR(0x60c79c);
__builtin_memmove(gp(0x8a30fc),(R+4),4);
}
B60c7a2:{NFSU2_TR(0x60c7a2);
__builtin_memmove(gp(0x8a3100),(R+4),4);
}
B60c7a8:{NFSU2_TR(0x60c7a8);
s4(0x8a3104,u32(0x3f800000ull));
}
B60c7b2:{NFSU2_TR(0x60c7b2);
__builtin_memmove(gp(0x8a3110),(R+4),4);
}
B60c7b8:{NFSU2_TR(0x60c7b8);
__builtin_memmove(gp(0x8a3114),(R+4),4);
}
B60c7be:{NFSU2_TR(0x60c7be);
s4(0x8a3108,u32(0x3f800000ull));
}
B60c7c8:{NFSU2_TR(0x60c7c8);
s4(0x8a310c,u32(0x3f800000ull));
}
B60c7d2:{NFSU2_TR(0x60c7d2);
s4(0x8a3120,u32(0x3f800000ull));
}
B60c7dc:{NFSU2_TR(0x60c7dc);
__builtin_memmove(gp(0x8a3124),(R+4),4);
}
B60c7e2:{NFSU2_TR(0x60c7e2);
s4(0x8a3118,u32(0x80808080ull));
}
B60c7ec:{NFSU2_TR(0x60c7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c7f1ull));
TAIL_STATIC(0x43db50u,43d);
}
B60c7f1:L60c7f1:{c.instructions+=3;NFSU2_TR(0x60c7f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60c7f4:{NFSU2_TR(0x60c7f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c7f5:{NFSU2_TR(0x60c7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c7faull));
TAIL_STATIC(0x4901d0u,490);
}
B60c7fa:L60c7fa:{c.instructions+=4;NFSU2_TR(0x60c7fa);
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
B60c7fd:{NFSU2_TR(0x60c7fd);
__builtin_memmove(gp(0x8a1c28),(R+0),4);
}
B60c802:{NFSU2_TR(0x60c802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60c803:{NFSU2_TR(0x60c803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c810:L60c810:{c.instructions+=3;NFSU2_TR(0x60c810);
__builtin_memmove((R+0),gp(0x8a1c1c),4);
}
B60c815:{NFSU2_TR(0x60c815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c816:{NFSU2_TR(0x60c816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c81bull));
TAIL_STATIC(0x440e40u,440);
}
B60c81b:L60c81b:{c.instructions+=2;NFSU2_TR(0x60c81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60c81c:{NFSU2_TR(0x60c81c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c820:L60c820:{c.instructions+=3;NFSU2_TR(0x60c820);
u8 U[4];
w4(U+0,u32(0xc7395a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c825:{NFSU2_TR(0x60c825);
w4(R+4,u32(0x8a1de4ull));
}
B60c82a:{NFSU2_TR(0x60c82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c82full));
TAIL_STATIC(0x493600u,493);
}
B60c82f:L60c82f:{c.instructions+=2;NFSU2_TR(0x60c82f);
u8 U[4];
w4(U+0,u32(0x7a83d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c834:{NFSU2_TR(0x60c834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c839ull));
TAIL_STATIC(0x43db50u,43d);
}
B60c839:L60c839:{c.instructions+=4;NFSU2_TR(0x60c839);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60c83c:{NFSU2_TR(0x60c83c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c83d:{NFSU2_TR(0x60c83d);
w4(R+4,u32(0x8a3168ull));
}
B60c842:{NFSU2_TR(0x60c842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60c847ull));
TAIL_STATIC(0x493600u,493);
}
B60c847:L60c847:{c.instructions+=1;NFSU2_TR(0x60c847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c850:L60c850:{c.instructions+=4;NFSU2_TR(0x60c850);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c854:{NFSU2_TR(0x60c854);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B60c857:{NFSU2_TR(0x60c857);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60c85a:{NFSU2_TR(0x60c85a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60c870;}}
}
B60c85c:L60c85c:{c.instructions+=2;NFSU2_TR(0x60c85c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60c87cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B60c863:{NFSU2_TR(0x60c863);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60c874ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60c86a:L60c86a:{c.instructions+=2;NFSU2_TR(0x60c86a);
w4(R+0,u32(0x1ull));
}
B60c86f:{NFSU2_TR(0x60c86f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c870:L60c870:{c.instructions+=2;NFSU2_TR(0x60c870);
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
B60c872:{NFSU2_TR(0x60c872);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c8a0:L60c8a0:{c.instructions+=4;NFSU2_TR(0x60c8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c8a4:{NFSU2_TR(0x60c8a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
}
B60c8a7:{NFSU2_TR(0x60c8a7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60c8aa:{NFSU2_TR(0x60c8aa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60c8c0;}}
}
B60c8ac:L60c8ac:{c.instructions+=2;NFSU2_TR(0x60c8ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60c8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B60c8b3:{NFSU2_TR(0x60c8b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60c8c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60c8ba:L60c8ba:{c.instructions+=2;NFSU2_TR(0x60c8ba);
w4(R+0,u32(0x1ull));
}
B60c8bf:{NFSU2_TR(0x60c8bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c8c0:L60c8c0:{c.instructions+=2;NFSU2_TR(0x60c8c0);
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
B60c8c2:{NFSU2_TR(0x60c8c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c8f0:L60c8f0:{c.instructions+=3;NFSU2_TR(0x60c8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c8f4:{NFSU2_TR(0x60c8f4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60c8f7:{NFSU2_TR(0x60c8f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L60c90d;}}
}
B60c8f9:L60c8f9:{c.instructions+=2;NFSU2_TR(0x60c8f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60c918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B60c900:{NFSU2_TR(0x60c900);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x60c910ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B60c907:L60c907:{c.instructions+=2;NFSU2_TR(0x60c907);
w4(R+0,u32(0x1ull));
}
B60c90c:{NFSU2_TR(0x60c90c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c90d:L60c90d:{c.instructions+=2;NFSU2_TR(0x60c90d);
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
B60c90f:{NFSU2_TR(0x60c90f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60c940:L60c940:{c.instructions+=8;NFSU2_TR(0x60c940);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60c946:{NFSU2_TR(0x60c946);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x300ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60c94c:{NFSU2_TR(0x60c94c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c94d:{NFSU2_TR(0x60c94d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60c94e:{NFSU2_TR(0x60c94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60c954:{NFSU2_TR(0x60c954);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B60c957:{NFSU2_TR(0x60c957);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60c959:{NFSU2_TR(0x60c959);
if(r1(R+518)){{goto L60c967;}}
}
B60c95b:L60c95b:{c.instructions+=2;NFSU2_TR(0x60c95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c961:{NFSU2_TR(0x60c961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7e0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c967:L60c967:{c.instructions+=2;NFSU2_TR(0x60c967);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c96d:{NFSU2_TR(0x60c96d);
if(r1(R+518)){{goto L60c97b;}}
}
B60c96f:L60c96f:{c.instructions+=2;NFSU2_TR(0x60c96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c975:{NFSU2_TR(0x60c975);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c97b:L60c97b:{c.instructions+=2;NFSU2_TR(0x60c97b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c981:{NFSU2_TR(0x60c981);
if(r1(R+518)){{goto L60c98f;}}
}
B60c983:L60c983:{c.instructions+=2;NFSU2_TR(0x60c983);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c989:{NFSU2_TR(0x60c989);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x830ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c98f:L60c98f:{c.instructions+=2;NFSU2_TR(0x60c98f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c995:{NFSU2_TR(0x60c995);
if(r1(R+518)){{goto L60c9a3;}}
}
B60c997:L60c997:{c.instructions+=2;NFSU2_TR(0x60c997);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c99d:{NFSU2_TR(0x60c99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9a3:L60c9a3:{c.instructions+=2;NFSU2_TR(0x60c9a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x87cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c9a9:{NFSU2_TR(0x60c9a9);
if(r1(R+518)){{goto L60c9b7;}}
}
B60c9ab:L60c9ab:{c.instructions+=2;NFSU2_TR(0x60c9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x87cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9b1:{NFSU2_TR(0x60c9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x880ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9b7:L60c9b7:{c.instructions+=2;NFSU2_TR(0x60c9b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c9bd:{NFSU2_TR(0x60c9bd);
if(r1(R+518)){{goto L60c9cb;}}
}
B60c9bf:L60c9bf:{c.instructions+=2;NFSU2_TR(0x60c9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9c5:{NFSU2_TR(0x60c9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x890ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9cb:L60c9cb:{c.instructions+=2;NFSU2_TR(0x60c9cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c9d1:{NFSU2_TR(0x60c9d1);
if(r1(R+518)){{goto L60c9df;}}
}
B60c9d3:L60c9d3:{c.instructions+=2;NFSU2_TR(0x60c9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9d9:{NFSU2_TR(0x60c9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9df:L60c9df:{c.instructions+=2;NFSU2_TR(0x60c9df);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c9e5:{NFSU2_TR(0x60c9e5);
if(r1(R+518)){{goto L60c9f3;}}
}
B60c9e7:L60c9e7:{c.instructions+=2;NFSU2_TR(0x60c9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9ed:{NFSU2_TR(0x60c9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8e0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60c9f3:L60c9f3:{c.instructions+=2;NFSU2_TR(0x60c9f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60c9f9:{NFSU2_TR(0x60c9f9);
if(r1(R+518)){{goto L60ca07;}}
}
B60c9fb:L60c9fb:{c.instructions+=2;NFSU2_TR(0x60c9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca01:{NFSU2_TR(0x60ca01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca07:L60ca07:{c.instructions+=2;NFSU2_TR(0x60ca07);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca0d:{NFSU2_TR(0x60ca0d);
if(r1(R+518)){{goto L60ca1b;}}
}
B60ca0f:L60ca0f:{c.instructions+=2;NFSU2_TR(0x60ca0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca15:{NFSU2_TR(0x60ca15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca1b:L60ca1b:{c.instructions+=2;NFSU2_TR(0x60ca1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca21:{NFSU2_TR(0x60ca21);
if(r1(R+518)){{goto L60ca2f;}}
}
B60ca23:L60ca23:{c.instructions+=2;NFSU2_TR(0x60ca23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca29:{NFSU2_TR(0x60ca29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca2f:L60ca2f:{c.instructions+=2;NFSU2_TR(0x60ca2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca35:{NFSU2_TR(0x60ca35);
if(r1(R+518)){{goto L60ca43;}}
}
B60ca37:L60ca37:{c.instructions+=2;NFSU2_TR(0x60ca37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca3d:{NFSU2_TR(0x60ca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca43:L60ca43:{c.instructions+=2;NFSU2_TR(0x60ca43);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca49:{NFSU2_TR(0x60ca49);
if(r1(R+518)){{goto L60ca57;}}
}
B60ca4b:L60ca4b:{c.instructions+=2;NFSU2_TR(0x60ca4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca51:{NFSU2_TR(0x60ca51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca57:L60ca57:{c.instructions+=2;NFSU2_TR(0x60ca57);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca5d:{NFSU2_TR(0x60ca5d);
if(r1(R+518)){{goto L60ca6b;}}
}
B60ca5f:L60ca5f:{c.instructions+=2;NFSU2_TR(0x60ca5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca65:{NFSU2_TR(0x60ca65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca6b:L60ca6b:{c.instructions+=2;NFSU2_TR(0x60ca6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca71:{NFSU2_TR(0x60ca71);
if(r1(R+518)){{goto L60ca7f;}}
}
B60ca73:L60ca73:{c.instructions+=2;NFSU2_TR(0x60ca73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca79:{NFSU2_TR(0x60ca79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca7f:L60ca7f:{c.instructions+=2;NFSU2_TR(0x60ca7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca85:{NFSU2_TR(0x60ca85);
if(r1(R+518)){{goto L60ca93;}}
}
B60ca87:L60ca87:{c.instructions+=2;NFSU2_TR(0x60ca87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca8d:{NFSU2_TR(0x60ca8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ca93:L60ca93:{c.instructions+=2;NFSU2_TR(0x60ca93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ca99:{NFSU2_TR(0x60ca99);
if(r1(R+518)){{goto L60caa7;}}
}
B60ca9b:L60ca9b:{c.instructions+=2;NFSU2_TR(0x60ca9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60caa1:{NFSU2_TR(0x60caa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1100ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60caa7:L60caa7:{c.instructions+=2;NFSU2_TR(0x60caa7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60caad:{NFSU2_TR(0x60caad);
if(r1(R+518)){{goto L60cabb;}}
}
B60caaf:L60caaf:{c.instructions+=2;NFSU2_TR(0x60caaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cab5:{NFSU2_TR(0x60cab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1110ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cabb:L60cabb:{c.instructions+=2;NFSU2_TR(0x60cabb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cac1:{NFSU2_TR(0x60cac1);
if(r1(R+518)){{goto L60cacf;}}
}
B60cac3:L60cac3:{c.instructions+=2;NFSU2_TR(0x60cac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cac9:{NFSU2_TR(0x60cac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1150ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cacf:L60cacf:{c.instructions+=2;NFSU2_TR(0x60cacf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x115cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cad5:{NFSU2_TR(0x60cad5);
if(r1(R+518)){{goto L60cae3;}}
}
B60cad7:L60cad7:{c.instructions+=2;NFSU2_TR(0x60cad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x115cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cadd:{NFSU2_TR(0x60cadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cae3:L60cae3:{c.instructions+=2;NFSU2_TR(0x60cae3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cae9:{NFSU2_TR(0x60cae9);
if(r1(R+518)){{goto L60caf7;}}
}
B60caeb:L60caeb:{c.instructions+=2;NFSU2_TR(0x60caeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60caf1:{NFSU2_TR(0x60caf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60caf7:L60caf7:{c.instructions+=2;NFSU2_TR(0x60caf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cafd:{NFSU2_TR(0x60cafd);
if(r1(R+518)){{goto L60cb0b;}}
}
B60caff:L60caff:{c.instructions+=2;NFSU2_TR(0x60caff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb05:{NFSU2_TR(0x60cb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb0b:L60cb0b:{c.instructions+=2;NFSU2_TR(0x60cb0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cb11:{NFSU2_TR(0x60cb11);
if(r1(R+518)){{goto L60cb1f;}}
}
B60cb13:L60cb13:{c.instructions+=2;NFSU2_TR(0x60cb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb19:{NFSU2_TR(0x60cb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11f0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb1f:L60cb1f:{c.instructions+=2;NFSU2_TR(0x60cb1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cb25:{NFSU2_TR(0x60cb25);
if(r1(R+518)){{goto L60cb33;}}
}
B60cb27:L60cb27:{c.instructions+=2;NFSU2_TR(0x60cb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb2d:{NFSU2_TR(0x60cb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1200ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb33:L60cb33:{c.instructions+=6;NFSU2_TR(0x60cb33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B60cb35:{NFSU2_TR(0x60cb35);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60cb37:{NFSU2_TR(0x60cb37);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B60cb39:{NFSU2_TR(0x60cb39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60cb3b:{NFSU2_TR(0x60cb3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cb3c:{NFSU2_TR(0x60cb3c);
if(r1(R+518)){{goto L60cb4f;}}
}
B60cb3e:L60cb3e:{c.instructions+=3;NFSU2_TR(0x60cb3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B60cb44:{NFSU2_TR(0x60cb44);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60cb46:{NFSU2_TR(0x60cb46);
if(r1(R+518)){{goto L60cb4f;}}
}
B60cb48:L60cb48:{c.instructions+=2;NFSU2_TR(0x60cb48);
w4(R+0,u32(0x1ull));
}
B60cb4d:{NFSU2_TR(0x60cb4d);
__builtin_memmove((R+8),(R+0),4);
}
B60cb4f:L60cb4f:{c.instructions+=3;NFSU2_TR(0x60cb4f);
__builtin_memmove((R+28),gp(0x8a1bf4),4);
}
B60cb55:{NFSU2_TR(0x60cb55);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60cb57:{NFSU2_TR(0x60cb57);
if(r1(R+518)){{goto L60cb60;}}
}
B60cb59:L60cb59:{c.instructions+=2;NFSU2_TR(0x60cb59);
w4(R+0,u32(0x1ull));
}
B60cb5e:{NFSU2_TR(0x60cb5e);
__builtin_memmove((R+8),(R+0),4);
}
B60cb60:L60cb60:{c.instructions+=8;NFSU2_TR(0x60cb60);
u8 U[16];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B60cb67:{NFSU2_TR(0x60cb67);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cb6d:{NFSU2_TR(0x60cb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60cb73:{NFSU2_TR(0x60cb73);
u8 U[16];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B60cb7a:{NFSU2_TR(0x60cb7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cb7b:{NFSU2_TR(0x60cb7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B60cb82:{NFSU2_TR(0x60cb82);
u8 U[16];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B60cb89:{NFSU2_TR(0x60cb89);
if(r1(R+518)){{goto L60cb97;}}
}
B60cb8b:L60cb8b:{c.instructions+=2;NFSU2_TR(0x60cb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7fcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb91:{NFSU2_TR(0x60cb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x800ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cb97:L60cb97:{c.instructions+=2;NFSU2_TR(0x60cb97);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cb9d:{NFSU2_TR(0x60cb9d);
if(r1(R+518)){{goto L60cbab;}}
}
B60cb9f:L60cb9f:{c.instructions+=2;NFSU2_TR(0x60cb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cba5:{NFSU2_TR(0x60cba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x810ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbab:L60cbab:{c.instructions+=2;NFSU2_TR(0x60cbab);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cbb1:{NFSU2_TR(0x60cbb1);
if(r1(R+518)){{goto L60cbbf;}}
}
B60cbb3:L60cbb3:{c.instructions+=2;NFSU2_TR(0x60cbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbb9:{NFSU2_TR(0x60cbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x820ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbbf:L60cbbf:{c.instructions+=2;NFSU2_TR(0x60cbbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cbc5:{NFSU2_TR(0x60cbc5);
if(r1(R+518)){{goto L60cbd3;}}
}
B60cbc7:L60cbc7:{c.instructions+=2;NFSU2_TR(0x60cbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbcd:{NFSU2_TR(0x60cbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x850ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbd3:L60cbd3:{c.instructions+=2;NFSU2_TR(0x60cbd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x85cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cbd9:{NFSU2_TR(0x60cbd9);
if(r1(R+518)){{goto L60cbe7;}}
}
B60cbdb:L60cbdb:{c.instructions+=2;NFSU2_TR(0x60cbdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x85cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbe1:{NFSU2_TR(0x60cbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x860ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbe7:L60cbe7:{c.instructions+=2;NFSU2_TR(0x60cbe7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cbed:{NFSU2_TR(0x60cbed);
if(r1(R+518)){{goto L60cbfb;}}
}
B60cbef:L60cbef:{c.instructions+=2;NFSU2_TR(0x60cbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x86cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbf5:{NFSU2_TR(0x60cbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x870ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cbfb:L60cbfb:{c.instructions+=2;NFSU2_TR(0x60cbfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x89cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc01:{NFSU2_TR(0x60cc01);
if(r1(R+518)){{goto L60cc0f;}}
}
B60cc03:L60cc03:{c.instructions+=2;NFSU2_TR(0x60cc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x89cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc09:{NFSU2_TR(0x60cc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc0f:L60cc0f:{c.instructions+=2;NFSU2_TR(0x60cc0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc15:{NFSU2_TR(0x60cc15);
if(r1(R+518)){{goto L60cc23;}}
}
B60cc17:L60cc17:{c.instructions+=2;NFSU2_TR(0x60cc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8acull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc1d:{NFSU2_TR(0x60cc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc23:L60cc23:{c.instructions+=2;NFSU2_TR(0x60cc23);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc29:{NFSU2_TR(0x60cc29);
if(r1(R+518)){{goto L60cc37;}}
}
B60cc2b:L60cc2b:{c.instructions+=2;NFSU2_TR(0x60cc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc31:{NFSU2_TR(0x60cc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc37:L60cc37:{c.instructions+=2;NFSU2_TR(0x60cc37);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc3d:{NFSU2_TR(0x60cc3d);
if(r1(R+518)){{goto L60cc4b;}}
}
B60cc3f:L60cc3f:{c.instructions+=2;NFSU2_TR(0x60cc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc45:{NFSU2_TR(0x60cc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc4b:L60cc4b:{c.instructions+=2;NFSU2_TR(0x60cc4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc51:{NFSU2_TR(0x60cc51);
if(r1(R+518)){{goto L60cc5f;}}
}
B60cc53:L60cc53:{c.instructions+=2;NFSU2_TR(0x60cc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc59:{NFSU2_TR(0x60cc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc5f:L60cc5f:{c.instructions+=2;NFSU2_TR(0x60cc5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc65:{NFSU2_TR(0x60cc65);
if(r1(R+518)){{goto L60cc73;}}
}
B60cc67:L60cc67:{c.instructions+=2;NFSU2_TR(0x60cc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc6d:{NFSU2_TR(0x60cc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc73:L60cc73:{c.instructions+=2;NFSU2_TR(0x60cc73);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc79:{NFSU2_TR(0x60cc79);
if(r1(R+518)){{goto L60cc87;}}
}
B60cc7b:L60cc7b:{c.instructions+=2;NFSU2_TR(0x60cc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc81:{NFSU2_TR(0x60cc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc87:L60cc87:{c.instructions+=2;NFSU2_TR(0x60cc87);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cc8d:{NFSU2_TR(0x60cc8d);
if(r1(R+518)){{goto L60cc9b;}}
}
B60cc8f:L60cc8f:{c.instructions+=2;NFSU2_TR(0x60cc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc9cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc95:{NFSU2_TR(0x60cc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xca0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cc9b:L60cc9b:{c.instructions+=2;NFSU2_TR(0x60cc9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cca1:{NFSU2_TR(0x60cca1);
if(r1(R+518)){{goto L60ccaf;}}
}
B60cca3:L60cca3:{c.instructions+=2;NFSU2_TR(0x60cca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cca9:{NFSU2_TR(0x60cca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccaf:L60ccaf:{c.instructions+=2;NFSU2_TR(0x60ccaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ccb5:{NFSU2_TR(0x60ccb5);
if(r1(R+518)){{goto L60ccc3;}}
}
B60ccb7:L60ccb7:{c.instructions+=2;NFSU2_TR(0x60ccb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccbd:{NFSU2_TR(0x60ccbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xce0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccc3:L60ccc3:{c.instructions+=2;NFSU2_TR(0x60ccc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ccc9:{NFSU2_TR(0x60ccc9);
if(r1(R+518)){{goto L60ccd7;}}
}
B60cccb:L60cccb:{c.instructions+=2;NFSU2_TR(0x60cccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccd1:{NFSU2_TR(0x60ccd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccd7:L60ccd7:{c.instructions+=2;NFSU2_TR(0x60ccd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ccdd:{NFSU2_TR(0x60ccdd);
if(r1(R+518)){{goto L60cceb;}}
}
B60ccdf:L60ccdf:{c.instructions+=2;NFSU2_TR(0x60ccdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cce5:{NFSU2_TR(0x60cce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd00ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cceb:L60cceb:{c.instructions+=2;NFSU2_TR(0x60cceb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ccf1:{NFSU2_TR(0x60ccf1);
if(r1(R+518)){{goto L60ccff;}}
}
B60ccf3:L60ccf3:{c.instructions+=2;NFSU2_TR(0x60ccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccf9:{NFSU2_TR(0x60ccf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ccff:L60ccff:{c.instructions+=2;NFSU2_TR(0x60ccff);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd05:{NFSU2_TR(0x60cd05);
if(r1(R+518)){{goto L60cd13;}}
}
B60cd07:L60cd07:{c.instructions+=2;NFSU2_TR(0x60cd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd3cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd0d:{NFSU2_TR(0x60cd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd13:L60cd13:{c.instructions+=2;NFSU2_TR(0x60cd13);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd19:{NFSU2_TR(0x60cd19);
if(r1(R+518)){{goto L60cd27;}}
}
B60cd1b:L60cd1b:{c.instructions+=2;NFSU2_TR(0x60cd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd21:{NFSU2_TR(0x60cd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd27:L60cd27:{c.instructions+=2;NFSU2_TR(0x60cd27);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd2d:{NFSU2_TR(0x60cd2d);
if(r1(R+518)){{goto L60cd3b;}}
}
B60cd2f:L60cd2f:{c.instructions+=2;NFSU2_TR(0x60cd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd35:{NFSU2_TR(0x60cd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd3b:L60cd3b:{c.instructions+=2;NFSU2_TR(0x60cd3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd41:{NFSU2_TR(0x60cd41);
if(r1(R+518)){{goto L60cd4f;}}
}
B60cd43:L60cd43:{c.instructions+=2;NFSU2_TR(0x60cd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd49:{NFSU2_TR(0x60cd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd4f:L60cd4f:{c.instructions+=2;NFSU2_TR(0x60cd4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd55:{NFSU2_TR(0x60cd55);
if(r1(R+518)){{goto L60cd63;}}
}
B60cd57:L60cd57:{c.instructions+=2;NFSU2_TR(0x60cd57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd5d:{NFSU2_TR(0x60cd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xda0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd63:L60cd63:{c.instructions+=2;NFSU2_TR(0x60cd63);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x111cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd69:{NFSU2_TR(0x60cd69);
if(r1(R+518)){{goto L60cd77;}}
}
B60cd6b:L60cd6b:{c.instructions+=2;NFSU2_TR(0x60cd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x111cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd71:{NFSU2_TR(0x60cd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd77:L60cd77:{c.instructions+=2;NFSU2_TR(0x60cd77);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x112cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd7d:{NFSU2_TR(0x60cd7d);
if(r1(R+518)){{goto L60cd8b;}}
}
B60cd7f:L60cd7f:{c.instructions+=2;NFSU2_TR(0x60cd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x112cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd85:{NFSU2_TR(0x60cd85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1130ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd8b:L60cd8b:{c.instructions+=2;NFSU2_TR(0x60cd8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x113cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cd91:{NFSU2_TR(0x60cd91);
if(r1(R+518)){{goto L60cd9f;}}
}
B60cd93:L60cd93:{c.instructions+=2;NFSU2_TR(0x60cd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x113cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd99:{NFSU2_TR(0x60cd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1140ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cd9f:L60cd9f:{c.instructions+=2;NFSU2_TR(0x60cd9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x116cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cda5:{NFSU2_TR(0x60cda5);
if(r1(R+518)){{goto L60cdb3;}}
}
B60cda7:L60cda7:{c.instructions+=2;NFSU2_TR(0x60cda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x116cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdad:{NFSU2_TR(0x60cdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdb3:L60cdb3:{c.instructions+=2;NFSU2_TR(0x60cdb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cdb9:{NFSU2_TR(0x60cdb9);
if(r1(R+518)){{goto L60cdc7;}}
}
B60cdbb:L60cdbb:{c.instructions+=2;NFSU2_TR(0x60cdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdc1:{NFSU2_TR(0x60cdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdc7:L60cdc7:{c.instructions+=2;NFSU2_TR(0x60cdc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cdcd:{NFSU2_TR(0x60cdcd);
if(r1(R+518)){{goto L60cddb;}}
}
B60cdcf:L60cdcf:{c.instructions+=2;NFSU2_TR(0x60cdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdd5:{NFSU2_TR(0x60cdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1190ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cddb:L60cddb:{c.instructions+=2;NFSU2_TR(0x60cddb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cde1:{NFSU2_TR(0x60cde1);
if(r1(R+518)){{goto L60cdef;}}
}
B60cde3:L60cde3:{c.instructions+=2;NFSU2_TR(0x60cde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cde9:{NFSU2_TR(0x60cde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdef:L60cdef:{c.instructions+=2;NFSU2_TR(0x60cdef);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60cdf5:{NFSU2_TR(0x60cdf5);
if(r1(R+518)){{goto L60ce03;}}
}
B60cdf7:L60cdf7:{c.instructions+=2;NFSU2_TR(0x60cdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ccull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60cdfd:{NFSU2_TR(0x60cdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11d0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce03:L60ce03:{c.instructions+=3;NFSU2_TR(0x60ce03);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ce09:{NFSU2_TR(0x60ce09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60ce0a:{NFSU2_TR(0x60ce0a);
if(r1(R+518)){{goto L60ce18;}}
}
B60ce0c:L60ce0c:{c.instructions+=2;NFSU2_TR(0x60ce0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11dcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce12:{NFSU2_TR(0x60ce12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11e0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce18:L60ce18:{c.instructions+=3;NFSU2_TR(0x60ce18);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ce1e:{NFSU2_TR(0x60ce1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60ce1f:{NFSU2_TR(0x60ce1f);
if(r1(R+518)){{goto L60ce2d;}}
}
B60ce21:L60ce21:{c.instructions+=2;NFSU2_TR(0x60ce21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce27:{NFSU2_TR(0x60ce27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1210ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce2d:L60ce2d:{c.instructions+=2;NFSU2_TR(0x60ce2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x121cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B60ce33:{NFSU2_TR(0x60ce33);
if(r1(R+518)){{goto L60ce41;}}
}
B60ce35:L60ce35:{c.instructions+=2;NFSU2_TR(0x60ce35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x121cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce3b:{NFSU2_TR(0x60ce3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1220ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce41:L60ce41:{c.instructions+=2;NFSU2_TR(0x60ce41);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x122cull))));
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
B60ce47:{NFSU2_TR(0x60ce47);
if(r1(R+518)){{goto L60ce55;}}
}
B60ce49:L60ce49:{c.instructions+=2;NFSU2_TR(0x60ce49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x122cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce4f:{NFSU2_TR(0x60ce4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1230ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ce55:L60ce55:{c.instructions+=3;NFSU2_TR(0x60ce55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60ce56:{NFSU2_TR(0x60ce56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60ce57:{NFSU2_TR(0x60ce57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60ce60:L60ce60:{c.instructions+=10;NFSU2_TR(0x60ce60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60ce64:{NFSU2_TR(0x60ce64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60ce66:{NFSU2_TR(0x60ce66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ce6a:{NFSU2_TR(0x60ce6a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ce6c:{NFSU2_TR(0x60ce6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60ce6e:{NFSU2_TR(0x60ce6e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ce70:{NFSU2_TR(0x60ce70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60ce76:{NFSU2_TR(0x60ce76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60ce78:{NFSU2_TR(0x60ce78);
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
B60ce7b:{NFSU2_TR(0x60ce7b);
if(r1(R+518)){{goto L60ce9d;}}
}
B60ce7d:L60ce7d:{c.instructions+=4;NFSU2_TR(0x60ce7d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60ce83:{NFSU2_TR(0x60ce83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60ce85:{NFSU2_TR(0x60ce85);
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
B60ce88:{NFSU2_TR(0x60ce88);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60ceb2;}}
}
B60ce8a:L60ce8a:{c.instructions+=6;NFSU2_TR(0x60ce8a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ce8d:{NFSU2_TR(0x60ce8d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ce90:{NFSU2_TR(0x60ce90);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60ce96:{NFSU2_TR(0x60ce96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60ce98:{NFSU2_TR(0x60ce98);
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
B60ce9b:{NFSU2_TR(0x60ce9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60cea5;}}
}
B60ce9d:L60ce9d:{c.instructions+=3;NFSU2_TR(0x60ce9d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60ce9f:{NFSU2_TR(0x60ce9f);
w4(R+0,u32(0x1ull));
}
B60cea4:{NFSU2_TR(0x60cea4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cea5:L60cea5:{c.instructions+=4;NFSU2_TR(0x60cea5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60ceab:{NFSU2_TR(0x60ceab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60cead:{NFSU2_TR(0x60cead);
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
B60ceb0:{NFSU2_TR(0x60ceb0);
if(r1(R+514)){{goto L60ceb8;}}
}
B60ceb2:L60ceb2:{c.instructions+=2;NFSU2_TR(0x60ceb2);
w4(R+0,u32(0xffffffffull));
}
B60ceb7:{NFSU2_TR(0x60ceb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60ceb8:L60ceb8:{c.instructions+=2;NFSU2_TR(0x60ceb8);
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
B60ceba:{NFSU2_TR(0x60ceba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cec0:L60cec0:{c.instructions+=5;NFSU2_TR(0x60cec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60cec4:{NFSU2_TR(0x60cec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60cec8:{NFSU2_TR(0x60cec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cec9:{NFSU2_TR(0x60cec9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ceca:{NFSU2_TR(0x60ceca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60cecfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60ce60u);}goto L60ce60;}
}
B60cecf:L60cecf:{c.instructions+=2;NFSU2_TR(0x60cecf);
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
B60ced2:{NFSU2_TR(0x60ced2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cee0:L60cee0:{c.instructions+=13;NFSU2_TR(0x60cee0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60cee4:{NFSU2_TR(0x60cee4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cee5:{NFSU2_TR(0x60cee5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cee6:{NFSU2_TR(0x60cee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B60ceea:{NFSU2_TR(0x60ceea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60ceeb:{NFSU2_TR(0x60ceeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60ceef:{NFSU2_TR(0x60ceef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cef0:{NFSU2_TR(0x60cef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cef1:{NFSU2_TR(0x60cef1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cef3:{NFSU2_TR(0x60cef3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cef4:{NFSU2_TR(0x60cef4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cef5:{NFSU2_TR(0x60cef5);
w4(R+28,u32(0x1ull));
}
B60cefa:{NFSU2_TR(0x60cefa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60ceffull));
TAIL_STATIC(0x75cc70u,75c);
}
B60ceff:L60ceff:{c.instructions+=4;NFSU2_TR(0x60ceff);
w4(R+12,u32(0x2ull));
}
B60cf04:{NFSU2_TR(0x60cf04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B60cf07:{NFSU2_TR(0x60cf07);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B60cf09:{NFSU2_TR(0x60cf09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60cf69;}}
}
B60cf0b:L60cf0b:{c.instructions+=1;NFSU2_TR(0x60cf0b);
{goto L60cf10;}
}
B60cf10:L60cf10:{c.instructions+=3;NFSU2_TR(0x60cf10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60cf13:{NFSU2_TR(0x60cf13);
__builtin_memmove((R+4),(R+28),4);
}
B60cf15:{NFSU2_TR(0x60cf15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60cf54;}}
}
B60cf17:L60cf17:{c.instructions+=2;NFSU2_TR(0x60cf17);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B60cf1a:{NFSU2_TR(0x60cf1a);
__builtin_memmove((R+12),(R+12),4);
}
B60cf20:L60cf20:{c.instructions+=17;NFSU2_TR(0x60cf20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60cf23:{NFSU2_TR(0x60cf23);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B60cf27:{NFSU2_TR(0x60cf27);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf2a:{NFSU2_TR(0x60cf2a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cf2d:{NFSU2_TR(0x60cf2d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf2f:{NFSU2_TR(0x60cf2f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cf31:{NFSU2_TR(0x60cf31);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B60cf33:{NFSU2_TR(0x60cf33);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf36:{NFSU2_TR(0x60cf36);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cf39:{NFSU2_TR(0x60cf39);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf3b:{NFSU2_TR(0x60cf3b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cf3d:{NFSU2_TR(0x60cf3d);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B60cf3f:{NFSU2_TR(0x60cf3f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B60cf41:{NFSU2_TR(0x60cf41);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60cf47:{NFSU2_TR(0x60cf47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60cf49:{NFSU2_TR(0x60cf49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60cf4c:{NFSU2_TR(0x60cf4c);
if(r1(R+514)){{goto L60cf54;}}
}
B60cf4e:L60cf4e:{c.instructions+=3;NFSU2_TR(0x60cf4e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B60cf4f:{NFSU2_TR(0x60cf4f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60cf52:{NFSU2_TR(0x60cf52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60cf20u);}goto L60cf20;}}
}
B60cf54:L60cf54:{c.instructions+=8;NFSU2_TR(0x60cf54);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B60cf58:{NFSU2_TR(0x60cf58);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60cf5b:{NFSU2_TR(0x60cf5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B60cf5e:{NFSU2_TR(0x60cf5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60cf61:{NFSU2_TR(0x60cf61);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60cf64:{NFSU2_TR(0x60cf64);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60cf65:{NFSU2_TR(0x60cf65);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B60cf67:{NFSU2_TR(0x60cf67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60cf10u);}goto L60cf10;}}
}
B60cf69:L60cf69:{c.instructions+=6;NFSU2_TR(0x60cf69);
__builtin_memmove((R+0),(R+28),4);
}
B60cf6b:{NFSU2_TR(0x60cf6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60cf6c:{NFSU2_TR(0x60cf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60cf6d:{NFSU2_TR(0x60cf6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60cf6e:{NFSU2_TR(0x60cf6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60cf6f:{NFSU2_TR(0x60cf6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cf70:L60cf70:{c.instructions+=7;NFSU2_TR(0x60cf70);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf74:{NFSU2_TR(0x60cf74);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cf78:{NFSU2_TR(0x60cf78);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60cf7a:{NFSU2_TR(0x60cf7a);
{u32 ea_=u32(u32(8021580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60cf80:{NFSU2_TR(0x60cf80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60cf82:{NFSU2_TR(0x60cf82);
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
B60cf85:{NFSU2_TR(0x60cf85);
if(r1(R+514)){{goto L60cf8d;}}
}
B60cf87:L60cf87:{c.instructions+=2;NFSU2_TR(0x60cf87);
w4(R+0,u32(0x1ull));
}
B60cf8c:{NFSU2_TR(0x60cf8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cf8d:L60cf8d:{c.instructions+=2;NFSU2_TR(0x60cf8d);
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
B60cf8f:{NFSU2_TR(0x60cf8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cf90:L60cf90:{c.instructions+=24;NFSU2_TR(0x60cf90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60cf91:{NFSU2_TR(0x60cf91);
__builtin_memmove((R+20),(R+16),4);
}
B60cf93:{NFSU2_TR(0x60cf93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60cf96:{NFSU2_TR(0x60cf96);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cf98:{NFSU2_TR(0x60cf98);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60cf9b:{NFSU2_TR(0x60cf9b);
{u32 ea_=u32(u32(9051904u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cfa1:{NFSU2_TR(0x60cfa1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cfa4:{NFSU2_TR(0x60cfa4);
{u32 ea_=u32(u32(9051908u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cfaa:{NFSU2_TR(0x60cfaa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cfad:{NFSU2_TR(0x60cfad);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60cfb3:{NFSU2_TR(0x60cfb3);
{u32 ea_=u32(u32(9055440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cfb9:{NFSU2_TR(0x60cfb9);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B60cfbb:{NFSU2_TR(0x60cfbb);
{u32 ea_=u32(u32(9055448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cfc1:{NFSU2_TR(0x60cfc1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60cfc3:{NFSU2_TR(0x60cfc3);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B60cfc5:{NFSU2_TR(0x60cfc5);
{u32 ea_=u32(u32(9055444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60cfcb:{NFSU2_TR(0x60cfcb);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B60cfcd:{NFSU2_TR(0x60cfcd);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B60cfcf:{NFSU2_TR(0x60cfcf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60cfd1:{NFSU2_TR(0x60cfd1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60cfd3:{NFSU2_TR(0x60cfd3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B60cfd9:{NFSU2_TR(0x60cfd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60cfdb:{NFSU2_TR(0x60cfdb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60cfde:{NFSU2_TR(0x60cfde);
if(r1(R+514)){{goto L60cfe2;}}
}
B60cfe0:L60cfe0:{c.instructions+=1;NFSU2_TR(0x60cfe0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60cfe2:L60cfe2:{c.instructions+=4;NFSU2_TR(0x60cfe2);
{u32 ea_=u32(u32(8021788u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60cfe8:{NFSU2_TR(0x60cfe8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60cfea:{NFSU2_TR(0x60cfea);
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
B60cfed:{NFSU2_TR(0x60cfed);
if(r1(R+514)){{goto L60cff8;}}
}
B60cfef:L60cfef:{c.instructions+=4;NFSU2_TR(0x60cfef);
w4(R+0,u32(0x1ull));
}
B60cff4:{NFSU2_TR(0x60cff4);
__builtin_memmove((R+16),(R+20),4);
}
B60cff6:{NFSU2_TR(0x60cff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60cff7:{NFSU2_TR(0x60cff7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60cff8:L60cff8:{c.instructions+=4;NFSU2_TR(0x60cff8);
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
B60cffa:{NFSU2_TR(0x60cffa);
__builtin_memmove((R+16),(R+20),4);
}
B60cffc:{NFSU2_TR(0x60cffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60cffd:{NFSU2_TR(0x60cffd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x60c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
