#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_685(u8* __restrict R,Cpu& c);
u32 body_687(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x686,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x686,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_686(u8* __restrict R,Cpu& c);
u32 page_686(Cpu& c){return body_686(c.regs.data(),c);}
__attribute__((noinline)) u32 body_686(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x686004:goto L686004;
case 0x686006:goto L686006;
case 0x68600d:c.instructions+=1;goto B68600d;
case 0x68600f:goto L68600f;
case 0x686016:c.instructions+=1;goto B686016;
case 0x686018:goto L686018;
case 0x68601c:c.instructions+=1;goto B68601c;
case 0x68601e:goto L68601e;
case 0x686025:c.instructions+=1;goto B686025;
case 0x686027:goto L686027;
case 0x68602e:c.instructions+=1;goto B68602e;
case 0x686030:goto L686030;
case 0x686036:c.instructions+=1;goto B686036;
case 0x686038:goto L686038;
case 0x68603e:c.instructions+=1;goto B68603e;
case 0x686040:goto L686040;
case 0x686046:c.instructions+=1;goto B686046;
case 0x686048:goto L686048;
case 0x68604d:c.instructions+=2;goto B68604d;
case 0x68604f:c.instructions+=1;goto B68604f;
case 0x686051:goto L686051;
case 0x686057:c.instructions+=1;goto B686057;
case 0x686059:goto L686059;
case 0x68605f:c.instructions+=1;goto B68605f;
case 0x686064:goto L686064;
case 0x68606b:c.instructions+=1;goto B68606b;
case 0x68606d:goto L68606d;
case 0x686070:goto L686070;
case 0x686074:c.instructions+=1;goto B686074;
case 0x686076:goto L686076;
case 0x68607c:goto L68607c;
case 0x686080:c.instructions+=1;goto B686080;
case 0x686082:goto L686082;
case 0x686088:goto L686088;
case 0x68608b:c.instructions+=2;goto B68608b;
case 0x68608e:c.instructions+=1;goto B68608e;
case 0x686090:goto L686090;
case 0x686093:c.instructions+=1;goto B686093;
case 0x686095:goto L686095;
case 0x686098:c.instructions+=1;goto B686098;
case 0x68609a:goto L68609a;
case 0x68609d:c.instructions+=1;goto B68609d;
case 0x68609f:goto L68609f;
case 0x6860a2:c.instructions+=3;goto B6860a2;
case 0x6860a3:c.instructions+=2;goto B6860a3;
case 0x6860a6:c.instructions+=1;goto B6860a6;
case 0x6860a8:goto L6860a8;
case 0x6860ab:c.instructions+=2;goto B6860ab;
case 0x6860ae:c.instructions+=1;goto B6860ae;
case 0x6860b0:goto L6860b0;
case 0x6860b3:c.instructions+=1;goto B6860b3;
case 0x6860b5:goto L6860b5;
case 0x6860b8:c.instructions+=1;goto B6860b8;
case 0x6860ba:goto L6860ba;
case 0x6860bd:c.instructions+=3;goto B6860bd;
case 0x6860c0:c.instructions+=2;goto B6860c0;
case 0x6860c3:c.instructions+=1;goto B6860c3;
case 0x6860c5:goto L6860c5;
case 0x6860c8:c.instructions+=6;goto B6860c8;
case 0x6860cb:c.instructions+=5;goto B6860cb;
case 0x6860ce:c.instructions+=4;goto B6860ce;
case 0x6860d1:c.instructions+=3;goto B6860d1;
case 0x6860d5:c.instructions+=2;goto B6860d5;
case 0x6860d8:c.instructions+=1;goto B6860d8;
case 0x6860da:goto L6860da;
case 0x6860dd:c.instructions+=5;goto B6860dd;
case 0x6860e0:c.instructions+=4;goto B6860e0;
case 0x6860e6:c.instructions+=3;goto B6860e6;
case 0x6860e9:c.instructions+=2;goto B6860e9;
case 0x6860ec:c.instructions+=1;goto B6860ec;
case 0x6860ef:goto L6860ef;
case 0x6860f2:c.instructions+=2;goto B6860f2;
case 0x6860f4:c.instructions+=1;goto B6860f4;
case 0x6860fa:goto L6860fa;
case 0x6860fe:c.instructions+=1;goto B6860fe;
case 0x686104:goto L686104;
case 0x686108:c.instructions+=2;goto B686108;
case 0x68610d:c.instructions+=1;goto B68610d;
case 0x68610f:goto L68610f;
case 0x686112:c.instructions+=1;goto B686112;
case 0x686114:goto L686114;
case 0x686117:c.instructions+=2;goto B686117;
case 0x68611a:c.instructions+=1;goto B68611a;
case 0x68611c:goto L68611c;
case 0x68611f:c.instructions+=1;goto B68611f;
case 0x686121:goto L686121;
case 0x686124:c.instructions+=1;goto B686124;
case 0x686126:goto L686126;
case 0x68612d:c.instructions+=1;goto B68612d;
case 0x68612f:goto L68612f;
case 0x686136:goto L686136;
case 0x686139:c.instructions+=17;goto B686139;
case 0x68613b:c.instructions+=16;goto B68613b;
case 0x68613e:c.instructions+=15;goto B68613e;
case 0x686141:c.instructions+=14;goto B686141;
case 0x686144:c.instructions+=13;goto B686144;
case 0x686146:c.instructions+=12;goto B686146;
case 0x686149:c.instructions+=11;goto B686149;
case 0x68614f:c.instructions+=10;goto B68614f;
case 0x686152:c.instructions+=9;goto B686152;
case 0x686154:c.instructions+=8;goto B686154;
case 0x686157:c.instructions+=7;goto B686157;
case 0x68615d:c.instructions+=6;goto B68615d;
case 0x68615f:c.instructions+=5;goto B68615f;
case 0x686162:c.instructions+=4;goto B686162;
case 0x686164:c.instructions+=3;goto B686164;
case 0x686166:c.instructions+=2;goto B686166;
case 0x68616a:c.instructions+=1;goto B68616a;
case 0x68616c:goto L68616c;
case 0x686171:goto L686171;
case 0x686174:c.instructions+=7;goto B686174;
case 0x686177:c.instructions+=6;goto B686177;
case 0x68617a:c.instructions+=5;goto B68617a;
case 0x68617d:c.instructions+=4;goto B68617d;
case 0x686180:c.instructions+=3;goto B686180;
case 0x686182:c.instructions+=2;goto B686182;
case 0x686185:c.instructions+=1;goto B686185;
case 0x686187:goto L686187;
case 0x68618a:c.instructions+=19;goto B68618a;
case 0x68618c:c.instructions+=18;goto B68618c;
case 0x68618f:c.instructions+=17;goto B68618f;
case 0x686192:c.instructions+=16;goto B686192;
case 0x686195:c.instructions+=15;goto B686195;
case 0x686197:c.instructions+=14;goto B686197;
case 0x68619a:c.instructions+=13;goto B68619a;
case 0x68619d:c.instructions+=12;goto B68619d;
case 0x6861a3:c.instructions+=11;goto B6861a3;
case 0x6861a5:c.instructions+=10;goto B6861a5;
case 0x6861a8:c.instructions+=9;goto B6861a8;
case 0x6861ab:c.instructions+=8;goto B6861ab;
case 0x6861b1:c.instructions+=7;goto B6861b1;
case 0x6861b7:c.instructions+=6;goto B6861b7;
case 0x6861b9:c.instructions+=5;goto B6861b9;
case 0x6861bb:c.instructions+=4;goto B6861bb;
case 0x6861be:c.instructions+=3;goto B6861be;
case 0x6861c1:c.instructions+=2;goto B6861c1;
case 0x6861c4:c.instructions+=1;goto B6861c4;
case 0x6861c7:goto L6861c7;
case 0x6861ca:c.instructions+=2;goto B6861ca;
case 0x6861cc:c.instructions+=1;goto B6861cc;
case 0x6861ce:goto L6861ce;
case 0x6861d2:c.instructions+=1;goto B6861d2;
case 0x6861d4:goto L6861d4;
case 0x6861d7:c.instructions+=19;goto B6861d7;
case 0x6861d9:c.instructions+=18;goto B6861d9;
case 0x6861dc:c.instructions+=17;goto B6861dc;
case 0x6861df:c.instructions+=16;goto B6861df;
case 0x6861e2:c.instructions+=15;goto B6861e2;
case 0x6861e4:c.instructions+=14;goto B6861e4;
case 0x6861e7:c.instructions+=13;goto B6861e7;
case 0x6861ea:c.instructions+=12;goto B6861ea;
case 0x6861f0:c.instructions+=11;goto B6861f0;
case 0x6861f2:c.instructions+=10;goto B6861f2;
case 0x6861f5:c.instructions+=9;goto B6861f5;
case 0x6861f8:c.instructions+=8;goto B6861f8;
case 0x6861fe:c.instructions+=7;goto B6861fe;
case 0x686204:c.instructions+=6;goto B686204;
case 0x686206:c.instructions+=5;goto B686206;
case 0x686208:c.instructions+=4;goto B686208;
case 0x68620b:c.instructions+=3;goto B68620b;
case 0x68620e:c.instructions+=2;goto B68620e;
case 0x686211:c.instructions+=1;goto B686211;
case 0x686214:goto L686214;
case 0x686217:c.instructions+=2;goto B686217;
case 0x68621a:c.instructions+=1;goto B68621a;
case 0x68621c:goto L68621c;
case 0x686220:c.instructions+=2;goto B686220;
case 0x686223:c.instructions+=1;goto B686223;
case 0x686225:goto L686225;
case 0x686227:c.instructions+=2;goto B686227;
case 0x686229:c.instructions+=1;goto B686229;
case 0x68622f:goto L68622f;
case 0x686232:c.instructions+=2;goto B686232;
case 0x686235:c.instructions+=1;goto B686235;
case 0x686237:goto L686237;
case 0x68623a:c.instructions+=1;goto B68623a;
case 0x68623c:goto L68623c;
case 0x68623f:c.instructions+=4;goto B68623f;
case 0x686242:c.instructions+=3;goto B686242;
case 0x686245:c.instructions+=2;goto B686245;
case 0x686248:c.instructions+=1;goto B686248;
case 0x68624b:goto L68624b;
case 0x68624e:c.instructions+=5;goto B68624e;
case 0x686251:c.instructions+=4;goto B686251;
case 0x686254:c.instructions+=3;goto B686254;
case 0x686257:c.instructions+=2;goto B686257;
case 0x68625b:c.instructions+=1;goto B68625b;
case 0x68625d:goto L68625d;
case 0x686262:goto L686262;
case 0x686265:c.instructions+=1;goto B686265;
case 0x686267:goto L686267;
case 0x68626b:c.instructions+=2;goto B68626b;
case 0x68626e:c.instructions+=1;goto B68626e;
case 0x686270:goto L686270;
case 0x686272:c.instructions+=2;goto B686272;
case 0x686274:c.instructions+=1;goto B686274;
case 0x68627a:goto L68627a;
case 0x68627d:c.instructions+=3;goto B68627d;
case 0x68627e:c.instructions+=2;goto B68627e;
case 0x68627f:c.instructions+=1;goto B68627f;
case 0x686281:goto L686281;
case 0x686282:c.instructions+=2;goto B686282;
case 0x686283:c.instructions+=1;goto B686283;
case 0x686285:goto L686285;
case 0x686288:c.instructions+=2;goto B686288;
case 0x68628b:c.instructions+=1;goto B68628b;
case 0x68628e:goto L68628e;
case 0x686291:c.instructions+=5;goto B686291;
case 0x686294:c.instructions+=4;goto B686294;
case 0x686297:c.instructions+=3;goto B686297;
case 0x68629a:c.instructions+=2;goto B68629a;
case 0x68629e:c.instructions+=1;goto B68629e;
case 0x6862a0:goto L6862a0;
case 0x6862a5:goto L6862a5;
case 0x6862a8:c.instructions+=1;goto B6862a8;
case 0x6862aa:goto L6862aa;
case 0x6862ad:c.instructions+=7;goto B6862ad;
case 0x6862af:c.instructions+=6;goto B6862af;
case 0x6862b2:c.instructions+=5;goto B6862b2;
case 0x6862b5:c.instructions+=4;goto B6862b5;
case 0x6862b8:c.instructions+=3;goto B6862b8;
case 0x6862bb:c.instructions+=2;goto B6862bb;
case 0x6862be:c.instructions+=1;goto B6862be;
case 0x6862c3:goto L6862c3;
case 0x6862c7:c.instructions+=2;goto B6862c7;
case 0x6862ca:c.instructions+=1;goto B6862ca;
case 0x6862cd:goto L6862cd;
case 0x6862d0:c.instructions+=3;goto B6862d0;
case 0x6862d2:c.instructions+=2;goto B6862d2;
case 0x6862d4:c.instructions+=1;goto B6862d4;
case 0x6862da:goto L6862da;
case 0x6862de:c.instructions+=1;goto B6862de;
case 0x6862e0:goto L6862e0;
case 0x6862e7:c.instructions+=1;goto B6862e7;
case 0x6862e9:goto L6862e9;
case 0x6862ec:c.instructions+=2;goto B6862ec;
case 0x6862ef:c.instructions+=1;goto B6862ef;
case 0x6862f1:goto L6862f1;
case 0x6862f4:c.instructions+=1;goto B6862f4;
case 0x6862f6:goto L6862f6;
case 0x6862f9:c.instructions+=1;goto B6862f9;
case 0x6862fb:goto L6862fb;
case 0x6862fe:c.instructions+=1;goto B6862fe;
case 0x686300:goto L686300;
case 0x686303:c.instructions+=1;goto B686303;
case 0x686305:goto L686305;
case 0x686308:c.instructions+=1;goto B686308;
case 0x68630a:goto L68630a;
case 0x686311:goto L686311;
case 0x686314:c.instructions+=17;goto B686314;
case 0x686316:c.instructions+=16;goto B686316;
case 0x686319:c.instructions+=15;goto B686319;
case 0x68631c:c.instructions+=14;goto B68631c;
case 0x68631f:c.instructions+=13;goto B68631f;
case 0x686321:c.instructions+=12;goto B686321;
case 0x686324:c.instructions+=11;goto B686324;
case 0x68632a:c.instructions+=10;goto B68632a;
case 0x68632d:c.instructions+=9;goto B68632d;
case 0x68632f:c.instructions+=8;goto B68632f;
case 0x686332:c.instructions+=7;goto B686332;
case 0x686338:c.instructions+=6;goto B686338;
case 0x68633a:c.instructions+=5;goto B68633a;
case 0x68633d:c.instructions+=4;goto B68633d;
case 0x686343:c.instructions+=3;goto B686343;
case 0x686345:c.instructions+=2;goto B686345;
case 0x686349:c.instructions+=1;goto B686349;
case 0x68634b:goto L68634b;
case 0x686351:goto L686351;
case 0x686354:c.instructions+=8;goto B686354;
case 0x686357:c.instructions+=7;goto B686357;
case 0x68635a:c.instructions+=6;goto B68635a;
case 0x68635d:c.instructions+=5;goto B68635d;
case 0x686360:c.instructions+=4;goto B686360;
case 0x686363:c.instructions+=3;goto B686363;
case 0x686365:c.instructions+=2;goto B686365;
case 0x686367:c.instructions+=1;goto B686367;
case 0x686369:goto L686369;
case 0x68636c:c.instructions+=1;goto B68636c;
case 0x68636e:goto L68636e;
case 0x686372:c.instructions+=1;goto B686372;
case 0x686374:goto L686374;
case 0x686377:c.instructions+=1;goto B686377;
case 0x686379:goto L686379;
case 0x68637c:c.instructions+=1;goto B68637c;
case 0x68637e:goto L68637e;
case 0x686381:c.instructions+=1;goto B686381;
case 0x686383:goto L686383;
case 0x686388:c.instructions+=5;goto B686388;
case 0x68638d:c.instructions+=4;goto B68638d;
case 0x686390:c.instructions+=3;goto B686390;
case 0x686391:c.instructions+=2;goto B686391;
case 0x686393:c.instructions+=1;goto B686393;
case 0x686398:goto L686398;
case 0x68639b:c.instructions+=2;goto B68639b;
case 0x6863a2:c.instructions+=1;goto B6863a2;
case 0x6863a4:goto L6863a4;
case 0x6863a7:c.instructions+=18;goto B6863a7;
case 0x6863a9:c.instructions+=17;goto B6863a9;
case 0x6863ac:c.instructions+=16;goto B6863ac;
case 0x6863af:c.instructions+=15;goto B6863af;
case 0x6863b2:c.instructions+=14;goto B6863b2;
case 0x6863b4:c.instructions+=13;goto B6863b4;
case 0x6863b7:c.instructions+=12;goto B6863b7;
case 0x6863ba:c.instructions+=11;goto B6863ba;
case 0x6863c0:c.instructions+=10;goto B6863c0;
case 0x6863c2:c.instructions+=9;goto B6863c2;
case 0x6863c5:c.instructions+=8;goto B6863c5;
case 0x6863c8:c.instructions+=7;goto B6863c8;
case 0x6863ce:c.instructions+=6;goto B6863ce;
case 0x6863d3:c.instructions+=5;goto B6863d3;
case 0x6863d5:c.instructions+=4;goto B6863d5;
case 0x6863d7:c.instructions+=3;goto B6863d7;
case 0x6863da:c.instructions+=2;goto B6863da;
case 0x6863dd:c.instructions+=1;goto B6863dd;
case 0x6863e0:goto L6863e0;
case 0x6863e3:c.instructions+=3;goto B6863e3;
case 0x6863e7:c.instructions+=2;goto B6863e7;
case 0x6863eb:c.instructions+=1;goto B6863eb;
case 0x6863f1:goto L6863f1;
case 0x6863f4:c.instructions+=2;goto B6863f4;
case 0x6863f7:c.instructions+=1;goto B6863f7;
case 0x6863f9:goto L6863f9;
case 0x6863fe:c.instructions+=5;goto B6863fe;
case 0x686400:c.instructions+=4;goto B686400;
case 0x686403:c.instructions+=3;goto B686403;
case 0x686404:c.instructions+=2;goto B686404;
case 0x686406:c.instructions+=1;goto B686406;
case 0x68640b:goto L68640b;
case 0x68640e:c.instructions+=1;goto B68640e;
case 0x686415:goto L686415;
case 0x686419:c.instructions+=1;goto B686419;
case 0x68641b:goto L68641b;
case 0x68641e:c.instructions+=2;goto B68641e;
case 0x686421:c.instructions+=1;goto B686421;
case 0x686423:goto L686423;
case 0x686426:c.instructions+=3;goto B686426;
case 0x686427:c.instructions+=2;goto B686427;
case 0x686429:c.instructions+=1;goto B686429;
case 0x68642e:goto L68642e;
case 0x686430:c.instructions+=1;goto B686430;
case 0x686432:goto L686432;
case 0x686439:goto L686439;
case 0x68643b:c.instructions+=5;goto B68643b;
case 0x68643c:c.instructions+=4;goto B68643c;
case 0x68643d:c.instructions+=3;goto B68643d;
case 0x68643e:c.instructions+=2;goto B68643e;
case 0x68643f:c.instructions+=1;goto B68643f;
case 0x686442:goto L686442;
case 0x686444:c.instructions+=15;goto B686444;
case 0x686445:c.instructions+=14;goto B686445;
case 0x686447:c.instructions+=13;goto B686447;
case 0x68644a:c.instructions+=12;goto B68644a;
case 0x68644c:c.instructions+=11;goto B68644c;
case 0x68644e:c.instructions+=10;goto B68644e;
case 0x686451:c.instructions+=9;goto B686451;
case 0x686453:c.instructions+=8;goto B686453;
case 0x686454:c.instructions+=7;goto B686454;
case 0x686455:c.instructions+=6;goto B686455;
case 0x68645a:c.instructions+=5;goto B68645a;
case 0x68645c:c.instructions+=4;goto B68645c;
case 0x68645f:c.instructions+=3;goto B68645f;
case 0x686462:c.instructions+=2;goto B686462;
case 0x686463:c.instructions+=1;goto B686463;
case 0x686465:goto L686465;
case 0x68646a:c.instructions+=4;goto B68646a;
case 0x68646c:c.instructions+=3;goto B68646c;
case 0x68646f:c.instructions+=2;goto B68646f;
case 0x686472:c.instructions+=1;goto B686472;
case 0x686474:goto L686474;
case 0x686479:c.instructions+=4;goto B686479;
case 0x68647b:c.instructions+=3;goto B68647b;
case 0x68647e:c.instructions+=2;goto B68647e;
case 0x686481:c.instructions+=1;goto B686481;
case 0x686483:goto L686483;
case 0x686485:c.instructions+=3;goto B686485;
case 0x686488:c.instructions+=2;goto B686488;
case 0x68648b:c.instructions+=1;goto B68648b;
case 0x68648d:goto L68648d;
case 0x686490:c.instructions+=2;goto B686490;
case 0x686493:c.instructions+=1;goto B686493;
case 0x686495:goto L686495;
case 0x686498:c.instructions+=2;goto B686498;
case 0x68649b:c.instructions+=1;goto B68649b;
case 0x68649d:goto L68649d;
case 0x6864a0:c.instructions+=1;goto B6864a0;
case 0x6864a3:goto L6864a3;
case 0x6864a5:c.instructions+=3;goto B6864a5;
case 0x6864a7:c.instructions+=2;goto B6864a7;
case 0x6864a9:c.instructions+=1;goto B6864a9;
case 0x6864ab:goto L6864ab;
case 0x6864ad:c.instructions+=1;goto B6864ad;
case 0x6864af:goto L6864af;
case 0x6864b2:c.instructions+=3;goto B6864b2;
case 0x6864b4:c.instructions+=2;goto B6864b4;
case 0x6864b7:c.instructions+=1;goto B6864b7;
case 0x6864b9:goto L6864b9;
case 0x6864ba:c.instructions+=5;goto B6864ba;
case 0x6864bb:c.instructions+=4;goto B6864bb;
case 0x6864bc:c.instructions+=3;goto B6864bc;
case 0x6864bd:c.instructions+=2;goto B6864bd;
case 0x6864bf:c.instructions+=1;goto B6864bf;
case 0x6864c1:goto L6864c1;
case 0x6864c3:c.instructions+=1;goto B6864c3;
case 0x6864c5:goto L6864c5;
case 0x6864c7:c.instructions+=1;goto B6864c7;
case 0x6864ca:goto L6864ca;
case 0x6864cc:c.instructions+=1;goto B6864cc;
case 0x6864ce:goto L6864ce;
case 0x6864d0:c.instructions+=3;goto B6864d0;
case 0x6864d1:c.instructions+=2;goto B6864d1;
case 0x6864d3:c.instructions+=1;goto B6864d3;
case 0x6864d5:goto L6864d5;
case 0x6864d7:goto L6864d7;
case 0x6864d9:goto L6864d9;
case 0x6864db:c.instructions+=1;goto B6864db;
case 0x6864de:goto L6864de;
case 0x6864df:c.instructions+=4;goto B6864df;
case 0x6864e0:c.instructions+=3;goto B6864e0;
case 0x6864e1:c.instructions+=2;goto B6864e1;
case 0x6864e2:c.instructions+=1;goto B6864e2;
case 0x6864e3:goto L6864e3;
case 0x6864e5:c.instructions+=1;goto B6864e5;
case 0x6864e7:goto L6864e7;
case 0x6864e9:c.instructions+=3;goto B6864e9;
case 0x6864eb:c.instructions+=2;goto B6864eb;
case 0x6864ed:c.instructions+=1;goto B6864ed;
case 0x6864ef:goto L6864ef;
case 0x6864f1:c.instructions+=1;goto B6864f1;
case 0x6864f3:goto L6864f3;
case 0x6864f6:c.instructions+=3;goto B6864f6;
case 0x6864f8:c.instructions+=2;goto B6864f8;
case 0x6864fb:c.instructions+=1;goto B6864fb;
case 0x6864fd:goto L6864fd;
case 0x6864fe:c.instructions+=5;goto B6864fe;
case 0x6864ff:c.instructions+=4;goto B6864ff;
case 0x686500:c.instructions+=3;goto B686500;
case 0x686501:c.instructions+=2;goto B686501;
case 0x686503:c.instructions+=1;goto B686503;
case 0x686505:goto L686505;
case 0x686507:c.instructions+=1;goto B686507;
case 0x686509:goto L686509;
case 0x68650b:c.instructions+=10;goto B68650b;
case 0x68650c:c.instructions+=9;goto B68650c;
case 0x68650e:c.instructions+=8;goto B68650e;
case 0x686511:c.instructions+=7;goto B686511;
case 0x686512:c.instructions+=6;goto B686512;
case 0x686513:c.instructions+=5;goto B686513;
case 0x686515:c.instructions+=4;goto B686515;
case 0x68651a:c.instructions+=3;goto B68651a;
case 0x68651d:c.instructions+=2;goto B68651d;
case 0x68651f:c.instructions+=1;goto B68651f;
case 0x686524:goto L686524;
case 0x686527:c.instructions+=8;goto B686527;
case 0x68652d:c.instructions+=7;goto B68652d;
case 0x686533:c.instructions+=6;goto B686533;
case 0x686536:c.instructions+=5;goto B686536;
case 0x68653c:c.instructions+=4;goto B68653c;
case 0x68653f:c.instructions+=3;goto B68653f;
case 0x686545:c.instructions+=2;goto B686545;
case 0x68654b:c.instructions+=1;goto B68654b;
case 0x686551:goto L686551;
case 0x686554:c.instructions+=2;goto B686554;
case 0x686555:c.instructions+=1;goto B686555;
case 0x68655a:goto L68655a;
case 0x68655c:c.instructions+=4;goto B68655c;
case 0x68655e:c.instructions+=3;goto B68655e;
case 0x68655f:c.instructions+=2;goto B68655f;
case 0x686562:c.instructions+=1;goto B686562;
case 0x686564:goto L686564;
case 0x686569:c.instructions+=1;goto B686569;
case 0x68656e:goto L68656e;
case 0x686571:c.instructions+=3;goto B686571;
case 0x686572:c.instructions+=2;goto B686572;
case 0x686573:c.instructions+=1;goto B686573;
case 0x686578:goto L686578;
case 0x68657b:c.instructions+=5;goto B68657b;
case 0x686581:c.instructions+=4;goto B686581;
case 0x686584:c.instructions+=3;goto B686584;
case 0x686585:c.instructions+=2;goto B686585;
case 0x686588:c.instructions+=1;goto B686588;
case 0x68658d:goto L68658d;
case 0x686590:c.instructions+=5;goto B686590;
case 0x686596:c.instructions+=4;goto B686596;
case 0x686599:c.instructions+=3;goto B686599;
case 0x68659a:c.instructions+=2;goto B68659a;
case 0x68659d:c.instructions+=1;goto B68659d;
case 0x6865a2:goto L6865a2;
case 0x6865a5:c.instructions+=5;goto B6865a5;
case 0x6865ab:c.instructions+=4;goto B6865ab;
case 0x6865ae:c.instructions+=3;goto B6865ae;
case 0x6865af:c.instructions+=2;goto B6865af;
case 0x6865b2:c.instructions+=1;goto B6865b2;
case 0x6865b7:goto L6865b7;
case 0x6865ba:c.instructions+=5;goto B6865ba;
case 0x6865c0:c.instructions+=4;goto B6865c0;
case 0x6865c3:c.instructions+=3;goto B6865c3;
case 0x6865c4:c.instructions+=2;goto B6865c4;
case 0x6865c7:c.instructions+=1;goto B6865c7;
case 0x6865cc:goto L6865cc;
case 0x6865cf:c.instructions+=6;goto B6865cf;
case 0x6865d5:c.instructions+=5;goto B6865d5;
case 0x6865da:c.instructions+=4;goto B6865da;
case 0x6865dc:c.instructions+=3;goto B6865dc;
case 0x6865dd:c.instructions+=2;goto B6865dd;
case 0x6865de:c.instructions+=1;goto B6865de;
case 0x6865e3:goto L6865e3;
case 0x6865e6:c.instructions+=4;goto B6865e6;
case 0x6865e9:c.instructions+=3;goto B6865e9;
case 0x6865ea:c.instructions+=2;goto B6865ea;
case 0x6865ed:c.instructions+=1;goto B6865ed;
case 0x6865f2:goto L6865f2;
case 0x6865f5:c.instructions+=3;goto B6865f5;
case 0x6865f7:c.instructions+=2;goto B6865f7;
case 0x6865fa:c.instructions+=1;goto B6865fa;
case 0x6865fc:goto L6865fc;
case 0x686601:c.instructions+=1;goto B686601;
case 0x686606:goto L686606;
case 0x686608:c.instructions+=4;goto B686608;
case 0x686609:c.instructions+=3;goto B686609;
case 0x68660b:c.instructions+=2;goto B68660b;
case 0x68660d:c.instructions+=1;goto B68660d;
case 0x686610:goto L686610;
case 0x686612:goto L686612;
case 0x686615:c.instructions+=13;goto B686615;
case 0x686619:c.instructions+=12;goto B686619;
case 0x68661a:c.instructions+=11;goto B68661a;
case 0x68661c:c.instructions+=10;goto B68661c;
case 0x68661e:c.instructions+=9;goto B68661e;
case 0x686621:c.instructions+=8;goto B686621;
case 0x686622:c.instructions+=7;goto B686622;
case 0x686625:c.instructions+=6;goto B686625;
case 0x686628:c.instructions+=5;goto B686628;
case 0x68662b:c.instructions+=4;goto B68662b;
case 0x68662c:c.instructions+=3;goto B68662c;
case 0x68662f:c.instructions+=2;goto B68662f;
case 0x686632:c.instructions+=1;goto B686632;
case 0x686637:goto L686637;
case 0x686639:c.instructions+=2;goto B686639;
case 0x68663b:c.instructions+=1;goto B68663b;
case 0x686641:goto L686641;
case 0x686644:c.instructions+=4;goto B686644;
case 0x686647:c.instructions+=3;goto B686647;
case 0x686649:c.instructions+=2;goto B686649;
case 0x68664c:c.instructions+=1;goto B68664c;
case 0x68664e:goto L68664e;
case 0x686650:goto L686650;
case 0x686652:c.instructions+=1;goto B686652;
case 0x686655:goto L686655;
case 0x686657:goto L686657;
case 0x68665a:c.instructions+=6;goto B68665a;
case 0x68665b:c.instructions+=5;goto B68665b;
case 0x68665d:c.instructions+=4;goto B68665d;
case 0x68665e:c.instructions+=3;goto B68665e;
case 0x686661:c.instructions+=2;goto B686661;
case 0x686664:c.instructions+=1;goto B686664;
case 0x686669:goto L686669;
case 0x68666b:c.instructions+=2;goto B68666b;
case 0x68666d:c.instructions+=1;goto B68666d;
case 0x686673:goto L686673;
case 0x686677:c.instructions+=2;goto B686677;
case 0x686679:c.instructions+=1;goto B686679;
case 0x68667b:goto L68667b;
case 0x68667e:c.instructions+=1;goto B68667e;
case 0x686681:goto L686681;
case 0x686684:c.instructions+=11;goto B686684;
case 0x686687:c.instructions+=10;goto B686687;
case 0x68668a:c.instructions+=9;goto B68668a;
case 0x68668d:c.instructions+=8;goto B68668d;
case 0x68668f:c.instructions+=7;goto B68668f;
case 0x686692:c.instructions+=6;goto B686692;
case 0x686695:c.instructions+=5;goto B686695;
case 0x686697:c.instructions+=4;goto B686697;
case 0x68669a:c.instructions+=3;goto B68669a;
case 0x68669d:c.instructions+=2;goto B68669d;
case 0x68669e:c.instructions+=1;goto B68669e;
case 0x6866a3:goto L6866a3;
case 0x6866a5:c.instructions+=2;goto B6866a5;
case 0x6866a7:c.instructions+=1;goto B6866a7;
case 0x6866ad:goto L6866ad;
case 0x6866b0:c.instructions+=3;goto B6866b0;
case 0x6866b4:c.instructions+=2;goto B6866b4;
case 0x6866b7:c.instructions+=1;goto B6866b7;
case 0x6866b9:goto L6866b9;
case 0x6866bc:c.instructions+=6;goto B6866bc;
case 0x6866bd:c.instructions+=5;goto B6866bd;
case 0x6866bf:c.instructions+=4;goto B6866bf;
case 0x6866c1:c.instructions+=3;goto B6866c1;
case 0x6866c6:c.instructions+=2;goto B6866c6;
case 0x6866c9:c.instructions+=1;goto B6866c9;
case 0x6866ce:goto L6866ce;
case 0x6866d0:c.instructions+=2;goto B6866d0;
case 0x6866d2:c.instructions+=1;goto B6866d2;
case 0x6866d8:goto L6866d8;
case 0x6866db:c.instructions+=1;goto B6866db;
case 0x6866e0:goto L6866e0;
case 0x6866e2:c.instructions+=2;goto B6866e2;
case 0x6866e8:c.instructions+=1;goto B6866e8;
case 0x6866ea:goto L6866ea;
case 0x6866eb:c.instructions+=2;goto B6866eb;
case 0x6866ed:c.instructions+=1;goto B6866ed;
case 0x6866f2:goto L6866f2;
case 0x6866f4:c.instructions+=2;goto B6866f4;
case 0x6866f6:c.instructions+=1;goto B6866f6;
case 0x6866f8:goto L6866f8;
case 0x6866fb:c.instructions+=8;goto B6866fb;
case 0x6866fe:c.instructions+=7;goto B6866fe;
case 0x686705:c.instructions+=6;goto B686705;
case 0x686706:c.instructions+=5;goto B686706;
case 0x686709:c.instructions+=4;goto B686709;
case 0x68670a:c.instructions+=3;goto B68670a;
case 0x68670e:c.instructions+=2;goto B68670e;
case 0x68670f:c.instructions+=1;goto B68670f;
case 0x686714:goto L686714;
case 0x686717:c.instructions+=6;goto B686717;
case 0x68671a:c.instructions+=5;goto B68671a;
case 0x68671b:c.instructions+=4;goto B68671b;
case 0x68671e:c.instructions+=3;goto B68671e;
case 0x68671f:c.instructions+=2;goto B68671f;
case 0x686722:c.instructions+=1;goto B686722;
case 0x686727:goto L686727;
case 0x686729:c.instructions+=2;goto B686729;
case 0x68672b:c.instructions+=1;goto B68672b;
case 0x68672d:goto L68672d;
case 0x686730:c.instructions+=5;goto B686730;
case 0x686733:c.instructions+=4;goto B686733;
case 0x686736:c.instructions+=3;goto B686736;
case 0x686739:c.instructions+=2;goto B686739;
case 0x68673b:c.instructions+=1;goto B68673b;
case 0x68673d:goto L68673d;
case 0x686742:c.instructions+=5;goto B686742;
case 0x686747:c.instructions+=4;goto B686747;
case 0x68674a:c.instructions+=3;goto B68674a;
case 0x68674b:c.instructions+=2;goto B68674b;
case 0x68674d:c.instructions+=1;goto B68674d;
case 0x686752:goto L686752;
case 0x686755:c.instructions+=1;goto B686755;
case 0x68675a:goto L68675a;
case 0x68675b:goto L68675b;
case 0x68675e:c.instructions+=1;goto B68675e;
case 0x686763:goto L686763;
case 0x686766:c.instructions+=1;goto B686766;
case 0x68676b:goto L68676b;
case 0x68676c:c.instructions+=3;goto B68676c;
case 0x68676d:c.instructions+=2;goto B68676d;
case 0x686770:c.instructions+=1;goto B686770;
case 0x686775:goto L686775;
case 0x686777:c.instructions+=4;goto B686777;
case 0x686778:c.instructions+=3;goto B686778;
case 0x686779:c.instructions+=2;goto B686779;
case 0x68677a:c.instructions+=1;goto B68677a;
case 0x68677b:goto L68677b;
case 0x68677d:c.instructions+=14;goto B68677d;
case 0x68677e:c.instructions+=13;goto B68677e;
case 0x686780:c.instructions+=12;goto B686780;
case 0x686782:c.instructions+=11;goto B686782;
case 0x686785:c.instructions+=10;goto B686785;
case 0x686789:c.instructions+=9;goto B686789;
case 0x68678b:c.instructions+=8;goto B68678b;
case 0x68678e:c.instructions+=7;goto B68678e;
case 0x686791:c.instructions+=6;goto B686791;
case 0x686794:c.instructions+=5;goto B686794;
case 0x686797:c.instructions+=4;goto B686797;
case 0x68679a:c.instructions+=3;goto B68679a;
case 0x68679d:c.instructions+=2;goto B68679d;
case 0x68679e:c.instructions+=1;goto B68679e;
case 0x6867a1:goto L6867a1;
case 0x6867a3:c.instructions+=10;goto B6867a3;
case 0x6867a4:c.instructions+=9;goto B6867a4;
case 0x6867a6:c.instructions+=8;goto B6867a6;
case 0x6867a9:c.instructions+=7;goto B6867a9;
case 0x6867aa:c.instructions+=6;goto B6867aa;
case 0x6867ab:c.instructions+=5;goto B6867ab;
case 0x6867ac:c.instructions+=4;goto B6867ac;
case 0x6867ae:c.instructions+=3;goto B6867ae;
case 0x6867b3:c.instructions+=2;goto B6867b3;
case 0x6867b6:c.instructions+=1;goto B6867b6;
case 0x6867bb:goto L6867bb;
case 0x6867bd:c.instructions+=4;goto B6867bd;
case 0x6867be:c.instructions+=3;goto B6867be;
case 0x6867c0:c.instructions+=2;goto B6867c0;
case 0x6867c2:c.instructions+=1;goto B6867c2;
case 0x6867c5:goto L6867c5;
case 0x6867c7:goto L6867c7;
case 0x6867c8:c.instructions+=11;goto B6867c8;
case 0x6867ca:c.instructions+=10;goto B6867ca;
case 0x6867cb:c.instructions+=9;goto B6867cb;
case 0x6867cd:c.instructions+=8;goto B6867cd;
case 0x6867ce:c.instructions+=7;goto B6867ce;
case 0x6867d1:c.instructions+=6;goto B6867d1;
case 0x6867d4:c.instructions+=5;goto B6867d4;
case 0x6867d5:c.instructions+=4;goto B6867d5;
case 0x6867d8:c.instructions+=3;goto B6867d8;
case 0x6867db:c.instructions+=2;goto B6867db;
case 0x6867de:c.instructions+=1;goto B6867de;
case 0x6867e3:goto L6867e3;
case 0x6867e5:c.instructions+=2;goto B6867e5;
case 0x6867e8:c.instructions+=1;goto B6867e8;
case 0x6867ee:goto L6867ee;
case 0x6867f1:c.instructions+=1;goto B6867f1;
case 0x6867f3:goto L6867f3;
case 0x6867f6:c.instructions+=2;goto B6867f6;
case 0x6867f8:c.instructions+=1;goto B6867f8;
case 0x6867fa:goto L6867fa;
case 0x6867fe:c.instructions+=1;goto B6867fe;
case 0x686800:goto L686800;
case 0x686803:goto L686803;
case 0x686805:c.instructions+=1;goto B686805;
case 0x686807:goto L686807;
case 0x686809:goto L686809;
case 0x68680c:goto L68680c;
case 0x68680e:c.instructions+=2;goto B68680e;
case 0x686810:c.instructions+=1;goto B686810;
case 0x686812:goto L686812;
case 0x686815:c.instructions+=3;goto B686815;
case 0x686818:c.instructions+=2;goto B686818;
case 0x68681a:c.instructions+=1;goto B68681a;
case 0x68681c:goto L68681c;
case 0x68681f:c.instructions+=2;goto B68681f;
case 0x686821:c.instructions+=1;goto B686821;
case 0x686827:goto L686827;
case 0x68682a:c.instructions+=2;goto B68682a;
case 0x68682b:c.instructions+=1;goto B68682b;
case 0x686830:goto L686830;
case 0x686832:c.instructions+=4;goto B686832;
case 0x686834:c.instructions+=3;goto B686834;
case 0x686835:c.instructions+=2;goto B686835;
case 0x686838:c.instructions+=1;goto B686838;
case 0x68683a:goto L68683a;
case 0x68683d:c.instructions+=1;goto B68683d;
case 0x68683f:goto L68683f;
case 0x686841:goto L686841;
case 0x686844:c.instructions+=3;goto B686844;
case 0x686847:c.instructions+=2;goto B686847;
case 0x686848:c.instructions+=1;goto B686848;
case 0x68684d:goto L68684d;
case 0x68684f:c.instructions+=3;goto B68684f;
case 0x686850:c.instructions+=2;goto B686850;
case 0x686853:c.instructions+=1;goto B686853;
case 0x686855:goto L686855;
case 0x68685c:c.instructions+=1;goto B68685c;
case 0x686861:goto L686861;
case 0x686864:c.instructions+=6;goto B686864;
case 0x686867:c.instructions+=5;goto B686867;
case 0x68686a:c.instructions+=4;goto B68686a;
case 0x68686d:c.instructions+=3;goto B68686d;
case 0x68686f:c.instructions+=2;goto B68686f;
case 0x686872:c.instructions+=1;goto B686872;
case 0x686874:goto L686874;
case 0x686876:goto L686876;
case 0x686878:c.instructions+=2;goto B686878;
case 0x68687b:c.instructions+=1;goto B68687b;
case 0x68687d:goto L68687d;
case 0x68687f:goto L68687f;
case 0x686881:c.instructions+=1;goto B686881;
case 0x686883:goto L686883;
case 0x686886:c.instructions+=2;goto B686886;
case 0x686889:c.instructions+=1;goto B686889;
case 0x68688d:goto L68688d;
case 0x686892:c.instructions+=7;goto B686892;
case 0x686896:c.instructions+=6;goto B686896;
case 0x68689a:c.instructions+=5;goto B68689a;
case 0x68689d:c.instructions+=4;goto B68689d;
case 0x6868a0:c.instructions+=3;goto B6868a0;
case 0x6868a3:c.instructions+=2;goto B6868a3;
case 0x6868a5:c.instructions+=1;goto B6868a5;
case 0x6868a7:goto L6868a7;
case 0x6868aa:c.instructions+=6;goto B6868aa;
case 0x6868ab:c.instructions+=5;goto B6868ab;
case 0x6868ad:c.instructions+=4;goto B6868ad;
case 0x6868af:c.instructions+=3;goto B6868af;
case 0x6868b0:c.instructions+=2;goto B6868b0;
case 0x6868b3:c.instructions+=1;goto B6868b3;
case 0x6868b8:goto L6868b8;
case 0x6868ba:c.instructions+=1;goto B6868ba;
case 0x6868c0:goto L6868c0;
case 0x6868c3:c.instructions+=4;goto B6868c3;
case 0x6868c5:c.instructions+=3;goto B6868c5;
case 0x6868c8:c.instructions+=2;goto B6868c8;
case 0x6868cb:c.instructions+=1;goto B6868cb;
case 0x6868cd:goto L6868cd;
case 0x6868d0:c.instructions+=2;goto B6868d0;
case 0x6868d3:c.instructions+=1;goto B6868d3;
case 0x6868d5:goto L6868d5;
case 0x6868d6:c.instructions+=3;goto B6868d6;
case 0x6868d9:c.instructions+=2;goto B6868d9;
case 0x6868dc:c.instructions+=1;goto B6868dc;
case 0x6868de:goto L6868de;
case 0x6868e1:c.instructions+=2;goto B6868e1;
case 0x6868e3:c.instructions+=1;goto B6868e3;
case 0x6868e5:goto L6868e5;
case 0x6868e8:c.instructions+=3;goto B6868e8;
case 0x6868eb:c.instructions+=2;goto B6868eb;
case 0x6868ee:c.instructions+=1;goto B6868ee;
case 0x6868f1:goto L6868f1;
case 0x6868f4:goto L6868f4;
case 0x6868f7:c.instructions+=3;goto B6868f7;
case 0x6868fa:c.instructions+=2;goto B6868fa;
case 0x6868fc:c.instructions+=1;goto B6868fc;
case 0x6868fe:goto L6868fe;
case 0x686901:c.instructions+=2;goto B686901;
case 0x686903:c.instructions+=1;goto B686903;
case 0x686905:goto L686905;
case 0x686908:c.instructions+=7;goto B686908;
case 0x686909:c.instructions+=6;goto B686909;
case 0x68690b:c.instructions+=5;goto B68690b;
case 0x68690e:c.instructions+=4;goto B68690e;
case 0x68690f:c.instructions+=3;goto B68690f;
case 0x686912:c.instructions+=2;goto B686912;
case 0x686915:c.instructions+=1;goto B686915;
case 0x68691a:goto L68691a;
case 0x68691c:c.instructions+=2;goto B68691c;
case 0x68691f:c.instructions+=1;goto B68691f;
case 0x686925:goto L686925;
case 0x686928:c.instructions+=6;goto B686928;
case 0x686929:c.instructions+=5;goto B686929;
case 0x68692b:c.instructions+=4;goto B68692b;
case 0x68692e:c.instructions+=3;goto B68692e;
case 0x686931:c.instructions+=2;goto B686931;
case 0x686934:c.instructions+=1;goto B686934;
case 0x686939:goto L686939;
case 0x68693b:c.instructions+=2;goto B68693b;
case 0x68693e:c.instructions+=1;goto B68693e;
case 0x686944:goto L686944;
case 0x686947:c.instructions+=2;goto B686947;
case 0x686949:c.instructions+=1;goto B686949;
case 0x68694b:goto L68694b;
case 0x68694e:c.instructions+=6;goto B68694e;
case 0x68694f:c.instructions+=5;goto B68694f;
case 0x686951:c.instructions+=4;goto B686951;
case 0x686953:c.instructions+=3;goto B686953;
case 0x686954:c.instructions+=2;goto B686954;
case 0x686957:c.instructions+=1;goto B686957;
case 0x68695c:goto L68695c;
case 0x68695e:c.instructions+=2;goto B68695e;
case 0x686961:c.instructions+=1;goto B686961;
case 0x686967:goto L686967;
case 0x68696a:c.instructions+=2;goto B68696a;
case 0x68696c:c.instructions+=1;goto B68696c;
case 0x68696e:goto L68696e;
case 0x686971:c.instructions+=6;goto B686971;
case 0x686972:c.instructions+=5;goto B686972;
case 0x686974:c.instructions+=4;goto B686974;
case 0x686977:c.instructions+=3;goto B686977;
case 0x68697a:c.instructions+=2;goto B68697a;
case 0x68697b:c.instructions+=1;goto B68697b;
case 0x686980:goto L686980;
case 0x686982:c.instructions+=1;goto B686982;
case 0x686988:goto L686988;
case 0x68698a:c.instructions+=5;goto B68698a;
case 0x68698c:c.instructions+=4;goto B68698c;
case 0x68698e:c.instructions+=3;goto B68698e;
case 0x686993:c.instructions+=2;goto B686993;
case 0x686996:c.instructions+=1;goto B686996;
case 0x68699b:goto L68699b;
case 0x68699d:c.instructions+=1;goto B68699d;
case 0x6869a3:goto L6869a3;
case 0x6869a6:c.instructions+=6;goto B6869a6;
case 0x6869a7:c.instructions+=5;goto B6869a7;
case 0x6869a9:c.instructions+=4;goto B6869a9;
case 0x6869ab:c.instructions+=3;goto B6869ab;
case 0x6869b0:c.instructions+=2;goto B6869b0;
case 0x6869b3:c.instructions+=1;goto B6869b3;
case 0x6869b8:goto L6869b8;
case 0x6869ba:c.instructions+=1;goto B6869ba;
case 0x6869c0:goto L6869c0;
case 0x6869c3:c.instructions+=1;goto B6869c3;
case 0x6869c8:goto L6869c8;
case 0x6869ca:c.instructions+=2;goto B6869ca;
case 0x6869d0:c.instructions+=1;goto B6869d0;
case 0x6869d2:goto L6869d2;
case 0x6869d3:c.instructions+=2;goto B6869d3;
case 0x6869d5:c.instructions+=1;goto B6869d5;
case 0x6869da:goto L6869da;
case 0x6869dc:c.instructions+=2;goto B6869dc;
case 0x6869df:c.instructions+=1;goto B6869df;
case 0x6869e5:goto L6869e5;
case 0x6869e8:c.instructions+=8;goto B6869e8;
case 0x6869eb:c.instructions+=7;goto B6869eb;
case 0x6869f2:c.instructions+=6;goto B6869f2;
case 0x6869f3:c.instructions+=5;goto B6869f3;
case 0x6869f6:c.instructions+=4;goto B6869f6;
case 0x6869f7:c.instructions+=3;goto B6869f7;
case 0x6869fb:c.instructions+=2;goto B6869fb;
case 0x6869fc:c.instructions+=1;goto B6869fc;
case 0x686a01:goto L686a01;
case 0x686a03:c.instructions+=3;goto B686a03;
case 0x686a06:c.instructions+=2;goto B686a06;
case 0x686a09:c.instructions+=1;goto B686a09;
case 0x686a0b:goto L686a0b;
case 0x686a0e:c.instructions+=1;goto B686a0e;
case 0x686a11:goto L686a11;
case 0x686a14:c.instructions+=7;goto B686a14;
case 0x686a16:c.instructions+=6;goto B686a16;
case 0x686a19:c.instructions+=5;goto B686a19;
case 0x686a1b:c.instructions+=4;goto B686a1b;
case 0x686a1c:c.instructions+=3;goto B686a1c;
case 0x686a1f:c.instructions+=2;goto B686a1f;
case 0x686a22:c.instructions+=1;goto B686a22;
case 0x686a24:goto L686a24;
case 0x686a27:c.instructions+=5;goto B686a27;
case 0x686a28:c.instructions+=4;goto B686a28;
case 0x686a2b:c.instructions+=3;goto B686a2b;
case 0x686a2c:c.instructions+=2;goto B686a2c;
case 0x686a2f:c.instructions+=1;goto B686a2f;
case 0x686a34:goto L686a34;
case 0x686a36:c.instructions+=2;goto B686a36;
case 0x686a39:c.instructions+=1;goto B686a39;
case 0x686a3b:goto L686a3b;
case 0x686a3e:c.instructions+=4;goto B686a3e;
case 0x686a41:c.instructions+=3;goto B686a41;
case 0x686a44:c.instructions+=2;goto B686a44;
case 0x686a47:c.instructions+=1;goto B686a47;
case 0x686a49:goto L686a49;
case 0x686a4e:c.instructions+=5;goto B686a4e;
case 0x686a53:c.instructions+=4;goto B686a53;
case 0x686a56:c.instructions+=3;goto B686a56;
case 0x686a57:c.instructions+=2;goto B686a57;
case 0x686a59:c.instructions+=1;goto B686a59;
case 0x686a5e:goto L686a5e;
case 0x686a61:goto L686a61;
case 0x686a65:goto L686a65;
case 0x686a68:c.instructions+=1;goto B686a68;
case 0x686a6d:goto L686a6d;
case 0x686a70:c.instructions+=1;goto B686a70;
case 0x686a75:goto L686a75;
case 0x686a76:c.instructions+=3;goto B686a76;
case 0x686a77:c.instructions+=2;goto B686a77;
case 0x686a7a:c.instructions+=1;goto B686a7a;
case 0x686a7f:goto L686a7f;
case 0x686a82:c.instructions+=5;goto B686a82;
case 0x686a83:c.instructions+=4;goto B686a83;
case 0x686a84:c.instructions+=3;goto B686a84;
case 0x686a85:c.instructions+=2;goto B686a85;
case 0x686a86:c.instructions+=1;goto B686a86;
case 0x686a87:goto L686a87;
case 0x686a89:c.instructions+=5;goto B686a89;
case 0x686a8a:c.instructions+=4;goto B686a8a;
case 0x686a8c:c.instructions+=3;goto B686a8c;
case 0x686a8d:c.instructions+=2;goto B686a8d;
case 0x686a8f:c.instructions+=1;goto B686a8f;
case 0x686a94:goto L686a94;
case 0x686a98:c.instructions+=1;goto B686a98;
case 0x686a9a:goto L686a9a;
case 0x686a9b:c.instructions+=1;goto B686a9b;
case 0x686aa0:goto L686aa0;
case 0x686aa1:goto L686aa1;
case 0x686aa3:c.instructions+=3;goto B686aa3;
case 0x686aa4:c.instructions+=2;goto B686aa4;
case 0x686aa5:c.instructions+=1;goto B686aa5;
case 0x686aa8:goto L686aa8;
case 0x686aaa:c.instructions+=4;goto B686aaa;
case 0x686aab:c.instructions+=3;goto B686aab;
case 0x686aac:c.instructions+=2;goto B686aac;
case 0x686aae:c.instructions+=1;goto B686aae;
case 0x686ab0:goto L686ab0;
case 0x686ab3:c.instructions+=2;goto B686ab3;
case 0x686ab5:c.instructions+=1;goto B686ab5;
case 0x686ab7:goto L686ab7;
case 0x686ab9:c.instructions+=1;goto B686ab9;
case 0x686abe:goto L686abe;
case 0x686abf:c.instructions+=2;goto B686abf;
case 0x686ac2:c.instructions+=1;goto B686ac2;
case 0x686ac4:goto L686ac4;
case 0x686ac5:c.instructions+=2;goto B686ac5;
case 0x686ac6:c.instructions+=1;goto B686ac6;
case 0x686ac7:goto L686ac7;
case 0x686ac9:c.instructions+=11;goto B686ac9;
case 0x686aca:c.instructions+=10;goto B686aca;
case 0x686acc:c.instructions+=9;goto B686acc;
case 0x686acd:c.instructions+=8;goto B686acd;
case 0x686ace:c.instructions+=7;goto B686ace;
case 0x686ad1:c.instructions+=6;goto B686ad1;
case 0x686ad2:c.instructions+=5;goto B686ad2;
case 0x686ad4:c.instructions+=4;goto B686ad4;
case 0x686ad7:c.instructions+=3;goto B686ad7;
case 0x686ada:c.instructions+=2;goto B686ada;
case 0x686adb:c.instructions+=1;goto B686adb;
case 0x686ae0:goto L686ae0;
case 0x686ae2:c.instructions+=1;goto B686ae2;
case 0x686ae4:goto L686ae4;
case 0x686ae7:c.instructions+=5;goto B686ae7;
case 0x686ae9:c.instructions+=4;goto B686ae9;
case 0x686aea:c.instructions+=3;goto B686aea;
case 0x686aeb:c.instructions+=2;goto B686aeb;
case 0x686aec:c.instructions+=1;goto B686aec;
case 0x686aef:goto L686aef;
case 0x686af2:c.instructions+=5;goto B686af2;
case 0x686af4:c.instructions+=4;goto B686af4;
case 0x686af7:c.instructions+=3;goto B686af7;
case 0x686af9:c.instructions+=2;goto B686af9;
case 0x686afa:c.instructions+=1;goto B686afa;
case 0x686afd:goto L686afd;
case 0x686aff:c.instructions+=3;goto B686aff;
case 0x686b01:c.instructions+=2;goto B686b01;
case 0x686b03:c.instructions+=1;goto B686b03;
case 0x686b06:goto L686b06;
case 0x686b08:goto L686b08;
case 0x686b0a:c.instructions+=2;goto B686b0a;
case 0x686b0d:c.instructions+=1;goto B686b0d;
case 0x686b10:goto L686b10;
case 0x686b12:goto L686b12;
case 0x686b15:c.instructions+=4;goto B686b15;
case 0x686b16:c.instructions+=3;goto B686b16;
case 0x686b18:c.instructions+=2;goto B686b18;
case 0x686b1a:c.instructions+=1;goto B686b1a;
case 0x686b1b:goto L686b1b;
case 0x686b1c:c.instructions+=2;goto B686b1c;
case 0x686b1d:c.instructions+=1;goto B686b1d;
case 0x686b20:goto L686b20;
case 0x686b22:c.instructions+=7;goto B686b22;
case 0x686b23:c.instructions+=6;goto B686b23;
case 0x686b25:c.instructions+=5;goto B686b25;
case 0x686b26:c.instructions+=4;goto B686b26;
case 0x686b27:c.instructions+=3;goto B686b27;
case 0x686b2a:c.instructions+=2;goto B686b2a;
case 0x686b2d:c.instructions+=1;goto B686b2d;
case 0x686b32:goto L686b32;
case 0x686b35:c.instructions+=2;goto B686b35;
case 0x686b38:c.instructions+=1;goto B686b38;
case 0x686b3b:goto L686b3b;
case 0x686b3d:c.instructions+=3;goto B686b3d;
case 0x686b3e:c.instructions+=2;goto B686b3e;
case 0x686b40:c.instructions+=1;goto B686b40;
case 0x686b42:goto L686b42;
case 0x686b43:c.instructions+=5;goto B686b43;
case 0x686b45:c.instructions+=4;goto B686b45;
case 0x686b46:c.instructions+=3;goto B686b46;
case 0x686b49:c.instructions+=2;goto B686b49;
case 0x686b4a:c.instructions+=1;goto B686b4a;
case 0x686b4f:goto L686b4f;
case 0x686b51:c.instructions+=3;goto B686b51;
case 0x686b53:c.instructions+=2;goto B686b53;
case 0x686b54:c.instructions+=1;goto B686b54;
case 0x686b56:goto L686b56;
case 0x686b58:c.instructions+=5;goto B686b58;
case 0x686b5b:c.instructions+=4;goto B686b5b;
case 0x686b5d:c.instructions+=3;goto B686b5d;
case 0x686b5e:c.instructions+=2;goto B686b5e;
case 0x686b61:c.instructions+=1;goto B686b61;
case 0x686b63:goto L686b63;
case 0x686b65:goto L686b65;
case 0x686b67:c.instructions+=2;goto B686b67;
case 0x686b6a:c.instructions+=1;goto B686b6a;
case 0x686b6c:goto L686b6c;
case 0x686b6e:goto L686b6e;
case 0x686b73:goto L686b73;
case 0x686b75:c.instructions+=3;goto B686b75;
case 0x686b76:c.instructions+=2;goto B686b76;
case 0x686b77:c.instructions+=1;goto B686b77;
case 0x686b79:goto L686b79;
case 0x686b7c:c.instructions+=7;goto B686b7c;
case 0x686b7f:c.instructions+=6;goto B686b7f;
case 0x686b82:c.instructions+=5;goto B686b82;
case 0x686b84:c.instructions+=4;goto B686b84;
case 0x686b87:c.instructions+=3;goto B686b87;
case 0x686b8a:c.instructions+=2;goto B686b8a;
case 0x686b8b:c.instructions+=1;goto B686b8b;
case 0x686b90:goto L686b90;
case 0x686b92:goto L686b92;
case 0x686b94:goto L686b94;
case 0x686b96:c.instructions+=1;goto B686b96;
case 0x686b98:goto L686b98;
case 0x686b9d:c.instructions+=1;goto B686b9d;
case 0x686b9f:goto L686b9f;
case 0x686ba2:c.instructions+=3;goto B686ba2;
case 0x686ba5:c.instructions+=2;goto B686ba5;
case 0x686ba8:c.instructions+=1;goto B686ba8;
case 0x686baa:goto L686baa;
case 0x686bab:c.instructions+=3;goto B686bab;
case 0x686bac:c.instructions+=2;goto B686bac;
case 0x686bad:c.instructions+=1;goto B686bad;
case 0x686bb0:goto L686bb0;
case 0x686bb2:c.instructions+=10;goto B686bb2;
case 0x686bb3:c.instructions+=9;goto B686bb3;
case 0x686bb5:c.instructions+=8;goto B686bb5;
case 0x686bb7:c.instructions+=7;goto B686bb7;
case 0x686bb9:c.instructions+=6;goto B686bb9;
case 0x686bba:c.instructions+=5;goto B686bba;
case 0x686bbb:c.instructions+=4;goto B686bbb;
case 0x686bbd:c.instructions+=3;goto B686bbd;
case 0x686bbe:c.instructions+=2;goto B686bbe;
case 0x686bc0:c.instructions+=1;goto B686bc0;
case 0x686bc2:goto L686bc2;
case 0x686bc4:goto L686bc4;
case 0x686bc6:c.instructions+=1;goto B686bc6;
case 0x686bc9:goto L686bc9;
case 0x686bcb:goto L686bcb;
case 0x686bcd:c.instructions+=1;goto B686bcd;
case 0x686bd0:goto L686bd0;
case 0x686bd2:goto L686bd2;
case 0x686bd4:c.instructions+=1;goto B686bd4;
case 0x686bd7:goto L686bd7;
case 0x686bd9:goto L686bd9;
case 0x686bdb:c.instructions+=3;goto B686bdb;
case 0x686bde:c.instructions+=2;goto B686bde;
case 0x686be1:c.instructions+=1;goto B686be1;
case 0x686be4:goto L686be4;
case 0x686be6:goto L686be6;
case 0x686bec:c.instructions+=12;goto B686bec;
case 0x686bf2:c.instructions+=11;goto B686bf2;
case 0x686bf8:c.instructions+=10;goto B686bf8;
case 0x686bfe:c.instructions+=9;goto B686bfe;
case 0x686c04:c.instructions+=8;goto B686c04;
case 0x686c0a:c.instructions+=7;goto B686c0a;
case 0x686c10:c.instructions+=6;goto B686c10;
case 0x686c16:c.instructions+=5;goto B686c16;
case 0x686c1c:c.instructions+=4;goto B686c1c;
case 0x686c22:c.instructions+=3;goto B686c22;
case 0x686c28:c.instructions+=2;goto B686c28;
case 0x686c2a:c.instructions+=1;goto B686c2a;
case 0x686c2c:goto L686c2c;
case 0x686c2f:c.instructions+=1;goto B686c2f;
case 0x686c31:goto L686c31;
case 0x686c37:goto L686c37;
case 0x686c38:c.instructions+=4;goto B686c38;
case 0x686c3a:c.instructions+=3;goto B686c3a;
case 0x686c3b:c.instructions+=2;goto B686c3b;
case 0x686c3c:c.instructions+=1;goto B686c3c;
case 0x686c3f:goto L686c3f;
case 0x686c41:c.instructions+=4;goto B686c41;
case 0x686c42:c.instructions+=3;goto B686c42;
case 0x686c44:c.instructions+=2;goto B686c44;
case 0x686c47:c.instructions+=1;goto B686c47;
case 0x686c4c:goto L686c4c;
case 0x686c4f:c.instructions+=1;goto B686c4f;
case 0x686c54:goto L686c54;
case 0x686c57:c.instructions+=1;goto B686c57;
case 0x686c5c:goto L686c5c;
case 0x686c5f:c.instructions+=1;goto B686c5f;
case 0x686c64:goto L686c64;
case 0x686c66:c.instructions+=2;goto B686c66;
case 0x686c67:c.instructions+=1;goto B686c67;
case 0x686c6c:goto L686c6c;
case 0x686c6e:c.instructions+=8;goto B686c6e;
case 0x686c6f:c.instructions+=7;goto B686c6f;
case 0x686c71:c.instructions+=6;goto B686c71;
case 0x686c72:c.instructions+=5;goto B686c72;
case 0x686c75:c.instructions+=4;goto B686c75;
case 0x686c77:c.instructions+=3;goto B686c77;
case 0x686c78:c.instructions+=2;goto B686c78;
case 0x686c7a:c.instructions+=1;goto B686c7a;
case 0x686c7d:goto L686c7d;
case 0x686c7f:c.instructions+=3;goto B686c7f;
case 0x686c80:c.instructions+=2;goto B686c80;
case 0x686c82:c.instructions+=1;goto B686c82;
case 0x686c84:goto L686c84;
case 0x686c86:c.instructions+=2;goto B686c86;
case 0x686c89:c.instructions+=1;goto B686c89;
case 0x686c8b:goto L686c8b;
case 0x686c8c:c.instructions+=5;goto B686c8c;
case 0x686c91:c.instructions+=4;goto B686c91;
case 0x686c96:c.instructions+=3;goto B686c96;
case 0x686c99:c.instructions+=2;goto B686c99;
case 0x686c9c:c.instructions+=1;goto B686c9c;
case 0x686ca1:goto L686ca1;
case 0x686ca4:c.instructions+=2;goto B686ca4;
case 0x686ca9:c.instructions+=1;goto B686ca9;
case 0x686cae:goto L686cae;
case 0x686cb1:c.instructions+=11;goto B686cb1;
case 0x686cb3:c.instructions+=10;goto B686cb3;
case 0x686cb4:c.instructions+=9;goto B686cb4;
case 0x686cb7:c.instructions+=8;goto B686cb7;
case 0x686cb9:c.instructions+=7;goto B686cb9;
case 0x686cbb:c.instructions+=6;goto B686cbb;
case 0x686cbe:c.instructions+=5;goto B686cbe;
case 0x686cc0:c.instructions+=4;goto B686cc0;
case 0x686cc3:c.instructions+=3;goto B686cc3;
case 0x686cc8:c.instructions+=2;goto B686cc8;
case 0x686ccb:c.instructions+=1;goto B686ccb;
case 0x686cd1:goto L686cd1;
case 0x686cd7:c.instructions+=2;goto B686cd7;
case 0x686cda:c.instructions+=1;goto B686cda;
case 0x686cdc:goto L686cdc;
case 0x686cdf:c.instructions+=1;goto B686cdf;
case 0x686ce1:goto L686ce1;
case 0x686ce4:c.instructions+=6;goto B686ce4;
case 0x686ce5:c.instructions+=5;goto B686ce5;
case 0x686ce8:c.instructions+=4;goto B686ce8;
case 0x686ce9:c.instructions+=3;goto B686ce9;
case 0x686cec:c.instructions+=2;goto B686cec;
case 0x686ced:c.instructions+=1;goto B686ced;
case 0x686cf2:goto L686cf2;
case 0x686cf4:c.instructions+=1;goto B686cf4;
case 0x686cf6:goto L686cf6;
case 0x686cf7:c.instructions+=1;goto B686cf7;
case 0x686cfc:goto L686cfc;
case 0x686d01:c.instructions+=3;goto B686d01;
case 0x686d04:c.instructions+=2;goto B686d04;
case 0x686d07:c.instructions+=1;goto B686d07;
case 0x686d0c:goto L686d0c;
case 0x686d0f:goto L686d0f;
case 0x686d14:c.instructions+=1;goto B686d14;
case 0x686d19:goto L686d19;
case 0x686d1d:c.instructions+=1;goto B686d1d;
case 0x686d1f:goto L686d1f;
case 0x686d25:c.instructions+=1;goto B686d25;
case 0x686d27:goto L686d27;
case 0x686d2b:c.instructions+=1;goto B686d2b;
case 0x686d2d:goto L686d2d;
case 0x686d33:goto L686d33;
case 0x686d37:c.instructions+=3;goto B686d37;
case 0x686d3a:c.instructions+=2;goto B686d3a;
case 0x686d3c:c.instructions+=1;goto B686d3c;
case 0x686d41:goto L686d41;
case 0x686d42:c.instructions+=2;goto B686d42;
case 0x686d47:c.instructions+=1;goto B686d47;
case 0x686d49:goto L686d49;
case 0x686d4f:c.instructions+=4;goto B686d4f;
case 0x686d52:c.instructions+=3;goto B686d52;
case 0x686d53:c.instructions+=2;goto B686d53;
case 0x686d55:c.instructions+=1;goto B686d55;
case 0x686d5a:goto L686d5a;
case 0x686d5c:c.instructions+=1;goto B686d5c;
case 0x686d5e:goto L686d5e;
case 0x686d61:c.instructions+=3;goto B686d61;
case 0x686d64:c.instructions+=2;goto B686d64;
case 0x686d66:c.instructions+=1;goto B686d66;
case 0x686d68:goto L686d68;
case 0x686d6b:c.instructions+=6;goto B686d6b;
case 0x686d6c:c.instructions+=5;goto B686d6c;
case 0x686d6f:c.instructions+=4;goto B686d6f;
case 0x686d70:c.instructions+=3;goto B686d70;
case 0x686d73:c.instructions+=2;goto B686d73;
case 0x686d74:c.instructions+=1;goto B686d74;
case 0x686d79:goto L686d79;
case 0x686d7b:c.instructions+=1;goto B686d7b;
case 0x686d81:goto L686d81;
case 0x686d84:c.instructions+=8;goto B686d84;
case 0x686d8a:c.instructions+=7;goto B686d8a;
case 0x686d8c:c.instructions+=6;goto B686d8c;
case 0x686d8e:c.instructions+=5;goto B686d8e;
case 0x686d90:c.instructions+=4;goto B686d90;
case 0x686d92:c.instructions+=3;goto B686d92;
case 0x686d94:c.instructions+=2;goto B686d94;
case 0x686d95:c.instructions+=1;goto B686d95;
case 0x686d9a:goto L686d9a;
case 0x686d9c:goto L686d9c;
case 0x686da0:c.instructions+=1;goto B686da0;
case 0x686da6:goto L686da6;
case 0x686da7:c.instructions+=2;goto B686da7;
case 0x686dac:c.instructions+=1;goto B686dac;
case 0x686db1:goto L686db1;
case 0x686db4:c.instructions+=3;goto B686db4;
case 0x686db9:c.instructions+=2;goto B686db9;
case 0x686dbc:c.instructions+=1;goto B686dbc;
case 0x686dbe:goto L686dbe;
case 0x686dc0:c.instructions+=4;goto B686dc0;
case 0x686dc3:c.instructions+=3;goto B686dc3;
case 0x686dc4:c.instructions+=2;goto B686dc4;
case 0x686dc6:c.instructions+=1;goto B686dc6;
case 0x686dcb:goto L686dcb;
case 0x686dcd:c.instructions+=2;goto B686dcd;
case 0x686dd0:c.instructions+=1;goto B686dd0;
case 0x686dd2:goto L686dd2;
case 0x686dd5:c.instructions+=2;goto B686dd5;
case 0x686dd7:c.instructions+=1;goto B686dd7;
case 0x686dd9:goto L686dd9;
case 0x686ddf:c.instructions+=7;goto B686ddf;
case 0x686de1:c.instructions+=6;goto B686de1;
case 0x686de3:c.instructions+=5;goto B686de3;
case 0x686de5:c.instructions+=4;goto B686de5;
case 0x686de7:c.instructions+=3;goto B686de7;
case 0x686de9:c.instructions+=2;goto B686de9;
case 0x686dea:c.instructions+=1;goto B686dea;
case 0x686def:goto L686def;
case 0x686df1:goto L686df1;
case 0x686df5:c.instructions+=1;goto B686df5;
case 0x686dfb:goto L686dfb;
case 0x686dfc:c.instructions+=2;goto B686dfc;
case 0x686e01:c.instructions+=1;goto B686e01;
case 0x686e06:goto L686e06;
case 0x686e09:c.instructions+=4;goto B686e09;
case 0x686e0e:c.instructions+=3;goto B686e0e;
case 0x686e11:c.instructions+=2;goto B686e11;
case 0x686e16:c.instructions+=1;goto B686e16;
case 0x686e1c:goto L686e1c;
case 0x686e1e:c.instructions+=2;goto B686e1e;
case 0x686e21:c.instructions+=1;goto B686e21;
case 0x686e27:goto L686e27;
case 0x686e2c:c.instructions+=2;goto B686e2c;
case 0x686e2f:c.instructions+=1;goto B686e2f;
case 0x686e35:goto L686e35;
case 0x686e3a:c.instructions+=2;goto B686e3a;
case 0x686e3d:c.instructions+=1;goto B686e3d;
case 0x686e43:goto L686e43;
case 0x686e4a:c.instructions+=1;goto B686e4a;
case 0x686e4c:goto L686e4c;
case 0x686e51:c.instructions+=3;goto B686e51;
case 0x686e54:c.instructions+=2;goto B686e54;
case 0x686e57:c.instructions+=1;goto B686e57;
case 0x686e59:goto L686e59;
case 0x686e5f:c.instructions+=4;goto B686e5f;
case 0x686e62:c.instructions+=3;goto B686e62;
case 0x686e63:c.instructions+=2;goto B686e63;
case 0x686e65:c.instructions+=1;goto B686e65;
case 0x686e6a:goto L686e6a;
case 0x686e6c:c.instructions+=1;goto B686e6c;
case 0x686e6e:goto L686e6e;
case 0x686e71:c.instructions+=3;goto B686e71;
case 0x686e74:c.instructions+=2;goto B686e74;
case 0x686e76:c.instructions+=1;goto B686e76;
case 0x686e78:goto L686e78;
case 0x686e7b:c.instructions+=6;goto B686e7b;
case 0x686e7c:c.instructions+=5;goto B686e7c;
case 0x686e7f:c.instructions+=4;goto B686e7f;
case 0x686e80:c.instructions+=3;goto B686e80;
case 0x686e83:c.instructions+=2;goto B686e83;
case 0x686e84:c.instructions+=1;goto B686e84;
case 0x686e89:goto L686e89;
case 0x686e8b:c.instructions+=1;goto B686e8b;
case 0x686e8d:goto L686e8d;
case 0x686e8e:c.instructions+=2;goto B686e8e;
case 0x686e93:c.instructions+=1;goto B686e93;
case 0x686e98:goto L686e98;
case 0x686e9b:c.instructions+=8;goto B686e9b;
case 0x686ea1:c.instructions+=7;goto B686ea1;
case 0x686ea3:c.instructions+=6;goto B686ea3;
case 0x686ea5:c.instructions+=5;goto B686ea5;
case 0x686ea7:c.instructions+=4;goto B686ea7;
case 0x686ea9:c.instructions+=3;goto B686ea9;
case 0x686eab:c.instructions+=2;goto B686eab;
case 0x686eac:c.instructions+=1;goto B686eac;
case 0x686eb1:goto L686eb1;
case 0x686eb3:goto L686eb3;
case 0x686eb7:c.instructions+=1;goto B686eb7;
case 0x686ebd:goto L686ebd;
case 0x686ebe:c.instructions+=2;goto B686ebe;
case 0x686ec3:c.instructions+=1;goto B686ec3;
case 0x686ec8:goto L686ec8;
case 0x686ec9:c.instructions+=2;goto B686ec9;
case 0x686ece:c.instructions+=1;goto B686ece;
case 0x686ed3:goto L686ed3;
case 0x686ed6:c.instructions+=2;goto B686ed6;
case 0x686ed9:c.instructions+=1;goto B686ed9;
case 0x686edb:goto L686edb;
case 0x686ee1:c.instructions+=2;goto B686ee1;
case 0x686ee3:c.instructions+=1;goto B686ee3;
case 0x686ee5:goto L686ee5;
case 0x686ee8:c.instructions+=3;goto B686ee8;
case 0x686eed:c.instructions+=2;goto B686eed;
case 0x686ef0:c.instructions+=1;goto B686ef0;
case 0x686ef2:goto L686ef2;
case 0x686ef8:c.instructions+=3;goto B686ef8;
case 0x686efa:c.instructions+=2;goto B686efa;
case 0x686efb:c.instructions+=1;goto B686efb;
case 0x686efd:goto L686efd;
case 0x686f00:c.instructions+=3;goto B686f00;
case 0x686f05:c.instructions+=2;goto B686f05;
case 0x686f08:c.instructions+=1;goto B686f08;
case 0x686f0a:goto L686f0a;
case 0x686f10:c.instructions+=2;goto B686f10;
case 0x686f12:c.instructions+=1;goto B686f12;
case 0x686f14:goto L686f14;
case 0x686f1a:c.instructions+=1;goto B686f1a;
case 0x686f1c:goto L686f1c;
case 0x686f1d:goto L686f1d;
case 0x686f1e:c.instructions+=2;goto B686f1e;
case 0x686f20:c.instructions+=1;goto B686f20;
case 0x686f25:goto L686f25;
case 0x686f27:c.instructions+=1;goto B686f27;
case 0x686f29:goto L686f29;
case 0x686f2c:c.instructions+=5;goto B686f2c;
case 0x686f2f:c.instructions+=4;goto B686f2f;
case 0x686f31:c.instructions+=3;goto B686f31;
case 0x686f34:c.instructions+=2;goto B686f34;
case 0x686f37:c.instructions+=1;goto B686f37;
case 0x686f39:goto L686f39;
case 0x686f3c:c.instructions+=5;goto B686f3c;
case 0x686f3f:c.instructions+=4;goto B686f3f;
case 0x686f40:c.instructions+=3;goto B686f40;
case 0x686f41:c.instructions+=2;goto B686f41;
case 0x686f44:c.instructions+=1;goto B686f44;
case 0x686f49:goto L686f49;
case 0x686f4b:c.instructions+=1;goto B686f4b;
case 0x686f51:goto L686f51;
case 0x686f55:c.instructions+=1;goto B686f55;
case 0x686f57:goto L686f57;
case 0x686f5a:c.instructions+=7;goto B686f5a;
case 0x686f5b:c.instructions+=6;goto B686f5b;
case 0x686f5c:c.instructions+=5;goto B686f5c;
case 0x686f61:c.instructions+=4;goto B686f61;
case 0x686f66:c.instructions+=3;goto B686f66;
case 0x686f69:c.instructions+=2;goto B686f69;
case 0x686f6c:c.instructions+=1;goto B686f6c;
case 0x686f71:goto L686f71;
case 0x686f74:c.instructions+=1;goto B686f74;
case 0x686f79:goto L686f79;
case 0x686f7c:c.instructions+=8;goto B686f7c;
case 0x686f7f:c.instructions+=7;goto B686f7f;
case 0x686f86:c.instructions+=6;goto B686f86;
case 0x686f88:c.instructions+=5;goto B686f88;
case 0x686f8a:c.instructions+=4;goto B686f8a;
case 0x686f8c:c.instructions+=3;goto B686f8c;
case 0x686f8e:c.instructions+=2;goto B686f8e;
case 0x686f8f:c.instructions+=1;goto B686f8f;
case 0x686f94:goto L686f94;
case 0x686f97:c.instructions+=3;goto B686f97;
case 0x686f99:c.instructions+=2;goto B686f99;
case 0x686f9f:c.instructions+=1;goto B686f9f;
case 0x686fa2:goto L686fa2;
case 0x686fa5:c.instructions+=2;goto B686fa5;
case 0x686fa7:c.instructions+=1;goto B686fa7;
case 0x686fa9:goto L686fa9;
case 0x686fac:c.instructions+=2;goto B686fac;
case 0x686faf:c.instructions+=1;goto B686faf;
case 0x686fb1:goto L686fb1;
case 0x686fb2:c.instructions+=7;goto B686fb2;
case 0x686fb5:c.instructions+=6;goto B686fb5;
case 0x686fb6:c.instructions+=5;goto B686fb6;
case 0x686fbb:c.instructions+=4;goto B686fbb;
case 0x686fc0:c.instructions+=3;goto B686fc0;
case 0x686fc3:c.instructions+=2;goto B686fc3;
case 0x686fc6:c.instructions+=1;goto B686fc6;
case 0x686fcb:goto L686fcb;
case 0x686fce:c.instructions+=1;goto B686fce;
case 0x686fd3:goto L686fd3;
case 0x686fd5:goto L686fd5;
case 0x686fd7:goto L686fd7;
case 0x686fd8:goto L686fd8;
case 0x686fd9:c.instructions+=3;goto B686fd9;
case 0x686fda:c.instructions+=2;goto B686fda;
case 0x686fdb:c.instructions+=1;goto B686fdb;
case 0x686fde:goto L686fde;
case 0x686fe0:c.instructions+=5;goto B686fe0;
case 0x686fe1:c.instructions+=4;goto B686fe1;
case 0x686fe3:c.instructions+=3;goto B686fe3;
case 0x686fe4:c.instructions+=2;goto B686fe4;
case 0x686fe6:c.instructions+=1;goto B686fe6;
case 0x686feb:goto L686feb;
case 0x686fef:c.instructions+=1;goto B686fef;
case 0x686ff1:goto L686ff1;
case 0x686ff2:c.instructions+=1;goto B686ff2;
case 0x686ff7:goto L686ff7;
case 0x686ff8:goto L686ff8;
case 0x686ffa:c.instructions+=3;goto B686ffa;
case 0x686ffb:c.instructions+=2;goto B686ffb;
case 0x686ffc:c.instructions+=1;goto B686ffc;
case 0x686fff:goto L686fff;
default:missing_instruction(c.pc);}
B686004:L686004:{c.instructions+=1;NFSU2_TR(0x686004);
{goto L686070;}
}
B686006:L686006:{c.instructions+=2;NFSU2_TR(0x686006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x5000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68600d:{NFSU2_TR(0x68600d);
{goto L686070;}
}
B68600f:L68600f:{c.instructions+=2;NFSU2_TR(0x68600f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x3000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686016:{NFSU2_TR(0x686016);
{goto L686070;}
}
B686018:L686018:{c.instructions+=2;NFSU2_TR(0x686018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68601c:{NFSU2_TR(0x68601c);
{goto L686070;}
}
B68601e:L68601e:{c.instructions+=2;NFSU2_TR(0x68601e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686025:{NFSU2_TR(0x686025);
{goto L686070;}
}
B686027:L686027:{c.instructions+=2;NFSU2_TR(0x686027);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x8000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68602e:{NFSU2_TR(0x68602e);
{goto L686070;}
}
B686030:L686030:{c.instructions+=2;NFSU2_TR(0x686030);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686036:{NFSU2_TR(0x686036);
if(r1(R+518)){{goto L68606d;}}
}
B686038:L686038:{c.instructions+=2;NFSU2_TR(0x686038);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68603e:{NFSU2_TR(0x68603e);
if(r1(R+518)){TAIL_STATIC(0x685fe5u,685);}
}
B686040:L686040:{c.instructions+=2;NFSU2_TR(0x686040);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686046:{NFSU2_TR(0x686046);
if(r1(R+518)){TAIL_STATIC(0x685fe5u,685);}
}
B686048:L686048:{c.instructions+=3;NFSU2_TR(0x686048);
w4(R+8,u32(0xb000000ull));
}
B68604d:{NFSU2_TR(0x68604d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68604f:{NFSU2_TR(0x68604f);
if(r1(R+518)){{goto L686064;}}
}
B686051:L686051:{c.instructions+=2;NFSU2_TR(0x686051);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686057:{NFSU2_TR(0x686057);
if(r1(R+518)){{goto L68606d;}}
}
B686059:L686059:{c.instructions+=2;NFSU2_TR(0x686059);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68605f:{NFSU2_TR(0x68605f);
TAIL_STATIC(0x685fdfu,685);
}
B686064:L686064:{c.instructions+=2;NFSU2_TR(0x686064);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0xc000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68606b:{NFSU2_TR(0x68606b);
{goto L686070;}
}
B68606d:L68606d:{c.instructions+=1;NFSU2_TR(0x68606d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686070:L686070:{c.instructions+=2;NFSU2_TR(0x686070);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686074:{NFSU2_TR(0x686074);
if(r1(R+518)){{goto L68607c;}}
}
B686076:L686076:{c.instructions+=1;NFSU2_TR(0x686076);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x40000000ull))));
}
B68607c:L68607c:{c.instructions+=2;NFSU2_TR(0x68607c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686080:{NFSU2_TR(0x686080);
if(r1(R+518)){{goto L686088;}}
}
B686082:L686082:{c.instructions+=1;NFSU2_TR(0x686082);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x10000000ull))));
}
B686088:L686088:{c.instructions+=3;NFSU2_TR(0x686088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68608b:{NFSU2_TR(0x68608b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68608e:{NFSU2_TR(0x68608e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686095;}}
}
B686090:L686090:{c.instructions+=2;NFSU2_TR(0x686090);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686093:{NFSU2_TR(0x686093);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L68609f;}}
}
B686095:L686095:{c.instructions+=2;NFSU2_TR(0x686095);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B686098:{NFSU2_TR(0x686098);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6860a8;}}
}
B68609a:L68609a:{c.instructions+=2;NFSU2_TR(0x68609a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68609d:{NFSU2_TR(0x68609d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6860a8;}}
}
B68609f:L68609f:{c.instructions+=4;NFSU2_TR(0x68609f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860a2:{NFSU2_TR(0x6860a2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6860a3:{NFSU2_TR(0x6860a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6860a6:{NFSU2_TR(0x6860a6);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6860a8:L6860a8:{c.instructions+=3;NFSU2_TR(0x6860a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860ab:{NFSU2_TR(0x6860ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x29ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6860ae:{NFSU2_TR(0x6860ae);
if(r1(R+518)){{goto L6860ba;}}
}
B6860b0:L6860b0:{c.instructions+=2;NFSU2_TR(0x6860b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6860b3:{NFSU2_TR(0x6860b3);
if(r1(R+518)){{goto L6860ba;}}
}
B6860b5:L6860b5:{c.instructions+=2;NFSU2_TR(0x6860b5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6860b8:{NFSU2_TR(0x6860b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6860c5;}}
}
B6860ba:L6860ba:{c.instructions+=4;NFSU2_TR(0x6860ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860bd:{NFSU2_TR(0x6860bd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B6860c0:{NFSU2_TR(0x6860c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6860c3:{NFSU2_TR(0x6860c3);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6860c5:L6860c5:{c.instructions+=7;NFSU2_TR(0x6860c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860c8:{NFSU2_TR(0x6860c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6860cb:{NFSU2_TR(0x6860cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6860ce:{NFSU2_TR(0x6860ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6860d1:{NFSU2_TR(0x6860d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6860d5:{NFSU2_TR(0x6860d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860d8:{NFSU2_TR(0x6860d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6860ef;}}
}
B6860da:L6860da:{c.instructions+=6;NFSU2_TR(0x6860da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6860dd:{NFSU2_TR(0x6860dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6860e0:{NFSU2_TR(0x6860e0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80000000ull))));
}
B6860e6:{NFSU2_TR(0x6860e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6860e9:{NFSU2_TR(0x6860e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6860ec:{NFSU2_TR(0x6860ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6860ef:L6860ef:{c.instructions+=3;NFSU2_TR(0x6860ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6860f2:{NFSU2_TR(0x6860f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6860f4:{NFSU2_TR(0x6860f4);
if(r1(R+518)){{goto L6861c7;}}
}
B6860fa:L6860fa:{c.instructions+=2;NFSU2_TR(0x6860fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6860fe:{NFSU2_TR(0x6860fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6861c7;}}
}
B686104:L686104:{c.instructions+=3;NFSU2_TR(0x686104);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686108:{NFSU2_TR(0x686108);
w4(R+12,u32(0xf0000ull));
}
B68610d:{NFSU2_TR(0x68610d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686136;}}
}
B68610f:L68610f:{c.instructions+=2;NFSU2_TR(0x68610f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686112:{NFSU2_TR(0x686112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686136;}}
}
B686114:L686114:{c.instructions+=3;NFSU2_TR(0x686114);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686117:{NFSU2_TR(0x686117);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68611a:{NFSU2_TR(0x68611a);
if(r1(R+518)){{goto L68612f;}}
}
B68611c:L68611c:{c.instructions+=2;NFSU2_TR(0x68611c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68611f:{NFSU2_TR(0x68611f);
if(r1(R+518)){{goto L68612f;}}
}
B686121:L686121:{c.instructions+=2;NFSU2_TR(0x686121);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686124:{NFSU2_TR(0x686124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686136;}}
}
B686126:L686126:{c.instructions+=2;NFSU2_TR(0x686126);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x30000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68612d:{NFSU2_TR(0x68612d);
{goto L686136;}
}
B68612f:L68612f:{c.instructions+=1;NFSU2_TR(0x68612f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x70000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686136:L686136:{c.instructions+=18;NFSU2_TR(0x686136);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686139:{NFSU2_TR(0x686139);
__builtin_memmove((R+0),(R+8),4);
}
B68613b:{NFSU2_TR(0x68613b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffff8ull))));
}
B68613e:{NFSU2_TR(0x68613e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B686141:{NFSU2_TR(0x686141);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B686144:{NFSU2_TR(0x686144);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B686146:{NFSU2_TR(0x686146);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686149:{NFSU2_TR(0x686149);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff00000ull))));
}
B68614f:{NFSU2_TR(0x68614f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B686152:{NFSU2_TR(0x686152);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B686154:{NFSU2_TR(0x686154);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686157:{NFSU2_TR(0x686157);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B68615d:{NFSU2_TR(0x68615d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B68615f:{NFSU2_TR(0x68615f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686162:{NFSU2_TR(0x686162);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B686164:{NFSU2_TR(0x686164);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B686166:{NFSU2_TR(0x686166);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68616a:{NFSU2_TR(0x68616a);
if(r1(R+518)){{goto L686171;}}
}
B68616c:L68616c:{c.instructions+=1;NFSU2_TR(0x68616c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000ull))));
}
B686171:L686171:{c.instructions+=8;NFSU2_TR(0x686171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686174:{NFSU2_TR(0x686174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B686177:{NFSU2_TR(0x686177);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68617a:{NFSU2_TR(0x68617a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68617d:{NFSU2_TR(0x68617d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686180:{NFSU2_TR(0x686180);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686182:{NFSU2_TR(0x686182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686185:{NFSU2_TR(0x686185);
if(r1(R+518)){{goto L6861c7;}}
}
B686187:L686187:{c.instructions+=20;NFSU2_TR(0x686187);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68618a:{NFSU2_TR(0x68618a);
__builtin_memmove((R+12),(R+8),4);
}
B68618c:{NFSU2_TR(0x68618c);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B68618f:{NFSU2_TR(0x68618f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B686192:{NFSU2_TR(0x686192);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B686195:{NFSU2_TR(0x686195);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B686197:{NFSU2_TR(0x686197);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68619a:{NFSU2_TR(0x68619a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B68619d:{NFSU2_TR(0x68619d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf000000ull))));
}
B6861a3:{NFSU2_TR(0x6861a3);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6861a5:{NFSU2_TR(0x6861a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6861a8:{NFSU2_TR(0x6861a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6861ab:{NFSU2_TR(0x6861ab);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B6861b1:{NFSU2_TR(0x6861b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff0000ull))));
}
B6861b7:{NFSU2_TR(0x6861b7);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6861b9:{NFSU2_TR(0x6861b9);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6861bb:{NFSU2_TR(0x6861bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6861be:{NFSU2_TR(0x6861be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6861c1:{NFSU2_TR(0x6861c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6861c4:{NFSU2_TR(0x6861c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6861c7:L6861c7:{c.instructions+=3;NFSU2_TR(0x6861c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6861ca:{NFSU2_TR(0x6861ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6861cc:{NFSU2_TR(0x6861cc);
if(r1(R+518)){{goto L686214;}}
}
B6861ce:L6861ce:{c.instructions+=2;NFSU2_TR(0x6861ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6861d2:{NFSU2_TR(0x6861d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686214;}}
}
B6861d4:L6861d4:{c.instructions+=20;NFSU2_TR(0x6861d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6861d7:{NFSU2_TR(0x6861d7);
__builtin_memmove((R+12),(R+8),4);
}
B6861d9:{NFSU2_TR(0x6861d9);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B6861dc:{NFSU2_TR(0x6861dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6861df:{NFSU2_TR(0x6861df);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B6861e2:{NFSU2_TR(0x6861e2);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6861e4:{NFSU2_TR(0x6861e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6861e7:{NFSU2_TR(0x6861e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6861ea:{NFSU2_TR(0x6861ea);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf000000ull))));
}
B6861f0:{NFSU2_TR(0x6861f0);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6861f2:{NFSU2_TR(0x6861f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6861f5:{NFSU2_TR(0x6861f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6861f8:{NFSU2_TR(0x6861f8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B6861fe:{NFSU2_TR(0x6861fe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xff0000ull))));
}
B686204:{NFSU2_TR(0x686204);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B686206:{NFSU2_TR(0x686206);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B686208:{NFSU2_TR(0x686208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68620b:{NFSU2_TR(0x68620b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68620e:{NFSU2_TR(0x68620e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686211:{NFSU2_TR(0x686211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686214:L686214:{c.instructions+=3;NFSU2_TR(0x686214);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686217:{NFSU2_TR(0x686217);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68621a:{NFSU2_TR(0x68621a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686262;}}
}
B68621c:L68621c:{c.instructions+=3;NFSU2_TR(0x68621c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686220:{NFSU2_TR(0x686220);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686223:{NFSU2_TR(0x686223);
__builtin_memmove((R+12),(R+4),4);
}
B686225:L686225:{c.instructions+=3;NFSU2_TR(0x686225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B686227:{NFSU2_TR(0x686227);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686229:{NFSU2_TR(0x686229);
if(r1(R+518)){{goto L6863f1;}}
}
B68622f:L68622f:{c.instructions+=3;NFSU2_TR(0x68622f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686232:{NFSU2_TR(0x686232);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B686235:{NFSU2_TR(0x686235);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68624b;}}
}
B686237:L686237:{c.instructions+=2;NFSU2_TR(0x686237);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68623a:{NFSU2_TR(0x68623a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L68624b;}}
}
B68623c:L68623c:{c.instructions+=5;NFSU2_TR(0x68623c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68623f:{NFSU2_TR(0x68623f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686242:{NFSU2_TR(0x686242);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B686245:{NFSU2_TR(0x686245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686248:{NFSU2_TR(0x686248);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68624b:L68624b:{c.instructions+=6;NFSU2_TR(0x68624b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68624e:{NFSU2_TR(0x68624e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686251:{NFSU2_TR(0x686251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686254:{NFSU2_TR(0x686254);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B686257:{NFSU2_TR(0x686257);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B68625b:{NFSU2_TR(0x68625b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686225u);}goto L686225;}}
}
B68625d:L68625d:{c.instructions+=1;NFSU2_TR(0x68625d);
{goto L6863f1;}
}
B686262:L686262:{c.instructions+=2;NFSU2_TR(0x686262);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686265:{NFSU2_TR(0x686265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6862a5;}}
}
B686267:L686267:{c.instructions+=3;NFSU2_TR(0x686267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68626b:{NFSU2_TR(0x68626b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68626e:{NFSU2_TR(0x68626e);
__builtin_memmove((R+12),(R+4),4);
}
B686270:L686270:{c.instructions+=3;NFSU2_TR(0x686270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B686272:{NFSU2_TR(0x686272);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686274:{NFSU2_TR(0x686274);
if(r1(R+518)){{goto L6863f1;}}
}
B68627a:L68627a:{c.instructions+=4;NFSU2_TR(0x68627a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68627d:{NFSU2_TR(0x68627d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B68627e:{NFSU2_TR(0x68627e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B68627f:{NFSU2_TR(0x68627f);
if(r1(R+518)){{goto L686285;}}
}
B686281:L686281:{c.instructions+=3;NFSU2_TR(0x686281);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B686282:{NFSU2_TR(0x686282);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B686283:{NFSU2_TR(0x686283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68628e;}}
}
B686285:L686285:{c.instructions+=3;NFSU2_TR(0x686285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686288:{NFSU2_TR(0x686288);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68628b:{NFSU2_TR(0x68628b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68628e:L68628e:{c.instructions+=6;NFSU2_TR(0x68628e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686291:{NFSU2_TR(0x686291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686294:{NFSU2_TR(0x686294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686297:{NFSU2_TR(0x686297);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B68629a:{NFSU2_TR(0x68629a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B68629e:{NFSU2_TR(0x68629e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686270u);}goto L686270;}}
}
B6862a0:L6862a0:{c.instructions+=1;NFSU2_TR(0x6862a0);
{goto L6863f1;}
}
B6862a5:L6862a5:{c.instructions+=2;NFSU2_TR(0x6862a5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6862a8:{NFSU2_TR(0x6862a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6862c3;}}
}
B6862aa:L6862aa:{c.instructions+=8;NFSU2_TR(0x6862aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6862ad:{NFSU2_TR(0x6862ad);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6862af:{NFSU2_TR(0x6862af);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6862b2:{NFSU2_TR(0x6862b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6862b5:{NFSU2_TR(0x6862b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6862b8:{NFSU2_TR(0x6862b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6862bb:{NFSU2_TR(0x6862bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6862be:{NFSU2_TR(0x6862be);
{goto L6863f1;}
}
B6862c3:L6862c3:{c.instructions+=3;NFSU2_TR(0x6862c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6862c7:{NFSU2_TR(0x6862c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6862ca:{NFSU2_TR(0x6862ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6862cd:L6862cd:{c.instructions+=4;NFSU2_TR(0x6862cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6862d0:{NFSU2_TR(0x6862d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6862d2:{NFSU2_TR(0x6862d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6862d4:{NFSU2_TR(0x6862d4);
if(r1(R+518)){{goto L6863f1;}}
}
B6862da:L6862da:{c.instructions+=2;NFSU2_TR(0x6862da);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6862de:{NFSU2_TR(0x6862de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686311;}}
}
B6862e0:L6862e0:{c.instructions+=2;NFSU2_TR(0x6862e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xe40000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6862e7:{NFSU2_TR(0x6862e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686311;}}
}
B6862e9:L6862e9:{c.instructions+=3;NFSU2_TR(0x6862e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6862ec:{NFSU2_TR(0x6862ec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6862ef:{NFSU2_TR(0x6862ef);
if(r1(R+518)){{goto L68630a;}}
}
B6862f1:L6862f1:{c.instructions+=2;NFSU2_TR(0x6862f1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6862f4:{NFSU2_TR(0x6862f4);
if(r1(R+518)){{goto L68630a;}}
}
B6862f6:L6862f6:{c.instructions+=2;NFSU2_TR(0x6862f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6862f9:{NFSU2_TR(0x6862f9);
if(r1(R+518)){{goto L68630a;}}
}
B6862fb:L6862fb:{c.instructions+=2;NFSU2_TR(0x6862fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6862fe:{NFSU2_TR(0x6862fe);
if(r1(R+518)){{goto L68630a;}}
}
B686300:L686300:{c.instructions+=2;NFSU2_TR(0x686300);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686303:{NFSU2_TR(0x686303);
if(r1(R+518)){{goto L68630a;}}
}
B686305:L686305:{c.instructions+=2;NFSU2_TR(0x686305);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686308:{NFSU2_TR(0x686308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686311;}}
}
B68630a:L68630a:{c.instructions+=1;NFSU2_TR(0x68630a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0xff0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686311:L686311:{c.instructions+=18;NFSU2_TR(0x686311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686314:{NFSU2_TR(0x686314);
__builtin_memmove((R+4),(R+8),4);
}
B686316:{NFSU2_TR(0x686316);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B686319:{NFSU2_TR(0x686319);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x18ull))));
}
B68631c:{NFSU2_TR(0x68631c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B68631f:{NFSU2_TR(0x68631f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B686321:{NFSU2_TR(0x686321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686324:{NFSU2_TR(0x686324);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf000000ull))));
}
B68632a:{NFSU2_TR(0x68632a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B68632d:{NFSU2_TR(0x68632d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B68632f:{NFSU2_TR(0x68632f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686332:{NFSU2_TR(0x686332);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B686338:{NFSU2_TR(0x686338);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B68633a:{NFSU2_TR(0x68633a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68633d:{NFSU2_TR(0x68633d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff0000ull))));
}
B686343:{NFSU2_TR(0x686343);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B686345:{NFSU2_TR(0x686345);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686349:{NFSU2_TR(0x686349);
if(r1(R+518)){{goto L686351;}}
}
B68634b:L68634b:{c.instructions+=1;NFSU2_TR(0x68634b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x2000ull))));
}
B686351:L686351:{c.instructions+=9;NFSU2_TR(0x686351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686354:{NFSU2_TR(0x686354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B686357:{NFSU2_TR(0x686357);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B68635a:{NFSU2_TR(0x68635a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68635d:{NFSU2_TR(0x68635d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686360:{NFSU2_TR(0x686360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686363:{NFSU2_TR(0x686363);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B686365:{NFSU2_TR(0x686365);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686367:{NFSU2_TR(0x686367);
if(r1(R+518)){{goto L6863e0;}}
}
B686369:L686369:{c.instructions+=2;NFSU2_TR(0x686369);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68636c:{NFSU2_TR(0x68636c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6863a4;}}
}
B68636e:L68636e:{c.instructions+=2;NFSU2_TR(0x68636e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686372:{NFSU2_TR(0x686372);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686383;}}
}
B686374:L686374:{c.instructions+=2;NFSU2_TR(0x686374);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686377:{NFSU2_TR(0x686377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686383;}}
}
B686379:L686379:{c.instructions+=2;NFSU2_TR(0x686379);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68637c:{NFSU2_TR(0x68637c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686383;}}
}
B68637e:L68637e:{c.instructions+=2;NFSU2_TR(0x68637e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686381:{NFSU2_TR(0x686381);
if(r1(R+518)){{goto L6863e0;}}
}
B686383:L686383:{c.instructions+=6;NFSU2_TR(0x686383);
u8 U[4];
w4(U+0,u32(0x7b9f50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686388:{NFSU2_TR(0x686388);
u8 U[4];
w4(U+0,u32(0x7d7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68638d:{NFSU2_TR(0x68638d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686390:{NFSU2_TR(0x686390);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686391:{NFSU2_TR(0x686391);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686393:{NFSU2_TR(0x686393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686398ull));
TAIL_STATIC(0x64307cu,643);
}
B686398:L686398:{c.instructions+=3;NFSU2_TR(0x686398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B68639b:{NFSU2_TR(0x68639b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6863a2:{NFSU2_TR(0x6863a2);
{goto L6863e0;}
}
B6863a4:L6863a4:{c.instructions+=19;NFSU2_TR(0x6863a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6863a7:{NFSU2_TR(0x6863a7);
__builtin_memmove((R+12),(R+4),4);
}
B6863a9:{NFSU2_TR(0x6863a9);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B6863ac:{NFSU2_TR(0x6863ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6863af:{NFSU2_TR(0x6863af);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x18ull))));
}
B6863b2:{NFSU2_TR(0x6863b2);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6863b4:{NFSU2_TR(0x6863b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6863b7:{NFSU2_TR(0x6863b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6863ba:{NFSU2_TR(0x6863ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf000000ull))));
}
B6863c0:{NFSU2_TR(0x6863c0);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6863c2:{NFSU2_TR(0x6863c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6863c5:{NFSU2_TR(0x6863c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6863c8:{NFSU2_TR(0x6863c8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B6863ce:{NFSU2_TR(0x6863ce);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff0000ull))));
}
B6863d3:{NFSU2_TR(0x6863d3);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6863d5:{NFSU2_TR(0x6863d5);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B6863d7:{NFSU2_TR(0x6863d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6863da:{NFSU2_TR(0x6863da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6863dd:{NFSU2_TR(0x6863dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6863e0:L6863e0:{c.instructions+=4;NFSU2_TR(0x6863e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6863e3:{NFSU2_TR(0x6863e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6863e7:{NFSU2_TR(0x6863e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6863eb:{NFSU2_TR(0x6863eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6862cdu);}goto L6862cd;}}
}
B6863f1:L6863f1:{c.instructions+=3;NFSU2_TR(0x6863f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6863f4:{NFSU2_TR(0x6863f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6863f7:{NFSU2_TR(0x6863f7);
if(r1(R+518)){{goto L686415;}}
}
B6863f9:L6863f9:{c.instructions+=6;NFSU2_TR(0x6863f9);
u8 U[4];
w4(U+0,u32(0x7b9f24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6863fe:{NFSU2_TR(0x6863fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686400:{NFSU2_TR(0x686400);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686403:{NFSU2_TR(0x686403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686404:{NFSU2_TR(0x686404);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686406:{NFSU2_TR(0x686406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68640bull));
TAIL_STATIC(0x64307cu,643);
}
B68640b:L68640b:{c.instructions+=2;NFSU2_TR(0x68640b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B68640e:{NFSU2_TR(0x68640e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686415:L686415:{c.instructions+=2;NFSU2_TR(0x686415);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686419:{NFSU2_TR(0x686419);
if(r1(R+518)){{goto L686423;}}
}
B68641b:L68641b:{c.instructions+=3;NFSU2_TR(0x68641b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68641e:{NFSU2_TR(0x68641e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686421:{NFSU2_TR(0x686421);
{goto L686439;}
}
B686423:L686423:{c.instructions+=4;NFSU2_TR(0x686423);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B686426:{NFSU2_TR(0x686426);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686427:{NFSU2_TR(0x686427);
__builtin_memmove((R+4),(R+24),4);
}
B686429:{NFSU2_TR(0x686429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68642eull));
TAIL_STATIC(0x685bb7u,685);
}
B68642e:L68642e:{c.instructions+=2;NFSU2_TR(0x68642e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686430:{NFSU2_TR(0x686430);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L686439;}}
}
B686432:L686432:{c.instructions+=1;NFSU2_TR(0x686432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B686439:L686439:{c.instructions+=6;NFSU2_TR(0x686439);
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
B68643b:{NFSU2_TR(0x68643b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68643c:{NFSU2_TR(0x68643c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68643d:{NFSU2_TR(0x68643d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68643e:{NFSU2_TR(0x68643e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68643f:{NFSU2_TR(0x68643f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686442:L686442:{c.instructions+=16;NFSU2_TR(0x686442);
__builtin_memmove((R+28),(R+28),4);
}
B686444:{NFSU2_TR(0x686444);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686445:{NFSU2_TR(0x686445);
__builtin_memmove((R+20),(R+16),4);
}
B686447:{NFSU2_TR(0x686447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68644a:{NFSU2_TR(0x68644a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68644c:{NFSU2_TR(0x68644c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68644e:{NFSU2_TR(0x68644e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686451:{NFSU2_TR(0x686451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B686453:{NFSU2_TR(0x686453);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686454:{NFSU2_TR(0x686454);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686455:{NFSU2_TR(0x686455);
w4(R+4,u32(0x7ba200ull));
}
B68645a:{NFSU2_TR(0x68645a);
__builtin_memmove((R+24),(R+4),4);
}
B68645c:{NFSU2_TR(0x68645c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+24),(U+0),2);
}
B68645f:{NFSU2_TR(0x68645f);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+24))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686462:{NFSU2_TR(0x686462);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686463:{NFSU2_TR(0x686463);
if(r1(R+518)){{goto L6864e3;}}
}
B686465:L686465:{c.instructions+=5;NFSU2_TR(0x686465);
w4(R+12,u32(0x7ba1fcull));
}
B68646a:{NFSU2_TR(0x68646a);
__builtin_memmove((R+24),(R+12),4);
}
B68646c:{NFSU2_TR(0x68646c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+24),(U+0),2);
}
B68646f:{NFSU2_TR(0x68646f);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+24))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686472:{NFSU2_TR(0x686472);
if(r1(R+518)){{goto L6864e3;}}
}
B686474:L686474:{c.instructions+=5;NFSU2_TR(0x686474);
w4(R+24,u32(0x7ba1f8ull));
}
B686479:{NFSU2_TR(0x686479);
__builtin_memmove((R+28),(R+24),4);
}
B68647b:{NFSU2_TR(0x68647b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+28),(U+0),2);
}
B68647e:{NFSU2_TR(0x68647e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+28))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686481:{NFSU2_TR(0x686481);
if(r1(R+518)){{goto L6864e3;}}
}
B686483:L686483:{c.instructions+=4;NFSU2_TR(0x686483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B686485:{NFSU2_TR(0x686485);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686488:{NFSU2_TR(0x686488);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B68648b:{NFSU2_TR(0x68648b);
if(r1(R+518)){{goto L6864e3;}}
}
B68648d:L68648d:{c.instructions+=3;NFSU2_TR(0x68648d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686490:{NFSU2_TR(0x686490);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686493:{NFSU2_TR(0x686493);
if(r1(R+518)){{goto L6864e3;}}
}
B686495:L686495:{c.instructions+=3;NFSU2_TR(0x686495);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686498:{NFSU2_TR(0x686498);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B68649b:{NFSU2_TR(0x68649b);
if(r1(R+518)){{goto L6864e3;}}
}
B68649d:L68649d:{c.instructions+=2;NFSU2_TR(0x68649d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6864a0:{NFSU2_TR(0x6864a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6864a3:L6864a3:{c.instructions+=4;NFSU2_TR(0x6864a3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6864a5:{NFSU2_TR(0x6864a5);
__builtin_memmove((R+4),(R+12),1);
}
B6864a7:{NFSU2_TR(0x6864a7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6864a9:{NFSU2_TR(0x6864a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6864c5;}}
}
B6864ab:L6864ab:{c.instructions+=2;NFSU2_TR(0x6864ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6864ad:{NFSU2_TR(0x6864ad);
if(r1(R+518)){{goto L6864c1;}}
}
B6864af:L6864af:{c.instructions+=4;NFSU2_TR(0x6864af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6864b2:{NFSU2_TR(0x6864b2);
__builtin_memmove((R+4),(R+12),1);
}
B6864b4:{NFSU2_TR(0x6864b4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6864b7:{NFSU2_TR(0x6864b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6864c5;}}
}
B6864b9:L6864b9:{c.instructions+=6;NFSU2_TR(0x6864b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6864ba:{NFSU2_TR(0x6864ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6864bb:{NFSU2_TR(0x6864bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6864bc:{NFSU2_TR(0x6864bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6864bd:{NFSU2_TR(0x6864bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6864bf:{NFSU2_TR(0x6864bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864a3u);}goto L6864a3;}}
}
B6864c1:L6864c1:{c.instructions+=2;NFSU2_TR(0x6864c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6864c3:{NFSU2_TR(0x6864c3);
{goto L6864ca;}
}
B6864c5:L6864c5:{c.instructions+=2;NFSU2_TR(0x6864c5);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6864c7:{NFSU2_TR(0x6864c7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6864ca:L6864ca:{c.instructions+=2;NFSU2_TR(0x6864ca);
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
B6864cc:{NFSU2_TR(0x6864cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6864de;}}
}
B6864ce:L6864ce:{c.instructions+=4;NFSU2_TR(0x6864ce);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6864d0:{NFSU2_TR(0x6864d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6864d1:{NFSU2_TR(0x6864d1);
__builtin_memmove((R+24),(R+8),4);
}
B6864d3:{NFSU2_TR(0x6864d3);
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
B6864d5:L6864d5:{c.instructions+=1;NFSU2_TR(0x6864d5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6864d7;}}
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
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864d5u);}goto L6864d5;}}
}
B6864d7:L6864d7:{c.instructions+=1;NFSU2_TR(0x6864d7);
if(r1(R+518)){{goto L6864de;}}
}
B6864d9:L6864d9:{c.instructions+=2;NFSU2_TR(0x6864d9);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6864db:{NFSU2_TR(0x6864db);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B6864de:L6864de:{c.instructions+=5;NFSU2_TR(0x6864de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6864df:{NFSU2_TR(0x6864df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6864e0:{NFSU2_TR(0x6864e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6864e1:{NFSU2_TR(0x6864e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6864e2:{NFSU2_TR(0x6864e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6864e3:L6864e3:{c.instructions+=2;NFSU2_TR(0x6864e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6864e5:{NFSU2_TR(0x6864e5);
__builtin_memmove((R+24),(R+8),4);
}
B6864e7:L6864e7:{c.instructions+=4;NFSU2_TR(0x6864e7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6864e9:{NFSU2_TR(0x6864e9);
__builtin_memmove((R+4),(R+8),1);
}
B6864eb:{NFSU2_TR(0x6864eb);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6864ed:{NFSU2_TR(0x6864ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864d9u);}goto L6864d9;}}
}
B6864ef:L6864ef:{c.instructions+=2;NFSU2_TR(0x6864ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6864f1:{NFSU2_TR(0x6864f1);
if(r1(R+518)){{goto L686505;}}
}
B6864f3:L6864f3:{c.instructions+=4;NFSU2_TR(0x6864f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6864f6:{NFSU2_TR(0x6864f6);
__builtin_memmove((R+4),(R+8),1);
}
B6864f8:{NFSU2_TR(0x6864f8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6864fb:{NFSU2_TR(0x6864fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864d9u);}goto L6864d9;}}
}
B6864fd:L6864fd:{c.instructions+=6;NFSU2_TR(0x6864fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6864fe:{NFSU2_TR(0x6864fe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6864ff:{NFSU2_TR(0x6864ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B686500:{NFSU2_TR(0x686500);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B686501:{NFSU2_TR(0x686501);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B686503:{NFSU2_TR(0x686503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864e7u);}goto L6864e7;}}
}
B686505:L686505:{c.instructions+=2;NFSU2_TR(0x686505);
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
B686507:{NFSU2_TR(0x686507);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6864deu);}goto L6864de;}
}
B686509:L686509:{c.instructions+=11;NFSU2_TR(0x686509);
__builtin_memmove((R+28),(R+28),4);
}
B68650b:{NFSU2_TR(0x68650b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68650c:{NFSU2_TR(0x68650c);
__builtin_memmove((R+20),(R+16),4);
}
B68650e:{NFSU2_TR(0x68650e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B686511:{NFSU2_TR(0x686511);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686512:{NFSU2_TR(0x686512);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686513:{NFSU2_TR(0x686513);
__builtin_memmove((R+12),(R+4),4);
}
B686515:{NFSU2_TR(0x686515);
u8 U[4];
w4(U+0,u32(0x464e4946ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68651a:{NFSU2_TR(0x68651a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68651d:{NFSU2_TR(0x68651d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68651f:{NFSU2_TR(0x68651f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686524ull));
TAIL_STATIC(0x6c13b9u,6c1);
}
B686524:L686524:{c.instructions+=9;NFSU2_TR(0x686524);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686527:{NFSU2_TR(0x686527);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68652d:{NFSU2_TR(0x68652d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B686533:{NFSU2_TR(0x686533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B686536:{NFSU2_TR(0x686536);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B68653c:{NFSU2_TR(0x68653c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B68653f:{NFSU2_TR(0x68653f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B686545:{NFSU2_TR(0x686545);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68654b:{NFSU2_TR(0x68654b);
if(r1(R+518)){{goto L68675b;}}
}
B686551:L686551:{c.instructions+=3;NFSU2_TR(0x686551);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B686554:{NFSU2_TR(0x686554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686555:{NFSU2_TR(0x686555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68655aull));
TAIL_STATIC(0x575620u,575);
}
B68655a:L68655a:{c.instructions+=5;NFSU2_TR(0x68655a);
__builtin_memmove((R+28),(R+0),4);
}
B68655c:{NFSU2_TR(0x68655c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68655e:{NFSU2_TR(0x68655e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68655f:{NFSU2_TR(0x68655f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686562:{NFSU2_TR(0x686562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68656e;}}
}
B686564:L686564:{c.instructions+=2;NFSU2_TR(0x686564);
w4(R+28,u32(0x8007000eull));
}
B686569:{NFSU2_TR(0x686569);
{goto L68675b;}
}
B68656e:L68656e:{c.instructions+=4;NFSU2_TR(0x68656e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686571:{NFSU2_TR(0x686571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686572:{NFSU2_TR(0x686572);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686573:{NFSU2_TR(0x686573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686578ull));
TAIL_STATIC(0x684fb7u,684);
}
B686578:L686578:{c.instructions+=6;NFSU2_TR(0x686578);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68657b:{NFSU2_TR(0x68657b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B686581:{NFSU2_TR(0x686581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B686584:{NFSU2_TR(0x686584);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686585:{NFSU2_TR(0x686585);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686588:{NFSU2_TR(0x686588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68658dull));
TAIL_STATIC(0x684fb7u,684);
}
B68658d:L68658d:{c.instructions+=6;NFSU2_TR(0x68658d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686590:{NFSU2_TR(0x686590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B686596:{NFSU2_TR(0x686596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B686599:{NFSU2_TR(0x686599);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68659a:{NFSU2_TR(0x68659a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B68659d:{NFSU2_TR(0x68659d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6865a2ull));
TAIL_STATIC(0x684fb7u,684);
}
B6865a2:L6865a2:{c.instructions+=6;NFSU2_TR(0x6865a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6865a5:{NFSU2_TR(0x6865a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6865ab:{NFSU2_TR(0x6865ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6865ae:{NFSU2_TR(0x6865ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865af:{NFSU2_TR(0x6865af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6865b2:{NFSU2_TR(0x6865b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6865b7ull));
TAIL_STATIC(0x684fb7u,684);
}
B6865b7:L6865b7:{c.instructions+=6;NFSU2_TR(0x6865b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6865ba:{NFSU2_TR(0x6865ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6865c0:{NFSU2_TR(0x6865c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6865c3:{NFSU2_TR(0x6865c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865c4:{NFSU2_TR(0x6865c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6865c7:{NFSU2_TR(0x6865c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6865ccull));
TAIL_STATIC(0x684fb7u,684);
}
B6865cc:L6865cc:{c.instructions+=7;NFSU2_TR(0x6865cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6865cf:{NFSU2_TR(0x6865cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6865d5:{NFSU2_TR(0x6865d5);
u8 U[4];
w4(U+0,u32(0x686442ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865da:{NFSU2_TR(0x6865da);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865dc:{NFSU2_TR(0x6865dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865dd:{NFSU2_TR(0x6865dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865de:{NFSU2_TR(0x6865de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6865e3ull));
TAIL_STATIC(0x75cc70u,75c);
}
B6865e3:L6865e3:{c.instructions+=5;NFSU2_TR(0x6865e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6865e6:{NFSU2_TR(0x6865e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6865e9:{NFSU2_TR(0x6865e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6865ea:{NFSU2_TR(0x6865ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6865ed:{NFSU2_TR(0x6865ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6865f2ull));
TAIL_STATIC(0x575620u,575);
}
B6865f2:L6865f2:{c.instructions+=4;NFSU2_TR(0x6865f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6865f5:{NFSU2_TR(0x6865f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6865f7:{NFSU2_TR(0x6865f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6865fa:{NFSU2_TR(0x6865fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686606;}}
}
B6865fc:L6865fc:{c.instructions+=2;NFSU2_TR(0x6865fc);
w4(R+28,u32(0x8007000eull));
}
B686601:{NFSU2_TR(0x686601);
{goto L68675a;}
}
B686606:L686606:{c.instructions+=5;NFSU2_TR(0x686606);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686608:{NFSU2_TR(0x686608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686609:{NFSU2_TR(0x686609);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68660b:{NFSU2_TR(0x68660b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68660d:{NFSU2_TR(0x68660d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686610:L686610:{c.instructions+=1;NFSU2_TR(0x686610);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686612;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686610u);}goto L686610;}
}
B686612:L686612:{c.instructions+=14;NFSU2_TR(0x686612);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686615:{NFSU2_TR(0x686615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686619:{NFSU2_TR(0x686619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68661a:{NFSU2_TR(0x68661a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68661c:{NFSU2_TR(0x68661c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68661e:{NFSU2_TR(0x68661e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4ull))));
}
B686621:{NFSU2_TR(0x686621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686622:{NFSU2_TR(0x686622);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686625:{NFSU2_TR(0x686625);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686628:{NFSU2_TR(0x686628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68662b:{NFSU2_TR(0x68662b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68662c:{NFSU2_TR(0x68662c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68662f:{NFSU2_TR(0x68662f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686632:{NFSU2_TR(0x686632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686637ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B686637:L686637:{c.instructions+=3;NFSU2_TR(0x686637);
__builtin_memmove((R+28),(R+0),4);
}
B686639:{NFSU2_TR(0x686639);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68663b:{NFSU2_TR(0x68663b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B686641:L686641:{c.instructions+=5;NFSU2_TR(0x686641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686644:{NFSU2_TR(0x686644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B686647:{NFSU2_TR(0x686647);
__builtin_memmove((R+8),(R+4),4);
}
B686649:{NFSU2_TR(0x686649);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B68664c:{NFSU2_TR(0x68664c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68664e:L68664e:{c.instructions+=1;NFSU2_TR(0x68664e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686650;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68664eu);}goto L68664e;}
}
B686650:L686650:{c.instructions+=2;NFSU2_TR(0x686650);
__builtin_memmove((R+4),(R+8),4);
}
B686652:{NFSU2_TR(0x686652);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B686655:L686655:{c.instructions+=1;NFSU2_TR(0x686655);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L686657;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686655u);}goto L686655;}
}
B686657:L686657:{c.instructions+=7;NFSU2_TR(0x686657);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68665a:{NFSU2_TR(0x68665a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68665b:{NFSU2_TR(0x68665b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68665d:{NFSU2_TR(0x68665d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68665e:{NFSU2_TR(0x68665e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686661:{NFSU2_TR(0x686661);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686664:{NFSU2_TR(0x686664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686669ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B686669:L686669:{c.instructions+=3;NFSU2_TR(0x686669);
__builtin_memmove((R+28),(R+0),4);
}
B68666b:{NFSU2_TR(0x68666b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68666d:{NFSU2_TR(0x68666d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B686673:L686673:{c.instructions+=3;NFSU2_TR(0x686673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686677:{NFSU2_TR(0x686677);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686679:{NFSU2_TR(0x686679);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6866b9;}}
}
B68667b:L68667b:{c.instructions+=2;NFSU2_TR(0x68667b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68667e:{NFSU2_TR(0x68667e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686681:L686681:{c.instructions+=12;NFSU2_TR(0x686681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686684:{NFSU2_TR(0x686684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686687:{NFSU2_TR(0x686687);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B68668a:{NFSU2_TR(0x68668a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68668d:{NFSU2_TR(0x68668d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68668f:{NFSU2_TR(0x68668f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686692:{NFSU2_TR(0x686692);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686695:{NFSU2_TR(0x686695);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686697:{NFSU2_TR(0x686697);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68669a:{NFSU2_TR(0x68669a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68669d:{NFSU2_TR(0x68669d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68669e:{NFSU2_TR(0x68669e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6866a3ull));
TAIL_STATIC(0x688997u,688);
}
B6866a3:L6866a3:{c.instructions+=3;NFSU2_TR(0x6866a3);
__builtin_memmove((R+28),(R+0),4);
}
B6866a5:{NFSU2_TR(0x6866a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6866a7:{NFSU2_TR(0x6866a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B6866ad:L6866ad:{c.instructions+=4;NFSU2_TR(0x6866ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6866b0:{NFSU2_TR(0x6866b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x14ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6866b4:{NFSU2_TR(0x6866b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6866b7:{NFSU2_TR(0x6866b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686681u);}goto L686681;}}
}
B6866b9:L6866b9:{c.instructions+=7;NFSU2_TR(0x6866b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6866bc:{NFSU2_TR(0x6866bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6866bd:{NFSU2_TR(0x6866bd);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6866bf:{NFSU2_TR(0x6866bf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6866c1:{NFSU2_TR(0x6866c1);
u8 U[4];
w4(U+0,u32(0x7ba230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6866c6:{NFSU2_TR(0x6866c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6866c9:{NFSU2_TR(0x6866c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6866ceull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6866ce:L6866ce:{c.instructions+=3;NFSU2_TR(0x6866ce);
__builtin_memmove((R+28),(R+0),4);
}
B6866d0:{NFSU2_TR(0x6866d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6866d2:{NFSU2_TR(0x6866d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B6866d8:L6866d8:{c.instructions+=2;NFSU2_TR(0x6866d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6866db:{NFSU2_TR(0x6866db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6866e0ull));
TAIL_STATIC(0x6c1547u,6c1);
}
B6866e0:L6866e0:{c.instructions+=3;NFSU2_TR(0x6866e0);
__builtin_memmove((R+24),(R+0),4);
}
B6866e2:{NFSU2_TR(0x6866e2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6866e8:{NFSU2_TR(0x6866e8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68673d;}}
}
B6866ea:L6866ea:{c.instructions+=3;NFSU2_TR(0x6866ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6866eb:{NFSU2_TR(0x6866eb);
__builtin_memmove((R+4),(R+12),4);
}
B6866ed:{NFSU2_TR(0x6866ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6866f2ull));
TAIL_STATIC(0x685c0cu,685);
}
B6866f2:L6866f2:{c.instructions+=3;NFSU2_TR(0x6866f2);
__builtin_memmove((R+28),(R+0),4);
}
B6866f4:{NFSU2_TR(0x6866f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6866f6:{NFSU2_TR(0x6866f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B6866f8:L6866f8:{c.instructions+=9;NFSU2_TR(0x6866f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6866fb:{NFSU2_TR(0x6866fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6866fe:{NFSU2_TR(0x6866fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B686705:{NFSU2_TR(0x686705);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686706:{NFSU2_TR(0x686706);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686709:{NFSU2_TR(0x686709);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68670a:{NFSU2_TR(0x68670a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B68670e:{NFSU2_TR(0x68670e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68670f:{NFSU2_TR(0x68670f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686714ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B686714:L686714:{c.instructions+=7;NFSU2_TR(0x686714);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686717:{NFSU2_TR(0x686717);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B68671a:{NFSU2_TR(0x68671a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68671b:{NFSU2_TR(0x68671b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B68671e:{NFSU2_TR(0x68671e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68671f:{NFSU2_TR(0x68671f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686722:{NFSU2_TR(0x686722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686727ull));
TAIL_STATIC(0x6c1553u,6c1);
}
B686727:L686727:{c.instructions+=3;NFSU2_TR(0x686727);
__builtin_memmove((R+28),(R+0),4);
}
B686729:{NFSU2_TR(0x686729);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68672b:{NFSU2_TR(0x68672b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68675a;}}
}
B68672d:L68672d:{c.instructions+=6;NFSU2_TR(0x68672d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B686730:{NFSU2_TR(0x686730);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686733:{NFSU2_TR(0x686733);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B686736:{NFSU2_TR(0x686736);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686739:{NFSU2_TR(0x686739);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B68673b:{NFSU2_TR(0x68673b);
{goto L68675a;}
}
B68673d:L68673d:{c.instructions+=6;NFSU2_TR(0x68673d);
u8 U[4];
w4(U+0,u32(0x7ba204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686742:{NFSU2_TR(0x686742);
u8 U[4];
w4(U+0,u32(0x7efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686747:{NFSU2_TR(0x686747);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68674a:{NFSU2_TR(0x68674a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68674b:{NFSU2_TR(0x68674b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68674d:{NFSU2_TR(0x68674d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686752ull));
TAIL_STATIC(0x64307cu,643);
}
B686752:L686752:{c.instructions+=2;NFSU2_TR(0x686752);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B686755:{NFSU2_TR(0x686755);
w4(R+28,u32(0x80004005ull));
}
B68675a:L68675a:{c.instructions+=1;NFSU2_TR(0x68675a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68675b:L68675b:{c.instructions+=2;NFSU2_TR(0x68675b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68675e:{NFSU2_TR(0x68675e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686763ull));
TAIL_STATIC(0x575630u,575);
}
B686763:L686763:{c.instructions+=2;NFSU2_TR(0x686763);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686766:{NFSU2_TR(0x686766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68676bull));
TAIL_STATIC(0x575630u,575);
}
B68676b:L68676b:{c.instructions+=4;NFSU2_TR(0x68676b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68676c:{NFSU2_TR(0x68676c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68676d:{NFSU2_TR(0x68676d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686770:{NFSU2_TR(0x686770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686775ull));
TAIL_STATIC(0x6c13d6u,6c1);
}
B686775:L686775:{c.instructions+=5;NFSU2_TR(0x686775);
__builtin_memmove((R+0),(R+28),4);
}
B686777:{NFSU2_TR(0x686777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686778:{NFSU2_TR(0x686778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B686779:{NFSU2_TR(0x686779);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68677a:{NFSU2_TR(0x68677a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68677b:L68677b:{c.instructions+=15;NFSU2_TR(0x68677b);
__builtin_memmove((R+28),(R+28),4);
}
B68677d:{NFSU2_TR(0x68677d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68677e:{NFSU2_TR(0x68677e);
__builtin_memmove((R+20),(R+16),4);
}
B686780:{NFSU2_TR(0x686780);
__builtin_memmove((R+0),(R+4),4);
}
B686782:{NFSU2_TR(0x686782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686785:{NFSU2_TR(0x686785);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B686789:{NFSU2_TR(0x686789);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B68678b:{NFSU2_TR(0x68678b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68678e:{NFSU2_TR(0x68678e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686791:{NFSU2_TR(0x686791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686794:{NFSU2_TR(0x686794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686797:{NFSU2_TR(0x686797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68679a:{NFSU2_TR(0x68679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68679d:{NFSU2_TR(0x68679d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68679e:{NFSU2_TR(0x68679e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6867a1:L6867a1:{c.instructions+=11;NFSU2_TR(0x6867a1);
__builtin_memmove((R+28),(R+28),4);
}
B6867a3:{NFSU2_TR(0x6867a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867a4:{NFSU2_TR(0x6867a4);
__builtin_memmove((R+20),(R+16),4);
}
B6867a6:{NFSU2_TR(0x6867a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6867a9:{NFSU2_TR(0x6867a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867aa:{NFSU2_TR(0x6867aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867ab:{NFSU2_TR(0x6867ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867ac:{NFSU2_TR(0x6867ac);
__builtin_memmove((R+24),(R+4),4);
}
B6867ae:{NFSU2_TR(0x6867ae);
u8 U[4];
w4(U+0,u32(0x47554244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867b3:{NFSU2_TR(0x6867b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6867b6:{NFSU2_TR(0x6867b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6867bbull));
TAIL_STATIC(0x6c13b9u,6c1);
}
B6867bb:L6867bb:{c.instructions+=5;NFSU2_TR(0x6867bb);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867bd:{NFSU2_TR(0x6867bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6867be:{NFSU2_TR(0x6867be);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867c0:{NFSU2_TR(0x6867c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6867c2:{NFSU2_TR(0x6867c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6867c5:L6867c5:{c.instructions+=1;NFSU2_TR(0x6867c5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6867c7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6867c5u);}goto L6867c5;}
}
B6867c7:L6867c7:{c.instructions+=12;NFSU2_TR(0x6867c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6867c8:{NFSU2_TR(0x6867c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6867ca:{NFSU2_TR(0x6867ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867cb:{NFSU2_TR(0x6867cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867cd:{NFSU2_TR(0x6867cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867ce:{NFSU2_TR(0x6867ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6867d1:{NFSU2_TR(0x6867d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6867d4:{NFSU2_TR(0x6867d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6867d5:{NFSU2_TR(0x6867d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6867d8:{NFSU2_TR(0x6867d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6867db:{NFSU2_TR(0x6867db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6867de:{NFSU2_TR(0x6867de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6867e3ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6867e3:L6867e3:{c.instructions+=3;NFSU2_TR(0x6867e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6867e5:{NFSU2_TR(0x6867e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6867e8:{NFSU2_TR(0x6867e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B6867ee:L6867ee:{c.instructions+=2;NFSU2_TR(0x6867ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6867f1:{NFSU2_TR(0x6867f1);
{goto L686803;}
}
B6867f3:L6867f3:{c.instructions+=3;NFSU2_TR(0x6867f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6867f6:{NFSU2_TR(0x6867f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6867f8:{NFSU2_TR(0x6867f8);
if(r1(R+518)){{goto L686800;}}
}
B6867fa:L6867fa:{c.instructions+=2;NFSU2_TR(0x6867fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6867fe:{NFSU2_TR(0x6867fe);
if(r1(R+518)){{goto L686809;}}
}
B686800:L686800:{c.instructions+=1;NFSU2_TR(0x686800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686803:L686803:{c.instructions+=2;NFSU2_TR(0x686803);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686805:{NFSU2_TR(0x686805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6867f3u);}goto L6867f3;}}
}
B686807:L686807:{c.instructions+=1;NFSU2_TR(0x686807);
{goto L68680c;}
}
B686809:L686809:{c.instructions+=1;NFSU2_TR(0x686809);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68680c:L68680c:{c.instructions+=3;NFSU2_TR(0x68680c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68680e:{NFSU2_TR(0x68680e);
__builtin_memmove((R+0),(R+12),4);
}
B686810:{NFSU2_TR(0x686810);
if(r1(R+518)){{goto L68681c;}}
}
B686812:L686812:{c.instructions+=4;NFSU2_TR(0x686812);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686815:{NFSU2_TR(0x686815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686818:{NFSU2_TR(0x686818);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68681a:{NFSU2_TR(0x68681a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686812u);}goto L686812;}}
}
B68681c:L68681c:{c.instructions+=3;NFSU2_TR(0x68681c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68681f:{NFSU2_TR(0x68681f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686821:{NFSU2_TR(0x686821);
if(r1(R+518)){{goto L686944;}}
}
B686827:L686827:{c.instructions+=3;NFSU2_TR(0x686827);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68682a:{NFSU2_TR(0x68682a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68682b:{NFSU2_TR(0x68682b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686830ull));
TAIL_STATIC(0x575620u,575);
}
B686830:L686830:{c.instructions+=5;NFSU2_TR(0x686830);
__builtin_memmove((R+28),(R+0),4);
}
B686832:{NFSU2_TR(0x686832);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686834:{NFSU2_TR(0x686834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686835:{NFSU2_TR(0x686835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686838:{NFSU2_TR(0x686838);
if(r1(R+518)){{goto L686855;}}
}
B68683a:L68683a:{c.instructions+=2;NFSU2_TR(0x68683a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68683d:{NFSU2_TR(0x68683d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68683f:L68683f:{c.instructions+=1;NFSU2_TR(0x68683f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686841;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68683fu);}goto L68683f;}
}
B686841:L686841:{c.instructions+=4;NFSU2_TR(0x686841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686844:{NFSU2_TR(0x686844);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B686847:{NFSU2_TR(0x686847);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686848:{NFSU2_TR(0x686848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68684dull));
TAIL_STATIC(0x575620u,575);
}
B68684d:L68684d:{c.instructions+=4;NFSU2_TR(0x68684d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68684f:{NFSU2_TR(0x68684f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686850:{NFSU2_TR(0x686850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686853:{NFSU2_TR(0x686853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686861;}}
}
B686855:L686855:{c.instructions+=2;NFSU2_TR(0x686855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B68685c:{NFSU2_TR(0x68685c);
{goto L686a65;}
}
B686861:L686861:{c.instructions+=7;NFSU2_TR(0x686861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686864:{NFSU2_TR(0x686864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B686867:{NFSU2_TR(0x686867);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B68686a:{NFSU2_TR(0x68686a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68686d:{NFSU2_TR(0x68686d);
__builtin_memmove((R+8),(R+4),4);
}
B68686f:{NFSU2_TR(0x68686f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B686872:{NFSU2_TR(0x686872);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B686874:L686874:{c.instructions+=1;NFSU2_TR(0x686874);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686876;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686874u);}goto L686874;}
}
B686876:L686876:{c.instructions+=3;NFSU2_TR(0x686876);
__builtin_memmove((R+4),(R+8),4);
}
B686878:{NFSU2_TR(0x686878);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B68687b:{NFSU2_TR(0x68687b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68687d:L68687d:{c.instructions+=1;NFSU2_TR(0x68687d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L68687f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68687du);}goto L68687d;}
}
B68687f:L68687f:{c.instructions+=2;NFSU2_TR(0x68687f);
__builtin_memmove((R+28),(R+12),4);
}
B686881:{NFSU2_TR(0x686881);
if(r1(R+518)){{goto L6868fe;}}
}
B686883:L686883:{c.instructions+=3;NFSU2_TR(0x686883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686886:{NFSU2_TR(0x686886);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686889:{NFSU2_TR(0x686889);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B68688d:L68688d:{c.instructions+=8;NFSU2_TR(0x68688d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0xffffull))));
s2(u32(r4(R+12)),r2(U+0));
}
B686892:{NFSU2_TR(0x686892);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B686896:{NFSU2_TR(0x686896);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B68689a:{NFSU2_TR(0x68689a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68689d:{NFSU2_TR(0x68689d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6868a0:{NFSU2_TR(0x6868a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6868a3:{NFSU2_TR(0x6868a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6868a5:{NFSU2_TR(0x6868a5);
if(r1(R+518)){{goto L6868f4;}}
}
B6868a7:L6868a7:{c.instructions+=7;NFSU2_TR(0x6868a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6868aa:{NFSU2_TR(0x6868aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6868ab:{NFSU2_TR(0x6868ab);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6868ad:{NFSU2_TR(0x6868ad);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6868af:{NFSU2_TR(0x6868af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6868b0:{NFSU2_TR(0x6868b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6868b3:{NFSU2_TR(0x6868b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6868b8ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6868b8:L6868b8:{c.instructions+=2;NFSU2_TR(0x6868b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6868ba:{NFSU2_TR(0x6868ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B6868c0:L6868c0:{c.instructions+=5;NFSU2_TR(0x6868c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6868c3:{NFSU2_TR(0x6868c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6868c5:{NFSU2_TR(0x6868c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6868c8:{NFSU2_TR(0x6868c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6868cb:{NFSU2_TR(0x6868cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6868de;}}
}
B6868cd:L6868cd:{c.instructions+=3;NFSU2_TR(0x6868cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6868d0:{NFSU2_TR(0x6868d0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6868d3:{NFSU2_TR(0x6868d3);
if(r1(R+518)){{goto L6868de;}}
}
B6868d5:L6868d5:{c.instructions+=4;NFSU2_TR(0x6868d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6868d6:{NFSU2_TR(0x6868d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6868d9:{NFSU2_TR(0x6868d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6868dc:{NFSU2_TR(0x6868dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6868cdu);}goto L6868cd;}}
}
B6868de:L6868de:{c.instructions+=3;NFSU2_TR(0x6868de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6868e1:{NFSU2_TR(0x6868e1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6868e3:{NFSU2_TR(0x6868e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6868f1;}}
}
B6868e5:L6868e5:{c.instructions+=4;NFSU2_TR(0x6868e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6868e8:{NFSU2_TR(0x6868e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6868eb:{NFSU2_TR(0x6868eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6868ee:{NFSU2_TR(0x6868ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6868f1:L6868f1:{c.instructions+=1;NFSU2_TR(0x6868f1);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B6868f4:L6868f4:{c.instructions+=4;NFSU2_TR(0x6868f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6868f7:{NFSU2_TR(0x6868f7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x8ull))));
}
B6868fa:{NFSU2_TR(0x6868fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6868fc:{NFSU2_TR(0x6868fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68688du);}goto L68688d;}}
}
B6868fe:L6868fe:{c.instructions+=3;NFSU2_TR(0x6868fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686901:{NFSU2_TR(0x686901);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686903:{NFSU2_TR(0x686903);
if(r1(R+518)){{goto L686925;}}
}
B686905:L686905:{c.instructions+=8;NFSU2_TR(0x686905);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686908:{NFSU2_TR(0x686908);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686909:{NFSU2_TR(0x686909);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68690b:{NFSU2_TR(0x68690b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68690e:{NFSU2_TR(0x68690e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68690f:{NFSU2_TR(0x68690f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686912:{NFSU2_TR(0x686912);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686915:{NFSU2_TR(0x686915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68691aull));
TAIL_STATIC(0x6c140eu,6c1);
}
B68691a:L68691a:{c.instructions+=3;NFSU2_TR(0x68691a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68691c:{NFSU2_TR(0x68691c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68691f:{NFSU2_TR(0x68691f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B686925:L686925:{c.instructions+=7;NFSU2_TR(0x686925);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686928:{NFSU2_TR(0x686928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686929:{NFSU2_TR(0x686929);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68692b:{NFSU2_TR(0x68692b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68692e:{NFSU2_TR(0x68692e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686931:{NFSU2_TR(0x686931);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686934:{NFSU2_TR(0x686934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686939ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B686939:L686939:{c.instructions+=3;NFSU2_TR(0x686939);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68693b:{NFSU2_TR(0x68693b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68693e:{NFSU2_TR(0x68693e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B686944:L686944:{c.instructions+=3;NFSU2_TR(0x686944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686947:{NFSU2_TR(0x686947);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686949:{NFSU2_TR(0x686949);
if(r1(R+518)){{goto L686967;}}
}
B68694b:L68694b:{c.instructions+=7;NFSU2_TR(0x68694b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68694e:{NFSU2_TR(0x68694e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68694f:{NFSU2_TR(0x68694f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686951:{NFSU2_TR(0x686951);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686953:{NFSU2_TR(0x686953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686954:{NFSU2_TR(0x686954);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686957:{NFSU2_TR(0x686957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68695cull));
TAIL_STATIC(0x6c140eu,6c1);
}
B68695c:L68695c:{c.instructions+=3;NFSU2_TR(0x68695c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68695e:{NFSU2_TR(0x68695e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686961:{NFSU2_TR(0x686961);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B686967:L686967:{c.instructions+=3;NFSU2_TR(0x686967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68696a:{NFSU2_TR(0x68696a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68696c:{NFSU2_TR(0x68696c);
if(r1(R+518)){{goto L6869a3;}}
}
B68696e:L68696e:{c.instructions+=7;NFSU2_TR(0x68696e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686971:{NFSU2_TR(0x686971);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686972:{NFSU2_TR(0x686972);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686974:{NFSU2_TR(0x686974);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686977:{NFSU2_TR(0x686977);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68697a:{NFSU2_TR(0x68697a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68697b:{NFSU2_TR(0x68697b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686980ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B686980:L686980:{c.instructions+=2;NFSU2_TR(0x686980);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686982:{NFSU2_TR(0x686982);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B686988:L686988:{c.instructions+=6;NFSU2_TR(0x686988);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68698a:{NFSU2_TR(0x68698a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68698c:{NFSU2_TR(0x68698c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68698e:{NFSU2_TR(0x68698e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686993:{NFSU2_TR(0x686993);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686996:{NFSU2_TR(0x686996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68699bull));
TAIL_STATIC(0x6c140eu,6c1);
}
B68699b:L68699b:{c.instructions+=2;NFSU2_TR(0x68699b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68699d:{NFSU2_TR(0x68699d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B6869a3:L6869a3:{c.instructions+=7;NFSU2_TR(0x6869a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6869a6:{NFSU2_TR(0x6869a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869a7:{NFSU2_TR(0x6869a7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869a9:{NFSU2_TR(0x6869a9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869ab:{NFSU2_TR(0x6869ab);
u8 U[4];
w4(U+0,u32(0x7ba230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869b0:{NFSU2_TR(0x6869b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6869b3:{NFSU2_TR(0x6869b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6869b8ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6869b8:L6869b8:{c.instructions+=2;NFSU2_TR(0x6869b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6869ba:{NFSU2_TR(0x6869ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B6869c0:L6869c0:{c.instructions+=2;NFSU2_TR(0x6869c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6869c3:{NFSU2_TR(0x6869c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6869c8ull));
TAIL_STATIC(0x6c1547u,6c1);
}
B6869c8:L6869c8:{c.instructions+=3;NFSU2_TR(0x6869c8);
__builtin_memmove((R+28),(R+0),4);
}
B6869ca:{NFSU2_TR(0x6869ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x8000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6869d0:{NFSU2_TR(0x6869d0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L686a49;}}
}
B6869d2:L6869d2:{c.instructions+=3;NFSU2_TR(0x6869d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869d3:{NFSU2_TR(0x6869d3);
__builtin_memmove((R+4),(R+24),4);
}
B6869d5:{NFSU2_TR(0x6869d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6869daull));
TAIL_STATIC(0x685c0cu,685);
}
B6869da:L6869da:{c.instructions+=3;NFSU2_TR(0x6869da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6869dc:{NFSU2_TR(0x6869dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6869df:{NFSU2_TR(0x6869df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B6869e5:L6869e5:{c.instructions+=9;NFSU2_TR(0x6869e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6869e8:{NFSU2_TR(0x6869e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6869eb:{NFSU2_TR(0x6869eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6869f2:{NFSU2_TR(0x6869f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869f3:{NFSU2_TR(0x6869f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6869f6:{NFSU2_TR(0x6869f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869f7:{NFSU2_TR(0x6869f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6869fb:{NFSU2_TR(0x6869fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6869fc:{NFSU2_TR(0x6869fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a01ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B686a01:L686a01:{c.instructions+=4;NFSU2_TR(0x686a01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B686a03:{NFSU2_TR(0x686a03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B686a06:{NFSU2_TR(0x686a06);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686a09:{NFSU2_TR(0x686a09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L686a24;}}
}
B686a0b:L686a0b:{c.instructions+=2;NFSU2_TR(0x686a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686a0e:{NFSU2_TR(0x686a0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B686a11:L686a11:{c.instructions+=8;NFSU2_TR(0x686a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686a14:{NFSU2_TR(0x686a14);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B686a16:{NFSU2_TR(0x686a16);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B686a19:{NFSU2_TR(0x686a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B686a1b:{NFSU2_TR(0x686a1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B686a1c:{NFSU2_TR(0x686a1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B686a1f:{NFSU2_TR(0x686a1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B686a22:{NFSU2_TR(0x686a22);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686a11u);}goto L686a11;}}
}
B686a24:L686a24:{c.instructions+=6;NFSU2_TR(0x686a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686a27:{NFSU2_TR(0x686a27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a28:{NFSU2_TR(0x686a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B686a2b:{NFSU2_TR(0x686a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a2c:{NFSU2_TR(0x686a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686a2f:{NFSU2_TR(0x686a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a34ull));
TAIL_STATIC(0x6c1553u,6c1);
}
B686a34:L686a34:{c.instructions+=3;NFSU2_TR(0x686a34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686a36:{NFSU2_TR(0x686a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686a39:{NFSU2_TR(0x686a39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686a65;}}
}
B686a3b:L686a3b:{c.instructions+=5;NFSU2_TR(0x686a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B686a3e:{NFSU2_TR(0x686a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686a41:{NFSU2_TR(0x686a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B686a44:{NFSU2_TR(0x686a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686a47:{NFSU2_TR(0x686a47);
{goto L686a61;}
}
B686a49:L686a49:{c.instructions+=6;NFSU2_TR(0x686a49);
u8 U[4];
w4(U+0,u32(0x7ba264ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a4e:{NFSU2_TR(0x686a4e);
u8 U[4];
w4(U+0,u32(0x7eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a53:{NFSU2_TR(0x686a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686a56:{NFSU2_TR(0x686a56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a57:{NFSU2_TR(0x686a57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686a59:{NFSU2_TR(0x686a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a5eull));
TAIL_STATIC(0x643143u,643);
}
B686a5e:L686a5e:{c.instructions+=1;NFSU2_TR(0x686a5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B686a61:L686a61:{c.instructions+=1;NFSU2_TR(0x686a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686a65:L686a65:{c.instructions+=2;NFSU2_TR(0x686a65);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686a68:{NFSU2_TR(0x686a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a6dull));
TAIL_STATIC(0x575630u,575);
}
B686a6d:L686a6d:{c.instructions+=2;NFSU2_TR(0x686a6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686a70:{NFSU2_TR(0x686a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a75ull));
TAIL_STATIC(0x575630u,575);
}
B686a75:L686a75:{c.instructions+=4;NFSU2_TR(0x686a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686a76:{NFSU2_TR(0x686a76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686a77:{NFSU2_TR(0x686a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686a7a:{NFSU2_TR(0x686a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a7full));
TAIL_STATIC(0x6c13d6u,6c1);
}
B686a7f:L686a7f:{c.instructions+=6;NFSU2_TR(0x686a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686a82:{NFSU2_TR(0x686a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686a83:{NFSU2_TR(0x686a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686a84:{NFSU2_TR(0x686a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B686a85:{NFSU2_TR(0x686a85);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B686a86:{NFSU2_TR(0x686a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686a87:L686a87:{c.instructions+=6;NFSU2_TR(0x686a87);
__builtin_memmove((R+28),(R+28),4);
}
B686a89:{NFSU2_TR(0x686a89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a8a:{NFSU2_TR(0x686a8a);
__builtin_memmove((R+20),(R+16),4);
}
B686a8c:{NFSU2_TR(0x686a8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a8d:{NFSU2_TR(0x686a8d);
__builtin_memmove((R+24),(R+4),4);
}
B686a8f:{NFSU2_TR(0x686a8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686a94ull));
TAIL_STATIC(0x687611u,687);
}
B686a94:L686a94:{c.instructions+=2;NFSU2_TR(0x686a94);
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
B686a98:{NFSU2_TR(0x686a98);
if(r1(R+518)){{goto L686aa1;}}
}
B686a9a:L686a9a:{c.instructions+=2;NFSU2_TR(0x686a9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686a9b:{NFSU2_TR(0x686a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686aa0ull));
TAIL_STATIC(0x575630u,575);
}
B686aa0:L686aa0:{c.instructions+=1;NFSU2_TR(0x686aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686aa1:L686aa1:{c.instructions+=4;NFSU2_TR(0x686aa1);
__builtin_memmove((R+0),(R+24),4);
}
B686aa3:{NFSU2_TR(0x686aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686aa4:{NFSU2_TR(0x686aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B686aa5:{NFSU2_TR(0x686aa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686aa8:L686aa8:{c.instructions+=5;NFSU2_TR(0x686aa8);
__builtin_memmove((R+28),(R+28),4);
}
B686aaa:{NFSU2_TR(0x686aaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aab:{NFSU2_TR(0x686aab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aac:{NFSU2_TR(0x686aac);
__builtin_memmove((R+28),(R+4),4);
}
B686aae:{NFSU2_TR(0x686aae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B686ab0:L686ab0:{c.instructions+=3;NFSU2_TR(0x686ab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B686ab3:{NFSU2_TR(0x686ab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686ab5:{NFSU2_TR(0x686ab5);
if(r1(R+518)){{goto L686abe;}}
}
B686ab7:L686ab7:{c.instructions+=2;NFSU2_TR(0x686ab7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ab9:{NFSU2_TR(0x686ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686abeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686a87u);}goto L686a87;}
}
B686abe:L686abe:{c.instructions+=3;NFSU2_TR(0x686abe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B686abf:{NFSU2_TR(0x686abf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B686ac2:{NFSU2_TR(0x686ac2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686ab0u);}goto L686ab0;}}
}
B686ac4:L686ac4:{c.instructions+=3;NFSU2_TR(0x686ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686ac5:{NFSU2_TR(0x686ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686ac6:{NFSU2_TR(0x686ac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686ac7:L686ac7:{c.instructions+=12;NFSU2_TR(0x686ac7);
__builtin_memmove((R+28),(R+28),4);
}
B686ac9:{NFSU2_TR(0x686ac9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aca:{NFSU2_TR(0x686aca);
__builtin_memmove((R+20),(R+16),4);
}
B686acc:{NFSU2_TR(0x686acc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686acd:{NFSU2_TR(0x686acd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ace:{NFSU2_TR(0x686ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B686ad1:{NFSU2_TR(0x686ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ad2:{NFSU2_TR(0x686ad2);
__builtin_memmove((R+24),(R+4),4);
}
B686ad4:{NFSU2_TR(0x686ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686ad7:{NFSU2_TR(0x686ad7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B686ada:{NFSU2_TR(0x686ada);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686adb:{NFSU2_TR(0x686adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686ae0ull));
TAIL_STATIC(0x670ea6u,670);
}
B686ae0:L686ae0:{c.instructions+=2;NFSU2_TR(0x686ae0);
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
B686ae2:{NFSU2_TR(0x686ae2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686b1b;}}
}
B686ae4:L686ae4:{c.instructions+=6;NFSU2_TR(0x686ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686ae7:{NFSU2_TR(0x686ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B686ae9:{NFSU2_TR(0x686ae9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aea:{NFSU2_TR(0x686aea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aeb:{NFSU2_TR(0x686aeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686aec:{NFSU2_TR(0x686aec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686aefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B686aef:L686aef:{c.instructions+=6;NFSU2_TR(0x686aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B686af2:{NFSU2_TR(0x686af2);
__builtin_memmove((R+12),(R+0),4);
}
B686af4:{NFSU2_TR(0x686af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686af7:{NFSU2_TR(0x686af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B686af9:{NFSU2_TR(0x686af9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686afa:{NFSU2_TR(0x686afa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686afdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B686afd:L686afd:{c.instructions+=4;NFSU2_TR(0x686afd);
__builtin_memmove((R+28),(R+0),4);
}
B686aff:{NFSU2_TR(0x686aff);
__builtin_memmove((R+4),(R+12),4);
}
B686b01:{NFSU2_TR(0x686b01);
__builtin_memmove((R+0),(R+4),4);
}
B686b03:{NFSU2_TR(0x686b03);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B686b06:L686b06:{c.instructions+=1;NFSU2_TR(0x686b06);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L686b08;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b06u);}goto L686b06;}
}
B686b08:L686b08:{c.instructions+=3;NFSU2_TR(0x686b08);
__builtin_memmove((R+4),(R+0),4);
}
B686b0a:{NFSU2_TR(0x686b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686b0d:{NFSU2_TR(0x686b0d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B686b10:L686b10:{c.instructions+=1;NFSU2_TR(0x686b10);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L686b12;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b10u);}goto L686b10;}
}
B686b12:L686b12:{c.instructions+=5;NFSU2_TR(0x686b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686b15:{NFSU2_TR(0x686b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686b16:{NFSU2_TR(0x686b16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B686b18:{NFSU2_TR(0x686b18);
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
B686b1a:{NFSU2_TR(0x686b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B686b1b:L686b1b:{c.instructions+=3;NFSU2_TR(0x686b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686b1c:{NFSU2_TR(0x686b1c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B686b1d:{NFSU2_TR(0x686b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686b20:L686b20:{c.instructions+=8;NFSU2_TR(0x686b20);
__builtin_memmove((R+28),(R+28),4);
}
B686b22:{NFSU2_TR(0x686b22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b23:{NFSU2_TR(0x686b23);
__builtin_memmove((R+20),(R+16),4);
}
B686b25:{NFSU2_TR(0x686b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b26:{NFSU2_TR(0x686b26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b27:{NFSU2_TR(0x686b27);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686b2a:{NFSU2_TR(0x686b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686b2d:{NFSU2_TR(0x686b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686b32ull));
TAIL_STATIC(0x684f40u,684);
}
B686b32:L686b32:{c.instructions+=3;NFSU2_TR(0x686b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686b35:{NFSU2_TR(0x686b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686b38:{NFSU2_TR(0x686b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686b3b:L686b3b:{c.instructions+=4;NFSU2_TR(0x686b3b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B686b3d:{NFSU2_TR(0x686b3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B686b3e:{NFSU2_TR(0x686b3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B686b40:{NFSU2_TR(0x686b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b3bu);}goto L686b3b;}}
}
B686b42:L686b42:{c.instructions+=6;NFSU2_TR(0x686b42);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b43:{NFSU2_TR(0x686b43);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B686b45:{NFSU2_TR(0x686b45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b46:{NFSU2_TR(0x686b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686b49:{NFSU2_TR(0x686b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b4a:{NFSU2_TR(0x686b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686b4full));
TAIL_STATIC(0x575620u,575);
}
B686b4f:L686b4f:{c.instructions+=4;NFSU2_TR(0x686b4f);
__builtin_memmove((R+12),(R+0),4);
}
B686b51:{NFSU2_TR(0x686b51);
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
B686b53:{NFSU2_TR(0x686b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686b54:{NFSU2_TR(0x686b54);
if(r1(R+518)){{goto L686b98;}}
}
B686b56:L686b56:{c.instructions+=6;NFSU2_TR(0x686b56);
__builtin_memmove((R+4),(R+24),4);
}
B686b58:{NFSU2_TR(0x686b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B686b5b:{NFSU2_TR(0x686b5b);
__builtin_memmove((R+0),(R+4),4);
}
B686b5d:{NFSU2_TR(0x686b5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b5e:{NFSU2_TR(0x686b5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B686b61:{NFSU2_TR(0x686b61);
__builtin_memmove((R+28),(R+12),4);
}
B686b63:L686b63:{c.instructions+=1;NFSU2_TR(0x686b63);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L686b65;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b63u);}goto L686b63;}
}
B686b65:L686b65:{c.instructions+=3;NFSU2_TR(0x686b65);
__builtin_memmove((R+4),(R+0),4);
}
B686b67:{NFSU2_TR(0x686b67);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B686b6a:{NFSU2_TR(0x686b6a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b6c:L686b6c:{c.instructions+=1;NFSU2_TR(0x686b6c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L686b6e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b6cu);}goto L686b6c;}
}
B686b6e:L686b6e:{c.instructions+=1;NFSU2_TR(0x686b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686b73ull));
TAIL_STATIC(0x575620u,575);
}
B686b73:L686b73:{c.instructions+=4;NFSU2_TR(0x686b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686b75:{NFSU2_TR(0x686b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686b76:{NFSU2_TR(0x686b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686b77:{NFSU2_TR(0x686b77);
if(r1(R+518)){{goto L686b92;}}
}
B686b79:L686b79:{c.instructions+=8;NFSU2_TR(0x686b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686b7c:{NFSU2_TR(0x686b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686b7f:{NFSU2_TR(0x686b7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B686b82:{NFSU2_TR(0x686b82);
__builtin_memmove((R+4),(R+0),4);
}
B686b84:{NFSU2_TR(0x686b84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686b87:{NFSU2_TR(0x686b87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686b8a:{NFSU2_TR(0x686b8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686b8b:{NFSU2_TR(0x686b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686b90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68677bu);}goto L68677b;}
}
B686b90:L686b90:{c.instructions+=1;NFSU2_TR(0x686b90);
{goto L686b94;}
}
B686b92:L686b92:{c.instructions+=1;NFSU2_TR(0x686b92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B686b94:L686b94:{c.instructions+=2;NFSU2_TR(0x686b94);
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
B686b96:{NFSU2_TR(0x686b96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686b9f;}}
}
B686b98:L686b98:{c.instructions+=2;NFSU2_TR(0x686b98);
w4(R+0,u32(0x8007000eull));
}
B686b9d:{NFSU2_TR(0x686b9d);
{goto L686baa;}
}
B686b9f:L686b9f:{c.instructions+=4;NFSU2_TR(0x686b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686ba2:{NFSU2_TR(0x686ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686ba5:{NFSU2_TR(0x686ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B686ba8:{NFSU2_TR(0x686ba8);
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
B686baa:L686baa:{c.instructions+=4;NFSU2_TR(0x686baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686bab:{NFSU2_TR(0x686bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B686bac:{NFSU2_TR(0x686bac);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B686bad:{NFSU2_TR(0x686bad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686bb0:L686bb0:{c.instructions+=11;NFSU2_TR(0x686bb0);
__builtin_memmove((R+28),(R+28),4);
}
B686bb2:{NFSU2_TR(0x686bb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686bb3:{NFSU2_TR(0x686bb3);
__builtin_memmove((R+20),(R+16),4);
}
B686bb5:{NFSU2_TR(0x686bb5);
__builtin_memmove((R+8),(R+4),4);
}
B686bb7:{NFSU2_TR(0x686bb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B686bb9:{NFSU2_TR(0x686bb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686bba:{NFSU2_TR(0x686bba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686bbb:{NFSU2_TR(0x686bbb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686bbd:{NFSU2_TR(0x686bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686bbe:{NFSU2_TR(0x686bbe);
__builtin_memmove((R+4),(R+24),4);
}
B686bc0:{NFSU2_TR(0x686bc0);
__builtin_memmove((R+28),(R+8),4);
}
B686bc2:L686bc2:{c.instructions+=1;NFSU2_TR(0x686bc2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686bc4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686bc2u);}goto L686bc2;}
}
B686bc4:L686bc4:{c.instructions+=2;NFSU2_TR(0x686bc4);
__builtin_memmove((R+4),(R+24),4);
}
B686bc6:{NFSU2_TR(0x686bc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B686bc9:L686bc9:{c.instructions+=1;NFSU2_TR(0x686bc9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686bcb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686bc9u);}goto L686bc9;}
}
B686bcb:L686bcb:{c.instructions+=2;NFSU2_TR(0x686bcb);
__builtin_memmove((R+4),(R+24),4);
}
B686bcd:{NFSU2_TR(0x686bcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686bd0:L686bd0:{c.instructions+=1;NFSU2_TR(0x686bd0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686bd2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686bd0u);}goto L686bd0;}
}
B686bd2:L686bd2:{c.instructions+=2;NFSU2_TR(0x686bd2);
__builtin_memmove((R+4),(R+24),4);
}
B686bd4:{NFSU2_TR(0x686bd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686bd7:L686bd7:{c.instructions+=1;NFSU2_TR(0x686bd7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686bd9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686bd7u);}goto L686bd7;}
}
B686bd9:L686bd9:{c.instructions+=4;NFSU2_TR(0x686bd9);
__builtin_memmove((R+4),(R+24),4);
}
B686bdb:{NFSU2_TR(0x686bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B686bde:{NFSU2_TR(0x686bde);
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
B686be1:{NFSU2_TR(0x686be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686be4:L686be4:{c.instructions+=1;NFSU2_TR(0x686be4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L686be6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686be4u);}goto L686be4;}
}
B686be6:L686be6:{c.instructions+=13;NFSU2_TR(0x686be6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686bec:{NFSU2_TR(0x686bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686bf2:{NFSU2_TR(0x686bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686bf8:{NFSU2_TR(0x686bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686bfe:{NFSU2_TR(0x686bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c04:{NFSU2_TR(0x686c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c0a:{NFSU2_TR(0x686c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c10:{NFSU2_TR(0x686c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c16:{NFSU2_TR(0x686c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c1c:{NFSU2_TR(0x686c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c22:{NFSU2_TR(0x686c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686c28:{NFSU2_TR(0x686c28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686c2a:{NFSU2_TR(0x686c2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686c37;}}
}
B686c2c:L686c2c:{c.instructions+=2;NFSU2_TR(0x686c2c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B686c2f:{NFSU2_TR(0x686c2f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L686c37;}}
}
B686c31:L686c31:{c.instructions+=1;NFSU2_TR(0x686c31);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B686c37:L686c37:{c.instructions+=5;NFSU2_TR(0x686c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686c38:{NFSU2_TR(0x686c38);
__builtin_memmove((R+0),(R+8),4);
}
B686c3a:{NFSU2_TR(0x686c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686c3b:{NFSU2_TR(0x686c3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B686c3c:{NFSU2_TR(0x686c3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686c3f:L686c3f:{c.instructions+=5;NFSU2_TR(0x686c3f);
__builtin_memmove((R+28),(R+28),4);
}
B686c41:{NFSU2_TR(0x686c41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c42:{NFSU2_TR(0x686c42);
__builtin_memmove((R+24),(R+4),4);
}
B686c44:{NFSU2_TR(0x686c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686c47:{NFSU2_TR(0x686c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686c4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686aa8u);}goto L686aa8;}
}
B686c4c:L686c4c:{c.instructions+=2;NFSU2_TR(0x686c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686c4f:{NFSU2_TR(0x686c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686c54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686aa8u);}goto L686aa8;}
}
B686c54:L686c54:{c.instructions+=2;NFSU2_TR(0x686c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686c57:{NFSU2_TR(0x686c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686c5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686aa8u);}goto L686aa8;}
}
B686c5c:L686c5c:{c.instructions+=2;NFSU2_TR(0x686c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B686c5f:{NFSU2_TR(0x686c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686c64ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686aa8u);}goto L686aa8;}
}
B686c64:L686c64:{c.instructions+=3;NFSU2_TR(0x686c64);
__builtin_memmove((R+4),(R+24),4);
}
B686c66:{NFSU2_TR(0x686c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686c67:{NFSU2_TR(0x686c67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686aa8u);}goto L686aa8;}
}
B686c6c:L686c6c:{c.instructions+=9;NFSU2_TR(0x686c6c);
__builtin_memmove((R+28),(R+28),4);
}
B686c6e:{NFSU2_TR(0x686c6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c6f:{NFSU2_TR(0x686c6f);
__builtin_memmove((R+20),(R+16),4);
}
B686c71:{NFSU2_TR(0x686c71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c72:{NFSU2_TR(0x686c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B686c75:{NFSU2_TR(0x686c75);
__builtin_memmove((R+0),(R+12),4);
}
B686c77:{NFSU2_TR(0x686c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c78:{NFSU2_TR(0x686c78);
__builtin_memmove((R+24),(R+4),4);
}
B686c7a:{NFSU2_TR(0x686c7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B686c7d:L686c7d:{c.instructions+=4;NFSU2_TR(0x686c7d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B686c7f:{NFSU2_TR(0x686c7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B686c80:{NFSU2_TR(0x686c80);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B686c82:{NFSU2_TR(0x686c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686c7du);}goto L686c7d;}}
}
B686c84:L686c84:{c.instructions+=3;NFSU2_TR(0x686c84);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B686c86:{NFSU2_TR(0x686c86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686c89:{NFSU2_TR(0x686c89);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L686cae;}}
}
B686c8b:L686c8b:{c.instructions+=6;NFSU2_TR(0x686c8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c8c:{NFSU2_TR(0x686c8c);
u8 U[4];
w4(U+0,u32(0x7ba518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c91:{NFSU2_TR(0x686c91);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686c96:{NFSU2_TR(0x686c96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686c99:{NFSU2_TR(0x686c99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686c9c:{NFSU2_TR(0x686c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686ca1ull));
TAIL_STATIC(0x64307cu,643);
}
B686ca1:L686ca1:{c.instructions+=3;NFSU2_TR(0x686ca1);
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
B686ca4:{NFSU2_TR(0x686ca4);
w4(R+0,u32(0x80004005ull));
}
B686ca9:{NFSU2_TR(0x686ca9);
{goto L686fd8;}
}
B686cae:L686cae:{c.instructions+=12;NFSU2_TR(0x686cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686cb1:{NFSU2_TR(0x686cb1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B686cb3:{NFSU2_TR(0x686cb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686cb4:{NFSU2_TR(0x686cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B686cb7:{NFSU2_TR(0x686cb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B686cb9:{NFSU2_TR(0x686cb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686cbb:{NFSU2_TR(0x686cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686cbe:{NFSU2_TR(0x686cbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686cc0:{NFSU2_TR(0x686cc0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B686cc3:{NFSU2_TR(0x686cc3);
w4(R+4,u32(0x7ba200ull));
}
B686cc8:{NFSU2_TR(0x686cc8);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686ccb:{NFSU2_TR(0x686ccb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686db1;}}
}
B686cd1:L686cd1:{c.instructions+=3;NFSU2_TR(0x686cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686cd7:{NFSU2_TR(0x686cd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B686cda:{NFSU2_TR(0x686cda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686d49;}}
}
B686cdc:L686cdc:{c.instructions+=2;NFSU2_TR(0x686cdc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B686cdf:{NFSU2_TR(0x686cdf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L686d49;}}
}
B686ce1:L686ce1:{c.instructions+=7;NFSU2_TR(0x686ce1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686ce4:{NFSU2_TR(0x686ce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ce5:{NFSU2_TR(0x686ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((R+0),(U+0),4);
}
B686ce8:{NFSU2_TR(0x686ce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ce9:{NFSU2_TR(0x686ce9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686cec:{NFSU2_TR(0x686cec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ced:{NFSU2_TR(0x686ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686cf2ull));
TAIL_STATIC(0x684cf9u,684);
}
B686cf2:L686cf2:{c.instructions+=2;NFSU2_TR(0x686cf2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686cf4:{NFSU2_TR(0x686cf4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L686d19;}}
}
B686cf6:L686cf6:{c.instructions+=2;NFSU2_TR(0x686cf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686cf7:{NFSU2_TR(0x686cf7);
u8 U[4];
w4(U+0,u32(0x7ba4f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686cfc:L686cfc:{c.instructions+=4;NFSU2_TR(0x686cfc);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d01:{NFSU2_TR(0x686d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686d04:{NFSU2_TR(0x686d04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686d07:{NFSU2_TR(0x686d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686d0cull));
TAIL_STATIC(0x64307cu,643);
}
B686d0c:L686d0c:{c.instructions+=1;NFSU2_TR(0x686d0c);
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
B686d0f:L686d0f:{c.instructions+=2;NFSU2_TR(0x686d0f);
w4(R+0,u32(0x80004005ull));
}
B686d14:{NFSU2_TR(0x686d14);
{goto L686fd7;}
}
B686d19:L686d19:{c.instructions+=2;NFSU2_TR(0x686d19);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B686d1d:{NFSU2_TR(0x686d1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686d27;}}
}
B686d1f:L686d1f:{c.instructions+=2;NFSU2_TR(0x686d1f);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686d25:{NFSU2_TR(0x686d25);
{goto L686d33;}
}
B686d27:L686d27:{c.instructions+=2;NFSU2_TR(0x686d27);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B686d2b:{NFSU2_TR(0x686d2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686d41;}}
}
B686d2d:L686d2d:{c.instructions+=1;NFSU2_TR(0x686d2d);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686d33:L686d33:{c.instructions+=4;NFSU2_TR(0x686d33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B686d37:{NFSU2_TR(0x686d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686d3a:{NFSU2_TR(0x686d3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686d3c:{NFSU2_TR(0x686d3c);
{goto L686fd5;}
}
B686d41:L686d41:{c.instructions+=3;NFSU2_TR(0x686d41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d42:{NFSU2_TR(0x686d42);
u8 U[4];
w4(U+0,u32(0x7ba4bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d47:{NFSU2_TR(0x686d47);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686d49:L686d49:{c.instructions+=5;NFSU2_TR(0x686d49);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686d4f:{NFSU2_TR(0x686d4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B686d52:{NFSU2_TR(0x686d52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d53:{NFSU2_TR(0x686d53);
__builtin_memmove((R+4),(R+28),4);
}
B686d55:{NFSU2_TR(0x686d55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686d5aull));
TAIL_STATIC(0x684f81u,684);
}
B686d5a:L686d5a:{c.instructions+=2;NFSU2_TR(0x686d5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686d5c:{NFSU2_TR(0x686d5c);
if(r1(R+518)){{goto L686d68;}}
}
B686d5e:L686d5e:{c.instructions+=4;NFSU2_TR(0x686d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686d61:{NFSU2_TR(0x686d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686d64:{NFSU2_TR(0x686d64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686d66:{NFSU2_TR(0x686d66);
{goto L686d9c;}
}
B686d68:L686d68:{c.instructions+=7;NFSU2_TR(0x686d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686d6b:{NFSU2_TR(0x686d6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d6c:{NFSU2_TR(0x686d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1full))));
__builtin_memmove((R+0),(U+0),4);
}
B686d6f:{NFSU2_TR(0x686d6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d70:{NFSU2_TR(0x686d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686d73:{NFSU2_TR(0x686d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d74:{NFSU2_TR(0x686d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686d79ull));
TAIL_STATIC(0x684cf9u,684);
}
B686d79:L686d79:{c.instructions+=2;NFSU2_TR(0x686d79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686d7b:{NFSU2_TR(0x686d7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cf6u);}goto L686cf6;}}
}
B686d81:L686d81:{c.instructions+=9;NFSU2_TR(0x686d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686d84:{NFSU2_TR(0x686d84);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9cull))));
}
B686d8a:{NFSU2_TR(0x686d8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B686d8c:{NFSU2_TR(0x686d8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d8e:{NFSU2_TR(0x686d8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686d90:{NFSU2_TR(0x686d90);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686d92:{NFSU2_TR(0x686d92);
__builtin_memmove((R+4),(R+28),4);
}
B686d94:{NFSU2_TR(0x686d94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686d95:{NFSU2_TR(0x686d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686d9aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b20u);}goto L686b20;}
}
B686d9a:L686d9a:{c.instructions+=1;NFSU2_TR(0x686d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B686d9c:L686d9c:{c.instructions+=2;NFSU2_TR(0x686d9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686da0:{NFSU2_TR(0x686da0);
if(r1(R+518)){{goto L686fd5;}}
}
B686da6:L686da6:{c.instructions+=3;NFSU2_TR(0x686da6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686da7:{NFSU2_TR(0x686da7);
u8 U[4];
w4(U+0,u32(0x7ba47cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686dac:{NFSU2_TR(0x686dac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686db1:L686db1:{c.instructions+=4;NFSU2_TR(0x686db1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B686db4:{NFSU2_TR(0x686db4);
w4(R+4,u32(0x7ba1fcull));
}
B686db9:{NFSU2_TR(0x686db9);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686dbc:{NFSU2_TR(0x686dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686e06;}}
}
B686dbe:L686dbe:{c.instructions+=5;NFSU2_TR(0x686dbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B686dc0:{NFSU2_TR(0x686dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686dc3:{NFSU2_TR(0x686dc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686dc4:{NFSU2_TR(0x686dc4);
__builtin_memmove((R+4),(R+28),4);
}
B686dc6:{NFSU2_TR(0x686dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686dcbull));
TAIL_STATIC(0x684f81u,684);
}
B686dcb:L686dcb:{c.instructions+=3;NFSU2_TR(0x686dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686dcd:{NFSU2_TR(0x686dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686dd0:{NFSU2_TR(0x686dd0);
if(r1(R+518)){{goto L686dd9;}}
}
B686dd2:L686dd2:{c.instructions+=3;NFSU2_TR(0x686dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686dd5:{NFSU2_TR(0x686dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686dd7:{NFSU2_TR(0x686dd7);
{goto L686df1;}
}
B686dd9:L686dd9:{c.instructions+=8;NFSU2_TR(0x686dd9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
}
B686ddf:{NFSU2_TR(0x686ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B686de1:{NFSU2_TR(0x686de1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686de3:{NFSU2_TR(0x686de3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686de5:{NFSU2_TR(0x686de5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686de7:{NFSU2_TR(0x686de7);
__builtin_memmove((R+4),(R+28),4);
}
B686de9:{NFSU2_TR(0x686de9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686dea:{NFSU2_TR(0x686dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686defull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b20u);}goto L686b20;}
}
B686def:L686def:{c.instructions+=1;NFSU2_TR(0x686def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B686df1:L686df1:{c.instructions+=2;NFSU2_TR(0x686df1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686df5:{NFSU2_TR(0x686df5);
if(r1(R+518)){{goto L686fd5;}}
}
B686dfb:L686dfb:{c.instructions+=3;NFSU2_TR(0x686dfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686dfc:{NFSU2_TR(0x686dfc);
u8 U[4];
w4(U+0,u32(0x7ba43cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e01:{NFSU2_TR(0x686e01);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686e06:L686e06:{c.instructions+=5;NFSU2_TR(0x686e06);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B686e09:{NFSU2_TR(0x686e09);
w4(R+4,u32(0x7ba438ull));
}
B686e0e:{NFSU2_TR(0x686e0e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686e11:{NFSU2_TR(0x686e11);
w4(R+0,u32(0x7ba434ull));
}
B686e16:{NFSU2_TR(0x686e16);
if(r1(R+518)){{goto L686ed3;}}
}
B686e1c:L686e1c:{c.instructions+=3;NFSU2_TR(0x686e1c);
__builtin_memmove((R+4),(R+0),4);
}
B686e1e:{NFSU2_TR(0x686e1e);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686e21:{NFSU2_TR(0x686e21);
if(r1(R+518)){{goto L686ed3;}}
}
B686e27:L686e27:{c.instructions+=3;NFSU2_TR(0x686e27);
w4(R+4,u32(0x7ba430ull));
}
B686e2c:{NFSU2_TR(0x686e2c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686e2f:{NFSU2_TR(0x686e2f);
if(r1(R+518)){{goto L686ed3;}}
}
B686e35:L686e35:{c.instructions+=3;NFSU2_TR(0x686e35);
w4(R+4,u32(0x7ba42cull));
}
B686e3a:{NFSU2_TR(0x686e3a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686e3d:{NFSU2_TR(0x686e3d);
if(r1(R+518)){{goto L686ed3;}}
}
B686e43:L686e43:{c.instructions+=2;NFSU2_TR(0x686e43);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686e4a:{NFSU2_TR(0x686e4a);
if(r1(R+518)){{goto L686ec8;}}
}
B686e4c:L686e4c:{c.instructions+=4;NFSU2_TR(0x686e4c);
w4(R+0,u32(0x7ba1f8ull));
}
B686e51:{NFSU2_TR(0x686e51);
__builtin_memmove((R+4),(R+8),2);
}
B686e54:{NFSU2_TR(0x686e54);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686e57:{NFSU2_TR(0x686e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686ec8;}}
}
B686e59:L686e59:{c.instructions+=5;NFSU2_TR(0x686e59);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686e5f:{NFSU2_TR(0x686e5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686e62:{NFSU2_TR(0x686e62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e63:{NFSU2_TR(0x686e63);
__builtin_memmove((R+4),(R+28),4);
}
B686e65:{NFSU2_TR(0x686e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686e6aull));
TAIL_STATIC(0x684f81u,684);
}
B686e6a:L686e6a:{c.instructions+=2;NFSU2_TR(0x686e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686e6c:{NFSU2_TR(0x686e6c);
if(r1(R+518)){{goto L686e78;}}
}
B686e6e:L686e6e:{c.instructions+=4;NFSU2_TR(0x686e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686e71:{NFSU2_TR(0x686e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686e74:{NFSU2_TR(0x686e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686e76:{NFSU2_TR(0x686e76);
{goto L686eb3;}
}
B686e78:L686e78:{c.instructions+=7;NFSU2_TR(0x686e78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686e7b:{NFSU2_TR(0x686e7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e7c:{NFSU2_TR(0x686e7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1full))));
__builtin_memmove((R+0),(U+0),4);
}
B686e7f:{NFSU2_TR(0x686e7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e80:{NFSU2_TR(0x686e80);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686e83:{NFSU2_TR(0x686e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e84:{NFSU2_TR(0x686e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686e89ull));
TAIL_STATIC(0x684cf9u,684);
}
B686e89:L686e89:{c.instructions+=2;NFSU2_TR(0x686e89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B686e8b:{NFSU2_TR(0x686e8b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L686e98;}}
}
B686e8d:L686e8d:{c.instructions+=3;NFSU2_TR(0x686e8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e8e:{NFSU2_TR(0x686e8e);
u8 U[4];
w4(U+0,u32(0x7ba404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686e93:{NFSU2_TR(0x686e93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686e98:L686e98:{c.instructions+=9;NFSU2_TR(0x686e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686e9b:{NFSU2_TR(0x686e9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
}
B686ea1:{NFSU2_TR(0x686ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B686ea3:{NFSU2_TR(0x686ea3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ea5:{NFSU2_TR(0x686ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686ea7:{NFSU2_TR(0x686ea7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686ea9:{NFSU2_TR(0x686ea9);
__builtin_memmove((R+4),(R+28),4);
}
B686eab:{NFSU2_TR(0x686eab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686eac:{NFSU2_TR(0x686eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686eb1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b20u);}goto L686b20;}
}
B686eb1:L686eb1:{c.instructions+=1;NFSU2_TR(0x686eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B686eb3:L686eb3:{c.instructions+=2;NFSU2_TR(0x686eb3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686eb7:{NFSU2_TR(0x686eb7);
if(r1(R+518)){{goto L686fd5;}}
}
B686ebd:L686ebd:{c.instructions+=3;NFSU2_TR(0x686ebd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ebe:{NFSU2_TR(0x686ebe);
u8 U[4];
w4(U+0,u32(0x7ba3c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ec3:{NFSU2_TR(0x686ec3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686ec8:L686ec8:{c.instructions+=3;NFSU2_TR(0x686ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ec9:{NFSU2_TR(0x686ec9);
u8 U[4];
w4(U+0,u32(0x7ba338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ece:{NFSU2_TR(0x686ece);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686cfcu);}goto L686cfc;}
}
B686ed3:L686ed3:{c.instructions+=3;NFSU2_TR(0x686ed3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686ed6:{NFSU2_TR(0x686ed6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686ed9:{NFSU2_TR(0x686ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686ee5;}}
}
B686edb:L686edb:{c.instructions+=3;NFSU2_TR(0x686edb);
u8 U[4];
w4(U+0,u32(0xeull));
s4(u32(r4(R+28)),r4(U+0));
}
B686ee1:{NFSU2_TR(0x686ee1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B686ee3:{NFSU2_TR(0x686ee3);
{goto L686f1d;}
}
B686ee5:L686ee5:{c.instructions+=4;NFSU2_TR(0x686ee5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686ee8:{NFSU2_TR(0x686ee8);
w4(R+0,u32(0x7ba430ull));
}
B686eed:{NFSU2_TR(0x686eed);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686ef0:{NFSU2_TR(0x686ef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686efd;}}
}
B686ef2:L686ef2:{c.instructions+=4;NFSU2_TR(0x686ef2);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686ef8:{NFSU2_TR(0x686ef8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B686efa:{NFSU2_TR(0x686efa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B686efb:{NFSU2_TR(0x686efb);
{goto L686f1d;}
}
B686efd:L686efd:{c.instructions+=4;NFSU2_TR(0x686efd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+4),(U+0),2);
}
B686f00:{NFSU2_TR(0x686f00);
w4(R+0,u32(0x7ba42cull));
}
B686f05:{NFSU2_TR(0x686f05);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B686f08:{NFSU2_TR(0x686f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686f14;}}
}
B686f0a:L686f0a:{c.instructions+=3;NFSU2_TR(0x686f0a);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+28)),r4(U+0));
}
B686f10:{NFSU2_TR(0x686f10);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f12:{NFSU2_TR(0x686f12);
{goto L686f1c;}
}
B686f14:L686f14:{c.instructions+=2;NFSU2_TR(0x686f14);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+28)),r4(U+0));
}
B686f1a:{NFSU2_TR(0x686f1a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f1c:L686f1c:{c.instructions+=1;NFSU2_TR(0x686f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686f1d:L686f1d:{c.instructions+=3;NFSU2_TR(0x686f1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f1e:{NFSU2_TR(0x686f1e);
__builtin_memmove((R+4),(R+24),4);
}
B686f20:{NFSU2_TR(0x686f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686f25ull));
TAIL_STATIC(0x684f81u,684);
}
B686f25:L686f25:{c.instructions+=2;NFSU2_TR(0x686f25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686f27:{NFSU2_TR(0x686f27);
if(r1(R+518)){{goto L686f39;}}
}
B686f29:L686f29:{c.instructions+=6;NFSU2_TR(0x686f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B686f2c:{NFSU2_TR(0x686f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686f2f:{NFSU2_TR(0x686f2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686f31:{NFSU2_TR(0x686f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686f34:{NFSU2_TR(0x686f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B686f37:{NFSU2_TR(0x686f37);
{goto L686fa2;}
}
B686f39:L686f39:{c.instructions+=6;NFSU2_TR(0x686f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686f3c:{NFSU2_TR(0x686f3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686f3f:{NFSU2_TR(0x686f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f40:{NFSU2_TR(0x686f40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f41:{NFSU2_TR(0x686f41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686f44:{NFSU2_TR(0x686f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686f49ull));
TAIL_STATIC(0x688782u,688);
}
B686f49:L686f49:{c.instructions+=2;NFSU2_TR(0x686f49);
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
B686f4b:{NFSU2_TR(0x686f4b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L686fd7;}}
}
B686f51:L686f51:{c.instructions+=2;NFSU2_TR(0x686f51);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686f55:{NFSU2_TR(0x686f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L686f79;}}
}
B686f57:L686f57:{c.instructions+=8;NFSU2_TR(0x686f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B686f5a:{NFSU2_TR(0x686f5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f5b:{NFSU2_TR(0x686f5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f5c:{NFSU2_TR(0x686f5c);
u8 U[4];
w4(U+0,u32(0x7ba2f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f61:{NFSU2_TR(0x686f61);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f66:{NFSU2_TR(0x686f66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686f69:{NFSU2_TR(0x686f69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686f6c:{NFSU2_TR(0x686f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686f71ull));
TAIL_STATIC(0x64307cu,643);
}
B686f71:L686f71:{c.instructions+=2;NFSU2_TR(0x686f71);
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
B686f74:{NFSU2_TR(0x686f74);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686d0fu);}goto L686d0f;}
}
B686f79:L686f79:{c.instructions+=9;NFSU2_TR(0x686f79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686f7c:{NFSU2_TR(0x686f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686f7f:{NFSU2_TR(0x686f7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B686f86:{NFSU2_TR(0x686f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B686f88:{NFSU2_TR(0x686f88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B686f8a:{NFSU2_TR(0x686f8a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B686f8c:{NFSU2_TR(0x686f8c);
__builtin_memmove((R+4),(R+24),4);
}
B686f8e:{NFSU2_TR(0x686f8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686f8f:{NFSU2_TR(0x686f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686f94ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686b20u);}goto L686b20;}
}
B686f94:L686f94:{c.instructions+=4;NFSU2_TR(0x686f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686f97:{NFSU2_TR(0x686f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B686f99:{NFSU2_TR(0x686f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B686f9f:{NFSU2_TR(0x686f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B686fa2:L686fa2:{c.instructions+=3;NFSU2_TR(0x686fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686fa5:{NFSU2_TR(0x686fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B686fa7:{NFSU2_TR(0x686fa7);
if(r1(R+518)){{goto L686fd5;}}
}
B686fa9:L686fa9:{c.instructions+=3;NFSU2_TR(0x686fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B686fac:{NFSU2_TR(0x686fac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B686faf:{NFSU2_TR(0x686faf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L686fd3;}}
}
B686fb1:L686fb1:{c.instructions+=8;NFSU2_TR(0x686fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fb2:{NFSU2_TR(0x686fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686fb5:{NFSU2_TR(0x686fb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fb6:{NFSU2_TR(0x686fb6);
u8 U[4];
w4(U+0,u32(0x7ba2a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fbb:{NFSU2_TR(0x686fbb);
u8 U[4];
w4(U+0,u32(0x7d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fc0:{NFSU2_TR(0x686fc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686fc3:{NFSU2_TR(0x686fc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B686fc6:{NFSU2_TR(0x686fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686fcbull));
TAIL_STATIC(0x64307cu,643);
}
B686fcb:L686fcb:{c.instructions+=2;NFSU2_TR(0x686fcb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B686fce:{NFSU2_TR(0x686fce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686d0fu);}goto L686d0f;}
}
B686fd3:L686fd3:{c.instructions+=1;NFSU2_TR(0x686fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+4)),r4(U+0));
}
B686fd5:L686fd5:{c.instructions+=1;NFSU2_TR(0x686fd5);
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
B686fd7:L686fd7:{c.instructions+=1;NFSU2_TR(0x686fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B686fd8:L686fd8:{c.instructions+=4;NFSU2_TR(0x686fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686fd9:{NFSU2_TR(0x686fd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B686fda:{NFSU2_TR(0x686fda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B686fdb:{NFSU2_TR(0x686fdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686fde:L686fde:{c.instructions+=6;NFSU2_TR(0x686fde);
__builtin_memmove((R+28),(R+28),4);
}
B686fe0:{NFSU2_TR(0x686fe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fe1:{NFSU2_TR(0x686fe1);
__builtin_memmove((R+20),(R+16),4);
}
B686fe3:{NFSU2_TR(0x686fe3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686fe4:{NFSU2_TR(0x686fe4);
__builtin_memmove((R+24),(R+4),4);
}
B686fe6:{NFSU2_TR(0x686fe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686febull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x686c3fu);}goto L686c3f;}
}
B686feb:L686feb:{c.instructions+=2;NFSU2_TR(0x686feb);
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
B686fef:{NFSU2_TR(0x686fef);
if(r1(R+518)){{goto L686ff8;}}
}
B686ff1:L686ff1:{c.instructions+=2;NFSU2_TR(0x686ff1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B686ff2:{NFSU2_TR(0x686ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x686ff7ull));
TAIL_STATIC(0x575630u,575);
}
B686ff7:L686ff7:{c.instructions+=1;NFSU2_TR(0x686ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B686ff8:L686ff8:{c.instructions+=4;NFSU2_TR(0x686ff8);
__builtin_memmove((R+0),(R+24),4);
}
B686ffa:{NFSU2_TR(0x686ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B686ffb:{NFSU2_TR(0x686ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B686ffc:{NFSU2_TR(0x686ffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B686fff:L686fff:{c.instructions+=1;NFSU2_TR(0x686fff);
__builtin_memmove((R+28),(R+28),4);
TAIL_STATIC(0x687001u,687);
}
XIT:NFSU2_TR_EXIT(0x686,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
