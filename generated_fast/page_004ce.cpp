#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_49a(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ce,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ce,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 page_4ce(Cpu& c){return body_4ce(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ce(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ce005:goto L4ce005;
case 0x4ce00a:c.instructions+=2;goto B4ce00a;
case 0x4ce00d:c.instructions+=1;goto B4ce00d;
case 0x4ce00f:goto L4ce00f;
case 0x4ce014:c.instructions+=1;goto B4ce014;
case 0x4ce016:goto L4ce016;
case 0x4ce01b:c.instructions+=1;goto B4ce01b;
case 0x4ce020:goto L4ce020;
case 0x4ce023:c.instructions+=2;goto B4ce023;
case 0x4ce026:c.instructions+=1;goto B4ce026;
case 0x4ce02b:goto L4ce02b;
case 0x4ce031:c.instructions+=1;goto B4ce031;
case 0x4ce036:goto L4ce036;
case 0x4ce038:c.instructions+=3;goto B4ce038;
case 0x4ce03a:c.instructions+=2;goto B4ce03a;
case 0x4ce03c:c.instructions+=1;goto B4ce03c;
case 0x4ce03e:goto L4ce03e;
case 0x4ce040:goto L4ce040;
case 0x4ce043:c.instructions+=2;goto B4ce043;
case 0x4ce045:c.instructions+=1;goto B4ce045;
case 0x4ce047:goto L4ce047;
case 0x4ce04a:c.instructions+=1;goto B4ce04a;
case 0x4ce04c:goto L4ce04c;
case 0x4ce053:goto L4ce053;
case 0x4ce055:c.instructions+=1;goto B4ce055;
case 0x4ce057:goto L4ce057;
case 0x4ce059:c.instructions+=2;goto B4ce059;
case 0x4ce05b:c.instructions+=1;goto B4ce05b;
case 0x4ce05d:goto L4ce05d;
case 0x4ce05f:goto L4ce05f;
case 0x4ce061:c.instructions+=3;goto B4ce061;
case 0x4ce063:c.instructions+=2;goto B4ce063;
case 0x4ce066:c.instructions+=1;goto B4ce066;
case 0x4ce068:goto L4ce068;
case 0x4ce06b:c.instructions+=2;goto B4ce06b;
case 0x4ce06d:c.instructions+=1;goto B4ce06d;
case 0x4ce06f:goto L4ce06f;
case 0x4ce074:c.instructions+=2;goto B4ce074;
case 0x4ce077:c.instructions+=1;goto B4ce077;
case 0x4ce079:goto L4ce079;
case 0x4ce07e:c.instructions+=1;goto B4ce07e;
case 0x4ce080:goto L4ce080;
case 0x4ce082:goto L4ce082;
case 0x4ce084:c.instructions+=1;goto B4ce084;
case 0x4ce086:goto L4ce086;
case 0x4ce089:c.instructions+=3;goto B4ce089;
case 0x4ce08c:c.instructions+=2;goto B4ce08c;
case 0x4ce08e:c.instructions+=1;goto B4ce08e;
case 0x4ce090:goto L4ce090;
case 0x4ce093:c.instructions+=1;goto B4ce093;
case 0x4ce095:goto L4ce095;
case 0x4ce09c:goto L4ce09c;
case 0x4ce0a1:c.instructions+=1;goto B4ce0a1;
case 0x4ce0a6:goto L4ce0a6;
case 0x4ce0a9:c.instructions+=2;goto B4ce0a9;
case 0x4ce0ab:c.instructions+=1;goto B4ce0ab;
case 0x4ce0ad:goto L4ce0ad;
case 0x4ce0b2:c.instructions+=2;goto B4ce0b2;
case 0x4ce0b5:c.instructions+=1;goto B4ce0b5;
case 0x4ce0b7:goto L4ce0b7;
case 0x4ce0bc:c.instructions+=1;goto B4ce0bc;
case 0x4ce0be:goto L4ce0be;
case 0x4ce0c3:c.instructions+=1;goto B4ce0c3;
case 0x4ce0c8:goto L4ce0c8;
case 0x4ce0cb:c.instructions+=2;goto B4ce0cb;
case 0x4ce0ce:c.instructions+=1;goto B4ce0ce;
case 0x4ce0d0:goto L4ce0d0;
case 0x4ce0d6:goto L4ce0d6;
case 0x4ce0dd:goto L4ce0dd;
case 0x4ce0e0:c.instructions+=2;goto B4ce0e0;
case 0x4ce0e2:c.instructions+=1;goto B4ce0e2;
case 0x4ce0e7:goto L4ce0e7;
case 0x4ce0ea:c.instructions+=4;goto B4ce0ea;
case 0x4ce0ed:c.instructions+=3;goto B4ce0ed;
case 0x4ce0ef:c.instructions+=2;goto B4ce0ef;
case 0x4ce0f0:c.instructions+=1;goto B4ce0f0;
case 0x4ce0f2:goto L4ce0f2;
case 0x4ce0f5:c.instructions+=1;goto B4ce0f5;
case 0x4ce0f7:goto L4ce0f7;
case 0x4ce0fe:goto L4ce0fe;
case 0x4ce0ff:c.instructions+=2;goto B4ce0ff;
case 0x4ce101:c.instructions+=1;goto B4ce101;
case 0x4ce106:goto L4ce106;
case 0x4ce109:c.instructions+=3;goto B4ce109;
case 0x4ce10c:c.instructions+=2;goto B4ce10c;
case 0x4ce10e:c.instructions+=1;goto B4ce10e;
case 0x4ce110:goto L4ce110;
case 0x4ce113:c.instructions+=1;goto B4ce113;
case 0x4ce115:goto L4ce115;
case 0x4ce11c:goto L4ce11c;
case 0x4ce121:c.instructions+=1;goto B4ce121;
case 0x4ce126:goto L4ce126;
case 0x4ce129:c.instructions+=2;goto B4ce129;
case 0x4ce12b:c.instructions+=1;goto B4ce12b;
case 0x4ce12d:goto L4ce12d;
case 0x4ce132:c.instructions+=2;goto B4ce132;
case 0x4ce135:c.instructions+=1;goto B4ce135;
case 0x4ce137:goto L4ce137;
case 0x4ce13c:c.instructions+=1;goto B4ce13c;
case 0x4ce13e:goto L4ce13e;
case 0x4ce143:c.instructions+=1;goto B4ce143;
case 0x4ce148:goto L4ce148;
case 0x4ce14b:c.instructions+=6;goto B4ce14b;
case 0x4ce14c:c.instructions+=5;goto B4ce14c;
case 0x4ce14f:c.instructions+=4;goto B4ce14f;
case 0x4ce150:c.instructions+=3;goto B4ce150;
case 0x4ce151:c.instructions+=2;goto B4ce151;
case 0x4ce152:c.instructions+=1;goto B4ce152;
case 0x4ce153:goto L4ce153;
case 0x4ce15a:c.instructions+=1;goto B4ce15a;
case 0x4ce160:goto L4ce160;
case 0x4ce161:c.instructions+=4;goto B4ce161;
case 0x4ce162:c.instructions+=3;goto B4ce162;
case 0x4ce163:c.instructions+=2;goto B4ce163;
case 0x4ce164:c.instructions+=1;goto B4ce164;
case 0x4ce170:goto L4ce170;
case 0x4ce176:c.instructions+=6;goto B4ce176;
case 0x4ce177:c.instructions+=5;goto B4ce177;
case 0x4ce179:c.instructions+=4;goto B4ce179;
case 0x4ce17c:c.instructions+=3;goto B4ce17c;
case 0x4ce17f:c.instructions+=2;goto B4ce17f;
case 0x4ce181:c.instructions+=1;goto B4ce181;
case 0x4ce183:goto L4ce183;
case 0x4ce186:c.instructions+=1;goto B4ce186;
case 0x4ce188:goto L4ce188;
case 0x4ce18f:goto L4ce18f;
case 0x4ce192:c.instructions+=5;goto B4ce192;
case 0x4ce193:c.instructions+=4;goto B4ce193;
case 0x4ce196:c.instructions+=3;goto B4ce196;
case 0x4ce197:c.instructions+=2;goto B4ce197;
case 0x4ce198:c.instructions+=1;goto B4ce198;
case 0x4ce19d:goto L4ce19d;
case 0x4ce1a0:c.instructions+=4;goto B4ce1a0;
case 0x4ce1a1:c.instructions+=3;goto B4ce1a1;
case 0x4ce1a6:c.instructions+=2;goto B4ce1a6;
case 0x4ce1a7:c.instructions+=1;goto B4ce1a7;
case 0x4ce1ac:goto L4ce1ac;
case 0x4ce1af:c.instructions+=2;goto B4ce1af;
case 0x4ce1b0:c.instructions+=1;goto B4ce1b0;
case 0x4ce1b5:goto L4ce1b5;
case 0x4ce1b8:c.instructions+=3;goto B4ce1b8;
case 0x4ce1bd:c.instructions+=2;goto B4ce1bd;
case 0x4ce1be:c.instructions+=1;goto B4ce1be;
case 0x4ce1c3:goto L4ce1c3;
case 0x4ce1c4:c.instructions+=1;goto B4ce1c4;
case 0x4ce1c9:goto L4ce1c9;
case 0x4ce1cc:c.instructions+=5;goto B4ce1cc;
case 0x4ce1cf:c.instructions+=4;goto B4ce1cf;
case 0x4ce1d2:c.instructions+=3;goto B4ce1d2;
case 0x4ce1d4:c.instructions+=2;goto B4ce1d4;
case 0x4ce1d9:c.instructions+=1;goto B4ce1d9;
case 0x4ce1db:goto L4ce1db;
case 0x4ce1de:c.instructions+=1;goto B4ce1de;
case 0x4ce1e0:goto L4ce1e0;
case 0x4ce1e2:c.instructions+=1;goto B4ce1e2;
case 0x4ce1e4:goto L4ce1e4;
case 0x4ce1e6:c.instructions+=3;goto B4ce1e6;
case 0x4ce1e7:c.instructions+=2;goto B4ce1e7;
case 0x4ce1e9:c.instructions+=1;goto B4ce1e9;
case 0x4ce1eb:goto L4ce1eb;
case 0x4ce1ed:goto L4ce1ed;
case 0x4ce1ee:c.instructions+=6;goto B4ce1ee;
case 0x4ce1ef:c.instructions+=5;goto B4ce1ef;
case 0x4ce1f5:c.instructions+=4;goto B4ce1f5;
case 0x4ce1f6:c.instructions+=3;goto B4ce1f6;
case 0x4ce1f8:c.instructions+=2;goto B4ce1f8;
case 0x4ce1fe:c.instructions+=1;goto B4ce1fe;
case 0x4ce203:goto L4ce203;
case 0x4ce206:c.instructions+=2;goto B4ce206;
case 0x4ce20b:c.instructions+=1;goto B4ce20b;
case 0x4ce210:goto L4ce210;
case 0x4ce211:c.instructions+=2;goto B4ce211;
case 0x4ce212:c.instructions+=1;goto B4ce212;
case 0x4ce217:goto L4ce217;
case 0x4ce21a:c.instructions+=3;goto B4ce21a;
case 0x4ce21f:c.instructions+=2;goto B4ce21f;
case 0x4ce223:c.instructions+=1;goto B4ce223;
case 0x4ce228:goto L4ce228;
case 0x4ce229:c.instructions+=2;goto B4ce229;
case 0x4ce22a:c.instructions+=1;goto B4ce22a;
case 0x4ce22f:goto L4ce22f;
case 0x4ce231:c.instructions+=5;goto B4ce231;
case 0x4ce233:c.instructions+=4;goto B4ce233;
case 0x4ce236:c.instructions+=3;goto B4ce236;
case 0x4ce239:c.instructions+=2;goto B4ce239;
case 0x4ce23b:c.instructions+=1;goto B4ce23b;
case 0x4ce23d:goto L4ce23d;
case 0x4ce243:c.instructions+=2;goto B4ce243;
case 0x4ce245:c.instructions+=1;goto B4ce245;
case 0x4ce24b:goto L4ce24b;
case 0x4ce24e:c.instructions+=3;goto B4ce24e;
case 0x4ce253:c.instructions+=2;goto B4ce253;
case 0x4ce254:c.instructions+=1;goto B4ce254;
case 0x4ce259:goto L4ce259;
case 0x4ce25a:c.instructions+=1;goto B4ce25a;
case 0x4ce25f:goto L4ce25f;
case 0x4ce266:c.instructions+=1;goto B4ce266;
case 0x4ce26b:goto L4ce26b;
case 0x4ce26e:c.instructions+=2;goto B4ce26e;
case 0x4ce274:c.instructions+=1;goto B4ce274;
case 0x4ce276:goto L4ce276;
case 0x4ce278:c.instructions+=1;goto B4ce278;
case 0x4ce27e:goto L4ce27e;
case 0x4ce281:c.instructions+=3;goto B4ce281;
case 0x4ce286:c.instructions+=2;goto B4ce286;
case 0x4ce287:c.instructions+=1;goto B4ce287;
case 0x4ce28c:goto L4ce28c;
case 0x4ce28d:c.instructions+=1;goto B4ce28d;
case 0x4ce292:goto L4ce292;
case 0x4ce299:c.instructions+=1;goto B4ce299;
case 0x4ce29e:goto L4ce29e;
case 0x4ce2a0:c.instructions+=1;goto B4ce2a0;
case 0x4ce2a2:goto L4ce2a2;
case 0x4ce2a5:c.instructions+=3;goto B4ce2a5;
case 0x4ce2aa:c.instructions+=2;goto B4ce2aa;
case 0x4ce2ab:c.instructions+=1;goto B4ce2ab;
case 0x4ce2b0:goto L4ce2b0;
case 0x4ce2b1:c.instructions+=1;goto B4ce2b1;
case 0x4ce2b6:goto L4ce2b6;
case 0x4ce2bd:c.instructions+=1;goto B4ce2bd;
case 0x4ce2bf:goto L4ce2bf;
case 0x4ce2c5:c.instructions+=2;goto B4ce2c5;
case 0x4ce2c7:c.instructions+=1;goto B4ce2c7;
case 0x4ce2c9:goto L4ce2c9;
case 0x4ce2cc:c.instructions+=3;goto B4ce2cc;
case 0x4ce2d1:c.instructions+=2;goto B4ce2d1;
case 0x4ce2d2:c.instructions+=1;goto B4ce2d2;
case 0x4ce2d7:goto L4ce2d7;
case 0x4ce2d8:c.instructions+=1;goto B4ce2d8;
case 0x4ce2dd:goto L4ce2dd;
case 0x4ce2e4:goto L4ce2e4;
case 0x4ce2e7:goto L4ce2e7;
case 0x4ce2eb:c.instructions+=3;goto B4ce2eb;
case 0x4ce2f0:c.instructions+=2;goto B4ce2f0;
case 0x4ce2f1:c.instructions+=1;goto B4ce2f1;
case 0x4ce2f6:goto L4ce2f6;
case 0x4ce2f9:c.instructions+=2;goto B4ce2f9;
case 0x4ce2fb:c.instructions+=1;goto B4ce2fb;
case 0x4ce2fd:goto L4ce2fd;
case 0x4ce2ff:c.instructions+=3;goto B4ce2ff;
case 0x4ce304:c.instructions+=2;goto B4ce304;
case 0x4ce305:c.instructions+=1;goto B4ce305;
case 0x4ce30a:goto L4ce30a;
case 0x4ce30d:goto L4ce30d;
case 0x4ce312:c.instructions+=2;goto B4ce312;
case 0x4ce313:c.instructions+=1;goto B4ce313;
case 0x4ce318:goto L4ce318;
case 0x4ce31b:c.instructions+=2;goto B4ce31b;
case 0x4ce31d:c.instructions+=1;goto B4ce31d;
case 0x4ce31f:goto L4ce31f;
case 0x4ce321:c.instructions+=3;goto B4ce321;
case 0x4ce326:c.instructions+=2;goto B4ce326;
case 0x4ce327:c.instructions+=1;goto B4ce327;
case 0x4ce32c:goto L4ce32c;
case 0x4ce32f:goto L4ce32f;
case 0x4ce331:c.instructions+=1;goto B4ce331;
case 0x4ce336:goto L4ce336;
case 0x4ce33c:c.instructions+=7;goto B4ce33c;
case 0x4ce33f:c.instructions+=6;goto B4ce33f;
case 0x4ce342:c.instructions+=5;goto B4ce342;
case 0x4ce344:c.instructions+=4;goto B4ce344;
case 0x4ce347:c.instructions+=3;goto B4ce347;
case 0x4ce349:c.instructions+=2;goto B4ce349;
case 0x4ce34a:c.instructions+=1;goto B4ce34a;
case 0x4ce34c:goto L4ce34c;
case 0x4ce34f:c.instructions+=2;goto B4ce34f;
case 0x4ce353:c.instructions+=1;goto B4ce353;
case 0x4ce355:goto L4ce355;
case 0x4ce35b:c.instructions+=1;goto B4ce35b;
case 0x4ce35f:goto L4ce35f;
case 0x4ce361:c.instructions+=4;goto B4ce361;
case 0x4ce365:c.instructions+=3;goto B4ce365;
case 0x4ce36b:c.instructions+=2;goto B4ce36b;
case 0x4ce36f:c.instructions+=1;goto B4ce36f;
case 0x4ce371:goto L4ce371;
case 0x4ce375:c.instructions+=2;goto B4ce375;
case 0x4ce37b:c.instructions+=1;goto B4ce37b;
case 0x4ce37f:goto L4ce37f;
case 0x4ce382:c.instructions+=6;goto B4ce382;
case 0x4ce384:c.instructions+=5;goto B4ce384;
case 0x4ce386:c.instructions+=4;goto B4ce386;
case 0x4ce38b:c.instructions+=3;goto B4ce38b;
case 0x4ce390:c.instructions+=2;goto B4ce390;
case 0x4ce391:c.instructions+=1;goto B4ce391;
case 0x4ce396:goto L4ce396;
case 0x4ce39a:c.instructions+=8;goto B4ce39a;
case 0x4ce39d:c.instructions+=7;goto B4ce39d;
case 0x4ce39e:c.instructions+=6;goto B4ce39e;
case 0x4ce3a1:c.instructions+=5;goto B4ce3a1;
case 0x4ce3a4:c.instructions+=4;goto B4ce3a4;
case 0x4ce3a9:c.instructions+=3;goto B4ce3a9;
case 0x4ce3ae:c.instructions+=2;goto B4ce3ae;
case 0x4ce3af:c.instructions+=1;goto B4ce3af;
case 0x4ce3b4:goto L4ce3b4;
case 0x4ce3b9:c.instructions+=4;goto B4ce3b9;
case 0x4ce3bc:c.instructions+=3;goto B4ce3bc;
case 0x4ce3bf:c.instructions+=2;goto B4ce3bf;
case 0x4ce3c0:c.instructions+=1;goto B4ce3c0;
case 0x4ce3c2:goto L4ce3c2;
case 0x4ce3c7:c.instructions+=2;goto B4ce3c7;
case 0x4ce3cc:c.instructions+=1;goto B4ce3cc;
case 0x4ce3ce:goto L4ce3ce;
case 0x4ce3d3:goto L4ce3d3;
case 0x4ce3d6:c.instructions+=1;goto B4ce3d6;
case 0x4ce3d8:goto L4ce3d8;
case 0x4ce3de:c.instructions+=3;goto B4ce3de;
case 0x4ce3e3:c.instructions+=2;goto B4ce3e3;
case 0x4ce3e4:c.instructions+=1;goto B4ce3e4;
case 0x4ce3e9:goto L4ce3e9;
case 0x4ce3ec:c.instructions+=4;goto B4ce3ec;
case 0x4ce3ef:c.instructions+=3;goto B4ce3ef;
case 0x4ce3f2:c.instructions+=2;goto B4ce3f2;
case 0x4ce3f4:c.instructions+=1;goto B4ce3f4;
case 0x4ce3f6:goto L4ce3f6;
case 0x4ce3f9:c.instructions+=1;goto B4ce3f9;
case 0x4ce3fb:goto L4ce3fb;
case 0x4ce402:goto L4ce402;
case 0x4ce405:c.instructions+=4;goto B4ce405;
case 0x4ce406:c.instructions+=3;goto B4ce406;
case 0x4ce407:c.instructions+=2;goto B4ce407;
case 0x4ce40c:c.instructions+=1;goto B4ce40c;
case 0x4ce411:goto L4ce411;
case 0x4ce414:c.instructions+=5;goto B4ce414;
case 0x4ce415:c.instructions+=4;goto B4ce415;
case 0x4ce41a:c.instructions+=3;goto B4ce41a;
case 0x4ce41f:c.instructions+=2;goto B4ce41f;
case 0x4ce420:c.instructions+=1;goto B4ce420;
case 0x4ce422:goto L4ce422;
case 0x4ce425:c.instructions+=1;goto B4ce425;
case 0x4ce427:goto L4ce427;
case 0x4ce42a:c.instructions+=1;goto B4ce42a;
case 0x4ce42c:goto L4ce42c;
case 0x4ce432:c.instructions+=3;goto B4ce432;
case 0x4ce437:c.instructions+=2;goto B4ce437;
case 0x4ce438:c.instructions+=1;goto B4ce438;
case 0x4ce43a:goto L4ce43a;
case 0x4ce440:c.instructions+=2;goto B4ce440;
case 0x4ce445:c.instructions+=1;goto B4ce445;
case 0x4ce446:goto L4ce446;
case 0x4ce44b:goto L4ce44b;
case 0x4ce44e:c.instructions+=4;goto B4ce44e;
case 0x4ce451:c.instructions+=3;goto B4ce451;
case 0x4ce454:c.instructions+=2;goto B4ce454;
case 0x4ce456:c.instructions+=1;goto B4ce456;
case 0x4ce458:goto L4ce458;
case 0x4ce45b:c.instructions+=1;goto B4ce45b;
case 0x4ce45d:goto L4ce45d;
case 0x4ce464:goto L4ce464;
case 0x4ce467:c.instructions+=4;goto B4ce467;
case 0x4ce468:c.instructions+=3;goto B4ce468;
case 0x4ce469:c.instructions+=2;goto B4ce469;
case 0x4ce46e:c.instructions+=1;goto B4ce46e;
case 0x4ce473:goto L4ce473;
case 0x4ce477:c.instructions+=5;goto B4ce477;
case 0x4ce479:c.instructions+=4;goto B4ce479;
case 0x4ce47d:c.instructions+=3;goto B4ce47d;
case 0x4ce47e:c.instructions+=2;goto B4ce47e;
case 0x4ce482:c.instructions+=1;goto B4ce482;
case 0x4ce487:goto L4ce487;
case 0x4ce48a:c.instructions+=5;goto B4ce48a;
case 0x4ce48e:c.instructions+=4;goto B4ce48e;
case 0x4ce48f:c.instructions+=3;goto B4ce48f;
case 0x4ce494:c.instructions+=2;goto B4ce494;
case 0x4ce499:c.instructions+=1;goto B4ce499;
case 0x4ce49a:goto L4ce49a;
case 0x4ce49f:goto L4ce49f;
case 0x4ce4a2:c.instructions+=5;goto B4ce4a2;
case 0x4ce4a7:c.instructions+=4;goto B4ce4a7;
case 0x4ce4ab:c.instructions+=3;goto B4ce4ab;
case 0x4ce4b0:c.instructions+=2;goto B4ce4b0;
case 0x4ce4b1:c.instructions+=1;goto B4ce4b1;
case 0x4ce4b6:goto L4ce4b6;
case 0x4ce4b9:c.instructions+=4;goto B4ce4b9;
case 0x4ce4bc:c.instructions+=3;goto B4ce4bc;
case 0x4ce4bf:c.instructions+=2;goto B4ce4bf;
case 0x4ce4c1:c.instructions+=1;goto B4ce4c1;
case 0x4ce4c3:goto L4ce4c3;
case 0x4ce4c6:c.instructions+=1;goto B4ce4c6;
case 0x4ce4c8:goto L4ce4c8;
case 0x4ce4cf:goto L4ce4cf;
case 0x4ce4d2:c.instructions+=3;goto B4ce4d2;
case 0x4ce4d3:c.instructions+=2;goto B4ce4d3;
case 0x4ce4d8:c.instructions+=1;goto B4ce4d8;
case 0x4ce4dd:goto L4ce4dd;
case 0x4ce4de:c.instructions+=1;goto B4ce4de;
case 0x4ce4e3:goto L4ce4e3;
case 0x4ce4e4:c.instructions+=5;goto B4ce4e4;
case 0x4ce4e8:c.instructions+=4;goto B4ce4e8;
case 0x4ce4e9:c.instructions+=3;goto B4ce4e9;
case 0x4ce4ee:c.instructions+=2;goto B4ce4ee;
case 0x4ce4ef:c.instructions+=1;goto B4ce4ef;
case 0x4ce4f4:goto L4ce4f4;
case 0x4ce4f7:c.instructions+=3;goto B4ce4f7;
case 0x4ce4f8:c.instructions+=2;goto B4ce4f8;
case 0x4ce4fe:c.instructions+=1;goto B4ce4fe;
case 0x4ce500:goto L4ce500;
case 0x4ce503:c.instructions+=8;goto B4ce503;
case 0x4ce504:c.instructions+=7;goto B4ce504;
case 0x4ce505:c.instructions+=6;goto B4ce505;
case 0x4ce506:c.instructions+=5;goto B4ce506;
case 0x4ce507:c.instructions+=4;goto B4ce507;
case 0x4ce509:c.instructions+=3;goto B4ce509;
case 0x4ce50d:c.instructions+=2;goto B4ce50d;
case 0x4ce50f:c.instructions+=1;goto B4ce50f;
case 0x4ce512:goto L4ce512;
case 0x4ce513:c.instructions+=2;goto B4ce513;
case 0x4ce515:c.instructions+=1;goto B4ce515;
case 0x4ce51a:goto L4ce51a;
case 0x4ce51c:c.instructions+=1;goto B4ce51c;
case 0x4ce521:goto L4ce521;
case 0x4ce524:c.instructions+=1;goto B4ce524;
case 0x4ce526:goto L4ce526;
case 0x4ce528:c.instructions+=2;goto B4ce528;
case 0x4ce52a:c.instructions+=1;goto B4ce52a;
case 0x4ce52e:goto L4ce52e;
case 0x4ce530:goto L4ce530;
case 0x4ce534:c.instructions+=5;goto B4ce534;
case 0x4ce538:c.instructions+=4;goto B4ce538;
case 0x4ce539:c.instructions+=3;goto B4ce539;
case 0x4ce53c:c.instructions+=2;goto B4ce53c;
case 0x4ce541:c.instructions+=1;goto B4ce541;
case 0x4ce546:goto L4ce546;
case 0x4ce54a:c.instructions+=1;goto B4ce54a;
case 0x4ce54c:goto L4ce54c;
case 0x4ce54f:c.instructions+=5;goto B4ce54f;
case 0x4ce552:c.instructions+=4;goto B4ce552;
case 0x4ce553:c.instructions+=3;goto B4ce553;
case 0x4ce558:c.instructions+=2;goto B4ce558;
case 0x4ce559:c.instructions+=1;goto B4ce559;
case 0x4ce55e:goto L4ce55e;
case 0x4ce561:goto L4ce561;
case 0x4ce562:c.instructions+=3;goto B4ce562;
case 0x4ce565:c.instructions+=2;goto B4ce565;
case 0x4ce568:c.instructions+=1;goto B4ce568;
case 0x4ce56a:goto L4ce56a;
case 0x4ce56d:c.instructions+=2;goto B4ce56d;
case 0x4ce572:c.instructions+=1;goto B4ce572;
case 0x4ce577:goto L4ce577;
case 0x4ce579:c.instructions+=1;goto B4ce579;
case 0x4ce57e:goto L4ce57e;
case 0x4ce57f:c.instructions+=5;goto B4ce57f;
case 0x4ce580:c.instructions+=4;goto B4ce580;
case 0x4ce581:c.instructions+=3;goto B4ce581;
case 0x4ce582:c.instructions+=2;goto B4ce582;
case 0x4ce585:c.instructions+=1;goto B4ce585;
case 0x4ce590:goto L4ce590;
case 0x4ce591:c.instructions+=10;goto B4ce591;
case 0x4ce593:c.instructions+=9;goto B4ce593;
case 0x4ce596:c.instructions+=8;goto B4ce596;
case 0x4ce59c:c.instructions+=7;goto B4ce59c;
case 0x4ce59e:c.instructions+=6;goto B4ce59e;
case 0x4ce5a0:c.instructions+=5;goto B4ce5a0;
case 0x4ce5a3:c.instructions+=4;goto B4ce5a3;
case 0x4ce5a5:c.instructions+=3;goto B4ce5a5;
case 0x4ce5a8:c.instructions+=2;goto B4ce5a8;
case 0x4ce5ab:c.instructions+=1;goto B4ce5ab;
case 0x4ce5ad:goto L4ce5ad;
case 0x4ce5b0:c.instructions+=1;goto B4ce5b0;
case 0x4ce5b3:goto L4ce5b3;
case 0x4ce5b5:c.instructions+=1;goto B4ce5b5;
case 0x4ce5ba:goto L4ce5ba;
case 0x4ce5bd:c.instructions+=3;goto B4ce5bd;
case 0x4ce5bf:c.instructions+=2;goto B4ce5bf;
case 0x4ce5c0:c.instructions+=1;goto B4ce5c0;
case 0x4ce5c5:goto L4ce5c5;
case 0x4ce5c8:c.instructions+=2;goto B4ce5c8;
case 0x4ce5c9:c.instructions+=1;goto B4ce5c9;
case 0x4ce5d0:goto L4ce5d0;
case 0x4ce5d1:c.instructions+=7;goto B4ce5d1;
case 0x4ce5d3:c.instructions+=6;goto B4ce5d3;
case 0x4ce5d6:c.instructions+=5;goto B4ce5d6;
case 0x4ce5dc:c.instructions+=4;goto B4ce5dc;
case 0x4ce5df:c.instructions+=3;goto B4ce5df;
case 0x4ce5e2:c.instructions+=2;goto B4ce5e2;
case 0x4ce5e5:c.instructions+=1;goto B4ce5e5;
case 0x4ce5e7:goto L4ce5e7;
case 0x4ce5eb:goto L4ce5eb;
case 0x4ce5ed:c.instructions+=1;goto B4ce5ed;
case 0x4ce5f2:goto L4ce5f2;
case 0x4ce5f5:c.instructions+=3;goto B4ce5f5;
case 0x4ce5f7:c.instructions+=2;goto B4ce5f7;
case 0x4ce5f8:c.instructions+=1;goto B4ce5f8;
case 0x4ce5fd:goto L4ce5fd;
case 0x4ce600:c.instructions+=2;goto B4ce600;
case 0x4ce601:c.instructions+=1;goto B4ce601;
case 0x4ce610:goto L4ce610;
case 0x4ce611:c.instructions+=7;goto B4ce611;
case 0x4ce613:c.instructions+=6;goto B4ce613;
case 0x4ce616:c.instructions+=5;goto B4ce616;
case 0x4ce61c:c.instructions+=4;goto B4ce61c;
case 0x4ce61f:c.instructions+=3;goto B4ce61f;
case 0x4ce621:c.instructions+=2;goto B4ce621;
case 0x4ce624:c.instructions+=1;goto B4ce624;
case 0x4ce626:goto L4ce626;
case 0x4ce62a:goto L4ce62a;
case 0x4ce62c:c.instructions+=1;goto B4ce62c;
case 0x4ce631:goto L4ce631;
case 0x4ce634:c.instructions+=3;goto B4ce634;
case 0x4ce636:c.instructions+=2;goto B4ce636;
case 0x4ce637:c.instructions+=1;goto B4ce637;
case 0x4ce63c:goto L4ce63c;
case 0x4ce63f:c.instructions+=2;goto B4ce63f;
case 0x4ce640:c.instructions+=1;goto B4ce640;
case 0x4ce650:goto L4ce650;
case 0x4ce652:c.instructions+=7;goto B4ce652;
case 0x4ce657:c.instructions+=6;goto B4ce657;
case 0x4ce65d:c.instructions+=5;goto B4ce65d;
case 0x4ce65e:c.instructions+=4;goto B4ce65e;
case 0x4ce665:c.instructions+=3;goto B4ce665;
case 0x4ce666:c.instructions+=2;goto B4ce666;
case 0x4ce668:c.instructions+=1;goto B4ce668;
case 0x4ce66d:goto L4ce66d;
case 0x4ce670:c.instructions+=4;goto B4ce670;
case 0x4ce674:c.instructions+=3;goto B4ce674;
case 0x4ce676:c.instructions+=2;goto B4ce676;
case 0x4ce67e:c.instructions+=1;goto B4ce67e;
case 0x4ce680:goto L4ce680;
case 0x4ce684:c.instructions+=3;goto B4ce684;
case 0x4ce685:c.instructions+=2;goto B4ce685;
case 0x4ce687:c.instructions+=1;goto B4ce687;
case 0x4ce68c:goto L4ce68c;
case 0x4ce690:c.instructions+=3;goto B4ce690;
case 0x4ce697:c.instructions+=2;goto B4ce697;
case 0x4ce69a:c.instructions+=1;goto B4ce69a;
case 0x4ce69b:goto L4ce69b;
case 0x4ce69f:c.instructions+=4;goto B4ce69f;
case 0x4ce6a1:c.instructions+=3;goto B4ce6a1;
case 0x4ce6a8:c.instructions+=2;goto B4ce6a8;
case 0x4ce6ab:c.instructions+=1;goto B4ce6ab;
case 0x4ce6b0:goto L4ce6b0;
case 0x4ce6b2:c.instructions+=7;goto B4ce6b2;
case 0x4ce6b7:c.instructions+=6;goto B4ce6b7;
case 0x4ce6bd:c.instructions+=5;goto B4ce6bd;
case 0x4ce6be:c.instructions+=4;goto B4ce6be;
case 0x4ce6c5:c.instructions+=3;goto B4ce6c5;
case 0x4ce6c6:c.instructions+=2;goto B4ce6c6;
case 0x4ce6c8:c.instructions+=1;goto B4ce6c8;
case 0x4ce6cd:goto L4ce6cd;
case 0x4ce6d0:c.instructions+=4;goto B4ce6d0;
case 0x4ce6d4:c.instructions+=3;goto B4ce6d4;
case 0x4ce6d6:c.instructions+=2;goto B4ce6d6;
case 0x4ce6de:c.instructions+=1;goto B4ce6de;
case 0x4ce6e0:goto L4ce6e0;
case 0x4ce6e4:c.instructions+=3;goto B4ce6e4;
case 0x4ce6e5:c.instructions+=2;goto B4ce6e5;
case 0x4ce6e7:c.instructions+=1;goto B4ce6e7;
case 0x4ce6ec:goto L4ce6ec;
case 0x4ce6f0:c.instructions+=3;goto B4ce6f0;
case 0x4ce6f7:c.instructions+=2;goto B4ce6f7;
case 0x4ce6fa:c.instructions+=1;goto B4ce6fa;
case 0x4ce6fb:goto L4ce6fb;
case 0x4ce6ff:c.instructions+=4;goto B4ce6ff;
case 0x4ce701:c.instructions+=3;goto B4ce701;
case 0x4ce708:c.instructions+=2;goto B4ce708;
case 0x4ce70b:c.instructions+=1;goto B4ce70b;
case 0x4ce710:goto L4ce710;
case 0x4ce712:c.instructions+=11;goto B4ce712;
case 0x4ce717:c.instructions+=10;goto B4ce717;
case 0x4ce71d:c.instructions+=9;goto B4ce71d;
case 0x4ce71e:c.instructions+=8;goto B4ce71e;
case 0x4ce725:c.instructions+=7;goto B4ce725;
case 0x4ce726:c.instructions+=6;goto B4ce726;
case 0x4ce72a:c.instructions+=5;goto B4ce72a;
case 0x4ce72b:c.instructions+=4;goto B4ce72b;
case 0x4ce72d:c.instructions+=3;goto B4ce72d;
case 0x4ce72e:c.instructions+=2;goto B4ce72e;
case 0x4ce732:c.instructions+=1;goto B4ce732;
case 0x4ce737:goto L4ce737;
case 0x4ce739:c.instructions+=9;goto B4ce739;
case 0x4ce73b:c.instructions+=8;goto B4ce73b;
case 0x4ce73f:c.instructions+=7;goto B4ce73f;
case 0x4ce745:c.instructions+=6;goto B4ce745;
case 0x4ce748:c.instructions+=5;goto B4ce748;
case 0x4ce74b:c.instructions+=4;goto B4ce74b;
case 0x4ce74e:c.instructions+=3;goto B4ce74e;
case 0x4ce751:c.instructions+=2;goto B4ce751;
case 0x4ce754:c.instructions+=1;goto B4ce754;
case 0x4ce759:goto L4ce759;
case 0x4ce75d:c.instructions+=5;goto B4ce75d;
case 0x4ce75f:c.instructions+=4;goto B4ce75f;
case 0x4ce760:c.instructions+=3;goto B4ce760;
case 0x4ce767:c.instructions+=2;goto B4ce767;
case 0x4ce76a:c.instructions+=1;goto B4ce76a;
case 0x4ce770:goto L4ce770;
case 0x4ce771:c.instructions+=15;goto B4ce771;
case 0x4ce773:c.instructions+=14;goto B4ce773;
case 0x4ce775:c.instructions+=13;goto B4ce775;
case 0x4ce77a:c.instructions+=12;goto B4ce77a;
case 0x4ce780:c.instructions+=11;goto B4ce780;
case 0x4ce781:c.instructions+=10;goto B4ce781;
case 0x4ce788:c.instructions+=9;goto B4ce788;
case 0x4ce789:c.instructions+=8;goto B4ce789;
case 0x4ce78a:c.instructions+=7;goto B4ce78a;
case 0x4ce78b:c.instructions+=6;goto B4ce78b;
case 0x4ce78c:c.instructions+=5;goto B4ce78c;
case 0x4ce78f:c.instructions+=4;goto B4ce78f;
case 0x4ce791:c.instructions+=3;goto B4ce791;
case 0x4ce792:c.instructions+=2;goto B4ce792;
case 0x4ce795:c.instructions+=1;goto B4ce795;
case 0x4ce79a:goto L4ce79a;
case 0x4ce79c:c.instructions+=11;goto B4ce79c;
case 0x4ce7a2:c.instructions+=10;goto B4ce7a2;
case 0x4ce7a9:c.instructions+=9;goto B4ce7a9;
case 0x4ce7af:c.instructions+=8;goto B4ce7af;
case 0x4ce7b5:c.instructions+=7;goto B4ce7b5;
case 0x4ce7bb:c.instructions+=6;goto B4ce7bb;
case 0x4ce7c1:c.instructions+=5;goto B4ce7c1;
case 0x4ce7c7:c.instructions+=4;goto B4ce7c7;
case 0x4ce7ca:c.instructions+=3;goto B4ce7ca;
case 0x4ce7cb:c.instructions+=2;goto B4ce7cb;
case 0x4ce7ce:c.instructions+=1;goto B4ce7ce;
case 0x4ce7d3:goto L4ce7d3;
case 0x4ce7d9:c.instructions+=2;goto B4ce7d9;
case 0x4ce7db:c.instructions+=1;goto B4ce7db;
case 0x4ce7dd:goto L4ce7dd;
case 0x4ce7e0:c.instructions+=1;goto B4ce7e0;
case 0x4ce7e2:goto L4ce7e2;
case 0x4ce7e8:c.instructions+=1;goto B4ce7e8;
case 0x4ce7ea:goto L4ce7ea;
case 0x4ce7ef:goto L4ce7ef;
case 0x4ce7f4:c.instructions+=3;goto B4ce7f4;
case 0x4ce7f7:c.instructions+=2;goto B4ce7f7;
case 0x4ce7f8:c.instructions+=1;goto B4ce7f8;
case 0x4ce7fd:goto L4ce7fd;
case 0x4ce7fe:c.instructions+=2;goto B4ce7fe;
case 0x4ce7ff:c.instructions+=1;goto B4ce7ff;
case 0x4ce804:goto L4ce804;
case 0x4ce805:c.instructions+=1;goto B4ce805;
case 0x4ce80a:goto L4ce80a;
case 0x4ce810:c.instructions+=16;goto B4ce810;
case 0x4ce813:c.instructions+=15;goto B4ce813;
case 0x4ce818:c.instructions+=14;goto B4ce818;
case 0x4ce81b:c.instructions+=13;goto B4ce81b;
case 0x4ce81e:c.instructions+=12;goto B4ce81e;
case 0x4ce825:c.instructions+=11;goto B4ce825;
case 0x4ce82c:c.instructions+=10;goto B4ce82c;
case 0x4ce833:c.instructions+=9;goto B4ce833;
case 0x4ce83a:c.instructions+=8;goto B4ce83a;
case 0x4ce841:c.instructions+=7;goto B4ce841;
case 0x4ce848:c.instructions+=6;goto B4ce848;
case 0x4ce84f:c.instructions+=5;goto B4ce84f;
case 0x4ce856:c.instructions+=4;goto B4ce856;
case 0x4ce85c:c.instructions+=3;goto B4ce85c;
case 0x4ce862:c.instructions+=2;goto B4ce862;
case 0x4ce868:c.instructions+=1;goto B4ce868;
case 0x4ce86d:goto L4ce86d;
case 0x4ce870:c.instructions+=8;goto B4ce870;
case 0x4ce875:c.instructions+=7;goto B4ce875;
case 0x4ce876:c.instructions+=6;goto B4ce876;
case 0x4ce87c:c.instructions+=5;goto B4ce87c;
case 0x4ce882:c.instructions+=4;goto B4ce882;
case 0x4ce888:c.instructions+=3;goto B4ce888;
case 0x4ce88e:c.instructions+=2;goto B4ce88e;
case 0x4ce898:c.instructions+=1;goto B4ce898;
case 0x4ce89d:goto L4ce89d;
case 0x4ce8a3:c.instructions+=4;goto B4ce8a3;
case 0x4ce8a6:c.instructions+=3;goto B4ce8a6;
case 0x4ce8ab:c.instructions+=2;goto B4ce8ab;
case 0x4ce8ac:c.instructions+=1;goto B4ce8ac;
case 0x4ce8b1:goto L4ce8b1;
case 0x4ce8b7:c.instructions+=4;goto B4ce8b7;
case 0x4ce8ba:c.instructions+=3;goto B4ce8ba;
case 0x4ce8bf:c.instructions+=2;goto B4ce8bf;
case 0x4ce8c0:c.instructions+=1;goto B4ce8c0;
case 0x4ce8c5:goto L4ce8c5;
case 0x4ce8cb:c.instructions+=4;goto B4ce8cb;
case 0x4ce8ce:c.instructions+=3;goto B4ce8ce;
case 0x4ce8d3:c.instructions+=2;goto B4ce8d3;
case 0x4ce8d4:c.instructions+=1;goto B4ce8d4;
case 0x4ce8d9:goto L4ce8d9;
case 0x4ce8df:c.instructions+=4;goto B4ce8df;
case 0x4ce8e2:c.instructions+=3;goto B4ce8e2;
case 0x4ce8e7:c.instructions+=2;goto B4ce8e7;
case 0x4ce8e8:c.instructions+=1;goto B4ce8e8;
case 0x4ce8ed:goto L4ce8ed;
case 0x4ce8f3:c.instructions+=4;goto B4ce8f3;
case 0x4ce8f6:c.instructions+=3;goto B4ce8f6;
case 0x4ce8fb:c.instructions+=2;goto B4ce8fb;
case 0x4ce8fc:c.instructions+=1;goto B4ce8fc;
case 0x4ce901:goto L4ce901;
case 0x4ce907:c.instructions+=4;goto B4ce907;
case 0x4ce90a:c.instructions+=3;goto B4ce90a;
case 0x4ce90f:c.instructions+=2;goto B4ce90f;
case 0x4ce910:c.instructions+=1;goto B4ce910;
case 0x4ce915:goto L4ce915;
case 0x4ce918:c.instructions+=18;goto B4ce918;
case 0x4ce91e:c.instructions+=17;goto B4ce91e;
case 0x4ce928:c.instructions+=16;goto B4ce928;
case 0x4ce932:c.instructions+=15;goto B4ce932;
case 0x4ce93c:c.instructions+=14;goto B4ce93c;
case 0x4ce946:c.instructions+=13;goto B4ce946;
case 0x4ce950:c.instructions+=12;goto B4ce950;
case 0x4ce95a:c.instructions+=11;goto B4ce95a;
case 0x4ce960:c.instructions+=10;goto B4ce960;
case 0x4ce966:c.instructions+=9;goto B4ce966;
case 0x4ce96c:c.instructions+=8;goto B4ce96c;
case 0x4ce972:c.instructions+=7;goto B4ce972;
case 0x4ce978:c.instructions+=6;goto B4ce978;
case 0x4ce97e:c.instructions+=5;goto B4ce97e;
case 0x4ce988:c.instructions+=4;goto B4ce988;
case 0x4ce98e:c.instructions+=3;goto B4ce98e;
case 0x4ce98f:c.instructions+=2;goto B4ce98f;
case 0x4ce994:c.instructions+=1;goto B4ce994;
case 0x4ce999:goto L4ce999;
case 0x4ce99e:c.instructions+=1;goto B4ce99e;
case 0x4ce9a3:goto L4ce9a3;
case 0x4ce9a8:c.instructions+=1;goto B4ce9a8;
case 0x4ce9ad:goto L4ce9ad;
case 0x4ce9af:c.instructions+=2;goto B4ce9af;
case 0x4ce9b4:c.instructions+=1;goto B4ce9b4;
case 0x4ce9b9:goto L4ce9b9;
case 0x4ce9bb:c.instructions+=2;goto B4ce9bb;
case 0x4ce9c0:c.instructions+=1;goto B4ce9c0;
case 0x4ce9c5:goto L4ce9c5;
case 0x4ce9ca:c.instructions+=1;goto B4ce9ca;
case 0x4ce9cf:goto L4ce9cf;
case 0x4ce9d1:c.instructions+=2;goto B4ce9d1;
case 0x4ce9d8:c.instructions+=1;goto B4ce9d8;
case 0x4ce9dd:goto L4ce9dd;
case 0x4ce9e3:c.instructions+=7;goto B4ce9e3;
case 0x4ce9e8:c.instructions+=6;goto B4ce9e8;
case 0x4ce9ea:c.instructions+=5;goto B4ce9ea;
case 0x4ce9ec:c.instructions+=4;goto B4ce9ec;
case 0x4ce9ee:c.instructions+=3;goto B4ce9ee;
case 0x4ce9ef:c.instructions+=2;goto B4ce9ef;
case 0x4ce9f4:c.instructions+=1;goto B4ce9f4;
case 0x4ce9f9:goto L4ce9f9;
case 0x4ce9fc:c.instructions+=2;goto B4ce9fc;
case 0x4ce9fe:c.instructions+=1;goto B4ce9fe;
case 0x4cea00:goto L4cea00;
case 0x4cea05:goto L4cea05;
case 0x4cea07:goto L4cea07;
case 0x4cea09:c.instructions+=1;goto B4cea09;
case 0x4cea0b:goto L4cea0b;
case 0x4cea10:goto L4cea10;
case 0x4cea11:c.instructions+=5;goto B4cea11;
case 0x4cea12:c.instructions+=4;goto B4cea12;
case 0x4cea14:c.instructions+=3;goto B4cea14;
case 0x4cea17:c.instructions+=2;goto B4cea17;
case 0x4cea1a:c.instructions+=1;goto B4cea1a;
case 0x4cea1f:goto L4cea1f;
case 0x4cea22:c.instructions+=2;goto B4cea22;
case 0x4cea27:c.instructions+=1;goto B4cea27;
case 0x4cea2c:goto L4cea2c;
case 0x4cea2d:c.instructions+=2;goto B4cea2d;
case 0x4cea2e:c.instructions+=1;goto B4cea2e;
case 0x4cea33:goto L4cea33;
case 0x4cea34:c.instructions+=1;goto B4cea34;
case 0x4cea39:goto L4cea39;
case 0x4cea3e:c.instructions+=1;goto B4cea3e;
case 0x4cea43:goto L4cea43;
case 0x4cea44:c.instructions+=2;goto B4cea44;
case 0x4cea45:c.instructions+=1;goto B4cea45;
case 0x4cea4a:goto L4cea4a;
case 0x4cea4b:c.instructions+=1;goto B4cea4b;
case 0x4cea50:goto L4cea50;
case 0x4cea53:c.instructions+=2;goto B4cea53;
case 0x4cea55:c.instructions+=1;goto B4cea55;
case 0x4cea5a:goto L4cea5a;
case 0x4cea5d:c.instructions+=8;goto B4cea5d;
case 0x4cea5e:c.instructions+=7;goto B4cea5e;
case 0x4cea60:c.instructions+=6;goto B4cea60;
case 0x4cea61:c.instructions+=5;goto B4cea61;
case 0x4cea62:c.instructions+=4;goto B4cea62;
case 0x4cea69:c.instructions+=3;goto B4cea69;
case 0x4cea6b:c.instructions+=2;goto B4cea6b;
case 0x4cea6c:c.instructions+=1;goto B4cea6c;
case 0x4cea70:goto L4cea70;
case 0x4cea71:c.instructions+=5;goto B4cea71;
case 0x4cea75:c.instructions+=4;goto B4cea75;
case 0x4cea7a:c.instructions+=3;goto B4cea7a;
case 0x4cea7b:c.instructions+=2;goto B4cea7b;
case 0x4cea7d:c.instructions+=1;goto B4cea7d;
case 0x4cea83:goto L4cea83;
case 0x4cea89:goto L4cea89;
case 0x4cea8e:c.instructions+=1;goto B4cea8e;
case 0x4cea94:goto L4cea94;
case 0x4cea99:c.instructions+=1;goto B4cea99;
case 0x4cea9f:goto L4cea9f;
case 0x4ceaa2:c.instructions+=2;goto B4ceaa2;
case 0x4ceaa4:c.instructions+=1;goto B4ceaa4;
case 0x4ceaaa:goto L4ceaaa;
case 0x4ceaae:c.instructions+=6;goto B4ceaae;
case 0x4ceab1:c.instructions+=5;goto B4ceab1;
case 0x4ceab3:c.instructions+=4;goto B4ceab3;
case 0x4ceab8:c.instructions+=3;goto B4ceab8;
case 0x4ceab9:c.instructions+=2;goto B4ceab9;
case 0x4ceaba:c.instructions+=1;goto B4ceaba;
case 0x4ceabf:goto L4ceabf;
case 0x4ceac2:c.instructions+=7;goto B4ceac2;
case 0x4ceac6:c.instructions+=6;goto B4ceac6;
case 0x4ceac9:c.instructions+=5;goto B4ceac9;
case 0x4ceacb:c.instructions+=4;goto B4ceacb;
case 0x4cead0:c.instructions+=3;goto B4cead0;
case 0x4cead1:c.instructions+=2;goto B4cead1;
case 0x4cead2:c.instructions+=1;goto B4cead2;
case 0x4cead7:goto L4cead7;
case 0x4ceada:c.instructions+=6;goto B4ceada;
case 0x4ceade:c.instructions+=5;goto B4ceade;
case 0x4ceae1:c.instructions+=4;goto B4ceae1;
case 0x4ceae3:c.instructions+=3;goto B4ceae3;
case 0x4ceae4:c.instructions+=2;goto B4ceae4;
case 0x4ceae5:c.instructions+=1;goto B4ceae5;
case 0x4ceaea:goto L4ceaea;
case 0x4ceaed:c.instructions+=9;goto B4ceaed;
case 0x4ceaee:c.instructions+=8;goto B4ceaee;
case 0x4ceaf0:c.instructions+=7;goto B4ceaf0;
case 0x4ceaf3:c.instructions+=6;goto B4ceaf3;
case 0x4ceaf7:c.instructions+=5;goto B4ceaf7;
case 0x4ceafa:c.instructions+=4;goto B4ceafa;
case 0x4ceafc:c.instructions+=3;goto B4ceafc;
case 0x4ceafd:c.instructions+=2;goto B4ceafd;
case 0x4ceafe:c.instructions+=1;goto B4ceafe;
case 0x4ceb03:goto L4ceb03;
case 0x4ceb06:c.instructions+=5;goto B4ceb06;
case 0x4ceb0a:c.instructions+=4;goto B4ceb0a;
case 0x4ceb0d:c.instructions+=3;goto B4ceb0d;
case 0x4ceb0e:c.instructions+=2;goto B4ceb0e;
case 0x4ceb0f:c.instructions+=1;goto B4ceb0f;
case 0x4ceb14:goto L4ceb14;
case 0x4ceb17:c.instructions+=8;goto B4ceb17;
case 0x4ceb1b:c.instructions+=7;goto B4ceb1b;
case 0x4ceb1e:c.instructions+=6;goto B4ceb1e;
case 0x4ceb21:c.instructions+=5;goto B4ceb21;
case 0x4ceb23:c.instructions+=4;goto B4ceb23;
case 0x4ceb28:c.instructions+=3;goto B4ceb28;
case 0x4ceb29:c.instructions+=2;goto B4ceb29;
case 0x4ceb2a:c.instructions+=1;goto B4ceb2a;
case 0x4ceb2f:goto L4ceb2f;
case 0x4ceb32:c.instructions+=7;goto B4ceb32;
case 0x4ceb36:c.instructions+=6;goto B4ceb36;
case 0x4ceb39:c.instructions+=5;goto B4ceb39;
case 0x4ceb3b:c.instructions+=4;goto B4ceb3b;
case 0x4ceb40:c.instructions+=3;goto B4ceb40;
case 0x4ceb41:c.instructions+=2;goto B4ceb41;
case 0x4ceb42:c.instructions+=1;goto B4ceb42;
case 0x4ceb47:goto L4ceb47;
case 0x4ceb4a:goto L4ceb4a;
case 0x4ceb4d:c.instructions+=5;goto B4ceb4d;
case 0x4ceb50:c.instructions+=4;goto B4ceb50;
case 0x4ceb51:c.instructions+=3;goto B4ceb51;
case 0x4ceb53:c.instructions+=2;goto B4ceb53;
case 0x4ceb54:c.instructions+=1;goto B4ceb54;
case 0x4ceb59:goto L4ceb59;
case 0x4ceb5c:c.instructions+=3;goto B4ceb5c;
case 0x4ceb5d:c.instructions+=2;goto B4ceb5d;
case 0x4ceb5e:c.instructions+=1;goto B4ceb5e;
case 0x4ceb61:goto L4ceb61;
case 0x4ceb64:c.instructions+=2;goto B4ceb64;
case 0x4ceb67:c.instructions+=1;goto B4ceb67;
case 0x4ceb6d:goto L4ceb6d;
case 0x4ceb74:goto L4ceb74;
case 0x4ceb76:c.instructions+=1;goto B4ceb76;
case 0x4ceb7b:goto L4ceb7b;
case 0x4ceb7c:c.instructions+=2;goto B4ceb7c;
case 0x4ceb7d:c.instructions+=1;goto B4ceb7d;
case 0x4ceb80:goto L4ceb80;
case 0x4ceb83:c.instructions+=2;goto B4ceb83;
case 0x4ceb86:c.instructions+=1;goto B4ceb86;
case 0x4ceb8c:goto L4ceb8c;
case 0x4ceb90:c.instructions+=6;goto B4ceb90;
case 0x4ceb93:c.instructions+=5;goto B4ceb93;
case 0x4ceb95:c.instructions+=4;goto B4ceb95;
case 0x4ceb9a:c.instructions+=3;goto B4ceb9a;
case 0x4ceb9b:c.instructions+=2;goto B4ceb9b;
case 0x4ceb9c:c.instructions+=1;goto B4ceb9c;
case 0x4ceba1:goto L4ceba1;
case 0x4ceba4:c.instructions+=7;goto B4ceba4;
case 0x4ceba8:c.instructions+=6;goto B4ceba8;
case 0x4cebab:c.instructions+=5;goto B4cebab;
case 0x4cebad:c.instructions+=4;goto B4cebad;
case 0x4cebb2:c.instructions+=3;goto B4cebb2;
case 0x4cebb3:c.instructions+=2;goto B4cebb3;
case 0x4cebb4:c.instructions+=1;goto B4cebb4;
case 0x4cebb9:goto L4cebb9;
case 0x4cebbc:c.instructions+=6;goto B4cebbc;
case 0x4cebc0:c.instructions+=5;goto B4cebc0;
case 0x4cebc3:c.instructions+=4;goto B4cebc3;
case 0x4cebc5:c.instructions+=3;goto B4cebc5;
case 0x4cebc6:c.instructions+=2;goto B4cebc6;
case 0x4cebc7:c.instructions+=1;goto B4cebc7;
case 0x4cebcc:goto L4cebcc;
case 0x4cebcf:c.instructions+=9;goto B4cebcf;
case 0x4cebd0:c.instructions+=8;goto B4cebd0;
case 0x4cebd2:c.instructions+=7;goto B4cebd2;
case 0x4cebd5:c.instructions+=6;goto B4cebd5;
case 0x4cebd9:c.instructions+=5;goto B4cebd9;
case 0x4cebdc:c.instructions+=4;goto B4cebdc;
case 0x4cebde:c.instructions+=3;goto B4cebde;
case 0x4cebdf:c.instructions+=2;goto B4cebdf;
case 0x4cebe0:c.instructions+=1;goto B4cebe0;
case 0x4cebe5:goto L4cebe5;
case 0x4cebe8:c.instructions+=5;goto B4cebe8;
case 0x4cebec:c.instructions+=4;goto B4cebec;
case 0x4cebef:c.instructions+=3;goto B4cebef;
case 0x4cebf0:c.instructions+=2;goto B4cebf0;
case 0x4cebf1:c.instructions+=1;goto B4cebf1;
case 0x4cebf6:goto L4cebf6;
case 0x4cebf9:c.instructions+=8;goto B4cebf9;
case 0x4cebfd:c.instructions+=7;goto B4cebfd;
case 0x4cec00:c.instructions+=6;goto B4cec00;
case 0x4cec03:c.instructions+=5;goto B4cec03;
case 0x4cec05:c.instructions+=4;goto B4cec05;
case 0x4cec0a:c.instructions+=3;goto B4cec0a;
case 0x4cec0b:c.instructions+=2;goto B4cec0b;
case 0x4cec0c:c.instructions+=1;goto B4cec0c;
case 0x4cec11:goto L4cec11;
case 0x4cec14:c.instructions+=7;goto B4cec14;
case 0x4cec18:c.instructions+=6;goto B4cec18;
case 0x4cec1b:c.instructions+=5;goto B4cec1b;
case 0x4cec1d:c.instructions+=4;goto B4cec1d;
case 0x4cec22:c.instructions+=3;goto B4cec22;
case 0x4cec23:c.instructions+=2;goto B4cec23;
case 0x4cec24:c.instructions+=1;goto B4cec24;
case 0x4cec29:goto L4cec29;
case 0x4cec2c:goto L4cec2c;
case 0x4cec2f:c.instructions+=5;goto B4cec2f;
case 0x4cec32:c.instructions+=4;goto B4cec32;
case 0x4cec33:c.instructions+=3;goto B4cec33;
case 0x4cec35:c.instructions+=2;goto B4cec35;
case 0x4cec36:c.instructions+=1;goto B4cec36;
case 0x4cec3b:goto L4cec3b;
case 0x4cec3e:c.instructions+=3;goto B4cec3e;
case 0x4cec3f:c.instructions+=2;goto B4cec3f;
case 0x4cec40:c.instructions+=1;goto B4cec40;
case 0x4cec43:goto L4cec43;
case 0x4cec48:c.instructions+=1;goto B4cec48;
case 0x4cec4e:goto L4cec4e;
case 0x4cec53:c.instructions+=3;goto B4cec53;
case 0x4cec55:c.instructions+=2;goto B4cec55;
case 0x4cec5c:c.instructions+=1;goto B4cec5c;
case 0x4cec5e:goto L4cec5e;
case 0x4cec65:goto L4cec65;
case 0x4cec67:c.instructions+=1;goto B4cec67;
case 0x4cec6d:goto L4cec6d;
case 0x4cec73:c.instructions+=2;goto B4cec73;
case 0x4cec75:c.instructions+=1;goto B4cec75;
case 0x4cec7b:goto L4cec7b;
case 0x4cec81:c.instructions+=2;goto B4cec81;
case 0x4cec82:c.instructions+=1;goto B4cec82;
case 0x4cec87:goto L4cec87;
case 0x4cec8a:c.instructions+=2;goto B4cec8a;
case 0x4cec8c:c.instructions+=1;goto B4cec8c;
case 0x4cec92:goto L4cec92;
case 0x4cec98:c.instructions+=2;goto B4cec98;
case 0x4cec99:c.instructions+=1;goto B4cec99;
case 0x4cec9e:goto L4cec9e;
case 0x4ceca1:c.instructions+=2;goto B4ceca1;
case 0x4ceca3:c.instructions+=1;goto B4ceca3;
case 0x4ceca5:goto L4ceca5;
case 0x4ceca7:c.instructions+=1;goto B4ceca7;
case 0x4cecac:goto L4cecac;
case 0x4cecad:c.instructions+=2;goto B4cecad;
case 0x4cecae:c.instructions+=1;goto B4cecae;
case 0x4cecb1:goto L4cecb1;
case 0x4cecb7:c.instructions+=2;goto B4cecb7;
case 0x4cecb8:c.instructions+=1;goto B4cecb8;
case 0x4cecbd:goto L4cecbd;
case 0x4cecc0:c.instructions+=2;goto B4cecc0;
case 0x4cecc2:c.instructions+=1;goto B4cecc2;
case 0x4cecc4:goto L4cecc4;
case 0x4cecc6:c.instructions+=1;goto B4cecc6;
case 0x4ceccb:goto L4ceccb;
case 0x4ceccc:c.instructions+=2;goto B4ceccc;
case 0x4ceccd:c.instructions+=1;goto B4ceccd;
case 0x4cecd0:goto L4cecd0;
case 0x4cecd6:c.instructions+=2;goto B4cecd6;
case 0x4cecd7:c.instructions+=1;goto B4cecd7;
case 0x4cecdc:goto L4cecdc;
case 0x4cecdf:c.instructions+=2;goto B4cecdf;
case 0x4cece1:c.instructions+=1;goto B4cece1;
case 0x4cece7:goto L4cece7;
case 0x4cece9:c.instructions+=1;goto B4cece9;
case 0x4cecee:goto L4cecee;
case 0x4cecef:c.instructions+=2;goto B4cecef;
case 0x4cecf0:c.instructions+=1;goto B4cecf0;
case 0x4cecf3:goto L4cecf3;
case 0x4cecf7:c.instructions+=4;goto B4cecf7;
case 0x4cecf8:c.instructions+=3;goto B4cecf8;
case 0x4cecfc:c.instructions+=2;goto B4cecfc;
case 0x4cecfd:c.instructions+=1;goto B4cecfd;
case 0x4ced02:goto L4ced02;
case 0x4ced08:c.instructions+=6;goto B4ced08;
case 0x4ced0c:c.instructions+=5;goto B4ced0c;
case 0x4ced10:c.instructions+=4;goto B4ced10;
case 0x4ced11:c.instructions+=3;goto B4ced11;
case 0x4ced12:c.instructions+=2;goto B4ced12;
case 0x4ced13:c.instructions+=1;goto B4ced13;
case 0x4ced18:goto L4ced18;
case 0x4ced1b:c.instructions+=2;goto B4ced1b;
case 0x4ced1d:c.instructions+=1;goto B4ced1d;
case 0x4ced1f:goto L4ced1f;
case 0x4ced21:c.instructions+=2;goto B4ced21;
case 0x4ced23:c.instructions+=1;goto B4ced23;
case 0x4ced28:goto L4ced28;
case 0x4ced29:c.instructions+=2;goto B4ced29;
case 0x4ced2a:c.instructions+=1;goto B4ced2a;
case 0x4ced2d:goto L4ced2d;
case 0x4ced33:c.instructions+=6;goto B4ced33;
case 0x4ced37:c.instructions+=5;goto B4ced37;
case 0x4ced3b:c.instructions+=4;goto B4ced3b;
case 0x4ced3c:c.instructions+=3;goto B4ced3c;
case 0x4ced3d:c.instructions+=2;goto B4ced3d;
case 0x4ced3e:c.instructions+=1;goto B4ced3e;
case 0x4ced43:goto L4ced43;
case 0x4ced46:c.instructions+=2;goto B4ced46;
case 0x4ced48:c.instructions+=1;goto B4ced48;
case 0x4ced4a:goto L4ced4a;
case 0x4ced4c:c.instructions+=2;goto B4ced4c;
case 0x4ced4e:c.instructions+=1;goto B4ced4e;
case 0x4ced53:goto L4ced53;
case 0x4ced54:c.instructions+=2;goto B4ced54;
case 0x4ced55:c.instructions+=1;goto B4ced55;
case 0x4ced58:goto L4ced58;
case 0x4ced5e:c.instructions+=6;goto B4ced5e;
case 0x4ced62:c.instructions+=5;goto B4ced62;
case 0x4ced66:c.instructions+=4;goto B4ced66;
case 0x4ced67:c.instructions+=3;goto B4ced67;
case 0x4ced68:c.instructions+=2;goto B4ced68;
case 0x4ced69:c.instructions+=1;goto B4ced69;
case 0x4ced6e:goto L4ced6e;
case 0x4ced71:c.instructions+=2;goto B4ced71;
case 0x4ced73:c.instructions+=1;goto B4ced73;
case 0x4ced75:goto L4ced75;
case 0x4ced77:c.instructions+=2;goto B4ced77;
case 0x4ced79:c.instructions+=1;goto B4ced79;
case 0x4ced7e:goto L4ced7e;
case 0x4ced7f:c.instructions+=2;goto B4ced7f;
case 0x4ced80:c.instructions+=1;goto B4ced80;
case 0x4ced83:goto L4ced83;
case 0x4ced89:c.instructions+=6;goto B4ced89;
case 0x4ced8d:c.instructions+=5;goto B4ced8d;
case 0x4ced91:c.instructions+=4;goto B4ced91;
case 0x4ced92:c.instructions+=3;goto B4ced92;
case 0x4ced93:c.instructions+=2;goto B4ced93;
case 0x4ced94:c.instructions+=1;goto B4ced94;
case 0x4ced99:goto L4ced99;
case 0x4ced9c:c.instructions+=2;goto B4ced9c;
case 0x4ced9e:c.instructions+=1;goto B4ced9e;
case 0x4ceda0:goto L4ceda0;
case 0x4ceda2:c.instructions+=2;goto B4ceda2;
case 0x4ceda4:c.instructions+=1;goto B4ceda4;
case 0x4ceda9:goto L4ceda9;
case 0x4cedaa:c.instructions+=2;goto B4cedaa;
case 0x4cedab:c.instructions+=1;goto B4cedab;
case 0x4cedc0:goto L4cedc0;
case 0x4cedc1:c.instructions+=6;goto B4cedc1;
case 0x4cedc3:c.instructions+=5;goto B4cedc3;
case 0x4cedc6:c.instructions+=4;goto B4cedc6;
case 0x4cedcb:c.instructions+=3;goto B4cedcb;
case 0x4cedcc:c.instructions+=2;goto B4cedcc;
case 0x4cedce:c.instructions+=1;goto B4cedce;
case 0x4cedd4:goto L4cedd4;
case 0x4cedda:goto L4cedda;
case 0x4ceddf:c.instructions+=1;goto B4ceddf;
case 0x4cede5:goto L4cede5;
case 0x4cede7:goto L4cede7;
case 0x4cedec:c.instructions+=1;goto B4cedec;
case 0x4cedee:goto L4cedee;
case 0x4cedf3:c.instructions+=1;goto B4cedf3;
case 0x4cedf5:goto L4cedf5;
case 0x4cedf6:c.instructions+=1;goto B4cedf6;
case 0x4cedfc:goto L4cedfc;
case 0x4cedfe:c.instructions+=2;goto B4cedfe;
case 0x4cee00:c.instructions+=1;goto B4cee00;
case 0x4cee05:goto L4cee05;
case 0x4cee07:c.instructions+=1;goto B4cee07;
case 0x4cee0c:goto L4cee0c;
case 0x4cee0d:c.instructions+=2;goto B4cee0d;
case 0x4cee0e:c.instructions+=1;goto B4cee0e;
case 0x4cee11:goto L4cee11;
case 0x4cee18:c.instructions+=4;goto B4cee18;
case 0x4cee22:c.instructions+=3;goto B4cee22;
case 0x4cee23:c.instructions+=2;goto B4cee23;
case 0x4cee24:c.instructions+=1;goto B4cee24;
case 0x4cee27:goto L4cee27;
case 0x4cee2d:c.instructions+=2;goto B4cee2d;
case 0x4cee2f:c.instructions+=1;goto B4cee2f;
case 0x4cee31:goto L4cee31;
case 0x4cee37:c.instructions+=2;goto B4cee37;
case 0x4cee38:c.instructions+=1;goto B4cee38;
case 0x4cee3a:goto L4cee3a;
case 0x4cee40:c.instructions+=2;goto B4cee40;
case 0x4cee42:c.instructions+=1;goto B4cee42;
case 0x4cee44:goto L4cee44;
case 0x4cee4a:c.instructions+=1;goto B4cee4a;
case 0x4cee4b:goto L4cee4b;
case 0x4cee50:c.instructions+=1;goto B4cee50;
case 0x4cee55:goto L4cee55;
case 0x4cee5c:goto L4cee5c;
case 0x4cee62:c.instructions+=2;goto B4cee62;
case 0x4cee64:c.instructions+=1;goto B4cee64;
case 0x4cee6a:goto L4cee6a;
case 0x4cee6c:goto L4cee6c;
case 0x4cee71:c.instructions+=1;goto B4cee71;
case 0x4cee73:goto L4cee73;
case 0x4cee78:c.instructions+=1;goto B4cee78;
case 0x4cee7e:goto L4cee7e;
case 0x4cee83:goto L4cee83;
case 0x4cee85:c.instructions+=1;goto B4cee85;
case 0x4cee8b:goto L4cee8b;
case 0x4cee8d:c.instructions+=3;goto B4cee8d;
case 0x4cee8f:c.instructions+=2;goto B4cee8f;
case 0x4cee91:c.instructions+=1;goto B4cee91;
case 0x4cee96:goto L4cee96;
case 0x4cee97:c.instructions+=2;goto B4cee97;
case 0x4cee98:c.instructions+=1;goto B4cee98;
case 0x4cee9b:goto L4cee9b;
case 0x4cee9e:c.instructions+=5;goto B4cee9e;
case 0x4ceea1:c.instructions+=4;goto B4ceea1;
case 0x4ceea2:c.instructions+=3;goto B4ceea2;
case 0x4ceea4:c.instructions+=2;goto B4ceea4;
case 0x4ceea5:c.instructions+=1;goto B4ceea5;
case 0x4ceeaa:goto L4ceeaa;
case 0x4ceead:c.instructions+=2;goto B4ceead;
case 0x4ceeb2:c.instructions+=1;goto B4ceeb2;
case 0x4ceeb7:goto L4ceeb7;
case 0x4ceebc:goto L4ceebc;
case 0x4ceebf:c.instructions+=15;goto B4ceebf;
case 0x4ceec0:c.instructions+=14;goto B4ceec0;
case 0x4ceec2:c.instructions+=13;goto B4ceec2;
case 0x4ceec4:c.instructions+=12;goto B4ceec4;
case 0x4ceec9:c.instructions+=11;goto B4ceec9;
case 0x4ceece:c.instructions+=10;goto B4ceece;
case 0x4ceecf:c.instructions+=9;goto B4ceecf;
case 0x4ceed1:c.instructions+=8;goto B4ceed1;
case 0x4ceed3:c.instructions+=7;goto B4ceed3;
case 0x4ceed8:c.instructions+=6;goto B4ceed8;
case 0x4ceedd:c.instructions+=5;goto B4ceedd;
case 0x4ceee2:c.instructions+=4;goto B4ceee2;
case 0x4ceee7:c.instructions+=3;goto B4ceee7;
case 0x4ceeec:c.instructions+=2;goto B4ceeec;
case 0x4ceeed:c.instructions+=1;goto B4ceeed;
case 0x4ceef2:goto L4ceef2;
case 0x4ceef5:c.instructions+=3;goto B4ceef5;
case 0x4ceef6:c.instructions+=2;goto B4ceef6;
case 0x4ceef7:c.instructions+=1;goto B4ceef7;
case 0x4ceefa:goto L4ceefa;
case 0x4cef00:c.instructions+=2;goto B4cef00;
case 0x4cef02:c.instructions+=1;goto B4cef02;
case 0x4cef08:goto L4cef08;
case 0x4cef0e:c.instructions+=2;goto B4cef0e;
case 0x4cef10:c.instructions+=1;goto B4cef10;
case 0x4cef16:goto L4cef16;
case 0x4cef19:c.instructions+=5;goto B4cef19;
case 0x4cef1c:c.instructions+=4;goto B4cef1c;
case 0x4cef1d:c.instructions+=3;goto B4cef1d;
case 0x4cef1f:c.instructions+=2;goto B4cef1f;
case 0x4cef20:c.instructions+=1;goto B4cef20;
case 0x4cef25:goto L4cef25;
case 0x4cef28:c.instructions+=5;goto B4cef28;
case 0x4cef2a:c.instructions+=4;goto B4cef2a;
case 0x4cef2f:c.instructions+=3;goto B4cef2f;
case 0x4cef34:c.instructions+=2;goto B4cef34;
case 0x4cef35:c.instructions+=1;goto B4cef35;
case 0x4cef3a:goto L4cef3a;
case 0x4cef3d:c.instructions+=3;goto B4cef3d;
case 0x4cef42:c.instructions+=2;goto B4cef42;
case 0x4cef43:c.instructions+=1;goto B4cef43;
case 0x4cef48:goto L4cef48;
case 0x4cef49:c.instructions+=1;goto B4cef49;
case 0x4cef4e:goto L4cef4e;
case 0x4cef51:c.instructions+=3;goto B4cef51;
case 0x4cef53:c.instructions+=2;goto B4cef53;
case 0x4cef55:c.instructions+=1;goto B4cef55;
case 0x4cef5a:goto L4cef5a;
case 0x4cef5c:c.instructions+=1;goto B4cef5c;
case 0x4cef61:goto L4cef61;
case 0x4cef68:c.instructions+=3;goto B4cef68;
case 0x4cef69:c.instructions+=2;goto B4cef69;
case 0x4cef6a:c.instructions+=1;goto B4cef6a;
case 0x4cef6d:goto L4cef6d;
case 0x4cef72:c.instructions+=1;goto B4cef72;
case 0x4cef74:goto L4cef74;
case 0x4cef76:goto L4cef76;
case 0x4cef7b:c.instructions+=1;goto B4cef7b;
case 0x4cef7d:goto L4cef7d;
case 0x4cef82:c.instructions+=1;goto B4cef82;
case 0x4cef88:goto L4cef88;
case 0x4cef8d:goto L4cef8d;
case 0x4cef8f:c.instructions+=1;goto B4cef8f;
case 0x4cef95:goto L4cef95;
case 0x4cef97:c.instructions+=3;goto B4cef97;
case 0x4cef99:c.instructions+=2;goto B4cef99;
case 0x4cef9b:c.instructions+=1;goto B4cef9b;
case 0x4cefa0:goto L4cefa0;
case 0x4cefa1:c.instructions+=2;goto B4cefa1;
case 0x4cefa2:c.instructions+=1;goto B4cefa2;
case 0x4cefa5:goto L4cefa5;
case 0x4cefaa:goto L4cefaa;
case 0x4cefac:c.instructions+=1;goto B4cefac;
case 0x4cefb2:goto L4cefb2;
case 0x4cefb4:c.instructions+=3;goto B4cefb4;
case 0x4cefb6:c.instructions+=2;goto B4cefb6;
case 0x4cefb8:c.instructions+=1;goto B4cefb8;
case 0x4cefbd:goto L4cefbd;
case 0x4cefbe:c.instructions+=2;goto B4cefbe;
case 0x4cefbf:c.instructions+=1;goto B4cefbf;
case 0x4cefc2:goto L4cefc2;
case 0x4cefc7:c.instructions+=1;goto B4cefc7;
case 0x4cefc9:goto L4cefc9;
case 0x4cefce:c.instructions+=1;goto B4cefce;
case 0x4cefd4:goto L4cefd4;
case 0x4cefd9:goto L4cefd9;
case 0x4cefdb:c.instructions+=1;goto B4cefdb;
case 0x4cefe1:goto L4cefe1;
case 0x4cefe7:c.instructions+=2;goto B4cefe7;
case 0x4cefe9:c.instructions+=1;goto B4cefe9;
case 0x4cefef:goto L4cefef;
case 0x4ceff5:c.instructions+=2;goto B4ceff5;
case 0x4ceff6:c.instructions+=1;goto B4ceff6;
case 0x4ceffb:goto L4ceffb;
case 0x4ceffc:c.instructions+=1;goto B4ceffc;
default:missing_instruction(c.pc);}
B4ce005:L4ce005:{c.instructions+=3;NFSU2_TR(0x4ce005);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ce00a:{NFSU2_TR(0x4ce00a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce00d:{NFSU2_TR(0x4ce00d);
if(r1(R+518)){{goto L4ce02b;}}
}
B4ce00f:L4ce00f:{c.instructions+=2;NFSU2_TR(0x4ce00f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce014:{NFSU2_TR(0x4ce014);
if(r1(R+518)){{goto L4ce02b;}}
}
B4ce016:L4ce016:{c.instructions+=2;NFSU2_TR(0x4ce016);
w4(R+4,u32(0x83aab4ull));
}
B4ce01b:{NFSU2_TR(0x4ce01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce020ull));
TAIL_STATIC(0x502910u,502);
}
B4ce020:L4ce020:{c.instructions+=3;NFSU2_TR(0x4ce020);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B4ce023:{NFSU2_TR(0x4ce023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce026:{NFSU2_TR(0x4ce026);
{goto L4ce0dd;}
}
B4ce02b:L4ce02b:{c.instructions+=2;NFSU2_TR(0x4ce02b);
__builtin_memmove(gp(0x8500bc),(R+12),4);
}
B4ce031:{NFSU2_TR(0x4ce031);
{goto L4ce0d6;}
}
B4ce036:L4ce036:{c.instructions+=4;NFSU2_TR(0x4ce036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ce038:{NFSU2_TR(0x4ce038);
__builtin_memmove((R+0),(R+24),4);
}
B4ce03a:{NFSU2_TR(0x4ce03a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce03c:{NFSU2_TR(0x4ce03c);
if(r1(R+518)){{goto L4ce05d;}}
}
B4ce03e:L4ce03e:{c.instructions+=1;NFSU2_TR(0x4ce03e);
__builtin_memmove((R+28),(R+28),4);
}
B4ce040:L4ce040:{c.instructions+=3;NFSU2_TR(0x4ce040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce043:{NFSU2_TR(0x4ce043);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce045:{NFSU2_TR(0x4ce045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce04c;}}
}
B4ce047:L4ce047:{c.instructions+=2;NFSU2_TR(0x4ce047);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce04a:{NFSU2_TR(0x4ce04a);
{goto L4ce053;}
}
B4ce04c:L4ce04c:{c.instructions+=1;NFSU2_TR(0x4ce04c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4ce053:L4ce053:{c.instructions+=2;NFSU2_TR(0x4ce053);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce055:{NFSU2_TR(0x4ce055);
if(r1(R+518)){{goto L4ce05f;}}
}
B4ce057:L4ce057:{c.instructions+=3;NFSU2_TR(0x4ce057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ce059:{NFSU2_TR(0x4ce059);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce05b:{NFSU2_TR(0x4ce05b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce040u);}goto L4ce040;}}
}
B4ce05d:L4ce05d:{c.instructions+=1;NFSU2_TR(0x4ce05d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ce05f:L4ce05f:{c.instructions+=4;NFSU2_TR(0x4ce05f);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4ce061:{NFSU2_TR(0x4ce061);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce063:{NFSU2_TR(0x4ce063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce066:{NFSU2_TR(0x4ce066);
if(r1(R+518)){{goto L4ce086;}}
}
B4ce068:L4ce068:{c.instructions+=3;NFSU2_TR(0x4ce068);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4ce06b:{NFSU2_TR(0x4ce06b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce06d:{NFSU2_TR(0x4ce06d);
if(r1(R+518)){{goto L4ce082;}}
}
B4ce06f:L4ce06f:{c.instructions+=3;NFSU2_TR(0x4ce06f);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ce074:{NFSU2_TR(0x4ce074);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce077:{NFSU2_TR(0x4ce077);
if(r1(R+518)){{goto L4ce082;}}
}
B4ce079:L4ce079:{c.instructions+=2;NFSU2_TR(0x4ce079);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce07e:{NFSU2_TR(0x4ce07e);
if(r1(R+518)){{goto L4ce082;}}
}
B4ce080:L4ce080:{c.instructions+=1;NFSU2_TR(0x4ce080);
w1(R+4,u8(0x1ull));
}
B4ce082:L4ce082:{c.instructions+=2;NFSU2_TR(0x4ce082);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce084:{NFSU2_TR(0x4ce084);
if(r1(R+518)){{goto L4ce0dd;}}
}
B4ce086:L4ce086:{c.instructions+=4;NFSU2_TR(0x4ce086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce089:{NFSU2_TR(0x4ce089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce08c:{NFSU2_TR(0x4ce08c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce08e:{NFSU2_TR(0x4ce08e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce095;}}
}
B4ce090:L4ce090:{c.instructions+=2;NFSU2_TR(0x4ce090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ce093:{NFSU2_TR(0x4ce093);
{goto L4ce09c;}
}
B4ce095:L4ce095:{c.instructions+=1;NFSU2_TR(0x4ce095);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B4ce09c:L4ce09c:{c.instructions+=2;NFSU2_TR(0x4ce09c);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce0a1:{NFSU2_TR(0x4ce0a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce0a6ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4ce0a6:L4ce0a6:{c.instructions+=3;NFSU2_TR(0x4ce0a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ce0a9:{NFSU2_TR(0x4ce0a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce0ab:{NFSU2_TR(0x4ce0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce0dd;}}
}
B4ce0ad:L4ce0ad:{c.instructions+=3;NFSU2_TR(0x4ce0ad);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ce0b2:{NFSU2_TR(0x4ce0b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce0b5:{NFSU2_TR(0x4ce0b5);
if(r1(R+518)){{goto L4ce0d0;}}
}
B4ce0b7:L4ce0b7:{c.instructions+=2;NFSU2_TR(0x4ce0b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce0bc:{NFSU2_TR(0x4ce0bc);
if(r1(R+518)){{goto L4ce0d0;}}
}
B4ce0be:L4ce0be:{c.instructions+=2;NFSU2_TR(0x4ce0be);
w4(R+4,u32(0x83aab4ull));
}
B4ce0c3:{NFSU2_TR(0x4ce0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce0c8ull));
TAIL_STATIC(0x502910u,502);
}
B4ce0c8:L4ce0c8:{c.instructions+=3;NFSU2_TR(0x4ce0c8);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B4ce0cb:{NFSU2_TR(0x4ce0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce0ce:{NFSU2_TR(0x4ce0ce);
{goto L4ce0dd;}
}
B4ce0d0:L4ce0d0:{c.instructions+=1;NFSU2_TR(0x4ce0d0);
__builtin_memmove(gp(0x8500bc),(R+28),4);
}
B4ce0d6:L4ce0d6:{c.instructions+=1;NFSU2_TR(0x4ce0d6);
__builtin_memmove(gp(0x8500b8),(R+24),2);
}
B4ce0dd:L4ce0dd:{c.instructions+=3;NFSU2_TR(0x4ce0dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce0e0:{NFSU2_TR(0x4ce0e0);
__builtin_memmove((R+4),(R+24),4);
}
B4ce0e2:{NFSU2_TR(0x4ce0e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce0e7ull));
TAIL_STATIC(0x538900u,538);
}
B4ce0e7:L4ce0e7:{c.instructions+=5;NFSU2_TR(0x4ce0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce0ea:{NFSU2_TR(0x4ce0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce0ed:{NFSU2_TR(0x4ce0ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce0ef:{NFSU2_TR(0x4ce0ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ce0f0:{NFSU2_TR(0x4ce0f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce0f7;}}
}
B4ce0f2:L4ce0f2:{c.instructions+=2;NFSU2_TR(0x4ce0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce0f5:{NFSU2_TR(0x4ce0f5);
{goto L4ce0fe;}
}
B4ce0f7:L4ce0f7:{c.instructions+=1;NFSU2_TR(0x4ce0f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4ce0fe:L4ce0fe:{c.instructions+=3;NFSU2_TR(0x4ce0fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce0ff:{NFSU2_TR(0x4ce0ff);
__builtin_memmove((R+4),(R+24),4);
}
B4ce101:{NFSU2_TR(0x4ce101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce106ull));
TAIL_STATIC(0x538700u,538);
}
B4ce106:L4ce106:{c.instructions+=4;NFSU2_TR(0x4ce106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce109:{NFSU2_TR(0x4ce109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce10c:{NFSU2_TR(0x4ce10c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce10e:{NFSU2_TR(0x4ce10e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce115;}}
}
B4ce110:L4ce110:{c.instructions+=2;NFSU2_TR(0x4ce110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ce113:{NFSU2_TR(0x4ce113);
{goto L4ce11c;}
}
B4ce115:L4ce115:{c.instructions+=1;NFSU2_TR(0x4ce115);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B4ce11c:L4ce11c:{c.instructions+=2;NFSU2_TR(0x4ce11c);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce121:{NFSU2_TR(0x4ce121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce126ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4ce126:L4ce126:{c.instructions+=3;NFSU2_TR(0x4ce126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ce129:{NFSU2_TR(0x4ce129);
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
B4ce12b:{NFSU2_TR(0x4ce12b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce160;}}
}
B4ce12d:L4ce12d:{c.instructions+=3;NFSU2_TR(0x4ce12d);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ce132:{NFSU2_TR(0x4ce132);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ce135:{NFSU2_TR(0x4ce135);
if(r1(R+518)){{goto L4ce153;}}
}
B4ce137:L4ce137:{c.instructions+=2;NFSU2_TR(0x4ce137);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ce13c:{NFSU2_TR(0x4ce13c);
if(r1(R+518)){{goto L4ce153;}}
}
B4ce13e:L4ce13e:{c.instructions+=2;NFSU2_TR(0x4ce13e);
w4(R+4,u32(0x83aab4ull));
}
B4ce143:{NFSU2_TR(0x4ce143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce148ull));
TAIL_STATIC(0x502910u,502);
}
B4ce148:L4ce148:{c.instructions+=7;NFSU2_TR(0x4ce148);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce14b:{NFSU2_TR(0x4ce14b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce14c:{NFSU2_TR(0x4ce14c);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B4ce14f:{NFSU2_TR(0x4ce14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce150:{NFSU2_TR(0x4ce150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ce151:{NFSU2_TR(0x4ce151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce152:{NFSU2_TR(0x4ce152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce153:L4ce153:{c.instructions+=2;NFSU2_TR(0x4ce153);
__builtin_memmove(gp(0x8500b8),(R+24),2);
}
B4ce15a:{NFSU2_TR(0x4ce15a);
__builtin_memmove(gp(0x8500bc),(R+28),4);
}
B4ce160:L4ce160:{c.instructions+=5;NFSU2_TR(0x4ce160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce161:{NFSU2_TR(0x4ce161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce162:{NFSU2_TR(0x4ce162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ce163:{NFSU2_TR(0x4ce163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce164:{NFSU2_TR(0x4ce164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce170:L4ce170:{c.instructions+=7;NFSU2_TR(0x4ce170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x224ull))));
}
B4ce176:{NFSU2_TR(0x4ce176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce177:{NFSU2_TR(0x4ce177);
__builtin_memmove((R+24),(R+4),4);
}
B4ce179:{NFSU2_TR(0x4ce179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce17c:{NFSU2_TR(0x4ce17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce17f:{NFSU2_TR(0x4ce17f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce181:{NFSU2_TR(0x4ce181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce188;}}
}
B4ce183:L4ce183:{c.instructions+=2;NFSU2_TR(0x4ce183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce186:{NFSU2_TR(0x4ce186);
{goto L4ce18f;}
}
B4ce188:L4ce188:{c.instructions+=1;NFSU2_TR(0x4ce188);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4ce18f:L4ce18f:{c.instructions+=6;NFSU2_TR(0x4ce18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce192:{NFSU2_TR(0x4ce192);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce193:{NFSU2_TR(0x4ce193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce196:{NFSU2_TR(0x4ce196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce197:{NFSU2_TR(0x4ce197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce198:{NFSU2_TR(0x4ce198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce19dull));
TAIL_STATIC(0x516280u,516);
}
B4ce19d:L4ce19d:{c.instructions+=5;NFSU2_TR(0x4ce19d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce1a0:{NFSU2_TR(0x4ce1a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1a1:{NFSU2_TR(0x4ce1a1);
u8 U[4];
w4(U+0,u32(0xf601f2d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1a6:{NFSU2_TR(0x4ce1a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1a7:{NFSU2_TR(0x4ce1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce1acull));
TAIL_STATIC(0x537a10u,537);
}
B4ce1ac:L4ce1ac:{c.instructions+=3;NFSU2_TR(0x4ce1ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce1af:{NFSU2_TR(0x4ce1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1b0:{NFSU2_TR(0x4ce1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce1b5ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ce1b5:L4ce1b5:{c.instructions+=4;NFSU2_TR(0x4ce1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce1b8:{NFSU2_TR(0x4ce1b8);
u8 U[4];
w4(U+0,u32(0x53c956c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1bd:{NFSU2_TR(0x4ce1bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1be:{NFSU2_TR(0x4ce1be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce1c3ull));
TAIL_STATIC(0x537a10u,537);
}
B4ce1c3:L4ce1c3:{c.instructions+=2;NFSU2_TR(0x4ce1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1c4:{NFSU2_TR(0x4ce1c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce1c9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ce1c9:L4ce1c9:{c.instructions+=6;NFSU2_TR(0x4ce1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce1cc:{NFSU2_TR(0x4ce1cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce1cf:{NFSU2_TR(0x4ce1cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ce1d2:{NFSU2_TR(0x4ce1d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce1d4:{NFSU2_TR(0x4ce1d4);
w4(R+4,u32(0x1ull));
}
B4ce1d9:{NFSU2_TR(0x4ce1d9);
if(r1(R+518)){{goto L4ce1eb;}}
}
B4ce1db:L4ce1db:{c.instructions+=2;NFSU2_TR(0x4ce1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce1de:{NFSU2_TR(0x4ce1de);
__builtin_memmove((R+28),(R+28),4);
}
B4ce1e0:L4ce1e0:{c.instructions+=2;NFSU2_TR(0x4ce1e0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce1e2:{NFSU2_TR(0x4ce1e2);
if(r1(R+518)){{goto L4ce1ed;}}
}
B4ce1e4:L4ce1e4:{c.instructions+=4;NFSU2_TR(0x4ce1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ce1e6:{NFSU2_TR(0x4ce1e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ce1e7:{NFSU2_TR(0x4ce1e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce1e9:{NFSU2_TR(0x4ce1e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce1e0u);}goto L4ce1e0;}}
}
B4ce1eb:L4ce1eb:{c.instructions+=1;NFSU2_TR(0x4ce1eb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ce1ed:L4ce1ed:{c.instructions+=7;NFSU2_TR(0x4ce1ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1ee:{NFSU2_TR(0x4ce1ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1ef:{NFSU2_TR(0x4ce1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce1f5:{NFSU2_TR(0x4ce1f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1f6:{NFSU2_TR(0x4ce1f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce1f8:{NFSU2_TR(0x4ce1f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce1fe:{NFSU2_TR(0x4ce1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce203ull));
TAIL_STATIC(0x538080u,538);
}
B4ce203:L4ce203:{c.instructions+=3;NFSU2_TR(0x4ce203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ce206:{NFSU2_TR(0x4ce206);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce20b:{NFSU2_TR(0x4ce20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce210ull));
TAIL_STATIC(0x505450u,505);
}
B4ce210:L4ce210:{c.instructions+=3;NFSU2_TR(0x4ce210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce211:{NFSU2_TR(0x4ce211);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce212:{NFSU2_TR(0x4ce212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce217ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce217:L4ce217:{c.instructions+=4;NFSU2_TR(0x4ce217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ce21a:{NFSU2_TR(0x4ce21a);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce21f:{NFSU2_TR(0x4ce21f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce223:{NFSU2_TR(0x4ce223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce228ull));
TAIL_STATIC(0x505450u,505);
}
B4ce228:L4ce228:{c.instructions+=3;NFSU2_TR(0x4ce228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce229:{NFSU2_TR(0x4ce229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce22a:{NFSU2_TR(0x4ce22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce22full));
TAIL_STATIC(0x5379c0u,537);
}
B4ce22f:L4ce22f:{c.instructions+=6;NFSU2_TR(0x4ce22f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ce231:{NFSU2_TR(0x4ce231);
__builtin_memmove((R+12),(R+0),4);
}
B4ce233:{NFSU2_TR(0x4ce233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce236:{NFSU2_TR(0x4ce236);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ce239:{NFSU2_TR(0x4ce239);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce23b:{NFSU2_TR(0x4ce23b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce26b;}}
}
B4ce23d:L4ce23d:{c.instructions+=3;NFSU2_TR(0x4ce23d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ce243:{NFSU2_TR(0x4ce243);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce245:{NFSU2_TR(0x4ce245);
if(r1(R+518)){{goto L4ce32f;}}
}
B4ce24b:L4ce24b:{c.instructions+=4;NFSU2_TR(0x4ce24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce24e:{NFSU2_TR(0x4ce24e);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce253:{NFSU2_TR(0x4ce253);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce254:{NFSU2_TR(0x4ce254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce259ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce259:L4ce259:{c.instructions+=2;NFSU2_TR(0x4ce259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce25a:{NFSU2_TR(0x4ce25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce25full));
TAIL_STATIC(0x50ca00u,50c);
}
B4ce25f:L4ce25f:{c.instructions+=2;NFSU2_TR(0x4ce25f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce266:{NFSU2_TR(0x4ce266);
{goto L4ce32c;}
}
B4ce26b:L4ce26b:{c.instructions+=3;NFSU2_TR(0x4ce26b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ce26e:{NFSU2_TR(0x4ce26e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ce274:{NFSU2_TR(0x4ce274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce29e;}}
}
B4ce276:L4ce276:{c.instructions+=2;NFSU2_TR(0x4ce276);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce278:{NFSU2_TR(0x4ce278);
if(r1(R+518)){{goto L4ce32f;}}
}
B4ce27e:L4ce27e:{c.instructions+=4;NFSU2_TR(0x4ce27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce281:{NFSU2_TR(0x4ce281);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce286:{NFSU2_TR(0x4ce286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce287:{NFSU2_TR(0x4ce287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce28cull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce28c:L4ce28c:{c.instructions+=2;NFSU2_TR(0x4ce28c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce28d:{NFSU2_TR(0x4ce28d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce292ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ce292:L4ce292:{c.instructions+=2;NFSU2_TR(0x4ce292);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce299:{NFSU2_TR(0x4ce299);
{goto L4ce32c;}
}
B4ce29e:L4ce29e:{c.instructions+=2;NFSU2_TR(0x4ce29e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce2a0:{NFSU2_TR(0x4ce2a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce2bf;}}
}
B4ce2a2:L4ce2a2:{c.instructions+=4;NFSU2_TR(0x4ce2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce2a5:{NFSU2_TR(0x4ce2a5);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2aa:{NFSU2_TR(0x4ce2aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2ab:{NFSU2_TR(0x4ce2ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce2b0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce2b0:L4ce2b0:{c.instructions+=2;NFSU2_TR(0x4ce2b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2b1:{NFSU2_TR(0x4ce2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce2b6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ce2b6:L4ce2b6:{c.instructions+=2;NFSU2_TR(0x4ce2b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce2bd:{NFSU2_TR(0x4ce2bd);
{goto L4ce2e4;}
}
B4ce2bf:L4ce2bf:{c.instructions+=3;NFSU2_TR(0x4ce2bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ce2c5:{NFSU2_TR(0x4ce2c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce2c7:{NFSU2_TR(0x4ce2c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce2e7;}}
}
B4ce2c9:L4ce2c9:{c.instructions+=4;NFSU2_TR(0x4ce2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce2cc:{NFSU2_TR(0x4ce2cc);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2d1:{NFSU2_TR(0x4ce2d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2d2:{NFSU2_TR(0x4ce2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce2d7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce2d7:L4ce2d7:{c.instructions+=2;NFSU2_TR(0x4ce2d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2d8:{NFSU2_TR(0x4ce2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce2ddull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ce2dd:L4ce2dd:{c.instructions+=1;NFSU2_TR(0x4ce2dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce2e4:L4ce2e4:{c.instructions+=1;NFSU2_TR(0x4ce2e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ce2e7:L4ce2e7:{c.instructions+=4;NFSU2_TR(0x4ce2e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce2eb:{NFSU2_TR(0x4ce2eb);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2f0:{NFSU2_TR(0x4ce2f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2f1:{NFSU2_TR(0x4ce2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce2f6ull));
TAIL_STATIC(0x51d040u,51d);
}
B4ce2f6:L4ce2f6:{c.instructions+=3;NFSU2_TR(0x4ce2f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce2f9:{NFSU2_TR(0x4ce2f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce2fb:{NFSU2_TR(0x4ce2fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce30d;}}
}
B4ce2fd:L4ce2fd:{c.instructions+=4;NFSU2_TR(0x4ce2fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce2ff:{NFSU2_TR(0x4ce2ff);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce304:{NFSU2_TR(0x4ce304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce305:{NFSU2_TR(0x4ce305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce30aull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ce30a:L4ce30a:{c.instructions+=1;NFSU2_TR(0x4ce30a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ce30d:L4ce30d:{c.instructions+=3;NFSU2_TR(0x4ce30d);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce312:{NFSU2_TR(0x4ce312);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce313:{NFSU2_TR(0x4ce313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce318ull));
TAIL_STATIC(0x51d040u,51d);
}
B4ce318:L4ce318:{c.instructions+=3;NFSU2_TR(0x4ce318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce31b:{NFSU2_TR(0x4ce31b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce31d:{NFSU2_TR(0x4ce31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce32f;}}
}
B4ce31f:L4ce31f:{c.instructions+=4;NFSU2_TR(0x4ce31f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce321:{NFSU2_TR(0x4ce321);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce326:{NFSU2_TR(0x4ce326);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce327:{NFSU2_TR(0x4ce327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce32cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ce32c:L4ce32c:{c.instructions+=1;NFSU2_TR(0x4ce32c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ce32f:L4ce32f:{c.instructions+=2;NFSU2_TR(0x4ce32f);
__builtin_memmove((R+4),(R+24),4);
}
B4ce331:{NFSU2_TR(0x4ce331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce336ull));
TAIL_STATIC(0x4988c0u,498);
}
B4ce336:L4ce336:{c.instructions+=8;NFSU2_TR(0x4ce336);
__builtin_memmove((R+12),gp(0x83aa1a),1);
}
B4ce33c:{NFSU2_TR(0x4ce33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce33f:{NFSU2_TR(0x4ce33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce342:{NFSU2_TR(0x4ce342);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce344:{NFSU2_TR(0x4ce344);
__builtin_memmove((R+0),(R+518),1);
}
B4ce347:{NFSU2_TR(0x4ce347);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce349:{NFSU2_TR(0x4ce349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ce34a:{NFSU2_TR(0x4ce34a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce355;}}
}
B4ce34c:L4ce34c:{c.instructions+=3;NFSU2_TR(0x4ce34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce34f:{NFSU2_TR(0x4ce34f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce353:{NFSU2_TR(0x4ce353);
{goto L4ce35f;}
}
B4ce355:L4ce355:{c.instructions+=2;NFSU2_TR(0x4ce355);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce35b:{NFSU2_TR(0x4ce35b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce35f:L4ce35f:{c.instructions+=5;NFSU2_TR(0x4ce35f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ce361:{NFSU2_TR(0x4ce361);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ce365:{NFSU2_TR(0x4ce365);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ce36b:{NFSU2_TR(0x4ce36b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ce36f:{NFSU2_TR(0x4ce36f);
if(r1(R+518)){{goto L4ce37f;}}
}
B4ce371:L4ce371:{c.instructions+=3;NFSU2_TR(0x4ce371);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ce375:{NFSU2_TR(0x4ce375);
{u32 ea_=u32(u32(7927636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ce37b:{NFSU2_TR(0x4ce37b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ce37f:L4ce37f:{c.instructions+=7;NFSU2_TR(0x4ce37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce382:{NFSU2_TR(0x4ce382);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4ce384:{NFSU2_TR(0x4ce384);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ce386:{NFSU2_TR(0x4ce386);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf6640e9bull))));
}
B4ce38b:{NFSU2_TR(0x4ce38b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb5d640b1ull))));
}
B4ce390:{NFSU2_TR(0x4ce390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce391:{NFSU2_TR(0x4ce391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce396ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ce396:L4ce396:{c.instructions+=9;NFSU2_TR(0x4ce396);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ce39a:{NFSU2_TR(0x4ce39a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ce39d:{NFSU2_TR(0x4ce39d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce39e:{NFSU2_TR(0x4ce39e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ce3a1:{NFSU2_TR(0x4ce3a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4ce3a4:{NFSU2_TR(0x4ce3a4);
u8 U[4];
w4(U+0,u32(0x78f748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce3a9:{NFSU2_TR(0x4ce3a9);
u8 U[4];
w4(U+0,u32(0x80c9daaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce3ae:{NFSU2_TR(0x4ce3ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce3af:{NFSU2_TR(0x4ce3af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce3b4ull));
TAIL_STATIC(0x537b80u,537);
}
B4ce3b4:L4ce3b4:{c.instructions+=5;NFSU2_TR(0x4ce3b4);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ce3b9:{NFSU2_TR(0x4ce3b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ce3bc:{NFSU2_TR(0x4ce3bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce3bf:{NFSU2_TR(0x4ce3bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce3c0:{NFSU2_TR(0x4ce3c0);
if(r1(R+518)){{goto L4ce3ce;}}
}
B4ce3c2:L4ce3c2:{c.instructions+=3;NFSU2_TR(0x4ce3c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce3c7:{NFSU2_TR(0x4ce3c7);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B4ce3cc:{NFSU2_TR(0x4ce3cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce3d3;}}
}
B4ce3ce:L4ce3ce:{c.instructions+=1;NFSU2_TR(0x4ce3ce);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4ce3d3:L4ce3d3:{c.instructions+=2;NFSU2_TR(0x4ce3d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce3d6:{NFSU2_TR(0x4ce3d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce422;}}
}
B4ce3d8:L4ce3d8:{c.instructions+=4;NFSU2_TR(0x4ce3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce3de:{NFSU2_TR(0x4ce3de);
u8 U[4];
w4(U+0,u32(0x3b7b9567ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce3e3:{NFSU2_TR(0x4ce3e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce3e4:{NFSU2_TR(0x4ce3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce3e9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ce3e9:L4ce3e9:{c.instructions+=5;NFSU2_TR(0x4ce3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce3ec:{NFSU2_TR(0x4ce3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce3ef:{NFSU2_TR(0x4ce3ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce3f2:{NFSU2_TR(0x4ce3f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce3f4:{NFSU2_TR(0x4ce3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce3fb;}}
}
B4ce3f6:L4ce3f6:{c.instructions+=2;NFSU2_TR(0x4ce3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce3f9:{NFSU2_TR(0x4ce3f9);
{goto L4ce402;}
}
B4ce3fb:L4ce3fb:{c.instructions+=1;NFSU2_TR(0x4ce3fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4ce402:L4ce402:{c.instructions+=5;NFSU2_TR(0x4ce402);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce405:{NFSU2_TR(0x4ce405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce406:{NFSU2_TR(0x4ce406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce407:{NFSU2_TR(0x4ce407);
w4(R+4,u32(0x844adcull));
}
B4ce40c:{NFSU2_TR(0x4ce40c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce411ull));
TAIL_STATIC(0x502c50u,502);
}
B4ce411:L4ce411:{c.instructions+=6;NFSU2_TR(0x4ce411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce414:{NFSU2_TR(0x4ce414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce415:{NFSU2_TR(0x4ce415);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce41a:{NFSU2_TR(0x4ce41a);
u8 U[4];
w4(U+0,u32(0x555eecaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce41f:{NFSU2_TR(0x4ce41f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce420:{NFSU2_TR(0x4ce420);
{goto L4ce49a;}
}
B4ce422:L4ce422:{c.instructions+=2;NFSU2_TR(0x4ce422);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce425:{NFSU2_TR(0x4ce425);
if(r1(R+518)){{goto L4ce43a;}}
}
B4ce427:L4ce427:{c.instructions+=2;NFSU2_TR(0x4ce427);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce42a:{NFSU2_TR(0x4ce42a);
if(r1(R+518)){{goto L4ce43a;}}
}
B4ce42c:L4ce42c:{c.instructions+=4;NFSU2_TR(0x4ce42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce432:{NFSU2_TR(0x4ce432);
u8 U[4];
w4(U+0,u32(0x3b4a1ecbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce437:{NFSU2_TR(0x4ce437);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce438:{NFSU2_TR(0x4ce438);
{goto L4ce446;}
}
B4ce43a:L4ce43a:{c.instructions+=3;NFSU2_TR(0x4ce43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce440:{NFSU2_TR(0x4ce440);
u8 U[4];
w4(U+0,u32(0xdb0c5efdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce445:{NFSU2_TR(0x4ce445);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce446:L4ce446:{c.instructions+=1;NFSU2_TR(0x4ce446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce44bull));
TAIL_STATIC(0x50c900u,50c);
}
B4ce44b:L4ce44b:{c.instructions+=5;NFSU2_TR(0x4ce44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce44e:{NFSU2_TR(0x4ce44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce451:{NFSU2_TR(0x4ce451);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ce454:{NFSU2_TR(0x4ce454);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce456:{NFSU2_TR(0x4ce456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce45d;}}
}
B4ce458:L4ce458:{c.instructions+=2;NFSU2_TR(0x4ce458);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce45b:{NFSU2_TR(0x4ce45b);
{goto L4ce464;}
}
B4ce45d:L4ce45d:{c.instructions+=1;NFSU2_TR(0x4ce45d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4ce464:L4ce464:{c.instructions+=5;NFSU2_TR(0x4ce464);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce467:{NFSU2_TR(0x4ce467);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce468:{NFSU2_TR(0x4ce468);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce469:{NFSU2_TR(0x4ce469);
w4(R+4,u32(0x844adcull));
}
B4ce46e:{NFSU2_TR(0x4ce46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce473ull));
TAIL_STATIC(0x502aa0u,502);
}
B4ce473:L4ce473:{c.instructions+=6;NFSU2_TR(0x4ce473);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce477:{NFSU2_TR(0x4ce477);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce479:{NFSU2_TR(0x4ce479);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ce47d:{NFSU2_TR(0x4ce47d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce47e:{NFSU2_TR(0x4ce47e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce482:{NFSU2_TR(0x4ce482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce487ull));
TAIL_STATIC(0x577240u,577);
}
B4ce487:L4ce487:{c.instructions+=6;NFSU2_TR(0x4ce487);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce48a:{NFSU2_TR(0x4ce48a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce48e:{NFSU2_TR(0x4ce48e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce48f:{NFSU2_TR(0x4ce48f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce494:{NFSU2_TR(0x4ce494);
u8 U[4];
w4(U+0,u32(0x555eecaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce499:{NFSU2_TR(0x4ce499);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce49a:L4ce49a:{c.instructions+=1;NFSU2_TR(0x4ce49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce49full));
TAIL_STATIC(0x537b80u,537);
}
B4ce49f:L4ce49f:{c.instructions+=6;NFSU2_TR(0x4ce49f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ce4a2:{NFSU2_TR(0x4ce4a2);
u8 U[4];
w4(U+0,u32(0x8d9b9ec7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4a7:{NFSU2_TR(0x4ce4a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ce4ab:{NFSU2_TR(0x4ce4ab);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4b0:{NFSU2_TR(0x4ce4b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4b1:{NFSU2_TR(0x4ce4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce4b6ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4ce4b6:L4ce4b6:{c.instructions+=5;NFSU2_TR(0x4ce4b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce4b9:{NFSU2_TR(0x4ce4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce4bc:{NFSU2_TR(0x4ce4bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ce4bf:{NFSU2_TR(0x4ce4bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce4c1:{NFSU2_TR(0x4ce4c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce4c8;}}
}
B4ce4c3:L4ce4c3:{c.instructions+=2;NFSU2_TR(0x4ce4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce4c6:{NFSU2_TR(0x4ce4c6);
{goto L4ce4cf;}
}
B4ce4c8:L4ce4c8:{c.instructions+=1;NFSU2_TR(0x4ce4c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4ce4cf:L4ce4cf:{c.instructions+=4;NFSU2_TR(0x4ce4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ce4d2:{NFSU2_TR(0x4ce4d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4d3:{NFSU2_TR(0x4ce4d3);
u8 U[4];
w4(U+0,u32(0x795da8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4d8:{NFSU2_TR(0x4ce4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce4ddull));
TAIL_STATIC(0x50b990u,50b);
}
B4ce4dd:L4ce4dd:{c.instructions+=2;NFSU2_TR(0x4ce4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4de:{NFSU2_TR(0x4ce4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce4e3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ce4e3:L4ce4e3:{c.instructions+=6;NFSU2_TR(0x4ce4e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4e4:{NFSU2_TR(0x4ce4e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce4e8:{NFSU2_TR(0x4ce4e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4e9:{NFSU2_TR(0x4ce4e9);
u8 U[4];
w4(U+0,u32(0x258e6a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4ee:{NFSU2_TR(0x4ce4ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce4ef:{NFSU2_TR(0x4ce4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce4f4ull));
TAIL_STATIC(0x537b80u,537);
}
B4ce4f4:L4ce4f4:{c.instructions+=4;NFSU2_TR(0x4ce4f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4ce4f7:{NFSU2_TR(0x4ce4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce4f8:{NFSU2_TR(0x4ce4f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x224ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x224ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x224ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ce4fe:{NFSU2_TR(0x4ce4fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce500:L4ce500:{c.instructions+=9;NFSU2_TR(0x4ce500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4ce503:{NFSU2_TR(0x4ce503);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce504:{NFSU2_TR(0x4ce504);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce505:{NFSU2_TR(0x4ce505);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce506:{NFSU2_TR(0x4ce506);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce507:{NFSU2_TR(0x4ce507);
__builtin_memmove((R+28),(R+4),4);
}
B4ce509:{NFSU2_TR(0x4ce509);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce50d:{NFSU2_TR(0x4ce50d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ce50f:{NFSU2_TR(0x4ce50f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ce512:L4ce512:{c.instructions+=3;NFSU2_TR(0x4ce512);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce513:{NFSU2_TR(0x4ce513);
__builtin_memmove((R+4),(R+28),4);
}
B4ce515:{NFSU2_TR(0x4ce515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce51aull));
TAIL_STATIC(0x498bf0u,498);
}
B4ce51a:L4ce51a:{c.instructions+=2;NFSU2_TR(0x4ce51a);
__builtin_memmove((R+12),(R+0),1);
}
B4ce51c:{NFSU2_TR(0x4ce51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce521ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4ce521:L4ce521:{c.instructions+=2;NFSU2_TR(0x4ce521);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce524:{NFSU2_TR(0x4ce524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce54c;}}
}
B4ce526:L4ce526:{c.instructions+=3;NFSU2_TR(0x4ce526);
__builtin_memmove((R+4),(R+0),4);
}
B4ce528:{NFSU2_TR(0x4ce528);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ce52a:{NFSU2_TR(0x4ce52a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce52e:L4ce52e:{c.instructions+=1;NFSU2_TR(0x4ce52e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4ce530;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce52eu);}goto L4ce52e;}
}
B4ce530:L4ce530:{c.instructions+=6;NFSU2_TR(0x4ce530);
w2(R+0,u16(s16(s8(r1(R+12)))));
}
B4ce534:{NFSU2_TR(0x4ce534);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ce538:{NFSU2_TR(0x4ce538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce539:{NFSU2_TR(0x4ce539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ce53c:{NFSU2_TR(0x4ce53c);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4ce541:{NFSU2_TR(0x4ce541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce546ull));
TAIL_STATIC(0x535f40u,535);
}
B4ce546:L4ce546:{c.instructions+=2;NFSU2_TR(0x4ce546);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce54a:{NFSU2_TR(0x4ce54a);
{goto L4ce561;}
}
B4ce54c:L4ce54c:{c.instructions+=6;NFSU2_TR(0x4ce54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ce54f:{NFSU2_TR(0x4ce54f);
w4(R+8,u32(s32(s8(r1(R+12)))));
}
B4ce552:{NFSU2_TR(0x4ce552);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce553:{NFSU2_TR(0x4ce553);
u8 U[4];
w4(U+0,u32(0x795abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce558:{NFSU2_TR(0x4ce558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce559:{NFSU2_TR(0x4ce559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce55eull));
TAIL_STATIC(0x537be0u,537);
}
B4ce55e:L4ce55e:{c.instructions+=1;NFSU2_TR(0x4ce55e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ce561:L4ce561:{c.instructions+=4;NFSU2_TR(0x4ce561);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ce562:{NFSU2_TR(0x4ce562);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4ce565:{NFSU2_TR(0x4ce565);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ce568:{NFSU2_TR(0x4ce568);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce512u);}goto L4ce512;}}
}
B4ce56a:L4ce56a:{c.instructions+=3;NFSU2_TR(0x4ce56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce56d:{NFSU2_TR(0x4ce56d);
u8 U[4];
w4(U+0,u32(0x795dbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce572:{NFSU2_TR(0x4ce572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce577ull));
TAIL_STATIC(0x535fe0u,535);
}
B4ce577:L4ce577:{c.instructions+=2;NFSU2_TR(0x4ce577);
__builtin_memmove((R+4),(R+28),4);
}
B4ce579:{NFSU2_TR(0x4ce579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce57eull));
TAIL_STATIC(0x4b5100u,4b5);
}
B4ce57e:L4ce57e:{c.instructions+=6;NFSU2_TR(0x4ce57e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ce57f:{NFSU2_TR(0x4ce57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce580:{NFSU2_TR(0x4ce580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ce581:{NFSU2_TR(0x4ce581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ce582:{NFSU2_TR(0x4ce582);
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
B4ce585:{NFSU2_TR(0x4ce585);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce590:L4ce590:{c.instructions+=11;NFSU2_TR(0x4ce590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce591:{NFSU2_TR(0x4ce591);
__builtin_memmove((R+24),(R+4),4);
}
B4ce593:{NFSU2_TR(0x4ce593);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ce596:{NFSU2_TR(0x4ce596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ce59c:{NFSU2_TR(0x4ce59c);
w1(R+4,u8(0x1ull));
}
B4ce59e:{NFSU2_TR(0x4ce59e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
}
B4ce5a0:{NFSU2_TR(0x4ce5a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5a3:{NFSU2_TR(0x4ce5a3);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4ce5a5:{NFSU2_TR(0x4ce5a5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce5a8:{NFSU2_TR(0x4ce5a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5ab:{NFSU2_TR(0x4ce5ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce5b3;}}
}
B4ce5ad:L4ce5ad:{c.instructions+=2;NFSU2_TR(0x4ce5ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5b0:{NFSU2_TR(0x4ce5b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5b3:L4ce5b3:{c.instructions+=2;NFSU2_TR(0x4ce5b3);
__builtin_memmove((R+4),(R+24),4);
}
B4ce5b5:{NFSU2_TR(0x4ce5b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce5baull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce500u);}goto L4ce500;}
}
B4ce5ba:L4ce5ba:{c.instructions+=4;NFSU2_TR(0x4ce5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce5bd:{NFSU2_TR(0x4ce5bd);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce5bf:{NFSU2_TR(0x4ce5bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce5c0:{NFSU2_TR(0x4ce5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce5c5ull));
TAIL_STATIC(0x51de60u,51d);
}
B4ce5c5:L4ce5c5:{c.instructions+=3;NFSU2_TR(0x4ce5c5);
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
B4ce5c8:{NFSU2_TR(0x4ce5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce5c9:{NFSU2_TR(0x4ce5c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce5d0:L4ce5d0:{c.instructions+=8;NFSU2_TR(0x4ce5d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce5d1:{NFSU2_TR(0x4ce5d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ce5d3:{NFSU2_TR(0x4ce5d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ce5d6:{NFSU2_TR(0x4ce5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce5dc:{NFSU2_TR(0x4ce5dc);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B4ce5df:{NFSU2_TR(0x4ce5df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce5e2:{NFSU2_TR(0x4ce5e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5e5:{NFSU2_TR(0x4ce5e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ce5eb;}}
}
B4ce5e7:L4ce5e7:{c.instructions+=1;NFSU2_TR(0x4ce5e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce5eb:L4ce5eb:{c.instructions+=2;NFSU2_TR(0x4ce5eb);
__builtin_memmove((R+4),(R+24),4);
}
B4ce5ed:{NFSU2_TR(0x4ce5ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce5f2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce500u);}goto L4ce500;}
}
B4ce5f2:L4ce5f2:{c.instructions+=4;NFSU2_TR(0x4ce5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce5f5:{NFSU2_TR(0x4ce5f5);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce5f7:{NFSU2_TR(0x4ce5f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce5f8:{NFSU2_TR(0x4ce5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce5fdull));
TAIL_STATIC(0x51de60u,51d);
}
B4ce5fd:L4ce5fd:{c.instructions+=3;NFSU2_TR(0x4ce5fd);
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
B4ce600:{NFSU2_TR(0x4ce600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce601:{NFSU2_TR(0x4ce601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce610:L4ce610:{c.instructions+=8;NFSU2_TR(0x4ce610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce611:{NFSU2_TR(0x4ce611);
__builtin_memmove((R+24),(R+4),4);
}
B4ce613:{NFSU2_TR(0x4ce613);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ce616:{NFSU2_TR(0x4ce616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce61c:{NFSU2_TR(0x4ce61c);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x1ull))));
}
B4ce61f:{NFSU2_TR(0x4ce61f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce621:{NFSU2_TR(0x4ce621);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce624:{NFSU2_TR(0x4ce624);
if(r1(R+518)){{goto L4ce62a;}}
}
B4ce626:L4ce626:{c.instructions+=1;NFSU2_TR(0x4ce626);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ce62a:L4ce62a:{c.instructions+=2;NFSU2_TR(0x4ce62a);
__builtin_memmove((R+4),(R+24),4);
}
B4ce62c:{NFSU2_TR(0x4ce62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce631ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ce500u);}goto L4ce500;}
}
B4ce631:L4ce631:{c.instructions+=4;NFSU2_TR(0x4ce631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce634:{NFSU2_TR(0x4ce634);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce636:{NFSU2_TR(0x4ce636);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce637:{NFSU2_TR(0x4ce637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce63cull));
TAIL_STATIC(0x51de60u,51d);
}
B4ce63c:L4ce63c:{c.instructions+=3;NFSU2_TR(0x4ce63c);
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
B4ce63f:{NFSU2_TR(0x4ce63f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce640:{NFSU2_TR(0x4ce640);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce650:L4ce650:{c.instructions+=8;NFSU2_TR(0x4ce650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce652:{NFSU2_TR(0x4ce652);
u8 U[4];
w4(U+0,u32(0x7744f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce657:{NFSU2_TR(0x4ce657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce65d:{NFSU2_TR(0x4ce65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce65e:{NFSU2_TR(0x4ce65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce665:{NFSU2_TR(0x4ce665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce666:{NFSU2_TR(0x4ce666);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce668:{NFSU2_TR(0x4ce668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce66dull));
TAIL_STATIC(0x575620u,575);
}
B4ce66d:L4ce66d:{c.instructions+=5;NFSU2_TR(0x4ce66d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ce670:{NFSU2_TR(0x4ce670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ce674:{NFSU2_TR(0x4ce674);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce676:{NFSU2_TR(0x4ce676);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce67e:{NFSU2_TR(0x4ce67e);
if(r1(R+518)){{goto L4ce69b;}}
}
B4ce680:L4ce680:{c.instructions+=4;NFSU2_TR(0x4ce680);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce684:{NFSU2_TR(0x4ce684);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce685:{NFSU2_TR(0x4ce685);
__builtin_memmove((R+4),(R+0),4);
}
B4ce687:{NFSU2_TR(0x4ce687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce68cull));
TAIL_STATIC(0x4b5260u,4b5);
}
B4ce68c:L4ce68c:{c.instructions+=4;NFSU2_TR(0x4ce68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce690:{NFSU2_TR(0x4ce690);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce697:{NFSU2_TR(0x4ce697);
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
B4ce69a:{NFSU2_TR(0x4ce69a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce69b:L4ce69b:{c.instructions+=5;NFSU2_TR(0x4ce69b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce69f:{NFSU2_TR(0x4ce69f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ce6a1:{NFSU2_TR(0x4ce6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce6a8:{NFSU2_TR(0x4ce6a8);
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
B4ce6ab:{NFSU2_TR(0x4ce6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce6b0:L4ce6b0:{c.instructions+=8;NFSU2_TR(0x4ce6b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6b2:{NFSU2_TR(0x4ce6b2);
u8 U[4];
w4(U+0,u32(0x774514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6b7:{NFSU2_TR(0x4ce6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce6bd:{NFSU2_TR(0x4ce6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6be:{NFSU2_TR(0x4ce6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce6c5:{NFSU2_TR(0x4ce6c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6c6:{NFSU2_TR(0x4ce6c6);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6c8:{NFSU2_TR(0x4ce6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce6cdull));
TAIL_STATIC(0x575620u,575);
}
B4ce6cd:L4ce6cd:{c.instructions+=5;NFSU2_TR(0x4ce6cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ce6d0:{NFSU2_TR(0x4ce6d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6d4:{NFSU2_TR(0x4ce6d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ce6d6:{NFSU2_TR(0x4ce6d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce6de:{NFSU2_TR(0x4ce6de);
if(r1(R+518)){{goto L4ce6fb;}}
}
B4ce6e0:L4ce6e0:{c.instructions+=4;NFSU2_TR(0x4ce6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce6e4:{NFSU2_TR(0x4ce6e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce6e5:{NFSU2_TR(0x4ce6e5);
__builtin_memmove((R+4),(R+0),4);
}
B4ce6e7:{NFSU2_TR(0x4ce6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce6ecull));
TAIL_STATIC(0x4b5300u,4b5);
}
B4ce6ec:L4ce6ec:{c.instructions+=4;NFSU2_TR(0x4ce6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce6f0:{NFSU2_TR(0x4ce6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce6f7:{NFSU2_TR(0x4ce6f7);
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
B4ce6fa:{NFSU2_TR(0x4ce6fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce6fb:L4ce6fb:{c.instructions+=5;NFSU2_TR(0x4ce6fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce6ff:{NFSU2_TR(0x4ce6ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ce701:{NFSU2_TR(0x4ce701);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce708:{NFSU2_TR(0x4ce708);
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
B4ce70b:{NFSU2_TR(0x4ce70b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce710:L4ce710:{c.instructions+=12;NFSU2_TR(0x4ce710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce712:{NFSU2_TR(0x4ce712);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce717:{NFSU2_TR(0x4ce717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce71d:{NFSU2_TR(0x4ce71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce71e:{NFSU2_TR(0x4ce71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce725:{NFSU2_TR(0x4ce725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce726:{NFSU2_TR(0x4ce726);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce72a:{NFSU2_TR(0x4ce72a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce72b:{NFSU2_TR(0x4ce72b);
__builtin_memmove((R+24),(R+4),4);
}
B4ce72d:{NFSU2_TR(0x4ce72d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce72e:{NFSU2_TR(0x4ce72e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce732:{NFSU2_TR(0x4ce732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce737ull));
TAIL_STATIC(0x551de0u,551);
}
B4ce737:L4ce737:{c.instructions+=10;NFSU2_TR(0x4ce737);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ce739:{NFSU2_TR(0x4ce739);
__builtin_memmove((R+4),(R+24),4);
}
B4ce73b:{NFSU2_TR(0x4ce73b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce73f:{NFSU2_TR(0x4ce73f);
u8 U[4];
w4(U+0,u32(0x78f988ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ce745:{NFSU2_TR(0x4ce745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce748:{NFSU2_TR(0x4ce748);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce74b:{NFSU2_TR(0x4ce74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce74e:{NFSU2_TR(0x4ce74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce751:{NFSU2_TR(0x4ce751);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce754:{NFSU2_TR(0x4ce754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce759ull));
TAIL_STATIC(0x4b53c0u,4b5);
}
B4ce759:L4ce759:{c.instructions+=6;NFSU2_TR(0x4ce759);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce75d:{NFSU2_TR(0x4ce75d);
__builtin_memmove((R+0),(R+24),4);
}
B4ce75f:{NFSU2_TR(0x4ce75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ce760:{NFSU2_TR(0x4ce760);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce767:{NFSU2_TR(0x4ce767);
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
B4ce76a:{NFSU2_TR(0x4ce76a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ce770:L4ce770:{c.instructions+=16;NFSU2_TR(0x4ce770);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce771:{NFSU2_TR(0x4ce771);
__builtin_memmove((R+20),(R+16),4);
}
B4ce773:{NFSU2_TR(0x4ce773);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce775:{NFSU2_TR(0x4ce775);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce77a:{NFSU2_TR(0x4ce77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce780:{NFSU2_TR(0x4ce780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce781:{NFSU2_TR(0x4ce781);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce788:{NFSU2_TR(0x4ce788);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce789:{NFSU2_TR(0x4ce789);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce78a:{NFSU2_TR(0x4ce78a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce78b:{NFSU2_TR(0x4ce78b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce78c:{NFSU2_TR(0x4ce78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce78f:{NFSU2_TR(0x4ce78f);
__builtin_memmove((R+24),(R+4),4);
}
B4ce791:{NFSU2_TR(0x4ce791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce792:{NFSU2_TR(0x4ce792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce795:{NFSU2_TR(0x4ce795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce79aull));
TAIL_STATIC(0x551de0u,551);
}
B4ce79a:L4ce79a:{c.instructions+=12;NFSU2_TR(0x4ce79a);
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
B4ce79c:{NFSU2_TR(0x4ce79c);
u8 U[4];
w4(U+0,u32(0x78f998ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ce7a2:{NFSU2_TR(0x4ce7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7a9:{NFSU2_TR(0x4ce7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7af:{NFSU2_TR(0x4ce7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7b5:{NFSU2_TR(0x4ce7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7bb:{NFSU2_TR(0x4ce7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7c1:{NFSU2_TR(0x4ce7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7c7:{NFSU2_TR(0x4ce7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ce7ca:{NFSU2_TR(0x4ce7ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce7cb:{NFSU2_TR(0x4ce7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce7ce:{NFSU2_TR(0x4ce7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce7d3ull));
TAIL_STATIC(0x504820u,504);
}
B4ce7d3:L4ce7d3:{c.instructions+=3;NFSU2_TR(0x4ce7d3);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4ce7d9:{NFSU2_TR(0x4ce7d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ce7db:{NFSU2_TR(0x4ce7db);
if(r1(R+518)){{goto L4ce7ef;}}
}
B4ce7dd:L4ce7dd:{c.instructions+=2;NFSU2_TR(0x4ce7dd);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ce7e0:{NFSU2_TR(0x4ce7e0);
if(r1(R+518)){{goto L4ce7ef;}}
}
B4ce7e2:L4ce7e2:{c.instructions+=2;NFSU2_TR(0x4ce7e2);
u8 U[2];
__builtin_memmove((U+0),gp(0x8384dc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ce7e8:{NFSU2_TR(0x4ce7e8);
if(r1(R+518)){{goto L4ce7ef;}}
}
B4ce7ea:L4ce7ea:{c.instructions+=1;NFSU2_TR(0x4ce7ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce7efull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4ce7ef:L4ce7ef:{c.instructions+=4;NFSU2_TR(0x4ce7ef);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4ce7f4:{NFSU2_TR(0x4ce7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ce7f7:{NFSU2_TR(0x4ce7f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce7f8:{NFSU2_TR(0x4ce7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce7fdull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4ce7fd:L4ce7fd:{c.instructions+=3;NFSU2_TR(0x4ce7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce7fe:{NFSU2_TR(0x4ce7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce7ff:{NFSU2_TR(0x4ce7ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce804ull));
TAIL_STATIC(0x537950u,537);
}
B4ce804:L4ce804:{c.instructions+=2;NFSU2_TR(0x4ce804);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce805:{NFSU2_TR(0x4ce805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce80aull));
TAIL_STATIC(0x4ac9b0u,4ac);
}
B4ce80a:L4ce80a:{c.instructions+=17;NFSU2_TR(0x4ce80a);
__builtin_memmove(gp(0x7f68b4),(R+12),4);
}
B4ce810:{NFSU2_TR(0x4ce810);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ce813:{NFSU2_TR(0x4ce813);
w4(R+4,u32(0x832dacull));
}
B4ce818:{NFSU2_TR(0x4ce818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce81b:{NFSU2_TR(0x4ce81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce81e:{NFSU2_TR(0x4ce81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x95ad0949ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce825:{NFSU2_TR(0x4ce825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x95ad094aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce82c:{NFSU2_TR(0x4ce82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x95ad094bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce833:{NFSU2_TR(0x4ce833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x95ad094cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce83a:{NFSU2_TR(0x4ce83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0xc2ea8de7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce841:{NFSU2_TR(0x4ce841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0xc2ea8de8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce848:{NFSU2_TR(0x4ce848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0xc2ea8de9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce84f:{NFSU2_TR(0x4ce84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0xc2ea8deaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce856:{NFSU2_TR(0x4ce856);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce85c:{NFSU2_TR(0x4ce85c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce862:{NFSU2_TR(0x4ce862);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce868:{NFSU2_TR(0x4ce868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce86dull));
TAIL_STATIC(0x488ae0u,488);
}
B4ce86d:L4ce86d:{c.instructions+=9;NFSU2_TR(0x4ce86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce870:{NFSU2_TR(0x4ce870);
u8 U[4];
w4(U+0,u32(0xc2ea8de7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce875:{NFSU2_TR(0x4ce875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce876:{NFSU2_TR(0x4ce876);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce87c:{NFSU2_TR(0x4ce87c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce882:{NFSU2_TR(0x4ce882);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce888:{NFSU2_TR(0x4ce888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce88e:{NFSU2_TR(0x4ce88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce898:{NFSU2_TR(0x4ce898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce89dull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce89d:L4ce89d:{c.instructions+=5;NFSU2_TR(0x4ce89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce8a3:{NFSU2_TR(0x4ce8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce8a6:{NFSU2_TR(0x4ce8a6);
u8 U[4];
w4(U+0,u32(0xc2ea8de8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8ab:{NFSU2_TR(0x4ce8ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8ac:{NFSU2_TR(0x4ce8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce8b1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce8b1:L4ce8b1:{c.instructions+=5;NFSU2_TR(0x4ce8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce8b7:{NFSU2_TR(0x4ce8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce8ba:{NFSU2_TR(0x4ce8ba);
u8 U[4];
w4(U+0,u32(0xc2ea8de9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8bf:{NFSU2_TR(0x4ce8bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8c0:{NFSU2_TR(0x4ce8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce8c5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce8c5:L4ce8c5:{c.instructions+=5;NFSU2_TR(0x4ce8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce8cb:{NFSU2_TR(0x4ce8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce8ce:{NFSU2_TR(0x4ce8ce);
u8 U[4];
w4(U+0,u32(0xc2ea8deaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8d3:{NFSU2_TR(0x4ce8d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8d4:{NFSU2_TR(0x4ce8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce8d9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce8d9:L4ce8d9:{c.instructions+=5;NFSU2_TR(0x4ce8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce8df:{NFSU2_TR(0x4ce8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce8e2:{NFSU2_TR(0x4ce8e2);
u8 U[4];
w4(U+0,u32(0x69ba0835ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8e7:{NFSU2_TR(0x4ce8e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8e8:{NFSU2_TR(0x4ce8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce8edull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce8ed:L4ce8ed:{c.instructions+=5;NFSU2_TR(0x4ce8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce8f3:{NFSU2_TR(0x4ce8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce8f6:{NFSU2_TR(0x4ce8f6);
u8 U[4];
w4(U+0,u32(0x69ba0836ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8fb:{NFSU2_TR(0x4ce8fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce8fc:{NFSU2_TR(0x4ce8fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce901ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce901:L4ce901:{c.instructions+=5;NFSU2_TR(0x4ce901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce907:{NFSU2_TR(0x4ce907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ce90a:{NFSU2_TR(0x4ce90a);
u8 U[4];
w4(U+0,u32(0x69ba0837ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce90f:{NFSU2_TR(0x4ce90f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce910:{NFSU2_TR(0x4ce910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce915ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ce915:L4ce915:{c.instructions+=19;NFSU2_TR(0x4ce915);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4ce918:{NFSU2_TR(0x4ce918);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce91e:{NFSU2_TR(0x4ce91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0xb8a7c6ccull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce928:{NFSU2_TR(0x4ce928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0xb8a7c6cdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce932:{NFSU2_TR(0x4ce932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0xb8a7c6ceull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce93c:{NFSU2_TR(0x4ce93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x69ba0835ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce946:{NFSU2_TR(0x4ce946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x69ba0836ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce950:{NFSU2_TR(0x4ce950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w4(U+4,u32(0x69ba0837ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce95a:{NFSU2_TR(0x4ce95a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce960:{NFSU2_TR(0x4ce960);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce966:{NFSU2_TR(0x4ce966);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce96c:{NFSU2_TR(0x4ce96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce972:{NFSU2_TR(0x4ce972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce978:{NFSU2_TR(0x4ce978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ce97e:{NFSU2_TR(0x4ce97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ce988:{NFSU2_TR(0x4ce988);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ce98e:{NFSU2_TR(0x4ce98e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce98f:{NFSU2_TR(0x4ce98f);
w4(R+4,u32(0x85b940ull));
}
B4ce994:{NFSU2_TR(0x4ce994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce999ull));
TAIL_STATIC(0x541960u,541);
}
B4ce999:L4ce999:{c.instructions+=2;NFSU2_TR(0x4ce999);
w4(R+4,u32(0x827e88ull));
}
B4ce99e:{NFSU2_TR(0x4ce99e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9a3ull));
TAIL_STATIC(0x4302c0u,430);
}
B4ce9a3:L4ce9a3:{c.instructions+=2;NFSU2_TR(0x4ce9a3);
w4(R+4,u32(0x827e88ull));
}
B4ce9a8:{NFSU2_TR(0x4ce9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9adull));
TAIL_STATIC(0x4302f0u,430);
}
B4ce9ad:L4ce9ad:{c.instructions+=3;NFSU2_TR(0x4ce9ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce9af:{NFSU2_TR(0x4ce9af);
w4(R+4,u32(0x85ef50ull));
}
B4ce9b4:{NFSU2_TR(0x4ce9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9b9ull));
TAIL_STATIC(0x5012e0u,501);
}
B4ce9b9:L4ce9b9:{c.instructions+=3;NFSU2_TR(0x4ce9b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce9bb:{NFSU2_TR(0x4ce9bb);
w4(R+4,u32(0x85ef50ull));
}
B4ce9c0:{NFSU2_TR(0x4ce9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9c5ull));
TAIL_STATIC(0x501290u,501);
}
B4ce9c5:L4ce9c5:{c.instructions+=2;NFSU2_TR(0x4ce9c5);
w4(R+4,u32(0x8a3288ull));
}
B4ce9ca:{NFSU2_TR(0x4ce9ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9cfull));
TAIL_STATIC(0x633a00u,633);
}
B4ce9cf:L4ce9cf:{c.instructions+=3;NFSU2_TR(0x4ce9cf);
__builtin_memmove((R+4),(R+24),4);
}
B4ce9d1:{NFSU2_TR(0x4ce9d1);
s1(0x836352,u8(0x1ull));
}
B4ce9d8:{NFSU2_TR(0x4ce9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9ddull));
TAIL_STATIC(0x499ec0u,499);
}
B4ce9dd:L4ce9dd:{c.instructions+=8;NFSU2_TR(0x4ce9dd);
__builtin_memmove((R+28),gp(0x863444),4);
}
B4ce9e3:{NFSU2_TR(0x4ce9e3);
__builtin_memmove((R+0),gp(0x863450),4);
}
B4ce9e8:{NFSU2_TR(0x4ce9e8);
w1(R+512,u8((r4(R+28))!=(u32(0x0ull))));
w4(R+28,u32(0-u32(r4(R+28))));
}
B4ce9ea:{NFSU2_TR(0x4ce9ea);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(R+28))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ce9ec:{NFSU2_TR(0x4ce9ec);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B4ce9ee:{NFSU2_TR(0x4ce9ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ce9ef:{NFSU2_TR(0x4ce9ef);
w4(R+4,u32(0x85ef50ull));
}
B4ce9f4:{NFSU2_TR(0x4ce9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ce9f9ull));
TAIL_STATIC(0x541930u,541);
}
B4ce9f9:L4ce9f9:{c.instructions+=3;NFSU2_TR(0x4ce9f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ce9fc:{NFSU2_TR(0x4ce9fc);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ce9fe:{NFSU2_TR(0x4ce9fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cea07;}}
}
B4cea00:L4cea00:{c.instructions+=1;NFSU2_TR(0x4cea00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea05ull));
TAIL_STATIC(0x510c50u,510);
}
B4cea05:L4cea05:{c.instructions+=1;NFSU2_TR(0x4cea05);
{goto L4cea10;}
}
B4cea07:L4cea07:{c.instructions+=2;NFSU2_TR(0x4cea07);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4cea09:{NFSU2_TR(0x4cea09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cea10;}}
}
B4cea0b:L4cea0b:{c.instructions+=1;NFSU2_TR(0x4cea0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea10ull));
TAIL_STATIC(0x510c60u,510);
}
B4cea10:L4cea10:{c.instructions+=6;NFSU2_TR(0x4cea10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea11:{NFSU2_TR(0x4cea11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea12:{NFSU2_TR(0x4cea12);
__builtin_memmove((R+4),(R+24),4);
}
B4cea14:{NFSU2_TR(0x4cea14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cea17:{NFSU2_TR(0x4cea17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cea1a:{NFSU2_TR(0x4cea1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea1full));
TAIL_STATIC(0x4b57b0u,4b5);
}
B4cea1f:L4cea1f:{c.instructions+=3;NFSU2_TR(0x4cea1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cea22:{NFSU2_TR(0x4cea22);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea27:{NFSU2_TR(0x4cea27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea2cull));
TAIL_STATIC(0x505450u,505);
}
B4cea2c:L4cea2c:{c.instructions+=3;NFSU2_TR(0x4cea2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea2d:{NFSU2_TR(0x4cea2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea2e:{NFSU2_TR(0x4cea2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea33ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cea33:L4cea33:{c.instructions+=2;NFSU2_TR(0x4cea33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea34:{NFSU2_TR(0x4cea34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea39ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cea39:L4cea39:{c.instructions+=2;NFSU2_TR(0x4cea39);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea3e:{NFSU2_TR(0x4cea3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea43ull));
TAIL_STATIC(0x505450u,505);
}
B4cea43:L4cea43:{c.instructions+=3;NFSU2_TR(0x4cea43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea44:{NFSU2_TR(0x4cea44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea45:{NFSU2_TR(0x4cea45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea4aull));
TAIL_STATIC(0x5379c0u,537);
}
B4cea4a:L4cea4a:{c.instructions+=2;NFSU2_TR(0x4cea4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea4b:{NFSU2_TR(0x4cea4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea50ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cea50:L4cea50:{c.instructions+=3;NFSU2_TR(0x4cea50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4cea53:{NFSU2_TR(0x4cea53);
__builtin_memmove((R+4),(R+24),4);
}
B4cea55:{NFSU2_TR(0x4cea55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cea5aull));
TAIL_STATIC(0x49a460u,49a);
}
B4cea5a:L4cea5a:{c.instructions+=9;NFSU2_TR(0x4cea5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cea5d:{NFSU2_TR(0x4cea5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cea5e:{NFSU2_TR(0x4cea5e);
__builtin_memmove((R+0),(R+24),4);
}
B4cea60:{NFSU2_TR(0x4cea60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cea61:{NFSU2_TR(0x4cea61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cea62:{NFSU2_TR(0x4cea62);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cea69:{NFSU2_TR(0x4cea69);
__builtin_memmove((R+16),(R+20),4);
}
B4cea6b:{NFSU2_TR(0x4cea6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cea6c:{NFSU2_TR(0x4cea6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cea70:L4cea70:{c.instructions+=6;NFSU2_TR(0x4cea70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea71:{NFSU2_TR(0x4cea71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cea75:{NFSU2_TR(0x4cea75);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cea7a:{NFSU2_TR(0x4cea7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cea7b:{NFSU2_TR(0x4cea7b);
__builtin_memmove((R+24),(R+4),4);
}
B4cea7d:{NFSU2_TR(0x4cea7d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cec43;}}
}
B4cea83:L4cea83:{c.instructions+=1;NFSU2_TR(0x4cea83);
if(r1(R+518)){{goto L4ceb80;}}
}
B4cea89:L4cea89:{c.instructions+=2;NFSU2_TR(0x4cea89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cea8e:{NFSU2_TR(0x4cea8e);
if(r1(R+518)){{goto L4ceb61;}}
}
B4cea94:L4cea94:{c.instructions+=2;NFSU2_TR(0x4cea94);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cea99:{NFSU2_TR(0x4cea99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ceda9;}}
}
B4cea9f:L4cea9f:{c.instructions+=3;NFSU2_TR(0x4cea9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceaa2:{NFSU2_TR(0x4ceaa2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ceaa4:{NFSU2_TR(0x4ceaa4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ceb4a;}}
}
B4ceaaa:L4ceaaa:{c.instructions+=7;NFSU2_TR(0x4ceaaa);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ceaae:{NFSU2_TR(0x4ceaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceab1:{NFSU2_TR(0x4ceab1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceab3:{NFSU2_TR(0x4ceab3);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceab8:{NFSU2_TR(0x4ceab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceab9:{NFSU2_TR(0x4ceab9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceaba:{NFSU2_TR(0x4ceaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceabfull));
TAIL_STATIC(0x537c00u,537);
}
B4ceabf:L4ceabf:{c.instructions+=8;NFSU2_TR(0x4ceabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceac2:{NFSU2_TR(0x4ceac2);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ceac6:{NFSU2_TR(0x4ceac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceac9:{NFSU2_TR(0x4ceac9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceacb:{NFSU2_TR(0x4ceacb);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cead0:{NFSU2_TR(0x4cead0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cead1:{NFSU2_TR(0x4cead1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cead2:{NFSU2_TR(0x4cead2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cead7ull));
TAIL_STATIC(0x537c00u,537);
}
B4cead7:L4cead7:{c.instructions+=7;NFSU2_TR(0x4cead7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceada:{NFSU2_TR(0x4ceada);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ceade:{NFSU2_TR(0x4ceade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceae1:{NFSU2_TR(0x4ceae1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceae3:{NFSU2_TR(0x4ceae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceae4:{NFSU2_TR(0x4ceae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceae5:{NFSU2_TR(0x4ceae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceaeaull));
TAIL_STATIC(0x51cda0u,51c);
}
B4ceaea:L4ceaea:{c.instructions+=10;NFSU2_TR(0x4ceaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceaed:{NFSU2_TR(0x4ceaed);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4ceaee:{NFSU2_TR(0x4ceaee);
__builtin_memmove((R+0),(R+8),4);
}
B4ceaf0:{NFSU2_TR(0x4ceaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ceaf3:{NFSU2_TR(0x4ceaf3);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4ceaf7:{NFSU2_TR(0x4ceaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceafa:{NFSU2_TR(0x4ceafa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceafc:{NFSU2_TR(0x4ceafc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceafd:{NFSU2_TR(0x4ceafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceafe:{NFSU2_TR(0x4ceafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb03ull));
TAIL_STATIC(0x51cda0u,51c);
}
B4ceb03:L4ceb03:{c.instructions+=6;NFSU2_TR(0x4ceb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceb06:{NFSU2_TR(0x4ceb06);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4ceb0a:{NFSU2_TR(0x4ceb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceb0d:{NFSU2_TR(0x4ceb0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb0e:{NFSU2_TR(0x4ceb0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb0f:{NFSU2_TR(0x4ceb0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb14ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4ceb14:L4ceb14:{c.instructions+=9;NFSU2_TR(0x4ceb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceb17:{NFSU2_TR(0x4ceb17);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4ceb1b:{NFSU2_TR(0x4ceb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceb1e:{NFSU2_TR(0x4ceb1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4ceb21:{NFSU2_TR(0x4ceb21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb23:{NFSU2_TR(0x4ceb23);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb28:{NFSU2_TR(0x4ceb28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb29:{NFSU2_TR(0x4ceb29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb2a:{NFSU2_TR(0x4ceb2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb2full));
TAIL_STATIC(0x537c00u,537);
}
B4ceb2f:L4ceb2f:{c.instructions+=8;NFSU2_TR(0x4ceb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceb32:{NFSU2_TR(0x4ceb32);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4ceb36:{NFSU2_TR(0x4ceb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceb39:{NFSU2_TR(0x4ceb39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb3b:{NFSU2_TR(0x4ceb3b);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb40:{NFSU2_TR(0x4ceb40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb41:{NFSU2_TR(0x4ceb41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb42:{NFSU2_TR(0x4ceb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb47ull));
TAIL_STATIC(0x537c00u,537);
}
B4ceb47:L4ceb47:{c.instructions+=1;NFSU2_TR(0x4ceb47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4ceb4a:L4ceb4a:{c.instructions+=6;NFSU2_TR(0x4ceb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceb4d:{NFSU2_TR(0x4ceb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceb50:{NFSU2_TR(0x4ceb50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb51:{NFSU2_TR(0x4ceb51);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb53:{NFSU2_TR(0x4ceb53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb54:{NFSU2_TR(0x4ceb54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb59ull));
TAIL_STATIC(0x50d150u,50d);
}
B4ceb59:L4ceb59:{c.instructions+=4;NFSU2_TR(0x4ceb59);
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
B4ceb5c:{NFSU2_TR(0x4ceb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ceb5d:{NFSU2_TR(0x4ceb5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ceb5e:{NFSU2_TR(0x4ceb5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ceb61:L4ceb61:{c.instructions+=3;NFSU2_TR(0x4ceb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceb64:{NFSU2_TR(0x4ceb64);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ceb67:{NFSU2_TR(0x4ceb67);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ceda9;}}
}
B4ceb6d:L4ceb6d:{c.instructions+=1;NFSU2_TR(0x4ceb6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4cedb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ceb74:L4ceb74:{c.instructions+=2;NFSU2_TR(0x4ceb74);
__builtin_memmove((R+4),(R+24),4);
}
B4ceb76:{NFSU2_TR(0x4ceb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceb7bull));
TAIL_STATIC(0x4b5c70u,4b5);
}
B4ceb7b:L4ceb7b:{c.instructions+=3;NFSU2_TR(0x4ceb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ceb7c:{NFSU2_TR(0x4ceb7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ceb7d:{NFSU2_TR(0x4ceb7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ceb80:L4ceb80:{c.instructions+=3;NFSU2_TR(0x4ceb80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceb83:{NFSU2_TR(0x4ceb83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ceb86:{NFSU2_TR(0x4ceb86);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4cec2c;}}
}
B4ceb8c:L4ceb8c:{c.instructions+=7;NFSU2_TR(0x4ceb8c);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ceb90:{NFSU2_TR(0x4ceb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceb93:{NFSU2_TR(0x4ceb93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb95:{NFSU2_TR(0x4ceb95);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb9a:{NFSU2_TR(0x4ceb9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb9b:{NFSU2_TR(0x4ceb9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceb9c:{NFSU2_TR(0x4ceb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceba1ull));
TAIL_STATIC(0x537c00u,537);
}
B4ceba1:L4ceba1:{c.instructions+=8;NFSU2_TR(0x4ceba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceba4:{NFSU2_TR(0x4ceba4);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ceba8:{NFSU2_TR(0x4ceba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cebab:{NFSU2_TR(0x4cebab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebad:{NFSU2_TR(0x4cebad);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebb2:{NFSU2_TR(0x4cebb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebb3:{NFSU2_TR(0x4cebb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebb4:{NFSU2_TR(0x4cebb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cebb9ull));
TAIL_STATIC(0x537c00u,537);
}
B4cebb9:L4cebb9:{c.instructions+=7;NFSU2_TR(0x4cebb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cebbc:{NFSU2_TR(0x4cebbc);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4cebc0:{NFSU2_TR(0x4cebc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cebc3:{NFSU2_TR(0x4cebc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebc5:{NFSU2_TR(0x4cebc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebc6:{NFSU2_TR(0x4cebc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebc7:{NFSU2_TR(0x4cebc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cebccull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cebcc:L4cebcc:{c.instructions+=10;NFSU2_TR(0x4cebcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cebcf:{NFSU2_TR(0x4cebcf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4cebd0:{NFSU2_TR(0x4cebd0);
__builtin_memmove((R+0),(R+8),4);
}
B4cebd2:{NFSU2_TR(0x4cebd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cebd5:{NFSU2_TR(0x4cebd5);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4cebd9:{NFSU2_TR(0x4cebd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cebdc:{NFSU2_TR(0x4cebdc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebde:{NFSU2_TR(0x4cebde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebdf:{NFSU2_TR(0x4cebdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebe0:{NFSU2_TR(0x4cebe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cebe5ull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cebe5:L4cebe5:{c.instructions+=6;NFSU2_TR(0x4cebe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cebe8:{NFSU2_TR(0x4cebe8);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4cebec:{NFSU2_TR(0x4cebec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cebef:{NFSU2_TR(0x4cebef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebf0:{NFSU2_TR(0x4cebf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cebf1:{NFSU2_TR(0x4cebf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cebf6ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4cebf6:L4cebf6:{c.instructions+=9;NFSU2_TR(0x4cebf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cebf9:{NFSU2_TR(0x4cebf9);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4cebfd:{NFSU2_TR(0x4cebfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cec00:{NFSU2_TR(0x4cec00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4cec03:{NFSU2_TR(0x4cec03);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec05:{NFSU2_TR(0x4cec05);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec0a:{NFSU2_TR(0x4cec0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec0b:{NFSU2_TR(0x4cec0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec0c:{NFSU2_TR(0x4cec0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cec11ull));
TAIL_STATIC(0x537c00u,537);
}
B4cec11:L4cec11:{c.instructions+=8;NFSU2_TR(0x4cec11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cec14:{NFSU2_TR(0x4cec14);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B4cec18:{NFSU2_TR(0x4cec18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cec1b:{NFSU2_TR(0x4cec1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec1d:{NFSU2_TR(0x4cec1d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec22:{NFSU2_TR(0x4cec22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec23:{NFSU2_TR(0x4cec23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec24:{NFSU2_TR(0x4cec24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cec29ull));
TAIL_STATIC(0x537c00u,537);
}
B4cec29:L4cec29:{c.instructions+=1;NFSU2_TR(0x4cec29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4cec2c:L4cec2c:{c.instructions+=6;NFSU2_TR(0x4cec2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cec2f:{NFSU2_TR(0x4cec2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cec32:{NFSU2_TR(0x4cec32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec33:{NFSU2_TR(0x4cec33);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec35:{NFSU2_TR(0x4cec35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec36:{NFSU2_TR(0x4cec36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cec3bull));
TAIL_STATIC(0x50d150u,50d);
}
B4cec3b:L4cec3b:{c.instructions+=4;NFSU2_TR(0x4cec3b);
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
B4cec3e:{NFSU2_TR(0x4cec3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cec3f:{NFSU2_TR(0x4cec3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cec40:{NFSU2_TR(0x4cec40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cec43:L4cec43:{c.instructions+=2;NFSU2_TR(0x4cec43);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cec48:{NFSU2_TR(0x4cec48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ceda9;}}
}
B4cec4e:L4cec4e:{c.instructions+=4;NFSU2_TR(0x4cec4e);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B4cec53:{NFSU2_TR(0x4cec53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cec55:{NFSU2_TR(0x4cec55);
w4(R+0,u32(m1(0x8763f2)));
}
B4cec5c:{NFSU2_TR(0x4cec5c);
if(r1(R+518)){{goto L4cec65;}}
}
B4cec5e:L4cec5e:{c.instructions+=1;NFSU2_TR(0x4cec5e);
w4(R+0,u32(m1(0x8763f5)));
}
B4cec65:L4cec65:{c.instructions+=2;NFSU2_TR(0x4cec65);
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
B4cec67:{NFSU2_TR(0x4cec67);
if(r1(R+518)){{goto L4cecf3;}}
}
B4cec6d:L4cec6d:{c.instructions+=3;NFSU2_TR(0x4cec6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cec73:{NFSU2_TR(0x4cec73);
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
B4cec75:{NFSU2_TR(0x4cec75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ceda9;}}
}
B4cec7b:L4cec7b:{c.instructions+=3;NFSU2_TR(0x4cec7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cec81:{NFSU2_TR(0x4cec81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec82:{NFSU2_TR(0x4cec82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cec87ull));
TAIL_STATIC(0x52d100u,52d);
}
B4cec87:L4cec87:{c.instructions+=3;NFSU2_TR(0x4cec87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cec8a:{NFSU2_TR(0x4cec8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cec8c:{NFSU2_TR(0x4cec8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ceb74u);}goto L4ceb74;}}
}
B4cec92:L4cec92:{c.instructions+=3;NFSU2_TR(0x4cec92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cec98:{NFSU2_TR(0x4cec98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cec99:{NFSU2_TR(0x4cec99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cec9eull));
TAIL_STATIC(0x52d100u,52d);
}
B4cec9e:L4cec9e:{c.instructions+=3;NFSU2_TR(0x4cec9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ceca1:{NFSU2_TR(0x4ceca1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ceca3:{NFSU2_TR(0x4ceca3);
if(r1(R+518)){{goto L4cecb1;}}
}
B4ceca5:L4ceca5:{c.instructions+=2;NFSU2_TR(0x4ceca5);
__builtin_memmove((R+4),(R+24),4);
}
B4ceca7:{NFSU2_TR(0x4ceca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cecacull));
TAIL_STATIC(0x4b5d80u,4b5);
}
B4cecac:L4cecac:{c.instructions+=3;NFSU2_TR(0x4cecac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cecad:{NFSU2_TR(0x4cecad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cecae:{NFSU2_TR(0x4cecae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cecb1:L4cecb1:{c.instructions+=3;NFSU2_TR(0x4cecb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cecb7:{NFSU2_TR(0x4cecb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cecb8:{NFSU2_TR(0x4cecb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cecbdull));
TAIL_STATIC(0x52d100u,52d);
}
B4cecbd:L4cecbd:{c.instructions+=3;NFSU2_TR(0x4cecbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cecc0:{NFSU2_TR(0x4cecc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cecc2:{NFSU2_TR(0x4cecc2);
if(r1(R+518)){{goto L4cecd0;}}
}
B4cecc4:L4cecc4:{c.instructions+=2;NFSU2_TR(0x4cecc4);
__builtin_memmove((R+4),(R+24),4);
}
B4cecc6:{NFSU2_TR(0x4cecc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceccbull));
TAIL_STATIC(0x4b5ea0u,4b5);
}
B4ceccb:L4ceccb:{c.instructions+=3;NFSU2_TR(0x4ceccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ceccc:{NFSU2_TR(0x4ceccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ceccd:{NFSU2_TR(0x4ceccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cecd0:L4cecd0:{c.instructions+=3;NFSU2_TR(0x4cecd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cecd6:{NFSU2_TR(0x4cecd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cecd7:{NFSU2_TR(0x4cecd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cecdcull));
TAIL_STATIC(0x52d100u,52d);
}
B4cecdc:L4cecdc:{c.instructions+=3;NFSU2_TR(0x4cecdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cecdf:{NFSU2_TR(0x4cecdf);
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
B4cece1:{NFSU2_TR(0x4cece1);
if(r1(R+518)){{goto L4ceda9;}}
}
B4cece7:L4cece7:{c.instructions+=2;NFSU2_TR(0x4cece7);
__builtin_memmove((R+4),(R+24),4);
}
B4cece9:{NFSU2_TR(0x4cece9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceceeull));
TAIL_STATIC(0x4cf460u,4cf);
}
B4cecee:L4cecee:{c.instructions+=3;NFSU2_TR(0x4cecee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cecef:{NFSU2_TR(0x4cecef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cecf0:{NFSU2_TR(0x4cecf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cecf3:L4cecf3:{c.instructions+=5;NFSU2_TR(0x4cecf3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cecf7:{NFSU2_TR(0x4cecf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cecf8:{NFSU2_TR(0x4cecf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cecfc:{NFSU2_TR(0x4cecfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cecfd:{NFSU2_TR(0x4cecfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced02ull));
TAIL_STATIC(0x50cd70u,50c);
}
B4ced02:L4ced02:{c.instructions+=7;NFSU2_TR(0x4ced02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ced08:{NFSU2_TR(0x4ced08);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ced0c:{NFSU2_TR(0x4ced0c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ced10:{NFSU2_TR(0x4ced10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced11:{NFSU2_TR(0x4ced11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced12:{NFSU2_TR(0x4ced12);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced13:{NFSU2_TR(0x4ced13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced18ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ced18:L4ced18:{c.instructions+=3;NFSU2_TR(0x4ced18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ced1b:{NFSU2_TR(0x4ced1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ced1d:{NFSU2_TR(0x4ced1d);
if(r1(R+518)){{goto L4ced2d;}}
}
B4ced1f:L4ced1f:{c.instructions+=3;NFSU2_TR(0x4ced1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced21:{NFSU2_TR(0x4ced21);
__builtin_memmove((R+4),(R+24),4);
}
B4ced23:{NFSU2_TR(0x4ced23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced28ull));
TAIL_STATIC(0x49a050u,49a);
}
B4ced28:L4ced28:{c.instructions+=3;NFSU2_TR(0x4ced28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ced29:{NFSU2_TR(0x4ced29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ced2a:{NFSU2_TR(0x4ced2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ced2d:L4ced2d:{c.instructions+=7;NFSU2_TR(0x4ced2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ced33:{NFSU2_TR(0x4ced33);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ced37:{NFSU2_TR(0x4ced37);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ced3b:{NFSU2_TR(0x4ced3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced3c:{NFSU2_TR(0x4ced3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced3d:{NFSU2_TR(0x4ced3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced3e:{NFSU2_TR(0x4ced3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced43ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ced43:L4ced43:{c.instructions+=3;NFSU2_TR(0x4ced43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ced46:{NFSU2_TR(0x4ced46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ced48:{NFSU2_TR(0x4ced48);
if(r1(R+518)){{goto L4ced58;}}
}
B4ced4a:L4ced4a:{c.instructions+=3;NFSU2_TR(0x4ced4a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced4c:{NFSU2_TR(0x4ced4c);
__builtin_memmove((R+4),(R+24),4);
}
B4ced4e:{NFSU2_TR(0x4ced4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced53ull));
TAIL_STATIC(0x49a050u,49a);
}
B4ced53:L4ced53:{c.instructions+=3;NFSU2_TR(0x4ced53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ced54:{NFSU2_TR(0x4ced54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ced55:{NFSU2_TR(0x4ced55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ced58:L4ced58:{c.instructions+=7;NFSU2_TR(0x4ced58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ced5e:{NFSU2_TR(0x4ced5e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ced62:{NFSU2_TR(0x4ced62);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ced66:{NFSU2_TR(0x4ced66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced67:{NFSU2_TR(0x4ced67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced68:{NFSU2_TR(0x4ced68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced69:{NFSU2_TR(0x4ced69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced6eull));
TAIL_STATIC(0x52d020u,52d);
}
B4ced6e:L4ced6e:{c.instructions+=3;NFSU2_TR(0x4ced6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ced71:{NFSU2_TR(0x4ced71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ced73:{NFSU2_TR(0x4ced73);
if(r1(R+518)){{goto L4ced83;}}
}
B4ced75:L4ced75:{c.instructions+=3;NFSU2_TR(0x4ced75);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced77:{NFSU2_TR(0x4ced77);
__builtin_memmove((R+4),(R+24),4);
}
B4ced79:{NFSU2_TR(0x4ced79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced7eull));
TAIL_STATIC(0x49a050u,49a);
}
B4ced7e:L4ced7e:{c.instructions+=3;NFSU2_TR(0x4ced7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ced7f:{NFSU2_TR(0x4ced7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ced80:{NFSU2_TR(0x4ced80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ced83:L4ced83:{c.instructions+=7;NFSU2_TR(0x4ced83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ced89:{NFSU2_TR(0x4ced89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ced8d:{NFSU2_TR(0x4ced8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ced91:{NFSU2_TR(0x4ced91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced92:{NFSU2_TR(0x4ced92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced93:{NFSU2_TR(0x4ced93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ced94:{NFSU2_TR(0x4ced94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ced99ull));
TAIL_STATIC(0x52d020u,52d);
}
B4ced99:L4ced99:{c.instructions+=3;NFSU2_TR(0x4ced99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ced9c:{NFSU2_TR(0x4ced9c);
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
B4ced9e:{NFSU2_TR(0x4ced9e);
if(r1(R+518)){{goto L4ceda9;}}
}
B4ceda0:L4ceda0:{c.instructions+=3;NFSU2_TR(0x4ceda0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceda2:{NFSU2_TR(0x4ceda2);
__builtin_memmove((R+4),(R+24),4);
}
B4ceda4:{NFSU2_TR(0x4ceda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceda9ull));
TAIL_STATIC(0x49a050u,49a);
}
B4ceda9:L4ceda9:{c.instructions+=3;NFSU2_TR(0x4ceda9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cedaa:{NFSU2_TR(0x4cedaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cedab:{NFSU2_TR(0x4cedab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cedc0:L4cedc0:{c.instructions+=7;NFSU2_TR(0x4cedc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cedc1:{NFSU2_TR(0x4cedc1);
__builtin_memmove((R+20),(R+16),4);
}
B4cedc3:{NFSU2_TR(0x4cedc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cedc6:{NFSU2_TR(0x4cedc6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cedcb:{NFSU2_TR(0x4cedcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cedcc:{NFSU2_TR(0x4cedcc);
__builtin_memmove((R+24),(R+4),4);
}
B4cedce:{NFSU2_TR(0x4cedce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cef6d;}}
}
B4cedd4:L4cedd4:{c.instructions+=1;NFSU2_TR(0x4cedd4);
if(r1(R+518)){{goto L4ceefa;}}
}
B4cedda:L4cedda:{c.instructions+=2;NFSU2_TR(0x4cedda);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x172176e8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x172176e8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ceddf:{NFSU2_TR(0x4ceddf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cee6c;}}
}
B4cede5:L4cede5:{c.instructions+=1;NFSU2_TR(0x4cede5);
if(r1(R+518)){{goto L4cee3a;}}
}
B4cede7:L4cede7:{c.instructions+=2;NFSU2_TR(0x4cede7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x36fad7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cedec:{NFSU2_TR(0x4cedec);
if(r1(R+518)){{goto L4cee27;}}
}
B4cedee:L4cedee:{c.instructions+=2;NFSU2_TR(0x4cedee);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x10eb386dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10eb386dull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10eb386dull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cedf3:{NFSU2_TR(0x4cedf3);
if(r1(R+518)){{goto L4cee11;}}
}
B4cedf5:L4cedf5:{c.instructions+=2;NFSU2_TR(0x4cedf5);
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
B4cedf6:{NFSU2_TR(0x4cedf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cedfc:L4cedfc:{c.instructions+=3;NFSU2_TR(0x4cedfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cedfe:{NFSU2_TR(0x4cedfe);
__builtin_memmove((R+4),(R+24),4);
}
B4cee00:{NFSU2_TR(0x4cee00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cee05ull));
TAIL_STATIC(0x4b5880u,4b5);
}
B4cee05:L4cee05:{c.instructions+=2;NFSU2_TR(0x4cee05);
__builtin_memmove((R+4),(R+24),4);
}
B4cee07:{NFSU2_TR(0x4cee07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cee0cull));
TAIL_STATIC(0x499fa0u,499);
}
B4cee0c:L4cee0c:{c.instructions+=3;NFSU2_TR(0x4cee0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cee0d:{NFSU2_TR(0x4cee0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cee0e:{NFSU2_TR(0x4cee0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cee11:L4cee11:{c.instructions+=5;NFSU2_TR(0x4cee11);
s1(0x7fa29c,u8(0x0ull));
}
B4cee18:{NFSU2_TR(0x4cee18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cee22:{NFSU2_TR(0x4cee22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cee23:{NFSU2_TR(0x4cee23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cee24:{NFSU2_TR(0x4cee24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cee27:L4cee27:{c.instructions+=3;NFSU2_TR(0x4cee27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cee2d:{NFSU2_TR(0x4cee2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cee2f:{NFSU2_TR(0x4cee2f);
if(r1(R+518)){{goto L4cee5c;}}
}
B4cee31:L4cee31:{c.instructions+=3;NFSU2_TR(0x4cee31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cee37:{NFSU2_TR(0x4cee37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cee38:{NFSU2_TR(0x4cee38);
{goto L4cee4b;}
}
B4cee3a:L4cee3a:{c.instructions+=3;NFSU2_TR(0x4cee3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cee40:{NFSU2_TR(0x4cee40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cee42:{NFSU2_TR(0x4cee42);
if(r1(R+518)){{goto L4cee5c;}}
}
B4cee44:L4cee44:{c.instructions+=2;NFSU2_TR(0x4cee44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cee4a:{NFSU2_TR(0x4cee4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cee4b:L4cee4b:{c.instructions+=2;NFSU2_TR(0x4cee4b);
w4(R+4,u32(0x832dacull));
}
B4cee50:{NFSU2_TR(0x4cee50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cee55ull));
TAIL_STATIC(0x5ce6c0u,5ce);
}
B4cee55:L4cee55:{c.instructions+=1;NFSU2_TR(0x4cee55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cee5c:L4cee5c:{c.instructions+=3;NFSU2_TR(0x4cee5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cee62:{NFSU2_TR(0x4cee62);
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
B4cee64:{NFSU2_TR(0x4cee64);
if(r1(R+518)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cee6a:L4cee6a:{c.instructions+=1;NFSU2_TR(0x4cee6a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cedfcu);}goto L4cedfc;}
}
B4cee6c:L4cee6c:{c.instructions+=2;NFSU2_TR(0x4cee6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cee71:{NFSU2_TR(0x4cee71);
if(r1(R+518)){{goto L4cee9b;}}
}
B4cee73:L4cee73:{c.instructions+=2;NFSU2_TR(0x4cee73);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cee78:{NFSU2_TR(0x4cee78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cee7e:L4cee7e:{c.instructions+=1;NFSU2_TR(0x4cee7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cee83ull));
TAIL_STATIC(0x50d510u,50d);
}
B4cee83:L4cee83:{c.instructions+=2;NFSU2_TR(0x4cee83);
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
B4cee85:{NFSU2_TR(0x4cee85);
if(r1(R+518)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cee8b:L4cee8b:{c.instructions+=4;NFSU2_TR(0x4cee8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cee8d:{NFSU2_TR(0x4cee8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cee8f:{NFSU2_TR(0x4cee8f);
__builtin_memmove((R+4),(R+24),4);
}
B4cee91:{NFSU2_TR(0x4cee91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cee96ull));
TAIL_STATIC(0x4b57b0u,4b5);
}
B4cee96:L4cee96:{c.instructions+=3;NFSU2_TR(0x4cee96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cee97:{NFSU2_TR(0x4cee97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cee98:{NFSU2_TR(0x4cee98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cee9b:L4cee9b:{c.instructions+=6;NFSU2_TR(0x4cee9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cee9e:{NFSU2_TR(0x4cee9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ceea1:{NFSU2_TR(0x4ceea1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceea2:{NFSU2_TR(0x4ceea2);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceea4:{NFSU2_TR(0x4ceea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceea5:{NFSU2_TR(0x4ceea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceeaaull));
TAIL_STATIC(0x50d150u,50d);
}
B4ceeaa:L4ceeaa:{c.instructions+=3;NFSU2_TR(0x4ceeaa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ceead:{NFSU2_TR(0x4ceead);
w4(R+4,u32(0x85ef50ull));
}
B4ceeb2:{NFSU2_TR(0x4ceeb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceeb7ull));
TAIL_STATIC(0x533680u,533);
}
B4ceeb7:L4ceeb7:{c.instructions+=1;NFSU2_TR(0x4ceeb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceebcull));
TAIL_STATIC(0x510c30u,510);
}
B4ceebc:L4ceebc:{c.instructions+=16;NFSU2_TR(0x4ceebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ceebf:{NFSU2_TR(0x4ceebf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ceec0:{NFSU2_TR(0x4ceec0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4ceec2:{NFSU2_TR(0x4ceec2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ceec4:{NFSU2_TR(0x4ceec4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe632eb32ull))));
}
B4ceec9:{NFSU2_TR(0x4ceec9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3312f33ull))));
}
B4ceece:{NFSU2_TR(0x4ceece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceecf:{NFSU2_TR(0x4ceecf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceed1:{NFSU2_TR(0x4ceed1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceed3:{NFSU2_TR(0x4ceed3);
u8 U[4];
w4(U+0,u32(0x11223345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceed8:{NFSU2_TR(0x4ceed8);
u8 U[4];
w4(U+0,u32(0x11223344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceedd:{NFSU2_TR(0x4ceedd);
u8 U[4];
w4(U+0,u32(0xbe503981ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceee2:{NFSU2_TR(0x4ceee2);
u8 U[4];
w4(U+0,u32(0x88579775ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceee7:{NFSU2_TR(0x4ceee7);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceeec:{NFSU2_TR(0x4ceeec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceeed:{NFSU2_TR(0x4ceeed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceef2ull));
TAIL_STATIC(0x558790u,558);
}
B4ceef2:L4ceef2:{c.instructions+=4;NFSU2_TR(0x4ceef2);
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
B4ceef5:{NFSU2_TR(0x4ceef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ceef6:{NFSU2_TR(0x4ceef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ceef7:{NFSU2_TR(0x4ceef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ceefa:L4ceefa:{c.instructions+=3;NFSU2_TR(0x4ceefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cef00:{NFSU2_TR(0x4cef00);
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
B4cef02:{NFSU2_TR(0x4cef02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cef08:L4cef08:{c.instructions+=3;NFSU2_TR(0x4cef08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cef0e:{NFSU2_TR(0x4cef0e);
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
B4cef10:{NFSU2_TR(0x4cef10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cef16:L4cef16:{c.instructions+=6;NFSU2_TR(0x4cef16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cef19:{NFSU2_TR(0x4cef19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cef1c:{NFSU2_TR(0x4cef1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef1d:{NFSU2_TR(0x4cef1d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef1f:{NFSU2_TR(0x4cef1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef20:{NFSU2_TR(0x4cef20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef25ull));
TAIL_STATIC(0x50d150u,50d);
}
B4cef25:L4cef25:{c.instructions+=6;NFSU2_TR(0x4cef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cef28:{NFSU2_TR(0x4cef28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef2a:{NFSU2_TR(0x4cef2a);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef2f:{NFSU2_TR(0x4cef2f);
u8 U[4];
w4(U+0,u32(0x2253bd97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef34:{NFSU2_TR(0x4cef34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef35:{NFSU2_TR(0x4cef35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef3aull));
TAIL_STATIC(0x537c00u,537);
}
B4cef3a:L4cef3a:{c.instructions+=4;NFSU2_TR(0x4cef3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cef3d:{NFSU2_TR(0x4cef3d);
u8 U[4];
w4(U+0,u32(0xf9f1f5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef42:{NFSU2_TR(0x4cef42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef43:{NFSU2_TR(0x4cef43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef48ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cef48:L4cef48:{c.instructions+=2;NFSU2_TR(0x4cef48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef49:{NFSU2_TR(0x4cef49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef4eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cef4e:L4cef4e:{c.instructions+=4;NFSU2_TR(0x4cef4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4cef51:{NFSU2_TR(0x4cef51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef53:{NFSU2_TR(0x4cef53);
__builtin_memmove((R+4),(R+24),4);
}
B4cef55:{NFSU2_TR(0x4cef55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef5aull));
TAIL_STATIC(0x4b5880u,4b5);
}
B4cef5a:L4cef5a:{c.instructions+=2;NFSU2_TR(0x4cef5a);
__builtin_memmove((R+4),(R+24),4);
}
B4cef5c:{NFSU2_TR(0x4cef5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef61ull));
TAIL_STATIC(0x49a460u,49a);
}
B4cef61:L4cef61:{c.instructions+=4;NFSU2_TR(0x4cef61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4cea70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cef68:{NFSU2_TR(0x4cef68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cef69:{NFSU2_TR(0x4cef69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cef6a:{NFSU2_TR(0x4cef6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cef6d:L4cef6d:{c.instructions+=2;NFSU2_TR(0x4cef6d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cef72:{NFSU2_TR(0x4cef72);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cefc2;}}
}
B4cef74:L4cef74:{c.instructions+=1;NFSU2_TR(0x4cef74);
if(r1(R+518)){{goto L4cef88;}}
}
B4cef76:L4cef76:{c.instructions+=2;NFSU2_TR(0x4cef76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cef7b:{NFSU2_TR(0x4cef7b);
if(r1(R+518)){{goto L4cefa5;}}
}
B4cef7d:L4cef7d:{c.instructions+=2;NFSU2_TR(0x4cef7d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cef82:{NFSU2_TR(0x4cef82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cef88:L4cef88:{c.instructions+=1;NFSU2_TR(0x4cef88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cef8dull));
TAIL_STATIC(0x50d510u,50d);
}
B4cef8d:L4cef8d:{c.instructions+=2;NFSU2_TR(0x4cef8d);
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
B4cef8f:{NFSU2_TR(0x4cef8f);
if(r1(R+518)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cef95:L4cef95:{c.instructions+=4;NFSU2_TR(0x4cef95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef97:{NFSU2_TR(0x4cef97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cef99:{NFSU2_TR(0x4cef99);
__builtin_memmove((R+4),(R+24),4);
}
B4cef9b:{NFSU2_TR(0x4cef9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cefa0ull));
TAIL_STATIC(0x4b57b0u,4b5);
}
B4cefa0:L4cefa0:{c.instructions+=3;NFSU2_TR(0x4cefa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cefa1:{NFSU2_TR(0x4cefa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cefa2:{NFSU2_TR(0x4cefa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cefa5:L4cefa5:{c.instructions+=1;NFSU2_TR(0x4cefa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cefaaull));
TAIL_STATIC(0x50d510u,50d);
}
B4cefaa:L4cefaa:{c.instructions+=2;NFSU2_TR(0x4cefaa);
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
B4cefac:{NFSU2_TR(0x4cefac);
if(r1(R+518)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cefb2:L4cefb2:{c.instructions+=4;NFSU2_TR(0x4cefb2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cefb4:{NFSU2_TR(0x4cefb4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cefb6:{NFSU2_TR(0x4cefb6);
__builtin_memmove((R+4),(R+24),4);
}
B4cefb8:{NFSU2_TR(0x4cefb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cefbdull));
TAIL_STATIC(0x4b57b0u,4b5);
}
B4cefbd:L4cefbd:{c.instructions+=3;NFSU2_TR(0x4cefbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cefbe:{NFSU2_TR(0x4cefbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cefbf:{NFSU2_TR(0x4cefbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cefc2:L4cefc2:{c.instructions+=2;NFSU2_TR(0x4cefc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cefc7:{NFSU2_TR(0x4cefc7);
if(r1(R+518)){TAIL_STATIC(0x4cf031u,4cf);}
}
B4cefc9:L4cefc9:{c.instructions+=2;NFSU2_TR(0x4cefc9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cefce:{NFSU2_TR(0x4cefce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cefd4:L4cefd4:{c.instructions+=1;NFSU2_TR(0x4cefd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cefd9ull));
TAIL_STATIC(0x50d510u,50d);
}
B4cefd9:L4cefd9:{c.instructions+=2;NFSU2_TR(0x4cefd9);
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
B4cefdb:{NFSU2_TR(0x4cefdb);
if(r1(R+518)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cefe1:L4cefe1:{c.instructions+=3;NFSU2_TR(0x4cefe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cefe7:{NFSU2_TR(0x4cefe7);
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
B4cefe9:{NFSU2_TR(0x4cefe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cf160u,4cf);}
}
B4cefef:L4cefef:{c.instructions+=3;NFSU2_TR(0x4cefef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ceff5:{NFSU2_TR(0x4ceff5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceff6:{NFSU2_TR(0x4ceff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ceffbull));
TAIL_STATIC(0x510ae0u,510);
}
B4ceffb:L4ceffb:{c.instructions+=2;NFSU2_TR(0x4ceffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ceffc:{NFSU2_TR(0x4ceffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf001ull));
TAIL_STATIC(0x510ad0u,510);
}
XIT:NFSU2_TR_EXIT(0x4ce,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
