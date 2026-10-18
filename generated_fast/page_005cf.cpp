#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5d0(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5cf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5cf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 page_5cf(Cpu& c){return body_5cf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5cf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5cf000:goto L5cf000;
case 0x5cf001:c.instructions+=3;goto B5cf001;
case 0x5cf003:c.instructions+=2;goto B5cf003;
case 0x5cf007:c.instructions+=1;goto B5cf007;
case 0x5cf009:goto L5cf009;
case 0x5cf00c:c.instructions+=2;goto B5cf00c;
case 0x5cf00d:c.instructions+=1;goto B5cf00d;
case 0x5cf012:goto L5cf012;
case 0x5cf015:goto L5cf015;
case 0x5cf017:c.instructions+=5;goto B5cf017;
case 0x5cf01e:c.instructions+=4;goto B5cf01e;
case 0x5cf021:c.instructions+=3;goto B5cf021;
case 0x5cf024:c.instructions+=2;goto B5cf024;
case 0x5cf025:c.instructions+=1;goto B5cf025;
case 0x5cf030:goto L5cf030;
case 0x5cf031:c.instructions+=5;goto B5cf031;
case 0x5cf032:c.instructions+=4;goto B5cf032;
case 0x5cf034:c.instructions+=3;goto B5cf034;
case 0x5cf036:c.instructions+=2;goto B5cf036;
case 0x5cf038:c.instructions+=1;goto B5cf038;
case 0x5cf03a:goto L5cf03a;
case 0x5cf040:goto L5cf040;
case 0x5cf043:c.instructions+=5;goto B5cf043;
case 0x5cf045:c.instructions+=4;goto B5cf045;
case 0x5cf047:c.instructions+=3;goto B5cf047;
case 0x5cf04a:c.instructions+=2;goto B5cf04a;
case 0x5cf04c:c.instructions+=1;goto B5cf04c;
case 0x5cf051:goto L5cf051;
case 0x5cf056:c.instructions+=3;goto B5cf056;
case 0x5cf057:c.instructions+=2;goto B5cf057;
case 0x5cf058:c.instructions+=1;goto B5cf058;
case 0x5cf05d:goto L5cf05d;
case 0x5cf05f:c.instructions+=3;goto B5cf05f;
case 0x5cf062:c.instructions+=2;goto B5cf062;
case 0x5cf064:c.instructions+=1;goto B5cf064;
case 0x5cf066:goto L5cf066;
case 0x5cf067:c.instructions+=2;goto B5cf067;
case 0x5cf068:c.instructions+=1;goto B5cf068;
case 0x5cf070:goto L5cf070;
case 0x5cf071:c.instructions+=5;goto B5cf071;
case 0x5cf072:c.instructions+=4;goto B5cf072;
case 0x5cf076:c.instructions+=3;goto B5cf076;
case 0x5cf079:c.instructions+=2;goto B5cf079;
case 0x5cf07b:c.instructions+=1;goto B5cf07b;
case 0x5cf07d:goto L5cf07d;
case 0x5cf082:goto L5cf082;
case 0x5cf085:c.instructions+=2;goto B5cf085;
case 0x5cf087:c.instructions+=1;goto B5cf087;
case 0x5cf089:goto L5cf089;
case 0x5cf08d:c.instructions+=2;goto B5cf08d;
case 0x5cf08f:c.instructions+=1;goto B5cf08f;
case 0x5cf091:goto L5cf091;
case 0x5cf093:c.instructions+=4;goto B5cf093;
case 0x5cf094:c.instructions+=3;goto B5cf094;
case 0x5cf095:c.instructions+=2;goto B5cf095;
case 0x5cf097:c.instructions+=1;goto B5cf097;
case 0x5cf09c:goto L5cf09c;
case 0x5cf09e:c.instructions+=6;goto B5cf09e;
case 0x5cf0a0:c.instructions+=5;goto B5cf0a0;
case 0x5cf0a2:c.instructions+=4;goto B5cf0a2;
case 0x5cf0a3:c.instructions+=3;goto B5cf0a3;
case 0x5cf0a5:c.instructions+=2;goto B5cf0a5;
case 0x5cf0a6:c.instructions+=1;goto B5cf0a6;
case 0x5cf0a9:goto L5cf0a9;
case 0x5cf0ac:c.instructions+=4;goto B5cf0ac;
case 0x5cf0ad:c.instructions+=3;goto B5cf0ad;
case 0x5cf0ae:c.instructions+=2;goto B5cf0ae;
case 0x5cf0b0:c.instructions+=1;goto B5cf0b0;
case 0x5cf0b5:goto L5cf0b5;
case 0x5cf0b7:c.instructions+=6;goto B5cf0b7;
case 0x5cf0b9:c.instructions+=5;goto B5cf0b9;
case 0x5cf0bb:c.instructions+=4;goto B5cf0bb;
case 0x5cf0bc:c.instructions+=3;goto B5cf0bc;
case 0x5cf0be:c.instructions+=2;goto B5cf0be;
case 0x5cf0bf:c.instructions+=1;goto B5cf0bf;
case 0x5cf0c2:goto L5cf0c2;
case 0x5cf0c6:c.instructions+=2;goto B5cf0c6;
case 0x5cf0c8:c.instructions+=1;goto B5cf0c8;
case 0x5cf0ca:goto L5cf0ca;
case 0x5cf0cd:c.instructions+=1;goto B5cf0cd;
case 0x5cf0cf:goto L5cf0cf;
case 0x5cf0d2:c.instructions+=1;goto B5cf0d2;
case 0x5cf0d4:goto L5cf0d4;
case 0x5cf0d7:c.instructions+=2;goto B5cf0d7;
case 0x5cf0d8:c.instructions+=1;goto B5cf0d8;
case 0x5cf0dd:goto L5cf0dd;
case 0x5cf0e0:goto L5cf0e0;
case 0x5cf0e2:c.instructions+=9;goto B5cf0e2;
case 0x5cf0e4:c.instructions+=8;goto B5cf0e4;
case 0x5cf0eb:c.instructions+=7;goto B5cf0eb;
case 0x5cf0f2:c.instructions+=6;goto B5cf0f2;
case 0x5cf0f4:c.instructions+=5;goto B5cf0f4;
case 0x5cf0f5:c.instructions+=4;goto B5cf0f5;
case 0x5cf0f9:c.instructions+=3;goto B5cf0f9;
case 0x5cf0fb:c.instructions+=2;goto B5cf0fb;
case 0x5cf0fc:c.instructions+=1;goto B5cf0fc;
case 0x5cf0ff:goto L5cf0ff;
case 0x5cf101:c.instructions+=1;goto B5cf101;
case 0x5cf103:goto L5cf103;
case 0x5cf106:c.instructions+=2;goto B5cf106;
case 0x5cf109:c.instructions+=1;goto B5cf109;
case 0x5cf10b:goto L5cf10b;
case 0x5cf10e:c.instructions+=8;goto B5cf10e;
case 0x5cf110:c.instructions+=7;goto B5cf110;
case 0x5cf112:c.instructions+=6;goto B5cf112;
case 0x5cf114:c.instructions+=5;goto B5cf114;
case 0x5cf115:c.instructions+=4;goto B5cf115;
case 0x5cf118:c.instructions+=3;goto B5cf118;
case 0x5cf11a:c.instructions+=2;goto B5cf11a;
case 0x5cf11b:c.instructions+=1;goto B5cf11b;
case 0x5cf11e:goto L5cf11e;
case 0x5cf121:c.instructions+=1;goto B5cf121;
case 0x5cf124:goto L5cf124;
case 0x5cf126:c.instructions+=6;goto B5cf126;
case 0x5cf128:c.instructions+=5;goto B5cf128;
case 0x5cf12a:c.instructions+=4;goto B5cf12a;
case 0x5cf12b:c.instructions+=3;goto B5cf12b;
case 0x5cf12d:c.instructions+=2;goto B5cf12d;
case 0x5cf12e:c.instructions+=1;goto B5cf12e;
case 0x5cf140:goto L5cf140;
case 0x5cf141:c.instructions+=7;goto B5cf141;
case 0x5cf145:c.instructions+=6;goto B5cf145;
case 0x5cf146:c.instructions+=5;goto B5cf146;
case 0x5cf14a:c.instructions+=4;goto B5cf14a;
case 0x5cf14c:c.instructions+=3;goto B5cf14c;
case 0x5cf14d:c.instructions+=2;goto B5cf14d;
case 0x5cf14f:c.instructions+=1;goto B5cf14f;
case 0x5cf151:goto L5cf151;
case 0x5cf154:c.instructions+=4;goto B5cf154;
case 0x5cf156:c.instructions+=3;goto B5cf156;
case 0x5cf158:c.instructions+=2;goto B5cf158;
case 0x5cf15a:c.instructions+=1;goto B5cf15a;
case 0x5cf15c:goto L5cf15c;
case 0x5cf15f:c.instructions+=7;goto B5cf15f;
case 0x5cf161:c.instructions+=6;goto B5cf161;
case 0x5cf163:c.instructions+=5;goto B5cf163;
case 0x5cf165:c.instructions+=4;goto B5cf165;
case 0x5cf168:c.instructions+=3;goto B5cf168;
case 0x5cf169:c.instructions+=2;goto B5cf169;
case 0x5cf16c:c.instructions+=1;goto B5cf16c;
case 0x5cf171:goto L5cf171;
case 0x5cf174:c.instructions+=3;goto B5cf174;
case 0x5cf177:c.instructions+=2;goto B5cf177;
case 0x5cf178:c.instructions+=1;goto B5cf178;
case 0x5cf17b:goto L5cf17b;
case 0x5cf17d:c.instructions+=1;goto B5cf17d;
case 0x5cf17f:goto L5cf17f;
case 0x5cf183:c.instructions+=5;goto B5cf183;
case 0x5cf184:c.instructions+=4;goto B5cf184;
case 0x5cf186:c.instructions+=3;goto B5cf186;
case 0x5cf187:c.instructions+=2;goto B5cf187;
case 0x5cf188:c.instructions+=1;goto B5cf188;
case 0x5cf190:goto L5cf190;
case 0x5cf194:c.instructions+=13;goto B5cf194;
case 0x5cf198:c.instructions+=12;goto B5cf198;
case 0x5cf199:c.instructions+=11;goto B5cf199;
case 0x5cf19a:c.instructions+=10;goto B5cf19a;
case 0x5cf19e:c.instructions+=9;goto B5cf19e;
case 0x5cf19f:c.instructions+=8;goto B5cf19f;
case 0x5cf1a0:c.instructions+=7;goto B5cf1a0;
case 0x5cf1a2:c.instructions+=6;goto B5cf1a2;
case 0x5cf1a3:c.instructions+=5;goto B5cf1a3;
case 0x5cf1a7:c.instructions+=4;goto B5cf1a7;
case 0x5cf1a9:c.instructions+=3;goto B5cf1a9;
case 0x5cf1ab:c.instructions+=2;goto B5cf1ab;
case 0x5cf1ad:c.instructions+=1;goto B5cf1ad;
case 0x5cf1b2:goto L5cf1b2;
case 0x5cf1b5:c.instructions+=1;goto B5cf1b5;
case 0x5cf1c0:goto L5cf1c0;
case 0x5cf1c5:c.instructions+=2;goto B5cf1c5;
case 0x5cf1c7:c.instructions+=1;goto B5cf1c7;
case 0x5cf1c9:goto L5cf1c9;
case 0x5cf1cb:c.instructions+=2;goto B5cf1cb;
case 0x5cf1cc:c.instructions+=1;goto B5cf1cc;
case 0x5cf1cf:goto L5cf1cf;
case 0x5cf1d4:c.instructions+=3;goto B5cf1d4;
case 0x5cf1d6:c.instructions+=2;goto B5cf1d6;
case 0x5cf1d7:c.instructions+=1;goto B5cf1d7;
case 0x5cf1da:goto L5cf1da;
case 0x5cf1e4:goto L5cf1e4;
case 0x5cf1ea:c.instructions+=4;goto B5cf1ea;
case 0x5cf1ec:c.instructions+=3;goto B5cf1ec;
case 0x5cf1ed:c.instructions+=2;goto B5cf1ed;
case 0x5cf1ef:c.instructions+=1;goto B5cf1ef;
case 0x5cf1f1:goto L5cf1f1;
case 0x5cf1f6:goto L5cf1f6;
case 0x5cf1f7:c.instructions+=1;goto B5cf1f7;
case 0x5cf1fc:goto L5cf1fc;
case 0x5cf1ff:goto L5cf1ff;
case 0x5cf204:c.instructions+=3;goto B5cf204;
case 0x5cf206:c.instructions+=2;goto B5cf206;
case 0x5cf207:c.instructions+=1;goto B5cf207;
case 0x5cf209:goto L5cf209;
case 0x5cf20b:c.instructions+=2;goto B5cf20b;
case 0x5cf20c:c.instructions+=1;goto B5cf20c;
case 0x5cf20f:goto L5cf20f;
case 0x5cf219:goto L5cf219;
case 0x5cf220:goto L5cf220;
case 0x5cf221:c.instructions+=4;goto B5cf221;
case 0x5cf223:c.instructions+=3;goto B5cf223;
case 0x5cf229:c.instructions+=2;goto B5cf229;
case 0x5cf22b:c.instructions+=1;goto B5cf22b;
case 0x5cf22d:goto L5cf22d;
case 0x5cf234:c.instructions+=1;goto B5cf234;
case 0x5cf236:goto L5cf236;
case 0x5cf23b:goto L5cf23b;
case 0x5cf23d:goto L5cf23d;
case 0x5cf242:goto L5cf242;
case 0x5cf244:goto L5cf244;
case 0x5cf249:goto L5cf249;
case 0x5cf24c:c.instructions+=9;goto B5cf24c;
case 0x5cf252:c.instructions+=8;goto B5cf252;
case 0x5cf258:c.instructions+=7;goto B5cf258;
case 0x5cf25a:c.instructions+=6;goto B5cf25a;
case 0x5cf260:c.instructions+=5;goto B5cf260;
case 0x5cf263:c.instructions+=4;goto B5cf263;
case 0x5cf265:c.instructions+=3;goto B5cf265;
case 0x5cf26b:c.instructions+=2;goto B5cf26b;
case 0x5cf272:c.instructions+=1;goto B5cf272;
case 0x5cf278:goto L5cf278;
case 0x5cf27b:c.instructions+=2;goto B5cf27b;
case 0x5cf281:c.instructions+=1;goto B5cf281;
case 0x5cf283:goto L5cf283;
case 0x5cf288:goto L5cf288;
case 0x5cf28b:c.instructions+=2;goto B5cf28b;
case 0x5cf291:c.instructions+=1;goto B5cf291;
case 0x5cf293:goto L5cf293;
case 0x5cf298:goto L5cf298;
case 0x5cf29b:c.instructions+=3;goto B5cf29b;
case 0x5cf29e:c.instructions+=2;goto B5cf29e;
case 0x5cf2a3:c.instructions+=1;goto B5cf2a3;
case 0x5cf2a5:goto L5cf2a5;
case 0x5cf2a7:goto L5cf2a7;
case 0x5cf2ae:c.instructions+=2;goto B5cf2ae;
case 0x5cf2b4:c.instructions+=1;goto B5cf2b4;
case 0x5cf2b6:goto L5cf2b6;
case 0x5cf2b8:goto L5cf2b8;
case 0x5cf2ba:c.instructions+=1;goto B5cf2ba;
case 0x5cf2bc:goto L5cf2bc;
case 0x5cf2c1:c.instructions+=3;goto B5cf2c1;
case 0x5cf2c3:c.instructions+=2;goto B5cf2c3;
case 0x5cf2c9:c.instructions+=1;goto B5cf2c9;
case 0x5cf2cb:goto L5cf2cb;
case 0x5cf2d1:c.instructions+=3;goto B5cf2d1;
case 0x5cf2d8:c.instructions+=2;goto B5cf2d8;
case 0x5cf2da:c.instructions+=1;goto B5cf2da;
case 0x5cf2dc:goto L5cf2dc;
case 0x5cf2e2:c.instructions+=2;goto B5cf2e2;
case 0x5cf2e4:c.instructions+=1;goto B5cf2e4;
case 0x5cf2e6:goto L5cf2e6;
case 0x5cf2ed:goto L5cf2ed;
case 0x5cf2f0:c.instructions+=3;goto B5cf2f0;
case 0x5cf2f3:c.instructions+=2;goto B5cf2f3;
case 0x5cf2f8:c.instructions+=1;goto B5cf2f8;
case 0x5cf2fa:goto L5cf2fa;
case 0x5cf2fc:goto L5cf2fc;
case 0x5cf303:c.instructions+=2;goto B5cf303;
case 0x5cf309:c.instructions+=1;goto B5cf309;
case 0x5cf30b:goto L5cf30b;
case 0x5cf30d:goto L5cf30d;
case 0x5cf30f:c.instructions+=1;goto B5cf30f;
case 0x5cf311:goto L5cf311;
case 0x5cf317:goto L5cf317;
case 0x5cf318:c.instructions+=1;goto B5cf318;
case 0x5cf320:goto L5cf320;
case 0x5cf321:c.instructions+=6;goto B5cf321;
case 0x5cf323:c.instructions+=5;goto B5cf323;
case 0x5cf329:c.instructions+=4;goto B5cf329;
case 0x5cf32c:c.instructions+=3;goto B5cf32c;
case 0x5cf32e:c.instructions+=2;goto B5cf32e;
case 0x5cf32f:c.instructions+=1;goto B5cf32f;
case 0x5cf331:goto L5cf331;
case 0x5cf337:c.instructions+=2;goto B5cf337;
case 0x5cf339:c.instructions+=1;goto B5cf339;
case 0x5cf33b:goto L5cf33b;
case 0x5cf342:c.instructions+=1;goto B5cf342;
case 0x5cf344:goto L5cf344;
case 0x5cf347:c.instructions+=5;goto B5cf347;
case 0x5cf34a:c.instructions+=4;goto B5cf34a;
case 0x5cf34f:c.instructions+=3;goto B5cf34f;
case 0x5cf351:c.instructions+=2;goto B5cf351;
case 0x5cf352:c.instructions+=1;goto B5cf352;
case 0x5cf355:goto L5cf355;
case 0x5cf359:c.instructions+=10;goto B5cf359;
case 0x5cf35e:c.instructions+=9;goto B5cf35e;
case 0x5cf360:c.instructions+=8;goto B5cf360;
case 0x5cf362:c.instructions+=7;goto B5cf362;
case 0x5cf368:c.instructions+=6;goto B5cf368;
case 0x5cf36a:c.instructions+=5;goto B5cf36a;
case 0x5cf36c:c.instructions+=4;goto B5cf36c;
case 0x5cf372:c.instructions+=3;goto B5cf372;
case 0x5cf373:c.instructions+=2;goto B5cf373;
case 0x5cf374:c.instructions+=1;goto B5cf374;
case 0x5cf377:goto L5cf377;
case 0x5cf379:c.instructions+=1;goto B5cf379;
case 0x5cf37b:goto L5cf37b;
case 0x5cf37d:c.instructions+=1;goto B5cf37d;
case 0x5cf382:goto L5cf382;
case 0x5cf388:c.instructions+=3;goto B5cf388;
case 0x5cf389:c.instructions+=2;goto B5cf389;
case 0x5cf38a:c.instructions+=1;goto B5cf38a;
case 0x5cf38d:goto L5cf38d;
case 0x5cf391:c.instructions+=4;goto B5cf391;
case 0x5cf392:c.instructions+=3;goto B5cf392;
case 0x5cf398:c.instructions+=2;goto B5cf398;
case 0x5cf399:c.instructions+=1;goto B5cf399;
case 0x5cf39c:goto L5cf39c;
case 0x5cf3a0:c.instructions+=4;goto B5cf3a0;
case 0x5cf3a1:c.instructions+=3;goto B5cf3a1;
case 0x5cf3a7:c.instructions+=2;goto B5cf3a7;
case 0x5cf3a8:c.instructions+=1;goto B5cf3a8;
case 0x5cf3ab:goto L5cf3ab;
case 0x5cf3af:c.instructions+=4;goto B5cf3af;
case 0x5cf3b0:c.instructions+=3;goto B5cf3b0;
case 0x5cf3b6:c.instructions+=2;goto B5cf3b6;
case 0x5cf3b7:c.instructions+=1;goto B5cf3b7;
case 0x5cf3c0:goto L5cf3c0;
case 0x5cf3c4:c.instructions+=1;goto B5cf3c4;
case 0x5cf3c6:goto L5cf3c6;
case 0x5cf3c9:c.instructions+=1;goto B5cf3c9;
case 0x5cf3ca:goto L5cf3ca;
case 0x5cf3cd:c.instructions+=1;goto B5cf3cd;
case 0x5cf3d0:goto L5cf3d0;
case 0x5cf3d1:c.instructions+=2;goto B5cf3d1;
case 0x5cf3d3:c.instructions+=1;goto B5cf3d3;
case 0x5cf3d8:goto L5cf3d8;
case 0x5cf3dd:c.instructions+=1;goto B5cf3dd;
case 0x5cf3df:goto L5cf3df;
case 0x5cf3e0:c.instructions+=1;goto B5cf3e0;
case 0x5cf3e5:goto L5cf3e5;
case 0x5cf3e8:goto L5cf3e8;
case 0x5cf3ea:c.instructions+=2;goto B5cf3ea;
case 0x5cf3eb:c.instructions+=1;goto B5cf3eb;
case 0x5cf3f0:goto L5cf3f0;
case 0x5cf3f1:c.instructions+=7;goto B5cf3f1;
case 0x5cf3f6:c.instructions+=6;goto B5cf3f6;
case 0x5cf3fb:c.instructions+=5;goto B5cf3fb;
case 0x5cf3fd:c.instructions+=4;goto B5cf3fd;
case 0x5cf3ff:c.instructions+=3;goto B5cf3ff;
case 0x5cf401:c.instructions+=2;goto B5cf401;
case 0x5cf402:c.instructions+=1;goto B5cf402;
case 0x5cf407:goto L5cf407;
case 0x5cf409:c.instructions+=2;goto B5cf409;
case 0x5cf40a:c.instructions+=1;goto B5cf40a;
case 0x5cf410:goto L5cf410;
case 0x5cf415:c.instructions+=4;goto B5cf415;
case 0x5cf417:c.instructions+=3;goto B5cf417;
case 0x5cf419:c.instructions+=2;goto B5cf419;
case 0x5cf41a:c.instructions+=1;goto B5cf41a;
case 0x5cf41f:goto L5cf41f;
case 0x5cf420:goto L5cf420;
case 0x5cf425:c.instructions+=9;goto B5cf425;
case 0x5cf428:c.instructions+=8;goto B5cf428;
case 0x5cf429:c.instructions+=7;goto B5cf429;
case 0x5cf42a:c.instructions+=6;goto B5cf42a;
case 0x5cf42b:c.instructions+=5;goto B5cf42b;
case 0x5cf42c:c.instructions+=4;goto B5cf42c;
case 0x5cf42d:c.instructions+=3;goto B5cf42d;
case 0x5cf432:c.instructions+=2;goto B5cf432;
case 0x5cf437:c.instructions+=1;goto B5cf437;
case 0x5cf440:goto L5cf440;
case 0x5cf445:c.instructions+=3;goto B5cf445;
case 0x5cf449:c.instructions+=2;goto B5cf449;
case 0x5cf44d:c.instructions+=1;goto B5cf44d;
case 0x5cf450:goto L5cf450;
case 0x5cf452:c.instructions+=1;goto B5cf452;
case 0x5cf458:goto L5cf458;
case 0x5cf45b:c.instructions+=5;goto B5cf45b;
case 0x5cf461:c.instructions+=4;goto B5cf461;
case 0x5cf463:c.instructions+=3;goto B5cf463;
case 0x5cf465:c.instructions+=2;goto B5cf465;
case 0x5cf469:c.instructions+=1;goto B5cf469;
case 0x5cf46c:goto L5cf46c;
case 0x5cf46f:c.instructions+=5;goto B5cf46f;
case 0x5cf474:c.instructions+=4;goto B5cf474;
case 0x5cf476:c.instructions+=3;goto B5cf476;
case 0x5cf477:c.instructions+=2;goto B5cf477;
case 0x5cf478:c.instructions+=1;goto B5cf478;
case 0x5cf47e:goto L5cf47e;
case 0x5cf481:c.instructions+=6;goto B5cf481;
case 0x5cf483:c.instructions+=5;goto B5cf483;
case 0x5cf485:c.instructions+=4;goto B5cf485;
case 0x5cf489:c.instructions+=3;goto B5cf489;
case 0x5cf48a:c.instructions+=2;goto B5cf48a;
case 0x5cf48b:c.instructions+=1;goto B5cf48b;
case 0x5cf491:goto L5cf491;
case 0x5cf497:c.instructions+=6;goto B5cf497;
case 0x5cf499:c.instructions+=5;goto B5cf499;
case 0x5cf49a:c.instructions+=4;goto B5cf49a;
case 0x5cf49c:c.instructions+=3;goto B5cf49c;
case 0x5cf4a2:c.instructions+=2;goto B5cf4a2;
case 0x5cf4a6:c.instructions+=1;goto B5cf4a6;
case 0x5cf4ac:goto L5cf4ac;
case 0x5cf4ae:goto L5cf4ae;
case 0x5cf4b2:goto L5cf4b2;
case 0x5cf4b4:c.instructions+=7;goto B5cf4b4;
case 0x5cf4b7:c.instructions+=6;goto B5cf4b7;
case 0x5cf4b9:c.instructions+=5;goto B5cf4b9;
case 0x5cf4bc:c.instructions+=4;goto B5cf4bc;
case 0x5cf4c2:c.instructions+=3;goto B5cf4c2;
case 0x5cf4c5:c.instructions+=2;goto B5cf4c5;
case 0x5cf4c6:c.instructions+=1;goto B5cf4c6;
case 0x5cf4cb:goto L5cf4cb;
case 0x5cf4ce:c.instructions+=4;goto B5cf4ce;
case 0x5cf4d1:c.instructions+=3;goto B5cf4d1;
case 0x5cf4d4:c.instructions+=2;goto B5cf4d4;
case 0x5cf4d6:c.instructions+=1;goto B5cf4d6;
case 0x5cf4dc:goto L5cf4dc;
case 0x5cf4e0:goto L5cf4e0;
case 0x5cf4e2:c.instructions+=12;goto B5cf4e2;
case 0x5cf4e5:c.instructions+=11;goto B5cf4e5;
case 0x5cf4e8:c.instructions+=10;goto B5cf4e8;
case 0x5cf4ea:c.instructions+=9;goto B5cf4ea;
case 0x5cf4ed:c.instructions+=8;goto B5cf4ed;
case 0x5cf4f0:c.instructions+=7;goto B5cf4f0;
case 0x5cf4f6:c.instructions+=6;goto B5cf4f6;
case 0x5cf4f9:c.instructions+=5;goto B5cf4f9;
case 0x5cf4fd:c.instructions+=4;goto B5cf4fd;
case 0x5cf500:c.instructions+=3;goto B5cf500;
case 0x5cf501:c.instructions+=2;goto B5cf501;
case 0x5cf502:c.instructions+=1;goto B5cf502;
case 0x5cf507:goto L5cf507;
case 0x5cf50a:c.instructions+=5;goto B5cf50a;
case 0x5cf50d:c.instructions+=4;goto B5cf50d;
case 0x5cf513:c.instructions+=3;goto B5cf513;
case 0x5cf516:c.instructions+=2;goto B5cf516;
case 0x5cf518:c.instructions+=1;goto B5cf518;
case 0x5cf51a:goto L5cf51a;
case 0x5cf51c:c.instructions+=1;goto B5cf51c;
case 0x5cf521:goto L5cf521;
case 0x5cf524:c.instructions+=3;goto B5cf524;
case 0x5cf525:c.instructions+=2;goto B5cf525;
case 0x5cf526:c.instructions+=1;goto B5cf526;
case 0x5cf52b:goto L5cf52b;
case 0x5cf52e:goto L5cf52e;
case 0x5cf531:c.instructions+=2;goto B5cf531;
case 0x5cf533:c.instructions+=1;goto B5cf533;
case 0x5cf535:goto L5cf535;
case 0x5cf538:c.instructions+=3;goto B5cf538;
case 0x5cf539:c.instructions+=2;goto B5cf539;
case 0x5cf53a:c.instructions+=1;goto B5cf53a;
case 0x5cf53f:goto L5cf53f;
case 0x5cf542:goto L5cf542;
case 0x5cf545:c.instructions+=2;goto B5cf545;
case 0x5cf547:c.instructions+=1;goto B5cf547;
case 0x5cf549:goto L5cf549;
case 0x5cf54c:c.instructions+=3;goto B5cf54c;
case 0x5cf54d:c.instructions+=2;goto B5cf54d;
case 0x5cf54e:c.instructions+=1;goto B5cf54e;
case 0x5cf553:goto L5cf553;
case 0x5cf556:goto L5cf556;
case 0x5cf559:c.instructions+=3;goto B5cf559;
case 0x5cf55b:c.instructions+=2;goto B5cf55b;
case 0x5cf55e:c.instructions+=1;goto B5cf55e;
case 0x5cf564:goto L5cf564;
case 0x5cf567:c.instructions+=3;goto B5cf567;
case 0x5cf569:c.instructions+=2;goto B5cf569;
case 0x5cf56d:c.instructions+=1;goto B5cf56d;
case 0x5cf56f:goto L5cf56f;
case 0x5cf573:c.instructions+=1;goto B5cf573;
case 0x5cf575:goto L5cf575;
case 0x5cf576:c.instructions+=2;goto B5cf576;
case 0x5cf577:c.instructions+=1;goto B5cf577;
case 0x5cf57c:goto L5cf57c;
case 0x5cf57f:goto L5cf57f;
case 0x5cf582:c.instructions+=5;goto B5cf582;
case 0x5cf584:c.instructions+=4;goto B5cf584;
case 0x5cf587:c.instructions+=3;goto B5cf587;
case 0x5cf589:c.instructions+=2;goto B5cf589;
case 0x5cf58c:c.instructions+=1;goto B5cf58c;
case 0x5cf58e:goto L5cf58e;
case 0x5cf591:c.instructions+=11;goto B5cf591;
case 0x5cf593:c.instructions+=10;goto B5cf593;
case 0x5cf594:c.instructions+=9;goto B5cf594;
case 0x5cf596:c.instructions+=8;goto B5cf596;
case 0x5cf598:c.instructions+=7;goto B5cf598;
case 0x5cf59a:c.instructions+=6;goto B5cf59a;
case 0x5cf5a1:c.instructions+=5;goto B5cf5a1;
case 0x5cf5a6:c.instructions+=4;goto B5cf5a6;
case 0x5cf5a8:c.instructions+=3;goto B5cf5a8;
case 0x5cf5a9:c.instructions+=2;goto B5cf5a9;
case 0x5cf5aa:c.instructions+=1;goto B5cf5aa;
case 0x5cf5ad:goto L5cf5ad;
case 0x5cf5af:c.instructions+=8;goto B5cf5af;
case 0x5cf5b1:c.instructions+=7;goto B5cf5b1;
case 0x5cf5b3:c.instructions+=6;goto B5cf5b3;
case 0x5cf5b7:c.instructions+=5;goto B5cf5b7;
case 0x5cf5b8:c.instructions+=4;goto B5cf5b8;
case 0x5cf5ba:c.instructions+=3;goto B5cf5ba;
case 0x5cf5bc:c.instructions+=2;goto B5cf5bc;
case 0x5cf5bd:c.instructions+=1;goto B5cf5bd;
case 0x5cf5c0:goto L5cf5c0;
case 0x5cf5c3:c.instructions+=4;goto B5cf5c3;
case 0x5cf5c6:c.instructions+=3;goto B5cf5c6;
case 0x5cf5ca:c.instructions+=2;goto B5cf5ca;
case 0x5cf5cc:c.instructions+=1;goto B5cf5cc;
case 0x5cf5cf:goto L5cf5cf;
case 0x5cf5d1:goto L5cf5d1;
case 0x5cf5d3:c.instructions+=1;goto B5cf5d3;
case 0x5cf5d6:goto L5cf5d6;
case 0x5cf5d8:goto L5cf5d8;
case 0x5cf5db:c.instructions+=3;goto B5cf5db;
case 0x5cf5dd:c.instructions+=2;goto B5cf5dd;
case 0x5cf5de:c.instructions+=1;goto B5cf5de;
case 0x5cf5e1:goto L5cf5e1;
case 0x5cf5e5:goto L5cf5e5;
case 0x5cf5e8:c.instructions+=2;goto B5cf5e8;
case 0x5cf5ee:c.instructions+=1;goto B5cf5ee;
case 0x5cf5f0:goto L5cf5f0;
case 0x5cf5f6:c.instructions+=9;goto B5cf5f6;
case 0x5cf5f9:c.instructions+=8;goto B5cf5f9;
case 0x5cf5fe:c.instructions+=7;goto B5cf5fe;
case 0x5cf600:c.instructions+=6;goto B5cf600;
case 0x5cf601:c.instructions+=5;goto B5cf601;
case 0x5cf603:c.instructions+=4;goto B5cf603;
case 0x5cf604:c.instructions+=3;goto B5cf604;
case 0x5cf606:c.instructions+=2;goto B5cf606;
case 0x5cf607:c.instructions+=1;goto B5cf607;
case 0x5cf60d:goto L5cf60d;
case 0x5cf610:c.instructions+=2;goto B5cf610;
case 0x5cf615:c.instructions+=1;goto B5cf615;
case 0x5cf61b:goto L5cf61b;
case 0x5cf61e:c.instructions+=2;goto B5cf61e;
case 0x5cf624:c.instructions+=1;goto B5cf624;
case 0x5cf626:goto L5cf626;
case 0x5cf62b:c.instructions+=4;goto B5cf62b;
case 0x5cf62d:c.instructions+=3;goto B5cf62d;
case 0x5cf62e:c.instructions+=2;goto B5cf62e;
case 0x5cf62f:c.instructions+=1;goto B5cf62f;
case 0x5cf635:goto L5cf635;
case 0x5cf638:c.instructions+=2;goto B5cf638;
case 0x5cf63d:c.instructions+=1;goto B5cf63d;
case 0x5cf643:goto L5cf643;
case 0x5cf646:c.instructions+=2;goto B5cf646;
case 0x5cf648:c.instructions+=1;goto B5cf648;
case 0x5cf64e:goto L5cf64e;
case 0x5cf655:c.instructions+=1;goto B5cf655;
case 0x5cf65b:goto L5cf65b;
case 0x5cf65e:c.instructions+=6;goto B5cf65e;
case 0x5cf661:c.instructions+=5;goto B5cf661;
case 0x5cf667:c.instructions+=4;goto B5cf667;
case 0x5cf66a:c.instructions+=3;goto B5cf66a;
case 0x5cf66d:c.instructions+=2;goto B5cf66d;
case 0x5cf671:c.instructions+=1;goto B5cf671;
case 0x5cf677:goto L5cf677;
case 0x5cf67c:goto L5cf67c;
case 0x5cf680:c.instructions+=3;goto B5cf680;
case 0x5cf687:c.instructions+=2;goto B5cf687;
case 0x5cf68a:c.instructions+=1;goto B5cf68a;
case 0x5cf68c:goto L5cf68c;
case 0x5cf68f:c.instructions+=1;goto B5cf68f;
case 0x5cf691:goto L5cf691;
case 0x5cf692:goto L5cf692;
case 0x5cf695:c.instructions+=5;goto B5cf695;
case 0x5cf69c:c.instructions+=4;goto B5cf69c;
case 0x5cf69e:c.instructions+=3;goto B5cf69e;
case 0x5cf6a0:c.instructions+=2;goto B5cf6a0;
case 0x5cf6a1:c.instructions+=1;goto B5cf6a1;
case 0x5cf6a6:goto L5cf6a6;
case 0x5cf6ac:c.instructions+=11;goto B5cf6ac;
case 0x5cf6ae:c.instructions+=10;goto B5cf6ae;
case 0x5cf6b1:c.instructions+=9;goto B5cf6b1;
case 0x5cf6b4:c.instructions+=8;goto B5cf6b4;
case 0x5cf6b7:c.instructions+=7;goto B5cf6b7;
case 0x5cf6b9:c.instructions+=6;goto B5cf6b9;
case 0x5cf6bc:c.instructions+=5;goto B5cf6bc;
case 0x5cf6bd:c.instructions+=4;goto B5cf6bd;
case 0x5cf6c3:c.instructions+=3;goto B5cf6c3;
case 0x5cf6c4:c.instructions+=2;goto B5cf6c4;
case 0x5cf6c5:c.instructions+=1;goto B5cf6c5;
case 0x5cf6cb:goto L5cf6cb;
case 0x5cf6d0:goto L5cf6d0;
case 0x5cf6d4:c.instructions+=10;goto B5cf6d4;
case 0x5cf6da:c.instructions+=9;goto B5cf6da;
case 0x5cf6dd:c.instructions+=8;goto B5cf6dd;
case 0x5cf6e0:c.instructions+=7;goto B5cf6e0;
case 0x5cf6e4:c.instructions+=6;goto B5cf6e4;
case 0x5cf6ea:c.instructions+=5;goto B5cf6ea;
case 0x5cf6ec:c.instructions+=4;goto B5cf6ec;
case 0x5cf6ed:c.instructions+=3;goto B5cf6ed;
case 0x5cf6ee:c.instructions+=2;goto B5cf6ee;
case 0x5cf6ef:c.instructions+=1;goto B5cf6ef;
case 0x5cf6f2:goto L5cf6f2;
case 0x5cf6f6:c.instructions+=5;goto B5cf6f6;
case 0x5cf6fc:c.instructions+=4;goto B5cf6fc;
case 0x5cf702:c.instructions+=3;goto B5cf702;
case 0x5cf705:c.instructions+=2;goto B5cf705;
case 0x5cf707:c.instructions+=1;goto B5cf707;
case 0x5cf70c:goto L5cf70c;
case 0x5cf70f:c.instructions+=7;goto B5cf70f;
case 0x5cf710:c.instructions+=6;goto B5cf710;
case 0x5cf715:c.instructions+=5;goto B5cf715;
case 0x5cf718:c.instructions+=4;goto B5cf718;
case 0x5cf71e:c.instructions+=3;goto B5cf71e;
case 0x5cf71f:c.instructions+=2;goto B5cf71f;
case 0x5cf720:c.instructions+=1;goto B5cf720;
case 0x5cf723:goto L5cf723;
case 0x5cf727:c.instructions+=1;goto B5cf727;
case 0x5cf729:goto L5cf729;
case 0x5cf72f:c.instructions+=2;goto B5cf72f;
case 0x5cf731:c.instructions+=1;goto B5cf731;
case 0x5cf733:goto L5cf733;
case 0x5cf739:c.instructions+=2;goto B5cf739;
case 0x5cf73c:c.instructions+=1;goto B5cf73c;
case 0x5cf73e:goto L5cf73e;
case 0x5cf741:c.instructions+=2;goto B5cf741;
case 0x5cf743:c.instructions+=1;goto B5cf743;
case 0x5cf745:goto L5cf745;
case 0x5cf747:c.instructions+=1;goto B5cf747;
case 0x5cf749:goto L5cf749;
case 0x5cf74c:c.instructions+=1;goto B5cf74c;
case 0x5cf74e:goto L5cf74e;
case 0x5cf751:c.instructions+=1;goto B5cf751;
case 0x5cf753:goto L5cf753;
case 0x5cf756:c.instructions+=1;goto B5cf756;
case 0x5cf758:goto L5cf758;
case 0x5cf760:goto L5cf760;
case 0x5cf763:c.instructions+=4;goto B5cf763;
case 0x5cf766:c.instructions+=3;goto B5cf766;
case 0x5cf768:c.instructions+=2;goto B5cf768;
case 0x5cf769:c.instructions+=1;goto B5cf769;
case 0x5cf76f:goto L5cf76f;
case 0x5cf773:c.instructions+=3;goto B5cf773;
case 0x5cf775:c.instructions+=2;goto B5cf775;
case 0x5cf777:c.instructions+=1;goto B5cf777;
case 0x5cf779:goto L5cf779;
case 0x5cf780:goto L5cf780;
case 0x5cf783:c.instructions+=5;goto B5cf783;
case 0x5cf786:c.instructions+=4;goto B5cf786;
case 0x5cf788:c.instructions+=3;goto B5cf788;
case 0x5cf789:c.instructions+=2;goto B5cf789;
case 0x5cf78a:c.instructions+=1;goto B5cf78a;
case 0x5cf790:goto L5cf790;
case 0x5cf796:c.instructions+=19;goto B5cf796;
case 0x5cf798:c.instructions+=18;goto B5cf798;
case 0x5cf79c:c.instructions+=17;goto B5cf79c;
case 0x5cf7a1:c.instructions+=16;goto B5cf7a1;
case 0x5cf7a4:c.instructions+=15;goto B5cf7a4;
case 0x5cf7a8:c.instructions+=14;goto B5cf7a8;
case 0x5cf7ab:c.instructions+=13;goto B5cf7ab;
case 0x5cf7ad:c.instructions+=12;goto B5cf7ad;
case 0x5cf7ae:c.instructions+=11;goto B5cf7ae;
case 0x5cf7b1:c.instructions+=10;goto B5cf7b1;
case 0x5cf7b4:c.instructions+=9;goto B5cf7b4;
case 0x5cf7b6:c.instructions+=8;goto B5cf7b6;
case 0x5cf7b7:c.instructions+=7;goto B5cf7b7;
case 0x5cf7bb:c.instructions+=6;goto B5cf7bb;
case 0x5cf7bc:c.instructions+=5;goto B5cf7bc;
case 0x5cf7be:c.instructions+=4;goto B5cf7be;
case 0x5cf7c0:c.instructions+=3;goto B5cf7c0;
case 0x5cf7c2:c.instructions+=2;goto B5cf7c2;
case 0x5cf7c3:c.instructions+=1;goto B5cf7c3;
case 0x5cf7c9:goto L5cf7c9;
case 0x5cf7cc:c.instructions+=4;goto B5cf7cc;
case 0x5cf7cf:c.instructions+=3;goto B5cf7cf;
case 0x5cf7d1:c.instructions+=2;goto B5cf7d1;
case 0x5cf7d2:c.instructions+=1;goto B5cf7d2;
case 0x5cf7d8:goto L5cf7d8;
case 0x5cf7dc:c.instructions+=3;goto B5cf7dc;
case 0x5cf7dd:c.instructions+=2;goto B5cf7dd;
case 0x5cf7df:c.instructions+=1;goto B5cf7df;
case 0x5cf7e1:goto L5cf7e1;
case 0x5cf7e8:c.instructions+=8;goto B5cf7e8;
case 0x5cf7ee:c.instructions+=7;goto B5cf7ee;
case 0x5cf7f3:c.instructions+=6;goto B5cf7f3;
case 0x5cf7f6:c.instructions+=5;goto B5cf7f6;
case 0x5cf7fb:c.instructions+=4;goto B5cf7fb;
case 0x5cf7fd:c.instructions+=3;goto B5cf7fd;
case 0x5cf7ff:c.instructions+=2;goto B5cf7ff;
case 0x5cf804:c.instructions+=1;goto B5cf804;
case 0x5cf809:goto L5cf809;
case 0x5cf80e:c.instructions+=5;goto B5cf80e;
case 0x5cf810:c.instructions+=4;goto B5cf810;
case 0x5cf812:c.instructions+=3;goto B5cf812;
case 0x5cf814:c.instructions+=2;goto B5cf814;
case 0x5cf815:c.instructions+=1;goto B5cf815;
case 0x5cf81b:goto L5cf81b;
case 0x5cf825:c.instructions+=6;goto B5cf825;
case 0x5cf828:c.instructions+=5;goto B5cf828;
case 0x5cf82b:c.instructions+=4;goto B5cf82b;
case 0x5cf82e:c.instructions+=3;goto B5cf82e;
case 0x5cf830:c.instructions+=2;goto B5cf830;
case 0x5cf831:c.instructions+=1;goto B5cf831;
case 0x5cf837:goto L5cf837;
case 0x5cf839:c.instructions+=2;goto B5cf839;
case 0x5cf83b:c.instructions+=1;goto B5cf83b;
case 0x5cf83d:goto L5cf83d;
case 0x5cf840:goto L5cf840;
case 0x5cf843:c.instructions+=5;goto B5cf843;
case 0x5cf846:c.instructions+=4;goto B5cf846;
case 0x5cf848:c.instructions+=3;goto B5cf848;
case 0x5cf849:c.instructions+=2;goto B5cf849;
case 0x5cf84a:c.instructions+=1;goto B5cf84a;
case 0x5cf850:goto L5cf850;
case 0x5cf855:c.instructions+=10;goto B5cf855;
case 0x5cf857:c.instructions+=9;goto B5cf857;
case 0x5cf859:c.instructions+=8;goto B5cf859;
case 0x5cf85c:c.instructions+=7;goto B5cf85c;
case 0x5cf85d:c.instructions+=6;goto B5cf85d;
case 0x5cf85f:c.instructions+=5;goto B5cf85f;
case 0x5cf862:c.instructions+=4;goto B5cf862;
case 0x5cf863:c.instructions+=3;goto B5cf863;
case 0x5cf865:c.instructions+=2;goto B5cf865;
case 0x5cf866:c.instructions+=1;goto B5cf866;
case 0x5cf86c:goto L5cf86c;
case 0x5cf86f:c.instructions+=4;goto B5cf86f;
case 0x5cf872:c.instructions+=3;goto B5cf872;
case 0x5cf874:c.instructions+=2;goto B5cf874;
case 0x5cf875:c.instructions+=1;goto B5cf875;
case 0x5cf87b:goto L5cf87b;
case 0x5cf87c:c.instructions+=2;goto B5cf87c;
case 0x5cf87e:c.instructions+=1;goto B5cf87e;
case 0x5cf880:goto L5cf880;
case 0x5cf885:c.instructions+=5;goto B5cf885;
case 0x5cf887:c.instructions+=4;goto B5cf887;
case 0x5cf889:c.instructions+=3;goto B5cf889;
case 0x5cf88b:c.instructions+=2;goto B5cf88b;
case 0x5cf88c:c.instructions+=1;goto B5cf88c;
case 0x5cf892:goto L5cf892;
case 0x5cf898:c.instructions+=3;goto B5cf898;
case 0x5cf89e:c.instructions+=2;goto B5cf89e;
case 0x5cf89f:c.instructions+=1;goto B5cf89f;
case 0x5cf8a4:goto L5cf8a4;
case 0x5cf8aa:c.instructions+=3;goto B5cf8aa;
case 0x5cf8ab:c.instructions+=2;goto B5cf8ab;
case 0x5cf8ac:c.instructions+=1;goto B5cf8ac;
case 0x5cf8b1:goto L5cf8b1;
case 0x5cf8b5:c.instructions+=6;goto B5cf8b5;
case 0x5cf8b8:c.instructions+=5;goto B5cf8b8;
case 0x5cf8bc:c.instructions+=4;goto B5cf8bc;
case 0x5cf8bf:c.instructions+=3;goto B5cf8bf;
case 0x5cf8c2:c.instructions+=2;goto B5cf8c2;
case 0x5cf8c4:c.instructions+=1;goto B5cf8c4;
case 0x5cf8ca:goto L5cf8ca;
case 0x5cf8ce:c.instructions+=1;goto B5cf8ce;
case 0x5cf8d2:goto L5cf8d2;
case 0x5cf8d5:c.instructions+=4;goto B5cf8d5;
case 0x5cf8d7:c.instructions+=3;goto B5cf8d7;
case 0x5cf8de:c.instructions+=2;goto B5cf8de;
case 0x5cf8e0:c.instructions+=1;goto B5cf8e0;
case 0x5cf8e5:goto L5cf8e5;
case 0x5cf8eb:c.instructions+=3;goto B5cf8eb;
case 0x5cf8ec:c.instructions+=2;goto B5cf8ec;
case 0x5cf8ed:c.instructions+=1;goto B5cf8ed;
case 0x5cf8f2:goto L5cf8f2;
case 0x5cf8f4:c.instructions+=4;goto B5cf8f4;
case 0x5cf8f7:c.instructions+=3;goto B5cf8f7;
case 0x5cf8f9:c.instructions+=2;goto B5cf8f9;
case 0x5cf8fd:c.instructions+=1;goto B5cf8fd;
case 0x5cf903:goto L5cf903;
case 0x5cf907:goto L5cf907;
case 0x5cf909:c.instructions+=2;goto B5cf909;
case 0x5cf90b:c.instructions+=1;goto B5cf90b;
case 0x5cf90e:goto L5cf90e;
case 0x5cf911:c.instructions+=3;goto B5cf911;
case 0x5cf913:c.instructions+=2;goto B5cf913;
case 0x5cf914:c.instructions+=1;goto B5cf914;
case 0x5cf91a:goto L5cf91a;
case 0x5cf924:goto L5cf924;
case 0x5cf927:c.instructions+=5;goto B5cf927;
case 0x5cf92a:c.instructions+=4;goto B5cf92a;
case 0x5cf930:c.instructions+=3;goto B5cf930;
case 0x5cf934:c.instructions+=2;goto B5cf934;
case 0x5cf938:c.instructions+=1;goto B5cf938;
case 0x5cf93e:goto L5cf93e;
case 0x5cf944:c.instructions+=1;goto B5cf944;
case 0x5cf94a:goto L5cf94a;
case 0x5cf94b:c.instructions+=6;goto B5cf94b;
case 0x5cf94c:c.instructions+=5;goto B5cf94c;
case 0x5cf94d:c.instructions+=4;goto B5cf94d;
case 0x5cf957:c.instructions+=3;goto B5cf957;
case 0x5cf958:c.instructions+=2;goto B5cf958;
case 0x5cf95b:c.instructions+=1;goto B5cf95b;
case 0x5cf960:goto L5cf960;
case 0x5cf965:c.instructions+=2;goto B5cf965;
case 0x5cf966:c.instructions+=1;goto B5cf966;
case 0x5cf96c:goto L5cf96c;
case 0x5cf972:c.instructions+=1;goto B5cf972;
case 0x5cf977:goto L5cf977;
case 0x5cf97c:goto L5cf97c;
case 0x5cf97e:c.instructions+=1;goto B5cf97e;
case 0x5cf983:goto L5cf983;
case 0x5cf989:c.instructions+=3;goto B5cf989;
case 0x5cf98c:c.instructions+=2;goto B5cf98c;
case 0x5cf98e:c.instructions+=1;goto B5cf98e;
case 0x5cf993:goto L5cf993;
case 0x5cf998:goto L5cf998;
case 0x5cf99a:c.instructions+=1;goto B5cf99a;
case 0x5cf99f:goto L5cf99f;
case 0x5cf9a2:c.instructions+=1;goto B5cf9a2;
case 0x5cf9a7:goto L5cf9a7;
case 0x5cf9ac:goto L5cf9ac;
case 0x5cf9b1:goto L5cf9b1;
case 0x5cf9b6:c.instructions+=2;goto B5cf9b6;
case 0x5cf9b8:c.instructions+=1;goto B5cf9b8;
case 0x5cf9ba:goto L5cf9ba;
case 0x5cf9bf:c.instructions+=2;goto B5cf9bf;
case 0x5cf9c1:c.instructions+=1;goto B5cf9c1;
case 0x5cf9c3:goto L5cf9c3;
case 0x5cf9c5:c.instructions+=2;goto B5cf9c5;
case 0x5cf9c6:c.instructions+=1;goto B5cf9c6;
case 0x5cf9c9:goto L5cf9c9;
case 0x5cf9d0:goto L5cf9d0;
case 0x5cf9d5:c.instructions+=1;goto B5cf9d5;
case 0x5cf9da:goto L5cf9da;
case 0x5cf9df:c.instructions+=2;goto B5cf9df;
case 0x5cf9e1:c.instructions+=1;goto B5cf9e1;
case 0x5cf9e3:goto L5cf9e3;
case 0x5cf9e5:c.instructions+=2;goto B5cf9e5;
case 0x5cf9e6:c.instructions+=1;goto B5cf9e6;
case 0x5cf9e9:goto L5cf9e9;
case 0x5cf9ee:goto L5cf9ee;
case 0x5cf9f3:goto L5cf9f3;
case 0x5cf9f8:c.instructions+=3;goto B5cf9f8;
case 0x5cf9fa:c.instructions+=2;goto B5cf9fa;
case 0x5cf9fb:c.instructions+=1;goto B5cf9fb;
case 0x5cf9fe:goto L5cf9fe;
case 0x5cfa03:c.instructions+=3;goto B5cfa03;
case 0x5cfa05:c.instructions+=2;goto B5cfa05;
case 0x5cfa06:c.instructions+=1;goto B5cfa06;
case 0x5cfa09:goto L5cfa09;
case 0x5cfa10:goto L5cfa10;
case 0x5cfa15:c.instructions+=6;goto B5cfa15;
case 0x5cfa17:c.instructions+=5;goto B5cfa17;
case 0x5cfa18:c.instructions+=4;goto B5cfa18;
case 0x5cfa19:c.instructions+=3;goto B5cfa19;
case 0x5cfa1a:c.instructions+=2;goto B5cfa1a;
case 0x5cfa1c:c.instructions+=1;goto B5cfa1c;
case 0x5cfa1e:goto L5cfa1e;
case 0x5cfa23:c.instructions+=6;goto B5cfa23;
case 0x5cfa25:c.instructions+=5;goto B5cfa25;
case 0x5cfa28:c.instructions+=4;goto B5cfa28;
case 0x5cfa29:c.instructions+=3;goto B5cfa29;
case 0x5cfa2b:c.instructions+=2;goto B5cfa2b;
case 0x5cfa30:c.instructions+=1;goto B5cfa30;
case 0x5cfa32:goto L5cfa32;
case 0x5cfa37:c.instructions+=8;goto B5cfa37;
case 0x5cfa39:c.instructions+=7;goto B5cfa39;
case 0x5cfa3b:c.instructions+=6;goto B5cfa3b;
case 0x5cfa41:c.instructions+=5;goto B5cfa41;
case 0x5cfa42:c.instructions+=4;goto B5cfa42;
case 0x5cfa47:c.instructions+=3;goto B5cfa47;
case 0x5cfa49:c.instructions+=2;goto B5cfa49;
case 0x5cfa4a:c.instructions+=1;goto B5cfa4a;
case 0x5cfa4d:goto L5cfa4d;
case 0x5cfa4f:c.instructions+=1;goto B5cfa4f;
case 0x5cfa51:goto L5cfa51;
case 0x5cfa56:c.instructions+=1;goto B5cfa56;
case 0x5cfa5b:goto L5cfa5b;
case 0x5cfa5e:goto L5cfa5e;
case 0x5cfa60:c.instructions+=1;goto B5cfa60;
case 0x5cfa62:goto L5cfa62;
case 0x5cfa69:c.instructions+=2;goto B5cfa69;
case 0x5cfa6b:c.instructions+=1;goto B5cfa6b;
case 0x5cfa6d:goto L5cfa6d;
case 0x5cfa6e:c.instructions+=2;goto B5cfa6e;
case 0x5cfa74:c.instructions+=1;goto B5cfa74;
case 0x5cfa79:goto L5cfa79;
case 0x5cfa7e:c.instructions+=1;goto B5cfa7e;
case 0x5cfa80:goto L5cfa80;
case 0x5cfa82:c.instructions+=2;goto B5cfa82;
case 0x5cfa89:c.instructions+=1;goto B5cfa89;
case 0x5cfa90:goto L5cfa90;
case 0x5cfa94:c.instructions+=5;goto B5cfa94;
case 0x5cfa9a:c.instructions+=4;goto B5cfa9a;
case 0x5cfa9b:c.instructions+=3;goto B5cfa9b;
case 0x5cfa9e:c.instructions+=2;goto B5cfa9e;
case 0x5cfaa1:c.instructions+=1;goto B5cfaa1;
case 0x5cfaa3:goto L5cfaa3;
case 0x5cfaa4:c.instructions+=3;goto B5cfaa4;
case 0x5cfaa7:c.instructions+=2;goto B5cfaa7;
case 0x5cfaaa:c.instructions+=1;goto B5cfaaa;
case 0x5cfaac:goto L5cfaac;
case 0x5cfab1:c.instructions+=1;goto B5cfab1;
case 0x5cfab6:goto L5cfab6;
case 0x5cfab8:goto L5cfab8;
case 0x5cfab9:c.instructions+=3;goto B5cfab9;
case 0x5cfaba:c.instructions+=2;goto B5cfaba;
case 0x5cfabb:c.instructions+=1;goto B5cfabb;
case 0x5cfac0:goto L5cfac0;
case 0x5cfac1:c.instructions+=5;goto B5cfac1;
case 0x5cfac2:c.instructions+=4;goto B5cfac2;
case 0x5cfac4:c.instructions+=3;goto B5cfac4;
case 0x5cfac7:c.instructions+=2;goto B5cfac7;
case 0x5cfac9:c.instructions+=1;goto B5cfac9;
case 0x5cfacb:goto L5cfacb;
case 0x5cfacd:c.instructions+=1;goto B5cfacd;
case 0x5cfacf:goto L5cfacf;
case 0x5cfad1:goto L5cfad1;
case 0x5cfad2:c.instructions+=5;goto B5cfad2;
case 0x5cfad3:c.instructions+=4;goto B5cfad3;
case 0x5cfad7:c.instructions+=3;goto B5cfad7;
case 0x5cfad8:c.instructions+=2;goto B5cfad8;
case 0x5cfada:c.instructions+=1;goto B5cfada;
case 0x5cfadf:goto L5cfadf;
case 0x5cfae2:c.instructions+=2;goto B5cfae2;
case 0x5cfae3:c.instructions+=1;goto B5cfae3;
case 0x5cfae8:goto L5cfae8;
case 0x5cfaeb:c.instructions+=5;goto B5cfaeb;
case 0x5cfaf2:c.instructions+=4;goto B5cfaf2;
case 0x5cfaf9:c.instructions+=3;goto B5cfaf9;
case 0x5cfafa:c.instructions+=2;goto B5cfafa;
case 0x5cfafb:c.instructions+=1;goto B5cfafb;
case 0x5cfb00:goto L5cfb00;
case 0x5cfb01:c.instructions+=7;goto B5cfb01;
case 0x5cfb02:c.instructions+=6;goto B5cfb02;
case 0x5cfb03:c.instructions+=5;goto B5cfb03;
case 0x5cfb07:c.instructions+=4;goto B5cfb07;
case 0x5cfb08:c.instructions+=3;goto B5cfb08;
case 0x5cfb0a:c.instructions+=2;goto B5cfb0a;
case 0x5cfb0d:c.instructions+=1;goto B5cfb0d;
case 0x5cfb0f:goto L5cfb0f;
case 0x5cfb14:goto L5cfb14;
case 0x5cfb17:c.instructions+=4;goto B5cfb17;
case 0x5cfb1b:c.instructions+=3;goto B5cfb1b;
case 0x5cfb1d:c.instructions+=2;goto B5cfb1d;
case 0x5cfb1f:c.instructions+=1;goto B5cfb1f;
case 0x5cfb21:goto L5cfb21;
case 0x5cfb23:goto L5cfb23;
case 0x5cfb25:c.instructions+=1;goto B5cfb25;
case 0x5cfb27:goto L5cfb27;
case 0x5cfb2a:c.instructions+=3;goto B5cfb2a;
case 0x5cfb2d:c.instructions+=2;goto B5cfb2d;
case 0x5cfb30:c.instructions+=1;goto B5cfb30;
case 0x5cfb32:goto L5cfb32;
case 0x5cfb35:c.instructions+=1;goto B5cfb35;
case 0x5cfb37:goto L5cfb37;
case 0x5cfb39:goto L5cfb39;
case 0x5cfb3c:c.instructions+=1;goto B5cfb3c;
case 0x5cfb3e:goto L5cfb3e;
case 0x5cfb41:c.instructions+=1;goto B5cfb41;
case 0x5cfb43:goto L5cfb43;
case 0x5cfb45:goto L5cfb45;
case 0x5cfb47:c.instructions+=7;goto B5cfb47;
case 0x5cfb49:c.instructions+=6;goto B5cfb49;
case 0x5cfb4a:c.instructions+=5;goto B5cfb4a;
case 0x5cfb4c:c.instructions+=4;goto B5cfb4c;
case 0x5cfb4d:c.instructions+=3;goto B5cfb4d;
case 0x5cfb4f:c.instructions+=2;goto B5cfb4f;
case 0x5cfb50:c.instructions+=1;goto B5cfb50;
case 0x5cfb55:goto L5cfb55;
case 0x5cfb58:c.instructions+=4;goto B5cfb58;
case 0x5cfb5a:c.instructions+=3;goto B5cfb5a;
case 0x5cfb5d:c.instructions+=2;goto B5cfb5d;
case 0x5cfb60:c.instructions+=1;goto B5cfb60;
case 0x5cfb62:goto L5cfb62;
case 0x5cfb64:c.instructions+=1;goto B5cfb64;
case 0x5cfb69:goto L5cfb69;
case 0x5cfb6c:c.instructions+=2;goto B5cfb6c;
case 0x5cfb6e:c.instructions+=1;goto B5cfb6e;
case 0x5cfb70:goto L5cfb70;
case 0x5cfb73:c.instructions+=4;goto B5cfb73;
case 0x5cfb74:c.instructions+=3;goto B5cfb74;
case 0x5cfb75:c.instructions+=2;goto B5cfb75;
case 0x5cfb77:c.instructions+=1;goto B5cfb77;
case 0x5cfb7c:goto L5cfb7c;
case 0x5cfb7e:goto L5cfb7e;
case 0x5cfb80:goto L5cfb80;
case 0x5cfb84:c.instructions+=2;goto B5cfb84;
case 0x5cfb87:c.instructions+=1;goto B5cfb87;
case 0x5cfb89:goto L5cfb89;
case 0x5cfb8c:goto L5cfb8c;
case 0x5cfb90:goto L5cfb90;
case 0x5cfb92:c.instructions+=5;goto B5cfb92;
case 0x5cfb93:c.instructions+=4;goto B5cfb93;
case 0x5cfb94:c.instructions+=3;goto B5cfb94;
case 0x5cfb95:c.instructions+=2;goto B5cfb95;
case 0x5cfb96:c.instructions+=1;goto B5cfb96;
case 0x5cfb99:goto L5cfb99;
case 0x5cfb9b:c.instructions+=1;goto B5cfb9b;
case 0x5cfb9d:goto L5cfb9d;
case 0x5cfba0:c.instructions+=2;goto B5cfba0;
case 0x5cfba3:c.instructions+=1;goto B5cfba3;
case 0x5cfba5:goto L5cfba5;
case 0x5cfba8:goto L5cfba8;
case 0x5cfbaa:c.instructions+=6;goto B5cfbaa;
case 0x5cfbab:c.instructions+=5;goto B5cfbab;
case 0x5cfbac:c.instructions+=4;goto B5cfbac;
case 0x5cfbb0:c.instructions+=3;goto B5cfbb0;
case 0x5cfbb1:c.instructions+=2;goto B5cfbb1;
case 0x5cfbb2:c.instructions+=1;goto B5cfbb2;
case 0x5cfbc0:goto L5cfbc0;
case 0x5cfbc4:c.instructions+=11;goto B5cfbc4;
case 0x5cfbc5:c.instructions+=10;goto B5cfbc5;
case 0x5cfbc9:c.instructions+=9;goto B5cfbc9;
case 0x5cfbca:c.instructions+=8;goto B5cfbca;
case 0x5cfbce:c.instructions+=7;goto B5cfbce;
case 0x5cfbcf:c.instructions+=6;goto B5cfbcf;
case 0x5cfbd0:c.instructions+=5;goto B5cfbd0;
case 0x5cfbd4:c.instructions+=4;goto B5cfbd4;
case 0x5cfbd5:c.instructions+=3;goto B5cfbd5;
case 0x5cfbd6:c.instructions+=2;goto B5cfbd6;
case 0x5cfbd7:c.instructions+=1;goto B5cfbd7;
case 0x5cfbdc:goto L5cfbdc;
case 0x5cfbdf:c.instructions+=4;goto B5cfbdf;
case 0x5cfbe2:c.instructions+=3;goto B5cfbe2;
case 0x5cfbe3:c.instructions+=2;goto B5cfbe3;
case 0x5cfbe4:c.instructions+=1;goto B5cfbe4;
case 0x5cfbf0:goto L5cfbf0;
case 0x5cfbf5:c.instructions+=8;goto B5cfbf5;
case 0x5cfbf6:c.instructions+=7;goto B5cfbf6;
case 0x5cfbf7:c.instructions+=6;goto B5cfbf7;
case 0x5cfbf9:c.instructions+=5;goto B5cfbf9;
case 0x5cfbfb:c.instructions+=4;goto B5cfbfb;
case 0x5cfbfc:c.instructions+=3;goto B5cfbfc;
case 0x5cfc01:c.instructions+=2;goto B5cfc01;
case 0x5cfc06:c.instructions+=1;goto B5cfc06;
case 0x5cfc08:goto L5cfc08;
case 0x5cfc0d:c.instructions+=1;goto B5cfc0d;
case 0x5cfc12:goto L5cfc12;
case 0x5cfc15:c.instructions+=2;goto B5cfc15;
case 0x5cfc17:c.instructions+=1;goto B5cfc17;
case 0x5cfc19:goto L5cfc19;
case 0x5cfc1e:c.instructions+=1;goto B5cfc1e;
case 0x5cfc23:goto L5cfc23;
case 0x5cfc26:c.instructions+=2;goto B5cfc26;
case 0x5cfc28:c.instructions+=1;goto B5cfc28;
case 0x5cfc2a:goto L5cfc2a;
case 0x5cfc2f:c.instructions+=3;goto B5cfc2f;
case 0x5cfc31:c.instructions+=2;goto B5cfc31;
case 0x5cfc34:c.instructions+=1;goto B5cfc34;
case 0x5cfc36:goto L5cfc36;
case 0x5cfc38:c.instructions+=1;goto B5cfc38;
case 0x5cfc3a:goto L5cfc3a;
case 0x5cfc40:c.instructions+=2;goto B5cfc40;
case 0x5cfc43:c.instructions+=1;goto B5cfc43;
case 0x5cfc45:goto L5cfc45;
case 0x5cfc47:c.instructions+=1;goto B5cfc47;
case 0x5cfc49:goto L5cfc49;
case 0x5cfc4b:c.instructions+=1;goto B5cfc4b;
case 0x5cfc4d:goto L5cfc4d;
case 0x5cfc52:c.instructions+=2;goto B5cfc52;
case 0x5cfc54:c.instructions+=1;goto B5cfc54;
case 0x5cfc56:goto L5cfc56;
case 0x5cfc58:c.instructions+=1;goto B5cfc58;
case 0x5cfc5a:goto L5cfc5a;
case 0x5cfc5c:goto L5cfc5c;
case 0x5cfc62:c.instructions+=1;goto B5cfc62;
case 0x5cfc68:goto L5cfc68;
case 0x5cfc6a:c.instructions+=1;goto B5cfc6a;
case 0x5cfc70:goto L5cfc70;
case 0x5cfc75:goto L5cfc75;
case 0x5cfc77:c.instructions+=1;goto B5cfc77;
case 0x5cfc79:goto L5cfc79;
case 0x5cfc7e:goto L5cfc7e;
case 0x5cfc80:c.instructions+=1;goto B5cfc80;
case 0x5cfc82:goto L5cfc82;
case 0x5cfc89:c.instructions+=1;goto B5cfc89;
case 0x5cfc8f:goto L5cfc8f;
case 0x5cfc99:c.instructions+=2;goto B5cfc99;
case 0x5cfc9e:c.instructions+=1;goto B5cfc9e;
case 0x5cfca0:goto L5cfca0;
case 0x5cfca2:c.instructions+=2;goto B5cfca2;
case 0x5cfca4:c.instructions+=1;goto B5cfca4;
case 0x5cfca9:goto L5cfca9;
case 0x5cfcaf:c.instructions+=2;goto B5cfcaf;
case 0x5cfcb5:c.instructions+=1;goto B5cfcb5;
case 0x5cfcb7:goto L5cfcb7;
case 0x5cfcb8:c.instructions+=3;goto B5cfcb8;
case 0x5cfcb9:c.instructions+=2;goto B5cfcb9;
case 0x5cfcba:c.instructions+=1;goto B5cfcba;
case 0x5cfcbb:goto L5cfcbb;
case 0x5cfcc0:goto L5cfcc0;
case 0x5cfcc2:c.instructions+=1;goto B5cfcc2;
case 0x5cfcc4:goto L5cfcc4;
case 0x5cfcc9:goto L5cfcc9;
case 0x5cfccb:c.instructions+=1;goto B5cfccb;
case 0x5cfccd:goto L5cfccd;
case 0x5cfcd3:c.instructions+=1;goto B5cfcd3;
case 0x5cfcd9:goto L5cfcd9;
case 0x5cfcdf:c.instructions+=1;goto B5cfcdf;
case 0x5cfce4:goto L5cfce4;
case 0x5cfce5:c.instructions+=2;goto B5cfce5;
case 0x5cfce7:c.instructions+=1;goto B5cfce7;
case 0x5cfcec:goto L5cfcec;
case 0x5cfcf2:c.instructions+=2;goto B5cfcf2;
case 0x5cfcf8:c.instructions+=1;goto B5cfcf8;
case 0x5cfcfa:goto L5cfcfa;
case 0x5cfcfb:c.instructions+=3;goto B5cfcfb;
case 0x5cfcfc:c.instructions+=2;goto B5cfcfc;
case 0x5cfcfd:c.instructions+=1;goto B5cfcfd;
case 0x5cfcfe:goto L5cfcfe;
case 0x5cfd04:c.instructions+=1;goto B5cfd04;
case 0x5cfd06:goto L5cfd06;
case 0x5cfd0c:c.instructions+=1;goto B5cfd0c;
case 0x5cfd11:goto L5cfd11;
case 0x5cfd13:c.instructions+=2;goto B5cfd13;
case 0x5cfd15:c.instructions+=1;goto B5cfd15;
case 0x5cfd1a:goto L5cfd1a;
case 0x5cfd20:c.instructions+=2;goto B5cfd20;
case 0x5cfd26:c.instructions+=1;goto B5cfd26;
case 0x5cfd28:goto L5cfd28;
case 0x5cfd29:c.instructions+=3;goto B5cfd29;
case 0x5cfd2a:c.instructions+=2;goto B5cfd2a;
case 0x5cfd2b:c.instructions+=1;goto B5cfd2b;
case 0x5cfd2c:goto L5cfd2c;
case 0x5cfd31:c.instructions+=3;goto B5cfd31;
case 0x5cfd36:c.instructions+=2;goto B5cfd36;
case 0x5cfd38:c.instructions+=1;goto B5cfd38;
case 0x5cfd3a:goto L5cfd3a;
case 0x5cfd40:c.instructions+=1;goto B5cfd40;
case 0x5cfd45:goto L5cfd45;
case 0x5cfd46:c.instructions+=2;goto B5cfd46;
case 0x5cfd48:c.instructions+=1;goto B5cfd48;
case 0x5cfd4d:goto L5cfd4d;
case 0x5cfd53:c.instructions+=2;goto B5cfd53;
case 0x5cfd59:c.instructions+=1;goto B5cfd59;
case 0x5cfd5b:goto L5cfd5b;
case 0x5cfd5c:c.instructions+=3;goto B5cfd5c;
case 0x5cfd5d:c.instructions+=2;goto B5cfd5d;
case 0x5cfd5e:c.instructions+=1;goto B5cfd5e;
case 0x5cfd60:goto L5cfd60;
case 0x5cfd65:c.instructions+=6;goto B5cfd65;
case 0x5cfd66:c.instructions+=5;goto B5cfd66;
case 0x5cfd67:c.instructions+=4;goto B5cfd67;
case 0x5cfd6a:c.instructions+=3;goto B5cfd6a;
case 0x5cfd6c:c.instructions+=2;goto B5cfd6c;
case 0x5cfd73:c.instructions+=1;goto B5cfd73;
case 0x5cfd75:goto L5cfd75;
case 0x5cfd77:goto L5cfd77;
case 0x5cfd7b:c.instructions+=4;goto B5cfd7b;
case 0x5cfd7d:c.instructions+=3;goto B5cfd7d;
case 0x5cfd81:c.instructions+=2;goto B5cfd81;
case 0x5cfd83:c.instructions+=1;goto B5cfd83;
case 0x5cfd89:goto L5cfd89;
case 0x5cfd8e:c.instructions+=17;goto B5cfd8e;
case 0x5cfd94:c.instructions+=16;goto B5cfd94;
case 0x5cfd9a:c.instructions+=15;goto B5cfd9a;
case 0x5cfd9f:c.instructions+=14;goto B5cfd9f;
case 0x5cfda1:c.instructions+=13;goto B5cfda1;
case 0x5cfda6:c.instructions+=12;goto B5cfda6;
case 0x5cfdab:c.instructions+=11;goto B5cfdab;
case 0x5cfdb0:c.instructions+=10;goto B5cfdb0;
case 0x5cfdb2:c.instructions+=9;goto B5cfdb2;
case 0x5cfdb8:c.instructions+=8;goto B5cfdb8;
case 0x5cfdbe:c.instructions+=7;goto B5cfdbe;
case 0x5cfdc4:c.instructions+=6;goto B5cfdc4;
case 0x5cfdca:c.instructions+=5;goto B5cfdca;
case 0x5cfdd0:c.instructions+=4;goto B5cfdd0;
case 0x5cfdd6:c.instructions+=3;goto B5cfdd6;
case 0x5cfddd:c.instructions+=2;goto B5cfddd;
case 0x5cfde4:c.instructions+=1;goto B5cfde4;
case 0x5cfde6:goto L5cfde6;
case 0x5cfdeb:c.instructions+=1;goto B5cfdeb;
case 0x5cfdf0:goto L5cfdf0;
case 0x5cfdf6:c.instructions+=1;goto B5cfdf6;
case 0x5cfdf8:goto L5cfdf8;
case 0x5cfdfa:c.instructions+=1;goto B5cfdfa;
case 0x5cfdff:goto L5cfdff;
case 0x5cfe05:c.instructions+=2;goto B5cfe05;
case 0x5cfe0b:c.instructions+=1;goto B5cfe0b;
case 0x5cfe0d:goto L5cfe0d;
case 0x5cfe12:c.instructions+=2;goto B5cfe12;
case 0x5cfe14:c.instructions+=1;goto B5cfe14;
case 0x5cfe16:goto L5cfe16;
case 0x5cfe19:c.instructions+=1;goto B5cfe19;
case 0x5cfe1f:goto L5cfe1f;
case 0x5cfe21:c.instructions+=2;goto B5cfe21;
case 0x5cfe22:c.instructions+=1;goto B5cfe22;
case 0x5cfe30:goto L5cfe30;
case 0x5cfe37:c.instructions+=3;goto B5cfe37;
case 0x5cfe39:c.instructions+=2;goto B5cfe39;
case 0x5cfe40:c.instructions+=1;goto B5cfe40;
case 0x5cfe46:goto L5cfe46;
case 0x5cfe4c:c.instructions+=4;goto B5cfe4c;
case 0x5cfe4e:c.instructions+=3;goto B5cfe4e;
case 0x5cfe4f:c.instructions+=2;goto B5cfe4f;
case 0x5cfe55:c.instructions+=1;goto B5cfe55;
case 0x5cfe5a:goto L5cfe5a;
case 0x5cfe5c:c.instructions+=1;goto B5cfe5c;
case 0x5cfe5e:goto L5cfe5e;
case 0x5cfe65:c.instructions+=2;goto B5cfe65;
case 0x5cfe67:c.instructions+=1;goto B5cfe67;
case 0x5cfe69:goto L5cfe69;
case 0x5cfe6f:c.instructions+=5;goto B5cfe6f;
case 0x5cfe71:c.instructions+=4;goto B5cfe71;
case 0x5cfe77:c.instructions+=3;goto B5cfe77;
case 0x5cfe78:c.instructions+=2;goto B5cfe78;
case 0x5cfe7a:c.instructions+=1;goto B5cfe7a;
case 0x5cfe7f:goto L5cfe7f;
case 0x5cfe81:c.instructions+=1;goto B5cfe81;
case 0x5cfe83:goto L5cfe83;
case 0x5cfe84:c.instructions+=4;goto B5cfe84;
case 0x5cfe86:c.instructions+=3;goto B5cfe86;
case 0x5cfe87:c.instructions+=2;goto B5cfe87;
case 0x5cfe89:c.instructions+=1;goto B5cfe89;
case 0x5cfe8e:goto L5cfe8e;
case 0x5cfe90:goto L5cfe90;
case 0x5cfe96:c.instructions+=4;goto B5cfe96;
case 0x5cfe98:c.instructions+=3;goto B5cfe98;
case 0x5cfe99:c.instructions+=2;goto B5cfe99;
case 0x5cfe9f:c.instructions+=1;goto B5cfe9f;
case 0x5cfea4:goto L5cfea4;
case 0x5cfea6:c.instructions+=1;goto B5cfea6;
case 0x5cfea8:goto L5cfea8;
case 0x5cfeaf:c.instructions+=2;goto B5cfeaf;
case 0x5cfeb1:c.instructions+=1;goto B5cfeb1;
case 0x5cfeb3:goto L5cfeb3;
case 0x5cfeb9:c.instructions+=5;goto B5cfeb9;
case 0x5cfebb:c.instructions+=4;goto B5cfebb;
case 0x5cfec1:c.instructions+=3;goto B5cfec1;
case 0x5cfec2:c.instructions+=2;goto B5cfec2;
case 0x5cfec4:c.instructions+=1;goto B5cfec4;
case 0x5cfec9:goto L5cfec9;
case 0x5cfecb:c.instructions+=1;goto B5cfecb;
case 0x5cfecd:goto L5cfecd;
case 0x5cfece:c.instructions+=4;goto B5cfece;
case 0x5cfed0:c.instructions+=3;goto B5cfed0;
case 0x5cfed1:c.instructions+=2;goto B5cfed1;
case 0x5cfed3:c.instructions+=1;goto B5cfed3;
case 0x5cfed8:goto L5cfed8;
case 0x5cfee0:goto L5cfee0;
case 0x5cfee6:c.instructions+=4;goto B5cfee6;
case 0x5cfee8:c.instructions+=3;goto B5cfee8;
case 0x5cfee9:c.instructions+=2;goto B5cfee9;
case 0x5cfeef:c.instructions+=1;goto B5cfeef;
case 0x5cfef4:goto L5cfef4;
case 0x5cfef6:c.instructions+=1;goto B5cfef6;
case 0x5cfef8:goto L5cfef8;
case 0x5cfeff:c.instructions+=2;goto B5cfeff;
case 0x5cff01:c.instructions+=1;goto B5cff01;
case 0x5cff03:goto L5cff03;
case 0x5cff09:c.instructions+=5;goto B5cff09;
case 0x5cff0b:c.instructions+=4;goto B5cff0b;
case 0x5cff11:c.instructions+=3;goto B5cff11;
case 0x5cff12:c.instructions+=2;goto B5cff12;
case 0x5cff14:c.instructions+=1;goto B5cff14;
case 0x5cff19:goto L5cff19;
case 0x5cff1b:c.instructions+=1;goto B5cff1b;
case 0x5cff1d:goto L5cff1d;
case 0x5cff1e:c.instructions+=4;goto B5cff1e;
case 0x5cff20:c.instructions+=3;goto B5cff20;
case 0x5cff21:c.instructions+=2;goto B5cff21;
case 0x5cff23:c.instructions+=1;goto B5cff23;
case 0x5cff28:goto L5cff28;
case 0x5cff30:goto L5cff30;
case 0x5cff36:c.instructions+=2;goto B5cff36;
case 0x5cff3e:c.instructions+=1;goto B5cff3e;
case 0x5cff40:goto L5cff40;
case 0x5cff41:c.instructions+=1;goto B5cff41;
case 0x5cff46:goto L5cff46;
case 0x5cff4c:goto L5cff4c;
case 0x5cff4e:c.instructions+=3;goto B5cff4e;
case 0x5cff4f:c.instructions+=2;goto B5cff4f;
case 0x5cff55:c.instructions+=1;goto B5cff55;
case 0x5cff5a:goto L5cff5a;
case 0x5cff5c:c.instructions+=1;goto B5cff5c;
case 0x5cff5e:goto L5cff5e;
case 0x5cff64:c.instructions+=2;goto B5cff64;
case 0x5cff65:c.instructions+=1;goto B5cff65;
case 0x5cff6a:goto L5cff6a;
case 0x5cff6f:c.instructions+=2;goto B5cff6f;
case 0x5cff71:c.instructions+=1;goto B5cff71;
case 0x5cff73:goto L5cff73;
case 0x5cff78:c.instructions+=2;goto B5cff78;
case 0x5cff7a:c.instructions+=1;goto B5cff7a;
case 0x5cff7c:goto L5cff7c;
case 0x5cff83:c.instructions+=2;goto B5cff83;
case 0x5cff85:c.instructions+=1;goto B5cff85;
case 0x5cff87:goto L5cff87;
case 0x5cff8d:c.instructions+=3;goto B5cff8d;
case 0x5cff8f:c.instructions+=2;goto B5cff8f;
case 0x5cff90:c.instructions+=1;goto B5cff90;
case 0x5cff95:goto L5cff95;
case 0x5cff97:goto L5cff97;
case 0x5cff9d:c.instructions+=5;goto B5cff9d;
case 0x5cffa2:c.instructions+=4;goto B5cffa2;
case 0x5cffa7:c.instructions+=3;goto B5cffa7;
case 0x5cffa9:c.instructions+=2;goto B5cffa9;
case 0x5cffaa:c.instructions+=1;goto B5cffaa;
case 0x5cffaf:goto L5cffaf;
case 0x5cffb0:c.instructions+=2;goto B5cffb0;
case 0x5cffb3:c.instructions+=1;goto B5cffb3;
case 0x5cffb9:goto L5cffb9;
case 0x5cffbd:c.instructions+=6;goto B5cffbd;
case 0x5cffbe:c.instructions+=5;goto B5cffbe;
case 0x5cffbf:c.instructions+=4;goto B5cffbf;
case 0x5cffc5:c.instructions+=3;goto B5cffc5;
case 0x5cffca:c.instructions+=2;goto B5cffca;
case 0x5cffcb:c.instructions+=1;goto B5cffcb;
case 0x5cffcc:goto L5cffcc;
case 0x5cffd0:c.instructions+=5;goto B5cffd0;
case 0x5cffd1:c.instructions+=4;goto B5cffd1;
case 0x5cffd7:c.instructions+=3;goto B5cffd7;
case 0x5cffdc:c.instructions+=2;goto B5cffdc;
case 0x5cffdd:c.instructions+=1;goto B5cffdd;
case 0x5cffde:goto L5cffde;
case 0x5cffe2:c.instructions+=5;goto B5cffe2;
case 0x5cffe3:c.instructions+=4;goto B5cffe3;
case 0x5cffe9:c.instructions+=3;goto B5cffe9;
case 0x5cffee:c.instructions+=2;goto B5cffee;
case 0x5cffef:c.instructions+=1;goto B5cffef;
case 0x5cfff0:goto L5cfff0;
case 0x5cfff5:c.instructions+=4;goto B5cfff5;
case 0x5cfff7:c.instructions+=3;goto B5cfff7;
case 0x5cfff8:c.instructions+=2;goto B5cfff8;
case 0x5cfffa:c.instructions+=1;goto B5cfffa;
case 0x5cfffc:goto L5cfffc;
case 0x5cfffe:c.instructions+=2;goto B5cfffe;
case 0x5cffff:c.instructions+=1;goto B5cffff;
default:missing_instruction(c.pc);}
B5cf000:L5cf000:{c.instructions+=4;NFSU2_TR(0x5cf000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf001:{NFSU2_TR(0x5cf001);
__builtin_memmove((R+24),(R+4),4);
}
B5cf003:{NFSU2_TR(0x5cf003);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B5cf007:{NFSU2_TR(0x5cf007);
if(r1(R+512)){{goto L5cf015;}}
}
B5cf009:L5cf009:{c.instructions+=3;NFSU2_TR(0x5cf009);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf00c:{NFSU2_TR(0x5cf00c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf00d:{NFSU2_TR(0x5cf00d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf012ull));
TAIL_STATIC(0x575630u,575);
}
B5cf012:L5cf012:{c.instructions+=1;NFSU2_TR(0x5cf012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf015:L5cf015:{c.instructions+=6;NFSU2_TR(0x5cf015);
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
B5cf017:{NFSU2_TR(0x5cf017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf01e:{NFSU2_TR(0x5cf01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf021:{NFSU2_TR(0x5cf021);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cf024:{NFSU2_TR(0x5cf024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf025:{NFSU2_TR(0x5cf025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf030:L5cf030:{c.instructions+=6;NFSU2_TR(0x5cf030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf031:{NFSU2_TR(0x5cf031);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf032:{NFSU2_TR(0x5cf032);
__builtin_memmove((R+28),(R+4),4);
}
B5cf034:{NFSU2_TR(0x5cf034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf036:{NFSU2_TR(0x5cf036);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5cf038:{NFSU2_TR(0x5cf038);
if(r1(R+518)){{goto L5cf066;}}
}
B5cf03a:L5cf03a:{c.instructions+=1;NFSU2_TR(0x5cf03a);
__builtin_memmove((R+12),(R+12),4);
}
B5cf040:L5cf040:{c.instructions+=6;NFSU2_TR(0x5cf040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf043:{NFSU2_TR(0x5cf043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf045:{NFSU2_TR(0x5cf045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cf047:{NFSU2_TR(0x5cf047);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf04a:{NFSU2_TR(0x5cf04a);
__builtin_memmove((R+4),(R+24),4);
}
B5cf04c:{NFSU2_TR(0x5cf04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf051ull));
TAIL_STATIC(0x5cea20u,5ce);
}
B5cf051:L5cf051:{c.instructions+=4;NFSU2_TR(0x5cf051);
__builtin_memmove((R+0),gp(0x870918),4);
}
B5cf056:{NFSU2_TR(0x5cf056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf057:{NFSU2_TR(0x5cf057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf058:{NFSU2_TR(0x5cf058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf05dull));
TAIL_STATIC(0x43f920u,43f);
}
B5cf05d:L5cf05d:{c.instructions+=4;NFSU2_TR(0x5cf05d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf05f:{NFSU2_TR(0x5cf05f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf062:{NFSU2_TR(0x5cf062);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5cf064:{NFSU2_TR(0x5cf064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf040u);}goto L5cf040;}}
}
B5cf066:L5cf066:{c.instructions+=3;NFSU2_TR(0x5cf066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf067:{NFSU2_TR(0x5cf067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf068:{NFSU2_TR(0x5cf068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf070:L5cf070:{c.instructions+=6;NFSU2_TR(0x5cf070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf071:{NFSU2_TR(0x5cf071);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf072:{NFSU2_TR(0x5cf072);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf076:{NFSU2_TR(0x5cf076);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf079:{NFSU2_TR(0x5cf079);
__builtin_memmove((R+24),(R+4),4);
}
B5cf07b:{NFSU2_TR(0x5cf07b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cf082;}}
}
B5cf07d:L5cf07d:{c.instructions+=1;NFSU2_TR(0x5cf07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf082ull));
TAIL_STATIC(0x76e9afu,76e);
}
B5cf082:L5cf082:{c.instructions+=3;NFSU2_TR(0x5cf082);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf085:{NFSU2_TR(0x5cf085);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf087:{NFSU2_TR(0x5cf087);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cf0c2;}}
}
B5cf089:L5cf089:{c.instructions+=3;NFSU2_TR(0x5cf089);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cf08d:{NFSU2_TR(0x5cf08d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cf08f:{NFSU2_TR(0x5cf08f);
if(r1(R+518)){{goto L5cf0a9;}}
}
B5cf091:L5cf091:{c.instructions+=5;NFSU2_TR(0x5cf091);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf093:{NFSU2_TR(0x5cf093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf094:{NFSU2_TR(0x5cf094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf095:{NFSU2_TR(0x5cf095);
__builtin_memmove((R+4),(R+24),4);
}
B5cf097:{NFSU2_TR(0x5cf097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf09cull));
TAIL_STATIC(0x5cdf50u,5cd);
}
B5cf09c:L5cf09c:{c.instructions+=7;NFSU2_TR(0x5cf09c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf09e:{NFSU2_TR(0x5cf09e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf0a0:{NFSU2_TR(0x5cf0a0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cf0a2:{NFSU2_TR(0x5cf0a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf0a3:{NFSU2_TR(0x5cf0a3);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf0a5:{NFSU2_TR(0x5cf0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf0a6:{NFSU2_TR(0x5cf0a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf0a9:L5cf0a9:{c.instructions+=5;NFSU2_TR(0x5cf0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf0ac:{NFSU2_TR(0x5cf0ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf0ad:{NFSU2_TR(0x5cf0ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf0ae:{NFSU2_TR(0x5cf0ae);
__builtin_memmove((R+4),(R+24),4);
}
B5cf0b0:{NFSU2_TR(0x5cf0b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf0b5ull));
TAIL_STATIC(0x5cdf50u,5cd);
}
B5cf0b5:L5cf0b5:{c.instructions+=7;NFSU2_TR(0x5cf0b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf0b7:{NFSU2_TR(0x5cf0b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf0b9:{NFSU2_TR(0x5cf0b9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cf0bb:{NFSU2_TR(0x5cf0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf0bc:{NFSU2_TR(0x5cf0bc);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf0be:{NFSU2_TR(0x5cf0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf0bf:{NFSU2_TR(0x5cf0bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf0c2:L5cf0c2:{c.instructions+=3;NFSU2_TR(0x5cf0c2);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5cf0c6:{NFSU2_TR(0x5cf0c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cf0c8:{NFSU2_TR(0x5cf0c8);
if(r1(R+518)){{goto L5cf0ff;}}
}
B5cf0ca:L5cf0ca:{c.instructions+=2;NFSU2_TR(0x5cf0ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5cf0cd:{NFSU2_TR(0x5cf0cd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cf0ff;}}
}
B5cf0cf:L5cf0cf:{c.instructions+=2;NFSU2_TR(0x5cf0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5cf0d2:{NFSU2_TR(0x5cf0d2);
if(r1(R+512)){{goto L5cf0e0;}}
}
B5cf0d4:L5cf0d4:{c.instructions+=3;NFSU2_TR(0x5cf0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf0d7:{NFSU2_TR(0x5cf0d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf0d8:{NFSU2_TR(0x5cf0d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf0ddull));
TAIL_STATIC(0x575630u,575);
}
B5cf0dd:L5cf0dd:{c.instructions+=1;NFSU2_TR(0x5cf0dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf0e0:L5cf0e0:{c.instructions+=10;NFSU2_TR(0x5cf0e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf0e2:{NFSU2_TR(0x5cf0e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf0e4:{NFSU2_TR(0x5cf0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf0eb:{NFSU2_TR(0x5cf0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf0f2:{NFSU2_TR(0x5cf0f2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cf0f4:{NFSU2_TR(0x5cf0f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf0f5:{NFSU2_TR(0x5cf0f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cf0f9:{NFSU2_TR(0x5cf0f9);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf0fb:{NFSU2_TR(0x5cf0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf0fc:{NFSU2_TR(0x5cf0fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf0ff:L5cf0ff:{c.instructions+=2;NFSU2_TR(0x5cf0ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf101:{NFSU2_TR(0x5cf101);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf124;}}
}
B5cf103:L5cf103:{c.instructions+=3;NFSU2_TR(0x5cf103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5cf106:{NFSU2_TR(0x5cf106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf109:{NFSU2_TR(0x5cf109);
if(r1(R+512)){{goto L5cf11e;}}
}
B5cf10b:L5cf10b:{c.instructions+=9;NFSU2_TR(0x5cf10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf10e:{NFSU2_TR(0x5cf10e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf110:{NFSU2_TR(0x5cf110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf112:{NFSU2_TR(0x5cf112);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cf114:{NFSU2_TR(0x5cf114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf115:{NFSU2_TR(0x5cf115);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5cf118:{NFSU2_TR(0x5cf118);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf11a:{NFSU2_TR(0x5cf11a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf11b:{NFSU2_TR(0x5cf11b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf11e:L5cf11e:{c.instructions+=2;NFSU2_TR(0x5cf11e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5cf121:{NFSU2_TR(0x5cf121);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5cf124:L5cf124:{c.instructions+=7;NFSU2_TR(0x5cf124);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cf126:{NFSU2_TR(0x5cf126);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cf128:{NFSU2_TR(0x5cf128);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5cf12a:{NFSU2_TR(0x5cf12a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf12b:{NFSU2_TR(0x5cf12b);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf12d:{NFSU2_TR(0x5cf12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf12e:{NFSU2_TR(0x5cf12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf140:L5cf140:{c.instructions+=8;NFSU2_TR(0x5cf140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf141:{NFSU2_TR(0x5cf141);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cf145:{NFSU2_TR(0x5cf145);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf146:{NFSU2_TR(0x5cf146);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf14a:{NFSU2_TR(0x5cf14a);
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
B5cf14c:{NFSU2_TR(0x5cf14c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf14d:{NFSU2_TR(0x5cf14d);
__builtin_memmove((R+28),(R+4),4);
}
B5cf14f:{NFSU2_TR(0x5cf14f);
if(r1(R+518)){{goto L5cf17f;}}
}
B5cf151:L5cf151:{c.instructions+=5;NFSU2_TR(0x5cf151);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf154:{NFSU2_TR(0x5cf154);
__builtin_memmove((R+0),(R+24),4);
}
B5cf156:{NFSU2_TR(0x5cf156);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cf158:{NFSU2_TR(0x5cf158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf15a:{NFSU2_TR(0x5cf15a);
if(r1(R+518)){{goto L5cf17b;}}
}
B5cf15c:L5cf15c:{c.instructions+=8;NFSU2_TR(0x5cf15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf15f:{NFSU2_TR(0x5cf15f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf161:{NFSU2_TR(0x5cf161);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cf163:{NFSU2_TR(0x5cf163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf165:{NFSU2_TR(0x5cf165);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf168:{NFSU2_TR(0x5cf168);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf169:{NFSU2_TR(0x5cf169);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf16c:{NFSU2_TR(0x5cf16c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf171ull));
TAIL_STATIC(0x575630u,575);
}
B5cf171:L5cf171:{c.instructions+=4;NFSU2_TR(0x5cf171);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf174:{NFSU2_TR(0x5cf174);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf177:{NFSU2_TR(0x5cf177);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5cf178:{NFSU2_TR(0x5cf178);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf17b:L5cf17b:{c.instructions+=2;NFSU2_TR(0x5cf17b);
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
B5cf17d:{NFSU2_TR(0x5cf17d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf151u);}goto L5cf151;}}
}
B5cf17f:L5cf17f:{c.instructions+=6;NFSU2_TR(0x5cf17f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf183:{NFSU2_TR(0x5cf183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf184:{NFSU2_TR(0x5cf184);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cf186:{NFSU2_TR(0x5cf186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf187:{NFSU2_TR(0x5cf187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cf188:{NFSU2_TR(0x5cf188);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf190:L5cf190:{c.instructions+=14;NFSU2_TR(0x5cf190);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf194:{NFSU2_TR(0x5cf194);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf198:{NFSU2_TR(0x5cf198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf199:{NFSU2_TR(0x5cf199);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf19a:{NFSU2_TR(0x5cf19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf19e:{NFSU2_TR(0x5cf19e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf19f:{NFSU2_TR(0x5cf19f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1a0:{NFSU2_TR(0x5cf1a0);
__builtin_memmove((R+0),(R+16),4);
}
B5cf1a2:{NFSU2_TR(0x5cf1a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1a3:{NFSU2_TR(0x5cf1a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf1a7:{NFSU2_TR(0x5cf1a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cf1a9:{NFSU2_TR(0x5cf1a9);
__builtin_memmove((R+0),(R+16),4);
}
B5cf1ab:{NFSU2_TR(0x5cf1ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5cf1ad:{NFSU2_TR(0x5cf1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf1b2ull));
TAIL_STATIC(0x5ca630u,5ca);
}
B5cf1b2:L5cf1b2:{c.instructions+=2;NFSU2_TR(0x5cf1b2);
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
B5cf1b5:{NFSU2_TR(0x5cf1b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf1c0:L5cf1c0:{c.instructions+=3;NFSU2_TR(0x5cf1c0);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5cf1c5:{NFSU2_TR(0x5cf1c5);
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
B5cf1c7:{NFSU2_TR(0x5cf1c7);
if(r1(R+518)){{goto L5cf1e4;}}
}
B5cf1c9:L5cf1c9:{c.instructions+=3;NFSU2_TR(0x5cf1c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf1cb:{NFSU2_TR(0x5cf1cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1cc:{NFSU2_TR(0x5cf1cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf1cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf1cf:L5cf1cf:{c.instructions+=4;NFSU2_TR(0x5cf1cf);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5cf1d4:{NFSU2_TR(0x5cf1d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf1d6:{NFSU2_TR(0x5cf1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1d7:{NFSU2_TR(0x5cf1d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf1daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf1da:L5cf1da:{c.instructions+=1;NFSU2_TR(0x5cf1da);
s4(0x86e5c0,u32(0x0ull));
}
B5cf1e4:L5cf1e4:{c.instructions+=5;NFSU2_TR(0x5cf1e4);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cf1ea:{NFSU2_TR(0x5cf1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf1ec:{NFSU2_TR(0x5cf1ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1ed:{NFSU2_TR(0x5cf1ed);
__builtin_memmove((R+24),(R+4),4);
}
B5cf1ef:{NFSU2_TR(0x5cf1ef);
if(r1(R+518)){{goto L5cf1ff;}}
}
B5cf1f1:L5cf1f1:{c.instructions+=1;NFSU2_TR(0x5cf1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf1f6ull));
TAIL_STATIC(0x5cd410u,5cd);
}
B5cf1f6:L5cf1f6:{c.instructions+=2;NFSU2_TR(0x5cf1f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf1f7:{NFSU2_TR(0x5cf1f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf1fcull));
TAIL_STATIC(0x575630u,575);
}
B5cf1fc:L5cf1fc:{c.instructions+=1;NFSU2_TR(0x5cf1fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf1ff:L5cf1ff:{c.instructions+=4;NFSU2_TR(0x5cf1ff);
__builtin_memmove((R+0),gp(0x870780),4);
}
B5cf204:{NFSU2_TR(0x5cf204);
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
B5cf206:{NFSU2_TR(0x5cf206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf207:{NFSU2_TR(0x5cf207);
if(r1(R+518)){{goto L5cf219;}}
}
B5cf209:L5cf209:{c.instructions+=3;NFSU2_TR(0x5cf209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf20b:{NFSU2_TR(0x5cf20b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf20c:{NFSU2_TR(0x5cf20c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf20full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf20f:L5cf20f:{c.instructions+=1;NFSU2_TR(0x5cf20f);
s4(0x870780,u32(0x0ull));
}
B5cf219:L5cf219:{c.instructions+=1;NFSU2_TR(0x5cf219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf220:L5cf220:{c.instructions+=5;NFSU2_TR(0x5cf220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf221:{NFSU2_TR(0x5cf221);
__builtin_memmove((R+24),(R+4),4);
}
B5cf223:{NFSU2_TR(0x5cf223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf229:{NFSU2_TR(0x5cf229);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf22b:{NFSU2_TR(0x5cf22b);
if(r1(R+518)){{goto L5cf244;}}
}
B5cf22d:L5cf22d:{c.instructions+=2;NFSU2_TR(0x5cf22d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cf234:{NFSU2_TR(0x5cf234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf23d;}}
}
B5cf236:L5cf236:{c.instructions+=1;NFSU2_TR(0x5cf236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf23bull));
TAIL_STATIC(0x5c15f0u,5c1);
}
B5cf23b:L5cf23b:{c.instructions+=1;NFSU2_TR(0x5cf23b);
{goto L5cf249;}
}
B5cf23d:L5cf23d:{c.instructions+=1;NFSU2_TR(0x5cf23d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf242ull));
TAIL_STATIC(0x5ca720u,5ca);
}
B5cf242:L5cf242:{c.instructions+=1;NFSU2_TR(0x5cf242);
{goto L5cf249;}
}
B5cf244:L5cf244:{c.instructions+=1;NFSU2_TR(0x5cf244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf249ull));
TAIL_STATIC(0x5c1840u,5c1);
}
B5cf249:L5cf249:{c.instructions+=10;NFSU2_TR(0x5cf249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf24c:{NFSU2_TR(0x5cf24c);
__builtin_memmove((R+4),gp(0x86eaf0),4);
}
B5cf252:{NFSU2_TR(0x5cf252);
__builtin_memmove((R+8),gp(0x86eaf4),4);
}
B5cf258:{NFSU2_TR(0x5cf258);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B5cf25a:{NFSU2_TR(0x5cf25a);
__builtin_memmove(gp(0x86eaf0),(R+4),4);
}
B5cf260:{NFSU2_TR(0x5cf260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf263:{NFSU2_TR(0x5cf263);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B5cf265:{NFSU2_TR(0x5cf265);
__builtin_memmove(gp(0x86eaf4),(R+8),4);
}
B5cf26b:{NFSU2_TR(0x5cf26b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x13ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cf272:{NFSU2_TR(0x5cf272);
if(r1(R+518)){{goto L5cf317;}}
}
B5cf278:L5cf278:{c.instructions+=3;NFSU2_TR(0x5cf278);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cf27b:{NFSU2_TR(0x5cf27b);
u8 U[2];
__builtin_memmove((U+0),gp(0x86eaf8),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cf281:{NFSU2_TR(0x5cf281);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cf288;}}
}
B5cf283:L5cf283:{c.instructions+=1;NFSU2_TR(0x5cf283);
__builtin_memmove(gp(0x86eaf8),(R+0),1);
}
B5cf288:L5cf288:{c.instructions+=3;NFSU2_TR(0x5cf288);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cf28b:{NFSU2_TR(0x5cf28b);
u8 U[2];
__builtin_memmove((U+0),gp(0x86eaf9),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cf291:{NFSU2_TR(0x5cf291);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cf298;}}
}
B5cf293:L5cf293:{c.instructions+=1;NFSU2_TR(0x5cf293);
__builtin_memmove(gp(0x86eaf9),(R+0),1);
}
B5cf298:L5cf298:{c.instructions+=4;NFSU2_TR(0x5cf298);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5cf29b:{NFSU2_TR(0x5cf29b);
w4(R+0,u32(r1(R+8)));
}
B5cf29e:{NFSU2_TR(0x5cf29e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5cf2a3:{NFSU2_TR(0x5cf2a3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5cf2a7;}}
}
B5cf2a5:L5cf2a5:{c.instructions+=1;NFSU2_TR(0x5cf2a5);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5cf2a7:L5cf2a7:{c.instructions+=3;NFSU2_TR(0x5cf2a7);
w4(R+4,u32(m1(0x86eafa)));
}
B5cf2ae:{NFSU2_TR(0x5cf2ae);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5cf2b4:{NFSU2_TR(0x5cf2b4);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5cf2b8;}}
}
B5cf2b6:L5cf2b6:{c.instructions+=1;NFSU2_TR(0x5cf2b6);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5cf2b8:L5cf2b8:{c.instructions+=2;NFSU2_TR(0x5cf2b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cf2ba:{NFSU2_TR(0x5cf2ba);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cf2ed;}}
}
B5cf2bc:L5cf2bc:{c.instructions+=4;NFSU2_TR(0x5cf2bc);
__builtin_memmove((R+0),gp(0x870785),1);
}
B5cf2c1:{NFSU2_TR(0x5cf2c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cf2c3:{NFSU2_TR(0x5cf2c3);
__builtin_memmove(gp(0x86eafa),(R+8),1);
}
B5cf2c9:{NFSU2_TR(0x5cf2c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf2ed;}}
}
B5cf2cb:L5cf2cb:{c.instructions+=4;NFSU2_TR(0x5cf2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf2d1:{NFSU2_TR(0x5cf2d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cf2d8:{NFSU2_TR(0x5cf2d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf2da:{NFSU2_TR(0x5cf2da);
if(r1(R+518)){{goto L5cf2ed;}}
}
B5cf2dc:L5cf2dc:{c.instructions+=3;NFSU2_TR(0x5cf2dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5cf2e2:{NFSU2_TR(0x5cf2e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cf2e4:{NFSU2_TR(0x5cf2e4);
if(r1(R+518)){{goto L5cf2ed;}}
}
B5cf2e6:L5cf2e6:{c.instructions+=1;NFSU2_TR(0x5cf2e6);
s1(0x870784,u8(0x1ull));
}
B5cf2ed:L5cf2ed:{c.instructions+=4;NFSU2_TR(0x5cf2ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5cf2f0:{NFSU2_TR(0x5cf2f0);
w4(R+0,u32(r1(R+8)));
}
B5cf2f3:{NFSU2_TR(0x5cf2f3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5cf2f8:{NFSU2_TR(0x5cf2f8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5cf2fc;}}
}
B5cf2fa:L5cf2fa:{c.instructions+=1;NFSU2_TR(0x5cf2fa);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5cf2fc:L5cf2fc:{c.instructions+=3;NFSU2_TR(0x5cf2fc);
w4(R+4,u32(m1(0x86eafb)));
}
B5cf303:{NFSU2_TR(0x5cf303);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5cf309:{NFSU2_TR(0x5cf309);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5cf30d;}}
}
B5cf30b:L5cf30b:{c.instructions+=1;NFSU2_TR(0x5cf30b);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5cf30d:L5cf30d:{c.instructions+=2;NFSU2_TR(0x5cf30d);
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
B5cf30f:{NFSU2_TR(0x5cf30f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cf317;}}
}
B5cf311:L5cf311:{c.instructions+=1;NFSU2_TR(0x5cf311);
__builtin_memmove(gp(0x86eafb),(R+8),1);
}
B5cf317:L5cf317:{c.instructions+=2;NFSU2_TR(0x5cf317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf318:{NFSU2_TR(0x5cf318);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf320:L5cf320:{c.instructions+=7;NFSU2_TR(0x5cf320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf321:{NFSU2_TR(0x5cf321);
__builtin_memmove((R+24),(R+4),4);
}
B5cf323:{NFSU2_TR(0x5cf323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf329:{NFSU2_TR(0x5cf329);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5cf32c:{NFSU2_TR(0x5cf32c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5cf32e:{NFSU2_TR(0x5cf32e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf32f:{NFSU2_TR(0x5cf32f);
if(r1(R+518)){{goto L5cf3ab;}}
}
B5cf331:L5cf331:{c.instructions+=3;NFSU2_TR(0x5cf331);
__builtin_memmove((R+4),gp(0x86e5c0),4);
}
B5cf337:{NFSU2_TR(0x5cf337);
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
B5cf339:{NFSU2_TR(0x5cf339);
if(r1(R+518)){{goto L5cf39c;}}
}
B5cf33b:L5cf33b:{c.instructions+=2;NFSU2_TR(0x5cf33b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x13ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cf342:{NFSU2_TR(0x5cf342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf38d;}}
}
B5cf344:L5cf344:{c.instructions+=6;NFSU2_TR(0x5cf344);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf347:{NFSU2_TR(0x5cf347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf34a:{NFSU2_TR(0x5cf34a);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5cf34f:{NFSU2_TR(0x5cf34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf351:{NFSU2_TR(0x5cf351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf352:{NFSU2_TR(0x5cf352);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf355ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf355:L5cf355:{c.instructions+=11;NFSU2_TR(0x5cf355);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf359:{NFSU2_TR(0x5cf359);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5cf35e:{NFSU2_TR(0x5cf35e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf360:{NFSU2_TR(0x5cf360);
__builtin_memmove((R+4),(R+28),4);
}
B5cf362:{NFSU2_TR(0x5cf362);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x148ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5cf368:{NFSU2_TR(0x5cf368);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf36a:{NFSU2_TR(0x5cf36a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf36c:{NFSU2_TR(0x5cf36c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x86f348ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x86f348ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x86f348ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf372:{NFSU2_TR(0x5cf372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf373:{NFSU2_TR(0x5cf373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf374:{NFSU2_TR(0x5cf374);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf377ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf377:L5cf377:{c.instructions+=2;NFSU2_TR(0x5cf377);
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
B5cf379:{NFSU2_TR(0x5cf379);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cf382;}}
}
B5cf37b:L5cf37b:{c.instructions+=2;NFSU2_TR(0x5cf37b);
__builtin_memmove((R+4),(R+24),4);
}
B5cf37d:{NFSU2_TR(0x5cf37d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf382ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf220u);}goto L5cf220;}
}
B5cf382:L5cf382:{c.instructions+=4;NFSU2_TR(0x5cf382);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf388:{NFSU2_TR(0x5cf388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf389:{NFSU2_TR(0x5cf389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf38a:{NFSU2_TR(0x5cf38a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf38d:L5cf38d:{c.instructions+=5;NFSU2_TR(0x5cf38d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf391:{NFSU2_TR(0x5cf391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf392:{NFSU2_TR(0x5cf392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf398:{NFSU2_TR(0x5cf398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf399:{NFSU2_TR(0x5cf399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf39c:L5cf39c:{c.instructions+=5;NFSU2_TR(0x5cf39c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf3a0:{NFSU2_TR(0x5cf3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf3a1:{NFSU2_TR(0x5cf3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf3a7:{NFSU2_TR(0x5cf3a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf3a8:{NFSU2_TR(0x5cf3a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf3ab:L5cf3ab:{c.instructions+=5;NFSU2_TR(0x5cf3ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf3af:{NFSU2_TR(0x5cf3af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf3b0:{NFSU2_TR(0x5cf3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf3b6:{NFSU2_TR(0x5cf3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf3b7:{NFSU2_TR(0x5cf3b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf3c0:L5cf3c0:{c.instructions+=2;NFSU2_TR(0x5cf3c0);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cf3c4:{NFSU2_TR(0x5cf3c4);
if(r1(R+512)){{goto L5cf3ca;}}
}
B5cf3c6:L5cf3c6:{c.instructions+=2;NFSU2_TR(0x5cf3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf3c9:{NFSU2_TR(0x5cf3c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf3ca:L5cf3ca:{c.instructions+=2;NFSU2_TR(0x5cf3ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cf3cd:{NFSU2_TR(0x5cf3cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf3d0:L5cf3d0:{c.instructions+=3;NFSU2_TR(0x5cf3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3d1:{NFSU2_TR(0x5cf3d1);
__builtin_memmove((R+24),(R+4),4);
}
B5cf3d3:{NFSU2_TR(0x5cf3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf3d8ull));
TAIL_STATIC(0x5d05e0u,5d0);
}
B5cf3d8:L5cf3d8:{c.instructions+=2;NFSU2_TR(0x5cf3d8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B5cf3dd:{NFSU2_TR(0x5cf3dd);
if(r1(R+518)){{goto L5cf3e8;}}
}
B5cf3df:L5cf3df:{c.instructions+=2;NFSU2_TR(0x5cf3df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3e0:{NFSU2_TR(0x5cf3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf3e5ull));
TAIL_STATIC(0x575630u,575);
}
B5cf3e5:L5cf3e5:{c.instructions+=1;NFSU2_TR(0x5cf3e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf3e8:L5cf3e8:{c.instructions+=3;NFSU2_TR(0x5cf3e8);
__builtin_memmove((R+0),(R+24),4);
}
B5cf3ea:{NFSU2_TR(0x5cf3ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf3eb:{NFSU2_TR(0x5cf3eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf3f0:L5cf3f0:{c.instructions+=8;NFSU2_TR(0x5cf3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3f1:{NFSU2_TR(0x5cf3f1);
u8 U[4];
w4(U+0,u32(0x5cf030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3f6:{NFSU2_TR(0x5cf3f6);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3fb:{NFSU2_TR(0x5cf3fb);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf3fd:{NFSU2_TR(0x5cf3fd);
__builtin_memmove((R+24),(R+4),4);
}
B5cf3ff:{NFSU2_TR(0x5cf3ff);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf401:{NFSU2_TR(0x5cf401);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf402:{NFSU2_TR(0x5cf402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf407ull));
TAIL_STATIC(0x75c461u,75c);
}
B5cf407:L5cf407:{c.instructions+=3;NFSU2_TR(0x5cf407);
__builtin_memmove((R+0),(R+24),4);
}
B5cf409:{NFSU2_TR(0x5cf409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf40a:{NFSU2_TR(0x5cf40a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf410:L5cf410:{c.instructions+=5;NFSU2_TR(0x5cf410);
u8 U[4];
w4(U+0,u32(0x5cf030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf415:{NFSU2_TR(0x5cf415);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf417:{NFSU2_TR(0x5cf417);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf419:{NFSU2_TR(0x5cf419);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf41a:{NFSU2_TR(0x5cf41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf41full));
TAIL_STATIC(0x75c401u,75c);
}
B5cf41f:L5cf41f:{c.instructions+=1;NFSU2_TR(0x5cf41f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf420:L5cf420:{c.instructions+=10;NFSU2_TR(0x5cf420);
__builtin_memmove((R+0),gp(0x872edc),4);
}
B5cf425:{NFSU2_TR(0x5cf425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5cf428:{NFSU2_TR(0x5cf428);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf429:{NFSU2_TR(0x5cf429);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf42a:{NFSU2_TR(0x5cf42a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf42b:{NFSU2_TR(0x5cf42b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cf42c:{NFSU2_TR(0x5cf42c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf42d:{NFSU2_TR(0x5cf42d);
__builtin_memmove(gp(0x872edc),(R+0),4);
}
B5cf432:{NFSU2_TR(0x5cf432);
w4(R+12,u32(0x870d30ull));
}
B5cf437:{NFSU2_TR(0x5cf437);
{goto L5cf440;}
}
B5cf440:L5cf440:{c.instructions+=4;NFSU2_TR(0x5cf440);
w4(R+20,u32(0x86eb28ull));
}
B5cf445:{NFSU2_TR(0x5cf445);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf449:{NFSU2_TR(0x5cf449);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf44d:{NFSU2_TR(0x5cf44d);
__builtin_memmove((R+4),(R+4),4);
}
B5cf450:L5cf450:{c.instructions+=2;NFSU2_TR(0x5cf450);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5cf452:{NFSU2_TR(0x5cf452);
if(r1(R+518)){{goto L5cf924;}}
}
B5cf458:L5cf458:{c.instructions+=6;NFSU2_TR(0x5cf458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5cf45b:{NFSU2_TR(0x5cf45b);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5cf461:{NFSU2_TR(0x5cf461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf463:{NFSU2_TR(0x5cf463);
__builtin_memmove((R+4),(R+28),4);
}
B5cf465:{NFSU2_TR(0x5cf465);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf469:{NFSU2_TR(0x5cf469);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf46cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf46c:L5cf46c:{c.instructions+=6;NFSU2_TR(0x5cf46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf46f:{NFSU2_TR(0x5cf46f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf474:{NFSU2_TR(0x5cf474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf476:{NFSU2_TR(0x5cf476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf477:{NFSU2_TR(0x5cf477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf478:{NFSU2_TR(0x5cf478);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf47eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf47e:L5cf47e:{c.instructions+=7;NFSU2_TR(0x5cf47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf481:{NFSU2_TR(0x5cf481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf483:{NFSU2_TR(0x5cf483);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf485:{NFSU2_TR(0x5cf485);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cf489:{NFSU2_TR(0x5cf489);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf48a:{NFSU2_TR(0x5cf48a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf48b:{NFSU2_TR(0x5cf48b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf491ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf491:L5cf491:{c.instructions+=7;NFSU2_TR(0x5cf491);
__builtin_memmove((R+4),gp(0x872f04),4);
}
B5cf497:{NFSU2_TR(0x5cf497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf499:{NFSU2_TR(0x5cf499);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5cf49a:{NFSU2_TR(0x5cf49a);
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
B5cf49c:{NFSU2_TR(0x5cf49c);
__builtin_memmove(gp(0x872f04),(R+4),4);
}
B5cf4a2:{NFSU2_TR(0x5cf4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf4a6:{NFSU2_TR(0x5cf4a6);
if(r1(R+518)){{goto L5cf907;}}
}
B5cf4ac:L5cf4ac:{c.instructions+=1;NFSU2_TR(0x5cf4ac);
{goto L5cf4b2;}
}
B5cf4ae:L5cf4ae:{c.instructions+=1;NFSU2_TR(0x5cf4ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf4b2:L5cf4b2:{c.instructions+=8;NFSU2_TR(0x5cf4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf4b4:{NFSU2_TR(0x5cf4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf4b7:{NFSU2_TR(0x5cf4b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cf4b9:{NFSU2_TR(0x5cf4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf4bc:{NFSU2_TR(0x5cf4bc);
s4(0x872ed8,u32(u32(m4(0x872ed8))+u32(u32(0x1ull))));
}
B5cf4c2:{NFSU2_TR(0x5cf4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf4c5:{NFSU2_TR(0x5cf4c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf4c6:{NFSU2_TR(0x5cf4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf4cbull));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5cf4cb:L5cf4cb:{c.instructions+=5;NFSU2_TR(0x5cf4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf4ce:{NFSU2_TR(0x5cf4ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5cf4d1:{NFSU2_TR(0x5cf4d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf4d4:{NFSU2_TR(0x5cf4d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cf4d6:{NFSU2_TR(0x5cf4d6);
if(r1(R+518)){{goto L5cf8d2;}}
}
B5cf4dc:L5cf4dc:{c.instructions+=1;NFSU2_TR(0x5cf4dc);
__builtin_memmove((R+16),(R+16),4);
}
B5cf4e0:L5cf4e0:{c.instructions+=13;NFSU2_TR(0x5cf4e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5cf4e2:{NFSU2_TR(0x5cf4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf4e5:{NFSU2_TR(0x5cf4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf4e8:{NFSU2_TR(0x5cf4e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cf4ea:{NFSU2_TR(0x5cf4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf4ed:{NFSU2_TR(0x5cf4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf4f0:{NFSU2_TR(0x5cf4f0);
__builtin_memmove((R+8),gp(0x870848),4);
}
B5cf4f6:{NFSU2_TR(0x5cf4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf4f9:{NFSU2_TR(0x5cf4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf4fd:{NFSU2_TR(0x5cf4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf500:{NFSU2_TR(0x5cf500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf501:{NFSU2_TR(0x5cf501);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf502:{NFSU2_TR(0x5cf502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf507ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5cf507:L5cf507:{c.instructions+=6;NFSU2_TR(0x5cf507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf50a:{NFSU2_TR(0x5cf50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf50d:{NFSU2_TR(0x5cf50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x59cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf513:{NFSU2_TR(0x5cf513);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf516:{NFSU2_TR(0x5cf516);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf518:{NFSU2_TR(0x5cf518);
if(r1(R+518)){{goto L5cf52e;}}
}
B5cf51a:L5cf51a:{c.instructions+=2;NFSU2_TR(0x5cf51a);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf51c:{NFSU2_TR(0x5cf51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf521ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cf521:L5cf521:{c.instructions+=4;NFSU2_TR(0x5cf521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf524:{NFSU2_TR(0x5cf524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf525:{NFSU2_TR(0x5cf525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf526:{NFSU2_TR(0x5cf526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf52bull));
TAIL_STATIC(0x5bdaa0u,5bd);
}
B5cf52b:L5cf52b:{c.instructions+=1;NFSU2_TR(0x5cf52b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5cf52e:L5cf52e:{c.instructions+=3;NFSU2_TR(0x5cf52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf531:{NFSU2_TR(0x5cf531);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf533:{NFSU2_TR(0x5cf533);
if(r1(R+518)){{goto L5cf542;}}
}
B5cf535:L5cf535:{c.instructions+=4;NFSU2_TR(0x5cf535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf538:{NFSU2_TR(0x5cf538);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf539:{NFSU2_TR(0x5cf539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf53a:{NFSU2_TR(0x5cf53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf53full));
TAIL_STATIC(0x5bd140u,5bd);
}
B5cf53f:L5cf53f:{c.instructions+=1;NFSU2_TR(0x5cf53f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf542:L5cf542:{c.instructions+=3;NFSU2_TR(0x5cf542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf545:{NFSU2_TR(0x5cf545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf547:{NFSU2_TR(0x5cf547);
if(r1(R+518)){{goto L5cf556;}}
}
B5cf549:L5cf549:{c.instructions+=4;NFSU2_TR(0x5cf549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf54c:{NFSU2_TR(0x5cf54c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf54d:{NFSU2_TR(0x5cf54d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf54e:{NFSU2_TR(0x5cf54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf553ull));
TAIL_STATIC(0x5bd4a0u,5bd);
}
B5cf553:L5cf553:{c.instructions+=1;NFSU2_TR(0x5cf553);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf556:L5cf556:{c.instructions+=4;NFSU2_TR(0x5cf556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf559:{NFSU2_TR(0x5cf559);
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
B5cf55b:{NFSU2_TR(0x5cf55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf55e:{NFSU2_TR(0x5cf55e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf809;}}
}
B5cf564:L5cf564:{c.instructions+=4;NFSU2_TR(0x5cf564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf567:{NFSU2_TR(0x5cf567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf569:{NFSU2_TR(0x5cf569);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf56d:{NFSU2_TR(0x5cf56d);
if(r1(R+518)){{goto L5cf57f;}}
}
B5cf56f:L5cf56f:{c.instructions+=2;NFSU2_TR(0x5cf56f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf573:{NFSU2_TR(0x5cf573);
if(r1(R+518)){{goto L5cf57f;}}
}
B5cf575:L5cf575:{c.instructions+=3;NFSU2_TR(0x5cf575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf576:{NFSU2_TR(0x5cf576);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf577:{NFSU2_TR(0x5cf577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf57cull));
TAIL_STATIC(0x5bdcd0u,5bd);
}
B5cf57c:L5cf57c:{c.instructions+=1;NFSU2_TR(0x5cf57c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf57f:L5cf57f:{c.instructions+=6;NFSU2_TR(0x5cf57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf582:{NFSU2_TR(0x5cf582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5cf584:{NFSU2_TR(0x5cf584);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf587:{NFSU2_TR(0x5cf587);
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
B5cf589:{NFSU2_TR(0x5cf589);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf58c:{NFSU2_TR(0x5cf58c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf5e5;}}
}
B5cf58e:L5cf58e:{c.instructions+=12;NFSU2_TR(0x5cf58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf591:{NFSU2_TR(0x5cf591);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf593:{NFSU2_TR(0x5cf593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf594:{NFSU2_TR(0x5cf594);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf596:{NFSU2_TR(0x5cf596);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf598:{NFSU2_TR(0x5cf598);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf59a:{NFSU2_TR(0x5cf59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf5a1:{NFSU2_TR(0x5cf5a1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf5a6:{NFSU2_TR(0x5cf5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf5a8:{NFSU2_TR(0x5cf5a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5a9:{NFSU2_TR(0x5cf5a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5aa:{NFSU2_TR(0x5cf5aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf5adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf5ad:L5cf5ad:{c.instructions+=9;NFSU2_TR(0x5cf5ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf5af:{NFSU2_TR(0x5cf5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf5b1:{NFSU2_TR(0x5cf5b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5b3:{NFSU2_TR(0x5cf5b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cf5b7:{NFSU2_TR(0x5cf5b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5b8:{NFSU2_TR(0x5cf5b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5ba:{NFSU2_TR(0x5cf5ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5bc:{NFSU2_TR(0x5cf5bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5bd:{NFSU2_TR(0x5cf5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf5c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf5c0:L5cf5c0:{c.instructions+=5;NFSU2_TR(0x5cf5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf5c3:{NFSU2_TR(0x5cf5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf5c6:{NFSU2_TR(0x5cf5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf5ca:{NFSU2_TR(0x5cf5ca);
__builtin_memmove((R+8),(R+4),4);
}
B5cf5cc:{NFSU2_TR(0x5cf5cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5cf5cf:L5cf5cf:{c.instructions+=1;NFSU2_TR(0x5cf5cf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cf5d1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf5cfu);}goto L5cf5cf;}
}
B5cf5d1:L5cf5d1:{c.instructions+=2;NFSU2_TR(0x5cf5d1);
__builtin_memmove((R+4),(R+8),4);
}
B5cf5d3:{NFSU2_TR(0x5cf5d3);
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
B5cf5d6:L5cf5d6:{c.instructions+=1;NFSU2_TR(0x5cf5d6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5cf5d8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf5d6u);}goto L5cf5d6;}
}
B5cf5d8:L5cf5d8:{c.instructions+=4;NFSU2_TR(0x5cf5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf5db:{NFSU2_TR(0x5cf5db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf5dd:{NFSU2_TR(0x5cf5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf5de:{NFSU2_TR(0x5cf5de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf5e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf5e1:L5cf5e1:{c.instructions+=1;NFSU2_TR(0x5cf5e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf5e5:L5cf5e5:{c.instructions+=3;NFSU2_TR(0x5cf5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf5e8:{NFSU2_TR(0x5cf5e8);
u8 U[14];
__builtin_memmove((U+6),gp(0x87092c),4);
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
B5cf5ee:{NFSU2_TR(0x5cf5ee);
if(r1(R+518)){{goto L5cf61b;}}
}
B5cf5f0:L5cf5f0:{c.instructions+=10;NFSU2_TR(0x5cf5f0);
__builtin_memmove((R+24),gp(0x870910),4);
}
B5cf5f6:{NFSU2_TR(0x5cf5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf5f9:{NFSU2_TR(0x5cf5f9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf5fe:{NFSU2_TR(0x5cf5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf600:{NFSU2_TR(0x5cf600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf601:{NFSU2_TR(0x5cf601);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf603:{NFSU2_TR(0x5cf603);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf604:{NFSU2_TR(0x5cf604);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf606:{NFSU2_TR(0x5cf606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf607:{NFSU2_TR(0x5cf607);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf60dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf60d:L5cf60d:{c.instructions+=3;NFSU2_TR(0x5cf60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf610:{NFSU2_TR(0x5cf610);
__builtin_memmove(gp(0x87092c),(R+0),4);
}
B5cf615:{NFSU2_TR(0x5cf615);
s4(0x872ee8,u32(u32(m4(0x872ee8))+u32(u32(0x1ull))));
}
B5cf61b:L5cf61b:{c.instructions+=3;NFSU2_TR(0x5cf61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf61e:{NFSU2_TR(0x5cf61e);
u8 U[14];
__builtin_memmove((U+6),gp(0x870930),4);
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
B5cf624:{NFSU2_TR(0x5cf624);
if(r1(R+518)){{goto L5cf643;}}
}
B5cf626:L5cf626:{c.instructions+=5;NFSU2_TR(0x5cf626);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf62b:{NFSU2_TR(0x5cf62b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf62d:{NFSU2_TR(0x5cf62d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf62e:{NFSU2_TR(0x5cf62e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf62f:{NFSU2_TR(0x5cf62f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf635ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf635:L5cf635:{c.instructions+=3;NFSU2_TR(0x5cf635);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf638:{NFSU2_TR(0x5cf638);
__builtin_memmove(gp(0x870930),(R+0),4);
}
B5cf63d:{NFSU2_TR(0x5cf63d);
s4(0x872eec,u32(u32(m4(0x872eec))+u32(u32(0x1ull))));
}
B5cf643:L5cf643:{c.instructions+=3;NFSU2_TR(0x5cf643);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf646:{NFSU2_TR(0x5cf646);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cf648:{NFSU2_TR(0x5cf648);
if(r1(R+518)){{goto L5cf8a4;}}
}
B5cf64e:L5cf64e:{c.instructions+=2;NFSU2_TR(0x5cf64e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffull))));
}
B5cf655:{NFSU2_TR(0x5cf655);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cf8a4;}}
}
B5cf65b:L5cf65b:{c.instructions+=7;NFSU2_TR(0x5cf65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf65e:{NFSU2_TR(0x5cf65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf661:{NFSU2_TR(0x5cf661);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5cf667:{NFSU2_TR(0x5cf667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf66a:{NFSU2_TR(0x5cf66a);
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
B5cf66d:{NFSU2_TR(0x5cf66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf671:{NFSU2_TR(0x5cf671);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf729;}}
}
B5cf677:L5cf677:{c.instructions+=1;NFSU2_TR(0x5cf677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf67cull));
TAIL_STATIC(0x60fe00u,60f);
}
B5cf67c:L5cf67c:{c.instructions+=4;NFSU2_TR(0x5cf67c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf680:{NFSU2_TR(0x5cf680);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5cf687:{NFSU2_TR(0x5cf687);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cf68a:{NFSU2_TR(0x5cf68a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf691;}}
}
B5cf68c:L5cf68c:{c.instructions+=2;NFSU2_TR(0x5cf68c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B5cf68f:{NFSU2_TR(0x5cf68f);
{goto L5cf692;}
}
B5cf691:L5cf691:{c.instructions+=1;NFSU2_TR(0x5cf691);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5cf692:L5cf692:{c.instructions+=6;NFSU2_TR(0x5cf692);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B5cf695:{NFSU2_TR(0x5cf695);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a07a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cf69c:{NFSU2_TR(0x5cf69c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf69e:{NFSU2_TR(0x5cf69e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6a0:{NFSU2_TR(0x5cf6a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6a1:{NFSU2_TR(0x5cf6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf6a6ull));
TAIL_STATIC(0x4901d0u,490);
}
B5cf6a6:L5cf6a6:{c.instructions+=12;NFSU2_TR(0x5cf6a6);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5cf6ac:{NFSU2_TR(0x5cf6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf6ae:{NFSU2_TR(0x5cf6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf6b1:{NFSU2_TR(0x5cf6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf6b4:{NFSU2_TR(0x5cf6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf6b7:{NFSU2_TR(0x5cf6b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cf6b9:{NFSU2_TR(0x5cf6b9);
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
B5cf6bc:{NFSU2_TR(0x5cf6bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6bd:{NFSU2_TR(0x5cf6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x894ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf6c3:{NFSU2_TR(0x5cf6c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6c4:{NFSU2_TR(0x5cf6c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6c5:{NFSU2_TR(0x5cf6c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf6cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf6cb:L5cf6cb:{c.instructions+=1;NFSU2_TR(0x5cf6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf6d0ull));
TAIL_STATIC(0x60fde0u,60f);
}
B5cf6d0:L5cf6d0:{c.instructions+=11;NFSU2_TR(0x5cf6d0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cf6d4:{NFSU2_TR(0x5cf6d4);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5cf6da:{NFSU2_TR(0x5cf6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf6dd:{NFSU2_TR(0x5cf6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf6e0:{NFSU2_TR(0x5cf6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf6e4:{NFSU2_TR(0x5cf6e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf6ea:{NFSU2_TR(0x5cf6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf6ec:{NFSU2_TR(0x5cf6ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6ed:{NFSU2_TR(0x5cf6ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6ee:{NFSU2_TR(0x5cf6ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf6ef:{NFSU2_TR(0x5cf6ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf6f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf6f2:L5cf6f2:{c.instructions+=6;NFSU2_TR(0x5cf6f2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cf6f6:{NFSU2_TR(0x5cf6f6);
__builtin_memmove((R+8),gp(0x870910),4);
}
B5cf6fc:{NFSU2_TR(0x5cf6fc);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cf702:{NFSU2_TR(0x5cf702);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf705:{NFSU2_TR(0x5cf705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5cf707:{NFSU2_TR(0x5cf707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf70cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cf70c:L5cf70c:{c.instructions+=8;NFSU2_TR(0x5cf70c);
u8 U[45];
w4(U+37,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
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
B5cf70f:{NFSU2_TR(0x5cf70f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf710:{NFSU2_TR(0x5cf710);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5cf715:{NFSU2_TR(0x5cf715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf718:{NFSU2_TR(0x5cf718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf71e:{NFSU2_TR(0x5cf71e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf71f:{NFSU2_TR(0x5cf71f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf720:{NFSU2_TR(0x5cf720);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf723ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf723:L5cf723:{c.instructions+=2;NFSU2_TR(0x5cf723);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf727:{NFSU2_TR(0x5cf727);
{goto L5cf760;}
}
B5cf729:L5cf729:{c.instructions+=3;NFSU2_TR(0x5cf729);
__builtin_memmove((R+8),gp(0x8707cd),1);
}
B5cf72f:{NFSU2_TR(0x5cf72f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cf731:{NFSU2_TR(0x5cf731);
if(r1(R+518)){{goto L5cf73e;}}
}
B5cf733:L5cf733:{c.instructions+=3;NFSU2_TR(0x5cf733);
__builtin_memmove((R+8),gp(0x870848),4);
}
B5cf739:{NFSU2_TR(0x5cf739);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
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
B5cf73c:{NFSU2_TR(0x5cf73c);
if(r1(R+518)){{goto L5cf760;}}
}
B5cf73e:L5cf73e:{c.instructions+=3;NFSU2_TR(0x5cf73e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5cf741:{NFSU2_TR(0x5cf741);
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
B5cf743:{NFSU2_TR(0x5cf743);
if(r1(R+518)){{goto L5cf760;}}
}
B5cf745:L5cf745:{c.instructions+=2;NFSU2_TR(0x5cf745);
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
B5cf747:{NFSU2_TR(0x5cf747);
if(r1(R+518)){{goto L5cf758;}}
}
B5cf749:L5cf749:{c.instructions+=2;NFSU2_TR(0x5cf749);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf74c:{NFSU2_TR(0x5cf74c);
if(r1(R+518)){{goto L5cf758;}}
}
B5cf74e:L5cf74e:{c.instructions+=2;NFSU2_TR(0x5cf74e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf751:{NFSU2_TR(0x5cf751);
if(r1(R+518)){{goto L5cf758;}}
}
B5cf753:L5cf753:{c.instructions+=2;NFSU2_TR(0x5cf753);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf756:{NFSU2_TR(0x5cf756);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cf760;}}
}
B5cf758:L5cf758:{c.instructions+=1;NFSU2_TR(0x5cf758);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf760:L5cf760:{c.instructions+=5;NFSU2_TR(0x5cf760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf763:{NFSU2_TR(0x5cf763);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf766:{NFSU2_TR(0x5cf766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf768:{NFSU2_TR(0x5cf768);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf769:{NFSU2_TR(0x5cf769);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf76full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf76f:L5cf76f:{c.instructions+=4;NFSU2_TR(0x5cf76f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf773:{NFSU2_TR(0x5cf773);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cf775:{NFSU2_TR(0x5cf775);
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
B5cf777:{NFSU2_TR(0x5cf777);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cf7e1;}}
}
B5cf779:L5cf779:{c.instructions+=1;NFSU2_TR(0x5cf779);
__builtin_memmove((R+16),(R+16),4);
}
B5cf780:L5cf780:{c.instructions+=6;NFSU2_TR(0x5cf780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf783:{NFSU2_TR(0x5cf783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf786:{NFSU2_TR(0x5cf786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf788:{NFSU2_TR(0x5cf788);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf789:{NFSU2_TR(0x5cf789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf78a:{NFSU2_TR(0x5cf78a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf790ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf790:L5cf790:{c.instructions+=20;NFSU2_TR(0x5cf790);
__builtin_memmove((R+4),gp(0x870974),4);
}
B5cf796:{NFSU2_TR(0x5cf796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf798:{NFSU2_TR(0x5cf798);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf79c:{NFSU2_TR(0x5cf79c);
w4(R+0,u32(0xaaaaaaabull));
}
B5cf7a1:{NFSU2_TR(0x5cf7a1);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5cf7a4:{NFSU2_TR(0x5cf7a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf7a8:{NFSU2_TR(0x5cf7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf7ab:{NFSU2_TR(0x5cf7ab);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5cf7ad:{NFSU2_TR(0x5cf7ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7ae:{NFSU2_TR(0x5cf7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5cf7b1:{NFSU2_TR(0x5cf7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cf7b4:{NFSU2_TR(0x5cf7b4);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+6))!=(u32(0x0ull))));
w1(R+523,u8(0x0ull));
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf7b6:{NFSU2_TR(0x5cf7b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7b7:{NFSU2_TR(0x5cf7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf7bb:{NFSU2_TR(0x5cf7bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7bc:{NFSU2_TR(0x5cf7bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7be:{NFSU2_TR(0x5cf7be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7c0:{NFSU2_TR(0x5cf7c0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7c2:{NFSU2_TR(0x5cf7c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7c3:{NFSU2_TR(0x5cf7c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf7c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf7c9:L5cf7c9:{c.instructions+=5;NFSU2_TR(0x5cf7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf7cc:{NFSU2_TR(0x5cf7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf7cf:{NFSU2_TR(0x5cf7cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf7d1:{NFSU2_TR(0x5cf7d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf7d2:{NFSU2_TR(0x5cf7d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf7d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf7d8:L5cf7d8:{c.instructions+=4;NFSU2_TR(0x5cf7d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf7dc:{NFSU2_TR(0x5cf7dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cf7dd:{NFSU2_TR(0x5cf7dd);
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
B5cf7df:{NFSU2_TR(0x5cf7df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf780u);}goto L5cf780;}}
}
B5cf7e1:L5cf7e1:{c.instructions+=9;NFSU2_TR(0x5cf7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf7e8:{NFSU2_TR(0x5cf7e8);
s4(0x872ee0,u32(u32(m4(0x872ee0))+u32(u32(0x1ull))));
}
B5cf7ee:{NFSU2_TR(0x5cf7ee);
w4(R+0,u32(0xaaaaaaabull));
}
B5cf7f3:{NFSU2_TR(0x5cf7f3);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B5cf7f6:{NFSU2_TR(0x5cf7f6);
__builtin_memmove((R+0),gp(0x872ef0),4);
}
B5cf7fb:{NFSU2_TR(0x5cf7fb);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5cf7fd:{NFSU2_TR(0x5cf7fd);
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5cf7ff:{NFSU2_TR(0x5cf7ff);
__builtin_memmove(gp(0x872ef0),(R+0),4);
}
B5cf804:{NFSU2_TR(0x5cf804);
{goto L5cf8a4;}
}
B5cf809:L5cf809:{c.instructions+=6;NFSU2_TR(0x5cf809);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf80e:{NFSU2_TR(0x5cf80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf810:{NFSU2_TR(0x5cf810);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf812:{NFSU2_TR(0x5cf812);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf814:{NFSU2_TR(0x5cf814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf815:{NFSU2_TR(0x5cf815);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf81bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf81b:L5cf81b:{c.instructions+=7;NFSU2_TR(0x5cf81b);
s4(0x87092c,u32(0x0ull));
}
B5cf825:{NFSU2_TR(0x5cf825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf828:{NFSU2_TR(0x5cf828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cf82b:{NFSU2_TR(0x5cf82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf82e:{NFSU2_TR(0x5cf82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf830:{NFSU2_TR(0x5cf830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf831:{NFSU2_TR(0x5cf831);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf837ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf837:L5cf837:{c.instructions+=3;NFSU2_TR(0x5cf837);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cf839:{NFSU2_TR(0x5cf839);
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
B5cf83b:{NFSU2_TR(0x5cf83b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cf880;}}
}
B5cf83d:L5cf83d:{c.instructions+=1;NFSU2_TR(0x5cf83d);
__builtin_memmove((R+4),(R+4),4);
}
B5cf840:L5cf840:{c.instructions+=6;NFSU2_TR(0x5cf840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf843:{NFSU2_TR(0x5cf843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf846:{NFSU2_TR(0x5cf846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf848:{NFSU2_TR(0x5cf848);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf849:{NFSU2_TR(0x5cf849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf84a:{NFSU2_TR(0x5cf84a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf850ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf850:L5cf850:{c.instructions+=11;NFSU2_TR(0x5cf850);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf855:{NFSU2_TR(0x5cf855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf857:{NFSU2_TR(0x5cf857);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf859:{NFSU2_TR(0x5cf859);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cf85c:{NFSU2_TR(0x5cf85c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf85d:{NFSU2_TR(0x5cf85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf85f:{NFSU2_TR(0x5cf85f);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf862:{NFSU2_TR(0x5cf862);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf863:{NFSU2_TR(0x5cf863);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf865:{NFSU2_TR(0x5cf865);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf866:{NFSU2_TR(0x5cf866);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf86cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf86c:L5cf86c:{c.instructions+=5;NFSU2_TR(0x5cf86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf86f:{NFSU2_TR(0x5cf86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf872:{NFSU2_TR(0x5cf872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf874:{NFSU2_TR(0x5cf874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf875:{NFSU2_TR(0x5cf875);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf87bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf87b:L5cf87b:{c.instructions+=3;NFSU2_TR(0x5cf87b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cf87c:{NFSU2_TR(0x5cf87c);
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
B5cf87e:{NFSU2_TR(0x5cf87e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf840u);}goto L5cf840;}}
}
B5cf880:L5cf880:{c.instructions+=6;NFSU2_TR(0x5cf880);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf885:{NFSU2_TR(0x5cf885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf887:{NFSU2_TR(0x5cf887);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf889:{NFSU2_TR(0x5cf889);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf88b:{NFSU2_TR(0x5cf88b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf88c:{NFSU2_TR(0x5cf88c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf892ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf892:L5cf892:{c.instructions+=4;NFSU2_TR(0x5cf892);
s4(0x872ee4,u32(u32(m4(0x872ee4))+u32(u32(0x1ull))));
}
B5cf898:{NFSU2_TR(0x5cf898);
__builtin_memmove((R+4),gp(0x870954),4);
}
B5cf89e:{NFSU2_TR(0x5cf89e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf89f:{NFSU2_TR(0x5cf89f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf8a4ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B5cf8a4:L5cf8a4:{c.instructions+=4;NFSU2_TR(0x5cf8a4);
__builtin_memmove((R+8),gp(0x87091c),4);
}
B5cf8aa:{NFSU2_TR(0x5cf8aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf8ab:{NFSU2_TR(0x5cf8ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf8ac:{NFSU2_TR(0x5cf8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf8b1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5cf8b1:L5cf8b1:{c.instructions+=7;NFSU2_TR(0x5cf8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf8b5:{NFSU2_TR(0x5cf8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cf8b8:{NFSU2_TR(0x5cf8b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cf8bc:{NFSU2_TR(0x5cf8bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B5cf8bf:{NFSU2_TR(0x5cf8bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf8c2:{NFSU2_TR(0x5cf8c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cf8c4:{NFSU2_TR(0x5cf8c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf4e0u);}goto L5cf4e0;}}
}
B5cf8ca:L5cf8ca:{c.instructions+=2;NFSU2_TR(0x5cf8ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf8ce:{NFSU2_TR(0x5cf8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cf8d2:L5cf8d2:{c.instructions+=5;NFSU2_TR(0x5cf8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cf8d5:{NFSU2_TR(0x5cf8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf8d7:{NFSU2_TR(0x5cf8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cf8de:{NFSU2_TR(0x5cf8de);
__builtin_memmove((R+4),(R+24),4);
}
B5cf8e0:{NFSU2_TR(0x5cf8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf8e5ull));
TAIL_STATIC(0x5cea20u,5ce);
}
B5cf8e5:L5cf8e5:{c.instructions+=4;NFSU2_TR(0x5cf8e5);
__builtin_memmove((R+8),gp(0x870918),4);
}
B5cf8eb:{NFSU2_TR(0x5cf8eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf8ec:{NFSU2_TR(0x5cf8ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf8ed:{NFSU2_TR(0x5cf8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf8f2ull));
TAIL_STATIC(0x43f920u,43f);
}
B5cf8f2:L5cf8f2:{c.instructions+=5;NFSU2_TR(0x5cf8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf8f4:{NFSU2_TR(0x5cf8f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cf8f7:{NFSU2_TR(0x5cf8f7);
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
B5cf8f9:{NFSU2_TR(0x5cf8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf8fd:{NFSU2_TR(0x5cf8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf4aeu);}goto L5cf4ae;}}
}
B5cf903:L5cf903:{c.instructions+=1;NFSU2_TR(0x5cf903);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5cf907:L5cf907:{c.instructions+=3;NFSU2_TR(0x5cf907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cf909:{NFSU2_TR(0x5cf909);
__builtin_memmove((R+4),(R+28),4);
}
B5cf90b:{NFSU2_TR(0x5cf90b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf90eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf90e:L5cf90e:{c.instructions+=4;NFSU2_TR(0x5cf90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cf911:{NFSU2_TR(0x5cf911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf913:{NFSU2_TR(0x5cf913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf914:{NFSU2_TR(0x5cf914);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf91aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf91a:L5cf91a:{c.instructions+=1;NFSU2_TR(0x5cf91a);
s4(0x870910,u32(0x0ull));
}
B5cf924:L5cf924:{c.instructions+=6;NFSU2_TR(0x5cf924);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5cf927:{NFSU2_TR(0x5cf927);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B5cf92a:{NFSU2_TR(0x5cf92a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86eb84ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86eb84ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cf930:{NFSU2_TR(0x5cf930);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf934:{NFSU2_TR(0x5cf934);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cf938:{NFSU2_TR(0x5cf938);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf450u);}goto L5cf450;}}
}
B5cf93e:L5cf93e:{c.instructions+=2;NFSU2_TR(0x5cf93e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8718b0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8718b0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cf944:{NFSU2_TR(0x5cf944);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf440u);}goto L5cf440;}}
}
B5cf94a:L5cf94a:{c.instructions+=7;NFSU2_TR(0x5cf94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cf94b:{NFSU2_TR(0x5cf94b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cf94c:{NFSU2_TR(0x5cf94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cf94d:{NFSU2_TR(0x5cf94d);
s4(0x87094c,u32(0x0ull));
}
B5cf957:{NFSU2_TR(0x5cf957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cf958:{NFSU2_TR(0x5cf958);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cf95b:{NFSU2_TR(0x5cf95b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cf960:L5cf960:{c.instructions+=3;NFSU2_TR(0x5cf960);
__builtin_memmove((R+0),gp(0x870990),4);
}
B5cf965:{NFSU2_TR(0x5cf965);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf966:{NFSU2_TR(0x5cf966);
u8 U[4];
__builtin_memmove((U+0),gp(0x783368),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf96cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5cf96c:L5cf96c:{c.instructions+=2;NFSU2_TR(0x5cf96c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5cf972:{NFSU2_TR(0x5cf972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf977ull));
TAIL_STATIC(0x481080u,481);
}
B5cf977:L5cf977:{c.instructions+=1;NFSU2_TR(0x5cf977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf97cull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B5cf97c:L5cf97c:{c.instructions+=2;NFSU2_TR(0x5cf97c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf97e:{NFSU2_TR(0x5cf97e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf983ull));
TAIL_STATIC(0x6f5889u,6f5);
}
B5cf983:L5cf983:{c.instructions+=4;NFSU2_TR(0x5cf983);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5cf989:{NFSU2_TR(0x5cf989);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf98c:{NFSU2_TR(0x5cf98c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf98e:{NFSU2_TR(0x5cf98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf993ull));
TAIL_STATIC(0x4839c0u,483);
}
B5cf993:L5cf993:{c.instructions+=1;NFSU2_TR(0x5cf993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf998ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B5cf998:L5cf998:{c.instructions+=2;NFSU2_TR(0x5cf998);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf99a:{NFSU2_TR(0x5cf99a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf99full));
TAIL_STATIC(0x6f5889u,6f5);
}
B5cf99f:L5cf99f:{c.instructions+=2;NFSU2_TR(0x5cf99f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cf9a2:{NFSU2_TR(0x5cf9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf1c0u);}goto L5cf1c0;}
}
B5cf9a7:L5cf9a7:{c.instructions+=1;NFSU2_TR(0x5cf9a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9acull));
TAIL_STATIC(0x5ce400u,5ce);
}
B5cf9ac:L5cf9ac:{c.instructions+=1;NFSU2_TR(0x5cf9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9b1ull));
TAIL_STATIC(0x5ce970u,5ce);
}
B5cf9b1:L5cf9b1:{c.instructions+=3;NFSU2_TR(0x5cf9b1);
__builtin_memmove((R+0),gp(0x86b7c4),1);
}
B5cf9b6:{NFSU2_TR(0x5cf9b6);
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
B5cf9b8:{NFSU2_TR(0x5cf9b8);
if(r1(R+518)){{goto L5cf9d0;}}
}
B5cf9ba:L5cf9ba:{c.instructions+=3;NFSU2_TR(0x5cf9ba);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5cf9bf:{NFSU2_TR(0x5cf9bf);
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
B5cf9c1:{NFSU2_TR(0x5cf9c1);
if(r1(R+518)){{goto L5cf9d0;}}
}
B5cf9c3:L5cf9c3:{c.instructions+=3;NFSU2_TR(0x5cf9c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf9c5:{NFSU2_TR(0x5cf9c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf9c6:{NFSU2_TR(0x5cf9c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf9c9:L5cf9c9:{c.instructions+=1;NFSU2_TR(0x5cf9c9);
s1(0x86b7c4,u8(0x0ull));
}
B5cf9d0:L5cf9d0:{c.instructions+=2;NFSU2_TR(0x5cf9d0);
w4(R+4,u32(0x86b7a4ull));
}
B5cf9d5:{NFSU2_TR(0x5cf9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9daull));
TAIL_STATIC(0x5c57e0u,5c5);
}
B5cf9da:L5cf9da:{c.instructions+=3;NFSU2_TR(0x5cf9da);
__builtin_memmove((R+0),gp(0x86b7a4),4);
}
B5cf9df:{NFSU2_TR(0x5cf9df);
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
B5cf9e1:{NFSU2_TR(0x5cf9e1);
if(r1(R+518)){{goto L5cf9e9;}}
}
B5cf9e3:L5cf9e3:{c.instructions+=3;NFSU2_TR(0x5cf9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cf9e5:{NFSU2_TR(0x5cf9e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf9e6:{NFSU2_TR(0x5cf9e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf9e9:L5cf9e9:{c.instructions+=1;NFSU2_TR(0x5cf9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9eeull));
TAIL_STATIC(0x5ba610u,5ba);
}
B5cf9ee:L5cf9ee:{c.instructions+=1;NFSU2_TR(0x5cf9ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9f3ull));
TAIL_STATIC(0x5bbcd0u,5bb);
}
B5cf9f3:L5cf9f3:{c.instructions+=4;NFSU2_TR(0x5cf9f3);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cf9f8:{NFSU2_TR(0x5cf9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cf9fa:{NFSU2_TR(0x5cf9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cf9fb:{NFSU2_TR(0x5cf9fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cf9feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cf9fe:L5cf9fe:{c.instructions+=4;NFSU2_TR(0x5cf9fe);
__builtin_memmove((R+0),gp(0x870970),4);
}
B5cfa03:{NFSU2_TR(0x5cfa03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cfa05:{NFSU2_TR(0x5cfa05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa06:{NFSU2_TR(0x5cfa06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfa09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cfa09:L5cfa09:{c.instructions+=1;NFSU2_TR(0x5cfa09);
TAIL_STATIC(0x57d950u,57d);
}
B5cfa10:L5cfa10:{c.instructions+=7;NFSU2_TR(0x5cfa10);
__builtin_memmove((R+0),gp(0x8364e8),4);
}
B5cfa15:{NFSU2_TR(0x5cfa15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfa17:{NFSU2_TR(0x5cfa17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa18:{NFSU2_TR(0x5cfa18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa19:{NFSU2_TR(0x5cfa19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa1a:{NFSU2_TR(0x5cfa1a);
__builtin_memmove((R+28),(R+4),4);
}
B5cfa1c:{NFSU2_TR(0x5cfa1c);
if(r1(R+518)){{goto L5cfa5e;}}
}
B5cfa1e:L5cfa1e:{c.instructions+=7;NFSU2_TR(0x5cfa1e);
__builtin_memmove((R+0),gp(0x8768a8),4);
}
B5cfa23:{NFSU2_TR(0x5cfa23);
__builtin_memmove((R+4),(R+0),4);
}
B5cfa25:{NFSU2_TR(0x5cfa25);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B5cfa28:{NFSU2_TR(0x5cfa28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cfa29:{NFSU2_TR(0x5cfa29);
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
B5cfa2b:{NFSU2_TR(0x5cfa2b);
__builtin_memmove(gp(0x8768a8),(R+0),4);
}
B5cfa30:{NFSU2_TR(0x5cfa30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfa5e;}}
}
B5cfa32:L5cfa32:{c.instructions+=9;NFSU2_TR(0x5cfa32);
__builtin_memmove((R+0),gp(0x8709ec),4);
}
B5cfa37:{NFSU2_TR(0x5cfa37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cfa39:{NFSU2_TR(0x5cfa39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa3b:{NFSU2_TR(0x5cfa3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2224ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cfa41:{NFSU2_TR(0x5cfa41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa42:{NFSU2_TR(0x5cfa42);
u8 U[4];
w4(U+0,u32(0x5cef00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa47:{NFSU2_TR(0x5cfa47);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa49:{NFSU2_TR(0x5cfa49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa4a:{NFSU2_TR(0x5cfa4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfa4dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cfa4d:L5cfa4d:{c.instructions+=2;NFSU2_TR(0x5cfa4d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cfa4f:{NFSU2_TR(0x5cfa4f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cfa5e;}}
}
B5cfa51:L5cfa51:{c.instructions+=2;NFSU2_TR(0x5cfa51);
u8 U[4];
w4(U+0,u32(0x7a4164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa56:{NFSU2_TR(0x5cfa56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfa5bull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5cfa5b:L5cfa5b:{c.instructions+=1;NFSU2_TR(0x5cfa5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cfa5e:L5cfa5e:{c.instructions+=2;NFSU2_TR(0x5cfa5e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cfa60:{NFSU2_TR(0x5cfa60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5cfa62:L5cfa62:{c.instructions+=3;NFSU2_TR(0x5cfa62);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cfa69:{NFSU2_TR(0x5cfa69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfa6b:{NFSU2_TR(0x5cfa6b);
if(r1(R+518)){{goto L5cfaa3;}}
}
B5cfa6d:L5cfa6d:{c.instructions+=3;NFSU2_TR(0x5cfa6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfa6e:{NFSU2_TR(0x5cfa6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2224ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cfa74:{NFSU2_TR(0x5cfa74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfa79ull));
TAIL_STATIC(0x5c8700u,5c8);
}
B5cfa79:L5cfa79:{c.instructions+=2;NFSU2_TR(0x5cfa79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8007001eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfa7e:{NFSU2_TR(0x5cfa7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfaa3;}}
}
B5cfa80:L5cfa80:{c.instructions+=3;NFSU2_TR(0x5cfa80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5cfa82:{NFSU2_TR(0x5cfa82);
u8 U[12];
w4(U+0,u32(u32(u32(0x24a8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5cfa89:{NFSU2_TR(0x5cfa89);
u8 U[12];
w4(U+0,u32(u32(u32(0x2498ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5cfa90:L5cfa90:{c.instructions+=6;NFSU2_TR(0x5cfa90);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5cfa94:{NFSU2_TR(0x5cfa94);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5cfa9a:{NFSU2_TR(0x5cfa9a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cfa9b:{NFSU2_TR(0x5cfa9b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5cfa9e:{NFSU2_TR(0x5cfa9e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cfaa1:{NFSU2_TR(0x5cfaa1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfa90u);}goto L5cfa90;}}
}
B5cfaa3:L5cfaa3:{c.instructions+=4;NFSU2_TR(0x5cfaa3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cfaa4:{NFSU2_TR(0x5cfaa4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B5cfaa7:{NFSU2_TR(0x5cfaa7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5cfaaa:{NFSU2_TR(0x5cfaaa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfa62u);}goto L5cfa62;}}
}
B5cfaac:L5cfaac:{c.instructions+=2;NFSU2_TR(0x5cfaac);
if(mod_hook_table[16]){SPILL();c.pc=0x5cfaacu;mod_hook_table[16](c);SPILL();if(c.pc!=0x5cfaacu){TAIL_DYNAMIC(c.pc);}goto B5cfab1;}
w4(R+4,u32(0x88ull));
}
B5cfab1:{NFSU2_TR(0x5cfab1);
w4(R+24,u32(0x86ffc0ull));
}
B5cfab6:L5cfab6:{c.instructions+=1;NFSU2_TR(0x5cfab6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5cfab8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfab6u);}goto L5cfab6;}
}
B5cfab8:L5cfab8:{c.instructions+=4;NFSU2_TR(0x5cfab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfab9:{NFSU2_TR(0x5cfab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfaba:{NFSU2_TR(0x5cfaba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfabb:{NFSU2_TR(0x5cfabb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfac0:L5cfac0:{c.instructions+=6;NFSU2_TR(0x5cfac0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfac1:{NFSU2_TR(0x5cfac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfac2:{NFSU2_TR(0x5cfac2);
__builtin_memmove((R+24),(R+4),4);
}
B5cfac4:{NFSU2_TR(0x5cfac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfac7:{NFSU2_TR(0x5cfac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfac9:{NFSU2_TR(0x5cfac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfacf;}}
}
B5cfacb:L5cfacb:{c.instructions+=2;NFSU2_TR(0x5cfacb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5cfacd:{NFSU2_TR(0x5cfacd);
{goto L5cfad1;}
}
B5cfacf:L5cfacf:{c.instructions+=1;NFSU2_TR(0x5cfacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cfad1:L5cfad1:{c.instructions+=6;NFSU2_TR(0x5cfad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfad2:{NFSU2_TR(0x5cfad2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfad3:{NFSU2_TR(0x5cfad3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cfad7:{NFSU2_TR(0x5cfad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfad8:{NFSU2_TR(0x5cfad8);
__builtin_memmove((R+4),(R+24),4);
}
B5cfada:{NFSU2_TR(0x5cfada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfadfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf140u);}goto L5cf140;}
}
B5cfadf:L5cfadf:{c.instructions+=3;NFSU2_TR(0x5cfadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cfae2:{NFSU2_TR(0x5cfae2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfae3:{NFSU2_TR(0x5cfae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfae8ull));
TAIL_STATIC(0x575630u,575);
}
B5cfae8:L5cfae8:{c.instructions+=6;NFSU2_TR(0x5cfae8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfaeb:{NFSU2_TR(0x5cfaeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cfaf2:{NFSU2_TR(0x5cfaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cfaf9:{NFSU2_TR(0x5cfaf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfafa:{NFSU2_TR(0x5cfafa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5cfafb:{NFSU2_TR(0x5cfafb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfb00:L5cfb00:{c.instructions+=8;NFSU2_TR(0x5cfb00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb01:{NFSU2_TR(0x5cfb01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb02:{NFSU2_TR(0x5cfb02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb03:{NFSU2_TR(0x5cfb03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cfb07:{NFSU2_TR(0x5cfb07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb08:{NFSU2_TR(0x5cfb08);
__builtin_memmove((R+28),(R+4),4);
}
B5cfb0a:{NFSU2_TR(0x5cfb0a);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
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
B5cfb0d:{NFSU2_TR(0x5cfb0d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cfb14;}}
}
B5cfb0f:L5cfb0f:{c.instructions+=1;NFSU2_TR(0x5cfb0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfb14ull));
TAIL_STATIC(0x76e957u,76e);
}
B5cfb14:L5cfb14:{c.instructions+=5;NFSU2_TR(0x5cfb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfb17:{NFSU2_TR(0x5cfb17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5cfb1b:{NFSU2_TR(0x5cfb1b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5cfb1d:{NFSU2_TR(0x5cfb1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cfb1f:{NFSU2_TR(0x5cfb1f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cfb23;}}
}
B5cfb21:L5cfb21:{c.instructions+=1;NFSU2_TR(0x5cfb21);
__builtin_memmove((R+12),(R+0),4);
}
B5cfb23:L5cfb23:{c.instructions+=2;NFSU2_TR(0x5cfb23);
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
B5cfb25:{NFSU2_TR(0x5cfb25);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cfb90;}}
}
B5cfb27:L5cfb27:{c.instructions+=4;NFSU2_TR(0x5cfb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cfb2a:{NFSU2_TR(0x5cfb2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5cfb2d:{NFSU2_TR(0x5cfb2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cfb30:{NFSU2_TR(0x5cfb30);
if(r1(R+512)){{goto L5cfb37;}}
}
B5cfb32:L5cfb32:{c.instructions+=2;NFSU2_TR(0x5cfb32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cfb35:{NFSU2_TR(0x5cfb35);
{goto L5cfb39;}
}
B5cfb37:L5cfb37:{c.instructions+=1;NFSU2_TR(0x5cfb37);
__builtin_memmove((R+8),(R+20),4);
}
B5cfb39:L5cfb39:{c.instructions+=2;NFSU2_TR(0x5cfb39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B5cfb3c:{NFSU2_TR(0x5cfb3c);
if(r1(R+512)){{goto L5cfb43;}}
}
B5cfb3e:L5cfb3e:{c.instructions+=2;NFSU2_TR(0x5cfb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cfb41:{NFSU2_TR(0x5cfb41);
{goto L5cfb45;}
}
B5cfb43:L5cfb43:{c.instructions+=1;NFSU2_TR(0x5cfb43);
__builtin_memmove((R+4),(R+20),4);
}
B5cfb45:L5cfb45:{c.instructions+=8;NFSU2_TR(0x5cfb45);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B5cfb47:{NFSU2_TR(0x5cfb47);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5cfb49:{NFSU2_TR(0x5cfb49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb4a:{NFSU2_TR(0x5cfb4a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5cfb4c:{NFSU2_TR(0x5cfb4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb4d:{NFSU2_TR(0x5cfb4d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5cfb4f:{NFSU2_TR(0x5cfb4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb50:{NFSU2_TR(0x5cfb50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfb55ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B5cfb55:L5cfb55:{c.instructions+=5;NFSU2_TR(0x5cfb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cfb58:{NFSU2_TR(0x5cfb58);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B5cfb5a:{NFSU2_TR(0x5cfb5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5cfb5d:{NFSU2_TR(0x5cfb5d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfb60:{NFSU2_TR(0x5cfb60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cfb69;}}
}
B5cfb62:L5cfb62:{c.instructions+=2;NFSU2_TR(0x5cfb62);
__builtin_memmove((R+4),(R+28),4);
}
B5cfb64:{NFSU2_TR(0x5cfb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfb69ull));
TAIL_STATIC(0x76e9afu,76e);
}
B5cfb69:L5cfb69:{c.instructions+=3;NFSU2_TR(0x5cfb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfb6c:{NFSU2_TR(0x5cfb6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5cfb6e:{NFSU2_TR(0x5cfb6e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5cfb99;}}
}
B5cfb70:L5cfb70:{c.instructions+=5;NFSU2_TR(0x5cfb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfb73:{NFSU2_TR(0x5cfb73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb74:{NFSU2_TR(0x5cfb74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfb75:{NFSU2_TR(0x5cfb75);
__builtin_memmove((R+4),(R+28),4);
}
B5cfb77:{NFSU2_TR(0x5cfb77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfb7cull));
TAIL_STATIC(0x5cdf50u,5cd);
}
B5cfb7c:L5cfb7c:{c.instructions+=1;NFSU2_TR(0x5cfb7c);
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
B5cfb7e:L5cfb7e:{c.instructions+=1;NFSU2_TR(0x5cfb7e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cfb90;}}
}
B5cfb80:L5cfb80:{c.instructions+=3;NFSU2_TR(0x5cfb80);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cfb84:{NFSU2_TR(0x5cfb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cfb87:{NFSU2_TR(0x5cfb87);
if(r1(R+512)){{goto L5cfb8c;}}
}
B5cfb89:L5cfb89:{c.instructions+=1;NFSU2_TR(0x5cfb89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5cfb8c:L5cfb8c:{c.instructions+=1;NFSU2_TR(0x5cfb8c);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5cfb90:L5cfb90:{c.instructions+=6;NFSU2_TR(0x5cfb90);
__builtin_memmove((R+0),(R+28),4);
}
B5cfb92:{NFSU2_TR(0x5cfb92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfb93:{NFSU2_TR(0x5cfb93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfb94:{NFSU2_TR(0x5cfb94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cfb95:{NFSU2_TR(0x5cfb95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfb96:{NFSU2_TR(0x5cfb96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfb99:L5cfb99:{c.instructions+=2;NFSU2_TR(0x5cfb99);
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
B5cfb9b:{NFSU2_TR(0x5cfb9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfb7eu);}goto L5cfb7e;}}
}
B5cfb9d:L5cfb9d:{c.instructions+=3;NFSU2_TR(0x5cfb9d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfba0:{NFSU2_TR(0x5cfba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cfba3:{NFSU2_TR(0x5cfba3);
if(r1(R+512)){{goto L5cfba8;}}
}
B5cfba5:L5cfba5:{c.instructions+=1;NFSU2_TR(0x5cfba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5cfba8:L5cfba8:{c.instructions+=7;NFSU2_TR(0x5cfba8);
__builtin_memmove((R+0),(R+28),4);
}
B5cfbaa:{NFSU2_TR(0x5cfbaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfbab:{NFSU2_TR(0x5cfbab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfbac:{NFSU2_TR(0x5cfbac);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B5cfbb0:{NFSU2_TR(0x5cfbb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cfbb1:{NFSU2_TR(0x5cfbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfbb2:{NFSU2_TR(0x5cfbb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfbc0:L5cfbc0:{c.instructions+=12;NFSU2_TR(0x5cfbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfbc4:{NFSU2_TR(0x5cfbc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbc5:{NFSU2_TR(0x5cfbc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cfbc9:{NFSU2_TR(0x5cfbc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbca:{NFSU2_TR(0x5cfbca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cfbce:{NFSU2_TR(0x5cfbce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbcf:{NFSU2_TR(0x5cfbcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbd0:{NFSU2_TR(0x5cfbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cfbd4:{NFSU2_TR(0x5cfbd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbd5:{NFSU2_TR(0x5cfbd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbd6:{NFSU2_TR(0x5cfbd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbd7:{NFSU2_TR(0x5cfbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfbdcull));
TAIL_STATIC(0x5ce0f0u,5ce);
}
B5cfbdc:L5cfbdc:{c.instructions+=5;NFSU2_TR(0x5cfbdc);
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
B5cfbdf:{NFSU2_TR(0x5cfbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5cfbe2:{NFSU2_TR(0x5cfbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfbe3:{NFSU2_TR(0x5cfbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfbe4:{NFSU2_TR(0x5cfbe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfbf0:L5cfbf0:{c.instructions+=9;NFSU2_TR(0x5cfbf0);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5cfbf5:{NFSU2_TR(0x5cfbf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbf6:{NFSU2_TR(0x5cfbf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbf7:{NFSU2_TR(0x5cfbf7);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5cfbf9:{NFSU2_TR(0x5cfbf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfbfb:{NFSU2_TR(0x5cfbfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfbfc:{NFSU2_TR(0x5cfbfc);
w4(R+24,u32(0x4ull));
}
B5cfc01:{NFSU2_TR(0x5cfc01);
w4(R+28,u32(0x3ull));
}
B5cfc06:{NFSU2_TR(0x5cfc06);
if(r1(R+518)){{goto L5cfc5c;}}
}
B5cfc08:L5cfc08:{c.instructions+=2;NFSU2_TR(0x5cfc08);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfc0d:{NFSU2_TR(0x5cfc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfc12ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5cfc12:L5cfc12:{c.instructions+=3;NFSU2_TR(0x5cfc12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cfc15:{NFSU2_TR(0x5cfc15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfc17:{NFSU2_TR(0x5cfc17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfc5a;}}
}
B5cfc19:L5cfc19:{c.instructions+=2;NFSU2_TR(0x5cfc19);
u8 U[4];
w4(U+0,u32(0x794da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfc1e:{NFSU2_TR(0x5cfc1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfc23ull));
TAIL_STATIC(0x52cf60u,52c);
}
B5cfc23:L5cfc23:{c.instructions+=3;NFSU2_TR(0x5cfc23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cfc26:{NFSU2_TR(0x5cfc26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfc28:{NFSU2_TR(0x5cfc28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfc5a;}}
}
B5cfc2a:L5cfc2a:{c.instructions+=4;NFSU2_TR(0x5cfc2a);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5cfc2f:{NFSU2_TR(0x5cfc2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cfc31:{NFSU2_TR(0x5cfc31);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cfc34:{NFSU2_TR(0x5cfc34);
if(r1(R+518)){{goto L5cfc3a;}}
}
B5cfc36:L5cfc36:{c.instructions+=2;NFSU2_TR(0x5cfc36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cfc38:{NFSU2_TR(0x5cfc38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfc49;}}
}
B5cfc3a:L5cfc3a:{c.instructions+=3;NFSU2_TR(0x5cfc3a);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5cfc40:{NFSU2_TR(0x5cfc40);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5cfc43:{NFSU2_TR(0x5cfc43);
if(r1(R+518)){{goto L5cfc5c;}}
}
B5cfc45:L5cfc45:{c.instructions+=2;NFSU2_TR(0x5cfc45);
w1(R+12,u8(0x1ull));
}
B5cfc47:{NFSU2_TR(0x5cfc47);
{goto L5cfc5c;}
}
B5cfc49:L5cfc49:{c.instructions+=2;NFSU2_TR(0x5cfc49);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cfc4b:{NFSU2_TR(0x5cfc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfc5a;}}
}
B5cfc4d:L5cfc4d:{c.instructions+=3;NFSU2_TR(0x5cfc4d);
__builtin_memmove((R+0),gp(0x870754),1);
}
B5cfc52:{NFSU2_TR(0x5cfc52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfc54:{NFSU2_TR(0x5cfc54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfc5a;}}
}
B5cfc56:L5cfc56:{c.instructions+=2;NFSU2_TR(0x5cfc56);
w1(R+12,u8(0x1ull));
}
B5cfc58:{NFSU2_TR(0x5cfc58);
{goto L5cfc5c;}
}
B5cfc5a:L5cfc5a:{c.instructions+=1;NFSU2_TR(0x5cfc5a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5cfc5c:L5cfc5c:{c.instructions+=2;NFSU2_TR(0x5cfc5c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cfc62:{NFSU2_TR(0x5cfc62);
if(r1(R+518)){{goto L5cfd2c;}}
}
B5cfc68:L5cfc68:{c.instructions+=2;NFSU2_TR(0x5cfc68);
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
B5cfc6a:{NFSU2_TR(0x5cfc6a);
if(r1(R+518)){{goto L5cfd2c;}}
}
B5cfc70:L5cfc70:{c.instructions+=1;NFSU2_TR(0x5cfc70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfc75ull));
TAIL_STATIC(0x499db0u,499);
}
B5cfc75:L5cfc75:{c.instructions+=2;NFSU2_TR(0x5cfc75);
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
B5cfc77:{NFSU2_TR(0x5cfc77);
if(r1(R+518)){{goto L5cfcbb;}}
}
B5cfc79:L5cfc79:{c.instructions+=1;NFSU2_TR(0x5cfc79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfc7eull));
TAIL_STATIC(0x499dc0u,499);
}
B5cfc7e:L5cfc7e:{c.instructions+=2;NFSU2_TR(0x5cfc7e);
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
B5cfc80:{NFSU2_TR(0x5cfc80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfcbb;}}
}
B5cfc82:L5cfc82:{c.instructions+=2;NFSU2_TR(0x5cfc82);
u8 U[14];
__builtin_memmove((U+6),gp(0x870788),4);
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
B5cfc89:{NFSU2_TR(0x5cfc89);
if(r1(R+518)){{goto L5cfd5b;}}
}
B5cfc8f:L5cfc8f:{c.instructions+=3;NFSU2_TR(0x5cfc8f);
s4(0x870788,u32(0x2ull));
}
B5cfc99:{NFSU2_TR(0x5cfc99);
w4(R+24,u32(0x874c40ull));
}
B5cfc9e:{NFSU2_TR(0x5cfc9e);
__builtin_memmove((R+28),(R+28),4);
}
B5cfca0:L5cfca0:{c.instructions+=3;NFSU2_TR(0x5cfca0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfca2:{NFSU2_TR(0x5cfca2);
__builtin_memmove((R+4),(R+24),4);
}
B5cfca4:{NFSU2_TR(0x5cfca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfca9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf320u);}goto L5cf320;}
}
B5cfca9:L5cfca9:{c.instructions+=3;NFSU2_TR(0x5cfca9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5cfcaf:{NFSU2_TR(0x5cfcaf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8760e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8760e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfcb5:{NFSU2_TR(0x5cfcb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfca0u);}goto L5cfca0;}}
}
B5cfcb7:L5cfcb7:{c.instructions+=4;NFSU2_TR(0x5cfcb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfcb8:{NFSU2_TR(0x5cfcb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfcb9:{NFSU2_TR(0x5cfcb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfcba:{NFSU2_TR(0x5cfcba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfcbb:L5cfcbb:{c.instructions+=1;NFSU2_TR(0x5cfcbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfcc0ull));
TAIL_STATIC(0x499db0u,499);
}
B5cfcc0:L5cfcc0:{c.instructions+=2;NFSU2_TR(0x5cfcc0);
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
B5cfcc2:{NFSU2_TR(0x5cfcc2);
if(r1(R+518)){{goto L5cfcfe;}}
}
B5cfcc4:L5cfcc4:{c.instructions+=1;NFSU2_TR(0x5cfcc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfcc9ull));
TAIL_STATIC(0x499dc0u,499);
}
B5cfcc9:L5cfcc9:{c.instructions+=2;NFSU2_TR(0x5cfcc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfccb:{NFSU2_TR(0x5cfccb);
if(r1(R+518)){{goto L5cfcfe;}}
}
B5cfccd:L5cfccd:{c.instructions+=2;NFSU2_TR(0x5cfccd);
u8 U[14];
__builtin_memmove((U+6),gp(0x870788),4);
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
B5cfcd3:{NFSU2_TR(0x5cfcd3);
if(r1(R+518)){{goto L5cfd5b;}}
}
B5cfcd9:L5cfcd9:{c.instructions+=2;NFSU2_TR(0x5cfcd9);
__builtin_memmove(gp(0x870788),(R+28),4);
}
B5cfcdf:{NFSU2_TR(0x5cfcdf);
w4(R+24,u32(0x874c40ull));
}
B5cfce4:L5cfce4:{c.instructions+=3;NFSU2_TR(0x5cfce4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfce5:{NFSU2_TR(0x5cfce5);
__builtin_memmove((R+4),(R+24),4);
}
B5cfce7:{NFSU2_TR(0x5cfce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfcecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf320u);}goto L5cf320;}
}
B5cfcec:L5cfcec:{c.instructions+=3;NFSU2_TR(0x5cfcec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5cfcf2:{NFSU2_TR(0x5cfcf2);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8760e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8760e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfcf8:{NFSU2_TR(0x5cfcf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfce4u);}goto L5cfce4;}}
}
B5cfcfa:L5cfcfa:{c.instructions+=4;NFSU2_TR(0x5cfcfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfcfb:{NFSU2_TR(0x5cfcfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfcfc:{NFSU2_TR(0x5cfcfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfcfd:{NFSU2_TR(0x5cfcfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfcfe:L5cfcfe:{c.instructions+=2;NFSU2_TR(0x5cfcfe);
u8 U[14];
__builtin_memmove((U+6),gp(0x870788),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfd04:{NFSU2_TR(0x5cfd04);
if(r1(R+518)){{goto L5cfd5b;}}
}
B5cfd06:L5cfd06:{c.instructions+=2;NFSU2_TR(0x5cfd06);
__builtin_memmove(gp(0x870788),(R+24),4);
}
B5cfd0c:{NFSU2_TR(0x5cfd0c);
w4(R+24,u32(0x874c40ull));
}
B5cfd11:L5cfd11:{c.instructions+=3;NFSU2_TR(0x5cfd11);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfd13:{NFSU2_TR(0x5cfd13);
__builtin_memmove((R+4),(R+24),4);
}
B5cfd15:{NFSU2_TR(0x5cfd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfd1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf320u);}goto L5cf320;}
}
B5cfd1a:L5cfd1a:{c.instructions+=3;NFSU2_TR(0x5cfd1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5cfd20:{NFSU2_TR(0x5cfd20);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8760e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8760e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfd26:{NFSU2_TR(0x5cfd26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfd11u);}goto L5cfd11;}}
}
B5cfd28:L5cfd28:{c.instructions+=4;NFSU2_TR(0x5cfd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfd29:{NFSU2_TR(0x5cfd29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfd2a:{NFSU2_TR(0x5cfd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfd2b:{NFSU2_TR(0x5cfd2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfd2c:L5cfd2c:{c.instructions+=4;NFSU2_TR(0x5cfd2c);
__builtin_memmove((R+0),gp(0x870788),4);
}
B5cfd31:{NFSU2_TR(0x5cfd31);
w4(R+28,u32(0x1ull));
}
B5cfd36:{NFSU2_TR(0x5cfd36);
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
B5cfd38:{NFSU2_TR(0x5cfd38);
if(r1(R+518)){{goto L5cfd5b;}}
}
B5cfd3a:L5cfd3a:{c.instructions+=2;NFSU2_TR(0x5cfd3a);
__builtin_memmove(gp(0x870788),(R+28),4);
}
B5cfd40:{NFSU2_TR(0x5cfd40);
w4(R+24,u32(0x874c40ull));
}
B5cfd45:L5cfd45:{c.instructions+=3;NFSU2_TR(0x5cfd45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfd46:{NFSU2_TR(0x5cfd46);
__builtin_memmove((R+4),(R+24),4);
}
B5cfd48:{NFSU2_TR(0x5cfd48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfd4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf320u);}goto L5cf320;}
}
B5cfd4d:L5cfd4d:{c.instructions+=3;NFSU2_TR(0x5cfd4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5cfd53:{NFSU2_TR(0x5cfd53);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8760e0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8760e0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cfd59:{NFSU2_TR(0x5cfd59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfd45u);}goto L5cfd45;}}
}
B5cfd5b:L5cfd5b:{c.instructions+=4;NFSU2_TR(0x5cfd5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cfd5c:{NFSU2_TR(0x5cfd5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cfd5d:{NFSU2_TR(0x5cfd5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cfd5e:{NFSU2_TR(0x5cfd5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfd60:L5cfd60:{c.instructions+=7;NFSU2_TR(0x5cfd60);
__builtin_memmove((R+0),gp(0x870764),4);
}
B5cfd65:{NFSU2_TR(0x5cfd65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfd66:{NFSU2_TR(0x5cfd66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfd67:{NFSU2_TR(0x5cfd67);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5cfd6a:{NFSU2_TR(0x5cfd6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfd6c:{NFSU2_TR(0x5cfd6c);
s1(0x87075c,u8(0x0ull));
}
B5cfd73:{NFSU2_TR(0x5cfd73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cfd77;}}
}
B5cfd75:L5cfd75:{c.instructions+=1;NFSU2_TR(0x5cfd75);
__builtin_memmove((R+0),(R+28),4);
}
B5cfd77:L5cfd77:{c.instructions+=5;NFSU2_TR(0x5cfd77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cfd7b:{NFSU2_TR(0x5cfd7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5cfd7d:{NFSU2_TR(0x5cfd7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cfd81:{NFSU2_TR(0x5cfd81);
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
B5cfd83:{NFSU2_TR(0x5cfd83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cffde;}}
}
B5cfd89:L5cfd89:{c.instructions+=18;NFSU2_TR(0x5cfd89);
__builtin_memmove((R+0),gp(0x86eaf4),4);
}
B5cfd8e:{NFSU2_TR(0x5cfd8e);
__builtin_memmove((R+4),gp(0x86eaf8),4);
}
B5cfd94:{NFSU2_TR(0x5cfd94);
__builtin_memmove((R+8),gp(0x86eaf0),4);
}
B5cfd9a:{NFSU2_TR(0x5cfd9a);
__builtin_memmove(gp(0x86b7e4),(R+0),4);
}
B5cfd9f:{NFSU2_TR(0x5cfd9f);
w1(R+0,u8(0x80ull));
}
B5cfda1:{NFSU2_TR(0x5cfda1);
__builtin_memmove(gp(0x86eafb),(R+0),1);
}
B5cfda6:{NFSU2_TR(0x5cfda6);
__builtin_memmove(gp(0x86eafa),(R+0),1);
}
B5cfdab:{NFSU2_TR(0x5cfdab);
__builtin_memmove((R+0),gp(0x870988),4);
}
B5cfdb0:{NFSU2_TR(0x5cfdb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfdb2:{NFSU2_TR(0x5cfdb2);
__builtin_memmove(gp(0x86b7e0),(R+8),4);
}
B5cfdb8:{NFSU2_TR(0x5cfdb8);
__builtin_memmove((R+8),gp(0x86eafc),4);
}
B5cfdbe:{NFSU2_TR(0x5cfdbe);
__builtin_memmove(gp(0x86b7e8),(R+4),4);
}
B5cfdc4:{NFSU2_TR(0x5cfdc4);
__builtin_memmove(gp(0x86b7ec),(R+8),4);
}
B5cfdca:{NFSU2_TR(0x5cfdca);
__builtin_memmove(gp(0x86eaf0),(R+28),4);
}
B5cfdd0:{NFSU2_TR(0x5cfdd0);
__builtin_memmove(gp(0x86eaf4),(R+28),4);
}
B5cfdd6:{NFSU2_TR(0x5cfdd6);
s1(0x86eaf9,u8(0x0ull));
}
B5cfddd:{NFSU2_TR(0x5cfddd);
s1(0x86eaf8,u8(0x0ull));
}
B5cfde4:{NFSU2_TR(0x5cfde4);
if(r1(R+518)){{goto L5cfe0d;}}
}
B5cfde6:L5cfde6:{c.instructions+=2;NFSU2_TR(0x5cfde6);
w4(R+24,u32(0x874c40ull));
}
B5cfdeb:{NFSU2_TR(0x5cfdeb);
{goto L5cfdf0;}
}
B5cfdf0:L5cfdf0:{c.instructions+=2;NFSU2_TR(0x5cfdf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cfdf6:{NFSU2_TR(0x5cfdf6);
if(r1(R+518)){{goto L5cfdff;}}
}
B5cfdf8:L5cfdf8:{c.instructions+=2;NFSU2_TR(0x5cfdf8);
__builtin_memmove((R+4),(R+24),4);
}
B5cfdfa:{NFSU2_TR(0x5cfdfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfdffull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cf220u);}goto L5cf220;}
}
B5cfdff:L5cfdff:{c.instructions+=3;NFSU2_TR(0x5cfdff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x370ull))));
}
B5cfe05:{NFSU2_TR(0x5cfe05);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8760e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5cfe0b:{NFSU2_TR(0x5cfe0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfdf0u);}goto L5cfdf0;}}
}
B5cfe0d:L5cfe0d:{c.instructions+=3;NFSU2_TR(0x5cfe0d);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5cfe12:{NFSU2_TR(0x5cfe12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfe14:{NFSU2_TR(0x5cfe14);
if(r1(R+518)){{goto L5cfe1f;}}
}
B5cfe16:L5cfe16:{c.instructions+=2;NFSU2_TR(0x5cfe16);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5cfe19:{NFSU2_TR(0x5cfe19);
if(r1(R+518)){{goto L5cffcc;}}
}
B5cfe1f:L5cfe1f:{c.instructions+=3;NFSU2_TR(0x5cfe1f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5cfe21:{NFSU2_TR(0x5cfe21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe22:{NFSU2_TR(0x5cfe22);
{goto L5cfe30;}
}
B5cfe30:L5cfe30:{c.instructions+=4;NFSU2_TR(0x5cfe30);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cfe37:{NFSU2_TR(0x5cfe37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfe39:{NFSU2_TR(0x5cfe39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5cfe40:{NFSU2_TR(0x5cfe40);
if(r1(R+518)){{goto L5cffaf;}}
}
B5cfe46:L5cfe46:{c.instructions+=5;NFSU2_TR(0x5cfe46);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cfe4c:{NFSU2_TR(0x5cfe4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe4e:{NFSU2_TR(0x5cfe4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe4f:{NFSU2_TR(0x5cfe4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24e8ull))));
}
B5cfe55:{NFSU2_TR(0x5cfe55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfe5aull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cfe5a:L5cfe5a:{c.instructions+=2;NFSU2_TR(0x5cfe5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfe5c:{NFSU2_TR(0x5cfe5c);
if(r1(R+518)){{goto L5cfe90;}}
}
B5cfe5e:L5cfe5e:{c.instructions+=3;NFSU2_TR(0x5cfe5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cfe65:{NFSU2_TR(0x5cfe65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfe67:{NFSU2_TR(0x5cfe67);
if(r1(R+518)){{goto L5cfe90;}}
}
B5cfe69:L5cfe69:{c.instructions+=6;NFSU2_TR(0x5cfe69);
__builtin_memmove((R+28),gp(0x870760),4);
}
B5cfe6f:{NFSU2_TR(0x5cfe6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe71:{NFSU2_TR(0x5cfe71);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24e8ull))));
}
B5cfe77:{NFSU2_TR(0x5cfe77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe78:{NFSU2_TR(0x5cfe78);
__builtin_memmove((R+4),(R+28),4);
}
B5cfe7a:{NFSU2_TR(0x5cfe7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfe7full));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cfe7f:L5cfe7f:{c.instructions+=2;NFSU2_TR(0x5cfe7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfe81:{NFSU2_TR(0x5cfe81);
if(r1(R+518)){{goto L5cfe90;}}
}
B5cfe83:L5cfe83:{c.instructions+=5;NFSU2_TR(0x5cfe83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe84:{NFSU2_TR(0x5cfe84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe86:{NFSU2_TR(0x5cfe86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe87:{NFSU2_TR(0x5cfe87);
__builtin_memmove((R+4),(R+28),4);
}
B5cfe89:{NFSU2_TR(0x5cfe89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfe8eull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cfe8e:L5cfe8e:{c.instructions+=1;NFSU2_TR(0x5cfe8e);
__builtin_memmove((R+28),(R+28),4);
}
B5cfe90:L5cfe90:{c.instructions+=5;NFSU2_TR(0x5cfe90);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cfe96:{NFSU2_TR(0x5cfe96);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe98:{NFSU2_TR(0x5cfe98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfe99:{NFSU2_TR(0x5cfe99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
}
B5cfe9f:{NFSU2_TR(0x5cfe9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfea4ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cfea4:L5cfea4:{c.instructions+=2;NFSU2_TR(0x5cfea4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfea6:{NFSU2_TR(0x5cfea6);
if(r1(R+518)){{goto L5cfee0;}}
}
B5cfea8:L5cfea8:{c.instructions+=3;NFSU2_TR(0x5cfea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cfeaf:{NFSU2_TR(0x5cfeaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cfeb1:{NFSU2_TR(0x5cfeb1);
if(r1(R+518)){{goto L5cfee0;}}
}
B5cfeb3:L5cfeb3:{c.instructions+=6;NFSU2_TR(0x5cfeb3);
__builtin_memmove((R+28),gp(0x870760),4);
}
B5cfeb9:{NFSU2_TR(0x5cfeb9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfebb:{NFSU2_TR(0x5cfebb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2538ull))));
}
B5cfec1:{NFSU2_TR(0x5cfec1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfec2:{NFSU2_TR(0x5cfec2);
__builtin_memmove((R+4),(R+28),4);
}
B5cfec4:{NFSU2_TR(0x5cfec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfec9ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cfec9:L5cfec9:{c.instructions+=2;NFSU2_TR(0x5cfec9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfecb:{NFSU2_TR(0x5cfecb);
if(r1(R+518)){{goto L5cfee0;}}
}
B5cfecd:L5cfecd:{c.instructions+=5;NFSU2_TR(0x5cfecd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfece:{NFSU2_TR(0x5cfece);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfed0:{NFSU2_TR(0x5cfed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfed1:{NFSU2_TR(0x5cfed1);
__builtin_memmove((R+4),(R+28),4);
}
B5cfed3:{NFSU2_TR(0x5cfed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfed8ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cfed8:L5cfed8:{c.instructions+=1;NFSU2_TR(0x5cfed8);
{goto L5cfee0;}
}
B5cfee0:L5cfee0:{c.instructions+=5;NFSU2_TR(0x5cfee0);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cfee6:{NFSU2_TR(0x5cfee6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfee8:{NFSU2_TR(0x5cfee8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfee9:{NFSU2_TR(0x5cfee9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B5cfeef:{NFSU2_TR(0x5cfeef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cfef4ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cfef4:L5cfef4:{c.instructions+=2;NFSU2_TR(0x5cfef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cfef6:{NFSU2_TR(0x5cfef6);
if(r1(R+518)){{goto L5cff30;}}
}
B5cfef8:L5cfef8:{c.instructions+=3;NFSU2_TR(0x5cfef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cfeff:{NFSU2_TR(0x5cfeff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cff01:{NFSU2_TR(0x5cff01);
if(r1(R+518)){{goto L5cff30;}}
}
B5cff03:L5cff03:{c.instructions+=6;NFSU2_TR(0x5cff03);
__builtin_memmove((R+28),gp(0x870760),4);
}
B5cff09:{NFSU2_TR(0x5cff09);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff0b:{NFSU2_TR(0x5cff0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2498ull))));
}
B5cff11:{NFSU2_TR(0x5cff11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff12:{NFSU2_TR(0x5cff12);
__builtin_memmove((R+4),(R+28),4);
}
B5cff14:{NFSU2_TR(0x5cff14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff19ull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cff19:L5cff19:{c.instructions+=2;NFSU2_TR(0x5cff19);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cff1b:{NFSU2_TR(0x5cff1b);
if(r1(R+518)){{goto L5cff30;}}
}
B5cff1d:L5cff1d:{c.instructions+=5;NFSU2_TR(0x5cff1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff1e:{NFSU2_TR(0x5cff1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff20:{NFSU2_TR(0x5cff20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff21:{NFSU2_TR(0x5cff21);
__builtin_memmove((R+4),(R+28),4);
}
B5cff23:{NFSU2_TR(0x5cff23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff28ull));
TAIL_STATIC(0x5bff60u,5bf);
}
B5cff28:L5cff28:{c.instructions+=1;NFSU2_TR(0x5cff28);
{goto L5cff30;}
}
B5cff30:L5cff30:{c.instructions+=3;NFSU2_TR(0x5cff30);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cff36:{NFSU2_TR(0x5cff36);
u8 U[15];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5cff3e:{NFSU2_TR(0x5cff3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cff4c;}}
}
B5cff40:L5cff40:{c.instructions+=2;NFSU2_TR(0x5cff40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff41:{NFSU2_TR(0x5cff41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff46ull));
TAIL_STATIC(0x5cdbb0u,5cd);
}
B5cff46:L5cff46:{c.instructions+=1;NFSU2_TR(0x5cff46);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cff4c:L5cff4c:{c.instructions+=4;NFSU2_TR(0x5cff4c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff4e:{NFSU2_TR(0x5cff4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff4f:{NFSU2_TR(0x5cff4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2498ull))));
}
B5cff55:{NFSU2_TR(0x5cff55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff5aull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5cff5a:L5cff5a:{c.instructions+=2;NFSU2_TR(0x5cff5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cff5c:{NFSU2_TR(0x5cff5c);
if(r1(R+518)){{goto L5cff6a;}}
}
B5cff5e:L5cff5e:{c.instructions+=3;NFSU2_TR(0x5cff5e);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cff64:{NFSU2_TR(0x5cff64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff65:{NFSU2_TR(0x5cff65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff6aull));
TAIL_STATIC(0x5cd910u,5cd);
}
B5cff6a:L5cff6a:{c.instructions+=3;NFSU2_TR(0x5cff6a);
__builtin_memmove((R+0),gp(0x86ffb4),4);
}
B5cff6f:{NFSU2_TR(0x5cff6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cff71:{NFSU2_TR(0x5cff71);
if(r1(R+518)){{goto L5cff97;}}
}
B5cff73:L5cff73:{c.instructions+=3;NFSU2_TR(0x5cff73);
__builtin_memmove((R+0),gp(0x86f8a8),1);
}
B5cff78:{NFSU2_TR(0x5cff78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5cff7a:{NFSU2_TR(0x5cff7a);
if(r1(R+518)){{goto L5cff97;}}
}
B5cff7c:L5cff7c:{c.instructions+=3;NFSU2_TR(0x5cff7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5cff83:{NFSU2_TR(0x5cff83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5cff85:{NFSU2_TR(0x5cff85);
if(r1(R+518)){{goto L5cffaf;}}
}
B5cff87:L5cff87:{c.instructions+=4;NFSU2_TR(0x5cff87);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cff8d:{NFSU2_TR(0x5cff8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff8f:{NFSU2_TR(0x5cff8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cff90:{NFSU2_TR(0x5cff90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cff95ull));
TAIL_STATIC(0x5cd4b0u,5cd);
}
B5cff95:L5cff95:{c.instructions+=1;NFSU2_TR(0x5cff95);
{goto L5cffaf;}
}
B5cff97:L5cff97:{c.instructions+=6;NFSU2_TR(0x5cff97);
__builtin_memmove((R+4),gp(0x870760),4);
}
B5cff9d:{NFSU2_TR(0x5cff9d);
u8 U[4];
w4(U+0,u32(0x1b58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cffa2:{NFSU2_TR(0x5cffa2);
u8 U[4];
w4(U+0,u32(0x1b58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cffa7:{NFSU2_TR(0x5cffa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cffa9:{NFSU2_TR(0x5cffa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cffaa:{NFSU2_TR(0x5cffaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cffafull));
TAIL_STATIC(0x5c9150u,5c9);
}
B5cffaf:L5cffaf:{c.instructions+=3;NFSU2_TR(0x5cffaf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5cffb0:{NFSU2_TR(0x5cffb0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5cffb3:{NFSU2_TR(0x5cffb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cfe30u);}goto L5cfe30;}}
}
B5cffb9:L5cffb9:{c.instructions+=7;NFSU2_TR(0x5cffb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cffbd:{NFSU2_TR(0x5cffbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cffbe:{NFSU2_TR(0x5cffbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cffbf:{NFSU2_TR(0x5cffbf);
u8 U[4];
w4(U+0,u32(0x86b7e0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5cffc5:{NFSU2_TR(0x5cffc5);
w4(R+0,u32(0x86eaf0ull));
}
B5cffca:{NFSU2_TR(0x5cffca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cffcb:{NFSU2_TR(0x5cffcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cffcc:L5cffcc:{c.instructions+=6;NFSU2_TR(0x5cffcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cffd0:{NFSU2_TR(0x5cffd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cffd1:{NFSU2_TR(0x5cffd1);
u8 U[4];
w4(U+0,u32(0x86b7e0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5cffd7:{NFSU2_TR(0x5cffd7);
w4(R+0,u32(0x86eaf0ull));
}
B5cffdc:{NFSU2_TR(0x5cffdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cffdd:{NFSU2_TR(0x5cffdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cffde:L5cffde:{c.instructions+=6;NFSU2_TR(0x5cffde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cffe2:{NFSU2_TR(0x5cffe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cffe3:{NFSU2_TR(0x5cffe3);
u8 U[4];
w4(U+0,u32(0x86b7e0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5cffe9:{NFSU2_TR(0x5cffe9);
w4(R+0,u32(0x86eaf0ull));
}
B5cffee:{NFSU2_TR(0x5cffee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cffef:{NFSU2_TR(0x5cffef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cfff0:L5cfff0:{c.instructions+=5;NFSU2_TR(0x5cfff0);
__builtin_memmove((R+0),gp(0x86e5c0),4);
}
B5cfff5:{NFSU2_TR(0x5cfff5);
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
B5cfff7:{NFSU2_TR(0x5cfff7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cfff8:{NFSU2_TR(0x5cfff8);
__builtin_memmove((R+12),(R+4),4);
}
B5cfffa:{NFSU2_TR(0x5cfffa);
if(r1(R+518)){TAIL_STATIC(0x5d0043u,5d0);}
}
B5cfffc:L5cfffc:{c.instructions+=3;NFSU2_TR(0x5cfffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cfffe:{NFSU2_TR(0x5cfffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cffff:{NFSU2_TR(0x5cffff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d0002ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x5cf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
