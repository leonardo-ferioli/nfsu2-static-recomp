#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x773,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x773,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_773(u8* __restrict R,Cpu& c);
u32 page_773(Cpu& c){return body_773(c.regs.data(),c);}
__attribute__((noinline)) u32 body_773(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x773002:goto L773002;
case 0x773003:c.instructions+=1;goto B773003;
case 0x773008:goto L773008;
case 0x77300b:c.instructions+=1;goto B77300b;
case 0x77300c:goto L77300c;
case 0x77300e:c.instructions+=4;goto B77300e;
case 0x773013:c.instructions+=3;goto B773013;
case 0x773016:c.instructions+=2;goto B773016;
case 0x773017:c.instructions+=1;goto B773017;
case 0x77301c:goto L77301c;
case 0x77301f:c.instructions+=1;goto B77301f;
case 0x773020:goto L773020;
case 0x773022:c.instructions+=4;goto B773022;
case 0x773027:c.instructions+=3;goto B773027;
case 0x77302a:c.instructions+=2;goto B77302a;
case 0x77302b:c.instructions+=1;goto B77302b;
case 0x773030:goto L773030;
case 0x773033:c.instructions+=1;goto B773033;
case 0x773034:goto L773034;
case 0x773036:c.instructions+=4;goto B773036;
case 0x77303b:c.instructions+=3;goto B77303b;
case 0x77303e:c.instructions+=2;goto B77303e;
case 0x77303f:c.instructions+=1;goto B77303f;
case 0x773044:goto L773044;
case 0x773047:c.instructions+=1;goto B773047;
case 0x773048:goto L773048;
case 0x77304a:c.instructions+=4;goto B77304a;
case 0x77304f:c.instructions+=3;goto B77304f;
case 0x773052:c.instructions+=2;goto B773052;
case 0x773053:c.instructions+=1;goto B773053;
case 0x773058:goto L773058;
case 0x77305b:c.instructions+=1;goto B77305b;
case 0x77305c:goto L77305c;
case 0x77305e:c.instructions+=4;goto B77305e;
case 0x773063:c.instructions+=3;goto B773063;
case 0x773066:c.instructions+=2;goto B773066;
case 0x773067:c.instructions+=1;goto B773067;
case 0x77306c:goto L77306c;
case 0x77306f:c.instructions+=1;goto B77306f;
case 0x773070:goto L773070;
case 0x773072:c.instructions+=4;goto B773072;
case 0x773077:c.instructions+=3;goto B773077;
case 0x77307a:c.instructions+=2;goto B77307a;
case 0x77307b:c.instructions+=1;goto B77307b;
case 0x773080:goto L773080;
case 0x773083:c.instructions+=1;goto B773083;
case 0x773084:goto L773084;
case 0x773089:c.instructions+=1;goto B773089;
case 0x773090:goto L773090;
case 0x773092:c.instructions+=4;goto B773092;
case 0x773097:c.instructions+=3;goto B773097;
case 0x77309a:c.instructions+=2;goto B77309a;
case 0x77309b:c.instructions+=1;goto B77309b;
case 0x7730a0:goto L7730a0;
case 0x7730a3:c.instructions+=1;goto B7730a3;
case 0x7730a4:goto L7730a4;
case 0x7730a6:c.instructions+=4;goto B7730a6;
case 0x7730ab:c.instructions+=3;goto B7730ab;
case 0x7730ae:c.instructions+=2;goto B7730ae;
case 0x7730af:c.instructions+=1;goto B7730af;
case 0x7730b4:goto L7730b4;
case 0x7730b7:c.instructions+=1;goto B7730b7;
case 0x7730b8:goto L7730b8;
case 0x7730bd:c.instructions+=1;goto B7730bd;
case 0x7730d0:goto L7730d0;
case 0x7730d2:c.instructions+=4;goto B7730d2;
case 0x7730d7:c.instructions+=3;goto B7730d7;
case 0x7730da:c.instructions+=2;goto B7730da;
case 0x7730db:c.instructions+=1;goto B7730db;
case 0x7730e0:goto L7730e0;
case 0x7730e3:c.instructions+=1;goto B7730e3;
case 0x7730e4:goto L7730e4;
case 0x7730e6:c.instructions+=4;goto B7730e6;
case 0x7730eb:c.instructions+=3;goto B7730eb;
case 0x7730ee:c.instructions+=2;goto B7730ee;
case 0x7730ef:c.instructions+=1;goto B7730ef;
case 0x7730f4:goto L7730f4;
case 0x7730f7:c.instructions+=1;goto B7730f7;
case 0x7730f8:goto L7730f8;
case 0x7730fa:c.instructions+=4;goto B7730fa;
case 0x7730ff:c.instructions+=3;goto B7730ff;
case 0x773102:c.instructions+=2;goto B773102;
case 0x773103:c.instructions+=1;goto B773103;
case 0x773108:goto L773108;
case 0x77310b:c.instructions+=1;goto B77310b;
case 0x77310c:goto L77310c;
case 0x77310e:c.instructions+=4;goto B77310e;
case 0x773113:c.instructions+=3;goto B773113;
case 0x773116:c.instructions+=2;goto B773116;
case 0x773117:c.instructions+=1;goto B773117;
case 0x77311c:goto L77311c;
case 0x77311f:c.instructions+=1;goto B77311f;
case 0x773120:goto L773120;
case 0x773122:c.instructions+=4;goto B773122;
case 0x773127:c.instructions+=3;goto B773127;
case 0x77312a:c.instructions+=2;goto B77312a;
case 0x77312b:c.instructions+=1;goto B77312b;
case 0x773130:goto L773130;
case 0x773133:c.instructions+=1;goto B773133;
case 0x773134:goto L773134;
case 0x773136:c.instructions+=4;goto B773136;
case 0x77313b:c.instructions+=3;goto B77313b;
case 0x77313e:c.instructions+=2;goto B77313e;
case 0x77313f:c.instructions+=1;goto B77313f;
case 0x773144:goto L773144;
case 0x773147:c.instructions+=1;goto B773147;
case 0x773148:goto L773148;
case 0x77314a:c.instructions+=4;goto B77314a;
case 0x77314f:c.instructions+=3;goto B77314f;
case 0x773152:c.instructions+=2;goto B773152;
case 0x773153:c.instructions+=1;goto B773153;
case 0x773158:goto L773158;
case 0x77315b:c.instructions+=1;goto B77315b;
case 0x77315c:goto L77315c;
case 0x77315e:c.instructions+=4;goto B77315e;
case 0x773163:c.instructions+=3;goto B773163;
case 0x773166:c.instructions+=2;goto B773166;
case 0x773167:c.instructions+=1;goto B773167;
case 0x77316c:goto L77316c;
case 0x77316f:c.instructions+=1;goto B77316f;
case 0x773170:goto L773170;
case 0x773172:c.instructions+=4;goto B773172;
case 0x773177:c.instructions+=3;goto B773177;
case 0x77317a:c.instructions+=2;goto B77317a;
case 0x77317b:c.instructions+=1;goto B77317b;
case 0x773180:goto L773180;
case 0x773183:c.instructions+=1;goto B773183;
case 0x773184:goto L773184;
case 0x773189:c.instructions+=1;goto B773189;
case 0x773190:goto L773190;
case 0x773192:c.instructions+=4;goto B773192;
case 0x773197:c.instructions+=3;goto B773197;
case 0x77319a:c.instructions+=2;goto B77319a;
case 0x77319b:c.instructions+=1;goto B77319b;
case 0x7731a0:goto L7731a0;
case 0x7731a3:c.instructions+=1;goto B7731a3;
case 0x7731a4:goto L7731a4;
case 0x7731a6:c.instructions+=4;goto B7731a6;
case 0x7731ab:c.instructions+=3;goto B7731ab;
case 0x7731ae:c.instructions+=2;goto B7731ae;
case 0x7731af:c.instructions+=1;goto B7731af;
case 0x7731b4:goto L7731b4;
case 0x7731b7:c.instructions+=1;goto B7731b7;
case 0x7731b8:goto L7731b8;
case 0x7731ba:c.instructions+=4;goto B7731ba;
case 0x7731bf:c.instructions+=3;goto B7731bf;
case 0x7731c2:c.instructions+=2;goto B7731c2;
case 0x7731c3:c.instructions+=1;goto B7731c3;
case 0x7731c8:goto L7731c8;
case 0x7731cb:c.instructions+=1;goto B7731cb;
case 0x7731cc:goto L7731cc;
case 0x7731ce:c.instructions+=4;goto B7731ce;
case 0x7731d3:c.instructions+=3;goto B7731d3;
case 0x7731d6:c.instructions+=2;goto B7731d6;
case 0x7731d7:c.instructions+=1;goto B7731d7;
case 0x7731dc:goto L7731dc;
case 0x7731df:c.instructions+=1;goto B7731df;
case 0x7731e0:goto L7731e0;
case 0x7731e2:c.instructions+=4;goto B7731e2;
case 0x7731e7:c.instructions+=3;goto B7731e7;
case 0x7731ea:c.instructions+=2;goto B7731ea;
case 0x7731eb:c.instructions+=1;goto B7731eb;
case 0x7731f0:goto L7731f0;
case 0x7731f3:c.instructions+=1;goto B7731f3;
case 0x7731f4:goto L7731f4;
case 0x7731f6:c.instructions+=4;goto B7731f6;
case 0x7731fb:c.instructions+=3;goto B7731fb;
case 0x7731fe:c.instructions+=2;goto B7731fe;
case 0x7731ff:c.instructions+=1;goto B7731ff;
case 0x773204:goto L773204;
case 0x773207:c.instructions+=1;goto B773207;
case 0x773208:goto L773208;
case 0x77320a:c.instructions+=4;goto B77320a;
case 0x77320f:c.instructions+=3;goto B77320f;
case 0x773212:c.instructions+=2;goto B773212;
case 0x773213:c.instructions+=1;goto B773213;
case 0x773218:goto L773218;
case 0x77321b:c.instructions+=1;goto B77321b;
case 0x77321c:goto L77321c;
case 0x77321e:c.instructions+=4;goto B77321e;
case 0x773223:c.instructions+=3;goto B773223;
case 0x773226:c.instructions+=2;goto B773226;
case 0x773227:c.instructions+=1;goto B773227;
case 0x77322c:goto L77322c;
case 0x77322f:c.instructions+=1;goto B77322f;
case 0x773230:goto L773230;
case 0x773232:c.instructions+=4;goto B773232;
case 0x773237:c.instructions+=3;goto B773237;
case 0x77323a:c.instructions+=2;goto B77323a;
case 0x77323b:c.instructions+=1;goto B77323b;
case 0x773240:goto L773240;
case 0x773243:c.instructions+=1;goto B773243;
case 0x773244:goto L773244;
case 0x773246:c.instructions+=4;goto B773246;
case 0x77324b:c.instructions+=3;goto B77324b;
case 0x77324e:c.instructions+=2;goto B77324e;
case 0x77324f:c.instructions+=1;goto B77324f;
case 0x773254:goto L773254;
case 0x773257:c.instructions+=1;goto B773257;
case 0x773258:goto L773258;
case 0x77325a:c.instructions+=4;goto B77325a;
case 0x77325f:c.instructions+=3;goto B77325f;
case 0x773262:c.instructions+=2;goto B773262;
case 0x773263:c.instructions+=1;goto B773263;
case 0x773268:goto L773268;
case 0x77326b:c.instructions+=1;goto B77326b;
case 0x77326c:goto L77326c;
case 0x77326e:c.instructions+=4;goto B77326e;
case 0x773273:c.instructions+=3;goto B773273;
case 0x773276:c.instructions+=2;goto B773276;
case 0x773277:c.instructions+=1;goto B773277;
case 0x77327c:goto L77327c;
case 0x77327f:c.instructions+=1;goto B77327f;
case 0x773280:goto L773280;
case 0x773282:c.instructions+=4;goto B773282;
case 0x773287:c.instructions+=3;goto B773287;
case 0x77328a:c.instructions+=2;goto B77328a;
case 0x77328b:c.instructions+=1;goto B77328b;
case 0x773290:goto L773290;
case 0x773293:c.instructions+=1;goto B773293;
case 0x773294:goto L773294;
case 0x773296:c.instructions+=4;goto B773296;
case 0x77329b:c.instructions+=3;goto B77329b;
case 0x77329e:c.instructions+=2;goto B77329e;
case 0x77329f:c.instructions+=1;goto B77329f;
case 0x7732a4:goto L7732a4;
case 0x7732a7:c.instructions+=1;goto B7732a7;
case 0x7732a8:goto L7732a8;
case 0x7732aa:c.instructions+=4;goto B7732aa;
case 0x7732af:c.instructions+=3;goto B7732af;
case 0x7732b2:c.instructions+=2;goto B7732b2;
case 0x7732b3:c.instructions+=1;goto B7732b3;
case 0x7732b8:goto L7732b8;
case 0x7732bb:c.instructions+=1;goto B7732bb;
case 0x7732bc:goto L7732bc;
case 0x7732be:c.instructions+=4;goto B7732be;
case 0x7732c3:c.instructions+=3;goto B7732c3;
case 0x7732c6:c.instructions+=2;goto B7732c6;
case 0x7732c7:c.instructions+=1;goto B7732c7;
case 0x7732cc:goto L7732cc;
case 0x7732cf:c.instructions+=1;goto B7732cf;
case 0x7732d0:goto L7732d0;
case 0x7732d2:c.instructions+=4;goto B7732d2;
case 0x7732d7:c.instructions+=3;goto B7732d7;
case 0x7732da:c.instructions+=2;goto B7732da;
case 0x7732db:c.instructions+=1;goto B7732db;
case 0x7732e0:goto L7732e0;
case 0x7732e3:c.instructions+=1;goto B7732e3;
case 0x7732e4:goto L7732e4;
case 0x7732e6:c.instructions+=4;goto B7732e6;
case 0x7732eb:c.instructions+=3;goto B7732eb;
case 0x7732ee:c.instructions+=2;goto B7732ee;
case 0x7732ef:c.instructions+=1;goto B7732ef;
case 0x7732f4:goto L7732f4;
case 0x7732f7:c.instructions+=1;goto B7732f7;
case 0x7732f8:goto L7732f8;
case 0x7732fa:c.instructions+=4;goto B7732fa;
case 0x7732ff:c.instructions+=3;goto B7732ff;
case 0x773302:c.instructions+=2;goto B773302;
case 0x773303:c.instructions+=1;goto B773303;
case 0x773308:goto L773308;
case 0x77330b:c.instructions+=1;goto B77330b;
case 0x77330c:goto L77330c;
case 0x77330e:c.instructions+=4;goto B77330e;
case 0x773313:c.instructions+=3;goto B773313;
case 0x773316:c.instructions+=2;goto B773316;
case 0x773317:c.instructions+=1;goto B773317;
case 0x77331c:goto L77331c;
case 0x77331f:c.instructions+=1;goto B77331f;
case 0x773320:goto L773320;
case 0x773322:c.instructions+=4;goto B773322;
case 0x773327:c.instructions+=3;goto B773327;
case 0x77332a:c.instructions+=2;goto B77332a;
case 0x77332b:c.instructions+=1;goto B77332b;
case 0x773330:goto L773330;
case 0x773333:c.instructions+=1;goto B773333;
case 0x773334:goto L773334;
case 0x773336:c.instructions+=4;goto B773336;
case 0x77333b:c.instructions+=3;goto B77333b;
case 0x77333e:c.instructions+=2;goto B77333e;
case 0x77333f:c.instructions+=1;goto B77333f;
case 0x773344:goto L773344;
case 0x773347:c.instructions+=1;goto B773347;
case 0x773348:goto L773348;
case 0x77334a:c.instructions+=4;goto B77334a;
case 0x77334f:c.instructions+=3;goto B77334f;
case 0x773352:c.instructions+=2;goto B773352;
case 0x773353:c.instructions+=1;goto B773353;
case 0x773358:goto L773358;
case 0x77335b:c.instructions+=1;goto B77335b;
case 0x77335c:goto L77335c;
case 0x773361:c.instructions+=1;goto B773361;
case 0x773370:goto L773370;
case 0x773372:c.instructions+=4;goto B773372;
case 0x773377:c.instructions+=3;goto B773377;
case 0x77337a:c.instructions+=2;goto B77337a;
case 0x77337b:c.instructions+=1;goto B77337b;
case 0x773380:goto L773380;
case 0x773383:c.instructions+=1;goto B773383;
case 0x773384:goto L773384;
case 0x773386:c.instructions+=4;goto B773386;
case 0x77338b:c.instructions+=3;goto B77338b;
case 0x77338e:c.instructions+=2;goto B77338e;
case 0x77338f:c.instructions+=1;goto B77338f;
case 0x773394:goto L773394;
case 0x773397:c.instructions+=1;goto B773397;
case 0x773398:goto L773398;
case 0x77339a:c.instructions+=4;goto B77339a;
case 0x77339f:c.instructions+=3;goto B77339f;
case 0x7733a2:c.instructions+=2;goto B7733a2;
case 0x7733a3:c.instructions+=1;goto B7733a3;
case 0x7733a8:goto L7733a8;
case 0x7733ab:c.instructions+=1;goto B7733ab;
case 0x7733ac:goto L7733ac;
case 0x7733ae:c.instructions+=4;goto B7733ae;
case 0x7733b3:c.instructions+=3;goto B7733b3;
case 0x7733b6:c.instructions+=2;goto B7733b6;
case 0x7733b7:c.instructions+=1;goto B7733b7;
case 0x7733bc:goto L7733bc;
case 0x7733bf:c.instructions+=1;goto B7733bf;
case 0x7733c0:goto L7733c0;
case 0x7733c2:c.instructions+=4;goto B7733c2;
case 0x7733c7:c.instructions+=3;goto B7733c7;
case 0x7733ca:c.instructions+=2;goto B7733ca;
case 0x7733cb:c.instructions+=1;goto B7733cb;
case 0x7733d0:goto L7733d0;
case 0x7733d3:c.instructions+=1;goto B7733d3;
case 0x7733d4:goto L7733d4;
case 0x7733d6:c.instructions+=4;goto B7733d6;
case 0x7733db:c.instructions+=3;goto B7733db;
case 0x7733de:c.instructions+=2;goto B7733de;
case 0x7733df:c.instructions+=1;goto B7733df;
case 0x7733e4:goto L7733e4;
case 0x7733e7:c.instructions+=1;goto B7733e7;
case 0x7733e8:goto L7733e8;
case 0x7733ea:c.instructions+=4;goto B7733ea;
case 0x7733ef:c.instructions+=3;goto B7733ef;
case 0x7733f2:c.instructions+=2;goto B7733f2;
case 0x7733f3:c.instructions+=1;goto B7733f3;
case 0x7733f8:goto L7733f8;
case 0x7733fb:c.instructions+=1;goto B7733fb;
case 0x7733fc:goto L7733fc;
case 0x7733fe:c.instructions+=4;goto B7733fe;
case 0x773403:c.instructions+=3;goto B773403;
case 0x773406:c.instructions+=2;goto B773406;
case 0x773407:c.instructions+=1;goto B773407;
case 0x77340c:goto L77340c;
case 0x77340f:c.instructions+=1;goto B77340f;
case 0x773410:goto L773410;
case 0x773415:c.instructions+=1;goto B773415;
case 0x773420:goto L773420;
case 0x773422:c.instructions+=4;goto B773422;
case 0x773427:c.instructions+=3;goto B773427;
case 0x77342a:c.instructions+=2;goto B77342a;
case 0x77342b:c.instructions+=1;goto B77342b;
case 0x773430:goto L773430;
case 0x773433:c.instructions+=1;goto B773433;
case 0x773434:goto L773434;
case 0x773436:c.instructions+=4;goto B773436;
case 0x77343b:c.instructions+=3;goto B77343b;
case 0x77343e:c.instructions+=2;goto B77343e;
case 0x77343f:c.instructions+=1;goto B77343f;
case 0x773444:goto L773444;
case 0x773447:c.instructions+=1;goto B773447;
case 0x773448:goto L773448;
case 0x77344a:c.instructions+=4;goto B77344a;
case 0x77344f:c.instructions+=3;goto B77344f;
case 0x773452:c.instructions+=2;goto B773452;
case 0x773453:c.instructions+=1;goto B773453;
case 0x773458:goto L773458;
case 0x77345b:c.instructions+=1;goto B77345b;
case 0x77345c:goto L77345c;
case 0x77345e:c.instructions+=4;goto B77345e;
case 0x773463:c.instructions+=3;goto B773463;
case 0x773466:c.instructions+=2;goto B773466;
case 0x773467:c.instructions+=1;goto B773467;
case 0x77346c:goto L77346c;
case 0x77346f:c.instructions+=1;goto B77346f;
case 0x773470:goto L773470;
case 0x773472:c.instructions+=4;goto B773472;
case 0x773477:c.instructions+=3;goto B773477;
case 0x77347a:c.instructions+=2;goto B77347a;
case 0x77347b:c.instructions+=1;goto B77347b;
case 0x773480:goto L773480;
case 0x773483:c.instructions+=1;goto B773483;
case 0x773484:goto L773484;
case 0x773486:c.instructions+=4;goto B773486;
case 0x77348b:c.instructions+=3;goto B77348b;
case 0x77348e:c.instructions+=2;goto B77348e;
case 0x77348f:c.instructions+=1;goto B77348f;
case 0x773494:goto L773494;
case 0x773497:c.instructions+=1;goto B773497;
case 0x773498:goto L773498;
case 0x77349a:c.instructions+=4;goto B77349a;
case 0x77349f:c.instructions+=3;goto B77349f;
case 0x7734a2:c.instructions+=2;goto B7734a2;
case 0x7734a3:c.instructions+=1;goto B7734a3;
case 0x7734a8:goto L7734a8;
case 0x7734ab:c.instructions+=1;goto B7734ab;
case 0x7734ac:goto L7734ac;
case 0x7734b1:c.instructions+=1;goto B7734b1;
case 0x7734c0:goto L7734c0;
case 0x7734c2:c.instructions+=4;goto B7734c2;
case 0x7734c7:c.instructions+=3;goto B7734c7;
case 0x7734ca:c.instructions+=2;goto B7734ca;
case 0x7734cb:c.instructions+=1;goto B7734cb;
case 0x7734d0:goto L7734d0;
case 0x7734d3:c.instructions+=1;goto B7734d3;
case 0x7734d4:goto L7734d4;
case 0x7734d6:c.instructions+=4;goto B7734d6;
case 0x7734db:c.instructions+=3;goto B7734db;
case 0x7734de:c.instructions+=2;goto B7734de;
case 0x7734df:c.instructions+=1;goto B7734df;
case 0x7734e4:goto L7734e4;
case 0x7734e7:c.instructions+=1;goto B7734e7;
case 0x7734e8:goto L7734e8;
case 0x7734ea:c.instructions+=4;goto B7734ea;
case 0x7734ef:c.instructions+=3;goto B7734ef;
case 0x7734f2:c.instructions+=2;goto B7734f2;
case 0x7734f3:c.instructions+=1;goto B7734f3;
case 0x7734f8:goto L7734f8;
case 0x7734fb:c.instructions+=1;goto B7734fb;
case 0x7734fc:goto L7734fc;
case 0x7734fe:c.instructions+=4;goto B7734fe;
case 0x773503:c.instructions+=3;goto B773503;
case 0x773506:c.instructions+=2;goto B773506;
case 0x773507:c.instructions+=1;goto B773507;
case 0x77350c:goto L77350c;
case 0x77350f:c.instructions+=1;goto B77350f;
case 0x773510:goto L773510;
case 0x773512:c.instructions+=4;goto B773512;
case 0x773517:c.instructions+=3;goto B773517;
case 0x77351a:c.instructions+=2;goto B77351a;
case 0x77351b:c.instructions+=1;goto B77351b;
case 0x773520:goto L773520;
case 0x773523:c.instructions+=1;goto B773523;
case 0x773524:goto L773524;
case 0x773526:c.instructions+=4;goto B773526;
case 0x77352b:c.instructions+=3;goto B77352b;
case 0x77352e:c.instructions+=2;goto B77352e;
case 0x77352f:c.instructions+=1;goto B77352f;
case 0x773534:goto L773534;
case 0x773537:c.instructions+=1;goto B773537;
case 0x773538:goto L773538;
case 0x77353a:c.instructions+=4;goto B77353a;
case 0x77353f:c.instructions+=3;goto B77353f;
case 0x773542:c.instructions+=2;goto B773542;
case 0x773543:c.instructions+=1;goto B773543;
case 0x773548:goto L773548;
case 0x77354b:c.instructions+=1;goto B77354b;
case 0x77354c:goto L77354c;
case 0x77354e:c.instructions+=4;goto B77354e;
case 0x773553:c.instructions+=3;goto B773553;
case 0x773556:c.instructions+=2;goto B773556;
case 0x773557:c.instructions+=1;goto B773557;
case 0x77355c:goto L77355c;
case 0x77355f:c.instructions+=1;goto B77355f;
case 0x773560:goto L773560;
case 0x773562:c.instructions+=4;goto B773562;
case 0x773567:c.instructions+=3;goto B773567;
case 0x77356a:c.instructions+=2;goto B77356a;
case 0x77356b:c.instructions+=1;goto B77356b;
case 0x773570:goto L773570;
case 0x773573:c.instructions+=1;goto B773573;
case 0x773574:goto L773574;
case 0x773576:c.instructions+=4;goto B773576;
case 0x77357b:c.instructions+=3;goto B77357b;
case 0x77357e:c.instructions+=2;goto B77357e;
case 0x77357f:c.instructions+=1;goto B77357f;
case 0x773584:goto L773584;
case 0x773587:c.instructions+=1;goto B773587;
case 0x773588:goto L773588;
case 0x77358a:c.instructions+=4;goto B77358a;
case 0x77358f:c.instructions+=3;goto B77358f;
case 0x773592:c.instructions+=2;goto B773592;
case 0x773593:c.instructions+=1;goto B773593;
case 0x773598:goto L773598;
case 0x77359b:c.instructions+=1;goto B77359b;
case 0x77359c:goto L77359c;
case 0x77359e:c.instructions+=4;goto B77359e;
case 0x7735a3:c.instructions+=3;goto B7735a3;
case 0x7735a6:c.instructions+=2;goto B7735a6;
case 0x7735a7:c.instructions+=1;goto B7735a7;
case 0x7735ac:goto L7735ac;
case 0x7735af:c.instructions+=1;goto B7735af;
case 0x7735b0:goto L7735b0;
case 0x7735b5:c.instructions+=1;goto B7735b5;
case 0x7735c0:goto L7735c0;
case 0x7735c2:c.instructions+=4;goto B7735c2;
case 0x7735c7:c.instructions+=3;goto B7735c7;
case 0x7735ca:c.instructions+=2;goto B7735ca;
case 0x7735cb:c.instructions+=1;goto B7735cb;
case 0x7735d0:goto L7735d0;
case 0x7735d3:c.instructions+=1;goto B7735d3;
case 0x7735d4:goto L7735d4;
case 0x7735d6:c.instructions+=4;goto B7735d6;
case 0x7735db:c.instructions+=3;goto B7735db;
case 0x7735de:c.instructions+=2;goto B7735de;
case 0x7735df:c.instructions+=1;goto B7735df;
case 0x7735e4:goto L7735e4;
case 0x7735e7:c.instructions+=1;goto B7735e7;
case 0x7735e8:goto L7735e8;
case 0x7735ed:c.instructions+=1;goto B7735ed;
case 0x773600:goto L773600;
case 0x773602:c.instructions+=4;goto B773602;
case 0x773607:c.instructions+=3;goto B773607;
case 0x77360a:c.instructions+=2;goto B77360a;
case 0x77360b:c.instructions+=1;goto B77360b;
case 0x773610:goto L773610;
case 0x773613:c.instructions+=1;goto B773613;
case 0x773614:goto L773614;
case 0x773616:c.instructions+=4;goto B773616;
case 0x77361b:c.instructions+=3;goto B77361b;
case 0x77361e:c.instructions+=2;goto B77361e;
case 0x77361f:c.instructions+=1;goto B77361f;
case 0x773624:goto L773624;
case 0x773627:c.instructions+=1;goto B773627;
case 0x773628:goto L773628;
case 0x77362a:c.instructions+=4;goto B77362a;
case 0x77362f:c.instructions+=3;goto B77362f;
case 0x773632:c.instructions+=2;goto B773632;
case 0x773633:c.instructions+=1;goto B773633;
case 0x773638:goto L773638;
case 0x77363b:c.instructions+=1;goto B77363b;
case 0x77363c:goto L77363c;
case 0x773641:c.instructions+=1;goto B773641;
case 0x773650:goto L773650;
case 0x773652:c.instructions+=4;goto B773652;
case 0x773657:c.instructions+=3;goto B773657;
case 0x77365a:c.instructions+=2;goto B77365a;
case 0x77365b:c.instructions+=1;goto B77365b;
case 0x773660:goto L773660;
case 0x773663:c.instructions+=1;goto B773663;
case 0x773664:goto L773664;
case 0x773669:c.instructions+=1;goto B773669;
case 0x773670:goto L773670;
case 0x773672:c.instructions+=4;goto B773672;
case 0x773677:c.instructions+=3;goto B773677;
case 0x77367a:c.instructions+=2;goto B77367a;
case 0x77367b:c.instructions+=1;goto B77367b;
case 0x773680:goto L773680;
case 0x773683:c.instructions+=1;goto B773683;
case 0x773684:goto L773684;
case 0x773689:c.instructions+=1;goto B773689;
case 0x773690:goto L773690;
case 0x773692:c.instructions+=4;goto B773692;
case 0x773697:c.instructions+=3;goto B773697;
case 0x77369a:c.instructions+=2;goto B77369a;
case 0x77369b:c.instructions+=1;goto B77369b;
case 0x7736a0:goto L7736a0;
case 0x7736a3:c.instructions+=1;goto B7736a3;
case 0x7736a4:goto L7736a4;
case 0x7736a6:c.instructions+=4;goto B7736a6;
case 0x7736ab:c.instructions+=3;goto B7736ab;
case 0x7736ae:c.instructions+=2;goto B7736ae;
case 0x7736af:c.instructions+=1;goto B7736af;
case 0x7736b4:goto L7736b4;
case 0x7736b7:c.instructions+=1;goto B7736b7;
case 0x7736b8:goto L7736b8;
case 0x7736ba:c.instructions+=4;goto B7736ba;
case 0x7736bf:c.instructions+=3;goto B7736bf;
case 0x7736c2:c.instructions+=2;goto B7736c2;
case 0x7736c3:c.instructions+=1;goto B7736c3;
case 0x7736c8:goto L7736c8;
case 0x7736cb:c.instructions+=1;goto B7736cb;
case 0x7736cc:goto L7736cc;
case 0x7736d1:c.instructions+=1;goto B7736d1;
case 0x7736e0:goto L7736e0;
case 0x7736e3:c.instructions+=1;goto B7736e3;
case 0x7736e8:goto L7736e8;
case 0x7736eb:c.instructions+=2;goto B7736eb;
case 0x7736ee:c.instructions+=1;goto B7736ee;
case 0x7736f3:goto L7736f3;
case 0x7736f8:c.instructions+=1;goto B7736f8;
case 0x773700:goto L773700;
case 0x773702:c.instructions+=4;goto B773702;
case 0x773707:c.instructions+=3;goto B773707;
case 0x77370a:c.instructions+=2;goto B77370a;
case 0x77370b:c.instructions+=1;goto B77370b;
case 0x773710:goto L773710;
case 0x773713:c.instructions+=1;goto B773713;
case 0x773714:goto L773714;
case 0x773719:c.instructions+=1;goto B773719;
case 0x773720:goto L773720;
case 0x773722:c.instructions+=4;goto B773722;
case 0x773727:c.instructions+=3;goto B773727;
case 0x77372a:c.instructions+=2;goto B77372a;
case 0x77372b:c.instructions+=1;goto B77372b;
case 0x773730:goto L773730;
case 0x773733:c.instructions+=1;goto B773733;
case 0x773734:goto L773734;
case 0x773736:c.instructions+=4;goto B773736;
case 0x77373b:c.instructions+=3;goto B77373b;
case 0x77373e:c.instructions+=2;goto B77373e;
case 0x77373f:c.instructions+=1;goto B77373f;
case 0x773744:goto L773744;
case 0x773747:c.instructions+=1;goto B773747;
case 0x773748:goto L773748;
case 0x77374a:c.instructions+=4;goto B77374a;
case 0x77374f:c.instructions+=3;goto B77374f;
case 0x773752:c.instructions+=2;goto B773752;
case 0x773753:c.instructions+=1;goto B773753;
case 0x773758:goto L773758;
case 0x77375b:c.instructions+=1;goto B77375b;
case 0x77375c:goto L77375c;
case 0x773761:c.instructions+=1;goto B773761;
case 0x773770:goto L773770;
case 0x773772:c.instructions+=4;goto B773772;
case 0x773777:c.instructions+=3;goto B773777;
case 0x77377a:c.instructions+=2;goto B77377a;
case 0x77377b:c.instructions+=1;goto B77377b;
case 0x773780:goto L773780;
case 0x773783:c.instructions+=1;goto B773783;
case 0x773784:goto L773784;
case 0x773789:c.instructions+=1;goto B773789;
case 0x773790:goto L773790;
case 0x773792:c.instructions+=4;goto B773792;
case 0x773797:c.instructions+=3;goto B773797;
case 0x77379a:c.instructions+=2;goto B77379a;
case 0x77379b:c.instructions+=1;goto B77379b;
case 0x7737a0:goto L7737a0;
case 0x7737a3:c.instructions+=1;goto B7737a3;
case 0x7737a4:goto L7737a4;
case 0x7737a6:c.instructions+=4;goto B7737a6;
case 0x7737ab:c.instructions+=3;goto B7737ab;
case 0x7737ae:c.instructions+=2;goto B7737ae;
case 0x7737af:c.instructions+=1;goto B7737af;
case 0x7737b4:goto L7737b4;
case 0x7737b7:c.instructions+=1;goto B7737b7;
case 0x7737b8:goto L7737b8;
case 0x7737bd:c.instructions+=1;goto B7737bd;
case 0x7737d0:goto L7737d0;
case 0x7737d2:c.instructions+=4;goto B7737d2;
case 0x7737d7:c.instructions+=3;goto B7737d7;
case 0x7737da:c.instructions+=2;goto B7737da;
case 0x7737db:c.instructions+=1;goto B7737db;
case 0x7737e0:goto L7737e0;
case 0x7737e3:c.instructions+=1;goto B7737e3;
case 0x7737e4:goto L7737e4;
case 0x7737e9:c.instructions+=1;goto B7737e9;
case 0x7737f0:goto L7737f0;
case 0x7737f2:c.instructions+=4;goto B7737f2;
case 0x7737f7:c.instructions+=3;goto B7737f7;
case 0x7737fa:c.instructions+=2;goto B7737fa;
case 0x7737fb:c.instructions+=1;goto B7737fb;
case 0x773800:goto L773800;
case 0x773803:c.instructions+=1;goto B773803;
case 0x773804:goto L773804;
case 0x773809:c.instructions+=1;goto B773809;
case 0x773810:goto L773810;
case 0x773813:c.instructions+=1;goto B773813;
case 0x773818:goto L773818;
case 0x77381d:c.instructions+=1;goto B77381d;
case 0x773830:goto L773830;
case 0x773832:c.instructions+=4;goto B773832;
case 0x773837:c.instructions+=3;goto B773837;
case 0x77383a:c.instructions+=2;goto B77383a;
case 0x77383b:c.instructions+=1;goto B77383b;
case 0x773840:goto L773840;
case 0x773843:c.instructions+=1;goto B773843;
case 0x773844:goto L773844;
case 0x773846:c.instructions+=4;goto B773846;
case 0x77384b:c.instructions+=3;goto B77384b;
case 0x77384e:c.instructions+=2;goto B77384e;
case 0x77384f:c.instructions+=1;goto B77384f;
case 0x773854:goto L773854;
case 0x773857:c.instructions+=1;goto B773857;
case 0x773858:goto L773858;
case 0x77385a:c.instructions+=4;goto B77385a;
case 0x77385f:c.instructions+=3;goto B77385f;
case 0x773862:c.instructions+=2;goto B773862;
case 0x773863:c.instructions+=1;goto B773863;
case 0x773868:goto L773868;
case 0x77386b:c.instructions+=1;goto B77386b;
case 0x77386c:goto L77386c;
case 0x77386e:c.instructions+=4;goto B77386e;
case 0x773873:c.instructions+=3;goto B773873;
case 0x773876:c.instructions+=2;goto B773876;
case 0x773877:c.instructions+=1;goto B773877;
case 0x77387c:goto L77387c;
case 0x77387f:c.instructions+=1;goto B77387f;
case 0x773880:goto L773880;
case 0x773885:c.instructions+=1;goto B773885;
case 0x773890:goto L773890;
case 0x773896:c.instructions+=1;goto B773896;
case 0x77389b:goto L77389b;
case 0x7738a0:c.instructions+=1;goto B7738a0;
case 0x7738b0:goto L7738b0;
case 0x7738b2:c.instructions+=4;goto B7738b2;
case 0x7738b7:c.instructions+=3;goto B7738b7;
case 0x7738ba:c.instructions+=2;goto B7738ba;
case 0x7738bb:c.instructions+=1;goto B7738bb;
case 0x7738c0:goto L7738c0;
case 0x7738c3:c.instructions+=1;goto B7738c3;
case 0x7738c4:goto L7738c4;
case 0x7738c6:c.instructions+=4;goto B7738c6;
case 0x7738cb:c.instructions+=3;goto B7738cb;
case 0x7738ce:c.instructions+=2;goto B7738ce;
case 0x7738cf:c.instructions+=1;goto B7738cf;
case 0x7738d4:goto L7738d4;
case 0x7738d7:c.instructions+=1;goto B7738d7;
case 0x7738d8:goto L7738d8;
case 0x7738da:c.instructions+=4;goto B7738da;
case 0x7738df:c.instructions+=3;goto B7738df;
case 0x7738e2:c.instructions+=2;goto B7738e2;
case 0x7738e3:c.instructions+=1;goto B7738e3;
case 0x7738e8:goto L7738e8;
case 0x7738eb:c.instructions+=1;goto B7738eb;
case 0x7738ec:goto L7738ec;
case 0x7738ee:c.instructions+=4;goto B7738ee;
case 0x7738f3:c.instructions+=3;goto B7738f3;
case 0x7738f6:c.instructions+=2;goto B7738f6;
case 0x7738f7:c.instructions+=1;goto B7738f7;
case 0x7738fc:goto L7738fc;
case 0x7738ff:c.instructions+=1;goto B7738ff;
case 0x773900:goto L773900;
case 0x773902:c.instructions+=4;goto B773902;
case 0x773907:c.instructions+=3;goto B773907;
case 0x77390a:c.instructions+=2;goto B77390a;
case 0x77390b:c.instructions+=1;goto B77390b;
case 0x773910:goto L773910;
case 0x773913:c.instructions+=1;goto B773913;
case 0x773914:goto L773914;
case 0x773919:c.instructions+=1;goto B773919;
case 0x773920:goto L773920;
case 0x773922:c.instructions+=4;goto B773922;
case 0x773927:c.instructions+=3;goto B773927;
case 0x77392a:c.instructions+=2;goto B77392a;
case 0x77392b:c.instructions+=1;goto B77392b;
case 0x773930:goto L773930;
case 0x773933:c.instructions+=1;goto B773933;
case 0x773934:goto L773934;
case 0x773936:c.instructions+=4;goto B773936;
case 0x77393b:c.instructions+=3;goto B77393b;
case 0x77393e:c.instructions+=2;goto B77393e;
case 0x77393f:c.instructions+=1;goto B77393f;
case 0x773944:goto L773944;
case 0x773947:c.instructions+=1;goto B773947;
case 0x773948:goto L773948;
case 0x77394a:c.instructions+=4;goto B77394a;
case 0x77394f:c.instructions+=3;goto B77394f;
case 0x773952:c.instructions+=2;goto B773952;
case 0x773953:c.instructions+=1;goto B773953;
case 0x773958:goto L773958;
case 0x77395b:c.instructions+=1;goto B77395b;
case 0x77395c:goto L77395c;
case 0x773961:c.instructions+=1;goto B773961;
case 0x773970:goto L773970;
case 0x773972:c.instructions+=4;goto B773972;
case 0x773977:c.instructions+=3;goto B773977;
case 0x77397a:c.instructions+=2;goto B77397a;
case 0x77397b:c.instructions+=1;goto B77397b;
case 0x773980:goto L773980;
case 0x773983:c.instructions+=1;goto B773983;
case 0x773984:goto L773984;
case 0x773986:c.instructions+=4;goto B773986;
case 0x77398b:c.instructions+=3;goto B77398b;
case 0x77398e:c.instructions+=2;goto B77398e;
case 0x77398f:c.instructions+=1;goto B77398f;
case 0x773994:goto L773994;
case 0x773997:c.instructions+=1;goto B773997;
case 0x773998:goto L773998;
case 0x77399a:c.instructions+=4;goto B77399a;
case 0x77399f:c.instructions+=3;goto B77399f;
case 0x7739a2:c.instructions+=2;goto B7739a2;
case 0x7739a3:c.instructions+=1;goto B7739a3;
case 0x7739a8:goto L7739a8;
case 0x7739ab:c.instructions+=1;goto B7739ab;
case 0x7739ac:goto L7739ac;
case 0x7739ae:c.instructions+=4;goto B7739ae;
case 0x7739b3:c.instructions+=3;goto B7739b3;
case 0x7739b6:c.instructions+=2;goto B7739b6;
case 0x7739b7:c.instructions+=1;goto B7739b7;
case 0x7739bc:goto L7739bc;
case 0x7739bf:c.instructions+=1;goto B7739bf;
case 0x7739c0:goto L7739c0;
case 0x7739c2:c.instructions+=4;goto B7739c2;
case 0x7739c7:c.instructions+=3;goto B7739c7;
case 0x7739ca:c.instructions+=2;goto B7739ca;
case 0x7739cb:c.instructions+=1;goto B7739cb;
case 0x7739d0:goto L7739d0;
case 0x7739d3:c.instructions+=1;goto B7739d3;
case 0x7739d4:goto L7739d4;
case 0x7739d6:c.instructions+=4;goto B7739d6;
case 0x7739db:c.instructions+=3;goto B7739db;
case 0x7739de:c.instructions+=2;goto B7739de;
case 0x7739df:c.instructions+=1;goto B7739df;
case 0x7739e4:goto L7739e4;
case 0x7739e7:c.instructions+=1;goto B7739e7;
case 0x7739e8:goto L7739e8;
case 0x7739ea:c.instructions+=4;goto B7739ea;
case 0x7739ef:c.instructions+=3;goto B7739ef;
case 0x7739f2:c.instructions+=2;goto B7739f2;
case 0x7739f3:c.instructions+=1;goto B7739f3;
case 0x7739f8:goto L7739f8;
case 0x7739fb:c.instructions+=1;goto B7739fb;
case 0x7739fc:goto L7739fc;
case 0x773a01:c.instructions+=1;goto B773a01;
case 0x773a10:goto L773a10;
case 0x773a16:c.instructions+=2;goto B773a16;
case 0x773a17:c.instructions+=1;goto B773a17;
case 0x773a1c:goto L773a1c;
case 0x773a1d:c.instructions+=1;goto B773a1d;
case 0x773a1e:goto L773a1e;
case 0x773a23:c.instructions+=1;goto B773a23;
case 0x773a30:goto L773a30;
case 0x773a33:c.instructions+=1;goto B773a33;
case 0x773a38:goto L773a38;
case 0x773a3d:c.instructions+=1;goto B773a3d;
case 0x773a50:goto L773a50;
case 0x773a52:c.instructions+=4;goto B773a52;
case 0x773a57:c.instructions+=3;goto B773a57;
case 0x773a5a:c.instructions+=2;goto B773a5a;
case 0x773a5b:c.instructions+=1;goto B773a5b;
case 0x773a60:goto L773a60;
case 0x773a63:c.instructions+=1;goto B773a63;
case 0x773a64:goto L773a64;
case 0x773a69:c.instructions+=1;goto B773a69;
case 0x773a70:goto L773a70;
case 0x773a72:c.instructions+=4;goto B773a72;
case 0x773a77:c.instructions+=3;goto B773a77;
case 0x773a7a:c.instructions+=2;goto B773a7a;
case 0x773a7b:c.instructions+=1;goto B773a7b;
case 0x773a80:goto L773a80;
case 0x773a83:c.instructions+=1;goto B773a83;
case 0x773a84:goto L773a84;
case 0x773a89:c.instructions+=1;goto B773a89;
case 0x773a90:goto L773a90;
case 0x773a93:c.instructions+=2;goto B773a93;
case 0x773a96:c.instructions+=1;goto B773a96;
case 0x773a9b:goto L773a9b;
case 0x773a9e:c.instructions+=2;goto B773a9e;
case 0x773aa1:c.instructions+=1;goto B773aa1;
case 0x773aa6:goto L773aa6;
case 0x773aab:c.instructions+=1;goto B773aab;
case 0x773ab0:goto L773ab0;
case 0x773ab3:c.instructions+=2;goto B773ab3;
case 0x773ab6:c.instructions+=1;goto B773ab6;
case 0x773abb:goto L773abb;
case 0x773abe:c.instructions+=2;goto B773abe;
case 0x773ac1:c.instructions+=1;goto B773ac1;
case 0x773ac6:goto L773ac6;
case 0x773acb:c.instructions+=6;goto B773acb;
case 0x773acd:c.instructions+=5;goto B773acd;
case 0x773acf:c.instructions+=4;goto B773acf;
case 0x773ad2:c.instructions+=3;goto B773ad2;
case 0x773ad5:c.instructions+=2;goto B773ad5;
case 0x773ad6:c.instructions+=1;goto B773ad6;
case 0x773adb:goto L773adb;
case 0x773adc:goto L773adc;
case 0x773adf:c.instructions+=2;goto B773adf;
case 0x773ae2:c.instructions+=1;goto B773ae2;
case 0x773ae7:goto L773ae7;
case 0x773aec:c.instructions+=1;goto B773aec;
case 0x773b00:goto L773b00;
case 0x773b03:c.instructions+=1;goto B773b03;
case 0x773b08:goto L773b08;
case 0x773b0b:c.instructions+=2;goto B773b0b;
case 0x773b0e:c.instructions+=1;goto B773b0e;
case 0x773b13:goto L773b13;
case 0x773b16:c.instructions+=2;goto B773b16;
case 0x773b1c:c.instructions+=1;goto B773b1c;
case 0x773b21:goto L773b21;
case 0x773b26:c.instructions+=1;goto B773b26;
case 0x773b30:goto L773b30;
case 0x773b32:c.instructions+=4;goto B773b32;
case 0x773b37:c.instructions+=3;goto B773b37;
case 0x773b3a:c.instructions+=2;goto B773b3a;
case 0x773b3b:c.instructions+=1;goto B773b3b;
case 0x773b40:goto L773b40;
case 0x773b43:c.instructions+=1;goto B773b43;
case 0x773b44:goto L773b44;
case 0x773b46:c.instructions+=4;goto B773b46;
case 0x773b4b:c.instructions+=3;goto B773b4b;
case 0x773b4e:c.instructions+=2;goto B773b4e;
case 0x773b4f:c.instructions+=1;goto B773b4f;
case 0x773b54:goto L773b54;
case 0x773b57:c.instructions+=1;goto B773b57;
case 0x773b58:goto L773b58;
case 0x773b5a:c.instructions+=4;goto B773b5a;
case 0x773b5f:c.instructions+=3;goto B773b5f;
case 0x773b62:c.instructions+=2;goto B773b62;
case 0x773b63:c.instructions+=1;goto B773b63;
case 0x773b68:goto L773b68;
case 0x773b6b:c.instructions+=1;goto B773b6b;
case 0x773b6c:goto L773b6c;
case 0x773b6e:c.instructions+=4;goto B773b6e;
case 0x773b73:c.instructions+=3;goto B773b73;
case 0x773b76:c.instructions+=2;goto B773b76;
case 0x773b77:c.instructions+=1;goto B773b77;
case 0x773b7c:goto L773b7c;
case 0x773b7f:c.instructions+=1;goto B773b7f;
case 0x773b80:goto L773b80;
case 0x773b82:c.instructions+=4;goto B773b82;
case 0x773b87:c.instructions+=3;goto B773b87;
case 0x773b8a:c.instructions+=2;goto B773b8a;
case 0x773b8b:c.instructions+=1;goto B773b8b;
case 0x773b90:goto L773b90;
case 0x773b93:c.instructions+=1;goto B773b93;
case 0x773b94:goto L773b94;
case 0x773b96:c.instructions+=4;goto B773b96;
case 0x773b9b:c.instructions+=3;goto B773b9b;
case 0x773b9e:c.instructions+=2;goto B773b9e;
case 0x773b9f:c.instructions+=1;goto B773b9f;
case 0x773ba4:goto L773ba4;
case 0x773ba7:c.instructions+=1;goto B773ba7;
case 0x773ba8:goto L773ba8;
case 0x773baa:c.instructions+=4;goto B773baa;
case 0x773baf:c.instructions+=3;goto B773baf;
case 0x773bb2:c.instructions+=2;goto B773bb2;
case 0x773bb3:c.instructions+=1;goto B773bb3;
case 0x773bb8:goto L773bb8;
case 0x773bbb:c.instructions+=1;goto B773bbb;
case 0x773bbc:goto L773bbc;
case 0x773bbe:c.instructions+=4;goto B773bbe;
case 0x773bc3:c.instructions+=3;goto B773bc3;
case 0x773bc6:c.instructions+=2;goto B773bc6;
case 0x773bc7:c.instructions+=1;goto B773bc7;
case 0x773bcc:goto L773bcc;
case 0x773bcf:c.instructions+=1;goto B773bcf;
case 0x773bd0:goto L773bd0;
case 0x773bd5:c.instructions+=1;goto B773bd5;
case 0x773be0:goto L773be0;
case 0x773be2:c.instructions+=4;goto B773be2;
case 0x773be7:c.instructions+=3;goto B773be7;
case 0x773bea:c.instructions+=2;goto B773bea;
case 0x773beb:c.instructions+=1;goto B773beb;
case 0x773bf0:goto L773bf0;
case 0x773bf3:c.instructions+=1;goto B773bf3;
case 0x773bf4:goto L773bf4;
case 0x773bf6:c.instructions+=4;goto B773bf6;
case 0x773bfb:c.instructions+=3;goto B773bfb;
case 0x773bfe:c.instructions+=2;goto B773bfe;
case 0x773bff:c.instructions+=1;goto B773bff;
case 0x773c04:goto L773c04;
case 0x773c07:c.instructions+=1;goto B773c07;
case 0x773c08:goto L773c08;
case 0x773c0a:c.instructions+=4;goto B773c0a;
case 0x773c0f:c.instructions+=3;goto B773c0f;
case 0x773c12:c.instructions+=2;goto B773c12;
case 0x773c13:c.instructions+=1;goto B773c13;
case 0x773c18:goto L773c18;
case 0x773c1b:c.instructions+=1;goto B773c1b;
case 0x773c1c:goto L773c1c;
case 0x773c1e:c.instructions+=4;goto B773c1e;
case 0x773c23:c.instructions+=3;goto B773c23;
case 0x773c26:c.instructions+=2;goto B773c26;
case 0x773c27:c.instructions+=1;goto B773c27;
case 0x773c2c:goto L773c2c;
case 0x773c2f:c.instructions+=1;goto B773c2f;
case 0x773c30:goto L773c30;
case 0x773c32:c.instructions+=4;goto B773c32;
case 0x773c37:c.instructions+=3;goto B773c37;
case 0x773c3a:c.instructions+=2;goto B773c3a;
case 0x773c3b:c.instructions+=1;goto B773c3b;
case 0x773c40:goto L773c40;
case 0x773c43:c.instructions+=1;goto B773c43;
case 0x773c44:goto L773c44;
case 0x773c46:c.instructions+=4;goto B773c46;
case 0x773c4b:c.instructions+=3;goto B773c4b;
case 0x773c4e:c.instructions+=2;goto B773c4e;
case 0x773c4f:c.instructions+=1;goto B773c4f;
case 0x773c54:goto L773c54;
case 0x773c57:c.instructions+=1;goto B773c57;
case 0x773c58:goto L773c58;
case 0x773c5a:c.instructions+=4;goto B773c5a;
case 0x773c5f:c.instructions+=3;goto B773c5f;
case 0x773c62:c.instructions+=2;goto B773c62;
case 0x773c63:c.instructions+=1;goto B773c63;
case 0x773c68:goto L773c68;
case 0x773c6b:c.instructions+=1;goto B773c6b;
case 0x773c6c:goto L773c6c;
case 0x773c6e:c.instructions+=4;goto B773c6e;
case 0x773c73:c.instructions+=3;goto B773c73;
case 0x773c76:c.instructions+=2;goto B773c76;
case 0x773c77:c.instructions+=1;goto B773c77;
case 0x773c7c:goto L773c7c;
case 0x773c7f:c.instructions+=1;goto B773c7f;
case 0x773c80:goto L773c80;
case 0x773c82:c.instructions+=4;goto B773c82;
case 0x773c87:c.instructions+=3;goto B773c87;
case 0x773c8a:c.instructions+=2;goto B773c8a;
case 0x773c8b:c.instructions+=1;goto B773c8b;
case 0x773c90:goto L773c90;
case 0x773c93:c.instructions+=1;goto B773c93;
case 0x773c94:goto L773c94;
case 0x773c96:c.instructions+=4;goto B773c96;
case 0x773c9b:c.instructions+=3;goto B773c9b;
case 0x773c9e:c.instructions+=2;goto B773c9e;
case 0x773c9f:c.instructions+=1;goto B773c9f;
case 0x773ca4:goto L773ca4;
case 0x773ca7:c.instructions+=1;goto B773ca7;
case 0x773ca8:goto L773ca8;
case 0x773caa:c.instructions+=4;goto B773caa;
case 0x773caf:c.instructions+=3;goto B773caf;
case 0x773cb2:c.instructions+=2;goto B773cb2;
case 0x773cb3:c.instructions+=1;goto B773cb3;
case 0x773cb8:goto L773cb8;
case 0x773cbb:c.instructions+=1;goto B773cbb;
case 0x773cbc:goto L773cbc;
case 0x773cbe:c.instructions+=4;goto B773cbe;
case 0x773cc3:c.instructions+=3;goto B773cc3;
case 0x773cc6:c.instructions+=2;goto B773cc6;
case 0x773cc7:c.instructions+=1;goto B773cc7;
case 0x773ccc:goto L773ccc;
case 0x773ccf:c.instructions+=1;goto B773ccf;
case 0x773cd0:goto L773cd0;
case 0x773cd5:c.instructions+=1;goto B773cd5;
case 0x773ce0:goto L773ce0;
case 0x773ce2:c.instructions+=4;goto B773ce2;
case 0x773ce7:c.instructions+=3;goto B773ce7;
case 0x773cea:c.instructions+=2;goto B773cea;
case 0x773ceb:c.instructions+=1;goto B773ceb;
case 0x773cf0:goto L773cf0;
case 0x773cf3:c.instructions+=1;goto B773cf3;
case 0x773cf4:goto L773cf4;
case 0x773cf6:c.instructions+=4;goto B773cf6;
case 0x773cfb:c.instructions+=3;goto B773cfb;
case 0x773cfe:c.instructions+=2;goto B773cfe;
case 0x773cff:c.instructions+=1;goto B773cff;
case 0x773d04:goto L773d04;
case 0x773d07:c.instructions+=1;goto B773d07;
case 0x773d08:goto L773d08;
case 0x773d0a:c.instructions+=4;goto B773d0a;
case 0x773d0f:c.instructions+=3;goto B773d0f;
case 0x773d12:c.instructions+=2;goto B773d12;
case 0x773d13:c.instructions+=1;goto B773d13;
case 0x773d18:goto L773d18;
case 0x773d1b:c.instructions+=1;goto B773d1b;
case 0x773d1c:goto L773d1c;
case 0x773d1e:c.instructions+=4;goto B773d1e;
case 0x773d23:c.instructions+=3;goto B773d23;
case 0x773d26:c.instructions+=2;goto B773d26;
case 0x773d27:c.instructions+=1;goto B773d27;
case 0x773d2c:goto L773d2c;
case 0x773d2f:c.instructions+=1;goto B773d2f;
case 0x773d30:goto L773d30;
case 0x773d35:c.instructions+=1;goto B773d35;
case 0x773d40:goto L773d40;
case 0x773d42:c.instructions+=4;goto B773d42;
case 0x773d47:c.instructions+=3;goto B773d47;
case 0x773d4a:c.instructions+=2;goto B773d4a;
case 0x773d4b:c.instructions+=1;goto B773d4b;
case 0x773d50:goto L773d50;
case 0x773d53:c.instructions+=1;goto B773d53;
case 0x773d54:goto L773d54;
case 0x773d56:c.instructions+=4;goto B773d56;
case 0x773d5b:c.instructions+=3;goto B773d5b;
case 0x773d5e:c.instructions+=2;goto B773d5e;
case 0x773d5f:c.instructions+=1;goto B773d5f;
case 0x773d64:goto L773d64;
case 0x773d67:c.instructions+=1;goto B773d67;
case 0x773d68:goto L773d68;
case 0x773d6a:c.instructions+=4;goto B773d6a;
case 0x773d6f:c.instructions+=3;goto B773d6f;
case 0x773d72:c.instructions+=2;goto B773d72;
case 0x773d73:c.instructions+=1;goto B773d73;
case 0x773d78:goto L773d78;
case 0x773d7b:c.instructions+=1;goto B773d7b;
case 0x773d7c:goto L773d7c;
case 0x773d7e:c.instructions+=4;goto B773d7e;
case 0x773d83:c.instructions+=3;goto B773d83;
case 0x773d86:c.instructions+=2;goto B773d86;
case 0x773d87:c.instructions+=1;goto B773d87;
case 0x773d8c:goto L773d8c;
case 0x773d8f:c.instructions+=1;goto B773d8f;
case 0x773d90:goto L773d90;
case 0x773d92:c.instructions+=4;goto B773d92;
case 0x773d97:c.instructions+=3;goto B773d97;
case 0x773d9a:c.instructions+=2;goto B773d9a;
case 0x773d9b:c.instructions+=1;goto B773d9b;
case 0x773da0:goto L773da0;
case 0x773da3:c.instructions+=1;goto B773da3;
case 0x773da4:goto L773da4;
case 0x773da6:c.instructions+=4;goto B773da6;
case 0x773dab:c.instructions+=3;goto B773dab;
case 0x773dae:c.instructions+=2;goto B773dae;
case 0x773daf:c.instructions+=1;goto B773daf;
case 0x773db4:goto L773db4;
case 0x773db7:c.instructions+=1;goto B773db7;
case 0x773db8:goto L773db8;
case 0x773dba:c.instructions+=4;goto B773dba;
case 0x773dbf:c.instructions+=3;goto B773dbf;
case 0x773dc2:c.instructions+=2;goto B773dc2;
case 0x773dc3:c.instructions+=1;goto B773dc3;
case 0x773dc8:goto L773dc8;
case 0x773dcb:c.instructions+=1;goto B773dcb;
case 0x773dcc:goto L773dcc;
case 0x773dd1:c.instructions+=1;goto B773dd1;
case 0x773de0:goto L773de0;
case 0x773de2:c.instructions+=4;goto B773de2;
case 0x773de7:c.instructions+=3;goto B773de7;
case 0x773dea:c.instructions+=2;goto B773dea;
case 0x773deb:c.instructions+=1;goto B773deb;
case 0x773df0:goto L773df0;
case 0x773df3:c.instructions+=1;goto B773df3;
case 0x773df4:goto L773df4;
case 0x773df6:c.instructions+=4;goto B773df6;
case 0x773dfb:c.instructions+=3;goto B773dfb;
case 0x773dfe:c.instructions+=2;goto B773dfe;
case 0x773dff:c.instructions+=1;goto B773dff;
case 0x773e04:goto L773e04;
case 0x773e07:c.instructions+=1;goto B773e07;
case 0x773e08:goto L773e08;
case 0x773e0a:c.instructions+=4;goto B773e0a;
case 0x773e0f:c.instructions+=3;goto B773e0f;
case 0x773e12:c.instructions+=2;goto B773e12;
case 0x773e13:c.instructions+=1;goto B773e13;
case 0x773e18:goto L773e18;
case 0x773e1b:c.instructions+=1;goto B773e1b;
case 0x773e1c:goto L773e1c;
case 0x773e1e:c.instructions+=4;goto B773e1e;
case 0x773e23:c.instructions+=3;goto B773e23;
case 0x773e26:c.instructions+=2;goto B773e26;
case 0x773e27:c.instructions+=1;goto B773e27;
case 0x773e2c:goto L773e2c;
case 0x773e2f:c.instructions+=1;goto B773e2f;
case 0x773e30:goto L773e30;
case 0x773e35:c.instructions+=1;goto B773e35;
case 0x773e40:goto L773e40;
case 0x773e42:c.instructions+=4;goto B773e42;
case 0x773e47:c.instructions+=3;goto B773e47;
case 0x773e4a:c.instructions+=2;goto B773e4a;
case 0x773e4b:c.instructions+=1;goto B773e4b;
case 0x773e50:goto L773e50;
case 0x773e53:c.instructions+=1;goto B773e53;
case 0x773e54:goto L773e54;
case 0x773e56:c.instructions+=4;goto B773e56;
case 0x773e5b:c.instructions+=3;goto B773e5b;
case 0x773e5e:c.instructions+=2;goto B773e5e;
case 0x773e5f:c.instructions+=1;goto B773e5f;
case 0x773e64:goto L773e64;
case 0x773e67:c.instructions+=1;goto B773e67;
case 0x773e68:goto L773e68;
case 0x773e6a:c.instructions+=4;goto B773e6a;
case 0x773e6f:c.instructions+=3;goto B773e6f;
case 0x773e72:c.instructions+=2;goto B773e72;
case 0x773e73:c.instructions+=1;goto B773e73;
case 0x773e78:goto L773e78;
case 0x773e7b:c.instructions+=1;goto B773e7b;
case 0x773e7c:goto L773e7c;
case 0x773e7e:c.instructions+=4;goto B773e7e;
case 0x773e83:c.instructions+=3;goto B773e83;
case 0x773e86:c.instructions+=2;goto B773e86;
case 0x773e87:c.instructions+=1;goto B773e87;
case 0x773e8c:goto L773e8c;
case 0x773e8f:c.instructions+=1;goto B773e8f;
case 0x773e90:goto L773e90;
case 0x773e92:c.instructions+=4;goto B773e92;
case 0x773e97:c.instructions+=3;goto B773e97;
case 0x773e9a:c.instructions+=2;goto B773e9a;
case 0x773e9b:c.instructions+=1;goto B773e9b;
case 0x773ea0:goto L773ea0;
case 0x773ea3:c.instructions+=1;goto B773ea3;
case 0x773ea4:goto L773ea4;
case 0x773ea6:c.instructions+=4;goto B773ea6;
case 0x773eab:c.instructions+=3;goto B773eab;
case 0x773eae:c.instructions+=2;goto B773eae;
case 0x773eaf:c.instructions+=1;goto B773eaf;
case 0x773eb4:goto L773eb4;
case 0x773eb7:c.instructions+=1;goto B773eb7;
case 0x773eb8:goto L773eb8;
case 0x773eba:c.instructions+=4;goto B773eba;
case 0x773ebf:c.instructions+=3;goto B773ebf;
case 0x773ec2:c.instructions+=2;goto B773ec2;
case 0x773ec3:c.instructions+=1;goto B773ec3;
case 0x773ec8:goto L773ec8;
case 0x773ecb:c.instructions+=1;goto B773ecb;
case 0x773ecc:goto L773ecc;
case 0x773ed1:c.instructions+=1;goto B773ed1;
case 0x773ee0:goto L773ee0;
case 0x773ee2:c.instructions+=4;goto B773ee2;
case 0x773ee7:c.instructions+=3;goto B773ee7;
case 0x773eea:c.instructions+=2;goto B773eea;
case 0x773eeb:c.instructions+=1;goto B773eeb;
case 0x773ef0:goto L773ef0;
case 0x773ef3:c.instructions+=1;goto B773ef3;
case 0x773ef4:goto L773ef4;
case 0x773ef6:c.instructions+=4;goto B773ef6;
case 0x773efb:c.instructions+=3;goto B773efb;
case 0x773efe:c.instructions+=2;goto B773efe;
case 0x773eff:c.instructions+=1;goto B773eff;
case 0x773f04:goto L773f04;
case 0x773f07:c.instructions+=1;goto B773f07;
case 0x773f08:goto L773f08;
case 0x773f0a:c.instructions+=4;goto B773f0a;
case 0x773f0f:c.instructions+=3;goto B773f0f;
case 0x773f12:c.instructions+=2;goto B773f12;
case 0x773f13:c.instructions+=1;goto B773f13;
case 0x773f18:goto L773f18;
case 0x773f1b:c.instructions+=1;goto B773f1b;
case 0x773f1c:goto L773f1c;
case 0x773f1e:c.instructions+=4;goto B773f1e;
case 0x773f23:c.instructions+=3;goto B773f23;
case 0x773f26:c.instructions+=2;goto B773f26;
case 0x773f27:c.instructions+=1;goto B773f27;
case 0x773f2c:goto L773f2c;
case 0x773f2f:c.instructions+=1;goto B773f2f;
case 0x773f30:goto L773f30;
case 0x773f32:c.instructions+=4;goto B773f32;
case 0x773f37:c.instructions+=3;goto B773f37;
case 0x773f3a:c.instructions+=2;goto B773f3a;
case 0x773f3b:c.instructions+=1;goto B773f3b;
case 0x773f40:goto L773f40;
case 0x773f43:c.instructions+=1;goto B773f43;
case 0x773f44:goto L773f44;
case 0x773f46:c.instructions+=4;goto B773f46;
case 0x773f4b:c.instructions+=3;goto B773f4b;
case 0x773f4e:c.instructions+=2;goto B773f4e;
case 0x773f4f:c.instructions+=1;goto B773f4f;
case 0x773f54:goto L773f54;
case 0x773f57:c.instructions+=1;goto B773f57;
case 0x773f58:goto L773f58;
case 0x773f5a:c.instructions+=4;goto B773f5a;
case 0x773f5f:c.instructions+=3;goto B773f5f;
case 0x773f62:c.instructions+=2;goto B773f62;
case 0x773f63:c.instructions+=1;goto B773f63;
case 0x773f68:goto L773f68;
case 0x773f6b:c.instructions+=1;goto B773f6b;
case 0x773f6c:goto L773f6c;
case 0x773f6e:c.instructions+=4;goto B773f6e;
case 0x773f73:c.instructions+=3;goto B773f73;
case 0x773f76:c.instructions+=2;goto B773f76;
case 0x773f77:c.instructions+=1;goto B773f77;
case 0x773f7c:goto L773f7c;
case 0x773f7f:c.instructions+=1;goto B773f7f;
case 0x773f80:goto L773f80;
case 0x773f82:c.instructions+=4;goto B773f82;
case 0x773f87:c.instructions+=3;goto B773f87;
case 0x773f8a:c.instructions+=2;goto B773f8a;
case 0x773f8b:c.instructions+=1;goto B773f8b;
case 0x773f90:goto L773f90;
case 0x773f93:c.instructions+=1;goto B773f93;
case 0x773f94:goto L773f94;
case 0x773f96:c.instructions+=4;goto B773f96;
case 0x773f9b:c.instructions+=3;goto B773f9b;
case 0x773f9e:c.instructions+=2;goto B773f9e;
case 0x773f9f:c.instructions+=1;goto B773f9f;
case 0x773fa4:goto L773fa4;
case 0x773fa7:c.instructions+=1;goto B773fa7;
case 0x773fa8:goto L773fa8;
case 0x773fad:c.instructions+=1;goto B773fad;
case 0x773fc0:goto L773fc0;
case 0x773fc2:c.instructions+=4;goto B773fc2;
case 0x773fc7:c.instructions+=3;goto B773fc7;
case 0x773fca:c.instructions+=2;goto B773fca;
case 0x773fcb:c.instructions+=1;goto B773fcb;
case 0x773fd0:goto L773fd0;
case 0x773fd3:c.instructions+=1;goto B773fd3;
case 0x773fd4:goto L773fd4;
case 0x773fd9:c.instructions+=1;goto B773fd9;
case 0x773fe0:goto L773fe0;
case 0x773fe2:c.instructions+=4;goto B773fe2;
case 0x773fe7:c.instructions+=3;goto B773fe7;
case 0x773fea:c.instructions+=2;goto B773fea;
case 0x773feb:c.instructions+=1;goto B773feb;
case 0x773ff0:goto L773ff0;
case 0x773ff3:c.instructions+=1;goto B773ff3;
case 0x773ff4:goto L773ff4;
case 0x773ff9:c.instructions+=1;goto B773ff9;
default:missing_instruction(c.pc);}
B773002:L773002:{c.instructions+=2;NFSU2_TR(0x773002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773003:{NFSU2_TR(0x773003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773008ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773008:L773008:{c.instructions+=2;NFSU2_TR(0x773008);
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
B77300b:{NFSU2_TR(0x77300b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77300c:L77300c:{c.instructions+=5;NFSU2_TR(0x77300c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77300e:{NFSU2_TR(0x77300e);
u8 U[4];
w4(U+0,u32(0x7916c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773013:{NFSU2_TR(0x773013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773016:{NFSU2_TR(0x773016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773017:{NFSU2_TR(0x773017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77301cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77301c:L77301c:{c.instructions+=2;NFSU2_TR(0x77301c);
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
B77301f:{NFSU2_TR(0x77301f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773020:L773020:{c.instructions+=5;NFSU2_TR(0x773020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773022:{NFSU2_TR(0x773022);
u8 U[4];
w4(U+0,u32(0x7916acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773027:{NFSU2_TR(0x773027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77302a:{NFSU2_TR(0x77302a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77302b:{NFSU2_TR(0x77302b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773030ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773030:L773030:{c.instructions+=2;NFSU2_TR(0x773030);
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
B773033:{NFSU2_TR(0x773033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773034:L773034:{c.instructions+=5;NFSU2_TR(0x773034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773036:{NFSU2_TR(0x773036);
u8 U[4];
w4(U+0,u32(0x791690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77303b:{NFSU2_TR(0x77303b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77303e:{NFSU2_TR(0x77303e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77303f:{NFSU2_TR(0x77303f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773044ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773044:L773044:{c.instructions+=2;NFSU2_TR(0x773044);
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
B773047:{NFSU2_TR(0x773047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773048:L773048:{c.instructions+=5;NFSU2_TR(0x773048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77304a:{NFSU2_TR(0x77304a);
u8 U[4];
w4(U+0,u32(0x791674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77304f:{NFSU2_TR(0x77304f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773052:{NFSU2_TR(0x773052);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773053:{NFSU2_TR(0x773053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773058ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773058:L773058:{c.instructions+=2;NFSU2_TR(0x773058);
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
B77305b:{NFSU2_TR(0x77305b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77305c:L77305c:{c.instructions+=5;NFSU2_TR(0x77305c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77305e:{NFSU2_TR(0x77305e);
u8 U[4];
w4(U+0,u32(0x791660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773063:{NFSU2_TR(0x773063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773066:{NFSU2_TR(0x773066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773067:{NFSU2_TR(0x773067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77306cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77306c:L77306c:{c.instructions+=2;NFSU2_TR(0x77306c);
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
B77306f:{NFSU2_TR(0x77306f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773070:L773070:{c.instructions+=5;NFSU2_TR(0x773070);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773072:{NFSU2_TR(0x773072);
u8 U[4];
w4(U+0,u32(0x79164cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773077:{NFSU2_TR(0x773077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77307a:{NFSU2_TR(0x77307a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77307b:{NFSU2_TR(0x77307b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773080ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773080:L773080:{c.instructions+=2;NFSU2_TR(0x773080);
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
B773083:{NFSU2_TR(0x773083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773084:L773084:{c.instructions+=2;NFSU2_TR(0x773084);
w4(R+0,u32(0x7df52cull));
}
B773089:{NFSU2_TR(0x773089);
TAIL_STATIC(0x75bfd2u,75b);
}
B773090:L773090:{c.instructions+=5;NFSU2_TR(0x773090);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773092:{NFSU2_TR(0x773092);
u8 U[4];
w4(U+0,u32(0x7916e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773097:{NFSU2_TR(0x773097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77309a:{NFSU2_TR(0x77309a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77309b:{NFSU2_TR(0x77309b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7730a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7730a0:L7730a0:{c.instructions+=2;NFSU2_TR(0x7730a0);
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
B7730a3:{NFSU2_TR(0x7730a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7730a4:L7730a4:{c.instructions+=5;NFSU2_TR(0x7730a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730a6:{NFSU2_TR(0x7730a6);
u8 U[4];
w4(U+0,u32(0x791790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730ab:{NFSU2_TR(0x7730ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7730ae:{NFSU2_TR(0x7730ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730af:{NFSU2_TR(0x7730af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7730b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7730b4:L7730b4:{c.instructions+=2;NFSU2_TR(0x7730b4);
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
B7730b7:{NFSU2_TR(0x7730b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7730b8:L7730b8:{c.instructions+=2;NFSU2_TR(0x7730b8);
w4(R+0,u32(0x7df59cull));
}
B7730bd:{NFSU2_TR(0x7730bd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7730d0:L7730d0:{c.instructions+=5;NFSU2_TR(0x7730d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730d2:{NFSU2_TR(0x7730d2);
u8 U[4];
w4(U+0,u32(0x793e44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730d7:{NFSU2_TR(0x7730d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7730da:{NFSU2_TR(0x7730da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730db:{NFSU2_TR(0x7730db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7730e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7730e0:L7730e0:{c.instructions+=2;NFSU2_TR(0x7730e0);
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
B7730e3:{NFSU2_TR(0x7730e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7730e4:L7730e4:{c.instructions+=5;NFSU2_TR(0x7730e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730e6:{NFSU2_TR(0x7730e6);
u8 U[4];
w4(U+0,u32(0x793e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730eb:{NFSU2_TR(0x7730eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7730ee:{NFSU2_TR(0x7730ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730ef:{NFSU2_TR(0x7730ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7730f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7730f4:L7730f4:{c.instructions+=2;NFSU2_TR(0x7730f4);
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
B7730f7:{NFSU2_TR(0x7730f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7730f8:L7730f8:{c.instructions+=5;NFSU2_TR(0x7730f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730fa:{NFSU2_TR(0x7730fa);
u8 U[4];
w4(U+0,u32(0x793e2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7730ff:{NFSU2_TR(0x7730ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773102:{NFSU2_TR(0x773102);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773103:{NFSU2_TR(0x773103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773108ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773108:L773108:{c.instructions+=2;NFSU2_TR(0x773108);
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
B77310b:{NFSU2_TR(0x77310b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77310c:L77310c:{c.instructions+=5;NFSU2_TR(0x77310c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77310e:{NFSU2_TR(0x77310e);
u8 U[4];
w4(U+0,u32(0x793e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773113:{NFSU2_TR(0x773113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773116:{NFSU2_TR(0x773116);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773117:{NFSU2_TR(0x773117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77311cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77311c:L77311c:{c.instructions+=2;NFSU2_TR(0x77311c);
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
B77311f:{NFSU2_TR(0x77311f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773120:L773120:{c.instructions+=5;NFSU2_TR(0x773120);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773122:{NFSU2_TR(0x773122);
u8 U[4];
w4(U+0,u32(0x793e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773127:{NFSU2_TR(0x773127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77312a:{NFSU2_TR(0x77312a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77312b:{NFSU2_TR(0x77312b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773130ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773130:L773130:{c.instructions+=2;NFSU2_TR(0x773130);
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
B773133:{NFSU2_TR(0x773133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773134:L773134:{c.instructions+=5;NFSU2_TR(0x773134);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773136:{NFSU2_TR(0x773136);
u8 U[4];
w4(U+0,u32(0x793e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77313b:{NFSU2_TR(0x77313b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77313e:{NFSU2_TR(0x77313e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77313f:{NFSU2_TR(0x77313f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773144ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773144:L773144:{c.instructions+=2;NFSU2_TR(0x773144);
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
B773147:{NFSU2_TR(0x773147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773148:L773148:{c.instructions+=5;NFSU2_TR(0x773148);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77314a:{NFSU2_TR(0x77314a);
u8 U[4];
w4(U+0,u32(0x793df8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77314f:{NFSU2_TR(0x77314f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773152:{NFSU2_TR(0x773152);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773153:{NFSU2_TR(0x773153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773158ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773158:L773158:{c.instructions+=2;NFSU2_TR(0x773158);
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
B77315b:{NFSU2_TR(0x77315b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77315c:L77315c:{c.instructions+=5;NFSU2_TR(0x77315c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77315e:{NFSU2_TR(0x77315e);
u8 U[4];
w4(U+0,u32(0x793decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773163:{NFSU2_TR(0x773163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773166:{NFSU2_TR(0x773166);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773167:{NFSU2_TR(0x773167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77316cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77316c:L77316c:{c.instructions+=2;NFSU2_TR(0x77316c);
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
B77316f:{NFSU2_TR(0x77316f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773170:L773170:{c.instructions+=5;NFSU2_TR(0x773170);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773172:{NFSU2_TR(0x773172);
u8 U[4];
w4(U+0,u32(0x793decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773177:{NFSU2_TR(0x773177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77317a:{NFSU2_TR(0x77317a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77317b:{NFSU2_TR(0x77317b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773180ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773180:L773180:{c.instructions+=2;NFSU2_TR(0x773180);
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
B773183:{NFSU2_TR(0x773183);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773184:L773184:{c.instructions+=2;NFSU2_TR(0x773184);
w4(R+0,u32(0x7df600ull));
}
B773189:{NFSU2_TR(0x773189);
TAIL_STATIC(0x75bfd2u,75b);
}
B773190:L773190:{c.instructions+=5;NFSU2_TR(0x773190);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773192:{NFSU2_TR(0x773192);
u8 U[4];
w4(U+0,u32(0x793facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773197:{NFSU2_TR(0x773197);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77319a:{NFSU2_TR(0x77319a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77319b:{NFSU2_TR(0x77319b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7731a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7731a0:L7731a0:{c.instructions+=2;NFSU2_TR(0x7731a0);
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
B7731a3:{NFSU2_TR(0x7731a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7731a4:L7731a4:{c.instructions+=5;NFSU2_TR(0x7731a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731a6:{NFSU2_TR(0x7731a6);
u8 U[4];
w4(U+0,u32(0x793f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731ab:{NFSU2_TR(0x7731ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7731ae:{NFSU2_TR(0x7731ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731af:{NFSU2_TR(0x7731af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7731b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7731b4:L7731b4:{c.instructions+=2;NFSU2_TR(0x7731b4);
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
B7731b7:{NFSU2_TR(0x7731b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7731b8:L7731b8:{c.instructions+=5;NFSU2_TR(0x7731b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731ba:{NFSU2_TR(0x7731ba);
u8 U[4];
w4(U+0,u32(0x793f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731bf:{NFSU2_TR(0x7731bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7731c2:{NFSU2_TR(0x7731c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731c3:{NFSU2_TR(0x7731c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7731c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7731c8:L7731c8:{c.instructions+=2;NFSU2_TR(0x7731c8);
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
B7731cb:{NFSU2_TR(0x7731cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7731cc:L7731cc:{c.instructions+=5;NFSU2_TR(0x7731cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731ce:{NFSU2_TR(0x7731ce);
u8 U[4];
w4(U+0,u32(0x793f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731d3:{NFSU2_TR(0x7731d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7731d6:{NFSU2_TR(0x7731d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731d7:{NFSU2_TR(0x7731d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7731dcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7731dc:L7731dc:{c.instructions+=2;NFSU2_TR(0x7731dc);
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
B7731df:{NFSU2_TR(0x7731df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7731e0:L7731e0:{c.instructions+=5;NFSU2_TR(0x7731e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731e2:{NFSU2_TR(0x7731e2);
u8 U[4];
w4(U+0,u32(0x793f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731e7:{NFSU2_TR(0x7731e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7731ea:{NFSU2_TR(0x7731ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731eb:{NFSU2_TR(0x7731eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7731f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7731f0:L7731f0:{c.instructions+=2;NFSU2_TR(0x7731f0);
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
B7731f3:{NFSU2_TR(0x7731f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7731f4:L7731f4:{c.instructions+=5;NFSU2_TR(0x7731f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731f6:{NFSU2_TR(0x7731f6);
u8 U[4];
w4(U+0,u32(0x793f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731fb:{NFSU2_TR(0x7731fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7731fe:{NFSU2_TR(0x7731fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7731ff:{NFSU2_TR(0x7731ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773204ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773204:L773204:{c.instructions+=2;NFSU2_TR(0x773204);
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
B773207:{NFSU2_TR(0x773207);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773208:L773208:{c.instructions+=5;NFSU2_TR(0x773208);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77320a:{NFSU2_TR(0x77320a);
u8 U[4];
w4(U+0,u32(0x793f44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77320f:{NFSU2_TR(0x77320f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773212:{NFSU2_TR(0x773212);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773213:{NFSU2_TR(0x773213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773218ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773218:L773218:{c.instructions+=2;NFSU2_TR(0x773218);
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
B77321b:{NFSU2_TR(0x77321b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77321c:L77321c:{c.instructions+=5;NFSU2_TR(0x77321c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77321e:{NFSU2_TR(0x77321e);
u8 U[4];
w4(U+0,u32(0x793f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773223:{NFSU2_TR(0x773223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773226:{NFSU2_TR(0x773226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773227:{NFSU2_TR(0x773227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77322cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77322c:L77322c:{c.instructions+=2;NFSU2_TR(0x77322c);
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
B77322f:{NFSU2_TR(0x77322f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773230:L773230:{c.instructions+=5;NFSU2_TR(0x773230);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773232:{NFSU2_TR(0x773232);
u8 U[4];
w4(U+0,u32(0x793f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773237:{NFSU2_TR(0x773237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77323a:{NFSU2_TR(0x77323a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77323b:{NFSU2_TR(0x77323b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773240ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773240:L773240:{c.instructions+=2;NFSU2_TR(0x773240);
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
B773243:{NFSU2_TR(0x773243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773244:L773244:{c.instructions+=5;NFSU2_TR(0x773244);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773246:{NFSU2_TR(0x773246);
u8 U[4];
w4(U+0,u32(0x793f0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77324b:{NFSU2_TR(0x77324b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77324e:{NFSU2_TR(0x77324e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77324f:{NFSU2_TR(0x77324f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773254ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773254:L773254:{c.instructions+=2;NFSU2_TR(0x773254);
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
B773257:{NFSU2_TR(0x773257);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773258:L773258:{c.instructions+=5;NFSU2_TR(0x773258);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77325a:{NFSU2_TR(0x77325a);
u8 U[4];
w4(U+0,u32(0x793efcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77325f:{NFSU2_TR(0x77325f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773262:{NFSU2_TR(0x773262);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773263:{NFSU2_TR(0x773263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773268ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773268:L773268:{c.instructions+=2;NFSU2_TR(0x773268);
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
B77326b:{NFSU2_TR(0x77326b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77326c:L77326c:{c.instructions+=5;NFSU2_TR(0x77326c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77326e:{NFSU2_TR(0x77326e);
u8 U[4];
w4(U+0,u32(0x793ee8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773273:{NFSU2_TR(0x773273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773276:{NFSU2_TR(0x773276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773277:{NFSU2_TR(0x773277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77327cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77327c:L77327c:{c.instructions+=2;NFSU2_TR(0x77327c);
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
B77327f:{NFSU2_TR(0x77327f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773280:L773280:{c.instructions+=5;NFSU2_TR(0x773280);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773282:{NFSU2_TR(0x773282);
u8 U[4];
w4(U+0,u32(0x793ed8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773287:{NFSU2_TR(0x773287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77328a:{NFSU2_TR(0x77328a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77328b:{NFSU2_TR(0x77328b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773290ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773290:L773290:{c.instructions+=2;NFSU2_TR(0x773290);
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
B773293:{NFSU2_TR(0x773293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773294:L773294:{c.instructions+=5;NFSU2_TR(0x773294);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773296:{NFSU2_TR(0x773296);
u8 U[4];
w4(U+0,u32(0x793ec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77329b:{NFSU2_TR(0x77329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77329e:{NFSU2_TR(0x77329e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77329f:{NFSU2_TR(0x77329f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7732a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7732a4:L7732a4:{c.instructions+=2;NFSU2_TR(0x7732a4);
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
B7732a7:{NFSU2_TR(0x7732a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7732a8:L7732a8:{c.instructions+=5;NFSU2_TR(0x7732a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732aa:{NFSU2_TR(0x7732aa);
u8 U[4];
w4(U+0,u32(0x793eb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732af:{NFSU2_TR(0x7732af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7732b2:{NFSU2_TR(0x7732b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732b3:{NFSU2_TR(0x7732b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7732b8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7732b8:L7732b8:{c.instructions+=2;NFSU2_TR(0x7732b8);
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
B7732bb:{NFSU2_TR(0x7732bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7732bc:L7732bc:{c.instructions+=5;NFSU2_TR(0x7732bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732be:{NFSU2_TR(0x7732be);
u8 U[4];
w4(U+0,u32(0x793eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732c3:{NFSU2_TR(0x7732c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7732c6:{NFSU2_TR(0x7732c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732c7:{NFSU2_TR(0x7732c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7732ccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7732cc:L7732cc:{c.instructions+=2;NFSU2_TR(0x7732cc);
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
B7732cf:{NFSU2_TR(0x7732cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7732d0:L7732d0:{c.instructions+=5;NFSU2_TR(0x7732d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732d2:{NFSU2_TR(0x7732d2);
u8 U[4];
w4(U+0,u32(0x793ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732d7:{NFSU2_TR(0x7732d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7732da:{NFSU2_TR(0x7732da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732db:{NFSU2_TR(0x7732db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7732e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7732e0:L7732e0:{c.instructions+=2;NFSU2_TR(0x7732e0);
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
B7732e3:{NFSU2_TR(0x7732e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7732e4:L7732e4:{c.instructions+=5;NFSU2_TR(0x7732e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732e6:{NFSU2_TR(0x7732e6);
u8 U[4];
w4(U+0,u32(0x793e94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732eb:{NFSU2_TR(0x7732eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7732ee:{NFSU2_TR(0x7732ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732ef:{NFSU2_TR(0x7732ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7732f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7732f4:L7732f4:{c.instructions+=2;NFSU2_TR(0x7732f4);
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
B7732f7:{NFSU2_TR(0x7732f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7732f8:L7732f8:{c.instructions+=5;NFSU2_TR(0x7732f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732fa:{NFSU2_TR(0x7732fa);
u8 U[4];
w4(U+0,u32(0x793e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7732ff:{NFSU2_TR(0x7732ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773302:{NFSU2_TR(0x773302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773303:{NFSU2_TR(0x773303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773308ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773308:L773308:{c.instructions+=2;NFSU2_TR(0x773308);
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
B77330b:{NFSU2_TR(0x77330b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77330c:L77330c:{c.instructions+=5;NFSU2_TR(0x77330c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77330e:{NFSU2_TR(0x77330e);
u8 U[4];
w4(U+0,u32(0x793e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773313:{NFSU2_TR(0x773313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773316:{NFSU2_TR(0x773316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773317:{NFSU2_TR(0x773317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77331cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77331c:L77331c:{c.instructions+=2;NFSU2_TR(0x77331c);
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
B77331f:{NFSU2_TR(0x77331f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773320:L773320:{c.instructions+=5;NFSU2_TR(0x773320);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773322:{NFSU2_TR(0x773322);
u8 U[4];
w4(U+0,u32(0x793e6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773327:{NFSU2_TR(0x773327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77332a:{NFSU2_TR(0x77332a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77332b:{NFSU2_TR(0x77332b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773330ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773330:L773330:{c.instructions+=2;NFSU2_TR(0x773330);
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
B773333:{NFSU2_TR(0x773333);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773334:L773334:{c.instructions+=5;NFSU2_TR(0x773334);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773336:{NFSU2_TR(0x773336);
u8 U[4];
w4(U+0,u32(0x793e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77333b:{NFSU2_TR(0x77333b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77333e:{NFSU2_TR(0x77333e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77333f:{NFSU2_TR(0x77333f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773344ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773344:L773344:{c.instructions+=2;NFSU2_TR(0x773344);
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
B773347:{NFSU2_TR(0x773347);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773348:L773348:{c.instructions+=5;NFSU2_TR(0x773348);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77334a:{NFSU2_TR(0x77334a);
u8 U[4];
w4(U+0,u32(0x793e4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77334f:{NFSU2_TR(0x77334f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773352:{NFSU2_TR(0x773352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773353:{NFSU2_TR(0x773353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773358ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773358:L773358:{c.instructions+=2;NFSU2_TR(0x773358);
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
B77335b:{NFSU2_TR(0x77335b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77335c:L77335c:{c.instructions+=2;NFSU2_TR(0x77335c);
w4(R+0,u32(0x7df6d4ull));
}
B773361:{NFSU2_TR(0x773361);
TAIL_STATIC(0x75bfd2u,75b);
}
B773370:L773370:{c.instructions+=5;NFSU2_TR(0x773370);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773372:{NFSU2_TR(0x773372);
u8 U[4];
w4(U+0,u32(0x794028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773377:{NFSU2_TR(0x773377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77337a:{NFSU2_TR(0x77337a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77337b:{NFSU2_TR(0x77337b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773380ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773380:L773380:{c.instructions+=2;NFSU2_TR(0x773380);
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
B773383:{NFSU2_TR(0x773383);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773384:L773384:{c.instructions+=5;NFSU2_TR(0x773384);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773386:{NFSU2_TR(0x773386);
u8 U[4];
w4(U+0,u32(0x794018ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77338b:{NFSU2_TR(0x77338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77338e:{NFSU2_TR(0x77338e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77338f:{NFSU2_TR(0x77338f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773394ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773394:L773394:{c.instructions+=2;NFSU2_TR(0x773394);
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
B773397:{NFSU2_TR(0x773397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773398:L773398:{c.instructions+=5;NFSU2_TR(0x773398);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77339a:{NFSU2_TR(0x77339a);
u8 U[4];
w4(U+0,u32(0x794008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77339f:{NFSU2_TR(0x77339f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7733a2:{NFSU2_TR(0x7733a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733a3:{NFSU2_TR(0x7733a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7733a8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7733a8:L7733a8:{c.instructions+=2;NFSU2_TR(0x7733a8);
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
B7733ab:{NFSU2_TR(0x7733ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7733ac:L7733ac:{c.instructions+=5;NFSU2_TR(0x7733ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733ae:{NFSU2_TR(0x7733ae);
u8 U[4];
w4(U+0,u32(0x793ffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733b3:{NFSU2_TR(0x7733b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7733b6:{NFSU2_TR(0x7733b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733b7:{NFSU2_TR(0x7733b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7733bcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7733bc:L7733bc:{c.instructions+=2;NFSU2_TR(0x7733bc);
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
B7733bf:{NFSU2_TR(0x7733bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7733c0:L7733c0:{c.instructions+=5;NFSU2_TR(0x7733c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733c2:{NFSU2_TR(0x7733c2);
u8 U[4];
w4(U+0,u32(0x793fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733c7:{NFSU2_TR(0x7733c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7733ca:{NFSU2_TR(0x7733ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733cb:{NFSU2_TR(0x7733cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7733d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7733d0:L7733d0:{c.instructions+=2;NFSU2_TR(0x7733d0);
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
B7733d3:{NFSU2_TR(0x7733d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7733d4:L7733d4:{c.instructions+=5;NFSU2_TR(0x7733d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733d6:{NFSU2_TR(0x7733d6);
u8 U[4];
w4(U+0,u32(0x793fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733db:{NFSU2_TR(0x7733db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7733de:{NFSU2_TR(0x7733de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733df:{NFSU2_TR(0x7733df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7733e4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7733e4:L7733e4:{c.instructions+=2;NFSU2_TR(0x7733e4);
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
B7733e7:{NFSU2_TR(0x7733e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7733e8:L7733e8:{c.instructions+=5;NFSU2_TR(0x7733e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733ea:{NFSU2_TR(0x7733ea);
u8 U[4];
w4(U+0,u32(0x793fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733ef:{NFSU2_TR(0x7733ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7733f2:{NFSU2_TR(0x7733f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733f3:{NFSU2_TR(0x7733f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7733f8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7733f8:L7733f8:{c.instructions+=2;NFSU2_TR(0x7733f8);
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
B7733fb:{NFSU2_TR(0x7733fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7733fc:L7733fc:{c.instructions+=5;NFSU2_TR(0x7733fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7733fe:{NFSU2_TR(0x7733fe);
u8 U[4];
w4(U+0,u32(0x793fc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773403:{NFSU2_TR(0x773403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773406:{NFSU2_TR(0x773406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773407:{NFSU2_TR(0x773407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77340cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77340c:L77340c:{c.instructions+=2;NFSU2_TR(0x77340c);
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
B77340f:{NFSU2_TR(0x77340f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773410:L773410:{c.instructions+=2;NFSU2_TR(0x773410);
w4(R+0,u32(0x7df730ull));
}
B773415:{NFSU2_TR(0x773415);
TAIL_STATIC(0x75bfd2u,75b);
}
B773420:L773420:{c.instructions+=5;NFSU2_TR(0x773420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773422:{NFSU2_TR(0x773422);
u8 U[4];
w4(U+0,u32(0x7940e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773427:{NFSU2_TR(0x773427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77342a:{NFSU2_TR(0x77342a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77342b:{NFSU2_TR(0x77342b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773430ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773430:L773430:{c.instructions+=2;NFSU2_TR(0x773430);
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
B773433:{NFSU2_TR(0x773433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773434:L773434:{c.instructions+=5;NFSU2_TR(0x773434);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773436:{NFSU2_TR(0x773436);
u8 U[4];
w4(U+0,u32(0x7940d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77343b:{NFSU2_TR(0x77343b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77343e:{NFSU2_TR(0x77343e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77343f:{NFSU2_TR(0x77343f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773444ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773444:L773444:{c.instructions+=2;NFSU2_TR(0x773444);
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
B773447:{NFSU2_TR(0x773447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773448:L773448:{c.instructions+=5;NFSU2_TR(0x773448);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77344a:{NFSU2_TR(0x77344a);
u8 U[4];
w4(U+0,u32(0x7940c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77344f:{NFSU2_TR(0x77344f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773452:{NFSU2_TR(0x773452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773453:{NFSU2_TR(0x773453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773458ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773458:L773458:{c.instructions+=2;NFSU2_TR(0x773458);
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
B77345b:{NFSU2_TR(0x77345b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77345c:L77345c:{c.instructions+=5;NFSU2_TR(0x77345c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77345e:{NFSU2_TR(0x77345e);
u8 U[4];
w4(U+0,u32(0x7940b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773463:{NFSU2_TR(0x773463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773466:{NFSU2_TR(0x773466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773467:{NFSU2_TR(0x773467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77346cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77346c:L77346c:{c.instructions+=2;NFSU2_TR(0x77346c);
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
B77346f:{NFSU2_TR(0x77346f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773470:L773470:{c.instructions+=5;NFSU2_TR(0x773470);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773472:{NFSU2_TR(0x773472);
u8 U[4];
w4(U+0,u32(0x7940a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773477:{NFSU2_TR(0x773477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77347a:{NFSU2_TR(0x77347a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77347b:{NFSU2_TR(0x77347b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773480ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773480:L773480:{c.instructions+=2;NFSU2_TR(0x773480);
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
B773483:{NFSU2_TR(0x773483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773484:L773484:{c.instructions+=5;NFSU2_TR(0x773484);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773486:{NFSU2_TR(0x773486);
u8 U[4];
w4(U+0,u32(0x794090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77348b:{NFSU2_TR(0x77348b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77348e:{NFSU2_TR(0x77348e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77348f:{NFSU2_TR(0x77348f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773494ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773494:L773494:{c.instructions+=2;NFSU2_TR(0x773494);
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
B773497:{NFSU2_TR(0x773497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773498:L773498:{c.instructions+=5;NFSU2_TR(0x773498);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77349a:{NFSU2_TR(0x77349a);
u8 U[4];
w4(U+0,u32(0x794084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77349f:{NFSU2_TR(0x77349f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7734a2:{NFSU2_TR(0x7734a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734a3:{NFSU2_TR(0x7734a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7734a8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7734a8:L7734a8:{c.instructions+=2;NFSU2_TR(0x7734a8);
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
B7734ab:{NFSU2_TR(0x7734ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7734ac:L7734ac:{c.instructions+=2;NFSU2_TR(0x7734ac);
w4(R+0,u32(0x7df7c0ull));
}
B7734b1:{NFSU2_TR(0x7734b1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7734c0:L7734c0:{c.instructions+=5;NFSU2_TR(0x7734c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734c2:{NFSU2_TR(0x7734c2);
u8 U[4];
w4(U+0,u32(0x794448ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734c7:{NFSU2_TR(0x7734c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7734ca:{NFSU2_TR(0x7734ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734cb:{NFSU2_TR(0x7734cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7734d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7734d0:L7734d0:{c.instructions+=2;NFSU2_TR(0x7734d0);
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
B7734d3:{NFSU2_TR(0x7734d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7734d4:L7734d4:{c.instructions+=5;NFSU2_TR(0x7734d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734d6:{NFSU2_TR(0x7734d6);
u8 U[4];
w4(U+0,u32(0x79443cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734db:{NFSU2_TR(0x7734db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7734de:{NFSU2_TR(0x7734de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734df:{NFSU2_TR(0x7734df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7734e4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7734e4:L7734e4:{c.instructions+=2;NFSU2_TR(0x7734e4);
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
B7734e7:{NFSU2_TR(0x7734e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7734e8:L7734e8:{c.instructions+=5;NFSU2_TR(0x7734e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734ea:{NFSU2_TR(0x7734ea);
u8 U[4];
w4(U+0,u32(0x794430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734ef:{NFSU2_TR(0x7734ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7734f2:{NFSU2_TR(0x7734f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734f3:{NFSU2_TR(0x7734f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7734f8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7734f8:L7734f8:{c.instructions+=2;NFSU2_TR(0x7734f8);
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
B7734fb:{NFSU2_TR(0x7734fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7734fc:L7734fc:{c.instructions+=5;NFSU2_TR(0x7734fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7734fe:{NFSU2_TR(0x7734fe);
u8 U[4];
w4(U+0,u32(0x794424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773503:{NFSU2_TR(0x773503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773506:{NFSU2_TR(0x773506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773507:{NFSU2_TR(0x773507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77350cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77350c:L77350c:{c.instructions+=2;NFSU2_TR(0x77350c);
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
B77350f:{NFSU2_TR(0x77350f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773510:L773510:{c.instructions+=5;NFSU2_TR(0x773510);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773512:{NFSU2_TR(0x773512);
u8 U[4];
w4(U+0,u32(0x794418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773517:{NFSU2_TR(0x773517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77351a:{NFSU2_TR(0x77351a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77351b:{NFSU2_TR(0x77351b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773520ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773520:L773520:{c.instructions+=2;NFSU2_TR(0x773520);
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
B773523:{NFSU2_TR(0x773523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773524:L773524:{c.instructions+=5;NFSU2_TR(0x773524);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773526:{NFSU2_TR(0x773526);
u8 U[4];
w4(U+0,u32(0x79440cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77352b:{NFSU2_TR(0x77352b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77352e:{NFSU2_TR(0x77352e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77352f:{NFSU2_TR(0x77352f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773534ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773534:L773534:{c.instructions+=2;NFSU2_TR(0x773534);
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
B773537:{NFSU2_TR(0x773537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773538:L773538:{c.instructions+=5;NFSU2_TR(0x773538);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77353a:{NFSU2_TR(0x77353a);
u8 U[4];
w4(U+0,u32(0x794400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77353f:{NFSU2_TR(0x77353f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773542:{NFSU2_TR(0x773542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773543:{NFSU2_TR(0x773543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773548ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773548:L773548:{c.instructions+=2;NFSU2_TR(0x773548);
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
B77354b:{NFSU2_TR(0x77354b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77354c:L77354c:{c.instructions+=5;NFSU2_TR(0x77354c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77354e:{NFSU2_TR(0x77354e);
u8 U[4];
w4(U+0,u32(0x7943f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773553:{NFSU2_TR(0x773553);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773556:{NFSU2_TR(0x773556);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773557:{NFSU2_TR(0x773557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77355cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77355c:L77355c:{c.instructions+=2;NFSU2_TR(0x77355c);
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
B77355f:{NFSU2_TR(0x77355f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773560:L773560:{c.instructions+=5;NFSU2_TR(0x773560);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773562:{NFSU2_TR(0x773562);
u8 U[4];
w4(U+0,u32(0x7943e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773567:{NFSU2_TR(0x773567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77356a:{NFSU2_TR(0x77356a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77356b:{NFSU2_TR(0x77356b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773570ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773570:L773570:{c.instructions+=2;NFSU2_TR(0x773570);
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
B773573:{NFSU2_TR(0x773573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773574:L773574:{c.instructions+=5;NFSU2_TR(0x773574);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773576:{NFSU2_TR(0x773576);
u8 U[4];
w4(U+0,u32(0x7943d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77357b:{NFSU2_TR(0x77357b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77357e:{NFSU2_TR(0x77357e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77357f:{NFSU2_TR(0x77357f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773584ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773584:L773584:{c.instructions+=2;NFSU2_TR(0x773584);
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
B773587:{NFSU2_TR(0x773587);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773588:L773588:{c.instructions+=5;NFSU2_TR(0x773588);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77358a:{NFSU2_TR(0x77358a);
u8 U[4];
w4(U+0,u32(0x7943ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77358f:{NFSU2_TR(0x77358f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773592:{NFSU2_TR(0x773592);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773593:{NFSU2_TR(0x773593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773598ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773598:L773598:{c.instructions+=2;NFSU2_TR(0x773598);
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
B77359b:{NFSU2_TR(0x77359b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77359c:L77359c:{c.instructions+=5;NFSU2_TR(0x77359c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77359e:{NFSU2_TR(0x77359e);
u8 U[4];
w4(U+0,u32(0x7943bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735a3:{NFSU2_TR(0x7735a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7735a6:{NFSU2_TR(0x7735a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735a7:{NFSU2_TR(0x7735a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7735acull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7735ac:L7735ac:{c.instructions+=2;NFSU2_TR(0x7735ac);
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
B7735af:{NFSU2_TR(0x7735af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7735b0:L7735b0:{c.instructions+=2;NFSU2_TR(0x7735b0);
w4(R+0,u32(0x7df83cull));
}
B7735b5:{NFSU2_TR(0x7735b5);
TAIL_STATIC(0x75bfd2u,75b);
}
B7735c0:L7735c0:{c.instructions+=5;NFSU2_TR(0x7735c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735c2:{NFSU2_TR(0x7735c2);
u8 U[4];
w4(U+0,u32(0x794470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735c7:{NFSU2_TR(0x7735c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7735ca:{NFSU2_TR(0x7735ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735cb:{NFSU2_TR(0x7735cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7735d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7735d0:L7735d0:{c.instructions+=2;NFSU2_TR(0x7735d0);
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
B7735d3:{NFSU2_TR(0x7735d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7735d4:L7735d4:{c.instructions+=5;NFSU2_TR(0x7735d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735d6:{NFSU2_TR(0x7735d6);
u8 U[4];
w4(U+0,u32(0x794458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735db:{NFSU2_TR(0x7735db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7735de:{NFSU2_TR(0x7735de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7735df:{NFSU2_TR(0x7735df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7735e4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7735e4:L7735e4:{c.instructions+=2;NFSU2_TR(0x7735e4);
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
B7735e7:{NFSU2_TR(0x7735e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7735e8:L7735e8:{c.instructions+=2;NFSU2_TR(0x7735e8);
w4(R+0,u32(0x7df868ull));
}
B7735ed:{NFSU2_TR(0x7735ed);
TAIL_STATIC(0x75bfd2u,75b);
}
B773600:L773600:{c.instructions+=5;NFSU2_TR(0x773600);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773602:{NFSU2_TR(0x773602);
u8 U[4];
w4(U+0,u32(0x794580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773607:{NFSU2_TR(0x773607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77360a:{NFSU2_TR(0x77360a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77360b:{NFSU2_TR(0x77360b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773610ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773610:L773610:{c.instructions+=2;NFSU2_TR(0x773610);
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
B773613:{NFSU2_TR(0x773613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773614:L773614:{c.instructions+=5;NFSU2_TR(0x773614);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773616:{NFSU2_TR(0x773616);
u8 U[4];
w4(U+0,u32(0x794574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77361b:{NFSU2_TR(0x77361b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77361e:{NFSU2_TR(0x77361e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77361f:{NFSU2_TR(0x77361f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773624ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773624:L773624:{c.instructions+=2;NFSU2_TR(0x773624);
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
B773627:{NFSU2_TR(0x773627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773628:L773628:{c.instructions+=5;NFSU2_TR(0x773628);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77362a:{NFSU2_TR(0x77362a);
u8 U[4];
w4(U+0,u32(0x794568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77362f:{NFSU2_TR(0x77362f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773632:{NFSU2_TR(0x773632);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773633:{NFSU2_TR(0x773633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773638ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773638:L773638:{c.instructions+=2;NFSU2_TR(0x773638);
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
B77363b:{NFSU2_TR(0x77363b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77363c:L77363c:{c.instructions+=2;NFSU2_TR(0x77363c);
w4(R+0,u32(0x7df89cull));
}
B773641:{NFSU2_TR(0x773641);
TAIL_STATIC(0x75bfd2u,75b);
}
B773650:L773650:{c.instructions+=5;NFSU2_TR(0x773650);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773652:{NFSU2_TR(0x773652);
u8 U[4];
w4(U+0,u32(0x7945d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773657:{NFSU2_TR(0x773657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77365a:{NFSU2_TR(0x77365a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77365b:{NFSU2_TR(0x77365b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773660ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773660:L773660:{c.instructions+=2;NFSU2_TR(0x773660);
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
B773663:{NFSU2_TR(0x773663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773664:L773664:{c.instructions+=2;NFSU2_TR(0x773664);
w4(R+0,u32(0x7df8c0ull));
}
B773669:{NFSU2_TR(0x773669);
TAIL_STATIC(0x75bfd2u,75b);
}
B773670:L773670:{c.instructions+=5;NFSU2_TR(0x773670);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773672:{NFSU2_TR(0x773672);
u8 U[4];
w4(U+0,u32(0x794620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773677:{NFSU2_TR(0x773677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77367a:{NFSU2_TR(0x77367a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77367b:{NFSU2_TR(0x77367b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773680ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773680:L773680:{c.instructions+=2;NFSU2_TR(0x773680);
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
B773683:{NFSU2_TR(0x773683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773684:L773684:{c.instructions+=2;NFSU2_TR(0x773684);
w4(R+0,u32(0x7df8e4ull));
}
B773689:{NFSU2_TR(0x773689);
TAIL_STATIC(0x75bfd2u,75b);
}
B773690:L773690:{c.instructions+=5;NFSU2_TR(0x773690);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773692:{NFSU2_TR(0x773692);
u8 U[4];
w4(U+0,u32(0x794658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773697:{NFSU2_TR(0x773697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77369a:{NFSU2_TR(0x77369a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77369b:{NFSU2_TR(0x77369b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7736a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7736a0:L7736a0:{c.instructions+=2;NFSU2_TR(0x7736a0);
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
B7736a3:{NFSU2_TR(0x7736a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7736a4:L7736a4:{c.instructions+=5;NFSU2_TR(0x7736a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736a6:{NFSU2_TR(0x7736a6);
u8 U[4];
w4(U+0,u32(0x794644ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736ab:{NFSU2_TR(0x7736ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7736ae:{NFSU2_TR(0x7736ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736af:{NFSU2_TR(0x7736af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7736b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7736b4:L7736b4:{c.instructions+=2;NFSU2_TR(0x7736b4);
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
B7736b7:{NFSU2_TR(0x7736b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7736b8:L7736b8:{c.instructions+=5;NFSU2_TR(0x7736b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736ba:{NFSU2_TR(0x7736ba);
u8 U[4];
w4(U+0,u32(0x79462cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736bf:{NFSU2_TR(0x7736bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7736c2:{NFSU2_TR(0x7736c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7736c3:{NFSU2_TR(0x7736c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7736c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7736c8:L7736c8:{c.instructions+=2;NFSU2_TR(0x7736c8);
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
B7736cb:{NFSU2_TR(0x7736cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7736cc:L7736cc:{c.instructions+=2;NFSU2_TR(0x7736cc);
w4(R+0,u32(0x7df918ull));
}
B7736d1:{NFSU2_TR(0x7736d1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7736e0:L7736e0:{c.instructions+=2;NFSU2_TR(0x7736e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7736e3:{NFSU2_TR(0x7736e3);
TAIL_STATIC(0x510d40u,510);
}
B7736e8:L7736e8:{c.instructions+=3;NFSU2_TR(0x7736e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7736eb:{NFSU2_TR(0x7736eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B7736ee:{NFSU2_TR(0x7736ee);
TAIL_STATIC(0x49d870u,49d);
}
B7736f3:L7736f3:{c.instructions+=2;NFSU2_TR(0x7736f3);
w4(R+0,u32(0x7df944ull));
}
B7736f8:{NFSU2_TR(0x7736f8);
TAIL_STATIC(0x75bfd2u,75b);
}
B773700:L773700:{c.instructions+=5;NFSU2_TR(0x773700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773702:{NFSU2_TR(0x773702);
u8 U[4];
w4(U+0,u32(0x794678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773707:{NFSU2_TR(0x773707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77370a:{NFSU2_TR(0x77370a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77370b:{NFSU2_TR(0x77370b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773710ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773710:L773710:{c.instructions+=2;NFSU2_TR(0x773710);
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
B773713:{NFSU2_TR(0x773713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773714:L773714:{c.instructions+=2;NFSU2_TR(0x773714);
w4(R+0,u32(0x7df968ull));
}
B773719:{NFSU2_TR(0x773719);
TAIL_STATIC(0x75bfd2u,75b);
}
B773720:L773720:{c.instructions+=5;NFSU2_TR(0x773720);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773722:{NFSU2_TR(0x773722);
u8 U[4];
w4(U+0,u32(0x794800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773727:{NFSU2_TR(0x773727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77372a:{NFSU2_TR(0x77372a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77372b:{NFSU2_TR(0x77372b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773730ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773730:L773730:{c.instructions+=2;NFSU2_TR(0x773730);
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
B773733:{NFSU2_TR(0x773733);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773734:L773734:{c.instructions+=5;NFSU2_TR(0x773734);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773736:{NFSU2_TR(0x773736);
u8 U[4];
w4(U+0,u32(0x7947e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77373b:{NFSU2_TR(0x77373b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77373e:{NFSU2_TR(0x77373e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77373f:{NFSU2_TR(0x77373f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773744ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773744:L773744:{c.instructions+=2;NFSU2_TR(0x773744);
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
B773747:{NFSU2_TR(0x773747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773748:L773748:{c.instructions+=5;NFSU2_TR(0x773748);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77374a:{NFSU2_TR(0x77374a);
u8 U[4];
w4(U+0,u32(0x7947d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77374f:{NFSU2_TR(0x77374f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773752:{NFSU2_TR(0x773752);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773753:{NFSU2_TR(0x773753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773758ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773758:L773758:{c.instructions+=2;NFSU2_TR(0x773758);
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
B77375b:{NFSU2_TR(0x77375b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77375c:L77375c:{c.instructions+=2;NFSU2_TR(0x77375c);
w4(R+0,u32(0x7df99cull));
}
B773761:{NFSU2_TR(0x773761);
TAIL_STATIC(0x75bfd2u,75b);
}
B773770:L773770:{c.instructions+=5;NFSU2_TR(0x773770);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773772:{NFSU2_TR(0x773772);
u8 U[4];
w4(U+0,u32(0x794814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773777:{NFSU2_TR(0x773777);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77377a:{NFSU2_TR(0x77377a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77377b:{NFSU2_TR(0x77377b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773780ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773780:L773780:{c.instructions+=2;NFSU2_TR(0x773780);
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
B773783:{NFSU2_TR(0x773783);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773784:L773784:{c.instructions+=2;NFSU2_TR(0x773784);
w4(R+0,u32(0x7df9c0ull));
}
B773789:{NFSU2_TR(0x773789);
TAIL_STATIC(0x75bfd2u,75b);
}
B773790:L773790:{c.instructions+=5;NFSU2_TR(0x773790);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773792:{NFSU2_TR(0x773792);
u8 U[4];
w4(U+0,u32(0x794884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773797:{NFSU2_TR(0x773797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77379a:{NFSU2_TR(0x77379a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77379b:{NFSU2_TR(0x77379b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7737a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7737a0:L7737a0:{c.instructions+=2;NFSU2_TR(0x7737a0);
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
B7737a3:{NFSU2_TR(0x7737a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7737a4:L7737a4:{c.instructions+=5;NFSU2_TR(0x7737a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737a6:{NFSU2_TR(0x7737a6);
u8 U[4];
w4(U+0,u32(0x794884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737ab:{NFSU2_TR(0x7737ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7737ae:{NFSU2_TR(0x7737ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737af:{NFSU2_TR(0x7737af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7737b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7737b4:L7737b4:{c.instructions+=2;NFSU2_TR(0x7737b4);
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
B7737b7:{NFSU2_TR(0x7737b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7737b8:L7737b8:{c.instructions+=2;NFSU2_TR(0x7737b8);
w4(R+0,u32(0x7df9ecull));
}
B7737bd:{NFSU2_TR(0x7737bd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7737d0:L7737d0:{c.instructions+=5;NFSU2_TR(0x7737d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737d2:{NFSU2_TR(0x7737d2);
u8 U[4];
w4(U+0,u32(0x794af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737d7:{NFSU2_TR(0x7737d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7737da:{NFSU2_TR(0x7737da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737db:{NFSU2_TR(0x7737db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7737e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7737e0:L7737e0:{c.instructions+=2;NFSU2_TR(0x7737e0);
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
B7737e3:{NFSU2_TR(0x7737e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7737e4:L7737e4:{c.instructions+=2;NFSU2_TR(0x7737e4);
w4(R+0,u32(0x7dfa10ull));
}
B7737e9:{NFSU2_TR(0x7737e9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7737f0:L7737f0:{c.instructions+=5;NFSU2_TR(0x7737f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737f2:{NFSU2_TR(0x7737f2);
u8 U[4];
w4(U+0,u32(0x794b14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737f7:{NFSU2_TR(0x7737f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7737fa:{NFSU2_TR(0x7737fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7737fb:{NFSU2_TR(0x7737fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773800ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773800:L773800:{c.instructions+=2;NFSU2_TR(0x773800);
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
B773803:{NFSU2_TR(0x773803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773804:L773804:{c.instructions+=2;NFSU2_TR(0x773804);
w4(R+0,u32(0x7dfa34ull));
}
B773809:{NFSU2_TR(0x773809);
TAIL_STATIC(0x75bfd2u,75b);
}
B773810:L773810:{c.instructions+=2;NFSU2_TR(0x773810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773813:{NFSU2_TR(0x773813);
TAIL_STATIC(0x4cf650u,4cf);
}
B773818:L773818:{c.instructions+=2;NFSU2_TR(0x773818);
w4(R+0,u32(0x7df4a8ull));
}
B77381d:{NFSU2_TR(0x77381d);
TAIL_STATIC(0x75bfd2u,75b);
}
B773830:L773830:{c.instructions+=5;NFSU2_TR(0x773830);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773832:{NFSU2_TR(0x773832);
u8 U[4];
w4(U+0,u32(0x794c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773837:{NFSU2_TR(0x773837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77383a:{NFSU2_TR(0x77383a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77383b:{NFSU2_TR(0x77383b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773840ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773840:L773840:{c.instructions+=2;NFSU2_TR(0x773840);
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
B773843:{NFSU2_TR(0x773843);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773844:L773844:{c.instructions+=5;NFSU2_TR(0x773844);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773846:{NFSU2_TR(0x773846);
u8 U[4];
w4(U+0,u32(0x794c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77384b:{NFSU2_TR(0x77384b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77384e:{NFSU2_TR(0x77384e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77384f:{NFSU2_TR(0x77384f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773854ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773854:L773854:{c.instructions+=2;NFSU2_TR(0x773854);
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
B773857:{NFSU2_TR(0x773857);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773858:L773858:{c.instructions+=5;NFSU2_TR(0x773858);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77385a:{NFSU2_TR(0x77385a);
u8 U[4];
w4(U+0,u32(0x794c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77385f:{NFSU2_TR(0x77385f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773862:{NFSU2_TR(0x773862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773863:{NFSU2_TR(0x773863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773868ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773868:L773868:{c.instructions+=2;NFSU2_TR(0x773868);
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
B77386b:{NFSU2_TR(0x77386b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77386c:L77386c:{c.instructions+=5;NFSU2_TR(0x77386c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77386e:{NFSU2_TR(0x77386e);
u8 U[4];
w4(U+0,u32(0x794c44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773873:{NFSU2_TR(0x773873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773876:{NFSU2_TR(0x773876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773877:{NFSU2_TR(0x773877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77387cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77387c:L77387c:{c.instructions+=2;NFSU2_TR(0x77387c);
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
B77387f:{NFSU2_TR(0x77387f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773880:L773880:{c.instructions+=2;NFSU2_TR(0x773880);
w4(R+0,u32(0x7dfa70ull));
}
B773885:{NFSU2_TR(0x773885);
TAIL_STATIC(0x75bfd2u,75b);
}
B773890:L773890:{c.instructions+=2;NFSU2_TR(0x773890);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B773896:{NFSU2_TR(0x773896);
TAIL_STATIC(0x401800u,401);
}
B77389b:L77389b:{c.instructions+=2;NFSU2_TR(0x77389b);
w4(R+0,u32(0x7dfa94ull));
}
B7738a0:{NFSU2_TR(0x7738a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7738b0:L7738b0:{c.instructions+=5;NFSU2_TR(0x7738b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738b2:{NFSU2_TR(0x7738b2);
u8 U[4];
w4(U+0,u32(0x794e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738b7:{NFSU2_TR(0x7738b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7738ba:{NFSU2_TR(0x7738ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738bb:{NFSU2_TR(0x7738bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7738c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7738c0:L7738c0:{c.instructions+=2;NFSU2_TR(0x7738c0);
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
B7738c3:{NFSU2_TR(0x7738c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7738c4:L7738c4:{c.instructions+=5;NFSU2_TR(0x7738c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738c6:{NFSU2_TR(0x7738c6);
u8 U[4];
w4(U+0,u32(0x794e48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738cb:{NFSU2_TR(0x7738cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7738ce:{NFSU2_TR(0x7738ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738cf:{NFSU2_TR(0x7738cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7738d4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7738d4:L7738d4:{c.instructions+=2;NFSU2_TR(0x7738d4);
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
B7738d7:{NFSU2_TR(0x7738d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7738d8:L7738d8:{c.instructions+=5;NFSU2_TR(0x7738d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738da:{NFSU2_TR(0x7738da);
u8 U[4];
w4(U+0,u32(0x794e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738df:{NFSU2_TR(0x7738df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7738e2:{NFSU2_TR(0x7738e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738e3:{NFSU2_TR(0x7738e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7738e8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7738e8:L7738e8:{c.instructions+=2;NFSU2_TR(0x7738e8);
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
B7738eb:{NFSU2_TR(0x7738eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7738ec:L7738ec:{c.instructions+=5;NFSU2_TR(0x7738ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738ee:{NFSU2_TR(0x7738ee);
u8 U[4];
w4(U+0,u32(0x794e24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738f3:{NFSU2_TR(0x7738f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7738f6:{NFSU2_TR(0x7738f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7738f7:{NFSU2_TR(0x7738f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7738fcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7738fc:L7738fc:{c.instructions+=2;NFSU2_TR(0x7738fc);
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
B7738ff:{NFSU2_TR(0x7738ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773900:L773900:{c.instructions+=5;NFSU2_TR(0x773900);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773902:{NFSU2_TR(0x773902);
u8 U[4];
w4(U+0,u32(0x794e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773907:{NFSU2_TR(0x773907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77390a:{NFSU2_TR(0x77390a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77390b:{NFSU2_TR(0x77390b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773910ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773910:L773910:{c.instructions+=2;NFSU2_TR(0x773910);
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
B773913:{NFSU2_TR(0x773913);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773914:L773914:{c.instructions+=2;NFSU2_TR(0x773914);
w4(R+0,u32(0x7dfafcull));
}
B773919:{NFSU2_TR(0x773919);
TAIL_STATIC(0x75bfd2u,75b);
}
B773920:L773920:{c.instructions+=5;NFSU2_TR(0x773920);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773922:{NFSU2_TR(0x773922);
u8 U[4];
w4(U+0,u32(0x794f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773927:{NFSU2_TR(0x773927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77392a:{NFSU2_TR(0x77392a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77392b:{NFSU2_TR(0x77392b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773930ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773930:L773930:{c.instructions+=2;NFSU2_TR(0x773930);
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
B773933:{NFSU2_TR(0x773933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773934:L773934:{c.instructions+=5;NFSU2_TR(0x773934);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773936:{NFSU2_TR(0x773936);
u8 U[4];
w4(U+0,u32(0x794f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77393b:{NFSU2_TR(0x77393b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77393e:{NFSU2_TR(0x77393e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77393f:{NFSU2_TR(0x77393f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773944ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773944:L773944:{c.instructions+=2;NFSU2_TR(0x773944);
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
B773947:{NFSU2_TR(0x773947);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773948:L773948:{c.instructions+=5;NFSU2_TR(0x773948);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77394a:{NFSU2_TR(0x77394a);
u8 U[4];
w4(U+0,u32(0x794f60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77394f:{NFSU2_TR(0x77394f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773952:{NFSU2_TR(0x773952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773953:{NFSU2_TR(0x773953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773958ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773958:L773958:{c.instructions+=2;NFSU2_TR(0x773958);
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
B77395b:{NFSU2_TR(0x77395b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77395c:L77395c:{c.instructions+=2;NFSU2_TR(0x77395c);
w4(R+0,u32(0x7dfb30ull));
}
B773961:{NFSU2_TR(0x773961);
TAIL_STATIC(0x75bfd2u,75b);
}
B773970:L773970:{c.instructions+=5;NFSU2_TR(0x773970);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773972:{NFSU2_TR(0x773972);
u8 U[4];
w4(U+0,u32(0x7950a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773977:{NFSU2_TR(0x773977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77397a:{NFSU2_TR(0x77397a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77397b:{NFSU2_TR(0x77397b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773980ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773980:L773980:{c.instructions+=2;NFSU2_TR(0x773980);
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
B773983:{NFSU2_TR(0x773983);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773984:L773984:{c.instructions+=5;NFSU2_TR(0x773984);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773986:{NFSU2_TR(0x773986);
u8 U[4];
w4(U+0,u32(0x795094ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77398b:{NFSU2_TR(0x77398b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77398e:{NFSU2_TR(0x77398e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77398f:{NFSU2_TR(0x77398f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773994ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773994:L773994:{c.instructions+=2;NFSU2_TR(0x773994);
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
B773997:{NFSU2_TR(0x773997);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773998:L773998:{c.instructions+=5;NFSU2_TR(0x773998);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77399a:{NFSU2_TR(0x77399a);
u8 U[4];
w4(U+0,u32(0x795080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77399f:{NFSU2_TR(0x77399f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7739a2:{NFSU2_TR(0x7739a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739a3:{NFSU2_TR(0x7739a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7739a8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7739a8:L7739a8:{c.instructions+=2;NFSU2_TR(0x7739a8);
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
B7739ab:{NFSU2_TR(0x7739ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7739ac:L7739ac:{c.instructions+=5;NFSU2_TR(0x7739ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739ae:{NFSU2_TR(0x7739ae);
u8 U[4];
w4(U+0,u32(0x795070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739b3:{NFSU2_TR(0x7739b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7739b6:{NFSU2_TR(0x7739b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739b7:{NFSU2_TR(0x7739b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7739bcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7739bc:L7739bc:{c.instructions+=2;NFSU2_TR(0x7739bc);
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
B7739bf:{NFSU2_TR(0x7739bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7739c0:L7739c0:{c.instructions+=5;NFSU2_TR(0x7739c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739c2:{NFSU2_TR(0x7739c2);
u8 U[4];
w4(U+0,u32(0x795060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739c7:{NFSU2_TR(0x7739c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7739ca:{NFSU2_TR(0x7739ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739cb:{NFSU2_TR(0x7739cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7739d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7739d0:L7739d0:{c.instructions+=2;NFSU2_TR(0x7739d0);
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
B7739d3:{NFSU2_TR(0x7739d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7739d4:L7739d4:{c.instructions+=5;NFSU2_TR(0x7739d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739d6:{NFSU2_TR(0x7739d6);
u8 U[4];
w4(U+0,u32(0x795054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739db:{NFSU2_TR(0x7739db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7739de:{NFSU2_TR(0x7739de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739df:{NFSU2_TR(0x7739df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7739e4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7739e4:L7739e4:{c.instructions+=2;NFSU2_TR(0x7739e4);
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
B7739e7:{NFSU2_TR(0x7739e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7739e8:L7739e8:{c.instructions+=5;NFSU2_TR(0x7739e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739ea:{NFSU2_TR(0x7739ea);
u8 U[4];
w4(U+0,u32(0x795044ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739ef:{NFSU2_TR(0x7739ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7739f2:{NFSU2_TR(0x7739f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7739f3:{NFSU2_TR(0x7739f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7739f8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7739f8:L7739f8:{c.instructions+=2;NFSU2_TR(0x7739f8);
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
B7739fb:{NFSU2_TR(0x7739fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7739fc:L7739fc:{c.instructions+=2;NFSU2_TR(0x7739fc);
w4(R+0,u32(0x7dfb84ull));
}
B773a01:{NFSU2_TR(0x773a01);
TAIL_STATIC(0x75bfd2u,75b);
}
B773a10:L773a10:{c.instructions+=3;NFSU2_TR(0x773a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773a16:{NFSU2_TR(0x773a16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a17:{NFSU2_TR(0x773a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773a1cull));
TAIL_STATIC(0x575630u,575);
}
B773a1c:L773a1c:{c.instructions+=2;NFSU2_TR(0x773a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B773a1d:{NFSU2_TR(0x773a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773a1e:L773a1e:{c.instructions+=2;NFSU2_TR(0x773a1e);
w4(R+0,u32(0x7dfba8ull));
}
B773a23:{NFSU2_TR(0x773a23);
TAIL_STATIC(0x75bfd2u,75b);
}
B773a30:L773a30:{c.instructions+=2;NFSU2_TR(0x773a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773a33:{NFSU2_TR(0x773a33);
TAIL_STATIC(0x510d40u,510);
}
B773a38:L773a38:{c.instructions+=2;NFSU2_TR(0x773a38);
w4(R+0,u32(0x7dfab8ull));
}
B773a3d:{NFSU2_TR(0x773a3d);
TAIL_STATIC(0x75bfd2u,75b);
}
B773a50:L773a50:{c.instructions+=5;NFSU2_TR(0x773a50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a52:{NFSU2_TR(0x773a52);
u8 U[4];
w4(U+0,u32(0x79546cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a57:{NFSU2_TR(0x773a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773a5a:{NFSU2_TR(0x773a5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a5b:{NFSU2_TR(0x773a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773a60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773a60:L773a60:{c.instructions+=2;NFSU2_TR(0x773a60);
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
B773a63:{NFSU2_TR(0x773a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773a64:L773a64:{c.instructions+=2;NFSU2_TR(0x773a64);
w4(R+0,u32(0x7dfbccull));
}
B773a69:{NFSU2_TR(0x773a69);
TAIL_STATIC(0x75bfd2u,75b);
}
B773a70:L773a70:{c.instructions+=5;NFSU2_TR(0x773a70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a72:{NFSU2_TR(0x773a72);
u8 U[4];
w4(U+0,u32(0x7954a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a77:{NFSU2_TR(0x773a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773a7a:{NFSU2_TR(0x773a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773a7b:{NFSU2_TR(0x773a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773a80ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773a80:L773a80:{c.instructions+=2;NFSU2_TR(0x773a80);
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
B773a83:{NFSU2_TR(0x773a83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773a84:L773a84:{c.instructions+=2;NFSU2_TR(0x773a84);
w4(R+0,u32(0x7dfbf0ull));
}
B773a89:{NFSU2_TR(0x773a89);
TAIL_STATIC(0x75bfd2u,75b);
}
B773a90:L773a90:{c.instructions+=3;NFSU2_TR(0x773a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773a93:{NFSU2_TR(0x773a93);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B773a96:{NFSU2_TR(0x773a96);
TAIL_STATIC(0x4903b0u,490);
}
B773a9b:L773a9b:{c.instructions+=3;NFSU2_TR(0x773a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773a9e:{NFSU2_TR(0x773a9e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B773aa1:{NFSU2_TR(0x773aa1);
TAIL_STATIC(0x4903b0u,490);
}
B773aa6:L773aa6:{c.instructions+=2;NFSU2_TR(0x773aa6);
w4(R+0,u32(0x7dfc1cull));
}
B773aab:{NFSU2_TR(0x773aab);
TAIL_STATIC(0x75bfd2u,75b);
}
B773ab0:L773ab0:{c.instructions+=3;NFSU2_TR(0x773ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773ab3:{NFSU2_TR(0x773ab3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B773ab6:{NFSU2_TR(0x773ab6);
TAIL_STATIC(0x4903b0u,490);
}
B773abb:L773abb:{c.instructions+=3;NFSU2_TR(0x773abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773abe:{NFSU2_TR(0x773abe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B773ac1:{NFSU2_TR(0x773ac1);
TAIL_STATIC(0x4903b0u,490);
}
B773ac6:L773ac6:{c.instructions+=7;NFSU2_TR(0x773ac6);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773acb:{NFSU2_TR(0x773acb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773acd:{NFSU2_TR(0x773acd);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773acf:{NFSU2_TR(0x773acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773ad2:{NFSU2_TR(0x773ad2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
}
B773ad5:{NFSU2_TR(0x773ad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ad6:{NFSU2_TR(0x773ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773adbull));
TAIL_STATIC(0x75c401u,75c);
}
B773adb:L773adb:{c.instructions+=1;NFSU2_TR(0x773adb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773adc:L773adc:{c.instructions+=3;NFSU2_TR(0x773adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773adf:{NFSU2_TR(0x773adf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7cull))));
}
B773ae2:{NFSU2_TR(0x773ae2);
TAIL_STATIC(0x4903b0u,490);
}
B773ae7:L773ae7:{c.instructions+=2;NFSU2_TR(0x773ae7);
w4(R+0,u32(0x7dfc58ull));
}
B773aec:{NFSU2_TR(0x773aec);
TAIL_STATIC(0x75bfd2u,75b);
}
B773b00:L773b00:{c.instructions+=2;NFSU2_TR(0x773b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773b03:{NFSU2_TR(0x773b03);
TAIL_STATIC(0x510d40u,510);
}
B773b08:L773b08:{c.instructions+=3;NFSU2_TR(0x773b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773b0b:{NFSU2_TR(0x773b0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x6cull))));
}
B773b0e:{NFSU2_TR(0x773b0e);
TAIL_STATIC(0x4c19e0u,4c1);
}
B773b13:L773b13:{c.instructions+=3;NFSU2_TR(0x773b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B773b16:{NFSU2_TR(0x773b16);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x23cull))));
}
B773b1c:{NFSU2_TR(0x773b1c);
TAIL_STATIC(0x4c1720u,4c1);
}
B773b21:L773b21:{c.instructions+=2;NFSU2_TR(0x773b21);
w4(R+0,u32(0x7dfc8cull));
}
B773b26:{NFSU2_TR(0x773b26);
TAIL_STATIC(0x75bfd2u,75b);
}
B773b30:L773b30:{c.instructions+=5;NFSU2_TR(0x773b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b32:{NFSU2_TR(0x773b32);
u8 U[4];
w4(U+0,u32(0x795574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b37:{NFSU2_TR(0x773b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b3a:{NFSU2_TR(0x773b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b3b:{NFSU2_TR(0x773b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773b40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773b40:L773b40:{c.instructions+=2;NFSU2_TR(0x773b40);
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
B773b43:{NFSU2_TR(0x773b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773b44:L773b44:{c.instructions+=5;NFSU2_TR(0x773b44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b46:{NFSU2_TR(0x773b46);
u8 U[4];
w4(U+0,u32(0x795574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b4b:{NFSU2_TR(0x773b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b4e:{NFSU2_TR(0x773b4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b4f:{NFSU2_TR(0x773b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773b54ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773b54:L773b54:{c.instructions+=2;NFSU2_TR(0x773b54);
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
B773b57:{NFSU2_TR(0x773b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773b58:L773b58:{c.instructions+=5;NFSU2_TR(0x773b58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b5a:{NFSU2_TR(0x773b5a);
u8 U[4];
w4(U+0,u32(0x795564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b5f:{NFSU2_TR(0x773b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b62:{NFSU2_TR(0x773b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b63:{NFSU2_TR(0x773b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773b68ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773b68:L773b68:{c.instructions+=2;NFSU2_TR(0x773b68);
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
B773b6b:{NFSU2_TR(0x773b6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773b6c:L773b6c:{c.instructions+=5;NFSU2_TR(0x773b6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b6e:{NFSU2_TR(0x773b6e);
u8 U[4];
w4(U+0,u32(0x795550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b73:{NFSU2_TR(0x773b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b76:{NFSU2_TR(0x773b76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b77:{NFSU2_TR(0x773b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773b7cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773b7c:L773b7c:{c.instructions+=2;NFSU2_TR(0x773b7c);
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
B773b7f:{NFSU2_TR(0x773b7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773b80:L773b80:{c.instructions+=5;NFSU2_TR(0x773b80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b82:{NFSU2_TR(0x773b82);
u8 U[4];
w4(U+0,u32(0x795544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b87:{NFSU2_TR(0x773b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b8a:{NFSU2_TR(0x773b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b8b:{NFSU2_TR(0x773b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773b90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773b90:L773b90:{c.instructions+=2;NFSU2_TR(0x773b90);
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
B773b93:{NFSU2_TR(0x773b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773b94:L773b94:{c.instructions+=5;NFSU2_TR(0x773b94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b96:{NFSU2_TR(0x773b96);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b9b:{NFSU2_TR(0x773b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773b9e:{NFSU2_TR(0x773b9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773b9f:{NFSU2_TR(0x773b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ba4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ba4:L773ba4:{c.instructions+=2;NFSU2_TR(0x773ba4);
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
B773ba7:{NFSU2_TR(0x773ba7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ba8:L773ba8:{c.instructions+=5;NFSU2_TR(0x773ba8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773baa:{NFSU2_TR(0x773baa);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773baf:{NFSU2_TR(0x773baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773bb2:{NFSU2_TR(0x773bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bb3:{NFSU2_TR(0x773bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773bb8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773bb8:L773bb8:{c.instructions+=2;NFSU2_TR(0x773bb8);
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
B773bbb:{NFSU2_TR(0x773bbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773bbc:L773bbc:{c.instructions+=5;NFSU2_TR(0x773bbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bbe:{NFSU2_TR(0x773bbe);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bc3:{NFSU2_TR(0x773bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773bc6:{NFSU2_TR(0x773bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bc7:{NFSU2_TR(0x773bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773bccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773bcc:L773bcc:{c.instructions+=2;NFSU2_TR(0x773bcc);
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
B773bcf:{NFSU2_TR(0x773bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773bd0:L773bd0:{c.instructions+=2;NFSU2_TR(0x773bd0);
w4(R+0,u32(0x7dfce8ull));
}
B773bd5:{NFSU2_TR(0x773bd5);
TAIL_STATIC(0x75bfd2u,75b);
}
B773be0:L773be0:{c.instructions+=5;NFSU2_TR(0x773be0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773be2:{NFSU2_TR(0x773be2);
u8 U[4];
w4(U+0,u32(0x7955c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773be7:{NFSU2_TR(0x773be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773bea:{NFSU2_TR(0x773bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773beb:{NFSU2_TR(0x773beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773bf0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773bf0:L773bf0:{c.instructions+=2;NFSU2_TR(0x773bf0);
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
B773bf3:{NFSU2_TR(0x773bf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773bf4:L773bf4:{c.instructions+=5;NFSU2_TR(0x773bf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bf6:{NFSU2_TR(0x773bf6);
u8 U[4];
w4(U+0,u32(0x7955b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bfb:{NFSU2_TR(0x773bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773bfe:{NFSU2_TR(0x773bfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773bff:{NFSU2_TR(0x773bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c04:L773c04:{c.instructions+=2;NFSU2_TR(0x773c04);
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
B773c07:{NFSU2_TR(0x773c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c08:L773c08:{c.instructions+=5;NFSU2_TR(0x773c08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c0a:{NFSU2_TR(0x773c0a);
u8 U[4];
w4(U+0,u32(0x7955a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c0f:{NFSU2_TR(0x773c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c12:{NFSU2_TR(0x773c12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c13:{NFSU2_TR(0x773c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c18:L773c18:{c.instructions+=2;NFSU2_TR(0x773c18);
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
B773c1b:{NFSU2_TR(0x773c1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c1c:L773c1c:{c.instructions+=5;NFSU2_TR(0x773c1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c1e:{NFSU2_TR(0x773c1e);
u8 U[4];
w4(U+0,u32(0x795588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c23:{NFSU2_TR(0x773c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c26:{NFSU2_TR(0x773c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c27:{NFSU2_TR(0x773c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c2c:L773c2c:{c.instructions+=2;NFSU2_TR(0x773c2c);
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
B773c2f:{NFSU2_TR(0x773c2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c30:L773c30:{c.instructions+=5;NFSU2_TR(0x773c30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c32:{NFSU2_TR(0x773c32);
u8 U[4];
w4(U+0,u32(0x795550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c37:{NFSU2_TR(0x773c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c3a:{NFSU2_TR(0x773c3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c3b:{NFSU2_TR(0x773c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c40:L773c40:{c.instructions+=2;NFSU2_TR(0x773c40);
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
B773c43:{NFSU2_TR(0x773c43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c44:L773c44:{c.instructions+=5;NFSU2_TR(0x773c44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c46:{NFSU2_TR(0x773c46);
u8 U[4];
w4(U+0,u32(0x795544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c4b:{NFSU2_TR(0x773c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c4e:{NFSU2_TR(0x773c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c4f:{NFSU2_TR(0x773c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c54ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c54:L773c54:{c.instructions+=2;NFSU2_TR(0x773c54);
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
B773c57:{NFSU2_TR(0x773c57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c58:L773c58:{c.instructions+=5;NFSU2_TR(0x773c58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c5a:{NFSU2_TR(0x773c5a);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c5f:{NFSU2_TR(0x773c5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c62:{NFSU2_TR(0x773c62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c63:{NFSU2_TR(0x773c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c68ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c68:L773c68:{c.instructions+=2;NFSU2_TR(0x773c68);
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
B773c6b:{NFSU2_TR(0x773c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c6c:L773c6c:{c.instructions+=5;NFSU2_TR(0x773c6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c6e:{NFSU2_TR(0x773c6e);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c73:{NFSU2_TR(0x773c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c76:{NFSU2_TR(0x773c76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c77:{NFSU2_TR(0x773c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c7cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c7c:L773c7c:{c.instructions+=2;NFSU2_TR(0x773c7c);
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
B773c7f:{NFSU2_TR(0x773c7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c80:L773c80:{c.instructions+=5;NFSU2_TR(0x773c80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c82:{NFSU2_TR(0x773c82);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c87:{NFSU2_TR(0x773c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c8a:{NFSU2_TR(0x773c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c8b:{NFSU2_TR(0x773c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773c90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773c90:L773c90:{c.instructions+=2;NFSU2_TR(0x773c90);
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
B773c93:{NFSU2_TR(0x773c93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773c94:L773c94:{c.instructions+=5;NFSU2_TR(0x773c94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c96:{NFSU2_TR(0x773c96);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c9b:{NFSU2_TR(0x773c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773c9e:{NFSU2_TR(0x773c9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773c9f:{NFSU2_TR(0x773c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ca4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ca4:L773ca4:{c.instructions+=2;NFSU2_TR(0x773ca4);
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
B773ca7:{NFSU2_TR(0x773ca7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ca8:L773ca8:{c.instructions+=5;NFSU2_TR(0x773ca8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773caa:{NFSU2_TR(0x773caa);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773caf:{NFSU2_TR(0x773caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773cb2:{NFSU2_TR(0x773cb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cb3:{NFSU2_TR(0x773cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773cb8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773cb8:L773cb8:{c.instructions+=2;NFSU2_TR(0x773cb8);
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
B773cbb:{NFSU2_TR(0x773cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773cbc:L773cbc:{c.instructions+=5;NFSU2_TR(0x773cbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cbe:{NFSU2_TR(0x773cbe);
u8 U[4];
w4(U+0,u32(0x795530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cc3:{NFSU2_TR(0x773cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773cc6:{NFSU2_TR(0x773cc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cc7:{NFSU2_TR(0x773cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773cccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ccc:L773ccc:{c.instructions+=2;NFSU2_TR(0x773ccc);
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
B773ccf:{NFSU2_TR(0x773ccf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773cd0:L773cd0:{c.instructions+=2;NFSU2_TR(0x773cd0);
w4(R+0,u32(0x7dfd64ull));
}
B773cd5:{NFSU2_TR(0x773cd5);
TAIL_STATIC(0x75bfd2u,75b);
}
B773ce0:L773ce0:{c.instructions+=5;NFSU2_TR(0x773ce0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ce2:{NFSU2_TR(0x773ce2);
u8 U[4];
w4(U+0,u32(0x793e44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ce7:{NFSU2_TR(0x773ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773cea:{NFSU2_TR(0x773cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ceb:{NFSU2_TR(0x773ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773cf0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773cf0:L773cf0:{c.instructions+=2;NFSU2_TR(0x773cf0);
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
B773cf3:{NFSU2_TR(0x773cf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773cf4:L773cf4:{c.instructions+=5;NFSU2_TR(0x773cf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cf6:{NFSU2_TR(0x773cf6);
u8 U[4];
w4(U+0,u32(0x793e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cfb:{NFSU2_TR(0x773cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773cfe:{NFSU2_TR(0x773cfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773cff:{NFSU2_TR(0x773cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d04:L773d04:{c.instructions+=2;NFSU2_TR(0x773d04);
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
B773d07:{NFSU2_TR(0x773d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d08:L773d08:{c.instructions+=5;NFSU2_TR(0x773d08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d0a:{NFSU2_TR(0x773d0a);
u8 U[4];
w4(U+0,u32(0x793e2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d0f:{NFSU2_TR(0x773d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d12:{NFSU2_TR(0x773d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d13:{NFSU2_TR(0x773d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d18:L773d18:{c.instructions+=2;NFSU2_TR(0x773d18);
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
B773d1b:{NFSU2_TR(0x773d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d1c:L773d1c:{c.instructions+=5;NFSU2_TR(0x773d1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d1e:{NFSU2_TR(0x773d1e);
u8 U[4];
w4(U+0,u32(0x793e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d23:{NFSU2_TR(0x773d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d26:{NFSU2_TR(0x773d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d27:{NFSU2_TR(0x773d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d2c:L773d2c:{c.instructions+=2;NFSU2_TR(0x773d2c);
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
B773d2f:{NFSU2_TR(0x773d2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d30:L773d30:{c.instructions+=2;NFSU2_TR(0x773d30);
w4(R+0,u32(0x7dfda0ull));
}
B773d35:{NFSU2_TR(0x773d35);
TAIL_STATIC(0x75bfd2u,75b);
}
B773d40:L773d40:{c.instructions+=5;NFSU2_TR(0x773d40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d42:{NFSU2_TR(0x773d42);
u8 U[4];
w4(U+0,u32(0x794028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d47:{NFSU2_TR(0x773d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d4a:{NFSU2_TR(0x773d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d4b:{NFSU2_TR(0x773d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d50:L773d50:{c.instructions+=2;NFSU2_TR(0x773d50);
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
B773d53:{NFSU2_TR(0x773d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d54:L773d54:{c.instructions+=5;NFSU2_TR(0x773d54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d56:{NFSU2_TR(0x773d56);
u8 U[4];
w4(U+0,u32(0x794018ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d5b:{NFSU2_TR(0x773d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d5e:{NFSU2_TR(0x773d5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d5f:{NFSU2_TR(0x773d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d64:L773d64:{c.instructions+=2;NFSU2_TR(0x773d64);
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
B773d67:{NFSU2_TR(0x773d67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d68:L773d68:{c.instructions+=5;NFSU2_TR(0x773d68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d6a:{NFSU2_TR(0x773d6a);
u8 U[4];
w4(U+0,u32(0x794008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d6f:{NFSU2_TR(0x773d6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d72:{NFSU2_TR(0x773d72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d73:{NFSU2_TR(0x773d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d78:L773d78:{c.instructions+=2;NFSU2_TR(0x773d78);
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
B773d7b:{NFSU2_TR(0x773d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d7c:L773d7c:{c.instructions+=5;NFSU2_TR(0x773d7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d7e:{NFSU2_TR(0x773d7e);
u8 U[4];
w4(U+0,u32(0x793ffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d83:{NFSU2_TR(0x773d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d86:{NFSU2_TR(0x773d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d87:{NFSU2_TR(0x773d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773d8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773d8c:L773d8c:{c.instructions+=2;NFSU2_TR(0x773d8c);
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
B773d8f:{NFSU2_TR(0x773d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773d90:L773d90:{c.instructions+=5;NFSU2_TR(0x773d90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d92:{NFSU2_TR(0x773d92);
u8 U[4];
w4(U+0,u32(0x793fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d97:{NFSU2_TR(0x773d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773d9a:{NFSU2_TR(0x773d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773d9b:{NFSU2_TR(0x773d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773da0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773da0:L773da0:{c.instructions+=2;NFSU2_TR(0x773da0);
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
B773da3:{NFSU2_TR(0x773da3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773da4:L773da4:{c.instructions+=5;NFSU2_TR(0x773da4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773da6:{NFSU2_TR(0x773da6);
u8 U[4];
w4(U+0,u32(0x795634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dab:{NFSU2_TR(0x773dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773dae:{NFSU2_TR(0x773dae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773daf:{NFSU2_TR(0x773daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773db4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773db4:L773db4:{c.instructions+=2;NFSU2_TR(0x773db4);
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
B773db7:{NFSU2_TR(0x773db7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773db8:L773db8:{c.instructions+=5;NFSU2_TR(0x773db8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dba:{NFSU2_TR(0x773dba);
u8 U[4];
w4(U+0,u32(0x793fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dbf:{NFSU2_TR(0x773dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773dc2:{NFSU2_TR(0x773dc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dc3:{NFSU2_TR(0x773dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773dc8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773dc8:L773dc8:{c.instructions+=2;NFSU2_TR(0x773dc8);
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
B773dcb:{NFSU2_TR(0x773dcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773dcc:L773dcc:{c.instructions+=2;NFSU2_TR(0x773dcc);
w4(R+0,u32(0x7dfdf4ull));
}
B773dd1:{NFSU2_TR(0x773dd1);
TAIL_STATIC(0x75bfd2u,75b);
}
B773de0:L773de0:{c.instructions+=5;NFSU2_TR(0x773de0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773de2:{NFSU2_TR(0x773de2);
u8 U[4];
w4(U+0,u32(0x794074ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773de7:{NFSU2_TR(0x773de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773dea:{NFSU2_TR(0x773dea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773deb:{NFSU2_TR(0x773deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773df0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773df0:L773df0:{c.instructions+=2;NFSU2_TR(0x773df0);
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
B773df3:{NFSU2_TR(0x773df3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773df4:L773df4:{c.instructions+=5;NFSU2_TR(0x773df4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773df6:{NFSU2_TR(0x773df6);
u8 U[4];
w4(U+0,u32(0x794060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dfb:{NFSU2_TR(0x773dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773dfe:{NFSU2_TR(0x773dfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773dff:{NFSU2_TR(0x773dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e04:L773e04:{c.instructions+=2;NFSU2_TR(0x773e04);
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
B773e07:{NFSU2_TR(0x773e07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e08:L773e08:{c.instructions+=5;NFSU2_TR(0x773e08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e0a:{NFSU2_TR(0x773e0a);
u8 U[4];
w4(U+0,u32(0x794048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e0f:{NFSU2_TR(0x773e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e12:{NFSU2_TR(0x773e12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e13:{NFSU2_TR(0x773e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e18:L773e18:{c.instructions+=2;NFSU2_TR(0x773e18);
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
B773e1b:{NFSU2_TR(0x773e1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e1c:L773e1c:{c.instructions+=5;NFSU2_TR(0x773e1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e1e:{NFSU2_TR(0x773e1e);
u8 U[4];
w4(U+0,u32(0x794034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e23:{NFSU2_TR(0x773e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e26:{NFSU2_TR(0x773e26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e27:{NFSU2_TR(0x773e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e2c:L773e2c:{c.instructions+=2;NFSU2_TR(0x773e2c);
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
B773e2f:{NFSU2_TR(0x773e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e30:L773e30:{c.instructions+=2;NFSU2_TR(0x773e30);
w4(R+0,u32(0x7df76cull));
}
B773e35:{NFSU2_TR(0x773e35);
TAIL_STATIC(0x75bfd2u,75b);
}
B773e40:L773e40:{c.instructions+=5;NFSU2_TR(0x773e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e42:{NFSU2_TR(0x773e42);
u8 U[4];
w4(U+0,u32(0x7940b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e47:{NFSU2_TR(0x773e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e4a:{NFSU2_TR(0x773e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e4b:{NFSU2_TR(0x773e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e50:L773e50:{c.instructions+=2;NFSU2_TR(0x773e50);
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
B773e53:{NFSU2_TR(0x773e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e54:L773e54:{c.instructions+=5;NFSU2_TR(0x773e54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e56:{NFSU2_TR(0x773e56);
u8 U[4];
w4(U+0,u32(0x7940e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e5b:{NFSU2_TR(0x773e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e5e:{NFSU2_TR(0x773e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e5f:{NFSU2_TR(0x773e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e64:L773e64:{c.instructions+=2;NFSU2_TR(0x773e64);
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
B773e67:{NFSU2_TR(0x773e67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e68:L773e68:{c.instructions+=5;NFSU2_TR(0x773e68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e6a:{NFSU2_TR(0x773e6a);
u8 U[4];
w4(U+0,u32(0x7940d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e6f:{NFSU2_TR(0x773e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e72:{NFSU2_TR(0x773e72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e73:{NFSU2_TR(0x773e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e78:L773e78:{c.instructions+=2;NFSU2_TR(0x773e78);
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
B773e7b:{NFSU2_TR(0x773e7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e7c:L773e7c:{c.instructions+=5;NFSU2_TR(0x773e7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e7e:{NFSU2_TR(0x773e7e);
u8 U[4];
w4(U+0,u32(0x7940c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e83:{NFSU2_TR(0x773e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e86:{NFSU2_TR(0x773e86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e87:{NFSU2_TR(0x773e87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773e8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773e8c:L773e8c:{c.instructions+=2;NFSU2_TR(0x773e8c);
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
B773e8f:{NFSU2_TR(0x773e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773e90:L773e90:{c.instructions+=5;NFSU2_TR(0x773e90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e92:{NFSU2_TR(0x773e92);
u8 U[4];
w4(U+0,u32(0x7940a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e97:{NFSU2_TR(0x773e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773e9a:{NFSU2_TR(0x773e9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773e9b:{NFSU2_TR(0x773e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ea0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ea0:L773ea0:{c.instructions+=2;NFSU2_TR(0x773ea0);
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
B773ea3:{NFSU2_TR(0x773ea3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ea4:L773ea4:{c.instructions+=5;NFSU2_TR(0x773ea4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ea6:{NFSU2_TR(0x773ea6);
u8 U[4];
w4(U+0,u32(0x794090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773eab:{NFSU2_TR(0x773eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773eae:{NFSU2_TR(0x773eae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773eaf:{NFSU2_TR(0x773eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773eb4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773eb4:L773eb4:{c.instructions+=2;NFSU2_TR(0x773eb4);
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
B773eb7:{NFSU2_TR(0x773eb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773eb8:L773eb8:{c.instructions+=5;NFSU2_TR(0x773eb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773eba:{NFSU2_TR(0x773eba);
u8 U[4];
w4(U+0,u32(0x795650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ebf:{NFSU2_TR(0x773ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773ec2:{NFSU2_TR(0x773ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ec3:{NFSU2_TR(0x773ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ec8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ec8:L773ec8:{c.instructions+=2;NFSU2_TR(0x773ec8);
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
B773ecb:{NFSU2_TR(0x773ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ecc:L773ecc:{c.instructions+=2;NFSU2_TR(0x773ecc);
w4(R+0,u32(0x7dfe48ull));
}
B773ed1:{NFSU2_TR(0x773ed1);
TAIL_STATIC(0x75bfd2u,75b);
}
B773ee0:L773ee0:{c.instructions+=5;NFSU2_TR(0x773ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ee2:{NFSU2_TR(0x773ee2);
u8 U[4];
w4(U+0,u32(0x795904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ee7:{NFSU2_TR(0x773ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773eea:{NFSU2_TR(0x773eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773eeb:{NFSU2_TR(0x773eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ef0:L773ef0:{c.instructions+=2;NFSU2_TR(0x773ef0);
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
B773ef3:{NFSU2_TR(0x773ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ef4:L773ef4:{c.instructions+=5;NFSU2_TR(0x773ef4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773ef6:{NFSU2_TR(0x773ef6);
u8 U[4];
w4(U+0,u32(0x7958f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773efb:{NFSU2_TR(0x773efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773efe:{NFSU2_TR(0x773efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773eff:{NFSU2_TR(0x773eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f04ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f04:L773f04:{c.instructions+=2;NFSU2_TR(0x773f04);
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
B773f07:{NFSU2_TR(0x773f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f08:L773f08:{c.instructions+=5;NFSU2_TR(0x773f08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f0a:{NFSU2_TR(0x773f0a);
u8 U[4];
w4(U+0,u32(0x7958ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f0f:{NFSU2_TR(0x773f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f12:{NFSU2_TR(0x773f12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f13:{NFSU2_TR(0x773f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f18ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f18:L773f18:{c.instructions+=2;NFSU2_TR(0x773f18);
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
B773f1b:{NFSU2_TR(0x773f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f1c:L773f1c:{c.instructions+=5;NFSU2_TR(0x773f1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f1e:{NFSU2_TR(0x773f1e);
u8 U[4];
w4(U+0,u32(0x7943ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f23:{NFSU2_TR(0x773f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f26:{NFSU2_TR(0x773f26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f27:{NFSU2_TR(0x773f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f2cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f2c:L773f2c:{c.instructions+=2;NFSU2_TR(0x773f2c);
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
B773f2f:{NFSU2_TR(0x773f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f30:L773f30:{c.instructions+=5;NFSU2_TR(0x773f30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f32:{NFSU2_TR(0x773f32);
u8 U[4];
w4(U+0,u32(0x7958e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f37:{NFSU2_TR(0x773f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f3a:{NFSU2_TR(0x773f3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f3b:{NFSU2_TR(0x773f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f40:L773f40:{c.instructions+=2;NFSU2_TR(0x773f40);
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
B773f43:{NFSU2_TR(0x773f43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f44:L773f44:{c.instructions+=5;NFSU2_TR(0x773f44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f46:{NFSU2_TR(0x773f46);
u8 U[4];
w4(U+0,u32(0x7958d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f4b:{NFSU2_TR(0x773f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f4e:{NFSU2_TR(0x773f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f4f:{NFSU2_TR(0x773f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f54ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f54:L773f54:{c.instructions+=2;NFSU2_TR(0x773f54);
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
B773f57:{NFSU2_TR(0x773f57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f58:L773f58:{c.instructions+=5;NFSU2_TR(0x773f58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f5a:{NFSU2_TR(0x773f5a);
u8 U[4];
w4(U+0,u32(0x7958c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f5f:{NFSU2_TR(0x773f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f62:{NFSU2_TR(0x773f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f63:{NFSU2_TR(0x773f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f68ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f68:L773f68:{c.instructions+=2;NFSU2_TR(0x773f68);
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
B773f6b:{NFSU2_TR(0x773f6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f6c:L773f6c:{c.instructions+=5;NFSU2_TR(0x773f6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f6e:{NFSU2_TR(0x773f6e);
u8 U[4];
w4(U+0,u32(0x7958b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f73:{NFSU2_TR(0x773f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f76:{NFSU2_TR(0x773f76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f77:{NFSU2_TR(0x773f77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f7cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f7c:L773f7c:{c.instructions+=2;NFSU2_TR(0x773f7c);
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
B773f7f:{NFSU2_TR(0x773f7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f80:L773f80:{c.instructions+=5;NFSU2_TR(0x773f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f82:{NFSU2_TR(0x773f82);
u8 U[4];
w4(U+0,u32(0x7958a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f87:{NFSU2_TR(0x773f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f8a:{NFSU2_TR(0x773f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f8b:{NFSU2_TR(0x773f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773f90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773f90:L773f90:{c.instructions+=2;NFSU2_TR(0x773f90);
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
B773f93:{NFSU2_TR(0x773f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773f94:L773f94:{c.instructions+=5;NFSU2_TR(0x773f94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f96:{NFSU2_TR(0x773f96);
u8 U[4];
w4(U+0,u32(0x79589cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f9b:{NFSU2_TR(0x773f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773f9e:{NFSU2_TR(0x773f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773f9f:{NFSU2_TR(0x773f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773fa4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773fa4:L773fa4:{c.instructions+=2;NFSU2_TR(0x773fa4);
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
B773fa7:{NFSU2_TR(0x773fa7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773fa8:L773fa8:{c.instructions+=2;NFSU2_TR(0x773fa8);
w4(R+0,u32(0x7dfeb4ull));
}
B773fad:{NFSU2_TR(0x773fad);
TAIL_STATIC(0x75bfd2u,75b);
}
B773fc0:L773fc0:{c.instructions+=5;NFSU2_TR(0x773fc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773fc2:{NFSU2_TR(0x773fc2);
u8 U[4];
w4(U+0,u32(0x795918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773fc7:{NFSU2_TR(0x773fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773fca:{NFSU2_TR(0x773fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773fcb:{NFSU2_TR(0x773fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773fd0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773fd0:L773fd0:{c.instructions+=2;NFSU2_TR(0x773fd0);
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
B773fd3:{NFSU2_TR(0x773fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773fd4:L773fd4:{c.instructions+=2;NFSU2_TR(0x773fd4);
w4(R+0,u32(0x7dfed8ull));
}
B773fd9:{NFSU2_TR(0x773fd9);
TAIL_STATIC(0x75bfd2u,75b);
}
B773fe0:L773fe0:{c.instructions+=5;NFSU2_TR(0x773fe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773fe2:{NFSU2_TR(0x773fe2);
u8 U[4];
w4(U+0,u32(0x795954ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773fe7:{NFSU2_TR(0x773fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B773fea:{NFSU2_TR(0x773fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B773feb:{NFSU2_TR(0x773feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x773ff0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B773ff0:L773ff0:{c.instructions+=2;NFSU2_TR(0x773ff0);
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
B773ff3:{NFSU2_TR(0x773ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B773ff4:L773ff4:{c.instructions+=2;NFSU2_TR(0x773ff4);
w4(R+0,u32(0x7dfefcull));
}
B773ff9:{NFSU2_TR(0x773ff9);
TAIL_STATIC(0x75bfd2u,75b);
}
XIT:NFSU2_TR_EXIT(0x773,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
