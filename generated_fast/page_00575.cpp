#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x575,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x575,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_575(u8* __restrict R,Cpu& c);
u32 page_575(Cpu& c){return body_575(c.regs.data(),c);}
__attribute__((noinline)) u32 body_575(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x575000:goto L575000;
case 0x575002:c.instructions+=4;goto B575002;
case 0x575004:c.instructions+=3;goto B575004;
case 0x575005:c.instructions+=2;goto B575005;
case 0x575008:c.instructions+=1;goto B575008;
case 0x57500a:goto L57500a;
case 0x57500b:goto L57500b;
case 0x57500c:c.instructions+=2;goto B57500c;
case 0x57500e:c.instructions+=1;goto B57500e;
case 0x575010:goto L575010;
case 0x575011:c.instructions+=4;goto B575011;
case 0x575012:c.instructions+=3;goto B575012;
case 0x575013:c.instructions+=2;goto B575013;
case 0x575014:c.instructions+=1;goto B575014;
case 0x575020:goto L575020;
case 0x575024:c.instructions+=26;goto B575024;
case 0x575026:c.instructions+=25;goto B575026;
case 0x575029:c.instructions+=24;goto B575029;
case 0x575030:c.instructions+=23;goto B575030;
case 0x575033:c.instructions+=22;goto B575033;
case 0x575036:c.instructions+=21;goto B575036;
case 0x575039:c.instructions+=20;goto B575039;
case 0x57503d:c.instructions+=19;goto B57503d;
case 0x575040:c.instructions+=18;goto B575040;
case 0x575041:c.instructions+=17;goto B575041;
case 0x575044:c.instructions+=16;goto B575044;
case 0x575045:c.instructions+=15;goto B575045;
case 0x575047:c.instructions+=14;goto B575047;
case 0x57504a:c.instructions+=13;goto B57504a;
case 0x57504e:c.instructions+=12;goto B57504e;
case 0x575050:c.instructions+=11;goto B575050;
case 0x575051:c.instructions+=10;goto B575051;
case 0x575054:c.instructions+=9;goto B575054;
case 0x575057:c.instructions+=8;goto B575057;
case 0x57505a:c.instructions+=7;goto B57505a;
case 0x57505d:c.instructions+=6;goto B57505d;
case 0x575060:c.instructions+=5;goto B575060;
case 0x575063:c.instructions+=4;goto B575063;
case 0x575066:c.instructions+=3;goto B575066;
case 0x57506c:c.instructions+=2;goto B57506c;
case 0x57506e:c.instructions+=1;goto B57506e;
case 0x575071:goto L575071;
case 0x575073:goto L575073;
case 0x575075:c.instructions+=1;goto B575075;
case 0x575078:goto L575078;
case 0x57507a:goto L57507a;
case 0x57507b:c.instructions+=4;goto B57507b;
case 0x57507e:c.instructions+=3;goto B57507e;
case 0x57507f:c.instructions+=2;goto B57507f;
case 0x575080:c.instructions+=1;goto B575080;
case 0x575090:goto L575090;
case 0x575091:c.instructions+=12;goto B575091;
case 0x575092:c.instructions+=11;goto B575092;
case 0x575093:c.instructions+=10;goto B575093;
case 0x575094:c.instructions+=9;goto B575094;
case 0x575096:c.instructions+=8;goto B575096;
case 0x575099:c.instructions+=7;goto B575099;
case 0x57509a:c.instructions+=6;goto B57509a;
case 0x57509d:c.instructions+=5;goto B57509d;
case 0x5750a0:c.instructions+=4;goto B5750a0;
case 0x5750a3:c.instructions+=3;goto B5750a3;
case 0x5750a5:c.instructions+=2;goto B5750a5;
case 0x5750a9:c.instructions+=1;goto B5750a9;
case 0x5750ab:goto L5750ab;
case 0x5750b0:goto L5750b0;
case 0x5750b2:c.instructions+=8;goto B5750b2;
case 0x5750b4:c.instructions+=7;goto B5750b4;
case 0x5750b5:c.instructions+=6;goto B5750b5;
case 0x5750b8:c.instructions+=5;goto B5750b8;
case 0x5750ba:c.instructions+=4;goto B5750ba;
case 0x5750bc:c.instructions+=3;goto B5750bc;
case 0x5750bf:c.instructions+=2;goto B5750bf;
case 0x5750c5:c.instructions+=1;goto B5750c5;
case 0x5750c7:goto L5750c7;
case 0x5750cc:goto L5750cc;
case 0x5750ce:c.instructions+=10;goto B5750ce;
case 0x5750cf:c.instructions+=9;goto B5750cf;
case 0x5750d2:c.instructions+=8;goto B5750d2;
case 0x5750d4:c.instructions+=7;goto B5750d4;
case 0x5750d7:c.instructions+=6;goto B5750d7;
case 0x5750d8:c.instructions+=5;goto B5750d8;
case 0x5750da:c.instructions+=4;goto B5750da;
case 0x5750db:c.instructions+=3;goto B5750db;
case 0x5750dd:c.instructions+=2;goto B5750dd;
case 0x5750e2:c.instructions+=1;goto B5750e2;
case 0x5750e7:goto L5750e7;
case 0x5750ea:c.instructions+=3;goto B5750ea;
case 0x5750ed:c.instructions+=2;goto B5750ed;
case 0x5750ef:c.instructions+=1;goto B5750ef;
case 0x5750f1:goto L5750f1;
case 0x5750f5:goto L5750f5;
case 0x5750f8:c.instructions+=3;goto B5750f8;
case 0x5750fa:c.instructions+=2;goto B5750fa;
case 0x5750fc:c.instructions+=1;goto B5750fc;
case 0x5750fe:goto L5750fe;
case 0x575101:goto L575101;
case 0x575107:c.instructions+=5;goto B575107;
case 0x57510a:c.instructions+=4;goto B57510a;
case 0x57510b:c.instructions+=3;goto B57510b;
case 0x57510e:c.instructions+=2;goto B57510e;
case 0x575110:c.instructions+=1;goto B575110;
case 0x575112:goto L575112;
case 0x575115:c.instructions+=3;goto B575115;
case 0x575117:c.instructions+=2;goto B575117;
case 0x575119:c.instructions+=1;goto B575119;
case 0x57511b:goto L57511b;
case 0x57511c:c.instructions+=5;goto B57511c;
case 0x57511d:c.instructions+=4;goto B57511d;
case 0x57511f:c.instructions+=3;goto B57511f;
case 0x575120:c.instructions+=2;goto B575120;
case 0x575122:c.instructions+=1;goto B575122;
case 0x575127:goto L575127;
case 0x57512b:c.instructions+=4;goto B57512b;
case 0x57512c:c.instructions+=3;goto B57512c;
case 0x57512d:c.instructions+=2;goto B57512d;
case 0x57512f:c.instructions+=1;goto B57512f;
case 0x575134:goto L575134;
case 0x575136:c.instructions+=7;goto B575136;
case 0x575137:c.instructions+=6;goto B575137;
case 0x57513a:c.instructions+=5;goto B57513a;
case 0x57513b:c.instructions+=4;goto B57513b;
case 0x57513c:c.instructions+=3;goto B57513c;
case 0x57513d:c.instructions+=2;goto B57513d;
case 0x57513e:c.instructions+=1;goto B57513e;
case 0x575140:goto L575140;
case 0x575141:c.instructions+=3;goto B575141;
case 0x575143:c.instructions+=2;goto B575143;
case 0x575145:c.instructions+=1;goto B575145;
case 0x575147:goto L575147;
case 0x57514a:c.instructions+=4;goto B57514a;
case 0x57514d:c.instructions+=3;goto B57514d;
case 0x575154:c.instructions+=2;goto B575154;
case 0x575156:c.instructions+=1;goto B575156;
case 0x575158:goto L575158;
case 0x57515a:c.instructions+=2;goto B57515a;
case 0x57515b:c.instructions+=1;goto B57515b;
case 0x57515e:goto L57515e;
case 0x575161:c.instructions+=12;goto B575161;
case 0x575165:c.instructions+=11;goto B575165;
case 0x575166:c.instructions+=10;goto B575166;
case 0x57516a:c.instructions+=9;goto B57516a;
case 0x57516b:c.instructions+=8;goto B57516b;
case 0x57516c:c.instructions+=7;goto B57516c;
case 0x57516f:c.instructions+=6;goto B57516f;
case 0x575170:c.instructions+=5;goto B575170;
case 0x575174:c.instructions+=4;goto B575174;
case 0x575177:c.instructions+=3;goto B575177;
case 0x57517a:c.instructions+=2;goto B57517a;
case 0x57517c:c.instructions+=1;goto B57517c;
case 0x57517e:goto L57517e;
case 0x575181:c.instructions+=1;goto B575181;
case 0x575183:goto L575183;
case 0x575185:c.instructions+=7;goto B575185;
case 0x57518a:c.instructions+=6;goto B57518a;
case 0x57518c:c.instructions+=5;goto B57518c;
case 0x575190:c.instructions+=4;goto B575190;
case 0x575193:c.instructions+=3;goto B575193;
case 0x575194:c.instructions+=2;goto B575194;
case 0x575196:c.instructions+=1;goto B575196;
case 0x575198:goto L575198;
case 0x57519b:c.instructions+=2;goto B57519b;
case 0x57519f:c.instructions+=1;goto B57519f;
case 0x5751a1:goto L5751a1;
case 0x5751a4:c.instructions+=7;goto B5751a4;
case 0x5751a8:c.instructions+=6;goto B5751a8;
case 0x5751a9:c.instructions+=5;goto B5751a9;
case 0x5751aa:c.instructions+=4;goto B5751aa;
case 0x5751ab:c.instructions+=3;goto B5751ab;
case 0x5751ad:c.instructions+=2;goto B5751ad;
case 0x5751b0:c.instructions+=1;goto B5751b0;
case 0x5751b5:goto L5751b5;
case 0x5751b7:goto L5751b7;
case 0x5751b9:c.instructions+=5;goto B5751b9;
case 0x5751ba:c.instructions+=4;goto B5751ba;
case 0x5751bd:c.instructions+=3;goto B5751bd;
case 0x5751be:c.instructions+=2;goto B5751be;
case 0x5751c0:c.instructions+=1;goto B5751c0;
case 0x5751c5:goto L5751c5;
case 0x5751c8:c.instructions+=10;goto B5751c8;
case 0x5751cb:c.instructions+=9;goto B5751cb;
case 0x5751ce:c.instructions+=8;goto B5751ce;
case 0x5751d0:c.instructions+=7;goto B5751d0;
case 0x5751d1:c.instructions+=6;goto B5751d1;
case 0x5751d4:c.instructions+=5;goto B5751d4;
case 0x5751d7:c.instructions+=4;goto B5751d7;
case 0x5751d9:c.instructions+=3;goto B5751d9;
case 0x5751da:c.instructions+=2;goto B5751da;
case 0x5751dc:c.instructions+=1;goto B5751dc;
case 0x5751e1:goto L5751e1;
case 0x5751e3:c.instructions+=10;goto B5751e3;
case 0x5751ea:c.instructions+=9;goto B5751ea;
case 0x5751ed:c.instructions+=8;goto B5751ed;
case 0x5751f1:c.instructions+=7;goto B5751f1;
case 0x5751f2:c.instructions+=6;goto B5751f2;
case 0x5751f5:c.instructions+=5;goto B5751f5;
case 0x5751f8:c.instructions+=4;goto B5751f8;
case 0x5751f9:c.instructions+=3;goto B5751f9;
case 0x5751fa:c.instructions+=2;goto B5751fa;
case 0x5751fc:c.instructions+=1;goto B5751fc;
case 0x575201:goto L575201;
case 0x575204:c.instructions+=1;goto B575204;
case 0x575207:goto L575207;
case 0x57520a:c.instructions+=5;goto B57520a;
case 0x57520c:c.instructions+=4;goto B57520c;
case 0x57520d:c.instructions+=3;goto B57520d;
case 0x57520e:c.instructions+=2;goto B57520e;
case 0x57520f:c.instructions+=1;goto B57520f;
case 0x575211:goto L575211;
case 0x575214:c.instructions+=5;goto B575214;
case 0x575215:c.instructions+=4;goto B575215;
case 0x575217:c.instructions+=3;goto B575217;
case 0x57521a:c.instructions+=2;goto B57521a;
case 0x57521d:c.instructions+=1;goto B57521d;
case 0x57521f:goto L57521f;
case 0x575221:c.instructions+=6;goto B575221;
case 0x575225:c.instructions+=5;goto B575225;
case 0x575226:c.instructions+=4;goto B575226;
case 0x575228:c.instructions+=3;goto B575228;
case 0x57522d:c.instructions+=2;goto B57522d;
case 0x575231:c.instructions+=1;goto B575231;
case 0x575236:goto L575236;
case 0x575239:goto L575239;
case 0x57523c:c.instructions+=4;goto B57523c;
case 0x57523f:c.instructions+=3;goto B57523f;
case 0x575246:c.instructions+=2;goto B575246;
case 0x575248:c.instructions+=1;goto B575248;
case 0x57524a:goto L57524a;
case 0x57524d:c.instructions+=2;goto B57524d;
case 0x57524f:c.instructions+=1;goto B57524f;
case 0x575251:goto L575251;
case 0x575253:c.instructions+=1;goto B575253;
case 0x575258:goto L575258;
case 0x57525d:c.instructions+=2;goto B57525d;
case 0x57525e:c.instructions+=1;goto B57525e;
case 0x575270:goto L575270;
case 0x575271:c.instructions+=10;goto B575271;
case 0x575272:c.instructions+=9;goto B575272;
case 0x575276:c.instructions+=8;goto B575276;
case 0x575277:c.instructions+=7;goto B575277;
case 0x57527b:c.instructions+=6;goto B57527b;
case 0x57527d:c.instructions+=5;goto B57527d;
case 0x57527e:c.instructions+=4;goto B57527e;
case 0x575282:c.instructions+=3;goto B575282;
case 0x575285:c.instructions+=2;goto B575285;
case 0x575287:c.instructions+=1;goto B575287;
case 0x575289:goto L575289;
case 0x57528b:c.instructions+=5;goto B57528b;
case 0x57528e:c.instructions+=4;goto B57528e;
case 0x57528f:c.instructions+=3;goto B57528f;
case 0x575290:c.instructions+=2;goto B575290;
case 0x575292:c.instructions+=1;goto B575292;
case 0x575297:goto L575297;
case 0x575299:c.instructions+=1;goto B575299;
case 0x57529b:goto L57529b;
case 0x57529e:c.instructions+=10;goto B57529e;
case 0x57529f:c.instructions+=9;goto B57529f;
case 0x5752a2:c.instructions+=8;goto B5752a2;
case 0x5752a5:c.instructions+=7;goto B5752a5;
case 0x5752a6:c.instructions+=6;goto B5752a6;
case 0x5752a7:c.instructions+=5;goto B5752a7;
case 0x5752aa:c.instructions+=4;goto B5752aa;
case 0x5752ab:c.instructions+=3;goto B5752ab;
case 0x5752ac:c.instructions+=2;goto B5752ac;
case 0x5752ad:c.instructions+=1;goto B5752ad;
case 0x5752b0:goto L5752b0;
case 0x5752b3:c.instructions+=2;goto B5752b3;
case 0x5752b6:c.instructions+=1;goto B5752b6;
case 0x5752b8:goto L5752b8;
case 0x5752bb:c.instructions+=9;goto B5752bb;
case 0x5752be:c.instructions+=8;goto B5752be;
case 0x5752bf:c.instructions+=7;goto B5752bf;
case 0x5752c0:c.instructions+=6;goto B5752c0;
case 0x5752c7:c.instructions+=5;goto B5752c7;
case 0x5752ca:c.instructions+=4;goto B5752ca;
case 0x5752cb:c.instructions+=3;goto B5752cb;
case 0x5752cc:c.instructions+=2;goto B5752cc;
case 0x5752cd:c.instructions+=1;goto B5752cd;
case 0x5752d0:goto L5752d0;
case 0x5752d3:c.instructions+=4;goto B5752d3;
case 0x5752d5:c.instructions+=3;goto B5752d5;
case 0x5752d6:c.instructions+=2;goto B5752d6;
case 0x5752d8:c.instructions+=1;goto B5752d8;
case 0x5752dd:goto L5752dd;
case 0x5752df:c.instructions+=3;goto B5752df;
case 0x5752e2:c.instructions+=2;goto B5752e2;
case 0x5752e5:c.instructions+=1;goto B5752e5;
case 0x5752e7:goto L5752e7;
case 0x5752e9:c.instructions+=11;goto B5752e9;
case 0x5752ed:c.instructions+=10;goto B5752ed;
case 0x5752f0:c.instructions+=9;goto B5752f0;
case 0x5752f7:c.instructions+=8;goto B5752f7;
case 0x5752fa:c.instructions+=7;goto B5752fa;
case 0x5752fc:c.instructions+=6;goto B5752fc;
case 0x5752fe:c.instructions+=5;goto B5752fe;
case 0x5752ff:c.instructions+=4;goto B5752ff;
case 0x575302:c.instructions+=3;goto B575302;
case 0x575303:c.instructions+=2;goto B575303;
case 0x575305:c.instructions+=1;goto B575305;
case 0x57530a:goto L57530a;
case 0x57530d:c.instructions+=9;goto B57530d;
case 0x575310:c.instructions+=8;goto B575310;
case 0x575313:c.instructions+=7;goto B575313;
case 0x575314:c.instructions+=6;goto B575314;
case 0x575315:c.instructions+=5;goto B575315;
case 0x575318:c.instructions+=4;goto B575318;
case 0x575319:c.instructions+=3;goto B575319;
case 0x57531a:c.instructions+=2;goto B57531a;
case 0x57531b:c.instructions+=1;goto B57531b;
case 0x575320:goto L575320;
case 0x575330:goto L575330;
case 0x575336:c.instructions+=6;goto B575336;
case 0x575337:c.instructions+=5;goto B575337;
case 0x57533e:c.instructions+=4;goto B57533e;
case 0x57533f:c.instructions+=3;goto B57533f;
case 0x575340:c.instructions+=2;goto B575340;
case 0x575342:c.instructions+=1;goto B575342;
case 0x575347:goto L575347;
case 0x57534a:c.instructions+=2;goto B57534a;
case 0x57534c:c.instructions+=1;goto B57534c;
case 0x57534e:goto L57534e;
case 0x57534f:c.instructions+=3;goto B57534f;
case 0x575351:c.instructions+=2;goto B575351;
case 0x575355:c.instructions+=1;goto B575355;
case 0x575357:goto L575357;
case 0x57535a:c.instructions+=3;goto B57535a;
case 0x57535e:c.instructions+=2;goto B57535e;
case 0x575360:c.instructions+=1;goto B575360;
case 0x575362:goto L575362;
case 0x575364:c.instructions+=1;goto B575364;
case 0x575366:goto L575366;
case 0x575368:goto L575368;
case 0x57536a:c.instructions+=1;goto B57536a;
case 0x57536c:goto L57536c;
case 0x57536e:goto L57536e;
case 0x575372:c.instructions+=3;goto B575372;
case 0x575373:c.instructions+=2;goto B575373;
case 0x575374:c.instructions+=1;goto B575374;
case 0x575379:goto L575379;
case 0x57537c:c.instructions+=2;goto B57537c;
case 0x57537e:c.instructions+=1;goto B57537e;
case 0x575380:goto L575380;
case 0x575381:goto L575381;
case 0x575385:c.instructions+=3;goto B575385;
case 0x575386:c.instructions+=2;goto B575386;
case 0x57538b:c.instructions+=1;goto B57538b;
case 0x575390:goto L575390;
case 0x575393:c.instructions+=4;goto B575393;
case 0x575394:c.instructions+=3;goto B575394;
case 0x575395:c.instructions+=2;goto B575395;
case 0x57539b:c.instructions+=1;goto B57539b;
case 0x5753a0:goto L5753a0;
case 0x5753a4:c.instructions+=4;goto B5753a4;
case 0x5753aa:c.instructions+=3;goto B5753aa;
case 0x5753ab:c.instructions+=2;goto B5753ab;
case 0x5753ac:c.instructions+=1;goto B5753ac;
case 0x5753b1:goto L5753b1;
case 0x5753b4:c.instructions+=1;goto B5753b4;
case 0x5753c0:goto L5753c0;
case 0x5753c1:c.instructions+=5;goto B5753c1;
case 0x5753c3:c.instructions+=4;goto B5753c3;
case 0x5753c4:c.instructions+=3;goto B5753c4;
case 0x5753c6:c.instructions+=2;goto B5753c6;
case 0x5753cb:c.instructions+=1;goto B5753cb;
case 0x5753cd:goto L5753cd;
case 0x5753cf:goto L5753cf;
case 0x5753d3:c.instructions+=4;goto B5753d3;
case 0x5753d5:c.instructions+=3;goto B5753d5;
case 0x5753d6:c.instructions+=2;goto B5753d6;
case 0x5753d7:c.instructions+=1;goto B5753d7;
case 0x5753dc:goto L5753dc;
case 0x5753e0:c.instructions+=20;goto B5753e0;
case 0x5753e2:c.instructions+=19;goto B5753e2;
case 0x5753e8:c.instructions+=18;goto B5753e8;
case 0x5753eb:c.instructions+=17;goto B5753eb;
case 0x5753f1:c.instructions+=16;goto B5753f1;
case 0x5753f4:c.instructions+=15;goto B5753f4;
case 0x5753fa:c.instructions+=14;goto B5753fa;
case 0x5753fd:c.instructions+=13;goto B5753fd;
case 0x575403:c.instructions+=12;goto B575403;
case 0x575406:c.instructions+=11;goto B575406;
case 0x575407:c.instructions+=10;goto B575407;
case 0x57540d:c.instructions+=9;goto B57540d;
case 0x57540f:c.instructions+=8;goto B57540f;
case 0x575412:c.instructions+=7;goto B575412;
case 0x575418:c.instructions+=6;goto B575418;
case 0x57541e:c.instructions+=5;goto B57541e;
case 0x57541f:c.instructions+=4;goto B57541f;
case 0x575425:c.instructions+=3;goto B575425;
case 0x575427:c.instructions+=2;goto B575427;
case 0x575428:c.instructions+=1;goto B575428;
case 0x575430:goto L575430;
case 0x575432:c.instructions+=4;goto B575432;
case 0x575438:c.instructions+=3;goto B575438;
case 0x57543e:c.instructions+=2;goto B57543e;
case 0x575440:c.instructions+=1;goto B575440;
case 0x575450:goto L575450;
case 0x575454:c.instructions+=4;goto B575454;
case 0x57545a:c.instructions+=3;goto B57545a;
case 0x57545b:c.instructions+=2;goto B57545b;
case 0x57545c:c.instructions+=1;goto B57545c;
case 0x575461:goto L575461;
case 0x575464:c.instructions+=1;goto B575464;
case 0x575470:goto L575470;
case 0x575474:c.instructions+=3;goto B575474;
case 0x575478:c.instructions+=2;goto B575478;
case 0x57547e:c.instructions+=1;goto B57547e;
case 0x575480:goto L575480;
case 0x575484:c.instructions+=1;goto B575484;
case 0x575486:goto L575486;
case 0x57548c:c.instructions+=1;goto B57548c;
case 0x57548e:goto L57548e;
case 0x575494:c.instructions+=1;goto B575494;
case 0x57549a:goto L57549a;
case 0x5754a0:c.instructions+=2;goto B5754a0;
case 0x5754a6:c.instructions+=1;goto B5754a6;
case 0x5754b0:goto L5754b0;
case 0x5754b4:c.instructions+=3;goto B5754b4;
case 0x5754ba:c.instructions+=2;goto B5754ba;
case 0x5754c0:c.instructions+=1;goto B5754c0;
case 0x5754d0:goto L5754d0;
case 0x5754d4:c.instructions+=3;goto B5754d4;
case 0x5754da:c.instructions+=2;goto B5754da;
case 0x5754e0:c.instructions+=1;goto B5754e0;
case 0x5754f0:goto L5754f0;
case 0x5754f1:c.instructions+=6;goto B5754f1;
case 0x5754f2:c.instructions+=5;goto B5754f2;
case 0x5754f4:c.instructions+=4;goto B5754f4;
case 0x5754f7:c.instructions+=3;goto B5754f7;
case 0x5754f9:c.instructions+=2;goto B5754f9;
case 0x5754fd:c.instructions+=1;goto B5754fd;
case 0x5754ff:goto L5754ff;
case 0x575501:c.instructions+=3;goto B575501;
case 0x575502:c.instructions+=2;goto B575502;
case 0x575503:c.instructions+=1;goto B575503;
case 0x575506:goto L575506;
case 0x57550a:c.instructions+=5;goto B57550a;
case 0x57550b:c.instructions+=4;goto B57550b;
case 0x57550c:c.instructions+=3;goto B57550c;
case 0x57550d:c.instructions+=2;goto B57550d;
case 0x57550e:c.instructions+=1;goto B57550e;
case 0x575513:goto L575513;
case 0x575516:c.instructions+=3;goto B575516;
case 0x575519:c.instructions+=2;goto B575519;
case 0x57551b:c.instructions+=1;goto B57551b;
case 0x57551d:goto L57551d;
case 0x57551f:c.instructions+=2;goto B57551f;
case 0x575521:c.instructions+=1;goto B575521;
case 0x575523:goto L575523;
case 0x575526:c.instructions+=2;goto B575526;
case 0x57552a:c.instructions+=1;goto B57552a;
case 0x575530:goto L575530;
case 0x575533:c.instructions+=6;goto B575533;
case 0x575535:c.instructions+=5;goto B575535;
case 0x575538:c.instructions+=4;goto B575538;
case 0x57553c:c.instructions+=3;goto B57553c;
case 0x57553e:c.instructions+=2;goto B57553e;
case 0x575542:c.instructions+=1;goto B575542;
case 0x575544:goto L575544;
case 0x575546:c.instructions+=1;goto B575546;
case 0x575548:goto L575548;
case 0x57554b:c.instructions+=1;goto B57554b;
case 0x57554d:goto L57554d;
case 0x57554f:goto L57554f;
case 0x575551:goto L575551;
case 0x575554:c.instructions+=1;goto B575554;
case 0x575556:goto L575556;
case 0x575559:goto L575559;
case 0x57555b:c.instructions+=1;goto B57555b;
case 0x57555d:goto L57555d;
case 0x57555e:c.instructions+=6;goto B57555e;
case 0x57555f:c.instructions+=5;goto B57555f;
case 0x575560:c.instructions+=4;goto B575560;
case 0x575562:c.instructions+=3;goto B575562;
case 0x575563:c.instructions+=2;goto B575563;
case 0x575564:c.instructions+=1;goto B575564;
case 0x575567:goto L575567;
case 0x575569:c.instructions+=2;goto B575569;
case 0x57556b:c.instructions+=1;goto B57556b;
case 0x57556d:goto L57556d;
case 0x57556e:c.instructions+=6;goto B57556e;
case 0x57556f:c.instructions+=5;goto B57556f;
case 0x575570:c.instructions+=4;goto B575570;
case 0x575572:c.instructions+=3;goto B575572;
case 0x575573:c.instructions+=2;goto B575573;
case 0x575574:c.instructions+=1;goto B575574;
case 0x575577:goto L575577;
case 0x575579:c.instructions+=5;goto B575579;
case 0x57557c:c.instructions+=4;goto B57557c;
case 0x575580:c.instructions+=3;goto B575580;
case 0x575582:c.instructions+=2;goto B575582;
case 0x575587:c.instructions+=1;goto B575587;
case 0x575589:goto L575589;
case 0x57558d:c.instructions+=2;goto B57558d;
case 0x575593:c.instructions+=1;goto B575593;
case 0x575595:goto L575595;
case 0x575598:c.instructions+=2;goto B575598;
case 0x57559a:c.instructions+=1;goto B57559a;
case 0x57559c:goto L57559c;
case 0x57559e:goto L57559e;
case 0x5755a0:c.instructions+=1;goto B5755a0;
case 0x5755a2:goto L5755a2;
case 0x5755a4:c.instructions+=1;goto B5755a4;
case 0x5755a6:goto L5755a6;
case 0x5755a9:c.instructions+=4;goto B5755a9;
case 0x5755aa:c.instructions+=3;goto B5755aa;
case 0x5755ac:c.instructions+=2;goto B5755ac;
case 0x5755ae:c.instructions+=1;goto B5755ae;
case 0x5755b0:goto L5755b0;
case 0x5755b4:goto L5755b4;
case 0x5755b7:c.instructions+=7;goto B5755b7;
case 0x5755b8:c.instructions+=6;goto B5755b8;
case 0x5755bc:c.instructions+=5;goto B5755bc;
case 0x5755bd:c.instructions+=4;goto B5755bd;
case 0x5755be:c.instructions+=3;goto B5755be;
case 0x5755bf:c.instructions+=2;goto B5755bf;
case 0x5755c0:c.instructions+=1;goto B5755c0;
case 0x5755d0:goto L5755d0;
case 0x5755d4:c.instructions+=2;goto B5755d4;
case 0x5755d5:c.instructions+=1;goto B5755d5;
case 0x5755da:goto L5755da;
case 0x5755db:c.instructions+=1;goto B5755db;
case 0x5755e0:goto L5755e0;
case 0x5755e4:c.instructions+=2;goto B5755e4;
case 0x5755e6:c.instructions+=1;goto B5755e6;
case 0x5755e8:goto L5755e8;
case 0x5755eb:c.instructions+=2;goto B5755eb;
case 0x5755ed:c.instructions+=1;goto B5755ed;
case 0x5755ef:goto L5755ef;
case 0x5755f1:goto L5755f1;
case 0x575600:goto L575600;
case 0x575604:c.instructions+=2;goto B575604;
case 0x575606:c.instructions+=1;goto B575606;
case 0x575608:goto L575608;
case 0x57560b:c.instructions+=2;goto B57560b;
case 0x57560d:c.instructions+=1;goto B57560d;
case 0x57560f:goto L57560f;
case 0x575612:c.instructions+=1;goto B575612;
case 0x575613:goto L575613;
case 0x575615:c.instructions+=1;goto B575615;
case 0x575620:goto L575620;
case 0x575630:goto L575630;
case 0x575640:goto L575640;
case 0x575642:c.instructions+=3;goto B575642;
case 0x575645:c.instructions+=2;goto B575645;
case 0x575646:c.instructions+=1;goto B575646;
case 0x57564c:goto L57564c;
case 0x575653:goto L575653;
case 0x575657:c.instructions+=6;goto B575657;
case 0x575659:c.instructions+=5;goto B575659;
case 0x57565c:c.instructions+=4;goto B57565c;
case 0x57565e:c.instructions+=3;goto B57565e;
case 0x575661:c.instructions+=2;goto B575661;
case 0x575662:c.instructions+=1;goto B575662;
case 0x575665:goto L575665;
case 0x575669:c.instructions+=6;goto B575669;
case 0x57566c:c.instructions+=5;goto B57566c;
case 0x57566f:c.instructions+=4;goto B57566f;
case 0x575672:c.instructions+=3;goto B575672;
case 0x575675:c.instructions+=2;goto B575675;
case 0x575676:c.instructions+=1;goto B575676;
case 0x575679:goto L575679;
case 0x57567d:c.instructions+=6;goto B57567d;
case 0x57567f:c.instructions+=5;goto B57567f;
case 0x575682:c.instructions+=4;goto B575682;
case 0x575684:c.instructions+=3;goto B575684;
case 0x575687:c.instructions+=2;goto B575687;
case 0x575688:c.instructions+=1;goto B575688;
case 0x57568b:goto L57568b;
case 0x57568f:c.instructions+=4;goto B57568f;
case 0x575691:c.instructions+=3;goto B575691;
case 0x575692:c.instructions+=2;goto B575692;
case 0x575694:c.instructions+=1;goto B575694;
case 0x575697:goto L575697;
case 0x57569a:c.instructions+=3;goto B57569a;
case 0x57569d:c.instructions+=2;goto B57569d;
case 0x57569e:c.instructions+=1;goto B57569e;
case 0x5756a1:goto L5756a1;
case 0x5756a5:c.instructions+=4;goto B5756a5;
case 0x5756a7:c.instructions+=3;goto B5756a7;
case 0x5756a8:c.instructions+=2;goto B5756a8;
case 0x5756aa:c.instructions+=1;goto B5756aa;
case 0x5756ad:goto L5756ad;
case 0x5756af:c.instructions+=4;goto B5756af;
case 0x5756b2:c.instructions+=3;goto B5756b2;
case 0x5756b5:c.instructions+=2;goto B5756b5;
case 0x5756b6:c.instructions+=1;goto B5756b6;
case 0x5756b9:goto L5756b9;
case 0x5756bc:c.instructions+=3;goto B5756bc;
case 0x5756bf:c.instructions+=2;goto B5756bf;
case 0x5756c3:c.instructions+=1;goto B5756c3;
case 0x5756c5:goto L5756c5;
case 0x5756c6:c.instructions+=2;goto B5756c6;
case 0x5756c8:c.instructions+=1;goto B5756c8;
case 0x5756cd:goto L5756cd;
case 0x5756d0:c.instructions+=3;goto B5756d0;
case 0x5756d3:c.instructions+=2;goto B5756d3;
case 0x5756d6:c.instructions+=1;goto B5756d6;
case 0x5756d8:goto L5756d8;
case 0x5756d9:c.instructions+=1;goto B5756d9;
case 0x5756dc:goto L5756dc;
case 0x5756e0:goto L5756e0;
case 0x5756e1:c.instructions+=1;goto B5756e1;
case 0x5756e4:goto L5756e4;
case 0x5756e5:c.instructions+=16;goto B5756e5;
case 0x5756e6:c.instructions+=15;goto B5756e6;
case 0x5756e7:c.instructions+=14;goto B5756e7;
case 0x5756ea:c.instructions+=13;goto B5756ea;
case 0x5756eb:c.instructions+=12;goto B5756eb;
case 0x5756ee:c.instructions+=11;goto B5756ee;
case 0x5756ef:c.instructions+=10;goto B5756ef;
case 0x5756f2:c.instructions+=9;goto B5756f2;
case 0x5756f3:c.instructions+=8;goto B5756f3;
case 0x5756f9:c.instructions+=7;goto B5756f9;
case 0x5756fa:c.instructions+=6;goto B5756fa;
case 0x5756fb:c.instructions+=5;goto B5756fb;
case 0x575701:c.instructions+=4;goto B575701;
case 0x575703:c.instructions+=3;goto B575703;
case 0x575706:c.instructions+=2;goto B575706;
case 0x57570a:c.instructions+=1;goto B57570a;
case 0x57570c:goto L57570c;
case 0x575710:goto L575710;
case 0x575711:c.instructions+=2;goto B575711;
case 0x575713:c.instructions+=1;goto B575713;
case 0x575718:goto L575718;
case 0x57571b:c.instructions+=3;goto B57571b;
case 0x57571e:c.instructions+=2;goto B57571e;
case 0x575721:c.instructions+=1;goto B575721;
case 0x575723:goto L575723;
case 0x575724:c.instructions+=1;goto B575724;
case 0x575730:goto L575730;
case 0x575736:c.instructions+=2;goto B575736;
case 0x575738:c.instructions+=1;goto B575738;
case 0x57573a:goto L57573a;
case 0x57573d:c.instructions+=4;goto B57573d;
case 0x57573f:c.instructions+=3;goto B57573f;
case 0x575740:c.instructions+=2;goto B575740;
case 0x575743:c.instructions+=1;goto B575743;
case 0x575745:goto L575745;
case 0x575748:c.instructions+=1;goto B575748;
case 0x57574a:goto L57574a;
case 0x57574d:c.instructions+=3;goto B57574d;
case 0x57574e:c.instructions+=2;goto B57574e;
case 0x575755:c.instructions+=1;goto B575755;
case 0x57575a:goto L57575a;
case 0x575760:c.instructions+=1;goto B575760;
case 0x575761:goto L575761;
case 0x575770:goto L575770;
case 0x575772:c.instructions+=22;goto B575772;
case 0x575777:c.instructions+=21;goto B575777;
case 0x57577d:c.instructions+=20;goto B57577d;
case 0x57577e:c.instructions+=19;goto B57577e;
case 0x575785:c.instructions+=18;goto B575785;
case 0x575786:c.instructions+=17;goto B575786;
case 0x57578b:c.instructions+=16;goto B57578b;
case 0x57578c:c.instructions+=15;goto B57578c;
case 0x57578e:c.instructions+=14;goto B57578e;
case 0x575790:c.instructions+=13;goto B575790;
case 0x575791:c.instructions+=12;goto B575791;
case 0x575792:c.instructions+=11;goto B575792;
case 0x575794:c.instructions+=10;goto B575794;
case 0x575795:c.instructions+=9;goto B575795;
case 0x57579b:c.instructions+=8;goto B57579b;
case 0x57579e:c.instructions+=7;goto B57579e;
case 0x5757a1:c.instructions+=6;goto B5757a1;
case 0x5757a4:c.instructions+=5;goto B5757a4;
case 0x5757a7:c.instructions+=4;goto B5757a7;
case 0x5757aa:c.instructions+=3;goto B5757aa;
case 0x5757ad:c.instructions+=2;goto B5757ad;
case 0x5757b0:c.instructions+=1;goto B5757b0;
case 0x5757b6:goto L5757b6;
case 0x5757bd:c.instructions+=3;goto B5757bd;
case 0x5757c2:c.instructions+=2;goto B5757c2;
case 0x5757c6:c.instructions+=1;goto B5757c6;
case 0x5757cb:goto L5757cb;
case 0x5757d1:c.instructions+=21;goto B5757d1;
case 0x5757d7:c.instructions+=20;goto B5757d7;
case 0x5757dc:c.instructions+=19;goto B5757dc;
case 0x5757e1:c.instructions+=18;goto B5757e1;
case 0x5757e6:c.instructions+=17;goto B5757e6;
case 0x5757e8:c.instructions+=16;goto B5757e8;
case 0x5757ed:c.instructions+=15;goto B5757ed;
case 0x5757f2:c.instructions+=14;goto B5757f2;
case 0x5757f7:c.instructions+=13;goto B5757f7;
case 0x5757fc:c.instructions+=12;goto B5757fc;
case 0x575801:c.instructions+=11;goto B575801;
case 0x575806:c.instructions+=10;goto B575806;
case 0x57580c:c.instructions+=9;goto B57580c;
case 0x575812:c.instructions+=8;goto B575812;
case 0x575818:c.instructions+=7;goto B575818;
case 0x57581f:c.instructions+=6;goto B57581f;
case 0x575826:c.instructions+=5;goto B575826;
case 0x57582c:c.instructions+=4;goto B57582c;
case 0x575832:c.instructions+=3;goto B575832;
case 0x575837:c.instructions+=2;goto B575837;
case 0x57583d:c.instructions+=1;goto B57583d;
case 0x575842:goto L575842;
case 0x575848:c.instructions+=22;goto B575848;
case 0x57584e:c.instructions+=21;goto B57584e;
case 0x575854:c.instructions+=20;goto B575854;
case 0x575856:c.instructions+=19;goto B575856;
case 0x57585c:c.instructions+=18;goto B57585c;
case 0x575862:c.instructions+=17;goto B575862;
case 0x575868:c.instructions+=16;goto B575868;
case 0x57586e:c.instructions+=15;goto B57586e;
case 0x575874:c.instructions+=14;goto B575874;
case 0x575879:c.instructions+=13;goto B575879;
case 0x57587e:c.instructions+=12;goto B57587e;
case 0x575885:c.instructions+=11;goto B575885;
case 0x57588a:c.instructions+=10;goto B57588a;
case 0x575890:c.instructions+=9;goto B575890;
case 0x575896:c.instructions+=8;goto B575896;
case 0x57589c:c.instructions+=7;goto B57589c;
case 0x5758a3:c.instructions+=6;goto B5758a3;
case 0x5758aa:c.instructions+=5;goto B5758aa;
case 0x5758b0:c.instructions+=4;goto B5758b0;
case 0x5758b5:c.instructions+=3;goto B5758b5;
case 0x5758bb:c.instructions+=2;goto B5758bb;
case 0x5758c1:c.instructions+=1;goto B5758c1;
case 0x5758c6:goto L5758c6;
case 0x5758cc:c.instructions+=23;goto B5758cc;
case 0x5758d2:c.instructions+=22;goto B5758d2;
case 0x5758d8:c.instructions+=21;goto B5758d8;
case 0x5758da:c.instructions+=20;goto B5758da;
case 0x5758df:c.instructions+=19;goto B5758df;
case 0x5758e4:c.instructions+=18;goto B5758e4;
case 0x5758ea:c.instructions+=17;goto B5758ea;
case 0x5758f0:c.instructions+=16;goto B5758f0;
case 0x5758f6:c.instructions+=15;goto B5758f6;
case 0x5758fc:c.instructions+=14;goto B5758fc;
case 0x575901:c.instructions+=13;goto B575901;
case 0x575907:c.instructions+=12;goto B575907;
case 0x57590d:c.instructions+=11;goto B57590d;
case 0x575912:c.instructions+=10;goto B575912;
case 0x575918:c.instructions+=9;goto B575918;
case 0x57591e:c.instructions+=8;goto B57591e;
case 0x575924:c.instructions+=7;goto B575924;
case 0x57592b:c.instructions+=6;goto B57592b;
case 0x575932:c.instructions+=5;goto B575932;
case 0x575938:c.instructions+=4;goto B575938;
case 0x57593e:c.instructions+=3;goto B57593e;
case 0x575945:c.instructions+=2;goto B575945;
case 0x57594b:c.instructions+=1;goto B57594b;
case 0x575950:goto L575950;
case 0x575955:c.instructions+=23;goto B575955;
case 0x57595b:c.instructions+=22;goto B57595b;
case 0x575961:c.instructions+=21;goto B575961;
case 0x575967:c.instructions+=20;goto B575967;
case 0x57596e:c.instructions+=19;goto B57596e;
case 0x575973:c.instructions+=18;goto B575973;
case 0x575979:c.instructions+=17;goto B575979;
case 0x57597f:c.instructions+=16;goto B57597f;
case 0x575984:c.instructions+=15;goto B575984;
case 0x575986:c.instructions+=14;goto B575986;
case 0x57598b:c.instructions+=13;goto B57598b;
case 0x575990:c.instructions+=12;goto B575990;
case 0x575995:c.instructions+=11;goto B575995;
case 0x57599a:c.instructions+=10;goto B57599a;
case 0x5759a0:c.instructions+=9;goto B5759a0;
case 0x5759a6:c.instructions+=8;goto B5759a6;
case 0x5759ac:c.instructions+=7;goto B5759ac;
case 0x5759b1:c.instructions+=6;goto B5759b1;
case 0x5759b8:c.instructions+=5;goto B5759b8;
case 0x5759be:c.instructions+=4;goto B5759be;
case 0x5759c4:c.instructions+=3;goto B5759c4;
case 0x5759c9:c.instructions+=2;goto B5759c9;
case 0x5759cf:c.instructions+=1;goto B5759cf;
case 0x5759d4:goto L5759d4;
case 0x5759da:c.instructions+=21;goto B5759da;
case 0x5759e0:c.instructions+=20;goto B5759e0;
case 0x5759e6:c.instructions+=19;goto B5759e6;
case 0x5759e8:c.instructions+=18;goto B5759e8;
case 0x5759ee:c.instructions+=17;goto B5759ee;
case 0x5759f4:c.instructions+=16;goto B5759f4;
case 0x5759f9:c.instructions+=15;goto B5759f9;
case 0x5759fe:c.instructions+=14;goto B5759fe;
case 0x575a04:c.instructions+=13;goto B575a04;
case 0x575a0a:c.instructions+=12;goto B575a0a;
case 0x575a10:c.instructions+=11;goto B575a10;
case 0x575a15:c.instructions+=10;goto B575a15;
case 0x575a1b:c.instructions+=9;goto B575a1b;
case 0x575a21:c.instructions+=8;goto B575a21;
case 0x575a27:c.instructions+=7;goto B575a27;
case 0x575a2e:c.instructions+=6;goto B575a2e;
case 0x575a35:c.instructions+=5;goto B575a35;
case 0x575a3a:c.instructions+=4;goto B575a3a;
case 0x575a40:c.instructions+=3;goto B575a40;
case 0x575a46:c.instructions+=2;goto B575a46;
case 0x575a4c:c.instructions+=1;goto B575a4c;
case 0x575a51:goto L575a51;
case 0x575a58:c.instructions+=14;goto B575a58;
case 0x575a5e:c.instructions+=13;goto B575a5e;
case 0x575a63:c.instructions+=12;goto B575a63;
case 0x575a68:c.instructions+=11;goto B575a68;
case 0x575a6d:c.instructions+=10;goto B575a6d;
case 0x575a74:c.instructions+=9;goto B575a74;
case 0x575a7a:c.instructions+=8;goto B575a7a;
case 0x575a80:c.instructions+=7;goto B575a80;
case 0x575a86:c.instructions+=6;goto B575a86;
case 0x575a8d:c.instructions+=5;goto B575a8d;
case 0x575a94:c.instructions+=4;goto B575a94;
case 0x575a9a:c.instructions+=3;goto B575a9a;
case 0x575a9c:c.instructions+=2;goto B575a9c;
case 0x575a9e:c.instructions+=1;goto B575a9e;
case 0x575aa3:goto L575aa3;
case 0x575aa5:goto L575aa5;
case 0x575aa6:c.instructions+=3;goto B575aa6;
case 0x575aab:c.instructions+=2;goto B575aab;
case 0x575ab1:c.instructions+=1;goto B575ab1;
case 0x575ab6:goto L575ab6;
case 0x575abc:c.instructions+=21;goto B575abc;
case 0x575ac3:c.instructions+=20;goto B575ac3;
case 0x575ac8:c.instructions+=19;goto B575ac8;
case 0x575acd:c.instructions+=18;goto B575acd;
case 0x575ad2:c.instructions+=17;goto B575ad2;
case 0x575ad4:c.instructions+=16;goto B575ad4;
case 0x575ad9:c.instructions+=15;goto B575ad9;
case 0x575ade:c.instructions+=14;goto B575ade;
case 0x575ae3:c.instructions+=13;goto B575ae3;
case 0x575ae8:c.instructions+=12;goto B575ae8;
case 0x575aed:c.instructions+=11;goto B575aed;
case 0x575af3:c.instructions+=10;goto B575af3;
case 0x575af9:c.instructions+=9;goto B575af9;
case 0x575aff:c.instructions+=8;goto B575aff;
case 0x575b06:c.instructions+=7;goto B575b06;
case 0x575b0d:c.instructions+=6;goto B575b0d;
case 0x575b13:c.instructions+=5;goto B575b13;
case 0x575b1a:c.instructions+=4;goto B575b1a;
case 0x575b20:c.instructions+=3;goto B575b20;
case 0x575b26:c.instructions+=2;goto B575b26;
case 0x575b2b:c.instructions+=1;goto B575b2b;
case 0x575b30:goto L575b30;
case 0x575b36:c.instructions+=23;goto B575b36;
case 0x575b3c:c.instructions+=22;goto B575b3c;
case 0x575b42:c.instructions+=21;goto B575b42;
case 0x575b44:c.instructions+=20;goto B575b44;
case 0x575b4a:c.instructions+=19;goto B575b4a;
case 0x575b50:c.instructions+=18;goto B575b50;
case 0x575b56:c.instructions+=17;goto B575b56;
case 0x575b5b:c.instructions+=16;goto B575b5b;
case 0x575b60:c.instructions+=15;goto B575b60;
case 0x575b66:c.instructions+=14;goto B575b66;
case 0x575b6d:c.instructions+=13;goto B575b6d;
case 0x575b73:c.instructions+=12;goto B575b73;
case 0x575b78:c.instructions+=11;goto B575b78;
case 0x575b7d:c.instructions+=10;goto B575b7d;
case 0x575b83:c.instructions+=9;goto B575b83;
case 0x575b89:c.instructions+=8;goto B575b89;
case 0x575b8f:c.instructions+=7;goto B575b8f;
case 0x575b96:c.instructions+=6;goto B575b96;
case 0x575b9d:c.instructions+=5;goto B575b9d;
case 0x575ba2:c.instructions+=4;goto B575ba2;
case 0x575ba9:c.instructions+=3;goto B575ba9;
case 0x575bb0:c.instructions+=2;goto B575bb0;
case 0x575bb6:c.instructions+=1;goto B575bb6;
case 0x575bbb:goto L575bbb;
case 0x575bc1:c.instructions+=22;goto B575bc1;
case 0x575bc7:c.instructions+=21;goto B575bc7;
case 0x575bcd:c.instructions+=20;goto B575bcd;
case 0x575bcf:c.instructions+=19;goto B575bcf;
case 0x575bd5:c.instructions+=18;goto B575bd5;
case 0x575bda:c.instructions+=17;goto B575bda;
case 0x575bdf:c.instructions+=16;goto B575bdf;
case 0x575be5:c.instructions+=15;goto B575be5;
case 0x575beb:c.instructions+=14;goto B575beb;
case 0x575bf0:c.instructions+=13;goto B575bf0;
case 0x575bf6:c.instructions+=12;goto B575bf6;
case 0x575bfc:c.instructions+=11;goto B575bfc;
case 0x575c01:c.instructions+=10;goto B575c01;
case 0x575c07:c.instructions+=9;goto B575c07;
case 0x575c0d:c.instructions+=8;goto B575c0d;
case 0x575c13:c.instructions+=7;goto B575c13;
case 0x575c1a:c.instructions+=6;goto B575c1a;
case 0x575c21:c.instructions+=5;goto B575c21;
case 0x575c27:c.instructions+=4;goto B575c27;
case 0x575c2d:c.instructions+=3;goto B575c2d;
case 0x575c34:c.instructions+=2;goto B575c34;
case 0x575c3a:c.instructions+=1;goto B575c3a;
case 0x575c3f:goto L575c3f;
case 0x575c45:c.instructions+=21;goto B575c45;
case 0x575c4c:c.instructions+=20;goto B575c4c;
case 0x575c52:c.instructions+=19;goto B575c52;
case 0x575c54:c.instructions+=18;goto B575c54;
case 0x575c5a:c.instructions+=17;goto B575c5a;
case 0x575c60:c.instructions+=16;goto B575c60;
case 0x575c66:c.instructions+=15;goto B575c66;
case 0x575c6c:c.instructions+=14;goto B575c6c;
case 0x575c71:c.instructions+=13;goto B575c71;
case 0x575c76:c.instructions+=12;goto B575c76;
case 0x575c7c:c.instructions+=11;goto B575c7c;
case 0x575c81:c.instructions+=10;goto B575c81;
case 0x575c87:c.instructions+=9;goto B575c87;
case 0x575c8d:c.instructions+=8;goto B575c8d;
case 0x575c93:c.instructions+=7;goto B575c93;
case 0x575c9a:c.instructions+=6;goto B575c9a;
case 0x575ca1:c.instructions+=5;goto B575ca1;
case 0x575ca6:c.instructions+=4;goto B575ca6;
case 0x575cad:c.instructions+=3;goto B575cad;
case 0x575cb4:c.instructions+=2;goto B575cb4;
case 0x575cba:c.instructions+=1;goto B575cba;
case 0x575cbf:goto L575cbf;
case 0x575cc5:c.instructions+=20;goto B575cc5;
case 0x575cca:c.instructions+=19;goto B575cca;
case 0x575ccf:c.instructions+=18;goto B575ccf;
case 0x575cd5:c.instructions+=17;goto B575cd5;
case 0x575cdb:c.instructions+=16;goto B575cdb;
case 0x575ce1:c.instructions+=15;goto B575ce1;
case 0x575ce8:c.instructions+=14;goto B575ce8;
case 0x575cef:c.instructions+=13;goto B575cef;
case 0x575cf4:c.instructions+=12;goto B575cf4;
case 0x575cfa:c.instructions+=11;goto B575cfa;
case 0x575d00:c.instructions+=10;goto B575d00;
case 0x575d02:c.instructions+=9;goto B575d02;
case 0x575d07:c.instructions+=8;goto B575d07;
case 0x575d0c:c.instructions+=7;goto B575d0c;
case 0x575d11:c.instructions+=6;goto B575d11;
case 0x575d16:c.instructions+=5;goto B575d16;
case 0x575d1b:c.instructions+=4;goto B575d1b;
case 0x575d21:c.instructions+=3;goto B575d21;
case 0x575d26:c.instructions+=2;goto B575d26;
case 0x575d2c:c.instructions+=1;goto B575d2c;
case 0x575d31:goto L575d31;
case 0x575d37:c.instructions+=22;goto B575d37;
case 0x575d3d:c.instructions+=21;goto B575d3d;
case 0x575d43:c.instructions+=20;goto B575d43;
case 0x575d45:c.instructions+=19;goto B575d45;
case 0x575d4b:c.instructions+=18;goto B575d4b;
case 0x575d51:c.instructions+=17;goto B575d51;
case 0x575d57:c.instructions+=16;goto B575d57;
case 0x575d5c:c.instructions+=15;goto B575d5c;
case 0x575d61:c.instructions+=14;goto B575d61;
case 0x575d67:c.instructions+=13;goto B575d67;
case 0x575d6e:c.instructions+=12;goto B575d6e;
case 0x575d74:c.instructions+=11;goto B575d74;
case 0x575d79:c.instructions+=10;goto B575d79;
case 0x575d7f:c.instructions+=9;goto B575d7f;
case 0x575d85:c.instructions+=8;goto B575d85;
case 0x575d8b:c.instructions+=7;goto B575d8b;
case 0x575d92:c.instructions+=6;goto B575d92;
case 0x575d99:c.instructions+=5;goto B575d99;
case 0x575d9e:c.instructions+=4;goto B575d9e;
case 0x575da5:c.instructions+=3;goto B575da5;
case 0x575dac:c.instructions+=2;goto B575dac;
case 0x575db2:c.instructions+=1;goto B575db2;
case 0x575db7:goto L575db7;
case 0x575dbe:c.instructions+=68;goto B575dbe;
case 0x575dc4:c.instructions+=67;goto B575dc4;
case 0x575dc9:c.instructions+=66;goto B575dc9;
case 0x575dce:c.instructions+=65;goto B575dce;
case 0x575dd3:c.instructions+=64;goto B575dd3;
case 0x575dda:c.instructions+=63;goto B575dda;
case 0x575de0:c.instructions+=62;goto B575de0;
case 0x575de2:c.instructions+=61;goto B575de2;
case 0x575de8:c.instructions+=60;goto B575de8;
case 0x575ded:c.instructions+=59;goto B575ded;
case 0x575df2:c.instructions+=58;goto B575df2;
case 0x575df5:c.instructions+=57;goto B575df5;
case 0x575df7:c.instructions+=56;goto B575df7;
case 0x575dfd:c.instructions+=55;goto B575dfd;
case 0x575e02:c.instructions+=54;goto B575e02;
case 0x575e08:c.instructions+=53;goto B575e08;
case 0x575e0d:c.instructions+=52;goto B575e0d;
case 0x575e13:c.instructions+=51;goto B575e13;
case 0x575e19:c.instructions+=50;goto B575e19;
case 0x575e1f:c.instructions+=49;goto B575e1f;
case 0x575e24:c.instructions+=48;goto B575e24;
case 0x575e2a:c.instructions+=47;goto B575e2a;
case 0x575e30:c.instructions+=46;goto B575e30;
case 0x575e35:c.instructions+=45;goto B575e35;
case 0x575e3b:c.instructions+=44;goto B575e3b;
case 0x575e42:c.instructions+=43;goto B575e42;
case 0x575e48:c.instructions+=42;goto B575e48;
case 0x575e4e:c.instructions+=41;goto B575e4e;
case 0x575e54:c.instructions+=40;goto B575e54;
case 0x575e5a:c.instructions+=39;goto B575e5a;
case 0x575e61:c.instructions+=38;goto B575e61;
case 0x575e68:c.instructions+=37;goto B575e68;
case 0x575e6d:c.instructions+=36;goto B575e6d;
case 0x575e77:c.instructions+=35;goto B575e77;
case 0x575e7d:c.instructions+=34;goto B575e7d;
case 0x575e83:c.instructions+=33;goto B575e83;
case 0x575e89:c.instructions+=32;goto B575e89;
case 0x575e90:c.instructions+=31;goto B575e90;
case 0x575e97:c.instructions+=30;goto B575e97;
case 0x575e9e:c.instructions+=29;goto B575e9e;
case 0x575ea5:c.instructions+=28;goto B575ea5;
case 0x575eaa:c.instructions+=27;goto B575eaa;
case 0x575eb4:c.instructions+=26;goto B575eb4;
case 0x575eba:c.instructions+=25;goto B575eba;
case 0x575ec0:c.instructions+=24;goto B575ec0;
case 0x575ec6:c.instructions+=23;goto B575ec6;
case 0x575ecd:c.instructions+=22;goto B575ecd;
case 0x575ed3:c.instructions+=21;goto B575ed3;
case 0x575ed9:c.instructions+=20;goto B575ed9;
case 0x575edf:c.instructions+=19;goto B575edf;
case 0x575ee1:c.instructions+=18;goto B575ee1;
case 0x575ee7:c.instructions+=17;goto B575ee7;
case 0x575eed:c.instructions+=16;goto B575eed;
case 0x575ef3:c.instructions+=15;goto B575ef3;
case 0x575ef9:c.instructions+=14;goto B575ef9;
case 0x575eff:c.instructions+=13;goto B575eff;
case 0x575f05:c.instructions+=12;goto B575f05;
case 0x575f0c:c.instructions+=11;goto B575f0c;
case 0x575f12:c.instructions+=10;goto B575f12;
case 0x575f18:c.instructions+=9;goto B575f18;
case 0x575f1d:c.instructions+=8;goto B575f1d;
case 0x575f27:c.instructions+=7;goto B575f27;
case 0x575f2d:c.instructions+=6;goto B575f2d;
case 0x575f33:c.instructions+=5;goto B575f33;
case 0x575f39:c.instructions+=4;goto B575f39;
case 0x575f40:c.instructions+=3;goto B575f40;
case 0x575f47:c.instructions+=2;goto B575f47;
case 0x575f4f:c.instructions+=1;goto B575f4f;
case 0x575f51:goto L575f51;
case 0x575f56:goto L575f56;
case 0x575f5d:c.instructions+=4;goto B575f5d;
case 0x575f64:c.instructions+=3;goto B575f64;
case 0x575f68:c.instructions+=2;goto B575f68;
case 0x575f6a:c.instructions+=1;goto B575f6a;
case 0x575f70:goto L575f70;
case 0x575f73:c.instructions+=2;goto B575f73;
case 0x575f77:c.instructions+=1;goto B575f77;
case 0x575f79:goto L575f79;
case 0x575f7b:c.instructions+=3;goto B575f7b;
case 0x575f80:c.instructions+=2;goto B575f80;
case 0x575f83:c.instructions+=1;goto B575f83;
case 0x575f88:goto L575f88;
case 0x575f8b:c.instructions+=3;goto B575f8b;
case 0x575f8e:c.instructions+=2;goto B575f8e;
case 0x575f90:c.instructions+=1;goto B575f90;
case 0x575f92:goto L575f92;
case 0x575f98:c.instructions+=1;goto B575f98;
case 0x575f9a:goto L575f9a;
case 0x575f9d:goto L575f9d;
case 0x575fa2:goto L575fa2;
case 0x575fa6:c.instructions+=6;goto B575fa6;
case 0x575fa9:c.instructions+=5;goto B575fa9;
case 0x575faa:c.instructions+=4;goto B575faa;
case 0x575fad:c.instructions+=3;goto B575fad;
case 0x575faf:c.instructions+=2;goto B575faf;
case 0x575fb3:c.instructions+=1;goto B575fb3;
case 0x575fb5:goto L575fb5;
case 0x575fb9:c.instructions+=8;goto B575fb9;
case 0x575fba:c.instructions+=7;goto B575fba;
case 0x575fbc:c.instructions+=6;goto B575fbc;
case 0x575fbd:c.instructions+=5;goto B575fbd;
case 0x575fbe:c.instructions+=4;goto B575fbe;
case 0x575fbf:c.instructions+=3;goto B575fbf;
case 0x575fc6:c.instructions+=2;goto B575fc6;
case 0x575fc9:c.instructions+=1;goto B575fc9;
case 0x575fd0:goto L575fd0;
case 0x575fd3:c.instructions+=4;goto B575fd3;
case 0x575fd4:c.instructions+=3;goto B575fd4;
case 0x575fd6:c.instructions+=2;goto B575fd6;
case 0x575fd8:c.instructions+=1;goto B575fd8;
case 0x575fda:goto L575fda;
case 0x575fdc:c.instructions+=1;goto B575fdc;
case 0x575fe0:goto L575fe0;
case 0x575fe3:c.instructions+=3;goto B575fe3;
case 0x575fe5:c.instructions+=2;goto B575fe5;
case 0x575fe9:c.instructions+=1;goto B575fe9;
case 0x575feb:goto L575feb;
case 0x575fef:goto L575fef;
case 0x575ff2:c.instructions+=4;goto B575ff2;
case 0x575ff3:c.instructions+=3;goto B575ff3;
case 0x575ff6:c.instructions+=2;goto B575ff6;
case 0x575ff8:c.instructions+=1;goto B575ff8;
case 0x575ffa:goto L575ffa;
case 0x575ffb:c.instructions+=1;goto B575ffb;
default:missing_instruction(c.pc);}
B575000:L575000:{c.instructions+=5;NFSU2_TR(0x575000);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B575002:{NFSU2_TR(0x575002);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B575004:{NFSU2_TR(0x575004);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B575005:{NFSU2_TR(0x575005);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B575008:{NFSU2_TR(0x575008);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57500b;}}
}
B57500a:L57500a:{c.instructions+=1;NFSU2_TR(0x57500a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57500b:L57500b:{c.instructions+=3;NFSU2_TR(0x57500b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57500c:{NFSU2_TR(0x57500c);
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
B57500e:{NFSU2_TR(0x57500e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x574ff4u,574);}
}
B575010:L575010:{c.instructions+=5;NFSU2_TR(0x575010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B575011:{NFSU2_TR(0x575011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575012:{NFSU2_TR(0x575012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575013:{NFSU2_TR(0x575013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575014:{NFSU2_TR(0x575014);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575020:L575020:{c.instructions+=27;NFSU2_TR(0x575020);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575024:{NFSU2_TR(0x575024);
__builtin_memmove((R+8),(R+4),4);
}
B575026:{NFSU2_TR(0x575026);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B575029:{NFSU2_TR(0x575029);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x30ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B575030:{NFSU2_TR(0x575030);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575033:{NFSU2_TR(0x575033);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B575036:{NFSU2_TR(0x575036);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575039:{NFSU2_TR(0x575039);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57503d:{NFSU2_TR(0x57503d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575040:{NFSU2_TR(0x575040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575041:{NFSU2_TR(0x575041);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffd0ull))));
}
B575044:{NFSU2_TR(0x575044);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575045:{NFSU2_TR(0x575045);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B575047:{NFSU2_TR(0x575047);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57504a:{NFSU2_TR(0x57504a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57504e:{NFSU2_TR(0x57504e);
__builtin_memmove((R+12),(R+4),4);
}
B575050:{NFSU2_TR(0x575050);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575051:{NFSU2_TR(0x575051);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575054:{NFSU2_TR(0x575054);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B575057:{NFSU2_TR(0x575057);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57505a:{NFSU2_TR(0x57505a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57505d:{NFSU2_TR(0x57505d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575060:{NFSU2_TR(0x575060);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575063:{NFSU2_TR(0x575063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575066:{NFSU2_TR(0x575066);
u8 U[4];
w4(U+0,u32(0x12345678ull));
s4(u32(r4(R+8)),r4(U+0));
}
B57506c:{NFSU2_TR(0x57506c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57506e:{NFSU2_TR(0x57506e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575071:L575071:{c.instructions+=1;NFSU2_TR(0x575071);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L575073;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575071u);}goto L575071;}
}
B575073:L575073:{c.instructions+=2;NFSU2_TR(0x575073);
__builtin_memmove((R+4),(R+12),4);
}
B575075:{NFSU2_TR(0x575075);
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
B575078:L575078:{c.instructions+=1;NFSU2_TR(0x575078);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L57507a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575078u);}goto L575078;}
}
B57507a:L57507a:{c.instructions+=5;NFSU2_TR(0x57507a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57507b:{NFSU2_TR(0x57507b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57507e:{NFSU2_TR(0x57507e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57507f:{NFSU2_TR(0x57507f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575080:{NFSU2_TR(0x575080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575090:L575090:{c.instructions+=13;NFSU2_TR(0x575090);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575091:{NFSU2_TR(0x575091);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575092:{NFSU2_TR(0x575092);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575093:{NFSU2_TR(0x575093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575094:{NFSU2_TR(0x575094);
__builtin_memmove((R+12),(R+4),4);
}
B575096:{NFSU2_TR(0x575096);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B575099:{NFSU2_TR(0x575099);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57509a:{NFSU2_TR(0x57509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57509d:{NFSU2_TR(0x57509d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5750a0:{NFSU2_TR(0x5750a0);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffff8ull))));
}
B5750a3:{NFSU2_TR(0x5750a3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5750a5:{NFSU2_TR(0x5750a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5750a9:{NFSU2_TR(0x5750a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5750f5;}}
}
B5750ab:L5750ab:{c.instructions+=1;NFSU2_TR(0x5750ab);
{goto L5750b0;}
}
B5750b0:L5750b0:{c.instructions+=9;NFSU2_TR(0x5750b0);
__builtin_memmove((R+0),(R+20),4);
}
B5750b2:{NFSU2_TR(0x5750b2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B5750b4:{NFSU2_TR(0x5750b4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5750b5:{NFSU2_TR(0x5750b5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B5750b8:{NFSU2_TR(0x5750b8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5750ba:{NFSU2_TR(0x5750ba);
__builtin_memmove((R+24),(R+0),4);
}
B5750bc:{NFSU2_TR(0x5750bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B5750bf:{NFSU2_TR(0x5750bf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5750c5:{NFSU2_TR(0x5750c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5750cc;}}
}
B5750c7:L5750c7:{c.instructions+=1;NFSU2_TR(0x5750c7);
w4(R+24,u32(0x7e0ull));
}
B5750cc:L5750cc:{c.instructions+=11;NFSU2_TR(0x5750cc);
__builtin_memmove((R+0),(R+28),4);
}
B5750ce:{NFSU2_TR(0x5750ce);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5750cf:{NFSU2_TR(0x5750cf);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B5750d2:{NFSU2_TR(0x5750d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5750d4:{NFSU2_TR(0x5750d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5750d7:{NFSU2_TR(0x5750d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5750d8:{NFSU2_TR(0x5750d8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5750da:{NFSU2_TR(0x5750da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5750db:{NFSU2_TR(0x5750db);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5750dd:{NFSU2_TR(0x5750dd);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5750e2:{NFSU2_TR(0x5750e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5750e7ull));
TAIL_STATIC(0x4022c0u,402);
}
B5750e7:L5750e7:{c.instructions+=4;NFSU2_TR(0x5750e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5750ea:{NFSU2_TR(0x5750ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5750ed:{NFSU2_TR(0x5750ed);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5750ef:{NFSU2_TR(0x5750ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5750b0u);}goto L5750b0;}}
}
B5750f1:L5750f1:{c.instructions+=1;NFSU2_TR(0x5750f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5750f5:L5750f5:{c.instructions+=4;NFSU2_TR(0x5750f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5750f8:{NFSU2_TR(0x5750f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5750fa:{NFSU2_TR(0x5750fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5750fc:{NFSU2_TR(0x5750fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L575112;}}
}
B5750fe:L5750fe:{c.instructions+=1;NFSU2_TR(0x5750fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B575101:L575101:{c.instructions+=6;NFSU2_TR(0x575101);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B575107:{NFSU2_TR(0x575107);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57510a:{NFSU2_TR(0x57510a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57510b:{NFSU2_TR(0x57510b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B57510e:{NFSU2_TR(0x57510e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B575110:{NFSU2_TR(0x575110);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575101u);}goto L575101;}}
}
B575112:L575112:{c.instructions+=4;NFSU2_TR(0x575112);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575115:{NFSU2_TR(0x575115);
__builtin_memmove((R+24),(R+0),4);
}
B575117:{NFSU2_TR(0x575117);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B575119:{NFSU2_TR(0x575119);
if(r1(R+518)){{goto L575134;}}
}
B57511b:L57511b:{c.instructions+=6;NFSU2_TR(0x57511b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57511c:{NFSU2_TR(0x57511c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57511d:{NFSU2_TR(0x57511d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B57511f:{NFSU2_TR(0x57511f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575120:{NFSU2_TR(0x575120);
__builtin_memmove((R+4),(R+12),4);
}
B575122:{NFSU2_TR(0x575122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575127ull));
TAIL_STATIC(0x574fd0u,574);
}
B575127:L575127:{c.instructions+=5;NFSU2_TR(0x575127);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57512b:{NFSU2_TR(0x57512b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57512c:{NFSU2_TR(0x57512c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57512d:{NFSU2_TR(0x57512d);
__builtin_memmove((R+4),(R+12),4);
}
B57512f:{NFSU2_TR(0x57512f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575134ull));
TAIL_STATIC(0x574f70u,574);
}
B575134:L575134:{c.instructions+=8;NFSU2_TR(0x575134);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B575136:{NFSU2_TR(0x575136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575137:{NFSU2_TR(0x575137);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57513a:{NFSU2_TR(0x57513a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57513b:{NFSU2_TR(0x57513b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57513c:{NFSU2_TR(0x57513c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57513d:{NFSU2_TR(0x57513d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57513e:{NFSU2_TR(0x57513e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575140:L575140:{c.instructions+=4;NFSU2_TR(0x575140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575141:{NFSU2_TR(0x575141);
__builtin_memmove((R+24),(R+4),4);
}
B575143:{NFSU2_TR(0x575143);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B575145:{NFSU2_TR(0x575145);
if(r1(R+518)){{goto L575158;}}
}
B575147:L575147:{c.instructions+=5;NFSU2_TR(0x575147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57514a:{NFSU2_TR(0x57514a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57514d:{NFSU2_TR(0x57514d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffbcull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B575154:{NFSU2_TR(0x575154);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B575156:{NFSU2_TR(0x575156);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57515e;}}
}
B575158:L575158:{c.instructions+=3;NFSU2_TR(0x575158);
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
B57515a:{NFSU2_TR(0x57515a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57515b:{NFSU2_TR(0x57515b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57515e:L57515e:{c.instructions+=13;NFSU2_TR(0x57515e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B575161:{NFSU2_TR(0x575161);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575165:{NFSU2_TR(0x575165);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575166:{NFSU2_TR(0x575166);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57516a:{NFSU2_TR(0x57516a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57516b:{NFSU2_TR(0x57516b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B57516c:{NFSU2_TR(0x57516c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57516f:{NFSU2_TR(0x57516f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575170:{NFSU2_TR(0x575170);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B575174:{NFSU2_TR(0x575174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575177:{NFSU2_TR(0x575177);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57517a:{NFSU2_TR(0x57517a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57517c:{NFSU2_TR(0x57517c);
if(r1(R+518)){{goto L5751b7;}}
}
B57517e:L57517e:{c.instructions+=2;NFSU2_TR(0x57517e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B575181:{NFSU2_TR(0x575181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5751b7;}}
}
B575183:L575183:{c.instructions+=8;NFSU2_TR(0x575183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B575185:{NFSU2_TR(0x575185);
w4(R+20,u32(0x1ull));
}
B57518a:{NFSU2_TR(0x57518a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B57518c:{NFSU2_TR(0x57518c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575190:{NFSU2_TR(0x575190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575193:{NFSU2_TR(0x575193);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B575194:{NFSU2_TR(0x575194);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B575196:{NFSU2_TR(0x575196);
if(r1(R+518)){{goto L5751b7;}}
}
B575198:L575198:{c.instructions+=3;NFSU2_TR(0x575198);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57519b:{NFSU2_TR(0x57519b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57519f:{NFSU2_TR(0x57519f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5751b7;}}
}
B5751a1:L5751a1:{c.instructions+=8;NFSU2_TR(0x5751a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5751a4:{NFSU2_TR(0x5751a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5751a8:{NFSU2_TR(0x5751a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751a9:{NFSU2_TR(0x5751a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751aa:{NFSU2_TR(0x5751aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751ab:{NFSU2_TR(0x5751ab);
__builtin_memmove((R+4),(R+24),4);
}
B5751ad:{NFSU2_TR(0x5751ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5751b0:{NFSU2_TR(0x5751b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5751b5ull));
TAIL_STATIC(0x574f70u,574);
}
B5751b5:L5751b5:{c.instructions+=1;NFSU2_TR(0x5751b5);
{goto L575207;}
}
B5751b7:L5751b7:{c.instructions+=6;NFSU2_TR(0x5751b7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751b9:{NFSU2_TR(0x5751b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751ba:{NFSU2_TR(0x5751ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5751bd:{NFSU2_TR(0x5751bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751be:{NFSU2_TR(0x5751be);
__builtin_memmove((R+4),(R+24),4);
}
B5751c0:{NFSU2_TR(0x5751c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5751c5ull));
TAIL_STATIC(0x574f70u,574);
}
B5751c5:L5751c5:{c.instructions+=11;NFSU2_TR(0x5751c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5751c8:{NFSU2_TR(0x5751c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5751cb:{NFSU2_TR(0x5751cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5751ce:{NFSU2_TR(0x5751ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5751d0:{NFSU2_TR(0x5751d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751d1:{NFSU2_TR(0x5751d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5751d4:{NFSU2_TR(0x5751d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5751d7:{NFSU2_TR(0x5751d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751d9:{NFSU2_TR(0x5751d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751da:{NFSU2_TR(0x5751da);
__builtin_memmove((R+4),(R+24),4);
}
B5751dc:{NFSU2_TR(0x5751dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5751e1ull));
TAIL_STATIC(0x574f70u,574);
}
B5751e1:L5751e1:{c.instructions+=11;NFSU2_TR(0x5751e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5751e3:{NFSU2_TR(0x5751e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5751ea:{NFSU2_TR(0x5751ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B5751ed:{NFSU2_TR(0x5751ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5751f1:{NFSU2_TR(0x5751f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751f2:{NFSU2_TR(0x5751f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5751f5:{NFSU2_TR(0x5751f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5751f8:{NFSU2_TR(0x5751f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751f9:{NFSU2_TR(0x5751f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5751fa:{NFSU2_TR(0x5751fa);
__builtin_memmove((R+4),(R+24),4);
}
B5751fc:{NFSU2_TR(0x5751fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575201ull));
TAIL_STATIC(0x574f70u,574);
}
B575201:L575201:{c.instructions+=2;NFSU2_TR(0x575201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B575204:{NFSU2_TR(0x575204);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575207:L575207:{c.instructions+=6;NFSU2_TR(0x575207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57520a:{NFSU2_TR(0x57520a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57520c:{NFSU2_TR(0x57520c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57520d:{NFSU2_TR(0x57520d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57520e:{NFSU2_TR(0x57520e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57520f:{NFSU2_TR(0x57520f);
if(r1(R+518)){{goto L575239;}}
}
B575211:L575211:{c.instructions+=6;NFSU2_TR(0x575211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575214:{NFSU2_TR(0x575214);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B575215:{NFSU2_TR(0x575215);
__builtin_memmove((R+0),(R+4),4);
}
B575217:{NFSU2_TR(0x575217);
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
B57521a:{NFSU2_TR(0x57521a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57521d:{NFSU2_TR(0x57521d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575239;}}
}
B57521f:L57521f:{c.instructions+=7;NFSU2_TR(0x57521f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575221:{NFSU2_TR(0x575221);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B575225:{NFSU2_TR(0x575225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575226:{NFSU2_TR(0x575226);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575228:{NFSU2_TR(0x575228);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57522d:{NFSU2_TR(0x57522d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575231:{NFSU2_TR(0x575231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575236ull));
TAIL_STATIC(0x4022c0u,402);
}
B575236:L575236:{c.instructions+=1;NFSU2_TR(0x575236);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B575239:L575239:{c.instructions+=5;NFSU2_TR(0x575239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57523c:{NFSU2_TR(0x57523c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57523f:{NFSU2_TR(0x57523f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffbcull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B575246:{NFSU2_TR(0x575246);
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
B575248:{NFSU2_TR(0x575248);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L575258;}}
}
B57524a:L57524a:{c.instructions+=3;NFSU2_TR(0x57524a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57524d:{NFSU2_TR(0x57524d);
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
B57524f:{NFSU2_TR(0x57524f);
if(r1(R+518)){{goto L575258;}}
}
B575251:L575251:{c.instructions+=2;NFSU2_TR(0x575251);
__builtin_memmove((R+4),(R+24),4);
}
B575253:{NFSU2_TR(0x575253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575258ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575090u);}goto L575090;}
}
B575258:L575258:{c.instructions+=3;NFSU2_TR(0x575258);
w4(R+0,u32(0x1ull));
}
B57525d:{NFSU2_TR(0x57525d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57525e:{NFSU2_TR(0x57525e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575270:L575270:{c.instructions+=11;NFSU2_TR(0x575270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575271:{NFSU2_TR(0x575271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575272:{NFSU2_TR(0x575272);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B575276:{NFSU2_TR(0x575276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575277:{NFSU2_TR(0x575277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B57527b:{NFSU2_TR(0x57527b);
__builtin_memmove((R+24),(R+4),4);
}
B57527d:{NFSU2_TR(0x57527d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57527e:{NFSU2_TR(0x57527e);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B575282:{NFSU2_TR(0x575282);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575285:{NFSU2_TR(0x575285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B575287:{NFSU2_TR(0x575287);
if(r1(R+518)){{goto L5752b0;}}
}
B575289:L575289:{c.instructions+=6;NFSU2_TR(0x575289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57528b:{NFSU2_TR(0x57528b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57528e:{NFSU2_TR(0x57528e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57528f:{NFSU2_TR(0x57528f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575290:{NFSU2_TR(0x575290);
__builtin_memmove((R+4),(R+24),4);
}
B575292:{NFSU2_TR(0x575292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575297ull));
TAIL_STATIC(0x574fd0u,574);
}
B575297:L575297:{c.instructions+=2;NFSU2_TR(0x575297);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B575299:{NFSU2_TR(0x575299);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5752b0;}}
}
B57529b:L57529b:{c.instructions+=11;NFSU2_TR(0x57529b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57529e:{NFSU2_TR(0x57529e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B57529f:{NFSU2_TR(0x57529f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5752a2:{NFSU2_TR(0x5752a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5752a5:{NFSU2_TR(0x5752a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5752a6:{NFSU2_TR(0x5752a6);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5752a7:{NFSU2_TR(0x5752a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5752aa:{NFSU2_TR(0x5752aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5752ab:{NFSU2_TR(0x5752ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5752ac:{NFSU2_TR(0x5752ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5752ad:{NFSU2_TR(0x5752ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5752b0:L5752b0:{c.instructions+=3;NFSU2_TR(0x5752b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5752b3:{NFSU2_TR(0x5752b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5752b6:{NFSU2_TR(0x5752b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5752d0;}}
}
B5752b8:L5752b8:{c.instructions+=10;NFSU2_TR(0x5752b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5752bb:{NFSU2_TR(0x5752bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5752be:{NFSU2_TR(0x5752be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5752bf:{NFSU2_TR(0x5752bf);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5752c0:{NFSU2_TR(0x5752c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5752c7:{NFSU2_TR(0x5752c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5752ca:{NFSU2_TR(0x5752ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5752cb:{NFSU2_TR(0x5752cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5752cc:{NFSU2_TR(0x5752cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5752cd:{NFSU2_TR(0x5752cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5752d0:L5752d0:{c.instructions+=5;NFSU2_TR(0x5752d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5752d3:{NFSU2_TR(0x5752d3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5752d5:{NFSU2_TR(0x5752d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5752d6:{NFSU2_TR(0x5752d6);
__builtin_memmove((R+4),(R+24),4);
}
B5752d8:{NFSU2_TR(0x5752d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5752ddull));
TAIL_STATIC(0x574fd0u,574);
}
B5752dd:L5752dd:{c.instructions+=4;NFSU2_TR(0x5752dd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5752df:{NFSU2_TR(0x5752df);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5752e2:{NFSU2_TR(0x5752e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5752e5:{NFSU2_TR(0x5752e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5752b8u);}goto L5752b8;}}
}
B5752e7:L5752e7:{c.instructions+=12;NFSU2_TR(0x5752e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5752e9:{NFSU2_TR(0x5752e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5752ed:{NFSU2_TR(0x5752ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5752f0:{NFSU2_TR(0x5752f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5752f7:{NFSU2_TR(0x5752f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5752fa:{NFSU2_TR(0x5752fa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5752fc:{NFSU2_TR(0x5752fc);
__builtin_memmove((R+0),(R+4),4);
}
B5752fe:{NFSU2_TR(0x5752fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5752ff:{NFSU2_TR(0x5752ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575302:{NFSU2_TR(0x575302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575303:{NFSU2_TR(0x575303);
__builtin_memmove((R+4),(R+24),4);
}
B575305:{NFSU2_TR(0x575305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57530aull));
TAIL_STATIC(0x574fd0u,574);
}
B57530a:L57530a:{c.instructions+=10;NFSU2_TR(0x57530a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57530d:{NFSU2_TR(0x57530d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B575310:{NFSU2_TR(0x575310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575313:{NFSU2_TR(0x575313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575314:{NFSU2_TR(0x575314);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B575315:{NFSU2_TR(0x575315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575318:{NFSU2_TR(0x575318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575319:{NFSU2_TR(0x575319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57531a:{NFSU2_TR(0x57531a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57531b:{NFSU2_TR(0x57531b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575320:L575320:{c.instructions+=1;NFSU2_TR(0x575320);
TAIL_STATIC(0x57b630u,57b);
}
B575330:L575330:{c.instructions+=7;NFSU2_TR(0x575330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B575336:{NFSU2_TR(0x575336);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575337:{NFSU2_TR(0x575337);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57533e:{NFSU2_TR(0x57533e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57533f:{NFSU2_TR(0x57533f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575340:{NFSU2_TR(0x575340);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B575342:{NFSU2_TR(0x575342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575347ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B575347:L575347:{c.instructions+=3;NFSU2_TR(0x575347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57534a:{NFSU2_TR(0x57534a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57534c:{NFSU2_TR(0x57534c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L575381;}}
}
B57534e:L57534e:{c.instructions+=4;NFSU2_TR(0x57534e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57534f:{NFSU2_TR(0x57534f);
__builtin_memmove((R+28),(R+12),4);
}
B575351:{NFSU2_TR(0x575351);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B575355:{NFSU2_TR(0x575355);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B575357:L575357:{c.instructions+=4;NFSU2_TR(0x575357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57535a:{NFSU2_TR(0x57535a);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B57535e:{NFSU2_TR(0x57535e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B575360:{NFSU2_TR(0x575360);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L575368;}}
}
B575362:L575362:{c.instructions+=2;NFSU2_TR(0x575362);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B575364:{NFSU2_TR(0x575364);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L575368;}}
}
B575366:L575366:{c.instructions+=1;NFSU2_TR(0x575366);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x5full))));
}
B575368:L575368:{c.instructions+=2;NFSU2_TR(0x575368);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57536a:{NFSU2_TR(0x57536a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57536e;}}
}
B57536c:L57536c:{c.instructions+=1;NFSU2_TR(0x57536c);
w1(R+0,u8(0x5cull));
}
B57536e:L57536e:{c.instructions+=4;NFSU2_TR(0x57536e);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B575372:{NFSU2_TR(0x575372);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575373:{NFSU2_TR(0x575373);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B575374:{NFSU2_TR(0x575374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575379ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B575379:L575379:{c.instructions+=3;NFSU2_TR(0x575379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57537c:{NFSU2_TR(0x57537c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57537e:{NFSU2_TR(0x57537e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575357u);}goto L575357;}}
}
B575380:L575380:{c.instructions+=1;NFSU2_TR(0x575380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575381:L575381:{c.instructions+=4;NFSU2_TR(0x575381);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B575385:{NFSU2_TR(0x575385);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575386:{NFSU2_TR(0x575386);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B57538b:{NFSU2_TR(0x57538b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575390ull));
TAIL_STATIC(0x43db50u,43d);
}
B575390:L575390:{c.instructions+=5;NFSU2_TR(0x575390);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B575393:{NFSU2_TR(0x575393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575394:{NFSU2_TR(0x575394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575395:{NFSU2_TR(0x575395);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57539b:{NFSU2_TR(0x57539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5753a0:L5753a0:{c.instructions+=5;NFSU2_TR(0x5753a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5753a4:{NFSU2_TR(0x5753a4);
__builtin_memmove((R+4),gp(0x865104),4);
}
B5753aa:{NFSU2_TR(0x5753aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753ab:{NFSU2_TR(0x5753ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753ac:{NFSU2_TR(0x5753ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5753b1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5753b1:L5753b1:{c.instructions+=2;NFSU2_TR(0x5753b1);
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
B5753b4:{NFSU2_TR(0x5753b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5753c0:L5753c0:{c.instructions+=6;NFSU2_TR(0x5753c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753c1:{NFSU2_TR(0x5753c1);
__builtin_memmove((R+24),(R+4),4);
}
B5753c3:{NFSU2_TR(0x5753c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753c4:{NFSU2_TR(0x5753c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5753c6:{NFSU2_TR(0x5753c6);
w4(R+4,u32(0x20ull));
}
B5753cb:{NFSU2_TR(0x5753cb);
__builtin_memmove((R+28),(R+24),4);
}
B5753cd:L5753cd:{c.instructions+=1;NFSU2_TR(0x5753cd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5753cf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5753cdu);}goto L5753cd;}
}
B5753cf:L5753cf:{c.instructions+=5;NFSU2_TR(0x5753cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5753d3:{NFSU2_TR(0x5753d3);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753d5:{NFSU2_TR(0x5753d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753d6:{NFSU2_TR(0x5753d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5753d7:{NFSU2_TR(0x5753d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5753dcull));
TAIL_STATIC(0x43dc00u,43d);
}
B5753dc:L5753dc:{c.instructions+=21;NFSU2_TR(0x5753dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5753e0:{NFSU2_TR(0x5753e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5753e2:{NFSU2_TR(0x5753e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5753e8:{NFSU2_TR(0x5753e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5753eb:{NFSU2_TR(0x5753eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5753f1:{NFSU2_TR(0x5753f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5753f4:{NFSU2_TR(0x5753f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5753fa:{NFSU2_TR(0x5753fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5753fd:{NFSU2_TR(0x5753fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575403:{NFSU2_TR(0x575403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575406:{NFSU2_TR(0x575406);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B575407:{NFSU2_TR(0x575407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57540d:{NFSU2_TR(0x57540d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57540f:{NFSU2_TR(0x57540f);
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
B575412:{NFSU2_TR(0x575412);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575418:{NFSU2_TR(0x575418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57541e:{NFSU2_TR(0x57541e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57541f:{NFSU2_TR(0x57541f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575425:{NFSU2_TR(0x575425);
__builtin_memmove((R+0),(R+24),4);
}
B575427:{NFSU2_TR(0x575427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575428:{NFSU2_TR(0x575428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575430:L575430:{c.instructions+=5;NFSU2_TR(0x575430);
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
B575432:{NFSU2_TR(0x575432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575438:{NFSU2_TR(0x575438);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x460ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57543e:{NFSU2_TR(0x57543e);
w1(R+0,u8(0x1ull));
}
B575440:{NFSU2_TR(0x575440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575450:L575450:{c.instructions+=5;NFSU2_TR(0x575450);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575454:{NFSU2_TR(0x575454);
__builtin_memmove((R+4),gp(0x865104),4);
}
B57545a:{NFSU2_TR(0x57545a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57545b:{NFSU2_TR(0x57545b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57545c:{NFSU2_TR(0x57545c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575461ull));
TAIL_STATIC(0x43f920u,43f);
}
B575461:L575461:{c.instructions+=2;NFSU2_TR(0x575461);
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
B575464:{NFSU2_TR(0x575464);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575470:L575470:{c.instructions+=4;NFSU2_TR(0x575470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575474:{NFSU2_TR(0x575474);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B575478:{NFSU2_TR(0x575478);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
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
B57547e:{NFSU2_TR(0x57547e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L57549a;}}
}
B575480:L575480:{c.instructions+=2;NFSU2_TR(0x575480);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575484:{NFSU2_TR(0x575484);
if(r1(R+512)){{goto L57548e;}}
}
B575486:L575486:{c.instructions+=2;NFSU2_TR(0x575486);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
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
B57548c:{NFSU2_TR(0x57548c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L57549a;}}
}
B57548e:L57548e:{c.instructions+=2;NFSU2_TR(0x57548e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575494:{NFSU2_TR(0x575494);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57549a:L57549a:{c.instructions+=3;NFSU2_TR(0x57549a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5754a0:{NFSU2_TR(0x5754a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5754a6:{NFSU2_TR(0x5754a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5754b0:L5754b0:{c.instructions+=4;NFSU2_TR(0x5754b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5754b4:{NFSU2_TR(0x5754b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5754ba:{NFSU2_TR(0x5754ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5754c0:{NFSU2_TR(0x5754c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5754d0:L5754d0:{c.instructions+=4;NFSU2_TR(0x5754d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5754d4:{NFSU2_TR(0x5754d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5754da:{NFSU2_TR(0x5754da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5754e0:{NFSU2_TR(0x5754e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5754f0:L5754f0:{c.instructions+=7;NFSU2_TR(0x5754f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5754f1:{NFSU2_TR(0x5754f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5754f2:{NFSU2_TR(0x5754f2);
__builtin_memmove((R+24),(R+4),4);
}
B5754f4:{NFSU2_TR(0x5754f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5754f7:{NFSU2_TR(0x5754f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5754f9:{NFSU2_TR(0x5754f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5754fd:{NFSU2_TR(0x5754fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575506;}}
}
B5754ff:L5754ff:{c.instructions+=4;NFSU2_TR(0x5754ff);
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
B575501:{NFSU2_TR(0x575501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575502:{NFSU2_TR(0x575502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B575503:{NFSU2_TR(0x575503);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575506:L575506:{c.instructions+=6;NFSU2_TR(0x575506);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57550a:{NFSU2_TR(0x57550a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57550b:{NFSU2_TR(0x57550b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57550c:{NFSU2_TR(0x57550c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57550d:{NFSU2_TR(0x57550d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57550e:{NFSU2_TR(0x57550e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575513ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575330u);}goto L575330;}
}
B575513:L575513:{c.instructions+=4;NFSU2_TR(0x575513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B575516:{NFSU2_TR(0x575516);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B575519:{NFSU2_TR(0x575519);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57551b:{NFSU2_TR(0x57551b);
if(r1(R+518)){{goto L57556d;}}
}
B57551d:L57551d:{c.instructions+=3;NFSU2_TR(0x57551d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57551f:{NFSU2_TR(0x57551f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B575521:{NFSU2_TR(0x575521);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57556d;}}
}
B575523:L575523:{c.instructions+=3;NFSU2_TR(0x575523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B575526:{NFSU2_TR(0x575526);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57552a:{NFSU2_TR(0x57552a);
__builtin_memmove((R+12),(R+12),4);
}
B575530:L575530:{c.instructions+=7;NFSU2_TR(0x575530);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B575533:{NFSU2_TR(0x575533);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B575535:{NFSU2_TR(0x575535);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B575538:{NFSU2_TR(0x575538);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B57553c:{NFSU2_TR(0x57553c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57553e:{NFSU2_TR(0x57553e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B575542:{NFSU2_TR(0x575542);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57554f;}}
}
B575544:L575544:{c.instructions+=2;NFSU2_TR(0x575544);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B575546:{NFSU2_TR(0x575546);
if(r1(R+518)){{goto L575567;}}
}
B575548:L575548:{c.instructions+=2;NFSU2_TR(0x575548);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B57554b:{NFSU2_TR(0x57554b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575567;}}
}
B57554d:L57554d:{c.instructions+=1;NFSU2_TR(0x57554d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B57554f:L57554f:{c.instructions+=1;NFSU2_TR(0x57554f);
if(r1(R+512)){{goto L575556;}}
}
B575551:L575551:{c.instructions+=2;NFSU2_TR(0x575551);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B575554:{NFSU2_TR(0x575554);
{goto L575559;}
}
B575556:L575556:{c.instructions+=1;NFSU2_TR(0x575556);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575559:L575559:{c.instructions+=2;NFSU2_TR(0x575559);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57555b:{NFSU2_TR(0x57555b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575530u);}goto L575530;}}
}
B57555d:L57555d:{c.instructions+=7;NFSU2_TR(0x57555d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57555e:{NFSU2_TR(0x57555e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57555f:{NFSU2_TR(0x57555f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575560:{NFSU2_TR(0x575560);
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
B575562:{NFSU2_TR(0x575562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575563:{NFSU2_TR(0x575563);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B575564:{NFSU2_TR(0x575564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575567:L575567:{c.instructions+=3;NFSU2_TR(0x575567);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B575569:{NFSU2_TR(0x575569);
__builtin_memmove((R+24),(R+4),4);
}
B57556b:{NFSU2_TR(0x57556b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L575577;}}
}
B57556d:L57556d:{c.instructions+=7;NFSU2_TR(0x57556d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57556e:{NFSU2_TR(0x57556e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57556f:{NFSU2_TR(0x57556f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575570:{NFSU2_TR(0x575570);
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
B575572:{NFSU2_TR(0x575572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575573:{NFSU2_TR(0x575573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B575574:{NFSU2_TR(0x575574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575577:L575577:{c.instructions+=6;NFSU2_TR(0x575577);
__builtin_memmove((R+12),(R+4),4);
}
B575579:{NFSU2_TR(0x575579);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B57557c:{NFSU2_TR(0x57557c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B575580:{NFSU2_TR(0x575580);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B575582:{NFSU2_TR(0x575582);
w4(R+28,u32(0x7fffffffull));
}
B575587:{NFSU2_TR(0x575587);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5755b4;}}
}
B575589:L575589:{c.instructions+=3;NFSU2_TR(0x575589);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57558d:{NFSU2_TR(0x57558d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x45cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B575593:{NFSU2_TR(0x575593);
__builtin_memmove((R+4),(R+8),4);
}
B575595:L575595:{c.instructions+=3;NFSU2_TR(0x575595);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575598:{NFSU2_TR(0x575598);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B57559a:{NFSU2_TR(0x57559a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L57559e;}}
}
B57559c:L57559c:{c.instructions+=1;NFSU2_TR(0x57559c);
w4(R+4,u32(0-u32(r4(R+4))));
}
B57559e:L57559e:{c.instructions+=2;NFSU2_TR(0x57559e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5755a0:{NFSU2_TR(0x5755a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5755a6;}}
}
B5755a2:L5755a2:{c.instructions+=2;NFSU2_TR(0x5755a2);
__builtin_memmove((R+28),(R+4),4);
}
B5755a4:{NFSU2_TR(0x5755a4);
__builtin_memmove((R+12),(R+24),4);
}
B5755a6:L5755a6:{c.instructions+=5;NFSU2_TR(0x5755a6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5755a9:{NFSU2_TR(0x5755a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5755aa:{NFSU2_TR(0x5755aa);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5755ac:{NFSU2_TR(0x5755ac);
__builtin_memmove((R+4),(R+8),4);
}
B5755ae:{NFSU2_TR(0x5755ae);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575595u);}goto L575595;}}
}
B5755b0:L5755b0:{c.instructions+=1;NFSU2_TR(0x5755b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5755b4:L5755b4:{c.instructions+=8;NFSU2_TR(0x5755b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5755b7:{NFSU2_TR(0x5755b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5755b8:{NFSU2_TR(0x5755b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5755bc:{NFSU2_TR(0x5755bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5755bd:{NFSU2_TR(0x5755bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5755be:{NFSU2_TR(0x5755be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5755bf:{NFSU2_TR(0x5755bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5755c0:{NFSU2_TR(0x5755c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5755d0:L5755d0:{c.instructions+=3;NFSU2_TR(0x5755d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5755d4:{NFSU2_TR(0x5755d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5755d5:{NFSU2_TR(0x5755d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5755daull));
TAIL_STATIC(0x6f76e9u,6f7);
}
B5755da:L5755da:{c.instructions+=2;NFSU2_TR(0x5755da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5755db:{NFSU2_TR(0x5755db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5755e0:L5755e0:{c.instructions+=3;NFSU2_TR(0x5755e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5755e4:{NFSU2_TR(0x5755e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5755e6:{NFSU2_TR(0x5755e6);
if(r1(R+518)){{goto L5755ef;}}
}
B5755e8:L5755e8:{c.instructions+=3;NFSU2_TR(0x5755e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5755eb:{NFSU2_TR(0x5755eb);
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
B5755ed:{NFSU2_TR(0x5755ed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5755f1;}}
}
B5755ef:L5755ef:{c.instructions+=1;NFSU2_TR(0x5755ef);
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
B5755f1:L5755f1:{c.instructions+=1;NFSU2_TR(0x5755f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575600:L575600:{c.instructions+=3;NFSU2_TR(0x575600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575604:{NFSU2_TR(0x575604);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B575606:{NFSU2_TR(0x575606);
if(r1(R+518)){{goto L575613;}}
}
B575608:L575608:{c.instructions+=3;NFSU2_TR(0x575608);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57560b:{NFSU2_TR(0x57560b);
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
B57560d:{NFSU2_TR(0x57560d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L575613;}}
}
B57560f:L57560f:{c.instructions+=2;NFSU2_TR(0x57560f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575612:{NFSU2_TR(0x575612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575613:L575613:{c.instructions+=2;NFSU2_TR(0x575613);
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
B575615:{NFSU2_TR(0x575615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575620:L575620:{c.instructions+=1;NFSU2_TR(0x575620);
TAIL_STATIC(0x75c6c8u,75c);
}
B575630:L575630:{c.instructions+=1;NFSU2_TR(0x575630);
TAIL_STATIC(0x75c6dau,75c);
}
B575640:L575640:{c.instructions+=4;NFSU2_TR(0x575640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B575642:{NFSU2_TR(0x575642);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B575645:{NFSU2_TR(0x575645);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575646:{NFSU2_TR(0x575646);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5756dc;}}
}
B57564c:L57564c:{c.instructions+=1;NFSU2_TR(0x57564c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5756e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B575653:L575653:{c.instructions+=7;NFSU2_TR(0x575653);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575657:{NFSU2_TR(0x575657);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B575659:{NFSU2_TR(0x575659);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57565c:{NFSU2_TR(0x57565c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B57565e:{NFSU2_TR(0x57565e);
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
B575661:{NFSU2_TR(0x575661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575662:{NFSU2_TR(0x575662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575665:L575665:{c.instructions+=7;NFSU2_TR(0x575665);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575669:{NFSU2_TR(0x575669);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B57566c:{NFSU2_TR(0x57566c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57566f:{NFSU2_TR(0x57566f);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B575672:{NFSU2_TR(0x575672);
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
B575675:{NFSU2_TR(0x575675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575676:{NFSU2_TR(0x575676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575679:L575679:{c.instructions+=7;NFSU2_TR(0x575679);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57567d:{NFSU2_TR(0x57567d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B57567f:{NFSU2_TR(0x57567f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575682:{NFSU2_TR(0x575682);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B575684:{NFSU2_TR(0x575684);
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
B575687:{NFSU2_TR(0x575687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575688:{NFSU2_TR(0x575688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57568b:L57568b:{c.instructions+=5;NFSU2_TR(0x57568b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57568f:{NFSU2_TR(0x57568f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B575691:{NFSU2_TR(0x575691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575692:{NFSU2_TR(0x575692);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575694:{NFSU2_TR(0x575694);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575697ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B575697:L575697:{c.instructions+=4;NFSU2_TR(0x575697);
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
B57569a:{NFSU2_TR(0x57569a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57569d:{NFSU2_TR(0x57569d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57569e:{NFSU2_TR(0x57569e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5756a1:L5756a1:{c.instructions+=5;NFSU2_TR(0x5756a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5756a5:{NFSU2_TR(0x5756a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5756a7:{NFSU2_TR(0x5756a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756a8:{NFSU2_TR(0x5756a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756aa:{NFSU2_TR(0x5756aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5756adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5756ad:L5756ad:{c.instructions+=5;NFSU2_TR(0x5756ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5756af:{NFSU2_TR(0x5756af);
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
B5756b2:{NFSU2_TR(0x5756b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5756b5:{NFSU2_TR(0x5756b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5756b6:{NFSU2_TR(0x5756b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5756b9:L5756b9:{c.instructions+=4;NFSU2_TR(0x5756b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5756bc:{NFSU2_TR(0x5756bc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5756bf:{NFSU2_TR(0x5756bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5756c3:{NFSU2_TR(0x5756c3);
if(r1(R+518)){{goto L5756e0;}}
}
B5756c5:L5756c5:{c.instructions+=3;NFSU2_TR(0x5756c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756c6:{NFSU2_TR(0x5756c6);
__builtin_memmove((R+4),(R+24),4);
}
B5756c8:{NFSU2_TR(0x5756c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5756cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575640u);}goto L575640;}
}
B5756cd:L5756cd:{c.instructions+=4;NFSU2_TR(0x5756cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5756d0:{NFSU2_TR(0x5756d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B5756d3:{NFSU2_TR(0x5756d3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5756d6:{NFSU2_TR(0x5756d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5756c5u);}goto L5756c5;}}
}
B5756d8:L5756d8:{c.instructions+=2;NFSU2_TR(0x5756d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5756d9:{NFSU2_TR(0x5756d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5756dc:L5756dc:{c.instructions+=1;NFSU2_TR(0x5756dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5756e0:L5756e0:{c.instructions+=2;NFSU2_TR(0x5756e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5756e1:{NFSU2_TR(0x5756e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5756e4:L5756e4:{c.instructions+=17;NFSU2_TR(0x5756e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756e5:{NFSU2_TR(0x5756e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756e6:{NFSU2_TR(0x5756e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756e7:{NFSU2_TR(0x5756e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+1))));
s1(u32(r4(U+0)),r1(U+4));
}
B5756ea:{NFSU2_TR(0x5756ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756eb:{NFSU2_TR(0x5756eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+13))));
s1(u32(r4(U+0)),r1(U+4));
}
B5756ee:{NFSU2_TR(0x5756ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756ef:{NFSU2_TR(0x5756ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+13))));
s1(u32(r4(U+0)),r1(U+4));
}
B5756f2:{NFSU2_TR(0x5756f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756f3:{NFSU2_TR(0x5756f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa1005756ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+4))));
s1(u32(r4(U+0)),r1(U+4));
}
B5756f9:{NFSU2_TR(0x5756f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756fa:{NFSU2_TR(0x5756fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5756fb:{NFSU2_TR(0x5756fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56005756ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+13))));
s1(u32(r4(U+0)),r1(U+4));
}
B575701:{NFSU2_TR(0x575701);
__builtin_memmove((R+24),(R+4),4);
}
B575703:{NFSU2_TR(0x575703);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B575706:{NFSU2_TR(0x575706);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57570a:{NFSU2_TR(0x57570a);
if(r1(R+518)){{goto L575723;}}
}
B57570c:L57570c:{c.instructions+=1;NFSU2_TR(0x57570c);
__builtin_memmove((R+16),(R+16),4);
}
B575710:L575710:{c.instructions+=3;NFSU2_TR(0x575710);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575711:{NFSU2_TR(0x575711);
__builtin_memmove((R+4),(R+24),4);
}
B575713:{NFSU2_TR(0x575713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575718ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575640u);}goto L575640;}
}
B575718:L575718:{c.instructions+=4;NFSU2_TR(0x575718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57571b:{NFSU2_TR(0x57571b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B57571e:{NFSU2_TR(0x57571e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B575721:{NFSU2_TR(0x575721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575710u);}goto L575710;}}
}
B575723:L575723:{c.instructions+=2;NFSU2_TR(0x575723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575724:{NFSU2_TR(0x575724);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575730:L575730:{c.instructions+=3;NFSU2_TR(0x575730);
__builtin_memmove((R+4),gp(0x865128),4);
}
B575736:{NFSU2_TR(0x575736);
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
B575738:{NFSU2_TR(0x575738);
if(r1(R+518)){{goto L575761;}}
}
B57573a:L57573a:{c.instructions+=5;NFSU2_TR(0x57573a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57573d:{NFSU2_TR(0x57573d);
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
B57573f:{NFSU2_TR(0x57573f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575740:{NFSU2_TR(0x575740);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575743:{NFSU2_TR(0x575743);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57575a;}}
}
B575745:L575745:{c.instructions+=2;NFSU2_TR(0x575745);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B575748:{NFSU2_TR(0x575748);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57575a;}}
}
B57574a:L57574a:{c.instructions+=4;NFSU2_TR(0x57574a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57574d:{NFSU2_TR(0x57574d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57574e:{NFSU2_TR(0x57574e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fb6dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B575755:{NFSU2_TR(0x575755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57575aull));
EXIT(0x575700u);
}
B57575a:L57575a:{c.instructions+=2;NFSU2_TR(0x57575a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B575760:{NFSU2_TR(0x575760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575761:L575761:{c.instructions+=1;NFSU2_TR(0x575761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575770:L575770:{c.instructions+=23;NFSU2_TR(0x575770);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575772:{NFSU2_TR(0x575772);
u8 U[4];
w4(U+0,u32(0x7787aeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575777:{NFSU2_TR(0x575777);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57577d:{NFSU2_TR(0x57577d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57577e:{NFSU2_TR(0x57577e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575785:{NFSU2_TR(0x575785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575786:{NFSU2_TR(0x575786);
__builtin_memmove((R+0),gp(0x866634),1);
}
B57578b:{NFSU2_TR(0x57578b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57578c:{NFSU2_TR(0x57578c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57578e:{NFSU2_TR(0x57578e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B575790:{NFSU2_TR(0x575790);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575791:{NFSU2_TR(0x575791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575792:{NFSU2_TR(0x575792);
__builtin_memmove((R+24),(R+4),4);
}
B575794:{NFSU2_TR(0x575794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575795:{NFSU2_TR(0x575795);
u8 U[4];
w4(U+0,u32(0x7a0604ull));
s4(u32(r4(R+24)),r4(U+0));
}
B57579b:{NFSU2_TR(0x57579b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57579e:{NFSU2_TR(0x57579e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5757a1:{NFSU2_TR(0x5757a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757a4:{NFSU2_TR(0x5757a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757a7:{NFSU2_TR(0x5757a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757aa:{NFSU2_TR(0x5757aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757ad:{NFSU2_TR(0x5757ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757b0:{NFSU2_TR(0x5757b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575f51;}}
}
B5757b6:L5757b6:{c.instructions+=4;NFSU2_TR(0x5757b6);
s4(0x866634,u32(u32(m4(0x866634))|u32(u32(0x1ull))));
}
B5757bd:{NFSU2_TR(0x5757bd);
u8 U[4];
w4(U+0,u32(0x7a05f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5757c2:{NFSU2_TR(0x5757c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5757c6:{NFSU2_TR(0x5757c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5757cbull));
TAIL_STATIC(0x43db50u,43d);
}
B5757cb:L5757cb:{c.instructions+=22;NFSU2_TR(0x5757cb);
__builtin_memmove((R+4),gp(0x7a05ec),4);
}
B5757d1:{NFSU2_TR(0x5757d1);
__builtin_memmove((R+8),gp(0x7a05f0),4);
}
B5757d7:{NFSU2_TR(0x5757d7);
__builtin_memmove(gp(0x7fba54),(R+0),4);
}
B5757dc:{NFSU2_TR(0x5757dc);
__builtin_memmove((R+0),gp(0x7a05e8),4);
}
B5757e1:{NFSU2_TR(0x5757e1);
__builtin_memmove(gp(0x7fba64),(R+0),4);
}
B5757e6:{NFSU2_TR(0x5757e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5757e8:{NFSU2_TR(0x5757e8);
__builtin_memmove(gp(0x7fba70),(R+0),4);
}
B5757ed:{NFSU2_TR(0x5757ed);
__builtin_memmove(gp(0x7fba74),(R+0),4);
}
B5757f2:{NFSU2_TR(0x5757f2);
__builtin_memmove(gp(0x7fba78),(R+0),4);
}
B5757f7:{NFSU2_TR(0x5757f7);
__builtin_memmove(gp(0x7fba7c),(R+0),4);
}
B5757fc:{NFSU2_TR(0x5757fc);
w4(R+20,u32(0x6ull));
}
B575801:{NFSU2_TR(0x575801);
u8 U[4];
w4(U+0,u32(0x7a05d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575806:{NFSU2_TR(0x575806);
__builtin_memmove(gp(0x7fba58),(R+12),4);
}
B57580c:{NFSU2_TR(0x57580c);
__builtin_memmove(gp(0x7fba5c),(R+12),4);
}
B575812:{NFSU2_TR(0x575812);
__builtin_memmove(gp(0x7fba60),(R+12),1);
}
B575818:{NFSU2_TR(0x575818);
s1(0x7fba61,u8(0x1ull));
}
B57581f:{NFSU2_TR(0x57581f);
s1(0x7fba62,u8(0x1ull));
}
B575826:{NFSU2_TR(0x575826);
__builtin_memmove(gp(0x7fba68),(R+4),4);
}
B57582c:{NFSU2_TR(0x57582c);
__builtin_memmove(gp(0x7fba6c),(R+8),4);
}
B575832:{NFSU2_TR(0x575832);
__builtin_memmove(gp(0x7fba80),(R+0),4);
}
B575837:{NFSU2_TR(0x575837);
__builtin_memmove(gp(0x7fba84),(R+20),4);
}
B57583d:{NFSU2_TR(0x57583d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575842ull));
TAIL_STATIC(0x43db50u,43d);
}
B575842:L575842:{c.instructions+=23;NFSU2_TR(0x575842);
__builtin_memmove((R+4),gp(0x7a05cc),4);
}
B575848:{NFSU2_TR(0x575848);
__builtin_memmove((R+8),gp(0x7a05d0),4);
}
B57584e:{NFSU2_TR(0x57584e);
__builtin_memmove(gp(0x7fba98),(R+4),4);
}
B575854:{NFSU2_TR(0x575854);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B575856:{NFSU2_TR(0x575856);
__builtin_memmove(gp(0x7fbaa1),(R+4),4);
}
B57585c:{NFSU2_TR(0x57585c);
__builtin_memmove(gp(0x7fbaa5),(R+4),4);
}
B575862:{NFSU2_TR(0x575862);
__builtin_memmove(gp(0x7fbaa9),(R+4),4);
}
B575868:{NFSU2_TR(0x575868);
__builtin_memmove(gp(0x7fbaad),(R+4),4);
}
B57586e:{NFSU2_TR(0x57586e);
__builtin_memmove(gp(0x7fbab1),(R+4),4);
}
B575874:{NFSU2_TR(0x575874);
__builtin_memmove(gp(0x7fba88),(R+0),4);
}
B575879:{NFSU2_TR(0x575879);
__builtin_memmove((R+0),gp(0x7a05d4),1);
}
B57587e:{NFSU2_TR(0x57587e);
__builtin_memmove(gp(0x7fbab5),(R+4),2);
}
B575885:{NFSU2_TR(0x575885);
u8 U[4];
w4(U+0,u32(0x7a05c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57588a:{NFSU2_TR(0x57588a);
__builtin_memmove(gp(0x7fba8c),(R+12),4);
}
B575890:{NFSU2_TR(0x575890);
__builtin_memmove(gp(0x7fba90),(R+12),4);
}
B575896:{NFSU2_TR(0x575896);
__builtin_memmove(gp(0x7fba94),(R+12),1);
}
B57589c:{NFSU2_TR(0x57589c);
s1(0x7fba95,u8(0x1ull));
}
B5758a3:{NFSU2_TR(0x5758a3);
s1(0x7fba96,u8(0x1ull));
}
B5758aa:{NFSU2_TR(0x5758aa);
__builtin_memmove(gp(0x7fba9c),(R+8),4);
}
B5758b0:{NFSU2_TR(0x5758b0);
__builtin_memmove(gp(0x7fbaa0),(R+0),1);
}
B5758b5:{NFSU2_TR(0x5758b5);
__builtin_memmove(gp(0x7fbab7),(R+4),1);
}
B5758bb:{NFSU2_TR(0x5758bb);
__builtin_memmove(gp(0x7fbab8),(R+20),4);
}
B5758c1:{NFSU2_TR(0x5758c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5758c6ull));
TAIL_STATIC(0x43db50u,43d);
}
B5758c6:L5758c6:{c.instructions+=24;NFSU2_TR(0x5758c6);
__builtin_memmove((R+4),gp(0x7a05b4),4);
}
B5758cc:{NFSU2_TR(0x5758cc);
__builtin_memmove((R+8),gp(0x7a05ac),4);
}
B5758d2:{NFSU2_TR(0x5758d2);
__builtin_memmove(gp(0x7fbad4),(R+4),4);
}
B5758d8:{NFSU2_TR(0x5758d8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5758da:{NFSU2_TR(0x5758da);
__builtin_memmove(gp(0x7fbabc),(R+0),4);
}
B5758df:{NFSU2_TR(0x5758df);
__builtin_memmove((R+0),gp(0x7a05b0),4);
}
B5758e4:{NFSU2_TR(0x5758e4);
__builtin_memmove(gp(0x7fbade),(R+4),4);
}
B5758ea:{NFSU2_TR(0x5758ea);
__builtin_memmove(gp(0x7fbae2),(R+4),4);
}
B5758f0:{NFSU2_TR(0x5758f0);
__builtin_memmove(gp(0x7fbacc),(R+8),4);
}
B5758f6:{NFSU2_TR(0x5758f6);
__builtin_memmove((R+8),gp(0x7a05b8),4);
}
B5758fc:{NFSU2_TR(0x5758fc);
__builtin_memmove(gp(0x7fbad0),(R+0),4);
}
B575901:{NFSU2_TR(0x575901);
__builtin_memmove((R+0),gp(0x7a05bc),2);
}
B575907:{NFSU2_TR(0x575907);
__builtin_memmove(gp(0x7fbae6),(R+4),4);
}
B57590d:{NFSU2_TR(0x57590d);
u8 U[4];
w4(U+0,u32(0x7a0598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575912:{NFSU2_TR(0x575912);
__builtin_memmove(gp(0x7fbac0),(R+12),4);
}
B575918:{NFSU2_TR(0x575918);
__builtin_memmove(gp(0x7fbac4),(R+12),4);
}
B57591e:{NFSU2_TR(0x57591e);
__builtin_memmove(gp(0x7fbac8),(R+12),1);
}
B575924:{NFSU2_TR(0x575924);
s1(0x7fbac9,u8(0x1ull));
}
B57592b:{NFSU2_TR(0x57592b);
s1(0x7fbaca,u8(0x1ull));
}
B575932:{NFSU2_TR(0x575932);
__builtin_memmove(gp(0x7fbad8),(R+8),4);
}
B575938:{NFSU2_TR(0x575938);
__builtin_memmove(gp(0x7fbadc),(R+0),2);
}
B57593e:{NFSU2_TR(0x57593e);
__builtin_memmove(gp(0x7fbaea),(R+4),2);
}
B575945:{NFSU2_TR(0x575945);
__builtin_memmove(gp(0x7fbaec),(R+20),4);
}
B57594b:{NFSU2_TR(0x57594b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575950ull));
TAIL_STATIC(0x43db50u,43d);
}
B575950:L575950:{c.instructions+=24;NFSU2_TR(0x575950);
__builtin_memmove(gp(0x7fbaf0),(R+0),4);
}
B575955:{NFSU2_TR(0x575955);
__builtin_memmove(gp(0x7fbaf4),(R+12),4);
}
B57595b:{NFSU2_TR(0x57595b);
__builtin_memmove(gp(0x7fbaf8),(R+12),4);
}
B575961:{NFSU2_TR(0x575961);
__builtin_memmove(gp(0x7fbafc),(R+12),1);
}
B575967:{NFSU2_TR(0x575967);
s1(0x7fbafd,u8(0x1ull));
}
B57596e:{NFSU2_TR(0x57596e);
__builtin_memmove((R+0),gp(0x7a058c),4);
}
B575973:{NFSU2_TR(0x575973);
__builtin_memmove((R+8),gp(0x7a0588),4);
}
B575979:{NFSU2_TR(0x575979);
__builtin_memmove((R+4),gp(0x7a0590),4);
}
B57597f:{NFSU2_TR(0x57597f);
__builtin_memmove(gp(0x7fbb04),(R+0),4);
}
B575984:{NFSU2_TR(0x575984);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B575986:{NFSU2_TR(0x575986);
__builtin_memmove(gp(0x7fbb0d),(R+0),4);
}
B57598b:{NFSU2_TR(0x57598b);
__builtin_memmove(gp(0x7fbb11),(R+0),4);
}
B575990:{NFSU2_TR(0x575990);
__builtin_memmove(gp(0x7fbb15),(R+0),4);
}
B575995:{NFSU2_TR(0x575995);
__builtin_memmove(gp(0x7fbb19),(R+0),4);
}
B57599a:{NFSU2_TR(0x57599a);
__builtin_memmove(gp(0x7fbb00),(R+8),4);
}
B5759a0:{NFSU2_TR(0x5759a0);
__builtin_memmove((R+8),gp(0x7a0594),1);
}
B5759a6:{NFSU2_TR(0x5759a6);
__builtin_memmove(gp(0x7fbb1d),(R+0),2);
}
B5759ac:{NFSU2_TR(0x5759ac);
u8 U[4];
w4(U+0,u32(0x7a0574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5759b1:{NFSU2_TR(0x5759b1);
s1(0x7fbafe,u8(0x1ull));
}
B5759b8:{NFSU2_TR(0x5759b8);
__builtin_memmove(gp(0x7fbb08),(R+4),4);
}
B5759be:{NFSU2_TR(0x5759be);
__builtin_memmove(gp(0x7fbb0c),(R+8),1);
}
B5759c4:{NFSU2_TR(0x5759c4);
__builtin_memmove(gp(0x7fbb1f),(R+0),1);
}
B5759c9:{NFSU2_TR(0x5759c9);
__builtin_memmove(gp(0x7fbb20),(R+20),4);
}
B5759cf:{NFSU2_TR(0x5759cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5759d4ull));
TAIL_STATIC(0x43db50u,43d);
}
B5759d4:L5759d4:{c.instructions+=22;NFSU2_TR(0x5759d4);
__builtin_memmove((R+8),gp(0x7a0568),4);
}
B5759da:{NFSU2_TR(0x5759da);
__builtin_memmove((R+4),gp(0x7a0564),4);
}
B5759e0:{NFSU2_TR(0x5759e0);
__builtin_memmove(gp(0x7fbb38),(R+8),4);
}
B5759e6:{NFSU2_TR(0x5759e6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5759e8:{NFSU2_TR(0x5759e8);
__builtin_memmove(gp(0x7fbb44),(R+8),4);
}
B5759ee:{NFSU2_TR(0x5759ee);
__builtin_memmove(gp(0x7fbb48),(R+8),4);
}
B5759f4:{NFSU2_TR(0x5759f4);
__builtin_memmove(gp(0x7fbb24),(R+0),4);
}
B5759f9:{NFSU2_TR(0x5759f9);
__builtin_memmove((R+0),gp(0x7a056c),4);
}
B5759fe:{NFSU2_TR(0x5759fe);
__builtin_memmove(gp(0x7fbb34),(R+4),4);
}
B575a04:{NFSU2_TR(0x575a04);
__builtin_memmove((R+4),gp(0x7a0570),4);
}
B575a0a:{NFSU2_TR(0x575a0a);
__builtin_memmove(gp(0x7fbb4c),(R+8),4);
}
B575a10:{NFSU2_TR(0x575a10);
u8 U[4];
w4(U+0,u32(0x7a0550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575a15:{NFSU2_TR(0x575a15);
__builtin_memmove(gp(0x7fbb28),(R+12),4);
}
B575a1b:{NFSU2_TR(0x575a1b);
__builtin_memmove(gp(0x7fbb2c),(R+12),4);
}
B575a21:{NFSU2_TR(0x575a21);
__builtin_memmove(gp(0x7fbb30),(R+12),1);
}
B575a27:{NFSU2_TR(0x575a27);
s1(0x7fbb31,u8(0x1ull));
}
B575a2e:{NFSU2_TR(0x575a2e);
s1(0x7fbb32,u8(0x1ull));
}
B575a35:{NFSU2_TR(0x575a35);
__builtin_memmove(gp(0x7fbb3c),(R+0),4);
}
B575a3a:{NFSU2_TR(0x575a3a);
__builtin_memmove(gp(0x7fbb40),(R+4),4);
}
B575a40:{NFSU2_TR(0x575a40);
__builtin_memmove(gp(0x7fbb50),(R+8),4);
}
B575a46:{NFSU2_TR(0x575a46);
__builtin_memmove(gp(0x7fbb54),(R+20),4);
}
B575a4c:{NFSU2_TR(0x575a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575a51ull));
TAIL_STATIC(0x43db50u,43d);
}
B575a51:L575a51:{c.instructions+=15;NFSU2_TR(0x575a51);
__builtin_memmove((R+4),gp(0x7a054c),2);
}
B575a58:{NFSU2_TR(0x575a58);
__builtin_memmove((R+8),gp(0x7a054e),1);
}
B575a5e:{NFSU2_TR(0x575a5e);
__builtin_memmove(gp(0x7fbb58),(R+0),4);
}
B575a63:{NFSU2_TR(0x575a63);
__builtin_memmove((R+0),gp(0x7a0548),4);
}
B575a68:{NFSU2_TR(0x575a68);
__builtin_memmove(gp(0x7fbb68),(R+0),4);
}
B575a6d:{NFSU2_TR(0x575a6d);
__builtin_memmove(gp(0x7fbb6c),(R+4),2);
}
B575a74:{NFSU2_TR(0x575a74);
__builtin_memmove(gp(0x7fbb5c),(R+12),4);
}
B575a7a:{NFSU2_TR(0x575a7a);
__builtin_memmove(gp(0x7fbb60),(R+12),4);
}
B575a80:{NFSU2_TR(0x575a80);
__builtin_memmove(gp(0x7fbb64),(R+12),1);
}
B575a86:{NFSU2_TR(0x575a86);
s1(0x7fbb65,u8(0x1ull));
}
B575a8d:{NFSU2_TR(0x575a8d);
s1(0x7fbb66,u8(0x1ull));
}
B575a94:{NFSU2_TR(0x575a94);
__builtin_memmove(gp(0x7fbb6e),(R+8),1);
}
B575a9a:{NFSU2_TR(0x575a9a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B575a9c:{NFSU2_TR(0x575a9c);
__builtin_memmove((R+4),(R+20),4);
}
B575a9e:{NFSU2_TR(0x575a9e);
w4(R+28,u32(0x7fbb6full));
}
B575aa3:L575aa3:{c.instructions+=1;NFSU2_TR(0x575aa3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L575aa5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575aa3u);}goto L575aa3;}
}
B575aa5:L575aa5:{c.instructions+=4;NFSU2_TR(0x575aa5);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B575aa6:{NFSU2_TR(0x575aa6);
u8 U[4];
w4(U+0,u32(0x7a0534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575aab:{NFSU2_TR(0x575aab);
__builtin_memmove(gp(0x7fbb88),(R+20),4);
}
B575ab1:{NFSU2_TR(0x575ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575ab6ull));
TAIL_STATIC(0x43db50u,43d);
}
B575ab6:L575ab6:{c.instructions+=22;NFSU2_TR(0x575ab6);
__builtin_memmove((R+4),gp(0x7a052c),4);
}
B575abc:{NFSU2_TR(0x575abc);
__builtin_memmove((R+8),gp(0x7a0530),2);
}
B575ac3:{NFSU2_TR(0x575ac3);
__builtin_memmove(gp(0x7fbb8c),(R+0),4);
}
B575ac8:{NFSU2_TR(0x575ac8);
__builtin_memmove((R+0),gp(0x7a0528),4);
}
B575acd:{NFSU2_TR(0x575acd);
__builtin_memmove(gp(0x7fbb9c),(R+0),4);
}
B575ad2:{NFSU2_TR(0x575ad2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B575ad4:{NFSU2_TR(0x575ad4);
__builtin_memmove(gp(0x7fbba6),(R+0),4);
}
B575ad9:{NFSU2_TR(0x575ad9);
__builtin_memmove(gp(0x7fbbaa),(R+0),4);
}
B575ade:{NFSU2_TR(0x575ade);
__builtin_memmove(gp(0x7fbbae),(R+0),4);
}
B575ae3:{NFSU2_TR(0x575ae3);
__builtin_memmove(gp(0x7fbbb2),(R+0),4);
}
B575ae8:{NFSU2_TR(0x575ae8);
__builtin_memmove(gp(0x7fbbb6),(R+0),4);
}
B575aed:{NFSU2_TR(0x575aed);
__builtin_memmove(gp(0x7fbb90),(R+12),4);
}
B575af3:{NFSU2_TR(0x575af3);
__builtin_memmove(gp(0x7fbb94),(R+12),4);
}
B575af9:{NFSU2_TR(0x575af9);
__builtin_memmove(gp(0x7fbb98),(R+12),1);
}
B575aff:{NFSU2_TR(0x575aff);
s1(0x7fbb99,u8(0x1ull));
}
B575b06:{NFSU2_TR(0x575b06);
s1(0x7fbb9a,u8(0x1ull));
}
B575b0d:{NFSU2_TR(0x575b0d);
__builtin_memmove(gp(0x7fbba0),(R+4),4);
}
B575b13:{NFSU2_TR(0x575b13);
__builtin_memmove(gp(0x7fbba4),(R+8),2);
}
B575b1a:{NFSU2_TR(0x575b1a);
__builtin_memmove(gp(0x7fbbba),(R+0),2);
}
B575b20:{NFSU2_TR(0x575b20);
__builtin_memmove(gp(0x7fbbbc),(R+20),4);
}
B575b26:{NFSU2_TR(0x575b26);
u8 U[4];
w4(U+0,u32(0x7a0514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575b2b:{NFSU2_TR(0x575b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575b30ull));
TAIL_STATIC(0x43db50u,43d);
}
B575b30:L575b30:{c.instructions+=24;NFSU2_TR(0x575b30);
__builtin_memmove((R+8),gp(0x7a0508),4);
}
B575b36:{NFSU2_TR(0x575b36);
__builtin_memmove((R+4),gp(0x7a0504),4);
}
B575b3c:{NFSU2_TR(0x575b3c);
__builtin_memmove(gp(0x7fbbd4),(R+8),4);
}
B575b42:{NFSU2_TR(0x575b42);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575b44:{NFSU2_TR(0x575b44);
__builtin_memmove(gp(0x7fbbde),(R+8),4);
}
B575b4a:{NFSU2_TR(0x575b4a);
__builtin_memmove(gp(0x7fbbe2),(R+8),4);
}
B575b50:{NFSU2_TR(0x575b50);
__builtin_memmove(gp(0x7fbbe6),(R+8),4);
}
B575b56:{NFSU2_TR(0x575b56);
__builtin_memmove(gp(0x7fbbc0),(R+0),4);
}
B575b5b:{NFSU2_TR(0x575b5b);
__builtin_memmove((R+0),gp(0x7a050c),4);
}
B575b60:{NFSU2_TR(0x575b60);
__builtin_memmove(gp(0x7fbbd0),(R+4),4);
}
B575b66:{NFSU2_TR(0x575b66);
__builtin_memmove((R+4),gp(0x7a0510),2);
}
B575b6d:{NFSU2_TR(0x575b6d);
__builtin_memmove(gp(0x7fbbea),(R+8),4);
}
B575b73:{NFSU2_TR(0x575b73);
w4(R+20,u32(0x7ull));
}
B575b78:{NFSU2_TR(0x575b78);
u8 U[4];
w4(U+0,u32(0x79c1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575b7d:{NFSU2_TR(0x575b7d);
__builtin_memmove(gp(0x7fbbc4),(R+12),4);
}
B575b83:{NFSU2_TR(0x575b83);
__builtin_memmove(gp(0x7fbbc8),(R+12),4);
}
B575b89:{NFSU2_TR(0x575b89);
__builtin_memmove(gp(0x7fbbcc),(R+12),1);
}
B575b8f:{NFSU2_TR(0x575b8f);
s1(0x7fbbcd,u8(0x1ull));
}
B575b96:{NFSU2_TR(0x575b96);
s1(0x7fbbce,u8(0x1ull));
}
B575b9d:{NFSU2_TR(0x575b9d);
__builtin_memmove(gp(0x7fbbd8),(R+0),4);
}
B575ba2:{NFSU2_TR(0x575ba2);
__builtin_memmove(gp(0x7fbbdc),(R+4),2);
}
B575ba9:{NFSU2_TR(0x575ba9);
__builtin_memmove(gp(0x7fbbee),(R+8),2);
}
B575bb0:{NFSU2_TR(0x575bb0);
__builtin_memmove(gp(0x7fbbf0),(R+20),4);
}
B575bb6:{NFSU2_TR(0x575bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575bbbull));
TAIL_STATIC(0x43db50u,43d);
}
B575bbb:L575bbb:{c.instructions+=23;NFSU2_TR(0x575bbb);
__builtin_memmove((R+4),gp(0x7a04f8),4);
}
B575bc1:{NFSU2_TR(0x575bc1);
__builtin_memmove((R+8),gp(0x7a04fc),4);
}
B575bc7:{NFSU2_TR(0x575bc7);
__builtin_memmove(gp(0x7fbc08),(R+4),4);
}
B575bcd:{NFSU2_TR(0x575bcd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B575bcf:{NFSU2_TR(0x575bcf);
__builtin_memmove(gp(0x7fbc12),(R+4),4);
}
B575bd5:{NFSU2_TR(0x575bd5);
__builtin_memmove(gp(0x7fbbf4),(R+0),4);
}
B575bda:{NFSU2_TR(0x575bda);
__builtin_memmove((R+0),gp(0x7a04f4),4);
}
B575bdf:{NFSU2_TR(0x575bdf);
__builtin_memmove(gp(0x7fbc16),(R+4),4);
}
B575be5:{NFSU2_TR(0x575be5);
__builtin_memmove(gp(0x7fbc1a),(R+4),4);
}
B575beb:{NFSU2_TR(0x575beb);
__builtin_memmove(gp(0x7fbc04),(R+0),4);
}
B575bf0:{NFSU2_TR(0x575bf0);
__builtin_memmove((R+0),gp(0x7a0500),2);
}
B575bf6:{NFSU2_TR(0x575bf6);
__builtin_memmove(gp(0x7fbc1e),(R+4),4);
}
B575bfc:{NFSU2_TR(0x575bfc);
u8 U[4];
w4(U+0,u32(0x7a04e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575c01:{NFSU2_TR(0x575c01);
__builtin_memmove(gp(0x7fbbf8),(R+12),4);
}
B575c07:{NFSU2_TR(0x575c07);
__builtin_memmove(gp(0x7fbbfc),(R+12),4);
}
B575c0d:{NFSU2_TR(0x575c0d);
__builtin_memmove(gp(0x7fbc00),(R+12),1);
}
B575c13:{NFSU2_TR(0x575c13);
s1(0x7fbc01,u8(0x1ull));
}
B575c1a:{NFSU2_TR(0x575c1a);
s1(0x7fbc02,u8(0x1ull));
}
B575c21:{NFSU2_TR(0x575c21);
__builtin_memmove(gp(0x7fbc0c),(R+8),4);
}
B575c27:{NFSU2_TR(0x575c27);
__builtin_memmove(gp(0x7fbc10),(R+0),2);
}
B575c2d:{NFSU2_TR(0x575c2d);
__builtin_memmove(gp(0x7fbc22),(R+4),2);
}
B575c34:{NFSU2_TR(0x575c34);
__builtin_memmove(gp(0x7fbc24),(R+20),4);
}
B575c3a:{NFSU2_TR(0x575c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575c3full));
TAIL_STATIC(0x43db50u,43d);
}
B575c3f:L575c3f:{c.instructions+=22;NFSU2_TR(0x575c3f);
__builtin_memmove((R+8),gp(0x7a04dc),4);
}
B575c45:{NFSU2_TR(0x575c45);
__builtin_memmove((R+4),gp(0x7a04e4),2);
}
B575c4c:{NFSU2_TR(0x575c4c);
__builtin_memmove(gp(0x7fbc38),(R+8),4);
}
B575c52:{NFSU2_TR(0x575c52);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575c54:{NFSU2_TR(0x575c54);
__builtin_memmove(gp(0x7fbc42),(R+8),4);
}
B575c5a:{NFSU2_TR(0x575c5a);
__builtin_memmove(gp(0x7fbc46),(R+8),4);
}
B575c60:{NFSU2_TR(0x575c60);
__builtin_memmove(gp(0x7fbc4a),(R+8),4);
}
B575c66:{NFSU2_TR(0x575c66);
__builtin_memmove(gp(0x7fbc4e),(R+8),4);
}
B575c6c:{NFSU2_TR(0x575c6c);
__builtin_memmove(gp(0x7fbc28),(R+0),4);
}
B575c71:{NFSU2_TR(0x575c71);
__builtin_memmove((R+0),gp(0x7a04e0),4);
}
B575c76:{NFSU2_TR(0x575c76);
__builtin_memmove(gp(0x7fbc52),(R+8),4);
}
B575c7c:{NFSU2_TR(0x575c7c);
u8 U[4];
w4(U+0,u32(0x7a04d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575c81:{NFSU2_TR(0x575c81);
__builtin_memmove(gp(0x7fbc2c),(R+12),4);
}
B575c87:{NFSU2_TR(0x575c87);
__builtin_memmove(gp(0x7fbc30),(R+12),4);
}
B575c8d:{NFSU2_TR(0x575c8d);
__builtin_memmove(gp(0x7fbc34),(R+12),1);
}
B575c93:{NFSU2_TR(0x575c93);
s1(0x7fbc35,u8(0x1ull));
}
B575c9a:{NFSU2_TR(0x575c9a);
s1(0x7fbc36,u8(0x1ull));
}
B575ca1:{NFSU2_TR(0x575ca1);
__builtin_memmove(gp(0x7fbc3c),(R+0),4);
}
B575ca6:{NFSU2_TR(0x575ca6);
__builtin_memmove(gp(0x7fbc40),(R+4),2);
}
B575cad:{NFSU2_TR(0x575cad);
__builtin_memmove(gp(0x7fbc56),(R+8),2);
}
B575cb4:{NFSU2_TR(0x575cb4);
__builtin_memmove(gp(0x7fbc58),(R+20),4);
}
B575cba:{NFSU2_TR(0x575cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575cbfull));
TAIL_STATIC(0x43db50u,43d);
}
B575cbf:L575cbf:{c.instructions+=21;NFSU2_TR(0x575cbf);
__builtin_memmove((R+4),gp(0x7a04cc),4);
}
B575cc5:{NFSU2_TR(0x575cc5);
__builtin_memmove(gp(0x7fbc5c),(R+0),4);
}
B575cca:{NFSU2_TR(0x575cca);
__builtin_memmove((R+0),gp(0x7a04c8),4);
}
B575ccf:{NFSU2_TR(0x575ccf);
__builtin_memmove(gp(0x7fbc60),(R+12),4);
}
B575cd5:{NFSU2_TR(0x575cd5);
__builtin_memmove(gp(0x7fbc64),(R+12),4);
}
B575cdb:{NFSU2_TR(0x575cdb);
__builtin_memmove(gp(0x7fbc68),(R+12),1);
}
B575ce1:{NFSU2_TR(0x575ce1);
s1(0x7fbc69,u8(0x1ull));
}
B575ce8:{NFSU2_TR(0x575ce8);
s1(0x7fbc6a,u8(0x1ull));
}
B575cef:{NFSU2_TR(0x575cef);
__builtin_memmove(gp(0x7fbc6c),(R+0),4);
}
B575cf4:{NFSU2_TR(0x575cf4);
__builtin_memmove(gp(0x7fbc70),(R+4),4);
}
B575cfa:{NFSU2_TR(0x575cfa);
__builtin_memmove((R+8),gp(0x7a04d0),4);
}
B575d00:{NFSU2_TR(0x575d00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B575d02:{NFSU2_TR(0x575d02);
__builtin_memmove(gp(0x7fbc78),(R+0),4);
}
B575d07:{NFSU2_TR(0x575d07);
__builtin_memmove(gp(0x7fbc7c),(R+0),4);
}
B575d0c:{NFSU2_TR(0x575d0c);
__builtin_memmove(gp(0x7fbc80),(R+0),4);
}
B575d11:{NFSU2_TR(0x575d11);
__builtin_memmove(gp(0x7fbc84),(R+0),4);
}
B575d16:{NFSU2_TR(0x575d16);
u8 U[4];
w4(U+0,u32(0x7a04b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575d1b:{NFSU2_TR(0x575d1b);
__builtin_memmove(gp(0x7fbc74),(R+8),4);
}
B575d21:{NFSU2_TR(0x575d21);
__builtin_memmove(gp(0x7fbc88),(R+0),4);
}
B575d26:{NFSU2_TR(0x575d26);
__builtin_memmove(gp(0x7fbc8c),(R+20),4);
}
B575d2c:{NFSU2_TR(0x575d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575d31ull));
TAIL_STATIC(0x43db50u,43d);
}
B575d31:L575d31:{c.instructions+=23;NFSU2_TR(0x575d31);
__builtin_memmove((R+8),gp(0x7a04ac),4);
}
B575d37:{NFSU2_TR(0x575d37);
__builtin_memmove((R+4),gp(0x7a04a8),4);
}
B575d3d:{NFSU2_TR(0x575d3d);
__builtin_memmove(gp(0x7fbca4),(R+8),4);
}
B575d43:{NFSU2_TR(0x575d43);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575d45:{NFSU2_TR(0x575d45);
__builtin_memmove(gp(0x7fbcae),(R+8),4);
}
B575d4b:{NFSU2_TR(0x575d4b);
__builtin_memmove(gp(0x7fbcb2),(R+8),4);
}
B575d51:{NFSU2_TR(0x575d51);
__builtin_memmove(gp(0x7fbcb6),(R+8),4);
}
B575d57:{NFSU2_TR(0x575d57);
__builtin_memmove(gp(0x7fbc90),(R+0),4);
}
B575d5c:{NFSU2_TR(0x575d5c);
__builtin_memmove((R+0),gp(0x7a04b0),4);
}
B575d61:{NFSU2_TR(0x575d61);
__builtin_memmove(gp(0x7fbca0),(R+4),4);
}
B575d67:{NFSU2_TR(0x575d67);
__builtin_memmove((R+4),gp(0x7a04b4),2);
}
B575d6e:{NFSU2_TR(0x575d6e);
__builtin_memmove(gp(0x7fbcba),(R+8),4);
}
B575d74:{NFSU2_TR(0x575d74);
u8 U[4];
w4(U+0,u32(0x7a049cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575d79:{NFSU2_TR(0x575d79);
__builtin_memmove(gp(0x7fbc94),(R+12),4);
}
B575d7f:{NFSU2_TR(0x575d7f);
__builtin_memmove(gp(0x7fbc98),(R+12),4);
}
B575d85:{NFSU2_TR(0x575d85);
__builtin_memmove(gp(0x7fbc9c),(R+12),1);
}
B575d8b:{NFSU2_TR(0x575d8b);
s1(0x7fbc9d,u8(0x1ull));
}
B575d92:{NFSU2_TR(0x575d92);
s1(0x7fbc9e,u8(0x1ull));
}
B575d99:{NFSU2_TR(0x575d99);
__builtin_memmove(gp(0x7fbca8),(R+0),4);
}
B575d9e:{NFSU2_TR(0x575d9e);
__builtin_memmove(gp(0x7fbcac),(R+4),2);
}
B575da5:{NFSU2_TR(0x575da5);
__builtin_memmove(gp(0x7fbcbe),(R+8),2);
}
B575dac:{NFSU2_TR(0x575dac);
__builtin_memmove(gp(0x7fbcc0),(R+20),4);
}
B575db2:{NFSU2_TR(0x575db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575db7ull));
TAIL_STATIC(0x43db50u,43d);
}
B575db7:L575db7:{c.instructions+=69;NFSU2_TR(0x575db7);
__builtin_memmove((R+8),gp(0x7a0498),2);
}
B575dbe:{NFSU2_TR(0x575dbe);
__builtin_memmove((R+4),gp(0x7a0494),4);
}
B575dc4:{NFSU2_TR(0x575dc4);
__builtin_memmove(gp(0x7fbcc4),(R+0),4);
}
B575dc9:{NFSU2_TR(0x575dc9);
__builtin_memmove((R+0),gp(0x7a0490),4);
}
B575dce:{NFSU2_TR(0x575dce);
__builtin_memmove(gp(0x7fbcd4),(R+0),4);
}
B575dd3:{NFSU2_TR(0x575dd3);
__builtin_memmove(gp(0x7fbcdc),(R+8),2);
}
B575dda:{NFSU2_TR(0x575dda);
__builtin_memmove((R+8),gp(0x7a0488),4);
}
B575de0:{NFSU2_TR(0x575de0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B575de2:{NFSU2_TR(0x575de2);
__builtin_memmove(gp(0x7fbd0c),(R+8),4);
}
B575de8:{NFSU2_TR(0x575de8);
__builtin_memmove(gp(0x7fbcde),(R+0),4);
}
B575ded:{NFSU2_TR(0x575ded);
__builtin_memmove(gp(0x7fbce2),(R+0),4);
}
B575df2:{NFSU2_TR(0x575df2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B575df5:{NFSU2_TR(0x575df5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575df7:{NFSU2_TR(0x575df7);
__builtin_memmove(gp(0x7fbd12),(R+8),4);
}
B575dfd:{NFSU2_TR(0x575dfd);
__builtin_memmove(gp(0x7fbce6),(R+0),4);
}
B575e02:{NFSU2_TR(0x575e02);
__builtin_memmove(gp(0x7fbd16),(R+8),4);
}
B575e08:{NFSU2_TR(0x575e08);
__builtin_memmove(gp(0x7fbcea),(R+0),4);
}
B575e0d:{NFSU2_TR(0x575e0d);
__builtin_memmove(gp(0x7fbcd8),(R+4),4);
}
B575e13:{NFSU2_TR(0x575e13);
__builtin_memmove((R+4),gp(0x7a0484),4);
}
B575e19:{NFSU2_TR(0x575e19);
__builtin_memmove(gp(0x7fbd1a),(R+8),4);
}
B575e1f:{NFSU2_TR(0x575e1f);
__builtin_memmove(gp(0x7fbcee),(R+0),4);
}
B575e24:{NFSU2_TR(0x575e24);
__builtin_memmove(gp(0x7fbd1e),(R+8),4);
}
B575e2a:{NFSU2_TR(0x575e2a);
__builtin_memmove(gp(0x7fbcf2),(R+0),2);
}
B575e30:{NFSU2_TR(0x575e30);
w4(R+0,u32(0x5ull));
}
B575e35:{NFSU2_TR(0x575e35);
__builtin_memmove(gp(0x7fbd08),(R+4),4);
}
B575e3b:{NFSU2_TR(0x575e3b);
__builtin_memmove((R+4),gp(0x7a048c),2);
}
B575e42:{NFSU2_TR(0x575e42);
__builtin_memmove(gp(0x7fbd22),(R+8),4);
}
B575e48:{NFSU2_TR(0x575e48);
__builtin_memmove(gp(0x7fbcc8),(R+12),4);
}
B575e4e:{NFSU2_TR(0x575e4e);
__builtin_memmove(gp(0x7fbccc),(R+12),4);
}
B575e54:{NFSU2_TR(0x575e54);
__builtin_memmove(gp(0x7fbcd0),(R+12),1);
}
B575e5a:{NFSU2_TR(0x575e5a);
s1(0x7fbcd1,u8(0x1ull));
}
B575e61:{NFSU2_TR(0x575e61);
s1(0x7fbcd2,u8(0x1ull));
}
B575e68:{NFSU2_TR(0x575e68);
__builtin_memmove(gp(0x7fbcf4),(R+0),4);
}
B575e6d:{NFSU2_TR(0x575e6d);
s4(0x7fbcf8,u32(0x2ull));
}
B575e77:{NFSU2_TR(0x575e77);
__builtin_memmove(gp(0x7fbcfc),(R+12),4);
}
B575e7d:{NFSU2_TR(0x575e7d);
__builtin_memmove(gp(0x7fbd00),(R+12),4);
}
B575e83:{NFSU2_TR(0x575e83);
__builtin_memmove(gp(0x7fbd04),(R+12),1);
}
B575e89:{NFSU2_TR(0x575e89);
s1(0x7fbd05,u8(0x1ull));
}
B575e90:{NFSU2_TR(0x575e90);
s1(0x7fbd06,u8(0x1ull));
}
B575e97:{NFSU2_TR(0x575e97);
__builtin_memmove(gp(0x7fbd10),(R+4),2);
}
B575e9e:{NFSU2_TR(0x575e9e);
__builtin_memmove(gp(0x7fbd26),(R+8),2);
}
B575ea5:{NFSU2_TR(0x575ea5);
__builtin_memmove(gp(0x7fbd28),(R+0),4);
}
B575eaa:{NFSU2_TR(0x575eaa);
s4(0x7fbd2c,u32(0x3ull));
}
B575eb4:{NFSU2_TR(0x575eb4);
__builtin_memmove(gp(0x7fbd30),(R+12),4);
}
B575eba:{NFSU2_TR(0x575eba);
__builtin_memmove(gp(0x7fbd34),(R+12),4);
}
B575ec0:{NFSU2_TR(0x575ec0);
__builtin_memmove(gp(0x7fbd38),(R+12),1);
}
B575ec6:{NFSU2_TR(0x575ec6);
s1(0x7fbd39,u8(0x1ull));
}
B575ecd:{NFSU2_TR(0x575ecd);
__builtin_memmove((R+8),gp(0x7a047c),4);
}
B575ed3:{NFSU2_TR(0x575ed3);
__builtin_memmove((R+4),gp(0x7a0478),4);
}
B575ed9:{NFSU2_TR(0x575ed9);
__builtin_memmove(gp(0x7fbd40),(R+8),4);
}
B575edf:{NFSU2_TR(0x575edf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575ee1:{NFSU2_TR(0x575ee1);
__builtin_memmove(gp(0x7fbd48),(R+8),4);
}
B575ee7:{NFSU2_TR(0x575ee7);
__builtin_memmove(gp(0x7fbd4c),(R+8),4);
}
B575eed:{NFSU2_TR(0x575eed);
__builtin_memmove(gp(0x7fbd50),(R+8),4);
}
B575ef3:{NFSU2_TR(0x575ef3);
__builtin_memmove(gp(0x7fbd3c),(R+4),4);
}
B575ef9:{NFSU2_TR(0x575ef9);
__builtin_memmove((R+4),gp(0x7a0480),4);
}
B575eff:{NFSU2_TR(0x575eff);
__builtin_memmove(gp(0x7fbd54),(R+8),4);
}
B575f05:{NFSU2_TR(0x575f05);
s1(0x7fbd3a,u8(0x1ull));
}
B575f0c:{NFSU2_TR(0x575f0c);
__builtin_memmove(gp(0x7fbd44),(R+4),4);
}
B575f12:{NFSU2_TR(0x575f12);
__builtin_memmove(gp(0x7fbd58),(R+8),4);
}
B575f18:{NFSU2_TR(0x575f18);
__builtin_memmove(gp(0x7fbd5c),(R+0),4);
}
B575f1d:{NFSU2_TR(0x575f1d);
s4(0x7fbd60,u32(0x4ull));
}
B575f27:{NFSU2_TR(0x575f27);
__builtin_memmove(gp(0x7fbd64),(R+12),4);
}
B575f2d:{NFSU2_TR(0x575f2d);
__builtin_memmove(gp(0x7fbd68),(R+12),4);
}
B575f33:{NFSU2_TR(0x575f33);
__builtin_memmove(gp(0x7fbd6c),(R+12),1);
}
B575f39:{NFSU2_TR(0x575f39);
s1(0x7fbd6d,u8(0x1ull));
}
B575f40:{NFSU2_TR(0x575f40);
s1(0x7fbd6e,u8(0x1ull));
}
B575f47:{NFSU2_TR(0x575f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B575f4f:{NFSU2_TR(0x575f4f);
{goto L575f56;}
}
B575f51:L575f51:{c.instructions+=1;NFSU2_TR(0x575f51);
w4(R+20,u32(0x7ull));
}
B575f56:L575f56:{c.instructions+=5;NFSU2_TR(0x575f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x7fb960ull));
s4(u32(r4(U+0)),r4(U+4));
}
B575f5d:{NFSU2_TR(0x575f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B575f64:{NFSU2_TR(0x575f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575f68:{NFSU2_TR(0x575f68);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B575f6a:{NFSU2_TR(0x575f6a);
__builtin_memmove((R+12),(R+12),4);
}
B575f70:L575f70:{c.instructions+=3;NFSU2_TR(0x575f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575f73:{NFSU2_TR(0x575f73);
u8 U[24];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B575f77:{NFSU2_TR(0x575f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575fa2;}}
}
B575f79:L575f79:{c.instructions+=4;NFSU2_TR(0x575f79);
__builtin_memmove((R+4),(R+0),4);
}
B575f7b:{NFSU2_TR(0x575f7b);
u8 U[4];
w4(U+0,u32(0x79c1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575f80:{NFSU2_TR(0x575f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B575f83:{NFSU2_TR(0x575f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x575f88ull));
TAIL_STATIC(0x43db50u,43d);
}
B575f88:L575f88:{c.instructions+=4;NFSU2_TR(0x575f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575f8b:{NFSU2_TR(0x575f8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B575f8e:{NFSU2_TR(0x575f8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B575f90:{NFSU2_TR(0x575f90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575f9d;}}
}
B575f92:L575f92:{c.instructions+=2;NFSU2_TR(0x575f92);
u8 U[8];
__builtin_memmove((U+0),gp(0x864f24),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B575f98:{NFSU2_TR(0x575f98);
if(r1(R+518)){{goto L575f9d;}}
}
B575f9a:L575f9a:{c.instructions+=1;NFSU2_TR(0x575f9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B575f9d:L575f9d:{c.instructions+=1;NFSU2_TR(0x575f9d);
w4(R+20,u32(0x7ull));
}
B575fa2:L575fa2:{c.instructions+=7;NFSU2_TR(0x575fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575fa6:{NFSU2_TR(0x575fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575fa9:{NFSU2_TR(0x575fa9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B575faa:{NFSU2_TR(0x575faa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x34ull))));
}
B575fad:{NFSU2_TR(0x575fad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B575faf:{NFSU2_TR(0x575faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575fb3:{NFSU2_TR(0x575fb3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575f70u);}goto L575f70;}}
}
B575fb5:L575fb5:{c.instructions+=9;NFSU2_TR(0x575fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B575fb9:{NFSU2_TR(0x575fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B575fba:{NFSU2_TR(0x575fba);
__builtin_memmove((R+0),(R+24),4);
}
B575fbc:{NFSU2_TR(0x575fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575fbd:{NFSU2_TR(0x575fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B575fbe:{NFSU2_TR(0x575fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B575fbf:{NFSU2_TR(0x575fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B575fc6:{NFSU2_TR(0x575fc6);
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
B575fc9:{NFSU2_TR(0x575fc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B575fd0:L575fd0:{c.instructions+=5;NFSU2_TR(0x575fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575fd3:{NFSU2_TR(0x575fd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B575fd4:{NFSU2_TR(0x575fd4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B575fd6:{NFSU2_TR(0x575fd6);
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
B575fd8:{NFSU2_TR(0x575fd8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L575ffa;}}
}
B575fda:L575fda:{c.instructions+=2;NFSU2_TR(0x575fda);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B575fdc:{NFSU2_TR(0x575fdc);
__builtin_memmove((R+16),(R+16),4);
}
B575fe0:L575fe0:{c.instructions+=4;NFSU2_TR(0x575fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575fe3:{NFSU2_TR(0x575fe3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B575fe5:{NFSU2_TR(0x575fe5);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x31ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B575fe9:{NFSU2_TR(0x575fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L575fef;}}
}
B575feb:L575feb:{c.instructions+=1;NFSU2_TR(0x575feb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B575fef:L575fef:{c.instructions+=5;NFSU2_TR(0x575fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B575ff2:{NFSU2_TR(0x575ff2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B575ff3:{NFSU2_TR(0x575ff3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x34ull))));
}
B575ff6:{NFSU2_TR(0x575ff6);
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
B575ff8:{NFSU2_TR(0x575ff8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x575fe0u);}goto L575fe0;}}
}
B575ffa:L575ffa:{c.instructions+=2;NFSU2_TR(0x575ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B575ffb:{NFSU2_TR(0x575ffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x575,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
