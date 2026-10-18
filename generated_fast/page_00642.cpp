#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x642,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x642,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_642(u8* __restrict R,Cpu& c);
u32 page_642(Cpu& c){return body_642(c.regs.data(),c);}
__attribute__((noinline)) u32 body_642(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x642000:goto L642000;
case 0x642002:c.instructions+=7;goto B642002;
case 0x642005:c.instructions+=6;goto B642005;
case 0x642006:c.instructions+=5;goto B642006;
case 0x642009:c.instructions+=4;goto B642009;
case 0x64200a:c.instructions+=3;goto B64200a;
case 0x64200d:c.instructions+=2;goto B64200d;
case 0x64200e:c.instructions+=1;goto B64200e;
case 0x642013:goto L642013;
case 0x642014:c.instructions+=1;goto B642014;
case 0x642017:goto L642017;
case 0x642019:c.instructions+=15;goto B642019;
case 0x64201a:c.instructions+=14;goto B64201a;
case 0x64201c:c.instructions+=13;goto B64201c;
case 0x64201d:c.instructions+=12;goto B64201d;
case 0x64201e:c.instructions+=11;goto B64201e;
case 0x642021:c.instructions+=10;goto B642021;
case 0x642023:c.instructions+=9;goto B642023;
case 0x642026:c.instructions+=8;goto B642026;
case 0x642027:c.instructions+=7;goto B642027;
case 0x642029:c.instructions+=6;goto B642029;
case 0x64202a:c.instructions+=5;goto B64202a;
case 0x64202d:c.instructions+=4;goto B64202d;
case 0x64202f:c.instructions+=3;goto B64202f;
case 0x642032:c.instructions+=2;goto B642032;
case 0x642035:c.instructions+=1;goto B642035;
case 0x642037:goto L642037;
case 0x642039:c.instructions+=1;goto B642039;
case 0x64203a:goto L64203a;
case 0x64203c:c.instructions+=1;goto B64203c;
case 0x642042:goto L642042;
case 0x642045:c.instructions+=1;goto B642045;
case 0x642047:goto L642047;
case 0x64204a:c.instructions+=1;goto B64204a;
case 0x64204c:goto L64204c;
case 0x64204f:c.instructions+=1;goto B64204f;
case 0x642055:goto L642055;
case 0x642057:c.instructions+=5;goto B642057;
case 0x64205a:c.instructions+=4;goto B64205a;
case 0x64205d:c.instructions+=3;goto B64205d;
case 0x642060:c.instructions+=2;goto B642060;
case 0x642062:c.instructions+=1;goto B642062;
case 0x642068:goto L642068;
case 0x64206c:c.instructions+=3;goto B64206c;
case 0x642070:c.instructions+=2;goto B642070;
case 0x642072:c.instructions+=1;goto B642072;
case 0x642074:goto L642074;
case 0x642077:c.instructions+=3;goto B642077;
case 0x64207a:c.instructions+=2;goto B64207a;
case 0x64207b:c.instructions+=1;goto B64207b;
case 0x642080:goto L642080;
case 0x642082:c.instructions+=1;goto B642082;
case 0x642088:goto L642088;
case 0x64208b:c.instructions+=3;goto B64208b;
case 0x64208e:c.instructions+=2;goto B64208e;
case 0x642091:c.instructions+=1;goto B642091;
case 0x642093:goto L642093;
case 0x642094:c.instructions+=1;goto B642094;
case 0x642096:goto L642096;
case 0x642098:goto L642098;
case 0x64209b:c.instructions+=2;goto B64209b;
case 0x64209e:c.instructions+=1;goto B64209e;
case 0x6420a0:goto L6420a0;
case 0x6420a7:c.instructions+=1;goto B6420a7;
case 0x6420ae:goto L6420ae;
case 0x6420b1:c.instructions+=7;goto B6420b1;
case 0x6420b3:c.instructions+=6;goto B6420b3;
case 0x6420b6:c.instructions+=5;goto B6420b6;
case 0x6420b8:c.instructions+=4;goto B6420b8;
case 0x6420bb:c.instructions+=3;goto B6420bb;
case 0x6420bd:c.instructions+=2;goto B6420bd;
case 0x6420c0:c.instructions+=1;goto B6420c0;
case 0x6420c2:goto L6420c2;
case 0x6420c5:c.instructions+=4;goto B6420c5;
case 0x6420c9:c.instructions+=3;goto B6420c9;
case 0x6420cc:c.instructions+=2;goto B6420cc;
case 0x6420cd:c.instructions+=1;goto B6420cd;
case 0x6420cf:goto L6420cf;
case 0x6420d0:c.instructions+=1;goto B6420d0;
case 0x6420d2:goto L6420d2;
case 0x6420d3:c.instructions+=1;goto B6420d3;
case 0x6420d5:goto L6420d5;
case 0x6420d8:c.instructions+=7;goto B6420d8;
case 0x6420da:c.instructions+=6;goto B6420da;
case 0x6420dd:c.instructions+=5;goto B6420dd;
case 0x6420df:c.instructions+=4;goto B6420df;
case 0x6420e2:c.instructions+=3;goto B6420e2;
case 0x6420e4:c.instructions+=2;goto B6420e4;
case 0x6420e6:c.instructions+=1;goto B6420e6;
case 0x6420e9:goto L6420e9;
case 0x6420eb:goto L6420eb;
case 0x6420ed:c.instructions+=2;goto B6420ed;
case 0x6420f0:c.instructions+=1;goto B6420f0;
case 0x6420f3:goto L6420f3;
case 0x6420f5:goto L6420f5;
case 0x6420f7:c.instructions+=5;goto B6420f7;
case 0x6420fa:c.instructions+=4;goto B6420fa;
case 0x6420fc:c.instructions+=3;goto B6420fc;
case 0x6420ff:c.instructions+=2;goto B6420ff;
case 0x642102:c.instructions+=1;goto B642102;
case 0x642104:goto L642104;
case 0x642109:goto L642109;
case 0x64210a:c.instructions+=4;goto B64210a;
case 0x64210b:c.instructions+=3;goto B64210b;
case 0x64210c:c.instructions+=2;goto B64210c;
case 0x64210d:c.instructions+=1;goto B64210d;
case 0x642127:goto L642127;
case 0x642129:c.instructions+=9;goto B642129;
case 0x64212a:c.instructions+=8;goto B64212a;
case 0x64212c:c.instructions+=7;goto B64212c;
case 0x64212f:c.instructions+=6;goto B64212f;
case 0x642130:c.instructions+=5;goto B642130;
case 0x642133:c.instructions+=4;goto B642133;
case 0x642134:c.instructions+=3;goto B642134;
case 0x642137:c.instructions+=2;goto B642137;
case 0x642138:c.instructions+=1;goto B642138;
case 0x64213d:goto L64213d;
case 0x64213e:c.instructions+=1;goto B64213e;
case 0x642141:goto L642141;
case 0x642143:c.instructions+=15;goto B642143;
case 0x642144:c.instructions+=14;goto B642144;
case 0x642146:c.instructions+=13;goto B642146;
case 0x642147:c.instructions+=12;goto B642147;
case 0x642148:c.instructions+=11;goto B642148;
case 0x64214b:c.instructions+=10;goto B64214b;
case 0x64214d:c.instructions+=9;goto B64214d;
case 0x642151:c.instructions+=8;goto B642151;
case 0x642154:c.instructions+=7;goto B642154;
case 0x642155:c.instructions+=6;goto B642155;
case 0x642156:c.instructions+=5;goto B642156;
case 0x642158:c.instructions+=4;goto B642158;
case 0x642159:c.instructions+=3;goto B642159;
case 0x64215c:c.instructions+=2;goto B64215c;
case 0x64215f:c.instructions+=1;goto B64215f;
case 0x642161:goto L642161;
case 0x642163:c.instructions+=1;goto B642163;
case 0x642164:goto L642164;
case 0x642166:c.instructions+=1;goto B642166;
case 0x64216c:goto L64216c;
case 0x64216f:c.instructions+=1;goto B64216f;
case 0x642175:goto L642175;
case 0x642178:c.instructions+=1;goto B642178;
case 0x64217a:goto L64217a;
case 0x64217d:c.instructions+=1;goto B64217d;
case 0x642183:goto L642183;
case 0x642185:c.instructions+=4;goto B642185;
case 0x642188:c.instructions+=3;goto B642188;
case 0x64218b:c.instructions+=2;goto B64218b;
case 0x64218d:c.instructions+=1;goto B64218d;
case 0x642193:goto L642193;
case 0x642197:c.instructions+=3;goto B642197;
case 0x642199:c.instructions+=2;goto B642199;
case 0x64219b:c.instructions+=1;goto B64219b;
case 0x64219d:goto L64219d;
case 0x6421a0:c.instructions+=4;goto B6421a0;
case 0x6421a3:c.instructions+=3;goto B6421a3;
case 0x6421a6:c.instructions+=2;goto B6421a6;
case 0x6421a7:c.instructions+=1;goto B6421a7;
case 0x6421ac:goto L6421ac;
case 0x6421ae:c.instructions+=2;goto B6421ae;
case 0x6421b1:c.instructions+=1;goto B6421b1;
case 0x6421b7:goto L6421b7;
case 0x6421ba:c.instructions+=3;goto B6421ba;
case 0x6421bd:c.instructions+=2;goto B6421bd;
case 0x6421c0:c.instructions+=1;goto B6421c0;
case 0x6421c2:goto L6421c2;
case 0x6421c3:c.instructions+=1;goto B6421c3;
case 0x6421c5:goto L6421c5;
case 0x6421ca:goto L6421ca;
case 0x6421cd:c.instructions+=1;goto B6421cd;
case 0x6421d3:goto L6421d3;
case 0x6421d9:goto L6421d9;
case 0x6421dc:c.instructions+=1;goto B6421dc;
case 0x6421e2:goto L6421e2;
case 0x6421e8:goto L6421e8;
case 0x6421eb:c.instructions+=1;goto B6421eb;
case 0x6421ed:goto L6421ed;
case 0x6421f0:c.instructions+=1;goto B6421f0;
case 0x6421f5:goto L6421f5;
case 0x6421f7:c.instructions+=1;goto B6421f7;
case 0x6421fd:goto L6421fd;
case 0x642200:c.instructions+=1;goto B642200;
case 0x642203:goto L642203;
case 0x642205:c.instructions+=18;goto B642205;
case 0x642207:c.instructions+=17;goto B642207;
case 0x64220a:c.instructions+=16;goto B64220a;
case 0x64220d:c.instructions+=15;goto B64220d;
case 0x64220f:c.instructions+=14;goto B64220f;
case 0x642212:c.instructions+=13;goto B642212;
case 0x642215:c.instructions+=12;goto B642215;
case 0x642218:c.instructions+=11;goto B642218;
case 0x64221b:c.instructions+=10;goto B64221b;
case 0x64221e:c.instructions+=9;goto B64221e;
case 0x642221:c.instructions+=8;goto B642221;
case 0x642224:c.instructions+=7;goto B642224;
case 0x642227:c.instructions+=6;goto B642227;
case 0x642229:c.instructions+=5;goto B642229;
case 0x64222c:c.instructions+=4;goto B64222c;
case 0x64222f:c.instructions+=3;goto B64222f;
case 0x642232:c.instructions+=2;goto B642232;
case 0x642236:c.instructions+=1;goto B642236;
case 0x642238:goto L642238;
case 0x64223b:c.instructions+=3;goto B64223b;
case 0x64223d:c.instructions+=2;goto B64223d;
case 0x64223e:c.instructions+=1;goto B64223e;
case 0x642241:goto L642241;
case 0x642244:c.instructions+=2;goto B642244;
case 0x642246:c.instructions+=1;goto B642246;
case 0x642248:goto L642248;
case 0x64224a:c.instructions+=2;goto B64224a;
case 0x64224b:c.instructions+=1;goto B64224b;
case 0x64224e:goto L64224e;
case 0x642252:goto L642252;
case 0x642255:c.instructions+=4;goto B642255;
case 0x642258:c.instructions+=3;goto B642258;
case 0x64225b:c.instructions+=2;goto B64225b;
case 0x64225e:c.instructions+=1;goto B64225e;
case 0x642260:goto L642260;
case 0x642265:goto L642265;
case 0x642267:c.instructions+=1;goto B642267;
case 0x64226d:goto L64226d;
case 0x642270:c.instructions+=1;goto B642270;
case 0x642273:goto L642273;
case 0x642275:c.instructions+=18;goto B642275;
case 0x642277:c.instructions+=17;goto B642277;
case 0x64227a:c.instructions+=16;goto B64227a;
case 0x64227d:c.instructions+=15;goto B64227d;
case 0x64227f:c.instructions+=14;goto B64227f;
case 0x642282:c.instructions+=13;goto B642282;
case 0x642285:c.instructions+=12;goto B642285;
case 0x642288:c.instructions+=11;goto B642288;
case 0x64228b:c.instructions+=10;goto B64228b;
case 0x64228e:c.instructions+=9;goto B64228e;
case 0x642291:c.instructions+=8;goto B642291;
case 0x642294:c.instructions+=7;goto B642294;
case 0x642297:c.instructions+=6;goto B642297;
case 0x642299:c.instructions+=5;goto B642299;
case 0x64229c:c.instructions+=4;goto B64229c;
case 0x64229f:c.instructions+=3;goto B64229f;
case 0x6422a2:c.instructions+=2;goto B6422a2;
case 0x6422a6:c.instructions+=1;goto B6422a6;
case 0x6422a8:goto L6422a8;
case 0x6422ab:c.instructions+=3;goto B6422ab;
case 0x6422ad:c.instructions+=2;goto B6422ad;
case 0x6422ae:c.instructions+=1;goto B6422ae;
case 0x6422b1:goto L6422b1;
case 0x6422b4:c.instructions+=2;goto B6422b4;
case 0x6422b6:c.instructions+=1;goto B6422b6;
case 0x6422b8:goto L6422b8;
case 0x6422ba:c.instructions+=2;goto B6422ba;
case 0x6422bb:c.instructions+=1;goto B6422bb;
case 0x6422be:goto L6422be;
case 0x6422c2:goto L6422c2;
case 0x6422c5:c.instructions+=4;goto B6422c5;
case 0x6422c8:c.instructions+=3;goto B6422c8;
case 0x6422cb:c.instructions+=2;goto B6422cb;
case 0x6422ce:c.instructions+=1;goto B6422ce;
case 0x6422d0:goto L6422d0;
case 0x6422d5:goto L6422d5;
case 0x6422d7:c.instructions+=1;goto B6422d7;
case 0x6422dd:goto L6422dd;
case 0x6422e0:c.instructions+=1;goto B6422e0;
case 0x6422e3:goto L6422e3;
case 0x6422e5:c.instructions+=18;goto B6422e5;
case 0x6422e7:c.instructions+=17;goto B6422e7;
case 0x6422ea:c.instructions+=16;goto B6422ea;
case 0x6422ed:c.instructions+=15;goto B6422ed;
case 0x6422ef:c.instructions+=14;goto B6422ef;
case 0x6422f2:c.instructions+=13;goto B6422f2;
case 0x6422f5:c.instructions+=12;goto B6422f5;
case 0x6422f8:c.instructions+=11;goto B6422f8;
case 0x6422fb:c.instructions+=10;goto B6422fb;
case 0x6422fe:c.instructions+=9;goto B6422fe;
case 0x642301:c.instructions+=8;goto B642301;
case 0x642304:c.instructions+=7;goto B642304;
case 0x642307:c.instructions+=6;goto B642307;
case 0x642309:c.instructions+=5;goto B642309;
case 0x64230c:c.instructions+=4;goto B64230c;
case 0x64230f:c.instructions+=3;goto B64230f;
case 0x642312:c.instructions+=2;goto B642312;
case 0x642316:c.instructions+=1;goto B642316;
case 0x642318:goto L642318;
case 0x64231b:c.instructions+=3;goto B64231b;
case 0x64231d:c.instructions+=2;goto B64231d;
case 0x64231e:c.instructions+=1;goto B64231e;
case 0x642321:goto L642321;
case 0x642325:c.instructions+=1;goto B642325;
case 0x642327:goto L642327;
case 0x64232a:c.instructions+=3;goto B64232a;
case 0x64232c:c.instructions+=2;goto B64232c;
case 0x64232d:c.instructions+=1;goto B64232d;
case 0x642330:goto L642330;
case 0x642333:c.instructions+=2;goto B642333;
case 0x642335:c.instructions+=1;goto B642335;
case 0x642337:goto L642337;
case 0x642339:c.instructions+=2;goto B642339;
case 0x64233a:c.instructions+=1;goto B64233a;
case 0x64233d:goto L64233d;
case 0x642341:goto L642341;
case 0x642344:c.instructions+=2;goto B642344;
case 0x642346:c.instructions+=1;goto B642346;
case 0x642348:goto L642348;
case 0x64234a:c.instructions+=2;goto B64234a;
case 0x64234b:c.instructions+=1;goto B64234b;
case 0x64234e:goto L64234e;
case 0x642352:goto L642352;
case 0x642355:c.instructions+=14;goto B642355;
case 0x642358:c.instructions+=13;goto B642358;
case 0x64235b:c.instructions+=12;goto B64235b;
case 0x64235e:c.instructions+=11;goto B64235e;
case 0x642361:c.instructions+=10;goto B642361;
case 0x642364:c.instructions+=9;goto B642364;
case 0x642367:c.instructions+=8;goto B642367;
case 0x64236a:c.instructions+=7;goto B64236a;
case 0x64236d:c.instructions+=6;goto B64236d;
case 0x642370:c.instructions+=5;goto B642370;
case 0x642373:c.instructions+=4;goto B642373;
case 0x642376:c.instructions+=3;goto B642376;
case 0x642379:c.instructions+=2;goto B642379;
case 0x64237c:c.instructions+=1;goto B64237c;
case 0x642382:goto L642382;
case 0x642387:goto L642387;
case 0x64238a:c.instructions+=1;goto B64238a;
case 0x64238c:goto L64238c;
case 0x64238e:goto L64238e;
case 0x642391:goto L642391;
case 0x642397:goto L642397;
case 0x64239e:goto L64239e;
case 0x6423a1:c.instructions+=5;goto B6423a1;
case 0x6423a2:c.instructions+=4;goto B6423a2;
case 0x6423a3:c.instructions+=3;goto B6423a3;
case 0x6423a4:c.instructions+=2;goto B6423a4;
case 0x6423a5:c.instructions+=1;goto B6423a5;
case 0x6423a8:goto L6423a8;
case 0x6423aa:c.instructions+=1;goto B6423aa;
case 0x6423b0:goto L6423b0;
case 0x6423b3:c.instructions+=1;goto B6423b3;
case 0x6423b6:goto L6423b6;
case 0x6423b8:c.instructions+=18;goto B6423b8;
case 0x6423ba:c.instructions+=17;goto B6423ba;
case 0x6423bd:c.instructions+=16;goto B6423bd;
case 0x6423c0:c.instructions+=15;goto B6423c0;
case 0x6423c2:c.instructions+=14;goto B6423c2;
case 0x6423c5:c.instructions+=13;goto B6423c5;
case 0x6423c8:c.instructions+=12;goto B6423c8;
case 0x6423cb:c.instructions+=11;goto B6423cb;
case 0x6423ce:c.instructions+=10;goto B6423ce;
case 0x6423d1:c.instructions+=9;goto B6423d1;
case 0x6423d4:c.instructions+=8;goto B6423d4;
case 0x6423d7:c.instructions+=7;goto B6423d7;
case 0x6423da:c.instructions+=6;goto B6423da;
case 0x6423dc:c.instructions+=5;goto B6423dc;
case 0x6423df:c.instructions+=4;goto B6423df;
case 0x6423e2:c.instructions+=3;goto B6423e2;
case 0x6423e5:c.instructions+=2;goto B6423e5;
case 0x6423e9:c.instructions+=1;goto B6423e9;
case 0x6423eb:goto L6423eb;
case 0x6423ee:c.instructions+=3;goto B6423ee;
case 0x6423f0:c.instructions+=2;goto B6423f0;
case 0x6423f1:c.instructions+=1;goto B6423f1;
case 0x6423f4:goto L6423f4;
case 0x6423f8:c.instructions+=1;goto B6423f8;
case 0x6423fa:goto L6423fa;
case 0x6423fd:c.instructions+=3;goto B6423fd;
case 0x6423ff:c.instructions+=2;goto B6423ff;
case 0x642400:c.instructions+=1;goto B642400;
case 0x642403:goto L642403;
case 0x642406:c.instructions+=2;goto B642406;
case 0x642408:c.instructions+=1;goto B642408;
case 0x64240a:goto L64240a;
case 0x64240c:c.instructions+=2;goto B64240c;
case 0x64240d:c.instructions+=1;goto B64240d;
case 0x642410:goto L642410;
case 0x642414:goto L642414;
case 0x642417:c.instructions+=2;goto B642417;
case 0x642419:c.instructions+=1;goto B642419;
case 0x64241b:goto L64241b;
case 0x64241d:c.instructions+=2;goto B64241d;
case 0x64241e:c.instructions+=1;goto B64241e;
case 0x642421:goto L642421;
case 0x642425:goto L642425;
case 0x642428:c.instructions+=14;goto B642428;
case 0x64242b:c.instructions+=13;goto B64242b;
case 0x64242e:c.instructions+=12;goto B64242e;
case 0x642431:c.instructions+=11;goto B642431;
case 0x642434:c.instructions+=10;goto B642434;
case 0x642437:c.instructions+=9;goto B642437;
case 0x64243a:c.instructions+=8;goto B64243a;
case 0x64243d:c.instructions+=7;goto B64243d;
case 0x642440:c.instructions+=6;goto B642440;
case 0x642443:c.instructions+=5;goto B642443;
case 0x642446:c.instructions+=4;goto B642446;
case 0x642449:c.instructions+=3;goto B642449;
case 0x64244c:c.instructions+=2;goto B64244c;
case 0x64244f:c.instructions+=1;goto B64244f;
case 0x642455:goto L642455;
case 0x642458:goto L642458;
case 0x64245b:c.instructions+=1;goto B64245b;
case 0x642460:goto L642460;
case 0x642463:c.instructions+=4;goto B642463;
case 0x642467:c.instructions+=3;goto B642467;
case 0x64246a:c.instructions+=2;goto B64246a;
case 0x64246b:c.instructions+=1;goto B64246b;
case 0x64246d:goto L64246d;
case 0x64246e:c.instructions+=1;goto B64246e;
case 0x642470:goto L642470;
case 0x642471:c.instructions+=1;goto B642471;
case 0x642477:goto L642477;
case 0x64247a:c.instructions+=4;goto B64247a;
case 0x64247d:c.instructions+=3;goto B64247d;
case 0x64247f:c.instructions+=2;goto B64247f;
case 0x642482:c.instructions+=1;goto B642482;
case 0x642487:goto L642487;
case 0x642489:c.instructions+=5;goto B642489;
case 0x64248a:c.instructions+=4;goto B64248a;
case 0x64248c:c.instructions+=3;goto B64248c;
case 0x64248f:c.instructions+=2;goto B64248f;
case 0x642492:c.instructions+=1;goto B642492;
case 0x642494:goto L642494;
case 0x642497:c.instructions+=1;goto B642497;
case 0x642499:goto L642499;
case 0x64249a:c.instructions+=6;goto B64249a;
case 0x64249d:c.instructions+=5;goto B64249d;
case 0x6424a0:c.instructions+=4;goto B6424a0;
case 0x6424a1:c.instructions+=3;goto B6424a1;
case 0x6424a4:c.instructions+=2;goto B6424a4;
case 0x6424a5:c.instructions+=1;goto B6424a5;
case 0x6424aa:goto L6424aa;
case 0x6424ac:goto L6424ac;
case 0x6424ae:goto L6424ae;
case 0x6424af:c.instructions+=1;goto B6424af;
case 0x6424b2:goto L6424b2;
case 0x6424b5:c.instructions+=2;goto B6424b5;
case 0x6424b7:c.instructions+=1;goto B6424b7;
case 0x6424b9:goto L6424b9;
case 0x6424ba:c.instructions+=2;goto B6424ba;
case 0x6424bb:c.instructions+=1;goto B6424bb;
case 0x6424bc:goto L6424bc;
case 0x6424bf:c.instructions+=2;goto B6424bf;
case 0x6424c2:c.instructions+=1;goto B6424c2;
case 0x6424c4:goto L6424c4;
case 0x6424c7:c.instructions+=4;goto B6424c7;
case 0x6424ca:c.instructions+=3;goto B6424ca;
case 0x6424cd:c.instructions+=2;goto B6424cd;
case 0x6424cf:c.instructions+=1;goto B6424cf;
case 0x6424d2:goto L6424d2;
case 0x6424d4:c.instructions+=1;goto B6424d4;
case 0x6424d6:goto L6424d6;
case 0x6424d9:c.instructions+=2;goto B6424d9;
case 0x6424db:c.instructions+=1;goto B6424db;
case 0x6424dd:goto L6424dd;
case 0x6424de:c.instructions+=2;goto B6424de;
case 0x6424df:c.instructions+=1;goto B6424df;
case 0x6424e0:goto L6424e0;
case 0x6424e2:c.instructions+=1;goto B6424e2;
case 0x6424e3:goto L6424e3;
case 0x6424e5:c.instructions+=5;goto B6424e5;
case 0x6424e6:c.instructions+=4;goto B6424e6;
case 0x6424e8:c.instructions+=3;goto B6424e8;
case 0x6424e9:c.instructions+=2;goto B6424e9;
case 0x6424eb:c.instructions+=1;goto B6424eb;
case 0x6424f0:goto L6424f0;
case 0x6424f4:c.instructions+=1;goto B6424f4;
case 0x6424f6:goto L6424f6;
case 0x6424f7:c.instructions+=1;goto B6424f7;
case 0x6424fc:goto L6424fc;
case 0x6424fd:goto L6424fd;
case 0x6424ff:c.instructions+=3;goto B6424ff;
case 0x642500:c.instructions+=2;goto B642500;
case 0x642501:c.instructions+=1;goto B642501;
case 0x642504:goto L642504;
case 0x642506:c.instructions+=6;goto B642506;
case 0x642507:c.instructions+=5;goto B642507;
case 0x642509:c.instructions+=4;goto B642509;
case 0x64250c:c.instructions+=3;goto B64250c;
case 0x64250e:c.instructions+=2;goto B64250e;
case 0x642514:c.instructions+=1;goto B642514;
case 0x642516:goto L642516;
case 0x642517:c.instructions+=1;goto B642517;
case 0x64251c:goto L64251c;
case 0x642520:c.instructions+=1;goto B642520;
case 0x642521:goto L642521;
case 0x642524:c.instructions+=2;goto B642524;
case 0x642526:c.instructions+=1;goto B642526;
case 0x642528:goto L642528;
case 0x64252a:c.instructions+=1;goto B64252a;
case 0x64252f:goto L64252f;
case 0x642533:goto L642533;
case 0x642534:c.instructions+=1;goto B642534;
case 0x642535:goto L642535;
case 0x642537:c.instructions+=5;goto B642537;
case 0x642538:c.instructions+=4;goto B642538;
case 0x64253a:c.instructions+=3;goto B64253a;
case 0x64253b:c.instructions+=2;goto B64253b;
case 0x64253d:c.instructions+=1;goto B64253d;
case 0x642542:goto L642542;
case 0x642546:c.instructions+=1;goto B642546;
case 0x642548:goto L642548;
case 0x642549:c.instructions+=1;goto B642549;
case 0x64254e:goto L64254e;
case 0x64254f:goto L64254f;
case 0x642551:c.instructions+=3;goto B642551;
case 0x642552:c.instructions+=2;goto B642552;
case 0x642553:c.instructions+=1;goto B642553;
case 0x642556:goto L642556;
case 0x642558:c.instructions+=9;goto B642558;
case 0x642559:c.instructions+=8;goto B642559;
case 0x64255b:c.instructions+=7;goto B64255b;
case 0x64255c:c.instructions+=6;goto B64255c;
case 0x64255f:c.instructions+=5;goto B64255f;
case 0x642560:c.instructions+=4;goto B642560;
case 0x642562:c.instructions+=3;goto B642562;
case 0x642563:c.instructions+=2;goto B642563;
case 0x642568:c.instructions+=1;goto B642568;
case 0x64256a:goto L64256a;
case 0x64256c:goto L64256c;
case 0x64256e:goto L64256e;
case 0x642571:c.instructions+=4;goto B642571;
case 0x642573:c.instructions+=3;goto B642573;
case 0x642574:c.instructions+=2;goto B642574;
case 0x642579:c.instructions+=1;goto B642579;
case 0x64257b:goto L64257b;
case 0x64257d:goto L64257d;
case 0x64257f:goto L64257f;
case 0x642582:c.instructions+=5;goto B642582;
case 0x642585:c.instructions+=4;goto B642585;
case 0x642587:c.instructions+=3;goto B642587;
case 0x642589:c.instructions+=2;goto B642589;
case 0x64258a:c.instructions+=1;goto B64258a;
case 0x64258d:goto L64258d;
case 0x64258f:c.instructions+=1;goto B64258f;
case 0x642591:goto L642591;
case 0x642596:goto L642596;
case 0x642597:c.instructions+=3;goto B642597;
case 0x642598:c.instructions+=2;goto B642598;
case 0x642599:c.instructions+=1;goto B642599;
case 0x64259c:goto L64259c;
case 0x64259e:c.instructions+=18;goto B64259e;
case 0x64259f:c.instructions+=17;goto B64259f;
case 0x6425a1:c.instructions+=16;goto B6425a1;
case 0x6425a4:c.instructions+=15;goto B6425a4;
case 0x6425a7:c.instructions+=14;goto B6425a7;
case 0x6425aa:c.instructions+=13;goto B6425aa;
case 0x6425ab:c.instructions+=12;goto B6425ab;
case 0x6425ac:c.instructions+=11;goto B6425ac;
case 0x6425ad:c.instructions+=10;goto B6425ad;
case 0x6425b0:c.instructions+=9;goto B6425b0;
case 0x6425b3:c.instructions+=8;goto B6425b3;
case 0x6425b5:c.instructions+=7;goto B6425b5;
case 0x6425b8:c.instructions+=6;goto B6425b8;
case 0x6425bb:c.instructions+=5;goto B6425bb;
case 0x6425bd:c.instructions+=4;goto B6425bd;
case 0x6425bf:c.instructions+=3;goto B6425bf;
case 0x6425c2:c.instructions+=2;goto B6425c2;
case 0x6425c5:c.instructions+=1;goto B6425c5;
case 0x6425c7:goto L6425c7;
case 0x6425ca:c.instructions+=10;goto B6425ca;
case 0x6425cd:c.instructions+=9;goto B6425cd;
case 0x6425ce:c.instructions+=8;goto B6425ce;
case 0x6425d0:c.instructions+=7;goto B6425d0;
case 0x6425d2:c.instructions+=6;goto B6425d2;
case 0x6425d3:c.instructions+=5;goto B6425d3;
case 0x6425d4:c.instructions+=4;goto B6425d4;
case 0x6425d5:c.instructions+=3;goto B6425d5;
case 0x6425d8:c.instructions+=2;goto B6425d8;
case 0x6425db:c.instructions+=1;goto B6425db;
case 0x6425e0:goto L6425e0;
case 0x6425e2:c.instructions+=1;goto B6425e2;
case 0x6425e4:goto L6425e4;
case 0x6425e7:c.instructions+=1;goto B6425e7;
case 0x6425ea:goto L6425ea;
case 0x6425ec:c.instructions+=1;goto B6425ec;
case 0x6425ee:goto L6425ee;
case 0x6425f1:c.instructions+=12;goto B6425f1;
case 0x6425f2:c.instructions+=11;goto B6425f2;
case 0x6425f5:c.instructions+=10;goto B6425f5;
case 0x6425f6:c.instructions+=9;goto B6425f6;
case 0x6425f9:c.instructions+=8;goto B6425f9;
case 0x6425fa:c.instructions+=7;goto B6425fa;
case 0x6425fd:c.instructions+=6;goto B6425fd;
case 0x642600:c.instructions+=5;goto B642600;
case 0x642603:c.instructions+=4;goto B642603;
case 0x642606:c.instructions+=3;goto B642606;
case 0x642607:c.instructions+=2;goto B642607;
case 0x642608:c.instructions+=1;goto B642608;
case 0x64260d:goto L64260d;
case 0x64260f:c.instructions+=2;goto B64260f;
case 0x642612:c.instructions+=1;goto B642612;
case 0x642618:goto L642618;
case 0x64261b:c.instructions+=7;goto B64261b;
case 0x64261e:c.instructions+=6;goto B64261e;
case 0x642621:c.instructions+=5;goto B642621;
case 0x642624:c.instructions+=4;goto B642624;
case 0x642627:c.instructions+=3;goto B642627;
case 0x642629:c.instructions+=2;goto B642629;
case 0x64262c:c.instructions+=1;goto B64262c;
case 0x642632:goto L642632;
case 0x642634:c.instructions+=3;goto B642634;
case 0x642639:c.instructions+=2;goto B642639;
case 0x64263b:c.instructions+=1;goto B64263b;
case 0x64263d:goto L64263d;
case 0x64263f:goto L64263f;
case 0x642640:c.instructions+=2;goto B642640;
case 0x642643:c.instructions+=1;goto B642643;
case 0x642648:goto L642648;
case 0x64264a:c.instructions+=4;goto B64264a;
case 0x64264c:c.instructions+=3;goto B64264c;
case 0x64264d:c.instructions+=2;goto B64264d;
case 0x642650:c.instructions+=1;goto B642650;
case 0x642652:goto L642652;
case 0x642659:c.instructions+=1;goto B642659;
case 0x64265e:goto L64265e;
case 0x642662:c.instructions+=1;goto B642662;
case 0x642668:goto L642668;
case 0x64266b:c.instructions+=3;goto B64266b;
case 0x64266d:c.instructions+=2;goto B64266d;
case 0x64266f:c.instructions+=1;goto B64266f;
case 0x642675:goto L642675;
case 0x642678:c.instructions+=3;goto B642678;
case 0x64267b:c.instructions+=2;goto B64267b;
case 0x64267e:c.instructions+=1;goto B64267e;
case 0x642684:goto L642684;
case 0x64268b:c.instructions+=1;goto B64268b;
case 0x642690:goto L642690;
case 0x642693:c.instructions+=2;goto B642693;
case 0x642695:c.instructions+=1;goto B642695;
case 0x642697:goto L642697;
case 0x64269a:c.instructions+=3;goto B64269a;
case 0x64269c:c.instructions+=2;goto B64269c;
case 0x64269f:c.instructions+=1;goto B64269f;
case 0x6426a1:goto L6426a1;
case 0x6426a3:goto L6426a3;
case 0x6426a5:c.instructions+=1;goto B6426a5;
case 0x6426a8:goto L6426a8;
case 0x6426aa:goto L6426aa;
case 0x6426ad:c.instructions+=6;goto B6426ad;
case 0x6426b0:c.instructions+=5;goto B6426b0;
case 0x6426b2:c.instructions+=4;goto B6426b2;
case 0x6426b5:c.instructions+=3;goto B6426b5;
case 0x6426b7:c.instructions+=2;goto B6426b7;
case 0x6426ba:c.instructions+=1;goto B6426ba;
case 0x6426bc:goto L6426bc;
case 0x6426be:goto L6426be;
case 0x6426c0:c.instructions+=1;goto B6426c0;
case 0x6426c3:goto L6426c3;
case 0x6426c5:goto L6426c5;
case 0x6426c8:c.instructions+=2;goto B6426c8;
case 0x6426ca:c.instructions+=1;goto B6426ca;
case 0x6426cc:goto L6426cc;
case 0x6426cd:c.instructions+=1;goto B6426cd;
case 0x6426d2:goto L6426d2;
case 0x6426d6:c.instructions+=2;goto B6426d6;
case 0x6426d9:c.instructions+=1;goto B6426d9;
case 0x6426da:goto L6426da;
case 0x6426dc:c.instructions+=2;goto B6426dc;
case 0x6426df:c.instructions+=1;goto B6426df;
case 0x6426e4:goto L6426e4;
case 0x6426e7:goto L6426e7;
case 0x6426ea:c.instructions+=10;goto B6426ea;
case 0x6426eb:c.instructions+=9;goto B6426eb;
case 0x6426ee:c.instructions+=8;goto B6426ee;
case 0x6426f1:c.instructions+=7;goto B6426f1;
case 0x6426f4:c.instructions+=6;goto B6426f4;
case 0x6426f7:c.instructions+=5;goto B6426f7;
case 0x6426fa:c.instructions+=4;goto B6426fa;
case 0x6426fd:c.instructions+=3;goto B6426fd;
case 0x642700:c.instructions+=2;goto B642700;
case 0x642703:c.instructions+=1;goto B642703;
case 0x642708:goto L642708;
case 0x64270a:c.instructions+=2;goto B64270a;
case 0x64270d:c.instructions+=1;goto B64270d;
case 0x642713:goto L642713;
case 0x642715:c.instructions+=1;goto B642715;
case 0x64271a:goto L64271a;
case 0x64271c:c.instructions+=2;goto B64271c;
case 0x64271d:c.instructions+=1;goto B64271d;
case 0x64271f:goto L64271f;
case 0x642721:c.instructions+=1;goto B642721;
case 0x642726:goto L642726;
case 0x642728:c.instructions+=1;goto B642728;
case 0x64272a:goto L64272a;
case 0x64272c:goto L64272c;
case 0x64272e:c.instructions+=1;goto B64272e;
case 0x642734:goto L642734;
case 0x642737:c.instructions+=14;goto B642737;
case 0x64273a:c.instructions+=13;goto B64273a;
case 0x64273c:c.instructions+=12;goto B64273c;
case 0x64273f:c.instructions+=11;goto B64273f;
case 0x642742:c.instructions+=10;goto B642742;
case 0x642745:c.instructions+=9;goto B642745;
case 0x642748:c.instructions+=8;goto B642748;
case 0x64274b:c.instructions+=7;goto B64274b;
case 0x64274e:c.instructions+=6;goto B64274e;
case 0x642751:c.instructions+=5;goto B642751;
case 0x642754:c.instructions+=4;goto B642754;
case 0x642757:c.instructions+=3;goto B642757;
case 0x64275a:c.instructions+=2;goto B64275a;
case 0x64275d:c.instructions+=1;goto B64275d;
case 0x64275f:goto L64275f;
case 0x642762:c.instructions+=2;goto B642762;
case 0x642765:c.instructions+=1;goto B642765;
case 0x642767:goto L642767;
case 0x64276a:c.instructions+=5;goto B64276a;
case 0x64276d:c.instructions+=4;goto B64276d;
case 0x642770:c.instructions+=3;goto B642770;
case 0x642771:c.instructions+=2;goto B642771;
case 0x642774:c.instructions+=1;goto B642774;
case 0x642779:goto L642779;
case 0x64277b:c.instructions+=2;goto B64277b;
case 0x64277e:c.instructions+=1;goto B64277e;
case 0x642784:goto L642784;
case 0x642786:c.instructions+=1;goto B642786;
case 0x64278b:goto L64278b;
case 0x64278d:c.instructions+=3;goto B64278d;
case 0x64278f:c.instructions+=2;goto B64278f;
case 0x642790:c.instructions+=1;goto B642790;
case 0x642792:goto L642792;
case 0x642795:c.instructions+=5;goto B642795;
case 0x642797:c.instructions+=4;goto B642797;
case 0x64279a:c.instructions+=3;goto B64279a;
case 0x64279d:c.instructions+=2;goto B64279d;
case 0x6427a0:c.instructions+=1;goto B6427a0;
case 0x6427a2:goto L6427a2;
case 0x6427a5:c.instructions+=1;goto B6427a5;
case 0x6427a7:goto L6427a7;
case 0x6427a9:c.instructions+=1;goto B6427a9;
case 0x6427af:goto L6427af;
case 0x6427b2:c.instructions+=2;goto B6427b2;
case 0x6427b4:c.instructions+=1;goto B6427b4;
case 0x6427b6:goto L6427b6;
case 0x6427b8:c.instructions+=3;goto B6427b8;
case 0x6427bb:c.instructions+=2;goto B6427bb;
case 0x6427bc:c.instructions+=1;goto B6427bc;
case 0x6427c1:goto L6427c1;
case 0x6427c3:c.instructions+=4;goto B6427c3;
case 0x6427c4:c.instructions+=3;goto B6427c4;
case 0x6427c7:c.instructions+=2;goto B6427c7;
case 0x6427ca:c.instructions+=1;goto B6427ca;
case 0x6427cc:goto L6427cc;
case 0x6427d3:c.instructions+=1;goto B6427d3;
case 0x6427d5:goto L6427d5;
case 0x6427d6:c.instructions+=3;goto B6427d6;
case 0x6427d9:c.instructions+=2;goto B6427d9;
case 0x6427dc:c.instructions+=1;goto B6427dc;
case 0x6427e1:goto L6427e1;
case 0x6427e3:c.instructions+=2;goto B6427e3;
case 0x6427e6:c.instructions+=1;goto B6427e6;
case 0x6427e8:goto L6427e8;
case 0x6427eb:goto L6427eb;
case 0x6427ee:c.instructions+=31;goto B6427ee;
case 0x6427f0:c.instructions+=30;goto B6427f0;
case 0x6427f3:c.instructions+=29;goto B6427f3;
case 0x6427f6:c.instructions+=28;goto B6427f6;
case 0x6427f9:c.instructions+=27;goto B6427f9;
case 0x6427fc:c.instructions+=26;goto B6427fc;
case 0x6427ff:c.instructions+=25;goto B6427ff;
case 0x642802:c.instructions+=24;goto B642802;
case 0x642805:c.instructions+=23;goto B642805;
case 0x642808:c.instructions+=22;goto B642808;
case 0x64280b:c.instructions+=21;goto B64280b;
case 0x64280d:c.instructions+=20;goto B64280d;
case 0x642810:c.instructions+=19;goto B642810;
case 0x642813:c.instructions+=18;goto B642813;
case 0x642816:c.instructions+=17;goto B642816;
case 0x642819:c.instructions+=16;goto B642819;
case 0x64281b:c.instructions+=15;goto B64281b;
case 0x64281f:c.instructions+=14;goto B64281f;
case 0x642822:c.instructions+=13;goto B642822;
case 0x642825:c.instructions+=12;goto B642825;
case 0x642828:c.instructions+=11;goto B642828;
case 0x64282a:c.instructions+=10;goto B64282a;
case 0x64282d:c.instructions+=9;goto B64282d;
case 0x642830:c.instructions+=8;goto B642830;
case 0x642833:c.instructions+=7;goto B642833;
case 0x642836:c.instructions+=6;goto B642836;
case 0x642838:c.instructions+=5;goto B642838;
case 0x642839:c.instructions+=4;goto B642839;
case 0x64283c:c.instructions+=3;goto B64283c;
case 0x64283e:c.instructions+=2;goto B64283e;
case 0x64283f:c.instructions+=1;goto B64283f;
case 0x642844:goto L642844;
case 0x642847:goto L642847;
case 0x64284a:c.instructions+=2;goto B64284a;
case 0x64284c:c.instructions+=1;goto B64284c;
case 0x64284e:goto L64284e;
case 0x642850:c.instructions+=1;goto B642850;
case 0x642855:goto L642855;
case 0x642858:c.instructions+=5;goto B642858;
case 0x642859:c.instructions+=4;goto B642859;
case 0x64285a:c.instructions+=3;goto B64285a;
case 0x64285b:c.instructions+=2;goto B64285b;
case 0x64285c:c.instructions+=1;goto B64285c;
case 0x64285f:goto L64285f;
case 0x642861:c.instructions+=10;goto B642861;
case 0x642863:c.instructions+=9;goto B642863;
case 0x642869:c.instructions+=8;goto B642869;
case 0x642870:c.instructions+=7;goto B642870;
case 0x642873:c.instructions+=6;goto B642873;
case 0x642876:c.instructions+=5;goto B642876;
case 0x642879:c.instructions+=4;goto B642879;
case 0x64287c:c.instructions+=3;goto B64287c;
case 0x64287f:c.instructions+=2;goto B64287f;
case 0x642882:c.instructions+=1;goto B642882;
case 0x642883:goto L642883;
case 0x642885:c.instructions+=6;goto B642885;
case 0x642886:c.instructions+=5;goto B642886;
case 0x642888:c.instructions+=4;goto B642888;
case 0x64288b:c.instructions+=3;goto B64288b;
case 0x64288e:c.instructions+=2;goto B64288e;
case 0x642891:c.instructions+=1;goto B642891;
case 0x642893:goto L642893;
case 0x642895:c.instructions+=1;goto B642895;
case 0x64289a:goto L64289a;
case 0x64289c:goto L64289c;
case 0x64289d:c.instructions+=1;goto B64289d;
case 0x6428a0:goto L6428a0;
case 0x6428a2:c.instructions+=10;goto B6428a2;
case 0x6428a4:c.instructions+=9;goto B6428a4;
case 0x6428a6:c.instructions+=8;goto B6428a6;
case 0x6428a9:c.instructions+=7;goto B6428a9;
case 0x6428ac:c.instructions+=6;goto B6428ac;
case 0x6428af:c.instructions+=5;goto B6428af;
case 0x6428b6:c.instructions+=4;goto B6428b6;
case 0x6428b9:c.instructions+=3;goto B6428b9;
case 0x6428bc:c.instructions+=2;goto B6428bc;
case 0x6428bf:c.instructions+=1;goto B6428bf;
case 0x6428c0:goto L6428c0;
case 0x6428c2:c.instructions+=4;goto B6428c2;
case 0x6428c3:c.instructions+=3;goto B6428c3;
case 0x6428c5:c.instructions+=2;goto B6428c5;
case 0x6428c8:c.instructions+=1;goto B6428c8;
case 0x6428ca:goto L6428ca;
case 0x6428cb:goto L6428cb;
case 0x6428cd:c.instructions+=3;goto B6428cd;
case 0x6428cf:c.instructions+=2;goto B6428cf;
case 0x6428d0:c.instructions+=1;goto B6428d0;
case 0x6428d5:goto L6428d5;
case 0x6428d7:c.instructions+=3;goto B6428d7;
case 0x6428d8:c.instructions+=2;goto B6428d8;
case 0x6428da:c.instructions+=1;goto B6428da;
case 0x6428dc:goto L6428dc;
case 0x6428dd:goto L6428dd;
case 0x6428e0:c.instructions+=1;goto B6428e0;
case 0x6428e5:goto L6428e5;
case 0x6428e8:c.instructions+=1;goto B6428e8;
case 0x6428ed:goto L6428ed;
case 0x6428ee:c.instructions+=3;goto B6428ee;
case 0x6428ef:c.instructions+=2;goto B6428ef;
case 0x6428f0:c.instructions+=1;goto B6428f0;
case 0x6428f1:goto L6428f1;
case 0x6428f3:c.instructions+=16;goto B6428f3;
case 0x6428f4:c.instructions+=15;goto B6428f4;
case 0x6428f6:c.instructions+=14;goto B6428f6;
case 0x6428f9:c.instructions+=13;goto B6428f9;
case 0x6428fa:c.instructions+=12;goto B6428fa;
case 0x6428fc:c.instructions+=11;goto B6428fc;
case 0x6428ff:c.instructions+=10;goto B6428ff;
case 0x642901:c.instructions+=9;goto B642901;
case 0x642902:c.instructions+=8;goto B642902;
case 0x642903:c.instructions+=7;goto B642903;
case 0x642905:c.instructions+=6;goto B642905;
case 0x642907:c.instructions+=5;goto B642907;
case 0x642909:c.instructions+=4;goto B642909;
case 0x64290b:c.instructions+=3;goto B64290b;
case 0x64290e:c.instructions+=2;goto B64290e;
case 0x642911:c.instructions+=1;goto B642911;
case 0x642913:goto L642913;
case 0x642916:c.instructions+=3;goto B642916;
case 0x642919:c.instructions+=2;goto B642919;
case 0x64291c:c.instructions+=1;goto B64291c;
case 0x64291e:goto L64291e;
case 0x642921:c.instructions+=1;goto B642921;
case 0x642923:goto L642923;
case 0x642925:goto L642925;
case 0x642927:goto L642927;
case 0x64292a:c.instructions+=4;goto B64292a;
case 0x64292c:c.instructions+=3;goto B64292c;
case 0x64292e:c.instructions+=2;goto B64292e;
case 0x642931:c.instructions+=1;goto B642931;
case 0x642933:goto L642933;
case 0x642935:c.instructions+=1;goto B642935;
case 0x64293b:goto L64293b;
case 0x64293d:c.instructions+=5;goto B64293d;
case 0x64293f:c.instructions+=4;goto B64293f;
case 0x642940:c.instructions+=3;goto B642940;
case 0x642942:c.instructions+=2;goto B642942;
case 0x642944:c.instructions+=1;goto B642944;
case 0x64294a:goto L64294a;
case 0x64294c:c.instructions+=1;goto B64294c;
case 0x64294e:goto L64294e;
case 0x642950:c.instructions+=1;goto B642950;
case 0x642952:goto L642952;
case 0x642954:c.instructions+=1;goto B642954;
case 0x642955:goto L642955;
case 0x642957:c.instructions+=3;goto B642957;
case 0x64295a:c.instructions+=2;goto B64295a;
case 0x64295b:c.instructions+=1;goto B64295b;
case 0x642960:goto L642960;
case 0x642962:c.instructions+=3;goto B642962;
case 0x642963:c.instructions+=2;goto B642963;
case 0x642966:c.instructions+=1;goto B642966;
case 0x642968:goto L642968;
case 0x64296f:c.instructions+=1;goto B64296f;
case 0x642974:goto L642974;
case 0x642977:c.instructions+=5;goto B642977;
case 0x64297a:c.instructions+=4;goto B64297a;
case 0x64297d:c.instructions+=3;goto B64297d;
case 0x64297f:c.instructions+=2;goto B64297f;
case 0x642981:c.instructions+=1;goto B642981;
case 0x642984:goto L642984;
case 0x642986:goto L642986;
case 0x642988:c.instructions+=1;goto B642988;
case 0x64298b:goto L64298b;
case 0x64298d:goto L64298d;
case 0x642990:c.instructions+=1;goto B642990;
case 0x642995:goto L642995;
case 0x642998:c.instructions+=5;goto B642998;
case 0x64299b:c.instructions+=4;goto B64299b;
case 0x64299e:c.instructions+=3;goto B64299e;
case 0x6429a0:c.instructions+=2;goto B6429a0;
case 0x6429a1:c.instructions+=1;goto B6429a1;
case 0x6429a3:goto L6429a3;
case 0x6429a5:c.instructions+=1;goto B6429a5;
case 0x6429a7:goto L6429a7;
case 0x6429a9:c.instructions+=1;goto B6429a9;
case 0x6429aa:goto L6429aa;
case 0x6429ad:c.instructions+=2;goto B6429ad;
case 0x6429ae:c.instructions+=1;goto B6429ae;
case 0x6429b3:goto L6429b3;
case 0x6429b5:c.instructions+=4;goto B6429b5;
case 0x6429b7:c.instructions+=3;goto B6429b7;
case 0x6429b8:c.instructions+=2;goto B6429b8;
case 0x6429bb:c.instructions+=1;goto B6429bb;
case 0x6429bd:goto L6429bd;
case 0x6429c0:c.instructions+=4;goto B6429c0;
case 0x6429c3:c.instructions+=3;goto B6429c3;
case 0x6429c6:c.instructions+=2;goto B6429c6;
case 0x6429c8:c.instructions+=1;goto B6429c8;
case 0x6429cb:goto L6429cb;
case 0x6429cd:goto L6429cd;
case 0x6429cf:c.instructions+=1;goto B6429cf;
case 0x6429d2:goto L6429d2;
case 0x6429d4:goto L6429d4;
case 0x6429d7:c.instructions+=1;goto B6429d7;
case 0x6429dc:goto L6429dc;
case 0x6429df:c.instructions+=3;goto B6429df;
case 0x6429e2:c.instructions+=2;goto B6429e2;
case 0x6429e5:c.instructions+=1;goto B6429e5;
case 0x6429e6:goto L6429e6;
case 0x6429e9:c.instructions+=1;goto B6429e9;
case 0x6429eb:goto L6429eb;
case 0x6429ee:c.instructions+=7;goto B6429ee;
case 0x6429f1:c.instructions+=6;goto B6429f1;
case 0x6429f3:c.instructions+=5;goto B6429f3;
case 0x6429f6:c.instructions+=4;goto B6429f6;
case 0x6429f9:c.instructions+=3;goto B6429f9;
case 0x6429fc:c.instructions+=2;goto B6429fc;
case 0x6429fe:c.instructions+=1;goto B6429fe;
case 0x6429ff:goto L6429ff;
case 0x642a01:c.instructions+=2;goto B642a01;
case 0x642a04:c.instructions+=1;goto B642a04;
case 0x642a06:goto L642a06;
case 0x642a09:c.instructions+=4;goto B642a09;
case 0x642a0c:c.instructions+=3;goto B642a0c;
case 0x642a0f:c.instructions+=2;goto B642a0f;
case 0x642a16:c.instructions+=1;goto B642a16;
case 0x642a19:goto L642a19;
case 0x642a1c:c.instructions+=2;goto B642a1c;
case 0x642a1e:c.instructions+=1;goto B642a1e;
case 0x642a20:goto L642a20;
case 0x642a22:goto L642a22;
case 0x642a24:c.instructions+=1;goto B642a24;
case 0x642a29:goto L642a29;
case 0x642a2c:c.instructions+=6;goto B642a2c;
case 0x642a2d:c.instructions+=5;goto B642a2d;
case 0x642a2e:c.instructions+=4;goto B642a2e;
case 0x642a2f:c.instructions+=3;goto B642a2f;
case 0x642a30:c.instructions+=2;goto B642a30;
case 0x642a31:c.instructions+=1;goto B642a31;
case 0x642a34:goto L642a34;
case 0x642a36:c.instructions+=6;goto B642a36;
case 0x642a37:c.instructions+=5;goto B642a37;
case 0x642a38:c.instructions+=4;goto B642a38;
case 0x642a3a:c.instructions+=3;goto B642a3a;
case 0x642a3c:c.instructions+=2;goto B642a3c;
case 0x642a3e:c.instructions+=1;goto B642a3e;
case 0x642a40:goto L642a40;
case 0x642a41:goto L642a41;
case 0x642a43:c.instructions+=3;goto B642a43;
case 0x642a45:c.instructions+=2;goto B642a45;
case 0x642a46:c.instructions+=1;goto B642a46;
case 0x642a4b:goto L642a4b;
case 0x642a4d:c.instructions+=3;goto B642a4d;
case 0x642a4e:c.instructions+=2;goto B642a4e;
case 0x642a50:c.instructions+=1;goto B642a50;
case 0x642a52:goto L642a52;
case 0x642a53:goto L642a53;
case 0x642a55:c.instructions+=5;goto B642a55;
case 0x642a58:c.instructions+=4;goto B642a58;
case 0x642a5b:c.instructions+=3;goto B642a5b;
case 0x642a5e:c.instructions+=2;goto B642a5e;
case 0x642a61:c.instructions+=1;goto B642a61;
case 0x642a63:goto L642a63;
case 0x642a66:c.instructions+=5;goto B642a66;
case 0x642a69:c.instructions+=4;goto B642a69;
case 0x642a6c:c.instructions+=3;goto B642a6c;
case 0x642a6d:c.instructions+=2;goto B642a6d;
case 0x642a70:c.instructions+=1;goto B642a70;
case 0x642a72:goto L642a72;
case 0x642a73:c.instructions+=3;goto B642a73;
case 0x642a75:c.instructions+=2;goto B642a75;
case 0x642a76:c.instructions+=1;goto B642a76;
case 0x642a77:goto L642a77;
case 0x642a79:c.instructions+=7;goto B642a79;
case 0x642a7a:c.instructions+=6;goto B642a7a;
case 0x642a7c:c.instructions+=5;goto B642a7c;
case 0x642a7f:c.instructions+=4;goto B642a7f;
case 0x642a80:c.instructions+=3;goto B642a80;
case 0x642a81:c.instructions+=2;goto B642a81;
case 0x642a83:c.instructions+=1;goto B642a83;
case 0x642a86:goto L642a86;
case 0x642a88:c.instructions+=3;goto B642a88;
case 0x642a89:c.instructions+=2;goto B642a89;
case 0x642a8b:c.instructions+=1;goto B642a8b;
case 0x642a8d:goto L642a8d;
case 0x642a8f:c.instructions+=4;goto B642a8f;
case 0x642a92:c.instructions+=3;goto B642a92;
case 0x642a95:c.instructions+=2;goto B642a95;
case 0x642a96:c.instructions+=1;goto B642a96;
case 0x642a9b:goto L642a9b;
case 0x642a9d:c.instructions+=2;goto B642a9d;
case 0x642a9e:c.instructions+=1;goto B642a9e;
case 0x642aa0:goto L642aa0;
case 0x642aa5:c.instructions+=1;goto B642aa5;
case 0x642aa7:goto L642aa7;
case 0x642aa9:c.instructions+=9;goto B642aa9;
case 0x642aab:c.instructions+=8;goto B642aab;
case 0x642aae:c.instructions+=7;goto B642aae;
case 0x642ab1:c.instructions+=6;goto B642ab1;
case 0x642ab3:c.instructions+=5;goto B642ab3;
case 0x642ab5:c.instructions+=4;goto B642ab5;
case 0x642ab8:c.instructions+=3;goto B642ab8;
case 0x642abb:c.instructions+=2;goto B642abb;
case 0x642abd:c.instructions+=1;goto B642abd;
case 0x642ac0:goto L642ac0;
case 0x642ac2:goto L642ac2;
case 0x642ac4:c.instructions+=1;goto B642ac4;
case 0x642ac7:goto L642ac7;
case 0x642ac9:goto L642ac9;
case 0x642acb:goto L642acb;
case 0x642acc:c.instructions+=3;goto B642acc;
case 0x642acd:c.instructions+=2;goto B642acd;
case 0x642ace:c.instructions+=1;goto B642ace;
case 0x642ad1:goto L642ad1;
case 0x642ad3:c.instructions+=8;goto B642ad3;
case 0x642ad4:c.instructions+=7;goto B642ad4;
case 0x642ad6:c.instructions+=6;goto B642ad6;
case 0x642ad7:c.instructions+=5;goto B642ad7;
case 0x642ad8:c.instructions+=4;goto B642ad8;
case 0x642adb:c.instructions+=3;goto B642adb;
case 0x642add:c.instructions+=2;goto B642add;
case 0x642adf:c.instructions+=1;goto B642adf;
case 0x642ae1:goto L642ae1;
case 0x642ae4:c.instructions+=2;goto B642ae4;
case 0x642ae6:c.instructions+=1;goto B642ae6;
case 0x642ae8:goto L642ae8;
case 0x642aea:c.instructions+=1;goto B642aea;
case 0x642aec:goto L642aec;
case 0x642aed:c.instructions+=3;goto B642aed;
case 0x642aee:c.instructions+=2;goto B642aee;
case 0x642aef:c.instructions+=1;goto B642aef;
case 0x642af4:goto L642af4;
case 0x642af6:c.instructions+=1;goto B642af6;
case 0x642af8:goto L642af8;
case 0x642afa:c.instructions+=3;goto B642afa;
case 0x642afc:c.instructions+=2;goto B642afc;
case 0x642afd:c.instructions+=1;goto B642afd;
case 0x642b00:goto L642b00;
case 0x642b03:c.instructions+=4;goto B642b03;
case 0x642b06:c.instructions+=3;goto B642b06;
case 0x642b08:c.instructions+=2;goto B642b08;
case 0x642b0a:c.instructions+=1;goto B642b0a;
case 0x642b0c:goto L642b0c;
case 0x642b0d:goto L642b0d;
case 0x642b10:c.instructions+=2;goto B642b10;
case 0x642b12:c.instructions+=1;goto B642b12;
case 0x642b15:goto L642b15;
case 0x642b17:c.instructions+=3;goto B642b17;
case 0x642b18:c.instructions+=2;goto B642b18;
case 0x642b1a:c.instructions+=1;goto B642b1a;
case 0x642b1c:goto L642b1c;
case 0x642b1e:c.instructions+=4;goto B642b1e;
case 0x642b20:c.instructions+=3;goto B642b20;
case 0x642b22:c.instructions+=2;goto B642b22;
case 0x642b25:c.instructions+=1;goto B642b25;
case 0x642b27:goto L642b27;
case 0x642b29:goto L642b29;
case 0x642b2b:c.instructions+=1;goto B642b2b;
case 0x642b2e:goto L642b2e;
case 0x642b30:goto L642b30;
case 0x642b32:c.instructions+=2;goto B642b32;
case 0x642b34:c.instructions+=1;goto B642b34;
case 0x642b36:goto L642b36;
case 0x642b37:goto L642b37;
case 0x642b39:goto L642b39;
case 0x642b3a:c.instructions+=3;goto B642b3a;
case 0x642b3b:c.instructions+=2;goto B642b3b;
case 0x642b3c:c.instructions+=1;goto B642b3c;
case 0x642b3f:goto L642b3f;
case 0x642b42:c.instructions+=1;goto B642b42;
case 0x642b43:goto L642b43;
case 0x642b45:c.instructions+=8;goto B642b45;
case 0x642b47:c.instructions+=7;goto B642b47;
case 0x642b49:c.instructions+=6;goto B642b49;
case 0x642b4c:c.instructions+=5;goto B642b4c;
case 0x642b4f:c.instructions+=4;goto B642b4f;
case 0x642b56:c.instructions+=3;goto B642b56;
case 0x642b59:c.instructions+=2;goto B642b59;
case 0x642b5c:c.instructions+=1;goto B642b5c;
case 0x642b5d:goto L642b5d;
case 0x642b5f:c.instructions+=6;goto B642b5f;
case 0x642b60:c.instructions+=5;goto B642b60;
case 0x642b62:c.instructions+=4;goto B642b62;
case 0x642b66:c.instructions+=3;goto B642b66;
case 0x642b67:c.instructions+=2;goto B642b67;
case 0x642b68:c.instructions+=1;goto B642b68;
case 0x642b6a:goto L642b6a;
case 0x642b6d:c.instructions+=2;goto B642b6d;
case 0x642b6f:c.instructions+=1;goto B642b6f;
case 0x642b71:goto L642b71;
case 0x642b74:c.instructions+=3;goto B642b74;
case 0x642b77:c.instructions+=2;goto B642b77;
case 0x642b7a:c.instructions+=1;goto B642b7a;
case 0x642b7c:goto L642b7c;
case 0x642b7e:c.instructions+=1;goto B642b7e;
case 0x642b80:goto L642b80;
case 0x642b82:c.instructions+=2;goto B642b82;
case 0x642b83:c.instructions+=1;goto B642b83;
case 0x642b86:goto L642b86;
case 0x642b88:c.instructions+=3;goto B642b88;
case 0x642b89:c.instructions+=2;goto B642b89;
case 0x642b8b:c.instructions+=1;goto B642b8b;
case 0x642b8d:goto L642b8d;
case 0x642b8f:c.instructions+=2;goto B642b8f;
case 0x642b90:c.instructions+=1;goto B642b90;
case 0x642b92:goto L642b92;
case 0x642b94:goto L642b94;
case 0x642b96:c.instructions+=1;goto B642b96;
case 0x642b98:goto L642b98;
case 0x642b9a:c.instructions+=1;goto B642b9a;
case 0x642b9c:goto L642b9c;
case 0x642b9e:c.instructions+=11;goto B642b9e;
case 0x642ba0:c.instructions+=10;goto B642ba0;
case 0x642ba3:c.instructions+=9;goto B642ba3;
case 0x642ba6:c.instructions+=8;goto B642ba6;
case 0x642ba9:c.instructions+=7;goto B642ba9;
case 0x642bac:c.instructions+=6;goto B642bac;
case 0x642baf:c.instructions+=5;goto B642baf;
case 0x642bb2:c.instructions+=4;goto B642bb2;
case 0x642bb5:c.instructions+=3;goto B642bb5;
case 0x642bb8:c.instructions+=2;goto B642bb8;
case 0x642bba:c.instructions+=1;goto B642bba;
case 0x642bbc:goto L642bbc;
case 0x642bc1:goto L642bc1;
case 0x642bc2:c.instructions+=3;goto B642bc2;
case 0x642bc3:c.instructions+=2;goto B642bc3;
case 0x642bc4:c.instructions+=1;goto B642bc4;
case 0x642bc7:goto L642bc7;
case 0x642bc9:c.instructions+=5;goto B642bc9;
case 0x642bca:c.instructions+=4;goto B642bca;
case 0x642bcb:c.instructions+=3;goto B642bcb;
case 0x642bce:c.instructions+=2;goto B642bce;
case 0x642bd0:c.instructions+=1;goto B642bd0;
case 0x642bd2:goto L642bd2;
case 0x642bd4:c.instructions+=3;goto B642bd4;
case 0x642bd6:c.instructions+=2;goto B642bd6;
case 0x642bd9:c.instructions+=1;goto B642bd9;
case 0x642bdb:goto L642bdb;
case 0x642bde:c.instructions+=1;goto B642bde;
case 0x642be0:goto L642be0;
case 0x642be3:c.instructions+=2;goto B642be3;
case 0x642be5:c.instructions+=1;goto B642be5;
case 0x642be7:goto L642be7;
case 0x642bea:c.instructions+=1;goto B642bea;
case 0x642bec:goto L642bec;
case 0x642bef:c.instructions+=1;goto B642bef;
case 0x642bf1:goto L642bf1;
case 0x642bf4:c.instructions+=1;goto B642bf4;
case 0x642bf6:goto L642bf6;
case 0x642bf9:c.instructions+=2;goto B642bf9;
case 0x642bfb:c.instructions+=1;goto B642bfb;
case 0x642bfd:goto L642bfd;
case 0x642c01:c.instructions+=1;goto B642c01;
case 0x642c03:goto L642c03;
case 0x642c06:c.instructions+=1;goto B642c06;
case 0x642c08:goto L642c08;
case 0x642c0b:goto L642c0b;
case 0x642c0e:c.instructions+=1;goto B642c0e;
case 0x642c10:goto L642c10;
case 0x642c11:goto L642c11;
case 0x642c13:c.instructions+=2;goto B642c13;
case 0x642c16:c.instructions+=1;goto B642c16;
case 0x642c18:goto L642c18;
case 0x642c1a:goto L642c1a;
case 0x642c1b:c.instructions+=2;goto B642c1b;
case 0x642c1c:c.instructions+=1;goto B642c1c;
case 0x642c1d:goto L642c1d;
case 0x642c1f:c.instructions+=2;goto B642c1f;
case 0x642c20:c.instructions+=1;goto B642c20;
case 0x642c22:goto L642c22;
case 0x642c24:c.instructions+=11;goto B642c24;
case 0x642c25:c.instructions+=10;goto B642c25;
case 0x642c27:c.instructions+=9;goto B642c27;
case 0x642c28:c.instructions+=8;goto B642c28;
case 0x642c2c:c.instructions+=7;goto B642c2c;
case 0x642c2d:c.instructions+=6;goto B642c2d;
case 0x642c30:c.instructions+=5;goto B642c30;
case 0x642c31:c.instructions+=4;goto B642c31;
case 0x642c32:c.instructions+=3;goto B642c32;
case 0x642c34:c.instructions+=2;goto B642c34;
case 0x642c37:c.instructions+=1;goto B642c37;
case 0x642c39:goto L642c39;
case 0x642c3c:c.instructions+=2;goto B642c3c;
case 0x642c3d:c.instructions+=1;goto B642c3d;
case 0x642c42:goto L642c42;
case 0x642c44:c.instructions+=2;goto B642c44;
case 0x642c45:c.instructions+=1;goto B642c45;
case 0x642c47:goto L642c47;
case 0x642c4a:c.instructions+=2;goto B642c4a;
case 0x642c4d:c.instructions+=1;goto B642c4d;
case 0x642c53:goto L642c53;
case 0x642c56:c.instructions+=1;goto B642c56;
case 0x642c5c:goto L642c5c;
case 0x642c5f:c.instructions+=2;goto B642c5f;
case 0x642c60:c.instructions+=1;goto B642c60;
case 0x642c65:goto L642c65;
case 0x642c67:c.instructions+=2;goto B642c67;
case 0x642c68:c.instructions+=1;goto B642c68;
case 0x642c6e:goto L642c6e;
case 0x642c71:c.instructions+=1;goto B642c71;
case 0x642c73:goto L642c73;
case 0x642c76:c.instructions+=2;goto B642c76;
case 0x642c77:c.instructions+=1;goto B642c77;
case 0x642c7c:goto L642c7c;
case 0x642c7e:c.instructions+=2;goto B642c7e;
case 0x642c7f:c.instructions+=1;goto B642c7f;
case 0x642c81:goto L642c81;
case 0x642c82:c.instructions+=2;goto B642c82;
case 0x642c85:c.instructions+=1;goto B642c85;
case 0x642c87:goto L642c87;
case 0x642c8a:c.instructions+=2;goto B642c8a;
case 0x642c8c:c.instructions+=1;goto B642c8c;
case 0x642c8e:goto L642c8e;
case 0x642c91:c.instructions+=1;goto B642c91;
case 0x642c93:goto L642c93;
case 0x642c94:c.instructions+=2;goto B642c94;
case 0x642c96:c.instructions+=1;goto B642c96;
case 0x642c98:goto L642c98;
case 0x642c9b:c.instructions+=2;goto B642c9b;
case 0x642c9c:c.instructions+=1;goto B642c9c;
case 0x642ca1:goto L642ca1;
case 0x642ca3:c.instructions+=2;goto B642ca3;
case 0x642ca4:c.instructions+=1;goto B642ca4;
case 0x642ca6:goto L642ca6;
case 0x642ca7:c.instructions+=2;goto B642ca7;
case 0x642caa:c.instructions+=1;goto B642caa;
case 0x642cac:goto L642cac;
case 0x642cae:goto L642cae;
case 0x642cb5:c.instructions+=1;goto B642cb5;
case 0x642cb7:goto L642cb7;
case 0x642cba:c.instructions+=2;goto B642cba;
case 0x642cbb:c.instructions+=1;goto B642cbb;
case 0x642cc0:goto L642cc0;
case 0x642cc2:c.instructions+=2;goto B642cc2;
case 0x642cc3:c.instructions+=1;goto B642cc3;
case 0x642cc5:goto L642cc5;
case 0x642cc6:goto L642cc6;
case 0x642cc9:c.instructions+=1;goto B642cc9;
case 0x642ccb:goto L642ccb;
case 0x642cce:c.instructions+=2;goto B642cce;
case 0x642cd1:c.instructions+=1;goto B642cd1;
case 0x642cd3:goto L642cd3;
case 0x642cd6:c.instructions+=2;goto B642cd6;
case 0x642cd7:c.instructions+=1;goto B642cd7;
case 0x642cdc:goto L642cdc;
case 0x642cdf:c.instructions+=2;goto B642cdf;
case 0x642ce0:c.instructions+=1;goto B642ce0;
case 0x642ce2:goto L642ce2;
case 0x642ce5:c.instructions+=2;goto B642ce5;
case 0x642ce6:c.instructions+=1;goto B642ce6;
case 0x642ceb:goto L642ceb;
case 0x642ced:c.instructions+=2;goto B642ced;
case 0x642cee:c.instructions+=1;goto B642cee;
case 0x642cf0:goto L642cf0;
case 0x642cf1:c.instructions+=2;goto B642cf1;
case 0x642cf2:c.instructions+=1;goto B642cf2;
case 0x642cf4:goto L642cf4;
case 0x642cf7:c.instructions+=2;goto B642cf7;
case 0x642cf8:c.instructions+=1;goto B642cf8;
case 0x642cfd:goto L642cfd;
case 0x642cff:c.instructions+=2;goto B642cff;
case 0x642d00:c.instructions+=1;goto B642d00;
case 0x642d02:goto L642d02;
case 0x642d03:goto L642d03;
case 0x642d06:c.instructions+=1;goto B642d06;
case 0x642d08:goto L642d08;
case 0x642d0a:goto L642d0a;
case 0x642d0d:c.instructions+=2;goto B642d0d;
case 0x642d10:c.instructions+=1;goto B642d10;
case 0x642d12:goto L642d12;
case 0x642d15:c.instructions+=2;goto B642d15;
case 0x642d16:c.instructions+=1;goto B642d16;
case 0x642d1b:goto L642d1b;
case 0x642d1e:c.instructions+=2;goto B642d1e;
case 0x642d1f:c.instructions+=1;goto B642d1f;
case 0x642d21:goto L642d21;
case 0x642d24:c.instructions+=1;goto B642d24;
case 0x642d26:goto L642d26;
case 0x642d2a:c.instructions+=2;goto B642d2a;
case 0x642d2b:c.instructions+=1;goto B642d2b;
case 0x642d30:goto L642d30;
case 0x642d32:c.instructions+=2;goto B642d32;
case 0x642d33:c.instructions+=1;goto B642d33;
case 0x642d35:goto L642d35;
case 0x642d38:c.instructions+=1;goto B642d38;
case 0x642d3a:goto L642d3a;
case 0x642d3d:c.instructions+=2;goto B642d3d;
case 0x642d3e:c.instructions+=1;goto B642d3e;
case 0x642d43:goto L642d43;
case 0x642d45:c.instructions+=2;goto B642d45;
case 0x642d46:c.instructions+=1;goto B642d46;
case 0x642d48:goto L642d48;
case 0x642d49:goto L642d49;
case 0x642d4c:c.instructions+=1;goto B642d4c;
case 0x642d4e:goto L642d4e;
case 0x642d50:goto L642d50;
case 0x642d54:c.instructions+=1;goto B642d54;
case 0x642d56:goto L642d56;
case 0x642d5a:c.instructions+=1;goto B642d5a;
case 0x642d5c:goto L642d5c;
case 0x642d5f:c.instructions+=7;goto B642d5f;
case 0x642d61:c.instructions+=6;goto B642d61;
case 0x642d63:c.instructions+=5;goto B642d63;
case 0x642d66:c.instructions+=4;goto B642d66;
case 0x642d69:c.instructions+=3;goto B642d69;
case 0x642d6c:c.instructions+=2;goto B642d6c;
case 0x642d6f:c.instructions+=1;goto B642d6f;
case 0x642d74:goto L642d74;
case 0x642d76:c.instructions+=4;goto B642d76;
case 0x642d78:c.instructions+=3;goto B642d78;
case 0x642d7a:c.instructions+=2;goto B642d7a;
case 0x642d7d:c.instructions+=1;goto B642d7d;
case 0x642d7f:goto L642d7f;
case 0x642d81:goto L642d81;
case 0x642d83:c.instructions+=1;goto B642d83;
case 0x642d86:goto L642d86;
case 0x642d88:goto L642d88;
case 0x642d8a:c.instructions+=3;goto B642d8a;
case 0x642d8b:c.instructions+=2;goto B642d8b;
case 0x642d8f:c.instructions+=1;goto B642d8f;
case 0x642d94:goto L642d94;
case 0x642d97:c.instructions+=2;goto B642d97;
case 0x642d98:c.instructions+=1;goto B642d98;
case 0x642d9a:goto L642d9a;
case 0x642d9c:c.instructions+=2;goto B642d9c;
case 0x642d9f:c.instructions+=1;goto B642d9f;
case 0x642da1:goto L642da1;
case 0x642da3:goto L642da3;
case 0x642da6:c.instructions+=5;goto B642da6;
case 0x642da7:c.instructions+=4;goto B642da7;
case 0x642da8:c.instructions+=3;goto B642da8;
case 0x642da9:c.instructions+=2;goto B642da9;
case 0x642daa:c.instructions+=1;goto B642daa;
case 0x642dad:goto L642dad;
case 0x642daf:c.instructions+=9;goto B642daf;
case 0x642db0:c.instructions+=8;goto B642db0;
case 0x642db2:c.instructions+=7;goto B642db2;
case 0x642db3:c.instructions+=6;goto B642db3;
case 0x642db6:c.instructions+=5;goto B642db6;
case 0x642db7:c.instructions+=4;goto B642db7;
case 0x642db9:c.instructions+=3;goto B642db9;
case 0x642dbc:c.instructions+=2;goto B642dbc;
case 0x642dbd:c.instructions+=1;goto B642dbd;
case 0x642dbf:goto L642dbf;
case 0x642dc2:c.instructions+=2;goto B642dc2;
case 0x642dc3:c.instructions+=1;goto B642dc3;
case 0x642dc8:goto L642dc8;
case 0x642dca:c.instructions+=2;goto B642dca;
case 0x642dcb:c.instructions+=1;goto B642dcb;
case 0x642dcd:goto L642dcd;
case 0x642dd0:c.instructions+=1;goto B642dd0;
case 0x642dd2:goto L642dd2;
case 0x642dd5:c.instructions+=1;goto B642dd5;
case 0x642dd7:goto L642dd7;
case 0x642dda:c.instructions+=2;goto B642dda;
case 0x642ddb:c.instructions+=1;goto B642ddb;
case 0x642de0:goto L642de0;
case 0x642de2:c.instructions+=2;goto B642de2;
case 0x642de3:c.instructions+=1;goto B642de3;
case 0x642de5:goto L642de5;
case 0x642de8:c.instructions+=1;goto B642de8;
case 0x642dea:goto L642dea;
case 0x642deb:goto L642deb;
case 0x642dee:c.instructions+=1;goto B642dee;
case 0x642df0:goto L642df0;
case 0x642df3:c.instructions+=6;goto B642df3;
case 0x642df5:c.instructions+=5;goto B642df5;
case 0x642df7:c.instructions+=4;goto B642df7;
case 0x642df9:c.instructions+=3;goto B642df9;
case 0x642dfc:c.instructions+=2;goto B642dfc;
case 0x642dfd:c.instructions+=1;goto B642dfd;
case 0x642e02:goto L642e02;
case 0x642e04:c.instructions+=1;goto B642e04;
case 0x642e06:goto L642e06;
case 0x642e09:c.instructions+=4;goto B642e09;
case 0x642e0b:c.instructions+=3;goto B642e0b;
case 0x642e0d:c.instructions+=2;goto B642e0d;
case 0x642e10:c.instructions+=1;goto B642e10;
case 0x642e12:goto L642e12;
case 0x642e14:goto L642e14;
case 0x642e16:c.instructions+=1;goto B642e16;
case 0x642e19:goto L642e19;
case 0x642e1b:goto L642e1b;
case 0x642e1e:c.instructions+=4;goto B642e1e;
case 0x642e22:c.instructions+=3;goto B642e22;
case 0x642e24:c.instructions+=2;goto B642e24;
case 0x642e26:c.instructions+=1;goto B642e26;
case 0x642e28:goto L642e28;
case 0x642e2a:goto L642e2a;
case 0x642e2b:c.instructions+=4;goto B642e2b;
case 0x642e2c:c.instructions+=3;goto B642e2c;
case 0x642e2d:c.instructions+=2;goto B642e2d;
case 0x642e2e:c.instructions+=1;goto B642e2e;
case 0x642e31:goto L642e31;
case 0x642e33:c.instructions+=17;goto B642e33;
case 0x642e34:c.instructions+=16;goto B642e34;
case 0x642e36:c.instructions+=15;goto B642e36;
case 0x642e37:c.instructions+=14;goto B642e37;
case 0x642e3a:c.instructions+=13;goto B642e3a;
case 0x642e3d:c.instructions+=12;goto B642e3d;
case 0x642e3e:c.instructions+=11;goto B642e3e;
case 0x642e3f:c.instructions+=10;goto B642e3f;
case 0x642e42:c.instructions+=9;goto B642e42;
case 0x642e44:c.instructions+=8;goto B642e44;
case 0x642e46:c.instructions+=7;goto B642e46;
case 0x642e49:c.instructions+=6;goto B642e49;
case 0x642e4c:c.instructions+=5;goto B642e4c;
case 0x642e4f:c.instructions+=4;goto B642e4f;
case 0x642e51:c.instructions+=3;goto B642e51;
case 0x642e52:c.instructions+=2;goto B642e52;
case 0x642e55:c.instructions+=1;goto B642e55;
case 0x642e5b:goto L642e5b;
case 0x642e5d:c.instructions+=2;goto B642e5d;
case 0x642e60:c.instructions+=1;goto B642e60;
case 0x642e62:goto L642e62;
case 0x642e64:c.instructions+=2;goto B642e64;
case 0x642e66:c.instructions+=1;goto B642e66;
case 0x642e68:goto L642e68;
case 0x642e6b:c.instructions+=1;goto B642e6b;
case 0x642e6d:goto L642e6d;
case 0x642e70:c.instructions+=1;goto B642e70;
case 0x642e75:goto L642e75;
case 0x642e77:c.instructions+=2;goto B642e77;
case 0x642e79:c.instructions+=1;goto B642e79;
case 0x642e7b:goto L642e7b;
case 0x642e7e:c.instructions+=2;goto B642e7e;
case 0x642e81:c.instructions+=1;goto B642e81;
case 0x642e83:goto L642e83;
case 0x642e85:goto L642e85;
case 0x642e88:c.instructions+=1;goto B642e88;
case 0x642e8a:goto L642e8a;
case 0x642e8d:c.instructions+=1;goto B642e8d;
case 0x642e8f:goto L642e8f;
case 0x642e90:c.instructions+=2;goto B642e90;
case 0x642e91:c.instructions+=1;goto B642e91;
case 0x642e93:goto L642e93;
case 0x642e94:c.instructions+=1;goto B642e94;
case 0x642e96:goto L642e96;
case 0x642e99:c.instructions+=2;goto B642e99;
case 0x642e9c:c.instructions+=1;goto B642e9c;
case 0x642e9e:goto L642e9e;
case 0x642ea1:c.instructions+=1;goto B642ea1;
case 0x642ea3:goto L642ea3;
case 0x642ea6:c.instructions+=3;goto B642ea6;
case 0x642ea8:c.instructions+=2;goto B642ea8;
case 0x642eab:c.instructions+=1;goto B642eab;
case 0x642ead:goto L642ead;
case 0x642eb0:c.instructions+=1;goto B642eb0;
case 0x642eb2:goto L642eb2;
case 0x642eb3:c.instructions+=1;goto B642eb3;
case 0x642eb5:goto L642eb5;
case 0x642eb6:c.instructions+=1;goto B642eb6;
case 0x642eb8:goto L642eb8;
case 0x642ebb:c.instructions+=1;goto B642ebb;
case 0x642ebd:goto L642ebd;
case 0x642ec0:c.instructions+=1;goto B642ec0;
case 0x642ec2:goto L642ec2;
case 0x642ec5:c.instructions+=4;goto B642ec5;
case 0x642ec8:c.instructions+=3;goto B642ec8;
case 0x642ecb:c.instructions+=2;goto B642ecb;
case 0x642ece:c.instructions+=1;goto B642ece;
case 0x642ed0:goto L642ed0;
case 0x642ed3:c.instructions+=1;goto B642ed3;
case 0x642ed5:goto L642ed5;
case 0x642ed9:goto L642ed9;
case 0x642edb:c.instructions+=1;goto B642edb;
case 0x642edd:goto L642edd;
case 0x642ee0:c.instructions+=1;goto B642ee0;
case 0x642ee2:goto L642ee2;
case 0x642ee5:c.instructions+=2;goto B642ee5;
case 0x642ee8:c.instructions+=1;goto B642ee8;
case 0x642eea:goto L642eea;
case 0x642eec:goto L642eec;
case 0x642eef:c.instructions+=1;goto B642eef;
case 0x642ef1:goto L642ef1;
case 0x642ef4:c.instructions+=1;goto B642ef4;
case 0x642ef6:goto L642ef6;
case 0x642ef9:c.instructions+=1;goto B642ef9;
case 0x642efb:goto L642efb;
case 0x642efe:c.instructions+=1;goto B642efe;
case 0x642f00:goto L642f00;
case 0x642f03:c.instructions+=1;goto B642f03;
case 0x642f05:goto L642f05;
case 0x642f08:c.instructions+=1;goto B642f08;
case 0x642f0a:goto L642f0a;
case 0x642f0c:c.instructions+=1;goto B642f0c;
case 0x642f0d:goto L642f0d;
case 0x642f0e:c.instructions+=4;goto B642f0e;
case 0x642f0f:c.instructions+=3;goto B642f0f;
case 0x642f10:c.instructions+=2;goto B642f10;
case 0x642f11:c.instructions+=1;goto B642f11;
case 0x642f14:goto L642f14;
case 0x642f17:c.instructions+=1;goto B642f17;
case 0x642f19:goto L642f19;
case 0x642f1a:c.instructions+=2;goto B642f1a;
case 0x642f1b:c.instructions+=1;goto B642f1b;
case 0x642f1d:goto L642f1d;
case 0x642f20:c.instructions+=1;goto B642f20;
case 0x642f22:goto L642f22;
case 0x642f25:c.instructions+=1;goto B642f25;
case 0x642f27:goto L642f27;
case 0x642f2b:c.instructions+=1;goto B642f2b;
case 0x642f2d:goto L642f2d;
case 0x642f30:c.instructions+=1;goto B642f30;
case 0x642f32:goto L642f32;
case 0x642f35:c.instructions+=1;goto B642f35;
case 0x642f37:goto L642f37;
case 0x642f3a:goto L642f3a;
case 0x642f3c:goto L642f3c;
case 0x642f3d:c.instructions+=1;goto B642f3d;
case 0x642f3f:goto L642f3f;
case 0x642f41:c.instructions+=11;goto B642f41;
case 0x642f42:c.instructions+=10;goto B642f42;
case 0x642f44:c.instructions+=9;goto B642f44;
case 0x642f45:c.instructions+=8;goto B642f45;
case 0x642f46:c.instructions+=7;goto B642f46;
case 0x642f49:c.instructions+=6;goto B642f49;
case 0x642f4c:c.instructions+=5;goto B642f4c;
case 0x642f4d:c.instructions+=4;goto B642f4d;
case 0x642f4f:c.instructions+=3;goto B642f4f;
case 0x642f51:c.instructions+=2;goto B642f51;
case 0x642f52:c.instructions+=1;goto B642f52;
case 0x642f54:goto L642f54;
case 0x642f56:c.instructions+=1;goto B642f56;
case 0x642f58:goto L642f58;
case 0x642f5b:c.instructions+=2;goto B642f5b;
case 0x642f5c:c.instructions+=1;goto B642f5c;
case 0x642f61:goto L642f61;
case 0x642f64:c.instructions+=2;goto B642f64;
case 0x642f65:c.instructions+=1;goto B642f65;
case 0x642f67:goto L642f67;
case 0x642f68:c.instructions+=2;goto B642f68;
case 0x642f69:c.instructions+=1;goto B642f69;
case 0x642f6b:goto L642f6b;
case 0x642f6d:c.instructions+=1;goto B642f6d;
case 0x642f6f:goto L642f6f;
case 0x642f71:goto L642f71;
case 0x642f72:c.instructions+=1;goto B642f72;
case 0x642f75:goto L642f75;
case 0x642f78:c.instructions+=2;goto B642f78;
case 0x642f7a:c.instructions+=1;goto B642f7a;
case 0x642f7c:goto L642f7c;
case 0x642f7e:goto L642f7e;
case 0x642f80:c.instructions+=1;goto B642f80;
case 0x642f82:goto L642f82;
case 0x642f83:c.instructions+=4;goto B642f83;
case 0x642f84:c.instructions+=3;goto B642f84;
case 0x642f85:c.instructions+=2;goto B642f85;
case 0x642f86:c.instructions+=1;goto B642f86;
case 0x642f89:goto L642f89;
case 0x642f8b:c.instructions+=13;goto B642f8b;
case 0x642f8c:c.instructions+=12;goto B642f8c;
case 0x642f8e:c.instructions+=11;goto B642f8e;
case 0x642f8f:c.instructions+=10;goto B642f8f;
case 0x642f93:c.instructions+=9;goto B642f93;
case 0x642f94:c.instructions+=8;goto B642f94;
case 0x642f97:c.instructions+=7;goto B642f97;
case 0x642f9b:c.instructions+=6;goto B642f9b;
case 0x642f9c:c.instructions+=5;goto B642f9c;
case 0x642f9e:c.instructions+=4;goto B642f9e;
case 0x642fa1:c.instructions+=3;goto B642fa1;
case 0x642fa2:c.instructions+=2;goto B642fa2;
case 0x642fa4:c.instructions+=1;goto B642fa4;
case 0x642fa6:goto L642fa6;
case 0x642faa:c.instructions+=1;goto B642faa;
case 0x642fac:goto L642fac;
case 0x642faf:c.instructions+=2;goto B642faf;
case 0x642fb0:c.instructions+=1;goto B642fb0;
case 0x642fb5:goto L642fb5;
case 0x642fb8:c.instructions+=2;goto B642fb8;
case 0x642fb9:c.instructions+=1;goto B642fb9;
case 0x642fbb:goto L642fbb;
case 0x642fc2:c.instructions+=1;goto B642fc2;
case 0x642fc4:goto L642fc4;
case 0x642fc8:c.instructions+=1;goto B642fc8;
case 0x642fca:goto L642fca;
case 0x642fcd:c.instructions+=2;goto B642fcd;
case 0x642fce:c.instructions+=1;goto B642fce;
case 0x642fd3:goto L642fd3;
case 0x642fd6:c.instructions+=2;goto B642fd6;
case 0x642fd7:c.instructions+=1;goto B642fd7;
case 0x642fd9:goto L642fd9;
case 0x642fe0:goto L642fe0;
case 0x642fe1:c.instructions+=2;goto B642fe1;
case 0x642fe4:c.instructions+=1;goto B642fe4;
case 0x642fe6:goto L642fe6;
case 0x642fe9:c.instructions+=2;goto B642fe9;
case 0x642feb:c.instructions+=1;goto B642feb;
case 0x642fed:goto L642fed;
case 0x642ff1:c.instructions+=1;goto B642ff1;
case 0x642ff3:goto L642ff3;
case 0x642ff9:c.instructions+=1;goto B642ff9;
case 0x642ffb:goto L642ffb;
case 0x642fff:c.instructions+=1;goto B642fff;
default:missing_instruction(c.pc);}
B642000:L642000:{c.instructions+=8;NFSU2_TR(0x642000);
__builtin_memmove((R+20),(R+16),4);
}
B642002:{NFSU2_TR(0x642002);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642005:{NFSU2_TR(0x642005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642006:{NFSU2_TR(0x642006);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B642009:{NFSU2_TR(0x642009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64200a:{NFSU2_TR(0x64200a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64200d:{NFSU2_TR(0x64200d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64200e:{NFSU2_TR(0x64200e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642013ull));
TAIL_STATIC(0x641f0du,641);
}
B642013:L642013:{c.instructions+=2;NFSU2_TR(0x642013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642014:{NFSU2_TR(0x642014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642017:L642017:{c.instructions+=16;NFSU2_TR(0x642017);
__builtin_memmove((R+28),(R+28),4);
}
B642019:{NFSU2_TR(0x642019);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64201a:{NFSU2_TR(0x64201a);
__builtin_memmove((R+20),(R+16),4);
}
B64201c:{NFSU2_TR(0x64201c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64201d:{NFSU2_TR(0x64201d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64201e:{NFSU2_TR(0x64201e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642021:{NFSU2_TR(0x642021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642023:{NFSU2_TR(0x642023);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642026:{NFSU2_TR(0x642026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642027:{NFSU2_TR(0x642027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B642029:{NFSU2_TR(0x642029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64202a:{NFSU2_TR(0x64202a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64202d:{NFSU2_TR(0x64202d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64202f:{NFSU2_TR(0x64202f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B642032:{NFSU2_TR(0x642032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642035:{NFSU2_TR(0x642035);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64203a;}}
}
B642037:L642037:{c.instructions+=2;NFSU2_TR(0x642037);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B642039:{NFSU2_TR(0x642039);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64203a:L64203a:{c.instructions+=2;NFSU2_TR(0x64203a);
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
B64203c:{NFSU2_TR(0x64203c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642104;}}
}
B642042:L642042:{c.instructions+=2;NFSU2_TR(0x642042);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642045:{NFSU2_TR(0x642045);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6420c2;}}
}
B642047:L642047:{c.instructions+=2;NFSU2_TR(0x642047);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64204a:{NFSU2_TR(0x64204a);
if(r1(R+518)){{goto L642098;}}
}
B64204c:L64204c:{c.instructions+=2;NFSU2_TR(0x64204c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64204f:{NFSU2_TR(0x64204f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642104;}}
}
B642055:L642055:{c.instructions+=6;NFSU2_TR(0x642055);
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
B642057:{NFSU2_TR(0x642057);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64205a:{NFSU2_TR(0x64205a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64205d:{NFSU2_TR(0x64205d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642060:{NFSU2_TR(0x642060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B642062:{NFSU2_TR(0x642062);
if(r1(R+518)){{goto L642109;}}
}
B642068:L642068:{c.instructions+=4;NFSU2_TR(0x642068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64206c:{NFSU2_TR(0x64206c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642070:{NFSU2_TR(0x642070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B642072:{NFSU2_TR(0x642072);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L642093;}}
}
B642074:L642074:{c.instructions+=4;NFSU2_TR(0x642074);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642077:{NFSU2_TR(0x642077);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64207a:{NFSU2_TR(0x64207a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64207b:{NFSU2_TR(0x64207b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642080ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642017u);}goto L642017;}
}
B642080:L642080:{c.instructions+=2;NFSU2_TR(0x642080);
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
B642082:{NFSU2_TR(0x642082);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642109;}}
}
B642088:L642088:{c.instructions+=4;NFSU2_TR(0x642088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64208b:{NFSU2_TR(0x64208b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64208e:{NFSU2_TR(0x64208e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B642091:{NFSU2_TR(0x642091);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642074u);}goto L642074;}}
}
B642093:L642093:{c.instructions+=2;NFSU2_TR(0x642093);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642094:{NFSU2_TR(0x642094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642068u);}goto L642068;}}
}
B642096:L642096:{c.instructions+=1;NFSU2_TR(0x642096);
{goto L642109;}
}
B642098:L642098:{c.instructions+=3;NFSU2_TR(0x642098);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B64209b:{NFSU2_TR(0x64209b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64209e:{NFSU2_TR(0x64209e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L642104;}}
}
B6420a0:L6420a0:{c.instructions+=2;NFSU2_TR(0x6420a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x642118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6420a7:{NFSU2_TR(0x6420a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x642110ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6420ae:L6420ae:{c.instructions+=8;NFSU2_TR(0x6420ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6420b1:{NFSU2_TR(0x6420b1);
__builtin_memmove((R+4),(R+28),4);
}
B6420b3:{NFSU2_TR(0x6420b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6420b6:{NFSU2_TR(0x6420b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
}
B6420b8:{NFSU2_TR(0x6420b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6420bb:{NFSU2_TR(0x6420bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
}
B6420bd:{NFSU2_TR(0x6420bd);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6420c0:{NFSU2_TR(0x6420c0);
{goto L642109;}
}
B6420c2:L6420c2:{c.instructions+=5;NFSU2_TR(0x6420c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6420c5:{NFSU2_TR(0x6420c5);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6420c9:{NFSU2_TR(0x6420c9);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B6420cc:{NFSU2_TR(0x6420cc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6420cd:{NFSU2_TR(0x6420cd);
if(r1(R+518)){{goto L6420d5;}}
}
B6420cf:L6420cf:{c.instructions+=2;NFSU2_TR(0x6420cf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6420d0:{NFSU2_TR(0x6420d0);
if(r1(R+518)){{goto L6420d5;}}
}
B6420d2:L6420d2:{c.instructions+=2;NFSU2_TR(0x6420d2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6420d3:{NFSU2_TR(0x6420d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642104;}}
}
B6420d5:L6420d5:{c.instructions+=8;NFSU2_TR(0x6420d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6420d8:{NFSU2_TR(0x6420d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6420da:{NFSU2_TR(0x6420da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6420dd:{NFSU2_TR(0x6420dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6420df:{NFSU2_TR(0x6420df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6420e2:{NFSU2_TR(0x6420e2);
__builtin_memmove((R+4),(R+8),4);
}
B6420e4:{NFSU2_TR(0x6420e4);
__builtin_memmove((R+0),(R+4),4);
}
B6420e6:{NFSU2_TR(0x6420e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6420e9:L6420e9:{c.instructions+=1;NFSU2_TR(0x6420e9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6420eb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6420e9u);}goto L6420e9;}
}
B6420eb:L6420eb:{c.instructions+=3;NFSU2_TR(0x6420eb);
__builtin_memmove((R+4),(R+0),4);
}
B6420ed:{NFSU2_TR(0x6420ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6420f0:{NFSU2_TR(0x6420f0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6420f3:L6420f3:{c.instructions+=1;NFSU2_TR(0x6420f3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6420f5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6420f3u);}goto L6420f3;}
}
B6420f5:L6420f5:{c.instructions+=6;NFSU2_TR(0x6420f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B6420f7:{NFSU2_TR(0x6420f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6420fa:{NFSU2_TR(0x6420fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B6420fc:{NFSU2_TR(0x6420fc);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+12)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6420ff:{NFSU2_TR(0x6420ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642102:{NFSU2_TR(0x642102);
{goto L642109;}
}
B642104:L642104:{c.instructions+=1;NFSU2_TR(0x642104);
w4(R+0,u32(0x80004005ull));
}
B642109:L642109:{c.instructions+=5;NFSU2_TR(0x642109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64210a:{NFSU2_TR(0x64210a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64210b:{NFSU2_TR(0x64210b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64210c:{NFSU2_TR(0x64210c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64210d:{NFSU2_TR(0x64210d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642127:L642127:{c.instructions+=10;NFSU2_TR(0x642127);
__builtin_memmove((R+28),(R+28),4);
}
B642129:{NFSU2_TR(0x642129);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64212a:{NFSU2_TR(0x64212a);
__builtin_memmove((R+20),(R+16),4);
}
B64212c:{NFSU2_TR(0x64212c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64212f:{NFSU2_TR(0x64212f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642130:{NFSU2_TR(0x642130);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B642133:{NFSU2_TR(0x642133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642134:{NFSU2_TR(0x642134);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642137:{NFSU2_TR(0x642137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642138:{NFSU2_TR(0x642138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64213dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642017u);}goto L642017;}
}
B64213d:L64213d:{c.instructions+=2;NFSU2_TR(0x64213d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64213e:{NFSU2_TR(0x64213e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642141:L642141:{c.instructions+=16;NFSU2_TR(0x642141);
__builtin_memmove((R+28),(R+28),4);
}
B642143:{NFSU2_TR(0x642143);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642144:{NFSU2_TR(0x642144);
__builtin_memmove((R+20),(R+16),4);
}
B642146:{NFSU2_TR(0x642146);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642147:{NFSU2_TR(0x642147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642148:{NFSU2_TR(0x642148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64214b:{NFSU2_TR(0x64214b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64214d:{NFSU2_TR(0x64214d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642151:{NFSU2_TR(0x642151);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642154:{NFSU2_TR(0x642154);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642155:{NFSU2_TR(0x642155);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642156:{NFSU2_TR(0x642156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B642158:{NFSU2_TR(0x642158);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642159:{NFSU2_TR(0x642159);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64215c:{NFSU2_TR(0x64215c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B64215f:{NFSU2_TR(0x64215f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642164;}}
}
B642161:L642161:{c.instructions+=2;NFSU2_TR(0x642161);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B642163:{NFSU2_TR(0x642163);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B642164:L642164:{c.instructions+=2;NFSU2_TR(0x642164);
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
B642166:{NFSU2_TR(0x642166);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642397;}}
}
B64216c:L64216c:{c.instructions+=2;NFSU2_TR(0x64216c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64216f:{NFSU2_TR(0x64216f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642460;}}
}
B642175:L642175:{c.instructions+=2;NFSU2_TR(0x642175);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642178:{NFSU2_TR(0x642178);
if(r1(R+518)){{goto L6421ca;}}
}
B64217a:L64217a:{c.instructions+=2;NFSU2_TR(0x64217a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B64217d:{NFSU2_TR(0x64217d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642397;}}
}
B642183:L642183:{c.instructions+=5;NFSU2_TR(0x642183);
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
B642185:{NFSU2_TR(0x642185);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642188:{NFSU2_TR(0x642188);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64218b:{NFSU2_TR(0x64218b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64218d:{NFSU2_TR(0x64218d);
if(r1(R+518)){{goto L64239e;}}
}
B642193:L642193:{c.instructions+=4;NFSU2_TR(0x642193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642197:{NFSU2_TR(0x642197);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642199:{NFSU2_TR(0x642199);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64219b:{NFSU2_TR(0x64219b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6421c2;}}
}
B64219d:L64219d:{c.instructions+=5;NFSU2_TR(0x64219d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6421a0:{NFSU2_TR(0x6421a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6421a3:{NFSU2_TR(0x6421a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6421a6:{NFSU2_TR(0x6421a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6421a7:{NFSU2_TR(0x6421a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6421acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642141u);}goto L642141;}
}
B6421ac:L6421ac:{c.instructions+=3;NFSU2_TR(0x6421ac);
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
B6421ae:{NFSU2_TR(0x6421ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6421b1:{NFSU2_TR(0x6421b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64239e;}}
}
B6421b7:L6421b7:{c.instructions+=4;NFSU2_TR(0x6421b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6421ba:{NFSU2_TR(0x6421ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6421bd:{NFSU2_TR(0x6421bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6421c0:{NFSU2_TR(0x6421c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64219du);}goto L64219d;}}
}
B6421c2:L6421c2:{c.instructions+=2;NFSU2_TR(0x6421c2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6421c3:{NFSU2_TR(0x6421c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642193u);}goto L642193;}}
}
B6421c5:L6421c5:{c.instructions+=1;NFSU2_TR(0x6421c5);
{goto L64239e;}
}
B6421ca:L6421ca:{c.instructions+=2;NFSU2_TR(0x6421ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6421cd:{NFSU2_TR(0x6421cd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L642387;}}
}
B6421d3:L6421d3:{c.instructions+=1;NFSU2_TR(0x6421d3);
if(r1(R+518)){{goto L6422d5;}}
}
B6421d9:L6421d9:{c.instructions+=2;NFSU2_TR(0x6421d9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6421dc:{NFSU2_TR(0x6421dc);
if(r1(R+518)){{goto L642265;}}
}
B6421e2:L6421e2:{c.instructions+=1;NFSU2_TR(0x6421e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642397;}}
}
B6421e8:L6421e8:{c.instructions+=2;NFSU2_TR(0x6421e8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6421eb:{NFSU2_TR(0x6421eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6421f5;}}
}
B6421ed:L6421ed:{c.instructions+=2;NFSU2_TR(0x6421ed);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6421f0:{NFSU2_TR(0x6421f0);
{goto L642391;}
}
B6421f5:L6421f5:{c.instructions+=2;NFSU2_TR(0x6421f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6421f7:{NFSU2_TR(0x6421f7);
if(r1(R+518)){{goto L642458;}}
}
B6421fd:L6421fd:{c.instructions+=2;NFSU2_TR(0x6421fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642200:{NFSU2_TR(0x642200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642203:L642203:{c.instructions+=19;NFSU2_TR(0x642203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642205:{NFSU2_TR(0x642205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642207:{NFSU2_TR(0x642207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64220a:{NFSU2_TR(0x64220a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64220d:{NFSU2_TR(0x64220d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64220f:{NFSU2_TR(0x64220f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642212:{NFSU2_TR(0x642212);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B642215:{NFSU2_TR(0x642215);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B642218:{NFSU2_TR(0x642218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B64221b:{NFSU2_TR(0x64221b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B64221e:{NFSU2_TR(0x64221e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642221:{NFSU2_TR(0x642221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642224:{NFSU2_TR(0x642224);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B642227:{NFSU2_TR(0x642227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642229:{NFSU2_TR(0x642229);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64222c:{NFSU2_TR(0x64222c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B64222f:{NFSU2_TR(0x64222f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B642232:{NFSU2_TR(0x642232);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B642236:{NFSU2_TR(0x642236);
if(r1(R+518)){{goto L642241;}}
}
B642238:L642238:{c.instructions+=4;NFSU2_TR(0x642238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64223b:{NFSU2_TR(0x64223b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64223d:{NFSU2_TR(0x64223d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64223e:{NFSU2_TR(0x64223e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642241ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642241:L642241:{c.instructions+=3;NFSU2_TR(0x642241);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642244:{NFSU2_TR(0x642244);
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
B642246:{NFSU2_TR(0x642246);
if(r1(R+518)){{goto L642252;}}
}
B642248:L642248:{c.instructions+=3;NFSU2_TR(0x642248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64224a:{NFSU2_TR(0x64224a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64224b:{NFSU2_TR(0x64224b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64224eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64224e:L64224e:{c.instructions+=1;NFSU2_TR(0x64224e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642252:L642252:{c.instructions+=5;NFSU2_TR(0x642252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642255:{NFSU2_TR(0x642255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642258:{NFSU2_TR(0x642258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B64225b:{NFSU2_TR(0x64225b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64225e:{NFSU2_TR(0x64225e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642203u);}goto L642203;}}
}
B642260:L642260:{c.instructions+=1;NFSU2_TR(0x642260);
{goto L642455;}
}
B642265:L642265:{c.instructions+=2;NFSU2_TR(0x642265);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642267:{NFSU2_TR(0x642267);
if(r1(R+518)){{goto L642458;}}
}
B64226d:L64226d:{c.instructions+=2;NFSU2_TR(0x64226d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642270:{NFSU2_TR(0x642270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642273:L642273:{c.instructions+=19;NFSU2_TR(0x642273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642275:{NFSU2_TR(0x642275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642277:{NFSU2_TR(0x642277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64227a:{NFSU2_TR(0x64227a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64227d:{NFSU2_TR(0x64227d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64227f:{NFSU2_TR(0x64227f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642282:{NFSU2_TR(0x642282);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B642285:{NFSU2_TR(0x642285);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B642288:{NFSU2_TR(0x642288);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B64228b:{NFSU2_TR(0x64228b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B64228e:{NFSU2_TR(0x64228e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642291:{NFSU2_TR(0x642291);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642294:{NFSU2_TR(0x642294);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B642297:{NFSU2_TR(0x642297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642299:{NFSU2_TR(0x642299);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64229c:{NFSU2_TR(0x64229c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B64229f:{NFSU2_TR(0x64229f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6422a2:{NFSU2_TR(0x6422a2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6422a6:{NFSU2_TR(0x6422a6);
if(r1(R+518)){{goto L6422b1;}}
}
B6422a8:L6422a8:{c.instructions+=4;NFSU2_TR(0x6422a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6422ab:{NFSU2_TR(0x6422ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6422ad:{NFSU2_TR(0x6422ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6422ae:{NFSU2_TR(0x6422ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6422b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6422b1:L6422b1:{c.instructions+=3;NFSU2_TR(0x6422b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6422b4:{NFSU2_TR(0x6422b4);
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
B6422b6:{NFSU2_TR(0x6422b6);
if(r1(R+518)){{goto L6422c2;}}
}
B6422b8:L6422b8:{c.instructions+=3;NFSU2_TR(0x6422b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6422ba:{NFSU2_TR(0x6422ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6422bb:{NFSU2_TR(0x6422bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6422beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6422be:L6422be:{c.instructions+=1;NFSU2_TR(0x6422be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6422c2:L6422c2:{c.instructions+=5;NFSU2_TR(0x6422c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6422c5:{NFSU2_TR(0x6422c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6422c8:{NFSU2_TR(0x6422c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6422cb:{NFSU2_TR(0x6422cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6422ce:{NFSU2_TR(0x6422ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642273u);}goto L642273;}}
}
B6422d0:L6422d0:{c.instructions+=1;NFSU2_TR(0x6422d0);
{goto L642455;}
}
B6422d5:L6422d5:{c.instructions+=2;NFSU2_TR(0x6422d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6422d7:{NFSU2_TR(0x6422d7);
if(r1(R+518)){{goto L642458;}}
}
B6422dd:L6422dd:{c.instructions+=2;NFSU2_TR(0x6422dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6422e0:{NFSU2_TR(0x6422e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6422e3:L6422e3:{c.instructions+=19;NFSU2_TR(0x6422e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6422e5:{NFSU2_TR(0x6422e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6422e7:{NFSU2_TR(0x6422e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6422ea:{NFSU2_TR(0x6422ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6422ed:{NFSU2_TR(0x6422ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6422ef:{NFSU2_TR(0x6422ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6422f2:{NFSU2_TR(0x6422f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6422f5:{NFSU2_TR(0x6422f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6422f8:{NFSU2_TR(0x6422f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6422fb:{NFSU2_TR(0x6422fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6422fe:{NFSU2_TR(0x6422fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642301:{NFSU2_TR(0x642301);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642304:{NFSU2_TR(0x642304);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B642307:{NFSU2_TR(0x642307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642309:{NFSU2_TR(0x642309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64230c:{NFSU2_TR(0x64230c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B64230f:{NFSU2_TR(0x64230f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B642312:{NFSU2_TR(0x642312);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B642316:{NFSU2_TR(0x642316);
if(r1(R+518)){{goto L642321;}}
}
B642318:L642318:{c.instructions+=4;NFSU2_TR(0x642318);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64231b:{NFSU2_TR(0x64231b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64231d:{NFSU2_TR(0x64231d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64231e:{NFSU2_TR(0x64231e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642321ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642321:L642321:{c.instructions+=2;NFSU2_TR(0x642321);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B642325:{NFSU2_TR(0x642325);
if(r1(R+518)){{goto L642330;}}
}
B642327:L642327:{c.instructions+=4;NFSU2_TR(0x642327);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64232a:{NFSU2_TR(0x64232a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64232c:{NFSU2_TR(0x64232c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64232d:{NFSU2_TR(0x64232d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642330ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642330:L642330:{c.instructions+=3;NFSU2_TR(0x642330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642333:{NFSU2_TR(0x642333);
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
B642335:{NFSU2_TR(0x642335);
if(r1(R+518)){{goto L642341;}}
}
B642337:L642337:{c.instructions+=3;NFSU2_TR(0x642337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642339:{NFSU2_TR(0x642339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64233a:{NFSU2_TR(0x64233a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64233dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64233d:L64233d:{c.instructions+=1;NFSU2_TR(0x64233d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642341:L642341:{c.instructions+=3;NFSU2_TR(0x642341);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642344:{NFSU2_TR(0x642344);
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
B642346:{NFSU2_TR(0x642346);
if(r1(R+518)){{goto L642352;}}
}
B642348:L642348:{c.instructions+=3;NFSU2_TR(0x642348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64234a:{NFSU2_TR(0x64234a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64234b:{NFSU2_TR(0x64234b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64234eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64234e:L64234e:{c.instructions+=1;NFSU2_TR(0x64234e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642352:L642352:{c.instructions+=15;NFSU2_TR(0x642352);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642355:{NFSU2_TR(0x642355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642358:{NFSU2_TR(0x642358);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64235b:{NFSU2_TR(0x64235b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64235e:{NFSU2_TR(0x64235e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642361:{NFSU2_TR(0x642361);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B642364:{NFSU2_TR(0x642364);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B642367:{NFSU2_TR(0x642367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B64236a:{NFSU2_TR(0x64236a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B64236d:{NFSU2_TR(0x64236d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B642370:{NFSU2_TR(0x642370);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642373:{NFSU2_TR(0x642373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642376:{NFSU2_TR(0x642376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B642379:{NFSU2_TR(0x642379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64237c:{NFSU2_TR(0x64237c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6422e3u);}goto L6422e3;}}
}
B642382:L642382:{c.instructions+=1;NFSU2_TR(0x642382);
{goto L642455;}
}
B642387:L642387:{c.instructions+=2;NFSU2_TR(0x642387);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64238a:{NFSU2_TR(0x64238a);
if(r1(R+518)){{goto L6423a8;}}
}
B64238c:L64238c:{c.instructions+=1;NFSU2_TR(0x64238c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642397;}}
}
B64238e:L64238e:{c.instructions+=1;NFSU2_TR(0x64238e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642391:L642391:{c.instructions+=1;NFSU2_TR(0x642391);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642458;}}
}
B642397:L642397:{c.instructions+=1;NFSU2_TR(0x642397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64239e:L64239e:{c.instructions+=6;NFSU2_TR(0x64239e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6423a1:{NFSU2_TR(0x6423a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6423a2:{NFSU2_TR(0x6423a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6423a3:{NFSU2_TR(0x6423a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6423a4:{NFSU2_TR(0x6423a4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6423a5:{NFSU2_TR(0x6423a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6423a8:L6423a8:{c.instructions+=2;NFSU2_TR(0x6423a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6423aa:{NFSU2_TR(0x6423aa);
if(r1(R+518)){{goto L642458;}}
}
B6423b0:L6423b0:{c.instructions+=2;NFSU2_TR(0x6423b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6423b3:{NFSU2_TR(0x6423b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6423b6:L6423b6:{c.instructions+=19;NFSU2_TR(0x6423b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6423b8:{NFSU2_TR(0x6423b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6423ba:{NFSU2_TR(0x6423ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6423bd:{NFSU2_TR(0x6423bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6423c0:{NFSU2_TR(0x6423c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6423c2:{NFSU2_TR(0x6423c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6423c5:{NFSU2_TR(0x6423c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6423c8:{NFSU2_TR(0x6423c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6423cb:{NFSU2_TR(0x6423cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6423ce:{NFSU2_TR(0x6423ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6423d1:{NFSU2_TR(0x6423d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6423d4:{NFSU2_TR(0x6423d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6423d7:{NFSU2_TR(0x6423d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6423da:{NFSU2_TR(0x6423da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6423dc:{NFSU2_TR(0x6423dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6423df:{NFSU2_TR(0x6423df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6423e2:{NFSU2_TR(0x6423e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6423e5:{NFSU2_TR(0x6423e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B6423e9:{NFSU2_TR(0x6423e9);
if(r1(R+518)){{goto L6423f4;}}
}
B6423eb:L6423eb:{c.instructions+=4;NFSU2_TR(0x6423eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6423ee:{NFSU2_TR(0x6423ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6423f0:{NFSU2_TR(0x6423f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6423f1:{NFSU2_TR(0x6423f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6423f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6423f4:L6423f4:{c.instructions+=2;NFSU2_TR(0x6423f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B6423f8:{NFSU2_TR(0x6423f8);
if(r1(R+518)){{goto L642403;}}
}
B6423fa:L6423fa:{c.instructions+=4;NFSU2_TR(0x6423fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6423fd:{NFSU2_TR(0x6423fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6423ff:{NFSU2_TR(0x6423ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642400:{NFSU2_TR(0x642400);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642403ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642403:L642403:{c.instructions+=3;NFSU2_TR(0x642403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642406:{NFSU2_TR(0x642406);
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
B642408:{NFSU2_TR(0x642408);
if(r1(R+518)){{goto L642414;}}
}
B64240a:L64240a:{c.instructions+=3;NFSU2_TR(0x64240a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64240c:{NFSU2_TR(0x64240c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64240d:{NFSU2_TR(0x64240d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642410ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642410:L642410:{c.instructions+=1;NFSU2_TR(0x642410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642414:L642414:{c.instructions+=3;NFSU2_TR(0x642414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642417:{NFSU2_TR(0x642417);
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
B642419:{NFSU2_TR(0x642419);
if(r1(R+518)){{goto L642425;}}
}
B64241b:L64241b:{c.instructions+=3;NFSU2_TR(0x64241b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64241d:{NFSU2_TR(0x64241d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64241e:{NFSU2_TR(0x64241e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642421ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642421:L642421:{c.instructions+=1;NFSU2_TR(0x642421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642425:L642425:{c.instructions+=15;NFSU2_TR(0x642425);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642428:{NFSU2_TR(0x642428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64242b:{NFSU2_TR(0x64242b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64242e:{NFSU2_TR(0x64242e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642431:{NFSU2_TR(0x642431);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642434:{NFSU2_TR(0x642434);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B642437:{NFSU2_TR(0x642437);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B64243a:{NFSU2_TR(0x64243a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B64243d:{NFSU2_TR(0x64243d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B642440:{NFSU2_TR(0x642440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B642443:{NFSU2_TR(0x642443);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642446:{NFSU2_TR(0x642446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642449:{NFSU2_TR(0x642449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B64244c:{NFSU2_TR(0x64244c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64244f:{NFSU2_TR(0x64244f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6423b6u);}goto L6423b6;}}
}
B642455:L642455:{c.instructions+=1;NFSU2_TR(0x642455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642458:L642458:{c.instructions+=2;NFSU2_TR(0x642458);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64245b:{NFSU2_TR(0x64245b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64239eu);}goto L64239e;}
}
B642460:L642460:{c.instructions+=5;NFSU2_TR(0x642460);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642463:{NFSU2_TR(0x642463);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B642467:{NFSU2_TR(0x642467);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B64246a:{NFSU2_TR(0x64246a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B64246b:{NFSU2_TR(0x64246b);
if(r1(R+518)){{goto L642477;}}
}
B64246d:L64246d:{c.instructions+=2;NFSU2_TR(0x64246d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B64246e:{NFSU2_TR(0x64246e);
if(r1(R+518)){{goto L642477;}}
}
B642470:L642470:{c.instructions+=2;NFSU2_TR(0x642470);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642471:{NFSU2_TR(0x642471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642397u);}goto L642397;}}
}
B642477:L642477:{c.instructions+=5;NFSU2_TR(0x642477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64247a:{NFSU2_TR(0x64247a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64247d:{NFSU2_TR(0x64247d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B64247f:{NFSU2_TR(0x64247f);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B642482:{NFSU2_TR(0x642482);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64239eu);}goto L64239e;}
}
B642487:L642487:{c.instructions+=6;NFSU2_TR(0x642487);
__builtin_memmove((R+28),(R+28),4);
}
B642489:{NFSU2_TR(0x642489);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64248a:{NFSU2_TR(0x64248a);
__builtin_memmove((R+20),(R+16),4);
}
B64248c:{NFSU2_TR(0x64248c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64248f:{NFSU2_TR(0x64248f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642492:{NFSU2_TR(0x642492);
if(r1(R+518)){{goto L6424ac;}}
}
B642494:L642494:{c.instructions+=2;NFSU2_TR(0x642494);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B642497:{NFSU2_TR(0x642497);
if(r1(R+518)){{goto L6424ac;}}
}
B642499:L642499:{c.instructions+=7;NFSU2_TR(0x642499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64249a:{NFSU2_TR(0x64249a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64249d:{NFSU2_TR(0x64249d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6424a0:{NFSU2_TR(0x6424a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424a1:{NFSU2_TR(0x6424a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6424a4:{NFSU2_TR(0x6424a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424a5:{NFSU2_TR(0x6424a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6424aaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642141u);}goto L642141;}
}
B6424aa:L6424aa:{c.instructions+=1;NFSU2_TR(0x6424aa);
{goto L6424ae;}
}
B6424ac:L6424ac:{c.instructions+=1;NFSU2_TR(0x6424ac);
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
B6424ae:L6424ae:{c.instructions+=2;NFSU2_TR(0x6424ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6424af:{NFSU2_TR(0x6424af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6424b2:L6424b2:{c.instructions+=3;NFSU2_TR(0x6424b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6424b5:{NFSU2_TR(0x6424b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6424b7:{NFSU2_TR(0x6424b7);
if(r1(R+518)){{goto L6424e0;}}
}
B6424b9:L6424b9:{c.instructions+=3;NFSU2_TR(0x6424b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424ba:{NFSU2_TR(0x6424ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424bb:{NFSU2_TR(0x6424bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424bc:L6424bc:{c.instructions+=3;NFSU2_TR(0x6424bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6424bf:{NFSU2_TR(0x6424bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6424c2:{NFSU2_TR(0x6424c2);
{goto L6424d2;}
}
B6424c4:L6424c4:{c.instructions+=5;NFSU2_TR(0x6424c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6424c7:{NFSU2_TR(0x6424c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6424ca:{NFSU2_TR(0x6424ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6424cd:{NFSU2_TR(0x6424cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6424cf:{NFSU2_TR(0x6424cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6424d2:L6424d2:{c.instructions+=2;NFSU2_TR(0x6424d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6424d4:{NFSU2_TR(0x6424d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6424c4u);}goto L6424c4;}}
}
B6424d6:L6424d6:{c.instructions+=3;NFSU2_TR(0x6424d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6424d9:{NFSU2_TR(0x6424d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6424db:{NFSU2_TR(0x6424db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6424bcu);}goto L6424bc;}}
}
B6424dd:L6424dd:{c.instructions+=3;NFSU2_TR(0x6424dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6424de:{NFSU2_TR(0x6424de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6424df:{NFSU2_TR(0x6424df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6424e0:L6424e0:{c.instructions+=2;NFSU2_TR(0x6424e0);
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
B6424e2:{NFSU2_TR(0x6424e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6424e3:L6424e3:{c.instructions+=6;NFSU2_TR(0x6424e3);
__builtin_memmove((R+28),(R+28),4);
}
B6424e5:{NFSU2_TR(0x6424e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424e6:{NFSU2_TR(0x6424e6);
__builtin_memmove((R+20),(R+16),4);
}
B6424e8:{NFSU2_TR(0x6424e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424e9:{NFSU2_TR(0x6424e9);
__builtin_memmove((R+24),(R+4),4);
}
B6424eb:{NFSU2_TR(0x6424eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6424f0ull));
TAIL_STATIC(0x641837u,641);
}
B6424f0:L6424f0:{c.instructions+=2;NFSU2_TR(0x6424f0);
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
B6424f4:{NFSU2_TR(0x6424f4);
if(r1(R+518)){{goto L6424fd;}}
}
B6424f6:L6424f6:{c.instructions+=2;NFSU2_TR(0x6424f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6424f7:{NFSU2_TR(0x6424f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6424fcull));
TAIL_STATIC(0x575630u,575);
}
B6424fc:L6424fc:{c.instructions+=1;NFSU2_TR(0x6424fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6424fd:L6424fd:{c.instructions+=4;NFSU2_TR(0x6424fd);
__builtin_memmove((R+0),(R+24),4);
}
B6424ff:{NFSU2_TR(0x6424ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642500:{NFSU2_TR(0x642500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642501:{NFSU2_TR(0x642501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642504:L642504:{c.instructions+=7;NFSU2_TR(0x642504);
__builtin_memmove((R+28),(R+28),4);
}
B642506:{NFSU2_TR(0x642506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642507:{NFSU2_TR(0x642507);
__builtin_memmove((R+24),(R+4),4);
}
B642509:{NFSU2_TR(0x642509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64250c:{NFSU2_TR(0x64250c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64250e:{NFSU2_TR(0x64250e);
u8 U[4];
w4(U+0,u32(0x7ab4e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B642514:{NFSU2_TR(0x642514);
if(r1(R+518)){{goto L642521;}}
}
B642516:L642516:{c.instructions+=2;NFSU2_TR(0x642516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642517:{NFSU2_TR(0x642517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64251cull));
TAIL_STATIC(0x575630u,575);
}
B64251c:L64251c:{c.instructions+=2;NFSU2_TR(0x64251c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642520:{NFSU2_TR(0x642520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642521:L642521:{c.instructions+=3;NFSU2_TR(0x642521);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642524:{NFSU2_TR(0x642524);
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
B642526:{NFSU2_TR(0x642526);
if(r1(R+518)){{goto L642533;}}
}
B642528:L642528:{c.instructions+=2;NFSU2_TR(0x642528);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64252a:{NFSU2_TR(0x64252a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64252full));
TAIL_STATIC(0x641816u,641);
}
B64252f:L64252f:{c.instructions+=1;NFSU2_TR(0x64252f);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B642533:L642533:{c.instructions+=2;NFSU2_TR(0x642533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642534:{NFSU2_TR(0x642534);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642535:L642535:{c.instructions+=6;NFSU2_TR(0x642535);
__builtin_memmove((R+28),(R+28),4);
}
B642537:{NFSU2_TR(0x642537);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642538:{NFSU2_TR(0x642538);
__builtin_memmove((R+20),(R+16),4);
}
B64253a:{NFSU2_TR(0x64253a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64253b:{NFSU2_TR(0x64253b);
__builtin_memmove((R+24),(R+4),4);
}
B64253d:{NFSU2_TR(0x64253d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642542ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642504u);}goto L642504;}
}
B642542:L642542:{c.instructions+=2;NFSU2_TR(0x642542);
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
B642546:{NFSU2_TR(0x642546);
if(r1(R+518)){{goto L64254f;}}
}
B642548:L642548:{c.instructions+=2;NFSU2_TR(0x642548);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642549:{NFSU2_TR(0x642549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64254eull));
TAIL_STATIC(0x575630u,575);
}
B64254e:L64254e:{c.instructions+=1;NFSU2_TR(0x64254e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64254f:L64254f:{c.instructions+=4;NFSU2_TR(0x64254f);
__builtin_memmove((R+0),(R+24),4);
}
B642551:{NFSU2_TR(0x642551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642552:{NFSU2_TR(0x642552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642553:{NFSU2_TR(0x642553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642556:L642556:{c.instructions+=10;NFSU2_TR(0x642556);
__builtin_memmove((R+28),(R+28),4);
}
B642558:{NFSU2_TR(0x642558);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642559:{NFSU2_TR(0x642559);
__builtin_memmove((R+20),(R+16),4);
}
B64255b:{NFSU2_TR(0x64255b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64255c:{NFSU2_TR(0x64255c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64255f:{NFSU2_TR(0x64255f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642560:{NFSU2_TR(0x642560);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642562:{NFSU2_TR(0x642562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642563:{NFSU2_TR(0x642563);
w4(R+28,u32(0x7b7410ull));
}
B642568:{NFSU2_TR(0x642568);
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
B64256a:L64256a:{c.instructions+=1;NFSU2_TR(0x64256a);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64256c;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64256au);}goto L64256a;}}
}
B64256c:L64256c:{c.instructions+=1;NFSU2_TR(0x64256c);
if(r1(R+518)){{goto L64257f;}}
}
B64256e:L64256e:{c.instructions+=5;NFSU2_TR(0x64256e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642571:{NFSU2_TR(0x642571);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642573:{NFSU2_TR(0x642573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642574:{NFSU2_TR(0x642574);
w4(R+28,u32(0x7d9904ull));
}
B642579:{NFSU2_TR(0x642579);
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
B64257b:L64257b:{c.instructions+=1;NFSU2_TR(0x64257b);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64257d;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64257bu);}goto L64257b;}}
}
B64257d:L64257d:{c.instructions+=1;NFSU2_TR(0x64257d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642591;}}
}
B64257f:L64257f:{c.instructions+=6;NFSU2_TR(0x64257f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642582:{NFSU2_TR(0x642582);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642585:{NFSU2_TR(0x642585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B642587:{NFSU2_TR(0x642587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642589:{NFSU2_TR(0x642589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64258a:{NFSU2_TR(0x64258a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64258dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64258d:L64258d:{c.instructions+=2;NFSU2_TR(0x64258d);
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
B64258f:{NFSU2_TR(0x64258f);
{goto L642596;}
}
B642591:L642591:{c.instructions+=1;NFSU2_TR(0x642591);
w4(R+0,u32(0x80004002ull));
}
B642596:L642596:{c.instructions+=4;NFSU2_TR(0x642596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642597:{NFSU2_TR(0x642597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642598:{NFSU2_TR(0x642598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642599:{NFSU2_TR(0x642599);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64259c:L64259c:{c.instructions+=19;NFSU2_TR(0x64259c);
__builtin_memmove((R+28),(R+28),4);
}
B64259e:{NFSU2_TR(0x64259e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64259f:{NFSU2_TR(0x64259f);
__builtin_memmove((R+20),(R+16),4);
}
B6425a1:{NFSU2_TR(0x6425a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6425a4:{NFSU2_TR(0x6425a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6425a7:{NFSU2_TR(0x6425a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6425aa:{NFSU2_TR(0x6425aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425ab:{NFSU2_TR(0x6425ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425ac:{NFSU2_TR(0x6425ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425ad:{NFSU2_TR(0x6425ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6425b0:{NFSU2_TR(0x6425b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6425b3:{NFSU2_TR(0x6425b3);
__builtin_memmove((R+12),(R+4),4);
}
B6425b5:{NFSU2_TR(0x6425b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6425b8:{NFSU2_TR(0x6425b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6425bb:{NFSU2_TR(0x6425bb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6425bd:{NFSU2_TR(0x6425bd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6425bf:{NFSU2_TR(0x6425bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6425c2:{NFSU2_TR(0x6425c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6425c5:{NFSU2_TR(0x6425c5);
{goto L6425ea;}
}
B6425c7:L6425c7:{c.instructions+=11;NFSU2_TR(0x6425c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6425ca:{NFSU2_TR(0x6425ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6425cd:{NFSU2_TR(0x6425cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425ce:{NFSU2_TR(0x6425ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6425d0:{NFSU2_TR(0x6425d0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6425d2:{NFSU2_TR(0x6425d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425d3:{NFSU2_TR(0x6425d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425d4:{NFSU2_TR(0x6425d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425d5:{NFSU2_TR(0x6425d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6425d8:{NFSU2_TR(0x6425d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6425db:{NFSU2_TR(0x6425db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6425e0ull));
TAIL_STATIC(0x641a3du,641);
}
B6425e0:L6425e0:{c.instructions+=2;NFSU2_TR(0x6425e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6425e2:{NFSU2_TR(0x6425e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64265e;}}
}
B6425e4:L6425e4:{c.instructions+=2;NFSU2_TR(0x6425e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6425e7:{NFSU2_TR(0x6425e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6425ea:L6425ea:{c.instructions+=2;NFSU2_TR(0x6425ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6425ec:{NFSU2_TR(0x6425ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6425c7u);}goto L6425c7;}}
}
B6425ee:L6425ee:{c.instructions+=13;NFSU2_TR(0x6425ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6425f1:{NFSU2_TR(0x6425f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425f2:{NFSU2_TR(0x6425f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6425f5:{NFSU2_TR(0x6425f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425f6:{NFSU2_TR(0x6425f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6425f9:{NFSU2_TR(0x6425f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6425fa:{NFSU2_TR(0x6425fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6425fd:{NFSU2_TR(0x6425fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642600:{NFSU2_TR(0x642600);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642603:{NFSU2_TR(0x642603);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B642606:{NFSU2_TR(0x642606);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642607:{NFSU2_TR(0x642607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642608:{NFSU2_TR(0x642608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64260dull));
TAIL_STATIC(0x641a60u,641);
}
B64260d:L64260d:{c.instructions+=3;NFSU2_TR(0x64260d);
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
B64260f:{NFSU2_TR(0x64260f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642612:{NFSU2_TR(0x642612);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642855;}}
}
B642618:L642618:{c.instructions+=8;NFSU2_TR(0x642618);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64261b:{NFSU2_TR(0x64261b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64261e:{NFSU2_TR(0x64261e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642621:{NFSU2_TR(0x642621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642624:{NFSU2_TR(0x642624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642627:{NFSU2_TR(0x642627);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642629:{NFSU2_TR(0x642629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64262c:{NFSU2_TR(0x64262c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6426e7;}}
}
B642632:L642632:{c.instructions+=4;NFSU2_TR(0x642632);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B642634:{NFSU2_TR(0x642634);
w4(R+0,u32(0x10000ull));
}
B642639:{NFSU2_TR(0x642639);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64263b:{NFSU2_TR(0x64263b);
if(r1(R+512)){{goto L64263f;}}
}
B64263d:L64263d:{c.instructions+=1;NFSU2_TR(0x64263d);
__builtin_memmove((R+0),(R+4),4);
}
B64263f:L64263f:{c.instructions+=3;NFSU2_TR(0x64263f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642640:{NFSU2_TR(0x642640);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642643:{NFSU2_TR(0x642643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642648ull));
TAIL_STATIC(0x575620u,575);
}
B642648:L642648:{c.instructions+=5;NFSU2_TR(0x642648);
__builtin_memmove((R+8),(R+0),4);
}
B64264a:{NFSU2_TR(0x64264a);
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
B64264c:{NFSU2_TR(0x64264c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64264d:{NFSU2_TR(0x64264d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642650:{NFSU2_TR(0x642650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642690;}}
}
B642652:L642652:{c.instructions+=2;NFSU2_TR(0x642652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B642659:{NFSU2_TR(0x642659);
{goto L642855;}
}
B64265e:L64265e:{c.instructions+=2;NFSU2_TR(0x64265e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642662:{NFSU2_TR(0x642662);
if(r1(R+518)){{goto L64275f;}}
}
B642668:L642668:{c.instructions+=4;NFSU2_TR(0x642668);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64266b:{NFSU2_TR(0x64266b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64266d:{NFSU2_TR(0x64266d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64266f:{NFSU2_TR(0x64266f);
if(r1(R+518)){{goto L64275f;}}
}
B642675:L642675:{c.instructions+=4;NFSU2_TR(0x642675);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642678:{NFSU2_TR(0x642678);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64267b:{NFSU2_TR(0x64267b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B64267e:{NFSU2_TR(0x64267e);
if(r1(R+518)){{goto L64275f;}}
}
B642684:L642684:{c.instructions+=2;NFSU2_TR(0x642684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64268b:{NFSU2_TR(0x64268b);
{goto L642855;}
}
B642690:L642690:{c.instructions+=3;NFSU2_TR(0x642690);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642693:{NFSU2_TR(0x642693);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642695:{NFSU2_TR(0x642695);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6426aa;}}
}
B642697:L642697:{c.instructions+=4;NFSU2_TR(0x642697);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64269a:{NFSU2_TR(0x64269a);
__builtin_memmove((R+0),(R+4),4);
}
B64269c:{NFSU2_TR(0x64269c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64269f:{NFSU2_TR(0x64269f);
__builtin_memmove((R+28),(R+8),4);
}
B6426a1:L6426a1:{c.instructions+=1;NFSU2_TR(0x6426a1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6426a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6426a1u);}goto L6426a1;}
}
B6426a3:L6426a3:{c.instructions+=2;NFSU2_TR(0x6426a3);
__builtin_memmove((R+4),(R+0),4);
}
B6426a5:{NFSU2_TR(0x6426a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6426a8:L6426a8:{c.instructions+=1;NFSU2_TR(0x6426a8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6426aa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6426a8u);}goto L6426a8;}
}
B6426aa:L6426aa:{c.instructions+=7;NFSU2_TR(0x6426aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6426ad:{NFSU2_TR(0x6426ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6426b0:{NFSU2_TR(0x6426b0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6426b2:{NFSU2_TR(0x6426b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6426b5:{NFSU2_TR(0x6426b5);
__builtin_memmove((R+24),(R+4),4);
}
B6426b7:{NFSU2_TR(0x6426b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6426ba:{NFSU2_TR(0x6426ba);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6426bc:L6426bc:{c.instructions+=1;NFSU2_TR(0x6426bc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6426be;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6426bcu);}goto L6426bc;}
}
B6426be:L6426be:{c.instructions+=2;NFSU2_TR(0x6426be);
__builtin_memmove((R+4),(R+24),4);
}
B6426c0:{NFSU2_TR(0x6426c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6426c3:L6426c3:{c.instructions+=1;NFSU2_TR(0x6426c3);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6426c5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6426c3u);}goto L6426c3;}
}
B6426c5:L6426c5:{c.instructions+=3;NFSU2_TR(0x6426c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6426c8:{NFSU2_TR(0x6426c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6426ca:{NFSU2_TR(0x6426ca);
if(r1(R+518)){{goto L6426da;}}
}
B6426cc:L6426cc:{c.instructions+=2;NFSU2_TR(0x6426cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6426cd:{NFSU2_TR(0x6426cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6426d2ull));
TAIL_STATIC(0x575630u,575);
}
B6426d2:L6426d2:{c.instructions+=3;NFSU2_TR(0x6426d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6426d6:{NFSU2_TR(0x6426d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6426d9:{NFSU2_TR(0x6426d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6426da:L6426da:{c.instructions+=3;NFSU2_TR(0x6426da);
__builtin_memmove((R+4),(R+12),4);
}
B6426dc:{NFSU2_TR(0x6426dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6426df:{NFSU2_TR(0x6426df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6426e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6424b2u);}goto L6424b2;}
}
B6426e4:L6426e4:{c.instructions+=1;NFSU2_TR(0x6426e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6426e7:L6426e7:{c.instructions+=11;NFSU2_TR(0x6426e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6426ea:{NFSU2_TR(0x6426ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6426eb:{NFSU2_TR(0x6426eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6426ee:{NFSU2_TR(0x6426ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6426f1:{NFSU2_TR(0x6426f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6426f4:{NFSU2_TR(0x6426f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6426f7:{NFSU2_TR(0x6426f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6426fa:{NFSU2_TR(0x6426fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6426fd:{NFSU2_TR(0x6426fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642700:{NFSU2_TR(0x642700);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642703:{NFSU2_TR(0x642703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642708ull));
TAIL_STATIC(0x641ec8u,641);
}
B642708:L642708:{c.instructions+=3;NFSU2_TR(0x642708);
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
B64270a:{NFSU2_TR(0x64270a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64270d:{NFSU2_TR(0x64270d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642855;}}
}
B642713:L642713:{c.instructions+=2;NFSU2_TR(0x642713);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642715:{NFSU2_TR(0x642715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64271aull));
TAIL_STATIC(0x575620u,575);
}
B64271a:L64271a:{c.instructions+=3;NFSU2_TR(0x64271a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64271c:{NFSU2_TR(0x64271c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64271d:{NFSU2_TR(0x64271d);
if(r1(R+518)){{goto L64272a;}}
}
B64271f:L64271f:{c.instructions+=2;NFSU2_TR(0x64271f);
__builtin_memmove((R+4),(R+0),4);
}
B642721:{NFSU2_TR(0x642721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642726ull));
TAIL_STATIC(0x641862u,641);
}
B642726:L642726:{c.instructions+=2;NFSU2_TR(0x642726);
__builtin_memmove((R+24),(R+0),4);
}
B642728:{NFSU2_TR(0x642728);
{goto L64272c;}
}
B64272a:L64272a:{c.instructions+=1;NFSU2_TR(0x64272a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64272c:L64272c:{c.instructions+=2;NFSU2_TR(0x64272c);
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
B64272e:{NFSU2_TR(0x64272e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642652u);}goto L642652;}}
}
B642734:L642734:{c.instructions+=15;NFSU2_TR(0x642734);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642737:{NFSU2_TR(0x642737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64273a:{NFSU2_TR(0x64273a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64273c:{NFSU2_TR(0x64273c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64273f:{NFSU2_TR(0x64273f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642742:{NFSU2_TR(0x642742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642745:{NFSU2_TR(0x642745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642748:{NFSU2_TR(0x642748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64274b:{NFSU2_TR(0x64274b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64274e:{NFSU2_TR(0x64274e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642751:{NFSU2_TR(0x642751);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642754:{NFSU2_TR(0x642754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642757:{NFSU2_TR(0x642757);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64275a:{NFSU2_TR(0x64275a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64275d:{NFSU2_TR(0x64275d);
{goto L642784;}
}
B64275f:L64275f:{c.instructions+=3;NFSU2_TR(0x64275f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B642762:{NFSU2_TR(0x642762);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642765:{NFSU2_TR(0x642765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642784;}}
}
B642767:L642767:{c.instructions+=6;NFSU2_TR(0x642767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64276a:{NFSU2_TR(0x64276a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64276d:{NFSU2_TR(0x64276d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642770:{NFSU2_TR(0x642770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642771:{NFSU2_TR(0x642771);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642774:{NFSU2_TR(0x642774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642779ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642127u);}goto L642127;}
}
B642779:L642779:{c.instructions+=3;NFSU2_TR(0x642779);
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
B64277b:{NFSU2_TR(0x64277b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64277e:{NFSU2_TR(0x64277e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642855;}}
}
B642784:L642784:{c.instructions+=2;NFSU2_TR(0x642784);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642786:{NFSU2_TR(0x642786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64278bull));
TAIL_STATIC(0x575620u,575);
}
B64278b:L64278b:{c.instructions+=4;NFSU2_TR(0x64278b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64278d:{NFSU2_TR(0x64278d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64278f:{NFSU2_TR(0x64278f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642790:{NFSU2_TR(0x642790);
if(r1(R+518)){{goto L6427a2;}}
}
B642792:L642792:{c.instructions+=6;NFSU2_TR(0x642792);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642795:{NFSU2_TR(0x642795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B642797:{NFSU2_TR(0x642797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64279a:{NFSU2_TR(0x64279a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64279d:{NFSU2_TR(0x64279d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427a0:{NFSU2_TR(0x6427a0);
{goto L6427a7;}
}
B6427a2:L6427a2:{c.instructions+=2;NFSU2_TR(0x6427a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427a5:{NFSU2_TR(0x6427a5);
__builtin_memmove((R+0),(R+8),4);
}
B6427a7:L6427a7:{c.instructions+=2;NFSU2_TR(0x6427a7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6427a9:{NFSU2_TR(0x6427a9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642652u);}goto L642652;}}
}
B6427af:L6427af:{c.instructions+=3;NFSU2_TR(0x6427af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6427b2:{NFSU2_TR(0x6427b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6427b4:{NFSU2_TR(0x6427b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6427eb;}}
}
B6427b6:L6427b6:{c.instructions+=4;NFSU2_TR(0x6427b6);
__builtin_memmove((R+0),(R+4),4);
}
B6427b8:{NFSU2_TR(0x6427b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6427bb:{NFSU2_TR(0x6427bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6427bc:{NFSU2_TR(0x6427bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6427c1ull));
TAIL_STATIC(0x575620u,575);
}
B6427c1:L6427c1:{c.instructions+=5;NFSU2_TR(0x6427c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6427c3:{NFSU2_TR(0x6427c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6427c4:{NFSU2_TR(0x6427c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6427c7:{NFSU2_TR(0x6427c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427ca:{NFSU2_TR(0x6427ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6427d5;}}
}
B6427cc:L6427cc:{c.instructions+=2;NFSU2_TR(0x6427cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6427d3:{NFSU2_TR(0x6427d3);
{goto L642847;}
}
B6427d5:L6427d5:{c.instructions+=4;NFSU2_TR(0x6427d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6427d6:{NFSU2_TR(0x6427d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6427d9:{NFSU2_TR(0x6427d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6427dc:{NFSU2_TR(0x6427dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6427e1ull));
TAIL_STATIC(0x641ffdu,641);
}
B6427e1:L6427e1:{c.instructions+=3;NFSU2_TR(0x6427e1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6427e3:{NFSU2_TR(0x6427e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427e6:{NFSU2_TR(0x6427e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642847;}}
}
B6427e8:L6427e8:{c.instructions+=1;NFSU2_TR(0x6427e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6427eb:L6427eb:{c.instructions+=32;NFSU2_TR(0x6427eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6427ee:{NFSU2_TR(0x6427ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6427f0:{NFSU2_TR(0x6427f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427f3:{NFSU2_TR(0x6427f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6427f6:{NFSU2_TR(0x6427f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427f9:{NFSU2_TR(0x6427f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6427fc:{NFSU2_TR(0x6427fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6427ff:{NFSU2_TR(0x6427ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642802:{NFSU2_TR(0x642802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642805:{NFSU2_TR(0x642805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642808:{NFSU2_TR(0x642808);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64280b:{NFSU2_TR(0x64280b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64280d:{NFSU2_TR(0x64280d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642810:{NFSU2_TR(0x642810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642813:{NFSU2_TR(0x642813);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642816:{NFSU2_TR(0x642816);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642819:{NFSU2_TR(0x642819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B64281b:{NFSU2_TR(0x64281b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64281f:{NFSU2_TR(0x64281f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642822:{NFSU2_TR(0x642822);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642825:{NFSU2_TR(0x642825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642828:{NFSU2_TR(0x642828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64282a:{NFSU2_TR(0x64282a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64282d:{NFSU2_TR(0x64282d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642830:{NFSU2_TR(0x642830);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642833:{NFSU2_TR(0x642833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642836:{NFSU2_TR(0x642836);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B642838:{NFSU2_TR(0x642838);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642839:{NFSU2_TR(0x642839);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64283c:{NFSU2_TR(0x64283c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B64283e:{NFSU2_TR(0x64283e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64283f:{NFSU2_TR(0x64283f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642844ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642487u);}goto L642487;}
}
B642844:L642844:{c.instructions+=1;NFSU2_TR(0x642844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642847:L642847:{c.instructions+=3;NFSU2_TR(0x642847);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64284a:{NFSU2_TR(0x64284a);
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
B64284c:{NFSU2_TR(0x64284c);
if(r1(R+518)){{goto L642855;}}
}
B64284e:L64284e:{c.instructions+=2;NFSU2_TR(0x64284e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642850:{NFSU2_TR(0x642850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642855ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6424e3u);}goto L6424e3;}
}
B642855:L642855:{c.instructions+=6;NFSU2_TR(0x642855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642858:{NFSU2_TR(0x642858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642859:{NFSU2_TR(0x642859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64285a:{NFSU2_TR(0x64285a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64285b:{NFSU2_TR(0x64285b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64285c:{NFSU2_TR(0x64285c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64285f:L64285f:{c.instructions+=11;NFSU2_TR(0x64285f);
__builtin_memmove((R+0),(R+4),4);
}
B642861:{NFSU2_TR(0x642861);
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
B642863:{NFSU2_TR(0x642863);
u8 U[4];
w4(U+0,u32(0x7ab4e8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B642869:{NFSU2_TR(0x642869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B642870:{NFSU2_TR(0x642870);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642873:{NFSU2_TR(0x642873);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642876:{NFSU2_TR(0x642876);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642879:{NFSU2_TR(0x642879);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64287c:{NFSU2_TR(0x64287c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64287f:{NFSU2_TR(0x64287f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642882:{NFSU2_TR(0x642882);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642883:L642883:{c.instructions+=7;NFSU2_TR(0x642883);
__builtin_memmove((R+28),(R+28),4);
}
B642885:{NFSU2_TR(0x642885);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642886:{NFSU2_TR(0x642886);
__builtin_memmove((R+20),(R+16),4);
}
B642888:{NFSU2_TR(0x642888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64288b:{NFSU2_TR(0x64288b);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B64288e:{NFSU2_TR(0x64288e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642891:{NFSU2_TR(0x642891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64289c;}}
}
B642893:L642893:{c.instructions+=2;NFSU2_TR(0x642893);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642895:{NFSU2_TR(0x642895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64289aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642535u);}goto L642535;}
}
B64289a:L64289a:{c.instructions+=1;NFSU2_TR(0x64289a);
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
B64289c:L64289c:{c.instructions+=2;NFSU2_TR(0x64289c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64289d:{NFSU2_TR(0x64289d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6428a0:L6428a0:{c.instructions+=11;NFSU2_TR(0x6428a0);
__builtin_memmove((R+0),(R+4),4);
}
B6428a2:{NFSU2_TR(0x6428a2);
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
B6428a4:{NFSU2_TR(0x6428a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6428a6:{NFSU2_TR(0x6428a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428a9:{NFSU2_TR(0x6428a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428ac:{NFSU2_TR(0x6428ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428af:{NFSU2_TR(0x6428af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6428b6:{NFSU2_TR(0x6428b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428b9:{NFSU2_TR(0x6428b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428bc:{NFSU2_TR(0x6428bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6428bf:{NFSU2_TR(0x6428bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6428c0:L6428c0:{c.instructions+=5;NFSU2_TR(0x6428c0);
__builtin_memmove((R+28),(R+28),4);
}
B6428c2:{NFSU2_TR(0x6428c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6428c3:{NFSU2_TR(0x6428c3);
__builtin_memmove((R+24),(R+4),4);
}
B6428c5:{NFSU2_TR(0x6428c5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6428c8:{NFSU2_TR(0x6428c8);
if(r1(R+518)){{goto L6428dd;}}
}
B6428ca:L6428ca:{c.instructions+=1;NFSU2_TR(0x6428ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6428cb:L6428cb:{c.instructions+=4;NFSU2_TR(0x6428cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6428cd:{NFSU2_TR(0x6428cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6428cf:{NFSU2_TR(0x6428cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6428d0:{NFSU2_TR(0x6428d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6428d5ull));
TAIL_STATIC(0x575630u,575);
}
B6428d5:L6428d5:{c.instructions+=4;NFSU2_TR(0x6428d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6428d7:{NFSU2_TR(0x6428d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6428d8:{NFSU2_TR(0x6428d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6428da:{NFSU2_TR(0x6428da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6428cbu);}goto L6428cb;}}
}
B6428dc:L6428dc:{c.instructions+=1;NFSU2_TR(0x6428dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6428dd:L6428dd:{c.instructions+=2;NFSU2_TR(0x6428dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6428e0:{NFSU2_TR(0x6428e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6428e5ull));
TAIL_STATIC(0x575630u,575);
}
B6428e5:L6428e5:{c.instructions+=2;NFSU2_TR(0x6428e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6428e8:{NFSU2_TR(0x6428e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6428edull));
TAIL_STATIC(0x575630u,575);
}
B6428ed:L6428ed:{c.instructions+=4;NFSU2_TR(0x6428ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6428ee:{NFSU2_TR(0x6428ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6428ef:{NFSU2_TR(0x6428ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6428f0:{NFSU2_TR(0x6428f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6428f1:L6428f1:{c.instructions+=17;NFSU2_TR(0x6428f1);
__builtin_memmove((R+28),(R+28),4);
}
B6428f3:{NFSU2_TR(0x6428f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6428f4:{NFSU2_TR(0x6428f4);
__builtin_memmove((R+20),(R+16),4);
}
B6428f6:{NFSU2_TR(0x6428f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6428f9:{NFSU2_TR(0x6428f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6428fa:{NFSU2_TR(0x6428fa);
__builtin_memmove((R+12),(R+4),4);
}
B6428fc:{NFSU2_TR(0x6428fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6428ff:{NFSU2_TR(0x6428ff);
__builtin_memmove((R+4),(R+8),4);
}
B642901:{NFSU2_TR(0x642901);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642902:{NFSU2_TR(0x642902);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642903:{NFSU2_TR(0x642903);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B642905:{NFSU2_TR(0x642905);
__builtin_memmove((R+0),(R+4),4);
}
B642907:{NFSU2_TR(0x642907);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B642909:{NFSU2_TR(0x642909);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64290b:{NFSU2_TR(0x64290b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64290e:{NFSU2_TR(0x64290e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642911:{NFSU2_TR(0x642911);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64293b;}}
}
B642913:L642913:{c.instructions+=4;NFSU2_TR(0x642913);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642916:{NFSU2_TR(0x642916);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B642919:{NFSU2_TR(0x642919);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64291c:{NFSU2_TR(0x64291c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L642923;}}
}
B64291e:L64291e:{c.instructions+=2;NFSU2_TR(0x64291e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642921:{NFSU2_TR(0x642921);
{goto L642927;}
}
B642923:L642923:{c.instructions+=1;NFSU2_TR(0x642923);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642933;}}
}
B642925:L642925:{c.instructions+=1;NFSU2_TR(0x642925);
__builtin_memmove((R+4),(R+0),4);
}
B642927:L642927:{c.instructions+=5;NFSU2_TR(0x642927);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B64292a:{NFSU2_TR(0x64292a);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B64292c:{NFSU2_TR(0x64292c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64292e:{NFSU2_TR(0x64292e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642931:{NFSU2_TR(0x642931);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642913u);}goto L642913;}}
}
B642933:L642933:{c.instructions+=2;NFSU2_TR(0x642933);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B642935:{NFSU2_TR(0x642935);
if(r1(R+512)){{goto L642a19;}}
}
B64293b:L64293b:{c.instructions+=6;NFSU2_TR(0x64293b);
__builtin_memmove((R+4),(R+8),4);
}
B64293d:{NFSU2_TR(0x64293d);
w4(R+4,u32(~u32(r4(R+4))));
}
B64293f:{NFSU2_TR(0x64293f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B642940:{NFSU2_TR(0x642940);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B642942:{NFSU2_TR(0x642942);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642944:{NFSU2_TR(0x642944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6429e6;}}
}
B64294a:L64294a:{c.instructions+=2;NFSU2_TR(0x64294a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64294c:{NFSU2_TR(0x64294c);
if(r1(R+518)){{goto L642952;}}
}
B64294e:L64294e:{c.instructions+=2;NFSU2_TR(0x64294e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B642950:{NFSU2_TR(0x642950);
{goto L642955;}
}
B642952:L642952:{c.instructions+=2;NFSU2_TR(0x642952);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B642954:{NFSU2_TR(0x642954);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B642955:L642955:{c.instructions+=4;NFSU2_TR(0x642955);
__builtin_memmove((R+0),(R+8),4);
}
B642957:{NFSU2_TR(0x642957);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64295a:{NFSU2_TR(0x64295a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64295b:{NFSU2_TR(0x64295b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642960ull));
TAIL_STATIC(0x575620u,575);
}
B642960:L642960:{c.instructions+=4;NFSU2_TR(0x642960);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642962:{NFSU2_TR(0x642962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642963:{NFSU2_TR(0x642963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642966:{NFSU2_TR(0x642966);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642974;}}
}
B642968:L642968:{c.instructions+=2;NFSU2_TR(0x642968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B64296f:{NFSU2_TR(0x64296f);
{goto L642a22;}
}
B642974:L642974:{c.instructions+=6;NFSU2_TR(0x642974);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642977:{NFSU2_TR(0x642977);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64297a:{NFSU2_TR(0x64297a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64297d:{NFSU2_TR(0x64297d);
__builtin_memmove((R+28),(R+0),4);
}
B64297f:{NFSU2_TR(0x64297f);
__builtin_memmove((R+0),(R+4),4);
}
B642981:{NFSU2_TR(0x642981);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B642984:L642984:{c.instructions+=1;NFSU2_TR(0x642984);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L642986;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642984u);}goto L642984;}
}
B642986:L642986:{c.instructions+=2;NFSU2_TR(0x642986);
__builtin_memmove((R+4),(R+0),4);
}
B642988:{NFSU2_TR(0x642988);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64298b:L64298b:{c.instructions+=1;NFSU2_TR(0x64298b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64298d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64298bu);}goto L64298b;}
}
B64298d:L64298d:{c.instructions+=2;NFSU2_TR(0x64298d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B642990:{NFSU2_TR(0x642990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642995ull));
TAIL_STATIC(0x575630u,575);
}
B642995:L642995:{c.instructions+=6;NFSU2_TR(0x642995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642998:{NFSU2_TR(0x642998);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64299b:{NFSU2_TR(0x64299b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64299e:{NFSU2_TR(0x64299e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6429a0:{NFSU2_TR(0x6429a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6429a1:{NFSU2_TR(0x6429a1);
if(r1(R+518)){{goto L6429a7;}}
}
B6429a3:L6429a3:{c.instructions+=2;NFSU2_TR(0x6429a3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6429a5:{NFSU2_TR(0x6429a5);
{goto L6429aa;}
}
B6429a7:L6429a7:{c.instructions+=2;NFSU2_TR(0x6429a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6429a9:{NFSU2_TR(0x6429a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6429aa:L6429aa:{c.instructions+=3;NFSU2_TR(0x6429aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6429ad:{NFSU2_TR(0x6429ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6429ae:{NFSU2_TR(0x6429ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6429b3ull));
TAIL_STATIC(0x575620u,575);
}
B6429b3:L6429b3:{c.instructions+=5;NFSU2_TR(0x6429b3);
__builtin_memmove((R+28),(R+0),4);
}
B6429b5:{NFSU2_TR(0x6429b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6429b7:{NFSU2_TR(0x6429b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6429b8:{NFSU2_TR(0x6429b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6429bb:{NFSU2_TR(0x6429bb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642968u);}goto L642968;}}
}
B6429bd:L6429bd:{c.instructions+=5;NFSU2_TR(0x6429bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6429c0:{NFSU2_TR(0x6429c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6429c3:{NFSU2_TR(0x6429c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6429c6:{NFSU2_TR(0x6429c6);
__builtin_memmove((R+0),(R+4),4);
}
B6429c8:{NFSU2_TR(0x6429c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6429cb:L6429cb:{c.instructions+=1;NFSU2_TR(0x6429cb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6429cd;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6429cbu);}goto L6429cb;}
}
B6429cd:L6429cd:{c.instructions+=2;NFSU2_TR(0x6429cd);
__builtin_memmove((R+4),(R+0),4);
}
B6429cf:{NFSU2_TR(0x6429cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6429d2:L6429d2:{c.instructions+=1;NFSU2_TR(0x6429d2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6429d4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6429d2u);}goto L6429d2;}
}
B6429d4:L6429d4:{c.instructions+=2;NFSU2_TR(0x6429d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6429d7:{NFSU2_TR(0x6429d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6429dcull));
TAIL_STATIC(0x575630u,575);
}
B6429dc:L6429dc:{c.instructions+=4;NFSU2_TR(0x6429dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6429df:{NFSU2_TR(0x6429df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6429e2:{NFSU2_TR(0x6429e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6429e5:{NFSU2_TR(0x6429e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6429e6:L6429e6:{c.instructions+=2;NFSU2_TR(0x6429e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6429e9:{NFSU2_TR(0x6429e9);
{goto L6429ff;}
}
B6429eb:L6429eb:{c.instructions+=8;NFSU2_TR(0x6429eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6429ee:{NFSU2_TR(0x6429ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6429f1:{NFSU2_TR(0x6429f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6429f3:{NFSU2_TR(0x6429f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6429f6:{NFSU2_TR(0x6429f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6429f9:{NFSU2_TR(0x6429f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6429fc:{NFSU2_TR(0x6429fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6429fe:{NFSU2_TR(0x6429fe);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6429ff:L6429ff:{c.instructions+=3;NFSU2_TR(0x6429ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642a01:{NFSU2_TR(0x642a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642a04:{NFSU2_TR(0x642a04);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6429ebu);}goto L6429eb;}}
}
B642a06:L642a06:{c.instructions+=5;NFSU2_TR(0x642a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B642a09:{NFSU2_TR(0x642a09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B642a0c:{NFSU2_TR(0x642a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642a0f:{NFSU2_TR(0x642a0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B642a16:{NFSU2_TR(0x642a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642a19:L642a19:{c.instructions+=3;NFSU2_TR(0x642a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642a1c:{NFSU2_TR(0x642a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642a1e:{NFSU2_TR(0x642a1e);
if(r1(R+518)){{goto L642a22;}}
}
B642a20:L642a20:{c.instructions+=1;NFSU2_TR(0x642a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B642a22:L642a22:{c.instructions+=2;NFSU2_TR(0x642a22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a24:{NFSU2_TR(0x642a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642a29ull));
TAIL_STATIC(0x575630u,575);
}
B642a29:L642a29:{c.instructions+=7;NFSU2_TR(0x642a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642a2c:{NFSU2_TR(0x642a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642a2d:{NFSU2_TR(0x642a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642a2e:{NFSU2_TR(0x642a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642a2f:{NFSU2_TR(0x642a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642a30:{NFSU2_TR(0x642a30);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B642a31:{NFSU2_TR(0x642a31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642a34:L642a34:{c.instructions+=7;NFSU2_TR(0x642a34);
__builtin_memmove((R+28),(R+28),4);
}
B642a36:{NFSU2_TR(0x642a36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a37:{NFSU2_TR(0x642a37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a38:{NFSU2_TR(0x642a38);
__builtin_memmove((R+24),(R+4),4);
}
B642a3a:{NFSU2_TR(0x642a3a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B642a3c:{NFSU2_TR(0x642a3c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B642a3e:{NFSU2_TR(0x642a3e);
if(r1(R+518)){{goto L642a53;}}
}
B642a40:L642a40:{c.instructions+=1;NFSU2_TR(0x642a40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a41:L642a41:{c.instructions+=4;NFSU2_TR(0x642a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642a43:{NFSU2_TR(0x642a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B642a45:{NFSU2_TR(0x642a45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a46:{NFSU2_TR(0x642a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642a4bull));
TAIL_STATIC(0x575630u,575);
}
B642a4b:L642a4b:{c.instructions+=4;NFSU2_TR(0x642a4b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642a4d:{NFSU2_TR(0x642a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642a4e:{NFSU2_TR(0x642a4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B642a50:{NFSU2_TR(0x642a50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642a41u);}goto L642a41;}}
}
B642a52:L642a52:{c.instructions+=1;NFSU2_TR(0x642a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642a53:L642a53:{c.instructions+=6;NFSU2_TR(0x642a53);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B642a55:{NFSU2_TR(0x642a55);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642a58:{NFSU2_TR(0x642a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642a5b:{NFSU2_TR(0x642a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642a5e:{NFSU2_TR(0x642a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642a61:{NFSU2_TR(0x642a61);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L642a72;}}
}
B642a63:L642a63:{c.instructions+=6;NFSU2_TR(0x642a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642a66:{NFSU2_TR(0x642a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B642a69:{NFSU2_TR(0x642a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xffffffdfull))));
s4(u32(r4(R+0)),r4(U+0));
}
B642a6c:{NFSU2_TR(0x642a6c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B642a6d:{NFSU2_TR(0x642a6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B642a70:{NFSU2_TR(0x642a70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642a63u);}goto L642a63;}}
}
B642a72:L642a72:{c.instructions+=4;NFSU2_TR(0x642a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642a73:{NFSU2_TR(0x642a73);
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
B642a75:{NFSU2_TR(0x642a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642a76:{NFSU2_TR(0x642a76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642a77:L642a77:{c.instructions+=8;NFSU2_TR(0x642a77);
__builtin_memmove((R+28),(R+28),4);
}
B642a79:{NFSU2_TR(0x642a79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a7a:{NFSU2_TR(0x642a7a);
__builtin_memmove((R+20),(R+16),4);
}
B642a7c:{NFSU2_TR(0x642a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642a7f:{NFSU2_TR(0x642a7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a80:{NFSU2_TR(0x642a80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a81:{NFSU2_TR(0x642a81);
__builtin_memmove((R+28),(R+4),4);
}
B642a83:{NFSU2_TR(0x642a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642a86:L642a86:{c.instructions+=4;NFSU2_TR(0x642a86);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B642a88:{NFSU2_TR(0x642a88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B642a89:{NFSU2_TR(0x642a89);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B642a8b:{NFSU2_TR(0x642a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642a86u);}goto L642a86;}}
}
B642a8d:L642a8d:{c.instructions+=5;NFSU2_TR(0x642a8d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B642a8f:{NFSU2_TR(0x642a8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642a92:{NFSU2_TR(0x642a92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642a95:{NFSU2_TR(0x642a95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642a96:{NFSU2_TR(0x642a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642a9bull));
TAIL_STATIC(0x575620u,575);
}
B642a9b:L642a9b:{c.instructions+=3;NFSU2_TR(0x642a9b);
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
B642a9d:{NFSU2_TR(0x642a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642a9e:{NFSU2_TR(0x642a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642aa7;}}
}
B642aa0:L642aa0:{c.instructions+=2;NFSU2_TR(0x642aa0);
w4(R+0,u32(0x8007000eull));
}
B642aa5:{NFSU2_TR(0x642aa5);
{goto L642acb;}
}
B642aa7:L642aa7:{c.instructions+=10;NFSU2_TR(0x642aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642aa9:{NFSU2_TR(0x642aa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B642aab:{NFSU2_TR(0x642aab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B642aae:{NFSU2_TR(0x642aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B642ab1:{NFSU2_TR(0x642ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B642ab3:{NFSU2_TR(0x642ab3);
__builtin_memmove((R+4),(R+24),4);
}
B642ab5:{NFSU2_TR(0x642ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642ab8:{NFSU2_TR(0x642ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642abb:{NFSU2_TR(0x642abb);
__builtin_memmove((R+0),(R+4),4);
}
B642abd:{NFSU2_TR(0x642abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B642ac0:L642ac0:{c.instructions+=1;NFSU2_TR(0x642ac0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L642ac2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642ac0u);}goto L642ac0;}
}
B642ac2:L642ac2:{c.instructions+=2;NFSU2_TR(0x642ac2);
__builtin_memmove((R+4),(R+0),4);
}
B642ac4:{NFSU2_TR(0x642ac4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B642ac7:L642ac7:{c.instructions+=1;NFSU2_TR(0x642ac7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L642ac9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642ac7u);}goto L642ac7;}
}
B642ac9:L642ac9:{c.instructions+=1;NFSU2_TR(0x642ac9);
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
B642acb:L642acb:{c.instructions+=4;NFSU2_TR(0x642acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642acc:{NFSU2_TR(0x642acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642acd:{NFSU2_TR(0x642acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642ace:{NFSU2_TR(0x642ace);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642ad1:L642ad1:{c.instructions+=9;NFSU2_TR(0x642ad1);
__builtin_memmove((R+28),(R+28),4);
}
B642ad3:{NFSU2_TR(0x642ad3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642ad4:{NFSU2_TR(0x642ad4);
__builtin_memmove((R+20),(R+16),4);
}
B642ad6:{NFSU2_TR(0x642ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642ad7:{NFSU2_TR(0x642ad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642ad8:{NFSU2_TR(0x642ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B642adb:{NFSU2_TR(0x642adb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642add:{NFSU2_TR(0x642add);
__builtin_memmove((R+24),(R+4),4);
}
B642adf:{NFSU2_TR(0x642adf);
if(r1(R+518)){{goto L642b37;}}
}
B642ae1:L642ae1:{c.instructions+=3;NFSU2_TR(0x642ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642ae4:{NFSU2_TR(0x642ae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642ae6:{NFSU2_TR(0x642ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642aec;}}
}
B642ae8:L642ae8:{c.instructions+=2;NFSU2_TR(0x642ae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B642aea:{NFSU2_TR(0x642aea);
{goto L642b37;}
}
B642aec:L642aec:{c.instructions+=4;NFSU2_TR(0x642aec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642aed:{NFSU2_TR(0x642aed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B642aee:{NFSU2_TR(0x642aee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642aef:{NFSU2_TR(0x642aef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642af4ull));
TAIL_STATIC(0x670ea6u,670);
}
B642af4:L642af4:{c.instructions+=2;NFSU2_TR(0x642af4);
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
B642af6:{NFSU2_TR(0x642af6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L642b39;}}
}
B642af8:L642af8:{c.instructions+=4;NFSU2_TR(0x642af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642afa:{NFSU2_TR(0x642afa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B642afc:{NFSU2_TR(0x642afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642afd:{NFSU2_TR(0x642afd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642b00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B642b00:L642b00:{c.instructions+=5;NFSU2_TR(0x642b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B642b03:{NFSU2_TR(0x642b03);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B642b06:{NFSU2_TR(0x642b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B642b08:{NFSU2_TR(0x642b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642b0a:{NFSU2_TR(0x642b0a);
if(r1(R+518)){{goto L642b37;}}
}
B642b0c:L642b0c:{c.instructions+=1;NFSU2_TR(0x642b0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642b0d:L642b0d:{c.instructions+=3;NFSU2_TR(0x642b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642b10:{NFSU2_TR(0x642b10);
__builtin_memmove((R+4),(R+24),4);
}
B642b12:{NFSU2_TR(0x642b12);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642b15:L642b15:{c.instructions+=4;NFSU2_TR(0x642b15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B642b17:{NFSU2_TR(0x642b17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B642b18:{NFSU2_TR(0x642b18);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B642b1a:{NFSU2_TR(0x642b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642b15u);}goto L642b15;}}
}
B642b1c:L642b1c:{c.instructions+=5;NFSU2_TR(0x642b1c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B642b1e:{NFSU2_TR(0x642b1e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B642b20:{NFSU2_TR(0x642b20);
__builtin_memmove((R+12),(R+4),4);
}
B642b22:{NFSU2_TR(0x642b22);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B642b25:{NFSU2_TR(0x642b25);
__builtin_memmove((R+28),(R+0),4);
}
B642b27:L642b27:{c.instructions+=1;NFSU2_TR(0x642b27);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L642b29;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642b27u);}goto L642b27;}
}
B642b29:L642b29:{c.instructions+=2;NFSU2_TR(0x642b29);
__builtin_memmove((R+4),(R+12),4);
}
B642b2b:{NFSU2_TR(0x642b2b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B642b2e:L642b2e:{c.instructions+=1;NFSU2_TR(0x642b2e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L642b30;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642b2eu);}goto L642b2e;}
}
B642b30:L642b30:{c.instructions+=3;NFSU2_TR(0x642b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B642b32:{NFSU2_TR(0x642b32);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642b34:{NFSU2_TR(0x642b34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642b0du);}goto L642b0d;}}
}
B642b36:L642b36:{c.instructions+=1;NFSU2_TR(0x642b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642b37:L642b37:{c.instructions+=1;NFSU2_TR(0x642b37);
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
B642b39:L642b39:{c.instructions+=4;NFSU2_TR(0x642b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642b3a:{NFSU2_TR(0x642b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642b3b:{NFSU2_TR(0x642b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642b3c:{NFSU2_TR(0x642b3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642b3f:L642b3f:{c.instructions+=2;NFSU2_TR(0x642b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642b42:{NFSU2_TR(0x642b42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642b43:L642b43:{c.instructions+=9;NFSU2_TR(0x642b43);
__builtin_memmove((R+0),(R+4),4);
}
B642b45:{NFSU2_TR(0x642b45);
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
B642b47:{NFSU2_TR(0x642b47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B642b49:{NFSU2_TR(0x642b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642b4c:{NFSU2_TR(0x642b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642b4f:{NFSU2_TR(0x642b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B642b56:{NFSU2_TR(0x642b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642b59:{NFSU2_TR(0x642b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642b5c:{NFSU2_TR(0x642b5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642b5d:L642b5d:{c.instructions+=7;NFSU2_TR(0x642b5d);
__builtin_memmove((R+28),(R+28),4);
}
B642b5f:{NFSU2_TR(0x642b5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642b60:{NFSU2_TR(0x642b60);
__builtin_memmove((R+20),(R+16),4);
}
B642b62:{NFSU2_TR(0x642b62);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
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
B642b66:{NFSU2_TR(0x642b66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642b67:{NFSU2_TR(0x642b67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642b68:{NFSU2_TR(0x642b68);
if(r1(R+518)){{goto L642bbc;}}
}
B642b6a:L642b6a:{c.instructions+=3;NFSU2_TR(0x642b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642b6d:{NFSU2_TR(0x642b6d);
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
B642b6f:{NFSU2_TR(0x642b6f);
if(r1(R+518)){{goto L642bbc;}}
}
B642b71:L642b71:{c.instructions+=4;NFSU2_TR(0x642b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642b74:{NFSU2_TR(0x642b74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642b77:{NFSU2_TR(0x642b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642b7a:{NFSU2_TR(0x642b7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642b94;}}
}
B642b7c:L642b7c:{c.instructions+=2;NFSU2_TR(0x642b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642b7e:{NFSU2_TR(0x642b7e);
if(r1(R+518)){{goto L642b92;}}
}
B642b80:L642b80:{c.instructions+=3;NFSU2_TR(0x642b80);
__builtin_memmove((R+0),(R+24),4);
}
B642b82:{NFSU2_TR(0x642b82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642b83:{NFSU2_TR(0x642b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642b86:L642b86:{c.instructions+=4;NFSU2_TR(0x642b86);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B642b88:{NFSU2_TR(0x642b88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B642b89:{NFSU2_TR(0x642b89);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B642b8b:{NFSU2_TR(0x642b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642b86u);}goto L642b86;}}
}
B642b8d:L642b8d:{c.instructions+=3;NFSU2_TR(0x642b8d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B642b8f:{NFSU2_TR(0x642b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642b90:{NFSU2_TR(0x642b90);
{goto L642b94;}
}
B642b92:L642b92:{c.instructions+=1;NFSU2_TR(0x642b92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B642b94:L642b94:{c.instructions+=2;NFSU2_TR(0x642b94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642b96:{NFSU2_TR(0x642b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642b9c;}}
}
B642b98:L642b98:{c.instructions+=2;NFSU2_TR(0x642b98);
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
B642b9a:{NFSU2_TR(0x642b9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642bbc;}}
}
B642b9c:L642b9c:{c.instructions+=12;NFSU2_TR(0x642b9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B642b9e:{NFSU2_TR(0x642b9e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B642ba0:{NFSU2_TR(0x642ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642ba3:{NFSU2_TR(0x642ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642ba6:{NFSU2_TR(0x642ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642ba9:{NFSU2_TR(0x642ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642bac:{NFSU2_TR(0x642bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642baf:{NFSU2_TR(0x642baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642bb2:{NFSU2_TR(0x642bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642bb5:{NFSU2_TR(0x642bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642bb8:{NFSU2_TR(0x642bb8);
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
B642bba:{NFSU2_TR(0x642bba);
{goto L642bc1;}
}
B642bbc:L642bbc:{c.instructions+=1;NFSU2_TR(0x642bbc);
w4(R+0,u32(0x80004005ull));
}
B642bc1:L642bc1:{c.instructions+=4;NFSU2_TR(0x642bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642bc2:{NFSU2_TR(0x642bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642bc3:{NFSU2_TR(0x642bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642bc4:{NFSU2_TR(0x642bc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642bc7:L642bc7:{c.instructions+=6;NFSU2_TR(0x642bc7);
__builtin_memmove((R+28),(R+28),4);
}
B642bc9:{NFSU2_TR(0x642bc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642bca:{NFSU2_TR(0x642bca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642bcb:{NFSU2_TR(0x642bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642bce:{NFSU2_TR(0x642bce);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
}
B642bd0:{NFSU2_TR(0x642bd0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642c18;}}
}
B642bd2:L642bd2:{c.instructions+=4;NFSU2_TR(0x642bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B642bd4:{NFSU2_TR(0x642bd4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B642bd6:{NFSU2_TR(0x642bd6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642bd9:{NFSU2_TR(0x642bd9);
if(r1(R+518)){{goto L642c1d;}}
}
B642bdb:L642bdb:{c.instructions+=2;NFSU2_TR(0x642bdb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642bde:{NFSU2_TR(0x642bde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642c10;}}
}
B642be0:L642be0:{c.instructions+=3;NFSU2_TR(0x642be0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B642be3:{NFSU2_TR(0x642be3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B642be5:{NFSU2_TR(0x642be5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642bf1;}}
}
B642be7:L642be7:{c.instructions+=2;NFSU2_TR(0x642be7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B642bea:{NFSU2_TR(0x642bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642bf1;}}
}
B642bec:L642bec:{c.instructions+=2;NFSU2_TR(0x642bec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B642bef:{NFSU2_TR(0x642bef);
{goto L642c0b;}
}
B642bf1:L642bf1:{c.instructions+=2;NFSU2_TR(0x642bf1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642bf4:{NFSU2_TR(0x642bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642c10;}}
}
B642bf6:L642bf6:{c.instructions+=3;NFSU2_TR(0x642bf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B642bf9:{NFSU2_TR(0x642bf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B642bfb:{NFSU2_TR(0x642bfb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642c10;}}
}
B642bfd:L642bfd:{c.instructions+=2;NFSU2_TR(0x642bfd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B642c01:{NFSU2_TR(0x642c01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642c10;}}
}
B642c03:L642c03:{c.instructions+=2;NFSU2_TR(0x642c03);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B642c06:{NFSU2_TR(0x642c06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642c10;}}
}
B642c08:L642c08:{c.instructions+=1;NFSU2_TR(0x642c08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B642c0b:L642c0b:{c.instructions+=2;NFSU2_TR(0x642c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642c0e:{NFSU2_TR(0x642c0e);
{goto L642c11;}
}
B642c10:L642c10:{c.instructions+=1;NFSU2_TR(0x642c10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B642c11:L642c11:{c.instructions+=3;NFSU2_TR(0x642c11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B642c13:{NFSU2_TR(0x642c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B642c16:{NFSU2_TR(0x642c16);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642bd2u);}goto L642bd2;}}
}
B642c18:L642c18:{c.instructions+=1;NFSU2_TR(0x642c18);
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
B642c1a:L642c1a:{c.instructions+=3;NFSU2_TR(0x642c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642c1b:{NFSU2_TR(0x642c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642c1c:{NFSU2_TR(0x642c1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642c1d:L642c1d:{c.instructions+=3;NFSU2_TR(0x642c1d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B642c1f:{NFSU2_TR(0x642c1f);
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
B642c20:{NFSU2_TR(0x642c20);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642c1au);}goto L642c1a;}
}
B642c22:L642c22:{c.instructions+=12;NFSU2_TR(0x642c22);
__builtin_memmove((R+28),(R+28),4);
}
B642c24:{NFSU2_TR(0x642c24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c25:{NFSU2_TR(0x642c25);
__builtin_memmove((R+20),(R+16),4);
}
B642c27:{NFSU2_TR(0x642c27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c28:{NFSU2_TR(0x642c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642c2c:{NFSU2_TR(0x642c2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c2d:{NFSU2_TR(0x642c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642c30:{NFSU2_TR(0x642c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c31:{NFSU2_TR(0x642c31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c32:{NFSU2_TR(0x642c32);
__builtin_memmove((R+28),(R+4),4);
}
B642c34:{NFSU2_TR(0x642c34);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642c37:{NFSU2_TR(0x642c37);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642c47;}}
}
B642c39:L642c39:{c.instructions+=3;NFSU2_TR(0x642c39);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642c3c:{NFSU2_TR(0x642c3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c3d:{NFSU2_TR(0x642c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642c42ull));
TAIL_STATIC(0x75df39u,75d);
}
B642c42:L642c42:{c.instructions+=3;NFSU2_TR(0x642c42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642c44:{NFSU2_TR(0x642c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642c45:{NFSU2_TR(0x642c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642c81;}}
}
B642c47:L642c47:{c.instructions+=3;NFSU2_TR(0x642c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642c4a:{NFSU2_TR(0x642c4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B642c4d:{NFSU2_TR(0x642c4d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642da1;}}
}
B642c53:L642c53:{c.instructions+=2;NFSU2_TR(0x642c53);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x2eull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x2eull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x2eull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B642c56:{NFSU2_TR(0x642c56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642da1;}}
}
B642c5c:L642c5c:{c.instructions+=3;NFSU2_TR(0x642c5c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642c5f:{NFSU2_TR(0x642c5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c60:{NFSU2_TR(0x642c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642c65ull));
TAIL_STATIC(0x75df39u,75d);
}
B642c65:L642c65:{c.instructions+=3;NFSU2_TR(0x642c65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642c67:{NFSU2_TR(0x642c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642c68:{NFSU2_TR(0x642c68);
if(r1(R+518)){{goto L642da1;}}
}
B642c6e:L642c6e:{c.instructions+=2;NFSU2_TR(0x642c6e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B642c71:{NFSU2_TR(0x642c71);
{goto L642cc6;}
}
B642c73:L642c73:{c.instructions+=3;NFSU2_TR(0x642c73);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642c76:{NFSU2_TR(0x642c76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c77:{NFSU2_TR(0x642c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642c7cull));
TAIL_STATIC(0x75df39u,75d);
}
B642c7c:L642c7c:{c.instructions+=3;NFSU2_TR(0x642c7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642c7e:{NFSU2_TR(0x642c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642c7f:{NFSU2_TR(0x642c7f);
if(r1(R+518)){{goto L642c87;}}
}
B642c81:L642c81:{c.instructions+=3;NFSU2_TR(0x642c81);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642c82:{NFSU2_TR(0x642c82);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642c85:{NFSU2_TR(0x642c85);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642c73u);}goto L642c73;}}
}
B642c87:L642c87:{c.instructions+=3;NFSU2_TR(0x642c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642c8a:{NFSU2_TR(0x642c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B642c8c:{NFSU2_TR(0x642c8c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642cae;}}
}
B642c8e:L642c8e:{c.instructions+=2;NFSU2_TR(0x642c8e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B642c91:{NFSU2_TR(0x642c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642cae;}}
}
B642c93:L642c93:{c.instructions+=3;NFSU2_TR(0x642c93);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642c94:{NFSU2_TR(0x642c94);
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
B642c96:{NFSU2_TR(0x642c96);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642ccb;}}
}
B642c98:L642c98:{c.instructions+=3;NFSU2_TR(0x642c98);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642c9b:{NFSU2_TR(0x642c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642c9c:{NFSU2_TR(0x642c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642ca1ull));
TAIL_STATIC(0x75df39u,75d);
}
B642ca1:L642ca1:{c.instructions+=3;NFSU2_TR(0x642ca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642ca3:{NFSU2_TR(0x642ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642ca4:{NFSU2_TR(0x642ca4);
if(r1(R+518)){{goto L642ccb;}}
}
B642ca6:L642ca6:{c.instructions+=3;NFSU2_TR(0x642ca6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642ca7:{NFSU2_TR(0x642ca7);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642caa:{NFSU2_TR(0x642caa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642c98u);}goto L642c98;}}
}
B642cac:L642cac:{c.instructions+=1;NFSU2_TR(0x642cac);
{goto L642ccb;}
}
B642cae:L642cae:{c.instructions+=2;NFSU2_TR(0x642cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B642cb5:{NFSU2_TR(0x642cb5);
{goto L642ccb;}
}
B642cb7:L642cb7:{c.instructions+=3;NFSU2_TR(0x642cb7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642cba:{NFSU2_TR(0x642cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642cbb:{NFSU2_TR(0x642cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642cc0ull));
TAIL_STATIC(0x75df39u,75d);
}
B642cc0:L642cc0:{c.instructions+=3;NFSU2_TR(0x642cc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642cc2:{NFSU2_TR(0x642cc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642cc3:{NFSU2_TR(0x642cc3);
if(r1(R+518)){{goto L642ccb;}}
}
B642cc5:L642cc5:{c.instructions+=1;NFSU2_TR(0x642cc5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642cc6:L642cc6:{c.instructions+=2;NFSU2_TR(0x642cc6);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642cc9:{NFSU2_TR(0x642cc9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642cb7u);}goto L642cb7;}}
}
B642ccb:L642ccb:{c.instructions+=3;NFSU2_TR(0x642ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642cce:{NFSU2_TR(0x642cce);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B642cd1:{NFSU2_TR(0x642cd1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642d0a;}}
}
B642cd3:L642cd3:{c.instructions+=3;NFSU2_TR(0x642cd3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642cd6:{NFSU2_TR(0x642cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642cd7:{NFSU2_TR(0x642cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642cdcull));
TAIL_STATIC(0x75ded8u,75d);
}
B642cdc:L642cdc:{c.instructions+=3;NFSU2_TR(0x642cdc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x65ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x65ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x65ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642cdf:{NFSU2_TR(0x642cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642ce0:{NFSU2_TR(0x642ce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642d0a;}}
}
B642ce2:L642ce2:{c.instructions+=3;NFSU2_TR(0x642ce2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642ce5:{NFSU2_TR(0x642ce5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642ce6:{NFSU2_TR(0x642ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642cebull));
TAIL_STATIC(0x75df39u,75d);
}
B642ceb:L642ceb:{c.instructions+=3;NFSU2_TR(0x642ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642ced:{NFSU2_TR(0x642ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642cee:{NFSU2_TR(0x642cee);
if(r1(R+518)){{goto L642d0a;}}
}
B642cf0:L642cf0:{c.instructions+=3;NFSU2_TR(0x642cf0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642cf1:{NFSU2_TR(0x642cf1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642cf2:{NFSU2_TR(0x642cf2);
{goto L642d03;}
}
B642cf4:L642cf4:{c.instructions+=3;NFSU2_TR(0x642cf4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642cf7:{NFSU2_TR(0x642cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642cf8:{NFSU2_TR(0x642cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642cfdull));
TAIL_STATIC(0x75df39u,75d);
}
B642cfd:L642cfd:{c.instructions+=3;NFSU2_TR(0x642cfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642cff:{NFSU2_TR(0x642cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642d00:{NFSU2_TR(0x642d00);
if(r1(R+518)){{goto L642d56;}}
}
B642d02:L642d02:{c.instructions+=1;NFSU2_TR(0x642d02);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642d03:L642d03:{c.instructions+=2;NFSU2_TR(0x642d03);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642d06:{NFSU2_TR(0x642d06);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642cf4u);}goto L642cf4;}}
}
B642d08:L642d08:{c.instructions+=1;NFSU2_TR(0x642d08);
{goto L642d56;}
}
B642d0a:L642d0a:{c.instructions+=3;NFSU2_TR(0x642d0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642d0d:{NFSU2_TR(0x642d0d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642d10:{NFSU2_TR(0x642d10);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642d50;}}
}
B642d12:L642d12:{c.instructions+=3;NFSU2_TR(0x642d12);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642d15:{NFSU2_TR(0x642d15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642d16:{NFSU2_TR(0x642d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642d1bull));
TAIL_STATIC(0x75ded8u,75d);
}
B642d1b:L642d1b:{c.instructions+=3;NFSU2_TR(0x642d1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642d1e:{NFSU2_TR(0x642d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642d1f:{NFSU2_TR(0x642d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642d50;}}
}
B642d21:L642d21:{c.instructions+=2;NFSU2_TR(0x642d21);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x2dull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x2dull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x2dull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B642d24:{NFSU2_TR(0x642d24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642d50;}}
}
B642d26:L642d26:{c.instructions+=3;NFSU2_TR(0x642d26);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B642d2a:{NFSU2_TR(0x642d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642d2b:{NFSU2_TR(0x642d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642d30ull));
TAIL_STATIC(0x75df39u,75d);
}
B642d30:L642d30:{c.instructions+=3;NFSU2_TR(0x642d30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642d32:{NFSU2_TR(0x642d32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642d33:{NFSU2_TR(0x642d33);
if(r1(R+518)){{goto L642d50;}}
}
B642d35:L642d35:{c.instructions+=2;NFSU2_TR(0x642d35);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B642d38:{NFSU2_TR(0x642d38);
{goto L642d49;}
}
B642d3a:L642d3a:{c.instructions+=3;NFSU2_TR(0x642d3a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642d3d:{NFSU2_TR(0x642d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642d3e:{NFSU2_TR(0x642d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642d43ull));
TAIL_STATIC(0x75df39u,75d);
}
B642d43:L642d43:{c.instructions+=3;NFSU2_TR(0x642d43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642d45:{NFSU2_TR(0x642d45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642d46:{NFSU2_TR(0x642d46);
if(r1(R+518)){{goto L642d56;}}
}
B642d48:L642d48:{c.instructions+=1;NFSU2_TR(0x642d48);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B642d49:L642d49:{c.instructions+=2;NFSU2_TR(0x642d49);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642d4c:{NFSU2_TR(0x642d4c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642d3au);}goto L642d3a;}}
}
B642d4e:L642d4e:{c.instructions+=1;NFSU2_TR(0x642d4e);
{goto L642d56;}
}
B642d50:L642d50:{c.instructions+=2;NFSU2_TR(0x642d50);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642d54:{NFSU2_TR(0x642d54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642da1;}}
}
B642d56:L642d56:{c.instructions+=2;NFSU2_TR(0x642d56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642d5a:{NFSU2_TR(0x642d5a);
if(r1(R+518)){{goto L642d9a;}}
}
B642d5c:L642d5c:{c.instructions+=8;NFSU2_TR(0x642d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642d5f:{NFSU2_TR(0x642d5f);
__builtin_memmove((R+28),(R+12),4);
}
B642d61:{NFSU2_TR(0x642d61);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B642d63:{NFSU2_TR(0x642d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642d66:{NFSU2_TR(0x642d66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B642d69:{NFSU2_TR(0x642d69);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B642d6c:{NFSU2_TR(0x642d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642d6f:{NFSU2_TR(0x642d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642d74ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B642d74:L642d74:{c.instructions+=5;NFSU2_TR(0x642d74);
__builtin_memmove((R+4),(R+28),4);
}
B642d76:{NFSU2_TR(0x642d76);
__builtin_memmove((R+8),(R+4),4);
}
B642d78:{NFSU2_TR(0x642d78);
__builtin_memmove((R+0),(R+16),4);
}
B642d7a:{NFSU2_TR(0x642d7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B642d7d:{NFSU2_TR(0x642d7d);
__builtin_memmove((R+28),(R+0),4);
}
B642d7f:L642d7f:{c.instructions+=1;NFSU2_TR(0x642d7f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L642d81;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642d7fu);}goto L642d7f;}
}
B642d81:L642d81:{c.instructions+=2;NFSU2_TR(0x642d81);
__builtin_memmove((R+4),(R+8),4);
}
B642d83:{NFSU2_TR(0x642d83);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B642d86:L642d86:{c.instructions+=1;NFSU2_TR(0x642d86);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L642d88;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642d86u);}goto L642d86;}
}
B642d88:L642d88:{c.instructions+=4;NFSU2_TR(0x642d88);
__builtin_memmove((R+4),(R+8),4);
}
B642d8a:{NFSU2_TR(0x642d8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642d8b:{NFSU2_TR(0x642d8b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B642d8f:{NFSU2_TR(0x642d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642d94ull));
TAIL_STATIC(0x75ddd8u,75d);
}
B642d94:L642d94:{c.instructions+=3;NFSU2_TR(0x642d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642d97:{NFSU2_TR(0x642d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642d98:{NFSU2_TR(0x642d98);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B642d9a:L642d9a:{c.instructions+=3;NFSU2_TR(0x642d9a);
__builtin_memmove((R+0),(R+12),4);
}
B642d9c:{NFSU2_TR(0x642d9c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642d9f:{NFSU2_TR(0x642d9f);
{goto L642da3;}
}
B642da1:L642da1:{c.instructions+=1;NFSU2_TR(0x642da1);
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
B642da3:L642da3:{c.instructions+=6;NFSU2_TR(0x642da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+16),(U+0),4);
}
B642da6:{NFSU2_TR(0x642da6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642da7:{NFSU2_TR(0x642da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642da8:{NFSU2_TR(0x642da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642da9:{NFSU2_TR(0x642da9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B642daa:{NFSU2_TR(0x642daa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642dad:L642dad:{c.instructions+=10;NFSU2_TR(0x642dad);
__builtin_memmove((R+28),(R+28),4);
}
B642daf:{NFSU2_TR(0x642daf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642db0:{NFSU2_TR(0x642db0);
__builtin_memmove((R+20),(R+16),4);
}
B642db2:{NFSU2_TR(0x642db2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642db3:{NFSU2_TR(0x642db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642db6:{NFSU2_TR(0x642db6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642db7:{NFSU2_TR(0x642db7);
__builtin_memmove((R+24),(R+4),4);
}
B642db9:{NFSU2_TR(0x642db9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642dbc:{NFSU2_TR(0x642dbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642dbd:{NFSU2_TR(0x642dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642e28;}}
}
B642dbf:L642dbf:{c.instructions+=3;NFSU2_TR(0x642dbf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642dc2:{NFSU2_TR(0x642dc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642dc3:{NFSU2_TR(0x642dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642dc8ull));
TAIL_STATIC(0x75defau,75d);
}
B642dc8:L642dc8:{c.instructions+=3;NFSU2_TR(0x642dc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642dca:{NFSU2_TR(0x642dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642dcb:{NFSU2_TR(0x642dcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642dd2;}}
}
B642dcd:L642dcd:{c.instructions+=2;NFSU2_TR(0x642dcd);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B642dd0:{NFSU2_TR(0x642dd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642e28;}}
}
B642dd2:L642dd2:{c.instructions+=2;NFSU2_TR(0x642dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642dd5:{NFSU2_TR(0x642dd5);
{goto L642deb;}
}
B642dd7:L642dd7:{c.instructions+=3;NFSU2_TR(0x642dd7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642dda:{NFSU2_TR(0x642dda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642ddb:{NFSU2_TR(0x642ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642de0ull));
TAIL_STATIC(0x75dfecu,75d);
}
B642de0:L642de0:{c.instructions+=3;NFSU2_TR(0x642de0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642de2:{NFSU2_TR(0x642de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642de3:{NFSU2_TR(0x642de3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642dea;}}
}
B642de5:L642de5:{c.instructions+=2;NFSU2_TR(0x642de5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B642de8:{NFSU2_TR(0x642de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642df0;}}
}
B642dea:L642dea:{c.instructions+=1;NFSU2_TR(0x642dea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B642deb:L642deb:{c.instructions+=2;NFSU2_TR(0x642deb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B642dee:{NFSU2_TR(0x642dee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642dd7u);}goto L642dd7;}}
}
B642df0:L642df0:{c.instructions+=7;NFSU2_TR(0x642df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642df3:{NFSU2_TR(0x642df3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B642df5:{NFSU2_TR(0x642df5);
__builtin_memmove((R+12),(R+28),4);
}
B642df7:{NFSU2_TR(0x642df7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642df9:{NFSU2_TR(0x642df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642dfc:{NFSU2_TR(0x642dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642dfd:{NFSU2_TR(0x642dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642e02ull));
TAIL_STATIC(0x671ccbu,671);
}
B642e02:L642e02:{c.instructions+=2;NFSU2_TR(0x642e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642e04:{NFSU2_TR(0x642e04);
if(r1(R+518)){{goto L642e28;}}
}
B642e06:L642e06:{c.instructions+=5;NFSU2_TR(0x642e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642e09:{NFSU2_TR(0x642e09);
__builtin_memmove((R+4),(R+12),4);
}
B642e0b:{NFSU2_TR(0x642e0b);
__builtin_memmove((R+8),(R+4),4);
}
B642e0d:{NFSU2_TR(0x642e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B642e10:{NFSU2_TR(0x642e10);
__builtin_memmove((R+28),(R+0),4);
}
B642e12:L642e12:{c.instructions+=1;NFSU2_TR(0x642e12);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L642e14;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642e12u);}goto L642e12;}
}
B642e14:L642e14:{c.instructions+=2;NFSU2_TR(0x642e14);
__builtin_memmove((R+4),(R+8),4);
}
B642e16:{NFSU2_TR(0x642e16);
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
B642e19:L642e19:{c.instructions+=1;NFSU2_TR(0x642e19);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L642e1b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642e19u);}goto L642e19;}
}
B642e1b:L642e1b:{c.instructions+=5;NFSU2_TR(0x642e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642e1e:{NFSU2_TR(0x642e1e);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B642e22:{NFSU2_TR(0x642e22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B642e24:{NFSU2_TR(0x642e24);
__builtin_memmove((R+0),(R+12),4);
}
B642e26:{NFSU2_TR(0x642e26);
{goto L642e2a;}
}
B642e28:L642e28:{c.instructions+=1;NFSU2_TR(0x642e28);
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
B642e2a:L642e2a:{c.instructions+=5;NFSU2_TR(0x642e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642e2b:{NFSU2_TR(0x642e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642e2c:{NFSU2_TR(0x642e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642e2d:{NFSU2_TR(0x642e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642e2e:{NFSU2_TR(0x642e2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642e31:L642e31:{c.instructions+=18;NFSU2_TR(0x642e31);
__builtin_memmove((R+28),(R+28),4);
}
B642e33:{NFSU2_TR(0x642e33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642e34:{NFSU2_TR(0x642e34);
__builtin_memmove((R+20),(R+16),4);
}
B642e36:{NFSU2_TR(0x642e36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642e37:{NFSU2_TR(0x642e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642e3a:{NFSU2_TR(0x642e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B642e3d:{NFSU2_TR(0x642e3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642e3e:{NFSU2_TR(0x642e3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642e3f:{NFSU2_TR(0x642e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642e42:{NFSU2_TR(0x642e42);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B642e44:{NFSU2_TR(0x642e44);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B642e46:{NFSU2_TR(0x642e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642e49:{NFSU2_TR(0x642e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642e4c:{NFSU2_TR(0x642e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B642e4f:{NFSU2_TR(0x642e4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B642e51:{NFSU2_TR(0x642e51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642e52:{NFSU2_TR(0x642e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B642e55:{NFSU2_TR(0x642e55);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642f0a;}}
}
B642e5b:L642e5b:{c.instructions+=3;NFSU2_TR(0x642e5b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B642e5d:{NFSU2_TR(0x642e5d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x23ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642e60:{NFSU2_TR(0x642e60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642e75;}}
}
B642e62:L642e62:{c.instructions+=3;NFSU2_TR(0x642e62);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B642e64:{NFSU2_TR(0x642e64);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B642e66:{NFSU2_TR(0x642e66);
if(r1(R+518)){{goto L642e6d;}}
}
B642e68:L642e68:{c.instructions+=2;NFSU2_TR(0x642e68);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x40ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x40ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B642e6b:{NFSU2_TR(0x642e6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642e75;}}
}
B642e6d:L642e6d:{c.instructions+=2;NFSU2_TR(0x642e6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642e70:{NFSU2_TR(0x642e70);
{goto L642f3a;}
}
B642e75:L642e75:{c.instructions+=3;NFSU2_TR(0x642e75);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+8),(U+0),1);
}
B642e77:{NFSU2_TR(0x642e77);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642e79:{NFSU2_TR(0x642e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642edd;}}
}
B642e7b:L642e7b:{c.instructions+=3;NFSU2_TR(0x642e7b);
w4(R+28,u32(s32(s8(r1(R+12)))));
}
B642e7e:{NFSU2_TR(0x642e7e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x3aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642e81:{NFSU2_TR(0x642e81);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L642ead;}}
}
B642e83:L642e83:{c.instructions+=1;NFSU2_TR(0x642e83);
if(r1(R+518)){{goto L642ebd;}}
}
B642e85:L642e85:{c.instructions+=2;NFSU2_TR(0x642e85);
u8 U[6];
w1(R+512,u8((r4(R+28))<(u32(0x26ull))));
w1(R+523,sborrow<u32>(r4(R+28),u32(0x26ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x26ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642e88:{NFSU2_TR(0x642e88);
if(r1(R+518)){{goto L642ebd;}}
}
B642e8a:L642e8a:{c.instructions+=2;NFSU2_TR(0x642e8a);
u8 U[6];
w1(R+512,u8((r4(R+28))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(R+28),u32(0x5ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642e8d:{NFSU2_TR(0x642e8d);
if(r1(R+518)){{goto L642ebd;}}
}
B642e8f:L642e8f:{c.instructions+=3;NFSU2_TR(0x642e8f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B642e90:{NFSU2_TR(0x642e90);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642e91:{NFSU2_TR(0x642e91);
if(r1(R+518)){{goto L642ebd;}}
}
B642e93:L642e93:{c.instructions+=2;NFSU2_TR(0x642e93);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B642e94:{NFSU2_TR(0x642e94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f0a;}}
}
B642e96:L642e96:{c.instructions+=3;NFSU2_TR(0x642e96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642e99:{NFSU2_TR(0x642e99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B642e9c:{NFSU2_TR(0x642e9c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642f0a;}}
}
B642e9e:L642e9e:{c.instructions+=2;NFSU2_TR(0x642e9e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x2eull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x2eull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x2eull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B642ea1:{NFSU2_TR(0x642ea1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f0a;}}
}
B642ea3:L642ea3:{c.instructions+=4;NFSU2_TR(0x642ea3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642ea6:{NFSU2_TR(0x642ea6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B642ea8:{NFSU2_TR(0x642ea8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642eab:{NFSU2_TR(0x642eab);
{goto L642ed9;}
}
B642ead:L642ead:{c.instructions+=2;NFSU2_TR(0x642ead);
w1(R+512,u8((r4(R+28))<(u32(0x3cull))));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x3cull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B642eb0:{NFSU2_TR(0x642eb0);
if(r1(R+518)){{goto L642ec2;}}
}
B642eb2:L642eb2:{c.instructions+=2;NFSU2_TR(0x642eb2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642eb3:{NFSU2_TR(0x642eb3);
if(r1(R+518)){{goto L642ebd;}}
}
B642eb5:L642eb5:{c.instructions+=2;NFSU2_TR(0x642eb5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B642eb6:{NFSU2_TR(0x642eb6);
if(r1(R+518)){{goto L642ec2;}}
}
B642eb8:L642eb8:{c.instructions+=2;NFSU2_TR(0x642eb8);
u8 U[6];
w1(R+512,u8((r4(R+28))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(R+28),u32(0x3eull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642ebb:{NFSU2_TR(0x642ebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f0a;}}
}
B642ebd:L642ebd:{c.instructions+=2;NFSU2_TR(0x642ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642ec0:{NFSU2_TR(0x642ec0);
{goto L642f3a;}
}
B642ec2:L642ec2:{c.instructions+=5;NFSU2_TR(0x642ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B642ec5:{NFSU2_TR(0x642ec5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642ec8:{NFSU2_TR(0x642ec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B642ecb:{NFSU2_TR(0x642ecb);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B642ece:{NFSU2_TR(0x642ece);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642f3a;}}
}
B642ed0:L642ed0:{c.instructions+=2;NFSU2_TR(0x642ed0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x3dull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x3dull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x3dull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B642ed3:{NFSU2_TR(0x642ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f3a;}}
}
B642ed5:L642ed5:{c.instructions+=1;NFSU2_TR(0x642ed5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x3dull));
s1(u32(r4(U+0)),r1(U+4));
}
B642ed9:L642ed9:{c.instructions+=2;NFSU2_TR(0x642ed9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642edb:{NFSU2_TR(0x642edb);
{goto L642f3c;}
}
B642edd:L642edd:{c.instructions+=2;NFSU2_TR(0x642edd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642ee0:{NFSU2_TR(0x642ee0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f2d;}}
}
B642ee2:L642ee2:{c.instructions+=3;NFSU2_TR(0x642ee2);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B642ee5:{NFSU2_TR(0x642ee5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x2full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642ee8:{NFSU2_TR(0x642ee8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L642f14;}}
}
B642eea:L642eea:{c.instructions+=1;NFSU2_TR(0x642eea);
if(r1(R+518)){{goto L642f27;}}
}
B642eec:L642eec:{c.instructions+=2;NFSU2_TR(0x642eec);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x21ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x21ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642eef:{NFSU2_TR(0x642eef);
if(r1(R+518)){{goto L642f27;}}
}
B642ef1:L642ef1:{c.instructions+=2;NFSU2_TR(0x642ef1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x24ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642ef4:{NFSU2_TR(0x642ef4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642f0a;}}
}
B642ef6:L642ef6:{c.instructions+=2;NFSU2_TR(0x642ef6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x26ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x26ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x26ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642ef9:{NFSU2_TR(0x642ef9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642f27;}}
}
B642efb:L642efb:{c.instructions+=2;NFSU2_TR(0x642efb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x29ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642efe:{NFSU2_TR(0x642efe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642f0a;}}
}
B642f00:L642f00:{c.instructions+=2;NFSU2_TR(0x642f00);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x2bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f03:{NFSU2_TR(0x642f03);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L642f27;}}
}
B642f05:L642f05:{c.instructions+=2;NFSU2_TR(0x642f05);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x2dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f08:{NFSU2_TR(0x642f08);
if(r1(R+518)){{goto L642f27;}}
}
B642f0a:L642f0a:{c.instructions+=2;NFSU2_TR(0x642f0a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B642f0c:{NFSU2_TR(0x642f0c);
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
B642f0d:L642f0d:{c.instructions+=5;NFSU2_TR(0x642f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642f0e:{NFSU2_TR(0x642f0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642f0f:{NFSU2_TR(0x642f0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642f10:{NFSU2_TR(0x642f10);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B642f11:{NFSU2_TR(0x642f11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642f14:L642f14:{c.instructions+=2;NFSU2_TR(0x642f14);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x3cull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f17:{NFSU2_TR(0x642f17);
if(r1(R+518)){{goto L642f27;}}
}
B642f19:L642f19:{c.instructions+=3;NFSU2_TR(0x642f19);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B642f1a:{NFSU2_TR(0x642f1a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f1b:{NFSU2_TR(0x642f1b);
if(r1(R+518)){{goto L642f27;}}
}
B642f1d:L642f1d:{c.instructions+=2;NFSU2_TR(0x642f1d);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f20:{NFSU2_TR(0x642f20);
if(r1(R+518)){{goto L642f27;}}
}
B642f22:L642f22:{c.instructions+=2;NFSU2_TR(0x642f22);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1eull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1eull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B642f25:{NFSU2_TR(0x642f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642f0au);}goto L642f0a;}}
}
B642f27:L642f27:{c.instructions+=2;NFSU2_TR(0x642f27);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x3dull));
s1(u32(r4(U+0)),r1(U+4));
}
B642f2b:{NFSU2_TR(0x642f2b);
{goto L642f3a;}
}
B642f2d:L642f2d:{c.instructions+=2;NFSU2_TR(0x642f2d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B642f30:{NFSU2_TR(0x642f30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642f0au);}goto L642f0a;}}
}
B642f32:L642f32:{c.instructions+=2;NFSU2_TR(0x642f32);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x3eull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x3eull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x3eull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B642f35:{NFSU2_TR(0x642f35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642f0au);}goto L642f0a;}}
}
B642f37:L642f37:{c.instructions+=1;NFSU2_TR(0x642f37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B642f3a:L642f3a:{c.instructions+=1;NFSU2_TR(0x642f3a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f3c:L642f3c:{c.instructions+=2;NFSU2_TR(0x642f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B642f3d:{NFSU2_TR(0x642f3d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642f0du);}goto L642f0d;}
}
B642f3f:L642f3f:{c.instructions+=12;NFSU2_TR(0x642f3f);
__builtin_memmove((R+28),(R+28),4);
}
B642f41:{NFSU2_TR(0x642f41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f42:{NFSU2_TR(0x642f42);
__builtin_memmove((R+20),(R+16),4);
}
B642f44:{NFSU2_TR(0x642f44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f45:{NFSU2_TR(0x642f45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f46:{NFSU2_TR(0x642f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B642f49:{NFSU2_TR(0x642f49);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B642f4c:{NFSU2_TR(0x642f4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f4d:{NFSU2_TR(0x642f4d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f4f:{NFSU2_TR(0x642f4f);
__builtin_memmove((R+28),(R+24),4);
}
B642f51:{NFSU2_TR(0x642f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642f52:{NFSU2_TR(0x642f52);
if(r1(R+512)){{goto L642f58;}}
}
B642f54:L642f54:{c.instructions+=2;NFSU2_TR(0x642f54);
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
B642f56:{NFSU2_TR(0x642f56);
{goto L642f82;}
}
B642f58:L642f58:{c.instructions+=3;NFSU2_TR(0x642f58);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642f5b:{NFSU2_TR(0x642f5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f5c:{NFSU2_TR(0x642f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642f61ull));
TAIL_STATIC(0x75ded8u,75d);
}
B642f61:L642f61:{c.instructions+=3;NFSU2_TR(0x642f61);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x66ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B642f64:{NFSU2_TR(0x642f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642f65:{NFSU2_TR(0x642f65);
if(r1(R+518)){{goto L642f6f;}}
}
B642f67:L642f67:{c.instructions+=3;NFSU2_TR(0x642f67);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B642f68:{NFSU2_TR(0x642f68);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B642f69:{NFSU2_TR(0x642f69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642f75;}}
}
B642f6b:L642f6b:{c.instructions+=2;NFSU2_TR(0x642f6b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f6d:{NFSU2_TR(0x642f6d);
{goto L642f71;}
}
B642f6f:L642f6f:{c.instructions+=1;NFSU2_TR(0x642f6f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f71:L642f71:{c.instructions+=2;NFSU2_TR(0x642f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642f72:{NFSU2_TR(0x642f72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642f75:L642f75:{c.instructions+=3;NFSU2_TR(0x642f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642f78:{NFSU2_TR(0x642f78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642f7a:{NFSU2_TR(0x642f7a);
if(r1(R+518)){{goto L642f7e;}}
}
B642f7c:L642f7c:{c.instructions+=1;NFSU2_TR(0x642f7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B642f7e:L642f7e:{c.instructions+=2;NFSU2_TR(0x642f7e);
__builtin_memmove((R+0),(R+28),4);
}
B642f80:{NFSU2_TR(0x642f80);
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
B642f82:L642f82:{c.instructions+=5;NFSU2_TR(0x642f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B642f83:{NFSU2_TR(0x642f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B642f84:{NFSU2_TR(0x642f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B642f85:{NFSU2_TR(0x642f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B642f86:{NFSU2_TR(0x642f86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B642f89:L642f89:{c.instructions+=14;NFSU2_TR(0x642f89);
__builtin_memmove((R+28),(R+28),4);
}
B642f8b:{NFSU2_TR(0x642f8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f8c:{NFSU2_TR(0x642f8c);
__builtin_memmove((R+20),(R+16),4);
}
B642f8e:{NFSU2_TR(0x642f8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f8f:{NFSU2_TR(0x642f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642f93:{NFSU2_TR(0x642f93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f94:{NFSU2_TR(0x642f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B642f97:{NFSU2_TR(0x642f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B642f9b:{NFSU2_TR(0x642f9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642f9c:{NFSU2_TR(0x642f9c);
__builtin_memmove((R+24),(R+4),4);
}
B642f9e:{NFSU2_TR(0x642f9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B642fa1:{NFSU2_TR(0x642fa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642fa2:{NFSU2_TR(0x642fa2);
__builtin_memmove((R+28),(R+12),4);
}
B642fa4:{NFSU2_TR(0x642fa4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L642fe6;}}
}
B642fa6:L642fa6:{c.instructions+=2;NFSU2_TR(0x642fa6);
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
B642faa:{NFSU2_TR(0x642faa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642fc4;}}
}
B642fac:L642fac:{c.instructions+=3;NFSU2_TR(0x642fac);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642faf:{NFSU2_TR(0x642faf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642fb0:{NFSU2_TR(0x642fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642fb5ull));
TAIL_STATIC(0x75ded8u,75d);
}
B642fb5:L642fb5:{c.instructions+=3;NFSU2_TR(0x642fb5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x75ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642fb8:{NFSU2_TR(0x642fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642fb9:{NFSU2_TR(0x642fb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642fc4;}}
}
B642fbb:L642fbb:{c.instructions+=2;NFSU2_TR(0x642fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B642fc2:{NFSU2_TR(0x642fc2);
{goto L642fe0;}
}
B642fc4:L642fc4:{c.instructions+=2;NFSU2_TR(0x642fc4);
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
B642fc8:{NFSU2_TR(0x642fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642fe6;}}
}
B642fca:L642fca:{c.instructions+=3;NFSU2_TR(0x642fca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B642fcd:{NFSU2_TR(0x642fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B642fce:{NFSU2_TR(0x642fce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x642fd3ull));
TAIL_STATIC(0x75ded8u,75d);
}
B642fd3:L642fd3:{c.instructions+=3;NFSU2_TR(0x642fd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B642fd6:{NFSU2_TR(0x642fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B642fd7:{NFSU2_TR(0x642fd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L642fe6;}}
}
B642fd9:L642fd9:{c.instructions+=1;NFSU2_TR(0x642fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B642fe0:L642fe0:{c.instructions+=3;NFSU2_TR(0x642fe0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B642fe1:{NFSU2_TR(0x642fe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B642fe4:{NFSU2_TR(0x642fe4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x642fa6u);}goto L642fa6;}}
}
B642fe6:L642fe6:{c.instructions+=3;NFSU2_TR(0x642fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B642fe9:{NFSU2_TR(0x642fe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B642feb:{NFSU2_TR(0x642feb);
if(r1(R+518)){TAIL_STATIC(0x643007u,643);}
}
B642fed:L642fed:{c.instructions+=2;NFSU2_TR(0x642fed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642ff1:{NFSU2_TR(0x642ff1);
if(r1(R+518)){{goto L642ffb;}}
}
B642ff3:L642ff3:{c.instructions+=2;NFSU2_TR(0x642ff3);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B642ff9:{NFSU2_TR(0x642ff9);
TAIL_STATIC(0x643007u,643);
}
B642ffb:L642ffb:{c.instructions+=2;NFSU2_TR(0x642ffb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B642fff:{NFSU2_TR(0x642fff);
if(r1(R+518)){TAIL_STATIC(0x643007u,643);}
TAIL_STATIC(0x643001u,643);
}
XIT:NFSU2_TR_EXIT(0x642,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
