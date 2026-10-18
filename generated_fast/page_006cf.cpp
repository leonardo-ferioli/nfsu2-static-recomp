#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a7(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6cf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6cf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 page_6cf(Cpu& c){return body_6cf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6cf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6cf000:goto L6cf000;
case 0x6cf001:c.instructions+=2;goto B6cf001;
case 0x6cf003:c.instructions+=1;goto B6cf003;
case 0x6cf008:goto L6cf008;
case 0x6cf00a:c.instructions+=1;goto B6cf00a;
case 0x6cf010:goto L6cf010;
case 0x6cf013:c.instructions+=5;goto B6cf013;
case 0x6cf017:c.instructions+=4;goto B6cf017;
case 0x6cf01a:c.instructions+=3;goto B6cf01a;
case 0x6cf01c:c.instructions+=2;goto B6cf01c;
case 0x6cf01e:c.instructions+=1;goto B6cf01e;
case 0x6cf024:goto L6cf024;
case 0x6cf028:c.instructions+=2;goto B6cf028;
case 0x6cf02a:c.instructions+=1;goto B6cf02a;
case 0x6cf02c:goto L6cf02c;
case 0x6cf02f:goto L6cf02f;
case 0x6cf031:c.instructions+=3;goto B6cf031;
case 0x6cf034:c.instructions+=2;goto B6cf034;
case 0x6cf038:c.instructions+=1;goto B6cf038;
case 0x6cf03a:goto L6cf03a;
case 0x6cf03d:c.instructions+=5;goto B6cf03d;
case 0x6cf040:c.instructions+=4;goto B6cf040;
case 0x6cf043:c.instructions+=3;goto B6cf043;
case 0x6cf048:c.instructions+=2;goto B6cf048;
case 0x6cf04b:c.instructions+=1;goto B6cf04b;
case 0x6cf04d:goto L6cf04d;
case 0x6cf050:c.instructions+=1;goto B6cf050;
case 0x6cf052:goto L6cf052;
case 0x6cf055:c.instructions+=1;goto B6cf055;
case 0x6cf057:goto L6cf057;
case 0x6cf05b:c.instructions+=5;goto B6cf05b;
case 0x6cf05e:c.instructions+=4;goto B6cf05e;
case 0x6cf061:c.instructions+=3;goto B6cf061;
case 0x6cf064:c.instructions+=2;goto B6cf064;
case 0x6cf067:c.instructions+=1;goto B6cf067;
case 0x6cf069:goto L6cf069;
case 0x6cf06b:goto L6cf06b;
case 0x6cf06e:goto L6cf06e;
case 0x6cf071:c.instructions+=1;goto B6cf071;
case 0x6cf073:goto L6cf073;
case 0x6cf077:c.instructions+=2;goto B6cf077;
case 0x6cf079:c.instructions+=1;goto B6cf079;
case 0x6cf07b:goto L6cf07b;
case 0x6cf07e:c.instructions+=5;goto B6cf07e;
case 0x6cf080:c.instructions+=4;goto B6cf080;
case 0x6cf083:c.instructions+=3;goto B6cf083;
case 0x6cf085:c.instructions+=2;goto B6cf085;
case 0x6cf088:c.instructions+=1;goto B6cf088;
case 0x6cf08a:goto L6cf08a;
case 0x6cf08c:c.instructions+=3;goto B6cf08c;
case 0x6cf08f:c.instructions+=2;goto B6cf08f;
case 0x6cf093:c.instructions+=1;goto B6cf093;
case 0x6cf095:goto L6cf095;
case 0x6cf098:c.instructions+=5;goto B6cf098;
case 0x6cf09b:c.instructions+=4;goto B6cf09b;
case 0x6cf09e:c.instructions+=3;goto B6cf09e;
case 0x6cf0a3:c.instructions+=2;goto B6cf0a3;
case 0x6cf0a6:c.instructions+=1;goto B6cf0a6;
case 0x6cf0a8:goto L6cf0a8;
case 0x6cf0ab:c.instructions+=1;goto B6cf0ab;
case 0x6cf0ad:goto L6cf0ad;
case 0x6cf0b0:c.instructions+=1;goto B6cf0b0;
case 0x6cf0b2:goto L6cf0b2;
case 0x6cf0b5:c.instructions+=4;goto B6cf0b5;
case 0x6cf0b8:c.instructions+=3;goto B6cf0b8;
case 0x6cf0bb:c.instructions+=2;goto B6cf0bb;
case 0x6cf0be:c.instructions+=1;goto B6cf0be;
case 0x6cf0c0:goto L6cf0c0;
case 0x6cf0c2:goto L6cf0c2;
case 0x6cf0c5:goto L6cf0c5;
case 0x6cf0c8:c.instructions+=1;goto B6cf0c8;
case 0x6cf0ce:goto L6cf0ce;
case 0x6cf0d0:c.instructions+=1;goto B6cf0d0;
case 0x6cf0d2:goto L6cf0d2;
case 0x6cf0d5:goto L6cf0d5;
case 0x6cf0d9:c.instructions+=2;goto B6cf0d9;
case 0x6cf0db:c.instructions+=1;goto B6cf0db;
case 0x6cf0e1:goto L6cf0e1;
case 0x6cf0e3:c.instructions+=1;goto B6cf0e3;
case 0x6cf0e6:goto L6cf0e6;
case 0x6cf0e9:c.instructions+=14;goto B6cf0e9;
case 0x6cf0eb:c.instructions+=13;goto B6cf0eb;
case 0x6cf0ee:c.instructions+=12;goto B6cf0ee;
case 0x6cf0f1:c.instructions+=11;goto B6cf0f1;
case 0x6cf0f4:c.instructions+=10;goto B6cf0f4;
case 0x6cf0f7:c.instructions+=9;goto B6cf0f7;
case 0x6cf0fa:c.instructions+=8;goto B6cf0fa;
case 0x6cf0fb:c.instructions+=7;goto B6cf0fb;
case 0x6cf0fc:c.instructions+=6;goto B6cf0fc;
case 0x6cf0ff:c.instructions+=5;goto B6cf0ff;
case 0x6cf102:c.instructions+=4;goto B6cf102;
case 0x6cf104:c.instructions+=3;goto B6cf104;
case 0x6cf107:c.instructions+=2;goto B6cf107;
case 0x6cf10a:c.instructions+=1;goto B6cf10a;
case 0x6cf10f:goto L6cf10f;
case 0x6cf112:c.instructions+=4;goto B6cf112;
case 0x6cf115:c.instructions+=3;goto B6cf115;
case 0x6cf118:c.instructions+=2;goto B6cf118;
case 0x6cf11c:c.instructions+=1;goto B6cf11c;
case 0x6cf11e:goto L6cf11e;
case 0x6cf121:c.instructions+=31;goto B6cf121;
case 0x6cf124:c.instructions+=30;goto B6cf124;
case 0x6cf127:c.instructions+=29;goto B6cf127;
case 0x6cf129:c.instructions+=28;goto B6cf129;
case 0x6cf12c:c.instructions+=27;goto B6cf12c;
case 0x6cf12f:c.instructions+=26;goto B6cf12f;
case 0x6cf132:c.instructions+=25;goto B6cf132;
case 0x6cf135:c.instructions+=24;goto B6cf135;
case 0x6cf138:c.instructions+=23;goto B6cf138;
case 0x6cf13b:c.instructions+=22;goto B6cf13b;
case 0x6cf13e:c.instructions+=21;goto B6cf13e;
case 0x6cf141:c.instructions+=20;goto B6cf141;
case 0x6cf144:c.instructions+=19;goto B6cf144;
case 0x6cf147:c.instructions+=18;goto B6cf147;
case 0x6cf14a:c.instructions+=17;goto B6cf14a;
case 0x6cf14d:c.instructions+=16;goto B6cf14d;
case 0x6cf152:c.instructions+=15;goto B6cf152;
case 0x6cf155:c.instructions+=14;goto B6cf155;
case 0x6cf158:c.instructions+=13;goto B6cf158;
case 0x6cf15b:c.instructions+=12;goto B6cf15b;
case 0x6cf15e:c.instructions+=11;goto B6cf15e;
case 0x6cf164:c.instructions+=10;goto B6cf164;
case 0x6cf167:c.instructions+=9;goto B6cf167;
case 0x6cf16a:c.instructions+=8;goto B6cf16a;
case 0x6cf16d:c.instructions+=7;goto B6cf16d;
case 0x6cf170:c.instructions+=6;goto B6cf170;
case 0x6cf173:c.instructions+=5;goto B6cf173;
case 0x6cf174:c.instructions+=4;goto B6cf174;
case 0x6cf177:c.instructions+=3;goto B6cf177;
case 0x6cf17a:c.instructions+=2;goto B6cf17a;
case 0x6cf17d:c.instructions+=1;goto B6cf17d;
case 0x6cf183:goto L6cf183;
case 0x6cf189:c.instructions+=3;goto B6cf189;
case 0x6cf18c:c.instructions+=2;goto B6cf18c;
case 0x6cf18e:c.instructions+=1;goto B6cf18e;
case 0x6cf190:goto L6cf190;
case 0x6cf195:c.instructions+=1;goto B6cf195;
case 0x6cf197:goto L6cf197;
case 0x6cf199:c.instructions+=1;goto B6cf199;
case 0x6cf19a:goto L6cf19a;
case 0x6cf19b:c.instructions+=4;goto B6cf19b;
case 0x6cf19c:c.instructions+=3;goto B6cf19c;
case 0x6cf19d:c.instructions+=2;goto B6cf19d;
case 0x6cf19e:c.instructions+=1;goto B6cf19e;
case 0x6cf19f:goto L6cf19f;
case 0x6cf1a1:c.instructions+=13;goto B6cf1a1;
case 0x6cf1a2:c.instructions+=12;goto B6cf1a2;
case 0x6cf1a4:c.instructions+=11;goto B6cf1a4;
case 0x6cf1a7:c.instructions+=10;goto B6cf1a7;
case 0x6cf1ae:c.instructions+=9;goto B6cf1ae;
case 0x6cf1b4:c.instructions+=8;goto B6cf1b4;
case 0x6cf1b6:c.instructions+=7;goto B6cf1b6;
case 0x6cf1b7:c.instructions+=6;goto B6cf1b7;
case 0x6cf1b8:c.instructions+=5;goto B6cf1b8;
case 0x6cf1ba:c.instructions+=4;goto B6cf1ba;
case 0x6cf1c0:c.instructions+=3;goto B6cf1c0;
case 0x6cf1c6:c.instructions+=2;goto B6cf1c6;
case 0x6cf1c7:c.instructions+=1;goto B6cf1c7;
case 0x6cf1cd:goto L6cf1cd;
case 0x6cf1d2:c.instructions+=14;goto B6cf1d2;
case 0x6cf1d4:c.instructions+=13;goto B6cf1d4;
case 0x6cf1d7:c.instructions+=12;goto B6cf1d7;
case 0x6cf1d9:c.instructions+=11;goto B6cf1d9;
case 0x6cf1dc:c.instructions+=10;goto B6cf1dc;
case 0x6cf1df:c.instructions+=9;goto B6cf1df;
case 0x6cf1e2:c.instructions+=8;goto B6cf1e2;
case 0x6cf1e5:c.instructions+=7;goto B6cf1e5;
case 0x6cf1e8:c.instructions+=6;goto B6cf1e8;
case 0x6cf1eb:c.instructions+=5;goto B6cf1eb;
case 0x6cf1ee:c.instructions+=4;goto B6cf1ee;
case 0x6cf1f1:c.instructions+=3;goto B6cf1f1;
case 0x6cf1f6:c.instructions+=2;goto B6cf1f6;
case 0x6cf1f9:c.instructions+=1;goto B6cf1f9;
case 0x6cf1fb:goto L6cf1fb;
case 0x6cf1fd:c.instructions+=2;goto B6cf1fd;
case 0x6cf200:c.instructions+=1;goto B6cf200;
case 0x6cf202:goto L6cf202;
case 0x6cf205:c.instructions+=6;goto B6cf205;
case 0x6cf207:c.instructions+=5;goto B6cf207;
case 0x6cf20a:c.instructions+=4;goto B6cf20a;
case 0x6cf20d:c.instructions+=3;goto B6cf20d;
case 0x6cf210:c.instructions+=2;goto B6cf210;
case 0x6cf213:c.instructions+=1;goto B6cf213;
case 0x6cf219:goto L6cf219;
case 0x6cf21c:goto L6cf21c;
case 0x6cf220:c.instructions+=4;goto B6cf220;
case 0x6cf224:c.instructions+=3;goto B6cf224;
case 0x6cf227:c.instructions+=2;goto B6cf227;
case 0x6cf22c:c.instructions+=1;goto B6cf22c;
case 0x6cf22e:goto L6cf22e;
case 0x6cf231:c.instructions+=2;goto B6cf231;
case 0x6cf234:c.instructions+=1;goto B6cf234;
case 0x6cf237:goto L6cf237;
case 0x6cf23a:c.instructions+=8;goto B6cf23a;
case 0x6cf240:c.instructions+=7;goto B6cf240;
case 0x6cf243:c.instructions+=6;goto B6cf243;
case 0x6cf246:c.instructions+=5;goto B6cf246;
case 0x6cf249:c.instructions+=4;goto B6cf249;
case 0x6cf24b:c.instructions+=3;goto B6cf24b;
case 0x6cf24d:c.instructions+=2;goto B6cf24d;
case 0x6cf250:c.instructions+=1;goto B6cf250;
case 0x6cf256:goto L6cf256;
case 0x6cf258:c.instructions+=5;goto B6cf258;
case 0x6cf25b:c.instructions+=4;goto B6cf25b;
case 0x6cf25e:c.instructions+=3;goto B6cf25e;
case 0x6cf263:c.instructions+=2;goto B6cf263;
case 0x6cf265:c.instructions+=1;goto B6cf265;
case 0x6cf267:goto L6cf267;
case 0x6cf26b:c.instructions+=1;goto B6cf26b;
case 0x6cf271:goto L6cf271;
case 0x6cf272:c.instructions+=3;goto B6cf272;
case 0x6cf275:c.instructions+=2;goto B6cf275;
case 0x6cf278:c.instructions+=1;goto B6cf278;
case 0x6cf27a:goto L6cf27a;
case 0x6cf27c:c.instructions+=5;goto B6cf27c;
case 0x6cf27e:c.instructions+=4;goto B6cf27e;
case 0x6cf283:c.instructions+=3;goto B6cf283;
case 0x6cf284:c.instructions+=2;goto B6cf284;
case 0x6cf287:c.instructions+=1;goto B6cf287;
case 0x6cf289:goto L6cf289;
case 0x6cf28f:c.instructions+=1;goto B6cf28f;
case 0x6cf291:goto L6cf291;
case 0x6cf294:c.instructions+=6;goto B6cf294;
case 0x6cf299:c.instructions+=5;goto B6cf299;
case 0x6cf29c:c.instructions+=4;goto B6cf29c;
case 0x6cf29f:c.instructions+=3;goto B6cf29f;
case 0x6cf2a6:c.instructions+=2;goto B6cf2a6;
case 0x6cf2ab:c.instructions+=1;goto B6cf2ab;
case 0x6cf2ad:goto L6cf2ad;
case 0x6cf2b0:c.instructions+=2;goto B6cf2b0;
case 0x6cf2b3:c.instructions+=1;goto B6cf2b3;
case 0x6cf2b5:goto L6cf2b5;
case 0x6cf2b7:c.instructions+=3;goto B6cf2b7;
case 0x6cf2ba:c.instructions+=2;goto B6cf2ba;
case 0x6cf2bd:c.instructions+=1;goto B6cf2bd;
case 0x6cf2bf:goto L6cf2bf;
case 0x6cf2c2:c.instructions+=5;goto B6cf2c2;
case 0x6cf2c5:c.instructions+=4;goto B6cf2c5;
case 0x6cf2c8:c.instructions+=3;goto B6cf2c8;
case 0x6cf2cd:c.instructions+=2;goto B6cf2cd;
case 0x6cf2cf:c.instructions+=1;goto B6cf2cf;
case 0x6cf2d1:goto L6cf2d1;
case 0x6cf2d5:c.instructions+=1;goto B6cf2d5;
case 0x6cf2d7:goto L6cf2d7;
case 0x6cf2da:c.instructions+=4;goto B6cf2da;
case 0x6cf2dd:c.instructions+=3;goto B6cf2dd;
case 0x6cf2e0:c.instructions+=2;goto B6cf2e0;
case 0x6cf2e3:c.instructions+=1;goto B6cf2e3;
case 0x6cf2e5:goto L6cf2e5;
case 0x6cf2e7:c.instructions+=4;goto B6cf2e7;
case 0x6cf2e9:c.instructions+=3;goto B6cf2e9;
case 0x6cf2ee:c.instructions+=2;goto B6cf2ee;
case 0x6cf2ef:c.instructions+=1;goto B6cf2ef;
case 0x6cf2f0:goto L6cf2f0;
case 0x6cf2f1:c.instructions+=2;goto B6cf2f1;
case 0x6cf2f2:c.instructions+=1;goto B6cf2f2;
case 0x6cf2f7:goto L6cf2f7;
case 0x6cf2f9:goto L6cf2f9;
case 0x6cf2fb:c.instructions+=1;goto B6cf2fb;
case 0x6cf2fc:goto L6cf2fc;
case 0x6cf2fd:c.instructions+=4;goto B6cf2fd;
case 0x6cf2fe:c.instructions+=3;goto B6cf2fe;
case 0x6cf2ff:c.instructions+=2;goto B6cf2ff;
case 0x6cf300:c.instructions+=1;goto B6cf300;
case 0x6cf301:goto L6cf301;
case 0x6cf303:c.instructions+=12;goto B6cf303;
case 0x6cf304:c.instructions+=11;goto B6cf304;
case 0x6cf306:c.instructions+=10;goto B6cf306;
case 0x6cf309:c.instructions+=9;goto B6cf309;
case 0x6cf30d:c.instructions+=8;goto B6cf30d;
case 0x6cf30e:c.instructions+=7;goto B6cf30e;
case 0x6cf310:c.instructions+=6;goto B6cf310;
case 0x6cf312:c.instructions+=5;goto B6cf312;
case 0x6cf315:c.instructions+=4;goto B6cf315;
case 0x6cf316:c.instructions+=3;goto B6cf316;
case 0x6cf318:c.instructions+=2;goto B6cf318;
case 0x6cf319:c.instructions+=1;goto B6cf319;
case 0x6cf31b:goto L6cf31b;
case 0x6cf31e:c.instructions+=1;goto B6cf31e;
case 0x6cf320:goto L6cf320;
case 0x6cf326:c.instructions+=1;goto B6cf326;
case 0x6cf329:goto L6cf329;
case 0x6cf32b:c.instructions+=4;goto B6cf32b;
case 0x6cf32d:c.instructions+=3;goto B6cf32d;
case 0x6cf333:c.instructions+=2;goto B6cf333;
case 0x6cf339:c.instructions+=1;goto B6cf339;
case 0x6cf33b:goto L6cf33b;
case 0x6cf33d:c.instructions+=1;goto B6cf33d;
case 0x6cf342:goto L6cf342;
case 0x6cf347:c.instructions+=13;goto B6cf347;
case 0x6cf349:c.instructions+=12;goto B6cf349;
case 0x6cf34c:c.instructions+=11;goto B6cf34c;
case 0x6cf34f:c.instructions+=10;goto B6cf34f;
case 0x6cf350:c.instructions+=9;goto B6cf350;
case 0x6cf353:c.instructions+=8;goto B6cf353;
case 0x6cf355:c.instructions+=7;goto B6cf355;
case 0x6cf358:c.instructions+=6;goto B6cf358;
case 0x6cf35b:c.instructions+=5;goto B6cf35b;
case 0x6cf35e:c.instructions+=4;goto B6cf35e;
case 0x6cf361:c.instructions+=3;goto B6cf361;
case 0x6cf364:c.instructions+=2;goto B6cf364;
case 0x6cf368:c.instructions+=1;goto B6cf368;
case 0x6cf36a:goto L6cf36a;
case 0x6cf36d:c.instructions+=2;goto B6cf36d;
case 0x6cf36f:c.instructions+=1;goto B6cf36f;
case 0x6cf371:goto L6cf371;
case 0x6cf373:c.instructions+=5;goto B6cf373;
case 0x6cf376:c.instructions+=4;goto B6cf376;
case 0x6cf379:c.instructions+=3;goto B6cf379;
case 0x6cf37c:c.instructions+=2;goto B6cf37c;
case 0x6cf380:c.instructions+=1;goto B6cf380;
case 0x6cf386:goto L6cf386;
case 0x6cf389:goto L6cf389;
case 0x6cf38f:c.instructions+=3;goto B6cf38f;
case 0x6cf392:c.instructions+=2;goto B6cf392;
case 0x6cf395:c.instructions+=1;goto B6cf395;
case 0x6cf397:goto L6cf397;
case 0x6cf39a:goto L6cf39a;
case 0x6cf39c:c.instructions+=4;goto B6cf39c;
case 0x6cf39f:c.instructions+=3;goto B6cf39f;
case 0x6cf3a5:c.instructions+=2;goto B6cf3a5;
case 0x6cf3a8:c.instructions+=1;goto B6cf3a8;
case 0x6cf3aa:goto L6cf3aa;
case 0x6cf3ad:c.instructions+=1;goto B6cf3ad;
case 0x6cf3b0:goto L6cf3b0;
case 0x6cf3b3:c.instructions+=8;goto B6cf3b3;
case 0x6cf3b9:c.instructions+=7;goto B6cf3b9;
case 0x6cf3bc:c.instructions+=6;goto B6cf3bc;
case 0x6cf3bf:c.instructions+=5;goto B6cf3bf;
case 0x6cf3c2:c.instructions+=4;goto B6cf3c2;
case 0x6cf3c4:c.instructions+=3;goto B6cf3c4;
case 0x6cf3c6:c.instructions+=2;goto B6cf3c6;
case 0x6cf3c9:c.instructions+=1;goto B6cf3c9;
case 0x6cf3cf:goto L6cf3cf;
case 0x6cf3d2:c.instructions+=1;goto B6cf3d2;
case 0x6cf3d4:goto L6cf3d4;
case 0x6cf3d6:c.instructions+=5;goto B6cf3d6;
case 0x6cf3d9:c.instructions+=4;goto B6cf3d9;
case 0x6cf3dc:c.instructions+=3;goto B6cf3dc;
case 0x6cf3e1:c.instructions+=2;goto B6cf3e1;
case 0x6cf3e6:c.instructions+=1;goto B6cf3e6;
case 0x6cf3ec:goto L6cf3ec;
case 0x6cf3ee:c.instructions+=3;goto B6cf3ee;
case 0x6cf3f1:c.instructions+=2;goto B6cf3f1;
case 0x6cf3f5:c.instructions+=1;goto B6cf3f5;
case 0x6cf3f7:goto L6cf3f7;
case 0x6cf3f9:c.instructions+=5;goto B6cf3f9;
case 0x6cf3fc:c.instructions+=4;goto B6cf3fc;
case 0x6cf3ff:c.instructions+=3;goto B6cf3ff;
case 0x6cf406:c.instructions+=2;goto B6cf406;
case 0x6cf408:c.instructions+=1;goto B6cf408;
case 0x6cf40a:goto L6cf40a;
case 0x6cf414:goto L6cf414;
case 0x6cf417:c.instructions+=5;goto B6cf417;
case 0x6cf41a:c.instructions+=4;goto B6cf41a;
case 0x6cf41d:c.instructions+=3;goto B6cf41d;
case 0x6cf41f:c.instructions+=2;goto B6cf41f;
case 0x6cf422:c.instructions+=1;goto B6cf422;
case 0x6cf424:goto L6cf424;
case 0x6cf427:c.instructions+=3;goto B6cf427;
case 0x6cf429:c.instructions+=2;goto B6cf429;
case 0x6cf42a:c.instructions+=1;goto B6cf42a;
case 0x6cf42c:goto L6cf42c;
case 0x6cf42f:c.instructions+=6;goto B6cf42f;
case 0x6cf434:c.instructions+=5;goto B6cf434;
case 0x6cf435:c.instructions+=4;goto B6cf435;
case 0x6cf438:c.instructions+=3;goto B6cf438;
case 0x6cf439:c.instructions+=2;goto B6cf439;
case 0x6cf43a:c.instructions+=1;goto B6cf43a;
case 0x6cf43c:goto L6cf43c;
case 0x6cf43d:c.instructions+=4;goto B6cf43d;
case 0x6cf442:c.instructions+=3;goto B6cf442;
case 0x6cf445:c.instructions+=2;goto B6cf445;
case 0x6cf44a:c.instructions+=1;goto B6cf44a;
case 0x6cf44f:goto L6cf44f;
case 0x6cf454:goto L6cf454;
case 0x6cf45b:c.instructions+=2;goto B6cf45b;
case 0x6cf45d:c.instructions+=1;goto B6cf45d;
case 0x6cf45f:goto L6cf45f;
case 0x6cf465:c.instructions+=5;goto B6cf465;
case 0x6cf46a:c.instructions+=4;goto B6cf46a;
case 0x6cf46f:c.instructions+=3;goto B6cf46f;
case 0x6cf472:c.instructions+=2;goto B6cf472;
case 0x6cf473:c.instructions+=1;goto B6cf473;
case 0x6cf478:goto L6cf478;
case 0x6cf47b:goto L6cf47b;
case 0x6cf47d:c.instructions+=1;goto B6cf47d;
case 0x6cf47f:goto L6cf47f;
case 0x6cf481:c.instructions+=1;goto B6cf481;
case 0x6cf482:goto L6cf482;
case 0x6cf483:goto L6cf483;
case 0x6cf484:c.instructions+=3;goto B6cf484;
case 0x6cf485:c.instructions+=2;goto B6cf485;
case 0x6cf486:c.instructions+=1;goto B6cf486;
case 0x6cf489:goto L6cf489;
case 0x6cf48b:c.instructions+=15;goto B6cf48b;
case 0x6cf48c:c.instructions+=14;goto B6cf48c;
case 0x6cf48e:c.instructions+=13;goto B6cf48e;
case 0x6cf48f:c.instructions+=12;goto B6cf48f;
case 0x6cf490:c.instructions+=11;goto B6cf490;
case 0x6cf492:c.instructions+=10;goto B6cf492;
case 0x6cf498:c.instructions+=9;goto B6cf498;
case 0x6cf49a:c.instructions+=8;goto B6cf49a;
case 0x6cf49c:c.instructions+=7;goto B6cf49c;
case 0x6cf49d:c.instructions+=6;goto B6cf49d;
case 0x6cf4a2:c.instructions+=5;goto B6cf4a2;
case 0x6cf4a7:c.instructions+=4;goto B6cf4a7;
case 0x6cf4a8:c.instructions+=3;goto B6cf4a8;
case 0x6cf4ab:c.instructions+=2;goto B6cf4ab;
case 0x6cf4b0:c.instructions+=1;goto B6cf4b0;
case 0x6cf4b2:goto L6cf4b2;
case 0x6cf4b8:c.instructions+=13;goto B6cf4b8;
case 0x6cf4ba:c.instructions+=12;goto B6cf4ba;
case 0x6cf4bd:c.instructions+=11;goto B6cf4bd;
case 0x6cf4bf:c.instructions+=10;goto B6cf4bf;
case 0x6cf4c2:c.instructions+=9;goto B6cf4c2;
case 0x6cf4c5:c.instructions+=8;goto B6cf4c5;
case 0x6cf4c8:c.instructions+=7;goto B6cf4c8;
case 0x6cf4cb:c.instructions+=6;goto B6cf4cb;
case 0x6cf4cc:c.instructions+=5;goto B6cf4cc;
case 0x6cf4cf:c.instructions+=4;goto B6cf4cf;
case 0x6cf4d2:c.instructions+=3;goto B6cf4d2;
case 0x6cf4d5:c.instructions+=2;goto B6cf4d5;
case 0x6cf4d6:c.instructions+=1;goto B6cf4d6;
case 0x6cf4d8:goto L6cf4d8;
case 0x6cf4de:c.instructions+=5;goto B6cf4de;
case 0x6cf4e1:c.instructions+=4;goto B6cf4e1;
case 0x6cf4e3:c.instructions+=3;goto B6cf4e3;
case 0x6cf4e5:c.instructions+=2;goto B6cf4e5;
case 0x6cf4e8:c.instructions+=1;goto B6cf4e8;
case 0x6cf4ea:goto L6cf4ea;
case 0x6cf4ec:c.instructions+=1;goto B6cf4ec;
case 0x6cf4ee:goto L6cf4ee;
case 0x6cf4f4:c.instructions+=10;goto B6cf4f4;
case 0x6cf4f5:c.instructions+=9;goto B6cf4f5;
case 0x6cf4f7:c.instructions+=8;goto B6cf4f7;
case 0x6cf4f9:c.instructions+=7;goto B6cf4f9;
case 0x6cf4fa:c.instructions+=6;goto B6cf4fa;
case 0x6cf4fc:c.instructions+=5;goto B6cf4fc;
case 0x6cf4fe:c.instructions+=4;goto B6cf4fe;
case 0x6cf503:c.instructions+=3;goto B6cf503;
case 0x6cf504:c.instructions+=2;goto B6cf504;
case 0x6cf506:c.instructions+=1;goto B6cf506;
case 0x6cf50b:goto L6cf50b;
case 0x6cf50d:c.instructions+=2;goto B6cf50d;
case 0x6cf50f:c.instructions+=1;goto B6cf50f;
case 0x6cf511:goto L6cf511;
case 0x6cf512:c.instructions+=2;goto B6cf512;
case 0x6cf514:c.instructions+=1;goto B6cf514;
case 0x6cf519:goto L6cf519;
case 0x6cf51b:c.instructions+=2;goto B6cf51b;
case 0x6cf51e:c.instructions+=1;goto B6cf51e;
case 0x6cf520:goto L6cf520;
case 0x6cf522:goto L6cf522;
case 0x6cf525:goto L6cf525;
case 0x6cf526:c.instructions+=3;goto B6cf526;
case 0x6cf527:c.instructions+=2;goto B6cf527;
case 0x6cf528:c.instructions+=1;goto B6cf528;
case 0x6cf529:goto L6cf529;
case 0x6cf52b:c.instructions+=14;goto B6cf52b;
case 0x6cf52c:c.instructions+=13;goto B6cf52c;
case 0x6cf52e:c.instructions+=12;goto B6cf52e;
case 0x6cf531:c.instructions+=11;goto B6cf531;
case 0x6cf532:c.instructions+=10;goto B6cf532;
case 0x6cf533:c.instructions+=9;goto B6cf533;
case 0x6cf534:c.instructions+=8;goto B6cf534;
case 0x6cf536:c.instructions+=7;goto B6cf536;
case 0x6cf53d:c.instructions+=6;goto B6cf53d;
case 0x6cf543:c.instructions+=5;goto B6cf543;
case 0x6cf545:c.instructions+=4;goto B6cf545;
case 0x6cf547:c.instructions+=3;goto B6cf547;
case 0x6cf54d:c.instructions+=2;goto B6cf54d;
case 0x6cf553:c.instructions+=1;goto B6cf553;
case 0x6cf559:goto L6cf559;
case 0x6cf55f:c.instructions+=2;goto B6cf55f;
case 0x6cf566:c.instructions+=1;goto B6cf566;
case 0x6cf568:goto L6cf568;
case 0x6cf56b:c.instructions+=2;goto B6cf56b;
case 0x6cf56e:c.instructions+=1;goto B6cf56e;
case 0x6cf571:goto L6cf571;
case 0x6cf573:c.instructions+=2;goto B6cf573;
case 0x6cf575:c.instructions+=1;goto B6cf575;
case 0x6cf577:goto L6cf577;
case 0x6cf57b:goto L6cf57b;
case 0x6cf57e:c.instructions+=3;goto B6cf57e;
case 0x6cf581:c.instructions+=2;goto B6cf581;
case 0x6cf584:c.instructions+=1;goto B6cf584;
case 0x6cf586:goto L6cf586;
case 0x6cf58a:c.instructions+=1;goto B6cf58a;
case 0x6cf58c:goto L6cf58c;
case 0x6cf58e:c.instructions+=7;goto B6cf58e;
case 0x6cf590:c.instructions+=6;goto B6cf590;
case 0x6cf592:c.instructions+=5;goto B6cf592;
case 0x6cf598:c.instructions+=4;goto B6cf598;
case 0x6cf599:c.instructions+=3;goto B6cf599;
case 0x6cf59a:c.instructions+=2;goto B6cf59a;
case 0x6cf59c:c.instructions+=1;goto B6cf59c;
case 0x6cf5a1:goto L6cf5a1;
case 0x6cf5a7:c.instructions+=2;goto B6cf5a7;
case 0x6cf5a9:c.instructions+=1;goto B6cf5a9;
case 0x6cf5af:goto L6cf5af;
case 0x6cf5b2:c.instructions+=1;goto B6cf5b2;
case 0x6cf5b4:goto L6cf5b4;
case 0x6cf5ba:goto L6cf5ba;
case 0x6cf5bc:c.instructions+=12;goto B6cf5bc;
case 0x6cf5bf:c.instructions+=11;goto B6cf5bf;
case 0x6cf5c2:c.instructions+=10;goto B6cf5c2;
case 0x6cf5c5:c.instructions+=9;goto B6cf5c5;
case 0x6cf5cb:c.instructions+=8;goto B6cf5cb;
case 0x6cf5ce:c.instructions+=7;goto B6cf5ce;
case 0x6cf5d1:c.instructions+=6;goto B6cf5d1;
case 0x6cf5d3:c.instructions+=5;goto B6cf5d3;
case 0x6cf5d6:c.instructions+=4;goto B6cf5d6;
case 0x6cf5d9:c.instructions+=3;goto B6cf5d9;
case 0x6cf5dc:c.instructions+=2;goto B6cf5dc;
case 0x6cf5e0:c.instructions+=1;goto B6cf5e0;
case 0x6cf5e2:goto L6cf5e2;
case 0x6cf5e5:c.instructions+=2;goto B6cf5e5;
case 0x6cf5e8:c.instructions+=1;goto B6cf5e8;
case 0x6cf5ea:goto L6cf5ea;
case 0x6cf5ec:c.instructions+=5;goto B6cf5ec;
case 0x6cf5ef:c.instructions+=4;goto B6cf5ef;
case 0x6cf5f2:c.instructions+=3;goto B6cf5f2;
case 0x6cf5f5:c.instructions+=2;goto B6cf5f5;
case 0x6cf5f9:c.instructions+=1;goto B6cf5f9;
case 0x6cf5ff:goto L6cf5ff;
case 0x6cf602:c.instructions+=1;goto B6cf602;
case 0x6cf605:goto L6cf605;
case 0x6cf607:c.instructions+=4;goto B6cf607;
case 0x6cf609:c.instructions+=3;goto B6cf609;
case 0x6cf60b:c.instructions+=2;goto B6cf60b;
case 0x6cf60e:c.instructions+=1;goto B6cf60e;
case 0x6cf610:goto L6cf610;
case 0x6cf613:c.instructions+=8;goto B6cf613;
case 0x6cf615:c.instructions+=7;goto B6cf615;
case 0x6cf618:c.instructions+=6;goto B6cf618;
case 0x6cf61b:c.instructions+=5;goto B6cf61b;
case 0x6cf61e:c.instructions+=4;goto B6cf61e;
case 0x6cf620:c.instructions+=3;goto B6cf620;
case 0x6cf622:c.instructions+=2;goto B6cf622;
case 0x6cf625:c.instructions+=1;goto B6cf625;
case 0x6cf62b:goto L6cf62b;
case 0x6cf62c:c.instructions+=2;goto B6cf62c;
case 0x6cf62e:c.instructions+=1;goto B6cf62e;
case 0x6cf630:goto L6cf630;
case 0x6cf633:c.instructions+=2;goto B6cf633;
case 0x6cf635:c.instructions+=1;goto B6cf635;
case 0x6cf637:goto L6cf637;
case 0x6cf63d:c.instructions+=10;goto B6cf63d;
case 0x6cf63f:c.instructions+=9;goto B6cf63f;
case 0x6cf641:c.instructions+=8;goto B6cf641;
case 0x6cf642:c.instructions+=7;goto B6cf642;
case 0x6cf643:c.instructions+=6;goto B6cf643;
case 0x6cf645:c.instructions+=5;goto B6cf645;
case 0x6cf64a:c.instructions+=4;goto B6cf64a;
case 0x6cf64f:c.instructions+=3;goto B6cf64f;
case 0x6cf650:c.instructions+=2;goto B6cf650;
case 0x6cf652:c.instructions+=1;goto B6cf652;
case 0x6cf657:goto L6cf657;
case 0x6cf659:c.instructions+=1;goto B6cf659;
case 0x6cf65b:goto L6cf65b;
case 0x6cf65d:c.instructions+=2;goto B6cf65d;
case 0x6cf664:c.instructions+=1;goto B6cf664;
case 0x6cf666:goto L6cf666;
case 0x6cf669:c.instructions+=2;goto B6cf669;
case 0x6cf66c:c.instructions+=1;goto B6cf66c;
case 0x6cf66f:goto L6cf66f;
case 0x6cf671:c.instructions+=2;goto B6cf671;
case 0x6cf673:c.instructions+=1;goto B6cf673;
case 0x6cf675:goto L6cf675;
case 0x6cf678:goto L6cf678;
case 0x6cf67b:c.instructions+=3;goto B6cf67b;
case 0x6cf67e:c.instructions+=2;goto B6cf67e;
case 0x6cf681:c.instructions+=1;goto B6cf681;
case 0x6cf683:goto L6cf683;
case 0x6cf686:c.instructions+=1;goto B6cf686;
case 0x6cf688:goto L6cf688;
case 0x6cf689:c.instructions+=6;goto B6cf689;
case 0x6cf68a:c.instructions+=5;goto B6cf68a;
case 0x6cf68c:c.instructions+=4;goto B6cf68c;
case 0x6cf691:c.instructions+=3;goto B6cf691;
case 0x6cf692:c.instructions+=2;goto B6cf692;
case 0x6cf695:c.instructions+=1;goto B6cf695;
case 0x6cf697:goto L6cf697;
case 0x6cf69a:c.instructions+=6;goto B6cf69a;
case 0x6cf6a0:c.instructions+=5;goto B6cf6a0;
case 0x6cf6a1:c.instructions+=4;goto B6cf6a1;
case 0x6cf6a2:c.instructions+=3;goto B6cf6a2;
case 0x6cf6a7:c.instructions+=2;goto B6cf6a7;
case 0x6cf6a8:c.instructions+=1;goto B6cf6a8;
case 0x6cf6ab:goto L6cf6ab;
case 0x6cf6ac:c.instructions+=3;goto B6cf6ac;
case 0x6cf6ae:c.instructions+=2;goto B6cf6ae;
case 0x6cf6af:c.instructions+=1;goto B6cf6af;
case 0x6cf6b4:goto L6cf6b4;
case 0x6cf6b6:c.instructions+=1;goto B6cf6b6;
case 0x6cf6b8:goto L6cf6b8;
case 0x6cf6ba:c.instructions+=1;goto B6cf6ba;
case 0x6cf6bc:goto L6cf6bc;
case 0x6cf6be:goto L6cf6be;
case 0x6cf6c0:c.instructions+=1;goto B6cf6c0;
case 0x6cf6c1:goto L6cf6c1;
case 0x6cf6c2:c.instructions+=4;goto B6cf6c2;
case 0x6cf6c3:c.instructions+=3;goto B6cf6c3;
case 0x6cf6c4:c.instructions+=2;goto B6cf6c4;
case 0x6cf6c5:c.instructions+=1;goto B6cf6c5;
case 0x6cf6c6:goto L6cf6c6;
case 0x6cf6c8:c.instructions+=14;goto B6cf6c8;
case 0x6cf6c9:c.instructions+=13;goto B6cf6c9;
case 0x6cf6cb:c.instructions+=12;goto B6cf6cb;
case 0x6cf6ce:c.instructions+=11;goto B6cf6ce;
case 0x6cf6d4:c.instructions+=10;goto B6cf6d4;
case 0x6cf6d6:c.instructions+=9;goto B6cf6d6;
case 0x6cf6d7:c.instructions+=8;goto B6cf6d7;
case 0x6cf6d8:c.instructions+=7;goto B6cf6d8;
case 0x6cf6da:c.instructions+=6;goto B6cf6da;
case 0x6cf6df:c.instructions+=5;goto B6cf6df;
case 0x6cf6e4:c.instructions+=4;goto B6cf6e4;
case 0x6cf6e6:c.instructions+=3;goto B6cf6e6;
case 0x6cf6eb:c.instructions+=2;goto B6cf6eb;
case 0x6cf6ee:c.instructions+=1;goto B6cf6ee;
case 0x6cf6f0:goto L6cf6f0;
case 0x6cf6f2:c.instructions+=2;goto B6cf6f2;
case 0x6cf6f3:c.instructions+=1;goto B6cf6f3;
case 0x6cf6f8:goto L6cf6f8;
case 0x6cf6fe:c.instructions+=12;goto B6cf6fe;
case 0x6cf6ff:c.instructions+=11;goto B6cf6ff;
case 0x6cf705:c.instructions+=10;goto B6cf705;
case 0x6cf708:c.instructions+=9;goto B6cf708;
case 0x6cf70a:c.instructions+=8;goto B6cf70a;
case 0x6cf70d:c.instructions+=7;goto B6cf70d;
case 0x6cf70e:c.instructions+=6;goto B6cf70e;
case 0x6cf710:c.instructions+=5;goto B6cf710;
case 0x6cf712:c.instructions+=4;goto B6cf712;
case 0x6cf713:c.instructions+=3;goto B6cf713;
case 0x6cf718:c.instructions+=2;goto B6cf718;
case 0x6cf719:c.instructions+=1;goto B6cf719;
case 0x6cf71e:goto L6cf71e;
case 0x6cf721:c.instructions+=2;goto B6cf721;
case 0x6cf723:c.instructions+=1;goto B6cf723;
case 0x6cf729:goto L6cf729;
case 0x6cf72d:c.instructions+=2;goto B6cf72d;
case 0x6cf72f:c.instructions+=1;goto B6cf72f;
case 0x6cf731:goto L6cf731;
case 0x6cf734:c.instructions+=2;goto B6cf734;
case 0x6cf737:c.instructions+=1;goto B6cf737;
case 0x6cf73a:goto L6cf73a;
case 0x6cf73c:c.instructions+=2;goto B6cf73c;
case 0x6cf73e:c.instructions+=1;goto B6cf73e;
case 0x6cf744:goto L6cf744;
case 0x6cf747:c.instructions+=4;goto B6cf747;
case 0x6cf74a:c.instructions+=3;goto B6cf74a;
case 0x6cf74d:c.instructions+=2;goto B6cf74d;
case 0x6cf750:c.instructions+=1;goto B6cf750;
case 0x6cf752:goto L6cf752;
case 0x6cf755:c.instructions+=16;goto B6cf755;
case 0x6cf758:c.instructions+=15;goto B6cf758;
case 0x6cf759:c.instructions+=14;goto B6cf759;
case 0x6cf75b:c.instructions+=13;goto B6cf75b;
case 0x6cf75e:c.instructions+=12;goto B6cf75e;
case 0x6cf761:c.instructions+=11;goto B6cf761;
case 0x6cf762:c.instructions+=10;goto B6cf762;
case 0x6cf765:c.instructions+=9;goto B6cf765;
case 0x6cf768:c.instructions+=8;goto B6cf768;
case 0x6cf76a:c.instructions+=7;goto B6cf76a;
case 0x6cf76b:c.instructions+=6;goto B6cf76b;
case 0x6cf76c:c.instructions+=5;goto B6cf76c;
case 0x6cf76d:c.instructions+=4;goto B6cf76d;
case 0x6cf76e:c.instructions+=3;goto B6cf76e;
case 0x6cf771:c.instructions+=2;goto B6cf771;
case 0x6cf774:c.instructions+=1;goto B6cf774;
case 0x6cf779:goto L6cf779;
case 0x6cf77b:c.instructions+=1;goto B6cf77b;
case 0x6cf77d:goto L6cf77d;
case 0x6cf77f:c.instructions+=1;goto B6cf77f;
case 0x6cf784:goto L6cf784;
case 0x6cf787:c.instructions+=8;goto B6cf787;
case 0x6cf78a:c.instructions+=7;goto B6cf78a;
case 0x6cf78b:c.instructions+=6;goto B6cf78b;
case 0x6cf78e:c.instructions+=5;goto B6cf78e;
case 0x6cf791:c.instructions+=4;goto B6cf791;
case 0x6cf792:c.instructions+=3;goto B6cf792;
case 0x6cf793:c.instructions+=2;goto B6cf793;
case 0x6cf796:c.instructions+=1;goto B6cf796;
case 0x6cf79b:goto L6cf79b;
case 0x6cf79d:c.instructions+=1;goto B6cf79d;
case 0x6cf79f:goto L6cf79f;
case 0x6cf7a2:c.instructions+=8;goto B6cf7a2;
case 0x6cf7a5:c.instructions+=7;goto B6cf7a5;
case 0x6cf7a6:c.instructions+=6;goto B6cf7a6;
case 0x6cf7a9:c.instructions+=5;goto B6cf7a9;
case 0x6cf7aa:c.instructions+=4;goto B6cf7aa;
case 0x6cf7ad:c.instructions+=3;goto B6cf7ad;
case 0x6cf7b0:c.instructions+=2;goto B6cf7b0;
case 0x6cf7b1:c.instructions+=1;goto B6cf7b1;
case 0x6cf7b6:goto L6cf7b6;
case 0x6cf7b8:c.instructions+=1;goto B6cf7b8;
case 0x6cf7ba:goto L6cf7ba;
case 0x6cf7bd:c.instructions+=8;goto B6cf7bd;
case 0x6cf7c0:c.instructions+=7;goto B6cf7c0;
case 0x6cf7c1:c.instructions+=6;goto B6cf7c1;
case 0x6cf7c4:c.instructions+=5;goto B6cf7c4;
case 0x6cf7c5:c.instructions+=4;goto B6cf7c5;
case 0x6cf7c8:c.instructions+=3;goto B6cf7c8;
case 0x6cf7c9:c.instructions+=2;goto B6cf7c9;
case 0x6cf7cc:c.instructions+=1;goto B6cf7cc;
case 0x6cf7d1:goto L6cf7d1;
case 0x6cf7d3:c.instructions+=1;goto B6cf7d3;
case 0x6cf7d5:goto L6cf7d5;
case 0x6cf7d8:c.instructions+=8;goto B6cf7d8;
case 0x6cf7db:c.instructions+=7;goto B6cf7db;
case 0x6cf7dc:c.instructions+=6;goto B6cf7dc;
case 0x6cf7df:c.instructions+=5;goto B6cf7df;
case 0x6cf7e2:c.instructions+=4;goto B6cf7e2;
case 0x6cf7e3:c.instructions+=3;goto B6cf7e3;
case 0x6cf7e6:c.instructions+=2;goto B6cf7e6;
case 0x6cf7e7:c.instructions+=1;goto B6cf7e7;
case 0x6cf7ec:goto L6cf7ec;
case 0x6cf7ee:c.instructions+=1;goto B6cf7ee;
case 0x6cf7f0:goto L6cf7f0;
case 0x6cf7f3:c.instructions+=8;goto B6cf7f3;
case 0x6cf7f6:c.instructions+=7;goto B6cf7f6;
case 0x6cf7f7:c.instructions+=6;goto B6cf7f7;
case 0x6cf7fa:c.instructions+=5;goto B6cf7fa;
case 0x6cf7fd:c.instructions+=4;goto B6cf7fd;
case 0x6cf7fe:c.instructions+=3;goto B6cf7fe;
case 0x6cf7ff:c.instructions+=2;goto B6cf7ff;
case 0x6cf802:c.instructions+=1;goto B6cf802;
case 0x6cf807:goto L6cf807;
case 0x6cf809:c.instructions+=1;goto B6cf809;
case 0x6cf80f:goto L6cf80f;
case 0x6cf812:c.instructions+=8;goto B6cf812;
case 0x6cf815:c.instructions+=7;goto B6cf815;
case 0x6cf816:c.instructions+=6;goto B6cf816;
case 0x6cf819:c.instructions+=5;goto B6cf819;
case 0x6cf81a:c.instructions+=4;goto B6cf81a;
case 0x6cf81d:c.instructions+=3;goto B6cf81d;
case 0x6cf820:c.instructions+=2;goto B6cf820;
case 0x6cf821:c.instructions+=1;goto B6cf821;
case 0x6cf826:goto L6cf826;
case 0x6cf828:c.instructions+=1;goto B6cf828;
case 0x6cf82e:goto L6cf82e;
case 0x6cf831:c.instructions+=8;goto B6cf831;
case 0x6cf834:c.instructions+=7;goto B6cf834;
case 0x6cf835:c.instructions+=6;goto B6cf835;
case 0x6cf838:c.instructions+=5;goto B6cf838;
case 0x6cf839:c.instructions+=4;goto B6cf839;
case 0x6cf83c:c.instructions+=3;goto B6cf83c;
case 0x6cf83d:c.instructions+=2;goto B6cf83d;
case 0x6cf840:c.instructions+=1;goto B6cf840;
case 0x6cf845:goto L6cf845;
case 0x6cf847:goto L6cf847;
case 0x6cf849:c.instructions+=1;goto B6cf849;
case 0x6cf84a:goto L6cf84a;
case 0x6cf84b:goto L6cf84b;
case 0x6cf84c:c.instructions+=3;goto B6cf84c;
case 0x6cf84d:c.instructions+=2;goto B6cf84d;
case 0x6cf84e:c.instructions+=1;goto B6cf84e;
case 0x6cf84f:goto L6cf84f;
case 0x6cf851:c.instructions+=12;goto B6cf851;
case 0x6cf852:c.instructions+=11;goto B6cf852;
case 0x6cf854:c.instructions+=10;goto B6cf854;
case 0x6cf85a:c.instructions+=9;goto B6cf85a;
case 0x6cf85b:c.instructions+=8;goto B6cf85b;
case 0x6cf85c:c.instructions+=7;goto B6cf85c;
case 0x6cf85e:c.instructions+=6;goto B6cf85e;
case 0x6cf860:c.instructions+=5;goto B6cf860;
case 0x6cf862:c.instructions+=4;goto B6cf862;
case 0x6cf865:c.instructions+=3;goto B6cf865;
case 0x6cf866:c.instructions+=2;goto B6cf866;
case 0x6cf869:c.instructions+=1;goto B6cf869;
case 0x6cf86b:goto L6cf86b;
case 0x6cf86e:c.instructions+=8;goto B6cf86e;
case 0x6cf871:c.instructions+=7;goto B6cf871;
case 0x6cf875:c.instructions+=6;goto B6cf875;
case 0x6cf878:c.instructions+=5;goto B6cf878;
case 0x6cf87b:c.instructions+=4;goto B6cf87b;
case 0x6cf87f:c.instructions+=3;goto B6cf87f;
case 0x6cf880:c.instructions+=2;goto B6cf880;
case 0x6cf883:c.instructions+=1;goto B6cf883;
case 0x6cf885:goto L6cf885;
case 0x6cf888:c.instructions+=15;goto B6cf888;
case 0x6cf889:c.instructions+=14;goto B6cf889;
case 0x6cf88a:c.instructions+=13;goto B6cf88a;
case 0x6cf88b:c.instructions+=12;goto B6cf88b;
case 0x6cf88d:c.instructions+=11;goto B6cf88d;
case 0x6cf88e:c.instructions+=10;goto B6cf88e;
case 0x6cf88f:c.instructions+=9;goto B6cf88f;
case 0x6cf890:c.instructions+=8;goto B6cf890;
case 0x6cf891:c.instructions+=7;goto B6cf891;
case 0x6cf894:c.instructions+=6;goto B6cf894;
case 0x6cf897:c.instructions+=5;goto B6cf897;
case 0x6cf898:c.instructions+=4;goto B6cf898;
case 0x6cf89a:c.instructions+=3;goto B6cf89a;
case 0x6cf89c:c.instructions+=2;goto B6cf89c;
case 0x6cf89e:c.instructions+=1;goto B6cf89e;
case 0x6cf8a3:goto L6cf8a3;
case 0x6cf8a6:c.instructions+=1;goto B6cf8a6;
case 0x6cf8a8:goto L6cf8a8;
case 0x6cf8ab:c.instructions+=6;goto B6cf8ab;
case 0x6cf8ad:c.instructions+=5;goto B6cf8ad;
case 0x6cf8b0:c.instructions+=4;goto B6cf8b0;
case 0x6cf8b2:c.instructions+=3;goto B6cf8b2;
case 0x6cf8b4:c.instructions+=2;goto B6cf8b4;
case 0x6cf8b8:c.instructions+=1;goto B6cf8b8;
case 0x6cf8ba:goto L6cf8ba;
case 0x6cf8be:c.instructions+=1;goto B6cf8be;
case 0x6cf8c0:goto L6cf8c0;
case 0x6cf8c2:c.instructions+=6;goto B6cf8c2;
case 0x6cf8c5:c.instructions+=5;goto B6cf8c5;
case 0x6cf8c8:c.instructions+=4;goto B6cf8c8;
case 0x6cf8cb:c.instructions+=3;goto B6cf8cb;
case 0x6cf8ce:c.instructions+=2;goto B6cf8ce;
case 0x6cf8d1:c.instructions+=1;goto B6cf8d1;
case 0x6cf8d4:goto L6cf8d4;
case 0x6cf8d7:c.instructions+=8;goto B6cf8d7;
case 0x6cf8da:c.instructions+=7;goto B6cf8da;
case 0x6cf8de:c.instructions+=6;goto B6cf8de;
case 0x6cf8e1:c.instructions+=5;goto B6cf8e1;
case 0x6cf8e4:c.instructions+=4;goto B6cf8e4;
case 0x6cf8e8:c.instructions+=3;goto B6cf8e8;
case 0x6cf8e9:c.instructions+=2;goto B6cf8e9;
case 0x6cf8ec:c.instructions+=1;goto B6cf8ec;
case 0x6cf8ee:goto L6cf8ee;
case 0x6cf8f0:goto L6cf8f0;
case 0x6cf8f2:c.instructions+=2;goto B6cf8f2;
case 0x6cf8f5:c.instructions+=1;goto B6cf8f5;
case 0x6cf8f7:goto L6cf8f7;
case 0x6cf8fa:c.instructions+=5;goto B6cf8fa;
case 0x6cf8fd:c.instructions+=4;goto B6cf8fd;
case 0x6cf8fe:c.instructions+=3;goto B6cf8fe;
case 0x6cf901:c.instructions+=2;goto B6cf901;
case 0x6cf903:c.instructions+=1;goto B6cf903;
case 0x6cf905:goto L6cf905;
case 0x6cf907:c.instructions+=1;goto B6cf907;
case 0x6cf90d:goto L6cf90d;
case 0x6cf90e:c.instructions+=8;goto B6cf90e;
case 0x6cf90f:c.instructions+=7;goto B6cf90f;
case 0x6cf915:c.instructions+=6;goto B6cf915;
case 0x6cf916:c.instructions+=5;goto B6cf916;
case 0x6cf91c:c.instructions+=4;goto B6cf91c;
case 0x6cf91d:c.instructions+=3;goto B6cf91d;
case 0x6cf91f:c.instructions+=2;goto B6cf91f;
case 0x6cf925:c.instructions+=1;goto B6cf925;
case 0x6cf92a:goto L6cf92a;
case 0x6cf92d:c.instructions+=2;goto B6cf92d;
case 0x6cf930:c.instructions+=1;goto B6cf930;
case 0x6cf936:goto L6cf936;
case 0x6cf939:c.instructions+=8;goto B6cf939;
case 0x6cf93c:c.instructions+=7;goto B6cf93c;
case 0x6cf93f:c.instructions+=6;goto B6cf93f;
case 0x6cf941:c.instructions+=5;goto B6cf941;
case 0x6cf943:c.instructions+=4;goto B6cf943;
case 0x6cf948:c.instructions+=3;goto B6cf948;
case 0x6cf94e:c.instructions+=2;goto B6cf94e;
case 0x6cf951:c.instructions+=1;goto B6cf951;
case 0x6cf957:goto L6cf957;
case 0x6cf95a:c.instructions+=4;goto B6cf95a;
case 0x6cf960:c.instructions+=3;goto B6cf960;
case 0x6cf963:c.instructions+=2;goto B6cf963;
case 0x6cf966:c.instructions+=1;goto B6cf966;
case 0x6cf96c:goto L6cf96c;
case 0x6cf972:c.instructions+=1;goto B6cf972;
case 0x6cf978:goto L6cf978;
case 0x6cf97e:c.instructions+=1;goto B6cf97e;
case 0x6cf984:goto L6cf984;
case 0x6cf98a:c.instructions+=1;goto B6cf98a;
case 0x6cf990:goto L6cf990;
case 0x6cf996:c.instructions+=1;goto B6cf996;
case 0x6cf99c:goto L6cf99c;
case 0x6cf99f:c.instructions+=8;goto B6cf99f;
case 0x6cf9a2:c.instructions+=7;goto B6cf9a2;
case 0x6cf9a5:c.instructions+=6;goto B6cf9a5;
case 0x6cf9a8:c.instructions+=5;goto B6cf9a8;
case 0x6cf9ab:c.instructions+=4;goto B6cf9ab;
case 0x6cf9ae:c.instructions+=3;goto B6cf9ae;
case 0x6cf9b1:c.instructions+=2;goto B6cf9b1;
case 0x6cf9b5:c.instructions+=1;goto B6cf9b5;
case 0x6cf9bb:goto L6cf9bb;
case 0x6cf9be:c.instructions+=1;goto B6cf9be;
case 0x6cf9c4:goto L6cf9c4;
case 0x6cf9ca:c.instructions+=5;goto B6cf9ca;
case 0x6cf9cd:c.instructions+=4;goto B6cf9cd;
case 0x6cf9cf:c.instructions+=3;goto B6cf9cf;
case 0x6cf9d1:c.instructions+=2;goto B6cf9d1;
case 0x6cf9d4:c.instructions+=1;goto B6cf9d4;
case 0x6cf9da:goto L6cf9da;
case 0x6cf9db:c.instructions+=9;goto B6cf9db;
case 0x6cf9dd:c.instructions+=8;goto B6cf9dd;
case 0x6cf9de:c.instructions+=7;goto B6cf9de;
case 0x6cf9e1:c.instructions+=6;goto B6cf9e1;
case 0x6cf9e3:c.instructions+=5;goto B6cf9e3;
case 0x6cf9e4:c.instructions+=4;goto B6cf9e4;
case 0x6cf9e5:c.instructions+=3;goto B6cf9e5;
case 0x6cf9e6:c.instructions+=2;goto B6cf9e6;
case 0x6cf9e8:c.instructions+=1;goto B6cf9e8;
case 0x6cf9ed:goto L6cf9ed;
case 0x6cf9ef:c.instructions+=3;goto B6cf9ef;
case 0x6cf9f1:c.instructions+=2;goto B6cf9f1;
case 0x6cf9f4:c.instructions+=1;goto B6cf9f4;
case 0x6cf9fa:goto L6cf9fa;
case 0x6cf9fd:c.instructions+=8;goto B6cf9fd;
case 0x6cfa00:c.instructions+=7;goto B6cfa00;
case 0x6cfa02:c.instructions+=6;goto B6cfa02;
case 0x6cfa05:c.instructions+=5;goto B6cfa05;
case 0x6cfa08:c.instructions+=4;goto B6cfa08;
case 0x6cfa09:c.instructions+=3;goto B6cfa09;
case 0x6cfa0b:c.instructions+=2;goto B6cfa0b;
case 0x6cfa0e:c.instructions+=1;goto B6cfa0e;
case 0x6cfa13:goto L6cfa13;
case 0x6cfa15:c.instructions+=1;goto B6cfa15;
case 0x6cfa1b:goto L6cfa1b;
case 0x6cfa1e:c.instructions+=2;goto B6cfa1e;
case 0x6cfa20:c.instructions+=1;goto B6cfa20;
case 0x6cfa25:goto L6cfa25;
case 0x6cfa27:c.instructions+=1;goto B6cfa27;
case 0x6cfa2d:goto L6cfa2d;
case 0x6cfa34:c.instructions+=7;goto B6cfa34;
case 0x6cfa37:c.instructions+=6;goto B6cfa37;
case 0x6cfa39:c.instructions+=5;goto B6cfa39;
case 0x6cfa3c:c.instructions+=4;goto B6cfa3c;
case 0x6cfa3f:c.instructions+=3;goto B6cfa3f;
case 0x6cfa42:c.instructions+=2;goto B6cfa42;
case 0x6cfa45:c.instructions+=1;goto B6cfa45;
case 0x6cfa4a:goto L6cfa4a;
case 0x6cfa50:c.instructions+=1;goto B6cfa50;
case 0x6cfa52:goto L6cfa52;
case 0x6cfa58:c.instructions+=1;goto B6cfa58;
case 0x6cfa5e:goto L6cfa5e;
case 0x6cfa61:c.instructions+=9;goto B6cfa61;
case 0x6cfa64:c.instructions+=8;goto B6cfa64;
case 0x6cfa66:c.instructions+=7;goto B6cfa66;
case 0x6cfa69:c.instructions+=6;goto B6cfa69;
case 0x6cfa6c:c.instructions+=5;goto B6cfa6c;
case 0x6cfa6f:c.instructions+=4;goto B6cfa6f;
case 0x6cfa72:c.instructions+=3;goto B6cfa72;
case 0x6cfa75:c.instructions+=2;goto B6cfa75;
case 0x6cfa78:c.instructions+=1;goto B6cfa78;
case 0x6cfa7e:goto L6cfa7e;
case 0x6cfa83:c.instructions+=2;goto B6cfa83;
case 0x6cfa85:c.instructions+=1;goto B6cfa85;
case 0x6cfa8b:goto L6cfa8b;
case 0x6cfa8e:c.instructions+=6;goto B6cfa8e;
case 0x6cfa8f:c.instructions+=5;goto B6cfa8f;
case 0x6cfa90:c.instructions+=4;goto B6cfa90;
case 0x6cfa91:c.instructions+=3;goto B6cfa91;
case 0x6cfa96:c.instructions+=2;goto B6cfa96;
case 0x6cfa98:c.instructions+=1;goto B6cfa98;
case 0x6cfa9d:goto L6cfa9d;
case 0x6cfa9f:c.instructions+=1;goto B6cfa9f;
case 0x6cfaa5:goto L6cfaa5;
case 0x6cfaa8:c.instructions+=9;goto B6cfaa8;
case 0x6cfaab:c.instructions+=8;goto B6cfaab;
case 0x6cfaad:c.instructions+=7;goto B6cfaad;
case 0x6cfab0:c.instructions+=6;goto B6cfab0;
case 0x6cfab3:c.instructions+=5;goto B6cfab3;
case 0x6cfab5:c.instructions+=4;goto B6cfab5;
case 0x6cfab6:c.instructions+=3;goto B6cfab6;
case 0x6cfab9:c.instructions+=2;goto B6cfab9;
case 0x6cfabc:c.instructions+=1;goto B6cfabc;
case 0x6cfac2:goto L6cfac2;
case 0x6cfac5:c.instructions+=4;goto B6cfac5;
case 0x6cfac8:c.instructions+=3;goto B6cfac8;
case 0x6cfacb:c.instructions+=2;goto B6cfacb;
case 0x6cface:c.instructions+=1;goto B6cface;
case 0x6cfad0:goto L6cfad0;
case 0x6cfad3:c.instructions+=2;goto B6cfad3;
case 0x6cfad6:c.instructions+=1;goto B6cfad6;
case 0x6cfad8:goto L6cfad8;
case 0x6cfada:goto L6cfada;
case 0x6cfadd:c.instructions+=8;goto B6cfadd;
case 0x6cfade:c.instructions+=7;goto B6cfade;
case 0x6cfadf:c.instructions+=6;goto B6cfadf;
case 0x6cfae2:c.instructions+=5;goto B6cfae2;
case 0x6cfae3:c.instructions+=4;goto B6cfae3;
case 0x6cfae6:c.instructions+=3;goto B6cfae6;
case 0x6cfae8:c.instructions+=2;goto B6cfae8;
case 0x6cfaeb:c.instructions+=1;goto B6cfaeb;
case 0x6cfaf0:goto L6cfaf0;
case 0x6cfaf3:c.instructions+=6;goto B6cfaf3;
case 0x6cfaf6:c.instructions+=5;goto B6cfaf6;
case 0x6cfaf9:c.instructions+=4;goto B6cfaf9;
case 0x6cfafc:c.instructions+=3;goto B6cfafc;
case 0x6cfaff:c.instructions+=2;goto B6cfaff;
case 0x6cfb02:c.instructions+=1;goto B6cfb02;
case 0x6cfb04:goto L6cfb04;
case 0x6cfb06:goto L6cfb06;
case 0x6cfb09:c.instructions+=9;goto B6cfb09;
case 0x6cfb0c:c.instructions+=8;goto B6cfb0c;
case 0x6cfb0e:c.instructions+=7;goto B6cfb0e;
case 0x6cfb11:c.instructions+=6;goto B6cfb11;
case 0x6cfb14:c.instructions+=5;goto B6cfb14;
case 0x6cfb17:c.instructions+=4;goto B6cfb17;
case 0x6cfb1a:c.instructions+=3;goto B6cfb1a;
case 0x6cfb1d:c.instructions+=2;goto B6cfb1d;
case 0x6cfb20:c.instructions+=1;goto B6cfb20;
case 0x6cfb22:goto L6cfb22;
case 0x6cfb27:c.instructions+=2;goto B6cfb27;
case 0x6cfb29:c.instructions+=1;goto B6cfb29;
case 0x6cfb2b:goto L6cfb2b;
case 0x6cfb2e:c.instructions+=6;goto B6cfb2e;
case 0x6cfb2f:c.instructions+=5;goto B6cfb2f;
case 0x6cfb30:c.instructions+=4;goto B6cfb30;
case 0x6cfb31:c.instructions+=3;goto B6cfb31;
case 0x6cfb36:c.instructions+=2;goto B6cfb36;
case 0x6cfb38:c.instructions+=1;goto B6cfb38;
case 0x6cfb3d:goto L6cfb3d;
case 0x6cfb3f:c.instructions+=1;goto B6cfb3f;
case 0x6cfb41:goto L6cfb41;
case 0x6cfb44:c.instructions+=2;goto B6cfb44;
case 0x6cfb47:c.instructions+=1;goto B6cfb47;
case 0x6cfb49:goto L6cfb49;
case 0x6cfb4c:c.instructions+=3;goto B6cfb4c;
case 0x6cfb4f:c.instructions+=2;goto B6cfb4f;
case 0x6cfb52:c.instructions+=1;goto B6cfb52;
case 0x6cfb58:goto L6cfb58;
case 0x6cfb5a:goto L6cfb5a;
case 0x6cfb5c:c.instructions+=1;goto B6cfb5c;
case 0x6cfb61:goto L6cfb61;
case 0x6cfb63:c.instructions+=1;goto B6cfb63;
case 0x6cfb65:goto L6cfb65;
case 0x6cfb67:goto L6cfb67;
case 0x6cfb68:c.instructions+=4;goto B6cfb68;
case 0x6cfb69:c.instructions+=3;goto B6cfb69;
case 0x6cfb6a:c.instructions+=2;goto B6cfb6a;
case 0x6cfb6b:c.instructions+=1;goto B6cfb6b;
case 0x6cfb6c:goto L6cfb6c;
case 0x6cfb71:c.instructions+=1;goto B6cfb71;
case 0x6cfb73:goto L6cfb73;
case 0x6cfb75:c.instructions+=6;goto B6cfb75;
case 0x6cfb76:c.instructions+=5;goto B6cfb76;
case 0x6cfb78:c.instructions+=4;goto B6cfb78;
case 0x6cfb79:c.instructions+=3;goto B6cfb79;
case 0x6cfb7b:c.instructions+=2;goto B6cfb7b;
case 0x6cfb7d:c.instructions+=1;goto B6cfb7d;
case 0x6cfb82:goto L6cfb82;
case 0x6cfb84:c.instructions+=1;goto B6cfb84;
case 0x6cfb86:goto L6cfb86;
case 0x6cfb8c:c.instructions+=6;goto B6cfb8c;
case 0x6cfb92:c.instructions+=5;goto B6cfb92;
case 0x6cfb94:c.instructions+=4;goto B6cfb94;
case 0x6cfb97:c.instructions+=3;goto B6cfb97;
case 0x6cfb9a:c.instructions+=2;goto B6cfb9a;
case 0x6cfb9c:c.instructions+=1;goto B6cfb9c;
case 0x6cfb9e:goto L6cfb9e;
case 0x6cfb9f:c.instructions+=2;goto B6cfb9f;
case 0x6cfba0:c.instructions+=1;goto B6cfba0;
case 0x6cfba3:goto L6cfba3;
case 0x6cfba5:c.instructions+=10;goto B6cfba5;
case 0x6cfba6:c.instructions+=9;goto B6cfba6;
case 0x6cfba8:c.instructions+=8;goto B6cfba8;
case 0x6cfbab:c.instructions+=7;goto B6cfbab;
case 0x6cfbaf:c.instructions+=6;goto B6cfbaf;
case 0x6cfbb0:c.instructions+=5;goto B6cfbb0;
case 0x6cfbb1:c.instructions+=4;goto B6cfbb1;
case 0x6cfbb3:c.instructions+=3;goto B6cfbb3;
case 0x6cfbb8:c.instructions+=2;goto B6cfbb8;
case 0x6cfbbb:c.instructions+=1;goto B6cfbbb;
case 0x6cfbc0:goto L6cfbc0;
case 0x6cfbc2:c.instructions+=1;goto B6cfbc2;
case 0x6cfbc7:goto L6cfbc7;
case 0x6cfbc9:c.instructions+=2;goto B6cfbc9;
case 0x6cfbcb:c.instructions+=1;goto B6cfbcb;
case 0x6cfbd1:goto L6cfbd1;
case 0x6cfbd7:c.instructions+=4;goto B6cfbd7;
case 0x6cfbd9:c.instructions+=3;goto B6cfbd9;
case 0x6cfbdc:c.instructions+=2;goto B6cfbdc;
case 0x6cfbdd:c.instructions+=1;goto B6cfbdd;
case 0x6cfbe0:goto L6cfbe0;
case 0x6cfbe2:c.instructions+=2;goto B6cfbe2;
case 0x6cfbe4:c.instructions+=1;goto B6cfbe4;
case 0x6cfbea:goto L6cfbea;
case 0x6cfbec:goto L6cfbec;
case 0x6cfbef:c.instructions+=5;goto B6cfbef;
case 0x6cfbf1:c.instructions+=4;goto B6cfbf1;
case 0x6cfbf3:c.instructions+=3;goto B6cfbf3;
case 0x6cfbf5:c.instructions+=2;goto B6cfbf5;
case 0x6cfbf6:c.instructions+=1;goto B6cfbf6;
case 0x6cfbf9:goto L6cfbf9;
case 0x6cfbfa:c.instructions+=4;goto B6cfbfa;
case 0x6cfbfd:c.instructions+=3;goto B6cfbfd;
case 0x6cfbff:c.instructions+=2;goto B6cfbff;
case 0x6cfc00:c.instructions+=1;goto B6cfc00;
case 0x6cfc03:goto L6cfc03;
case 0x6cfc04:c.instructions+=2;goto B6cfc04;
case 0x6cfc07:c.instructions+=1;goto B6cfc07;
case 0x6cfc0c:goto L6cfc0c;
case 0x6cfc0e:c.instructions+=2;goto B6cfc0e;
case 0x6cfc10:c.instructions+=1;goto B6cfc10;
case 0x6cfc16:goto L6cfc16;
case 0x6cfc17:c.instructions+=2;goto B6cfc17;
case 0x6cfc1a:c.instructions+=1;goto B6cfc1a;
case 0x6cfc1f:goto L6cfc1f;
case 0x6cfc21:c.instructions+=2;goto B6cfc21;
case 0x6cfc27:c.instructions+=1;goto B6cfc27;
case 0x6cfc29:goto L6cfc29;
case 0x6cfc2a:c.instructions+=2;goto B6cfc2a;
case 0x6cfc2c:c.instructions+=1;goto B6cfc2c;
case 0x6cfc31:goto L6cfc31;
case 0x6cfc33:c.instructions+=2;goto B6cfc33;
case 0x6cfc35:c.instructions+=1;goto B6cfc35;
case 0x6cfc37:goto L6cfc37;
case 0x6cfc3d:c.instructions+=8;goto B6cfc3d;
case 0x6cfc43:c.instructions+=7;goto B6cfc43;
case 0x6cfc4a:c.instructions+=6;goto B6cfc4a;
case 0x6cfc4b:c.instructions+=5;goto B6cfc4b;
case 0x6cfc4e:c.instructions+=4;goto B6cfc4e;
case 0x6cfc4f:c.instructions+=3;goto B6cfc4f;
case 0x6cfc53:c.instructions+=2;goto B6cfc53;
case 0x6cfc54:c.instructions+=1;goto B6cfc54;
case 0x6cfc59:goto L6cfc59;
case 0x6cfc5f:c.instructions+=6;goto B6cfc5f;
case 0x6cfc62:c.instructions+=5;goto B6cfc62;
case 0x6cfc63:c.instructions+=4;goto B6cfc63;
case 0x6cfc66:c.instructions+=3;goto B6cfc66;
case 0x6cfc67:c.instructions+=2;goto B6cfc67;
case 0x6cfc6a:c.instructions+=1;goto B6cfc6a;
case 0x6cfc6f:goto L6cfc6f;
case 0x6cfc71:c.instructions+=2;goto B6cfc71;
case 0x6cfc73:c.instructions+=1;goto B6cfc73;
case 0x6cfc75:goto L6cfc75;
case 0x6cfc7b:c.instructions+=5;goto B6cfc7b;
case 0x6cfc81:c.instructions+=4;goto B6cfc81;
case 0x6cfc87:c.instructions+=3;goto B6cfc87;
case 0x6cfc8d:c.instructions+=2;goto B6cfc8d;
case 0x6cfc8f:c.instructions+=1;goto B6cfc8f;
case 0x6cfc91:goto L6cfc91;
case 0x6cfc96:c.instructions+=4;goto B6cfc96;
case 0x6cfc9b:c.instructions+=3;goto B6cfc9b;
case 0x6cfc9d:c.instructions+=2;goto B6cfc9d;
case 0x6cfc9e:c.instructions+=1;goto B6cfc9e;
case 0x6cfca3:goto L6cfca3;
case 0x6cfca6:c.instructions+=1;goto B6cfca6;
case 0x6cfcab:goto L6cfcab;
case 0x6cfcac:goto L6cfcac;
case 0x6cfcaf:c.instructions+=2;goto B6cfcaf;
case 0x6cfcb1:c.instructions+=1;goto B6cfcb1;
case 0x6cfcb3:goto L6cfcb3;
case 0x6cfcb5:c.instructions+=2;goto B6cfcb5;
case 0x6cfcb6:c.instructions+=1;goto B6cfcb6;
case 0x6cfcb9:goto L6cfcb9;
case 0x6cfcbd:goto L6cfcbd;
case 0x6cfcc0:c.instructions+=1;goto B6cfcc0;
case 0x6cfcc5:goto L6cfcc5;
case 0x6cfcc6:c.instructions+=4;goto B6cfcc6;
case 0x6cfcc8:c.instructions+=3;goto B6cfcc8;
case 0x6cfcc9:c.instructions+=2;goto B6cfcc9;
case 0x6cfcca:c.instructions+=1;goto B6cfcca;
case 0x6cfccb:goto L6cfccb;
case 0x6cfccd:c.instructions+=16;goto B6cfccd;
case 0x6cfcce:c.instructions+=15;goto B6cfcce;
case 0x6cfcd0:c.instructions+=14;goto B6cfcd0;
case 0x6cfcd6:c.instructions+=13;goto B6cfcd6;
case 0x6cfcd7:c.instructions+=12;goto B6cfcd7;
case 0x6cfcd8:c.instructions+=11;goto B6cfcd8;
case 0x6cfcda:c.instructions+=10;goto B6cfcda;
case 0x6cfce0:c.instructions+=9;goto B6cfce0;
case 0x6cfce2:c.instructions+=8;goto B6cfce2;
case 0x6cfce4:c.instructions+=7;goto B6cfce4;
case 0x6cfce9:c.instructions+=6;goto B6cfce9;
case 0x6cfcea:c.instructions+=5;goto B6cfcea;
case 0x6cfcef:c.instructions+=4;goto B6cfcef;
case 0x6cfcf0:c.instructions+=3;goto B6cfcf0;
case 0x6cfcf3:c.instructions+=2;goto B6cfcf3;
case 0x6cfcf6:c.instructions+=1;goto B6cfcf6;
case 0x6cfcfb:goto L6cfcfb;
case 0x6cfcfd:c.instructions+=5;goto B6cfcfd;
case 0x6cfcfe:c.instructions+=4;goto B6cfcfe;
case 0x6cfd00:c.instructions+=3;goto B6cfd00;
case 0x6cfd02:c.instructions+=2;goto B6cfd02;
case 0x6cfd04:c.instructions+=1;goto B6cfd04;
case 0x6cfd07:goto L6cfd07;
case 0x6cfd09:goto L6cfd09;
case 0x6cfd0f:c.instructions+=18;goto B6cfd0f;
case 0x6cfd10:c.instructions+=17;goto B6cfd10;
case 0x6cfd11:c.instructions+=16;goto B6cfd11;
case 0x6cfd13:c.instructions+=15;goto B6cfd13;
case 0x6cfd16:c.instructions+=14;goto B6cfd16;
case 0x6cfd1c:c.instructions+=13;goto B6cfd1c;
case 0x6cfd1d:c.instructions+=12;goto B6cfd1d;
case 0x6cfd20:c.instructions+=11;goto B6cfd20;
case 0x6cfd23:c.instructions+=10;goto B6cfd23;
case 0x6cfd26:c.instructions+=9;goto B6cfd26;
case 0x6cfd27:c.instructions+=8;goto B6cfd27;
case 0x6cfd2a:c.instructions+=7;goto B6cfd2a;
case 0x6cfd2d:c.instructions+=6;goto B6cfd2d;
case 0x6cfd30:c.instructions+=5;goto B6cfd30;
case 0x6cfd33:c.instructions+=4;goto B6cfd33;
case 0x6cfd36:c.instructions+=3;goto B6cfd36;
case 0x6cfd39:c.instructions+=2;goto B6cfd39;
case 0x6cfd3c:c.instructions+=1;goto B6cfd3c;
case 0x6cfd41:goto L6cfd41;
case 0x6cfd43:c.instructions+=2;goto B6cfd43;
case 0x6cfd45:c.instructions+=1;goto B6cfd45;
case 0x6cfd4b:goto L6cfd4b;
case 0x6cfd4e:c.instructions+=6;goto B6cfd4e;
case 0x6cfd50:c.instructions+=5;goto B6cfd50;
case 0x6cfd52:c.instructions+=4;goto B6cfd52;
case 0x6cfd55:c.instructions+=3;goto B6cfd55;
case 0x6cfd58:c.instructions+=2;goto B6cfd58;
case 0x6cfd5b:c.instructions+=1;goto B6cfd5b;
case 0x6cfd5d:goto L6cfd5d;
case 0x6cfd60:c.instructions+=3;goto B6cfd60;
case 0x6cfd63:c.instructions+=2;goto B6cfd63;
case 0x6cfd66:c.instructions+=1;goto B6cfd66;
case 0x6cfd69:goto L6cfd69;
case 0x6cfd6c:c.instructions+=8;goto B6cfd6c;
case 0x6cfd6e:c.instructions+=7;goto B6cfd6e;
case 0x6cfd71:c.instructions+=6;goto B6cfd71;
case 0x6cfd74:c.instructions+=5;goto B6cfd74;
case 0x6cfd77:c.instructions+=4;goto B6cfd77;
case 0x6cfd7a:c.instructions+=3;goto B6cfd7a;
case 0x6cfd80:c.instructions+=2;goto B6cfd80;
case 0x6cfd83:c.instructions+=1;goto B6cfd83;
case 0x6cfd85:goto L6cfd85;
case 0x6cfd89:c.instructions+=1;goto B6cfd89;
case 0x6cfd8b:goto L6cfd8b;
case 0x6cfd8f:c.instructions+=2;goto B6cfd8f;
case 0x6cfd92:c.instructions+=1;goto B6cfd92;
case 0x6cfd94:goto L6cfd94;
case 0x6cfd96:c.instructions+=1;goto B6cfd96;
case 0x6cfd98:goto L6cfd98;
case 0x6cfd9b:c.instructions+=1;goto B6cfd9b;
case 0x6cfd9d:goto L6cfd9d;
case 0x6cfda1:c.instructions+=1;goto B6cfda1;
case 0x6cfda3:goto L6cfda3;
case 0x6cfda6:c.instructions+=1;goto B6cfda6;
case 0x6cfda8:goto L6cfda8;
case 0x6cfda9:c.instructions+=2;goto B6cfda9;
case 0x6cfdac:c.instructions+=1;goto B6cfdac;
case 0x6cfdae:goto L6cfdae;
case 0x6cfdb2:c.instructions+=1;goto B6cfdb2;
case 0x6cfdb4:goto L6cfdb4;
case 0x6cfdb7:c.instructions+=1;goto B6cfdb7;
case 0x6cfdb9:goto L6cfdb9;
case 0x6cfdba:c.instructions+=2;goto B6cfdba;
case 0x6cfdbd:c.instructions+=1;goto B6cfdbd;
case 0x6cfdbf:goto L6cfdbf;
case 0x6cfdc1:c.instructions+=1;goto B6cfdc1;
case 0x6cfdc3:goto L6cfdc3;
case 0x6cfdc6:goto L6cfdc6;
case 0x6cfdca:c.instructions+=2;goto B6cfdca;
case 0x6cfdcd:c.instructions+=1;goto B6cfdcd;
case 0x6cfdcf:goto L6cfdcf;
case 0x6cfdd2:c.instructions+=13;goto B6cfdd2;
case 0x6cfdd5:c.instructions+=12;goto B6cfdd5;
case 0x6cfdd8:c.instructions+=11;goto B6cfdd8;
case 0x6cfddb:c.instructions+=10;goto B6cfddb;
case 0x6cfddd:c.instructions+=9;goto B6cfddd;
case 0x6cfde0:c.instructions+=8;goto B6cfde0;
case 0x6cfde3:c.instructions+=7;goto B6cfde3;
case 0x6cfde6:c.instructions+=6;goto B6cfde6;
case 0x6cfde8:c.instructions+=5;goto B6cfde8;
case 0x6cfdea:c.instructions+=4;goto B6cfdea;
case 0x6cfdec:c.instructions+=3;goto B6cfdec;
case 0x6cfdef:c.instructions+=2;goto B6cfdef;
case 0x6cfdf0:c.instructions+=1;goto B6cfdf0;
case 0x6cfdf5:goto L6cfdf5;
case 0x6cfdf7:c.instructions+=3;goto B6cfdf7;
case 0x6cfdf8:c.instructions+=2;goto B6cfdf8;
case 0x6cfdfb:c.instructions+=1;goto B6cfdfb;
case 0x6cfe01:goto L6cfe01;
case 0x6cfe02:c.instructions+=1;goto B6cfe02;
case 0x6cfe07:goto L6cfe07;
case 0x6cfe09:c.instructions+=3;goto B6cfe09;
case 0x6cfe0a:c.instructions+=2;goto B6cfe0a;
case 0x6cfe0d:c.instructions+=1;goto B6cfe0d;
case 0x6cfe13:goto L6cfe13;
case 0x6cfe17:c.instructions+=5;goto B6cfe17;
case 0x6cfe19:c.instructions+=4;goto B6cfe19;
case 0x6cfe1c:c.instructions+=3;goto B6cfe1c;
case 0x6cfe1e:c.instructions+=2;goto B6cfe1e;
case 0x6cfe21:c.instructions+=1;goto B6cfe21;
case 0x6cfe23:goto L6cfe23;
case 0x6cfe25:goto L6cfe25;
case 0x6cfe27:c.instructions+=1;goto B6cfe27;
case 0x6cfe2a:goto L6cfe2a;
case 0x6cfe2c:goto L6cfe2c;
case 0x6cfe30:c.instructions+=1;goto B6cfe30;
case 0x6cfe32:goto L6cfe32;
case 0x6cfe35:c.instructions+=7;goto B6cfe35;
case 0x6cfe38:c.instructions+=6;goto B6cfe38;
case 0x6cfe3b:c.instructions+=5;goto B6cfe3b;
case 0x6cfe3f:c.instructions+=4;goto B6cfe3f;
case 0x6cfe42:c.instructions+=3;goto B6cfe42;
case 0x6cfe45:c.instructions+=2;goto B6cfe45;
case 0x6cfe48:c.instructions+=1;goto B6cfe48;
case 0x6cfe4a:goto L6cfe4a;
case 0x6cfe4e:c.instructions+=1;goto B6cfe4e;
case 0x6cfe50:goto L6cfe50;
case 0x6cfe53:c.instructions+=2;goto B6cfe53;
case 0x6cfe56:c.instructions+=1;goto B6cfe56;
case 0x6cfe58:goto L6cfe58;
case 0x6cfe5b:c.instructions+=1;goto B6cfe5b;
case 0x6cfe5d:goto L6cfe5d;
case 0x6cfe5f:c.instructions+=1;goto B6cfe5f;
case 0x6cfe61:goto L6cfe61;
case 0x6cfe64:c.instructions+=1;goto B6cfe64;
case 0x6cfe66:goto L6cfe66;
case 0x6cfe69:c.instructions+=1;goto B6cfe69;
case 0x6cfe6b:goto L6cfe6b;
case 0x6cfe6d:c.instructions+=1;goto B6cfe6d;
case 0x6cfe6f:goto L6cfe6f;
case 0x6cfe75:c.instructions+=2;goto B6cfe75;
case 0x6cfe78:c.instructions+=1;goto B6cfe78;
case 0x6cfe7a:goto L6cfe7a;
case 0x6cfe7d:goto L6cfe7d;
case 0x6cfe80:c.instructions+=7;goto B6cfe80;
case 0x6cfe83:c.instructions+=6;goto B6cfe83;
case 0x6cfe85:c.instructions+=5;goto B6cfe85;
case 0x6cfe88:c.instructions+=4;goto B6cfe88;
case 0x6cfe8a:c.instructions+=3;goto B6cfe8a;
case 0x6cfe8c:c.instructions+=2;goto B6cfe8c;
case 0x6cfe8d:c.instructions+=1;goto B6cfe8d;
case 0x6cfe8f:goto L6cfe8f;
case 0x6cfe92:c.instructions+=4;goto B6cfe92;
case 0x6cfe93:c.instructions+=3;goto B6cfe93;
case 0x6cfe96:c.instructions+=2;goto B6cfe96;
case 0x6cfe99:c.instructions+=1;goto B6cfe99;
case 0x6cfe9b:goto L6cfe9b;
case 0x6cfe9d:goto L6cfe9d;
case 0x6cfe9f:c.instructions+=1;goto B6cfe9f;
case 0x6cfea1:goto L6cfea1;
case 0x6cfea4:c.instructions+=3;goto B6cfea4;
case 0x6cfea7:c.instructions+=2;goto B6cfea7;
case 0x6cfeaa:c.instructions+=1;goto B6cfeaa;
case 0x6cfeac:goto L6cfeac;
case 0x6cfeae:c.instructions+=4;goto B6cfeae;
case 0x6cfeb0:c.instructions+=3;goto B6cfeb0;
case 0x6cfeb2:c.instructions+=2;goto B6cfeb2;
case 0x6cfeb5:c.instructions+=1;goto B6cfeb5;
case 0x6cfeb7:goto L6cfeb7;
case 0x6cfeba:c.instructions+=3;goto B6cfeba;
case 0x6cfebd:c.instructions+=2;goto B6cfebd;
case 0x6cfebf:c.instructions+=1;goto B6cfebf;
case 0x6cfec1:goto L6cfec1;
case 0x6cfec4:c.instructions+=2;goto B6cfec4;
case 0x6cfec7:c.instructions+=1;goto B6cfec7;
case 0x6cfeca:goto L6cfeca;
case 0x6cfecb:c.instructions+=2;goto B6cfecb;
case 0x6cfecd:c.instructions+=1;goto B6cfecd;
case 0x6cfecf:goto L6cfecf;
case 0x6cfed1:goto L6cfed1;
case 0x6cfed4:goto L6cfed4;
case 0x6cfed6:c.instructions+=3;goto B6cfed6;
case 0x6cfed9:c.instructions+=2;goto B6cfed9;
case 0x6cfedc:c.instructions+=1;goto B6cfedc;
case 0x6cfede:goto L6cfede;
case 0x6cfee0:c.instructions+=1;goto B6cfee0;
case 0x6cfee2:goto L6cfee2;
case 0x6cfee5:c.instructions+=3;goto B6cfee5;
case 0x6cfee8:c.instructions+=2;goto B6cfee8;
case 0x6cfeeb:c.instructions+=1;goto B6cfeeb;
case 0x6cfeed:goto L6cfeed;
case 0x6cfef0:c.instructions+=2;goto B6cfef0;
case 0x6cfef3:c.instructions+=1;goto B6cfef3;
case 0x6cfef5:goto L6cfef5;
case 0x6cfef8:c.instructions+=10;goto B6cfef8;
case 0x6cfefb:c.instructions+=9;goto B6cfefb;
case 0x6cfefe:c.instructions+=8;goto B6cfefe;
case 0x6cff01:c.instructions+=7;goto B6cff01;
case 0x6cff04:c.instructions+=6;goto B6cff04;
case 0x6cff06:c.instructions+=5;goto B6cff06;
case 0x6cff09:c.instructions+=4;goto B6cff09;
case 0x6cff0c:c.instructions+=3;goto B6cff0c;
case 0x6cff0e:c.instructions+=2;goto B6cff0e;
case 0x6cff10:c.instructions+=1;goto B6cff10;
case 0x6cff12:goto L6cff12;
case 0x6cff15:c.instructions+=2;goto B6cff15;
case 0x6cff17:c.instructions+=1;goto B6cff17;
case 0x6cff19:goto L6cff19;
case 0x6cff1c:c.instructions+=2;goto B6cff1c;
case 0x6cff20:c.instructions+=1;goto B6cff20;
case 0x6cff22:goto L6cff22;
case 0x6cff25:c.instructions+=2;goto B6cff25;
case 0x6cff27:c.instructions+=1;goto B6cff27;
case 0x6cff29:goto L6cff29;
case 0x6cff2d:c.instructions+=1;goto B6cff2d;
case 0x6cff2f:goto L6cff2f;
case 0x6cff32:c.instructions+=2;goto B6cff32;
case 0x6cff34:c.instructions+=1;goto B6cff34;
case 0x6cff36:goto L6cff36;
case 0x6cff3a:c.instructions+=1;goto B6cff3a;
case 0x6cff3c:goto L6cff3c;
case 0x6cff40:c.instructions+=1;goto B6cff40;
case 0x6cff42:goto L6cff42;
case 0x6cff46:c.instructions+=1;goto B6cff46;
case 0x6cff48:goto L6cff48;
case 0x6cff4b:c.instructions+=3;goto B6cff4b;
case 0x6cff4e:c.instructions+=2;goto B6cff4e;
case 0x6cff51:c.instructions+=1;goto B6cff51;
case 0x6cff54:goto L6cff54;
case 0x6cff55:c.instructions+=2;goto B6cff55;
case 0x6cff58:c.instructions+=1;goto B6cff58;
case 0x6cff5a:goto L6cff5a;
case 0x6cff5c:c.instructions+=3;goto B6cff5c;
case 0x6cff5f:c.instructions+=2;goto B6cff5f;
case 0x6cff62:c.instructions+=1;goto B6cff62;
case 0x6cff68:goto L6cff68;
case 0x6cff6b:c.instructions+=11;goto B6cff6b;
case 0x6cff6e:c.instructions+=10;goto B6cff6e;
case 0x6cff71:c.instructions+=9;goto B6cff71;
case 0x6cff74:c.instructions+=8;goto B6cff74;
case 0x6cff77:c.instructions+=7;goto B6cff77;
case 0x6cff7a:c.instructions+=6;goto B6cff7a;
case 0x6cff7d:c.instructions+=5;goto B6cff7d;
case 0x6cff80:c.instructions+=4;goto B6cff80;
case 0x6cff82:c.instructions+=3;goto B6cff82;
case 0x6cff84:c.instructions+=2;goto B6cff84;
case 0x6cff87:c.instructions+=1;goto B6cff87;
case 0x6cff89:goto L6cff89;
case 0x6cff8b:goto L6cff8b;
case 0x6cff8e:goto L6cff8e;
case 0x6cff91:c.instructions+=6;goto B6cff91;
case 0x6cff94:c.instructions+=5;goto B6cff94;
case 0x6cff97:c.instructions+=4;goto B6cff97;
case 0x6cff9a:c.instructions+=3;goto B6cff9a;
case 0x6cff9d:c.instructions+=2;goto B6cff9d;
case 0x6cffa0:c.instructions+=1;goto B6cffa0;
case 0x6cffa3:goto L6cffa3;
case 0x6cffa5:c.instructions+=3;goto B6cffa5;
case 0x6cffa7:c.instructions+=2;goto B6cffa7;
case 0x6cffa9:c.instructions+=1;goto B6cffa9;
case 0x6cffab:goto L6cffab;
case 0x6cffad:c.instructions+=1;goto B6cffad;
case 0x6cffaf:goto L6cffaf;
case 0x6cffb2:c.instructions+=3;goto B6cffb2;
case 0x6cffb4:c.instructions+=2;goto B6cffb4;
case 0x6cffb7:c.instructions+=1;goto B6cffb7;
case 0x6cffb9:goto L6cffb9;
case 0x6cffba:c.instructions+=5;goto B6cffba;
case 0x6cffbb:c.instructions+=4;goto B6cffbb;
case 0x6cffbc:c.instructions+=3;goto B6cffbc;
case 0x6cffbd:c.instructions+=2;goto B6cffbd;
case 0x6cffbf:c.instructions+=1;goto B6cffbf;
case 0x6cffc1:goto L6cffc1;
case 0x6cffc3:c.instructions+=1;goto B6cffc3;
case 0x6cffc5:goto L6cffc5;
case 0x6cffc7:c.instructions+=1;goto B6cffc7;
case 0x6cffca:goto L6cffca;
case 0x6cffcc:c.instructions+=1;goto B6cffcc;
case 0x6cffce:goto L6cffce;
case 0x6cffd0:goto L6cffd0;
case 0x6cffd3:c.instructions+=3;goto B6cffd3;
case 0x6cffd6:c.instructions+=2;goto B6cffd6;
case 0x6cffd9:c.instructions+=1;goto B6cffd9;
case 0x6cffdb:goto L6cffdb;
case 0x6cffdc:c.instructions+=2;goto B6cffdc;
case 0x6cffdf:c.instructions+=1;goto B6cffdf;
case 0x6cffe1:goto L6cffe1;
case 0x6cffe4:c.instructions+=2;goto B6cffe4;
case 0x6cffe6:c.instructions+=1;goto B6cffe6;
case 0x6cffe8:goto L6cffe8;
case 0x6cffea:goto L6cffea;
case 0x6cffed:c.instructions+=5;goto B6cffed;
case 0x6cfff1:c.instructions+=4;goto B6cfff1;
case 0x6cfff4:c.instructions+=3;goto B6cfff4;
case 0x6cfff5:c.instructions+=2;goto B6cfff5;
case 0x6cfff7:c.instructions+=1;goto B6cfff7;
case 0x6cfff9:goto L6cfff9;
case 0x6cfffc:c.instructions+=1;goto B6cfffc;
case 0x6cffff:goto L6cffff;
default:missing_instruction(c.pc);}
B6cf000:L6cf000:{c.instructions+=3;NFSU2_TR(0x6cf000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf001:{NFSU2_TR(0x6cf001);
__builtin_memmove((R+4),(R+28),4);
}
B6cf003:{NFSU2_TR(0x6cf003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf008ull));
TAIL_STATIC(0x6cbaa7u,6cb);
}
B6cf008:L6cf008:{c.instructions+=2;NFSU2_TR(0x6cf008);
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
B6cf00a:{NFSU2_TR(0x6cf00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf19a;}}
}
B6cf010:L6cf010:{c.instructions+=6;NFSU2_TR(0x6cf010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf013:{NFSU2_TR(0x6cf013);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6cf017:{NFSU2_TR(0x6cf017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf01a:{NFSU2_TR(0x6cf01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf01c:{NFSU2_TR(0x6cf01c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf01e:{NFSU2_TR(0x6cf01e);
if(r1(R+518)){{goto L6cf197;}}
}
B6cf024:L6cf024:{c.instructions+=3;NFSU2_TR(0x6cf024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf028:{NFSU2_TR(0x6cf028);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf02a:{NFSU2_TR(0x6cf02a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf06e;}}
}
B6cf02c:L6cf02c:{c.instructions+=1;NFSU2_TR(0x6cf02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf02f:L6cf02f:{c.instructions+=4;NFSU2_TR(0x6cf02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf031:{NFSU2_TR(0x6cf031);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf034:{NFSU2_TR(0x6cf034);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf038:{NFSU2_TR(0x6cf038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf06e;}}
}
B6cf03a:L6cf03a:{c.instructions+=6;NFSU2_TR(0x6cf03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf03d:{NFSU2_TR(0x6cf03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf040:{NFSU2_TR(0x6cf040);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf043:{NFSU2_TR(0x6cf043);
w4(R+4,u32(0x200ull));
}
B6cf048:{NFSU2_TR(0x6cf048);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf04b:{NFSU2_TR(0x6cf04b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf06b;}}
}
B6cf04d:L6cf04d:{c.instructions+=2;NFSU2_TR(0x6cf04d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf050:{NFSU2_TR(0x6cf050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf057;}}
}
B6cf052:L6cf052:{c.instructions+=2;NFSU2_TR(0x6cf052);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6cf055:{NFSU2_TR(0x6cf055);
if(r1(R+518)){{goto L6cf06b;}}
}
B6cf057:L6cf057:{c.instructions+=6;NFSU2_TR(0x6cf057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf05b:{NFSU2_TR(0x6cf05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf05e:{NFSU2_TR(0x6cf05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf061:{NFSU2_TR(0x6cf061);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cf064:{NFSU2_TR(0x6cf064);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6cf067:{NFSU2_TR(0x6cf067);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf02fu);}goto L6cf02f;}}
}
B6cf069:L6cf069:{c.instructions+=1;NFSU2_TR(0x6cf069);
{goto L6cf06e;}
}
B6cf06b:L6cf06b:{c.instructions+=1;NFSU2_TR(0x6cf06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf06e:L6cf06e:{c.instructions+=2;NFSU2_TR(0x6cf06e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf071:{NFSU2_TR(0x6cf071);
if(r1(R+518)){{goto L6cf0d2;}}
}
B6cf073:L6cf073:{c.instructions+=3;NFSU2_TR(0x6cf073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf077:{NFSU2_TR(0x6cf077);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf079:{NFSU2_TR(0x6cf079);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf0c5;}}
}
B6cf07b:L6cf07b:{c.instructions+=6;NFSU2_TR(0x6cf07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf07e:{NFSU2_TR(0x6cf07e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf080:{NFSU2_TR(0x6cf080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf083:{NFSU2_TR(0x6cf083);
__builtin_memmove((R+0),(R+12),4);
}
B6cf085:{NFSU2_TR(0x6cf085);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cf088:{NFSU2_TR(0x6cf088);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6cf08a:L6cf08a:{c.instructions+=4;NFSU2_TR(0x6cf08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf08c:{NFSU2_TR(0x6cf08c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf08f:{NFSU2_TR(0x6cf08f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf093:{NFSU2_TR(0x6cf093);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf0c5;}}
}
B6cf095:L6cf095:{c.instructions+=6;NFSU2_TR(0x6cf095);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf098:{NFSU2_TR(0x6cf098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf09b:{NFSU2_TR(0x6cf09b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf09e:{NFSU2_TR(0x6cf09e);
w4(R+8,u32(0x200ull));
}
B6cf0a3:{NFSU2_TR(0x6cf0a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf0a6:{NFSU2_TR(0x6cf0a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf0c2;}}
}
B6cf0a8:L6cf0a8:{c.instructions+=2;NFSU2_TR(0x6cf0a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf0ab:{NFSU2_TR(0x6cf0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf0b2;}}
}
B6cf0ad:L6cf0ad:{c.instructions+=2;NFSU2_TR(0x6cf0ad);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6cf0b0:{NFSU2_TR(0x6cf0b0);
if(r1(R+518)){{goto L6cf0c2;}}
}
B6cf0b2:L6cf0b2:{c.instructions+=5;NFSU2_TR(0x6cf0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf0b5:{NFSU2_TR(0x6cf0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf0b8:{NFSU2_TR(0x6cf0b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cf0bb:{NFSU2_TR(0x6cf0bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6cf0be:{NFSU2_TR(0x6cf0be);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf08au);}goto L6cf08a;}}
}
B6cf0c0:L6cf0c0:{c.instructions+=1;NFSU2_TR(0x6cf0c0);
{goto L6cf0c5;}
}
B6cf0c2:L6cf0c2:{c.instructions+=1;NFSU2_TR(0x6cf0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf0c5:L6cf0c5:{c.instructions+=2;NFSU2_TR(0x6cf0c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf0c8:{NFSU2_TR(0x6cf0c8);
if(r1(R+518)){{goto L6cf197;}}
}
B6cf0ce:L6cf0ce:{c.instructions+=2;NFSU2_TR(0x6cf0ce);
__builtin_memmove((R+0),(R+12),4);
}
B6cf0d0:{NFSU2_TR(0x6cf0d0);
{goto L6cf0d5;}
}
B6cf0d2:L6cf0d2:{c.instructions+=1;NFSU2_TR(0x6cf0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf0d5:L6cf0d5:{c.instructions+=3;NFSU2_TR(0x6cf0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf0d9:{NFSU2_TR(0x6cf0d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf0db:{NFSU2_TR(0x6cf0db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf183;}}
}
B6cf0e1:L6cf0e1:{c.instructions+=2;NFSU2_TR(0x6cf0e1);
__builtin_memmove((R+12),(R+0),4);
}
B6cf0e3:{NFSU2_TR(0x6cf0e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6cf0e6:L6cf0e6:{c.instructions+=15;NFSU2_TR(0x6cf0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf0e9:{NFSU2_TR(0x6cf0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf0eb:{NFSU2_TR(0x6cf0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf0ee:{NFSU2_TR(0x6cf0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf0f1:{NFSU2_TR(0x6cf0f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf0f4:{NFSU2_TR(0x6cf0f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6cf0f7:{NFSU2_TR(0x6cf0f7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf0fa:{NFSU2_TR(0x6cf0fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf0fb:{NFSU2_TR(0x6cf0fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf0fc:{NFSU2_TR(0x6cf0fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cf0ff:{NFSU2_TR(0x6cf0ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf102:{NFSU2_TR(0x6cf102);
__builtin_memmove((R+4),(R+28),4);
}
B6cf104:{NFSU2_TR(0x6cf104);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf107:{NFSU2_TR(0x6cf107);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf10a:{NFSU2_TR(0x6cf10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf10full));
TAIL_STATIC(0x699c39u,699);
}
B6cf10f:L6cf10f:{c.instructions+=5;NFSU2_TR(0x6cf10f);
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
B6cf112:{NFSU2_TR(0x6cf112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf115:{NFSU2_TR(0x6cf115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf118:{NFSU2_TR(0x6cf118);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cf11c:{NFSU2_TR(0x6cf11c);
if(r1(R+518)){{goto L6cf190;}}
}
B6cf11e:L6cf11e:{c.instructions+=32;NFSU2_TR(0x6cf11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf121:{NFSU2_TR(0x6cf121);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf124:{NFSU2_TR(0x6cf124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf127:{NFSU2_TR(0x6cf127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cf129:{NFSU2_TR(0x6cf129);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf12c:{NFSU2_TR(0x6cf12c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf12f:{NFSU2_TR(0x6cf12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf132:{NFSU2_TR(0x6cf132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf135:{NFSU2_TR(0x6cf135);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf138:{NFSU2_TR(0x6cf138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf13b:{NFSU2_TR(0x6cf13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf13e:{NFSU2_TR(0x6cf13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf141:{NFSU2_TR(0x6cf141);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf144:{NFSU2_TR(0x6cf144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf147:{NFSU2_TR(0x6cf147);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf14a:{NFSU2_TR(0x6cf14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf14d:{NFSU2_TR(0x6cf14d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000ull))));
}
B6cf152:{NFSU2_TR(0x6cf152);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf155:{NFSU2_TR(0x6cf155);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf158:{NFSU2_TR(0x6cf158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf15b:{NFSU2_TR(0x6cf15b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cf15e:{NFSU2_TR(0x6cf15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf164:{NFSU2_TR(0x6cf164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf167:{NFSU2_TR(0x6cf167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf16a:{NFSU2_TR(0x6cf16a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf16d:{NFSU2_TR(0x6cf16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf170:{NFSU2_TR(0x6cf170);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cf173:{NFSU2_TR(0x6cf173);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cf174:{NFSU2_TR(0x6cf174);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6cf177:{NFSU2_TR(0x6cf177);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cf17a:{NFSU2_TR(0x6cf17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf17d:{NFSU2_TR(0x6cf17d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf0e6u);}goto L6cf0e6;}}
}
B6cf183:L6cf183:{c.instructions+=4;NFSU2_TR(0x6cf183);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf189:{NFSU2_TR(0x6cf189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6cf18c:{NFSU2_TR(0x6cf18c);
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
B6cf18e:{NFSU2_TR(0x6cf18e);
{goto L6cf19a;}
}
B6cf190:L6cf190:{c.instructions+=2;NFSU2_TR(0x6cf190);
w4(R+0,u32(0x8007000eull));
}
B6cf195:{NFSU2_TR(0x6cf195);
{goto L6cf19a;}
}
B6cf197:L6cf197:{c.instructions+=2;NFSU2_TR(0x6cf197);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf199:{NFSU2_TR(0x6cf199);
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
B6cf19a:L6cf19a:{c.instructions+=5;NFSU2_TR(0x6cf19a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf19b:{NFSU2_TR(0x6cf19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf19c:{NFSU2_TR(0x6cf19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf19d:{NFSU2_TR(0x6cf19d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf19e:{NFSU2_TR(0x6cf19e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf19f:L6cf19f:{c.instructions+=14;NFSU2_TR(0x6cf19f);
__builtin_memmove((R+28),(R+28),4);
}
B6cf1a1:{NFSU2_TR(0x6cf1a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf1a2:{NFSU2_TR(0x6cf1a2);
__builtin_memmove((R+20),(R+16),4);
}
B6cf1a4:{NFSU2_TR(0x6cf1a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6cf1a7:{NFSU2_TR(0x6cf1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf1ae:{NFSU2_TR(0x6cf1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf1b4:{NFSU2_TR(0x6cf1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf1b6:{NFSU2_TR(0x6cf1b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf1b7:{NFSU2_TR(0x6cf1b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf1b8:{NFSU2_TR(0x6cf1b8);
__builtin_memmove((R+24),(R+0),4);
}
B6cf1ba:{NFSU2_TR(0x6cf1ba);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6cf1c0:{NFSU2_TR(0x6cf1c0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf1c6:{NFSU2_TR(0x6cf1c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf1c7:{NFSU2_TR(0x6cf1c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf289;}}
}
B6cf1cd:L6cf1cd:{c.instructions+=15;NFSU2_TR(0x6cf1cd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cf1d2:{NFSU2_TR(0x6cf1d2);
__builtin_memmove((R+24),(R+0),4);
}
B6cf1d4:{NFSU2_TR(0x6cf1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf1d7:{NFSU2_TR(0x6cf1d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cf1d9:{NFSU2_TR(0x6cf1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cf1dc:{NFSU2_TR(0x6cf1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf1df:{NFSU2_TR(0x6cf1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cf1e2:{NFSU2_TR(0x6cf1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cf1e5:{NFSU2_TR(0x6cf1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf1e8:{NFSU2_TR(0x6cf1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf1eb:{NFSU2_TR(0x6cf1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf1ee:{NFSU2_TR(0x6cf1ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf1f1:{NFSU2_TR(0x6cf1f1);
w4(R+28,u32(0x100ull));
}
B6cf1f6:{NFSU2_TR(0x6cf1f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf1f9:{NFSU2_TR(0x6cf1f9);
if(r1(R+518)){{goto L6cf202;}}
}
B6cf1fb:L6cf1fb:{c.instructions+=3;NFSU2_TR(0x6cf1fb);
__builtin_memmove((R+8),(R+0),4);
}
B6cf1fd:{NFSU2_TR(0x6cf1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf200:{NFSU2_TR(0x6cf200);
{goto L6cf21c;}
}
B6cf202:L6cf202:{c.instructions+=7;NFSU2_TR(0x6cf202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf205:{NFSU2_TR(0x6cf205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf207:{NFSU2_TR(0x6cf207);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf20a:{NFSU2_TR(0x6cf20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf20d:{NFSU2_TR(0x6cf20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cf210:{NFSU2_TR(0x6cf210);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf213:{NFSU2_TR(0x6cf213);
if(r1(R+518)){{goto L6cf2f9;}}
}
B6cf219:L6cf219:{c.instructions+=1;NFSU2_TR(0x6cf219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf21c:L6cf21c:{c.instructions+=5;NFSU2_TR(0x6cf21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf220:{NFSU2_TR(0x6cf220);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf224:{NFSU2_TR(0x6cf224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf227:{NFSU2_TR(0x6cf227);
w4(R+28,u32(0x20000ull));
}
B6cf22c:{NFSU2_TR(0x6cf22c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf27a;}}
}
B6cf22e:L6cf22e:{c.instructions+=3;NFSU2_TR(0x6cf22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf231:{NFSU2_TR(0x6cf231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf234:{NFSU2_TR(0x6cf234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf237:L6cf237:{c.instructions+=9;NFSU2_TR(0x6cf237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf23a:{NFSU2_TR(0x6cf23a);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf240:{NFSU2_TR(0x6cf240);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf243:{NFSU2_TR(0x6cf243);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf246:{NFSU2_TR(0x6cf246);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf249:{NFSU2_TR(0x6cf249);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cf24b:{NFSU2_TR(0x6cf24b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cf24d:{NFSU2_TR(0x6cf24d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6cf250:{NFSU2_TR(0x6cf250);
if(r1(R+514)){{goto L6cf2f9;}}
}
B6cf256:L6cf256:{c.instructions+=6;NFSU2_TR(0x6cf256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf258:{NFSU2_TR(0x6cf258);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf25b:{NFSU2_TR(0x6cf25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf25e:{NFSU2_TR(0x6cf25e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f0000ull))));
}
B6cf263:{NFSU2_TR(0x6cf263);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf265:{NFSU2_TR(0x6cf265);
if(r1(R+518)){{goto L6cf271;}}
}
B6cf267:L6cf267:{c.instructions+=2;NFSU2_TR(0x6cf267);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf26b:{NFSU2_TR(0x6cf26b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf2f9;}}
}
B6cf271:L6cf271:{c.instructions+=4;NFSU2_TR(0x6cf271);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6cf272:{NFSU2_TR(0x6cf272);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cf275:{NFSU2_TR(0x6cf275);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6cf278:{NFSU2_TR(0x6cf278);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf237u);}goto L6cf237;}}
}
B6cf27a:L6cf27a:{c.instructions+=6;NFSU2_TR(0x6cf27a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf27c:{NFSU2_TR(0x6cf27c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf27e:{NFSU2_TR(0x6cf27e);
w4(R+0,u32(0x40000ull));
}
B6cf283:{NFSU2_TR(0x6cf283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf284:{NFSU2_TR(0x6cf284);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf287:{NFSU2_TR(0x6cf287);
{goto L6cf2f0;}
}
B6cf289:L6cf289:{c.instructions+=2;NFSU2_TR(0x6cf289);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf28f:{NFSU2_TR(0x6cf28f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf2f9;}}
}
B6cf291:L6cf291:{c.instructions+=7;NFSU2_TR(0x6cf291);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf294:{NFSU2_TR(0x6cf294);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cf299:{NFSU2_TR(0x6cf299);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf29c:{NFSU2_TR(0x6cf29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cf29f:{NFSU2_TR(0x6cf29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf2a6:{NFSU2_TR(0x6cf2a6);
w4(R+28,u32(0x20000ull));
}
B6cf2ab:{NFSU2_TR(0x6cf2ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf2e5;}}
}
B6cf2ad:L6cf2ad:{c.instructions+=3;NFSU2_TR(0x6cf2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf2b0:{NFSU2_TR(0x6cf2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf2b3:{NFSU2_TR(0x6cf2b3);
__builtin_memmove((R+24),(R+8),4);
}
B6cf2b5:L6cf2b5:{c.instructions+=4;NFSU2_TR(0x6cf2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf2b7:{NFSU2_TR(0x6cf2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf2ba:{NFSU2_TR(0x6cf2ba);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6cf2bd:{NFSU2_TR(0x6cf2bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf2f9;}}
}
B6cf2bf:L6cf2bf:{c.instructions+=6;NFSU2_TR(0x6cf2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf2c2:{NFSU2_TR(0x6cf2c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf2c5:{NFSU2_TR(0x6cf2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf2c8:{NFSU2_TR(0x6cf2c8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f0000ull))));
}
B6cf2cd:{NFSU2_TR(0x6cf2cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf2cf:{NFSU2_TR(0x6cf2cf);
if(r1(R+518)){{goto L6cf2d7;}}
}
B6cf2d1:L6cf2d1:{c.instructions+=2;NFSU2_TR(0x6cf2d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf2d5:{NFSU2_TR(0x6cf2d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf2f9;}}
}
B6cf2d7:L6cf2d7:{c.instructions+=5;NFSU2_TR(0x6cf2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf2da:{NFSU2_TR(0x6cf2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf2dd:{NFSU2_TR(0x6cf2dd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6cf2e0:{NFSU2_TR(0x6cf2e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cf2e3:{NFSU2_TR(0x6cf2e3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf2b5u);}goto L6cf2b5;}}
}
B6cf2e5:L6cf2e5:{c.instructions+=5;NFSU2_TR(0x6cf2e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2e7:{NFSU2_TR(0x6cf2e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2e9:{NFSU2_TR(0x6cf2e9);
w4(R+0,u32(0x40000ull));
}
B6cf2ee:{NFSU2_TR(0x6cf2ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2ef:{NFSU2_TR(0x6cf2ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2f0:L6cf2f0:{c.instructions+=3;NFSU2_TR(0x6cf2f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2f1:{NFSU2_TR(0x6cf2f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf2f2:{NFSU2_TR(0x6cf2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf2f7ull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6cf2f7:L6cf2f7:{c.instructions+=1;NFSU2_TR(0x6cf2f7);
{goto L6cf2fc;}
}
B6cf2f9:L6cf2f9:{c.instructions+=2;NFSU2_TR(0x6cf2f9);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf2fb:{NFSU2_TR(0x6cf2fb);
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
B6cf2fc:L6cf2fc:{c.instructions+=5;NFSU2_TR(0x6cf2fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf2fd:{NFSU2_TR(0x6cf2fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf2fe:{NFSU2_TR(0x6cf2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf2ff:{NFSU2_TR(0x6cf2ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf300:{NFSU2_TR(0x6cf300);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf301:L6cf301:{c.instructions+=13;NFSU2_TR(0x6cf301);
__builtin_memmove((R+28),(R+28),4);
}
B6cf303:{NFSU2_TR(0x6cf303);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf304:{NFSU2_TR(0x6cf304);
__builtin_memmove((R+20),(R+16),4);
}
B6cf306:{NFSU2_TR(0x6cf306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6cf309:{NFSU2_TR(0x6cf309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf30d:{NFSU2_TR(0x6cf30d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf30e:{NFSU2_TR(0x6cf30e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cf310:{NFSU2_TR(0x6cf310);
__builtin_memmove((R+24),(R+4),4);
}
B6cf312:{NFSU2_TR(0x6cf312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf315:{NFSU2_TR(0x6cf315);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cf316:{NFSU2_TR(0x6cf316);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf318:{NFSU2_TR(0x6cf318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf319:{NFSU2_TR(0x6cf319);
if(r1(R+518)){{goto L6cf320;}}
}
B6cf31b:L6cf31b:{c.instructions+=2;NFSU2_TR(0x6cf31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf31e:{NFSU2_TR(0x6cf31e);
{goto L6cf329;}
}
B6cf320:L6cf320:{c.instructions+=2;NFSU2_TR(0x6cf320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf326:{NFSU2_TR(0x6cf326);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf329:L6cf329:{c.instructions+=5;NFSU2_TR(0x6cf329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf32b:{NFSU2_TR(0x6cf32b);
__builtin_memmove((R+28),(R+0),4);
}
B6cf32d:{NFSU2_TR(0x6cf32d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6cf333:{NFSU2_TR(0x6cf333);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20400000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20400000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20400000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf339:{NFSU2_TR(0x6cf339);
if(r1(R+518)){{goto L6cf342;}}
}
B6cf33b:L6cf33b:{c.instructions+=2;NFSU2_TR(0x6cf33b);
__builtin_memmove((R+0),(R+8),4);
}
B6cf33d:{NFSU2_TR(0x6cf33d);
{goto L6cf483;}
}
B6cf342:L6cf342:{c.instructions+=14;NFSU2_TR(0x6cf342);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cf347:{NFSU2_TR(0x6cf347);
__builtin_memmove((R+8),(R+0),4);
}
B6cf349:{NFSU2_TR(0x6cf349);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf34c:{NFSU2_TR(0x6cf34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf34f:{NFSU2_TR(0x6cf34f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf350:{NFSU2_TR(0x6cf350);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6cf353:{NFSU2_TR(0x6cf353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf355:{NFSU2_TR(0x6cf355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf358:{NFSU2_TR(0x6cf358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf35b:{NFSU2_TR(0x6cf35b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf35e:{NFSU2_TR(0x6cf35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf361:{NFSU2_TR(0x6cf361);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf364:{NFSU2_TR(0x6cf364);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf368:{NFSU2_TR(0x6cf368);
if(r1(R+518)){{goto L6cf371;}}
}
B6cf36a:L6cf36a:{c.instructions+=3;NFSU2_TR(0x6cf36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf36d:{NFSU2_TR(0x6cf36d);
__builtin_memmove((R+0),(R+28),4);
}
B6cf36f:{NFSU2_TR(0x6cf36f);
{goto L6cf389;}
}
B6cf371:L6cf371:{c.instructions+=6;NFSU2_TR(0x6cf371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf373:{NFSU2_TR(0x6cf373);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf376:{NFSU2_TR(0x6cf376);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf379:{NFSU2_TR(0x6cf379);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf37c:{NFSU2_TR(0x6cf37c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf380:{NFSU2_TR(0x6cf380);
if(r1(R+518)){{goto L6cf47f;}}
}
B6cf386:L6cf386:{c.instructions+=1;NFSU2_TR(0x6cf386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf389:L6cf389:{c.instructions+=4;NFSU2_TR(0x6cf389);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf38f:{NFSU2_TR(0x6cf38f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf392:{NFSU2_TR(0x6cf392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf395:{NFSU2_TR(0x6cf395);
if(r1(R+518)){{goto L6cf39a;}}
}
B6cf397:L6cf397:{c.instructions+=1;NFSU2_TR(0x6cf397);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf39a:L6cf39a:{c.instructions+=5;NFSU2_TR(0x6cf39a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cf39c:{NFSU2_TR(0x6cf39c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf39f:{NFSU2_TR(0x6cf39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf3a5:{NFSU2_TR(0x6cf3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf3a8:{NFSU2_TR(0x6cf3a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf424;}}
}
B6cf3aa:L6cf3aa:{c.instructions+=2;NFSU2_TR(0x6cf3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf3ad:{NFSU2_TR(0x6cf3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf3b0:L6cf3b0:{c.instructions+=9;NFSU2_TR(0x6cf3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf3b3:{NFSU2_TR(0x6cf3b3);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf3b9:{NFSU2_TR(0x6cf3b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf3bc:{NFSU2_TR(0x6cf3bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf3bf:{NFSU2_TR(0x6cf3bf);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf3c2:{NFSU2_TR(0x6cf3c2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cf3c4:{NFSU2_TR(0x6cf3c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cf3c6:{NFSU2_TR(0x6cf3c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6cf3c9:{NFSU2_TR(0x6cf3c9);
if(r1(R+514)){{goto L6cf47f;}}
}
B6cf3cf:L6cf3cf:{c.instructions+=2;NFSU2_TR(0x6cf3cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf3d2:{NFSU2_TR(0x6cf3d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf3ec;}}
}
B6cf3d4:L6cf3d4:{c.instructions+=6;NFSU2_TR(0x6cf3d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf3d6:{NFSU2_TR(0x6cf3d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf3d9:{NFSU2_TR(0x6cf3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf3dc:{NFSU2_TR(0x6cf3dc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f0000ull))));
}
B6cf3e1:{NFSU2_TR(0x6cf3e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf3e6:{NFSU2_TR(0x6cf3e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf47f;}}
}
B6cf3ec:L6cf3ec:{c.instructions+=4;NFSU2_TR(0x6cf3ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf3ee:{NFSU2_TR(0x6cf3ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cf3f1:{NFSU2_TR(0x6cf3f1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf3f5:{NFSU2_TR(0x6cf3f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf414;}}
}
B6cf3f7:L6cf3f7:{c.instructions+=6;NFSU2_TR(0x6cf3f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf3f9:{NFSU2_TR(0x6cf3f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf3fc:{NFSU2_TR(0x6cf3fc);
__builtin_memmove((R+0),(R+518),1);
}
B6cf3ff:{NFSU2_TR(0x6cf3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x14ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cf406:{NFSU2_TR(0x6cf406);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf408:{NFSU2_TR(0x6cf408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf414;}}
}
B6cf40a:L6cf40a:{c.instructions+=1;NFSU2_TR(0x6cf40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf414:L6cf414:{c.instructions+=6;NFSU2_TR(0x6cf414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf417:{NFSU2_TR(0x6cf417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf41a:{NFSU2_TR(0x6cf41a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cf41d:{NFSU2_TR(0x6cf41d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cf41f:{NFSU2_TR(0x6cf41f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cf422:{NFSU2_TR(0x6cf422);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf3b0u);}goto L6cf3b0;}}
}
B6cf424:L6cf424:{c.instructions+=4;NFSU2_TR(0x6cf424);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf427:{NFSU2_TR(0x6cf427);
__builtin_memmove((R+4),(R+24),4);
}
B6cf429:{NFSU2_TR(0x6cf429);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf42a:{NFSU2_TR(0x6cf42a);
if(r1(R+518)){{goto L6cf43c;}}
}
B6cf42c:L6cf42c:{c.instructions+=7;NFSU2_TR(0x6cf42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf42f:{NFSU2_TR(0x6cf42f);
w4(R+0,u32(0x10000ull));
}
B6cf434:{NFSU2_TR(0x6cf434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf435:{NFSU2_TR(0x6cf435);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf438:{NFSU2_TR(0x6cf438);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf439:{NFSU2_TR(0x6cf439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf43a:{NFSU2_TR(0x6cf43a);
{goto L6cf44f;}
}
B6cf43c:L6cf43c:{c.instructions+=5;NFSU2_TR(0x6cf43c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf43d:{NFSU2_TR(0x6cf43d);
u8 U[4];
w4(U+0,u32(0x90000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf442:{NFSU2_TR(0x6cf442);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf445:{NFSU2_TR(0x6cf445);
u8 U[4];
w4(U+0,u32(0x80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf44a:{NFSU2_TR(0x6cf44a);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf44f:L6cf44f:{c.instructions+=1;NFSU2_TR(0x6cf44f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf454ull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6cf454:L6cf454:{c.instructions+=3;NFSU2_TR(0x6cf454);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cf45b:{NFSU2_TR(0x6cf45b);
__builtin_memmove((R+28),(R+0),4);
}
B6cf45d:{NFSU2_TR(0x6cf45d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf47b;}}
}
B6cf45f:L6cf45f:{c.instructions+=6;NFSU2_TR(0x6cf45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf465:{NFSU2_TR(0x6cf465);
u8 U[4];
w4(U+0,u32(0x7bf690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf46a:{NFSU2_TR(0x6cf46a);
u8 U[4];
w4(U+0,u32(0x125eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf46f:{NFSU2_TR(0x6cf46f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf472:{NFSU2_TR(0x6cf472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf473:{NFSU2_TR(0x6cf473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf478ull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6cf478:L6cf478:{c.instructions+=1;NFSU2_TR(0x6cf478);
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
B6cf47b:L6cf47b:{c.instructions+=2;NFSU2_TR(0x6cf47b);
__builtin_memmove((R+0),(R+28),4);
}
B6cf47d:{NFSU2_TR(0x6cf47d);
{goto L6cf482;}
}
B6cf47f:L6cf47f:{c.instructions+=2;NFSU2_TR(0x6cf47f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf481:{NFSU2_TR(0x6cf481);
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
B6cf482:L6cf482:{c.instructions+=1;NFSU2_TR(0x6cf482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf483:L6cf483:{c.instructions+=4;NFSU2_TR(0x6cf483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf484:{NFSU2_TR(0x6cf484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf485:{NFSU2_TR(0x6cf485);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf486:{NFSU2_TR(0x6cf486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf489:L6cf489:{c.instructions+=16;NFSU2_TR(0x6cf489);
__builtin_memmove((R+28),(R+28),4);
}
B6cf48b:{NFSU2_TR(0x6cf48b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf48c:{NFSU2_TR(0x6cf48c);
__builtin_memmove((R+20),(R+16),4);
}
B6cf48e:{NFSU2_TR(0x6cf48e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf48f:{NFSU2_TR(0x6cf48f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf490:{NFSU2_TR(0x6cf490);
__builtin_memmove((R+24),(R+4),4);
}
B6cf492:{NFSU2_TR(0x6cf492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf498:{NFSU2_TR(0x6cf498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf49a:{NFSU2_TR(0x6cf49a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cf49c:{NFSU2_TR(0x6cf49c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cf49d:{NFSU2_TR(0x6cf49d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cf4a2:{NFSU2_TR(0x6cf4a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf4a7:{NFSU2_TR(0x6cf4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4a8:{NFSU2_TR(0x6cf4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf4ab:{NFSU2_TR(0x6cf4ab);
w4(R+4,u32(0xfffffull));
}
B6cf4b0:{NFSU2_TR(0x6cf4b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf4ee;}}
}
B6cf4b2:L6cf4b2:{c.instructions+=14;NFSU2_TR(0x6cf4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf4b8:{NFSU2_TR(0x6cf4b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cf4ba:{NFSU2_TR(0x6cf4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf4bd:{NFSU2_TR(0x6cf4bd);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B6cf4bf:{NFSU2_TR(0x6cf4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf4c2:{NFSU2_TR(0x6cf4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf4c5:{NFSU2_TR(0x6cf4c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf4c8:{NFSU2_TR(0x6cf4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf4cb:{NFSU2_TR(0x6cf4cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4cc:{NFSU2_TR(0x6cf4cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf4cf:{NFSU2_TR(0x6cf4cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cf4d2:{NFSU2_TR(0x6cf4d2);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6cf4d5:{NFSU2_TR(0x6cf4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf4d6:{NFSU2_TR(0x6cf4d6);
if(r1(R+518)){{goto L6cf4ea;}}
}
B6cf4d8:L6cf4d8:{c.instructions+=6;NFSU2_TR(0x6cf4d8);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf4de:{NFSU2_TR(0x6cf4de);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf4e1:{NFSU2_TR(0x6cf4e1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cf4e3:{NFSU2_TR(0x6cf4e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cf4e5:{NFSU2_TR(0x6cf4e5);
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
B6cf4e8:{NFSU2_TR(0x6cf4e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6cf4ee;}}
}
B6cf4ea:L6cf4ea:{c.instructions+=2;NFSU2_TR(0x6cf4ea);
__builtin_memmove((R+0),(R+8),4);
}
B6cf4ec:{NFSU2_TR(0x6cf4ec);
{goto L6cf525;}
}
B6cf4ee:L6cf4ee:{c.instructions+=11;NFSU2_TR(0x6cf4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf4f4:{NFSU2_TR(0x6cf4f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4f5:{NFSU2_TR(0x6cf4f5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4f7:{NFSU2_TR(0x6cf4f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4f9:{NFSU2_TR(0x6cf4f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf4fa:{NFSU2_TR(0x6cf4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf4fc:{NFSU2_TR(0x6cf4fc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6cf4fe:{NFSU2_TR(0x6cf4fe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6cf503:{NFSU2_TR(0x6cf503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf504:{NFSU2_TR(0x6cf504);
__builtin_memmove((R+4),(R+24),4);
}
B6cf506:{NFSU2_TR(0x6cf506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf50bull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6cf50b:L6cf50b:{c.instructions+=3;NFSU2_TR(0x6cf50b);
__builtin_memmove((R+28),(R+0),4);
}
B6cf50d:{NFSU2_TR(0x6cf50d);
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
B6cf50f:{NFSU2_TR(0x6cf50f);
if(r1(R+518)){{goto L6cf522;}}
}
B6cf511:L6cf511:{c.instructions+=3;NFSU2_TR(0x6cf511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf512:{NFSU2_TR(0x6cf512);
__builtin_memmove((R+4),(R+24),4);
}
B6cf514:{NFSU2_TR(0x6cf514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf519ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf301u);}goto L6cf301;}
}
B6cf519:L6cf519:{c.instructions+=3;NFSU2_TR(0x6cf519);
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
B6cf51b:{NFSU2_TR(0x6cf51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf51e:{NFSU2_TR(0x6cf51e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf522;}}
}
B6cf520:L6cf520:{c.instructions+=1;NFSU2_TR(0x6cf520);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
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
B6cf522:L6cf522:{c.instructions+=1;NFSU2_TR(0x6cf522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf525:L6cf525:{c.instructions+=4;NFSU2_TR(0x6cf525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf526:{NFSU2_TR(0x6cf526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf527:{NFSU2_TR(0x6cf527);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf528:{NFSU2_TR(0x6cf528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf529:L6cf529:{c.instructions+=15;NFSU2_TR(0x6cf529);
__builtin_memmove((R+28),(R+28),4);
}
B6cf52b:{NFSU2_TR(0x6cf52b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf52c:{NFSU2_TR(0x6cf52c);
__builtin_memmove((R+20),(R+16),4);
}
B6cf52e:{NFSU2_TR(0x6cf52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6cf531:{NFSU2_TR(0x6cf531);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf532:{NFSU2_TR(0x6cf532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf533:{NFSU2_TR(0x6cf533);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf534:{NFSU2_TR(0x6cf534);
__builtin_memmove((R+28),(R+4),4);
}
B6cf536:{NFSU2_TR(0x6cf536);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf53d:{NFSU2_TR(0x6cf53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf543:{NFSU2_TR(0x6cf543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cf545:{NFSU2_TR(0x6cf545);
__builtin_memmove((R+8),(R+4),4);
}
B6cf547:{NFSU2_TR(0x6cf547);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6cf54d:{NFSU2_TR(0x6cf54d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf553:{NFSU2_TR(0x6cf553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf6be;}}
}
B6cf559:L6cf559:{c.instructions+=3;NFSU2_TR(0x6cf559);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6cf55f:{NFSU2_TR(0x6cf55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf566:{NFSU2_TR(0x6cf566);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf58c;}}
}
B6cf568:L6cf568:{c.instructions+=3;NFSU2_TR(0x6cf568);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf56b:{NFSU2_TR(0x6cf56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6cf56e:{NFSU2_TR(0x6cf56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf571:L6cf571:{c.instructions+=3;NFSU2_TR(0x6cf571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf573:{NFSU2_TR(0x6cf573);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf575:{NFSU2_TR(0x6cf575);
if(r1(R+518)){{goto L6cf57b;}}
}
B6cf577:L6cf577:{c.instructions+=1;NFSU2_TR(0x6cf577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf57b:L6cf57b:{c.instructions+=4;NFSU2_TR(0x6cf57b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6cf57e:{NFSU2_TR(0x6cf57e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cf581:{NFSU2_TR(0x6cf581);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf584:{NFSU2_TR(0x6cf584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf571u);}goto L6cf571;}}
}
B6cf586:L6cf586:{c.instructions+=2;NFSU2_TR(0x6cf586);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf58a:{NFSU2_TR(0x6cf58a);
if(r1(R+518)){{goto L6cf5b4;}}
}
B6cf58c:L6cf58c:{c.instructions+=8;NFSU2_TR(0x6cf58c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf58e:{NFSU2_TR(0x6cf58e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf590:{NFSU2_TR(0x6cf590);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf592:{NFSU2_TR(0x6cf592);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20400000ull))));
}
B6cf598:{NFSU2_TR(0x6cf598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf599:{NFSU2_TR(0x6cf599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf59a:{NFSU2_TR(0x6cf59a);
__builtin_memmove((R+4),(R+28),4);
}
B6cf59c:{NFSU2_TR(0x6cf59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf5a1ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6cf5a1:L6cf5a1:{c.instructions+=3;NFSU2_TR(0x6cf5a1);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6cf5a7:{NFSU2_TR(0x6cf5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf5a9:{NFSU2_TR(0x6cf5a9);
if(r1(R+518)){{goto L6cf6bc;}}
}
B6cf5af:L6cf5af:{c.instructions+=2;NFSU2_TR(0x6cf5af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf5b2:{NFSU2_TR(0x6cf5b2);
{goto L6cf5ba;}
}
B6cf5b4:L6cf5b4:{c.instructions+=1;NFSU2_TR(0x6cf5b4);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6cf5ba:L6cf5ba:{c.instructions+=13;NFSU2_TR(0x6cf5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6cf5bc:{NFSU2_TR(0x6cf5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf5bf:{NFSU2_TR(0x6cf5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf5c2:{NFSU2_TR(0x6cf5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf5c5:{NFSU2_TR(0x6cf5c5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6cf5cb:{NFSU2_TR(0x6cf5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6cf5ce:{NFSU2_TR(0x6cf5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf5d1:{NFSU2_TR(0x6cf5d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf5d3:{NFSU2_TR(0x6cf5d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf5d6:{NFSU2_TR(0x6cf5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf5d9:{NFSU2_TR(0x6cf5d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf5dc:{NFSU2_TR(0x6cf5dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf5e0:{NFSU2_TR(0x6cf5e0);
if(r1(R+518)){{goto L6cf5ea;}}
}
B6cf5e2:L6cf5e2:{c.instructions+=3;NFSU2_TR(0x6cf5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf5e5:{NFSU2_TR(0x6cf5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf5e8:{NFSU2_TR(0x6cf5e8);
{goto L6cf605;}
}
B6cf5ea:L6cf5ea:{c.instructions+=6;NFSU2_TR(0x6cf5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cf5ec:{NFSU2_TR(0x6cf5ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cf5ef:{NFSU2_TR(0x6cf5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf5f2:{NFSU2_TR(0x6cf5f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf5f5:{NFSU2_TR(0x6cf5f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf5f9:{NFSU2_TR(0x6cf5f9);
if(r1(R+518)){{goto L6cf6bc;}}
}
B6cf5ff:L6cf5ff:{c.instructions+=2;NFSU2_TR(0x6cf5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf602:{NFSU2_TR(0x6cf602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf605:L6cf605:{c.instructions+=5;NFSU2_TR(0x6cf605);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cf607:{NFSU2_TR(0x6cf607);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cf609:{NFSU2_TR(0x6cf609);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf60b:{NFSU2_TR(0x6cf60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf60e:{NFSU2_TR(0x6cf60e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf630;}}
}
B6cf610:L6cf610:{c.instructions+=9;NFSU2_TR(0x6cf610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf613:{NFSU2_TR(0x6cf613);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6cf615:{NFSU2_TR(0x6cf615);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf618:{NFSU2_TR(0x6cf618);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf61b:{NFSU2_TR(0x6cf61b);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf61e:{NFSU2_TR(0x6cf61e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cf620:{NFSU2_TR(0x6cf620);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cf622:{NFSU2_TR(0x6cf622);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6cf625:{NFSU2_TR(0x6cf625);
if(r1(R+514)){{goto L6cf6bc;}}
}
B6cf62b:L6cf62b:{c.instructions+=3;NFSU2_TR(0x6cf62b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cf62c:{NFSU2_TR(0x6cf62c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6cf62e:{NFSU2_TR(0x6cf62e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf610u);}goto L6cf610;}}
}
B6cf630:L6cf630:{c.instructions+=3;NFSU2_TR(0x6cf630);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf633:{NFSU2_TR(0x6cf633);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6cf635:{NFSU2_TR(0x6cf635);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf697;}}
}
B6cf637:L6cf637:{c.instructions+=11;NFSU2_TR(0x6cf637);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf63d:{NFSU2_TR(0x6cf63d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf63f:{NFSU2_TR(0x6cf63f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf641:{NFSU2_TR(0x6cf641);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf642:{NFSU2_TR(0x6cf642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf643:{NFSU2_TR(0x6cf643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf645:{NFSU2_TR(0x6cf645);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cf64a:{NFSU2_TR(0x6cf64a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B6cf64f:{NFSU2_TR(0x6cf64f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf650:{NFSU2_TR(0x6cf650);
__builtin_memmove((R+4),(R+28),4);
}
B6cf652:{NFSU2_TR(0x6cf652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf657ull));
TAIL_STATIC(0x6cb84cu,6cb);
}
B6cf657:L6cf657:{c.instructions+=2;NFSU2_TR(0x6cf657);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf659:{NFSU2_TR(0x6cf659);
if(r1(R+518)){{goto L6cf6be;}}
}
B6cf65b:L6cf65b:{c.instructions+=3;NFSU2_TR(0x6cf65b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf65d:{NFSU2_TR(0x6cf65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf664:{NFSU2_TR(0x6cf664);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf688;}}
}
B6cf666:L6cf666:{c.instructions+=3;NFSU2_TR(0x6cf666);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf669:{NFSU2_TR(0x6cf669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cf66c:{NFSU2_TR(0x6cf66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf66f:L6cf66f:{c.instructions+=3;NFSU2_TR(0x6cf66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6cf671:{NFSU2_TR(0x6cf671);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf673:{NFSU2_TR(0x6cf673);
if(r1(R+518)){{goto L6cf678;}}
}
B6cf675:L6cf675:{c.instructions+=1;NFSU2_TR(0x6cf675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf678:L6cf678:{c.instructions+=4;NFSU2_TR(0x6cf678);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cf67b:{NFSU2_TR(0x6cf67b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cf67e:{NFSU2_TR(0x6cf67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf681:{NFSU2_TR(0x6cf681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf66fu);}goto L6cf66f;}}
}
B6cf683:L6cf683:{c.instructions+=2;NFSU2_TR(0x6cf683);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf686:{NFSU2_TR(0x6cf686);
if(r1(R+518)){{goto L6cf6be;}}
}
B6cf688:L6cf688:{c.instructions+=7;NFSU2_TR(0x6cf688);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf689:{NFSU2_TR(0x6cf689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf68a:{NFSU2_TR(0x6cf68a);
__builtin_memmove((R+24),(R+0),4);
}
B6cf68c:{NFSU2_TR(0x6cf68c);
w4(R+0,u32(0x60000ull));
}
B6cf691:{NFSU2_TR(0x6cf691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf692:{NFSU2_TR(0x6cf692);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf695:{NFSU2_TR(0x6cf695);
{goto L6cf6ab;}
}
B6cf697:L6cf697:{c.instructions+=7;NFSU2_TR(0x6cf697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cf69a:{NFSU2_TR(0x6cf69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf6a0:{NFSU2_TR(0x6cf6a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6a1:{NFSU2_TR(0x6cf6a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6a2:{NFSU2_TR(0x6cf6a2);
w4(R+0,u32(0x60000ull));
}
B6cf6a7:{NFSU2_TR(0x6cf6a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6a8:{NFSU2_TR(0x6cf6a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf6ab:L6cf6ab:{c.instructions+=4;NFSU2_TR(0x6cf6ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6ac:{NFSU2_TR(0x6cf6ac);
__builtin_memmove((R+4),(R+28),4);
}
B6cf6ae:{NFSU2_TR(0x6cf6ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6af:{NFSU2_TR(0x6cf6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf6b4ull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6cf6b4:L6cf6b4:{c.instructions+=2;NFSU2_TR(0x6cf6b4);
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
B6cf6b6:{NFSU2_TR(0x6cf6b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf6c1;}}
}
B6cf6b8:L6cf6b8:{c.instructions+=2;NFSU2_TR(0x6cf6b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6cf6ba:{NFSU2_TR(0x6cf6ba);
{goto L6cf6c1;}
}
B6cf6bc:L6cf6bc:{c.instructions+=1;NFSU2_TR(0x6cf6bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6cf6be:L6cf6be:{c.instructions+=2;NFSU2_TR(0x6cf6be);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf6c0:{NFSU2_TR(0x6cf6c0);
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
B6cf6c1:L6cf6c1:{c.instructions+=5;NFSU2_TR(0x6cf6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf6c2:{NFSU2_TR(0x6cf6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf6c3:{NFSU2_TR(0x6cf6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf6c4:{NFSU2_TR(0x6cf6c4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf6c5:{NFSU2_TR(0x6cf6c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf6c6:L6cf6c6:{c.instructions+=15;NFSU2_TR(0x6cf6c6);
__builtin_memmove((R+28),(R+28),4);
}
B6cf6c8:{NFSU2_TR(0x6cf6c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6c9:{NFSU2_TR(0x6cf6c9);
__builtin_memmove((R+20),(R+16),4);
}
B6cf6cb:{NFSU2_TR(0x6cf6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6cf6ce:{NFSU2_TR(0x6cf6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf6d4:{NFSU2_TR(0x6cf6d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf6d6:{NFSU2_TR(0x6cf6d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6d7:{NFSU2_TR(0x6cf6d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6d8:{NFSU2_TR(0x6cf6d8);
__builtin_memmove((R+28),(R+0),4);
}
B6cf6da:{NFSU2_TR(0x6cf6da);
w4(R+8,u32(0xfffffull));
}
B6cf6df:{NFSU2_TR(0x6cf6df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cf6e4:{NFSU2_TR(0x6cf6e4);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B6cf6e6:{NFSU2_TR(0x6cf6e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf6eb:{NFSU2_TR(0x6cf6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf6ee:{NFSU2_TR(0x6cf6ee);
if(r1(R+518)){{goto L6cf6f8;}}
}
B6cf6f0:L6cf6f0:{c.instructions+=3;NFSU2_TR(0x6cf6f0);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf6f2:{NFSU2_TR(0x6cf6f2);
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
B6cf6f3:{NFSU2_TR(0x6cf6f3);
{goto L6cf84b;}
}
B6cf6f8:L6cf6f8:{c.instructions+=13;NFSU2_TR(0x6cf6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf6fe:{NFSU2_TR(0x6cf6fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf6ff:{NFSU2_TR(0x6cf6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cf705:{NFSU2_TR(0x6cf705);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf708:{NFSU2_TR(0x6cf708);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf70a:{NFSU2_TR(0x6cf70a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cf70d:{NFSU2_TR(0x6cf70d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf70e:{NFSU2_TR(0x6cf70e);
__builtin_memmove((R+0),(R+28),4);
}
B6cf710:{NFSU2_TR(0x6cf710);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6cf712:{NFSU2_TR(0x6cf712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf713:{NFSU2_TR(0x6cf713);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B6cf718:{NFSU2_TR(0x6cf718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf719:{NFSU2_TR(0x6cf719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf71eull));
TAIL_STATIC(0x6cbaa7u,6cb);
}
B6cf71e:L6cf71e:{c.instructions+=3;NFSU2_TR(0x6cf71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf721:{NFSU2_TR(0x6cf721);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf723:{NFSU2_TR(0x6cf723);
if(r1(R+518)){{goto L6cf847;}}
}
B6cf729:L6cf729:{c.instructions+=3;NFSU2_TR(0x6cf729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf72d:{NFSU2_TR(0x6cf72d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf72f:{NFSU2_TR(0x6cf72f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf752;}}
}
B6cf731:L6cf731:{c.instructions+=3;NFSU2_TR(0x6cf731);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf734:{NFSU2_TR(0x6cf734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf737:{NFSU2_TR(0x6cf737);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cf73a:L6cf73a:{c.instructions+=3;NFSU2_TR(0x6cf73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6cf73c:{NFSU2_TR(0x6cf73c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cf73e:{NFSU2_TR(0x6cf73e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf847;}}
}
B6cf744:L6cf744:{c.instructions+=5;NFSU2_TR(0x6cf744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf747:{NFSU2_TR(0x6cf747);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cf74a:{NFSU2_TR(0x6cf74a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cf74d:{NFSU2_TR(0x6cf74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6cf750:{NFSU2_TR(0x6cf750);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf73au);}goto L6cf73a;}}
}
B6cf752:L6cf752:{c.instructions+=17;NFSU2_TR(0x6cf752);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf755:{NFSU2_TR(0x6cf755);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cf758:{NFSU2_TR(0x6cf758);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf759:{NFSU2_TR(0x6cf759);
__builtin_memmove((R+0),(R+28),4);
}
B6cf75b:{NFSU2_TR(0x6cf75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf75e:{NFSU2_TR(0x6cf75e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cf761:{NFSU2_TR(0x6cf761);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf762:{NFSU2_TR(0x6cf762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf765:{NFSU2_TR(0x6cf765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cf768:{NFSU2_TR(0x6cf768);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6cf76a:{NFSU2_TR(0x6cf76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf76b:{NFSU2_TR(0x6cf76b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf76c:{NFSU2_TR(0x6cf76c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf76d:{NFSU2_TR(0x6cf76d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf76e:{NFSU2_TR(0x6cf76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf771:{NFSU2_TR(0x6cf771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf774:{NFSU2_TR(0x6cf774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf779ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf779:L6cf779:{c.instructions+=2;NFSU2_TR(0x6cf779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf77b:{NFSU2_TR(0x6cf77b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf784;}}
}
B6cf77d:L6cf77d:{c.instructions+=2;NFSU2_TR(0x6cf77d);
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
B6cf77f:{NFSU2_TR(0x6cf77f);
{goto L6cf84a;}
}
B6cf784:L6cf784:{c.instructions+=9;NFSU2_TR(0x6cf784);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf787:{NFSU2_TR(0x6cf787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf78a:{NFSU2_TR(0x6cf78a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf78b:{NFSU2_TR(0x6cf78b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf78e:{NFSU2_TR(0x6cf78e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf791:{NFSU2_TR(0x6cf791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf792:{NFSU2_TR(0x6cf792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf793:{NFSU2_TR(0x6cf793);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf796:{NFSU2_TR(0x6cf796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf79bull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf79b:L6cf79b:{c.instructions+=2;NFSU2_TR(0x6cf79b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf79d:{NFSU2_TR(0x6cf79d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf79f:L6cf79f:{c.instructions+=9;NFSU2_TR(0x6cf79f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7a2:{NFSU2_TR(0x6cf7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf7a5:{NFSU2_TR(0x6cf7a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7a6:{NFSU2_TR(0x6cf7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7a9:{NFSU2_TR(0x6cf7a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7aa:{NFSU2_TR(0x6cf7aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7ad:{NFSU2_TR(0x6cf7ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7b0:{NFSU2_TR(0x6cf7b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7b1:{NFSU2_TR(0x6cf7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf7b6ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf7b6:L6cf7b6:{c.instructions+=2;NFSU2_TR(0x6cf7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf7b8:{NFSU2_TR(0x6cf7b8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf7ba:L6cf7ba:{c.instructions+=9;NFSU2_TR(0x6cf7ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7bd:{NFSU2_TR(0x6cf7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf7c0:{NFSU2_TR(0x6cf7c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7c1:{NFSU2_TR(0x6cf7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7c4:{NFSU2_TR(0x6cf7c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7c5:{NFSU2_TR(0x6cf7c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7c8:{NFSU2_TR(0x6cf7c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7c9:{NFSU2_TR(0x6cf7c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7cc:{NFSU2_TR(0x6cf7cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf7d1ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf7d1:L6cf7d1:{c.instructions+=2;NFSU2_TR(0x6cf7d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf7d3:{NFSU2_TR(0x6cf7d3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf7d5:L6cf7d5:{c.instructions+=9;NFSU2_TR(0x6cf7d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7d8:{NFSU2_TR(0x6cf7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf7db:{NFSU2_TR(0x6cf7db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7dc:{NFSU2_TR(0x6cf7dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7df:{NFSU2_TR(0x6cf7df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7e2:{NFSU2_TR(0x6cf7e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7e3:{NFSU2_TR(0x6cf7e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7e6:{NFSU2_TR(0x6cf7e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7e7:{NFSU2_TR(0x6cf7e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf7ecull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf7ec:L6cf7ec:{c.instructions+=2;NFSU2_TR(0x6cf7ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf7ee:{NFSU2_TR(0x6cf7ee);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf7f0:L6cf7f0:{c.instructions+=9;NFSU2_TR(0x6cf7f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7f3:{NFSU2_TR(0x6cf7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf7f6:{NFSU2_TR(0x6cf7f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7f7:{NFSU2_TR(0x6cf7f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7fa:{NFSU2_TR(0x6cf7fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf7fd:{NFSU2_TR(0x6cf7fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7fe:{NFSU2_TR(0x6cf7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf7ff:{NFSU2_TR(0x6cf7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf802:{NFSU2_TR(0x6cf802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf807ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf807:L6cf807:{c.instructions+=2;NFSU2_TR(0x6cf807);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf809:{NFSU2_TR(0x6cf809);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf80f:L6cf80f:{c.instructions+=9;NFSU2_TR(0x6cf80f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf812:{NFSU2_TR(0x6cf812);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf815:{NFSU2_TR(0x6cf815);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf816:{NFSU2_TR(0x6cf816);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf819:{NFSU2_TR(0x6cf819);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf81a:{NFSU2_TR(0x6cf81a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf81d:{NFSU2_TR(0x6cf81d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf820:{NFSU2_TR(0x6cf820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf821:{NFSU2_TR(0x6cf821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf826ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf826:L6cf826:{c.instructions+=2;NFSU2_TR(0x6cf826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cf828:{NFSU2_TR(0x6cf828);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf77du);}goto L6cf77d;}}
}
B6cf82e:L6cf82e:{c.instructions+=9;NFSU2_TR(0x6cf82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf831:{NFSU2_TR(0x6cf831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf834:{NFSU2_TR(0x6cf834);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf835:{NFSU2_TR(0x6cf835);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf838:{NFSU2_TR(0x6cf838);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf839:{NFSU2_TR(0x6cf839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf83c:{NFSU2_TR(0x6cf83c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf83d:{NFSU2_TR(0x6cf83d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cf840:{NFSU2_TR(0x6cf840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf845ull));
TAIL_STATIC(0x6c97ddu,6c9);
}
B6cf845:L6cf845:{c.instructions+=1;NFSU2_TR(0x6cf845);
{goto L6cf84a;}
}
B6cf847:L6cf847:{c.instructions+=2;NFSU2_TR(0x6cf847);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf849:{NFSU2_TR(0x6cf849);
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
B6cf84a:L6cf84a:{c.instructions+=1;NFSU2_TR(0x6cf84a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cf84b:L6cf84b:{c.instructions+=4;NFSU2_TR(0x6cf84b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cf84c:{NFSU2_TR(0x6cf84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cf84d:{NFSU2_TR(0x6cf84d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cf84e:{NFSU2_TR(0x6cf84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cf84f:L6cf84f:{c.instructions+=13;NFSU2_TR(0x6cf84f);
__builtin_memmove((R+28),(R+28),4);
}
B6cf851:{NFSU2_TR(0x6cf851);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf852:{NFSU2_TR(0x6cf852);
__builtin_memmove((R+20),(R+16),4);
}
B6cf854:{NFSU2_TR(0x6cf854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B6cf85a:{NFSU2_TR(0x6cf85a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf85b:{NFSU2_TR(0x6cf85b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf85c:{NFSU2_TR(0x6cf85c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cf85e:{NFSU2_TR(0x6cf85e);
__builtin_memmove((R+24),(R+4),4);
}
B6cf860:{NFSU2_TR(0x6cf860);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf862:{NFSU2_TR(0x6cf862);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf865:{NFSU2_TR(0x6cf865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf866:{NFSU2_TR(0x6cf866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf869:{NFSU2_TR(0x6cf869);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf885;}}
}
B6cf86b:L6cf86b:{c.instructions+=9;NFSU2_TR(0x6cf86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf86e:{NFSU2_TR(0x6cf86e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf871:{NFSU2_TR(0x6cf871);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf875:{NFSU2_TR(0x6cf875);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf878:{NFSU2_TR(0x6cf878);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf87b:{NFSU2_TR(0x6cf87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf87f:{NFSU2_TR(0x6cf87f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cf880:{NFSU2_TR(0x6cf880);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cf883:{NFSU2_TR(0x6cf883);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf86bu);}goto L6cf86b;}}
}
B6cf885:L6cf885:{c.instructions+=16;NFSU2_TR(0x6cf885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf888:{NFSU2_TR(0x6cf888);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf889:{NFSU2_TR(0x6cf889);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf88a:{NFSU2_TR(0x6cf88a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf88b:{NFSU2_TR(0x6cf88b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf88d:{NFSU2_TR(0x6cf88d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf88e:{NFSU2_TR(0x6cf88e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf88f:{NFSU2_TR(0x6cf88f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf890:{NFSU2_TR(0x6cf890);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf891:{NFSU2_TR(0x6cf891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf894:{NFSU2_TR(0x6cf894);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cf897:{NFSU2_TR(0x6cf897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf898:{NFSU2_TR(0x6cf898);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf89a:{NFSU2_TR(0x6cf89a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf89c:{NFSU2_TR(0x6cf89c);
__builtin_memmove((R+4),(R+24),4);
}
B6cf89e:{NFSU2_TR(0x6cf89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf8a3ull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cf8a3:L6cf8a3:{c.instructions+=2;NFSU2_TR(0x6cf8a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf8a6:{NFSU2_TR(0x6cf8a6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf8f0;}}
}
B6cf8a8:L6cf8a8:{c.instructions+=7;NFSU2_TR(0x6cf8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf8ab:{NFSU2_TR(0x6cf8ab);
__builtin_memmove((R+4),(R+12),4);
}
B6cf8ad:{NFSU2_TR(0x6cf8ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cf8b0:{NFSU2_TR(0x6cf8b0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6cf8b2:{NFSU2_TR(0x6cf8b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cf8b4:{NFSU2_TR(0x6cf8b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf8b8:{NFSU2_TR(0x6cf8b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cf8c0;}}
}
B6cf8ba:L6cf8ba:{c.instructions+=2;NFSU2_TR(0x6cf8ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf8be:{NFSU2_TR(0x6cf8be);
if(r1(R+518)){{goto L6cf8d4;}}
}
B6cf8c0:L6cf8c0:{c.instructions+=7;NFSU2_TR(0x6cf8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cf8c2:{NFSU2_TR(0x6cf8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf8c5:{NFSU2_TR(0x6cf8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf8c8:{NFSU2_TR(0x6cf8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf8cb:{NFSU2_TR(0x6cf8cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cf8ce:{NFSU2_TR(0x6cf8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cf8d1:{NFSU2_TR(0x6cf8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf8d4:L6cf8d4:{c.instructions+=9;NFSU2_TR(0x6cf8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf8d7:{NFSU2_TR(0x6cf8d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cf8da:{NFSU2_TR(0x6cf8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf8de:{NFSU2_TR(0x6cf8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf8e1:{NFSU2_TR(0x6cf8e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf8e4:{NFSU2_TR(0x6cf8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cf8e8:{NFSU2_TR(0x6cf8e8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6cf8e9:{NFSU2_TR(0x6cf8e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6cf8ec:{NFSU2_TR(0x6cf8ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf8a8u);}goto L6cf8a8;}}
}
B6cf8ee:L6cf8ee:{c.instructions+=1;NFSU2_TR(0x6cf8ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cf8f0:L6cf8f0:{c.instructions+=3;NFSU2_TR(0x6cf8f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cf8f2:{NFSU2_TR(0x6cf8f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf8f5:{NFSU2_TR(0x6cf8f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cf905;}}
}
B6cf8f7:L6cf8f7:{c.instructions+=6;NFSU2_TR(0x6cf8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf8fa:{NFSU2_TR(0x6cf8fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cf8fd:{NFSU2_TR(0x6cf8fd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cf8fe:{NFSU2_TR(0x6cf8fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cf901:{NFSU2_TR(0x6cf901);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6cf903:{NFSU2_TR(0x6cf903);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf8f7u);}goto L6cf8f7;}}
}
B6cf905:L6cf905:{c.instructions+=2;NFSU2_TR(0x6cf905);
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
B6cf907:{NFSU2_TR(0x6cf907);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cf90d:L6cf90d:{c.instructions+=9;NFSU2_TR(0x6cf90d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf90e:{NFSU2_TR(0x6cf90e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf90f:{NFSU2_TR(0x6cf90f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cf915:{NFSU2_TR(0x6cf915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf916:{NFSU2_TR(0x6cf916);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cf91c:{NFSU2_TR(0x6cf91c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf91d:{NFSU2_TR(0x6cf91d);
__builtin_memmove((R+4),(R+24),4);
}
B6cf91f:{NFSU2_TR(0x6cf91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf925:{NFSU2_TR(0x6cf925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf92aull));
TAIL_STATIC(0x6c9ee0u,6c9);
}
B6cf92a:L6cf92a:{c.instructions+=3;NFSU2_TR(0x6cf92a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf92d:{NFSU2_TR(0x6cf92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf930:{NFSU2_TR(0x6cf930);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cfb5a;}}
}
B6cf936:L6cf936:{c.instructions+=9;NFSU2_TR(0x6cf936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf939:{NFSU2_TR(0x6cf939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf93c:{NFSU2_TR(0x6cf93c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cf93f:{NFSU2_TR(0x6cf93f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cf941:{NFSU2_TR(0x6cf941);
__builtin_memmove((R+4),(R+0),4);
}
B6cf943:{NFSU2_TR(0x6cf943);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cf948:{NFSU2_TR(0x6cf948);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6cf94e:{NFSU2_TR(0x6cf94e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf951:{NFSU2_TR(0x6cf951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cf957:L6cf957:{c.instructions+=5;NFSU2_TR(0x6cf957);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6cf95a:{NFSU2_TR(0x6cf95a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf960:{NFSU2_TR(0x6cf960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf963:{NFSU2_TR(0x6cf963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf966:{NFSU2_TR(0x6cf966);
if(r1(R+518)){{goto L6cfb06;}}
}
B6cf96c:L6cf96c:{c.instructions+=2;NFSU2_TR(0x6cf96c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf972:{NFSU2_TR(0x6cf972);
if(r1(R+518)){{goto L6cfb06;}}
}
B6cf978:L6cf978:{c.instructions+=2;NFSU2_TR(0x6cf978);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf97e:{NFSU2_TR(0x6cf97e);
if(r1(R+518)){{goto L6cfb06;}}
}
B6cf984:L6cf984:{c.instructions+=2;NFSU2_TR(0x6cf984);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf98a:{NFSU2_TR(0x6cf98a);
if(r1(R+518)){{goto L6cfb06;}}
}
B6cf990:L6cf990:{c.instructions+=2;NFSU2_TR(0x6cf990);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cf996:{NFSU2_TR(0x6cf996);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfa4a;}}
}
B6cf99c:L6cf99c:{c.instructions+=9;NFSU2_TR(0x6cf99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf99f:{NFSU2_TR(0x6cf99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf9a2:{NFSU2_TR(0x6cf9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cf9a5:{NFSU2_TR(0x6cf9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cf9a8:{NFSU2_TR(0x6cf9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cf9ab:{NFSU2_TR(0x6cf9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf9ae:{NFSU2_TR(0x6cf9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cf9b1:{NFSU2_TR(0x6cf9b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cf9b5:{NFSU2_TR(0x6cf9b5);
if(r1(R+518)){{goto L6cfb49;}}
}
B6cf9bb:L6cf9bb:{c.instructions+=2;NFSU2_TR(0x6cf9bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cf9be:{NFSU2_TR(0x6cf9be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cf9c4:L6cf9c4:{c.instructions+=6;NFSU2_TR(0x6cf9c4);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf9ca:{NFSU2_TR(0x6cf9ca);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cf9cd:{NFSU2_TR(0x6cf9cd);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cf9cf:{NFSU2_TR(0x6cf9cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cf9d1:{NFSU2_TR(0x6cf9d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6cf9d4:{NFSU2_TR(0x6cf9d4);
if(r1(R+514)){{goto L6cfb49;}}
}
B6cf9da:L6cf9da:{c.instructions+=10;NFSU2_TR(0x6cf9da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf9db:{NFSU2_TR(0x6cf9db);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cf9dd:{NFSU2_TR(0x6cf9dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf9de:{NFSU2_TR(0x6cf9de);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cf9e1:{NFSU2_TR(0x6cf9e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cf9e3:{NFSU2_TR(0x6cf9e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf9e4:{NFSU2_TR(0x6cf9e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf9e5:{NFSU2_TR(0x6cf9e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cf9e6:{NFSU2_TR(0x6cf9e6);
__builtin_memmove((R+4),(R+24),4);
}
B6cf9e8:{NFSU2_TR(0x6cf9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cf9edull));
TAIL_STATIC(0x699c39u,699);
}
B6cf9ed:L6cf9ed:{c.instructions+=4;NFSU2_TR(0x6cf9ed);
__builtin_memmove((R+4),(R+0),4);
}
B6cf9ef:{NFSU2_TR(0x6cf9ef);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6cf9f1:{NFSU2_TR(0x6cf9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cf9f4:{NFSU2_TR(0x6cf9f4);
if(r1(R+518)){{goto L6cfb6c;}}
}
B6cf9fa:L6cf9fa:{c.instructions+=9;NFSU2_TR(0x6cf9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cf9fd:{NFSU2_TR(0x6cf9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfa00:{NFSU2_TR(0x6cfa00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cfa02:{NFSU2_TR(0x6cfa02);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cfa05:{NFSU2_TR(0x6cfa05);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cfa08:{NFSU2_TR(0x6cfa08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfa09:{NFSU2_TR(0x6cfa09);
__builtin_memmove((R+4),(R+12),4);
}
B6cfa0b:{NFSU2_TR(0x6cfa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfa0e:{NFSU2_TR(0x6cfa0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfa13ull));
TAIL_STATIC(0x699765u,699);
}
B6cfa13:L6cfa13:{c.instructions+=2;NFSU2_TR(0x6cfa13);
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
B6cfa15:{NFSU2_TR(0x6cfa15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cfa1b:L6cfa1b:{c.instructions+=3;NFSU2_TR(0x6cfa1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cfa1e:{NFSU2_TR(0x6cfa1e);
__builtin_memmove((R+4),(R+12),4);
}
B6cfa20:{NFSU2_TR(0x6cfa20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfa25ull));
TAIL_STATIC(0x699821u,699);
}
B6cfa25:L6cfa25:{c.instructions+=2;NFSU2_TR(0x6cfa25);
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
B6cfa27:{NFSU2_TR(0x6cfa27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cfa2d:L6cfa2d:{c.instructions+=8;NFSU2_TR(0x6cfa2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfa34:{NFSU2_TR(0x6cfa34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfa37:{NFSU2_TR(0x6cfa37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cfa39:{NFSU2_TR(0x6cfa39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfa3c:{NFSU2_TR(0x6cfa3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfa3f:{NFSU2_TR(0x6cfa3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfa42:{NFSU2_TR(0x6cfa42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfa45:{NFSU2_TR(0x6cfa45);
{goto L6cfb49;}
}
B6cfa4a:L6cfa4a:{c.instructions+=2;NFSU2_TR(0x6cfa4a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfa50:{NFSU2_TR(0x6cfa50);
if(r1(R+518)){{goto L6cfa5e;}}
}
B6cfa52:L6cfa52:{c.instructions+=2;NFSU2_TR(0x6cfa52);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfa58:{NFSU2_TR(0x6cfa58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cfa5e:L6cfa5e:{c.instructions+=10;NFSU2_TR(0x6cfa5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfa61:{NFSU2_TR(0x6cfa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfa64:{NFSU2_TR(0x6cfa64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cfa66:{NFSU2_TR(0x6cfa66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfa69:{NFSU2_TR(0x6cfa69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfa6c:{NFSU2_TR(0x6cfa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfa6f:{NFSU2_TR(0x6cfa6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cfa72:{NFSU2_TR(0x6cfa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfa75:{NFSU2_TR(0x6cfa75);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cfa78:{NFSU2_TR(0x6cfa78);
if(r1(R+518)){{goto L6cfb49;}}
}
B6cfa7e:L6cfa7e:{c.instructions+=3;NFSU2_TR(0x6cfa7e);
w4(R+8,u32(0x40000ull));
}
B6cfa83:{NFSU2_TR(0x6cfa83);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfa85:{NFSU2_TR(0x6cfa85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cfa8b:L6cfa8b:{c.instructions+=7;NFSU2_TR(0x6cfa8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfa8e:{NFSU2_TR(0x6cfa8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfa8f:{NFSU2_TR(0x6cfa8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfa90:{NFSU2_TR(0x6cfa90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfa91:{NFSU2_TR(0x6cfa91);
u8 U[4];
w4(U+0,u32(0x7b3ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfa96:{NFSU2_TR(0x6cfa96);
__builtin_memmove((R+4),(R+24),4);
}
B6cfa98:{NFSU2_TR(0x6cfa98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfa9dull));
TAIL_STATIC(0x6ca0eeu,6ca);
}
B6cfa9d:L6cfa9d:{c.instructions+=2;NFSU2_TR(0x6cfa9d);
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
B6cfa9f:{NFSU2_TR(0x6cfa9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cfaa5:L6cfaa5:{c.instructions+=10;NFSU2_TR(0x6cfaa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfaa8:{NFSU2_TR(0x6cfaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfaab:{NFSU2_TR(0x6cfaab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cfaad:{NFSU2_TR(0x6cfaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfab0:{NFSU2_TR(0x6cfab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cfab3:{NFSU2_TR(0x6cfab3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cfab5:{NFSU2_TR(0x6cfab5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cfab6:{NFSU2_TR(0x6cfab6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfab9:{NFSU2_TR(0x6cfab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfabc:{NFSU2_TR(0x6cfabc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cfac2:L6cfac2:{c.instructions+=5;NFSU2_TR(0x6cfac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfac5:{NFSU2_TR(0x6cfac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfac8:{NFSU2_TR(0x6cfac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfacb:{NFSU2_TR(0x6cfacb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cface:{NFSU2_TR(0x6cface);
if(r1(R+518)){{goto L6cfad8;}}
}
B6cfad0:L6cfad0:{c.instructions+=3;NFSU2_TR(0x6cfad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfad3:{NFSU2_TR(0x6cfad3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfad6:{NFSU2_TR(0x6cfad6);
{goto L6cfada;}
}
B6cfad8:L6cfad8:{c.instructions+=1;NFSU2_TR(0x6cfad8);
__builtin_memmove((R+0),(R+12),4);
}
B6cfada:L6cfada:{c.instructions+=9;NFSU2_TR(0x6cfada);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cfadd:{NFSU2_TR(0x6cfadd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfade:{NFSU2_TR(0x6cfade);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfadf:{NFSU2_TR(0x6cfadf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cfae2:{NFSU2_TR(0x6cfae2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfae3:{NFSU2_TR(0x6cfae3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cfae6:{NFSU2_TR(0x6cfae6);
__builtin_memmove((R+4),(R+24),4);
}
B6cfae8:{NFSU2_TR(0x6cfae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cfaeb:{NFSU2_TR(0x6cfaeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfaf0ull));
TAIL_STATIC(0x699c39u,699);
}
B6cfaf0:L6cfaf0:{c.instructions+=7;NFSU2_TR(0x6cfaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfaf3:{NFSU2_TR(0x6cfaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfaf6:{NFSU2_TR(0x6cfaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfaf9:{NFSU2_TR(0x6cfaf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cfafc:{NFSU2_TR(0x6cfafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfaff:{NFSU2_TR(0x6cfaff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cfb02:{NFSU2_TR(0x6cfb02);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfac2u);}goto L6cfac2;}}
}
B6cfb04:L6cfb04:{c.instructions+=1;NFSU2_TR(0x6cfb04);
{goto L6cfb49;}
}
B6cfb06:L6cfb06:{c.instructions+=10;NFSU2_TR(0x6cfb06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfb09:{NFSU2_TR(0x6cfb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfb0c:{NFSU2_TR(0x6cfb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cfb0e:{NFSU2_TR(0x6cfb0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfb11:{NFSU2_TR(0x6cfb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfb14:{NFSU2_TR(0x6cfb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfb17:{NFSU2_TR(0x6cfb17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cfb1a:{NFSU2_TR(0x6cfb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfb1d:{NFSU2_TR(0x6cfb1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cfb20:{NFSU2_TR(0x6cfb20);
if(r1(R+518)){{goto L6cfb49;}}
}
B6cfb22:L6cfb22:{c.instructions+=3;NFSU2_TR(0x6cfb22);
w4(R+8,u32(0x2000ull));
}
B6cfb27:{NFSU2_TR(0x6cfb27);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfb29:{NFSU2_TR(0x6cfb29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfb49;}}
}
B6cfb2b:L6cfb2b:{c.instructions+=7;NFSU2_TR(0x6cfb2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfb2e:{NFSU2_TR(0x6cfb2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb2f:{NFSU2_TR(0x6cfb2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb30:{NFSU2_TR(0x6cfb30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb31:{NFSU2_TR(0x6cfb31);
u8 U[4];
w4(U+0,u32(0x79942cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb36:{NFSU2_TR(0x6cfb36);
__builtin_memmove((R+4),(R+24),4);
}
B6cfb38:{NFSU2_TR(0x6cfb38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfb3dull));
TAIL_STATIC(0x6ca0eeu,6ca);
}
B6cfb3d:L6cfb3d:{c.instructions+=2;NFSU2_TR(0x6cfb3d);
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
B6cfb3f:{NFSU2_TR(0x6cfb3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cfb41:L6cfb41:{c.instructions+=3;NFSU2_TR(0x6cfb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfb44:{NFSU2_TR(0x6cfb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfb47:{NFSU2_TR(0x6cfb47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6cfb49:L6cfb49:{c.instructions+=4;NFSU2_TR(0x6cfb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfb4c:{NFSU2_TR(0x6cfb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfb4f:{NFSU2_TR(0x6cfb4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cfb52:{NFSU2_TR(0x6cfb52);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cf936u);}goto L6cf936;}}
}
B6cfb58:L6cfb58:{c.instructions+=1;NFSU2_TR(0x6cfb58);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cfb5a:L6cfb5a:{c.instructions+=2;NFSU2_TR(0x6cfb5a);
__builtin_memmove((R+4),(R+24),4);
}
B6cfb5c:{NFSU2_TR(0x6cfb5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfb61ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6cfb61:L6cfb61:{c.instructions+=2;NFSU2_TR(0x6cfb61);
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
B6cfb63:{NFSU2_TR(0x6cfb63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb67;}}
}
B6cfb65:L6cfb65:{c.instructions+=1;NFSU2_TR(0x6cfb65);
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
B6cfb67:L6cfb67:{c.instructions+=5;NFSU2_TR(0x6cfb67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cfb68:{NFSU2_TR(0x6cfb68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cfb69:{NFSU2_TR(0x6cfb69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cfb6a:{NFSU2_TR(0x6cfb6a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cfb6b:{NFSU2_TR(0x6cfb6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cfb6c:L6cfb6c:{c.instructions+=2;NFSU2_TR(0x6cfb6c);
w4(R+0,u32(0x8007000eull));
}
B6cfb71:{NFSU2_TR(0x6cfb71);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfb67u);}goto L6cfb67;}
}
B6cfb73:L6cfb73:{c.instructions+=7;NFSU2_TR(0x6cfb73);
__builtin_memmove((R+28),(R+28),4);
}
B6cfb75:{NFSU2_TR(0x6cfb75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb76:{NFSU2_TR(0x6cfb76);
__builtin_memmove((R+20),(R+16),4);
}
B6cfb78:{NFSU2_TR(0x6cfb78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb79:{NFSU2_TR(0x6cfb79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfb7b:{NFSU2_TR(0x6cfb7b);
__builtin_memmove((R+24),(R+4),4);
}
B6cfb7d:{NFSU2_TR(0x6cfb7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfb82ull));
TAIL_STATIC(0x6cc145u,6cc);
}
B6cfb82:L6cfb82:{c.instructions+=2;NFSU2_TR(0x6cfb82);
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
B6cfb84:{NFSU2_TR(0x6cfb84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfb9e;}}
}
B6cfb86:L6cfb86:{c.instructions+=7;NFSU2_TR(0x6cfb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfb8c:{NFSU2_TR(0x6cfb8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cfb92:{NFSU2_TR(0x6cfb92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cfb94:{NFSU2_TR(0x6cfb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cfb97:{NFSU2_TR(0x6cfb97);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cfb9a:{NFSU2_TR(0x6cfb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6cfb9c:{NFSU2_TR(0x6cfb9c);
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
B6cfb9e:L6cfb9e:{c.instructions+=3;NFSU2_TR(0x6cfb9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cfb9f:{NFSU2_TR(0x6cfb9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6cfba0:{NFSU2_TR(0x6cfba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cfba3:L6cfba3:{c.instructions+=11;NFSU2_TR(0x6cfba3);
__builtin_memmove((R+28),(R+28),4);
}
B6cfba5:{NFSU2_TR(0x6cfba5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfba6:{NFSU2_TR(0x6cfba6);
__builtin_memmove((R+20),(R+16),4);
}
B6cfba8:{NFSU2_TR(0x6cfba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6cfbab:{NFSU2_TR(0x6cfbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfbaf:{NFSU2_TR(0x6cfbaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbb0:{NFSU2_TR(0x6cfbb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbb1:{NFSU2_TR(0x6cfbb1);
__builtin_memmove((R+24),(R+4),4);
}
B6cfbb3:{NFSU2_TR(0x6cfbb3);
u8 U[4];
w4(U+0,u32(0x53455250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbb8:{NFSU2_TR(0x6cfbb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfbbb:{NFSU2_TR(0x6cfbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfbc0ull));
TAIL_STATIC(0x6c13b9u,6c1);
}
B6cfbc0:L6cfbc0:{c.instructions+=2;NFSU2_TR(0x6cfbc0);
__builtin_memmove((R+4),(R+24),4);
}
B6cfbc2:{NFSU2_TR(0x6cfbc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfbc7ull));
TAIL_STATIC(0x6a746bu,6a7);
}
B6cfbc7:L6cfbc7:{c.instructions+=3;NFSU2_TR(0x6cfbc7);
__builtin_memmove((R+12),(R+0),4);
}
B6cfbc9:{NFSU2_TR(0x6cfbc9);
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
B6cfbcb:{NFSU2_TR(0x6cfbcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfcac;}}
}
B6cfbd1:L6cfbd1:{c.instructions+=5;NFSU2_TR(0x6cfbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfbd7:{NFSU2_TR(0x6cfbd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cfbd9:{NFSU2_TR(0x6cfbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6cfbdc:{NFSU2_TR(0x6cfbdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbdd:{NFSU2_TR(0x6cfbdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfbe0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cfbe0:L6cfbe0:{c.instructions+=3;NFSU2_TR(0x6cfbe0);
__builtin_memmove((R+12),(R+0),4);
}
B6cfbe2:{NFSU2_TR(0x6cfbe2);
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
B6cfbe4:{NFSU2_TR(0x6cfbe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfcac;}}
}
B6cfbea:L6cfbea:{c.instructions+=1;NFSU2_TR(0x6cfbea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfc16;}}
}
B6cfbec:L6cfbec:{c.instructions+=6;NFSU2_TR(0x6cfbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfbef:{NFSU2_TR(0x6cfbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cfbf1:{NFSU2_TR(0x6cfbf1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbf3:{NFSU2_TR(0x6cfbf3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbf5:{NFSU2_TR(0x6cfbf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbf6:{NFSU2_TR(0x6cfbf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfbf9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cfbf9:L6cfbf9:{c.instructions+=5;NFSU2_TR(0x6cfbf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfbfa:{NFSU2_TR(0x6cfbfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfbfd:{NFSU2_TR(0x6cfbfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cfbff:{NFSU2_TR(0x6cfbff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc00:{NFSU2_TR(0x6cfc00);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cfc03:L6cfc03:{c.instructions+=3;NFSU2_TR(0x6cfc03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc04:{NFSU2_TR(0x6cfc04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfc07:{NFSU2_TR(0x6cfc07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc0cull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cfc0c:L6cfc0c:{c.instructions+=3;NFSU2_TR(0x6cfc0c);
__builtin_memmove((R+12),(R+0),4);
}
B6cfc0e:{NFSU2_TR(0x6cfc0e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cfc10:{NFSU2_TR(0x6cfc10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfcac;}}
}
B6cfc16:L6cfc16:{c.instructions+=3;NFSU2_TR(0x6cfc16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc17:{NFSU2_TR(0x6cfc17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfc1a:{NFSU2_TR(0x6cfc1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc1full));
TAIL_STATIC(0x6c1547u,6c1);
}
B6cfc1f:L6cfc1f:{c.instructions+=3;NFSU2_TR(0x6cfc1f);
__builtin_memmove((R+28),(R+0),4);
}
B6cfc21:{NFSU2_TR(0x6cfc21);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfc27:{NFSU2_TR(0x6cfc27);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cfc91;}}
}
B6cfc29:L6cfc29:{c.instructions+=3;NFSU2_TR(0x6cfc29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc2a:{NFSU2_TR(0x6cfc2a);
__builtin_memmove((R+4),(R+24),4);
}
B6cfc2c:{NFSU2_TR(0x6cfc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc31ull));
TAIL_STATIC(0x6cc145u,6cc);
}
B6cfc31:L6cfc31:{c.instructions+=3;NFSU2_TR(0x6cfc31);
__builtin_memmove((R+12),(R+0),4);
}
B6cfc33:{NFSU2_TR(0x6cfc33);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cfc35:{NFSU2_TR(0x6cfc35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfcab;}}
}
B6cfc37:L6cfc37:{c.instructions+=9;NFSU2_TR(0x6cfc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfc3d:{NFSU2_TR(0x6cfc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfc43:{NFSU2_TR(0x6cfc43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cfc4a:{NFSU2_TR(0x6cfc4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc4b:{NFSU2_TR(0x6cfc4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfc4e:{NFSU2_TR(0x6cfc4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc4f:{NFSU2_TR(0x6cfc4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6cfc53:{NFSU2_TR(0x6cfc53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc54:{NFSU2_TR(0x6cfc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc59ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B6cfc59:L6cfc59:{c.instructions+=7;NFSU2_TR(0x6cfc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfc5f:{NFSU2_TR(0x6cfc5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6cfc62:{NFSU2_TR(0x6cfc62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc63:{NFSU2_TR(0x6cfc63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cfc66:{NFSU2_TR(0x6cfc66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc67:{NFSU2_TR(0x6cfc67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfc6a:{NFSU2_TR(0x6cfc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfc6full));
TAIL_STATIC(0x6c1553u,6c1);
}
B6cfc6f:L6cfc6f:{c.instructions+=3;NFSU2_TR(0x6cfc6f);
__builtin_memmove((R+12),(R+0),4);
}
B6cfc71:{NFSU2_TR(0x6cfc71);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cfc73:{NFSU2_TR(0x6cfc73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cfcab;}}
}
B6cfc75:L6cfc75:{c.instructions+=6;NFSU2_TR(0x6cfc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfc7b:{NFSU2_TR(0x6cfc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfc81:{NFSU2_TR(0x6cfc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfc87:{NFSU2_TR(0x6cfc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfc8d:{NFSU2_TR(0x6cfc8d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cfc8f:{NFSU2_TR(0x6cfc8f);
{goto L6cfcab;}
}
B6cfc91:L6cfc91:{c.instructions+=5;NFSU2_TR(0x6cfc91);
u8 U[4];
w4(U+0,u32(0x7bf6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc96:{NFSU2_TR(0x6cfc96);
u8 U[4];
w4(U+0,u32(0x11c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc9b:{NFSU2_TR(0x6cfc9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc9d:{NFSU2_TR(0x6cfc9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfc9e:{NFSU2_TR(0x6cfc9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfca3ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cfca3:L6cfca3:{c.instructions+=2;NFSU2_TR(0x6cfca3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6cfca6:{NFSU2_TR(0x6cfca6);
w4(R+12,u32(0x80004005ull));
}
B6cfcab:L6cfcab:{c.instructions+=1;NFSU2_TR(0x6cfcab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cfcac:L6cfcac:{c.instructions+=3;NFSU2_TR(0x6cfcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfcaf:{NFSU2_TR(0x6cfcaf);
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
B6cfcb1:{NFSU2_TR(0x6cfcb1);
if(r1(R+518)){{goto L6cfcbd;}}
}
B6cfcb3:L6cfcb3:{c.instructions+=3;NFSU2_TR(0x6cfcb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cfcb5:{NFSU2_TR(0x6cfcb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcb6:{NFSU2_TR(0x6cfcb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfcb9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cfcb9:L6cfcb9:{c.instructions+=1;NFSU2_TR(0x6cfcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfcbd:L6cfcbd:{c.instructions+=2;NFSU2_TR(0x6cfcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfcc0:{NFSU2_TR(0x6cfcc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfcc5ull));
TAIL_STATIC(0x6c13d6u,6c1);
}
B6cfcc5:L6cfcc5:{c.instructions+=5;NFSU2_TR(0x6cfcc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cfcc6:{NFSU2_TR(0x6cfcc6);
__builtin_memmove((R+0),(R+12),4);
}
B6cfcc8:{NFSU2_TR(0x6cfcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cfcc9:{NFSU2_TR(0x6cfcc9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cfcca:{NFSU2_TR(0x6cfcca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cfccb:L6cfccb:{c.instructions+=17;NFSU2_TR(0x6cfccb);
__builtin_memmove((R+28),(R+28),4);
}
B6cfccd:{NFSU2_TR(0x6cfccd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcce:{NFSU2_TR(0x6cfcce);
__builtin_memmove((R+20),(R+16),4);
}
B6cfcd0:{NFSU2_TR(0x6cfcd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x17cull))));
}
B6cfcd6:{NFSU2_TR(0x6cfcd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcd7:{NFSU2_TR(0x6cfcd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcd8:{NFSU2_TR(0x6cfcd8);
__builtin_memmove((R+24),(R+4),4);
}
B6cfcda:{NFSU2_TR(0x6cfcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfce0:{NFSU2_TR(0x6cfce0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6cfce2:{NFSU2_TR(0x6cfce2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cfce4:{NFSU2_TR(0x6cfce4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40cf503ull))));
}
B6cfce9:{NFSU2_TR(0x6cfce9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcea:{NFSU2_TR(0x6cfcea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x42415443ull))));
}
B6cfcef:{NFSU2_TR(0x6cfcef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcf0:{NFSU2_TR(0x6cfcf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfcf3:{NFSU2_TR(0x6cfcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfcf6:{NFSU2_TR(0x6cfcf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfcfbull));
TAIL_STATIC(0x6c13b9u,6c1);
}
B6cfcfb:L6cfcfb:{c.instructions+=6;NFSU2_TR(0x6cfcfb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfcfd:{NFSU2_TR(0x6cfcfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfcfe:{NFSU2_TR(0x6cfcfe);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfd00:{NFSU2_TR(0x6cfd00);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cfd02:{NFSU2_TR(0x6cfd02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cfd04:{NFSU2_TR(0x6cfd04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cfd07:L6cfd07:{c.instructions+=1;NFSU2_TR(0x6cfd07);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6cfd09;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfd07u);}goto L6cfd07;}
}
B6cfd09:L6cfd09:{c.instructions+=19;NFSU2_TR(0x6cfd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfd0f:{NFSU2_TR(0x6cfd0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cfd10:{NFSU2_TR(0x6cfd10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfd11:{NFSU2_TR(0x6cfd11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfd13:{NFSU2_TR(0x6cfd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd16:{NFSU2_TR(0x6cfd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfd1c:{NFSU2_TR(0x6cfd1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfd1d:{NFSU2_TR(0x6cfd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd20:{NFSU2_TR(0x6cfd20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cfd23:{NFSU2_TR(0x6cfd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd26:{NFSU2_TR(0x6cfd26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfd27:{NFSU2_TR(0x6cfd27);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfd2a:{NFSU2_TR(0x6cfd2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd2d:{NFSU2_TR(0x6cfd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd30:{NFSU2_TR(0x6cfd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd33:{NFSU2_TR(0x6cfd33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd36:{NFSU2_TR(0x6cfd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd39:{NFSU2_TR(0x6cfd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd3c:{NFSU2_TR(0x6cfd3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfd41ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cfd41:L6cfd41:{c.instructions+=3;NFSU2_TR(0x6cfd41);
__builtin_memmove((R+24),(R+0),4);
}
B6cfd43:{NFSU2_TR(0x6cfd43);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6cfd45:{NFSU2_TR(0x6cfd45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d05f3u,6d0);}
}
B6cfd4b:L6cfd4b:{c.instructions+=7;NFSU2_TR(0x6cfd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cfd4e:{NFSU2_TR(0x6cfd4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cfd50:{NFSU2_TR(0x6cfd50);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cfd52:{NFSU2_TR(0x6cfd52);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfd55:{NFSU2_TR(0x6cfd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd58:{NFSU2_TR(0x6cfd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd5b:{NFSU2_TR(0x6cfd5b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cfdcf;}}
}
B6cfd5d:L6cfd5d:{c.instructions+=4;NFSU2_TR(0x6cfd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfd60:{NFSU2_TR(0x6cfd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd63:{NFSU2_TR(0x6cfd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfd66:{NFSU2_TR(0x6cfd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd69:L6cfd69:{c.instructions+=9;NFSU2_TR(0x6cfd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfd6c:{NFSU2_TR(0x6cfd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cfd6e:{NFSU2_TR(0x6cfd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cfd71:{NFSU2_TR(0x6cfd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfd74:{NFSU2_TR(0x6cfd74);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6cfd77:{NFSU2_TR(0x6cfd77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cfd7a:{NFSU2_TR(0x6cfd7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfd80:{NFSU2_TR(0x6cfd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfd83:{NFSU2_TR(0x6cfd83);
if(r1(R+518)){{goto L6cfdc6;}}
}
B6cfd85:L6cfd85:{c.instructions+=2;NFSU2_TR(0x6cfd85);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cfd89:{NFSU2_TR(0x6cfd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfdc6;}}
}
B6cfd8b:L6cfd8b:{c.instructions+=3;NFSU2_TR(0x6cfd8b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cfd8f:{NFSU2_TR(0x6cfd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfd92:{NFSU2_TR(0x6cfd92);
if(r1(R+518)){{goto L6cfd9d;}}
}
B6cfd94:L6cfd94:{c.instructions+=2;NFSU2_TR(0x6cfd94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfd96:{NFSU2_TR(0x6cfd96);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cfdc6;}}
}
B6cfd98:L6cfd98:{c.instructions+=2;NFSU2_TR(0x6cfd98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cfd9b:{NFSU2_TR(0x6cfd9b);
{goto L6cfdc6;}
}
B6cfd9d:L6cfd9d:{c.instructions+=2;NFSU2_TR(0x6cfd9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cfda1:{NFSU2_TR(0x6cfda1);
if(r1(R+518)){{goto L6cfdae;}}
}
B6cfda3:L6cfda3:{c.instructions+=2;NFSU2_TR(0x6cfda3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfda6:{NFSU2_TR(0x6cfda6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cfdc6;}}
}
B6cfda8:L6cfda8:{c.instructions+=3;NFSU2_TR(0x6cfda8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cfda9:{NFSU2_TR(0x6cfda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfdac:{NFSU2_TR(0x6cfdac);
{goto L6cfdc6;}
}
B6cfdae:L6cfdae:{c.instructions+=2;NFSU2_TR(0x6cfdae);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cfdb2:{NFSU2_TR(0x6cfdb2);
if(r1(R+518)){{goto L6cfdbf;}}
}
B6cfdb4:L6cfdb4:{c.instructions+=2;NFSU2_TR(0x6cfdb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfdb7:{NFSU2_TR(0x6cfdb7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cfdc6;}}
}
B6cfdb9:L6cfdb9:{c.instructions+=3;NFSU2_TR(0x6cfdb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cfdba:{NFSU2_TR(0x6cfdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfdbd:{NFSU2_TR(0x6cfdbd);
{goto L6cfdc6;}
}
B6cfdbf:L6cfdbf:{c.instructions+=2;NFSU2_TR(0x6cfdbf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfdc1:{NFSU2_TR(0x6cfdc1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cfdc6;}}
}
B6cfdc3:L6cfdc3:{c.instructions+=1;NFSU2_TR(0x6cfdc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfdc6:L6cfdc6:{c.instructions+=3;NFSU2_TR(0x6cfdc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfdca:{NFSU2_TR(0x6cfdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfdcd:{NFSU2_TR(0x6cfdcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfd69u);}goto L6cfd69;}}
}
B6cfdcf:L6cfdcf:{c.instructions+=14;NFSU2_TR(0x6cfdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfdd2:{NFSU2_TR(0x6cfdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cfdd5:{NFSU2_TR(0x6cfdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfdd8:{NFSU2_TR(0x6cfdd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cfddb:{NFSU2_TR(0x6cfddb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6cfddd:{NFSU2_TR(0x6cfddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfde0:{NFSU2_TR(0x6cfde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfde3:{NFSU2_TR(0x6cfde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6cfde6:{NFSU2_TR(0x6cfde6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6cfde8:{NFSU2_TR(0x6cfde8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6cfdea:{NFSU2_TR(0x6cfdea);
__builtin_memmove((R+28),(R+24),4);
}
B6cfdec:{NFSU2_TR(0x6cfdec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6cfdef:{NFSU2_TR(0x6cfdef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfdf0:{NFSU2_TR(0x6cfdf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfdf5ull));
TAIL_STATIC(0x575620u,575);
}
B6cfdf5:L6cfdf5:{c.instructions+=4;NFSU2_TR(0x6cfdf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfdf7:{NFSU2_TR(0x6cfdf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfdf8:{NFSU2_TR(0x6cfdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfdfb:{NFSU2_TR(0x6cfdfb);
if(r1(R+518)){TAIL_STATIC(0x6d05d2u,6d0);}
}
B6cfe01:L6cfe01:{c.instructions+=2;NFSU2_TR(0x6cfe01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cfe02:{NFSU2_TR(0x6cfe02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cfe07ull));
TAIL_STATIC(0x575620u,575);
}
B6cfe07:L6cfe07:{c.instructions+=4;NFSU2_TR(0x6cfe07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfe09:{NFSU2_TR(0x6cfe09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6cfe0a:{NFSU2_TR(0x6cfe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfe0d:{NFSU2_TR(0x6cfe0d);
if(r1(R+518)){TAIL_STATIC(0x6d05d2u,6d0);}
}
B6cfe13:L6cfe13:{c.instructions+=6;NFSU2_TR(0x6cfe13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfe17:{NFSU2_TR(0x6cfe17);
__builtin_memmove((R+4),(R+28),4);
}
B6cfe19:{NFSU2_TR(0x6cfe19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cfe1c:{NFSU2_TR(0x6cfe1c);
__builtin_memmove((R+8),(R+4),4);
}
B6cfe1e:{NFSU2_TR(0x6cfe1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cfe21:{NFSU2_TR(0x6cfe21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cfe23:L6cfe23:{c.instructions+=1;NFSU2_TR(0x6cfe23);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6cfe25;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfe23u);}goto L6cfe23;}
}
B6cfe25:L6cfe25:{c.instructions+=2;NFSU2_TR(0x6cfe25);
__builtin_memmove((R+4),(R+8),4);
}
B6cfe27:{NFSU2_TR(0x6cfe27);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cfe2a:L6cfe2a:{c.instructions+=1;NFSU2_TR(0x6cfe2a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6cfe2c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfe2au);}goto L6cfe2a;}
}
B6cfe2c:L6cfe2c:{c.instructions+=2;NFSU2_TR(0x6cfe2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfe30:{NFSU2_TR(0x6cfe30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cfeac;}}
}
B6cfe32:L6cfe32:{c.instructions+=8;NFSU2_TR(0x6cfe32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfe35:{NFSU2_TR(0x6cfe35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfe38:{NFSU2_TR(0x6cfe38);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfe3b:{NFSU2_TR(0x6cfe3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfe3f:{NFSU2_TR(0x6cfe3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfe42:{NFSU2_TR(0x6cfe42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfe45:{NFSU2_TR(0x6cfe45);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cfe48:{NFSU2_TR(0x6cfe48);
if(r1(R+518)){{goto L6cfea1;}}
}
B6cfe4a:L6cfe4a:{c.instructions+=2;NFSU2_TR(0x6cfe4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfe4e:{NFSU2_TR(0x6cfe4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfea1;}}
}
B6cfe50:L6cfe50:{c.instructions+=3;NFSU2_TR(0x6cfe50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfe53:{NFSU2_TR(0x6cfe53);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cfe56:{NFSU2_TR(0x6cfe56);
if(r1(R+518)){{goto L6cfea1;}}
}
B6cfe58:L6cfe58:{c.instructions+=2;NFSU2_TR(0x6cfe58);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cfe5b:{NFSU2_TR(0x6cfe5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfea1;}}
}
B6cfe5d:L6cfe5d:{c.instructions+=2;NFSU2_TR(0x6cfe5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6cfe5f:{NFSU2_TR(0x6cfe5f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6cfe66;}}
}
B6cfe61:L6cfe61:{c.instructions+=2;NFSU2_TR(0x6cfe61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfe64:{NFSU2_TR(0x6cfe64);
{goto L6cfe7d;}
}
B6cfe66:L6cfe66:{c.instructions+=2;NFSU2_TR(0x6cfe66);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cfe69:{NFSU2_TR(0x6cfe69);
if(r1(R+518)){{goto L6cfe6f;}}
}
B6cfe6b:L6cfe6b:{c.instructions+=2;NFSU2_TR(0x6cfe6b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cfe6d:{NFSU2_TR(0x6cfe6d);
{goto L6cfe7d;}
}
B6cfe6f:L6cfe6f:{c.instructions+=3;NFSU2_TR(0x6cfe6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfe75:{NFSU2_TR(0x6cfe75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfe78:{NFSU2_TR(0x6cfe78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfe7d;}}
}
B6cfe7a:L6cfe7a:{c.instructions+=1;NFSU2_TR(0x6cfe7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cfe7d:L6cfe7d:{c.instructions+=8;NFSU2_TR(0x6cfe7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfe80:{NFSU2_TR(0x6cfe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cfe83:{NFSU2_TR(0x6cfe83);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6cfe85:{NFSU2_TR(0x6cfe85);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6cfe88:{NFSU2_TR(0x6cfe88);
__builtin_memmove((R+8),(R+4),4);
}
B6cfe8a:{NFSU2_TR(0x6cfe8a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6cfe8c:{NFSU2_TR(0x6cfe8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cfe8d:{NFSU2_TR(0x6cfe8d);
{goto L6cfe9d;}
}
B6cfe8f:L6cfe8f:{c.instructions+=5;NFSU2_TR(0x6cfe8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cfe92:{NFSU2_TR(0x6cfe92);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6cfe93:{NFSU2_TR(0x6cfe93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6cfe96:{NFSU2_TR(0x6cfe96);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cfe99:{NFSU2_TR(0x6cfe99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cfea1;}}
}
B6cfe9b:L6cfe9b:{c.instructions+=1;NFSU2_TR(0x6cfe9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6cfe9d:L6cfe9d:{c.instructions+=2;NFSU2_TR(0x6cfe9d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfe9f:{NFSU2_TR(0x6cfe9f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfe8fu);}goto L6cfe8f;}}
}
B6cfea1:L6cfea1:{c.instructions+=4;NFSU2_TR(0x6cfea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfea4:{NFSU2_TR(0x6cfea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfea7:{NFSU2_TR(0x6cfea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cfeaa:{NFSU2_TR(0x6cfeaa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfe32u);}goto L6cfe32;}}
}
B6cfeac:L6cfeac:{c.instructions+=5;NFSU2_TR(0x6cfeac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cfeae:{NFSU2_TR(0x6cfeae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cfeb0:{NFSU2_TR(0x6cfeb0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfeb2:{NFSU2_TR(0x6cfeb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfeb5:{NFSU2_TR(0x6cfeb5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cfed1;}}
}
B6cfeb7:L6cfeb7:{c.instructions+=4;NFSU2_TR(0x6cfeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cfeba:{NFSU2_TR(0x6cfeba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cfebd:{NFSU2_TR(0x6cfebd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfebf:{NFSU2_TR(0x6cfebf);
if(r1(R+518)){{goto L6cfeca;}}
}
B6cfec1:L6cfec1:{c.instructions+=3;NFSU2_TR(0x6cfec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cfec4:{NFSU2_TR(0x6cfec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cfec7:{NFSU2_TR(0x6cfec7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cfeca:L6cfeca:{c.instructions+=3;NFSU2_TR(0x6cfeca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cfecb:{NFSU2_TR(0x6cfecb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6cfecd:{NFSU2_TR(0x6cfecd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfeb7u);}goto L6cfeb7;}}
}
B6cfecf:L6cfecf:{c.instructions+=1;NFSU2_TR(0x6cfecf);
{goto L6cfed4;}
}
B6cfed1:L6cfed1:{c.instructions+=1;NFSU2_TR(0x6cfed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cfed4:L6cfed4:{c.instructions+=4;NFSU2_TR(0x6cfed4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cfed6:{NFSU2_TR(0x6cfed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfed9:{NFSU2_TR(0x6cfed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cfedc:{NFSU2_TR(0x6cfedc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cff5a;}}
}
B6cfede:L6cfede:{c.instructions+=2;NFSU2_TR(0x6cfede);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cfee0:{NFSU2_TR(0x6cfee0);
if(r1(R+518)){{goto L6cff12;}}
}
B6cfee2:L6cfee2:{c.instructions+=4;NFSU2_TR(0x6cfee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cfee5:{NFSU2_TR(0x6cfee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cfee8:{NFSU2_TR(0x6cfee8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfeeb:{NFSU2_TR(0x6cfeeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff12;}}
}
B6cfeed:L6cfeed:{c.instructions+=3;NFSU2_TR(0x6cfeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfef0:{NFSU2_TR(0x6cfef0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cfef3:{NFSU2_TR(0x6cfef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff12;}}
}
B6cfef5:L6cfef5:{c.instructions+=11;NFSU2_TR(0x6cfef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cfef8:{NFSU2_TR(0x6cfef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cfefb:{NFSU2_TR(0x6cfefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cfefe:{NFSU2_TR(0x6cfefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cff01:{NFSU2_TR(0x6cff01);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6cff04:{NFSU2_TR(0x6cff04);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6cff06:{NFSU2_TR(0x6cff06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cff09:{NFSU2_TR(0x6cff09);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6cff0c:{NFSU2_TR(0x6cff0c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6cff0e:{NFSU2_TR(0x6cff0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cff10:{NFSU2_TR(0x6cff10);
if(r1(R+518)){{goto L6cff54;}}
}
B6cff12:L6cff12:{c.instructions+=3;NFSU2_TR(0x6cff12);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cff15:{NFSU2_TR(0x6cff15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cff17:{NFSU2_TR(0x6cff17);
if(r1(R+518)){{goto L6cff54;}}
}
B6cff19:L6cff19:{c.instructions+=3;NFSU2_TR(0x6cff19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cff1c:{NFSU2_TR(0x6cff1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cff20:{NFSU2_TR(0x6cff20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff54;}}
}
B6cff22:L6cff22:{c.instructions+=3;NFSU2_TR(0x6cff22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cff25:{NFSU2_TR(0x6cff25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cff27:{NFSU2_TR(0x6cff27);
if(r1(R+518)){{goto L6cff54;}}
}
B6cff29:L6cff29:{c.instructions+=2;NFSU2_TR(0x6cff29);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cff2d:{NFSU2_TR(0x6cff2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff54;}}
}
B6cff2f:L6cff2f:{c.instructions+=3;NFSU2_TR(0x6cff2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cff32:{NFSU2_TR(0x6cff32);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cff34:{NFSU2_TR(0x6cff34);
if(r1(R+518)){{goto L6cff54;}}
}
B6cff36:L6cff36:{c.instructions+=2;NFSU2_TR(0x6cff36);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cff3a:{NFSU2_TR(0x6cff3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff54;}}
}
B6cff3c:L6cff3c:{c.instructions+=2;NFSU2_TR(0x6cff3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cff40:{NFSU2_TR(0x6cff40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cff54;}}
}
B6cff42:L6cff42:{c.instructions+=2;NFSU2_TR(0x6cff42);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cff46:{NFSU2_TR(0x6cff46);
if(r1(R+518)){{goto L6cff54;}}
}
B6cff48:L6cff48:{c.instructions+=4;NFSU2_TR(0x6cff48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cff4b:{NFSU2_TR(0x6cff4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cff4e:{NFSU2_TR(0x6cff4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cff51:{NFSU2_TR(0x6cff51);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cff54:L6cff54:{c.instructions+=3;NFSU2_TR(0x6cff54);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6cff55:{NFSU2_TR(0x6cff55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cff58:{NFSU2_TR(0x6cff58);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cfedeu);}goto L6cfede;}}
}
B6cff5a:L6cff5a:{c.instructions+=4;NFSU2_TR(0x6cff5a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cff5c:{NFSU2_TR(0x6cff5c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
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
B6cff5f:{NFSU2_TR(0x6cff5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cff62:{NFSU2_TR(0x6cff62);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d000fu,6d0);}
}
B6cff68:L6cff68:{c.instructions+=12;NFSU2_TR(0x6cff68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff6b:{NFSU2_TR(0x6cff6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cff6e:{NFSU2_TR(0x6cff6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cff71:{NFSU2_TR(0x6cff71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cff74:{NFSU2_TR(0x6cff74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cff77:{NFSU2_TR(0x6cff77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff7a:{NFSU2_TR(0x6cff7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff7d:{NFSU2_TR(0x6cff7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff80:{NFSU2_TR(0x6cff80);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cff82:{NFSU2_TR(0x6cff82);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cff84:{NFSU2_TR(0x6cff84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cff87:{NFSU2_TR(0x6cff87);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d0002u,6d0);}
}
B6cff89:L6cff89:{c.instructions+=1;NFSU2_TR(0x6cff89);
{goto L6cff8e;}
}
B6cff8b:L6cff8b:{c.instructions+=1;NFSU2_TR(0x6cff8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cff8e:L6cff8e:{c.instructions+=7;NFSU2_TR(0x6cff8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff91:{NFSU2_TR(0x6cff91);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cff94:{NFSU2_TR(0x6cff94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cff97:{NFSU2_TR(0x6cff97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff9a:{NFSU2_TR(0x6cff9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cff9d:{NFSU2_TR(0x6cff9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cffa0:{NFSU2_TR(0x6cffa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cffa3:L6cffa3:{c.instructions+=4;NFSU2_TR(0x6cffa3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6cffa5:{NFSU2_TR(0x6cffa5);
__builtin_memmove((R+8),(R+12),1);
}
B6cffa7:{NFSU2_TR(0x6cffa7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6cffa9:{NFSU2_TR(0x6cffa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cffc5;}}
}
B6cffab:L6cffab:{c.instructions+=2;NFSU2_TR(0x6cffab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cffad:{NFSU2_TR(0x6cffad);
if(r1(R+518)){{goto L6cffc1;}}
}
B6cffaf:L6cffaf:{c.instructions+=4;NFSU2_TR(0x6cffaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6cffb2:{NFSU2_TR(0x6cffb2);
__builtin_memmove((R+8),(R+12),1);
}
B6cffb4:{NFSU2_TR(0x6cffb4);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6cffb7:{NFSU2_TR(0x6cffb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cffc5;}}
}
B6cffb9:L6cffb9:{c.instructions+=6;NFSU2_TR(0x6cffb9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cffba:{NFSU2_TR(0x6cffba);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6cffbb:{NFSU2_TR(0x6cffbb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cffbc:{NFSU2_TR(0x6cffbc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cffbd:{NFSU2_TR(0x6cffbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6cffbf:{NFSU2_TR(0x6cffbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cffa3u);}goto L6cffa3;}}
}
B6cffc1:L6cffc1:{c.instructions+=2;NFSU2_TR(0x6cffc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cffc3:{NFSU2_TR(0x6cffc3);
{goto L6cffca;}
}
B6cffc5:L6cffc5:{c.instructions+=2;NFSU2_TR(0x6cffc5);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cffc7:{NFSU2_TR(0x6cffc7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6cffca:L6cffca:{c.instructions+=2;NFSU2_TR(0x6cffca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cffcc:{NFSU2_TR(0x6cffcc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cffe1;}}
}
B6cffce:L6cffce:{c.instructions+=1;NFSU2_TR(0x6cffce);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6cffdb;}}
}
B6cffd0:L6cffd0:{c.instructions+=4;NFSU2_TR(0x6cffd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cffd3:{NFSU2_TR(0x6cffd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cffd6:{NFSU2_TR(0x6cffd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cffd9:{NFSU2_TR(0x6cffd9);
if(r1(R+512)){{goto L6cffe1;}}
}
B6cffdb:L6cffdb:{c.instructions+=3;NFSU2_TR(0x6cffdb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6cffdc:{NFSU2_TR(0x6cffdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6cffdf:{NFSU2_TR(0x6cffdf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cff8bu);}goto L6cff8b;}}
}
B6cffe1:L6cffe1:{c.instructions+=3;NFSU2_TR(0x6cffe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cffe4:{NFSU2_TR(0x6cffe4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cffe6:{NFSU2_TR(0x6cffe6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cffff;}}
}
B6cffe8:L6cffe8:{c.instructions+=1;NFSU2_TR(0x6cffe8);
__builtin_memmove((R+0),(R+4),4);
}
B6cffea:L6cffea:{c.instructions+=6;NFSU2_TR(0x6cffea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cffed:{NFSU2_TR(0x6cffed);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6cfff1:{NFSU2_TR(0x6cfff1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cfff4:{NFSU2_TR(0x6cfff4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6cfff5:{NFSU2_TR(0x6cfff5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cfff7:{NFSU2_TR(0x6cfff7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cffeau);}goto L6cffea;}}
}
B6cfff9:L6cfff9:{c.instructions+=2;NFSU2_TR(0x6cfff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cfffc:{NFSU2_TR(0x6cfffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cffff:L6cffff:{c.instructions+=1;NFSU2_TR(0x6cffff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
TAIL_STATIC(0x6d0002u,6d0);
}
XIT:NFSU2_TR_EXIT(0x6cf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
