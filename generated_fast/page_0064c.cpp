#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_648(u8* __restrict R,Cpu& c);
u32 body_64a(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_64d(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64c(u8* __restrict R,Cpu& c);
u32 page_64c(Cpu& c){return body_64c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64c001:goto L64c001;
case 0x64c004:c.instructions+=1;goto B64c004;
case 0x64c006:goto L64c006;
case 0x64c009:c.instructions+=9;goto B64c009;
case 0x64c00c:c.instructions+=8;goto B64c00c;
case 0x64c00d:c.instructions+=7;goto B64c00d;
case 0x64c010:c.instructions+=6;goto B64c010;
case 0x64c013:c.instructions+=5;goto B64c013;
case 0x64c016:c.instructions+=4;goto B64c016;
case 0x64c017:c.instructions+=3;goto B64c017;
case 0x64c019:c.instructions+=2;goto B64c019;
case 0x64c01a:c.instructions+=1;goto B64c01a;
case 0x64c01f:goto L64c01f;
case 0x64c021:c.instructions+=1;goto B64c021;
case 0x64c023:goto L64c023;
case 0x64c025:c.instructions+=2;goto B64c025;
case 0x64c027:c.instructions+=1;goto B64c027;
case 0x64c029:goto L64c029;
case 0x64c02c:c.instructions+=1;goto B64c02c;
case 0x64c02e:goto L64c02e;
case 0x64c02f:c.instructions+=2;goto B64c02f;
case 0x64c031:c.instructions+=1;goto B64c031;
case 0x64c033:goto L64c033;
case 0x64c036:c.instructions+=4;goto B64c036;
case 0x64c039:c.instructions+=3;goto B64c039;
case 0x64c03a:c.instructions+=2;goto B64c03a;
case 0x64c03d:c.instructions+=1;goto B64c03d;
case 0x64c03f:goto L64c03f;
case 0x64c042:c.instructions+=3;goto B64c042;
case 0x64c045:c.instructions+=2;goto B64c045;
case 0x64c047:c.instructions+=1;goto B64c047;
case 0x64c04d:goto L64c04d;
case 0x64c050:c.instructions+=1;goto B64c050;
case 0x64c052:goto L64c052;
case 0x64c055:c.instructions+=5;goto B64c055;
case 0x64c056:c.instructions+=4;goto B64c056;
case 0x64c057:c.instructions+=3;goto B64c057;
case 0x64c05a:c.instructions+=2;goto B64c05a;
case 0x64c05c:c.instructions+=1;goto B64c05c;
case 0x64c061:goto L64c061;
case 0x64c063:c.instructions+=1;goto B64c063;
case 0x64c065:goto L64c065;
case 0x64c067:c.instructions+=1;goto B64c067;
case 0x64c069:goto L64c069;
case 0x64c06b:c.instructions+=1;goto B64c06b;
case 0x64c06d:goto L64c06d;
case 0x64c070:c.instructions+=4;goto B64c070;
case 0x64c072:c.instructions+=3;goto B64c072;
case 0x64c075:c.instructions+=2;goto B64c075;
case 0x64c078:c.instructions+=1;goto B64c078;
case 0x64c07a:goto L64c07a;
case 0x64c07d:c.instructions+=9;goto B64c07d;
case 0x64c080:c.instructions+=8;goto B64c080;
case 0x64c083:c.instructions+=7;goto B64c083;
case 0x64c086:c.instructions+=6;goto B64c086;
case 0x64c089:c.instructions+=5;goto B64c089;
case 0x64c08a:c.instructions+=4;goto B64c08a;
case 0x64c08b:c.instructions+=3;goto B64c08b;
case 0x64c08d:c.instructions+=2;goto B64c08d;
case 0x64c08e:c.instructions+=1;goto B64c08e;
case 0x64c093:goto L64c093;
case 0x64c098:goto L64c098;
case 0x64c09a:c.instructions+=7;goto B64c09a;
case 0x64c09b:c.instructions+=6;goto B64c09b;
case 0x64c09d:c.instructions+=5;goto B64c09d;
case 0x64c0a0:c.instructions+=4;goto B64c0a0;
case 0x64c0a2:c.instructions+=3;goto B64c0a2;
case 0x64c0a5:c.instructions+=2;goto B64c0a5;
case 0x64c0a8:c.instructions+=1;goto B64c0a8;
case 0x64c0ad:goto L64c0ad;
case 0x64c0ae:c.instructions+=1;goto B64c0ae;
case 0x64c0b1:goto L64c0b1;
case 0x64c0b3:c.instructions+=4;goto B64c0b3;
case 0x64c0b4:c.instructions+=3;goto B64c0b4;
case 0x64c0b6:c.instructions+=2;goto B64c0b6;
case 0x64c0ba:c.instructions+=1;goto B64c0ba;
case 0x64c0bc:goto L64c0bc;
case 0x64c0be:c.instructions+=1;goto B64c0be;
case 0x64c0c0:goto L64c0c0;
case 0x64c0c3:c.instructions+=4;goto B64c0c3;
case 0x64c0c5:c.instructions+=3;goto B64c0c5;
case 0x64c0c8:c.instructions+=2;goto B64c0c8;
case 0x64c0cb:c.instructions+=1;goto B64c0cb;
case 0x64c0d0:goto L64c0d0;
case 0x64c0d1:c.instructions+=1;goto B64c0d1;
case 0x64c0d4:goto L64c0d4;
case 0x64c0d6:c.instructions+=5;goto B64c0d6;
case 0x64c0d7:c.instructions+=4;goto B64c0d7;
case 0x64c0d9:c.instructions+=3;goto B64c0d9;
case 0x64c0da:c.instructions+=2;goto B64c0da;
case 0x64c0dc:c.instructions+=1;goto B64c0dc;
case 0x64c0e1:goto L64c0e1;
case 0x64c0e5:c.instructions+=1;goto B64c0e5;
case 0x64c0e7:goto L64c0e7;
case 0x64c0e8:c.instructions+=1;goto B64c0e8;
case 0x64c0ed:goto L64c0ed;
case 0x64c0ee:goto L64c0ee;
case 0x64c0f0:c.instructions+=3;goto B64c0f0;
case 0x64c0f1:c.instructions+=2;goto B64c0f1;
case 0x64c0f2:c.instructions+=1;goto B64c0f2;
case 0x64c0f5:goto L64c0f5;
case 0x64c0f7:c.instructions+=5;goto B64c0f7;
case 0x64c0f8:c.instructions+=4;goto B64c0f8;
case 0x64c0fa:c.instructions+=3;goto B64c0fa;
case 0x64c0fd:c.instructions+=2;goto B64c0fd;
case 0x64c0ff:c.instructions+=1;goto B64c0ff;
case 0x64c101:goto L64c101;
case 0x64c103:c.instructions+=1;goto B64c103;
case 0x64c108:goto L64c108;
case 0x64c10c:goto L64c10c;
case 0x64c110:c.instructions+=1;goto B64c110;
case 0x64c112:goto L64c112;
case 0x64c113:goto L64c113;
case 0x64c116:c.instructions+=5;goto B64c116;
case 0x64c119:c.instructions+=4;goto B64c119;
case 0x64c11c:c.instructions+=3;goto B64c11c;
case 0x64c120:c.instructions+=2;goto B64c120;
case 0x64c122:c.instructions+=1;goto B64c122;
case 0x64c127:goto L64c127;
case 0x64c128:c.instructions+=1;goto B64c128;
case 0x64c12d:goto L64c12d;
case 0x64c131:c.instructions+=2;goto B64c131;
case 0x64c132:c.instructions+=1;goto B64c132;
case 0x64c134:goto L64c134;
case 0x64c135:goto L64c135;
case 0x64c137:c.instructions+=2;goto B64c137;
case 0x64c138:c.instructions+=1;goto B64c138;
case 0x64c13d:goto L64c13d;
case 0x64c13f:c.instructions+=11;goto B64c13f;
case 0x64c140:c.instructions+=10;goto B64c140;
case 0x64c142:c.instructions+=9;goto B64c142;
case 0x64c145:c.instructions+=8;goto B64c145;
case 0x64c146:c.instructions+=7;goto B64c146;
case 0x64c147:c.instructions+=6;goto B64c147;
case 0x64c149:c.instructions+=5;goto B64c149;
case 0x64c14b:c.instructions+=4;goto B64c14b;
case 0x64c14e:c.instructions+=3;goto B64c14e;
case 0x64c150:c.instructions+=2;goto B64c150;
case 0x64c153:c.instructions+=1;goto B64c153;
case 0x64c158:goto L64c158;
case 0x64c15a:c.instructions+=2;goto B64c15a;
case 0x64c15b:c.instructions+=1;goto B64c15b;
case 0x64c15d:goto L64c15d;
case 0x64c15f:c.instructions+=1;goto B64c15f;
case 0x64c164:goto L64c164;
case 0x64c167:c.instructions+=1;goto B64c167;
case 0x64c169:goto L64c169;
case 0x64c16c:goto L64c16c;
case 0x64c16f:c.instructions+=1;goto B64c16f;
case 0x64c171:goto L64c171;
case 0x64c176:c.instructions+=1;goto B64c176;
case 0x64c17b:goto L64c17b;
case 0x64c17e:c.instructions+=4;goto B64c17e;
case 0x64c17f:c.instructions+=3;goto B64c17f;
case 0x64c182:c.instructions+=2;goto B64c182;
case 0x64c184:c.instructions+=1;goto B64c184;
case 0x64c18a:goto L64c18a;
case 0x64c18e:c.instructions+=1;goto B64c18e;
case 0x64c194:goto L64c194;
case 0x64c197:c.instructions+=2;goto B64c197;
case 0x64c199:c.instructions+=1;goto B64c199;
case 0x64c19f:goto L64c19f;
case 0x64c1a3:c.instructions+=1;goto B64c1a3;
case 0x64c1a9:goto L64c1a9;
case 0x64c1b0:c.instructions+=1;goto B64c1b0;
case 0x64c1b6:goto L64c1b6;
case 0x64c1b9:c.instructions+=3;goto B64c1b9;
case 0x64c1bc:c.instructions+=2;goto B64c1bc;
case 0x64c1bf:c.instructions+=1;goto B64c1bf;
case 0x64c1c5:goto L64c1c5;
case 0x64c1c8:c.instructions+=3;goto B64c1c8;
case 0x64c1ca:c.instructions+=2;goto B64c1ca;
case 0x64c1cd:c.instructions+=1;goto B64c1cd;
case 0x64c1cf:goto L64c1cf;
case 0x64c1d2:c.instructions+=2;goto B64c1d2;
case 0x64c1d4:c.instructions+=1;goto B64c1d4;
case 0x64c1d6:goto L64c1d6;
case 0x64c1d9:c.instructions+=14;goto B64c1d9;
case 0x64c1da:c.instructions+=13;goto B64c1da;
case 0x64c1dd:c.instructions+=12;goto B64c1dd;
case 0x64c1de:c.instructions+=11;goto B64c1de;
case 0x64c1e1:c.instructions+=10;goto B64c1e1;
case 0x64c1e2:c.instructions+=9;goto B64c1e2;
case 0x64c1e5:c.instructions+=8;goto B64c1e5;
case 0x64c1e6:c.instructions+=7;goto B64c1e6;
case 0x64c1e9:c.instructions+=6;goto B64c1e9;
case 0x64c1ea:c.instructions+=5;goto B64c1ea;
case 0x64c1ed:c.instructions+=4;goto B64c1ed;
case 0x64c1ee:c.instructions+=3;goto B64c1ee;
case 0x64c1f1:c.instructions+=2;goto B64c1f1;
case 0x64c1f2:c.instructions+=1;goto B64c1f2;
case 0x64c1f7:goto L64c1f7;
case 0x64c1f9:c.instructions+=2;goto B64c1f9;
case 0x64c1fb:c.instructions+=1;goto B64c1fb;
case 0x64c1fd:goto L64c1fd;
case 0x64c202:goto L64c202;
case 0x64c205:c.instructions+=5;goto B64c205;
case 0x64c206:c.instructions+=4;goto B64c206;
case 0x64c209:c.instructions+=3;goto B64c209;
case 0x64c20c:c.instructions+=2;goto B64c20c;
case 0x64c20d:c.instructions+=1;goto B64c20d;
case 0x64c212:goto L64c212;
case 0x64c215:c.instructions+=1;goto B64c215;
case 0x64c217:goto L64c217;
case 0x64c21a:c.instructions+=2;goto B64c21a;
case 0x64c21c:c.instructions+=1;goto B64c21c;
case 0x64c21e:goto L64c21e;
case 0x64c221:c.instructions+=1;goto B64c221;
case 0x64c223:goto L64c223;
case 0x64c226:c.instructions+=1;goto B64c226;
case 0x64c228:goto L64c228;
case 0x64c22b:c.instructions+=1;goto B64c22b;
case 0x64c22d:goto L64c22d;
case 0x64c230:c.instructions+=1;goto B64c230;
case 0x64c232:goto L64c232;
case 0x64c235:c.instructions+=6;goto B64c235;
case 0x64c23a:c.instructions+=5;goto B64c23a;
case 0x64c23b:c.instructions+=4;goto B64c23b;
case 0x64c23e:c.instructions+=3;goto B64c23e;
case 0x64c241:c.instructions+=2;goto B64c241;
case 0x64c242:c.instructions+=1;goto B64c242;
case 0x64c247:goto L64c247;
case 0x64c24a:goto L64c24a;
case 0x64c24f:goto L64c24f;
case 0x64c252:c.instructions+=2;goto B64c252;
case 0x64c254:c.instructions+=1;goto B64c254;
case 0x64c259:goto L64c259;
case 0x64c25c:c.instructions+=2;goto B64c25c;
case 0x64c25d:c.instructions+=1;goto B64c25d;
case 0x64c25f:goto L64c25f;
case 0x64c262:c.instructions+=1;goto B64c262;
case 0x64c267:goto L64c267;
case 0x64c268:goto L64c268;
case 0x64c26a:c.instructions+=4;goto B64c26a;
case 0x64c26b:c.instructions+=3;goto B64c26b;
case 0x64c26c:c.instructions+=2;goto B64c26c;
case 0x64c26d:c.instructions+=1;goto B64c26d;
case 0x64c270:goto L64c270;
case 0x64c273:c.instructions+=1;goto B64c273;
case 0x64c278:goto L64c278;
case 0x64c27a:c.instructions+=4;goto B64c27a;
case 0x64c27c:c.instructions+=3;goto B64c27c;
case 0x64c27d:c.instructions+=2;goto B64c27d;
case 0x64c280:c.instructions+=1;goto B64c280;
case 0x64c282:goto L64c282;
case 0x64c287:c.instructions+=1;goto B64c287;
case 0x64c289:goto L64c289;
case 0x64c28c:c.instructions+=3;goto B64c28c;
case 0x64c28e:c.instructions+=2;goto B64c28e;
case 0x64c291:c.instructions+=1;goto B64c291;
case 0x64c293:goto L64c293;
case 0x64c295:goto L64c295;
case 0x64c297:c.instructions+=1;goto B64c297;
case 0x64c29a:goto L64c29a;
case 0x64c29c:goto L64c29c;
case 0x64c29f:c.instructions+=6;goto B64c29f;
case 0x64c2a2:c.instructions+=5;goto B64c2a2;
case 0x64c2a5:c.instructions+=4;goto B64c2a5;
case 0x64c2a8:c.instructions+=3;goto B64c2a8;
case 0x64c2a9:c.instructions+=2;goto B64c2a9;
case 0x64c2ac:c.instructions+=1;goto B64c2ac;
case 0x64c2b1:goto L64c2b1;
case 0x64c2b3:c.instructions+=2;goto B64c2b3;
case 0x64c2b5:c.instructions+=1;goto B64c2b5;
case 0x64c2b7:goto L64c2b7;
case 0x64c2ba:c.instructions+=5;goto B64c2ba;
case 0x64c2bd:c.instructions+=4;goto B64c2bd;
case 0x64c2be:c.instructions+=3;goto B64c2be;
case 0x64c2c1:c.instructions+=2;goto B64c2c1;
case 0x64c2c4:c.instructions+=1;goto B64c2c4;
case 0x64c2c9:goto L64c2c9;
case 0x64c2cb:c.instructions+=2;goto B64c2cb;
case 0x64c2cd:c.instructions+=1;goto B64c2cd;
case 0x64c2cf:goto L64c2cf;
case 0x64c2d2:c.instructions+=10;goto B64c2d2;
case 0x64c2d3:c.instructions+=9;goto B64c2d3;
case 0x64c2d6:c.instructions+=8;goto B64c2d6;
case 0x64c2d7:c.instructions+=7;goto B64c2d7;
case 0x64c2da:c.instructions+=6;goto B64c2da;
case 0x64c2dd:c.instructions+=5;goto B64c2dd;
case 0x64c2de:c.instructions+=4;goto B64c2de;
case 0x64c2df:c.instructions+=3;goto B64c2df;
case 0x64c2e2:c.instructions+=2;goto B64c2e2;
case 0x64c2e5:c.instructions+=1;goto B64c2e5;
case 0x64c2ea:goto L64c2ea;
case 0x64c2ec:c.instructions+=2;goto B64c2ec;
case 0x64c2ee:c.instructions+=1;goto B64c2ee;
case 0x64c2f0:goto L64c2f0;
case 0x64c2f5:c.instructions+=1;goto B64c2f5;
case 0x64c2fa:goto L64c2fa;
case 0x64c2fd:c.instructions+=2;goto B64c2fd;
case 0x64c300:c.instructions+=1;goto B64c300;
case 0x64c305:goto L64c305;
case 0x64c307:c.instructions+=2;goto B64c307;
case 0x64c309:c.instructions+=1;goto B64c309;
case 0x64c30f:goto L64c30f;
case 0x64c312:c.instructions+=3;goto B64c312;
case 0x64c313:c.instructions+=2;goto B64c313;
case 0x64c316:c.instructions+=1;goto B64c316;
case 0x64c31b:goto L64c31b;
case 0x64c31d:c.instructions+=2;goto B64c31d;
case 0x64c31f:c.instructions+=1;goto B64c31f;
case 0x64c325:goto L64c325;
case 0x64c328:c.instructions+=3;goto B64c328;
case 0x64c329:c.instructions+=2;goto B64c329;
case 0x64c32c:c.instructions+=1;goto B64c32c;
case 0x64c331:goto L64c331;
case 0x64c333:c.instructions+=2;goto B64c333;
case 0x64c335:c.instructions+=1;goto B64c335;
case 0x64c33b:goto L64c33b;
case 0x64c33d:c.instructions+=1;goto B64c33d;
case 0x64c342:goto L64c342;
case 0x64c344:c.instructions+=2;goto B64c344;
case 0x64c345:c.instructions+=1;goto B64c345;
case 0x64c347:goto L64c347;
case 0x64c349:c.instructions+=1;goto B64c349;
case 0x64c34e:goto L64c34e;
case 0x64c350:goto L64c350;
case 0x64c352:goto L64c352;
case 0x64c354:c.instructions+=1;goto B64c354;
case 0x64c356:goto L64c356;
case 0x64c35b:c.instructions+=1;goto B64c35b;
case 0x64c360:goto L64c360;
case 0x64c363:c.instructions+=18;goto B64c363;
case 0x64c366:c.instructions+=17;goto B64c366;
case 0x64c369:c.instructions+=16;goto B64c369;
case 0x64c36c:c.instructions+=15;goto B64c36c;
case 0x64c36f:c.instructions+=14;goto B64c36f;
case 0x64c372:c.instructions+=13;goto B64c372;
case 0x64c375:c.instructions+=12;goto B64c375;
case 0x64c378:c.instructions+=11;goto B64c378;
case 0x64c37b:c.instructions+=10;goto B64c37b;
case 0x64c37e:c.instructions+=9;goto B64c37e;
case 0x64c381:c.instructions+=8;goto B64c381;
case 0x64c383:c.instructions+=7;goto B64c383;
case 0x64c386:c.instructions+=6;goto B64c386;
case 0x64c389:c.instructions+=5;goto B64c389;
case 0x64c38c:c.instructions+=4;goto B64c38c;
case 0x64c38f:c.instructions+=3;goto B64c38f;
case 0x64c392:c.instructions+=2;goto B64c392;
case 0x64c394:c.instructions+=1;goto B64c394;
case 0x64c399:goto L64c399;
case 0x64c39b:c.instructions+=12;goto B64c39b;
case 0x64c39c:c.instructions+=11;goto B64c39c;
case 0x64c39e:c.instructions+=10;goto B64c39e;
case 0x64c39f:c.instructions+=9;goto B64c39f;
case 0x64c3a0:c.instructions+=8;goto B64c3a0;
case 0x64c3a1:c.instructions+=7;goto B64c3a1;
case 0x64c3a3:c.instructions+=6;goto B64c3a3;
case 0x64c3a6:c.instructions+=5;goto B64c3a6;
case 0x64c3a8:c.instructions+=4;goto B64c3a8;
case 0x64c3ad:c.instructions+=3;goto B64c3ad;
case 0x64c3af:c.instructions+=2;goto B64c3af;
case 0x64c3b2:c.instructions+=1;goto B64c3b2;
case 0x64c3b4:goto L64c3b4;
case 0x64c3b6:c.instructions+=1;goto B64c3b6;
case 0x64c3bb:goto L64c3bb;
case 0x64c3bd:c.instructions+=3;goto B64c3bd;
case 0x64c3c2:c.instructions+=2;goto B64c3c2;
case 0x64c3c4:c.instructions+=1;goto B64c3c4;
case 0x64c3c6:goto L64c3c6;
case 0x64c3c8:c.instructions+=7;goto B64c3c8;
case 0x64c3ca:c.instructions+=6;goto B64c3ca;
case 0x64c3cd:c.instructions+=5;goto B64c3cd;
case 0x64c3cf:c.instructions+=4;goto B64c3cf;
case 0x64c3d1:c.instructions+=3;goto B64c3d1;
case 0x64c3d3:c.instructions+=2;goto B64c3d3;
case 0x64c3d5:c.instructions+=1;goto B64c3d5;
case 0x64c3d7:goto L64c3d7;
case 0x64c3d8:c.instructions+=4;goto B64c3d8;
case 0x64c3d9:c.instructions+=3;goto B64c3d9;
case 0x64c3df:c.instructions+=2;goto B64c3df;
case 0x64c3e1:c.instructions+=1;goto B64c3e1;
case 0x64c3e3:goto L64c3e3;
case 0x64c3e5:c.instructions+=2;goto B64c3e5;
case 0x64c3e8:c.instructions+=1;goto B64c3e8;
case 0x64c3ea:goto L64c3ea;
case 0x64c3ed:c.instructions+=1;goto B64c3ed;
case 0x64c3f0:goto L64c3f0;
case 0x64c3f3:c.instructions+=7;goto B64c3f3;
case 0x64c3f6:c.instructions+=6;goto B64c3f6;
case 0x64c3f9:c.instructions+=5;goto B64c3f9;
case 0x64c3ff:c.instructions+=4;goto B64c3ff;
case 0x64c401:c.instructions+=3;goto B64c401;
case 0x64c404:c.instructions+=2;goto B64c404;
case 0x64c408:c.instructions+=1;goto B64c408;
case 0x64c40a:goto L64c40a;
case 0x64c40c:c.instructions+=1;goto B64c40c;
case 0x64c40e:goto L64c40e;
case 0x64c414:c.instructions+=1;goto B64c414;
case 0x64c418:goto L64c418;
case 0x64c41a:c.instructions+=2;goto B64c41a;
case 0x64c41d:c.instructions+=1;goto B64c41d;
case 0x64c41f:goto L64c41f;
case 0x64c421:c.instructions+=1;goto B64c421;
case 0x64c423:goto L64c423;
case 0x64c424:c.instructions+=2;goto B64c424;
case 0x64c426:c.instructions+=1;goto B64c426;
case 0x64c427:goto L64c427;
case 0x64c429:c.instructions+=1;goto B64c429;
case 0x64c42b:goto L64c42b;
case 0x64c42d:c.instructions+=3;goto B64c42d;
case 0x64c42f:c.instructions+=2;goto B64c42f;
case 0x64c431:c.instructions+=1;goto B64c431;
case 0x64c433:goto L64c433;
case 0x64c435:c.instructions+=1;goto B64c435;
case 0x64c437:goto L64c437;
case 0x64c43a:c.instructions+=1;goto B64c43a;
case 0x64c440:goto L64c440;
case 0x64c443:c.instructions+=1;goto B64c443;
case 0x64c445:goto L64c445;
case 0x64c448:c.instructions+=1;goto B64c448;
case 0x64c44a:goto L64c44a;
case 0x64c44d:c.instructions+=2;goto B64c44d;
case 0x64c44f:c.instructions+=1;goto B64c44f;
case 0x64c451:goto L64c451;
case 0x64c453:goto L64c453;
case 0x64c454:c.instructions+=1;goto B64c454;
case 0x64c455:goto L64c455;
case 0x64c456:c.instructions+=2;goto B64c456;
case 0x64c457:c.instructions+=1;goto B64c457;
case 0x64c45a:goto L64c45a;
case 0x64c45c:c.instructions+=1;goto B64c45c;
case 0x64c45e:goto L64c45e;
case 0x64c45f:c.instructions+=3;goto B64c45f;
case 0x64c461:c.instructions+=2;goto B64c461;
case 0x64c463:c.instructions+=1;goto B64c463;
case 0x64c465:goto L64c465;
case 0x64c467:c.instructions+=1;goto B64c467;
case 0x64c469:goto L64c469;
case 0x64c46a:c.instructions+=1;goto B64c46a;
case 0x64c46f:goto L64c46f;
case 0x64c472:c.instructions+=2;goto B64c472;
case 0x64c473:c.instructions+=1;goto B64c473;
case 0x64c475:goto L64c475;
case 0x64c477:goto L64c477;
case 0x64c47a:c.instructions+=1;goto B64c47a;
case 0x64c47c:goto L64c47c;
case 0x64c47d:goto L64c47d;
case 0x64c47f:c.instructions+=2;goto B64c47f;
case 0x64c482:c.instructions+=1;goto B64c482;
case 0x64c484:goto L64c484;
case 0x64c487:c.instructions+=1;goto B64c487;
case 0x64c489:goto L64c489;
case 0x64c48c:c.instructions+=6;goto B64c48c;
case 0x64c48f:c.instructions+=5;goto B64c48f;
case 0x64c490:c.instructions+=4;goto B64c490;
case 0x64c492:c.instructions+=3;goto B64c492;
case 0x64c493:c.instructions+=2;goto B64c493;
case 0x64c494:c.instructions+=1;goto B64c494;
case 0x64c499:goto L64c499;
case 0x64c49b:c.instructions+=1;goto B64c49b;
case 0x64c49d:goto L64c49d;
case 0x64c49f:c.instructions+=2;goto B64c49f;
case 0x64c4a1:c.instructions+=1;goto B64c4a1;
case 0x64c4a3:goto L64c4a3;
case 0x64c4a6:c.instructions+=1;goto B64c4a6;
case 0x64c4a8:goto L64c4a8;
case 0x64c4ab:c.instructions+=4;goto B64c4ab;
case 0x64c4ac:c.instructions+=3;goto B64c4ac;
case 0x64c4ad:c.instructions+=2;goto B64c4ad;
case 0x64c4ae:c.instructions+=1;goto B64c4ae;
case 0x64c4b0:goto L64c4b0;
case 0x64c4b3:c.instructions+=6;goto B64c4b3;
case 0x64c4b6:c.instructions+=5;goto B64c4b6;
case 0x64c4b7:c.instructions+=4;goto B64c4b7;
case 0x64c4b8:c.instructions+=3;goto B64c4b8;
case 0x64c4ba:c.instructions+=2;goto B64c4ba;
case 0x64c4bb:c.instructions+=1;goto B64c4bb;
case 0x64c4c0:goto L64c4c0;
case 0x64c4c2:goto L64c4c2;
case 0x64c4c5:c.instructions+=4;goto B64c4c5;
case 0x64c4c6:c.instructions+=3;goto B64c4c6;
case 0x64c4c7:c.instructions+=2;goto B64c4c7;
case 0x64c4c9:c.instructions+=1;goto B64c4c9;
case 0x64c4ca:goto L64c4ca;
case 0x64c4cd:c.instructions+=1;goto B64c4cd;
case 0x64c4d2:goto L64c4d2;
case 0x64c4d4:c.instructions+=1;goto B64c4d4;
case 0x64c4da:goto L64c4da;
case 0x64c4dc:c.instructions+=1;goto B64c4dc;
case 0x64c4e1:goto L64c4e1;
case 0x64c4e3:c.instructions+=8;goto B64c4e3;
case 0x64c4e4:c.instructions+=7;goto B64c4e4;
case 0x64c4e6:c.instructions+=6;goto B64c4e6;
case 0x64c4e7:c.instructions+=5;goto B64c4e7;
case 0x64c4eb:c.instructions+=4;goto B64c4eb;
case 0x64c4ec:c.instructions+=3;goto B64c4ec;
case 0x64c4ef:c.instructions+=2;goto B64c4ef;
case 0x64c4f1:c.instructions+=1;goto B64c4f1;
case 0x64c4f3:goto L64c4f3;
case 0x64c4fa:c.instructions+=1;goto B64c4fa;
case 0x64c4ff:goto L64c4ff;
case 0x64c500:c.instructions+=6;goto B64c500;
case 0x64c501:c.instructions+=5;goto B64c501;
case 0x64c504:c.instructions+=4;goto B64c504;
case 0x64c506:c.instructions+=3;goto B64c506;
case 0x64c509:c.instructions+=2;goto B64c509;
case 0x64c50b:c.instructions+=1;goto B64c50b;
case 0x64c510:goto L64c510;
case 0x64c512:c.instructions+=2;goto B64c512;
case 0x64c514:c.instructions+=1;goto B64c514;
case 0x64c516:goto L64c516;
case 0x64c51d:c.instructions+=1;goto B64c51d;
case 0x64c522:goto L64c522;
case 0x64c525:c.instructions+=7;goto B64c525;
case 0x64c528:c.instructions+=6;goto B64c528;
case 0x64c52e:c.instructions+=5;goto B64c52e;
case 0x64c530:c.instructions+=4;goto B64c530;
case 0x64c533:c.instructions+=3;goto B64c533;
case 0x64c535:c.instructions+=2;goto B64c535;
case 0x64c536:c.instructions+=1;goto B64c536;
case 0x64c538:goto L64c538;
case 0x64c53a:goto L64c53a;
case 0x64c53d:c.instructions+=5;goto B64c53d;
case 0x64c540:c.instructions+=4;goto B64c540;
case 0x64c546:c.instructions+=3;goto B64c546;
case 0x64c548:c.instructions+=2;goto B64c548;
case 0x64c54b:c.instructions+=1;goto B64c54b;
case 0x64c54d:goto L64c54d;
case 0x64c54f:c.instructions+=1;goto B64c54f;
case 0x64c551:goto L64c551;
case 0x64c554:goto L64c554;
case 0x64c556:c.instructions+=6;goto B64c556;
case 0x64c55c:c.instructions+=5;goto B64c55c;
case 0x64c55f:c.instructions+=4;goto B64c55f;
case 0x64c561:c.instructions+=3;goto B64c561;
case 0x64c563:c.instructions+=2;goto B64c563;
case 0x64c565:c.instructions+=1;goto B64c565;
case 0x64c567:goto L64c567;
case 0x64c569:c.instructions+=1;goto B64c569;
case 0x64c56b:goto L64c56b;
case 0x64c56e:goto L64c56e;
case 0x64c571:c.instructions+=6;goto B64c571;
case 0x64c574:c.instructions+=5;goto B64c574;
case 0x64c577:c.instructions+=4;goto B64c577;
case 0x64c57a:c.instructions+=3;goto B64c57a;
case 0x64c57d:c.instructions+=2;goto B64c57d;
case 0x64c57f:c.instructions+=1;goto B64c57f;
case 0x64c581:goto L64c581;
case 0x64c583:c.instructions+=2;goto B64c583;
case 0x64c584:c.instructions+=1;goto B64c584;
case 0x64c586:goto L64c586;
case 0x64c58c:c.instructions+=1;goto B64c58c;
case 0x64c58f:goto L64c58f;
case 0x64c592:c.instructions+=6;goto B64c592;
case 0x64c594:c.instructions+=5;goto B64c594;
case 0x64c597:c.instructions+=4;goto B64c597;
case 0x64c59a:c.instructions+=3;goto B64c59a;
case 0x64c59d:c.instructions+=2;goto B64c59d;
case 0x64c5a1:c.instructions+=1;goto B64c5a1;
case 0x64c5a3:goto L64c5a3;
case 0x64c5a6:c.instructions+=1;goto B64c5a6;
case 0x64c5a8:goto L64c5a8;
case 0x64c5aa:goto L64c5aa;
case 0x64c5ad:c.instructions+=3;goto B64c5ad;
case 0x64c5b0:c.instructions+=2;goto B64c5b0;
case 0x64c5b3:c.instructions+=1;goto B64c5b3;
case 0x64c5b5:goto L64c5b5;
case 0x64c5b9:c.instructions+=1;goto B64c5b9;
case 0x64c5bb:goto L64c5bb;
case 0x64c5be:c.instructions+=2;goto B64c5be;
case 0x64c5c1:c.instructions+=1;goto B64c5c1;
case 0x64c5c4:goto L64c5c4;
case 0x64c5c7:c.instructions+=2;goto B64c5c7;
case 0x64c5c8:c.instructions+=1;goto B64c5c8;
case 0x64c5ca:goto L64c5ca;
case 0x64c5cd:c.instructions+=1;goto B64c5cd;
case 0x64c5cf:goto L64c5cf;
case 0x64c5d0:c.instructions+=1;goto B64c5d0;
case 0x64c5d2:goto L64c5d2;
case 0x64c5d5:c.instructions+=4;goto B64c5d5;
case 0x64c5d8:c.instructions+=3;goto B64c5d8;
case 0x64c5db:c.instructions+=2;goto B64c5db;
case 0x64c5de:c.instructions+=1;goto B64c5de;
case 0x64c5e0:goto L64c5e0;
case 0x64c5e3:c.instructions+=2;goto B64c5e3;
case 0x64c5e6:c.instructions+=1;goto B64c5e6;
case 0x64c5e8:goto L64c5e8;
case 0x64c5eb:goto L64c5eb;
case 0x64c5ee:c.instructions+=2;goto B64c5ee;
case 0x64c5f1:c.instructions+=1;goto B64c5f1;
case 0x64c5f3:goto L64c5f3;
case 0x64c5f6:c.instructions+=2;goto B64c5f6;
case 0x64c5fd:c.instructions+=1;goto B64c5fd;
case 0x64c600:goto L64c600;
case 0x64c603:goto L64c603;
case 0x64c604:c.instructions+=1;goto B64c604;
case 0x64c605:goto L64c605;
case 0x64c608:c.instructions+=3;goto B64c608;
case 0x64c609:c.instructions+=2;goto B64c609;
case 0x64c60a:c.instructions+=1;goto B64c60a;
case 0x64c60d:goto L64c60d;
case 0x64c60f:c.instructions+=4;goto B64c60f;
case 0x64c610:c.instructions+=3;goto B64c610;
case 0x64c612:c.instructions+=2;goto B64c612;
case 0x64c616:c.instructions+=1;goto B64c616;
case 0x64c618:goto L64c618;
case 0x64c61b:c.instructions+=4;goto B64c61b;
case 0x64c621:c.instructions+=3;goto B64c621;
case 0x64c624:c.instructions+=2;goto B64c624;
case 0x64c626:c.instructions+=1;goto B64c626;
case 0x64c628:goto L64c628;
case 0x64c62a:c.instructions+=1;goto B64c62a;
case 0x64c62c:goto L64c62c;
case 0x64c632:c.instructions+=1;goto B64c632;
case 0x64c634:goto L64c634;
case 0x64c637:goto L64c637;
case 0x64c638:c.instructions+=2;goto B64c638;
case 0x64c63a:c.instructions+=1;goto B64c63a;
case 0x64c63c:goto L64c63c;
case 0x64c63e:c.instructions+=1;goto B64c63e;
case 0x64c640:goto L64c640;
case 0x64c641:c.instructions+=6;goto B64c641;
case 0x64c642:c.instructions+=5;goto B64c642;
case 0x64c645:c.instructions+=4;goto B64c645;
case 0x64c647:c.instructions+=3;goto B64c647;
case 0x64c64a:c.instructions+=2;goto B64c64a;
case 0x64c64c:c.instructions+=1;goto B64c64c;
case 0x64c651:goto L64c651;
case 0x64c653:c.instructions+=2;goto B64c653;
case 0x64c655:c.instructions+=1;goto B64c655;
case 0x64c657:goto L64c657;
case 0x64c65a:c.instructions+=5;goto B64c65a;
case 0x64c65d:c.instructions+=4;goto B64c65d;
case 0x64c663:c.instructions+=3;goto B64c663;
case 0x64c666:c.instructions+=2;goto B64c666;
case 0x64c66a:c.instructions+=1;goto B64c66a;
case 0x64c66c:goto L64c66c;
case 0x64c670:c.instructions+=1;goto B64c670;
case 0x64c672:goto L64c672;
case 0x64c676:c.instructions+=1;goto B64c676;
case 0x64c678:goto L64c678;
case 0x64c67b:c.instructions+=2;goto B64c67b;
case 0x64c67e:c.instructions+=1;goto B64c67e;
case 0x64c680:goto L64c680;
case 0x64c684:c.instructions+=1;goto B64c684;
case 0x64c686:goto L64c686;
case 0x64c687:c.instructions+=3;goto B64c687;
case 0x64c688:c.instructions+=2;goto B64c688;
case 0x64c68a:c.instructions+=1;goto B64c68a;
case 0x64c68f:goto L64c68f;
case 0x64c691:c.instructions+=1;goto B64c691;
case 0x64c693:goto L64c693;
case 0x64c695:c.instructions+=1;goto B64c695;
case 0x64c697:goto L64c697;
case 0x64c69a:c.instructions+=3;goto B64c69a;
case 0x64c69d:c.instructions+=2;goto B64c69d;
case 0x64c6a0:c.instructions+=1;goto B64c6a0;
case 0x64c6a2:goto L64c6a2;
case 0x64c6a3:c.instructions+=1;goto B64c6a3;
case 0x64c6a4:goto L64c6a4;
case 0x64c6a5:c.instructions+=1;goto B64c6a5;
case 0x64c6a8:goto L64c6a8;
case 0x64c6aa:c.instructions+=9;goto B64c6aa;
case 0x64c6ab:c.instructions+=8;goto B64c6ab;
case 0x64c6ad:c.instructions+=7;goto B64c6ad;
case 0x64c6ae:c.instructions+=6;goto B64c6ae;
case 0x64c6af:c.instructions+=5;goto B64c6af;
case 0x64c6b1:c.instructions+=4;goto B64c6b1;
case 0x64c6b4:c.instructions+=3;goto B64c6b4;
case 0x64c6b5:c.instructions+=2;goto B64c6b5;
case 0x64c6b8:c.instructions+=1;goto B64c6b8;
case 0x64c6ba:goto L64c6ba;
case 0x64c6c0:c.instructions+=2;goto B64c6c0;
case 0x64c6c2:c.instructions+=1;goto B64c6c2;
case 0x64c6c8:goto L64c6c8;
case 0x64c6cb:c.instructions+=7;goto B64c6cb;
case 0x64c6ce:c.instructions+=6;goto B64c6ce;
case 0x64c6d1:c.instructions+=5;goto B64c6d1;
case 0x64c6d7:c.instructions+=4;goto B64c6d7;
case 0x64c6d9:c.instructions+=3;goto B64c6d9;
case 0x64c6dc:c.instructions+=2;goto B64c6dc;
case 0x64c6df:c.instructions+=1;goto B64c6df;
case 0x64c6e1:goto L64c6e1;
case 0x64c6e5:c.instructions+=2;goto B64c6e5;
case 0x64c6e7:c.instructions+=1;goto B64c6e7;
case 0x64c6e9:goto L64c6e9;
case 0x64c6ec:c.instructions+=1;goto B64c6ec;
case 0x64c6ee:goto L64c6ee;
case 0x64c6f1:c.instructions+=2;goto B64c6f1;
case 0x64c6f2:c.instructions+=1;goto B64c6f2;
case 0x64c6f7:goto L64c6f7;
case 0x64c6f8:c.instructions+=3;goto B64c6f8;
case 0x64c6f9:c.instructions+=2;goto B64c6f9;
case 0x64c6fb:c.instructions+=1;goto B64c6fb;
case 0x64c6fd:goto L64c6fd;
case 0x64c700:goto L64c700;
case 0x64c702:goto L64c702;
case 0x64c705:c.instructions+=2;goto B64c705;
case 0x64c707:c.instructions+=1;goto B64c707;
case 0x64c709:goto L64c709;
case 0x64c70b:c.instructions+=1;goto B64c70b;
case 0x64c711:goto L64c711;
case 0x64c713:c.instructions+=1;goto B64c713;
case 0x64c718:goto L64c718;
case 0x64c71a:c.instructions+=3;goto B64c71a;
case 0x64c71d:c.instructions+=2;goto B64c71d;
case 0x64c71f:c.instructions+=1;goto B64c71f;
case 0x64c724:goto L64c724;
case 0x64c726:c.instructions+=2;goto B64c726;
case 0x64c728:c.instructions+=1;goto B64c728;
case 0x64c72e:goto L64c72e;
case 0x64c731:c.instructions+=5;goto B64c731;
case 0x64c734:c.instructions+=4;goto B64c734;
case 0x64c737:c.instructions+=3;goto B64c737;
case 0x64c73d:c.instructions+=2;goto B64c73d;
case 0x64c741:c.instructions+=1;goto B64c741;
case 0x64c747:goto L64c747;
case 0x64c74b:c.instructions+=1;goto B64c74b;
case 0x64c74d:goto L64c74d;
case 0x64c750:c.instructions+=1;goto B64c750;
case 0x64c752:goto L64c752;
case 0x64c755:c.instructions+=3;goto B64c755;
case 0x64c758:c.instructions+=2;goto B64c758;
case 0x64c75b:c.instructions+=1;goto B64c75b;
case 0x64c75d:goto L64c75d;
case 0x64c75e:c.instructions+=3;goto B64c75e;
case 0x64c75f:c.instructions+=2;goto B64c75f;
case 0x64c761:c.instructions+=1;goto B64c761;
case 0x64c766:goto L64c766;
case 0x64c768:c.instructions+=1;goto B64c768;
case 0x64c76a:goto L64c76a;
case 0x64c76d:c.instructions+=2;goto B64c76d;
case 0x64c770:c.instructions+=1;goto B64c770;
case 0x64c772:goto L64c772;
case 0x64c775:c.instructions+=10;goto B64c775;
case 0x64c77b:c.instructions+=9;goto B64c77b;
case 0x64c77e:c.instructions+=8;goto B64c77e;
case 0x64c781:c.instructions+=7;goto B64c781;
case 0x64c784:c.instructions+=6;goto B64c784;
case 0x64c787:c.instructions+=5;goto B64c787;
case 0x64c789:c.instructions+=4;goto B64c789;
case 0x64c78b:c.instructions+=3;goto B64c78b;
case 0x64c78e:c.instructions+=2;goto B64c78e;
case 0x64c791:c.instructions+=1;goto B64c791;
case 0x64c793:goto L64c793;
case 0x64c797:c.instructions+=2;goto B64c797;
case 0x64c799:c.instructions+=1;goto B64c799;
case 0x64c79b:goto L64c79b;
case 0x64c79e:c.instructions+=1;goto B64c79e;
case 0x64c7a0:goto L64c7a0;
case 0x64c7a3:c.instructions+=2;goto B64c7a3;
case 0x64c7a4:c.instructions+=1;goto B64c7a4;
case 0x64c7a9:goto L64c7a9;
case 0x64c7aa:c.instructions+=3;goto B64c7aa;
case 0x64c7ab:c.instructions+=2;goto B64c7ab;
case 0x64c7ad:c.instructions+=1;goto B64c7ad;
case 0x64c7af:goto L64c7af;
case 0x64c7b2:goto L64c7b2;
case 0x64c7b4:goto L64c7b4;
case 0x64c7b7:c.instructions+=4;goto B64c7b7;
case 0x64c7ba:c.instructions+=3;goto B64c7ba;
case 0x64c7bd:c.instructions+=2;goto B64c7bd;
case 0x64c7c0:c.instructions+=1;goto B64c7c0;
case 0x64c7c2:goto L64c7c2;
case 0x64c7c5:c.instructions+=2;goto B64c7c5;
case 0x64c7c8:c.instructions+=1;goto B64c7c8;
case 0x64c7ca:goto L64c7ca;
case 0x64c7cc:c.instructions+=1;goto B64c7cc;
case 0x64c7ce:goto L64c7ce;
case 0x64c7d1:c.instructions+=1;goto B64c7d1;
case 0x64c7d4:goto L64c7d4;
case 0x64c7d6:goto L64c7d6;
case 0x64c7d7:c.instructions+=4;goto B64c7d7;
case 0x64c7d8:c.instructions+=3;goto B64c7d8;
case 0x64c7d9:c.instructions+=2;goto B64c7d9;
case 0x64c7da:c.instructions+=1;goto B64c7da;
case 0x64c7dd:goto L64c7dd;
case 0x64c7df:c.instructions+=7;goto B64c7df;
case 0x64c7e0:c.instructions+=6;goto B64c7e0;
case 0x64c7e2:c.instructions+=5;goto B64c7e2;
case 0x64c7e5:c.instructions+=4;goto B64c7e5;
case 0x64c7e7:c.instructions+=3;goto B64c7e7;
case 0x64c7ea:c.instructions+=2;goto B64c7ea;
case 0x64c7ed:c.instructions+=1;goto B64c7ed;
case 0x64c7f2:goto L64c7f2;
case 0x64c7f3:c.instructions+=1;goto B64c7f3;
case 0x64c7f6:goto L64c7f6;
case 0x64c7f8:c.instructions+=6;goto B64c7f8;
case 0x64c7f9:c.instructions+=5;goto B64c7f9;
case 0x64c7fb:c.instructions+=4;goto B64c7fb;
case 0x64c7fc:c.instructions+=3;goto B64c7fc;
case 0x64c7ff:c.instructions+=2;goto B64c7ff;
case 0x64c801:c.instructions+=1;goto B64c801;
case 0x64c803:goto L64c803;
case 0x64c807:c.instructions+=1;goto B64c807;
case 0x64c809:goto L64c809;
case 0x64c80e:c.instructions+=1;goto B64c80e;
case 0x64c810:goto L64c810;
case 0x64c811:c.instructions+=5;goto B64c811;
case 0x64c814:c.instructions+=4;goto B64c814;
case 0x64c816:c.instructions+=3;goto B64c816;
case 0x64c819:c.instructions+=2;goto B64c819;
case 0x64c81b:c.instructions+=1;goto B64c81b;
case 0x64c820:goto L64c820;
case 0x64c822:c.instructions+=1;goto B64c822;
case 0x64c824:goto L64c824;
case 0x64c829:c.instructions+=1;goto B64c829;
case 0x64c82b:goto L64c82b;
case 0x64c82e:c.instructions+=1;goto B64c82e;
case 0x64c830:goto L64c830;
case 0x64c833:c.instructions+=1;goto B64c833;
case 0x64c835:goto L64c835;
case 0x64c838:c.instructions+=12;goto B64c838;
case 0x64c83b:c.instructions+=11;goto B64c83b;
case 0x64c841:c.instructions+=10;goto B64c841;
case 0x64c843:c.instructions+=9;goto B64c843;
case 0x64c846:c.instructions+=8;goto B64c846;
case 0x64c84a:c.instructions+=7;goto B64c84a;
case 0x64c84d:c.instructions+=6;goto B64c84d;
case 0x64c84e:c.instructions+=5;goto B64c84e;
case 0x64c851:c.instructions+=4;goto B64c851;
case 0x64c854:c.instructions+=3;goto B64c854;
case 0x64c855:c.instructions+=2;goto B64c855;
case 0x64c857:c.instructions+=1;goto B64c857;
case 0x64c85c:goto L64c85c;
case 0x64c85d:goto L64c85d;
case 0x64c85e:c.instructions+=2;goto B64c85e;
case 0x64c85f:c.instructions+=1;goto B64c85f;
case 0x64c862:goto L64c862;
case 0x64c864:c.instructions+=6;goto B64c864;
case 0x64c865:c.instructions+=5;goto B64c865;
case 0x64c867:c.instructions+=4;goto B64c867;
case 0x64c868:c.instructions+=3;goto B64c868;
case 0x64c86b:c.instructions+=2;goto B64c86b;
case 0x64c86d:c.instructions+=1;goto B64c86d;
case 0x64c86f:goto L64c86f;
case 0x64c873:c.instructions+=1;goto B64c873;
case 0x64c875:goto L64c875;
case 0x64c87a:c.instructions+=1;goto B64c87a;
case 0x64c87c:goto L64c87c;
case 0x64c87d:c.instructions+=5;goto B64c87d;
case 0x64c880:c.instructions+=4;goto B64c880;
case 0x64c882:c.instructions+=3;goto B64c882;
case 0x64c885:c.instructions+=2;goto B64c885;
case 0x64c887:c.instructions+=1;goto B64c887;
case 0x64c88c:goto L64c88c;
case 0x64c88e:c.instructions+=1;goto B64c88e;
case 0x64c890:goto L64c890;
case 0x64c895:c.instructions+=1;goto B64c895;
case 0x64c897:goto L64c897;
case 0x64c89a:c.instructions+=1;goto B64c89a;
case 0x64c89c:goto L64c89c;
case 0x64c89f:c.instructions+=1;goto B64c89f;
case 0x64c8a1:goto L64c8a1;
case 0x64c8a4:c.instructions+=11;goto B64c8a4;
case 0x64c8a7:c.instructions+=10;goto B64c8a7;
case 0x64c8ad:c.instructions+=9;goto B64c8ad;
case 0x64c8af:c.instructions+=8;goto B64c8af;
case 0x64c8b2:c.instructions+=7;goto B64c8b2;
case 0x64c8b6:c.instructions+=6;goto B64c8b6;
case 0x64c8b9:c.instructions+=5;goto B64c8b9;
case 0x64c8ba:c.instructions+=4;goto B64c8ba;
case 0x64c8bd:c.instructions+=3;goto B64c8bd;
case 0x64c8c0:c.instructions+=2;goto B64c8c0;
case 0x64c8c1:c.instructions+=1;goto B64c8c1;
case 0x64c8c6:goto L64c8c6;
case 0x64c8c7:goto L64c8c7;
case 0x64c8c8:c.instructions+=2;goto B64c8c8;
case 0x64c8c9:c.instructions+=1;goto B64c8c9;
case 0x64c8cc:goto L64c8cc;
case 0x64c8ce:c.instructions+=7;goto B64c8ce;
case 0x64c8cf:c.instructions+=6;goto B64c8cf;
case 0x64c8d1:c.instructions+=5;goto B64c8d1;
case 0x64c8d4:c.instructions+=4;goto B64c8d4;
case 0x64c8d5:c.instructions+=3;goto B64c8d5;
case 0x64c8d8:c.instructions+=2;goto B64c8d8;
case 0x64c8da:c.instructions+=1;goto B64c8da;
case 0x64c8dc:goto L64c8dc;
case 0x64c8e1:c.instructions+=1;goto B64c8e1;
case 0x64c8e6:goto L64c8e6;
case 0x64c8e7:c.instructions+=8;goto B64c8e7;
case 0x64c8e8:c.instructions+=7;goto B64c8e8;
case 0x64c8eb:c.instructions+=6;goto B64c8eb;
case 0x64c8ed:c.instructions+=5;goto B64c8ed;
case 0x64c8ee:c.instructions+=4;goto B64c8ee;
case 0x64c8ef:c.instructions+=3;goto B64c8ef;
case 0x64c8f2:c.instructions+=2;goto B64c8f2;
case 0x64c8f4:c.instructions+=1;goto B64c8f4;
case 0x64c8f9:goto L64c8f9;
case 0x64c8fb:c.instructions+=1;goto B64c8fb;
case 0x64c8fd:goto L64c8fd;
case 0x64c902:c.instructions+=1;goto B64c902;
case 0x64c907:goto L64c907;
case 0x64c90a:c.instructions+=5;goto B64c90a;
case 0x64c90d:c.instructions+=4;goto B64c90d;
case 0x64c913:c.instructions+=3;goto B64c913;
case 0x64c916:c.instructions+=2;goto B64c916;
case 0x64c91a:c.instructions+=1;goto B64c91a;
case 0x64c91c:goto L64c91c;
case 0x64c920:c.instructions+=1;goto B64c920;
case 0x64c922:goto L64c922;
case 0x64c925:c.instructions+=3;goto B64c925;
case 0x64c926:c.instructions+=2;goto B64c926;
case 0x64c927:c.instructions+=1;goto B64c927;
case 0x64c92d:goto L64c92d;
case 0x64c92e:c.instructions+=1;goto B64c92e;
case 0x64c930:goto L64c930;
case 0x64c933:c.instructions+=12;goto B64c933;
case 0x64c936:c.instructions+=11;goto B64c936;
case 0x64c939:c.instructions+=10;goto B64c939;
case 0x64c93c:c.instructions+=9;goto B64c93c;
case 0x64c93e:c.instructions+=8;goto B64c93e;
case 0x64c93f:c.instructions+=7;goto B64c93f;
case 0x64c941:c.instructions+=6;goto B64c941;
case 0x64c943:c.instructions+=5;goto B64c943;
case 0x64c946:c.instructions+=4;goto B64c946;
case 0x64c949:c.instructions+=3;goto B64c949;
case 0x64c94c:c.instructions+=2;goto B64c94c;
case 0x64c94f:c.instructions+=1;goto B64c94f;
case 0x64c951:goto L64c951;
case 0x64c954:goto L64c954;
case 0x64c956:c.instructions+=2;goto B64c956;
case 0x64c959:c.instructions+=1;goto B64c959;
case 0x64c95b:goto L64c95b;
case 0x64c95e:goto L64c95e;
case 0x64c962:c.instructions+=2;goto B64c962;
case 0x64c966:c.instructions+=1;goto B64c966;
case 0x64c968:goto L64c968;
case 0x64c96b:c.instructions+=1;goto B64c96b;
case 0x64c96e:goto L64c96e;
case 0x64c970:c.instructions+=2;goto B64c970;
case 0x64c973:c.instructions+=1;goto B64c973;
case 0x64c975:goto L64c975;
case 0x64c978:goto L64c978;
case 0x64c97a:c.instructions+=4;goto B64c97a;
case 0x64c97b:c.instructions+=3;goto B64c97b;
case 0x64c97e:c.instructions+=2;goto B64c97e;
case 0x64c97f:c.instructions+=1;goto B64c97f;
case 0x64c984:goto L64c984;
case 0x64c986:c.instructions+=1;goto B64c986;
case 0x64c98c:goto L64c98c;
case 0x64c98f:c.instructions+=4;goto B64c98f;
case 0x64c990:c.instructions+=3;goto B64c990;
case 0x64c993:c.instructions+=2;goto B64c993;
case 0x64c996:c.instructions+=1;goto B64c996;
case 0x64c998:goto L64c998;
case 0x64c99b:c.instructions+=1;goto B64c99b;
case 0x64c99e:goto L64c99e;
case 0x64c9a0:c.instructions+=1;goto B64c9a0;
case 0x64c9a2:goto L64c9a2;
case 0x64c9a4:c.instructions+=1;goto B64c9a4;
case 0x64c9a6:goto L64c9a6;
case 0x64c9a7:c.instructions+=2;goto B64c9a7;
case 0x64c9aa:c.instructions+=1;goto B64c9aa;
case 0x64c9ac:goto L64c9ac;
case 0x64c9af:c.instructions+=4;goto B64c9af;
case 0x64c9b2:c.instructions+=3;goto B64c9b2;
case 0x64c9b6:c.instructions+=2;goto B64c9b6;
case 0x64c9b9:c.instructions+=1;goto B64c9b9;
case 0x64c9bb:goto L64c9bb;
case 0x64c9be:c.instructions+=1;goto B64c9be;
case 0x64c9c0:goto L64c9c0;
case 0x64c9c2:c.instructions+=1;goto B64c9c2;
case 0x64c9c5:goto L64c9c5;
case 0x64c9c7:c.instructions+=1;goto B64c9c7;
case 0x64c9c9:goto L64c9c9;
case 0x64c9cb:goto L64c9cb;
case 0x64c9cc:c.instructions+=2;goto B64c9cc;
case 0x64c9cf:c.instructions+=1;goto B64c9cf;
case 0x64c9d1:goto L64c9d1;
case 0x64c9d2:c.instructions+=1;goto B64c9d2;
case 0x64c9d4:goto L64c9d4;
case 0x64c9d7:c.instructions+=3;goto B64c9d7;
case 0x64c9db:c.instructions+=2;goto B64c9db;
case 0x64c9df:c.instructions+=1;goto B64c9df;
case 0x64c9e5:goto L64c9e5;
case 0x64c9ea:goto L64c9ea;
case 0x64c9ed:c.instructions+=12;goto B64c9ed;
case 0x64c9f0:c.instructions+=11;goto B64c9f0;
case 0x64c9f3:c.instructions+=10;goto B64c9f3;
case 0x64c9f6:c.instructions+=9;goto B64c9f6;
case 0x64c9f8:c.instructions+=8;goto B64c9f8;
case 0x64c9f9:c.instructions+=7;goto B64c9f9;
case 0x64c9fb:c.instructions+=6;goto B64c9fb;
case 0x64c9fd:c.instructions+=5;goto B64c9fd;
case 0x64ca00:c.instructions+=4;goto B64ca00;
case 0x64ca03:c.instructions+=3;goto B64ca03;
case 0x64ca06:c.instructions+=2;goto B64ca06;
case 0x64ca09:c.instructions+=1;goto B64ca09;
case 0x64ca0b:goto L64ca0b;
case 0x64ca0e:goto L64ca0e;
case 0x64ca10:c.instructions+=2;goto B64ca10;
case 0x64ca13:c.instructions+=1;goto B64ca13;
case 0x64ca15:goto L64ca15;
case 0x64ca18:goto L64ca18;
case 0x64ca1c:c.instructions+=2;goto B64ca1c;
case 0x64ca20:c.instructions+=1;goto B64ca20;
case 0x64ca22:goto L64ca22;
case 0x64ca25:c.instructions+=1;goto B64ca25;
case 0x64ca28:goto L64ca28;
case 0x64ca2a:c.instructions+=2;goto B64ca2a;
case 0x64ca2d:c.instructions+=1;goto B64ca2d;
case 0x64ca2f:goto L64ca2f;
case 0x64ca32:goto L64ca32;
case 0x64ca34:c.instructions+=4;goto B64ca34;
case 0x64ca35:c.instructions+=3;goto B64ca35;
case 0x64ca38:c.instructions+=2;goto B64ca38;
case 0x64ca39:c.instructions+=1;goto B64ca39;
case 0x64ca3e:goto L64ca3e;
case 0x64ca40:c.instructions+=1;goto B64ca40;
case 0x64ca42:goto L64ca42;
case 0x64ca45:c.instructions+=4;goto B64ca45;
case 0x64ca46:c.instructions+=3;goto B64ca46;
case 0x64ca49:c.instructions+=2;goto B64ca49;
case 0x64ca4c:c.instructions+=1;goto B64ca4c;
case 0x64ca4e:goto L64ca4e;
case 0x64ca51:c.instructions+=1;goto B64ca51;
case 0x64ca54:goto L64ca54;
case 0x64ca56:c.instructions+=1;goto B64ca56;
case 0x64ca58:goto L64ca58;
case 0x64ca5a:c.instructions+=1;goto B64ca5a;
case 0x64ca5c:goto L64ca5c;
case 0x64ca5d:c.instructions+=2;goto B64ca5d;
case 0x64ca60:c.instructions+=1;goto B64ca60;
case 0x64ca62:goto L64ca62;
case 0x64ca65:c.instructions+=4;goto B64ca65;
case 0x64ca68:c.instructions+=3;goto B64ca68;
case 0x64ca6c:c.instructions+=2;goto B64ca6c;
case 0x64ca6f:c.instructions+=1;goto B64ca6f;
case 0x64ca71:goto L64ca71;
case 0x64ca74:c.instructions+=1;goto B64ca74;
case 0x64ca76:goto L64ca76;
case 0x64ca78:c.instructions+=1;goto B64ca78;
case 0x64ca7b:goto L64ca7b;
case 0x64ca7d:c.instructions+=1;goto B64ca7d;
case 0x64ca7f:goto L64ca7f;
case 0x64ca81:goto L64ca81;
case 0x64ca82:c.instructions+=2;goto B64ca82;
case 0x64ca85:c.instructions+=1;goto B64ca85;
case 0x64ca87:goto L64ca87;
case 0x64ca88:c.instructions+=1;goto B64ca88;
case 0x64ca8a:goto L64ca8a;
case 0x64ca8d:c.instructions+=3;goto B64ca8d;
case 0x64ca91:c.instructions+=2;goto B64ca91;
case 0x64ca95:c.instructions+=1;goto B64ca95;
case 0x64ca97:goto L64ca97;
case 0x64ca98:c.instructions+=1;goto B64ca98;
case 0x64ca99:goto L64ca99;
case 0x64ca9a:c.instructions+=2;goto B64ca9a;
case 0x64ca9b:c.instructions+=1;goto B64ca9b;
case 0x64ca9e:goto L64ca9e;
case 0x64caa0:c.instructions+=9;goto B64caa0;
case 0x64caa1:c.instructions+=8;goto B64caa1;
case 0x64caa3:c.instructions+=7;goto B64caa3;
case 0x64caa6:c.instructions+=6;goto B64caa6;
case 0x64caa7:c.instructions+=5;goto B64caa7;
case 0x64caa8:c.instructions+=4;goto B64caa8;
case 0x64caab:c.instructions+=3;goto B64caab;
case 0x64caad:c.instructions+=2;goto B64caad;
case 0x64caaf:c.instructions+=1;goto B64caaf;
case 0x64cab1:goto L64cab1;
case 0x64cab6:c.instructions+=1;goto B64cab6;
case 0x64cabb:goto L64cabb;
case 0x64cabc:c.instructions+=5;goto B64cabc;
case 0x64cabf:c.instructions+=4;goto B64cabf;
case 0x64cac1:c.instructions+=3;goto B64cac1;
case 0x64cac4:c.instructions+=2;goto B64cac4;
case 0x64cac6:c.instructions+=1;goto B64cac6;
case 0x64cacb:goto L64cacb;
case 0x64cacd:c.instructions+=1;goto B64cacd;
case 0x64cacf:goto L64cacf;
case 0x64cad4:c.instructions+=1;goto B64cad4;
case 0x64cad9:goto L64cad9;
case 0x64cadc:c.instructions+=5;goto B64cadc;
case 0x64cadf:c.instructions+=4;goto B64cadf;
case 0x64cae5:c.instructions+=3;goto B64cae5;
case 0x64cae8:c.instructions+=2;goto B64cae8;
case 0x64caeb:c.instructions+=1;goto B64caeb;
case 0x64caed:goto L64caed;
case 0x64caf1:c.instructions+=1;goto B64caf1;
case 0x64caf3:goto L64caf3;
case 0x64caf6:c.instructions+=3;goto B64caf6;
case 0x64caf7:c.instructions+=2;goto B64caf7;
case 0x64caf8:c.instructions+=1;goto B64caf8;
case 0x64cafe:goto L64cafe;
case 0x64caff:c.instructions+=1;goto B64caff;
case 0x64cb01:goto L64cb01;
case 0x64cb04:c.instructions+=12;goto B64cb04;
case 0x64cb07:c.instructions+=11;goto B64cb07;
case 0x64cb09:c.instructions+=10;goto B64cb09;
case 0x64cb0c:c.instructions+=9;goto B64cb0c;
case 0x64cb0f:c.instructions+=8;goto B64cb0f;
case 0x64cb10:c.instructions+=7;goto B64cb10;
case 0x64cb12:c.instructions+=6;goto B64cb12;
case 0x64cb19:c.instructions+=5;goto B64cb19;
case 0x64cb1c:c.instructions+=4;goto B64cb1c;
case 0x64cb1f:c.instructions+=3;goto B64cb1f;
case 0x64cb22:c.instructions+=2;goto B64cb22;
case 0x64cb25:c.instructions+=1;goto B64cb25;
case 0x64cb27:goto L64cb27;
case 0x64cb2a:goto L64cb2a;
case 0x64cb2c:c.instructions+=2;goto B64cb2c;
case 0x64cb2f:c.instructions+=1;goto B64cb2f;
case 0x64cb31:goto L64cb31;
case 0x64cb34:goto L64cb34;
case 0x64cb36:c.instructions+=2;goto B64cb36;
case 0x64cb37:c.instructions+=1;goto B64cb37;
case 0x64cb39:goto L64cb39;
case 0x64cb3b:goto L64cb3b;
case 0x64cb3f:c.instructions+=2;goto B64cb3f;
case 0x64cb43:c.instructions+=1;goto B64cb43;
case 0x64cb45:goto L64cb45;
case 0x64cb48:c.instructions+=1;goto B64cb48;
case 0x64cb4b:goto L64cb4b;
case 0x64cb4d:c.instructions+=2;goto B64cb4d;
case 0x64cb50:c.instructions+=1;goto B64cb50;
case 0x64cb52:goto L64cb52;
case 0x64cb55:goto L64cb55;
case 0x64cb56:c.instructions+=2;goto B64cb56;
case 0x64cb57:c.instructions+=1;goto B64cb57;
case 0x64cb5c:goto L64cb5c;
case 0x64cb5e:c.instructions+=2;goto B64cb5e;
case 0x64cb61:c.instructions+=1;goto B64cb61;
case 0x64cb67:goto L64cb67;
case 0x64cb6a:c.instructions+=4;goto B64cb6a;
case 0x64cb6b:c.instructions+=3;goto B64cb6b;
case 0x64cb6e:c.instructions+=2;goto B64cb6e;
case 0x64cb71:c.instructions+=1;goto B64cb71;
case 0x64cb73:goto L64cb73;
case 0x64cb76:c.instructions+=1;goto B64cb76;
case 0x64cb79:goto L64cb79;
case 0x64cb7b:c.instructions+=1;goto B64cb7b;
case 0x64cb7d:goto L64cb7d;
case 0x64cb7f:c.instructions+=1;goto B64cb7f;
case 0x64cb81:goto L64cb81;
case 0x64cb82:c.instructions+=2;goto B64cb82;
case 0x64cb85:c.instructions+=1;goto B64cb85;
case 0x64cb87:goto L64cb87;
case 0x64cb8a:c.instructions+=4;goto B64cb8a;
case 0x64cb8d:c.instructions+=3;goto B64cb8d;
case 0x64cb91:c.instructions+=2;goto B64cb91;
case 0x64cb94:c.instructions+=1;goto B64cb94;
case 0x64cb96:goto L64cb96;
case 0x64cb99:c.instructions+=1;goto B64cb99;
case 0x64cb9b:goto L64cb9b;
case 0x64cb9d:c.instructions+=1;goto B64cb9d;
case 0x64cba0:goto L64cba0;
case 0x64cba2:c.instructions+=1;goto B64cba2;
case 0x64cba4:goto L64cba4;
case 0x64cba6:goto L64cba6;
case 0x64cba7:c.instructions+=2;goto B64cba7;
case 0x64cbaa:c.instructions+=1;goto B64cbaa;
case 0x64cbac:goto L64cbac;
case 0x64cbad:c.instructions+=1;goto B64cbad;
case 0x64cbaf:goto L64cbaf;
case 0x64cbb2:c.instructions+=3;goto B64cbb2;
case 0x64cbb6:c.instructions+=2;goto B64cbb6;
case 0x64cbba:c.instructions+=1;goto B64cbba;
case 0x64cbc0:goto L64cbc0;
case 0x64cbc5:goto L64cbc5;
case 0x64cbc8:c.instructions+=12;goto B64cbc8;
case 0x64cbcb:c.instructions+=11;goto B64cbcb;
case 0x64cbcd:c.instructions+=10;goto B64cbcd;
case 0x64cbd0:c.instructions+=9;goto B64cbd0;
case 0x64cbd3:c.instructions+=8;goto B64cbd3;
case 0x64cbd4:c.instructions+=7;goto B64cbd4;
case 0x64cbd6:c.instructions+=6;goto B64cbd6;
case 0x64cbdd:c.instructions+=5;goto B64cbdd;
case 0x64cbe0:c.instructions+=4;goto B64cbe0;
case 0x64cbe3:c.instructions+=3;goto B64cbe3;
case 0x64cbe6:c.instructions+=2;goto B64cbe6;
case 0x64cbe9:c.instructions+=1;goto B64cbe9;
case 0x64cbeb:goto L64cbeb;
case 0x64cbee:goto L64cbee;
case 0x64cbf0:c.instructions+=2;goto B64cbf0;
case 0x64cbf3:c.instructions+=1;goto B64cbf3;
case 0x64cbf5:goto L64cbf5;
case 0x64cbf8:goto L64cbf8;
case 0x64cbfa:c.instructions+=2;goto B64cbfa;
case 0x64cbfb:c.instructions+=1;goto B64cbfb;
case 0x64cbfd:goto L64cbfd;
case 0x64cbff:goto L64cbff;
case 0x64cc03:c.instructions+=2;goto B64cc03;
case 0x64cc07:c.instructions+=1;goto B64cc07;
case 0x64cc09:goto L64cc09;
case 0x64cc0c:c.instructions+=1;goto B64cc0c;
case 0x64cc0f:goto L64cc0f;
case 0x64cc11:c.instructions+=2;goto B64cc11;
case 0x64cc14:c.instructions+=1;goto B64cc14;
case 0x64cc16:goto L64cc16;
case 0x64cc19:goto L64cc19;
case 0x64cc1a:c.instructions+=2;goto B64cc1a;
case 0x64cc1b:c.instructions+=1;goto B64cc1b;
case 0x64cc20:goto L64cc20;
case 0x64cc22:c.instructions+=2;goto B64cc22;
case 0x64cc25:c.instructions+=1;goto B64cc25;
case 0x64cc27:goto L64cc27;
case 0x64cc2a:c.instructions+=4;goto B64cc2a;
case 0x64cc2b:c.instructions+=3;goto B64cc2b;
case 0x64cc2e:c.instructions+=2;goto B64cc2e;
case 0x64cc31:c.instructions+=1;goto B64cc31;
case 0x64cc33:goto L64cc33;
case 0x64cc36:c.instructions+=1;goto B64cc36;
case 0x64cc39:goto L64cc39;
case 0x64cc3b:c.instructions+=1;goto B64cc3b;
case 0x64cc3d:goto L64cc3d;
case 0x64cc3f:c.instructions+=1;goto B64cc3f;
case 0x64cc41:goto L64cc41;
case 0x64cc42:c.instructions+=2;goto B64cc42;
case 0x64cc45:c.instructions+=1;goto B64cc45;
case 0x64cc47:goto L64cc47;
case 0x64cc4a:c.instructions+=4;goto B64cc4a;
case 0x64cc4d:c.instructions+=3;goto B64cc4d;
case 0x64cc51:c.instructions+=2;goto B64cc51;
case 0x64cc54:c.instructions+=1;goto B64cc54;
case 0x64cc56:goto L64cc56;
case 0x64cc59:c.instructions+=1;goto B64cc59;
case 0x64cc5b:goto L64cc5b;
case 0x64cc5d:c.instructions+=1;goto B64cc5d;
case 0x64cc60:goto L64cc60;
case 0x64cc62:c.instructions+=1;goto B64cc62;
case 0x64cc64:goto L64cc64;
case 0x64cc66:goto L64cc66;
case 0x64cc67:c.instructions+=2;goto B64cc67;
case 0x64cc6a:c.instructions+=1;goto B64cc6a;
case 0x64cc6c:goto L64cc6c;
case 0x64cc6d:c.instructions+=1;goto B64cc6d;
case 0x64cc6f:goto L64cc6f;
case 0x64cc72:c.instructions+=3;goto B64cc72;
case 0x64cc76:c.instructions+=2;goto B64cc76;
case 0x64cc7a:c.instructions+=1;goto B64cc7a;
case 0x64cc7c:goto L64cc7c;
case 0x64cc7f:goto L64cc7f;
case 0x64cc80:goto L64cc80;
case 0x64cc81:c.instructions+=3;goto B64cc81;
case 0x64cc82:c.instructions+=2;goto B64cc82;
case 0x64cc83:c.instructions+=1;goto B64cc83;
case 0x64cc86:goto L64cc86;
case 0x64cc88:c.instructions+=7;goto B64cc88;
case 0x64cc89:c.instructions+=6;goto B64cc89;
case 0x64cc8b:c.instructions+=5;goto B64cc8b;
case 0x64cc8e:c.instructions+=4;goto B64cc8e;
case 0x64cc8f:c.instructions+=3;goto B64cc8f;
case 0x64cc92:c.instructions+=2;goto B64cc92;
case 0x64cc94:c.instructions+=1;goto B64cc94;
case 0x64cc96:goto L64cc96;
case 0x64cc9b:c.instructions+=1;goto B64cc9b;
case 0x64cca0:goto L64cca0;
case 0x64cca1:c.instructions+=8;goto B64cca1;
case 0x64cca2:c.instructions+=7;goto B64cca2;
case 0x64cca5:c.instructions+=6;goto B64cca5;
case 0x64cca7:c.instructions+=5;goto B64cca7;
case 0x64cca8:c.instructions+=4;goto B64cca8;
case 0x64cca9:c.instructions+=3;goto B64cca9;
case 0x64ccac:c.instructions+=2;goto B64ccac;
case 0x64ccae:c.instructions+=1;goto B64ccae;
case 0x64ccb3:goto L64ccb3;
case 0x64ccb5:c.instructions+=1;goto B64ccb5;
case 0x64ccb7:goto L64ccb7;
case 0x64ccbc:c.instructions+=1;goto B64ccbc;
case 0x64ccc1:goto L64ccc1;
case 0x64ccc4:c.instructions+=5;goto B64ccc4;
case 0x64ccc7:c.instructions+=4;goto B64ccc7;
case 0x64cccd:c.instructions+=3;goto B64cccd;
case 0x64ccd0:c.instructions+=2;goto B64ccd0;
case 0x64ccd4:c.instructions+=1;goto B64ccd4;
case 0x64ccd6:goto L64ccd6;
case 0x64ccda:c.instructions+=1;goto B64ccda;
case 0x64ccdc:goto L64ccdc;
case 0x64ccdf:c.instructions+=3;goto B64ccdf;
case 0x64cce0:c.instructions+=2;goto B64cce0;
case 0x64cce1:c.instructions+=1;goto B64cce1;
case 0x64cce7:goto L64cce7;
case 0x64cce8:c.instructions+=1;goto B64cce8;
case 0x64ccea:goto L64ccea;
case 0x64cced:c.instructions+=12;goto B64cced;
case 0x64ccf0:c.instructions+=11;goto B64ccf0;
case 0x64ccf3:c.instructions+=10;goto B64ccf3;
case 0x64ccf6:c.instructions+=9;goto B64ccf6;
case 0x64ccf8:c.instructions+=8;goto B64ccf8;
case 0x64ccf9:c.instructions+=7;goto B64ccf9;
case 0x64ccfb:c.instructions+=6;goto B64ccfb;
case 0x64ccfd:c.instructions+=5;goto B64ccfd;
case 0x64cd00:c.instructions+=4;goto B64cd00;
case 0x64cd03:c.instructions+=3;goto B64cd03;
case 0x64cd06:c.instructions+=2;goto B64cd06;
case 0x64cd09:c.instructions+=1;goto B64cd09;
case 0x64cd0b:goto L64cd0b;
case 0x64cd0e:goto L64cd0e;
case 0x64cd10:c.instructions+=2;goto B64cd10;
case 0x64cd13:c.instructions+=1;goto B64cd13;
case 0x64cd15:goto L64cd15;
case 0x64cd18:goto L64cd18;
case 0x64cd1c:c.instructions+=2;goto B64cd1c;
case 0x64cd20:c.instructions+=1;goto B64cd20;
case 0x64cd22:goto L64cd22;
case 0x64cd25:c.instructions+=1;goto B64cd25;
case 0x64cd28:goto L64cd28;
case 0x64cd2a:c.instructions+=2;goto B64cd2a;
case 0x64cd2d:c.instructions+=1;goto B64cd2d;
case 0x64cd2f:goto L64cd2f;
case 0x64cd32:goto L64cd32;
case 0x64cd34:c.instructions+=4;goto B64cd34;
case 0x64cd35:c.instructions+=3;goto B64cd35;
case 0x64cd38:c.instructions+=2;goto B64cd38;
case 0x64cd39:c.instructions+=1;goto B64cd39;
case 0x64cd3e:goto L64cd3e;
case 0x64cd40:c.instructions+=1;goto B64cd40;
case 0x64cd46:goto L64cd46;
case 0x64cd49:c.instructions+=4;goto B64cd49;
case 0x64cd4a:c.instructions+=3;goto B64cd4a;
case 0x64cd4d:c.instructions+=2;goto B64cd4d;
case 0x64cd50:c.instructions+=1;goto B64cd50;
case 0x64cd52:goto L64cd52;
case 0x64cd55:c.instructions+=1;goto B64cd55;
case 0x64cd58:goto L64cd58;
case 0x64cd5a:c.instructions+=1;goto B64cd5a;
case 0x64cd5c:goto L64cd5c;
case 0x64cd5e:c.instructions+=1;goto B64cd5e;
case 0x64cd60:goto L64cd60;
case 0x64cd61:c.instructions+=2;goto B64cd61;
case 0x64cd64:c.instructions+=1;goto B64cd64;
case 0x64cd66:goto L64cd66;
case 0x64cd69:c.instructions+=4;goto B64cd69;
case 0x64cd6c:c.instructions+=3;goto B64cd6c;
case 0x64cd70:c.instructions+=2;goto B64cd70;
case 0x64cd73:c.instructions+=1;goto B64cd73;
case 0x64cd75:goto L64cd75;
case 0x64cd78:c.instructions+=1;goto B64cd78;
case 0x64cd7a:goto L64cd7a;
case 0x64cd7c:c.instructions+=1;goto B64cd7c;
case 0x64cd7f:goto L64cd7f;
case 0x64cd81:c.instructions+=1;goto B64cd81;
case 0x64cd83:goto L64cd83;
case 0x64cd85:goto L64cd85;
case 0x64cd86:c.instructions+=2;goto B64cd86;
case 0x64cd89:c.instructions+=1;goto B64cd89;
case 0x64cd8b:goto L64cd8b;
case 0x64cd8c:c.instructions+=1;goto B64cd8c;
case 0x64cd8e:goto L64cd8e;
case 0x64cd91:c.instructions+=3;goto B64cd91;
case 0x64cd95:c.instructions+=2;goto B64cd95;
case 0x64cd99:c.instructions+=1;goto B64cd99;
case 0x64cd9f:goto L64cd9f;
case 0x64cda4:goto L64cda4;
case 0x64cda7:c.instructions+=12;goto B64cda7;
case 0x64cdaa:c.instructions+=11;goto B64cdaa;
case 0x64cdad:c.instructions+=10;goto B64cdad;
case 0x64cdb0:c.instructions+=9;goto B64cdb0;
case 0x64cdb2:c.instructions+=8;goto B64cdb2;
case 0x64cdb3:c.instructions+=7;goto B64cdb3;
case 0x64cdb5:c.instructions+=6;goto B64cdb5;
case 0x64cdb7:c.instructions+=5;goto B64cdb7;
case 0x64cdba:c.instructions+=4;goto B64cdba;
case 0x64cdbd:c.instructions+=3;goto B64cdbd;
case 0x64cdc0:c.instructions+=2;goto B64cdc0;
case 0x64cdc3:c.instructions+=1;goto B64cdc3;
case 0x64cdc5:goto L64cdc5;
case 0x64cdc8:goto L64cdc8;
case 0x64cdca:c.instructions+=2;goto B64cdca;
case 0x64cdcd:c.instructions+=1;goto B64cdcd;
case 0x64cdcf:goto L64cdcf;
case 0x64cdd2:goto L64cdd2;
case 0x64cdd6:c.instructions+=2;goto B64cdd6;
case 0x64cdda:c.instructions+=1;goto B64cdda;
case 0x64cddc:goto L64cddc;
case 0x64cddf:c.instructions+=1;goto B64cddf;
case 0x64cde2:goto L64cde2;
case 0x64cde4:c.instructions+=2;goto B64cde4;
case 0x64cde7:c.instructions+=1;goto B64cde7;
case 0x64cde9:goto L64cde9;
case 0x64cdec:goto L64cdec;
case 0x64cdee:c.instructions+=4;goto B64cdee;
case 0x64cdef:c.instructions+=3;goto B64cdef;
case 0x64cdf2:c.instructions+=2;goto B64cdf2;
case 0x64cdf3:c.instructions+=1;goto B64cdf3;
case 0x64cdf8:goto L64cdf8;
case 0x64cdfa:c.instructions+=1;goto B64cdfa;
case 0x64cdfc:goto L64cdfc;
case 0x64cdff:c.instructions+=4;goto B64cdff;
case 0x64ce00:c.instructions+=3;goto B64ce00;
case 0x64ce03:c.instructions+=2;goto B64ce03;
case 0x64ce06:c.instructions+=1;goto B64ce06;
case 0x64ce08:goto L64ce08;
case 0x64ce0b:c.instructions+=1;goto B64ce0b;
case 0x64ce0e:goto L64ce0e;
case 0x64ce10:c.instructions+=1;goto B64ce10;
case 0x64ce12:goto L64ce12;
case 0x64ce14:c.instructions+=1;goto B64ce14;
case 0x64ce16:goto L64ce16;
case 0x64ce17:c.instructions+=2;goto B64ce17;
case 0x64ce1a:c.instructions+=1;goto B64ce1a;
case 0x64ce1c:goto L64ce1c;
case 0x64ce1f:c.instructions+=4;goto B64ce1f;
case 0x64ce22:c.instructions+=3;goto B64ce22;
case 0x64ce26:c.instructions+=2;goto B64ce26;
case 0x64ce29:c.instructions+=1;goto B64ce29;
case 0x64ce2b:goto L64ce2b;
case 0x64ce2e:c.instructions+=1;goto B64ce2e;
case 0x64ce30:goto L64ce30;
case 0x64ce32:c.instructions+=1;goto B64ce32;
case 0x64ce35:goto L64ce35;
case 0x64ce37:c.instructions+=1;goto B64ce37;
case 0x64ce39:goto L64ce39;
case 0x64ce3b:goto L64ce3b;
case 0x64ce3c:c.instructions+=2;goto B64ce3c;
case 0x64ce3f:c.instructions+=1;goto B64ce3f;
case 0x64ce41:goto L64ce41;
case 0x64ce42:c.instructions+=1;goto B64ce42;
case 0x64ce44:goto L64ce44;
case 0x64ce47:c.instructions+=3;goto B64ce47;
case 0x64ce4b:c.instructions+=2;goto B64ce4b;
case 0x64ce4f:c.instructions+=1;goto B64ce4f;
case 0x64ce51:goto L64ce51;
case 0x64ce52:c.instructions+=1;goto B64ce52;
case 0x64ce53:goto L64ce53;
case 0x64ce54:c.instructions+=2;goto B64ce54;
case 0x64ce55:c.instructions+=1;goto B64ce55;
case 0x64ce58:goto L64ce58;
case 0x64ce5a:c.instructions+=9;goto B64ce5a;
case 0x64ce5b:c.instructions+=8;goto B64ce5b;
case 0x64ce5d:c.instructions+=7;goto B64ce5d;
case 0x64ce60:c.instructions+=6;goto B64ce60;
case 0x64ce61:c.instructions+=5;goto B64ce61;
case 0x64ce62:c.instructions+=4;goto B64ce62;
case 0x64ce65:c.instructions+=3;goto B64ce65;
case 0x64ce67:c.instructions+=2;goto B64ce67;
case 0x64ce69:c.instructions+=1;goto B64ce69;
case 0x64ce6b:goto L64ce6b;
case 0x64ce70:c.instructions+=1;goto B64ce70;
case 0x64ce75:goto L64ce75;
case 0x64ce76:c.instructions+=5;goto B64ce76;
case 0x64ce79:c.instructions+=4;goto B64ce79;
case 0x64ce7b:c.instructions+=3;goto B64ce7b;
case 0x64ce7e:c.instructions+=2;goto B64ce7e;
case 0x64ce80:c.instructions+=1;goto B64ce80;
case 0x64ce85:goto L64ce85;
case 0x64ce87:c.instructions+=1;goto B64ce87;
case 0x64ce89:goto L64ce89;
case 0x64ce8e:c.instructions+=1;goto B64ce8e;
case 0x64ce93:goto L64ce93;
case 0x64ce96:c.instructions+=5;goto B64ce96;
case 0x64ce99:c.instructions+=4;goto B64ce99;
case 0x64ce9f:c.instructions+=3;goto B64ce9f;
case 0x64cea2:c.instructions+=2;goto B64cea2;
case 0x64cea5:c.instructions+=1;goto B64cea5;
case 0x64cea7:goto L64cea7;
case 0x64ceab:c.instructions+=1;goto B64ceab;
case 0x64cead:goto L64cead;
case 0x64ceb0:c.instructions+=3;goto B64ceb0;
case 0x64ceb1:c.instructions+=2;goto B64ceb1;
case 0x64ceb2:c.instructions+=1;goto B64ceb2;
case 0x64ceb8:goto L64ceb8;
case 0x64ceb9:c.instructions+=1;goto B64ceb9;
case 0x64cebb:goto L64cebb;
case 0x64cebe:c.instructions+=12;goto B64cebe;
case 0x64cec1:c.instructions+=11;goto B64cec1;
case 0x64cec3:c.instructions+=10;goto B64cec3;
case 0x64cec6:c.instructions+=9;goto B64cec6;
case 0x64cec9:c.instructions+=8;goto B64cec9;
case 0x64ceca:c.instructions+=7;goto B64ceca;
case 0x64cecc:c.instructions+=6;goto B64cecc;
case 0x64ced3:c.instructions+=5;goto B64ced3;
case 0x64ced6:c.instructions+=4;goto B64ced6;
case 0x64ced9:c.instructions+=3;goto B64ced9;
case 0x64cedc:c.instructions+=2;goto B64cedc;
case 0x64cedf:c.instructions+=1;goto B64cedf;
case 0x64cee1:goto L64cee1;
case 0x64cee4:goto L64cee4;
case 0x64cee6:c.instructions+=2;goto B64cee6;
case 0x64cee9:c.instructions+=1;goto B64cee9;
case 0x64ceeb:goto L64ceeb;
case 0x64ceee:goto L64ceee;
case 0x64cef0:c.instructions+=2;goto B64cef0;
case 0x64cef1:c.instructions+=1;goto B64cef1;
case 0x64cef3:goto L64cef3;
case 0x64cef5:goto L64cef5;
case 0x64cef9:c.instructions+=2;goto B64cef9;
case 0x64cefd:c.instructions+=1;goto B64cefd;
case 0x64ceff:goto L64ceff;
case 0x64cf02:c.instructions+=1;goto B64cf02;
case 0x64cf05:goto L64cf05;
case 0x64cf07:c.instructions+=2;goto B64cf07;
case 0x64cf0a:c.instructions+=1;goto B64cf0a;
case 0x64cf0c:goto L64cf0c;
case 0x64cf0f:goto L64cf0f;
case 0x64cf10:c.instructions+=2;goto B64cf10;
case 0x64cf11:c.instructions+=1;goto B64cf11;
case 0x64cf16:goto L64cf16;
case 0x64cf18:c.instructions+=2;goto B64cf18;
case 0x64cf1b:c.instructions+=1;goto B64cf1b;
case 0x64cf21:goto L64cf21;
case 0x64cf24:c.instructions+=4;goto B64cf24;
case 0x64cf25:c.instructions+=3;goto B64cf25;
case 0x64cf28:c.instructions+=2;goto B64cf28;
case 0x64cf2b:c.instructions+=1;goto B64cf2b;
case 0x64cf2d:goto L64cf2d;
case 0x64cf30:c.instructions+=1;goto B64cf30;
case 0x64cf33:goto L64cf33;
case 0x64cf35:c.instructions+=1;goto B64cf35;
case 0x64cf37:goto L64cf37;
case 0x64cf39:c.instructions+=1;goto B64cf39;
case 0x64cf3b:goto L64cf3b;
case 0x64cf3c:c.instructions+=2;goto B64cf3c;
case 0x64cf3f:c.instructions+=1;goto B64cf3f;
case 0x64cf41:goto L64cf41;
case 0x64cf44:c.instructions+=4;goto B64cf44;
case 0x64cf47:c.instructions+=3;goto B64cf47;
case 0x64cf4b:c.instructions+=2;goto B64cf4b;
case 0x64cf4e:c.instructions+=1;goto B64cf4e;
case 0x64cf50:goto L64cf50;
case 0x64cf53:c.instructions+=1;goto B64cf53;
case 0x64cf55:goto L64cf55;
case 0x64cf57:c.instructions+=1;goto B64cf57;
case 0x64cf5a:goto L64cf5a;
case 0x64cf5c:c.instructions+=1;goto B64cf5c;
case 0x64cf5e:goto L64cf5e;
case 0x64cf60:goto L64cf60;
case 0x64cf61:c.instructions+=2;goto B64cf61;
case 0x64cf64:c.instructions+=1;goto B64cf64;
case 0x64cf66:goto L64cf66;
case 0x64cf67:c.instructions+=1;goto B64cf67;
case 0x64cf69:goto L64cf69;
case 0x64cf6c:c.instructions+=3;goto B64cf6c;
case 0x64cf70:c.instructions+=2;goto B64cf70;
case 0x64cf74:c.instructions+=1;goto B64cf74;
case 0x64cf7a:goto L64cf7a;
case 0x64cf7f:goto L64cf7f;
case 0x64cf82:c.instructions+=12;goto B64cf82;
case 0x64cf85:c.instructions+=11;goto B64cf85;
case 0x64cf87:c.instructions+=10;goto B64cf87;
case 0x64cf8a:c.instructions+=9;goto B64cf8a;
case 0x64cf8d:c.instructions+=8;goto B64cf8d;
case 0x64cf8e:c.instructions+=7;goto B64cf8e;
case 0x64cf90:c.instructions+=6;goto B64cf90;
case 0x64cf97:c.instructions+=5;goto B64cf97;
case 0x64cf9a:c.instructions+=4;goto B64cf9a;
case 0x64cf9d:c.instructions+=3;goto B64cf9d;
case 0x64cfa0:c.instructions+=2;goto B64cfa0;
case 0x64cfa3:c.instructions+=1;goto B64cfa3;
case 0x64cfa5:goto L64cfa5;
case 0x64cfa8:goto L64cfa8;
case 0x64cfaa:c.instructions+=2;goto B64cfaa;
case 0x64cfad:c.instructions+=1;goto B64cfad;
case 0x64cfaf:goto L64cfaf;
case 0x64cfb2:goto L64cfb2;
case 0x64cfb4:c.instructions+=2;goto B64cfb4;
case 0x64cfb5:c.instructions+=1;goto B64cfb5;
case 0x64cfb7:goto L64cfb7;
case 0x64cfb9:goto L64cfb9;
case 0x64cfbd:c.instructions+=2;goto B64cfbd;
case 0x64cfc1:c.instructions+=1;goto B64cfc1;
case 0x64cfc3:goto L64cfc3;
case 0x64cfc6:c.instructions+=4;goto B64cfc6;
case 0x64cfc9:c.instructions+=3;goto B64cfc9;
case 0x64cfcb:c.instructions+=2;goto B64cfcb;
case 0x64cfce:c.instructions+=1;goto B64cfce;
case 0x64cfd0:goto L64cfd0;
case 0x64cfd3:goto L64cfd3;
case 0x64cfd4:c.instructions+=2;goto B64cfd4;
case 0x64cfd5:c.instructions+=1;goto B64cfd5;
case 0x64cfda:goto L64cfda;
case 0x64cfdc:c.instructions+=2;goto B64cfdc;
case 0x64cfdf:c.instructions+=1;goto B64cfdf;
case 0x64cfe1:goto L64cfe1;
case 0x64cfe4:c.instructions+=4;goto B64cfe4;
case 0x64cfe5:c.instructions+=3;goto B64cfe5;
case 0x64cfe8:c.instructions+=2;goto B64cfe8;
case 0x64cfeb:c.instructions+=1;goto B64cfeb;
case 0x64cfed:goto L64cfed;
case 0x64cff0:c.instructions+=1;goto B64cff0;
case 0x64cff3:goto L64cff3;
case 0x64cff5:c.instructions+=1;goto B64cff5;
case 0x64cff7:goto L64cff7;
case 0x64cff9:c.instructions+=1;goto B64cff9;
case 0x64cffb:goto L64cffb;
case 0x64cffc:c.instructions+=2;goto B64cffc;
case 0x64cfff:c.instructions+=1;goto B64cfff;
default:missing_instruction(c.pc);}
B64c001:L64c001:{c.instructions+=2;NFSU2_TR(0x64c001);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64c004:{NFSU2_TR(0x64c004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64bfebu,64b);}
}
B64c006:L64c006:{c.instructions+=10;NFSU2_TR(0x64c006);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c009:{NFSU2_TR(0x64c009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c00c:{NFSU2_TR(0x64c00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c00d:{NFSU2_TR(0x64c00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c010:{NFSU2_TR(0x64c010);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B64c013:{NFSU2_TR(0x64c013);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B64c016:{NFSU2_TR(0x64c016);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c017:{NFSU2_TR(0x64c017);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c019:{NFSU2_TR(0x64c019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c01a:{NFSU2_TR(0x64c01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c01full));
TAIL_STATIC(0x64a4c7u,64a);
}
B64c01f:L64c01f:{c.instructions+=2;NFSU2_TR(0x64c01f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c021:{NFSU2_TR(0x64c021);
if(r1(R+518)){TAIL_STATIC(0x64bfebu,64b);}
}
B64c023:L64c023:{c.instructions+=3;NFSU2_TR(0x64c023);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64c025:{NFSU2_TR(0x64c025);
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
B64c027:{NFSU2_TR(0x64c027);
if(r1(R+518)){TAIL_STATIC(0x64bfedu,64b);}
}
B64c029:L64c029:{c.instructions+=2;NFSU2_TR(0x64c029);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c02c:{NFSU2_TR(0x64c02c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64bfebu,64b);}
}
B64c02e:L64c02e:{c.instructions+=3;NFSU2_TR(0x64c02e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c02f:{NFSU2_TR(0x64c02f);
__builtin_memmove((R+24),(R+0),4);
}
B64c031:{NFSU2_TR(0x64c031);
{goto L64c03f;}
}
B64c033:L64c033:{c.instructions+=5;NFSU2_TR(0x64c033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c036:{NFSU2_TR(0x64c036);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B64c039:{NFSU2_TR(0x64c039);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c03a:{NFSU2_TR(0x64c03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B64c03d:{NFSU2_TR(0x64c03d);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c03f:L64c03f:{c.instructions+=4;NFSU2_TR(0x64c03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c042:{NFSU2_TR(0x64c042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64c045:{NFSU2_TR(0x64c045);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c047:{NFSU2_TR(0x64c047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64beecu,64b);}
}
B64c04d:L64c04d:{c.instructions+=2;NFSU2_TR(0x64c04d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c050:{NFSU2_TR(0x64c050);
if(r1(R+518)){TAIL_STATIC(0x64bfebu,64b);}
}
B64c052:L64c052:{c.instructions+=6;NFSU2_TR(0x64c052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c055:{NFSU2_TR(0x64c055);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64c056:{NFSU2_TR(0x64c056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c057:{NFSU2_TR(0x64c057);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c05a:{NFSU2_TR(0x64c05a);
__builtin_memmove((R+4),(R+12),4);
}
B64c05c:{NFSU2_TR(0x64c05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c061ull));
{goto L64c399;}
}
B64c061:L64c061:{c.instructions+=2;NFSU2_TR(0x64c061);
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
B64c063:{NFSU2_TR(0x64c063);
if(r1(R+518)){TAIL_STATIC(0x64bfebu,64b);}
}
B64c065:L64c065:{c.instructions+=2;NFSU2_TR(0x64c065);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c067:{NFSU2_TR(0x64c067);
TAIL_STATIC(0x64bfedu,64b);
}
B64c069:L64c069:{c.instructions+=2;NFSU2_TR(0x64c069);
__builtin_memmove((R+0),(R+28),4);
}
B64c06b:{NFSU2_TR(0x64c06b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c065u);}goto L64c065;}
}
B64c06d:L64c06d:{c.instructions+=5;NFSU2_TR(0x64c06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c070:{NFSU2_TR(0x64c070);
__builtin_memmove((R+0),(R+24),4);
}
B64c072:{NFSU2_TR(0x64c072);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64c075:{NFSU2_TR(0x64c075);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B64c078:{NFSU2_TR(0x64c078);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c065u);}goto L64c065;}
}
B64c07a:L64c07a:{c.instructions+=10;NFSU2_TR(0x64c07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c07d:{NFSU2_TR(0x64c07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c080:{NFSU2_TR(0x64c080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c083:{NFSU2_TR(0x64c083);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B64c086:{NFSU2_TR(0x64c086);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B64c089:{NFSU2_TR(0x64c089);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c08a:{NFSU2_TR(0x64c08a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c08b:{NFSU2_TR(0x64c08b);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c08d:{NFSU2_TR(0x64c08d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c08e:{NFSU2_TR(0x64c08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c093ull));
TAIL_STATIC(0x64a67bu,64a);
}
B64c093:L64c093:{c.instructions+=1;NFSU2_TR(0x64c093);
TAIL_STATIC(0x64bfedu,64b);
}
B64c098:L64c098:{c.instructions+=8;NFSU2_TR(0x64c098);
__builtin_memmove((R+28),(R+28),4);
}
B64c09a:{NFSU2_TR(0x64c09a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c09b:{NFSU2_TR(0x64c09b);
__builtin_memmove((R+20),(R+16),4);
}
B64c09d:{NFSU2_TR(0x64c09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c0a0:{NFSU2_TR(0x64c0a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0a2:{NFSU2_TR(0x64c0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c0a5:{NFSU2_TR(0x64c0a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c0a8:{NFSU2_TR(0x64c0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c0adull));
TAIL_STATIC(0x64a4c7u,64a);
}
B64c0ad:L64c0ad:{c.instructions+=2;NFSU2_TR(0x64c0ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c0ae:{NFSU2_TR(0x64c0ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c0b1:L64c0b1:{c.instructions+=5;NFSU2_TR(0x64c0b1);
__builtin_memmove((R+28),(R+28),4);
}
B64c0b3:{NFSU2_TR(0x64c0b3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0b4:{NFSU2_TR(0x64c0b4);
__builtin_memmove((R+20),(R+16),4);
}
B64c0b6:{NFSU2_TR(0x64c0b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c0ba:{NFSU2_TR(0x64c0ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c0c0;}}
}
B64c0bc:L64c0bc:{c.instructions+=2;NFSU2_TR(0x64c0bc);
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
B64c0be:{NFSU2_TR(0x64c0be);
{goto L64c0d0;}
}
B64c0c0:L64c0c0:{c.instructions+=5;NFSU2_TR(0x64c0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c0c3:{NFSU2_TR(0x64c0c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0c5:{NFSU2_TR(0x64c0c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c0c8:{NFSU2_TR(0x64c0c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c0cb:{NFSU2_TR(0x64c0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c0d0ull));
TAIL_STATIC(0x64a67bu,64a);
}
B64c0d0:L64c0d0:{c.instructions+=2;NFSU2_TR(0x64c0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c0d1:{NFSU2_TR(0x64c0d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c0d4:L64c0d4:{c.instructions+=6;NFSU2_TR(0x64c0d4);
__builtin_memmove((R+28),(R+28),4);
}
B64c0d6:{NFSU2_TR(0x64c0d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0d7:{NFSU2_TR(0x64c0d7);
__builtin_memmove((R+20),(R+16),4);
}
B64c0d9:{NFSU2_TR(0x64c0d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0da:{NFSU2_TR(0x64c0da);
__builtin_memmove((R+24),(R+4),4);
}
B64c0dc:{NFSU2_TR(0x64c0dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c0e1ull));
TAIL_STATIC(0x64b788u,64b);
}
B64c0e1:L64c0e1:{c.instructions+=2;NFSU2_TR(0x64c0e1);
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
B64c0e5:{NFSU2_TR(0x64c0e5);
if(r1(R+518)){{goto L64c0ee;}}
}
B64c0e7:L64c0e7:{c.instructions+=2;NFSU2_TR(0x64c0e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0e8:{NFSU2_TR(0x64c0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c0edull));
TAIL_STATIC(0x575630u,575);
}
B64c0ed:L64c0ed:{c.instructions+=1;NFSU2_TR(0x64c0ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c0ee:L64c0ee:{c.instructions+=4;NFSU2_TR(0x64c0ee);
__builtin_memmove((R+0),(R+24),4);
}
B64c0f0:{NFSU2_TR(0x64c0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c0f1:{NFSU2_TR(0x64c0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c0f2:{NFSU2_TR(0x64c0f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c0f5:L64c0f5:{c.instructions+=6;NFSU2_TR(0x64c0f5);
__builtin_memmove((R+28),(R+28),4);
}
B64c0f7:{NFSU2_TR(0x64c0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c0f8:{NFSU2_TR(0x64c0f8);
__builtin_memmove((R+24),(R+4),4);
}
B64c0fa:{NFSU2_TR(0x64c0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c0fd:{NFSU2_TR(0x64c0fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c0ff:{NFSU2_TR(0x64c0ff);
if(r1(R+518)){{goto L64c10c;}}
}
B64c101:L64c101:{c.instructions+=2;NFSU2_TR(0x64c101);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c103:{NFSU2_TR(0x64c103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c108ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c0d4u);}goto L64c0d4;}
}
B64c108:L64c108:{c.instructions+=1;NFSU2_TR(0x64c108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c10c:L64c10c:{c.instructions+=2;NFSU2_TR(0x64c10c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c110:{NFSU2_TR(0x64c110);
if(r1(R+518)){{goto L64c135;}}
}
B64c112:L64c112:{c.instructions+=1;NFSU2_TR(0x64c112);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c113:L64c113:{c.instructions+=6;NFSU2_TR(0x64c113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c116:{NFSU2_TR(0x64c116);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c119:{NFSU2_TR(0x64c119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c11c:{NFSU2_TR(0x64c11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c120:{NFSU2_TR(0x64c120);
__builtin_memmove((R+4),(R+28),4);
}
B64c122:{NFSU2_TR(0x64c122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c127ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c0f5u);}goto L64c0f5;}
}
B64c127:L64c127:{c.instructions+=2;NFSU2_TR(0x64c127);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c128:{NFSU2_TR(0x64c128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c12dull));
TAIL_STATIC(0x575630u,575);
}
B64c12d:L64c12d:{c.instructions+=3;NFSU2_TR(0x64c12d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c131:{NFSU2_TR(0x64c131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c132:{NFSU2_TR(0x64c132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c113u);}goto L64c113;}}
}
B64c134:L64c134:{c.instructions+=1;NFSU2_TR(0x64c134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c135:L64c135:{c.instructions+=3;NFSU2_TR(0x64c135);
__builtin_memmove((R+4),(R+24),4);
}
B64c137:{NFSU2_TR(0x64c137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c138:{NFSU2_TR(0x64c138);
TAIL_STATIC(0x64b62bu,64b);
}
B64c13d:L64c13d:{c.instructions+=12;NFSU2_TR(0x64c13d);
__builtin_memmove((R+28),(R+28),4);
}
B64c13f:{NFSU2_TR(0x64c13f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c140:{NFSU2_TR(0x64c140);
__builtin_memmove((R+20),(R+16),4);
}
B64c142:{NFSU2_TR(0x64c142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B64c145:{NFSU2_TR(0x64c145);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c146:{NFSU2_TR(0x64c146);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c147:{NFSU2_TR(0x64c147);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64c149:{NFSU2_TR(0x64c149);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c14b:{NFSU2_TR(0x64c14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c14e:{NFSU2_TR(0x64c14e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64c150:{NFSU2_TR(0x64c150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c153:{NFSU2_TR(0x64c153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c158ull));
TAIL_STATIC(0x575620u,575);
}
B64c158:L64c158:{c.instructions+=3;NFSU2_TR(0x64c158);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c15a:{NFSU2_TR(0x64c15a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c15b:{NFSU2_TR(0x64c15b);
if(r1(R+518)){{goto L64c169;}}
}
B64c15d:L64c15d:{c.instructions+=2;NFSU2_TR(0x64c15d);
__builtin_memmove((R+4),(R+0),4);
}
B64c15f:{NFSU2_TR(0x64c15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c164ull));
TAIL_STATIC(0x6477abu,647);
}
B64c164:L64c164:{c.instructions+=2;NFSU2_TR(0x64c164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c167:{NFSU2_TR(0x64c167);
{goto L64c16c;}
}
B64c169:L64c169:{c.instructions+=1;NFSU2_TR(0x64c169);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c16c:L64c16c:{c.instructions+=2;NFSU2_TR(0x64c16c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64c16f:{NFSU2_TR(0x64c16f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c17b;}}
}
B64c171:L64c171:{c.instructions+=2;NFSU2_TR(0x64c171);
w4(R+28,u32(0x8007000eull));
}
B64c176:{NFSU2_TR(0x64c176);
{goto L64c268;}
}
B64c17b:L64c17b:{c.instructions+=5;NFSU2_TR(0x64c17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c17e:{NFSU2_TR(0x64c17e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c17f:{NFSU2_TR(0x64c17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c182:{NFSU2_TR(0x64c182);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c184:{NFSU2_TR(0x64c184);
if(r1(R+518)){{goto L64c24a;}}
}
B64c18a:L64c18a:{c.instructions+=2;NFSU2_TR(0x64c18a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c18e:{NFSU2_TR(0x64c18e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c24a;}}
}
B64c194:L64c194:{c.instructions+=3;NFSU2_TR(0x64c194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c197:{NFSU2_TR(0x64c197);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c199:{NFSU2_TR(0x64c199);
if(r1(R+518)){{goto L64c24a;}}
}
B64c19f:L64c19f:{c.instructions+=2;NFSU2_TR(0x64c19f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c1a3:{NFSU2_TR(0x64c1a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c24a;}}
}
B64c1a9:L64c1a9:{c.instructions+=2;NFSU2_TR(0x64c1a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64c1b0:{NFSU2_TR(0x64c1b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c24f;}}
}
B64c1b6:L64c1b6:{c.instructions+=4;NFSU2_TR(0x64c1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1b9:{NFSU2_TR(0x64c1b9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64c1bc:{NFSU2_TR(0x64c1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c1bf:{NFSU2_TR(0x64c1bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c24a;}}
}
B64c1c5:L64c1c5:{c.instructions+=4;NFSU2_TR(0x64c1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c1c8:{NFSU2_TR(0x64c1c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c1ca:{NFSU2_TR(0x64c1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c1cd:{NFSU2_TR(0x64c1cd);
if(r1(R+518)){{goto L64c24a;}}
}
B64c1cf:L64c1cf:{c.instructions+=3;NFSU2_TR(0x64c1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c1d2:{NFSU2_TR(0x64c1d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c1d4:{NFSU2_TR(0x64c1d4);
if(r1(R+518)){{goto L64c24a;}}
}
B64c1d6:L64c1d6:{c.instructions+=15;NFSU2_TR(0x64c1d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1d9:{NFSU2_TR(0x64c1d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1da:{NFSU2_TR(0x64c1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1dd:{NFSU2_TR(0x64c1dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1de:{NFSU2_TR(0x64c1de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1e1:{NFSU2_TR(0x64c1e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1e2:{NFSU2_TR(0x64c1e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1e5:{NFSU2_TR(0x64c1e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1e6:{NFSU2_TR(0x64c1e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1e9:{NFSU2_TR(0x64c1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1ea:{NFSU2_TR(0x64c1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c1ed:{NFSU2_TR(0x64c1ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1ee:{NFSU2_TR(0x64c1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c1f1:{NFSU2_TR(0x64c1f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c1f2:{NFSU2_TR(0x64c1f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c1f7ull));
TAIL_STATIC(0x647a3fu,647);
}
B64c1f7:L64c1f7:{c.instructions+=3;NFSU2_TR(0x64c1f7);
__builtin_memmove((R+28),(R+0),4);
}
B64c1f9:{NFSU2_TR(0x64c1f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c1fb:{NFSU2_TR(0x64c1fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64c217;}}
}
B64c1fd:L64c1fd:{c.instructions+=1;NFSU2_TR(0x64c1fd);
u8 U[4];
w4(U+0,u32(0x7af848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c202:L64c202:{c.instructions+=6;NFSU2_TR(0x64c202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c205:{NFSU2_TR(0x64c205);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c206:{NFSU2_TR(0x64c206);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c209:{NFSU2_TR(0x64c209);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64c20c:{NFSU2_TR(0x64c20c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c20d:{NFSU2_TR(0x64c20d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c212ull));
TAIL_STATIC(0x64307cu,643);
}
B64c212:L64c212:{c.instructions+=2;NFSU2_TR(0x64c212);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64c215:{NFSU2_TR(0x64c215);
{goto L64c24f;}
}
B64c217:L64c217:{c.instructions+=3;NFSU2_TR(0x64c217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c21a:{NFSU2_TR(0x64c21a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c21c:{NFSU2_TR(0x64c21c);
if(r1(R+518)){{goto L64c270;}}
}
B64c21e:L64c21e:{c.instructions+=2;NFSU2_TR(0x64c21e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c221:{NFSU2_TR(0x64c221);
if(r1(R+518)){{goto L64c270;}}
}
B64c223:L64c223:{c.instructions+=2;NFSU2_TR(0x64c223);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c226:{NFSU2_TR(0x64c226);
if(r1(R+518)){{goto L64c270;}}
}
B64c228:L64c228:{c.instructions+=2;NFSU2_TR(0x64c228);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c22b:{NFSU2_TR(0x64c22b);
if(r1(R+518)){{goto L64c270;}}
}
B64c22d:L64c22d:{c.instructions+=2;NFSU2_TR(0x64c22d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c230:{NFSU2_TR(0x64c230);
if(r1(R+518)){{goto L64c270;}}
}
B64c232:L64c232:{c.instructions+=7;NFSU2_TR(0x64c232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c235:{NFSU2_TR(0x64c235);
u8 U[4];
w4(U+0,u32(0x7af7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c23a:{NFSU2_TR(0x64c23a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c23b:{NFSU2_TR(0x64c23b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c23e:{NFSU2_TR(0x64c23e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64c241:{NFSU2_TR(0x64c241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c242:{NFSU2_TR(0x64c242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c247ull));
TAIL_STATIC(0x64307cu,643);
}
B64c247:L64c247:{c.instructions+=1;NFSU2_TR(0x64c247);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64c24a:L64c24a:{c.instructions+=1;NFSU2_TR(0x64c24a);
w4(R+28,u32(0x80004005ull));
}
B64c24f:L64c24f:{c.instructions+=3;NFSU2_TR(0x64c24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c252:{NFSU2_TR(0x64c252);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c254:{NFSU2_TR(0x64c254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c259ull));
TAIL_STATIC(0x647806u,647);
}
B64c259:L64c259:{c.instructions+=3;NFSU2_TR(0x64c259);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64c25c:{NFSU2_TR(0x64c25c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c25d:{NFSU2_TR(0x64c25d);
if(r1(R+518)){{goto L64c268;}}
}
B64c25f:L64c25f:{c.instructions+=2;NFSU2_TR(0x64c25f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c262:{NFSU2_TR(0x64c262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c267ull));
TAIL_STATIC(0x575630u,575);
}
B64c267:L64c267:{c.instructions+=1;NFSU2_TR(0x64c267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c268:L64c268:{c.instructions+=5;NFSU2_TR(0x64c268);
__builtin_memmove((R+0),(R+28),4);
}
B64c26a:{NFSU2_TR(0x64c26a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c26b:{NFSU2_TR(0x64c26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64c26c:{NFSU2_TR(0x64c26c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64c26d:{NFSU2_TR(0x64c26d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c270:L64c270:{c.instructions+=2;NFSU2_TR(0x64c270);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c273:{NFSU2_TR(0x64c273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c278ull));
TAIL_STATIC(0x575620u,575);
}
B64c278:L64c278:{c.instructions+=5;NFSU2_TR(0x64c278);
__builtin_memmove((R+28),(R+0),4);
}
B64c27a:{NFSU2_TR(0x64c27a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c27c:{NFSU2_TR(0x64c27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c27d:{NFSU2_TR(0x64c27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c280:{NFSU2_TR(0x64c280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c289;}}
}
B64c282:L64c282:{c.instructions+=2;NFSU2_TR(0x64c282);
w4(R+28,u32(0x8007000eull));
}
B64c287:{NFSU2_TR(0x64c287);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c24fu);}goto L64c24f;}
}
B64c289:L64c289:{c.instructions+=4;NFSU2_TR(0x64c289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c28c:{NFSU2_TR(0x64c28c);
__builtin_memmove((R+8),(R+4),4);
}
B64c28e:{NFSU2_TR(0x64c28e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64c291:{NFSU2_TR(0x64c291);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c293:L64c293:{c.instructions+=1;NFSU2_TR(0x64c293);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64c295;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c293u);}goto L64c293;}
}
B64c295:L64c295:{c.instructions+=2;NFSU2_TR(0x64c295);
__builtin_memmove((R+4),(R+8),4);
}
B64c297:{NFSU2_TR(0x64c297);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64c29a:L64c29a:{c.instructions+=1;NFSU2_TR(0x64c29a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64c29c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c29au);}goto L64c29a;}
}
B64c29c:L64c29c:{c.instructions+=7;NFSU2_TR(0x64c29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c29f:{NFSU2_TR(0x64c29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c2a2:{NFSU2_TR(0x64c2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c2a5:{NFSU2_TR(0x64c2a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64c2a8:{NFSU2_TR(0x64c2a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2a9:{NFSU2_TR(0x64c2a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2ac:{NFSU2_TR(0x64c2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c2b1ull));
TAIL_STATIC(0x6480b0u,648);
}
B64c2b1:L64c2b1:{c.instructions+=3;NFSU2_TR(0x64c2b1);
__builtin_memmove((R+28),(R+0),4);
}
B64c2b3:{NFSU2_TR(0x64c2b3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c2b5:{NFSU2_TR(0x64c2b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c24fu);}goto L64c24f;}}
}
B64c2b7:L64c2b7:{c.instructions+=6;NFSU2_TR(0x64c2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c2ba:{NFSU2_TR(0x64c2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64c2bd:{NFSU2_TR(0x64c2bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2be:{NFSU2_TR(0x64c2be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2c1:{NFSU2_TR(0x64c2c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2c4:{NFSU2_TR(0x64c2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c2c9ull));
TAIL_STATIC(0x647827u,647);
}
B64c2c9:L64c2c9:{c.instructions+=3;NFSU2_TR(0x64c2c9);
__builtin_memmove((R+28),(R+0),4);
}
B64c2cb:{NFSU2_TR(0x64c2cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c2cd:{NFSU2_TR(0x64c2cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c24fu);}goto L64c24f;}}
}
B64c2cf:L64c2cf:{c.instructions+=11;NFSU2_TR(0x64c2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c2d2:{NFSU2_TR(0x64c2d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2d3:{NFSU2_TR(0x64c2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64c2d6:{NFSU2_TR(0x64c2d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2d7:{NFSU2_TR(0x64c2d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2da:{NFSU2_TR(0x64c2da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2dd:{NFSU2_TR(0x64c2dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2de:{NFSU2_TR(0x64c2de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2df:{NFSU2_TR(0x64c2df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2e2:{NFSU2_TR(0x64c2e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2e5:{NFSU2_TR(0x64c2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c2eaull));
TAIL_STATIC(0x6481aau,648);
}
B64c2ea:L64c2ea:{c.instructions+=3;NFSU2_TR(0x64c2ea);
__builtin_memmove((R+28),(R+0),4);
}
B64c2ec:{NFSU2_TR(0x64c2ec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c2ee:{NFSU2_TR(0x64c2ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64c2fa;}}
}
B64c2f0:L64c2f0:{c.instructions+=2;NFSU2_TR(0x64c2f0);
u8 U[4];
w4(U+0,u32(0x7af7c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c2f5:{NFSU2_TR(0x64c2f5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c202u);}goto L64c202;}
}
B64c2fa:L64c2fa:{c.instructions+=3;NFSU2_TR(0x64c2fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c2fd:{NFSU2_TR(0x64c2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c300:{NFSU2_TR(0x64c300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c305ull));
TAIL_STATIC(0x6479bbu,647);
}
B64c305:L64c305:{c.instructions+=3;NFSU2_TR(0x64c305);
__builtin_memmove((R+28),(R+0),4);
}
B64c307:{NFSU2_TR(0x64c307);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c309:{NFSU2_TR(0x64c309);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c24fu);}goto L64c24f;}}
}
B64c30f:L64c30f:{c.instructions+=4;NFSU2_TR(0x64c30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c312:{NFSU2_TR(0x64c312);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c313:{NFSU2_TR(0x64c313);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c316:{NFSU2_TR(0x64c316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c31bull));
TAIL_STATIC(0x647930u,647);
}
B64c31b:L64c31b:{c.instructions+=3;NFSU2_TR(0x64c31b);
__builtin_memmove((R+28),(R+0),4);
}
B64c31d:{NFSU2_TR(0x64c31d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c31f:{NFSU2_TR(0x64c31f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c259u);}goto L64c259;}}
}
B64c325:L64c325:{c.instructions+=4;NFSU2_TR(0x64c325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c328:{NFSU2_TR(0x64c328);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c329:{NFSU2_TR(0x64c329);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c32c:{NFSU2_TR(0x64c32c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c331ull));
TAIL_STATIC(0x647930u,647);
}
B64c331:L64c331:{c.instructions+=3;NFSU2_TR(0x64c331);
__builtin_memmove((R+28),(R+0),4);
}
B64c333:{NFSU2_TR(0x64c333);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64c335:{NFSU2_TR(0x64c335);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c259u);}goto L64c259;}}
}
B64c33b:L64c33b:{c.instructions+=2;NFSU2_TR(0x64c33b);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c33d:{NFSU2_TR(0x64c33d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c342ull));
TAIL_STATIC(0x575620u,575);
}
B64c342:L64c342:{c.instructions+=3;NFSU2_TR(0x64c342);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c344:{NFSU2_TR(0x64c344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c345:{NFSU2_TR(0x64c345);
if(r1(R+518)){{goto L64c350;}}
}
B64c347:L64c347:{c.instructions+=2;NFSU2_TR(0x64c347);
__builtin_memmove((R+4),(R+0),4);
}
B64c349:{NFSU2_TR(0x64c349);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c34eull));
TAIL_STATIC(0x64b764u,64b);
}
B64c34e:L64c34e:{c.instructions+=1;NFSU2_TR(0x64c34e);
{goto L64c352;}
}
B64c350:L64c350:{c.instructions+=1;NFSU2_TR(0x64c350);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c352:L64c352:{c.instructions+=2;NFSU2_TR(0x64c352);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c354:{NFSU2_TR(0x64c354);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c360;}}
}
B64c356:L64c356:{c.instructions+=2;NFSU2_TR(0x64c356);
w4(R+28,u32(0x8007000eull));
}
B64c35b:{NFSU2_TR(0x64c35b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c259u);}goto L64c259;}
}
B64c360:L64c360:{c.instructions+=19;NFSU2_TR(0x64c360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c363:{NFSU2_TR(0x64c363);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c366:{NFSU2_TR(0x64c366);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c369:{NFSU2_TR(0x64c369);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c36c:{NFSU2_TR(0x64c36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c36f:{NFSU2_TR(0x64c36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c372:{NFSU2_TR(0x64c372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c375:{NFSU2_TR(0x64c375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c378:{NFSU2_TR(0x64c378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c37b:{NFSU2_TR(0x64c37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c37e:{NFSU2_TR(0x64c37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c381:{NFSU2_TR(0x64c381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64c383:{NFSU2_TR(0x64c383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c386:{NFSU2_TR(0x64c386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c389:{NFSU2_TR(0x64c389);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c38c:{NFSU2_TR(0x64c38c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B64c38f:{NFSU2_TR(0x64c38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c392:{NFSU2_TR(0x64c392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64c394:{NFSU2_TR(0x64c394);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c259u);}goto L64c259;}
}
B64c399:L64c399:{c.instructions+=13;NFSU2_TR(0x64c399);
__builtin_memmove((R+28),(R+28),4);
}
B64c39b:{NFSU2_TR(0x64c39b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c39c:{NFSU2_TR(0x64c39c);
__builtin_memmove((R+20),(R+16),4);
}
B64c39e:{NFSU2_TR(0x64c39e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c39f:{NFSU2_TR(0x64c39f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c3a0:{NFSU2_TR(0x64c3a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c3a1:{NFSU2_TR(0x64c3a1);
__builtin_memmove((R+28),(R+4),4);
}
B64c3a3:{NFSU2_TR(0x64c3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c3a6:{NFSU2_TR(0x64c3a6);
__builtin_memmove((R+0),(R+4),4);
}
B64c3a8:{NFSU2_TR(0x64c3a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B64c3ad:{NFSU2_TR(0x64c3ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c3af:{NFSU2_TR(0x64c3af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c3b2:{NFSU2_TR(0x64c3b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c3bb;}}
}
B64c3b4:L64c3b4:{c.instructions+=2;NFSU2_TR(0x64c3b4);
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
B64c3b6:{NFSU2_TR(0x64c3b6);
{goto L64c455;}
}
B64c3bb:L64c3bb:{c.instructions+=4;NFSU2_TR(0x64c3bb);
__builtin_memmove((R+0),(R+4),4);
}
B64c3bd:{NFSU2_TR(0x64c3bd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B64c3c2:{NFSU2_TR(0x64c3c2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c3c4:{NFSU2_TR(0x64c3c4);
if(r1(R+518)){{goto L64c3d7;}}
}
B64c3c6:L64c3c6:{c.instructions+=8;NFSU2_TR(0x64c3c6);
w4(R+4,u32(~u32(r4(R+4))));
}
B64c3c8:{NFSU2_TR(0x64c3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64c3ca:{NFSU2_TR(0x64c3ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B64c3cd:{NFSU2_TR(0x64c3cd);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B64c3cf:{NFSU2_TR(0x64c3cf);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64c3d1:{NFSU2_TR(0x64c3d1);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c3d3:{NFSU2_TR(0x64c3d3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64c3d5:{NFSU2_TR(0x64c3d5);
{goto L64c455;}
}
B64c3d7:L64c3d7:{c.instructions+=5;NFSU2_TR(0x64c3d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c3d8:{NFSU2_TR(0x64c3d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c3d9:{NFSU2_TR(0x64c3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c3df:{NFSU2_TR(0x64c3df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c3e1:{NFSU2_TR(0x64c3e1);
if(r1(R+518)){{goto L64c451;}}
}
B64c3e3:L64c3e3:{c.instructions+=3;NFSU2_TR(0x64c3e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64c3e5:{NFSU2_TR(0x64c3e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B64c3e8:{NFSU2_TR(0x64c3e8);
{goto L64c3f0;}
}
B64c3ea:L64c3ea:{c.instructions+=2;NFSU2_TR(0x64c3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c3ed:{NFSU2_TR(0x64c3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c3f0:L64c3f0:{c.instructions+=8;NFSU2_TR(0x64c3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c3f3:{NFSU2_TR(0x64c3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64c3f6:{NFSU2_TR(0x64c3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B64c3f9:{NFSU2_TR(0x64c3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c3ff:{NFSU2_TR(0x64c3ff);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B64c401:{NFSU2_TR(0x64c401);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c404:{NFSU2_TR(0x64c404);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64c408:{NFSU2_TR(0x64c408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c40e;}}
}
B64c40a:L64c40a:{c.instructions+=2;NFSU2_TR(0x64c40a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c40c:{NFSU2_TR(0x64c40c);
{goto L64c418;}
}
B64c40e:L64c40e:{c.instructions+=2;NFSU2_TR(0x64c40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c414:{NFSU2_TR(0x64c414);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64c418:L64c418:{c.instructions+=3;NFSU2_TR(0x64c418);
__builtin_memmove((R+28),(R+4),4);
}
B64c41a:{NFSU2_TR(0x64c41a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B64c41d:{NFSU2_TR(0x64c41d);
{goto L64c427;}
}
B64c41f:L64c41f:{c.instructions+=2;NFSU2_TR(0x64c41f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64c421:{NFSU2_TR(0x64c421);
if(r1(R+518)){{goto L64c42b;}}
}
B64c423:L64c423:{c.instructions+=3;NFSU2_TR(0x64c423);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c424:{NFSU2_TR(0x64c424);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64c426:{NFSU2_TR(0x64c426);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64c427:L64c427:{c.instructions+=2;NFSU2_TR(0x64c427);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+4))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64c429:{NFSU2_TR(0x64c429);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c41fu);}goto L64c41f;}}
}
B64c42b:L64c42b:{c.instructions+=4;NFSU2_TR(0x64c42b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64c42d:{NFSU2_TR(0x64c42d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64c42f:{NFSU2_TR(0x64c42f);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64c431:{NFSU2_TR(0x64c431);
if(r1(R+518)){{goto L64c45a;}}
}
B64c433:L64c433:{c.instructions+=2;NFSU2_TR(0x64c433);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64c435:{NFSU2_TR(0x64c435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c44a;}}
}
B64c437:L64c437:{c.instructions+=2;NFSU2_TR(0x64c437);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c43a:{NFSU2_TR(0x64c43a);
if(r1(R+518)){{goto L64c4c2;}}
}
B64c440:L64c440:{c.instructions+=2;NFSU2_TR(0x64c440);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c443:{NFSU2_TR(0x64c443);
if(r1(R+518)){{goto L64c4b0;}}
}
B64c445:L64c445:{c.instructions+=2;NFSU2_TR(0x64c445);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c448:{NFSU2_TR(0x64c448);
if(r1(R+518)){{goto L64c45e;}}
}
B64c44a:L64c44a:{c.instructions+=3;NFSU2_TR(0x64c44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c44d:{NFSU2_TR(0x64c44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c44f:{NFSU2_TR(0x64c44f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c3eau);}goto L64c3ea;}}
}
B64c451:L64c451:{c.instructions+=1;NFSU2_TR(0x64c451);
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
B64c453:L64c453:{c.instructions+=2;NFSU2_TR(0x64c453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c454:{NFSU2_TR(0x64c454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64c455:L64c455:{c.instructions+=3;NFSU2_TR(0x64c455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c456:{NFSU2_TR(0x64c456);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64c457:{NFSU2_TR(0x64c457);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c45a:L64c45a:{c.instructions+=2;NFSU2_TR(0x64c45a);
__builtin_memmove((R+0),(R+24),4);
}
B64c45c:{NFSU2_TR(0x64c45c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c453u);}goto L64c453;}
}
B64c45e:L64c45e:{c.instructions+=4;NFSU2_TR(0x64c45e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c45f:{NFSU2_TR(0x64c45f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64c461:{NFSU2_TR(0x64c461);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B64c463:{NFSU2_TR(0x64c463);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c465:L64c465:{c.instructions+=2;NFSU2_TR(0x64c465);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64c467:{NFSU2_TR(0x64c467);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c469:L64c469:{c.instructions+=2;NFSU2_TR(0x64c469);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c46a:{NFSU2_TR(0x64c46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c46full));
TAIL_STATIC(0x75d65bu,75d);
}
B64c46f:L64c46f:{c.instructions+=3;NFSU2_TR(0x64c46f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64c472:{NFSU2_TR(0x64c472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c473:{NFSU2_TR(0x64c473);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c475:L64c475:{c.instructions+=1;NFSU2_TR(0x64c475);
{goto L64c47d;}
}
B64c477:L64c477:{c.instructions+=2;NFSU2_TR(0x64c477);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c47a:{NFSU2_TR(0x64c47a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64c484;}}
}
B64c47c:L64c47c:{c.instructions+=1;NFSU2_TR(0x64c47c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c47d:L64c47d:{c.instructions+=3;NFSU2_TR(0x64c47d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64c47f:{NFSU2_TR(0x64c47f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B64c482:{NFSU2_TR(0x64c482);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c477u);}goto L64c477;}}
}
B64c484:L64c484:{c.instructions+=2;NFSU2_TR(0x64c484);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64c487:{NFSU2_TR(0x64c487);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c489:L64c489:{c.instructions+=7;NFSU2_TR(0x64c489);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c48c:{NFSU2_TR(0x64c48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c48f:{NFSU2_TR(0x64c48f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c490:{NFSU2_TR(0x64c490);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c492:{NFSU2_TR(0x64c492);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c493:{NFSU2_TR(0x64c493);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c494:{NFSU2_TR(0x64c494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c499ull));
TAIL_STATIC(0x64a4c7u,64a);
}
B64c499:L64c499:{c.instructions+=2;NFSU2_TR(0x64c499);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c49b:{NFSU2_TR(0x64c49b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c49d:L64c49d:{c.instructions+=3;NFSU2_TR(0x64c49d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64c49f:{NFSU2_TR(0x64c49f);
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
B64c4a1:{NFSU2_TR(0x64c4a1);
if(r1(R+518)){{goto L64c4da;}}
}
B64c4a3:L64c4a3:{c.instructions+=2;NFSU2_TR(0x64c4a3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64c4a6:{NFSU2_TR(0x64c4a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c4a8:L64c4a8:{c.instructions+=5;NFSU2_TR(0x64c4a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c4ab:{NFSU2_TR(0x64c4ab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c4ac:{NFSU2_TR(0x64c4ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4ad:{NFSU2_TR(0x64c4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4ae:{NFSU2_TR(0x64c4ae);
{goto L64c4ca;}
}
B64c4b0:L64c4b0:{c.instructions+=7;NFSU2_TR(0x64c4b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c4b3:{NFSU2_TR(0x64c4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c4b6:{NFSU2_TR(0x64c4b6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c4b7:{NFSU2_TR(0x64c4b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4b8:{NFSU2_TR(0x64c4b8);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c4ba:{NFSU2_TR(0x64c4ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4bb:{NFSU2_TR(0x64c4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c4c0ull));
TAIL_STATIC(0x64a67bu,64a);
}
B64c4c0:L64c4c0:{c.instructions+=1;NFSU2_TR(0x64c4c0);
{goto L64c4d2;}
}
B64c4c2:L64c4c2:{c.instructions+=5;NFSU2_TR(0x64c4c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c4c5:{NFSU2_TR(0x64c4c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64c4c6:{NFSU2_TR(0x64c4c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4c7:{NFSU2_TR(0x64c4c7);
w4(R+24,u32(~u32(r4(R+24))));
}
B64c4c9:{NFSU2_TR(0x64c4c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4ca:L64c4ca:{c.instructions+=2;NFSU2_TR(0x64c4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c4cd:{NFSU2_TR(0x64c4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c4d2ull));
TAIL_STATIC(0x64bed4u,64b);
}
B64c4d2:L64c4d2:{c.instructions+=2;NFSU2_TR(0x64c4d2);
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
B64c4d4:{NFSU2_TR(0x64c4d4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c451u);}goto L64c451;}}
}
B64c4da:L64c4da:{c.instructions+=2;NFSU2_TR(0x64c4da);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c4dc:{NFSU2_TR(0x64c4dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c453u);}goto L64c453;}
}
B64c4e1:L64c4e1:{c.instructions+=9;NFSU2_TR(0x64c4e1);
__builtin_memmove((R+28),(R+28),4);
}
B64c4e3:{NFSU2_TR(0x64c4e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4e4:{NFSU2_TR(0x64c4e4);
__builtin_memmove((R+20),(R+16),4);
}
B64c4e6:{NFSU2_TR(0x64c4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4e7:{NFSU2_TR(0x64c4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c4eb:{NFSU2_TR(0x64c4eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c4ec:{NFSU2_TR(0x64c4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c4ef:{NFSU2_TR(0x64c4ef);
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
B64c4f1:{NFSU2_TR(0x64c4f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c4ff;}}
}
B64c4f3:L64c4f3:{c.instructions+=2;NFSU2_TR(0x64c4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64c4fa:{NFSU2_TR(0x64c4fa);
{goto L64c605;}
}
B64c4ff:L64c4ff:{c.instructions+=7;NFSU2_TR(0x64c4ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c500:{NFSU2_TR(0x64c500);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c501:{NFSU2_TR(0x64c501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c504:{NFSU2_TR(0x64c504);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c506:{NFSU2_TR(0x64c506);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c509:{NFSU2_TR(0x64c509);
__builtin_memmove((R+4),(R+28),4);
}
B64c50b:{NFSU2_TR(0x64c50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c510ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c510:L64c510:{c.instructions+=3;NFSU2_TR(0x64c510);
__builtin_memmove((R+12),(R+0),4);
}
B64c512:{NFSU2_TR(0x64c512);
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
B64c514:{NFSU2_TR(0x64c514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c522;}}
}
B64c516:L64c516:{c.instructions+=2;NFSU2_TR(0x64c516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64c51d:{NFSU2_TR(0x64c51d);
{goto L64c603;}
}
B64c522:L64c522:{c.instructions+=8;NFSU2_TR(0x64c522);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c525:{NFSU2_TR(0x64c525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c528:{NFSU2_TR(0x64c528);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B64c52e:{NFSU2_TR(0x64c52e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c530:{NFSU2_TR(0x64c530);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B64c533:{NFSU2_TR(0x64c533);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c535:{NFSU2_TR(0x64c535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c536:{NFSU2_TR(0x64c536);
__builtin_memmove((R+28),(R+24),4);
}
B64c538:L64c538:{c.instructions+=1;NFSU2_TR(0x64c538);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64c53a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c538u);}goto L64c538;}
}
B64c53a:L64c53a:{c.instructions+=6;NFSU2_TR(0x64c53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c53d:{NFSU2_TR(0x64c53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c540:{NFSU2_TR(0x64c540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c546:{NFSU2_TR(0x64c546);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B64c548:{NFSU2_TR(0x64c548);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64c54b:{NFSU2_TR(0x64c54b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c551;}}
}
B64c54d:L64c54d:{c.instructions+=2;NFSU2_TR(0x64c54d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c54f:{NFSU2_TR(0x64c54f);
{goto L64c554;}
}
B64c551:L64c551:{c.instructions+=1;NFSU2_TR(0x64c551);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64c554:L64c554:{c.instructions+=7;NFSU2_TR(0x64c554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64c556:{NFSU2_TR(0x64c556);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c55c:{NFSU2_TR(0x64c55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c55f:{NFSU2_TR(0x64c55f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B64c561:{NFSU2_TR(0x64c561);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64c563:{NFSU2_TR(0x64c563);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64c565:{NFSU2_TR(0x64c565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c56b;}}
}
B64c567:L64c567:{c.instructions+=2;NFSU2_TR(0x64c567);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c569:{NFSU2_TR(0x64c569);
{goto L64c56e;}
}
B64c56b:L64c56b:{c.instructions+=1;NFSU2_TR(0x64c56b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64c56e:L64c56e:{c.instructions+=7;NFSU2_TR(0x64c56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c571:{NFSU2_TR(0x64c571);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c574:{NFSU2_TR(0x64c574);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c577:{NFSU2_TR(0x64c577);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c57a:{NFSU2_TR(0x64c57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c57d:{NFSU2_TR(0x64c57d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c57f:{NFSU2_TR(0x64c57f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c586;}}
}
B64c581:L64c581:{c.instructions+=3;NFSU2_TR(0x64c581);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c583:{NFSU2_TR(0x64c583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64c584:{NFSU2_TR(0x64c584);
{goto L64c58f;}
}
B64c586:L64c586:{c.instructions+=2;NFSU2_TR(0x64c586);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c58c:{NFSU2_TR(0x64c58c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B64c58f:L64c58f:{c.instructions+=7;NFSU2_TR(0x64c58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c592:{NFSU2_TR(0x64c592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64c594:{NFSU2_TR(0x64c594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c597:{NFSU2_TR(0x64c597);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c59a:{NFSU2_TR(0x64c59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c59d:{NFSU2_TR(0x64c59d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c5a1:{NFSU2_TR(0x64c5a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c5a8;}}
}
B64c5a3:L64c5a3:{c.instructions+=2;NFSU2_TR(0x64c5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5a6:{NFSU2_TR(0x64c5a6);
{goto L64c5aa;}
}
B64c5a8:L64c5a8:{c.instructions+=1;NFSU2_TR(0x64c5a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c5aa:L64c5aa:{c.instructions+=4;NFSU2_TR(0x64c5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5ad:{NFSU2_TR(0x64c5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5b0:{NFSU2_TR(0x64c5b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c5b3:{NFSU2_TR(0x64c5b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c5c4;}}
}
B64c5b5:L64c5b5:{c.instructions+=2;NFSU2_TR(0x64c5b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c5b9:{NFSU2_TR(0x64c5b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c5c4;}}
}
B64c5bb:L64c5bb:{c.instructions+=3;NFSU2_TR(0x64c5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5be:{NFSU2_TR(0x64c5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5c1:{NFSU2_TR(0x64c5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5c4:L64c5c4:{c.instructions+=3;NFSU2_TR(0x64c5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5c7:{NFSU2_TR(0x64c5c7);
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
B64c5c8:{NFSU2_TR(0x64c5c8);
if(r1(R+518)){{goto L64c5f3;}}
}
B64c5ca:L64c5ca:{c.instructions+=2;NFSU2_TR(0x64c5ca);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64c5cd:{NFSU2_TR(0x64c5cd);
if(r1(R+518)){{goto L64c5e8;}}
}
B64c5cf:L64c5cf:{c.instructions+=2;NFSU2_TR(0x64c5cf);
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
B64c5d0:{NFSU2_TR(0x64c5d0);
if(r1(R+518)){{goto L64c5e0;}}
}
B64c5d2:L64c5d2:{c.instructions+=5;NFSU2_TR(0x64c5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5d5:{NFSU2_TR(0x64c5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5d8:{NFSU2_TR(0x64c5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5db:{NFSU2_TR(0x64c5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5de:{NFSU2_TR(0x64c5de);
{goto L64c600;}
}
B64c5e0:L64c5e0:{c.instructions+=3;NFSU2_TR(0x64c5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c5e3:{NFSU2_TR(0x64c5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5e6:{NFSU2_TR(0x64c5e6);
{goto L64c5eb;}
}
B64c5e8:L64c5e8:{c.instructions+=1;NFSU2_TR(0x64c5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5eb:L64c5eb:{c.instructions+=3;NFSU2_TR(0x64c5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5ee:{NFSU2_TR(0x64c5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5f1:{NFSU2_TR(0x64c5f1);
{goto L64c603;}
}
B64c5f3:L64c5f3:{c.instructions+=3;NFSU2_TR(0x64c5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c5f6:{NFSU2_TR(0x64c5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64c5fd:{NFSU2_TR(0x64c5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c600:L64c600:{c.instructions+=1;NFSU2_TR(0x64c600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c603:L64c603:{c.instructions+=2;NFSU2_TR(0x64c603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c604:{NFSU2_TR(0x64c604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64c605:L64c605:{c.instructions+=4;NFSU2_TR(0x64c605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c608:{NFSU2_TR(0x64c608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c609:{NFSU2_TR(0x64c609);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64c60a:{NFSU2_TR(0x64c60a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c60d:L64c60d:{c.instructions+=5;NFSU2_TR(0x64c60d);
__builtin_memmove((R+28),(R+28),4);
}
B64c60f:{NFSU2_TR(0x64c60f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c610:{NFSU2_TR(0x64c610);
__builtin_memmove((R+20),(R+16),4);
}
B64c612:{NFSU2_TR(0x64c612);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c616:{NFSU2_TR(0x64c616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c640;}}
}
B64c618:L64c618:{c.instructions+=5;NFSU2_TR(0x64c618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c61b:{NFSU2_TR(0x64c61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c621:{NFSU2_TR(0x64c621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c624:{NFSU2_TR(0x64c624);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64c626:{NFSU2_TR(0x64c626);
if(r1(R+512)){{goto L64c62c;}}
}
B64c628:L64c628:{c.instructions+=2;NFSU2_TR(0x64c628);
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
B64c62a:{NFSU2_TR(0x64c62a);
{goto L64c6a4;}
}
B64c62c:L64c62c:{c.instructions+=2;NFSU2_TR(0x64c62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c632:{NFSU2_TR(0x64c632);
{goto L64c637;}
}
B64c634:L64c634:{c.instructions+=1;NFSU2_TR(0x64c634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c637:L64c637:{c.instructions+=3;NFSU2_TR(0x64c637);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64c638:{NFSU2_TR(0x64c638);
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
B64c63a:{NFSU2_TR(0x64c63a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c634u);}goto L64c634;}}
}
B64c63c:L64c63c:{c.instructions+=2;NFSU2_TR(0x64c63c);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c63e:{NFSU2_TR(0x64c63e);
{goto L64c6a4;}
}
B64c640:L64c640:{c.instructions+=7;NFSU2_TR(0x64c640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c641:{NFSU2_TR(0x64c641);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c642:{NFSU2_TR(0x64c642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c645:{NFSU2_TR(0x64c645);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c647:{NFSU2_TR(0x64c647);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c64a:{NFSU2_TR(0x64c64a);
__builtin_memmove((R+4),(R+28),4);
}
B64c64c:{NFSU2_TR(0x64c64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c651ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c651:L64c651:{c.instructions+=3;NFSU2_TR(0x64c651);
__builtin_memmove((R+24),(R+0),4);
}
B64c653:{NFSU2_TR(0x64c653);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c655:{NFSU2_TR(0x64c655);
if(r1(R+518)){{goto L64c693;}}
}
B64c657:L64c657:{c.instructions+=6;NFSU2_TR(0x64c657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c65a:{NFSU2_TR(0x64c65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c65d:{NFSU2_TR(0x64c65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c663:{NFSU2_TR(0x64c663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c666:{NFSU2_TR(0x64c666);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c66a:{NFSU2_TR(0x64c66a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c693;}}
}
B64c66c:L64c66c:{c.instructions+=2;NFSU2_TR(0x64c66c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c670:{NFSU2_TR(0x64c670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c678;}}
}
B64c672:L64c672:{c.instructions+=2;NFSU2_TR(0x64c672);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c676:{NFSU2_TR(0x64c676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c693;}}
}
B64c678:L64c678:{c.instructions+=3;NFSU2_TR(0x64c678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c67b:{NFSU2_TR(0x64c67b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B64c67e:{NFSU2_TR(0x64c67e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64c693;}}
}
B64c680:L64c680:{c.instructions+=2;NFSU2_TR(0x64c680);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c684:{NFSU2_TR(0x64c684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c697;}}
}
B64c686:L64c686:{c.instructions+=4;NFSU2_TR(0x64c686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c687:{NFSU2_TR(0x64c687);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c688:{NFSU2_TR(0x64c688);
__builtin_memmove((R+4),(R+28),4);
}
B64c68a:{NFSU2_TR(0x64c68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c68full));
TAIL_STATIC(0x64bdf5u,64b);
}
B64c68f:L64c68f:{c.instructions+=2;NFSU2_TR(0x64c68f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64c691:{NFSU2_TR(0x64c691);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64c697;}}
}
B64c693:L64c693:{c.instructions+=2;NFSU2_TR(0x64c693);
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
B64c695:{NFSU2_TR(0x64c695);
{goto L64c6a2;}
}
B64c697:L64c697:{c.instructions+=4;NFSU2_TR(0x64c697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c69a:{NFSU2_TR(0x64c69a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64c69d:{NFSU2_TR(0x64c69d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B64c6a0:{NFSU2_TR(0x64c6a0);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c6a2:L64c6a2:{c.instructions+=2;NFSU2_TR(0x64c6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c6a3:{NFSU2_TR(0x64c6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c6a4:L64c6a4:{c.instructions+=2;NFSU2_TR(0x64c6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c6a5:{NFSU2_TR(0x64c6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c6a8:L64c6a8:{c.instructions+=10;NFSU2_TR(0x64c6a8);
__builtin_memmove((R+28),(R+28),4);
}
B64c6aa:{NFSU2_TR(0x64c6aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c6ab:{NFSU2_TR(0x64c6ab);
__builtin_memmove((R+20),(R+16),4);
}
B64c6ad:{NFSU2_TR(0x64c6ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c6ae:{NFSU2_TR(0x64c6ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c6af:{NFSU2_TR(0x64c6af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64c6b1:{NFSU2_TR(0x64c6b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c6b4:{NFSU2_TR(0x64c6b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c6b5:{NFSU2_TR(0x64c6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c6b8:{NFSU2_TR(0x64c6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c718;}}
}
B64c6ba:L64c6ba:{c.instructions+=3;NFSU2_TR(0x64c6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c6c0:{NFSU2_TR(0x64c6c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c6c2:{NFSU2_TR(0x64c6c2);
if(r1(R+518)){{goto L64c7ca;}}
}
B64c6c8:L64c6c8:{c.instructions+=8;NFSU2_TR(0x64c6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c6cb:{NFSU2_TR(0x64c6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c6ce:{NFSU2_TR(0x64c6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c6d1:{NFSU2_TR(0x64c6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c6d7:{NFSU2_TR(0x64c6d7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B64c6d9:{NFSU2_TR(0x64c6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c6dc:{NFSU2_TR(0x64c6dc);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64c6df:{NFSU2_TR(0x64c6df);
if(r1(R+518)){{goto L64c6fd;}}
}
B64c6e1:L64c6e1:{c.instructions+=3;NFSU2_TR(0x64c6e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64c6e5:{NFSU2_TR(0x64c6e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c6e7:{NFSU2_TR(0x64c6e7);
if(r1(R+518)){{goto L64c6fd;}}
}
B64c6e9:L64c6e9:{c.instructions+=2;NFSU2_TR(0x64c6e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64c6ec:{NFSU2_TR(0x64c6ec);
if(r1(R+518)){{goto L64c702;}}
}
B64c6ee:L64c6ee:{c.instructions+=3;NFSU2_TR(0x64c6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c6f1:{NFSU2_TR(0x64c6f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c6f2:{NFSU2_TR(0x64c6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c6f7ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B64c6f7:L64c6f7:{c.instructions+=4;NFSU2_TR(0x64c6f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c6f8:{NFSU2_TR(0x64c6f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c6f9:{NFSU2_TR(0x64c6f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c6fb:{NFSU2_TR(0x64c6fb);
{goto L64c700;}
}
B64c6fd:L64c6fd:{c.instructions+=1;NFSU2_TR(0x64c6fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c700:L64c700:{c.instructions+=1;NFSU2_TR(0x64c700);
if(r1(R+518)){{goto L64c709;}}
}
B64c702:L64c702:{c.instructions+=3;NFSU2_TR(0x64c702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c705:{NFSU2_TR(0x64c705);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c707:{NFSU2_TR(0x64c707);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c6c8u);}goto L64c6c8;}}
}
B64c709:L64c709:{c.instructions+=2;NFSU2_TR(0x64c709);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B64c70b:{NFSU2_TR(0x64c70b);
if(r1(R+518)){{goto L64c7ca;}}
}
B64c711:L64c711:{c.instructions+=2;NFSU2_TR(0x64c711);
__builtin_memmove((R+0),(R+24),4);
}
B64c713:{NFSU2_TR(0x64c713);
{goto L64c7d4;}
}
B64c718:L64c718:{c.instructions+=4;NFSU2_TR(0x64c718);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c71a:{NFSU2_TR(0x64c71a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c71d:{NFSU2_TR(0x64c71d);
__builtin_memmove((R+4),(R+28),4);
}
B64c71f:{NFSU2_TR(0x64c71f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c724ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c724:L64c724:{c.instructions+=3;NFSU2_TR(0x64c724);
__builtin_memmove((R+24),(R+0),4);
}
B64c726:{NFSU2_TR(0x64c726);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c728:{NFSU2_TR(0x64c728);
if(r1(R+518)){{goto L64c7ca;}}
}
B64c72e:L64c72e:{c.instructions+=6;NFSU2_TR(0x64c72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c731:{NFSU2_TR(0x64c731);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c734:{NFSU2_TR(0x64c734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c737:{NFSU2_TR(0x64c737);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c73d:{NFSU2_TR(0x64c73d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c741:{NFSU2_TR(0x64c741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c7ca;}}
}
B64c747:L64c747:{c.instructions+=2;NFSU2_TR(0x64c747);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c74b:{NFSU2_TR(0x64c74b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c752;}}
}
B64c74d:L64c74d:{c.instructions+=2;NFSU2_TR(0x64c74d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c750:{NFSU2_TR(0x64c750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c7ca;}}
}
B64c752:L64c752:{c.instructions+=4;NFSU2_TR(0x64c752);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c755:{NFSU2_TR(0x64c755);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c758:{NFSU2_TR(0x64c758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c75b:{NFSU2_TR(0x64c75b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c76a;}}
}
B64c75d:L64c75d:{c.instructions+=4;NFSU2_TR(0x64c75d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c75e:{NFSU2_TR(0x64c75e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c75f:{NFSU2_TR(0x64c75f);
__builtin_memmove((R+4),(R+28),4);
}
B64c761:{NFSU2_TR(0x64c761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c766ull));
TAIL_STATIC(0x64bdf5u,64b);
}
B64c766:L64c766:{c.instructions+=2;NFSU2_TR(0x64c766);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64c768:{NFSU2_TR(0x64c768);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64c7ca;}}
}
B64c76a:L64c76a:{c.instructions+=3;NFSU2_TR(0x64c76a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c76d:{NFSU2_TR(0x64c76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c770:{NFSU2_TR(0x64c770);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64c7c2;}}
}
B64c772:L64c772:{c.instructions+=11;NFSU2_TR(0x64c772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c775:{NFSU2_TR(0x64c775);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c77b:{NFSU2_TR(0x64c77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B64c77e:{NFSU2_TR(0x64c77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c781:{NFSU2_TR(0x64c781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c784:{NFSU2_TR(0x64c784);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64c787:{NFSU2_TR(0x64c787);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64c789:{NFSU2_TR(0x64c789);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B64c78b:{NFSU2_TR(0x64c78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c78e:{NFSU2_TR(0x64c78e);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64c791:{NFSU2_TR(0x64c791);
if(r1(R+518)){{goto L64c7af;}}
}
B64c793:L64c793:{c.instructions+=3;NFSU2_TR(0x64c793);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64c797:{NFSU2_TR(0x64c797);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c799:{NFSU2_TR(0x64c799);
if(r1(R+518)){{goto L64c7af;}}
}
B64c79b:L64c79b:{c.instructions+=2;NFSU2_TR(0x64c79b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64c79e:{NFSU2_TR(0x64c79e);
if(r1(R+518)){{goto L64c7b4;}}
}
B64c7a0:L64c7a0:{c.instructions+=3;NFSU2_TR(0x64c7a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c7a3:{NFSU2_TR(0x64c7a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c7a4:{NFSU2_TR(0x64c7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c7a9ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B64c7a9:L64c7a9:{c.instructions+=4;NFSU2_TR(0x64c7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c7aa:{NFSU2_TR(0x64c7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c7ab:{NFSU2_TR(0x64c7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c7ad:{NFSU2_TR(0x64c7ad);
{goto L64c7b2;}
}
B64c7af:L64c7af:{c.instructions+=1;NFSU2_TR(0x64c7af);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c7b2:L64c7b2:{c.instructions+=1;NFSU2_TR(0x64c7b2);
if(r1(R+518)){{goto L64c7c2;}}
}
B64c7b4:L64c7b4:{c.instructions+=5;NFSU2_TR(0x64c7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c7b7:{NFSU2_TR(0x64c7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c7ba:{NFSU2_TR(0x64c7ba);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B64c7bd:{NFSU2_TR(0x64c7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64c7c0:{NFSU2_TR(0x64c7c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c772u);}goto L64c772;}}
}
B64c7c2:L64c7c2:{c.instructions+=3;NFSU2_TR(0x64c7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64c7c5:{NFSU2_TR(0x64c7c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c7c8:{NFSU2_TR(0x64c7c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c7ce;}}
}
B64c7ca:L64c7ca:{c.instructions+=2;NFSU2_TR(0x64c7ca);
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
B64c7cc:{NFSU2_TR(0x64c7cc);
{goto L64c7d6;}
}
B64c7ce:L64c7ce:{c.instructions+=2;NFSU2_TR(0x64c7ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64c7d1:{NFSU2_TR(0x64c7d1);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B64c7d4:L64c7d4:{c.instructions+=1;NFSU2_TR(0x64c7d4);
w4(R+0,u32(~u32(r4(R+0))));
}
B64c7d6:L64c7d6:{c.instructions+=5;NFSU2_TR(0x64c7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c7d7:{NFSU2_TR(0x64c7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c7d8:{NFSU2_TR(0x64c7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64c7d9:{NFSU2_TR(0x64c7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c7da:{NFSU2_TR(0x64c7da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c7dd:L64c7dd:{c.instructions+=8;NFSU2_TR(0x64c7dd);
__builtin_memmove((R+28),(R+28),4);
}
B64c7df:{NFSU2_TR(0x64c7df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c7e0:{NFSU2_TR(0x64c7e0);
__builtin_memmove((R+20),(R+16),4);
}
B64c7e2:{NFSU2_TR(0x64c7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c7e5:{NFSU2_TR(0x64c7e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c7e7:{NFSU2_TR(0x64c7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c7ea:{NFSU2_TR(0x64c7ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c7ed:{NFSU2_TR(0x64c7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c7f2ull));
TAIL_STATIC(0x64bed4u,64b);
}
B64c7f2:L64c7f2:{c.instructions+=2;NFSU2_TR(0x64c7f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c7f3:{NFSU2_TR(0x64c7f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c7f6:L64c7f6:{c.instructions+=7;NFSU2_TR(0x64c7f6);
__builtin_memmove((R+28),(R+28),4);
}
B64c7f8:{NFSU2_TR(0x64c7f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c7f9:{NFSU2_TR(0x64c7f9);
__builtin_memmove((R+20),(R+16),4);
}
B64c7fb:{NFSU2_TR(0x64c7fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c7fc:{NFSU2_TR(0x64c7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c7ff:{NFSU2_TR(0x64c7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c801:{NFSU2_TR(0x64c801);
if(r1(R+518)){{goto L64c810;}}
}
B64c803:L64c803:{c.instructions+=2;NFSU2_TR(0x64c803);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64c807:{NFSU2_TR(0x64c807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c810;}}
}
B64c809:L64c809:{c.instructions+=2;NFSU2_TR(0x64c809);
w4(R+0,u32(0x8876086cull));
}
B64c80e:{NFSU2_TR(0x64c80e);
{goto L64c85d;}
}
B64c810:L64c810:{c.instructions+=6;NFSU2_TR(0x64c810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c811:{NFSU2_TR(0x64c811);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c814:{NFSU2_TR(0x64c814);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c816:{NFSU2_TR(0x64c816);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c819:{NFSU2_TR(0x64c819);
__builtin_memmove((R+4),(R+24),4);
}
B64c81b:{NFSU2_TR(0x64c81b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c820ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c820:L64c820:{c.instructions+=2;NFSU2_TR(0x64c820);
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
B64c822:{NFSU2_TR(0x64c822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c82b;}}
}
B64c824:L64c824:{c.instructions+=2;NFSU2_TR(0x64c824);
w4(R+0,u32(0x8876086cull));
}
B64c829:{NFSU2_TR(0x64c829);
{goto L64c85c;}
}
B64c82b:L64c82b:{c.instructions+=2;NFSU2_TR(0x64c82b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c82e:{NFSU2_TR(0x64c82e);
if(r1(R+518)){{goto L64c835;}}
}
B64c830:L64c830:{c.instructions+=2;NFSU2_TR(0x64c830);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B64c833:{NFSU2_TR(0x64c833);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c824u);}goto L64c824;}}
}
B64c835:L64c835:{c.instructions+=13;NFSU2_TR(0x64c835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c838:{NFSU2_TR(0x64c838);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c83b:{NFSU2_TR(0x64c83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c841:{NFSU2_TR(0x64c841);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64c843:{NFSU2_TR(0x64c843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c846:{NFSU2_TR(0x64c846);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c84a:{NFSU2_TR(0x64c84a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64c84d:{NFSU2_TR(0x64c84d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c84e:{NFSU2_TR(0x64c84e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c851:{NFSU2_TR(0x64c851);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c854:{NFSU2_TR(0x64c854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c855:{NFSU2_TR(0x64c855);
__builtin_memmove((R+4),(R+24),4);
}
B64c857:{NFSU2_TR(0x64c857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c85cull));
TAIL_STATIC(0x64b401u,64b);
}
B64c85c:L64c85c:{c.instructions+=1;NFSU2_TR(0x64c85c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c85d:L64c85d:{c.instructions+=3;NFSU2_TR(0x64c85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c85e:{NFSU2_TR(0x64c85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c85f:{NFSU2_TR(0x64c85f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c862:L64c862:{c.instructions+=7;NFSU2_TR(0x64c862);
__builtin_memmove((R+28),(R+28),4);
}
B64c864:{NFSU2_TR(0x64c864);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c865:{NFSU2_TR(0x64c865);
__builtin_memmove((R+20),(R+16),4);
}
B64c867:{NFSU2_TR(0x64c867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c868:{NFSU2_TR(0x64c868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c86b:{NFSU2_TR(0x64c86b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c86d:{NFSU2_TR(0x64c86d);
if(r1(R+518)){{goto L64c87c;}}
}
B64c86f:L64c86f:{c.instructions+=2;NFSU2_TR(0x64c86f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B64c873:{NFSU2_TR(0x64c873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c87c;}}
}
B64c875:L64c875:{c.instructions+=2;NFSU2_TR(0x64c875);
w4(R+0,u32(0x8876086cull));
}
B64c87a:{NFSU2_TR(0x64c87a);
{goto L64c8c7;}
}
B64c87c:L64c87c:{c.instructions+=6;NFSU2_TR(0x64c87c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c87d:{NFSU2_TR(0x64c87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c880:{NFSU2_TR(0x64c880);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c882:{NFSU2_TR(0x64c882);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c885:{NFSU2_TR(0x64c885);
__builtin_memmove((R+4),(R+24),4);
}
B64c887:{NFSU2_TR(0x64c887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c88cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c88c:L64c88c:{c.instructions+=2;NFSU2_TR(0x64c88c);
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
B64c88e:{NFSU2_TR(0x64c88e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c897;}}
}
B64c890:L64c890:{c.instructions+=2;NFSU2_TR(0x64c890);
w4(R+0,u32(0x8876086cull));
}
B64c895:{NFSU2_TR(0x64c895);
{goto L64c8c6;}
}
B64c897:L64c897:{c.instructions+=2;NFSU2_TR(0x64c897);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c89a:{NFSU2_TR(0x64c89a);
if(r1(R+518)){{goto L64c8a1;}}
}
B64c89c:L64c89c:{c.instructions+=2;NFSU2_TR(0x64c89c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B64c89f:{NFSU2_TR(0x64c89f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c890u);}goto L64c890;}}
}
B64c8a1:L64c8a1:{c.instructions+=12;NFSU2_TR(0x64c8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c8a4:{NFSU2_TR(0x64c8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c8a7:{NFSU2_TR(0x64c8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c8ad:{NFSU2_TR(0x64c8ad);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64c8af:{NFSU2_TR(0x64c8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c8b2:{NFSU2_TR(0x64c8b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c8b6:{NFSU2_TR(0x64c8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B64c8b9:{NFSU2_TR(0x64c8b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8ba:{NFSU2_TR(0x64c8ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c8bd:{NFSU2_TR(0x64c8bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c8c0:{NFSU2_TR(0x64c8c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8c1:{NFSU2_TR(0x64c8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c8c6ull));
TAIL_STATIC(0x64b5dau,64b);
}
B64c8c6:L64c8c6:{c.instructions+=1;NFSU2_TR(0x64c8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64c8c7:L64c8c7:{c.instructions+=3;NFSU2_TR(0x64c8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64c8c8:{NFSU2_TR(0x64c8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64c8c9:{NFSU2_TR(0x64c8c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64c8cc:L64c8cc:{c.instructions+=8;NFSU2_TR(0x64c8cc);
__builtin_memmove((R+28),(R+28),4);
}
B64c8ce:{NFSU2_TR(0x64c8ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8cf:{NFSU2_TR(0x64c8cf);
__builtin_memmove((R+20),(R+16),4);
}
B64c8d1:{NFSU2_TR(0x64c8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64c8d4:{NFSU2_TR(0x64c8d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8d5:{NFSU2_TR(0x64c8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c8d8:{NFSU2_TR(0x64c8d8);
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
B64c8da:{NFSU2_TR(0x64c8da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c8e6;}}
}
B64c8dc:L64c8dc:{c.instructions+=2;NFSU2_TR(0x64c8dc);
w4(R+0,u32(0x8876086cull));
}
B64c8e1:{NFSU2_TR(0x64c8e1);
{goto L64ca99;}
}
B64c8e6:L64c8e6:{c.instructions+=9;NFSU2_TR(0x64c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8e7:{NFSU2_TR(0x64c8e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8e8:{NFSU2_TR(0x64c8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c8eb:{NFSU2_TR(0x64c8eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64c8ed:{NFSU2_TR(0x64c8ed);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c8ee:{NFSU2_TR(0x64c8ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c8ef:{NFSU2_TR(0x64c8ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64c8f2:{NFSU2_TR(0x64c8f2);
__builtin_memmove((R+4),(R+24),4);
}
B64c8f4:{NFSU2_TR(0x64c8f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c8f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64c8f9:L64c8f9:{c.instructions+=2;NFSU2_TR(0x64c8f9);
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
B64c8fb:{NFSU2_TR(0x64c8fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64c907;}}
}
B64c8fd:L64c8fd:{c.instructions+=2;NFSU2_TR(0x64c8fd);
w4(R+0,u32(0x8876086cull));
}
B64c902:{NFSU2_TR(0x64c902);
{goto L64ca97;}
}
B64c907:L64c907:{c.instructions+=6;NFSU2_TR(0x64c907);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c90a:{NFSU2_TR(0x64c90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c90d:{NFSU2_TR(0x64c90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c913:{NFSU2_TR(0x64c913);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64c916:{NFSU2_TR(0x64c916);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c91a:{NFSU2_TR(0x64c91a);
if(r1(R+518)){{goto L64c922;}}
}
B64c91c:L64c91c:{c.instructions+=2;NFSU2_TR(0x64c91c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64c920:{NFSU2_TR(0x64c920);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c8fdu);}goto L64c8fd;}}
}
B64c922:L64c922:{c.instructions+=4;NFSU2_TR(0x64c922);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c925:{NFSU2_TR(0x64c925);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64c926:{NFSU2_TR(0x64c926);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64c927:{NFSU2_TR(0x64c927);
if(r1(R+518)){{goto L64c9ea;}}
}
B64c92d:L64c92d:{c.instructions+=2;NFSU2_TR(0x64c92d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64c92e:{NFSU2_TR(0x64c92e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c8fdu);}goto L64c8fd;}}
}
B64c930:L64c930:{c.instructions+=13;NFSU2_TR(0x64c930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c933:{NFSU2_TR(0x64c933);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c936:{NFSU2_TR(0x64c936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c939:{NFSU2_TR(0x64c939);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c93c:{NFSU2_TR(0x64c93c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c93e:{NFSU2_TR(0x64c93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c93f:{NFSU2_TR(0x64c93f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c941:{NFSU2_TR(0x64c941);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c943:{NFSU2_TR(0x64c943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c946:{NFSU2_TR(0x64c946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c949:{NFSU2_TR(0x64c949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c94c:{NFSU2_TR(0x64c94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c94f:{NFSU2_TR(0x64c94f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64c954;}}
}
B64c951:L64c951:{c.instructions+=1;NFSU2_TR(0x64c951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c954:L64c954:{c.instructions+=3;NFSU2_TR(0x64c954);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c956:{NFSU2_TR(0x64c956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c959:{NFSU2_TR(0x64c959);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64c95e;}}
}
B64c95b:L64c95b:{c.instructions+=1;NFSU2_TR(0x64c95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c95e:L64c95e:{c.instructions+=3;NFSU2_TR(0x64c95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c962:{NFSU2_TR(0x64c962);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c966:{NFSU2_TR(0x64c966);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64c9bb;}}
}
B64c968:L64c968:{c.instructions+=2;NFSU2_TR(0x64c968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c96b:{NFSU2_TR(0x64c96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c96e:L64c96e:{c.instructions+=3;NFSU2_TR(0x64c96e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64c970:{NFSU2_TR(0x64c970);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64c973:{NFSU2_TR(0x64c973);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64c99e;}}
}
B64c975:L64c975:{c.instructions+=1;NFSU2_TR(0x64c975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c978:L64c978:{c.instructions+=5;NFSU2_TR(0x64c978);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64c97a:{NFSU2_TR(0x64c97a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c97b:{NFSU2_TR(0x64c97b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64c97e:{NFSU2_TR(0x64c97e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c97f:{NFSU2_TR(0x64c97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64c984ull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64c984:L64c984:{c.instructions+=2;NFSU2_TR(0x64c984);
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
B64c986:{NFSU2_TR(0x64c986);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ca97;}}
}
B64c98c:L64c98c:{c.instructions+=5;NFSU2_TR(0x64c98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c98f:{NFSU2_TR(0x64c98f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64c990:{NFSU2_TR(0x64c990);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64c993:{NFSU2_TR(0x64c993);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64c996:{NFSU2_TR(0x64c996);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c978u);}goto L64c978;}}
}
B64c998:L64c998:{c.instructions+=2;NFSU2_TR(0x64c998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c99b:{NFSU2_TR(0x64c99b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c99e:L64c99e:{c.instructions+=2;NFSU2_TR(0x64c99e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64c9a0:{NFSU2_TR(0x64c9a0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64c9ac;}}
}
B64c9a2:L64c9a2:{c.instructions+=2;NFSU2_TR(0x64c9a2);
__builtin_memmove((R+4),(R+28),4);
}
B64c9a4:{NFSU2_TR(0x64c9a4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64c9a6:L64c9a6:{c.instructions+=3;NFSU2_TR(0x64c9a6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64c9a7:{NFSU2_TR(0x64c9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c9aa:{NFSU2_TR(0x64c9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c9a6u);}goto L64c9a6;}}
}
B64c9ac:L64c9ac:{c.instructions+=5;NFSU2_TR(0x64c9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c9af:{NFSU2_TR(0x64c9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64c9b2:{NFSU2_TR(0x64c9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c9b6:{NFSU2_TR(0x64c9b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64c9b9:{NFSU2_TR(0x64c9b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c96eu);}goto L64c96e;}}
}
B64c9bb:L64c9bb:{c.instructions+=2;NFSU2_TR(0x64c9bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64c9be:{NFSU2_TR(0x64c9be);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64c9d4;}}
}
B64c9c0:L64c9c0:{c.instructions+=2;NFSU2_TR(0x64c9c0);
__builtin_memmove((R+4),(R+8),4);
}
B64c9c2:{NFSU2_TR(0x64c9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64c9c5:L64c9c5:{c.instructions+=2;NFSU2_TR(0x64c9c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64c9c7:{NFSU2_TR(0x64c9c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64c9d1;}}
}
B64c9c9:L64c9c9:{c.instructions+=1;NFSU2_TR(0x64c9c9);
__builtin_memmove((R+12),(R+28),4);
}
B64c9cb:L64c9cb:{c.instructions+=3;NFSU2_TR(0x64c9cb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64c9cc:{NFSU2_TR(0x64c9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c9cf:{NFSU2_TR(0x64c9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c9cbu);}goto L64c9cb;}}
}
B64c9d1:L64c9d1:{c.instructions+=2;NFSU2_TR(0x64c9d1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64c9d2:{NFSU2_TR(0x64c9d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c9c5u);}goto L64c9c5;}}
}
B64c9d4:L64c9d4:{c.instructions+=4;NFSU2_TR(0x64c9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c9d7:{NFSU2_TR(0x64c9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64c9db:{NFSU2_TR(0x64c9db);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B64c9df:{NFSU2_TR(0x64c9df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c95eu);}goto L64c95e;}}
}
B64c9e5:L64c9e5:{c.instructions+=1;NFSU2_TR(0x64c9e5);
{goto L64ca97;}
}
B64c9ea:L64c9ea:{c.instructions+=13;NFSU2_TR(0x64c9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64c9ed:{NFSU2_TR(0x64c9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64c9f0:{NFSU2_TR(0x64c9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64c9f3:{NFSU2_TR(0x64c9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64c9f6:{NFSU2_TR(0x64c9f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64c9f8:{NFSU2_TR(0x64c9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64c9f9:{NFSU2_TR(0x64c9f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64c9fb:{NFSU2_TR(0x64c9fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64c9fd:{NFSU2_TR(0x64c9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca00:{NFSU2_TR(0x64ca00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca03:{NFSU2_TR(0x64ca03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca06:{NFSU2_TR(0x64ca06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca09:{NFSU2_TR(0x64ca09);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ca0e;}}
}
B64ca0b:L64ca0b:{c.instructions+=1;NFSU2_TR(0x64ca0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca0e:L64ca0e:{c.instructions+=3;NFSU2_TR(0x64ca0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ca10:{NFSU2_TR(0x64ca10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca13:{NFSU2_TR(0x64ca13);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ca18;}}
}
B64ca15:L64ca15:{c.instructions+=1;NFSU2_TR(0x64ca15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca18:L64ca18:{c.instructions+=3;NFSU2_TR(0x64ca18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ca1c:{NFSU2_TR(0x64ca1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ca20:{NFSU2_TR(0x64ca20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ca71;}}
}
B64ca22:L64ca22:{c.instructions+=2;NFSU2_TR(0x64ca22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ca25:{NFSU2_TR(0x64ca25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ca28:L64ca28:{c.instructions+=3;NFSU2_TR(0x64ca28);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ca2a:{NFSU2_TR(0x64ca2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ca2d:{NFSU2_TR(0x64ca2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ca54;}}
}
B64ca2f:L64ca2f:{c.instructions+=1;NFSU2_TR(0x64ca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ca32:L64ca32:{c.instructions+=5;NFSU2_TR(0x64ca32);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64ca34:{NFSU2_TR(0x64ca34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ca35:{NFSU2_TR(0x64ca35);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64ca38:{NFSU2_TR(0x64ca38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ca39:{NFSU2_TR(0x64ca39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ca3eull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64ca3e:L64ca3e:{c.instructions+=2;NFSU2_TR(0x64ca3e);
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
B64ca40:{NFSU2_TR(0x64ca40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ca97;}}
}
B64ca42:L64ca42:{c.instructions+=5;NFSU2_TR(0x64ca42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ca45:{NFSU2_TR(0x64ca45);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64ca46:{NFSU2_TR(0x64ca46);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B64ca49:{NFSU2_TR(0x64ca49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64ca4c:{NFSU2_TR(0x64ca4c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca32u);}goto L64ca32;}}
}
B64ca4e:L64ca4e:{c.instructions+=2;NFSU2_TR(0x64ca4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ca51:{NFSU2_TR(0x64ca51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ca54:L64ca54:{c.instructions+=2;NFSU2_TR(0x64ca54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64ca56:{NFSU2_TR(0x64ca56);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ca62;}}
}
B64ca58:L64ca58:{c.instructions+=2;NFSU2_TR(0x64ca58);
__builtin_memmove((R+4),(R+28),4);
}
B64ca5a:{NFSU2_TR(0x64ca5a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64ca5c:L64ca5c:{c.instructions+=3;NFSU2_TR(0x64ca5c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ca5d:{NFSU2_TR(0x64ca5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ca60:{NFSU2_TR(0x64ca60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca5cu);}goto L64ca5c;}}
}
B64ca62:L64ca62:{c.instructions+=5;NFSU2_TR(0x64ca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ca65:{NFSU2_TR(0x64ca65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ca68:{NFSU2_TR(0x64ca68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ca6c:{NFSU2_TR(0x64ca6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64ca6f:{NFSU2_TR(0x64ca6f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca28u);}goto L64ca28;}}
}
B64ca71:L64ca71:{c.instructions+=2;NFSU2_TR(0x64ca71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64ca74:{NFSU2_TR(0x64ca74);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ca8a;}}
}
B64ca76:L64ca76:{c.instructions+=2;NFSU2_TR(0x64ca76);
__builtin_memmove((R+4),(R+8),4);
}
B64ca78:{NFSU2_TR(0x64ca78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64ca7b:L64ca7b:{c.instructions+=2;NFSU2_TR(0x64ca7b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ca7d:{NFSU2_TR(0x64ca7d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ca87;}}
}
B64ca7f:L64ca7f:{c.instructions+=1;NFSU2_TR(0x64ca7f);
__builtin_memmove((R+12),(R+28),4);
}
B64ca81:L64ca81:{c.instructions+=3;NFSU2_TR(0x64ca81);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64ca82:{NFSU2_TR(0x64ca82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ca85:{NFSU2_TR(0x64ca85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca81u);}goto L64ca81;}}
}
B64ca87:L64ca87:{c.instructions+=2;NFSU2_TR(0x64ca87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ca88:{NFSU2_TR(0x64ca88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca7bu);}goto L64ca7b;}}
}
B64ca8a:L64ca8a:{c.instructions+=4;NFSU2_TR(0x64ca8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ca8d:{NFSU2_TR(0x64ca8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ca91:{NFSU2_TR(0x64ca91);
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
B64ca95:{NFSU2_TR(0x64ca95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ca18u);}goto L64ca18;}}
}
B64ca97:L64ca97:{c.instructions+=2;NFSU2_TR(0x64ca97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ca98:{NFSU2_TR(0x64ca98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ca99:L64ca99:{c.instructions+=3;NFSU2_TR(0x64ca99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ca9a:{NFSU2_TR(0x64ca9a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ca9b:{NFSU2_TR(0x64ca9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ca9e:L64ca9e:{c.instructions+=10;NFSU2_TR(0x64ca9e);
__builtin_memmove((R+28),(R+28),4);
}
B64caa0:{NFSU2_TR(0x64caa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64caa1:{NFSU2_TR(0x64caa1);
__builtin_memmove((R+20),(R+16),4);
}
B64caa3:{NFSU2_TR(0x64caa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B64caa6:{NFSU2_TR(0x64caa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64caa7:{NFSU2_TR(0x64caa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64caa8:{NFSU2_TR(0x64caa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64caab:{NFSU2_TR(0x64caab);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64caad:{NFSU2_TR(0x64caad);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B64caaf:{NFSU2_TR(0x64caaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64cabb;}}
}
B64cab1:L64cab1:{c.instructions+=2;NFSU2_TR(0x64cab1);
w4(R+0,u32(0x8876086cull));
}
B64cab6:{NFSU2_TR(0x64cab6);
{goto L64cc80;}
}
B64cabb:L64cabb:{c.instructions+=6;NFSU2_TR(0x64cabb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cabc:{NFSU2_TR(0x64cabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cabf:{NFSU2_TR(0x64cabf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cac1:{NFSU2_TR(0x64cac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64cac4:{NFSU2_TR(0x64cac4);
__builtin_memmove((R+4),(R+24),4);
}
B64cac6:{NFSU2_TR(0x64cac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cacbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64cacb:L64cacb:{c.instructions+=2;NFSU2_TR(0x64cacb);
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
B64cacd:{NFSU2_TR(0x64cacd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64cad9;}}
}
B64cacf:L64cacf:{c.instructions+=2;NFSU2_TR(0x64cacf);
w4(R+0,u32(0x8876086cull));
}
B64cad4:{NFSU2_TR(0x64cad4);
{goto L64cc7f;}
}
B64cad9:L64cad9:{c.instructions+=6;NFSU2_TR(0x64cad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64cadc:{NFSU2_TR(0x64cadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64cadf:{NFSU2_TR(0x64cadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64cae5:{NFSU2_TR(0x64cae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64cae8:{NFSU2_TR(0x64cae8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64caeb:{NFSU2_TR(0x64caeb);
if(r1(R+518)){{goto L64caf3;}}
}
B64caed:L64caed:{c.instructions+=2;NFSU2_TR(0x64caed);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64caf1:{NFSU2_TR(0x64caf1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cacfu);}goto L64cacf;}}
}
B64caf3:L64caf3:{c.instructions+=4;NFSU2_TR(0x64caf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64caf6:{NFSU2_TR(0x64caf6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64caf7:{NFSU2_TR(0x64caf7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64caf8:{NFSU2_TR(0x64caf8);
if(r1(R+518)){{goto L64cbc5;}}
}
B64cafe:L64cafe:{c.instructions+=2;NFSU2_TR(0x64cafe);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64caff:{NFSU2_TR(0x64caff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cacfu);}goto L64cacf;}}
}
B64cb01:L64cb01:{c.instructions+=13;NFSU2_TR(0x64cb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cb04:{NFSU2_TR(0x64cb04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cb07:{NFSU2_TR(0x64cb07);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cb09:{NFSU2_TR(0x64cb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb0c:{NFSU2_TR(0x64cb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cb0f:{NFSU2_TR(0x64cb0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64cb10:{NFSU2_TR(0x64cb10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cb12:{NFSU2_TR(0x64cb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64cb19:{NFSU2_TR(0x64cb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb1c:{NFSU2_TR(0x64cb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb1f:{NFSU2_TR(0x64cb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb22:{NFSU2_TR(0x64cb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb25:{NFSU2_TR(0x64cb25);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cb2a;}}
}
B64cb27:L64cb27:{c.instructions+=1;NFSU2_TR(0x64cb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb2a:L64cb2a:{c.instructions+=3;NFSU2_TR(0x64cb2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cb2c:{NFSU2_TR(0x64cb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb2f:{NFSU2_TR(0x64cb2f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cb34;}}
}
B64cb31:L64cb31:{c.instructions+=1;NFSU2_TR(0x64cb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb34:L64cb34:{c.instructions+=3;NFSU2_TR(0x64cb34);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cb36:{NFSU2_TR(0x64cb36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64cb37:{NFSU2_TR(0x64cb37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64cb39:L64cb39:{c.instructions+=1;NFSU2_TR(0x64cb39);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64cb3b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cb39u);}goto L64cb39;}
}
B64cb3b:L64cb3b:{c.instructions+=3;NFSU2_TR(0x64cb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cb3f:{NFSU2_TR(0x64cb3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cb43:{NFSU2_TR(0x64cb43);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cb96;}}
}
B64cb45:L64cb45:{c.instructions+=2;NFSU2_TR(0x64cb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cb48:{NFSU2_TR(0x64cb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb4b:L64cb4b:{c.instructions+=3;NFSU2_TR(0x64cb4b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64cb4d:{NFSU2_TR(0x64cb4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cb50:{NFSU2_TR(0x64cb50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cb79;}}
}
B64cb52:L64cb52:{c.instructions+=1;NFSU2_TR(0x64cb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cb55:L64cb55:{c.instructions+=3;NFSU2_TR(0x64cb55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cb56:{NFSU2_TR(0x64cb56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cb57:{NFSU2_TR(0x64cb57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cb5cull));
TAIL_STATIC(0x64a939u,64a);
}
B64cb5c:L64cb5c:{c.instructions+=3;NFSU2_TR(0x64cb5c);
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
B64cb5e:{NFSU2_TR(0x64cb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cb61:{NFSU2_TR(0x64cb61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64cc7c;}}
}
B64cb67:L64cb67:{c.instructions+=5;NFSU2_TR(0x64cb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cb6a:{NFSU2_TR(0x64cb6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64cb6b:{NFSU2_TR(0x64cb6b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B64cb6e:{NFSU2_TR(0x64cb6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64cb71:{NFSU2_TR(0x64cb71);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cb55u);}goto L64cb55;}}
}
B64cb73:L64cb73:{c.instructions+=2;NFSU2_TR(0x64cb73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cb76:{NFSU2_TR(0x64cb76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cb79:L64cb79:{c.instructions+=2;NFSU2_TR(0x64cb79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64cb7b:{NFSU2_TR(0x64cb7b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cb87;}}
}
B64cb7d:L64cb7d:{c.instructions+=2;NFSU2_TR(0x64cb7d);
__builtin_memmove((R+0),(R+8),4);
}
B64cb7f:{NFSU2_TR(0x64cb7f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64cb81:L64cb81:{c.instructions+=3;NFSU2_TR(0x64cb81);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cb82:{NFSU2_TR(0x64cb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cb85:{NFSU2_TR(0x64cb85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cb81u);}goto L64cb81;}}
}
B64cb87:L64cb87:{c.instructions+=5;NFSU2_TR(0x64cb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cb8a:{NFSU2_TR(0x64cb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cb8d:{NFSU2_TR(0x64cb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cb91:{NFSU2_TR(0x64cb91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64cb94:{NFSU2_TR(0x64cb94);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cb4bu);}goto L64cb4b;}}
}
B64cb96:L64cb96:{c.instructions+=2;NFSU2_TR(0x64cb96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64cb99:{NFSU2_TR(0x64cb99);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cbaf;}}
}
B64cb9b:L64cb9b:{c.instructions+=2;NFSU2_TR(0x64cb9b);
__builtin_memmove((R+0),(R+12),4);
}
B64cb9d:{NFSU2_TR(0x64cb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64cba0:L64cba0:{c.instructions+=2;NFSU2_TR(0x64cba0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64cba2:{NFSU2_TR(0x64cba2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cbac;}}
}
B64cba4:L64cba4:{c.instructions+=1;NFSU2_TR(0x64cba4);
__builtin_memmove((R+4),(R+8),4);
}
B64cba6:L64cba6:{c.instructions+=3;NFSU2_TR(0x64cba6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64cba7:{NFSU2_TR(0x64cba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cbaa:{NFSU2_TR(0x64cbaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cba6u);}goto L64cba6;}}
}
B64cbac:L64cbac:{c.instructions+=2;NFSU2_TR(0x64cbac);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cbad:{NFSU2_TR(0x64cbad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cba0u);}goto L64cba0;}}
}
B64cbaf:L64cbaf:{c.instructions+=4;NFSU2_TR(0x64cbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cbb2:{NFSU2_TR(0x64cbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cbb6:{NFSU2_TR(0x64cbb6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B64cbba:{NFSU2_TR(0x64cbba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cb3bu);}goto L64cb3b;}}
}
B64cbc0:L64cbc0:{c.instructions+=1;NFSU2_TR(0x64cbc0);
{goto L64cc7c;}
}
B64cbc5:L64cbc5:{c.instructions+=13;NFSU2_TR(0x64cbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cbc8:{NFSU2_TR(0x64cbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cbcb:{NFSU2_TR(0x64cbcb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cbcd:{NFSU2_TR(0x64cbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbd0:{NFSU2_TR(0x64cbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cbd3:{NFSU2_TR(0x64cbd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64cbd4:{NFSU2_TR(0x64cbd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cbd6:{NFSU2_TR(0x64cbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64cbdd:{NFSU2_TR(0x64cbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbe0:{NFSU2_TR(0x64cbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbe3:{NFSU2_TR(0x64cbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbe6:{NFSU2_TR(0x64cbe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbe9:{NFSU2_TR(0x64cbe9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cbee;}}
}
B64cbeb:L64cbeb:{c.instructions+=1;NFSU2_TR(0x64cbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbee:L64cbee:{c.instructions+=3;NFSU2_TR(0x64cbee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cbf0:{NFSU2_TR(0x64cbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbf3:{NFSU2_TR(0x64cbf3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cbf8;}}
}
B64cbf5:L64cbf5:{c.instructions+=1;NFSU2_TR(0x64cbf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cbf8:L64cbf8:{c.instructions+=3;NFSU2_TR(0x64cbf8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cbfa:{NFSU2_TR(0x64cbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64cbfb:{NFSU2_TR(0x64cbfb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64cbfd:L64cbfd:{c.instructions+=1;NFSU2_TR(0x64cbfd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64cbff;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cbfdu);}goto L64cbfd;}
}
B64cbff:L64cbff:{c.instructions+=3;NFSU2_TR(0x64cbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cc03:{NFSU2_TR(0x64cc03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cc07:{NFSU2_TR(0x64cc07);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cc56;}}
}
B64cc09:L64cc09:{c.instructions+=2;NFSU2_TR(0x64cc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cc0c:{NFSU2_TR(0x64cc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cc0f:L64cc0f:{c.instructions+=3;NFSU2_TR(0x64cc0f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64cc11:{NFSU2_TR(0x64cc11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cc14:{NFSU2_TR(0x64cc14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cc39;}}
}
B64cc16:L64cc16:{c.instructions+=1;NFSU2_TR(0x64cc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cc19:L64cc19:{c.instructions+=3;NFSU2_TR(0x64cc19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cc1a:{NFSU2_TR(0x64cc1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cc1b:{NFSU2_TR(0x64cc1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cc20ull));
TAIL_STATIC(0x64a939u,64a);
}
B64cc20:L64cc20:{c.instructions+=3;NFSU2_TR(0x64cc20);
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
B64cc22:{NFSU2_TR(0x64cc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cc25:{NFSU2_TR(0x64cc25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64cc7c;}}
}
B64cc27:L64cc27:{c.instructions+=5;NFSU2_TR(0x64cc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cc2a:{NFSU2_TR(0x64cc2a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64cc2b:{NFSU2_TR(0x64cc2b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B64cc2e:{NFSU2_TR(0x64cc2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64cc31:{NFSU2_TR(0x64cc31);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cc19u);}goto L64cc19;}}
}
B64cc33:L64cc33:{c.instructions+=2;NFSU2_TR(0x64cc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cc36:{NFSU2_TR(0x64cc36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cc39:L64cc39:{c.instructions+=2;NFSU2_TR(0x64cc39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64cc3b:{NFSU2_TR(0x64cc3b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cc47;}}
}
B64cc3d:L64cc3d:{c.instructions+=2;NFSU2_TR(0x64cc3d);
__builtin_memmove((R+0),(R+8),4);
}
B64cc3f:{NFSU2_TR(0x64cc3f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64cc41:L64cc41:{c.instructions+=3;NFSU2_TR(0x64cc41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cc42:{NFSU2_TR(0x64cc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cc45:{NFSU2_TR(0x64cc45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cc41u);}goto L64cc41;}}
}
B64cc47:L64cc47:{c.instructions+=5;NFSU2_TR(0x64cc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cc4a:{NFSU2_TR(0x64cc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cc4d:{NFSU2_TR(0x64cc4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cc51:{NFSU2_TR(0x64cc51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64cc54:{NFSU2_TR(0x64cc54);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cc0fu);}goto L64cc0f;}}
}
B64cc56:L64cc56:{c.instructions+=2;NFSU2_TR(0x64cc56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64cc59:{NFSU2_TR(0x64cc59);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cc6f;}}
}
B64cc5b:L64cc5b:{c.instructions+=2;NFSU2_TR(0x64cc5b);
__builtin_memmove((R+0),(R+12),4);
}
B64cc5d:{NFSU2_TR(0x64cc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64cc60:L64cc60:{c.instructions+=2;NFSU2_TR(0x64cc60);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64cc62:{NFSU2_TR(0x64cc62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cc6c;}}
}
B64cc64:L64cc64:{c.instructions+=1;NFSU2_TR(0x64cc64);
__builtin_memmove((R+4),(R+8),4);
}
B64cc66:L64cc66:{c.instructions+=3;NFSU2_TR(0x64cc66);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64cc67:{NFSU2_TR(0x64cc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cc6a:{NFSU2_TR(0x64cc6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cc66u);}goto L64cc66;}}
}
B64cc6c:L64cc6c:{c.instructions+=2;NFSU2_TR(0x64cc6c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cc6d:{NFSU2_TR(0x64cc6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cc60u);}goto L64cc60;}}
}
B64cc6f:L64cc6f:{c.instructions+=4;NFSU2_TR(0x64cc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cc72:{NFSU2_TR(0x64cc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cc76:{NFSU2_TR(0x64cc76);
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
B64cc7a:{NFSU2_TR(0x64cc7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cbffu);}goto L64cbff;}}
}
B64cc7c:L64cc7c:{c.instructions+=1;NFSU2_TR(0x64cc7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cc7f:L64cc7f:{c.instructions+=1;NFSU2_TR(0x64cc7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64cc80:L64cc80:{c.instructions+=4;NFSU2_TR(0x64cc80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64cc81:{NFSU2_TR(0x64cc81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64cc82:{NFSU2_TR(0x64cc82);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64cc83:{NFSU2_TR(0x64cc83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64cc86:L64cc86:{c.instructions+=8;NFSU2_TR(0x64cc86);
__builtin_memmove((R+28),(R+28),4);
}
B64cc88:{NFSU2_TR(0x64cc88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cc89:{NFSU2_TR(0x64cc89);
__builtin_memmove((R+20),(R+16),4);
}
B64cc8b:{NFSU2_TR(0x64cc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B64cc8e:{NFSU2_TR(0x64cc8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cc8f:{NFSU2_TR(0x64cc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64cc92:{NFSU2_TR(0x64cc92);
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
B64cc94:{NFSU2_TR(0x64cc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64cca0;}}
}
B64cc96:L64cc96:{c.instructions+=2;NFSU2_TR(0x64cc96);
w4(R+0,u32(0x8876086cull));
}
B64cc9b:{NFSU2_TR(0x64cc9b);
{goto L64ce53;}
}
B64cca0:L64cca0:{c.instructions+=9;NFSU2_TR(0x64cca0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cca1:{NFSU2_TR(0x64cca1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cca2:{NFSU2_TR(0x64cca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cca5:{NFSU2_TR(0x64cca5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64cca7:{NFSU2_TR(0x64cca7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64cca8:{NFSU2_TR(0x64cca8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cca9:{NFSU2_TR(0x64cca9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ccac:{NFSU2_TR(0x64ccac);
__builtin_memmove((R+4),(R+24),4);
}
B64ccae:{NFSU2_TR(0x64ccae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ccb3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64ccb3:L64ccb3:{c.instructions+=2;NFSU2_TR(0x64ccb3);
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
B64ccb5:{NFSU2_TR(0x64ccb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ccc1;}}
}
B64ccb7:L64ccb7:{c.instructions+=2;NFSU2_TR(0x64ccb7);
w4(R+0,u32(0x8876086cull));
}
B64ccbc:{NFSU2_TR(0x64ccbc);
{goto L64ce51;}
}
B64ccc1:L64ccc1:{c.instructions+=6;NFSU2_TR(0x64ccc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ccc4:{NFSU2_TR(0x64ccc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ccc7:{NFSU2_TR(0x64ccc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64cccd:{NFSU2_TR(0x64cccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64ccd0:{NFSU2_TR(0x64ccd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ccd4:{NFSU2_TR(0x64ccd4);
if(r1(R+518)){{goto L64ccdc;}}
}
B64ccd6:L64ccd6:{c.instructions+=2;NFSU2_TR(0x64ccd6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64ccda:{NFSU2_TR(0x64ccda);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ccb7u);}goto L64ccb7;}}
}
B64ccdc:L64ccdc:{c.instructions+=4;NFSU2_TR(0x64ccdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ccdf:{NFSU2_TR(0x64ccdf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64cce0:{NFSU2_TR(0x64cce0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64cce1:{NFSU2_TR(0x64cce1);
if(r1(R+518)){{goto L64cda4;}}
}
B64cce7:L64cce7:{c.instructions+=2;NFSU2_TR(0x64cce7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64cce8:{NFSU2_TR(0x64cce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ccb7u);}goto L64ccb7;}}
}
B64ccea:L64ccea:{c.instructions+=13;NFSU2_TR(0x64ccea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cced:{NFSU2_TR(0x64cced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ccf0:{NFSU2_TR(0x64ccf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ccf3:{NFSU2_TR(0x64ccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ccf6:{NFSU2_TR(0x64ccf6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ccf8:{NFSU2_TR(0x64ccf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ccf9:{NFSU2_TR(0x64ccf9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64ccfb:{NFSU2_TR(0x64ccfb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64ccfd:{NFSU2_TR(0x64ccfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd00:{NFSU2_TR(0x64cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd03:{NFSU2_TR(0x64cd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd06:{NFSU2_TR(0x64cd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd09:{NFSU2_TR(0x64cd09);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cd0e;}}
}
B64cd0b:L64cd0b:{c.instructions+=1;NFSU2_TR(0x64cd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd0e:L64cd0e:{c.instructions+=3;NFSU2_TR(0x64cd0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cd10:{NFSU2_TR(0x64cd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd13:{NFSU2_TR(0x64cd13);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cd18;}}
}
B64cd15:L64cd15:{c.instructions+=1;NFSU2_TR(0x64cd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd18:L64cd18:{c.instructions+=3;NFSU2_TR(0x64cd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cd1c:{NFSU2_TR(0x64cd1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cd20:{NFSU2_TR(0x64cd20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cd75;}}
}
B64cd22:L64cd22:{c.instructions+=2;NFSU2_TR(0x64cd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64cd25:{NFSU2_TR(0x64cd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cd28:L64cd28:{c.instructions+=3;NFSU2_TR(0x64cd28);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64cd2a:{NFSU2_TR(0x64cd2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cd2d:{NFSU2_TR(0x64cd2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cd58;}}
}
B64cd2f:L64cd2f:{c.instructions+=1;NFSU2_TR(0x64cd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64cd32:L64cd32:{c.instructions+=5;NFSU2_TR(0x64cd32);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64cd34:{NFSU2_TR(0x64cd34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cd35:{NFSU2_TR(0x64cd35);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64cd38:{NFSU2_TR(0x64cd38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cd39:{NFSU2_TR(0x64cd39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cd3eull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64cd3e:L64cd3e:{c.instructions+=2;NFSU2_TR(0x64cd3e);
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
B64cd40:{NFSU2_TR(0x64cd40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ce51;}}
}
B64cd46:L64cd46:{c.instructions+=5;NFSU2_TR(0x64cd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cd49:{NFSU2_TR(0x64cd49);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64cd4a:{NFSU2_TR(0x64cd4a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B64cd4d:{NFSU2_TR(0x64cd4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64cd50:{NFSU2_TR(0x64cd50);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd32u);}goto L64cd32;}}
}
B64cd52:L64cd52:{c.instructions+=2;NFSU2_TR(0x64cd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64cd55:{NFSU2_TR(0x64cd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cd58:L64cd58:{c.instructions+=2;NFSU2_TR(0x64cd58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64cd5a:{NFSU2_TR(0x64cd5a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cd66;}}
}
B64cd5c:L64cd5c:{c.instructions+=2;NFSU2_TR(0x64cd5c);
__builtin_memmove((R+4),(R+28),4);
}
B64cd5e:{NFSU2_TR(0x64cd5e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64cd60:L64cd60:{c.instructions+=3;NFSU2_TR(0x64cd60);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64cd61:{NFSU2_TR(0x64cd61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cd64:{NFSU2_TR(0x64cd64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd60u);}goto L64cd60;}}
}
B64cd66:L64cd66:{c.instructions+=5;NFSU2_TR(0x64cd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cd69:{NFSU2_TR(0x64cd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64cd6c:{NFSU2_TR(0x64cd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cd70:{NFSU2_TR(0x64cd70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64cd73:{NFSU2_TR(0x64cd73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd28u);}goto L64cd28;}}
}
B64cd75:L64cd75:{c.instructions+=2;NFSU2_TR(0x64cd75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64cd78:{NFSU2_TR(0x64cd78);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cd8e;}}
}
B64cd7a:L64cd7a:{c.instructions+=2;NFSU2_TR(0x64cd7a);
__builtin_memmove((R+4),(R+8),4);
}
B64cd7c:{NFSU2_TR(0x64cd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64cd7f:L64cd7f:{c.instructions+=2;NFSU2_TR(0x64cd7f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64cd81:{NFSU2_TR(0x64cd81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cd8b;}}
}
B64cd83:L64cd83:{c.instructions+=1;NFSU2_TR(0x64cd83);
__builtin_memmove((R+12),(R+28),4);
}
B64cd85:L64cd85:{c.instructions+=3;NFSU2_TR(0x64cd85);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64cd86:{NFSU2_TR(0x64cd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cd89:{NFSU2_TR(0x64cd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd85u);}goto L64cd85;}}
}
B64cd8b:L64cd8b:{c.instructions+=2;NFSU2_TR(0x64cd8b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64cd8c:{NFSU2_TR(0x64cd8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd7fu);}goto L64cd7f;}}
}
B64cd8e:L64cd8e:{c.instructions+=4;NFSU2_TR(0x64cd8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cd91:{NFSU2_TR(0x64cd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cd95:{NFSU2_TR(0x64cd95);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B64cd99:{NFSU2_TR(0x64cd99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cd18u);}goto L64cd18;}}
}
B64cd9f:L64cd9f:{c.instructions+=1;NFSU2_TR(0x64cd9f);
{goto L64ce51;}
}
B64cda4:L64cda4:{c.instructions+=13;NFSU2_TR(0x64cda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cda7:{NFSU2_TR(0x64cda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cdaa:{NFSU2_TR(0x64cdaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdad:{NFSU2_TR(0x64cdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64cdb0:{NFSU2_TR(0x64cdb0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cdb2:{NFSU2_TR(0x64cdb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64cdb3:{NFSU2_TR(0x64cdb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64cdb5:{NFSU2_TR(0x64cdb5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cdb7:{NFSU2_TR(0x64cdb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdba:{NFSU2_TR(0x64cdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdbd:{NFSU2_TR(0x64cdbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdc0:{NFSU2_TR(0x64cdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdc3:{NFSU2_TR(0x64cdc3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cdc8;}}
}
B64cdc5:L64cdc5:{c.instructions+=1;NFSU2_TR(0x64cdc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdc8:L64cdc8:{c.instructions+=3;NFSU2_TR(0x64cdc8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cdca:{NFSU2_TR(0x64cdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdcd:{NFSU2_TR(0x64cdcd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cdd2;}}
}
B64cdcf:L64cdcf:{c.instructions+=1;NFSU2_TR(0x64cdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cdd2:L64cdd2:{c.instructions+=3;NFSU2_TR(0x64cdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cdd6:{NFSU2_TR(0x64cdd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cdda:{NFSU2_TR(0x64cdda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ce2b;}}
}
B64cddc:L64cddc:{c.instructions+=2;NFSU2_TR(0x64cddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64cddf:{NFSU2_TR(0x64cddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cde2:L64cde2:{c.instructions+=3;NFSU2_TR(0x64cde2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64cde4:{NFSU2_TR(0x64cde4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cde7:{NFSU2_TR(0x64cde7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ce0e;}}
}
B64cde9:L64cde9:{c.instructions+=1;NFSU2_TR(0x64cde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64cdec:L64cdec:{c.instructions+=5;NFSU2_TR(0x64cdec);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64cdee:{NFSU2_TR(0x64cdee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cdef:{NFSU2_TR(0x64cdef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64cdf2:{NFSU2_TR(0x64cdf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cdf3:{NFSU2_TR(0x64cdf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cdf8ull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64cdf8:L64cdf8:{c.instructions+=2;NFSU2_TR(0x64cdf8);
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
B64cdfa:{NFSU2_TR(0x64cdfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64ce51;}}
}
B64cdfc:L64cdfc:{c.instructions+=5;NFSU2_TR(0x64cdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cdff:{NFSU2_TR(0x64cdff);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64ce00:{NFSU2_TR(0x64ce00);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64ce03:{NFSU2_TR(0x64ce03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64ce06:{NFSU2_TR(0x64ce06);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cdecu);}goto L64cdec;}}
}
B64ce08:L64ce08:{c.instructions+=2;NFSU2_TR(0x64ce08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ce0b:{NFSU2_TR(0x64ce0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ce0e:L64ce0e:{c.instructions+=2;NFSU2_TR(0x64ce0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64ce10:{NFSU2_TR(0x64ce10);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ce1c;}}
}
B64ce12:L64ce12:{c.instructions+=2;NFSU2_TR(0x64ce12);
__builtin_memmove((R+4),(R+28),4);
}
B64ce14:{NFSU2_TR(0x64ce14);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B64ce16:L64ce16:{c.instructions+=3;NFSU2_TR(0x64ce16);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ce17:{NFSU2_TR(0x64ce17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ce1a:{NFSU2_TR(0x64ce1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ce16u);}goto L64ce16;}}
}
B64ce1c:L64ce1c:{c.instructions+=5;NFSU2_TR(0x64ce1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ce1f:{NFSU2_TR(0x64ce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ce22:{NFSU2_TR(0x64ce22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ce26:{NFSU2_TR(0x64ce26);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64ce29:{NFSU2_TR(0x64ce29);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cde2u);}goto L64cde2;}}
}
B64ce2b:L64ce2b:{c.instructions+=2;NFSU2_TR(0x64ce2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B64ce2e:{NFSU2_TR(0x64ce2e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64ce44;}}
}
B64ce30:L64ce30:{c.instructions+=2;NFSU2_TR(0x64ce30);
__builtin_memmove((R+4),(R+8),4);
}
B64ce32:{NFSU2_TR(0x64ce32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64ce35:L64ce35:{c.instructions+=2;NFSU2_TR(0x64ce35);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ce37:{NFSU2_TR(0x64ce37);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64ce41;}}
}
B64ce39:L64ce39:{c.instructions+=1;NFSU2_TR(0x64ce39);
__builtin_memmove((R+12),(R+28),4);
}
B64ce3b:L64ce3b:{c.instructions+=3;NFSU2_TR(0x64ce3b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64ce3c:{NFSU2_TR(0x64ce3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ce3f:{NFSU2_TR(0x64ce3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ce3bu);}goto L64ce3b;}}
}
B64ce41:L64ce41:{c.instructions+=2;NFSU2_TR(0x64ce41);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64ce42:{NFSU2_TR(0x64ce42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ce35u);}goto L64ce35;}}
}
B64ce44:L64ce44:{c.instructions+=4;NFSU2_TR(0x64ce44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ce47:{NFSU2_TR(0x64ce47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64ce4b:{NFSU2_TR(0x64ce4b);
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
B64ce4f:{NFSU2_TR(0x64ce4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cdd2u);}goto L64cdd2;}}
}
B64ce51:L64ce51:{c.instructions+=2;NFSU2_TR(0x64ce51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ce52:{NFSU2_TR(0x64ce52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ce53:L64ce53:{c.instructions+=3;NFSU2_TR(0x64ce53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ce54:{NFSU2_TR(0x64ce54);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ce55:{NFSU2_TR(0x64ce55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ce58:L64ce58:{c.instructions+=10;NFSU2_TR(0x64ce58);
__builtin_memmove((R+28),(R+28),4);
}
B64ce5a:{NFSU2_TR(0x64ce5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ce5b:{NFSU2_TR(0x64ce5b);
__builtin_memmove((R+20),(R+16),4);
}
B64ce5d:{NFSU2_TR(0x64ce5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B64ce60:{NFSU2_TR(0x64ce60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ce61:{NFSU2_TR(0x64ce61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ce62:{NFSU2_TR(0x64ce62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64ce65:{NFSU2_TR(0x64ce65);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64ce67:{NFSU2_TR(0x64ce67);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B64ce69:{NFSU2_TR(0x64ce69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ce75;}}
}
B64ce6b:L64ce6b:{c.instructions+=2;NFSU2_TR(0x64ce6b);
w4(R+0,u32(0x8876086cull));
}
B64ce70:{NFSU2_TR(0x64ce70);
TAIL_STATIC(0x64d03au,64d);
}
B64ce75:L64ce75:{c.instructions+=6;NFSU2_TR(0x64ce75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ce76:{NFSU2_TR(0x64ce76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64ce79:{NFSU2_TR(0x64ce79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ce7b:{NFSU2_TR(0x64ce7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64ce7e:{NFSU2_TR(0x64ce7e);
__builtin_memmove((R+4),(R+24),4);
}
B64ce80:{NFSU2_TR(0x64ce80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ce85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64c399u);}goto L64c399;}
}
B64ce85:L64ce85:{c.instructions+=2;NFSU2_TR(0x64ce85);
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
B64ce87:{NFSU2_TR(0x64ce87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ce93;}}
}
B64ce89:L64ce89:{c.instructions+=2;NFSU2_TR(0x64ce89);
w4(R+0,u32(0x8876086cull));
}
B64ce8e:{NFSU2_TR(0x64ce8e);
TAIL_STATIC(0x64d039u,64d);
}
B64ce93:L64ce93:{c.instructions+=6;NFSU2_TR(0x64ce93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ce96:{NFSU2_TR(0x64ce96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ce99:{NFSU2_TR(0x64ce99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64ce9f:{NFSU2_TR(0x64ce9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B64cea2:{NFSU2_TR(0x64cea2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cea5:{NFSU2_TR(0x64cea5);
if(r1(R+518)){{goto L64cead;}}
}
B64cea7:L64cea7:{c.instructions+=2;NFSU2_TR(0x64cea7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64ceab:{NFSU2_TR(0x64ceab);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ce89u);}goto L64ce89;}}
}
B64cead:L64cead:{c.instructions+=4;NFSU2_TR(0x64cead);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ceb0:{NFSU2_TR(0x64ceb0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B64ceb1:{NFSU2_TR(0x64ceb1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64ceb2:{NFSU2_TR(0x64ceb2);
if(r1(R+518)){{goto L64cf7f;}}
}
B64ceb8:L64ceb8:{c.instructions+=2;NFSU2_TR(0x64ceb8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64ceb9:{NFSU2_TR(0x64ceb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ce89u);}goto L64ce89;}}
}
B64cebb:L64cebb:{c.instructions+=13;NFSU2_TR(0x64cebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cebe:{NFSU2_TR(0x64cebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cec1:{NFSU2_TR(0x64cec1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cec3:{NFSU2_TR(0x64cec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cec6:{NFSU2_TR(0x64cec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cec9:{NFSU2_TR(0x64cec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64ceca:{NFSU2_TR(0x64ceca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cecc:{NFSU2_TR(0x64cecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64ced3:{NFSU2_TR(0x64ced3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ced6:{NFSU2_TR(0x64ced6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ced9:{NFSU2_TR(0x64ced9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cedc:{NFSU2_TR(0x64cedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cedf:{NFSU2_TR(0x64cedf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cee4;}}
}
B64cee1:L64cee1:{c.instructions+=1;NFSU2_TR(0x64cee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cee4:L64cee4:{c.instructions+=3;NFSU2_TR(0x64cee4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cee6:{NFSU2_TR(0x64cee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cee9:{NFSU2_TR(0x64cee9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64ceee;}}
}
B64ceeb:L64ceeb:{c.instructions+=1;NFSU2_TR(0x64ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ceee:L64ceee:{c.instructions+=3;NFSU2_TR(0x64ceee);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cef0:{NFSU2_TR(0x64cef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64cef1:{NFSU2_TR(0x64cef1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64cef3:L64cef3:{c.instructions+=1;NFSU2_TR(0x64cef3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64cef5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cef3u);}goto L64cef3;}
}
B64cef5:L64cef5:{c.instructions+=3;NFSU2_TR(0x64cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cef9:{NFSU2_TR(0x64cef9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cefd:{NFSU2_TR(0x64cefd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cf50;}}
}
B64ceff:L64ceff:{c.instructions+=2;NFSU2_TR(0x64ceff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cf02:{NFSU2_TR(0x64cf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cf05:L64cf05:{c.instructions+=3;NFSU2_TR(0x64cf05);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64cf07:{NFSU2_TR(0x64cf07);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cf0a:{NFSU2_TR(0x64cf0a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cf33;}}
}
B64cf0c:L64cf0c:{c.instructions+=1;NFSU2_TR(0x64cf0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cf0f:L64cf0f:{c.instructions+=3;NFSU2_TR(0x64cf0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cf10:{NFSU2_TR(0x64cf10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cf11:{NFSU2_TR(0x64cf11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cf16ull));
TAIL_STATIC(0x64a939u,64a);
}
B64cf16:L64cf16:{c.instructions+=3;NFSU2_TR(0x64cf16);
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
B64cf18:{NFSU2_TR(0x64cf18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cf1b:{NFSU2_TR(0x64cf1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64d036u,64d);}
}
B64cf21:L64cf21:{c.instructions+=5;NFSU2_TR(0x64cf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cf24:{NFSU2_TR(0x64cf24);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64cf25:{NFSU2_TR(0x64cf25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B64cf28:{NFSU2_TR(0x64cf28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64cf2b:{NFSU2_TR(0x64cf2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cf0fu);}goto L64cf0f;}}
}
B64cf2d:L64cf2d:{c.instructions+=2;NFSU2_TR(0x64cf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cf30:{NFSU2_TR(0x64cf30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cf33:L64cf33:{c.instructions+=2;NFSU2_TR(0x64cf33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64cf35:{NFSU2_TR(0x64cf35);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cf41;}}
}
B64cf37:L64cf37:{c.instructions+=2;NFSU2_TR(0x64cf37);
__builtin_memmove((R+0),(R+8),4);
}
B64cf39:{NFSU2_TR(0x64cf39);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64cf3b:L64cf3b:{c.instructions+=3;NFSU2_TR(0x64cf3b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cf3c:{NFSU2_TR(0x64cf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cf3f:{NFSU2_TR(0x64cf3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cf3bu);}goto L64cf3b;}}
}
B64cf41:L64cf41:{c.instructions+=5;NFSU2_TR(0x64cf41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cf44:{NFSU2_TR(0x64cf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cf47:{NFSU2_TR(0x64cf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cf4b:{NFSU2_TR(0x64cf4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64cf4e:{NFSU2_TR(0x64cf4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cf05u);}goto L64cf05;}}
}
B64cf50:L64cf50:{c.instructions+=2;NFSU2_TR(0x64cf50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64cf53:{NFSU2_TR(0x64cf53);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64cf69;}}
}
B64cf55:L64cf55:{c.instructions+=2;NFSU2_TR(0x64cf55);
__builtin_memmove((R+0),(R+12),4);
}
B64cf57:{NFSU2_TR(0x64cf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B64cf5a:L64cf5a:{c.instructions+=2;NFSU2_TR(0x64cf5a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64cf5c:{NFSU2_TR(0x64cf5c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cf66;}}
}
B64cf5e:L64cf5e:{c.instructions+=1;NFSU2_TR(0x64cf5e);
__builtin_memmove((R+4),(R+8),4);
}
B64cf60:L64cf60:{c.instructions+=3;NFSU2_TR(0x64cf60);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64cf61:{NFSU2_TR(0x64cf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cf64:{NFSU2_TR(0x64cf64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cf60u);}goto L64cf60;}}
}
B64cf66:L64cf66:{c.instructions+=2;NFSU2_TR(0x64cf66);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cf67:{NFSU2_TR(0x64cf67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cf5au);}goto L64cf5a;}}
}
B64cf69:L64cf69:{c.instructions+=4;NFSU2_TR(0x64cf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cf6c:{NFSU2_TR(0x64cf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cf70:{NFSU2_TR(0x64cf70);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B64cf74:{NFSU2_TR(0x64cf74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cef5u);}goto L64cef5;}}
}
B64cf7a:L64cf7a:{c.instructions+=1;NFSU2_TR(0x64cf7a);
TAIL_STATIC(0x64d036u,64d);
}
B64cf7f:L64cf7f:{c.instructions+=13;NFSU2_TR(0x64cf7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cf82:{NFSU2_TR(0x64cf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cf85:{NFSU2_TR(0x64cf85);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cf87:{NFSU2_TR(0x64cf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cf8a:{NFSU2_TR(0x64cf8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cf8d:{NFSU2_TR(0x64cf8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64cf8e:{NFSU2_TR(0x64cf8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cf90:{NFSU2_TR(0x64cf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64cf97:{NFSU2_TR(0x64cf97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cf9a:{NFSU2_TR(0x64cf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cf9d:{NFSU2_TR(0x64cf9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfa0:{NFSU2_TR(0x64cfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfa3:{NFSU2_TR(0x64cfa3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cfa8;}}
}
B64cfa5:L64cfa5:{c.instructions+=1;NFSU2_TR(0x64cfa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfa8:L64cfa8:{c.instructions+=3;NFSU2_TR(0x64cfa8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64cfaa:{NFSU2_TR(0x64cfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfad:{NFSU2_TR(0x64cfad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64cfb2;}}
}
B64cfaf:L64cfaf:{c.instructions+=1;NFSU2_TR(0x64cfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfb2:L64cfb2:{c.instructions+=3;NFSU2_TR(0x64cfb2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cfb4:{NFSU2_TR(0x64cfb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64cfb5:{NFSU2_TR(0x64cfb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64cfb7:L64cfb7:{c.instructions+=1;NFSU2_TR(0x64cfb7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64cfb9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cfb7u);}goto L64cfb7;}
}
B64cfb9:L64cfb9:{c.instructions+=3;NFSU2_TR(0x64cfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64cfbd:{NFSU2_TR(0x64cfbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cfc1:{NFSU2_TR(0x64cfc1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x64d010u,64d);}
}
B64cfc3:L64cfc3:{c.instructions+=5;NFSU2_TR(0x64cfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64cfc6:{NFSU2_TR(0x64cfc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfc9:{NFSU2_TR(0x64cfc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64cfcb:{NFSU2_TR(0x64cfcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64cfce:{NFSU2_TR(0x64cfce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64cff3;}}
}
B64cfd0:L64cfd0:{c.instructions+=1;NFSU2_TR(0x64cfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cfd3:L64cfd3:{c.instructions+=3;NFSU2_TR(0x64cfd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cfd4:{NFSU2_TR(0x64cfd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64cfd5:{NFSU2_TR(0x64cfd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64cfdaull));
TAIL_STATIC(0x64a939u,64a);
}
B64cfda:L64cfda:{c.instructions+=3;NFSU2_TR(0x64cfda);
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
B64cfdc:{NFSU2_TR(0x64cfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64cfdf:{NFSU2_TR(0x64cfdf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x64d036u,64d);}
}
B64cfe1:L64cfe1:{c.instructions+=5;NFSU2_TR(0x64cfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cfe4:{NFSU2_TR(0x64cfe4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64cfe5:{NFSU2_TR(0x64cfe5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B64cfe8:{NFSU2_TR(0x64cfe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64cfeb:{NFSU2_TR(0x64cfeb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cfd3u);}goto L64cfd3;}}
}
B64cfed:L64cfed:{c.instructions+=2;NFSU2_TR(0x64cfed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64cff0:{NFSU2_TR(0x64cff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64cff3:L64cff3:{c.instructions+=2;NFSU2_TR(0x64cff3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64cff5:{NFSU2_TR(0x64cff5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x64d001u,64d);}
}
B64cff7:L64cff7:{c.instructions+=2;NFSU2_TR(0x64cff7);
__builtin_memmove((R+0),(R+8),4);
}
B64cff9:{NFSU2_TR(0x64cff9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64cffb:L64cffb:{c.instructions+=3;NFSU2_TR(0x64cffb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64cffc:{NFSU2_TR(0x64cffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64cfff:{NFSU2_TR(0x64cfff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64cffbu);}goto L64cffb;}}
TAIL_STATIC(0x64d001u,64d);
}
XIT:NFSU2_TR_EXIT(0x64c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
