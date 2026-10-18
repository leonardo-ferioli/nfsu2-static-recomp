#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_518(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54d(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x551,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x551,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_551(u8* __restrict R,Cpu& c);
u32 page_551(Cpu& c){return body_551(c.regs.data(),c);}
__attribute__((noinline)) u32 body_551(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x551002:goto L551002;
case 0x551004:c.instructions+=3;goto B551004;
case 0x551005:c.instructions+=2;goto B551005;
case 0x551006:c.instructions+=1;goto B551006;
case 0x551008:goto L551008;
case 0x55100a:c.instructions+=1;goto B55100a;
case 0x55100f:goto L55100f;
case 0x551013:c.instructions+=2;goto B551013;
case 0x551016:c.instructions+=1;goto B551016;
case 0x551018:goto L551018;
case 0x55101b:c.instructions+=5;goto B55101b;
case 0x55101d:c.instructions+=4;goto B55101d;
case 0x551022:c.instructions+=3;goto B551022;
case 0x551023:c.instructions+=2;goto B551023;
case 0x551025:c.instructions+=1;goto B551025;
case 0x55102a:goto L55102a;
case 0x551031:c.instructions+=2;goto B551031;
case 0x551032:c.instructions+=1;goto B551032;
case 0x551037:goto L551037;
case 0x55103b:c.instructions+=5;goto B55103b;
case 0x551042:c.instructions+=4;goto B551042;
case 0x551044:c.instructions+=3;goto B551044;
case 0x551049:c.instructions+=2;goto B551049;
case 0x55104a:c.instructions+=1;goto B55104a;
case 0x55104f:goto L55104f;
case 0x551052:goto L551052;
case 0x551054:c.instructions+=2;goto B551054;
case 0x551056:c.instructions+=1;goto B551056;
case 0x55105b:goto L55105b;
case 0x551061:c.instructions+=1;goto B551061;
case 0x551066:goto L551066;
case 0x551067:c.instructions+=3;goto B551067;
case 0x551068:c.instructions+=2;goto B551068;
case 0x55106b:c.instructions+=1;goto B55106b;
case 0x551070:goto L551070;
case 0x551071:c.instructions+=7;goto B551071;
case 0x551073:c.instructions+=6;goto B551073;
case 0x551074:c.instructions+=5;goto B551074;
case 0x551076:c.instructions+=4;goto B551076;
case 0x55107c:c.instructions+=3;goto B55107c;
case 0x55107e:c.instructions+=2;goto B55107e;
case 0x55107f:c.instructions+=1;goto B55107f;
case 0x551081:goto L551081;
case 0x551086:c.instructions+=1;goto B551086;
case 0x551088:goto L551088;
case 0x55108d:c.instructions+=1;goto B55108d;
case 0x551093:goto L551093;
case 0x551099:c.instructions+=2;goto B551099;
case 0x55109b:c.instructions+=1;goto B55109b;
case 0x55109d:goto L55109d;
case 0x5510a2:c.instructions+=1;goto B5510a2;
case 0x5510a4:goto L5510a4;
case 0x5510aa:c.instructions+=1;goto B5510aa;
case 0x5510b0:goto L5510b0;
case 0x5510b6:c.instructions+=20;goto B5510b6;
case 0x5510b9:c.instructions+=19;goto B5510b9;
case 0x5510bf:c.instructions+=18;goto B5510bf;
case 0x5510c5:c.instructions+=17;goto B5510c5;
case 0x5510cb:c.instructions+=16;goto B5510cb;
case 0x5510d1:c.instructions+=15;goto B5510d1;
case 0x5510d3:c.instructions+=14;goto B5510d3;
case 0x5510d5:c.instructions+=13;goto B5510d5;
case 0x5510d7:c.instructions+=12;goto B5510d7;
case 0x5510dd:c.instructions+=11;goto B5510dd;
case 0x5510e3:c.instructions+=10;goto B5510e3;
case 0x5510e9:c.instructions+=9;goto B5510e9;
case 0x5510eb:c.instructions+=8;goto B5510eb;
case 0x5510f1:c.instructions+=7;goto B5510f1;
case 0x5510f7:c.instructions+=6;goto B5510f7;
case 0x5510f9:c.instructions+=5;goto B5510f9;
case 0x5510fb:c.instructions+=4;goto B5510fb;
case 0x5510fd:c.instructions+=3;goto B5510fd;
case 0x551103:c.instructions+=2;goto B551103;
case 0x551106:c.instructions+=1;goto B551106;
case 0x55110c:goto L55110c;
case 0x551112:c.instructions+=2;goto B551112;
case 0x551114:c.instructions+=1;goto B551114;
case 0x551116:goto L551116;
case 0x55111b:c.instructions+=1;goto B55111b;
case 0x55111d:goto L55111d;
case 0x551120:c.instructions+=3;goto B551120;
case 0x551126:c.instructions+=2;goto B551126;
case 0x55112c:c.instructions+=1;goto B55112c;
case 0x551131:goto L551131;
case 0x551137:goto L551137;
case 0x55113a:c.instructions+=3;goto B55113a;
case 0x551140:c.instructions+=2;goto B551140;
case 0x551146:c.instructions+=1;goto B551146;
case 0x55114b:goto L55114b;
case 0x551151:c.instructions+=9;goto B551151;
case 0x551153:c.instructions+=8;goto B551153;
case 0x551155:c.instructions+=7;goto B551155;
case 0x55115b:c.instructions+=6;goto B55115b;
case 0x551161:c.instructions+=5;goto B551161;
case 0x551164:c.instructions+=4;goto B551164;
case 0x551167:c.instructions+=3;goto B551167;
case 0x551168:c.instructions+=2;goto B551168;
case 0x55116a:c.instructions+=1;goto B55116a;
case 0x55116f:goto L55116f;
case 0x551176:c.instructions+=1;goto B551176;
case 0x551178:goto L551178;
case 0x55117a:c.instructions+=1;goto B55117a;
case 0x55117f:goto L55117f;
case 0x551182:c.instructions+=2;goto B551182;
case 0x551184:c.instructions+=1;goto B551184;
case 0x551186:goto L551186;
case 0x551189:c.instructions+=2;goto B551189;
case 0x55118b:c.instructions+=1;goto B55118b;
case 0x55118d:goto L55118d;
case 0x551190:c.instructions+=2;goto B551190;
case 0x551192:c.instructions+=1;goto B551192;
case 0x551194:goto L551194;
case 0x551197:c.instructions+=2;goto B551197;
case 0x551199:c.instructions+=1;goto B551199;
case 0x55119b:goto L55119b;
case 0x55119e:c.instructions+=3;goto B55119e;
case 0x5511a2:c.instructions+=2;goto B5511a2;
case 0x5511a4:c.instructions+=1;goto B5511a4;
case 0x5511a6:goto L5511a6;
case 0x5511ab:c.instructions+=3;goto B5511ab;
case 0x5511ac:c.instructions+=2;goto B5511ac;
case 0x5511af:c.instructions+=1;goto B5511af;
case 0x5511b4:goto L5511b4;
case 0x5511b5:c.instructions+=5;goto B5511b5;
case 0x5511b7:c.instructions+=4;goto B5511b7;
case 0x5511ba:c.instructions+=3;goto B5511ba;
case 0x5511bb:c.instructions+=2;goto B5511bb;
case 0x5511bd:c.instructions+=1;goto B5511bd;
case 0x5511c2:goto L5511c2;
case 0x5511c6:c.instructions+=2;goto B5511c6;
case 0x5511cb:c.instructions+=1;goto B5511cb;
case 0x5511cf:goto L5511cf;
case 0x5511d3:goto L5511d3;
case 0x5511d4:c.instructions+=3;goto B5511d4;
case 0x5511d5:c.instructions+=2;goto B5511d5;
case 0x5511d6:c.instructions+=1;goto B5511d6;
case 0x5511e0:goto L5511e0;
case 0x5511e2:c.instructions+=13;goto B5511e2;
case 0x5511e7:c.instructions+=12;goto B5511e7;
case 0x5511ed:c.instructions+=11;goto B5511ed;
case 0x5511ee:c.instructions+=10;goto B5511ee;
case 0x5511f5:c.instructions+=9;goto B5511f5;
case 0x5511f6:c.instructions+=8;goto B5511f6;
case 0x5511f7:c.instructions+=7;goto B5511f7;
case 0x5511f9:c.instructions+=6;goto B5511f9;
case 0x5511fd:c.instructions+=5;goto B5511fd;
case 0x551203:c.instructions+=4;goto B551203;
case 0x551206:c.instructions+=3;goto B551206;
case 0x551209:c.instructions+=2;goto B551209;
case 0x551211:c.instructions+=1;goto B551211;
case 0x551213:goto L551213;
case 0x551219:c.instructions+=4;goto B551219;
case 0x55121a:c.instructions+=3;goto B55121a;
case 0x55121b:c.instructions+=2;goto B55121b;
case 0x551220:c.instructions+=1;goto B551220;
case 0x551225:goto L551225;
case 0x551228:c.instructions+=6;goto B551228;
case 0x55122e:c.instructions+=5;goto B55122e;
case 0x551231:c.instructions+=4;goto B551231;
case 0x551232:c.instructions+=3;goto B551232;
case 0x551233:c.instructions+=2;goto B551233;
case 0x551234:c.instructions+=1;goto B551234;
case 0x551239:goto L551239;
case 0x55123c:goto L55123c;
case 0x55123f:c.instructions+=2;goto B55123f;
case 0x551241:c.instructions+=1;goto B551241;
case 0x551243:goto L551243;
case 0x551248:c.instructions+=4;goto B551248;
case 0x55124a:c.instructions+=3;goto B55124a;
case 0x55124c:c.instructions+=2;goto B55124c;
case 0x551250:c.instructions+=1;goto B551250;
case 0x551255:goto L551255;
case 0x551259:c.instructions+=5;goto B551259;
case 0x55125f:c.instructions+=4;goto B55125f;
case 0x551260:c.instructions+=3;goto B551260;
case 0x551267:c.instructions+=2;goto B551267;
case 0x55126a:c.instructions+=1;goto B55126a;
case 0x551270:goto L551270;
case 0x551272:c.instructions+=4;goto B551272;
case 0x551278:c.instructions+=3;goto B551278;
case 0x55127a:c.instructions+=2;goto B55127a;
case 0x55127b:c.instructions+=1;goto B55127b;
case 0x551281:goto L551281;
case 0x551287:c.instructions+=2;goto B551287;
case 0x551289:c.instructions+=1;goto B551289;
case 0x55128f:goto L55128f;
case 0x551295:c.instructions+=7;goto B551295;
case 0x551299:c.instructions+=6;goto B551299;
case 0x55129c:c.instructions+=5;goto B55129c;
case 0x55129d:c.instructions+=4;goto B55129d;
case 0x5512a0:c.instructions+=3;goto B5512a0;
case 0x5512a6:c.instructions+=2;goto B5512a6;
case 0x5512a7:c.instructions+=1;goto B5512a7;
case 0x5512a9:goto L5512a9;
case 0x5512ab:c.instructions+=1;goto B5512ab;
case 0x5512ad:goto L5512ad;
case 0x5512b2:goto L5512b2;
case 0x5512b4:c.instructions+=2;goto B5512b4;
case 0x5512b5:c.instructions+=1;goto B5512b5;
case 0x5512b8:goto L5512b8;
case 0x5512bb:c.instructions+=1;goto B5512bb;
case 0x5512bd:goto L5512bd;
case 0x5512c2:goto L5512c2;
case 0x5512c4:c.instructions+=2;goto B5512c4;
case 0x5512c5:c.instructions+=1;goto B5512c5;
case 0x5512c8:goto L5512c8;
case 0x5512cb:c.instructions+=1;goto B5512cb;
case 0x5512cd:goto L5512cd;
case 0x5512d3:c.instructions+=2;goto B5512d3;
case 0x5512d5:c.instructions+=1;goto B5512d5;
case 0x5512d7:goto L5512d7;
case 0x5512d8:c.instructions+=5;goto B5512d8;
case 0x5512de:c.instructions+=4;goto B5512de;
case 0x5512e6:c.instructions+=3;goto B5512e6;
case 0x5512e8:c.instructions+=2;goto B5512e8;
case 0x5512e9:c.instructions+=1;goto B5512e9;
case 0x5512ec:goto L5512ec;
case 0x5512ed:c.instructions+=2;goto B5512ed;
case 0x5512ef:c.instructions+=1;goto B5512ef;
case 0x5512f4:goto L5512f4;
case 0x5512f6:c.instructions+=1;goto B5512f6;
case 0x5512f8:goto L5512f8;
case 0x5512fe:c.instructions+=2;goto B5512fe;
case 0x551304:c.instructions+=1;goto B551304;
case 0x551306:goto L551306;
case 0x55130d:c.instructions+=1;goto B55130d;
case 0x551313:goto L551313;
case 0x551315:c.instructions+=2;goto B551315;
case 0x551316:c.instructions+=1;goto B551316;
case 0x551319:goto L551319;
case 0x55131b:c.instructions+=2;goto B55131b;
case 0x55131c:c.instructions+=1;goto B55131c;
case 0x551320:goto L551320;
case 0x551321:c.instructions+=4;goto B551321;
case 0x551322:c.instructions+=3;goto B551322;
case 0x551324:c.instructions+=2;goto B551324;
case 0x551329:c.instructions+=1;goto B551329;
case 0x55132e:goto L55132e;
case 0x551330:c.instructions+=1;goto B551330;
case 0x551336:goto L551336;
case 0x55133b:c.instructions+=1;goto B55133b;
case 0x551340:goto L551340;
case 0x551342:c.instructions+=1;goto B551342;
case 0x551348:goto L551348;
case 0x55134d:c.instructions+=2;goto B55134d;
case 0x55134f:c.instructions+=1;goto B55134f;
case 0x551351:goto L551351;
case 0x55135b:c.instructions+=1;goto B55135b;
case 0x551362:goto L551362;
case 0x551369:c.instructions+=1;goto B551369;
case 0x55136b:goto L55136b;
case 0x551372:c.instructions+=1;goto B551372;
case 0x551374:goto L551374;
case 0x551379:c.instructions+=3;goto B551379;
case 0x55137f:c.instructions+=2;goto B55137f;
case 0x551381:c.instructions+=1;goto B551381;
case 0x551383:goto L551383;
case 0x551388:c.instructions+=2;goto B551388;
case 0x55138a:c.instructions+=1;goto B55138a;
case 0x55138c:goto L55138c;
case 0x551392:c.instructions+=2;goto B551392;
case 0x551395:c.instructions+=1;goto B551395;
case 0x551397:goto L551397;
case 0x55139d:c.instructions+=1;goto B55139d;
case 0x5513a2:goto L5513a2;
case 0x5513a4:c.instructions+=1;goto B5513a4;
case 0x5513a6:goto L5513a6;
case 0x5513ac:c.instructions+=7;goto B5513ac;
case 0x5513b2:c.instructions+=6;goto B5513b2;
case 0x5513b8:c.instructions+=5;goto B5513b8;
case 0x5513bc:c.instructions+=4;goto B5513bc;
case 0x5513c0:c.instructions+=3;goto B5513c0;
case 0x5513c6:c.instructions+=2;goto B5513c6;
case 0x5513c7:c.instructions+=1;goto B5513c7;
case 0x5513cc:goto L5513cc;
case 0x5513ce:goto L5513ce;
case 0x5513d3:goto L5513d3;
case 0x5513d9:c.instructions+=3;goto B5513d9;
case 0x5513da:c.instructions+=2;goto B5513da;
case 0x5513e0:c.instructions+=1;goto B5513e0;
case 0x5513e5:goto L5513e5;
case 0x5513eb:c.instructions+=2;goto B5513eb;
case 0x5513ed:c.instructions+=1;goto B5513ed;
case 0x5513ef:goto L5513ef;
case 0x5513f2:c.instructions+=1;goto B5513f2;
case 0x5513f4:goto L5513f4;
case 0x5513fa:c.instructions+=1;goto B5513fa;
case 0x5513ff:goto L5513ff;
case 0x551405:c.instructions+=1;goto B551405;
case 0x55140a:goto L55140a;
case 0x551410:c.instructions+=1;goto B551410;
case 0x551415:goto L551415;
case 0x551417:c.instructions+=3;goto B551417;
case 0x551418:c.instructions+=2;goto B551418;
case 0x55141b:c.instructions+=1;goto B55141b;
case 0x551420:goto L551420;
case 0x551421:c.instructions+=2;goto B551421;
case 0x551422:c.instructions+=1;goto B551422;
case 0x551430:goto L551430;
case 0x551431:c.instructions+=11;goto B551431;
case 0x551433:c.instructions+=10;goto B551433;
case 0x551436:c.instructions+=9;goto B551436;
case 0x551439:c.instructions+=8;goto B551439;
case 0x55143a:c.instructions+=7;goto B55143a;
case 0x55143b:c.instructions+=6;goto B55143b;
case 0x55143d:c.instructions+=5;goto B55143d;
case 0x55143e:c.instructions+=4;goto B55143e;
case 0x551444:c.instructions+=3;goto B551444;
case 0x551445:c.instructions+=2;goto B551445;
case 0x551447:c.instructions+=1;goto B551447;
case 0x55144c:goto L55144c;
case 0x551452:c.instructions+=7;goto B551452;
case 0x551457:c.instructions+=6;goto B551457;
case 0x55145a:c.instructions+=5;goto B55145a;
case 0x55145d:c.instructions+=4;goto B55145d;
case 0x551460:c.instructions+=3;goto B551460;
case 0x551461:c.instructions+=2;goto B551461;
case 0x551464:c.instructions+=1;goto B551464;
case 0x551469:goto L551469;
case 0x55146c:c.instructions+=2;goto B55146c;
case 0x55146e:c.instructions+=1;goto B55146e;
case 0x551470:goto L551470;
case 0x551476:c.instructions+=2;goto B551476;
case 0x551478:c.instructions+=1;goto B551478;
case 0x55147a:goto L55147a;
case 0x551481:c.instructions+=1;goto B551481;
case 0x551483:goto L551483;
case 0x551485:c.instructions+=1;goto B551485;
case 0x551487:goto L551487;
case 0x55148e:c.instructions+=1;goto B55148e;
case 0x551490:goto L551490;
case 0x551492:c.instructions+=1;goto B551492;
case 0x551494:goto L551494;
case 0x55149b:c.instructions+=1;goto B55149b;
case 0x55149d:goto L55149d;
case 0x55149f:c.instructions+=2;goto B55149f;
case 0x5514a6:c.instructions+=1;goto B5514a6;
case 0x5514a8:goto L5514a8;
case 0x5514af:goto L5514af;
case 0x5514b5:c.instructions+=8;goto B5514b5;
case 0x5514bb:c.instructions+=7;goto B5514bb;
case 0x5514c0:c.instructions+=6;goto B5514c0;
case 0x5514c3:c.instructions+=5;goto B5514c3;
case 0x5514c5:c.instructions+=4;goto B5514c5;
case 0x5514ca:c.instructions+=3;goto B5514ca;
case 0x5514cd:c.instructions+=2;goto B5514cd;
case 0x5514d0:c.instructions+=1;goto B5514d0;
case 0x5514d5:goto L5514d5;
case 0x5514db:c.instructions+=3;goto B5514db;
case 0x5514dd:c.instructions+=2;goto B5514dd;
case 0x5514df:c.instructions+=1;goto B5514df;
case 0x5514e1:goto L5514e1;
case 0x5514e4:goto L5514e4;
case 0x5514e6:c.instructions+=1;goto B5514e6;
case 0x5514ec:goto L5514ec;
case 0x5514ed:c.instructions+=3;goto B5514ed;
case 0x5514f3:c.instructions+=2;goto B5514f3;
case 0x5514f5:c.instructions+=1;goto B5514f5;
case 0x5514f7:goto L5514f7;
case 0x5514fa:goto L5514fa;
case 0x5514fc:goto L5514fc;
case 0x5514ff:c.instructions+=11;goto B5514ff;
case 0x551502:c.instructions+=10;goto B551502;
case 0x551503:c.instructions+=9;goto B551503;
case 0x551506:c.instructions+=8;goto B551506;
case 0x551507:c.instructions+=7;goto B551507;
case 0x551508:c.instructions+=6;goto B551508;
case 0x55150b:c.instructions+=5;goto B55150b;
case 0x55150c:c.instructions+=4;goto B55150c;
case 0x55150d:c.instructions+=3;goto B55150d;
case 0x55150e:c.instructions+=2;goto B55150e;
case 0x551514:c.instructions+=1;goto B551514;
case 0x551519:goto L551519;
case 0x55151b:c.instructions+=1;goto B55151b;
case 0x55151d:goto L55151d;
case 0x55151f:c.instructions+=2;goto B55151f;
case 0x551524:c.instructions+=1;goto B551524;
case 0x551529:goto L551529;
case 0x55152a:c.instructions+=2;goto B55152a;
case 0x55152c:c.instructions+=1;goto B55152c;
case 0x551531:goto L551531;
case 0x551534:c.instructions+=11;goto B551534;
case 0x551537:c.instructions+=10;goto B551537;
case 0x551538:c.instructions+=9;goto B551538;
case 0x55153b:c.instructions+=8;goto B55153b;
case 0x55153c:c.instructions+=7;goto B55153c;
case 0x55153d:c.instructions+=6;goto B55153d;
case 0x551540:c.instructions+=5;goto B551540;
case 0x551541:c.instructions+=4;goto B551541;
case 0x551542:c.instructions+=3;goto B551542;
case 0x551543:c.instructions+=2;goto B551543;
case 0x551549:c.instructions+=1;goto B551549;
case 0x55154e:goto L55154e;
case 0x551555:c.instructions+=4;goto B551555;
case 0x551556:c.instructions+=3;goto B551556;
case 0x551557:c.instructions+=2;goto B551557;
case 0x551558:c.instructions+=1;goto B551558;
case 0x55155a:goto L55155a;
case 0x55155d:c.instructions+=3;goto B55155d;
case 0x55155e:c.instructions+=2;goto B55155e;
case 0x551563:c.instructions+=1;goto B551563;
case 0x551568:goto L551568;
case 0x55156a:c.instructions+=2;goto B55156a;
case 0x55156b:c.instructions+=1;goto B55156b;
case 0x55156e:goto L55156e;
case 0x551571:c.instructions+=3;goto B551571;
case 0x551577:c.instructions+=2;goto B551577;
case 0x551579:c.instructions+=1;goto B551579;
case 0x551580:goto L551580;
case 0x551583:c.instructions+=6;goto B551583;
case 0x551586:c.instructions+=5;goto B551586;
case 0x55158a:c.instructions+=4;goto B55158a;
case 0x55158d:c.instructions+=3;goto B55158d;
case 0x55158e:c.instructions+=2;goto B55158e;
case 0x551594:c.instructions+=1;goto B551594;
case 0x551596:goto L551596;
case 0x551598:c.instructions+=1;goto B551598;
case 0x55159a:goto L55159a;
case 0x55159d:c.instructions+=3;goto B55159d;
case 0x5515a1:c.instructions+=2;goto B5515a1;
case 0x5515a7:c.instructions+=1;goto B5515a7;
case 0x5515a9:goto L5515a9;
case 0x5515ac:c.instructions+=5;goto B5515ac;
case 0x5515ae:c.instructions+=4;goto B5515ae;
case 0x5515af:c.instructions+=3;goto B5515af;
case 0x5515b2:c.instructions+=2;goto B5515b2;
case 0x5515b3:c.instructions+=1;goto B5515b3;
case 0x5515b8:goto L5515b8;
case 0x5515ba:c.instructions+=2;goto B5515ba;
case 0x5515bb:c.instructions+=1;goto B5515bb;
case 0x5515bc:goto L5515bc;
case 0x5515c2:c.instructions+=1;goto B5515c2;
case 0x5515c4:goto L5515c4;
case 0x5515c7:c.instructions+=5;goto B5515c7;
case 0x5515c9:c.instructions+=4;goto B5515c9;
case 0x5515ca:c.instructions+=3;goto B5515ca;
case 0x5515cd:c.instructions+=2;goto B5515cd;
case 0x5515ce:c.instructions+=1;goto B5515ce;
case 0x5515d3:goto L5515d3;
case 0x5515d5:c.instructions+=2;goto B5515d5;
case 0x5515d6:c.instructions+=1;goto B5515d6;
case 0x5515e0:goto L5515e0;
case 0x5515e2:c.instructions+=21;goto B5515e2;
case 0x5515e7:c.instructions+=20;goto B5515e7;
case 0x5515ed:c.instructions+=19;goto B5515ed;
case 0x5515ee:c.instructions+=18;goto B5515ee;
case 0x5515f5:c.instructions+=17;goto B5515f5;
case 0x5515f8:c.instructions+=16;goto B5515f8;
case 0x5515fc:c.instructions+=15;goto B5515fc;
case 0x5515fd:c.instructions+=14;goto B5515fd;
case 0x5515fe:c.instructions+=13;goto B5515fe;
case 0x5515ff:c.instructions+=12;goto B5515ff;
case 0x551600:c.instructions+=11;goto B551600;
case 0x551604:c.instructions+=10;goto B551604;
case 0x551606:c.instructions+=9;goto B551606;
case 0x551608:c.instructions+=8;goto B551608;
case 0x55160a:c.instructions+=7;goto B55160a;
case 0x55160c:c.instructions+=6;goto B55160c;
case 0x55160e:c.instructions+=5;goto B55160e;
case 0x551612:c.instructions+=4;goto B551612;
case 0x551616:c.instructions+=3;goto B551616;
case 0x55161e:c.instructions+=2;goto B55161e;
case 0x551622:c.instructions+=1;goto B551622;
case 0x551628:goto L551628;
case 0x551630:goto L551630;
case 0x551633:c.instructions+=2;goto B551633;
case 0x551638:c.instructions+=1;goto B551638;
case 0x55163e:goto L55163e;
case 0x551644:goto L551644;
case 0x551649:c.instructions+=1;goto B551649;
case 0x55164f:goto L55164f;
case 0x551655:goto L551655;
case 0x55165a:c.instructions+=1;goto B55165a;
case 0x55165c:goto L55165c;
case 0x55165f:c.instructions+=1;goto B55165f;
case 0x551661:goto L551661;
case 0x551666:c.instructions+=1;goto B551666;
case 0x55166c:goto L55166c;
case 0x551670:c.instructions+=10;goto B551670;
case 0x551675:c.instructions+=9;goto B551675;
case 0x551677:c.instructions+=8;goto B551677;
case 0x551679:c.instructions+=7;goto B551679;
case 0x55167b:c.instructions+=6;goto B55167b;
case 0x55167e:c.instructions+=5;goto B55167e;
case 0x551680:c.instructions+=4;goto B551680;
case 0x551682:c.instructions+=3;goto B551682;
case 0x551683:c.instructions+=2;goto B551683;
case 0x551686:c.instructions+=1;goto B551686;
case 0x55168b:goto L55168b;
case 0x55168e:c.instructions+=1;goto B55168e;
case 0x551691:goto L551691;
case 0x551693:c.instructions+=9;goto B551693;
case 0x551695:c.instructions+=8;goto B551695;
case 0x551698:c.instructions+=7;goto B551698;
case 0x55169b:c.instructions+=6;goto B55169b;
case 0x55169e:c.instructions+=5;goto B55169e;
case 0x5516a1:c.instructions+=4;goto B5516a1;
case 0x5516a4:c.instructions+=3;goto B5516a4;
case 0x5516a7:c.instructions+=2;goto B5516a7;
case 0x5516a8:c.instructions+=1;goto B5516a8;
case 0x5516aa:goto L5516aa;
case 0x5516ac:c.instructions+=1;goto B5516ac;
case 0x5516b1:goto L5516b1;
case 0x5516b4:c.instructions+=4;goto B5516b4;
case 0x5516b8:c.instructions+=3;goto B5516b8;
case 0x5516bb:c.instructions+=2;goto B5516bb;
case 0x5516bc:c.instructions+=1;goto B5516bc;
case 0x5516c1:goto L5516c1;
case 0x5516c3:c.instructions+=2;goto B5516c3;
case 0x5516c5:c.instructions+=1;goto B5516c5;
case 0x5516ca:goto L5516ca;
case 0x5516ce:c.instructions+=26;goto B5516ce;
case 0x5516d1:c.instructions+=25;goto B5516d1;
case 0x5516d2:c.instructions+=24;goto B5516d2;
case 0x5516d6:c.instructions+=23;goto B5516d6;
case 0x5516d9:c.instructions+=22;goto B5516d9;
case 0x5516db:c.instructions+=21;goto B5516db;
case 0x5516de:c.instructions+=20;goto B5516de;
case 0x5516e1:c.instructions+=19;goto B5516e1;
case 0x5516e4:c.instructions+=18;goto B5516e4;
case 0x5516e7:c.instructions+=17;goto B5516e7;
case 0x5516ea:c.instructions+=16;goto B5516ea;
case 0x5516ed:c.instructions+=15;goto B5516ed;
case 0x5516f0:c.instructions+=14;goto B5516f0;
case 0x5516f3:c.instructions+=13;goto B5516f3;
case 0x5516f6:c.instructions+=12;goto B5516f6;
case 0x5516f9:c.instructions+=11;goto B5516f9;
case 0x5516fb:c.instructions+=10;goto B5516fb;
case 0x551700:c.instructions+=9;goto B551700;
case 0x551702:c.instructions+=8;goto B551702;
case 0x551706:c.instructions+=7;goto B551706;
case 0x551709:c.instructions+=6;goto B551709;
case 0x55170d:c.instructions+=5;goto B55170d;
case 0x551710:c.instructions+=4;goto B551710;
case 0x551713:c.instructions+=3;goto B551713;
case 0x551715:c.instructions+=2;goto B551715;
case 0x551719:c.instructions+=1;goto B551719;
case 0x55171e:goto L55171e;
case 0x551720:c.instructions+=1;goto B551720;
case 0x551726:goto L551726;
case 0x551729:c.instructions+=2;goto B551729;
case 0x55172c:c.instructions+=1;goto B55172c;
case 0x551731:goto L551731;
case 0x551736:c.instructions+=1;goto B551736;
case 0x55173c:goto L55173c;
case 0x551741:c.instructions+=1;goto B551741;
case 0x551747:goto L551747;
case 0x55174c:c.instructions+=1;goto B55174c;
case 0x551752:goto L551752;
case 0x551756:c.instructions+=15;goto B551756;
case 0x55175a:c.instructions+=14;goto B55175a;
case 0x55175d:c.instructions+=13;goto B55175d;
case 0x55175f:c.instructions+=12;goto B55175f;
case 0x551761:c.instructions+=11;goto B551761;
case 0x551765:c.instructions+=10;goto B551765;
case 0x551768:c.instructions+=9;goto B551768;
case 0x551769:c.instructions+=8;goto B551769;
case 0x55176d:c.instructions+=7;goto B55176d;
case 0x551771:c.instructions+=6;goto B551771;
case 0x551775:c.instructions+=5;goto B551775;
case 0x551778:c.instructions+=4;goto B551778;
case 0x55177c:c.instructions+=3;goto B55177c;
case 0x55177f:c.instructions+=2;goto B55177f;
case 0x551781:c.instructions+=1;goto B551781;
case 0x551783:goto L551783;
case 0x551786:c.instructions+=3;goto B551786;
case 0x551789:c.instructions+=2;goto B551789;
case 0x55178d:c.instructions+=1;goto B55178d;
case 0x551790:goto L551790;
case 0x551794:c.instructions+=1;goto B551794;
case 0x551796:goto L551796;
case 0x55179b:c.instructions+=1;goto B55179b;
case 0x5517a0:goto L5517a0;
case 0x5517a2:c.instructions+=1;goto B5517a2;
case 0x5517a4:goto L5517a4;
case 0x5517a9:c.instructions+=5;goto B5517a9;
case 0x5517ac:c.instructions+=4;goto B5517ac;
case 0x5517af:c.instructions+=3;goto B5517af;
case 0x5517b5:c.instructions+=2;goto B5517b5;
case 0x5517b7:c.instructions+=1;goto B5517b7;
case 0x5517b9:goto L5517b9;
case 0x5517bb:c.instructions+=2;goto B5517bb;
case 0x5517bd:c.instructions+=1;goto B5517bd;
case 0x5517bf:goto L5517bf;
case 0x5517c2:goto L5517c2;
case 0x5517c6:c.instructions+=6;goto B5517c6;
case 0x5517c8:c.instructions+=5;goto B5517c8;
case 0x5517cc:c.instructions+=4;goto B5517cc;
case 0x5517cf:c.instructions+=3;goto B5517cf;
case 0x5517d1:c.instructions+=2;goto B5517d1;
case 0x5517d3:c.instructions+=1;goto B5517d3;
case 0x5517d5:goto L5517d5;
case 0x5517d8:c.instructions+=1;goto B5517d8;
case 0x5517e0:goto L5517e0;
case 0x5517e4:c.instructions+=7;goto B5517e4;
case 0x5517e8:c.instructions+=6;goto B5517e8;
case 0x5517ea:c.instructions+=5;goto B5517ea;
case 0x5517ee:c.instructions+=4;goto B5517ee;
case 0x5517ef:c.instructions+=3;goto B5517ef;
case 0x5517f2:c.instructions+=2;goto B5517f2;
case 0x5517f4:c.instructions+=1;goto B5517f4;
case 0x5517f6:goto L5517f6;
case 0x5517f8:goto L5517f8;
case 0x5517fc:c.instructions+=1;goto B5517fc;
case 0x5517fe:goto L5517fe;
case 0x551801:c.instructions+=2;goto B551801;
case 0x551803:c.instructions+=1;goto B551803;
case 0x551805:goto L551805;
case 0x551808:c.instructions+=3;goto B551808;
case 0x55180a:c.instructions+=2;goto B55180a;
case 0x55180d:c.instructions+=1;goto B55180d;
case 0x55180f:goto L55180f;
case 0x551812:goto L551812;
case 0x551815:c.instructions+=2;goto B551815;
case 0x551818:c.instructions+=1;goto B551818;
case 0x55181a:goto L55181a;
case 0x55181d:c.instructions+=3;goto B55181d;
case 0x55181f:c.instructions+=2;goto B55181f;
case 0x551822:c.instructions+=1;goto B551822;
case 0x551824:goto L551824;
case 0x551827:goto L551827;
case 0x55182a:c.instructions+=1;goto B55182a;
case 0x55182d:goto L55182d;
case 0x551830:c.instructions+=1;goto B551830;
case 0x551832:goto L551832;
case 0x551835:goto L551835;
case 0x551839:c.instructions+=9;goto B551839;
case 0x55183d:c.instructions+=8;goto B55183d;
case 0x55183f:c.instructions+=7;goto B55183f;
case 0x551843:c.instructions+=6;goto B551843;
case 0x551847:c.instructions+=5;goto B551847;
case 0x55184b:c.instructions+=4;goto B55184b;
case 0x55184c:c.instructions+=3;goto B55184c;
case 0x55184e:c.instructions+=2;goto B55184e;
case 0x551852:c.instructions+=1;goto B551852;
case 0x551858:goto L551858;
case 0x55185d:goto L55185d;
case 0x551860:c.instructions+=2;goto B551860;
case 0x551863:c.instructions+=1;goto B551863;
case 0x551868:goto L551868;
case 0x55186c:c.instructions+=5;goto B55186c;
case 0x55186f:c.instructions+=4;goto B55186f;
case 0x551872:c.instructions+=3;goto B551872;
case 0x551874:c.instructions+=2;goto B551874;
case 0x551877:c.instructions+=1;goto B551877;
case 0x55187d:goto L55187d;
case 0x551880:c.instructions+=1;goto B551880;
case 0x551883:goto L551883;
case 0x551885:c.instructions+=5;goto B551885;
case 0x551887:c.instructions+=4;goto B551887;
case 0x55188a:c.instructions+=3;goto B55188a;
case 0x55188d:c.instructions+=2;goto B55188d;
case 0x55188e:c.instructions+=1;goto B55188e;
case 0x551890:goto L551890;
case 0x551892:c.instructions+=1;goto B551892;
case 0x551897:goto L551897;
case 0x551899:c.instructions+=1;goto B551899;
case 0x55189f:goto L55189f;
case 0x5518a2:c.instructions+=2;goto B5518a2;
case 0x5518a5:c.instructions+=1;goto B5518a5;
case 0x5518aa:goto L5518aa;
case 0x5518af:c.instructions+=1;goto B5518af;
case 0x5518b5:goto L5518b5;
case 0x5518bb:goto L5518bb;
case 0x5518c0:c.instructions+=1;goto B5518c0;
case 0x5518c6:goto L5518c6;
case 0x5518cb:c.instructions+=1;goto B5518cb;
case 0x5518cd:goto L5518cd;
case 0x5518d2:c.instructions+=1;goto B5518d2;
case 0x5518d8:goto L5518d8;
case 0x5518db:c.instructions+=2;goto B5518db;
case 0x5518de:c.instructions+=1;goto B5518de;
case 0x5518e3:goto L5518e3;
case 0x5518e5:c.instructions+=1;goto B5518e5;
case 0x5518eb:goto L5518eb;
case 0x5518ef:c.instructions+=4;goto B5518ef;
case 0x5518f0:c.instructions+=3;goto B5518f0;
case 0x5518f2:c.instructions+=2;goto B5518f2;
case 0x5518f6:c.instructions+=1;goto B5518f6;
case 0x5518fb:goto L5518fb;
case 0x5518fd:c.instructions+=2;goto B5518fd;
case 0x5518ff:c.instructions+=1;goto B5518ff;
case 0x551905:goto L551905;
case 0x551908:c.instructions+=6;goto B551908;
case 0x551909:c.instructions+=5;goto B551909;
case 0x55190b:c.instructions+=4;goto B55190b;
case 0x55190e:c.instructions+=3;goto B55190e;
case 0x551911:c.instructions+=2;goto B551911;
case 0x551912:c.instructions+=1;goto B551912;
case 0x551917:goto L551917;
case 0x55191a:c.instructions+=5;goto B55191a;
case 0x55191e:c.instructions+=4;goto B55191e;
case 0x551920:c.instructions+=3;goto B551920;
case 0x551922:c.instructions+=2;goto B551922;
case 0x551926:c.instructions+=1;goto B551926;
case 0x551928:goto L551928;
case 0x55192d:c.instructions+=7;goto B55192d;
case 0x551932:c.instructions+=6;goto B551932;
case 0x551933:c.instructions+=5;goto B551933;
case 0x551936:c.instructions+=4;goto B551936;
case 0x551938:c.instructions+=3;goto B551938;
case 0x551939:c.instructions+=2;goto B551939;
case 0x55193b:c.instructions+=1;goto B55193b;
case 0x551940:goto L551940;
case 0x551944:c.instructions+=1;goto B551944;
case 0x551946:goto L551946;
case 0x55194a:goto L55194a;
case 0x55194e:c.instructions+=9;goto B55194e;
case 0x551952:c.instructions+=8;goto B551952;
case 0x551955:c.instructions+=7;goto B551955;
case 0x551956:c.instructions+=6;goto B551956;
case 0x551959:c.instructions+=5;goto B551959;
case 0x55195a:c.instructions+=4;goto B55195a;
case 0x55195d:c.instructions+=3;goto B55195d;
case 0x551963:c.instructions+=2;goto B551963;
case 0x55196b:c.instructions+=1;goto B55196b;
case 0x551970:goto L551970;
case 0x551972:c.instructions+=1;goto B551972;
case 0x551977:goto L551977;
case 0x55197b:c.instructions+=8;goto B55197b;
case 0x55197d:c.instructions+=7;goto B55197d;
case 0x55197f:c.instructions+=6;goto B55197f;
case 0x551982:c.instructions+=5;goto B551982;
case 0x551986:c.instructions+=4;goto B551986;
case 0x55198a:c.instructions+=3;goto B55198a;
case 0x55198e:c.instructions+=2;goto B55198e;
case 0x551992:c.instructions+=1;goto B551992;
case 0x551993:goto L551993;
case 0x551997:c.instructions+=2;goto B551997;
case 0x551999:c.instructions+=1;goto B551999;
case 0x55199b:goto L55199b;
case 0x55199f:c.instructions+=2;goto B55199f;
case 0x5519a2:c.instructions+=1;goto B5519a2;
case 0x5519a4:goto L5519a4;
case 0x5519a6:c.instructions+=1;goto B5519a6;
case 0x5519a8:goto L5519a8;
case 0x5519ac:c.instructions+=8;goto B5519ac;
case 0x5519b0:c.instructions+=7;goto B5519b0;
case 0x5519b3:c.instructions+=6;goto B5519b3;
case 0x5519b4:c.instructions+=5;goto B5519b4;
case 0x5519b7:c.instructions+=4;goto B5519b7;
case 0x5519b9:c.instructions+=3;goto B5519b9;
case 0x5519bc:c.instructions+=2;goto B5519bc;
case 0x5519be:c.instructions+=1;goto B5519be;
case 0x5519c0:goto L5519c0;
case 0x5519c4:c.instructions+=3;goto B5519c4;
case 0x5519c5:c.instructions+=2;goto B5519c5;
case 0x5519c8:c.instructions+=1;goto B5519c8;
case 0x5519cd:goto L5519cd;
case 0x5519d1:c.instructions+=6;goto B5519d1;
case 0x5519d5:c.instructions+=5;goto B5519d5;
case 0x5519d6:c.instructions+=4;goto B5519d6;
case 0x5519d9:c.instructions+=3;goto B5519d9;
case 0x5519dd:c.instructions+=2;goto B5519dd;
case 0x5519e1:c.instructions+=1;goto B5519e1;
case 0x5519e3:goto L5519e3;
case 0x5519e6:c.instructions+=16;goto B5519e6;
case 0x5519e9:c.instructions+=15;goto B5519e9;
case 0x5519ec:c.instructions+=14;goto B5519ec;
case 0x5519ef:c.instructions+=13;goto B5519ef;
case 0x5519f2:c.instructions+=12;goto B5519f2;
case 0x5519f4:c.instructions+=11;goto B5519f4;
case 0x5519f8:c.instructions+=10;goto B5519f8;
case 0x5519fc:c.instructions+=9;goto B5519fc;
case 0x5519ff:c.instructions+=8;goto B5519ff;
case 0x551a01:c.instructions+=7;goto B551a01;
case 0x551a07:c.instructions+=6;goto B551a07;
case 0x551a09:c.instructions+=5;goto B551a09;
case 0x551a0c:c.instructions+=4;goto B551a0c;
case 0x551a0f:c.instructions+=3;goto B551a0f;
case 0x551a12:c.instructions+=2;goto B551a12;
case 0x551a15:c.instructions+=1;goto B551a15;
case 0x551a17:goto L551a17;
case 0x551a1b:c.instructions+=6;goto B551a1b;
case 0x551a1e:c.instructions+=5;goto B551a1e;
case 0x551a1f:c.instructions+=4;goto B551a1f;
case 0x551a22:c.instructions+=3;goto B551a22;
case 0x551a24:c.instructions+=2;goto B551a24;
case 0x551a28:c.instructions+=1;goto B551a28;
case 0x551a2e:goto L551a2e;
case 0x551a31:c.instructions+=2;goto B551a31;
case 0x551a33:c.instructions+=1;goto B551a33;
case 0x551a35:goto L551a35;
case 0x551a38:c.instructions+=6;goto B551a38;
case 0x551a3b:c.instructions+=5;goto B551a3b;
case 0x551a40:c.instructions+=4;goto B551a40;
case 0x551a41:c.instructions+=3;goto B551a41;
case 0x551a43:c.instructions+=2;goto B551a43;
case 0x551a44:c.instructions+=1;goto B551a44;
case 0x551a49:goto L551a49;
case 0x551a4a:c.instructions+=1;goto B551a4a;
case 0x551a4f:goto L551a4f;
case 0x551a52:goto L551a52;
case 0x551a55:c.instructions+=7;goto B551a55;
case 0x551a59:c.instructions+=6;goto B551a59;
case 0x551a5d:c.instructions+=5;goto B551a5d;
case 0x551a5e:c.instructions+=4;goto B551a5e;
case 0x551a61:c.instructions+=3;goto B551a61;
case 0x551a64:c.instructions+=2;goto B551a64;
case 0x551a66:c.instructions+=1;goto B551a66;
case 0x551a6b:goto L551a6b;
case 0x551a6d:c.instructions+=1;goto B551a6d;
case 0x551a6f:goto L551a6f;
case 0x551a74:c.instructions+=1;goto B551a74;
case 0x551a79:goto L551a79;
case 0x551a7b:c.instructions+=8;goto B551a7b;
case 0x551a7e:c.instructions+=7;goto B551a7e;
case 0x551a81:c.instructions+=6;goto B551a81;
case 0x551a84:c.instructions+=5;goto B551a84;
case 0x551a87:c.instructions+=4;goto B551a87;
case 0x551a8a:c.instructions+=3;goto B551a8a;
case 0x551a8d:c.instructions+=2;goto B551a8d;
case 0x551a90:c.instructions+=1;goto B551a90;
case 0x551a95:goto L551a95;
case 0x551a97:c.instructions+=3;goto B551a97;
case 0x551a9a:c.instructions+=2;goto B551a9a;
case 0x551aa2:c.instructions+=1;goto B551aa2;
case 0x551aa6:goto L551aa6;
case 0x551aa9:c.instructions+=9;goto B551aa9;
case 0x551aac:c.instructions+=8;goto B551aac;
case 0x551aaf:c.instructions+=7;goto B551aaf;
case 0x551ab2:c.instructions+=6;goto B551ab2;
case 0x551ab5:c.instructions+=5;goto B551ab5;
case 0x551ab8:c.instructions+=4;goto B551ab8;
case 0x551abb:c.instructions+=3;goto B551abb;
case 0x551abc:c.instructions+=2;goto B551abc;
case 0x551abe:c.instructions+=1;goto B551abe;
case 0x551ac3:goto L551ac3;
case 0x551ac5:goto L551ac5;
case 0x551aca:c.instructions+=1;goto B551aca;
case 0x551acf:goto L551acf;
case 0x551ad4:c.instructions+=18;goto B551ad4;
case 0x551ad7:c.instructions+=17;goto B551ad7;
case 0x551ada:c.instructions+=16;goto B551ada;
case 0x551ade:c.instructions+=15;goto B551ade;
case 0x551ae4:c.instructions+=14;goto B551ae4;
case 0x551ae7:c.instructions+=13;goto B551ae7;
case 0x551aea:c.instructions+=12;goto B551aea;
case 0x551aed:c.instructions+=11;goto B551aed;
case 0x551af0:c.instructions+=10;goto B551af0;
case 0x551af3:c.instructions+=9;goto B551af3;
case 0x551af6:c.instructions+=8;goto B551af6;
case 0x551af9:c.instructions+=7;goto B551af9;
case 0x551afc:c.instructions+=6;goto B551afc;
case 0x551aff:c.instructions+=5;goto B551aff;
case 0x551b02:c.instructions+=4;goto B551b02;
case 0x551b05:c.instructions+=3;goto B551b05;
case 0x551b07:c.instructions+=2;goto B551b07;
case 0x551b09:c.instructions+=1;goto B551b09;
case 0x551b0b:goto L551b0b;
case 0x551b0e:c.instructions+=3;goto B551b0e;
case 0x551b0f:c.instructions+=2;goto B551b0f;
case 0x551b11:c.instructions+=1;goto B551b11;
case 0x551b16:goto L551b16;
case 0x551b1e:c.instructions+=2;goto B551b1e;
case 0x551b22:c.instructions+=1;goto B551b22;
case 0x551b24:goto L551b24;
case 0x551b29:c.instructions+=1;goto B551b29;
case 0x551b2b:goto L551b2b;
case 0x551b30:c.instructions+=1;goto B551b30;
case 0x551b32:goto L551b32;
case 0x551b34:c.instructions+=1;goto B551b34;
case 0x551b36:goto L551b36;
case 0x551b39:c.instructions+=2;goto B551b39;
case 0x551b3c:c.instructions+=1;goto B551b3c;
case 0x551b3e:goto L551b3e;
case 0x551b41:c.instructions+=1;goto B551b41;
case 0x551b44:goto L551b44;
case 0x551b48:c.instructions+=5;goto B551b48;
case 0x551b4c:c.instructions+=4;goto B551b4c;
case 0x551b50:c.instructions+=3;goto B551b50;
case 0x551b52:c.instructions+=2;goto B551b52;
case 0x551b56:c.instructions+=1;goto B551b56;
case 0x551b5c:goto L551b5c;
case 0x551b60:c.instructions+=3;goto B551b60;
case 0x551b63:c.instructions+=2;goto B551b63;
case 0x551b65:c.instructions+=1;goto B551b65;
case 0x551b67:goto L551b67;
case 0x551b6a:c.instructions+=4;goto B551b6a;
case 0x551b6d:c.instructions+=3;goto B551b6d;
case 0x551b70:c.instructions+=2;goto B551b70;
case 0x551b72:c.instructions+=1;goto B551b72;
case 0x551b74:goto L551b74;
case 0x551b76:c.instructions+=1;goto B551b76;
case 0x551b78:goto L551b78;
case 0x551b7b:c.instructions+=3;goto B551b7b;
case 0x551b7d:c.instructions+=2;goto B551b7d;
case 0x551b80:c.instructions+=1;goto B551b80;
case 0x551b82:goto L551b82;
case 0x551b85:goto L551b85;
case 0x551b88:c.instructions+=2;goto B551b88;
case 0x551b8b:c.instructions+=1;goto B551b8b;
case 0x551b8d:goto L551b8d;
case 0x551b90:c.instructions+=3;goto B551b90;
case 0x551b92:c.instructions+=2;goto B551b92;
case 0x551b95:c.instructions+=1;goto B551b95;
case 0x551b97:goto L551b97;
case 0x551b9a:goto L551b9a;
case 0x551b9d:c.instructions+=1;goto B551b9d;
case 0x551ba0:goto L551ba0;
case 0x551ba3:c.instructions+=1;goto B551ba3;
case 0x551ba5:goto L551ba5;
case 0x551ba8:goto L551ba8;
case 0x551bab:goto L551bab;
case 0x551bb2:c.instructions+=1;goto B551bb2;
case 0x551bb4:goto L551bb4;
case 0x551bb7:c.instructions+=1;goto B551bb7;
case 0x551bba:goto L551bba;
case 0x551bbe:c.instructions+=8;goto B551bbe;
case 0x551bbf:c.instructions+=7;goto B551bbf;
case 0x551bc0:c.instructions+=6;goto B551bc0;
case 0x551bc1:c.instructions+=5;goto B551bc1;
case 0x551bc3:c.instructions+=4;goto B551bc3;
case 0x551bc4:c.instructions+=3;goto B551bc4;
case 0x551bcb:c.instructions+=2;goto B551bcb;
case 0x551bce:c.instructions+=1;goto B551bce;
case 0x551be0:goto L551be0;
case 0x551be2:c.instructions+=31;goto B551be2;
case 0x551be7:c.instructions+=30;goto B551be7;
case 0x551bed:c.instructions+=29;goto B551bed;
case 0x551bee:c.instructions+=28;goto B551bee;
case 0x551bf5:c.instructions+=27;goto B551bf5;
case 0x551bf6:c.instructions+=26;goto B551bf6;
case 0x551bf7:c.instructions+=25;goto B551bf7;
case 0x551bf8:c.instructions+=24;goto B551bf8;
case 0x551bfa:c.instructions+=23;goto B551bfa;
case 0x551bff:c.instructions+=22;goto B551bff;
case 0x551c00:c.instructions+=21;goto B551c00;
case 0x551c01:c.instructions+=20;goto B551c01;
case 0x551c05:c.instructions+=19;goto B551c05;
case 0x551c08:c.instructions+=18;goto B551c08;
case 0x551c0b:c.instructions+=17;goto B551c0b;
case 0x551c0d:c.instructions+=16;goto B551c0d;
case 0x551c14:c.instructions+=15;goto B551c14;
case 0x551c18:c.instructions+=14;goto B551c18;
case 0x551c1b:c.instructions+=13;goto B551c1b;
case 0x551c1e:c.instructions+=12;goto B551c1e;
case 0x551c22:c.instructions+=11;goto B551c22;
case 0x551c25:c.instructions+=10;goto B551c25;
case 0x551c28:c.instructions+=9;goto B551c28;
case 0x551c2b:c.instructions+=8;goto B551c2b;
case 0x551c2e:c.instructions+=7;goto B551c2e;
case 0x551c31:c.instructions+=6;goto B551c31;
case 0x551c34:c.instructions+=5;goto B551c34;
case 0x551c37:c.instructions+=4;goto B551c37;
case 0x551c3a:c.instructions+=3;goto B551c3a;
case 0x551c3b:c.instructions+=2;goto B551c3b;
case 0x551c40:c.instructions+=1;goto B551c40;
case 0x551c45:goto L551c45;
case 0x551c48:c.instructions+=11;goto B551c48;
case 0x551c4b:c.instructions+=10;goto B551c4b;
case 0x551c4e:c.instructions+=9;goto B551c4e;
case 0x551c51:c.instructions+=8;goto B551c51;
case 0x551c54:c.instructions+=7;goto B551c54;
case 0x551c57:c.instructions+=6;goto B551c57;
case 0x551c5a:c.instructions+=5;goto B551c5a;
case 0x551c5d:c.instructions+=4;goto B551c5d;
case 0x551c60:c.instructions+=3;goto B551c60;
case 0x551c61:c.instructions+=2;goto B551c61;
case 0x551c63:c.instructions+=1;goto B551c63;
case 0x551c68:goto L551c68;
case 0x551c6c:c.instructions+=3;goto B551c6c;
case 0x551c6e:c.instructions+=2;goto B551c6e;
case 0x551c71:c.instructions+=1;goto B551c71;
case 0x551c77:goto L551c77;
case 0x551c79:c.instructions+=2;goto B551c79;
case 0x551c7d:c.instructions+=1;goto B551c7d;
case 0x551c83:goto L551c83;
case 0x551c86:c.instructions+=56;goto B551c86;
case 0x551c89:c.instructions+=55;goto B551c89;
case 0x551c8c:c.instructions+=54;goto B551c8c;
case 0x551c8f:c.instructions+=53;goto B551c8f;
case 0x551c92:c.instructions+=52;goto B551c92;
case 0x551c96:c.instructions+=51;goto B551c96;
case 0x551c99:c.instructions+=50;goto B551c99;
case 0x551c9d:c.instructions+=49;goto B551c9d;
case 0x551ca0:c.instructions+=48;goto B551ca0;
case 0x551ca4:c.instructions+=47;goto B551ca4;
case 0x551ca7:c.instructions+=46;goto B551ca7;
case 0x551cab:c.instructions+=45;goto B551cab;
case 0x551cae:c.instructions+=44;goto B551cae;
case 0x551cb2:c.instructions+=43;goto B551cb2;
case 0x551cb5:c.instructions+=42;goto B551cb5;
case 0x551cb9:c.instructions+=41;goto B551cb9;
case 0x551cbc:c.instructions+=40;goto B551cbc;
case 0x551cc0:c.instructions+=39;goto B551cc0;
case 0x551cc3:c.instructions+=38;goto B551cc3;
case 0x551cc7:c.instructions+=37;goto B551cc7;
case 0x551cca:c.instructions+=36;goto B551cca;
case 0x551ccd:c.instructions+=35;goto B551ccd;
case 0x551ccf:c.instructions+=34;goto B551ccf;
case 0x551cd3:c.instructions+=33;goto B551cd3;
case 0x551cd9:c.instructions+=32;goto B551cd9;
case 0x551cdb:c.instructions+=31;goto B551cdb;
case 0x551cdd:c.instructions+=30;goto B551cdd;
case 0x551ce0:c.instructions+=29;goto B551ce0;
case 0x551ce4:c.instructions+=28;goto B551ce4;
case 0x551ce7:c.instructions+=27;goto B551ce7;
case 0x551ceb:c.instructions+=26;goto B551ceb;
case 0x551cee:c.instructions+=25;goto B551cee;
case 0x551cf1:c.instructions+=24;goto B551cf1;
case 0x551cf5:c.instructions+=23;goto B551cf5;
case 0x551cf9:c.instructions+=22;goto B551cf9;
case 0x551cfd:c.instructions+=21;goto B551cfd;
case 0x551d01:c.instructions+=20;goto B551d01;
case 0x551d05:c.instructions+=19;goto B551d05;
case 0x551d08:c.instructions+=18;goto B551d08;
case 0x551d0b:c.instructions+=17;goto B551d0b;
case 0x551d0e:c.instructions+=16;goto B551d0e;
case 0x551d11:c.instructions+=15;goto B551d11;
case 0x551d14:c.instructions+=14;goto B551d14;
case 0x551d17:c.instructions+=13;goto B551d17;
case 0x551d1a:c.instructions+=12;goto B551d1a;
case 0x551d1d:c.instructions+=11;goto B551d1d;
case 0x551d20:c.instructions+=10;goto B551d20;
case 0x551d23:c.instructions+=9;goto B551d23;
case 0x551d26:c.instructions+=8;goto B551d26;
case 0x551d29:c.instructions+=7;goto B551d29;
case 0x551d2c:c.instructions+=6;goto B551d2c;
case 0x551d30:c.instructions+=5;goto B551d30;
case 0x551d32:c.instructions+=4;goto B551d32;
case 0x551d34:c.instructions+=3;goto B551d34;
case 0x551d38:c.instructions+=2;goto B551d38;
case 0x551d3c:c.instructions+=1;goto B551d3c;
case 0x551d3e:goto L551d3e;
case 0x551d41:c.instructions+=2;goto B551d41;
case 0x551d43:c.instructions+=1;goto B551d43;
case 0x551d45:goto L551d45;
case 0x551d47:c.instructions+=1;goto B551d47;
case 0x551d4c:goto L551d4c;
case 0x551d50:goto L551d50;
case 0x551d53:c.instructions+=2;goto B551d53;
case 0x551d57:c.instructions+=1;goto B551d57;
case 0x551d59:goto L551d59;
case 0x551d5c:c.instructions+=2;goto B551d5c;
case 0x551d5f:c.instructions+=1;goto B551d5f;
case 0x551d63:goto L551d63;
case 0x551d67:c.instructions+=6;goto B551d67;
case 0x551d6a:c.instructions+=5;goto B551d6a;
case 0x551d6b:c.instructions+=4;goto B551d6b;
case 0x551d6e:c.instructions+=3;goto B551d6e;
case 0x551d70:c.instructions+=2;goto B551d70;
case 0x551d74:c.instructions+=1;goto B551d74;
case 0x551d7a:goto L551d7a;
case 0x551d7c:goto L551d7c;
case 0x551d7e:c.instructions+=2;goto B551d7e;
case 0x551d80:c.instructions+=1;goto B551d80;
case 0x551d82:goto L551d82;
case 0x551d85:c.instructions+=5;goto B551d85;
case 0x551d88:c.instructions+=4;goto B551d88;
case 0x551d8a:c.instructions+=3;goto B551d8a;
case 0x551d8b:c.instructions+=2;goto B551d8b;
case 0x551d8d:c.instructions+=1;goto B551d8d;
case 0x551d92:goto L551d92;
case 0x551d95:c.instructions+=4;goto B551d95;
case 0x551d96:c.instructions+=3;goto B551d96;
case 0x551d99:c.instructions+=2;goto B551d99;
case 0x551d9b:c.instructions+=1;goto B551d9b;
case 0x551d9d:goto L551d9d;
case 0x551da0:c.instructions+=4;goto B551da0;
case 0x551da1:c.instructions+=3;goto B551da1;
case 0x551da4:c.instructions+=2;goto B551da4;
case 0x551da6:c.instructions+=1;goto B551da6;
case 0x551dab:goto L551dab;
case 0x551dad:c.instructions+=6;goto B551dad;
case 0x551db0:c.instructions+=5;goto B551db0;
case 0x551db3:c.instructions+=4;goto B551db3;
case 0x551db6:c.instructions+=3;goto B551db6;
case 0x551db9:c.instructions+=2;goto B551db9;
case 0x551dbb:c.instructions+=1;goto B551dbb;
case 0x551dbe:goto L551dbe;
case 0x551dc0:goto L551dc0;
case 0x551dc2:c.instructions+=1;goto B551dc2;
case 0x551dc5:goto L551dc5;
case 0x551dc7:goto L551dc7;
case 0x551dcb:c.instructions+=8;goto B551dcb;
case 0x551dcc:c.instructions+=7;goto B551dcc;
case 0x551dcd:c.instructions+=6;goto B551dcd;
case 0x551dcf:c.instructions+=5;goto B551dcf;
case 0x551dd0:c.instructions+=4;goto B551dd0;
case 0x551dd1:c.instructions+=3;goto B551dd1;
case 0x551dd8:c.instructions+=2;goto B551dd8;
case 0x551ddb:c.instructions+=1;goto B551ddb;
case 0x551de0:goto L551de0;
case 0x551de4:c.instructions+=16;goto B551de4;
case 0x551de5:c.instructions+=15;goto B551de5;
case 0x551de7:c.instructions+=14;goto B551de7;
case 0x551de8:c.instructions+=13;goto B551de8;
case 0x551dea:c.instructions+=12;goto B551dea;
case 0x551deb:c.instructions+=11;goto B551deb;
case 0x551df2:c.instructions+=10;goto B551df2;
case 0x551df5:c.instructions+=9;goto B551df5;
case 0x551df8:c.instructions+=8;goto B551df8;
case 0x551dfb:c.instructions+=7;goto B551dfb;
case 0x551dfe:c.instructions+=6;goto B551dfe;
case 0x551e01:c.instructions+=5;goto B551e01;
case 0x551e04:c.instructions+=4;goto B551e04;
case 0x551e05:c.instructions+=3;goto B551e05;
case 0x551e07:c.instructions+=2;goto B551e07;
case 0x551e0a:c.instructions+=1;goto B551e0a;
case 0x551e0f:goto L551e0f;
case 0x551e11:goto L551e11;
case 0x551e13:c.instructions+=11;goto B551e13;
case 0x551e16:c.instructions+=10;goto B551e16;
case 0x551e19:c.instructions+=9;goto B551e19;
case 0x551e1c:c.instructions+=8;goto B551e1c;
case 0x551e1f:c.instructions+=7;goto B551e1f;
case 0x551e22:c.instructions+=6;goto B551e22;
case 0x551e25:c.instructions+=5;goto B551e25;
case 0x551e28:c.instructions+=4;goto B551e28;
case 0x551e2c:c.instructions+=3;goto B551e2c;
case 0x551e2f:c.instructions+=2;goto B551e2f;
case 0x551e36:c.instructions+=1;goto B551e36;
case 0x551e3c:goto L551e3c;
case 0x551e46:c.instructions+=2;goto B551e46;
case 0x551e4b:c.instructions+=1;goto B551e4b;
case 0x551e4d:goto L551e4d;
case 0x551e52:goto L551e52;
case 0x551e53:c.instructions+=5;goto B551e53;
case 0x551e56:c.instructions+=4;goto B551e56;
case 0x551e5b:c.instructions+=3;goto B551e5b;
case 0x551e60:c.instructions+=2;goto B551e60;
case 0x551e61:c.instructions+=1;goto B551e61;
case 0x551e66:goto L551e66;
case 0x551e6b:c.instructions+=3;goto B551e6b;
case 0x551e6e:c.instructions+=2;goto B551e6e;
case 0x551e73:c.instructions+=1;goto B551e73;
case 0x551e75:goto L551e75;
case 0x551e78:c.instructions+=1;goto B551e78;
case 0x551e7a:goto L551e7a;
case 0x551e7f:c.instructions+=1;goto B551e7f;
case 0x551e81:goto L551e81;
case 0x551e84:c.instructions+=3;goto B551e84;
case 0x551e89:c.instructions+=2;goto B551e89;
case 0x551e8a:c.instructions+=1;goto B551e8a;
case 0x551e8f:goto L551e8f;
case 0x551e92:c.instructions+=2;goto B551e92;
case 0x551e94:c.instructions+=1;goto B551e94;
case 0x551e96:goto L551e96;
case 0x551e99:c.instructions+=3;goto B551e99;
case 0x551e9e:c.instructions+=2;goto B551e9e;
case 0x551e9f:c.instructions+=1;goto B551e9f;
case 0x551ea4:goto L551ea4;
case 0x551ea7:c.instructions+=2;goto B551ea7;
case 0x551ea9:c.instructions+=1;goto B551ea9;
case 0x551eab:goto L551eab;
case 0x551eae:c.instructions+=3;goto B551eae;
case 0x551eb3:c.instructions+=2;goto B551eb3;
case 0x551eb4:c.instructions+=1;goto B551eb4;
case 0x551eb9:goto L551eb9;
case 0x551ebc:c.instructions+=2;goto B551ebc;
case 0x551ebe:c.instructions+=1;goto B551ebe;
case 0x551ec0:goto L551ec0;
case 0x551ec3:c.instructions+=3;goto B551ec3;
case 0x551ec8:c.instructions+=2;goto B551ec8;
case 0x551ec9:c.instructions+=1;goto B551ec9;
case 0x551ece:goto L551ece;
case 0x551ed1:c.instructions+=3;goto B551ed1;
case 0x551ed3:c.instructions+=2;goto B551ed3;
case 0x551eda:c.instructions+=1;goto B551eda;
case 0x551edc:goto L551edc;
case 0x551ee2:goto L551ee2;
case 0x551ee8:c.instructions+=1;goto B551ee8;
case 0x551eea:goto L551eea;
case 0x551eed:c.instructions+=2;goto B551eed;
case 0x551eee:c.instructions+=1;goto B551eee;
case 0x551ef3:goto L551ef3;
case 0x551ef6:c.instructions+=2;goto B551ef6;
case 0x551ef8:c.instructions+=1;goto B551ef8;
case 0x551efa:goto L551efa;
case 0x551efd:c.instructions+=2;goto B551efd;
case 0x551efe:c.instructions+=1;goto B551efe;
case 0x551f03:goto L551f03;
case 0x551f06:c.instructions+=2;goto B551f06;
case 0x551f08:c.instructions+=1;goto B551f08;
case 0x551f0a:goto L551f0a;
case 0x551f0f:c.instructions+=3;goto B551f0f;
case 0x551f10:c.instructions+=2;goto B551f10;
case 0x551f15:c.instructions+=1;goto B551f15;
case 0x551f1a:goto L551f1a;
case 0x551f1d:c.instructions+=3;goto B551f1d;
case 0x551f1e:c.instructions+=2;goto B551f1e;
case 0x551f23:c.instructions+=1;goto B551f23;
case 0x551f28:goto L551f28;
case 0x551f2b:c.instructions+=1;goto B551f2b;
case 0x551f2d:goto L551f2d;
case 0x551f30:c.instructions+=4;goto B551f30;
case 0x551f35:c.instructions+=3;goto B551f35;
case 0x551f36:c.instructions+=2;goto B551f36;
case 0x551f3b:c.instructions+=1;goto B551f3b;
case 0x551f40:goto L551f40;
case 0x551f43:goto L551f43;
case 0x551f46:c.instructions+=1;goto B551f46;
case 0x551f48:goto L551f48;
case 0x551f4d:c.instructions+=1;goto B551f4d;
case 0x551f52:goto L551f52;
case 0x551f55:c.instructions+=2;goto B551f55;
case 0x551f57:c.instructions+=1;goto B551f57;
case 0x551f59:goto L551f59;
case 0x551f5c:c.instructions+=5;goto B551f5c;
case 0x551f5f:c.instructions+=4;goto B551f5f;
case 0x551f60:c.instructions+=3;goto B551f60;
case 0x551f66:c.instructions+=2;goto B551f66;
case 0x551f67:c.instructions+=1;goto B551f67;
case 0x551f6c:goto L551f6c;
case 0x551f6d:c.instructions+=5;goto B551f6d;
case 0x551f6e:c.instructions+=4;goto B551f6e;
case 0x551f70:c.instructions+=3;goto B551f70;
case 0x551f71:c.instructions+=2;goto B551f71;
case 0x551f72:c.instructions+=1;goto B551f72;
case 0x551f80:goto L551f80;
case 0x551f81:c.instructions+=15;goto B551f81;
case 0x551f83:c.instructions+=14;goto B551f83;
case 0x551f85:c.instructions+=13;goto B551f85;
case 0x551f8a:c.instructions+=12;goto B551f8a;
case 0x551f90:c.instructions+=11;goto B551f90;
case 0x551f91:c.instructions+=10;goto B551f91;
case 0x551f98:c.instructions+=9;goto B551f98;
case 0x551f9b:c.instructions+=8;goto B551f9b;
case 0x551f9c:c.instructions+=7;goto B551f9c;
case 0x551f9d:c.instructions+=6;goto B551f9d;
case 0x551fa0:c.instructions+=5;goto B551fa0;
case 0x551fa1:c.instructions+=4;goto B551fa1;
case 0x551fa3:c.instructions+=3;goto B551fa3;
case 0x551fa4:c.instructions+=2;goto B551fa4;
case 0x551fa7:c.instructions+=1;goto B551fa7;
case 0x551fac:goto L551fac;
case 0x551faf:c.instructions+=17;goto B551faf;
case 0x551fb1:c.instructions+=16;goto B551fb1;
case 0x551fb7:c.instructions+=15;goto B551fb7;
case 0x551fba:c.instructions+=14;goto B551fba;
case 0x551fbc:c.instructions+=13;goto B551fbc;
case 0x551fbf:c.instructions+=12;goto B551fbf;
case 0x551fc2:c.instructions+=11;goto B551fc2;
case 0x551fc5:c.instructions+=10;goto B551fc5;
case 0x551fc8:c.instructions+=9;goto B551fc8;
case 0x551fcb:c.instructions+=8;goto B551fcb;
case 0x551fce:c.instructions+=7;goto B551fce;
case 0x551fd1:c.instructions+=6;goto B551fd1;
case 0x551fd4:c.instructions+=5;goto B551fd4;
case 0x551fd7:c.instructions+=4;goto B551fd7;
case 0x551fdb:c.instructions+=3;goto B551fdb;
case 0x551fe1:c.instructions+=2;goto B551fe1;
case 0x551fe8:c.instructions+=1;goto B551fe8;
case 0x551fea:goto L551fea;
case 0x551fed:c.instructions+=1;goto B551fed;
case 0x551ff0:goto L551ff0;
case 0x551ff3:c.instructions+=6;goto B551ff3;
case 0x551ff4:c.instructions+=5;goto B551ff4;
case 0x551ff9:c.instructions+=4;goto B551ff9;
case 0x551ffc:c.instructions+=3;goto B551ffc;
case 0x551ffe:c.instructions+=2;goto B551ffe;
case 0x551fff:c.instructions+=1;goto B551fff;
default:missing_instruction(c.pc);}
B551002:L551002:{c.instructions+=4;NFSU2_TR(0x551002);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551004:{NFSU2_TR(0x551004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551005:{NFSU2_TR(0x551005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551006:{NFSU2_TR(0x551006);
if(r1(R+518)){{goto L55100f;}}
}
B551008:L551008:{c.instructions+=2;NFSU2_TR(0x551008);
__builtin_memmove((R+4),(R+20),4);
}
B55100a:{NFSU2_TR(0x55100a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55100full));
TAIL_STATIC(0x538490u,538);
}
B55100f:L55100f:{c.instructions+=3;NFSU2_TR(0x55100f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551013:{NFSU2_TR(0x551013);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B551016:{NFSU2_TR(0x551016);
if(r1(R+518)){{goto L551052;}}
}
B551018:L551018:{c.instructions+=6;NFSU2_TR(0x551018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55101b:{NFSU2_TR(0x55101b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55101d:{NFSU2_TR(0x55101d);
u8 U[4];
w4(U+0,u32(0x79b9dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551022:{NFSU2_TR(0x551022);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551023:{NFSU2_TR(0x551023);
__builtin_memmove((R+4),(R+20),4);
}
B551025:{NFSU2_TR(0x551025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55102aull));
TAIL_STATIC(0x51f490u,51f);
}
B55102a:L55102a:{c.instructions+=3;NFSU2_TR(0x55102a);
u8 U[16];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B551031:{NFSU2_TR(0x551031);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551032:{NFSU2_TR(0x551032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551037ull));
TAIL_STATIC(0x51cf70u,51c);
}
B551037:L551037:{c.instructions+=6;NFSU2_TR(0x551037);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55103b:{NFSU2_TR(0x55103b);
u8 U[16];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B551042:{NFSU2_TR(0x551042);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551044:{NFSU2_TR(0x551044);
u8 U[4];
w4(U+0,u32(0x79b9e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551049:{NFSU2_TR(0x551049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55104a:{NFSU2_TR(0x55104a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55104full));
TAIL_STATIC(0x51cf70u,51c);
}
B55104f:L55104f:{c.instructions+=1;NFSU2_TR(0x55104f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B551052:L551052:{c.instructions+=3;NFSU2_TR(0x551052);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551054:{NFSU2_TR(0x551054);
__builtin_memmove((R+4),(R+28),4);
}
B551056:{NFSU2_TR(0x551056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55105bull));
TAIL_STATIC(0x5316b0u,531);
}
B55105b:L55105b:{c.instructions+=2;NFSU2_TR(0x55105b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B551061:{NFSU2_TR(0x551061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551066ull));
TAIL_STATIC(0x479220u,479);
}
B551066:L551066:{c.instructions+=4;NFSU2_TR(0x551066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551067:{NFSU2_TR(0x551067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B551068:{NFSU2_TR(0x551068);
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
B55106b:{NFSU2_TR(0x55106b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551070:L551070:{c.instructions+=8;NFSU2_TR(0x551070);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551071:{NFSU2_TR(0x551071);
__builtin_memmove((R+20),(R+16),4);
}
B551073:{NFSU2_TR(0x551073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551074:{NFSU2_TR(0x551074);
__builtin_memmove((R+24),(R+4),4);
}
B551076:{NFSU2_TR(0x551076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55107c:{NFSU2_TR(0x55107c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55107e:{NFSU2_TR(0x55107e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55107f:{NFSU2_TR(0x55107f);
if(r1(R+518)){{goto L551088;}}
}
B551081:L551081:{c.instructions+=2;NFSU2_TR(0x551081);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551086:{NFSU2_TR(0x551086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551093;}}
}
B551088:L551088:{c.instructions+=2;NFSU2_TR(0x551088);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B55108d:{NFSU2_TR(0x55108d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551093:L551093:{c.instructions+=3;NFSU2_TR(0x551093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551099:{NFSU2_TR(0x551099);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55109b:{NFSU2_TR(0x55109b);
if(r1(R+518)){{goto L5510a4;}}
}
B55109d:L55109d:{c.instructions+=2;NFSU2_TR(0x55109d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5510a2:{NFSU2_TR(0x5510a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5510b0;}}
}
B5510a4:L5510a4:{c.instructions+=2;NFSU2_TR(0x5510a4);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5510aa:{NFSU2_TR(0x5510aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5510b0:L5510b0:{c.instructions+=21;NFSU2_TR(0x5510b0);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5510b6:{NFSU2_TR(0x5510b6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5510b9:{NFSU2_TR(0x5510b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5510bf:{NFSU2_TR(0x5510bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5510c5:{NFSU2_TR(0x5510c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5510cb:{NFSU2_TR(0x5510cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5510d1:{NFSU2_TR(0x5510d1);
__builtin_memmove((R+0),(R+4),4);
}
B5510d3:{NFSU2_TR(0x5510d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5510d5:{NFSU2_TR(0x5510d5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5510d7:{NFSU2_TR(0x5510d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5510dd:{NFSU2_TR(0x5510dd);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B5510e3:{NFSU2_TR(0x5510e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5510e9:{NFSU2_TR(0x5510e9);
__builtin_memmove((R+0),(R+4),4);
}
B5510eb:{NFSU2_TR(0x5510eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5510f1:{NFSU2_TR(0x5510f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5510f7:{NFSU2_TR(0x5510f7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5510f9:{NFSU2_TR(0x5510f9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5510fb:{NFSU2_TR(0x5510fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5510fd:{NFSU2_TR(0x5510fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551103:{NFSU2_TR(0x551103);
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
B551106:{NFSU2_TR(0x551106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5511d3;}}
}
B55110c:L55110c:{c.instructions+=3;NFSU2_TR(0x55110c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551112:{NFSU2_TR(0x551112);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551114:{NFSU2_TR(0x551114);
if(r1(R+518)){{goto L55111d;}}
}
B551116:L551116:{c.instructions+=2;NFSU2_TR(0x551116);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55111b:{NFSU2_TR(0x55111b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551137;}}
}
B55111d:L55111d:{c.instructions+=4;NFSU2_TR(0x55111d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B551120:{NFSU2_TR(0x551120);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B551126:{NFSU2_TR(0x551126);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55112c:{NFSU2_TR(0x55112c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551131ull));
TAIL_STATIC(0x75bed4u,75b);
}
B551131:L551131:{c.instructions+=1;NFSU2_TR(0x551131);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551137:L551137:{c.instructions+=4;NFSU2_TR(0x551137);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55113a:{NFSU2_TR(0x55113a);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B551140:{NFSU2_TR(0x551140);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B551146:{NFSU2_TR(0x551146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55114bull));
TAIL_STATIC(0x75bed4u,75b);
}
B55114b:L55114b:{c.instructions+=10;NFSU2_TR(0x55114b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551151:{NFSU2_TR(0x551151);
__builtin_memmove((R+4),(R+0),4);
}
B551153:{NFSU2_TR(0x551153);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B551155:{NFSU2_TR(0x551155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55115b:{NFSU2_TR(0x55115b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B551161:{NFSU2_TR(0x551161);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B551164:{NFSU2_TR(0x551164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551167:{NFSU2_TR(0x551167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551168:{NFSU2_TR(0x551168);
__builtin_memmove((R+4),(R+24),4);
}
B55116a:{NFSU2_TR(0x55116a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55116full));
TAIL_STATIC(0x54bd30u,54b);
}
B55116f:L55116f:{c.instructions+=2;NFSU2_TR(0x55116f);
u8 U[8];
__builtin_memmove((U+0),gp(0x862838),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B551176:{NFSU2_TR(0x551176);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55117f;}}
}
B551178:L551178:{c.instructions+=2;NFSU2_TR(0x551178);
__builtin_memmove((R+4),(R+24),4);
}
B55117a:{NFSU2_TR(0x55117a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55117full));
TAIL_STATIC(0x525650u,525);
}
B55117f:L55117f:{c.instructions+=3;NFSU2_TR(0x55117f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551182:{NFSU2_TR(0x551182);
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
B551184:{NFSU2_TR(0x551184);
if(r1(R+518)){{goto L5511d3;}}
}
B551186:L551186:{c.instructions+=3;NFSU2_TR(0x551186);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551189:{NFSU2_TR(0x551189);
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
B55118b:{NFSU2_TR(0x55118b);
if(r1(R+518)){{goto L5511cf;}}
}
B55118d:L55118d:{c.instructions+=3;NFSU2_TR(0x55118d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551190:{NFSU2_TR(0x551190);
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
B551192:{NFSU2_TR(0x551192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5511cf;}}
}
B551194:L551194:{c.instructions+=3;NFSU2_TR(0x551194);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551197:{NFSU2_TR(0x551197);
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
B551199:{NFSU2_TR(0x551199);
if(r1(R+518)){{goto L5511cf;}}
}
B55119b:L55119b:{c.instructions+=4;NFSU2_TR(0x55119b);
w4(R+28,u32(r1(R+0)));
}
B55119e:{NFSU2_TR(0x55119e);
u8 U[13];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5511a2:{NFSU2_TR(0x5511a2);
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
B5511a4:{NFSU2_TR(0x5511a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5511cf;}}
}
B5511a6:L5511a6:{c.instructions+=4;NFSU2_TR(0x5511a6);
__builtin_memmove((R+0),gp(0x7993b4),4);
}
B5511ab:{NFSU2_TR(0x5511ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511ac:{NFSU2_TR(0x5511ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5511af:{NFSU2_TR(0x5511af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5511b4ull));
TAIL_STATIC(0x4ae7b0u,4ae);
}
B5511b4:L5511b4:{c.instructions+=6;NFSU2_TR(0x5511b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511b5:{NFSU2_TR(0x5511b5);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511b7:{NFSU2_TR(0x5511b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5511ba:{NFSU2_TR(0x5511ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511bb:{NFSU2_TR(0x5511bb);
__builtin_memmove((R+4),(R+24),4);
}
B5511bd:{NFSU2_TR(0x5511bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5511c2ull));
TAIL_STATIC(0x5111f0u,511);
}
B5511c2:L5511c2:{c.instructions+=3;NFSU2_TR(0x5511c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5511c6:{NFSU2_TR(0x5511c6);
u8 U[13];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5511cb:{NFSU2_TR(0x5511cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5511cf:L5511cf:{c.instructions+=1;NFSU2_TR(0x5511cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5511d3:L5511d3:{c.instructions+=4;NFSU2_TR(0x5511d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5511d4:{NFSU2_TR(0x5511d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5511d5:{NFSU2_TR(0x5511d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5511d6:{NFSU2_TR(0x5511d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5511e0:L5511e0:{c.instructions+=14;NFSU2_TR(0x5511e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511e2:{NFSU2_TR(0x5511e2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511e7:{NFSU2_TR(0x5511e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5511ed:{NFSU2_TR(0x5511ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511ee:{NFSU2_TR(0x5511ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5511f5:{NFSU2_TR(0x5511f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511f6:{NFSU2_TR(0x5511f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5511f7:{NFSU2_TR(0x5511f7);
__builtin_memmove((R+24),(R+4),4);
}
B5511f9:{NFSU2_TR(0x5511f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5511fd:{NFSU2_TR(0x5511fd);
u8 U[4];
w4(U+0,u32(0x79c88cull));
s4(u32(r4(R+24)),r4(U+0));
}
B551203:{NFSU2_TR(0x551203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551206:{NFSU2_TR(0x551206);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551209:{NFSU2_TR(0x551209);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B551211:{NFSU2_TR(0x551211);
if(r1(R+518)){{goto L55123c;}}
}
B551213:L551213:{c.instructions+=5;NFSU2_TR(0x551213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551219:{NFSU2_TR(0x551219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55121a:{NFSU2_TR(0x55121a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55121b:{NFSU2_TR(0x55121b);
u8 U[4];
w4(U+0,u32(0x79c858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551220:{NFSU2_TR(0x551220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551225ull));
TAIL_STATIC(0x50d510u,50d);
}
B551225:L551225:{c.instructions+=7;NFSU2_TR(0x551225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551228:{NFSU2_TR(0x551228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55122e:{NFSU2_TR(0x55122e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551231:{NFSU2_TR(0x551231);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551232:{NFSU2_TR(0x551232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551233:{NFSU2_TR(0x551233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551234:{NFSU2_TR(0x551234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551239ull));
TAIL_STATIC(0x51cdf0u,51c);
}
B551239:L551239:{c.instructions+=1;NFSU2_TR(0x551239);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55123c:L55123c:{c.instructions+=3;NFSU2_TR(0x55123c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55123f:{NFSU2_TR(0x55123f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551241:{NFSU2_TR(0x551241);
if(r1(R+518)){{goto L551255;}}
}
B551243:L551243:{c.instructions+=5;NFSU2_TR(0x551243);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B551248:{NFSU2_TR(0x551248);
__builtin_memmove((R+4),(R+0),4);
}
B55124a:{NFSU2_TR(0x55124a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55124c:{NFSU2_TR(0x55124c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551250:{NFSU2_TR(0x551250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551255ull));
TAIL_STATIC(0x542990u,542);
}
B551255:L551255:{c.instructions+=6;NFSU2_TR(0x551255);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551259:{NFSU2_TR(0x551259);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55125f:{NFSU2_TR(0x55125f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551260:{NFSU2_TR(0x551260);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551267:{NFSU2_TR(0x551267);
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
B55126a:{NFSU2_TR(0x55126a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551270:L551270:{c.instructions+=5;NFSU2_TR(0x551270);
__builtin_memmove((R+8),(R+4),4);
}
B551272:{NFSU2_TR(0x551272);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551278:{NFSU2_TR(0x551278);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55127a:{NFSU2_TR(0x55127a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55127b:{NFSU2_TR(0x55127b);
if(r1(R+518)){{goto L551319;}}
}
B551281:L551281:{c.instructions+=3;NFSU2_TR(0x551281);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551287:{NFSU2_TR(0x551287);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551289:{NFSU2_TR(0x551289);
if(r1(R+518)){{goto L551319;}}
}
B55128f:L55128f:{c.instructions+=8;NFSU2_TR(0x55128f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551295:{NFSU2_TR(0x551295);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B551299:{NFSU2_TR(0x551299);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55129c:{NFSU2_TR(0x55129c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55129d:{NFSU2_TR(0x55129d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5512a0:{NFSU2_TR(0x5512a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x208ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5512a6:{NFSU2_TR(0x5512a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5512a7:{NFSU2_TR(0x5512a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5512b8;}}
}
B5512a9:L5512a9:{c.instructions+=2;NFSU2_TR(0x5512a9);
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
B5512ab:{NFSU2_TR(0x5512ab);
if(r1(R+518)){{goto L5512b2;}}
}
B5512ad:L5512ad:{c.instructions+=1;NFSU2_TR(0x5512ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5512b2ull));
TAIL_STATIC(0x54c7f0u,54c);
}
B5512b2:L5512b2:{c.instructions+=3;NFSU2_TR(0x5512b2);
w1(R+0,u8(0x1ull));
}
B5512b4:{NFSU2_TR(0x5512b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5512b5:{NFSU2_TR(0x5512b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5512b8:L5512b8:{c.instructions+=2;NFSU2_TR(0x5512b8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5512bb:{NFSU2_TR(0x5512bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5512c8;}}
}
B5512bd:L5512bd:{c.instructions+=1;NFSU2_TR(0x5512bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5512c2ull));
TAIL_STATIC(0x54c8a0u,54c);
}
B5512c2:L5512c2:{c.instructions+=3;NFSU2_TR(0x5512c2);
w1(R+0,u8(0x1ull));
}
B5512c4:{NFSU2_TR(0x5512c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5512c5:{NFSU2_TR(0x5512c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5512c8:L5512c8:{c.instructions+=2;NFSU2_TR(0x5512c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5512cb:{NFSU2_TR(0x5512cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5512ec;}}
}
B5512cd:L5512cd:{c.instructions+=3;NFSU2_TR(0x5512cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5512d3:{NFSU2_TR(0x5512d3);
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
B5512d5:{NFSU2_TR(0x5512d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L551313;}}
}
B5512d7:L5512d7:{c.instructions+=6;NFSU2_TR(0x5512d7);
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
B5512d8:{NFSU2_TR(0x5512d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5512de:{NFSU2_TR(0x5512de);
u8 U[13];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5512e6:{NFSU2_TR(0x5512e6);
w1(R+0,u8(0x1ull));
}
B5512e8:{NFSU2_TR(0x5512e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5512e9:{NFSU2_TR(0x5512e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5512ec:L5512ec:{c.instructions+=3;NFSU2_TR(0x5512ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5512ed:{NFSU2_TR(0x5512ed);
__builtin_memmove((R+4),(R+8),4);
}
B5512ef:{NFSU2_TR(0x5512ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5512f4ull));
TAIL_STATIC(0x4ff310u,4ff);
}
B5512f4:L5512f4:{c.instructions+=2;NFSU2_TR(0x5512f4);
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
B5512f6:{NFSU2_TR(0x5512f6);
if(r1(R+518)){{goto L551313;}}
}
B5512f8:L5512f8:{c.instructions+=3;NFSU2_TR(0x5512f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5512fe:{NFSU2_TR(0x5512fe);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20cull))));
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
B551304:{NFSU2_TR(0x551304);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L551313;}}
}
B551306:L551306:{c.instructions+=2;NFSU2_TR(0x551306);
u8 U[13];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B55130d:{NFSU2_TR(0x55130d);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B551313:L551313:{c.instructions+=3;NFSU2_TR(0x551313);
w1(R+0,u8(0x1ull));
}
B551315:{NFSU2_TR(0x551315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551316:{NFSU2_TR(0x551316);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551319:L551319:{c.instructions+=3;NFSU2_TR(0x551319);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55131b:{NFSU2_TR(0x55131b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55131c:{NFSU2_TR(0x55131c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551320:L551320:{c.instructions+=5;NFSU2_TR(0x551320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551321:{NFSU2_TR(0x551321);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551322:{NFSU2_TR(0x551322);
__builtin_memmove((R+24),(R+4),4);
}
B551324:{NFSU2_TR(0x551324);
w4(R+4,u32(0x827e88ull));
}
B551329:{NFSU2_TR(0x551329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55132eull));
TAIL_STATIC(0x430560u,430);
}
B55132e:L55132e:{c.instructions+=2;NFSU2_TR(0x55132e);
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
B551330:{NFSU2_TR(0x551330);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551420;}}
}
B551336:L551336:{c.instructions+=2;NFSU2_TR(0x551336);
w4(R+4,u32(0x827e88ull));
}
B55133b:{NFSU2_TR(0x55133b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551340ull));
TAIL_STATIC(0x430550u,430);
}
B551340:L551340:{c.instructions+=2;NFSU2_TR(0x551340);
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
B551342:{NFSU2_TR(0x551342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551420;}}
}
B551348:L551348:{c.instructions+=3;NFSU2_TR(0x551348);
__builtin_memmove((R+0),gp(0x838440),1);
}
B55134d:{NFSU2_TR(0x55134d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55134f:{NFSU2_TR(0x55134f);
if(r1(R+518)){{goto L551362;}}
}
B551351:L551351:{c.instructions+=2;NFSU2_TR(0x551351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7134ull))));
w4(U+4,u32(0xf4240ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55135b:{NFSU2_TR(0x55135b);
s1(0x838440,u8(0x0ull));
}
B551362:L551362:{c.instructions+=2;NFSU2_TR(0x551362);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551369:{NFSU2_TR(0x551369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513e5;}}
}
B55136b:L55136b:{c.instructions+=2;NFSU2_TR(0x55136b);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551372:{NFSU2_TR(0x551372);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513e5;}}
}
B551374:L551374:{c.instructions+=4;NFSU2_TR(0x551374);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B551379:{NFSU2_TR(0x551379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55137f:{NFSU2_TR(0x55137f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551381:{NFSU2_TR(0x551381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513e5;}}
}
B551383:L551383:{c.instructions+=3;NFSU2_TR(0x551383);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B551388:{NFSU2_TR(0x551388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55138a:{NFSU2_TR(0x55138a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513e5;}}
}
B55138c:L55138c:{c.instructions+=3;NFSU2_TR(0x55138c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B551392:{NFSU2_TR(0x551392);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B551395:{NFSU2_TR(0x551395);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513d3;}}
}
B551397:L551397:{c.instructions+=2;NFSU2_TR(0x551397);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x713cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55139d:{NFSU2_TR(0x55139d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5513a2ull));
TAIL_STATIC(0x502420u,502);
}
B5513a2:L5513a2:{c.instructions+=2;NFSU2_TR(0x5513a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5513a4:{NFSU2_TR(0x5513a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5513ce;}}
}
B5513a6:L5513a6:{c.instructions+=8;NFSU2_TR(0x5513a6);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5513ac:{NFSU2_TR(0x5513ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5513b2:{NFSU2_TR(0x5513b2);
{u32 ea_=u32(r4(R+24)+u32(34660u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5513b8:{NFSU2_TR(0x5513b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5513bc:{NFSU2_TR(0x5513bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5513c0:{NFSU2_TR(0x5513c0);
{u32 ea_=u32(r4(R+24)+u32(34660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5513c6:{NFSU2_TR(0x5513c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5513c7:{NFSU2_TR(0x5513c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5513ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551070u);}goto L551070;}
}
B5513cc:L5513cc:{c.instructions+=1;NFSU2_TR(0x5513cc);
{goto L5513d3;}
}
B5513ce:L5513ce:{c.instructions+=1;NFSU2_TR(0x5513ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5513d3ull));
TAIL_STATIC(0x534290u,534);
}
B5513d3:L5513d3:{c.instructions+=4;NFSU2_TR(0x5513d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8764ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5513d9:{NFSU2_TR(0x5513d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5513da:{NFSU2_TR(0x5513da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5513e0:{NFSU2_TR(0x5513e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5513e5ull));
TAIL_STATIC(0x529750u,529);
}
B5513e5:L5513e5:{c.instructions+=3;NFSU2_TR(0x5513e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x713cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5513eb:{NFSU2_TR(0x5513eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5513ed:{NFSU2_TR(0x5513ed);
if(r1(R+518)){{goto L5513f4;}}
}
B5513ef:L5513ef:{c.instructions+=2;NFSU2_TR(0x5513ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5513f2:{NFSU2_TR(0x5513f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551415;}}
}
B5513f4:L5513f4:{c.instructions+=2;NFSU2_TR(0x5513f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4230ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5513fa:{NFSU2_TR(0x5513fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5513ffull));
TAIL_STATIC(0x513db0u,513);
}
B5513ff:L5513ff:{c.instructions+=2;NFSU2_TR(0x5513ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551405:{NFSU2_TR(0x551405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55140aull));
TAIL_STATIC(0x514810u,514);
}
B55140a:L55140a:{c.instructions+=2;NFSU2_TR(0x55140a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551410:{NFSU2_TR(0x551410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551415ull));
TAIL_STATIC(0x5016a0u,501);
}
B551415:L551415:{c.instructions+=4;NFSU2_TR(0x551415);
__builtin_memmove((R+4),(R+24),4);
}
B551417:{NFSU2_TR(0x551417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551418:{NFSU2_TR(0x551418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55141b:{NFSU2_TR(0x55141b);
TAIL_STATIC(0x5417f0u,541);
}
B551420:L551420:{c.instructions+=3;NFSU2_TR(0x551420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551421:{NFSU2_TR(0x551421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551422:{NFSU2_TR(0x551422);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551430:L551430:{c.instructions+=12;NFSU2_TR(0x551430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551431:{NFSU2_TR(0x551431);
__builtin_memmove((R+20),(R+16),4);
}
B551433:{NFSU2_TR(0x551433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B551436:{NFSU2_TR(0x551436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551439:{NFSU2_TR(0x551439);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55143a:{NFSU2_TR(0x55143a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55143b:{NFSU2_TR(0x55143b);
__builtin_memmove((R+24),(R+4),4);
}
B55143d:{NFSU2_TR(0x55143d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55143e:{NFSU2_TR(0x55143e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1599cull))));
__builtin_memmove((R+28),(U+0),4);
}
B551444:{NFSU2_TR(0x551444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551445:{NFSU2_TR(0x551445);
__builtin_memmove((R+4),(R+28),4);
}
B551447:{NFSU2_TR(0x551447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55144cull));
TAIL_STATIC(0x54cca0u,54c);
}
B55144c:L55144c:{c.instructions+=8;NFSU2_TR(0x55144c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551452:{NFSU2_TR(0x551452);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B551457:{NFSU2_TR(0x551457);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55145a:{NFSU2_TR(0x55145a);
__builtin_memmove((R+4),(R+518),1);
}
B55145d:{NFSU2_TR(0x55145d);
w4(R+12,u32(r1(R+4)));
}
B551460:{NFSU2_TR(0x551460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551461:{NFSU2_TR(0x551461);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551464:{NFSU2_TR(0x551464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551469ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B551469:L551469:{c.instructions+=3;NFSU2_TR(0x551469);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55146c:{NFSU2_TR(0x55146c);
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
B55146e:{NFSU2_TR(0x55146e);
if(r1(R+518)){{goto L5514a8;}}
}
B551470:L551470:{c.instructions+=3;NFSU2_TR(0x551470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551476:{NFSU2_TR(0x551476);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B551478:{NFSU2_TR(0x551478);
if(r1(R+518)){{goto L551483;}}
}
B55147a:L55147a:{c.instructions+=2;NFSU2_TR(0x55147a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B551481:{NFSU2_TR(0x551481);
{goto L5514af;}
}
B551483:L551483:{c.instructions+=2;NFSU2_TR(0x551483);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B551485:{NFSU2_TR(0x551485);
if(r1(R+518)){{goto L551490;}}
}
B551487:L551487:{c.instructions+=2;NFSU2_TR(0x551487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55148e:{NFSU2_TR(0x55148e);
{goto L5514af;}
}
B551490:L551490:{c.instructions+=2;NFSU2_TR(0x551490);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B551492:{NFSU2_TR(0x551492);
if(r1(R+518)){{goto L55149d;}}
}
B551494:L551494:{c.instructions+=2;NFSU2_TR(0x551494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55149b:{NFSU2_TR(0x55149b);
{goto L5514af;}
}
B55149d:L55149d:{c.instructions+=3;NFSU2_TR(0x55149d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55149f:{NFSU2_TR(0x55149f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5514a6:{NFSU2_TR(0x5514a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5514af;}}
}
B5514a8:L5514a8:{c.instructions+=1;NFSU2_TR(0x5514a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5514af:L5514af:{c.instructions+=9;NFSU2_TR(0x5514af);
__builtin_memmove((R+4),gp(0x89e7bc),4);
}
B5514b5:{NFSU2_TR(0x5514b5);
__builtin_memmove((R+8),gp(0x89e7a0),4);
}
B5514bb:{NFSU2_TR(0x5514bb);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B5514c0:{NFSU2_TR(0x5514c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5514c3:{NFSU2_TR(0x5514c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5514c5:{NFSU2_TR(0x5514c5);
w4(R+4,u32(0x89e7a0ull));
}
B5514ca:{NFSU2_TR(0x5514ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5514cd:{NFSU2_TR(0x5514cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5514d0:{NFSU2_TR(0x5514d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5514d5ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B5514d5:L5514d5:{c.instructions+=4;NFSU2_TR(0x5514d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5514db:{NFSU2_TR(0x5514db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5514dd:{NFSU2_TR(0x5514dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5514df:{NFSU2_TR(0x5514df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5514fa;}}
}
B5514e1:L5514e1:{c.instructions+=1;NFSU2_TR(0x5514e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5514e4:L5514e4:{c.instructions+=2;NFSU2_TR(0x5514e4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5514e6:{NFSU2_TR(0x5514e6);
if(r1(R+518)){{goto L55156e;}}
}
B5514ec:L5514ec:{c.instructions+=4;NFSU2_TR(0x5514ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5514ed:{NFSU2_TR(0x5514ed);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x224ull))));
}
B5514f3:{NFSU2_TR(0x5514f3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5514f5:{NFSU2_TR(0x5514f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5514e4u);}goto L5514e4;}}
}
B5514f7:L5514f7:{c.instructions+=1;NFSU2_TR(0x5514f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5514fa:L5514fa:{c.instructions+=1;NFSU2_TR(0x5514fa);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5514fc:L5514fc:{c.instructions+=12;NFSU2_TR(0x5514fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5514ff:{NFSU2_TR(0x5514ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551502:{NFSU2_TR(0x551502);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551503:{NFSU2_TR(0x551503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551506:{NFSU2_TR(0x551506);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551507:{NFSU2_TR(0x551507);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551508:{NFSU2_TR(0x551508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55150b:{NFSU2_TR(0x55150b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55150c:{NFSU2_TR(0x55150c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55150d:{NFSU2_TR(0x55150d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55150e:{NFSU2_TR(0x55150e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B551514:{NFSU2_TR(0x551514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551519ull));
TAIL_STATIC(0x515990u,515);
}
B551519:L551519:{c.instructions+=2;NFSU2_TR(0x551519);
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
B55151b:{NFSU2_TR(0x55151b);
if(r1(R+518)){{goto L55154e;}}
}
B55151d:L55151d:{c.instructions+=3;NFSU2_TR(0x55151d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55151f:{NFSU2_TR(0x55151f);
w4(R+4,u32(0x89e7a0ull));
}
B551524:{NFSU2_TR(0x551524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551529ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B551529:L551529:{c.instructions+=3;NFSU2_TR(0x551529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55152a:{NFSU2_TR(0x55152a);
__builtin_memmove((R+4),(R+28),4);
}
B55152c:{NFSU2_TR(0x55152c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551531ull));
TAIL_STATIC(0x503320u,503);
}
B551531:L551531:{c.instructions+=12;NFSU2_TR(0x551531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551534:{NFSU2_TR(0x551534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551537:{NFSU2_TR(0x551537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551538:{NFSU2_TR(0x551538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55153b:{NFSU2_TR(0x55153b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55153c:{NFSU2_TR(0x55153c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55153d:{NFSU2_TR(0x55153d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551540:{NFSU2_TR(0x551540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551541:{NFSU2_TR(0x551541);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551542:{NFSU2_TR(0x551542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551543:{NFSU2_TR(0x551543);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14c58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551549:{NFSU2_TR(0x551549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55154eull));
TAIL_STATIC(0x515990u,515);
}
B55154e:L55154e:{c.instructions+=5;NFSU2_TR(0x55154e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156a8ull))));
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
B551555:{NFSU2_TR(0x551555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551556:{NFSU2_TR(0x551556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551557:{NFSU2_TR(0x551557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551558:{NFSU2_TR(0x551558);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551568;}}
}
B55155a:L55155a:{c.instructions+=4;NFSU2_TR(0x55155a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55155d:{NFSU2_TR(0x55155d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55155e:{NFSU2_TR(0x55155e);
w4(R+4,u32(0x85ad40ull));
}
B551563:{NFSU2_TR(0x551563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551568ull));
TAIL_STATIC(0x54ca60u,54c);
}
B551568:L551568:{c.instructions+=3;NFSU2_TR(0x551568);
__builtin_memmove((R+16),(R+20),4);
}
B55156a:{NFSU2_TR(0x55156a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55156b:{NFSU2_TR(0x55156b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55156e:L55156e:{c.instructions+=4;NFSU2_TR(0x55156e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B551571:{NFSU2_TR(0x551571);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B551577:{NFSU2_TR(0x551577);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B551579:{NFSU2_TR(0x551579);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5514fcu);}goto L5514fc;}
}
B551580:L551580:{c.instructions+=7;NFSU2_TR(0x551580);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551583:{NFSU2_TR(0x551583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551586:{NFSU2_TR(0x551586);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B55158a:{NFSU2_TR(0x55158a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B55158d:{NFSU2_TR(0x55158d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55158e:{NFSU2_TR(0x55158e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x52676b50ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B551594:{NFSU2_TR(0x551594);
if(r1(R+518)){{goto L5515c4;}}
}
B551596:L551596:{c.instructions+=2;NFSU2_TR(0x551596);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551598:{NFSU2_TR(0x551598);
if(r1(R+518)){{goto L5515bc;}}
}
B55159a:L55159a:{c.instructions+=4;NFSU2_TR(0x55159a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55159d:{NFSU2_TR(0x55159d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5515a1:{NFSU2_TR(0x5515a1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x52676b50ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5515a7:{NFSU2_TR(0x5515a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551596u);}goto L551596;}}
}
B5515a9:L5515a9:{c.instructions+=6;NFSU2_TR(0x5515a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5515ac:{NFSU2_TR(0x5515ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515ae:{NFSU2_TR(0x5515ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515af:{NFSU2_TR(0x5515af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5515b2:{NFSU2_TR(0x5515b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515b3:{NFSU2_TR(0x5515b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5515b8ull));
TAIL_STATIC(0x54d1d0u,54d);
}
B5515b8:L5515b8:{c.instructions+=3;NFSU2_TR(0x5515b8);
w1(R+0,u8(0x1ull));
}
B5515ba:{NFSU2_TR(0x5515ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5515bb:{NFSU2_TR(0x5515bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5515bc:L5515bc:{c.instructions+=2;NFSU2_TR(0x5515bc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x52676b50ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x52676b50ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x52676b50ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5515c2:{NFSU2_TR(0x5515c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5515d3;}}
}
B5515c4:L5515c4:{c.instructions+=6;NFSU2_TR(0x5515c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5515c7:{NFSU2_TR(0x5515c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515c9:{NFSU2_TR(0x5515c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515ca:{NFSU2_TR(0x5515ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5515cd:{NFSU2_TR(0x5515cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515ce:{NFSU2_TR(0x5515ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5515d3ull));
TAIL_STATIC(0x54d1d0u,54d);
}
B5515d3:L5515d3:{c.instructions+=3;NFSU2_TR(0x5515d3);
w1(R+0,u8(0x1ull));
}
B5515d5:{NFSU2_TR(0x5515d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5515d6:{NFSU2_TR(0x5515d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5515e0:L5515e0:{c.instructions+=22;NFSU2_TR(0x5515e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515e2:{NFSU2_TR(0x5515e2);
u8 U[4];
w4(U+0,u32(0x777babull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515e7:{NFSU2_TR(0x5515e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5515ed:{NFSU2_TR(0x5515ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515ee:{NFSU2_TR(0x5515ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5515f5:{NFSU2_TR(0x5515f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5515f8:{NFSU2_TR(0x5515f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5515fc:{NFSU2_TR(0x5515fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515fd:{NFSU2_TR(0x5515fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515fe:{NFSU2_TR(0x5515fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5515ff:{NFSU2_TR(0x5515ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551600:{NFSU2_TR(0x551600);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551604:{NFSU2_TR(0x551604);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B551606:{NFSU2_TR(0x551606);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B551608:{NFSU2_TR(0x551608);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55160a:{NFSU2_TR(0x55160a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B55160c:{NFSU2_TR(0x55160c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B55160e:{NFSU2_TR(0x55160e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551612:{NFSU2_TR(0x551612);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551616:{NFSU2_TR(0x551616);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B55161e:{NFSU2_TR(0x55161e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551622:{NFSU2_TR(0x551622);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L551b5c;}}
}
B551628:L551628:{c.instructions+=1;NFSU2_TR(0x551628);
{goto L551630;}
}
B551630:L551630:{c.instructions+=3;NFSU2_TR(0x551630);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B551633:{NFSU2_TR(0x551633);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6653ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6653ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551638:{NFSU2_TR(0x551638);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5518aa;}}
}
B55163e:L55163e:{c.instructions+=1;NFSU2_TR(0x55163e);
if(r1(R+518)){{goto L551897;}}
}
B551644:L551644:{c.instructions+=2;NFSU2_TR(0x551644);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6154ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6154ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551649:{NFSU2_TR(0x551649);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L551731;}}
}
B55164f:L55164f:{c.instructions+=1;NFSU2_TR(0x55164f);
if(r1(R+518)){{goto L55171e;}}
}
B551655:L551655:{c.instructions+=2;NFSU2_TR(0x551655);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4946ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55165a:{NFSU2_TR(0x55165a);
if(r1(R+518)){{goto L5516ca;}}
}
B55165c:L55165c:{c.instructions+=2;NFSU2_TR(0x55165c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B55165f:{NFSU2_TR(0x55165f);
if(r1(R+518)){{goto L5516b1;}}
}
B551661:L551661:{c.instructions+=2;NFSU2_TR(0x551661);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcf2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B551666:{NFSU2_TR(0x551666);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B55166c:L55166c:{c.instructions+=11;NFSU2_TR(0x55166c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B551670:{NFSU2_TR(0x551670);
w4(R+0,u32(0x2aaaaaabull));
}
B551675:{NFSU2_TR(0x551675);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B551677:{NFSU2_TR(0x551677);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B551679:{NFSU2_TR(0x551679);
__builtin_memmove((R+4),(R+8),4);
}
B55167b:{NFSU2_TR(0x55167b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B55167e:{NFSU2_TR(0x55167e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B551680:{NFSU2_TR(0x551680);
__builtin_memmove((R+24),(R+8),4);
}
B551682:{NFSU2_TR(0x551682);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551683:{NFSU2_TR(0x551683);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551686:{NFSU2_TR(0x551686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55168bull));
TAIL_STATIC(0x519a10u,519);
}
B55168b:L55168b:{c.instructions+=2;NFSU2_TR(0x55168b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55168e:{NFSU2_TR(0x55168e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551691:L551691:{c.instructions+=10;NFSU2_TR(0x551691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B551693:{NFSU2_TR(0x551693);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B551695:{NFSU2_TR(0x551695);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551698:{NFSU2_TR(0x551698);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55169b:{NFSU2_TR(0x55169b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55169e:{NFSU2_TR(0x55169e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5516a1:{NFSU2_TR(0x5516a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B5516a4:{NFSU2_TR(0x5516a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5516a7:{NFSU2_TR(0x5516a7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5516a8:{NFSU2_TR(0x5516a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551691u);}goto L551691;}}
}
B5516aa:L5516aa:{c.instructions+=2;NFSU2_TR(0x5516aa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5516ac:{NFSU2_TR(0x5516ac);
{goto L551b44;}
}
B5516b1:L5516b1:{c.instructions+=5;NFSU2_TR(0x5516b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5516b4:{NFSU2_TR(0x5516b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5516b8:{NFSU2_TR(0x5516b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5516bb:{NFSU2_TR(0x5516bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5516bc:{NFSU2_TR(0x5516bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5516c1ull));
TAIL_STATIC(0x5046b0u,504);
}
B5516c1:L5516c1:{c.instructions+=3;NFSU2_TR(0x5516c1);
__builtin_memmove((R+12),(R+0),4);
}
B5516c3:{NFSU2_TR(0x5516c3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5516c5:{NFSU2_TR(0x5516c5);
{goto L551b44;}
}
B5516ca:L5516ca:{c.instructions+=27;NFSU2_TR(0x5516ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5516ce:{NFSU2_TR(0x5516ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5516d1:{NFSU2_TR(0x5516d1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5516d2:{NFSU2_TR(0x5516d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5516d6:{NFSU2_TR(0x5516d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5516d9:{NFSU2_TR(0x5516d9);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B5516db:{NFSU2_TR(0x5516db);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5516de:{NFSU2_TR(0x5516de);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+20)),r1(U+0));
}
B5516e1:{NFSU2_TR(0x5516e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5516e4:{NFSU2_TR(0x5516e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5516e7:{NFSU2_TR(0x5516e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5516ea:{NFSU2_TR(0x5516ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5516ed:{NFSU2_TR(0x5516ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5516f0:{NFSU2_TR(0x5516f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5516f3:{NFSU2_TR(0x5516f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5516f6:{NFSU2_TR(0x5516f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5516f9:{NFSU2_TR(0x5516f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B5516fb:{NFSU2_TR(0x5516fb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B551700:{NFSU2_TR(0x551700);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B551702:{NFSU2_TR(0x551702);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551706:{NFSU2_TR(0x551706);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551709:{NFSU2_TR(0x551709);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B55170d:{NFSU2_TR(0x55170d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B551710:{NFSU2_TR(0x551710);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551713:{NFSU2_TR(0x551713);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B551715:{NFSU2_TR(0x551715);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551719:{NFSU2_TR(0x551719);
{goto L551b44;}
}
B55171e:L55171e:{c.instructions+=2;NFSU2_TR(0x55171e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551720:{NFSU2_TR(0x551720);
if(r1(R+518)){{goto L551b44;}}
}
B551726:L551726:{c.instructions+=3;NFSU2_TR(0x551726);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B551729:{NFSU2_TR(0x551729);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55172c:{NFSU2_TR(0x55172c);
{goto L551b44;}
}
B551731:L551731:{c.instructions+=2;NFSU2_TR(0x551731);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6254ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551736:{NFSU2_TR(0x551736);
if(r1(R+518)){{goto L551868;}}
}
B55173c:L55173c:{c.instructions+=2;NFSU2_TR(0x55173c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6353ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551741:{NFSU2_TR(0x551741);
if(r1(R+518)){{goto L55185d;}}
}
B551747:L551747:{c.instructions+=2;NFSU2_TR(0x551747);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x644bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55174c:{NFSU2_TR(0x55174c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B551752:L551752:{c.instructions+=16;NFSU2_TR(0x551752);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B551756:{NFSU2_TR(0x551756);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B55175a:{NFSU2_TR(0x55175a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B55175d:{NFSU2_TR(0x55175d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B55175f:{NFSU2_TR(0x55175f);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x55175f);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x55175f);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B551761:{NFSU2_TR(0x551761);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551765:{NFSU2_TR(0x551765);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B551768:{NFSU2_TR(0x551768);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B551769:{NFSU2_TR(0x551769);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55176d:{NFSU2_TR(0x55176d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551771:{NFSU2_TR(0x551771);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551775:{NFSU2_TR(0x551775);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B551778:{NFSU2_TR(0x551778);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55177c:{NFSU2_TR(0x55177c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55177f:{NFSU2_TR(0x55177f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551781:{NFSU2_TR(0x551781);
if(r1(R+518)){{goto L551790;}}
}
B551783:L551783:{c.instructions+=4;NFSU2_TR(0x551783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551786:{NFSU2_TR(0x551786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551789:{NFSU2_TR(0x551789);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55178d:{NFSU2_TR(0x55178d);
__builtin_memmove((R+4),(R+4),4);
}
B551790:L551790:{c.instructions+=2;NFSU2_TR(0x551790);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B551794:{NFSU2_TR(0x551794);
if(r1(R+518)){{goto L5517bf;}}
}
B551796:L551796:{c.instructions+=2;NFSU2_TR(0x551796);
w4(R+4,u32(0x839bd0ull));
}
B55179b:{NFSU2_TR(0x55179b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5517a0ull));
TAIL_STATIC(0x53e650u,53e);
}
B5517a0:L5517a0:{c.instructions+=2;NFSU2_TR(0x5517a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5517a2:{NFSU2_TR(0x5517a2);
if(r1(R+518)){{goto L5517b9;}}
}
B5517a4:L5517a4:{c.instructions+=6;NFSU2_TR(0x5517a4);
w4(R+4,u32(0xabadcafeull));
}
B5517a9:{NFSU2_TR(0x5517a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5517ac:{NFSU2_TR(0x5517ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5517af:{NFSU2_TR(0x5517af);
u8 U[4];
w4(U+0,u32(0x79aa34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5517b5:{NFSU2_TR(0x5517b5);
__builtin_memmove((R+4),(R+0),4);
}
B5517b7:{NFSU2_TR(0x5517b7);
{goto L5517c2;}
}
B5517b9:L5517b9:{c.instructions+=3;NFSU2_TR(0x5517b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5517bb:{NFSU2_TR(0x5517bb);
__builtin_memmove((R+4),(R+0),4);
}
B5517bd:{NFSU2_TR(0x5517bd);
{goto L5517c2;}
}
B5517bf:L5517bf:{c.instructions+=1;NFSU2_TR(0x5517bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5517c2:L5517c2:{c.instructions+=7;NFSU2_TR(0x5517c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5517c6:{NFSU2_TR(0x5517c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5517c8:{NFSU2_TR(0x5517c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5517cc:{NFSU2_TR(0x5517cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5517cf:{NFSU2_TR(0x5517cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5517d1:{NFSU2_TR(0x5517d1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5517d3:{NFSU2_TR(0x5517d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5517f8;}}
}
B5517d5:L5517d5:{c.instructions+=2;NFSU2_TR(0x5517d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5517d8:{NFSU2_TR(0x5517d8);
{goto L5517e0;}
}
B5517e0:L5517e0:{c.instructions+=8;NFSU2_TR(0x5517e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5517e4:{NFSU2_TR(0x5517e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5517e8:{NFSU2_TR(0x5517e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5517ea:{NFSU2_TR(0x5517ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5517ee:{NFSU2_TR(0x5517ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5517ef:{NFSU2_TR(0x5517ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5517f2:{NFSU2_TR(0x5517f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5517f4:{NFSU2_TR(0x5517f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5517e0u);}goto L5517e0;}}
}
B5517f6:L5517f6:{c.instructions+=1;NFSU2_TR(0x5517f6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5517f8:L5517f8:{c.instructions+=2;NFSU2_TR(0x5517f8);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5517fc:{NFSU2_TR(0x5517fc);
if(r1(R+518)){{goto L551835;}}
}
B5517fe:L5517fe:{c.instructions+=3;NFSU2_TR(0x5517fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551801:{NFSU2_TR(0x551801);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551803:{NFSU2_TR(0x551803);
if(r1(R+518)){{goto L55181a;}}
}
B551805:L551805:{c.instructions+=4;NFSU2_TR(0x551805);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551808:{NFSU2_TR(0x551808);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55180a:{NFSU2_TR(0x55180a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55180d:{NFSU2_TR(0x55180d);
if(r1(R+518)){{goto L551812;}}
}
B55180f:L55180f:{c.instructions+=1;NFSU2_TR(0x55180f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551812:L551812:{c.instructions+=3;NFSU2_TR(0x551812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551815:{NFSU2_TR(0x551815);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551818:{NFSU2_TR(0x551818);
{goto L55182d;}
}
B55181a:L55181a:{c.instructions+=4;NFSU2_TR(0x55181a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55181d:{NFSU2_TR(0x55181d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55181f:{NFSU2_TR(0x55181f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551822:{NFSU2_TR(0x551822);
if(r1(R+518)){{goto L551827;}}
}
B551824:L551824:{c.instructions+=1;NFSU2_TR(0x551824);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551827:L551827:{c.instructions+=2;NFSU2_TR(0x551827);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55182a:{NFSU2_TR(0x55182a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55182d:L55182d:{c.instructions+=2;NFSU2_TR(0x55182d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B551830:{NFSU2_TR(0x551830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551835;}}
}
B551832:L551832:{c.instructions+=1;NFSU2_TR(0x551832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551835:L551835:{c.instructions+=10;NFSU2_TR(0x551835);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551839:{NFSU2_TR(0x551839);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55183d:{NFSU2_TR(0x55183d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B55183f:{NFSU2_TR(0x55183f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551843:{NFSU2_TR(0x551843);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551847:{NFSU2_TR(0x551847);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55184b:{NFSU2_TR(0x55184b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55184c:{NFSU2_TR(0x55184c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B55184e:{NFSU2_TR(0x55184e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551852:{NFSU2_TR(0x551852);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551790u);}goto L551790;}}
}
B551858:L551858:{c.instructions+=1;NFSU2_TR(0x551858);
{goto L551b44;}
}
B55185d:L55185d:{c.instructions+=3;NFSU2_TR(0x55185d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551860:{NFSU2_TR(0x551860);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551863:{NFSU2_TR(0x551863);
{goto L551b44;}
}
B551868:L551868:{c.instructions+=6;NFSU2_TR(0x551868);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B55186c:{NFSU2_TR(0x55186c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55186f:{NFSU2_TR(0x55186f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B551872:{NFSU2_TR(0x551872);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551874:{NFSU2_TR(0x551874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551877:{NFSU2_TR(0x551877);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B55187d:L55187d:{c.instructions+=2;NFSU2_TR(0x55187d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B551880:{NFSU2_TR(0x551880);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B551883:L551883:{c.instructions+=6;NFSU2_TR(0x551883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B551885:{NFSU2_TR(0x551885);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B551887:{NFSU2_TR(0x551887);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B55188a:{NFSU2_TR(0x55188a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B55188d:{NFSU2_TR(0x55188d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B55188e:{NFSU2_TR(0x55188e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551883u);}goto L551883;}}
}
B551890:L551890:{c.instructions+=2;NFSU2_TR(0x551890);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B551892:{NFSU2_TR(0x551892);
{goto L551b44;}
}
B551897:L551897:{c.instructions+=2;NFSU2_TR(0x551897);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551899:{NFSU2_TR(0x551899);
if(r1(R+518)){{goto L551b44;}}
}
B55189f:L55189f:{c.instructions+=3;NFSU2_TR(0x55189f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5518a2:{NFSU2_TR(0x5518a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5518a5:{NFSU2_TR(0x5518a5);
{goto L551b44;}
}
B5518aa:L5518aa:{c.instructions+=2;NFSU2_TR(0x5518aa);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6e53ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6e53ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5518af:{NFSU2_TR(0x5518af);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L551b24;}}
}
B5518b5:L5518b5:{c.instructions+=1;NFSU2_TR(0x5518b5);
if(r1(R+518)){{goto L551ac5;}}
}
B5518bb:L5518bb:{c.instructions+=2;NFSU2_TR(0x5518bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6853ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5518c0:{NFSU2_TR(0x5518c0);
if(r1(R+518)){{goto L551a6b;}}
}
B5518c6:L5518c6:{c.instructions+=2;NFSU2_TR(0x5518c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6954ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5518cb:{NFSU2_TR(0x5518cb);
if(r1(R+518)){{goto L5518e3;}}
}
B5518cd:L5518cd:{c.instructions+=2;NFSU2_TR(0x5518cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6c53ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5518d2:{NFSU2_TR(0x5518d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B5518d8:L5518d8:{c.instructions+=3;NFSU2_TR(0x5518d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5518db:{NFSU2_TR(0x5518db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5518de:{NFSU2_TR(0x5518de);
{goto L551b44;}
}
B5518e3:L5518e3:{c.instructions+=2;NFSU2_TR(0x5518e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5518e5:{NFSU2_TR(0x5518e5);
if(r1(R+518)){{goto L551b44;}}
}
B5518eb:L5518eb:{c.instructions+=5;NFSU2_TR(0x5518eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5518ef:{NFSU2_TR(0x5518ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5518f0:{NFSU2_TR(0x5518f0);
__builtin_memmove((R+4),(R+12),4);
}
B5518f2:{NFSU2_TR(0x5518f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5518f6:{NFSU2_TR(0x5518f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5518fbull));
TAIL_STATIC(0x504a00u,504);
}
B5518fb:L5518fb:{c.instructions+=3;NFSU2_TR(0x5518fb);
__builtin_memmove((R+20),(R+0),4);
}
B5518fd:{NFSU2_TR(0x5518fd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5518ff:{NFSU2_TR(0x5518ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B551905:L551905:{c.instructions+=7;NFSU2_TR(0x551905);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B551908:{NFSU2_TR(0x551908);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B551909:{NFSU2_TR(0x551909);
__builtin_memmove((R+0),(R+24),4);
}
B55190b:{NFSU2_TR(0x55190b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B55190e:{NFSU2_TR(0x55190e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B551911:{NFSU2_TR(0x551911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551912:{NFSU2_TR(0x551912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551917ull));
TAIL_STATIC(0x575620u,575);
}
B551917:L551917:{c.instructions+=6;NFSU2_TR(0x551917);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55191a:{NFSU2_TR(0x55191a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55191e:{NFSU2_TR(0x55191e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B551920:{NFSU2_TR(0x551920);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551922:{NFSU2_TR(0x551922);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551926:{NFSU2_TR(0x551926);
if(r1(R+518)){{goto L551946;}}
}
B551928:L551928:{c.instructions+=8;NFSU2_TR(0x551928);
u8 U[4];
w4(U+0,u32(0x52b960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55192d:{NFSU2_TR(0x55192d);
u8 U[4];
w4(U+0,u32(0x525e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551932:{NFSU2_TR(0x551932);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551933:{NFSU2_TR(0x551933);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551936:{NFSU2_TR(0x551936);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551938:{NFSU2_TR(0x551938);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551939:{NFSU2_TR(0x551939);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55193b:{NFSU2_TR(0x55193b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551940ull));
TAIL_STATIC(0x75c461u,75c);
}
B551940:L551940:{c.instructions+=2;NFSU2_TR(0x551940);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551944:{NFSU2_TR(0x551944);
{goto L55194a;}
}
B551946:L551946:{c.instructions+=1;NFSU2_TR(0x551946);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55194a:L55194a:{c.instructions+=10;NFSU2_TR(0x55194a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55194e:{NFSU2_TR(0x55194e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551952:{NFSU2_TR(0x551952);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551955:{NFSU2_TR(0x551955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551956:{NFSU2_TR(0x551956);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551959:{NFSU2_TR(0x551959);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55195a:{NFSU2_TR(0x55195a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55195d:{NFSU2_TR(0x55195d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4134ull))));
}
B551963:{NFSU2_TR(0x551963);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B55196b:{NFSU2_TR(0x55196b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551970ull));
TAIL_STATIC(0x505480u,505);
}
B551970:L551970:{c.instructions+=2;NFSU2_TR(0x551970);
__builtin_memmove((R+4),(R+0),4);
}
B551972:{NFSU2_TR(0x551972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551977ull));
TAIL_STATIC(0x5147f0u,514);
}
B551977:L551977:{c.instructions+=9;NFSU2_TR(0x551977);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55197b:{NFSU2_TR(0x55197b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55197d:{NFSU2_TR(0x55197d);
__builtin_memmove((R+28),(R+0),4);
}
B55197f:{NFSU2_TR(0x55197f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551982:{NFSU2_TR(0x551982);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551986:{NFSU2_TR(0x551986);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55198a:{NFSU2_TR(0x55198a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55198e:{NFSU2_TR(0x55198e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551992:{NFSU2_TR(0x551992);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B551993:L551993:{c.instructions+=3;NFSU2_TR(0x551993);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551997:{NFSU2_TR(0x551997);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551999:{NFSU2_TR(0x551999);
if(r1(R+518)){{goto L5519e3;}}
}
B55199b:L55199b:{c.instructions+=3;NFSU2_TR(0x55199b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55199f:{NFSU2_TR(0x55199f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B5519a2:{NFSU2_TR(0x5519a2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5519e3;}}
}
B5519a4:L5519a4:{c.instructions+=2;NFSU2_TR(0x5519a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5519a6:{NFSU2_TR(0x5519a6);
if(r1(R+518)){{goto L5519c0;}}
}
B5519a8:L5519a8:{c.instructions+=9;NFSU2_TR(0x5519a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5519ac:{NFSU2_TR(0x5519ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5519b0:{NFSU2_TR(0x5519b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5519b3:{NFSU2_TR(0x5519b3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5519b4:{NFSU2_TR(0x5519b4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B5519b7:{NFSU2_TR(0x5519b7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5519b9:{NFSU2_TR(0x5519b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5519bc:{NFSU2_TR(0x5519bc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5519be:{NFSU2_TR(0x5519be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5519e3;}}
}
B5519c0:L5519c0:{c.instructions+=4;NFSU2_TR(0x5519c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5519c4:{NFSU2_TR(0x5519c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5519c5:{NFSU2_TR(0x5519c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5519c8:{NFSU2_TR(0x5519c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5519cdull));
TAIL_STATIC(0x54d350u,54d);
}
B5519cd:L5519cd:{c.instructions+=7;NFSU2_TR(0x5519cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5519d1:{NFSU2_TR(0x5519d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5519d5:{NFSU2_TR(0x5519d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5519d6:{NFSU2_TR(0x5519d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B5519d9:{NFSU2_TR(0x5519d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5519dd:{NFSU2_TR(0x5519dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5519e1:{NFSU2_TR(0x5519e1);
{goto L551a17;}
}
B5519e3:L5519e3:{c.instructions+=17;NFSU2_TR(0x5519e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5519e6:{NFSU2_TR(0x5519e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5519e9:{NFSU2_TR(0x5519e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5519ec:{NFSU2_TR(0x5519ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5519ef:{NFSU2_TR(0x5519ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B5519f2:{NFSU2_TR(0x5519f2);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5519f4:{NFSU2_TR(0x5519f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5519f8:{NFSU2_TR(0x5519f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5519fc:{NFSU2_TR(0x5519fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5519ff:{NFSU2_TR(0x5519ff);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B551a01:{NFSU2_TR(0x551a01);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffull))));
}
B551a07:{NFSU2_TR(0x551a07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B551a09:{NFSU2_TR(0x551a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a0c:{NFSU2_TR(0x551a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551a0f:{NFSU2_TR(0x551a0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B551a12:{NFSU2_TR(0x551a12);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551a15:{NFSU2_TR(0x551a15);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B551a17:L551a17:{c.instructions+=7;NFSU2_TR(0x551a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551a1b:{NFSU2_TR(0x551a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551a1e:{NFSU2_TR(0x551a1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B551a1f:{NFSU2_TR(0x551a1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B551a22:{NFSU2_TR(0x551a22);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551a24:{NFSU2_TR(0x551a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a28:{NFSU2_TR(0x551a28);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551993u);}goto L551993;}}
}
B551a2e:L551a2e:{c.instructions+=3;NFSU2_TR(0x551a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551a31:{NFSU2_TR(0x551a31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551a33:{NFSU2_TR(0x551a33);
if(r1(R+518)){{goto L551a52;}}
}
B551a35:L551a35:{c.instructions+=7;NFSU2_TR(0x551a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551a38:{NFSU2_TR(0x551a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B551a3b:{NFSU2_TR(0x551a3b);
u8 U[4];
w4(U+0,u32(0x52b960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551a40:{NFSU2_TR(0x551a40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551a41:{NFSU2_TR(0x551a41);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551a43:{NFSU2_TR(0x551a43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551a44:{NFSU2_TR(0x551a44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551a49ull));
TAIL_STATIC(0x75c401u,75c);
}
B551a49:L551a49:{c.instructions+=2;NFSU2_TR(0x551a49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551a4a:{NFSU2_TR(0x551a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551a4full));
TAIL_STATIC(0x575630u,575);
}
B551a4f:L551a4f:{c.instructions+=1;NFSU2_TR(0x551a4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B551a52:L551a52:{c.instructions+=8;NFSU2_TR(0x551a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551a55:{NFSU2_TR(0x551a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551a59:{NFSU2_TR(0x551a59);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551a5d:{NFSU2_TR(0x551a5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B551a5e:{NFSU2_TR(0x551a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a61:{NFSU2_TR(0x551a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a64:{NFSU2_TR(0x551a64);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B551a66:{NFSU2_TR(0x551a66);
{goto L551b44;}
}
B551a6b:L551a6b:{c.instructions+=2;NFSU2_TR(0x551a6b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551a6d:{NFSU2_TR(0x551a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551aa6;}}
}
B551a6f:L551a6f:{c.instructions+=2;NFSU2_TR(0x551a6f);
w4(R+4,u32(0x839c30ull));
}
B551a74:{NFSU2_TR(0x551a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551a79ull));
TAIL_STATIC(0x54beb0u,54b);
}
B551a79:L551a79:{c.instructions+=9;NFSU2_TR(0x551a79);
__builtin_memmove((R+4),(R+0),4);
}
B551a7b:{NFSU2_TR(0x551a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a7e:{NFSU2_TR(0x551a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a81:{NFSU2_TR(0x551a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a84:{NFSU2_TR(0x551a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a87:{NFSU2_TR(0x551a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a8a:{NFSU2_TR(0x551a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a8d:{NFSU2_TR(0x551a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a90:{NFSU2_TR(0x551a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551a95ull));
TAIL_STATIC(0x511d70u,511);
}
B551a95:L551a95:{c.instructions+=4;NFSU2_TR(0x551a95);
__builtin_memmove((R+12),(R+0),4);
}
B551a97:{NFSU2_TR(0x551a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551a9a:{NFSU2_TR(0x551a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B551aa2:{NFSU2_TR(0x551aa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551aa6:L551aa6:{c.instructions+=10;NFSU2_TR(0x551aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551aa9:{NFSU2_TR(0x551aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551aac:{NFSU2_TR(0x551aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551aaf:{NFSU2_TR(0x551aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ab2:{NFSU2_TR(0x551ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551ab5:{NFSU2_TR(0x551ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ab8:{NFSU2_TR(0x551ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551abb:{NFSU2_TR(0x551abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551abc:{NFSU2_TR(0x551abc);
__builtin_memmove((R+4),(R+12),4);
}
B551abe:{NFSU2_TR(0x551abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551ac3ull));
TAIL_STATIC(0x535210u,535);
}
B551ac3:L551ac3:{c.instructions+=1;NFSU2_TR(0x551ac3);
{goto L551b44;}
}
B551ac5:L551ac5:{c.instructions+=2;NFSU2_TR(0x551ac5);
w4(R+4,u32(0x839c30ull));
}
B551aca:{NFSU2_TR(0x551aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551acfull));
TAIL_STATIC(0x54beb0u,54b);
}
B551acf:L551acf:{c.instructions+=19;NFSU2_TR(0x551acf);
w4(R+4,u32(0xabadcafeull));
}
B551ad4:{NFSU2_TR(0x551ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ad7:{NFSU2_TR(0x551ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ada:{NFSU2_TR(0x551ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551ade:{NFSU2_TR(0x551ade);
u8 U[4];
w4(U+0,u32(0x79ad28ull));
s4(u32(r4(R+0)),r4(U+0));
}
B551ae4:{NFSU2_TR(0x551ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ae7:{NFSU2_TR(0x551ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551aea:{NFSU2_TR(0x551aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551aed:{NFSU2_TR(0x551aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551af0:{NFSU2_TR(0x551af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551af3:{NFSU2_TR(0x551af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551af6:{NFSU2_TR(0x551af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551af9:{NFSU2_TR(0x551af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551afc:{NFSU2_TR(0x551afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551aff:{NFSU2_TR(0x551aff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b02:{NFSU2_TR(0x551b02);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B551b05:{NFSU2_TR(0x551b05);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551b07:{NFSU2_TR(0x551b07);
__builtin_memmove((R+12),(R+0),4);
}
B551b09:{NFSU2_TR(0x551b09);
if(r1(R+518)){{goto L551b16;}}
}
B551b0b:L551b0b:{c.instructions+=4;NFSU2_TR(0x551b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B551b0e:{NFSU2_TR(0x551b0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551b0f:{NFSU2_TR(0x551b0f);
__builtin_memmove((R+4),(R+0),4);
}
B551b11:{NFSU2_TR(0x551b11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551b16ull));
TAIL_STATIC(0x518730u,518);
}
B551b16:L551b16:{c.instructions+=3;NFSU2_TR(0x551b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B551b1e:{NFSU2_TR(0x551b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b22:{NFSU2_TR(0x551b22);
{goto L551b44;}
}
B551b24:L551b24:{c.instructions+=2;NFSU2_TR(0x551b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6f54ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551b29:{NFSU2_TR(0x551b29);
if(r1(R+518)){{goto L551b3e;}}
}
B551b2b:L551b2b:{c.instructions+=2;NFSU2_TR(0x551b2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7454ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551b30:{NFSU2_TR(0x551b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551b44;}}
}
B551b32:L551b32:{c.instructions+=2;NFSU2_TR(0x551b32);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551b34:{NFSU2_TR(0x551b34);
if(r1(R+518)){{goto L551b44;}}
}
B551b36:L551b36:{c.instructions+=3;NFSU2_TR(0x551b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551b39:{NFSU2_TR(0x551b39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551b3c:{NFSU2_TR(0x551b3c);
{goto L551b44;}
}
B551b3e:L551b3e:{c.instructions+=2;NFSU2_TR(0x551b3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B551b41:{NFSU2_TR(0x551b41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551b44:L551b44:{c.instructions+=6;NFSU2_TR(0x551b44);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B551b48:{NFSU2_TR(0x551b48);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551b4c:{NFSU2_TR(0x551b4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B551b50:{NFSU2_TR(0x551b50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B551b52:{NFSU2_TR(0x551b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b56:{NFSU2_TR(0x551b56);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551630u);}goto L551630;}}
}
B551b5c:L551b5c:{c.instructions+=4;NFSU2_TR(0x551b5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551b60:{NFSU2_TR(0x551b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551b63:{NFSU2_TR(0x551b63);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551b65:{NFSU2_TR(0x551b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551bab;}}
}
B551b67:L551b67:{c.instructions+=5;NFSU2_TR(0x551b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551b6a:{NFSU2_TR(0x551b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551b6d:{NFSU2_TR(0x551b6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B551b70:{NFSU2_TR(0x551b70);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551b72:{NFSU2_TR(0x551b72);
if(r1(R+518)){{goto L551bab;}}
}
B551b74:L551b74:{c.instructions+=2;NFSU2_TR(0x551b74);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551b76:{NFSU2_TR(0x551b76);
if(r1(R+518)){{goto L551b8d;}}
}
B551b78:L551b78:{c.instructions+=4;NFSU2_TR(0x551b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551b7b:{NFSU2_TR(0x551b7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551b7d:{NFSU2_TR(0x551b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b80:{NFSU2_TR(0x551b80);
if(r1(R+518)){{goto L551b85;}}
}
B551b82:L551b82:{c.instructions+=1;NFSU2_TR(0x551b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b85:L551b85:{c.instructions+=3;NFSU2_TR(0x551b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b88:{NFSU2_TR(0x551b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b8b:{NFSU2_TR(0x551b8b);
{goto L551ba0;}
}
B551b8d:L551b8d:{c.instructions+=4;NFSU2_TR(0x551b8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551b90:{NFSU2_TR(0x551b90);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551b92:{NFSU2_TR(0x551b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b95:{NFSU2_TR(0x551b95);
if(r1(R+518)){{goto L551b9a;}}
}
B551b97:L551b97:{c.instructions+=1;NFSU2_TR(0x551b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b9a:L551b9a:{c.instructions+=2;NFSU2_TR(0x551b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551b9d:{NFSU2_TR(0x551b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ba0:L551ba0:{c.instructions+=2;NFSU2_TR(0x551ba0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B551ba3:{NFSU2_TR(0x551ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551ba8;}}
}
B551ba5:L551ba5:{c.instructions+=1;NFSU2_TR(0x551ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551ba8:L551ba8:{c.instructions+=1;NFSU2_TR(0x551ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B551bab:L551bab:{c.instructions+=2;NFSU2_TR(0x551bab);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1744b3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B551bb2:{NFSU2_TR(0x551bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551bba;}}
}
B551bb4:L551bb4:{c.instructions+=2;NFSU2_TR(0x551bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551bb7:{NFSU2_TR(0x551bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551bba:L551bba:{c.instructions+=9;NFSU2_TR(0x551bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551bbe:{NFSU2_TR(0x551bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551bbf:{NFSU2_TR(0x551bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551bc0:{NFSU2_TR(0x551bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B551bc1:{NFSU2_TR(0x551bc1);
w1(R+0,u8(0x1ull));
}
B551bc3:{NFSU2_TR(0x551bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551bc4:{NFSU2_TR(0x551bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551bcb:{NFSU2_TR(0x551bcb);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B551bce:{NFSU2_TR(0x551bce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551be0:L551be0:{c.instructions+=32;NFSU2_TR(0x551be0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551be2:{NFSU2_TR(0x551be2);
u8 U[4];
w4(U+0,u32(0x777bd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551be7:{NFSU2_TR(0x551be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551bed:{NFSU2_TR(0x551bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551bee:{NFSU2_TR(0x551bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551bf5:{NFSU2_TR(0x551bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551bf6:{NFSU2_TR(0x551bf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551bf7:{NFSU2_TR(0x551bf7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551bf8:{NFSU2_TR(0x551bf8);
__builtin_memmove((R+20),(R+4),4);
}
B551bfa:{NFSU2_TR(0x551bfa);
w4(R+0,u32(0xabadcafeull));
}
B551bff:{NFSU2_TR(0x551bff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551c00:{NFSU2_TR(0x551c00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551c01:{NFSU2_TR(0x551c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c05:{NFSU2_TR(0x551c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c08:{NFSU2_TR(0x551c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c0b:{NFSU2_TR(0x551c0b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B551c0d:{NFSU2_TR(0x551c0d);
u8 U[4];
w4(U+0,u32(0x79ad28ull));
s4(u32(r4(R+20)),r4(U+0));
}
B551c14:{NFSU2_TR(0x551c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c18:{NFSU2_TR(0x551c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c1b:{NFSU2_TR(0x551c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c1e:{NFSU2_TR(0x551c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551c22:{NFSU2_TR(0x551c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c25:{NFSU2_TR(0x551c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c28:{NFSU2_TR(0x551c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c2b:{NFSU2_TR(0x551c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c2e:{NFSU2_TR(0x551c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c31:{NFSU2_TR(0x551c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c34:{NFSU2_TR(0x551c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c37:{NFSU2_TR(0x551c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551c3a:{NFSU2_TR(0x551c3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551c3b:{NFSU2_TR(0x551c3b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551c40:{NFSU2_TR(0x551c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551c45ull));
TAIL_STATIC(0x518730u,518);
}
B551c45:L551c45:{c.instructions+=12;NFSU2_TR(0x551c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551c48:{NFSU2_TR(0x551c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c4b:{NFSU2_TR(0x551c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551c4e:{NFSU2_TR(0x551c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c51:{NFSU2_TR(0x551c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551c54:{NFSU2_TR(0x551c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c57:{NFSU2_TR(0x551c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551c5a:{NFSU2_TR(0x551c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c5d:{NFSU2_TR(0x551c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551c60:{NFSU2_TR(0x551c60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551c61:{NFSU2_TR(0x551c61);
__builtin_memmove((R+4),(R+20),4);
}
B551c63:{NFSU2_TR(0x551c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551c68ull));
TAIL_STATIC(0x535210u,535);
}
B551c68:L551c68:{c.instructions+=4;NFSU2_TR(0x551c68);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B551c6c:{NFSU2_TR(0x551c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551c6e:{NFSU2_TR(0x551c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551c71:{NFSU2_TR(0x551c71);
if(r1(R+518)){{goto L551d7c;}}
}
B551c77:L551c77:{c.instructions+=3;NFSU2_TR(0x551c77);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551c79:{NFSU2_TR(0x551c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551c7d:{NFSU2_TR(0x551c7d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L551d9d;}}
}
B551c83:L551c83:{c.instructions+=57;NFSU2_TR(0x551c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551c86:{NFSU2_TR(0x551c86);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B551c89:{NFSU2_TR(0x551c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551c8c:{NFSU2_TR(0x551c8c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B551c8f:{NFSU2_TR(0x551c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551c92:{NFSU2_TR(0x551c92);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B551c96:{NFSU2_TR(0x551c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551c99:{NFSU2_TR(0x551c99);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B551c9d:{NFSU2_TR(0x551c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551ca0:{NFSU2_TR(0x551ca0);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B551ca4:{NFSU2_TR(0x551ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551ca7:{NFSU2_TR(0x551ca7);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B551cab:{NFSU2_TR(0x551cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551cae:{NFSU2_TR(0x551cae);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B551cb2:{NFSU2_TR(0x551cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551cb5:{NFSU2_TR(0x551cb5);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B551cb9:{NFSU2_TR(0x551cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551cbc:{NFSU2_TR(0x551cbc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B551cc0:{NFSU2_TR(0x551cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551cc3:{NFSU2_TR(0x551cc3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B551cc7:{NFSU2_TR(0x551cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B551cca:{NFSU2_TR(0x551cca);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B551ccd:{NFSU2_TR(0x551ccd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+12))));
}
B551ccf:{NFSU2_TR(0x551ccf);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B551cd3:{NFSU2_TR(0x551cd3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffull))));
}
B551cd9:{NFSU2_TR(0x551cd9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+8))));
}
B551cdb:{NFSU2_TR(0x551cdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B551cdd:{NFSU2_TR(0x551cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551ce0:{NFSU2_TR(0x551ce0);
u8 U[13];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B551ce4:{NFSU2_TR(0x551ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551ce7:{NFSU2_TR(0x551ce7);
u8 U[13];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B551ceb:{NFSU2_TR(0x551ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551cee:{NFSU2_TR(0x551cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551cf1:{NFSU2_TR(0x551cf1);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B551cf5:{NFSU2_TR(0x551cf5);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B551cf9:{NFSU2_TR(0x551cf9);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B551cfd:{NFSU2_TR(0x551cfd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B551d01:{NFSU2_TR(0x551d01);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B551d05:{NFSU2_TR(0x551d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d08:{NFSU2_TR(0x551d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551d0b:{NFSU2_TR(0x551d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d0e:{NFSU2_TR(0x551d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551d11:{NFSU2_TR(0x551d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d14:{NFSU2_TR(0x551d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551d17:{NFSU2_TR(0x551d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d1a:{NFSU2_TR(0x551d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551d1d:{NFSU2_TR(0x551d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d20:{NFSU2_TR(0x551d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551d23:{NFSU2_TR(0x551d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d26:{NFSU2_TR(0x551d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551d29:{NFSU2_TR(0x551d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551d2c:{NFSU2_TR(0x551d2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B551d30:{NFSU2_TR(0x551d30);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B551d32:{NFSU2_TR(0x551d32);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551d34:{NFSU2_TR(0x551d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d38:{NFSU2_TR(0x551d38);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B551d3c:{NFSU2_TR(0x551d3c);
if(r1(R+518)){{goto L551d59;}}
}
B551d3e:L551d3e:{c.instructions+=3;NFSU2_TR(0x551d3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B551d41:{NFSU2_TR(0x551d41);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551d43:{NFSU2_TR(0x551d43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551d50;}}
}
B551d45:L551d45:{c.instructions+=2;NFSU2_TR(0x551d45);
__builtin_memmove((R+4),(R+12),4);
}
B551d47:{NFSU2_TR(0x551d47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551d4cull));
TAIL_STATIC(0x511d00u,511);
}
B551d4c:L551d4c:{c.instructions+=1;NFSU2_TR(0x551d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551d50:L551d50:{c.instructions+=3;NFSU2_TR(0x551d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d53:{NFSU2_TR(0x551d53);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551d57:{NFSU2_TR(0x551d57);
{goto L551d63;}
}
B551d59:L551d59:{c.instructions+=3;NFSU2_TR(0x551d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d5c:{NFSU2_TR(0x551d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d5f:{NFSU2_TR(0x551d5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551d63:L551d63:{c.instructions+=7;NFSU2_TR(0x551d63);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551d67:{NFSU2_TR(0x551d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551d6a:{NFSU2_TR(0x551d6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B551d6b:{NFSU2_TR(0x551d6b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B551d6e:{NFSU2_TR(0x551d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B551d70:{NFSU2_TR(0x551d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551d74:{NFSU2_TR(0x551d74);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551c83u);}goto L551c83;}}
}
B551d7a:L551d7a:{c.instructions+=1;NFSU2_TR(0x551d7a);
{goto L551d9d;}
}
B551d7c:L551d7c:{c.instructions+=3;NFSU2_TR(0x551d7c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B551d7e:{NFSU2_TR(0x551d7e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551d80:{NFSU2_TR(0x551d80);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L551d9d;}}
}
B551d82:L551d82:{c.instructions+=6;NFSU2_TR(0x551d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551d85:{NFSU2_TR(0x551d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551d88:{NFSU2_TR(0x551d88);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B551d8a:{NFSU2_TR(0x551d8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551d8b:{NFSU2_TR(0x551d8b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B551d8d:{NFSU2_TR(0x551d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551d92ull));
TAIL_STATIC(0x54d350u,54d);
}
B551d92:L551d92:{c.instructions+=5;NFSU2_TR(0x551d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551d95:{NFSU2_TR(0x551d95);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B551d96:{NFSU2_TR(0x551d96);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B551d99:{NFSU2_TR(0x551d99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B551d9b:{NFSU2_TR(0x551d9b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551d82u);}goto L551d82;}}
}
B551d9d:L551d9d:{c.instructions+=5;NFSU2_TR(0x551d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551da0:{NFSU2_TR(0x551da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551da1:{NFSU2_TR(0x551da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551da4:{NFSU2_TR(0x551da4);
__builtin_memmove((R+4),(R+12),4);
}
B551da6:{NFSU2_TR(0x551da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551dabull));
TAIL_STATIC(0x519a10u,519);
}
B551dab:L551dab:{c.instructions+=7;NFSU2_TR(0x551dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B551dad:{NFSU2_TR(0x551dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B551db0:{NFSU2_TR(0x551db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551db3:{NFSU2_TR(0x551db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B551db6:{NFSU2_TR(0x551db6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B551db9:{NFSU2_TR(0x551db9);
__builtin_memmove((R+8),(R+4),4);
}
B551dbb:{NFSU2_TR(0x551dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B551dbe:L551dbe:{c.instructions+=1;NFSU2_TR(0x551dbe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L551dc0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551dbeu);}goto L551dbe;}
}
B551dc0:L551dc0:{c.instructions+=2;NFSU2_TR(0x551dc0);
__builtin_memmove((R+4),(R+8),4);
}
B551dc2:{NFSU2_TR(0x551dc2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B551dc5:L551dc5:{c.instructions+=1;NFSU2_TR(0x551dc5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L551dc7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551dc5u);}goto L551dc5;}
}
B551dc7:L551dc7:{c.instructions+=9;NFSU2_TR(0x551dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551dcb:{NFSU2_TR(0x551dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551dcc:{NFSU2_TR(0x551dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551dcd:{NFSU2_TR(0x551dcd);
__builtin_memmove((R+0),(R+20),4);
}
B551dcf:{NFSU2_TR(0x551dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B551dd0:{NFSU2_TR(0x551dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551dd1:{NFSU2_TR(0x551dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551dd8:{NFSU2_TR(0x551dd8);
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
B551ddb:{NFSU2_TR(0x551ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551de0:L551de0:{c.instructions+=17;NFSU2_TR(0x551de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551de4:{NFSU2_TR(0x551de4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551de5:{NFSU2_TR(0x551de5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B551de7:{NFSU2_TR(0x551de7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551de8:{NFSU2_TR(0x551de8);
__builtin_memmove((R+20),(R+4),4);
}
B551dea:{NFSU2_TR(0x551dea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551deb:{NFSU2_TR(0x551deb);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+20)),r4(U+0));
}
B551df2:{NFSU2_TR(0x551df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551df5:{NFSU2_TR(0x551df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551df8:{NFSU2_TR(0x551df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551dfb:{NFSU2_TR(0x551dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551dfe:{NFSU2_TR(0x551dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e01:{NFSU2_TR(0x551e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e04:{NFSU2_TR(0x551e04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e05:{NFSU2_TR(0x551e05);
__builtin_memmove((R+24),(R+0),4);
}
B551e07:{NFSU2_TR(0x551e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551e0a:{NFSU2_TR(0x551e0a);
w4(R+4,u32(0x5ull));
}
B551e0f:L551e0f:{c.instructions+=1;NFSU2_TR(0x551e0f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L551e11;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551e0fu);}goto L551e0f;}
}
B551e11:L551e11:{c.instructions+=12;NFSU2_TR(0x551e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B551e13:{NFSU2_TR(0x551e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e16:{NFSU2_TR(0x551e16);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551e19:{NFSU2_TR(0x551e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551e1c:{NFSU2_TR(0x551e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e1f:{NFSU2_TR(0x551e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e22:{NFSU2_TR(0x551e22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551e25:{NFSU2_TR(0x551e25);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551e28:{NFSU2_TR(0x551e28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551e2c:{NFSU2_TR(0x551e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551e2f:{NFSU2_TR(0x551e2f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8500d0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B551e36:{NFSU2_TR(0x551e36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L551f43;}}
}
B551e3c:L551e3c:{c.instructions+=3;NFSU2_TR(0x551e3c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551e46:{NFSU2_TR(0x551e46);
w4(R+0,u32(0x850128ull));
}
B551e4b:{NFSU2_TR(0x551e4b);
if(r1(R+518)){{goto L551e52;}}
}
B551e4d:L551e4d:{c.instructions+=1;NFSU2_TR(0x551e4d);
w4(R+0,u32(0x8500ecull));
}
B551e52:L551e52:{c.instructions+=6;NFSU2_TR(0x551e52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e53:{NFSU2_TR(0x551e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551e56:{NFSU2_TR(0x551e56);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e5b:{NFSU2_TR(0x551e5b);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e60:{NFSU2_TR(0x551e60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e61:{NFSU2_TR(0x551e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551e66ull));
TAIL_STATIC(0x537b80u,537);
}
B551e66:L551e66:{c.instructions+=4;NFSU2_TR(0x551e66);
__builtin_memmove((R+0),gp(0x850078),4);
}
B551e6b:{NFSU2_TR(0x551e6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B551e6e:{NFSU2_TR(0x551e6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551e73:{NFSU2_TR(0x551e73);
if(r1(R+518)){{goto L551edc;}}
}
B551e75:L551e75:{c.instructions+=2;NFSU2_TR(0x551e75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B551e78:{NFSU2_TR(0x551e78);
if(r1(R+518)){{goto L551edc;}}
}
B551e7a:L551e7a:{c.instructions+=2;NFSU2_TR(0x551e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551e7f:{NFSU2_TR(0x551e7f);
if(r1(R+518)){{goto L551edc;}}
}
B551e81:L551e81:{c.instructions+=4;NFSU2_TR(0x551e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551e84:{NFSU2_TR(0x551e84);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e89:{NFSU2_TR(0x551e89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e8a:{NFSU2_TR(0x551e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551e8full));
TAIL_STATIC(0x43dc30u,43d);
}
B551e8f:L551e8f:{c.instructions+=3;NFSU2_TR(0x551e8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B551e92:{NFSU2_TR(0x551e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551e94:{NFSU2_TR(0x551e94);
if(r1(R+518)){{goto L551edc;}}
}
B551e96:L551e96:{c.instructions+=4;NFSU2_TR(0x551e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551e99:{NFSU2_TR(0x551e99);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e9e:{NFSU2_TR(0x551e9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551e9f:{NFSU2_TR(0x551e9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551ea4ull));
TAIL_STATIC(0x43dc30u,43d);
}
B551ea4:L551ea4:{c.instructions+=3;NFSU2_TR(0x551ea4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B551ea7:{NFSU2_TR(0x551ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551ea9:{NFSU2_TR(0x551ea9);
if(r1(R+518)){{goto L551edc;}}
}
B551eab:L551eab:{c.instructions+=4;NFSU2_TR(0x551eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551eae:{NFSU2_TR(0x551eae);
u8 U[4];
w4(U+0,u32(0x78f310ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551eb3:{NFSU2_TR(0x551eb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551eb4:{NFSU2_TR(0x551eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551eb9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B551eb9:L551eb9:{c.instructions+=3;NFSU2_TR(0x551eb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B551ebc:{NFSU2_TR(0x551ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551ebe:{NFSU2_TR(0x551ebe);
if(r1(R+518)){{goto L551edc;}}
}
B551ec0:L551ec0:{c.instructions+=4;NFSU2_TR(0x551ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551ec3:{NFSU2_TR(0x551ec3);
u8 U[4];
w4(U+0,u32(0x799d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551ec8:{NFSU2_TR(0x551ec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551ec9:{NFSU2_TR(0x551ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551eceull));
TAIL_STATIC(0x43dc30u,43d);
}
B551ece:L551ece:{c.instructions+=4;NFSU2_TR(0x551ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B551ed1:{NFSU2_TR(0x551ed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B551ed3:{NFSU2_TR(0x551ed3);
s1(0x838528,u8(0x1ull));
}
B551eda:{NFSU2_TR(0x551eda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551ee2;}}
}
B551edc:L551edc:{c.instructions+=1;NFSU2_TR(0x551edc);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B551ee2:L551ee2:{c.instructions+=2;NFSU2_TR(0x551ee2);
u8 U[2];
__builtin_memmove((U+0),gp(0x838520),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B551ee8:{NFSU2_TR(0x551ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551f43;}}
}
B551eea:L551eea:{c.instructions+=3;NFSU2_TR(0x551eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551eed:{NFSU2_TR(0x551eed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551eee:{NFSU2_TR(0x551eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551ef3ull));
TAIL_STATIC(0x49ffa0u,49f);
}
B551ef3:L551ef3:{c.instructions+=3;NFSU2_TR(0x551ef3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B551ef6:{NFSU2_TR(0x551ef6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551ef8:{NFSU2_TR(0x551ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551f2d;}}
}
B551efa:L551efa:{c.instructions+=3;NFSU2_TR(0x551efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B551efd:{NFSU2_TR(0x551efd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551efe:{NFSU2_TR(0x551efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f03ull));
TAIL_STATIC(0x512170u,512);
}
B551f03:L551f03:{c.instructions+=3;NFSU2_TR(0x551f03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B551f06:{NFSU2_TR(0x551f06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B551f08:{NFSU2_TR(0x551f08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L551f2d;}}
}
B551f0a:L551f0a:{c.instructions+=4;NFSU2_TR(0x551f0a);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f0f:{NFSU2_TR(0x551f0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f10:{NFSU2_TR(0x551f10);
u8 U[4];
w4(U+0,u32(0x79c8d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f15:{NFSU2_TR(0x551f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f1aull));
TAIL_STATIC(0x50d510u,50d);
}
B551f1a:L551f1a:{c.instructions+=4;NFSU2_TR(0x551f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551f1d:{NFSU2_TR(0x551f1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f1e:{NFSU2_TR(0x551f1e);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f23:{NFSU2_TR(0x551f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f28ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B551f28:L551f28:{c.instructions+=2;NFSU2_TR(0x551f28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B551f2b:{NFSU2_TR(0x551f2b);
{goto L551f43;}
}
B551f2d:L551f2d:{c.instructions+=5;NFSU2_TR(0x551f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551f30:{NFSU2_TR(0x551f30);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f35:{NFSU2_TR(0x551f35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f36:{NFSU2_TR(0x551f36);
u8 U[4];
w4(U+0,u32(0x79c89cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f3b:{NFSU2_TR(0x551f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f40ull));
TAIL_STATIC(0x50d510u,50d);
}
B551f40:L551f40:{c.instructions+=1;NFSU2_TR(0x551f40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B551f43:L551f43:{c.instructions+=2;NFSU2_TR(0x551f43);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
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
B551f46:{NFSU2_TR(0x551f46);
if(r1(R+518)){{goto L551f6c;}}
}
B551f48:L551f48:{c.instructions+=2;NFSU2_TR(0x551f48);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f4d:{NFSU2_TR(0x551f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f52ull));
TAIL_STATIC(0x52cf60u,52c);
}
B551f52:L551f52:{c.instructions+=3;NFSU2_TR(0x551f52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B551f55:{NFSU2_TR(0x551f55);
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
B551f57:{NFSU2_TR(0x551f57);
if(r1(R+518)){{goto L551f6c;}}
}
B551f59:L551f59:{c.instructions+=6;NFSU2_TR(0x551f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551f5c:{NFSU2_TR(0x551f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B551f5f:{NFSU2_TR(0x551f5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f60:{NFSU2_TR(0x551f60);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B551f66:{NFSU2_TR(0x551f66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f67:{NFSU2_TR(0x551f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551f6cull));
TAIL_STATIC(0x54e6e0u,54e);
}
B551f6c:L551f6c:{c.instructions+=6;NFSU2_TR(0x551f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B551f6d:{NFSU2_TR(0x551f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B551f6e:{NFSU2_TR(0x551f6e);
__builtin_memmove((R+0),(R+20),4);
}
B551f70:{NFSU2_TR(0x551f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B551f71:{NFSU2_TR(0x551f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B551f72:{NFSU2_TR(0x551f72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B551f80:L551f80:{c.instructions+=16;NFSU2_TR(0x551f80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f81:{NFSU2_TR(0x551f81);
__builtin_memmove((R+20),(R+16),4);
}
B551f83:{NFSU2_TR(0x551f83);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f85:{NFSU2_TR(0x551f85);
u8 U[4];
w4(U+0,u32(0x777c0eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f8a:{NFSU2_TR(0x551f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551f90:{NFSU2_TR(0x551f90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f91:{NFSU2_TR(0x551f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551f98:{NFSU2_TR(0x551f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B551f9b:{NFSU2_TR(0x551f9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f9c:{NFSU2_TR(0x551f9c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551f9d:{NFSU2_TR(0x551f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B551fa0:{NFSU2_TR(0x551fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551fa1:{NFSU2_TR(0x551fa1);
__builtin_memmove((R+28),(R+4),4);
}
B551fa3:{NFSU2_TR(0x551fa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551fa4:{NFSU2_TR(0x551fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fa7:{NFSU2_TR(0x551fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x551facull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x551de0u);}goto L551de0;}
}
B551fac:L551fac:{c.instructions+=18;NFSU2_TR(0x551fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B551faf:{NFSU2_TR(0x551faf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B551fb1:{NFSU2_TR(0x551fb1);
u8 U[4];
w4(U+0,u32(0x79c928ull));
s4(u32(r4(R+28)),r4(U+0));
}
B551fb7:{NFSU2_TR(0x551fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fba:{NFSU2_TR(0x551fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B551fbc:{NFSU2_TR(0x551fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fbf:{NFSU2_TR(0x551fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fc2:{NFSU2_TR(0x551fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fc5:{NFSU2_TR(0x551fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fc8:{NFSU2_TR(0x551fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B551fcb:{NFSU2_TR(0x551fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fce:{NFSU2_TR(0x551fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fd1:{NFSU2_TR(0x551fd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B551fd4:{NFSU2_TR(0x551fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B551fd7:{NFSU2_TR(0x551fd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B551fdb:{NFSU2_TR(0x551fdb);
__builtin_memmove(gp(0x8384d8),(R+28),4);
}
B551fe1:{NFSU2_TR(0x551fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B551fe8:{NFSU2_TR(0x551fe8);
{goto L551ff0;}
}
B551fea:L551fea:{c.instructions+=2;NFSU2_TR(0x551fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B551fed:{NFSU2_TR(0x551fed);
__builtin_memmove((R+4),(R+4),4);
}
B551ff0:L551ff0:{c.instructions+=7;NFSU2_TR(0x551ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B551ff3:{NFSU2_TR(0x551ff3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551ff4:{NFSU2_TR(0x551ff4);
u8 U[4];
w4(U+0,u32(0x79c91cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551ff9:{NFSU2_TR(0x551ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B551ffc:{NFSU2_TR(0x551ffc);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551ffe:{NFSU2_TR(0x551ffe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B551fff:{NFSU2_TR(0x551fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x552004ull));
TAIL_STATIC(0x50c960u,50c);
}
XIT:NFSU2_TR_EXIT(0x551,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
