#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_46f(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x482,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x482,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_482(u8* __restrict R,Cpu& c);
u32 page_482(Cpu& c){return body_482(c.regs.data(),c);}
__attribute__((noinline)) u32 body_482(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x482002:goto L482002;
case 0x482003:c.instructions+=2;goto B482003;
case 0x482005:c.instructions+=1;goto B482005;
case 0x48200a:goto L48200a;
case 0x48200f:c.instructions+=1;goto B48200f;
case 0x482015:goto L482015;
case 0x48201b:c.instructions+=5;goto B48201b;
case 0x482022:c.instructions+=4;goto B482022;
case 0x482028:c.instructions+=3;goto B482028;
case 0x48202b:c.instructions+=2;goto B48202b;
case 0x48202d:c.instructions+=1;goto B48202d;
case 0x48202f:goto L48202f;
case 0x482035:c.instructions+=3;goto B482035;
case 0x48203a:c.instructions+=2;goto B48203a;
case 0x482040:c.instructions+=1;goto B482040;
case 0x482045:goto L482045;
case 0x48204b:c.instructions+=1;goto B48204b;
case 0x482050:goto L482050;
case 0x482053:c.instructions+=2;goto B482053;
case 0x482056:c.instructions+=1;goto B482056;
case 0x482058:goto L482058;
case 0x48205a:c.instructions+=3;goto B48205a;
case 0x482061:c.instructions+=2;goto B482061;
case 0x482063:c.instructions+=1;goto B482063;
case 0x482065:goto L482065;
case 0x482067:c.instructions+=1;goto B482067;
case 0x482069:goto L482069;
case 0x48206f:c.instructions+=1;goto B48206f;
case 0x482071:goto L482071;
case 0x482076:goto L482076;
case 0x482079:c.instructions+=4;goto B482079;
case 0x48207f:c.instructions+=3;goto B48207f;
case 0x482081:c.instructions+=2;goto B482081;
case 0x482088:c.instructions+=1;goto B482088;
case 0x48208a:goto L48208a;
case 0x48208c:c.instructions+=1;goto B48208c;
case 0x48208e:goto L48208e;
case 0x482093:c.instructions+=1;goto B482093;
case 0x482095:goto L482095;
case 0x48209a:goto L48209a;
case 0x48209c:c.instructions+=3;goto B48209c;
case 0x48209f:c.instructions+=2;goto B48209f;
case 0x4820a4:c.instructions+=1;goto B4820a4;
case 0x4820a6:goto L4820a6;
case 0x4820ab:c.instructions+=1;goto B4820ab;
case 0x4820ad:goto L4820ad;
case 0x4820b0:c.instructions+=1;goto B4820b0;
case 0x4820b2:goto L4820b2;
case 0x4820b7:c.instructions+=1;goto B4820b7;
case 0x4820b9:goto L4820b9;
case 0x4820bc:c.instructions+=1;goto B4820bc;
case 0x4820be:goto L4820be;
case 0x4820c3:goto L4820c3;
case 0x4820c5:c.instructions+=2;goto B4820c5;
case 0x4820cc:c.instructions+=1;goto B4820cc;
case 0x4820ce:goto L4820ce;
case 0x4820d0:c.instructions+=1;goto B4820d0;
case 0x4820d2:goto L4820d2;
case 0x4820d7:c.instructions+=1;goto B4820d7;
case 0x4820d9:goto L4820d9;
case 0x4820de:goto L4820de;
case 0x4820e1:c.instructions+=4;goto B4820e1;
case 0x4820e8:c.instructions+=3;goto B4820e8;
case 0x4820ea:c.instructions+=2;goto B4820ea;
case 0x4820ec:c.instructions+=1;goto B4820ec;
case 0x4820ee:goto L4820ee;
case 0x4820f1:c.instructions+=2;goto B4820f1;
case 0x4820f2:c.instructions+=1;goto B4820f2;
case 0x4820f7:goto L4820f7;
case 0x4820f8:c.instructions+=2;goto B4820f8;
case 0x4820fb:c.instructions+=1;goto B4820fb;
case 0x482101:goto L482101;
case 0x482102:c.instructions+=3;goto B482102;
case 0x482103:c.instructions+=2;goto B482103;
case 0x482104:c.instructions+=1;goto B482104;
case 0x482107:goto L482107;
case 0x48210e:c.instructions+=2;goto B48210e;
case 0x482110:c.instructions+=1;goto B482110;
case 0x482112:goto L482112;
case 0x482114:c.instructions+=2;goto B482114;
case 0x482116:c.instructions+=1;goto B482116;
case 0x482118:goto L482118;
case 0x48211d:goto L48211d;
case 0x482121:c.instructions+=2;goto B482121;
case 0x482122:c.instructions+=1;goto B482122;
case 0x482127:goto L482127;
case 0x48212a:c.instructions+=1;goto B48212a;
case 0x48212f:goto L48212f;
case 0x482133:c.instructions+=4;goto B482133;
case 0x482135:c.instructions+=3;goto B482135;
case 0x482137:c.instructions+=2;goto B482137;
case 0x482138:c.instructions+=1;goto B482138;
case 0x48213b:goto L48213b;
case 0x482140:goto L482140;
case 0x48214b:c.instructions+=4;goto B48214b;
case 0x48214c:c.instructions+=3;goto B48214c;
case 0x48214d:c.instructions+=2;goto B48214d;
case 0x48214e:c.instructions+=1;goto B48214e;
case 0x482160:goto L482160;
case 0x482161:c.instructions+=2;goto B482161;
case 0x482163:c.instructions+=1;goto B482163;
case 0x482168:goto L482168;
case 0x48216d:c.instructions+=1;goto B48216d;
case 0x48216f:goto L48216f;
case 0x482170:c.instructions+=1;goto B482170;
case 0x482175:goto L482175;
case 0x482178:goto L482178;
case 0x48217a:c.instructions+=2;goto B48217a;
case 0x48217b:c.instructions+=1;goto B48217b;
case 0x482180:goto L482180;
case 0x482181:c.instructions+=4;goto B482181;
case 0x482183:c.instructions+=3;goto B482183;
case 0x482189:c.instructions+=2;goto B482189;
case 0x48218b:c.instructions+=1;goto B48218b;
case 0x482191:goto L482191;
case 0x482197:c.instructions+=2;goto B482197;
case 0x482199:c.instructions+=1;goto B482199;
case 0x48219f:goto L48219f;
case 0x4821a2:c.instructions+=2;goto B4821a2;
case 0x4821a4:c.instructions+=1;goto B4821a4;
case 0x4821aa:goto L4821aa;
case 0x4821ad:c.instructions+=2;goto B4821ad;
case 0x4821af:c.instructions+=1;goto B4821af;
case 0x4821b5:goto L4821b5;
case 0x4821bc:c.instructions+=1;goto B4821bc;
case 0x4821c2:goto L4821c2;
case 0x4821c7:c.instructions+=5;goto B4821c7;
case 0x4821cd:c.instructions+=4;goto B4821cd;
case 0x4821ce:c.instructions+=3;goto B4821ce;
case 0x4821d3:c.instructions+=2;goto B4821d3;
case 0x4821d5:c.instructions+=1;goto B4821d5;
case 0x4821d7:goto L4821d7;
case 0x4821da:c.instructions+=5;goto B4821da;
case 0x4821dd:c.instructions+=4;goto B4821dd;
case 0x4821e3:c.instructions+=3;goto B4821e3;
case 0x4821e5:c.instructions+=2;goto B4821e5;
case 0x4821e8:c.instructions+=1;goto B4821e8;
case 0x4821ea:goto L4821ea;
case 0x4821f0:c.instructions+=2;goto B4821f0;
case 0x4821f2:c.instructions+=1;goto B4821f2;
case 0x4821f4:goto L4821f4;
case 0x4821f8:c.instructions+=1;goto B4821f8;
case 0x4821fa:goto L4821fa;
case 0x482200:c.instructions+=3;goto B482200;
case 0x482206:c.instructions+=2;goto B482206;
case 0x482207:c.instructions+=1;goto B482207;
case 0x48220c:goto L48220c;
case 0x48220f:goto L48220f;
case 0x482215:c.instructions+=3;goto B482215;
case 0x482217:c.instructions+=2;goto B482217;
case 0x482219:c.instructions+=1;goto B482219;
case 0x48221c:goto L48221c;
case 0x482221:goto L482221;
case 0x482225:c.instructions+=1;goto B482225;
case 0x482227:goto L482227;
case 0x48222d:c.instructions+=3;goto B48222d;
case 0x482233:c.instructions+=2;goto B482233;
case 0x482234:c.instructions+=1;goto B482234;
case 0x482239:goto L482239;
case 0x48223c:goto L48223c;
case 0x48223e:c.instructions+=1;goto B48223e;
case 0x482243:goto L482243;
case 0x482246:c.instructions+=5;goto B482246;
case 0x482249:c.instructions+=4;goto B482249;
case 0x48224f:c.instructions+=3;goto B48224f;
case 0x482251:c.instructions+=2;goto B482251;
case 0x482254:c.instructions+=1;goto B482254;
case 0x482256:goto L482256;
case 0x482258:c.instructions+=4;goto B482258;
case 0x48225e:c.instructions+=3;goto B48225e;
case 0x482260:c.instructions+=2;goto B482260;
case 0x482263:c.instructions+=1;goto B482263;
case 0x482265:goto L482265;
case 0x48226b:c.instructions+=2;goto B48226b;
case 0x48226d:c.instructions+=1;goto B48226d;
case 0x48226f:goto L48226f;
case 0x482274:c.instructions+=1;goto B482274;
case 0x482279:goto L482279;
case 0x48227b:c.instructions+=1;goto B48227b;
case 0x48227d:goto L48227d;
case 0x482282:c.instructions+=1;goto B482282;
case 0x482287:goto L482287;
case 0x482289:c.instructions+=1;goto B482289;
case 0x48228b:goto L48228b;
case 0x48228f:c.instructions+=1;goto B48228f;
case 0x482291:goto L482291;
case 0x482297:c.instructions+=3;goto B482297;
case 0x48229d:c.instructions+=2;goto B48229d;
case 0x48229e:c.instructions+=1;goto B48229e;
case 0x4822a3:goto L4822a3;
case 0x4822a6:goto L4822a6;
case 0x4822ac:c.instructions+=3;goto B4822ac;
case 0x4822ae:c.instructions+=2;goto B4822ae;
case 0x4822af:c.instructions+=1;goto B4822af;
case 0x4822b2:goto L4822b2;
case 0x4822b4:goto L4822b4;
case 0x4822b8:c.instructions+=1;goto B4822b8;
case 0x4822ba:goto L4822ba;
case 0x4822c0:c.instructions+=3;goto B4822c0;
case 0x4822c6:c.instructions+=2;goto B4822c6;
case 0x4822c7:c.instructions+=1;goto B4822c7;
case 0x4822cc:goto L4822cc;
case 0x4822cf:goto L4822cf;
case 0x4822d0:goto L4822d0;
case 0x4822d6:c.instructions+=2;goto B4822d6;
case 0x4822d8:c.instructions+=1;goto B4822d8;
case 0x4822db:goto L4822db;
case 0x4822dd:goto L4822dd;
case 0x4822df:c.instructions+=7;goto B4822df;
case 0x4822e2:c.instructions+=6;goto B4822e2;
case 0x4822e4:c.instructions+=5;goto B4822e4;
case 0x4822e5:c.instructions+=4;goto B4822e5;
case 0x4822eb:c.instructions+=3;goto B4822eb;
case 0x4822f1:c.instructions+=2;goto B4822f1;
case 0x4822f4:c.instructions+=1;goto B4822f4;
case 0x4822f9:goto L4822f9;
case 0x4822fb:c.instructions+=3;goto B4822fb;
case 0x4822fc:c.instructions+=2;goto B4822fc;
case 0x4822fe:c.instructions+=1;goto B4822fe;
case 0x482300:goto L482300;
case 0x482304:c.instructions+=2;goto B482304;
case 0x482305:c.instructions+=1;goto B482305;
case 0x48230a:goto L48230a;
case 0x48230c:goto L48230c;
case 0x48230d:c.instructions+=3;goto B48230d;
case 0x482311:c.instructions+=2;goto B482311;
case 0x482312:c.instructions+=1;goto B482312;
case 0x482317:goto L482317;
case 0x48231a:c.instructions+=1;goto B48231a;
case 0x48231c:goto L48231c;
case 0x48231d:c.instructions+=2;goto B48231d;
case 0x48231f:c.instructions+=1;goto B48231f;
case 0x482324:goto L482324;
case 0x482325:goto L482325;
case 0x48232b:c.instructions+=6;goto B48232b;
case 0x482331:c.instructions+=5;goto B482331;
case 0x482333:c.instructions+=4;goto B482333;
case 0x482336:c.instructions+=3;goto B482336;
case 0x482337:c.instructions+=2;goto B482337;
case 0x48233a:c.instructions+=1;goto B48233a;
case 0x48233f:goto L48233f;
case 0x482340:c.instructions+=1;goto B482340;
case 0x482350:goto L482350;
case 0x482355:c.instructions+=5;goto B482355;
case 0x482356:c.instructions+=4;goto B482356;
case 0x482358:c.instructions+=3;goto B482358;
case 0x48235d:c.instructions+=2;goto B48235d;
case 0x48235f:c.instructions+=1;goto B48235f;
case 0x482361:goto L482361;
case 0x482363:c.instructions+=1;goto B482363;
case 0x482369:goto L482369;
case 0x48236e:c.instructions+=3;goto B48236e;
case 0x482374:c.instructions+=2;goto B482374;
case 0x482375:c.instructions+=1;goto B482375;
case 0x48237a:goto L48237a;
case 0x48237d:c.instructions+=3;goto B48237d;
case 0x482384:c.instructions+=2;goto B482384;
case 0x482385:c.instructions+=1;goto B482385;
case 0x482388:goto L482388;
case 0x482389:c.instructions+=4;goto B482389;
case 0x48238e:c.instructions+=3;goto B48238e;
case 0x482390:c.instructions+=2;goto B482390;
case 0x482391:c.instructions+=1;goto B482391;
case 0x482393:goto L482393;
case 0x48239a:goto L48239a;
case 0x48239f:c.instructions+=3;goto B48239f;
case 0x4823a2:c.instructions+=2;goto B4823a2;
case 0x4823a4:c.instructions+=1;goto B4823a4;
case 0x4823a6:goto L4823a6;
case 0x4823a9:c.instructions+=2;goto B4823a9;
case 0x4823ac:c.instructions+=1;goto B4823ac;
case 0x4823ae:goto L4823ae;
case 0x4823b1:c.instructions+=1;goto B4823b1;
case 0x4823b3:goto L4823b3;
case 0x4823b9:c.instructions+=3;goto B4823b9;
case 0x4823be:c.instructions+=2;goto B4823be;
case 0x4823c0:c.instructions+=1;goto B4823c0;
case 0x4823c6:goto L4823c6;
case 0x4823cc:c.instructions+=4;goto B4823cc;
case 0x4823d2:c.instructions+=3;goto B4823d2;
case 0x4823d7:c.instructions+=2;goto B4823d7;
case 0x4823d9:c.instructions+=1;goto B4823d9;
case 0x4823df:goto L4823df;
case 0x4823e5:c.instructions+=2;goto B4823e5;
case 0x4823e7:c.instructions+=1;goto B4823e7;
case 0x4823ed:goto L4823ed;
case 0x4823f3:c.instructions+=3;goto B4823f3;
case 0x4823f4:c.instructions+=2;goto B4823f4;
case 0x4823f5:c.instructions+=1;goto B4823f5;
case 0x4823fa:goto L4823fa;
case 0x4823fd:c.instructions+=5;goto B4823fd;
case 0x4823fe:c.instructions+=4;goto B4823fe;
case 0x482404:c.instructions+=3;goto B482404;
case 0x482405:c.instructions+=2;goto B482405;
case 0x482406:c.instructions+=1;goto B482406;
case 0x482409:goto L482409;
case 0x48240e:goto L48240e;
case 0x482410:c.instructions+=1;goto B482410;
case 0x482416:goto L482416;
case 0x48241c:c.instructions+=3;goto B48241c;
case 0x48241f:c.instructions+=2;goto B48241f;
case 0x482425:c.instructions+=1;goto B482425;
case 0x482427:goto L482427;
case 0x48242a:c.instructions+=1;goto B48242a;
case 0x48242c:goto L48242c;
case 0x482431:c.instructions+=2;goto B482431;
case 0x482433:c.instructions+=1;goto B482433;
case 0x482435:goto L482435;
case 0x48243b:c.instructions+=4;goto B48243b;
case 0x482441:c.instructions+=3;goto B482441;
case 0x482446:c.instructions+=2;goto B482446;
case 0x482448:c.instructions+=1;goto B482448;
case 0x48244a:goto L48244a;
case 0x482450:c.instructions+=2;goto B482450;
case 0x482452:c.instructions+=1;goto B482452;
case 0x482454:goto L482454;
case 0x48245a:c.instructions+=3;goto B48245a;
case 0x48245b:c.instructions+=2;goto B48245b;
case 0x48245c:c.instructions+=1;goto B48245c;
case 0x482461:goto L482461;
case 0x482464:c.instructions+=1;goto B482464;
case 0x48246a:goto L48246a;
case 0x482470:c.instructions+=1;goto B482470;
case 0x482476:goto L482476;
case 0x48247c:c.instructions+=4;goto B48247c;
case 0x482486:c.instructions+=3;goto B482486;
case 0x48248b:c.instructions+=2;goto B48248b;
case 0x48248d:c.instructions+=1;goto B48248d;
case 0x482493:goto L482493;
case 0x48249a:c.instructions+=4;goto B48249a;
case 0x4824a0:c.instructions+=3;goto B4824a0;
case 0x4824a6:c.instructions+=2;goto B4824a6;
case 0x4824a7:c.instructions+=1;goto B4824a7;
case 0x4824ac:goto L4824ac;
case 0x4824af:c.instructions+=4;goto B4824af;
case 0x4824b0:c.instructions+=3;goto B4824b0;
case 0x4824b1:c.instructions+=2;goto B4824b1;
case 0x4824b2:c.instructions+=1;goto B4824b2;
case 0x4824b5:goto L4824b5;
case 0x4824bb:c.instructions+=1;goto B4824bb;
case 0x4824c1:goto L4824c1;
case 0x4824c8:c.instructions+=3;goto B4824c8;
case 0x4824cd:c.instructions+=2;goto B4824cd;
case 0x4824d3:c.instructions+=1;goto B4824d3;
case 0x4824d5:goto L4824d5;
case 0x4824dc:c.instructions+=1;goto B4824dc;
case 0x4824de:goto L4824de;
case 0x4824e0:c.instructions+=3;goto B4824e0;
case 0x4824e1:c.instructions+=2;goto B4824e1;
case 0x4824e3:c.instructions+=1;goto B4824e3;
case 0x4824e8:goto L4824e8;
case 0x4824ea:goto L4824ea;
case 0x4824f0:c.instructions+=2;goto B4824f0;
case 0x4824f3:c.instructions+=1;goto B4824f3;
case 0x4824f5:goto L4824f5;
case 0x4824fb:c.instructions+=2;goto B4824fb;
case 0x482505:c.instructions+=1;goto B482505;
case 0x48250a:goto L48250a;
case 0x48250c:c.instructions+=1;goto B48250c;
case 0x48250e:goto L48250e;
case 0x482513:c.instructions+=2;goto B482513;
case 0x482515:c.instructions+=1;goto B482515;
case 0x482517:goto L482517;
case 0x48251d:c.instructions+=2;goto B48251d;
case 0x48251f:c.instructions+=1;goto B48251f;
case 0x482521:goto L482521;
case 0x482523:c.instructions+=3;goto B482523;
case 0x482525:c.instructions+=2;goto B482525;
case 0x482528:c.instructions+=1;goto B482528;
case 0x48252d:goto L48252d;
case 0x482533:c.instructions+=4;goto B482533;
case 0x482539:c.instructions+=3;goto B482539;
case 0x48253b:c.instructions+=2;goto B48253b;
case 0x48253c:c.instructions+=1;goto B48253c;
case 0x482541:goto L482541;
case 0x482544:c.instructions+=1;goto B482544;
case 0x48254b:goto L48254b;
case 0x482550:goto L482550;
case 0x482552:c.instructions+=2;goto B482552;
case 0x482557:c.instructions+=1;goto B482557;
case 0x48255d:goto L48255d;
case 0x482562:c.instructions+=2;goto B482562;
case 0x482564:c.instructions+=1;goto B482564;
case 0x482566:goto L482566;
case 0x482569:c.instructions+=2;goto B482569;
case 0x48256b:c.instructions+=1;goto B48256b;
case 0x482571:goto L482571;
case 0x482574:c.instructions+=2;goto B482574;
case 0x482576:c.instructions+=1;goto B482576;
case 0x48257c:goto L48257c;
case 0x482582:c.instructions+=2;goto B482582;
case 0x482584:c.instructions+=1;goto B482584;
case 0x48258a:goto L48258a;
case 0x482590:c.instructions+=2;goto B482590;
case 0x482592:c.instructions+=1;goto B482592;
case 0x482598:goto L482598;
case 0x48259e:c.instructions+=4;goto B48259e;
case 0x4825a4:c.instructions+=3;goto B4825a4;
case 0x4825a9:c.instructions+=2;goto B4825a9;
case 0x4825ab:c.instructions+=1;goto B4825ab;
case 0x4825b1:goto L4825b1;
case 0x4825b7:c.instructions+=2;goto B4825b7;
case 0x4825b9:c.instructions+=1;goto B4825b9;
case 0x4825bf:goto L4825bf;
case 0x4825c5:c.instructions+=3;goto B4825c5;
case 0x4825c6:c.instructions+=2;goto B4825c6;
case 0x4825c7:c.instructions+=1;goto B4825c7;
case 0x4825cc:goto L4825cc;
case 0x4825cf:c.instructions+=2;goto B4825cf;
case 0x4825d5:c.instructions+=1;goto B4825d5;
case 0x4825d7:goto L4825d7;
case 0x4825dd:c.instructions+=2;goto B4825dd;
case 0x4825df:c.instructions+=1;goto B4825df;
case 0x4825e1:goto L4825e1;
case 0x4825e7:c.instructions+=1;goto B4825e7;
case 0x4825e9:goto L4825e9;
case 0x4825ef:c.instructions+=2;goto B4825ef;
case 0x4825f1:c.instructions+=1;goto B4825f1;
case 0x4825f3:goto L4825f3;
case 0x4825f9:c.instructions+=4;goto B4825f9;
case 0x4825ff:c.instructions+=3;goto B4825ff;
case 0x482604:c.instructions+=2;goto B482604;
case 0x482606:c.instructions+=1;goto B482606;
case 0x482608:goto L482608;
case 0x48260e:c.instructions+=2;goto B48260e;
case 0x482610:c.instructions+=1;goto B482610;
case 0x482612:goto L482612;
case 0x482618:c.instructions+=3;goto B482618;
case 0x482619:c.instructions+=2;goto B482619;
case 0x48261a:c.instructions+=1;goto B48261a;
case 0x48261f:goto L48261f;
case 0x482622:c.instructions+=2;goto B482622;
case 0x482628:c.instructions+=1;goto B482628;
case 0x48262a:goto L48262a;
case 0x482630:c.instructions+=1;goto B482630;
case 0x482632:goto L482632;
case 0x482638:c.instructions+=1;goto B482638;
case 0x48263a:goto L48263a;
case 0x48263f:c.instructions+=2;goto B48263f;
case 0x482642:c.instructions+=1;goto B482642;
case 0x482644:goto L482644;
case 0x482647:c.instructions+=1;goto B482647;
case 0x482649:goto L482649;
case 0x48264b:c.instructions+=3;goto B48264b;
case 0x48264d:c.instructions+=2;goto B48264d;
case 0x48264f:c.instructions+=1;goto B48264f;
case 0x482654:goto L482654;
case 0x482659:c.instructions+=2;goto B482659;
case 0x48265c:c.instructions+=1;goto B48265c;
case 0x48265e:goto L48265e;
case 0x482661:c.instructions+=1;goto B482661;
case 0x482663:goto L482663;
case 0x482668:c.instructions+=1;goto B482668;
case 0x48266d:goto L48266d;
case 0x48266f:c.instructions+=1;goto B48266f;
case 0x482671:goto L482671;
case 0x482677:c.instructions+=2;goto B482677;
case 0x482679:c.instructions+=1;goto B482679;
case 0x48267b:goto L48267b;
case 0x482681:c.instructions+=1;goto B482681;
case 0x482687:goto L482687;
case 0x48268d:c.instructions+=2;goto B48268d;
case 0x48268f:c.instructions+=1;goto B48268f;
case 0x482695:goto L482695;
case 0x48269b:c.instructions+=4;goto B48269b;
case 0x4826a1:c.instructions+=3;goto B4826a1;
case 0x4826a6:c.instructions+=2;goto B4826a6;
case 0x4826a8:c.instructions+=1;goto B4826a8;
case 0x4826ae:goto L4826ae;
case 0x4826b4:c.instructions+=2;goto B4826b4;
case 0x4826b6:c.instructions+=1;goto B4826b6;
case 0x4826b8:goto L4826b8;
case 0x4826be:c.instructions+=3;goto B4826be;
case 0x4826bf:c.instructions+=2;goto B4826bf;
case 0x4826c0:c.instructions+=1;goto B4826c0;
case 0x4826c5:goto L4826c5;
case 0x4826c8:c.instructions+=5;goto B4826c8;
case 0x4826c9:c.instructions+=4;goto B4826c9;
case 0x4826cf:c.instructions+=3;goto B4826cf;
case 0x4826d0:c.instructions+=2;goto B4826d0;
case 0x4826d1:c.instructions+=1;goto B4826d1;
case 0x4826d4:goto L4826d4;
case 0x4826d5:c.instructions+=3;goto B4826d5;
case 0x4826da:c.instructions+=2;goto B4826da;
case 0x4826df:c.instructions+=1;goto B4826df;
case 0x4826e0:goto L4826e0;
case 0x4826e3:c.instructions+=2;goto B4826e3;
case 0x4826e5:c.instructions+=1;goto B4826e5;
case 0x4826e7:goto L4826e7;
case 0x4826ed:c.instructions+=3;goto B4826ed;
case 0x4826ee:c.instructions+=2;goto B4826ee;
case 0x4826ef:c.instructions+=1;goto B4826ef;
case 0x4826f4:goto L4826f4;
case 0x4826f7:goto L4826f7;
case 0x4826fa:c.instructions+=3;goto B4826fa;
case 0x4826fd:c.instructions+=2;goto B4826fd;
case 0x482703:c.instructions+=1;goto B482703;
case 0x482705:goto L482705;
case 0x48270a:c.instructions+=3;goto B48270a;
case 0x48270c:c.instructions+=2;goto B48270c;
case 0x48270d:c.instructions+=1;goto B48270d;
case 0x48270f:goto L48270f;
case 0x482713:c.instructions+=4;goto B482713;
case 0x482715:c.instructions+=3;goto B482715;
case 0x482716:c.instructions+=2;goto B482716;
case 0x482718:c.instructions+=1;goto B482718;
case 0x48271d:goto L48271d;
case 0x482721:c.instructions+=3;goto B482721;
case 0x482722:c.instructions+=2;goto B482722;
case 0x482725:c.instructions+=1;goto B482725;
case 0x48272a:goto L48272a;
case 0x48272b:c.instructions+=1;goto B48272b;
case 0x48272c:goto L48272c;
case 0x48272d:c.instructions+=1;goto B48272d;
case 0x482730:goto L482730;
case 0x482731:c.instructions+=2;goto B482731;
case 0x482733:c.instructions+=1;goto B482733;
case 0x482738:goto L482738;
case 0x48273d:c.instructions+=1;goto B48273d;
case 0x48273f:goto L48273f;
case 0x482740:c.instructions+=1;goto B482740;
case 0x482745:goto L482745;
case 0x482748:goto L482748;
case 0x48274a:c.instructions+=2;goto B48274a;
case 0x48274b:c.instructions+=1;goto B48274b;
case 0x482750:goto L482750;
case 0x482756:c.instructions+=9;goto B482756;
case 0x482757:c.instructions+=8;goto B482757;
case 0x482758:c.instructions+=7;goto B482758;
case 0x48275c:c.instructions+=6;goto B48275c;
case 0x48275d:c.instructions+=5;goto B48275d;
case 0x482764:c.instructions+=4;goto B482764;
case 0x482766:c.instructions+=3;goto B482766;
case 0x482767:c.instructions+=2;goto B482767;
case 0x482768:c.instructions+=1;goto B482768;
case 0x48276d:goto L48276d;
case 0x48276f:c.instructions+=5;goto B48276f;
case 0x482771:c.instructions+=4;goto B482771;
case 0x482773:c.instructions+=3;goto B482773;
case 0x482774:c.instructions+=2;goto B482774;
case 0x482776:c.instructions+=1;goto B482776;
case 0x482779:goto L482779;
case 0x48277c:c.instructions+=1;goto B48277c;
case 0x48277e:goto L48277e;
case 0x482785:c.instructions+=1;goto B482785;
case 0x482787:goto L482787;
case 0x48278b:c.instructions+=7;goto B48278b;
case 0x48278e:c.instructions+=6;goto B48278e;
case 0x482790:c.instructions+=5;goto B482790;
case 0x482791:c.instructions+=4;goto B482791;
case 0x482792:c.instructions+=3;goto B482792;
case 0x482793:c.instructions+=2;goto B482793;
case 0x482798:c.instructions+=1;goto B482798;
case 0x48279d:goto L48279d;
case 0x4827a0:goto L4827a0;
case 0x4827a4:c.instructions+=2;goto B4827a4;
case 0x4827a6:c.instructions+=1;goto B4827a6;
case 0x4827a8:goto L4827a8;
case 0x4827a9:c.instructions+=3;goto B4827a9;
case 0x4827aa:c.instructions+=2;goto B4827aa;
case 0x4827ad:c.instructions+=1;goto B4827ad;
case 0x4827b2:goto L4827b2;
case 0x4827b5:goto L4827b5;
case 0x4827b8:c.instructions+=2;goto B4827b8;
case 0x4827ba:c.instructions+=1;goto B4827ba;
case 0x4827c0:goto L4827c0;
case 0x4827c4:c.instructions+=1;goto B4827c4;
case 0x4827c6:goto L4827c6;
case 0x4827ca:goto L4827ca;
case 0x4827ce:c.instructions+=6;goto B4827ce;
case 0x4827d0:c.instructions+=5;goto B4827d0;
case 0x4827d3:c.instructions+=4;goto B4827d3;
case 0x4827d8:c.instructions+=3;goto B4827d8;
case 0x4827d9:c.instructions+=2;goto B4827d9;
case 0x4827da:c.instructions+=1;goto B4827da;
case 0x4827df:goto L4827df;
case 0x4827e2:c.instructions+=2;goto B4827e2;
case 0x4827e4:c.instructions+=1;goto B4827e4;
case 0x4827e6:goto L4827e6;
case 0x4827e9:c.instructions+=4;goto B4827e9;
case 0x4827ec:c.instructions+=3;goto B4827ec;
case 0x4827f2:c.instructions+=2;goto B4827f2;
case 0x4827f4:c.instructions+=1;goto B4827f4;
case 0x4827f6:goto L4827f6;
case 0x4827f7:c.instructions+=5;goto B4827f7;
case 0x4827f8:c.instructions+=4;goto B4827f8;
case 0x4827f9:c.instructions+=3;goto B4827f9;
case 0x4827fc:c.instructions+=2;goto B4827fc;
case 0x4827fd:c.instructions+=1;goto B4827fd;
case 0x4827fe:goto L4827fe;
case 0x482802:c.instructions+=4;goto B482802;
case 0x482808:c.instructions+=3;goto B482808;
case 0x48280c:c.instructions+=2;goto B48280c;
case 0x48280f:c.instructions+=1;goto B48280f;
case 0x482814:goto L482814;
case 0x482817:c.instructions+=5;goto B482817;
case 0x48281a:c.instructions+=4;goto B48281a;
case 0x48281b:c.instructions+=3;goto B48281b;
case 0x48281c:c.instructions+=2;goto B48281c;
case 0x48281d:c.instructions+=1;goto B48281d;
case 0x482822:goto L482822;
case 0x482825:c.instructions+=2;goto B482825;
case 0x482827:c.instructions+=1;goto B482827;
case 0x48282c:goto L48282c;
case 0x482831:goto L482831;
case 0x482835:c.instructions+=3;goto B482835;
case 0x482839:c.instructions+=2;goto B482839;
case 0x48283d:c.instructions+=1;goto B48283d;
case 0x482842:goto L482842;
case 0x482846:c.instructions+=4;goto B482846;
case 0x48284a:c.instructions+=3;goto B48284a;
case 0x48284e:c.instructions+=2;goto B48284e;
case 0x482854:c.instructions+=1;goto B482854;
case 0x482859:goto L482859;
case 0x48285d:c.instructions+=13;goto B48285d;
case 0x482863:c.instructions+=12;goto B482863;
case 0x482866:c.instructions+=11;goto B482866;
case 0x482868:c.instructions+=10;goto B482868;
case 0x48286b:c.instructions+=9;goto B48286b;
case 0x48286e:c.instructions+=8;goto B48286e;
case 0x482870:c.instructions+=7;goto B482870;
case 0x482872:c.instructions+=6;goto B482872;
case 0x482873:c.instructions+=5;goto B482873;
case 0x482877:c.instructions+=4;goto B482877;
case 0x482878:c.instructions+=3;goto B482878;
case 0x482879:c.instructions+=2;goto B482879;
case 0x48287a:c.instructions+=1;goto B48287a;
case 0x48287b:goto L48287b;
case 0x48287f:c.instructions+=1;goto B48287f;
case 0x482881:goto L482881;
case 0x482884:c.instructions+=2;goto B482884;
case 0x482885:c.instructions+=1;goto B482885;
case 0x48288a:goto L48288a;
case 0x48288e:c.instructions+=4;goto B48288e;
case 0x482891:c.instructions+=3;goto B482891;
case 0x482892:c.instructions+=2;goto B482892;
case 0x482894:c.instructions+=1;goto B482894;
case 0x482896:goto L482896;
case 0x482899:c.instructions+=3;goto B482899;
case 0x48289c:c.instructions+=2;goto B48289c;
case 0x48289f:c.instructions+=1;goto B48289f;
case 0x4828a0:goto L4828a0;
case 0x4828a3:c.instructions+=6;goto B4828a3;
case 0x4828a7:c.instructions+=5;goto B4828a7;
case 0x4828aa:c.instructions+=4;goto B4828aa;
case 0x4828ae:c.instructions+=3;goto B4828ae;
case 0x4828b1:c.instructions+=2;goto B4828b1;
case 0x4828b2:c.instructions+=1;goto B4828b2;
case 0x4828b4:goto L4828b4;
case 0x4828b7:c.instructions+=3;goto B4828b7;
case 0x4828b9:c.instructions+=2;goto B4828b9;
case 0x4828bd:c.instructions+=1;goto B4828bd;
case 0x4828bf:goto L4828bf;
case 0x4828c2:c.instructions+=4;goto B4828c2;
case 0x4828c4:c.instructions+=3;goto B4828c4;
case 0x4828c7:c.instructions+=2;goto B4828c7;
case 0x4828c9:c.instructions+=1;goto B4828c9;
case 0x4828cb:goto L4828cb;
case 0x4828cf:c.instructions+=7;goto B4828cf;
case 0x4828d2:c.instructions+=6;goto B4828d2;
case 0x4828d3:c.instructions+=5;goto B4828d3;
case 0x4828d4:c.instructions+=4;goto B4828d4;
case 0x4828d7:c.instructions+=3;goto B4828d7;
case 0x4828d8:c.instructions+=2;goto B4828d8;
case 0x4828d9:c.instructions+=1;goto B4828d9;
case 0x4828de:goto L4828de;
case 0x4828e1:c.instructions+=1;goto B4828e1;
case 0x4828e3:goto L4828e3;
case 0x4828e7:c.instructions+=5;goto B4828e7;
case 0x4828e8:c.instructions+=4;goto B4828e8;
case 0x4828ee:c.instructions+=3;goto B4828ee;
case 0x4828ef:c.instructions+=2;goto B4828ef;
case 0x4828f5:c.instructions+=1;goto B4828f5;
case 0x4828fa:goto L4828fa;
case 0x482900:c.instructions+=9;goto B482900;
case 0x482903:c.instructions+=8;goto B482903;
case 0x482906:c.instructions+=7;goto B482906;
case 0x482907:c.instructions+=6;goto B482907;
case 0x482908:c.instructions+=5;goto B482908;
case 0x48290c:c.instructions+=4;goto B48290c;
case 0x48290d:c.instructions+=3;goto B48290d;
case 0x48290e:c.instructions+=2;goto B48290e;
case 0x482914:c.instructions+=1;goto B482914;
case 0x482919:goto L482919;
case 0x48291c:goto L48291c;
case 0x48291e:c.instructions+=2;goto B48291e;
case 0x482920:c.instructions+=1;goto B482920;
case 0x482922:goto L482922;
case 0x482926:c.instructions+=3;goto B482926;
case 0x482927:c.instructions+=2;goto B482927;
case 0x482929:c.instructions+=1;goto B482929;
case 0x48292b:goto L48292b;
case 0x48292e:c.instructions+=2;goto B48292e;
case 0x482931:c.instructions+=1;goto B482931;
case 0x482933:goto L482933;
case 0x482936:c.instructions+=11;goto B482936;
case 0x482938:c.instructions+=10;goto B482938;
case 0x48293b:c.instructions+=9;goto B48293b;
case 0x48293d:c.instructions+=8;goto B48293d;
case 0x48293f:c.instructions+=7;goto B48293f;
case 0x482942:c.instructions+=6;goto B482942;
case 0x482945:c.instructions+=5;goto B482945;
case 0x482948:c.instructions+=4;goto B482948;
case 0x48294b:c.instructions+=3;goto B48294b;
case 0x48294c:c.instructions+=2;goto B48294c;
case 0x48294f:c.instructions+=1;goto B48294f;
case 0x482951:goto L482951;
case 0x482954:c.instructions+=4;goto B482954;
case 0x482958:c.instructions+=3;goto B482958;
case 0x48295b:c.instructions+=2;goto B48295b;
case 0x48295e:c.instructions+=1;goto B48295e;
case 0x482960:goto L482960;
case 0x482962:c.instructions+=6;goto B482962;
case 0x482963:c.instructions+=5;goto B482963;
case 0x482967:c.instructions+=4;goto B482967;
case 0x482968:c.instructions+=3;goto B482968;
case 0x482969:c.instructions+=2;goto B482969;
case 0x48296a:c.instructions+=1;goto B48296a;
case 0x482970:goto L482970;
case 0x482973:c.instructions+=6;goto B482973;
case 0x482974:c.instructions+=5;goto B482974;
case 0x482976:c.instructions+=4;goto B482976;
case 0x482979:c.instructions+=3;goto B482979;
case 0x48297b:c.instructions+=2;goto B48297b;
case 0x48297d:c.instructions+=1;goto B48297d;
case 0x48297f:goto L48297f;
case 0x482980:c.instructions+=3;goto B482980;
case 0x482982:c.instructions+=2;goto B482982;
case 0x482984:c.instructions+=1;goto B482984;
case 0x482986:goto L482986;
case 0x482987:c.instructions+=2;goto B482987;
case 0x482988:c.instructions+=1;goto B482988;
case 0x482990:goto L482990;
case 0x482994:c.instructions+=3;goto B482994;
case 0x482996:c.instructions+=2;goto B482996;
case 0x482999:c.instructions+=1;goto B482999;
case 0x48299b:goto L48299b;
case 0x48299d:c.instructions+=2;goto B48299d;
case 0x48299e:c.instructions+=1;goto B48299e;
case 0x4829a0:goto L4829a0;
case 0x4829a3:c.instructions+=1;goto B4829a3;
case 0x4829a8:goto L4829a8;
case 0x4829ac:c.instructions+=3;goto B4829ac;
case 0x4829ad:c.instructions+=2;goto B4829ad;
case 0x4829ae:c.instructions+=1;goto B4829ae;
case 0x4829b3:goto L4829b3;
case 0x4829b6:c.instructions+=1;goto B4829b6;
case 0x4829bb:goto L4829bb;
case 0x4829c0:c.instructions+=1;goto B4829c0;
case 0x4829c2:goto L4829c2;
case 0x4829c4:c.instructions+=1;goto B4829c4;
case 0x4829c5:goto L4829c5;
case 0x4829ca:goto L4829ca;
case 0x4829cb:c.instructions+=1;goto B4829cb;
case 0x4829d0:goto L4829d0;
case 0x4829d2:c.instructions+=5;goto B4829d2;
case 0x4829d5:c.instructions+=4;goto B4829d5;
case 0x4829d7:c.instructions+=3;goto B4829d7;
case 0x4829d8:c.instructions+=2;goto B4829d8;
case 0x4829db:c.instructions+=1;goto B4829db;
case 0x4829e0:goto L4829e0;
case 0x4829e3:c.instructions+=3;goto B4829e3;
case 0x4829e5:c.instructions+=2;goto B4829e5;
case 0x4829e8:c.instructions+=1;goto B4829e8;
case 0x4829ea:goto L4829ea;
case 0x4829ec:goto L4829ec;
case 0x4829ef:c.instructions+=1;goto B4829ef;
case 0x4829f1:goto L4829f1;
case 0x4829f2:c.instructions+=1;goto B4829f2;
case 0x4829f3:goto L4829f3;
case 0x4829f4:goto L4829f4;
case 0x4829f5:c.instructions+=2;goto B4829f5;
case 0x4829f8:c.instructions+=1;goto B4829f8;
case 0x482a00:goto L482a00;
case 0x482a01:c.instructions+=5;goto B482a01;
case 0x482a03:c.instructions+=4;goto B482a03;
case 0x482a06:c.instructions+=3;goto B482a06;
case 0x482a08:c.instructions+=2;goto B482a08;
case 0x482a09:c.instructions+=1;goto B482a09;
case 0x482a0b:goto L482a0b;
case 0x482a10:c.instructions+=1;goto B482a10;
case 0x482a15:goto L482a15;
case 0x482a18:c.instructions+=2;goto B482a18;
case 0x482a1a:c.instructions+=1;goto B482a1a;
case 0x482a1c:goto L482a1c;
case 0x482a23:c.instructions+=3;goto B482a23;
case 0x482a2a:c.instructions+=2;goto B482a2a;
case 0x482a30:c.instructions+=1;goto B482a30;
case 0x482a32:goto L482a32;
case 0x482a34:goto L482a34;
case 0x482a37:c.instructions+=5;goto B482a37;
case 0x482a3d:c.instructions+=4;goto B482a3d;
case 0x482a43:c.instructions+=3;goto B482a43;
case 0x482a44:c.instructions+=2;goto B482a44;
case 0x482a46:c.instructions+=1;goto B482a46;
case 0x482a4b:goto L482a4b;
case 0x482a4e:c.instructions+=5;goto B482a4e;
case 0x482a50:c.instructions+=4;goto B482a50;
case 0x482a55:c.instructions+=3;goto B482a55;
case 0x482a57:c.instructions+=2;goto B482a57;
case 0x482a59:c.instructions+=1;goto B482a59;
case 0x482a5e:goto L482a5e;
case 0x482a60:c.instructions+=1;goto B482a60;
case 0x482a65:goto L482a65;
case 0x482a68:c.instructions+=2;goto B482a68;
case 0x482a6a:c.instructions+=1;goto B482a6a;
case 0x482a6c:goto L482a6c;
case 0x482a6e:c.instructions+=2;goto B482a6e;
case 0x482a71:c.instructions+=1;goto B482a71;
case 0x482a73:goto L482a73;
case 0x482a75:goto L482a75;
case 0x482a78:goto L482a78;
case 0x482a7c:c.instructions+=6;goto B482a7c;
case 0x482a82:c.instructions+=5;goto B482a82;
case 0x482a87:c.instructions+=4;goto B482a87;
case 0x482a8a:c.instructions+=3;goto B482a8a;
case 0x482a90:c.instructions+=2;goto B482a90;
case 0x482a91:c.instructions+=1;goto B482a91;
case 0x482a96:goto L482a96;
case 0x482a98:c.instructions+=4;goto B482a98;
case 0x482a9d:c.instructions+=3;goto B482a9d;
case 0x482a9e:c.instructions+=2;goto B482a9e;
case 0x482aa0:c.instructions+=1;goto B482aa0;
case 0x482aa5:goto L482aa5;
case 0x482aab:c.instructions+=3;goto B482aab;
case 0x482aae:c.instructions+=2;goto B482aae;
case 0x482ab0:c.instructions+=1;goto B482ab0;
case 0x482ab2:goto L482ab2;
case 0x482ab8:c.instructions+=5;goto B482ab8;
case 0x482abb:c.instructions+=4;goto B482abb;
case 0x482ac1:c.instructions+=3;goto B482ac1;
case 0x482ac2:c.instructions+=2;goto B482ac2;
case 0x482ac3:c.instructions+=1;goto B482ac3;
case 0x482ac8:goto L482ac8;
case 0x482acb:c.instructions+=1;goto B482acb;
case 0x482acd:goto L482acd;
case 0x482ad2:c.instructions+=8;goto B482ad2;
case 0x482ad4:c.instructions+=7;goto B482ad4;
case 0x482ad9:c.instructions+=6;goto B482ad9;
case 0x482ada:c.instructions+=5;goto B482ada;
case 0x482adc:c.instructions+=4;goto B482adc;
case 0x482add:c.instructions+=3;goto B482add;
case 0x482ade:c.instructions+=2;goto B482ade;
case 0x482ae4:c.instructions+=1;goto B482ae4;
case 0x482ae9:goto L482ae9;
case 0x482aef:c.instructions+=2;goto B482aef;
case 0x482af0:c.instructions+=1;goto B482af0;
case 0x482af5:goto L482af5;
case 0x482afb:c.instructions+=4;goto B482afb;
case 0x482afc:c.instructions+=3;goto B482afc;
case 0x482afe:c.instructions+=2;goto B482afe;
case 0x482b00:c.instructions+=1;goto B482b00;
case 0x482b05:goto L482b05;
case 0x482b0b:c.instructions+=3;goto B482b0b;
case 0x482b0e:c.instructions+=2;goto B482b0e;
case 0x482b10:c.instructions+=1;goto B482b10;
case 0x482b12:goto L482b12;
case 0x482b18:c.instructions+=5;goto B482b18;
case 0x482b1b:c.instructions+=4;goto B482b1b;
case 0x482b21:c.instructions+=3;goto B482b21;
case 0x482b22:c.instructions+=2;goto B482b22;
case 0x482b23:c.instructions+=1;goto B482b23;
case 0x482b28:goto L482b28;
case 0x482b2b:c.instructions+=1;goto B482b2b;
case 0x482b2d:goto L482b2d;
case 0x482b32:c.instructions+=8;goto B482b32;
case 0x482b34:c.instructions+=7;goto B482b34;
case 0x482b39:c.instructions+=6;goto B482b39;
case 0x482b3a:c.instructions+=5;goto B482b3a;
case 0x482b3c:c.instructions+=4;goto B482b3c;
case 0x482b3d:c.instructions+=3;goto B482b3d;
case 0x482b3e:c.instructions+=2;goto B482b3e;
case 0x482b44:c.instructions+=1;goto B482b44;
case 0x482b49:goto L482b49;
case 0x482b4f:c.instructions+=2;goto B482b4f;
case 0x482b50:c.instructions+=1;goto B482b50;
case 0x482b55:goto L482b55;
case 0x482b5b:c.instructions+=4;goto B482b5b;
case 0x482b5c:c.instructions+=3;goto B482b5c;
case 0x482b5e:c.instructions+=2;goto B482b5e;
case 0x482b60:c.instructions+=1;goto B482b60;
case 0x482b65:goto L482b65;
case 0x482b6b:c.instructions+=3;goto B482b6b;
case 0x482b6e:c.instructions+=2;goto B482b6e;
case 0x482b70:c.instructions+=1;goto B482b70;
case 0x482b72:goto L482b72;
case 0x482b78:c.instructions+=5;goto B482b78;
case 0x482b7b:c.instructions+=4;goto B482b7b;
case 0x482b81:c.instructions+=3;goto B482b81;
case 0x482b82:c.instructions+=2;goto B482b82;
case 0x482b83:c.instructions+=1;goto B482b83;
case 0x482b88:goto L482b88;
case 0x482b8b:c.instructions+=1;goto B482b8b;
case 0x482b8d:goto L482b8d;
case 0x482b92:c.instructions+=8;goto B482b92;
case 0x482b94:c.instructions+=7;goto B482b94;
case 0x482b99:c.instructions+=6;goto B482b99;
case 0x482b9a:c.instructions+=5;goto B482b9a;
case 0x482b9c:c.instructions+=4;goto B482b9c;
case 0x482b9d:c.instructions+=3;goto B482b9d;
case 0x482b9e:c.instructions+=2;goto B482b9e;
case 0x482ba4:c.instructions+=1;goto B482ba4;
case 0x482ba9:goto L482ba9;
case 0x482bac:c.instructions+=3;goto B482bac;
case 0x482bad:c.instructions+=2;goto B482bad;
case 0x482bae:c.instructions+=1;goto B482bae;
case 0x482bc0:goto L482bc0;
case 0x482bc4:c.instructions+=6;goto B482bc4;
case 0x482bc5:c.instructions+=5;goto B482bc5;
case 0x482bc6:c.instructions+=4;goto B482bc6;
case 0x482bc8:c.instructions+=3;goto B482bc8;
case 0x482bcb:c.instructions+=2;goto B482bcb;
case 0x482bcc:c.instructions+=1;goto B482bcc;
case 0x482bce:goto L482bce;
case 0x482bd5:goto L482bd5;
case 0x482bdb:c.instructions+=1;goto B482bdb;
case 0x482bdd:goto L482bdd;
case 0x482be3:c.instructions+=1;goto B482be3;
case 0x482be5:goto L482be5;
case 0x482beb:c.instructions+=1;goto B482beb;
case 0x482bed:goto L482bed;
case 0x482bf3:goto L482bf3;
case 0x482bf8:c.instructions+=5;goto B482bf8;
case 0x482bfb:c.instructions+=4;goto B482bfb;
case 0x482bfe:c.instructions+=3;goto B482bfe;
case 0x482c01:c.instructions+=2;goto B482c01;
case 0x482c02:c.instructions+=1;goto B482c02;
case 0x482c07:goto L482c07;
case 0x482c0a:c.instructions+=3;goto B482c0a;
case 0x482c0c:c.instructions+=2;goto B482c0c;
case 0x482c0e:c.instructions+=1;goto B482c0e;
case 0x482c13:goto L482c13;
case 0x482c16:c.instructions+=2;goto B482c16;
case 0x482c18:c.instructions+=1;goto B482c18;
case 0x482c1a:goto L482c1a;
case 0x482c1d:c.instructions+=4;goto B482c1d;
case 0x482c1e:c.instructions+=3;goto B482c1e;
case 0x482c23:c.instructions+=2;goto B482c23;
case 0x482c25:c.instructions+=1;goto B482c25;
case 0x482c2a:goto L482c2a;
case 0x482c2d:c.instructions+=2;goto B482c2d;
case 0x482c2e:c.instructions+=1;goto B482c2e;
case 0x482c33:goto L482c33;
case 0x482c36:c.instructions+=1;goto B482c36;
case 0x482c39:goto L482c39;
case 0x482c3a:c.instructions+=2;goto B482c3a;
case 0x482c3b:c.instructions+=1;goto B482c3b;
case 0x482c60:goto L482c60;
case 0x482c62:c.instructions+=16;goto B482c62;
case 0x482c67:c.instructions+=15;goto B482c67;
case 0x482c6d:c.instructions+=14;goto B482c6d;
case 0x482c6e:c.instructions+=13;goto B482c6e;
case 0x482c75:c.instructions+=12;goto B482c75;
case 0x482c76:c.instructions+=11;goto B482c76;
case 0x482c77:c.instructions+=10;goto B482c77;
case 0x482c79:c.instructions+=9;goto B482c79;
case 0x482c7d:c.instructions+=8;goto B482c7d;
case 0x482c83:c.instructions+=7;goto B482c83;
case 0x482c88:c.instructions+=6;goto B482c88;
case 0x482c8a:c.instructions+=5;goto B482c8a;
case 0x482c8c:c.instructions+=4;goto B482c8c;
case 0x482c8f:c.instructions+=3;goto B482c8f;
case 0x482c90:c.instructions+=2;goto B482c90;
case 0x482c98:c.instructions+=1;goto B482c98;
case 0x482c9d:goto L482c9d;
case 0x482ca1:c.instructions+=5;goto B482ca1;
case 0x482ca7:c.instructions+=4;goto B482ca7;
case 0x482ca8:c.instructions+=3;goto B482ca8;
case 0x482caf:c.instructions+=2;goto B482caf;
case 0x482cb2:c.instructions+=1;goto B482cb2;
case 0x482cc0:goto L482cc0;
case 0x482cc1:c.instructions+=4;goto B482cc1;
case 0x482cc2:c.instructions+=3;goto B482cc2;
case 0x482cc5:c.instructions+=2;goto B482cc5;
case 0x482cca:c.instructions+=1;goto B482cca;
case 0x482cd0:goto L482cd0;
case 0x482cd2:c.instructions+=1;goto B482cd2;
case 0x482cd4:goto L482cd4;
case 0x482cd6:c.instructions+=6;goto B482cd6;
case 0x482cd8:c.instructions+=5;goto B482cd8;
case 0x482cdb:c.instructions+=4;goto B482cdb;
case 0x482cdd:c.instructions+=3;goto B482cdd;
case 0x482cde:c.instructions+=2;goto B482cde;
case 0x482ce1:c.instructions+=1;goto B482ce1;
case 0x482ce6:goto L482ce6;
case 0x482ce8:c.instructions+=3;goto B482ce8;
case 0x482ceb:c.instructions+=2;goto B482ceb;
case 0x482ced:c.instructions+=1;goto B482ced;
case 0x482cef:goto L482cef;
case 0x482cf2:c.instructions+=2;goto B482cf2;
case 0x482cf3:c.instructions+=1;goto B482cf3;
case 0x482cf5:goto L482cf5;
case 0x482cf6:c.instructions+=2;goto B482cf6;
case 0x482cf7:c.instructions+=1;goto B482cf7;
case 0x482d00:goto L482d00;
case 0x482d01:c.instructions+=2;goto B482d01;
case 0x482d03:c.instructions+=1;goto B482d03;
case 0x482d08:goto L482d08;
case 0x482d0d:c.instructions+=1;goto B482d0d;
case 0x482d0f:goto L482d0f;
case 0x482d10:c.instructions+=1;goto B482d10;
case 0x482d15:goto L482d15;
case 0x482d18:goto L482d18;
case 0x482d1a:c.instructions+=2;goto B482d1a;
case 0x482d1b:c.instructions+=1;goto B482d1b;
case 0x482d20:goto L482d20;
case 0x482d24:c.instructions+=2;goto B482d24;
case 0x482d2a:c.instructions+=1;goto B482d2a;
case 0x482d2c:goto L482d2c;
case 0x482d31:c.instructions+=2;goto B482d31;
case 0x482d33:c.instructions+=1;goto B482d33;
case 0x482d35:goto L482d35;
case 0x482d3b:c.instructions+=2;goto B482d3b;
case 0x482d41:c.instructions+=1;goto B482d41;
case 0x482d46:goto L482d46;
case 0x482d4b:c.instructions+=1;goto B482d4b;
case 0x482d4c:goto L482d4c;
case 0x482d4e:c.instructions+=1;goto B482d4e;
case 0x482d50:goto L482d50;
case 0x482d51:c.instructions+=8;goto B482d51;
case 0x482d52:c.instructions+=7;goto B482d52;
case 0x482d54:c.instructions+=6;goto B482d54;
case 0x482d57:c.instructions+=5;goto B482d57;
case 0x482d58:c.instructions+=4;goto B482d58;
case 0x482d5e:c.instructions+=3;goto B482d5e;
case 0x482d60:c.instructions+=2;goto B482d60;
case 0x482d63:c.instructions+=1;goto B482d63;
case 0x482d65:goto L482d65;
case 0x482d6b:c.instructions+=2;goto B482d6b;
case 0x482d6d:c.instructions+=1;goto B482d6d;
case 0x482d6f:goto L482d6f;
case 0x482d73:c.instructions+=1;goto B482d73;
case 0x482d7a:goto L482d7a;
case 0x482d7d:c.instructions+=3;goto B482d7d;
case 0x482d7f:c.instructions+=2;goto B482d7f;
case 0x482d86:c.instructions+=1;goto B482d86;
case 0x482d8c:goto L482d8c;
case 0x482d8d:c.instructions+=5;goto B482d8d;
case 0x482d8e:c.instructions+=4;goto B482d8e;
case 0x482d92:c.instructions+=3;goto B482d92;
case 0x482d93:c.instructions+=2;goto B482d93;
case 0x482d95:c.instructions+=1;goto B482d95;
case 0x482d9a:goto L482d9a;
case 0x482d9b:c.instructions+=2;goto B482d9b;
case 0x482d9d:c.instructions+=1;goto B482d9d;
case 0x482da2:goto L482da2;
case 0x482da8:c.instructions+=2;goto B482da8;
case 0x482da9:c.instructions+=1;goto B482da9;
case 0x482dae:goto L482dae;
case 0x482daf:c.instructions+=2;goto B482daf;
case 0x482db1:c.instructions+=1;goto B482db1;
case 0x482db6:goto L482db6;
case 0x482db9:c.instructions+=4;goto B482db9;
case 0x482dba:c.instructions+=3;goto B482dba;
case 0x482dbf:c.instructions+=2;goto B482dbf;
case 0x482dc1:c.instructions+=1;goto B482dc1;
case 0x482dc7:goto L482dc7;
case 0x482dce:goto L482dce;
case 0x482dd4:c.instructions+=2;goto B482dd4;
case 0x482dd6:c.instructions+=1;goto B482dd6;
case 0x482ddc:goto L482ddc;
case 0x482ddf:c.instructions+=17;goto B482ddf;
case 0x482de2:c.instructions+=16;goto B482de2;
case 0x482de7:c.instructions+=15;goto B482de7;
case 0x482dea:c.instructions+=14;goto B482dea;
case 0x482ded:c.instructions+=13;goto B482ded;
case 0x482df0:c.instructions+=12;goto B482df0;
case 0x482df3:c.instructions+=11;goto B482df3;
case 0x482df6:c.instructions+=10;goto B482df6;
case 0x482df9:c.instructions+=9;goto B482df9;
case 0x482dfb:c.instructions+=8;goto B482dfb;
case 0x482dfc:c.instructions+=7;goto B482dfc;
case 0x482dff:c.instructions+=6;goto B482dff;
case 0x482e00:c.instructions+=5;goto B482e00;
case 0x482e05:c.instructions+=4;goto B482e05;
case 0x482e0a:c.instructions+=3;goto B482e0a;
case 0x482e0b:c.instructions+=2;goto B482e0b;
case 0x482e0e:c.instructions+=1;goto B482e0e;
case 0x482e13:goto L482e13;
case 0x482e16:c.instructions+=3;goto B482e16;
case 0x482e19:c.instructions+=2;goto B482e19;
case 0x482e1f:c.instructions+=1;goto B482e1f;
case 0x482e24:goto L482e24;
case 0x482e27:c.instructions+=4;goto B482e27;
case 0x482e2a:c.instructions+=3;goto B482e2a;
case 0x482e2c:c.instructions+=2;goto B482e2c;
case 0x482e2e:c.instructions+=1;goto B482e2e;
case 0x482e34:goto L482e34;
case 0x482e37:c.instructions+=2;goto B482e37;
case 0x482e39:c.instructions+=1;goto B482e39;
case 0x482e3b:goto L482e3b;
case 0x482e40:goto L482e40;
case 0x482e43:c.instructions+=10;goto B482e43;
case 0x482e46:c.instructions+=9;goto B482e46;
case 0x482e48:c.instructions+=8;goto B482e48;
case 0x482e4f:c.instructions+=7;goto B482e4f;
case 0x482e52:c.instructions+=6;goto B482e52;
case 0x482e54:c.instructions+=5;goto B482e54;
case 0x482e58:c.instructions+=4;goto B482e58;
case 0x482e5a:c.instructions+=3;goto B482e5a;
case 0x482e5b:c.instructions+=2;goto B482e5b;
case 0x482e5d:c.instructions+=1;goto B482e5d;
case 0x482e60:goto L482e60;
case 0x482e62:c.instructions+=4;goto B482e62;
case 0x482e63:c.instructions+=3;goto B482e63;
case 0x482e65:c.instructions+=2;goto B482e65;
case 0x482e68:c.instructions+=1;goto B482e68;
case 0x482e6b:goto L482e6b;
case 0x482e72:c.instructions+=4;goto B482e72;
case 0x482e73:c.instructions+=3;goto B482e73;
case 0x482e79:c.instructions+=2;goto B482e79;
case 0x482e7c:c.instructions+=1;goto B482e7c;
case 0x482e81:goto L482e81;
case 0x482e84:c.instructions+=8;goto B482e84;
case 0x482e87:c.instructions+=7;goto B482e87;
case 0x482e8a:c.instructions+=6;goto B482e8a;
case 0x482e8c:c.instructions+=5;goto B482e8c;
case 0x482e8d:c.instructions+=4;goto B482e8d;
case 0x482e8f:c.instructions+=3;goto B482e8f;
case 0x482e90:c.instructions+=2;goto B482e90;
case 0x482e96:c.instructions+=1;goto B482e96;
case 0x482e9b:goto L482e9b;
case 0x482e9d:c.instructions+=1;goto B482e9d;
case 0x482ea2:goto L482ea2;
case 0x482ea3:c.instructions+=1;goto B482ea3;
case 0x482ea8:goto L482ea8;
case 0x482ea9:c.instructions+=6;goto B482ea9;
case 0x482eaa:c.instructions+=5;goto B482eaa;
case 0x482eab:c.instructions+=4;goto B482eab;
case 0x482eaf:c.instructions+=3;goto B482eaf;
case 0x482eb0:c.instructions+=2;goto B482eb0;
case 0x482eb1:c.instructions+=1;goto B482eb1;
case 0x482eb4:goto L482eb4;
case 0x482eb6:c.instructions+=1;goto B482eb6;
case 0x482eb8:goto L482eb8;
case 0x482ebe:c.instructions+=2;goto B482ebe;
case 0x482ec0:c.instructions+=1;goto B482ec0;
case 0x482ec6:goto L482ec6;
case 0x482ec7:c.instructions+=7;goto B482ec7;
case 0x482ec8:c.instructions+=6;goto B482ec8;
case 0x482ec9:c.instructions+=5;goto B482ec9;
case 0x482ed0:c.instructions+=4;goto B482ed0;
case 0x482ed7:c.instructions+=3;goto B482ed7;
case 0x482ed8:c.instructions+=2;goto B482ed8;
case 0x482ed9:c.instructions+=1;goto B482ed9;
case 0x482edc:goto L482edc;
case 0x482ee2:c.instructions+=2;goto B482ee2;
case 0x482ee4:c.instructions+=1;goto B482ee4;
case 0x482ee6:goto L482ee6;
case 0x482eec:c.instructions+=2;goto B482eec;
case 0x482eee:c.instructions+=1;goto B482eee;
case 0x482ef4:goto L482ef4;
case 0x482efa:c.instructions+=2;goto B482efa;
case 0x482efc:c.instructions+=1;goto B482efc;
case 0x482f02:goto L482f02;
case 0x482f04:c.instructions+=1;goto B482f04;
case 0x482f09:goto L482f09;
case 0x482f0a:c.instructions+=5;goto B482f0a;
case 0x482f0b:c.instructions+=4;goto B482f0b;
case 0x482f0c:c.instructions+=3;goto B482f0c;
case 0x482f0d:c.instructions+=2;goto B482f0d;
case 0x482f0e:c.instructions+=1;goto B482f0e;
case 0x482f11:goto L482f11;
case 0x482f17:c.instructions+=2;goto B482f17;
case 0x482f19:c.instructions+=1;goto B482f19;
case 0x482f1f:goto L482f1f;
case 0x482f22:c.instructions+=9;goto B482f22;
case 0x482f25:c.instructions+=8;goto B482f25;
case 0x482f2a:c.instructions+=7;goto B482f2a;
case 0x482f2d:c.instructions+=6;goto B482f2d;
case 0x482f30:c.instructions+=5;goto B482f30;
case 0x482f33:c.instructions+=4;goto B482f33;
case 0x482f36:c.instructions+=3;goto B482f36;
case 0x482f3a:c.instructions+=2;goto B482f3a;
case 0x482f41:c.instructions+=1;goto B482f41;
case 0x482f43:goto L482f43;
case 0x482f47:c.instructions+=2;goto B482f47;
case 0x482f4d:c.instructions+=1;goto B482f4d;
case 0x482f52:goto L482f52;
case 0x482f56:goto L482f56;
case 0x482f59:c.instructions+=6;goto B482f59;
case 0x482f5e:c.instructions+=5;goto B482f5e;
case 0x482f61:c.instructions+=4;goto B482f61;
case 0x482f66:c.instructions+=3;goto B482f66;
case 0x482f67:c.instructions+=2;goto B482f67;
case 0x482f6a:c.instructions+=1;goto B482f6a;
case 0x482f6f:goto L482f6f;
case 0x482f73:c.instructions+=9;goto B482f73;
case 0x482f77:c.instructions+=8;goto B482f77;
case 0x482f7b:c.instructions+=7;goto B482f7b;
case 0x482f7d:c.instructions+=6;goto B482f7d;
case 0x482f80:c.instructions+=5;goto B482f80;
case 0x482f82:c.instructions+=4;goto B482f82;
case 0x482f83:c.instructions+=3;goto B482f83;
case 0x482f84:c.instructions+=2;goto B482f84;
case 0x482f86:c.instructions+=1;goto B482f86;
case 0x482f89:goto L482f89;
case 0x482f8a:c.instructions+=3;goto B482f8a;
case 0x482f90:c.instructions+=2;goto B482f90;
case 0x482f93:c.instructions+=1;goto B482f93;
case 0x482f98:goto L482f98;
case 0x482f9e:c.instructions+=7;goto B482f9e;
case 0x482fa1:c.instructions+=6;goto B482fa1;
case 0x482fa6:c.instructions+=5;goto B482fa6;
case 0x482fa8:c.instructions+=4;goto B482fa8;
case 0x482fa9:c.instructions+=3;goto B482fa9;
case 0x482fab:c.instructions+=2;goto B482fab;
case 0x482fac:c.instructions+=1;goto B482fac;
case 0x482faf:goto L482faf;
case 0x482fb0:c.instructions+=3;goto B482fb0;
case 0x482fb6:c.instructions+=2;goto B482fb6;
case 0x482fb9:c.instructions+=1;goto B482fb9;
case 0x482fbe:goto L482fbe;
case 0x482fbf:c.instructions+=5;goto B482fbf;
case 0x482fc0:c.instructions+=4;goto B482fc0;
case 0x482fc1:c.instructions+=3;goto B482fc1;
case 0x482fc2:c.instructions+=2;goto B482fc2;
case 0x482fc3:c.instructions+=1;goto B482fc3;
case 0x482fc6:goto L482fc6;
case 0x482fcc:c.instructions+=2;goto B482fcc;
case 0x482fce:c.instructions+=1;goto B482fce;
case 0x482fd4:goto L482fd4;
case 0x482fd7:c.instructions+=8;goto B482fd7;
case 0x482fda:c.instructions+=7;goto B482fda;
case 0x482fdd:c.instructions+=6;goto B482fdd;
case 0x482fe0:c.instructions+=5;goto B482fe0;
case 0x482fe3:c.instructions+=4;goto B482fe3;
case 0x482fea:c.instructions+=3;goto B482fea;
case 0x482fed:c.instructions+=2;goto B482fed;
case 0x482ff1:c.instructions+=1;goto B482ff1;
case 0x482ff3:goto L482ff3;
case 0x482ff7:c.instructions+=1;goto B482ff7;
case 0x482ff9:goto L482ff9;
case 0x482ffd:c.instructions+=1;goto B482ffd;
default:missing_instruction(c.pc);}
B482002:L482002:{c.instructions+=3;NFSU2_TR(0x482002);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482003:{NFSU2_TR(0x482003);
__builtin_memmove((R+4),(R+0),4);
}
B482005:{NFSU2_TR(0x482005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48200aull));
TAIL_STATIC(0x735070u,735);
}
B48200a:L48200a:{c.instructions+=2;NFSU2_TR(0x48200a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48200f:{NFSU2_TR(0x48200f);
if(r1(R+518)){{goto L482107;}}
}
B482015:L482015:{c.instructions+=6;NFSU2_TR(0x482015);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48201b:{NFSU2_TR(0x48201b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(m4(0x7ecf90)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B482022:{NFSU2_TR(0x482022);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482028:{NFSU2_TR(0x482028);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B48202b:{NFSU2_TR(0x48202b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48202d:{NFSU2_TR(0x48202d);
if(r1(R+518)){{goto L482058;}}
}
B48202f:L48202f:{c.instructions+=4;NFSU2_TR(0x48202f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482035:{NFSU2_TR(0x482035);
w4(R+4,u32(0x82bcd0ull));
}
B48203a:{NFSU2_TR(0x48203a);
__builtin_memmove(gp(0x82bce0),(R+8),4);
}
B482040:{NFSU2_TR(0x482040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482045ull));
TAIL_STATIC(0x4599e0u,459);
}
B482045:L482045:{c.instructions+=2;NFSU2_TR(0x482045);
{u32 ea_=u32(u32(8568036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48204b:{NFSU2_TR(0x48204b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482050ull));
TAIL_STATIC(0x75bed4u,75b);
}
B482050:L482050:{c.instructions+=3;NFSU2_TR(0x482050);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B482053:{NFSU2_TR(0x482053);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B482056:{NFSU2_TR(0x482056);
__builtin_memmove((R+24),(R+0),4);
}
B482058:L482058:{c.instructions+=4;NFSU2_TR(0x482058);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48205a:{NFSU2_TR(0x48205a);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B482061:{NFSU2_TR(0x482061);
__builtin_memmove((R+0),(R+24),4);
}
B482063:{NFSU2_TR(0x482063);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L482069;}}
}
B482065:L482065:{c.instructions+=2;NFSU2_TR(0x482065);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B482067:{NFSU2_TR(0x482067);
{goto L482076;}
}
B482069:L482069:{c.instructions+=2;NFSU2_TR(0x482069);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48206f:{NFSU2_TR(0x48206f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L482076;}}
}
B482071:L482071:{c.instructions+=1;NFSU2_TR(0x482071);
w4(R+0,u32(0x7fffull));
}
B482076:L482076:{c.instructions+=5;NFSU2_TR(0x482076);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482079:{NFSU2_TR(0x482079);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48207f:{NFSU2_TR(0x48207f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B482081:{NFSU2_TR(0x482081);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B482088:{NFSU2_TR(0x482088);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48208e;}}
}
B48208a:L48208a:{c.instructions+=2;NFSU2_TR(0x48208a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48208c:{NFSU2_TR(0x48208c);
{goto L48209a;}
}
B48208e:L48208e:{c.instructions+=2;NFSU2_TR(0x48208e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482093:{NFSU2_TR(0x482093);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48209a;}}
}
B482095:L482095:{c.instructions+=1;NFSU2_TR(0x482095);
w4(R+0,u32(0xffffull));
}
B48209a:L48209a:{c.instructions+=4;NFSU2_TR(0x48209a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48209c:{NFSU2_TR(0x48209c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48209f:{NFSU2_TR(0x48209f);
w4(R+0,u32(0xbb8ull));
}
B4820a4:{NFSU2_TR(0x4820a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4820ad;}}
}
B4820a6:L4820a6:{c.instructions+=2;NFSU2_TR(0x4820a6);
w4(R+0,u32(0x7d0ull));
}
B4820ab:{NFSU2_TR(0x4820ab);
{goto L4820c3;}
}
B4820ad:L4820ad:{c.instructions+=2;NFSU2_TR(0x4820ad);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4820b0:{NFSU2_TR(0x4820b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4820b9;}}
}
B4820b2:L4820b2:{c.instructions+=2;NFSU2_TR(0x4820b2);
w4(R+0,u32(0xfa0ull));
}
B4820b7:{NFSU2_TR(0x4820b7);
{goto L4820c3;}
}
B4820b9:L4820b9:{c.instructions+=2;NFSU2_TR(0x4820b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4820bc:{NFSU2_TR(0x4820bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4820c3;}}
}
B4820be:L4820be:{c.instructions+=1;NFSU2_TR(0x4820be);
w4(R+0,u32(0x1b58ull));
}
B4820c3:L4820c3:{c.instructions+=3;NFSU2_TR(0x4820c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4820c5:{NFSU2_TR(0x4820c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4820cc:{NFSU2_TR(0x4820cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4820d2;}}
}
B4820ce:L4820ce:{c.instructions+=2;NFSU2_TR(0x4820ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4820d0:{NFSU2_TR(0x4820d0);
{goto L4820de;}
}
B4820d2:L4820d2:{c.instructions+=2;NFSU2_TR(0x4820d2);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4820d7:{NFSU2_TR(0x4820d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4820de;}}
}
B4820d9:L4820d9:{c.instructions+=1;NFSU2_TR(0x4820d9);
w4(R+0,u32(0x1fffull));
}
B4820de:L4820de:{c.instructions+=5;NFSU2_TR(0x4820de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4820e1:{NFSU2_TR(0x4820e1);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4820e8:{NFSU2_TR(0x4820e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4820ea:{NFSU2_TR(0x4820ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4820ec:{NFSU2_TR(0x4820ec);
if(r1(R+518)){{goto L4820f7;}}
}
B4820ee:L4820ee:{c.instructions+=3;NFSU2_TR(0x4820ee);
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
B4820f1:{NFSU2_TR(0x4820f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4820f2:{NFSU2_TR(0x4820f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4820f7ull));
TAIL_STATIC(0x735580u,735);
}
B4820f7:L4820f7:{c.instructions+=3;NFSU2_TR(0x4820f7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4820f8:{NFSU2_TR(0x4820f8);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4820fb:{NFSU2_TR(0x4820fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x481fe1u,481);}
}
B482101:L482101:{c.instructions+=4;NFSU2_TR(0x482101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482102:{NFSU2_TR(0x482102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482103:{NFSU2_TR(0x482103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482104:{NFSU2_TR(0x482104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482107:L482107:{c.instructions+=3;NFSU2_TR(0x482107);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B48210e:{NFSU2_TR(0x48210e);
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
B482110:{NFSU2_TR(0x482110);
if(r1(R+518)){{goto L482140;}}
}
B482112:L482112:{c.instructions+=3;NFSU2_TR(0x482112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B482114:{NFSU2_TR(0x482114);
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
B482116:{NFSU2_TR(0x482116);
if(r1(R+518)){{goto L48211d;}}
}
B482118:L482118:{c.instructions+=1;NFSU2_TR(0x482118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48211dull));
TAIL_STATIC(0x735550u,735);
}
B48211d:L48211d:{c.instructions+=3;NFSU2_TR(0x48211d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B482121:{NFSU2_TR(0x482121);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482122:{NFSU2_TR(0x482122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482127ull));
TAIL_STATIC(0x734df0u,734);
}
B482127:L482127:{c.instructions+=2;NFSU2_TR(0x482127);
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
B48212a:{NFSU2_TR(0x48212a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48212full));
TAIL_STATIC(0x734e40u,734);
}
B48212f:L48212f:{c.instructions+=5;NFSU2_TR(0x48212f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482133:{NFSU2_TR(0x482133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B482135:{NFSU2_TR(0x482135);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482137:{NFSU2_TR(0x482137);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482138:{NFSU2_TR(0x482138);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48213bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48213b:L48213b:{c.instructions+=1;NFSU2_TR(0x48213b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482140ull));
TAIL_STATIC(0x734e60u,734);
}
B482140:L482140:{c.instructions+=5;NFSU2_TR(0x482140);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B48214b:{NFSU2_TR(0x48214b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48214c:{NFSU2_TR(0x48214c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48214d:{NFSU2_TR(0x48214d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48214e:{NFSU2_TR(0x48214e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482160:L482160:{c.instructions+=3;NFSU2_TR(0x482160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482161:{NFSU2_TR(0x482161);
__builtin_memmove((R+24),(R+4),4);
}
B482163:{NFSU2_TR(0x482163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482168ull));
TAIL_STATIC(0x47a990u,47a);
}
B482168:L482168:{c.instructions+=2;NFSU2_TR(0x482168);
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
B48216d:{NFSU2_TR(0x48216d);
if(r1(R+518)){{goto L482178;}}
}
B48216f:L48216f:{c.instructions+=2;NFSU2_TR(0x48216f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482170:{NFSU2_TR(0x482170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482175ull));
TAIL_STATIC(0x575630u,575);
}
B482175:L482175:{c.instructions+=1;NFSU2_TR(0x482175);
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
B482178:L482178:{c.instructions+=3;NFSU2_TR(0x482178);
__builtin_memmove((R+0),(R+24),4);
}
B48217a:{NFSU2_TR(0x48217a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48217b:{NFSU2_TR(0x48217b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482180:L482180:{c.instructions+=5;NFSU2_TR(0x482180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482181:{NFSU2_TR(0x482181);
__builtin_memmove((R+24),(R+4),4);
}
B482183:{NFSU2_TR(0x482183);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482189:{NFSU2_TR(0x482189);
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
B48218b:{NFSU2_TR(0x48218b);
if(r1(R+518)){{goto L48233f;}}
}
B482191:L482191:{c.instructions+=3;NFSU2_TR(0x482191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482197:{NFSU2_TR(0x482197);
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
B482199:{NFSU2_TR(0x482199);
if(r1(R+518)){{goto L48233f;}}
}
B48219f:L48219f:{c.instructions+=3;NFSU2_TR(0x48219f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4821a2:{NFSU2_TR(0x4821a2);
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
B4821a4:{NFSU2_TR(0x4821a4);
if(r1(R+518)){{goto L48233f;}}
}
B4821aa:L4821aa:{c.instructions+=3;NFSU2_TR(0x4821aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4821ad:{NFSU2_TR(0x4821ad);
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
B4821af:{NFSU2_TR(0x4821af);
if(r1(R+518)){{goto L48233f;}}
}
B4821b5:L4821b5:{c.instructions+=2;NFSU2_TR(0x4821b5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4821bc:{NFSU2_TR(0x4821bc);
if(r1(R+518)){{goto L48233f;}}
}
B4821c2:L4821c2:{c.instructions+=6;NFSU2_TR(0x4821c2);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4821c7:{NFSU2_TR(0x4821c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4821cd:{NFSU2_TR(0x4821cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4821ce:{NFSU2_TR(0x4821ce);
w4(R+12,u32(0x1ull));
}
B4821d3:{NFSU2_TR(0x4821d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4821d5:{NFSU2_TR(0x4821d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482243;}}
}
B4821d7:L4821d7:{c.instructions+=6;NFSU2_TR(0x4821d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4821da:{NFSU2_TR(0x4821da);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4821dd:{NFSU2_TR(0x4821dd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4821e3:{NFSU2_TR(0x4821e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4821e5:{NFSU2_TR(0x4821e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4821e8:{NFSU2_TR(0x4821e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L482221;}}
}
B4821ea:L4821ea:{c.instructions+=3;NFSU2_TR(0x4821ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4821f0:{NFSU2_TR(0x4821f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4821f2:{NFSU2_TR(0x4821f2);
if(r1(R+518)){{goto L482221;}}
}
B4821f4:L4821f4:{c.instructions+=2;NFSU2_TR(0x4821f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4821f8:{NFSU2_TR(0x4821f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48220f;}}
}
B4821fa:L4821fa:{c.instructions+=4;NFSU2_TR(0x4821fa);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B482200:{NFSU2_TR(0x482200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482206:{NFSU2_TR(0x482206);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482207:{NFSU2_TR(0x482207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48220cull));
TAIL_STATIC(0x739320u,739);
}
B48220c:L48220c:{c.instructions+=1;NFSU2_TR(0x48220c);
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
B48220f:L48220f:{c.instructions+=4;NFSU2_TR(0x48220f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482215:{NFSU2_TR(0x482215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482217:{NFSU2_TR(0x482217);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482219:{NFSU2_TR(0x482219);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48221cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48221c:L48221c:{c.instructions+=1;NFSU2_TR(0x48221c);
{goto L4822dd;}
}
B482221:L482221:{c.instructions+=2;NFSU2_TR(0x482221);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B482225:{NFSU2_TR(0x482225);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48223c;}}
}
B482227:L482227:{c.instructions+=4;NFSU2_TR(0x482227);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B48222d:{NFSU2_TR(0x48222d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482233:{NFSU2_TR(0x482233);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482234:{NFSU2_TR(0x482234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482239ull));
TAIL_STATIC(0x739320u,739);
}
B482239:L482239:{c.instructions+=1;NFSU2_TR(0x482239);
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
B48223c:L48223c:{c.instructions+=2;NFSU2_TR(0x48223c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48223e:{NFSU2_TR(0x48223e);
{goto L4822d0;}
}
B482243:L482243:{c.instructions+=6;NFSU2_TR(0x482243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482246:{NFSU2_TR(0x482246);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B482249:{NFSU2_TR(0x482249);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48224f:{NFSU2_TR(0x48224f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B482251:{NFSU2_TR(0x482251);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B482254:{NFSU2_TR(0x482254);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4822b4;}}
}
B482256:L482256:{c.instructions+=5;NFSU2_TR(0x482256);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B482258:{NFSU2_TR(0x482258);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48225e:{NFSU2_TR(0x48225e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B482260:{NFSU2_TR(0x482260);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B482263:{NFSU2_TR(0x482263);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4822b4;}}
}
B482265:L482265:{c.instructions+=3;NFSU2_TR(0x482265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48226b:{NFSU2_TR(0x48226b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48226d:{NFSU2_TR(0x48226d);
if(r1(R+518)){{goto L4822b4;}}
}
B48226f:L48226f:{c.instructions+=2;NFSU2_TR(0x48226f);
w4(R+4,u32(0x89e7a0ull));
}
B482274:{NFSU2_TR(0x482274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482279ull));
TAIL_STATIC(0x401910u,401);
}
B482279:L482279:{c.instructions+=2;NFSU2_TR(0x482279);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48227b:{NFSU2_TR(0x48227b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4822b4;}}
}
B48227d:L48227d:{c.instructions+=2;NFSU2_TR(0x48227d);
w4(R+4,u32(0x89e7a0ull));
}
B482282:{NFSU2_TR(0x482282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482287ull));
TAIL_STATIC(0x4018f0u,401);
}
B482287:L482287:{c.instructions+=2;NFSU2_TR(0x482287);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482289:{NFSU2_TR(0x482289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4822b4;}}
}
B48228b:L48228b:{c.instructions+=2;NFSU2_TR(0x48228b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B48228f:{NFSU2_TR(0x48228f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4822a6;}}
}
B482291:L482291:{c.instructions+=4;NFSU2_TR(0x482291);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B482297:{NFSU2_TR(0x482297);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48229d:{NFSU2_TR(0x48229d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48229e:{NFSU2_TR(0x48229e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4822a3ull));
TAIL_STATIC(0x739320u,739);
}
B4822a3:L4822a3:{c.instructions+=1;NFSU2_TR(0x4822a3);
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
B4822a6:L4822a6:{c.instructions+=4;NFSU2_TR(0x4822a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4822ac:{NFSU2_TR(0x4822ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4822ae:{NFSU2_TR(0x4822ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4822af:{NFSU2_TR(0x4822af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4822b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4822b2:L4822b2:{c.instructions+=1;NFSU2_TR(0x4822b2);
{goto L4822dd;}
}
B4822b4:L4822b4:{c.instructions+=2;NFSU2_TR(0x4822b4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4822b8:{NFSU2_TR(0x4822b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4822cf;}}
}
B4822ba:L4822ba:{c.instructions+=4;NFSU2_TR(0x4822ba);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B4822c0:{NFSU2_TR(0x4822c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4822c6:{NFSU2_TR(0x4822c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4822c7:{NFSU2_TR(0x4822c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4822ccull));
TAIL_STATIC(0x739320u,739);
}
B4822cc:L4822cc:{c.instructions+=1;NFSU2_TR(0x4822cc);
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
B4822cf:L4822cf:{c.instructions+=1;NFSU2_TR(0x4822cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4822d0:L4822d0:{c.instructions+=3;NFSU2_TR(0x4822d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4822d6:{NFSU2_TR(0x4822d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4822d8:{NFSU2_TR(0x4822d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4822dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4822db:L4822db:{c.instructions+=1;NFSU2_TR(0x4822db);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4822dd:L4822dd:{c.instructions+=8;NFSU2_TR(0x4822dd);
__builtin_memmove((R+4),(R+0),4);
}
B4822df:{NFSU2_TR(0x4822df);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B4822e2:{NFSU2_TR(0x4822e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4822e4:{NFSU2_TR(0x4822e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4822e5:{NFSU2_TR(0x4822e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4822eb:{NFSU2_TR(0x4822eb);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B4822f1:{NFSU2_TR(0x4822f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4822f4:{NFSU2_TR(0x4822f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4822f9ull));
TAIL_STATIC(0x46c800u,46c);
}
B4822f9:L4822f9:{c.instructions+=4;NFSU2_TR(0x4822f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4822fb:{NFSU2_TR(0x4822fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4822fc:{NFSU2_TR(0x4822fc);
__builtin_memmove((R+4),(R+24),4);
}
B4822fe:{NFSU2_TR(0x4822fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48230c;}}
}
B482300:L482300:{c.instructions+=3;NFSU2_TR(0x482300);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482304:{NFSU2_TR(0x482304);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482305:{NFSU2_TR(0x482305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48230aull));
TAIL_STATIC(0x47b260u,47b);
}
B48230a:L48230a:{c.instructions+=1;NFSU2_TR(0x48230a);
{goto L482325;}
}
B48230c:L48230c:{c.instructions+=4;NFSU2_TR(0x48230c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48230d:{NFSU2_TR(0x48230d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B482311:{NFSU2_TR(0x482311);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482312:{NFSU2_TR(0x482312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482317ull));
TAIL_STATIC(0x47b080u,47b);
}
B482317:L482317:{c.instructions+=2;NFSU2_TR(0x482317);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48231a:{NFSU2_TR(0x48231a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482324;}}
}
B48231c:L48231c:{c.instructions+=3;NFSU2_TR(0x48231c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48231d:{NFSU2_TR(0x48231d);
__builtin_memmove((R+4),(R+24),4);
}
B48231f:{NFSU2_TR(0x48231f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482324ull));
TAIL_STATIC(0x47b260u,47b);
}
B482324:L482324:{c.instructions+=1;NFSU2_TR(0x482324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482325:L482325:{c.instructions+=7;NFSU2_TR(0x482325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48232b:{NFSU2_TR(0x48232b);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B482331:{NFSU2_TR(0x482331);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482333:{NFSU2_TR(0x482333);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B482336:{NFSU2_TR(0x482336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482337:{NFSU2_TR(0x482337);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B48233a:{NFSU2_TR(0x48233a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48233full));
TAIL_STATIC(0x46c800u,46c);
}
B48233f:L48233f:{c.instructions+=2;NFSU2_TR(0x48233f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482340:{NFSU2_TR(0x482340);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482350:L482350:{c.instructions+=6;NFSU2_TR(0x482350);
__builtin_memmove((R+0),gp(0x82b898),4);
}
B482355:{NFSU2_TR(0x482355);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482356:{NFSU2_TR(0x482356);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482358:{NFSU2_TR(0x482358);
__builtin_memmove((R+0),gp(0x82ba04),1);
}
B48235d:{NFSU2_TR(0x48235d);
__builtin_memmove((R+24),(R+4),4);
}
B48235f:{NFSU2_TR(0x48235f);
if(r1(R+518)){{goto L482388;}}
}
B482361:L482361:{c.instructions+=2;NFSU2_TR(0x482361);
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
B482363:{NFSU2_TR(0x482363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48272c;}}
}
B482369:L482369:{c.instructions+=4;NFSU2_TR(0x482369);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B48236e:{NFSU2_TR(0x48236e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482374:{NFSU2_TR(0x482374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482375:{NFSU2_TR(0x482375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48237aull));
TAIL_STATIC(0x739320u,739);
}
B48237a:L48237a:{c.instructions+=4;NFSU2_TR(0x48237a);
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
B48237d:{NFSU2_TR(0x48237d);
s1(0x82ba04,u8(0x1ull));
}
B482384:{NFSU2_TR(0x482384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482385:{NFSU2_TR(0x482385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482388:L482388:{c.instructions+=5;NFSU2_TR(0x482388);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482389:{NFSU2_TR(0x482389);
w4(R+12,u32(0x1ull));
}
B48238e:{NFSU2_TR(0x48238e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B482390:{NFSU2_TR(0x482390);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482391:{NFSU2_TR(0x482391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48239a;}}
}
B482393:L482393:{c.instructions+=1;NFSU2_TR(0x482393);
s1(0x82ba04,u8(0x0ull));
}
B48239a:L48239a:{c.instructions+=4;NFSU2_TR(0x48239a);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B48239f:{NFSU2_TR(0x48239f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4823a2:{NFSU2_TR(0x4823a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4823a4:{NFSU2_TR(0x4823a4);
if(r1(R+518)){{goto L482409;}}
}
B4823a6:L4823a6:{c.instructions+=3;NFSU2_TR(0x4823a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4823a9:{NFSU2_TR(0x4823a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4823ac:{NFSU2_TR(0x4823ac);
if(r1(R+518)){{goto L482409;}}
}
B4823ae:L4823ae:{c.instructions+=2;NFSU2_TR(0x4823ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4823b1:{NFSU2_TR(0x4823b1);
if(r1(R+518)){{goto L482409;}}
}
B4823b3:L4823b3:{c.instructions+=4;NFSU2_TR(0x4823b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4823b9:{NFSU2_TR(0x4823b9);
w4(R+28,u32(0x5ull));
}
B4823be:{NFSU2_TR(0x4823be);
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
B4823c0:{NFSU2_TR(0x4823c0);
if(r1(R+518)){{goto L48272a;}}
}
B4823c6:L4823c6:{c.instructions+=5;NFSU2_TR(0x4823c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4823cc:{NFSU2_TR(0x4823cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4823d2:{NFSU2_TR(0x4823d2);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4823d7:{NFSU2_TR(0x4823d7);
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
B4823d9:{NFSU2_TR(0x4823d9);
if(r1(R+518)){{goto L48272a;}}
}
B4823df:L4823df:{c.instructions+=3;NFSU2_TR(0x4823df);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B4823e5:{NFSU2_TR(0x4823e5);
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
B4823e7:{NFSU2_TR(0x4823e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48272a;}}
}
B4823ed:L4823ed:{c.instructions+=4;NFSU2_TR(0x4823ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4823f3:{NFSU2_TR(0x4823f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4823f4:{NFSU2_TR(0x4823f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4823f5:{NFSU2_TR(0x4823f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4823faull));
TAIL_STATIC(0x739030u,739);
}
B4823fa:L4823fa:{c.instructions+=6;NFSU2_TR(0x4823fa);
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
B4823fd:{NFSU2_TR(0x4823fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4823fe:{NFSU2_TR(0x4823fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B482404:{NFSU2_TR(0x482404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482405:{NFSU2_TR(0x482405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482406:{NFSU2_TR(0x482406);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482409:L482409:{c.instructions+=1;NFSU2_TR(0x482409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48240eull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B48240e:L48240e:{c.instructions+=2;NFSU2_TR(0x48240e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482410:{NFSU2_TR(0x482410);
if(r1(R+518)){{goto L4824b5;}}
}
B482416:L482416:{c.instructions+=4;NFSU2_TR(0x482416);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48241c:{NFSU2_TR(0x48241c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48241f:{NFSU2_TR(0x48241f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B482425:{NFSU2_TR(0x482425);
if(r1(R+518)){{goto L48242c;}}
}
B482427:L482427:{c.instructions+=2;NFSU2_TR(0x482427);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48242a:{NFSU2_TR(0x48242a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48246a;}}
}
B48242c:L48242c:{c.instructions+=3;NFSU2_TR(0x48242c);
w4(R+28,u32(0x5ull));
}
B482431:{NFSU2_TR(0x482431);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482433:{NFSU2_TR(0x482433);
if(r1(R+518)){{goto L48246a;}}
}
B482435:L482435:{c.instructions+=5;NFSU2_TR(0x482435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48243b:{NFSU2_TR(0x48243b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482441:{NFSU2_TR(0x482441);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B482446:{NFSU2_TR(0x482446);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482448:{NFSU2_TR(0x482448);
if(r1(R+518)){{goto L48246a;}}
}
B48244a:L48244a:{c.instructions+=3;NFSU2_TR(0x48244a);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B482450:{NFSU2_TR(0x482450);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B482452:{NFSU2_TR(0x482452);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48246a;}}
}
B482454:L482454:{c.instructions+=4;NFSU2_TR(0x482454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48245a:{NFSU2_TR(0x48245a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48245b:{NFSU2_TR(0x48245b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48245c:{NFSU2_TR(0x48245c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482461ull));
TAIL_STATIC(0x739030u,739);
}
B482461:L482461:{c.instructions+=2;NFSU2_TR(0x482461);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482464:{NFSU2_TR(0x482464);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48246a:L48246a:{c.instructions+=2;NFSU2_TR(0x48246a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
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
B482470:{NFSU2_TR(0x482470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48272a;}}
}
B482476:L482476:{c.instructions+=5;NFSU2_TR(0x482476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48247c:{NFSU2_TR(0x48247c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B482486:{NFSU2_TR(0x482486);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B48248b:{NFSU2_TR(0x48248b);
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
B48248d:{NFSU2_TR(0x48248d);
if(r1(R+518)){{goto L48272a;}}
}
B482493:L482493:{c.instructions+=5;NFSU2_TR(0x482493);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48249a:{NFSU2_TR(0x48249a);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B4824a0:{NFSU2_TR(0x4824a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4824a6:{NFSU2_TR(0x4824a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4824a7:{NFSU2_TR(0x4824a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4824acull));
TAIL_STATIC(0x739320u,739);
}
B4824ac:L4824ac:{c.instructions+=5;NFSU2_TR(0x4824ac);
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
B4824af:{NFSU2_TR(0x4824af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4824b0:{NFSU2_TR(0x4824b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4824b1:{NFSU2_TR(0x4824b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4824b2:{NFSU2_TR(0x4824b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4824b5:L4824b5:{c.instructions+=2;NFSU2_TR(0x4824b5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4824bb:{NFSU2_TR(0x4824bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48254b;}}
}
B4824c1:L4824c1:{c.instructions+=4;NFSU2_TR(0x4824c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4824c8:{NFSU2_TR(0x4824c8);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4824cd:{NFSU2_TR(0x4824cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4824d3:{NFSU2_TR(0x4824d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4824ea;}}
}
B4824d5:L4824d5:{c.instructions+=2;NFSU2_TR(0x4824d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4824dc:{NFSU2_TR(0x4824dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4824ea;}}
}
B4824de:L4824de:{c.instructions+=4;NFSU2_TR(0x4824de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4824e0:{NFSU2_TR(0x4824e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4824e1:{NFSU2_TR(0x4824e1);
__builtin_memmove((R+4),(R+24),4);
}
B4824e3:{NFSU2_TR(0x4824e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4824e8ull));
TAIL_STATIC(0x47ac50u,47a);
}
B4824e8:L4824e8:{c.instructions+=1;NFSU2_TR(0x4824e8);
{goto L48254b;}
}
B4824ea:L4824ea:{c.instructions+=3;NFSU2_TR(0x4824ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4824f0:{NFSU2_TR(0x4824f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4824f3:{NFSU2_TR(0x4824f3);
if(r1(R+518)){{goto L48254b;}}
}
B4824f5:L4824f5:{c.instructions+=3;NFSU2_TR(0x4824f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4824fb:{NFSU2_TR(0x4824fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482505:{NFSU2_TR(0x482505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48250aull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B48250a:L48250a:{c.instructions+=2;NFSU2_TR(0x48250a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48250c:{NFSU2_TR(0x48250c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48254b;}}
}
B48250e:L48250e:{c.instructions+=3;NFSU2_TR(0x48250e);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B482513:{NFSU2_TR(0x482513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482515:{NFSU2_TR(0x482515);
if(r1(R+518)){{goto L48254b;}}
}
B482517:L482517:{c.instructions+=3;NFSU2_TR(0x482517);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48251d:{NFSU2_TR(0x48251d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48251f:{NFSU2_TR(0x48251f);
if(r1(R+518)){{goto L48254b;}}
}
B482521:L482521:{c.instructions+=4;NFSU2_TR(0x482521);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482523:{NFSU2_TR(0x482523);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482525:{NFSU2_TR(0x482525);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482528:{NFSU2_TR(0x482528);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48252dull));
TAIL_STATIC(0x46c800u,46c);
}
B48252d:L48252d:{c.instructions+=5;NFSU2_TR(0x48252d);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B482533:{NFSU2_TR(0x482533);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482539:{NFSU2_TR(0x482539);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48253b:{NFSU2_TR(0x48253b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48253c:{NFSU2_TR(0x48253c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482541ull));
TAIL_STATIC(0x739030u,739);
}
B482541:L482541:{c.instructions+=2;NFSU2_TR(0x482541);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482544:{NFSU2_TR(0x482544);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48254b:L48254b:{c.instructions+=1;NFSU2_TR(0x48254b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482550ull));
TAIL_STATIC(0x4a9330u,4a9);
}
B482550:L482550:{c.instructions+=3;NFSU2_TR(0x482550);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482552:{NFSU2_TR(0x482552);
w4(R+28,u32(0x5ull));
}
B482557:{NFSU2_TR(0x482557);
if(r1(R+518)){{goto L48262a;}}
}
B48255d:L48255d:{c.instructions+=3;NFSU2_TR(0x48255d);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B482562:{NFSU2_TR(0x482562);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482564:{NFSU2_TR(0x482564);
if(r1(R+518)){{goto L4825d7;}}
}
B482566:L482566:{c.instructions+=3;NFSU2_TR(0x482566);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B482569:{NFSU2_TR(0x482569);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48256b:{NFSU2_TR(0x48256b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482654;}}
}
B482571:L482571:{c.instructions+=3;NFSU2_TR(0x482571);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B482574:{NFSU2_TR(0x482574);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482576:{NFSU2_TR(0x482576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482654;}}
}
B48257c:L48257c:{c.instructions+=3;NFSU2_TR(0x48257c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482582:{NFSU2_TR(0x482582);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482584:{NFSU2_TR(0x482584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482654;}}
}
B48258a:L48258a:{c.instructions+=3;NFSU2_TR(0x48258a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482590:{NFSU2_TR(0x482590);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482592:{NFSU2_TR(0x482592);
if(r1(R+518)){{goto L482654;}}
}
B482598:L482598:{c.instructions+=5;NFSU2_TR(0x482598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48259e:{NFSU2_TR(0x48259e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4825a4:{NFSU2_TR(0x4825a4);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4825a9:{NFSU2_TR(0x4825a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4825ab:{NFSU2_TR(0x4825ab);
if(r1(R+518)){{goto L482654;}}
}
B4825b1:L4825b1:{c.instructions+=3;NFSU2_TR(0x4825b1);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B4825b7:{NFSU2_TR(0x4825b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4825b9:{NFSU2_TR(0x4825b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L482654;}}
}
B4825bf:L4825bf:{c.instructions+=4;NFSU2_TR(0x4825bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4825c5:{NFSU2_TR(0x4825c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4825c6:{NFSU2_TR(0x4825c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4825c7:{NFSU2_TR(0x4825c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4825ccull));
TAIL_STATIC(0x739030u,739);
}
B4825cc:L4825cc:{c.instructions+=3;NFSU2_TR(0x4825cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4825cf:{NFSU2_TR(0x4825cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4825d5:{NFSU2_TR(0x4825d5);
{goto L482654;}
}
B4825d7:L4825d7:{c.instructions+=3;NFSU2_TR(0x4825d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4825dd:{NFSU2_TR(0x4825dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4825df:{NFSU2_TR(0x4825df);
if(r1(R+518)){{goto L4825e9;}}
}
B4825e1:L4825e1:{c.instructions+=2;NFSU2_TR(0x4825e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4825e7:{NFSU2_TR(0x4825e7);
if(r1(R+518)){{goto L482654;}}
}
B4825e9:L4825e9:{c.instructions+=3;NFSU2_TR(0x4825e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4825ef:{NFSU2_TR(0x4825ef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4825f1:{NFSU2_TR(0x4825f1);
if(r1(R+518)){{goto L482654;}}
}
B4825f3:L4825f3:{c.instructions+=5;NFSU2_TR(0x4825f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4825f9:{NFSU2_TR(0x4825f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4825ff:{NFSU2_TR(0x4825ff);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B482604:{NFSU2_TR(0x482604);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482606:{NFSU2_TR(0x482606);
if(r1(R+518)){{goto L482654;}}
}
B482608:L482608:{c.instructions+=3;NFSU2_TR(0x482608);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B48260e:{NFSU2_TR(0x48260e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B482610:{NFSU2_TR(0x482610);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L482654;}}
}
B482612:L482612:{c.instructions+=4;NFSU2_TR(0x482612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482618:{NFSU2_TR(0x482618);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482619:{NFSU2_TR(0x482619);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48261a:{NFSU2_TR(0x48261a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48261full));
TAIL_STATIC(0x739030u,739);
}
B48261f:L48261f:{c.instructions+=3;NFSU2_TR(0x48261f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482622:{NFSU2_TR(0x482622);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B482628:{NFSU2_TR(0x482628);
{goto L482654;}
}
B48262a:L48262a:{c.instructions+=2;NFSU2_TR(0x48262a);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B482630:{NFSU2_TR(0x482630);
if(r1(R+518)){{goto L48263a;}}
}
B482632:L482632:{c.instructions+=2;NFSU2_TR(0x482632);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B482638:{NFSU2_TR(0x482638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482654;}}
}
B48263a:L48263a:{c.instructions+=3;NFSU2_TR(0x48263a);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B48263f:{NFSU2_TR(0x48263f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482642:{NFSU2_TR(0x482642);
if(r1(R+518)){{goto L482649;}}
}
B482644:L482644:{c.instructions+=2;NFSU2_TR(0x482644);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482647:{NFSU2_TR(0x482647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482654;}}
}
B482649:L482649:{c.instructions+=4;NFSU2_TR(0x482649);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48264b:{NFSU2_TR(0x48264b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48264d:{NFSU2_TR(0x48264d);
__builtin_memmove((R+4),(R+24),4);
}
B48264f:{NFSU2_TR(0x48264f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482654ull));
TAIL_STATIC(0x47ac50u,47a);
}
B482654:L482654:{c.instructions+=3;NFSU2_TR(0x482654);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B482659:{NFSU2_TR(0x482659);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48265c:{NFSU2_TR(0x48265c);
if(r1(R+518)){{goto L4826d4;}}
}
B48265e:L48265e:{c.instructions+=2;NFSU2_TR(0x48265e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482661:{NFSU2_TR(0x482661);
if(r1(R+518)){{goto L4826d4;}}
}
B482663:L482663:{c.instructions+=2;NFSU2_TR(0x482663);
w4(R+4,u32(0x865480ull));
}
B482668:{NFSU2_TR(0x482668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48266dull));
TAIL_STATIC(0x571280u,571);
}
B48266d:L48266d:{c.instructions+=2;NFSU2_TR(0x48266d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48266f:{NFSU2_TR(0x48266f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4826d4;}}
}
B482671:L482671:{c.instructions+=3;NFSU2_TR(0x482671);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482677:{NFSU2_TR(0x482677);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482679:{NFSU2_TR(0x482679);
if(r1(R+518)){{goto L482687;}}
}
B48267b:L48267b:{c.instructions+=2;NFSU2_TR(0x48267b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
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
B482681:{NFSU2_TR(0x482681);
if(r1(R+518)){{goto L48272a;}}
}
B482687:L482687:{c.instructions+=3;NFSU2_TR(0x482687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48268d:{NFSU2_TR(0x48268d);
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
B48268f:{NFSU2_TR(0x48268f);
if(r1(R+518)){{goto L48272a;}}
}
B482695:L482695:{c.instructions+=5;NFSU2_TR(0x482695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48269b:{NFSU2_TR(0x48269b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4826a1:{NFSU2_TR(0x4826a1);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B4826a6:{NFSU2_TR(0x4826a6);
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
B4826a8:{NFSU2_TR(0x4826a8);
if(r1(R+518)){{goto L48272a;}}
}
B4826ae:L4826ae:{c.instructions+=3;NFSU2_TR(0x4826ae);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B4826b4:{NFSU2_TR(0x4826b4);
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
B4826b6:{NFSU2_TR(0x4826b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48272a;}}
}
B4826b8:L4826b8:{c.instructions+=4;NFSU2_TR(0x4826b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4826be:{NFSU2_TR(0x4826be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4826bf:{NFSU2_TR(0x4826bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4826c0:{NFSU2_TR(0x4826c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4826c5ull));
TAIL_STATIC(0x739030u,739);
}
B4826c5:L4826c5:{c.instructions+=6;NFSU2_TR(0x4826c5);
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
B4826c8:{NFSU2_TR(0x4826c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4826c9:{NFSU2_TR(0x4826c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4826cf:{NFSU2_TR(0x4826cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4826d0:{NFSU2_TR(0x4826d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4826d1:{NFSU2_TR(0x4826d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4826d4:L4826d4:{c.instructions+=4;NFSU2_TR(0x4826d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4826d5:{NFSU2_TR(0x4826d5);
w4(R+20,u32(0x82b974ull));
}
B4826da:{NFSU2_TR(0x4826da);
w4(R+28,u32(0x82afb0ull));
}
B4826df:{NFSU2_TR(0x4826df);
}
B4826e0:L4826e0:{c.instructions+=3;NFSU2_TR(0x4826e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4826e3:{NFSU2_TR(0x4826e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4826e5:{NFSU2_TR(0x4826e5);
if(r1(R+518)){{goto L4826f7;}}
}
B4826e7:L4826e7:{c.instructions+=4;NFSU2_TR(0x4826e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4826ed:{NFSU2_TR(0x4826ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4826ee:{NFSU2_TR(0x4826ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4826ef:{NFSU2_TR(0x4826ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4826f4ull));
TAIL_STATIC(0x739130u,739);
}
B4826f4:L4826f4:{c.instructions+=1;NFSU2_TR(0x4826f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4826f7:L4826f7:{c.instructions+=4;NFSU2_TR(0x4826f7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2cull))));
}
B4826fa:{NFSU2_TR(0x4826fa);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B4826fd:{NFSU2_TR(0x4826fd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82b060ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82b060ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B482703:{NFSU2_TR(0x482703);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4826e0u);}goto L4826e0;}}
}
B482705:L482705:{c.instructions+=4;NFSU2_TR(0x482705);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B48270a:{NFSU2_TR(0x48270a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48270c:{NFSU2_TR(0x48270c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48270d:{NFSU2_TR(0x48270d);
if(r1(R+518)){{goto L48271d;}}
}
B48270f:L48270f:{c.instructions+=5;NFSU2_TR(0x48270f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482713:{NFSU2_TR(0x482713);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482715:{NFSU2_TR(0x482715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482716:{NFSU2_TR(0x482716);
__builtin_memmove((R+4),(R+24),4);
}
B482718:{NFSU2_TR(0x482718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48271dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482180u);}goto L482180;}
}
B48271d:L48271d:{c.instructions+=4;NFSU2_TR(0x48271d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482721:{NFSU2_TR(0x482721);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482722:{NFSU2_TR(0x482722);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482725:{NFSU2_TR(0x482725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48272aull));
TAIL_STATIC(0x46b100u,46b);
}
B48272a:L48272a:{c.instructions+=2;NFSU2_TR(0x48272a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48272b:{NFSU2_TR(0x48272b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48272c:L48272c:{c.instructions+=2;NFSU2_TR(0x48272c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48272d:{NFSU2_TR(0x48272d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482730:L482730:{c.instructions+=3;NFSU2_TR(0x482730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482731:{NFSU2_TR(0x482731);
__builtin_memmove((R+24),(R+4),4);
}
B482733:{NFSU2_TR(0x482733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482738ull));
TAIL_STATIC(0x47b6e0u,47b);
}
B482738:L482738:{c.instructions+=2;NFSU2_TR(0x482738);
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
B48273d:{NFSU2_TR(0x48273d);
if(r1(R+518)){{goto L482748;}}
}
B48273f:L48273f:{c.instructions+=2;NFSU2_TR(0x48273f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482740:{NFSU2_TR(0x482740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482745ull));
TAIL_STATIC(0x575630u,575);
}
B482745:L482745:{c.instructions+=1;NFSU2_TR(0x482745);
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
B482748:L482748:{c.instructions+=3;NFSU2_TR(0x482748);
__builtin_memmove((R+0),(R+24),4);
}
B48274a:{NFSU2_TR(0x48274a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48274b:{NFSU2_TR(0x48274b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482750:L482750:{c.instructions+=10;NFSU2_TR(0x482750);
__builtin_memmove((R+4),gp(0x82b9c8),4);
}
B482756:{NFSU2_TR(0x482756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482757:{NFSU2_TR(0x482757);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482758:{NFSU2_TR(0x482758);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48275c:{NFSU2_TR(0x48275c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48275d:{NFSU2_TR(0x48275d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B482764:{NFSU2_TR(0x482764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482766:{NFSU2_TR(0x482766);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482767:{NFSU2_TR(0x482767);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482768:{NFSU2_TR(0x482768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48276dull));
TAIL_STATIC(0x46b670u,46b);
}
B48276d:L48276d:{c.instructions+=6;NFSU2_TR(0x48276d);
__builtin_memmove((R+28),(R+0),4);
}
B48276f:{NFSU2_TR(0x48276f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B482771:{NFSU2_TR(0x482771);
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
B482773:{NFSU2_TR(0x482773);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482774:{NFSU2_TR(0x482774);
__builtin_memmove((R+4),(R+28),4);
}
B482776:{NFSU2_TR(0x482776);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482779ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482779:L482779:{c.instructions+=2;NFSU2_TR(0x482779);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48277c:{NFSU2_TR(0x48277c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4827a0;}}
}
B48277e:L48277e:{c.instructions+=2;NFSU2_TR(0x48277e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x819b0c))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B482785:{NFSU2_TR(0x482785);
if(r1(R+518)){{goto L4827a0;}}
}
B482787:L482787:{c.instructions+=8;NFSU2_TR(0x482787);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B48278b:{NFSU2_TR(0x48278b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48278e:{NFSU2_TR(0x48278e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B482790:{NFSU2_TR(0x482790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482791:{NFSU2_TR(0x482791);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482792:{NFSU2_TR(0x482792);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482793:{NFSU2_TR(0x482793);
u8 U[4];
w4(U+0,u32(0x78c05cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482798:{NFSU2_TR(0x482798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48279dull));
TAIL_STATIC(0x73b2c0u,73b);
}
B48279d:L48279d:{c.instructions+=1;NFSU2_TR(0x48279d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4827a0:L4827a0:{c.instructions+=3;NFSU2_TR(0x4827a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4827a4:{NFSU2_TR(0x4827a4);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4827a6:{NFSU2_TR(0x4827a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4827b5;}}
}
B4827a8:L4827a8:{c.instructions+=4;NFSU2_TR(0x4827a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4827a9:{NFSU2_TR(0x4827a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4827aa:{NFSU2_TR(0x4827aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4827ad:{NFSU2_TR(0x4827ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4827b2ull));
TAIL_STATIC(0x47b820u,47b);
}
B4827b2:L4827b2:{c.instructions+=1;NFSU2_TR(0x4827b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4827b5:L4827b5:{c.instructions+=3;NFSU2_TR(0x4827b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4827b8:{NFSU2_TR(0x4827b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4827ba:{NFSU2_TR(0x4827ba);
if(r1(R+518)){{goto L48287b;}}
}
B4827c0:L4827c0:{c.instructions+=2;NFSU2_TR(0x4827c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4827c4:{NFSU2_TR(0x4827c4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4827ca;}}
}
B4827c6:L4827c6:{c.instructions+=1;NFSU2_TR(0x4827c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4827ca:L4827ca:{c.instructions+=7;NFSU2_TR(0x4827ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4827ce:{NFSU2_TR(0x4827ce);
__builtin_memmove((R+0),(R+28),4);
}
B4827d0:{NFSU2_TR(0x4827d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4827d3:{NFSU2_TR(0x4827d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B4827d8:{NFSU2_TR(0x4827d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4827d9:{NFSU2_TR(0x4827d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4827da:{NFSU2_TR(0x4827da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4827dfull));
TAIL_STATIC(0x45a0c0u,45a);
}
B4827df:L4827df:{c.instructions+=3;NFSU2_TR(0x4827df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4827e2:{NFSU2_TR(0x4827e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4827e4:{NFSU2_TR(0x4827e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4827f6;}}
}
B4827e6:L4827e6:{c.instructions+=5;NFSU2_TR(0x4827e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B4827e9:{NFSU2_TR(0x4827e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B4827ec:{NFSU2_TR(0x4827ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x82a5dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4827f2:{NFSU2_TR(0x4827f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4827f4:{NFSU2_TR(0x4827f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4827fe;}}
}
B4827f6:L4827f6:{c.instructions+=6;NFSU2_TR(0x4827f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4827f7:{NFSU2_TR(0x4827f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4827f8:{NFSU2_TR(0x4827f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4827f9:{NFSU2_TR(0x4827f9);
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
B4827fc:{NFSU2_TR(0x4827fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4827fd:{NFSU2_TR(0x4827fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4827fe:L4827fe:{c.instructions+=5;NFSU2_TR(0x4827fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482802:{NFSU2_TR(0x482802);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B482808:{NFSU2_TR(0x482808);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B48280c:{NFSU2_TR(0x48280c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48280f:{NFSU2_TR(0x48280f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482814ull));
TAIL_STATIC(0x721f99u,721);
}
B482814:L482814:{c.instructions+=6;NFSU2_TR(0x482814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482817:{NFSU2_TR(0x482817);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48281a:{NFSU2_TR(0x48281a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48281b:{NFSU2_TR(0x48281b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48281c:{NFSU2_TR(0x48281c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48281d:{NFSU2_TR(0x48281d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482822ull));
TAIL_STATIC(0x724333u,724);
}
B482822:L482822:{c.instructions+=3;NFSU2_TR(0x482822);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B482825:{NFSU2_TR(0x482825);
__builtin_memmove((R+28),(R+0),4);
}
B482827:{NFSU2_TR(0x482827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48282cull));
TAIL_STATIC(0x721fa7u,721);
}
B48282c:L48282c:{c.instructions+=1;NFSU2_TR(0x48282c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482831ull));
TAIL_STATIC(0x6f5722u,6f5);
}
B482831:L482831:{c.instructions+=4;NFSU2_TR(0x482831);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482835:{NFSU2_TR(0x482835);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B482839:{NFSU2_TR(0x482839);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48283d:{NFSU2_TR(0x48283d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482842ull));
TAIL_STATIC(0x6f57a1u,6f5);
}
B482842:L482842:{c.instructions+=5;NFSU2_TR(0x482842);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482846:{NFSU2_TR(0x482846);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48284a:{NFSU2_TR(0x48284a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48284e:{NFSU2_TR(0x48284e);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B482854:{NFSU2_TR(0x482854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482859ull));
TAIL_STATIC(0x75bed4u,75b);
}
B482859:L482859:{c.instructions+=14;NFSU2_TR(0x482859);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48285d:{NFSU2_TR(0x48285d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x82a5fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482863:{NFSU2_TR(0x482863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482866:{NFSU2_TR(0x482866);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B482868:{NFSU2_TR(0x482868);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48286b:{NFSU2_TR(0x48286b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48286e:{NFSU2_TR(0x48286e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B482870:{NFSU2_TR(0x482870);
__builtin_memmove((R+0),(R+28),4);
}
B482872:{NFSU2_TR(0x482872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482873:{NFSU2_TR(0x482873);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B482877:{NFSU2_TR(0x482877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482878:{NFSU2_TR(0x482878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482879:{NFSU2_TR(0x482879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48287a:{NFSU2_TR(0x48287a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48287b:L48287b:{c.instructions+=2;NFSU2_TR(0x48287b);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48287f:{NFSU2_TR(0x48287f);
if(r1(R+518)){{goto L4828b4;}}
}
B482881:L482881:{c.instructions+=3;NFSU2_TR(0x482881);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482884:{NFSU2_TR(0x482884);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482885:{NFSU2_TR(0x482885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48288aull));
TAIL_STATIC(0x7227cbu,722);
}
B48288a:L48288a:{c.instructions+=5;NFSU2_TR(0x48288a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B48288e:{NFSU2_TR(0x48288e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B482891:{NFSU2_TR(0x482891);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B482892:{NFSU2_TR(0x482892);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482894:{NFSU2_TR(0x482894);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4828b4;}}
}
B482896:L482896:{c.instructions+=4;NFSU2_TR(0x482896);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B482899:{NFSU2_TR(0x482899);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B48289c:{NFSU2_TR(0x48289c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B48289f:{NFSU2_TR(0x48289f);
}
B4828a0:L4828a0:{c.instructions+=7;NFSU2_TR(0x4828a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4828a3:{NFSU2_TR(0x4828a3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4828a7:{NFSU2_TR(0x4828a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4828aa:{NFSU2_TR(0x4828aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4828ae:{NFSU2_TR(0x4828ae);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcull))));
}
B4828b1:{NFSU2_TR(0x4828b1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4828b2:{NFSU2_TR(0x4828b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4828a0u);}goto L4828a0;}}
}
B4828b4:L4828b4:{c.instructions+=4;NFSU2_TR(0x4828b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4828b7:{NFSU2_TR(0x4828b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4828b9:{NFSU2_TR(0x4828b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4828bd:{NFSU2_TR(0x4828bd);
if(r1(R+518)){{goto L4828e3;}}
}
B4828bf:L4828bf:{c.instructions+=5;NFSU2_TR(0x4828bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4828c2:{NFSU2_TR(0x4828c2);
__builtin_memmove((R+4),(R+20),4);
}
B4828c4:{NFSU2_TR(0x4828c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4828c7:{NFSU2_TR(0x4828c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4828c9:{NFSU2_TR(0x4828c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4828e3;}}
}
B4828cb:L4828cb:{c.instructions+=8;NFSU2_TR(0x4828cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4828cf:{NFSU2_TR(0x4828cf);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B4828d2:{NFSU2_TR(0x4828d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828d3:{NFSU2_TR(0x4828d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828d4:{NFSU2_TR(0x4828d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4828d7:{NFSU2_TR(0x4828d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828d8:{NFSU2_TR(0x4828d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828d9:{NFSU2_TR(0x4828d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4828deull));
TAIL_STATIC(0x722f78u,722);
}
B4828de:L4828de:{c.instructions+=2;NFSU2_TR(0x4828de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4828e1:{NFSU2_TR(0x4828e1);
{goto L48291c;}
}
B4828e3:L4828e3:{c.instructions+=6;NFSU2_TR(0x4828e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4828e7:{NFSU2_TR(0x4828e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828e8:{NFSU2_TR(0x4828e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4828ee:{NFSU2_TR(0x4828ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4828ef:{NFSU2_TR(0x4828ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4828f5:{NFSU2_TR(0x4828f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4828faull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4828fa:L4828fa:{c.instructions+=10;NFSU2_TR(0x4828fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482900:{NFSU2_TR(0x482900);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482903:{NFSU2_TR(0x482903);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B482906:{NFSU2_TR(0x482906);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482907:{NFSU2_TR(0x482907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482908:{NFSU2_TR(0x482908);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48290c:{NFSU2_TR(0x48290c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48290d:{NFSU2_TR(0x48290d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48290e:{NFSU2_TR(0x48290e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482914:{NFSU2_TR(0x482914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482919ull));
TAIL_STATIC(0x7227a3u,722);
}
B482919:L482919:{c.instructions+=1;NFSU2_TR(0x482919);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48291c:L48291c:{c.instructions+=3;NFSU2_TR(0x48291c);
__builtin_memmove((R+28),(R+0),4);
}
B48291e:{NFSU2_TR(0x48291e);
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
B482920:{NFSU2_TR(0x482920);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L482960;}}
}
B482922:L482922:{c.instructions+=4;NFSU2_TR(0x482922);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B482926:{NFSU2_TR(0x482926);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B482927:{NFSU2_TR(0x482927);
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
B482929:{NFSU2_TR(0x482929);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L482951;}}
}
B48292b:L48292b:{c.instructions+=3;NFSU2_TR(0x48292b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B48292e:{NFSU2_TR(0x48292e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B482931:{NFSU2_TR(0x482931);
__builtin_memmove((R+8),(R+0),4);
}
B482933:L482933:{c.instructions+=12;NFSU2_TR(0x482933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482936:{NFSU2_TR(0x482936);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B482938:{NFSU2_TR(0x482938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48293b:{NFSU2_TR(0x48293b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B48293d:{NFSU2_TR(0x48293d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48293f:{NFSU2_TR(0x48293f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B482942:{NFSU2_TR(0x482942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482945:{NFSU2_TR(0x482945);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B482948:{NFSU2_TR(0x482948);
w1(R+512,u8((r4(R+4))<(u32(0xcull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xcull))));
}
B48294b:{NFSU2_TR(0x48294b);
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
B48294c:{NFSU2_TR(0x48294c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48294f:{NFSU2_TR(0x48294f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482933u);}goto L482933;}}
}
B482951:L482951:{c.instructions+=5;NFSU2_TR(0x482951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482954:{NFSU2_TR(0x482954);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482958:{NFSU2_TR(0x482958);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48295b:{NFSU2_TR(0x48295b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48295e:{NFSU2_TR(0x48295e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B482960:L482960:{c.instructions+=7;NFSU2_TR(0x482960);
__builtin_memmove((R+0),(R+28),4);
}
B482962:{NFSU2_TR(0x482962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482963:{NFSU2_TR(0x482963);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B482967:{NFSU2_TR(0x482967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482968:{NFSU2_TR(0x482968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482969:{NFSU2_TR(0x482969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48296a:{NFSU2_TR(0x48296a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482970:L482970:{c.instructions+=7;NFSU2_TR(0x482970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B482973:{NFSU2_TR(0x482973);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482974:{NFSU2_TR(0x482974);
__builtin_memmove((R+12),(R+4),4);
}
B482976:{NFSU2_TR(0x482976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482979:{NFSU2_TR(0x482979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48297b:{NFSU2_TR(0x48297b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48297d:{NFSU2_TR(0x48297d);
if(r1(R+518)){{goto L4829f4;}}
}
B48297f:L48297f:{c.instructions+=4;NFSU2_TR(0x48297f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482980:{NFSU2_TR(0x482980);
__builtin_memmove((R+24),(R+4),4);
}
B482982:{NFSU2_TR(0x482982);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482984:{NFSU2_TR(0x482984);
if(r1(R+518)){{goto L4829f3;}}
}
B482986:L482986:{c.instructions+=3;NFSU2_TR(0x482986);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482987:{NFSU2_TR(0x482987);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482988:{NFSU2_TR(0x482988);
{goto L482990;}
}
B482990:L482990:{c.instructions+=4;NFSU2_TR(0x482990);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482994:{NFSU2_TR(0x482994);
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
B482996:{NFSU2_TR(0x482996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B482999:{NFSU2_TR(0x482999);
if(r1(R+518)){{goto L4829a0;}}
}
B48299b:L48299b:{c.instructions+=3;NFSU2_TR(0x48299b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48299d:{NFSU2_TR(0x48299d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48299e:{NFSU2_TR(0x48299e);
{goto L4829c5;}
}
B4829a0:L4829a0:{c.instructions+=2;NFSU2_TR(0x4829a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4829a3:{NFSU2_TR(0x4829a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829a8ull));
TAIL_STATIC(0x721f99u,721);
}
B4829a8:L4829a8:{c.instructions+=4;NFSU2_TR(0x4829a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4829ac:{NFSU2_TR(0x4829ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4829ad:{NFSU2_TR(0x4829ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4829ae:{NFSU2_TR(0x4829ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829b3ull));
TAIL_STATIC(0x722db5u,722);
}
B4829b3:L4829b3:{c.instructions+=2;NFSU2_TR(0x4829b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4829b6:{NFSU2_TR(0x4829b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829bbull));
TAIL_STATIC(0x721fa7u,721);
}
B4829bb:L4829bb:{c.instructions+=2;NFSU2_TR(0x4829bb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4829c0:{NFSU2_TR(0x4829c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4829ea;}}
}
B4829c2:L4829c2:{c.instructions+=2;NFSU2_TR(0x4829c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4829c4:{NFSU2_TR(0x4829c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4829c5:L4829c5:{c.instructions+=1;NFSU2_TR(0x4829c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829caull));
TAIL_STATIC(0x440540u,440);
}
B4829ca:L4829ca:{c.instructions+=2;NFSU2_TR(0x4829ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4829cb:{NFSU2_TR(0x4829cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829d0ull));
TAIL_STATIC(0x575630u,575);
}
B4829d0:L4829d0:{c.instructions+=6;NFSU2_TR(0x4829d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4829d2:{NFSU2_TR(0x4829d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4829d5:{NFSU2_TR(0x4829d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4829d7:{NFSU2_TR(0x4829d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4829d8:{NFSU2_TR(0x4829d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4829db:{NFSU2_TR(0x4829db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4829e0ull));
TAIL_STATIC(0x440ef0u,440);
}
B4829e0:L4829e0:{c.instructions+=4;NFSU2_TR(0x4829e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4829e3:{NFSU2_TR(0x4829e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4829e5:{NFSU2_TR(0x4829e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4829e8:{NFSU2_TR(0x4829e8);
{goto L4829ec;}
}
B4829ea:L4829ea:{c.instructions+=1;NFSU2_TR(0x4829ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4829ec:L4829ec:{c.instructions+=2;NFSU2_TR(0x4829ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4829ef:{NFSU2_TR(0x4829ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482990u);}goto L482990;}}
}
B4829f1:L4829f1:{c.instructions+=2;NFSU2_TR(0x4829f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4829f2:{NFSU2_TR(0x4829f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4829f3:L4829f3:{c.instructions+=1;NFSU2_TR(0x4829f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4829f4:L4829f4:{c.instructions+=3;NFSU2_TR(0x4829f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4829f5:{NFSU2_TR(0x4829f5);
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
B4829f8:{NFSU2_TR(0x4829f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482a00:L482a00:{c.instructions+=6;NFSU2_TR(0x482a00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a01:{NFSU2_TR(0x482a01);
__builtin_memmove((R+24),(R+4),4);
}
B482a03:{NFSU2_TR(0x482a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482a06:{NFSU2_TR(0x482a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482a08:{NFSU2_TR(0x482a08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a09:{NFSU2_TR(0x482a09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482a78;}}
}
B482a0b:L482a0b:{c.instructions+=2;NFSU2_TR(0x482a0b);
u8 U[4];
w4(U+0,u32(0x174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a10:{NFSU2_TR(0x482a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482a15ull));
TAIL_STATIC(0x575620u,575);
}
B482a15:L482a15:{c.instructions+=3;NFSU2_TR(0x482a15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B482a18:{NFSU2_TR(0x482a18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482a1a:{NFSU2_TR(0x482a1a);
if(r1(R+518)){{goto L482a32;}}
}
B482a1c:L482a1c:{c.instructions+=4;NFSU2_TR(0x482a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B482a23:{NFSU2_TR(0x482a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482a2a:{NFSU2_TR(0x482a2a);
u8 U[4];
w4(U+0,u32(0x78bb98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B482a30:{NFSU2_TR(0x482a30);
{goto L482a34;}
}
B482a32:L482a32:{c.instructions+=1;NFSU2_TR(0x482a32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B482a34:L482a34:{c.instructions+=6;NFSU2_TR(0x482a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482a37:{NFSU2_TR(0x482a37);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B482a3d:{NFSU2_TR(0x482a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482a43:{NFSU2_TR(0x482a43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a44:{NFSU2_TR(0x482a44);
__builtin_memmove((R+4),(R+0),4);
}
B482a46:{NFSU2_TR(0x482a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482a4bull));
TAIL_STATIC(0x459e40u,459);
}
B482a4b:L482a4b:{c.instructions+=6;NFSU2_TR(0x482a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482a4e:{NFSU2_TR(0x482a4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a50:{NFSU2_TR(0x482a50);
u8 U[4];
w4(U+0,u32(0x29000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a55:{NFSU2_TR(0x482a55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a57:{NFSU2_TR(0x482a57);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a59:{NFSU2_TR(0x482a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482a5eull));
TAIL_STATIC(0x47b710u,47b);
}
B482a5e:L482a5e:{c.instructions+=2;NFSU2_TR(0x482a5e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a60:{NFSU2_TR(0x482a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482a65ull));
TAIL_STATIC(0x575620u,575);
}
B482a65:L482a65:{c.instructions+=3;NFSU2_TR(0x482a65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B482a68:{NFSU2_TR(0x482a68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482a6a:{NFSU2_TR(0x482a6a);
if(r1(R+518)){{goto L482a73;}}
}
B482a6c:L482a6c:{c.instructions+=3;NFSU2_TR(0x482a6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B482a6e:{NFSU2_TR(0x482a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482a71:{NFSU2_TR(0x482a71);
{goto L482a75;}
}
B482a73:L482a73:{c.instructions+=1;NFSU2_TR(0x482a73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B482a75:L482a75:{c.instructions+=1;NFSU2_TR(0x482a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482a78:L482a78:{c.instructions+=7;NFSU2_TR(0x482a78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482a7c:{NFSU2_TR(0x482a7c);
__builtin_memmove((R+4),gp(0x7ed00c),4);
}
B482a82:{NFSU2_TR(0x482a82);
__builtin_memmove(gp(0x82ba6c),(R+0),4);
}
B482a87:{NFSU2_TR(0x482a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482a8a:{NFSU2_TR(0x482a8a);
__builtin_memmove((R+8),gp(0x7ed014),4);
}
B482a90:{NFSU2_TR(0x482a90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a91:{NFSU2_TR(0x482a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482a96ull));
TAIL_STATIC(0x57d900u,57d);
}
B482a96:L482a96:{c.instructions+=5;NFSU2_TR(0x482a96);
__builtin_memmove((R+28),(R+0),4);
}
B482a98:{NFSU2_TR(0x482a98);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B482a9d:{NFSU2_TR(0x482a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482a9e:{NFSU2_TR(0x482a9e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B482aa0:{NFSU2_TR(0x482aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482aa5ull));
TAIL_STATIC(0x43e910u,43e);
}
B482aa5:L482aa5:{c.instructions+=4;NFSU2_TR(0x482aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482aab:{NFSU2_TR(0x482aab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482aae:{NFSU2_TR(0x482aae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482ab0:{NFSU2_TR(0x482ab0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L482acd;}}
}
B482ab2:L482ab2:{c.instructions+=6;NFSU2_TR(0x482ab2);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B482ab8:{NFSU2_TR(0x482ab8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B482abb:{NFSU2_TR(0x482abb);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B482ac1:{NFSU2_TR(0x482ac1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ac2:{NFSU2_TR(0x482ac2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ac3:{NFSU2_TR(0x482ac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ac8ull));
TAIL_STATIC(0x440820u,440);
}
B482ac8:L482ac8:{c.instructions+=2;NFSU2_TR(0x482ac8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482acb:{NFSU2_TR(0x482acb);
__builtin_memmove((R+24),(R+0),4);
}
B482acd:L482acd:{c.instructions+=9;NFSU2_TR(0x482acd);
__builtin_memmove((R+0),gp(0x7ed014),4);
}
B482ad2:{NFSU2_TR(0x482ad2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ad4:{NFSU2_TR(0x482ad4);
u8 U[4];
w4(U+0,u32(0x45af90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ad9:{NFSU2_TR(0x482ad9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ada:{NFSU2_TR(0x482ada);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482adc:{NFSU2_TR(0x482adc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482add:{NFSU2_TR(0x482add);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ade:{NFSU2_TR(0x482ade);
__builtin_memmove(gp(0x82ba70),(R+24),4);
}
B482ae4:{NFSU2_TR(0x482ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ae9ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B482ae9:L482ae9:{c.instructions+=3;NFSU2_TR(0x482ae9);
__builtin_memmove((R+4),gp(0x7ed018),4);
}
B482aef:{NFSU2_TR(0x482aef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482af0:{NFSU2_TR(0x482af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482af5ull));
TAIL_STATIC(0x57d900u,57d);
}
B482af5:L482af5:{c.instructions+=5;NFSU2_TR(0x482af5);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B482afb:{NFSU2_TR(0x482afb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482afc:{NFSU2_TR(0x482afc);
__builtin_memmove((R+28),(R+0),4);
}
B482afe:{NFSU2_TR(0x482afe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B482b00:{NFSU2_TR(0x482b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b05ull));
TAIL_STATIC(0x43e910u,43e);
}
B482b05:L482b05:{c.instructions+=4;NFSU2_TR(0x482b05);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482b0b:{NFSU2_TR(0x482b0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B482b0e:{NFSU2_TR(0x482b0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482b10:{NFSU2_TR(0x482b10);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L482b2d;}}
}
B482b12:L482b12:{c.instructions+=6;NFSU2_TR(0x482b12);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B482b18:{NFSU2_TR(0x482b18);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B482b1b:{NFSU2_TR(0x482b1b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B482b21:{NFSU2_TR(0x482b21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b22:{NFSU2_TR(0x482b22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b23:{NFSU2_TR(0x482b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b28ull));
TAIL_STATIC(0x440820u,440);
}
B482b28:L482b28:{c.instructions+=2;NFSU2_TR(0x482b28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482b2b:{NFSU2_TR(0x482b2b);
__builtin_memmove((R+24),(R+0),4);
}
B482b2d:L482b2d:{c.instructions+=9;NFSU2_TR(0x482b2d);
__builtin_memmove((R+0),gp(0x7ed018),4);
}
B482b32:{NFSU2_TR(0x482b32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b34:{NFSU2_TR(0x482b34);
u8 U[4];
w4(U+0,u32(0x45af90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b39:{NFSU2_TR(0x482b39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b3a:{NFSU2_TR(0x482b3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b3c:{NFSU2_TR(0x482b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b3d:{NFSU2_TR(0x482b3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b3e:{NFSU2_TR(0x482b3e);
__builtin_memmove(gp(0x82ba60),(R+24),4);
}
B482b44:{NFSU2_TR(0x482b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b49ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B482b49:L482b49:{c.instructions+=3;NFSU2_TR(0x482b49);
__builtin_memmove((R+4),gp(0x7ed010),4);
}
B482b4f:{NFSU2_TR(0x482b4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b50:{NFSU2_TR(0x482b50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b55ull));
TAIL_STATIC(0x57d900u,57d);
}
B482b55:L482b55:{c.instructions+=5;NFSU2_TR(0x482b55);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B482b5b:{NFSU2_TR(0x482b5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b5c:{NFSU2_TR(0x482b5c);
__builtin_memmove((R+24),(R+0),4);
}
B482b5e:{NFSU2_TR(0x482b5e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B482b60:{NFSU2_TR(0x482b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b65ull));
TAIL_STATIC(0x43e910u,43e);
}
B482b65:L482b65:{c.instructions+=4;NFSU2_TR(0x482b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482b6b:{NFSU2_TR(0x482b6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B482b6e:{NFSU2_TR(0x482b6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482b70:{NFSU2_TR(0x482b70);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L482b8d;}}
}
B482b72:L482b72:{c.instructions+=6;NFSU2_TR(0x482b72);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B482b78:{NFSU2_TR(0x482b78);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B482b7b:{NFSU2_TR(0x482b7b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B482b81:{NFSU2_TR(0x482b81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b82:{NFSU2_TR(0x482b82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b83:{NFSU2_TR(0x482b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482b88ull));
TAIL_STATIC(0x440820u,440);
}
B482b88:L482b88:{c.instructions+=2;NFSU2_TR(0x482b88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482b8b:{NFSU2_TR(0x482b8b);
__builtin_memmove((R+28),(R+0),4);
}
B482b8d:L482b8d:{c.instructions+=9;NFSU2_TR(0x482b8d);
__builtin_memmove((R+0),gp(0x7ed010),4);
}
B482b92:{NFSU2_TR(0x482b92);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b94:{NFSU2_TR(0x482b94);
u8 U[4];
w4(U+0,u32(0x45af90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b99:{NFSU2_TR(0x482b99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b9a:{NFSU2_TR(0x482b9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b9c:{NFSU2_TR(0x482b9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b9d:{NFSU2_TR(0x482b9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482b9e:{NFSU2_TR(0x482b9e);
__builtin_memmove(gp(0x82ba68),(R+28),4);
}
B482ba4:{NFSU2_TR(0x482ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ba9ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B482ba9:L482ba9:{c.instructions+=4;NFSU2_TR(0x482ba9);
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
B482bac:{NFSU2_TR(0x482bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482bad:{NFSU2_TR(0x482bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482bae:{NFSU2_TR(0x482bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482bc0:L482bc0:{c.instructions+=7;NFSU2_TR(0x482bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482bc4:{NFSU2_TR(0x482bc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482bc5:{NFSU2_TR(0x482bc5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B482bc6:{NFSU2_TR(0x482bc6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B482bc8:{NFSU2_TR(0x482bc8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B482bcb:{NFSU2_TR(0x482bcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482bcc:{NFSU2_TR(0x482bcc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L482bf3;}}
}
B482bce:L482bce:{c.instructions+=1;NFSU2_TR(0x482bce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x482c40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482bd5:L482bd5:{c.instructions+=2;NFSU2_TR(0x482bd5);
__builtin_memmove(gp(0x82bb29),(R+12),1);
}
B482bdb:{NFSU2_TR(0x482bdb);
{goto L482bf3;}
}
B482bdd:L482bdd:{c.instructions+=2;NFSU2_TR(0x482bdd);
__builtin_memmove(gp(0x82bb2a),(R+12),1);
}
B482be3:{NFSU2_TR(0x482be3);
{goto L482bf3;}
}
B482be5:L482be5:{c.instructions+=2;NFSU2_TR(0x482be5);
__builtin_memmove(gp(0x82bb2b),(R+12),1);
}
B482beb:{NFSU2_TR(0x482beb);
{goto L482bf3;}
}
B482bed:L482bed:{c.instructions+=1;NFSU2_TR(0x482bed);
__builtin_memmove(gp(0x82bb2c),(R+12),1);
}
B482bf3:L482bf3:{c.instructions+=6;NFSU2_TR(0x482bf3);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B482bf8:{NFSU2_TR(0x482bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B482bfb:{NFSU2_TR(0x482bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482bfe:{NFSU2_TR(0x482bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482c01:{NFSU2_TR(0x482c01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c02:{NFSU2_TR(0x482c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482c07ull));
TAIL_STATIC(0x7227cbu,722);
}
B482c07:L482c07:{c.instructions+=4;NFSU2_TR(0x482c07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B482c0a:{NFSU2_TR(0x482c0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c0c:{NFSU2_TR(0x482c0c);
__builtin_memmove((R+4),(R+24),4);
}
B482c0e:{NFSU2_TR(0x482c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482c13ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482970u);}goto L482970;}
}
B482c13:L482c13:{c.instructions+=3;NFSU2_TR(0x482c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482c16:{NFSU2_TR(0x482c16);
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
B482c18:{NFSU2_TR(0x482c18);
if(r1(R+518)){{goto L482c39;}}
}
B482c1a:L482c1a:{c.instructions+=5;NFSU2_TR(0x482c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482c1d:{NFSU2_TR(0x482c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c1e:{NFSU2_TR(0x482c1e);
u8 U[4];
w4(U+0,u32(0x78c084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c23:{NFSU2_TR(0x482c23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c25:{NFSU2_TR(0x482c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482c2aull));
TAIL_STATIC(0x4691c0u,469);
}
B482c2a:L482c2a:{c.instructions+=3;NFSU2_TR(0x482c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482c2d:{NFSU2_TR(0x482c2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c2e:{NFSU2_TR(0x482c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482c33ull));
TAIL_STATIC(0x575630u,575);
}
B482c33:L482c33:{c.instructions+=2;NFSU2_TR(0x482c33);
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
B482c36:{NFSU2_TR(0x482c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482c39:L482c39:{c.instructions+=3;NFSU2_TR(0x482c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482c3a:{NFSU2_TR(0x482c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482c3b:{NFSU2_TR(0x482c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482c60:L482c60:{c.instructions+=17;NFSU2_TR(0x482c60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c62:{NFSU2_TR(0x482c62);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c67:{NFSU2_TR(0x482c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482c6d:{NFSU2_TR(0x482c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c6e:{NFSU2_TR(0x482c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482c75:{NFSU2_TR(0x482c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c76:{NFSU2_TR(0x482c76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c77:{NFSU2_TR(0x482c77);
__builtin_memmove((R+24),(R+4),4);
}
B482c79:{NFSU2_TR(0x482c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482c7d:{NFSU2_TR(0x482c7d);
u8 U[4];
w4(U+0,u32(0x78c0c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B482c83:{NFSU2_TR(0x482c83);
u8 U[4];
w4(U+0,u32(0x4835c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c88:{NFSU2_TR(0x482c88);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c8a:{NFSU2_TR(0x482c8a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c8c:{NFSU2_TR(0x482c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B482c8f:{NFSU2_TR(0x482c8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482c90:{NFSU2_TR(0x482c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482c98:{NFSU2_TR(0x482c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482c9dull));
TAIL_STATIC(0x75c401u,75c);
}
B482c9d:L482c9d:{c.instructions+=6;NFSU2_TR(0x482c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482ca1:{NFSU2_TR(0x482ca1);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B482ca7:{NFSU2_TR(0x482ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482ca8:{NFSU2_TR(0x482ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482caf:{NFSU2_TR(0x482caf);
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
B482cb2:{NFSU2_TR(0x482cb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482cc0:L482cc0:{c.instructions+=5;NFSU2_TR(0x482cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482cc1:{NFSU2_TR(0x482cc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482cc2:{NFSU2_TR(0x482cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482cc5:{NFSU2_TR(0x482cc5);
w4(R+28,u32(0x2ull));
}
B482cca:{NFSU2_TR(0x482cca);
__builtin_memmove((R+12),(R+12),4);
}
B482cd0:L482cd0:{c.instructions+=2;NFSU2_TR(0x482cd0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B482cd2:{NFSU2_TR(0x482cd2);
if(r1(R+518)){{goto L482cef;}}
}
B482cd4:L482cd4:{c.instructions+=7;NFSU2_TR(0x482cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482cd6:{NFSU2_TR(0x482cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B482cd8:{NFSU2_TR(0x482cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482cdb:{NFSU2_TR(0x482cdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B482cdd:{NFSU2_TR(0x482cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482cde:{NFSU2_TR(0x482cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482ce1:{NFSU2_TR(0x482ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ce6ull));
TAIL_STATIC(0x440ef0u,440);
}
B482ce6:L482ce6:{c.instructions+=4;NFSU2_TR(0x482ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482ce8:{NFSU2_TR(0x482ce8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B482ceb:{NFSU2_TR(0x482ceb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B482ced:{NFSU2_TR(0x482ced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482cd4u);}goto L482cd4;}}
}
B482cef:L482cef:{c.instructions+=3;NFSU2_TR(0x482cef);
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B482cf2:{NFSU2_TR(0x482cf2);
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
B482cf3:{NFSU2_TR(0x482cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482cd0u);}goto L482cd0;}}
}
B482cf5:L482cf5:{c.instructions+=3;NFSU2_TR(0x482cf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482cf6:{NFSU2_TR(0x482cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482cf7:{NFSU2_TR(0x482cf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482d00:L482d00:{c.instructions+=3;NFSU2_TR(0x482d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d01:{NFSU2_TR(0x482d01);
__builtin_memmove((R+24),(R+4),4);
}
B482d03:{NFSU2_TR(0x482d03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482d08ull));
TAIL_STATIC(0x47bbe0u,47b);
}
B482d08:L482d08:{c.instructions+=2;NFSU2_TR(0x482d08);
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
B482d0d:{NFSU2_TR(0x482d0d);
if(r1(R+518)){{goto L482d18;}}
}
B482d0f:L482d0f:{c.instructions+=2;NFSU2_TR(0x482d0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d10:{NFSU2_TR(0x482d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482d15ull));
TAIL_STATIC(0x440540u,440);
}
B482d15:L482d15:{c.instructions+=1;NFSU2_TR(0x482d15);
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
B482d18:L482d18:{c.instructions+=3;NFSU2_TR(0x482d18);
__builtin_memmove((R+0),(R+24),4);
}
B482d1a:{NFSU2_TR(0x482d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482d1b:{NFSU2_TR(0x482d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482d20:L482d20:{c.instructions+=3;NFSU2_TR(0x482d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482d24:{NFSU2_TR(0x482d24);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b500ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B482d2a:{NFSU2_TR(0x482d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482d4c;}}
}
B482d2c:L482d2c:{c.instructions+=3;NFSU2_TR(0x482d2c);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B482d31:{NFSU2_TR(0x482d31);
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
B482d33:{NFSU2_TR(0x482d33);
if(r1(R+518)){{goto L482d46;}}
}
B482d35:L482d35:{c.instructions+=3;NFSU2_TR(0x482d35);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B482d3b:{NFSU2_TR(0x482d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482d41:{NFSU2_TR(0x482d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482d46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482cc0u);}goto L482cc0;}
}
B482d46:L482d46:{c.instructions+=2;NFSU2_TR(0x482d46);
w4(R+0,u32(0x1ull));
}
B482d4b:{NFSU2_TR(0x482d4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482d4c:L482d4c:{c.instructions+=2;NFSU2_TR(0x482d4c);
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
B482d4e:{NFSU2_TR(0x482d4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482d50:L482d50:{c.instructions+=9;NFSU2_TR(0x482d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d51:{NFSU2_TR(0x482d51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d52:{NFSU2_TR(0x482d52);
__builtin_memmove((R+24),(R+4),4);
}
B482d54:{NFSU2_TR(0x482d54);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B482d57:{NFSU2_TR(0x482d57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d58:{NFSU2_TR(0x482d58);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B482d5e:{NFSU2_TR(0x482d5e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B482d60:{NFSU2_TR(0x482d60);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482d63:{NFSU2_TR(0x482d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L482d7a;}}
}
B482d65:L482d65:{c.instructions+=3;NFSU2_TR(0x482d65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482d6b:{NFSU2_TR(0x482d6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482d6d:{NFSU2_TR(0x482d6d);
if(r1(R+518)){{goto L482d7a;}}
}
B482d6f:L482d6f:{c.instructions+=2;NFSU2_TR(0x482d6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B482d73:{NFSU2_TR(0x482d73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B482d7a:L482d7a:{c.instructions+=4;NFSU2_TR(0x482d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482d7d:{NFSU2_TR(0x482d7d);
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
B482d7f:{NFSU2_TR(0x482d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482d86:{NFSU2_TR(0x482d86);
if(r1(R+518)){TAIL_STATIC(0x48310du,483);}
}
B482d8c:L482d8c:{c.instructions+=6;NFSU2_TR(0x482d8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d8d:{NFSU2_TR(0x482d8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d8e:{NFSU2_TR(0x482d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B482d92:{NFSU2_TR(0x482d92);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d93:{NFSU2_TR(0x482d93);
__builtin_memmove((R+4),(R+24),4);
}
B482d95:{NFSU2_TR(0x482d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482d9aull));
TAIL_STATIC(0x47bf20u,47b);
}
B482d9a:L482d9a:{c.instructions+=3;NFSU2_TR(0x482d9a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482d9b:{NFSU2_TR(0x482d9b);
__builtin_memmove((R+4),(R+24),4);
}
B482d9d:{NFSU2_TR(0x482d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482da2ull));
TAIL_STATIC(0x47bea0u,47b);
}
B482da2:L482da2:{c.instructions+=3;NFSU2_TR(0x482da2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482da8:{NFSU2_TR(0x482da8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482da9:{NFSU2_TR(0x482da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482daeull));
TAIL_STATIC(0x46b100u,46b);
}
B482dae:L482dae:{c.instructions+=3;NFSU2_TR(0x482dae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482daf:{NFSU2_TR(0x482daf);
__builtin_memmove((R+4),(R+24),4);
}
B482db1:{NFSU2_TR(0x482db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482db6ull));
TAIL_STATIC(0x46f000u,46f);
}
B482db6:L482db6:{c.instructions+=5;NFSU2_TR(0x482db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482db9:{NFSU2_TR(0x482db9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B482dba:{NFSU2_TR(0x482dba);
w4(R+12,u32(0x6ull));
}
B482dbf:{NFSU2_TR(0x482dbf);
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
B482dc1:{NFSU2_TR(0x482dc1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x48310bu,483);}
}
B482dc7:L482dc7:{c.instructions+=1;NFSU2_TR(0x482dc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x483114ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482dce:L482dce:{c.instructions+=3;NFSU2_TR(0x482dce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482dd4:{NFSU2_TR(0x482dd4);
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
B482dd6:{NFSU2_TR(0x482dd6);
if(r1(R+518)){TAIL_STATIC(0x48310bu,483);}
}
B482ddc:L482ddc:{c.instructions+=18;NFSU2_TR(0x482ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482ddf:{NFSU2_TR(0x482ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482de2:{NFSU2_TR(0x482de2);
w4(R+28,u32(0x2ull));
}
B482de7:{NFSU2_TR(0x482de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482dea:{NFSU2_TR(0x482dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482ded:{NFSU2_TR(0x482ded);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B482df0:{NFSU2_TR(0x482df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482df3:{NFSU2_TR(0x482df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482df6:{NFSU2_TR(0x482df6);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B482df9:{NFSU2_TR(0x482df9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482dfb:{NFSU2_TR(0x482dfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482dfc:{NFSU2_TR(0x482dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482dff:{NFSU2_TR(0x482dff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e00:{NFSU2_TR(0x482e00);
u8 U[4];
w4(U+0,u32(0x461c4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e05:{NFSU2_TR(0x482e05);
u8 U[4];
w4(U+0,u32(0x447a0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e0a:{NFSU2_TR(0x482e0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e0b:{NFSU2_TR(0x482e0b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482e0e:{NFSU2_TR(0x482e0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e13ull));
TAIL_STATIC(0x401090u,401);
}
B482e13:L482e13:{c.instructions+=4;NFSU2_TR(0x482e13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B482e16:{NFSU2_TR(0x482e16);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482e19:{NFSU2_TR(0x482e19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482e1f:{NFSU2_TR(0x482e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e24ull));
TAIL_STATIC(0x459990u,459);
}
B482e24:L482e24:{c.instructions+=5;NFSU2_TR(0x482e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482e27:{NFSU2_TR(0x482e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482e2a:{NFSU2_TR(0x482e2a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B482e2c:{NFSU2_TR(0x482e2c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B482e2e:{NFSU2_TR(0x482e2e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L482eb4;}}
}
B482e34:L482e34:{c.instructions+=3;NFSU2_TR(0x482e34);
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
B482e37:{NFSU2_TR(0x482e37);
__builtin_memmove((R+12),(R+0),4);
}
B482e39:{NFSU2_TR(0x482e39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L482e40;}}
}
B482e3b:L482e3b:{c.instructions+=1;NFSU2_TR(0x482e3b);
w4(R+12,u32(0x3ull));
}
B482e40:L482e40:{c.instructions+=11;NFSU2_TR(0x482e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482e43:{NFSU2_TR(0x482e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482e46:{NFSU2_TR(0x482e46);
__builtin_memmove((R+0),(R+4),4);
}
B482e48:{NFSU2_TR(0x482e48);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7885b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B482e4f:{NFSU2_TR(0x482e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B482e52:{NFSU2_TR(0x482e52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e54:{NFSU2_TR(0x482e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482e58:{NFSU2_TR(0x482e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B482e5a:{NFSU2_TR(0x482e5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e5b:{NFSU2_TR(0x482e5b);
__builtin_memmove((R+4),(R+28),4);
}
B482e5d:{NFSU2_TR(0x482e5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482e60:L482e60:{c.instructions+=5;NFSU2_TR(0x482e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482e62:{NFSU2_TR(0x482e62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e63:{NFSU2_TR(0x482e63);
__builtin_memmove((R+4),(R+28),4);
}
B482e65:{NFSU2_TR(0x482e65);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482e68:{NFSU2_TR(0x482e68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482e6b:L482e6b:{c.instructions+=5;NFSU2_TR(0x482e6b);
{u32 ea_=u32((r4(R+12)*4u)+u32(7898528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B482e72:{NFSU2_TR(0x482e72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e73:{NFSU2_TR(0x482e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B482e79:{NFSU2_TR(0x482e79);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482e7c:{NFSU2_TR(0x482e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e81ull));
TAIL_STATIC(0x459990u,459);
}
B482e81:L482e81:{c.instructions+=9;NFSU2_TR(0x482e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482e84:{NFSU2_TR(0x482e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482e87:{NFSU2_TR(0x482e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482e8a:{NFSU2_TR(0x482e8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e8c:{NFSU2_TR(0x482e8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e8d:{NFSU2_TR(0x482e8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e8f:{NFSU2_TR(0x482e8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482e90:{NFSU2_TR(0x482e90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482e96:{NFSU2_TR(0x482e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482e9bull));
TAIL_STATIC(0x459990u,459);
}
B482e9b:L482e9b:{c.instructions+=2;NFSU2_TR(0x482e9b);
__builtin_memmove((R+4),(R+24),4);
}
B482e9d:{NFSU2_TR(0x482e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ea2ull));
TAIL_STATIC(0x46f080u,46f);
}
B482ea2:L482ea2:{c.instructions+=2;NFSU2_TR(0x482ea2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482ea3:{NFSU2_TR(0x482ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482ea8ull));
TAIL_STATIC(0x46f000u,46f);
}
B482ea8:L482ea8:{c.instructions+=7;NFSU2_TR(0x482ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482ea9:{NFSU2_TR(0x482ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482eaa:{NFSU2_TR(0x482eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482eab:{NFSU2_TR(0x482eab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B482eaf:{NFSU2_TR(0x482eaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482eb0:{NFSU2_TR(0x482eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482eb1:{NFSU2_TR(0x482eb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482eb4:L482eb4:{c.instructions+=2;NFSU2_TR(0x482eb4);
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
B482eb6:{NFSU2_TR(0x482eb6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x482e40u);}goto L482e40;}
}
B482eb8:L482eb8:{c.instructions+=3;NFSU2_TR(0x482eb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482ebe:{NFSU2_TR(0x482ebe);
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
B482ec0:{NFSU2_TR(0x482ec0);
if(r1(R+518)){TAIL_STATIC(0x48310bu,483);}
}
B482ec6:L482ec6:{c.instructions+=8;NFSU2_TR(0x482ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482ec7:{NFSU2_TR(0x482ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482ec8:{NFSU2_TR(0x482ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482ec9:{NFSU2_TR(0x482ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482ed0:{NFSU2_TR(0x482ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B482ed7:{NFSU2_TR(0x482ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482ed8:{NFSU2_TR(0x482ed8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482ed9:{NFSU2_TR(0x482ed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482edc:L482edc:{c.instructions+=3;NFSU2_TR(0x482edc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482ee2:{NFSU2_TR(0x482ee2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482ee4:{NFSU2_TR(0x482ee4);
if(r1(R+518)){{goto L482ef4;}}
}
B482ee6:L482ee6:{c.instructions+=3;NFSU2_TR(0x482ee6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482eec:{NFSU2_TR(0x482eec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B482eee:{NFSU2_TR(0x482eee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x483104u,483);}
}
B482ef4:L482ef4:{c.instructions+=3;NFSU2_TR(0x482ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482efa:{NFSU2_TR(0x482efa);
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
B482efc:{NFSU2_TR(0x482efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x48310bu,483);}
}
B482f02:L482f02:{c.instructions+=2;NFSU2_TR(0x482f02);
__builtin_memmove((R+4),(R+24),4);
}
B482f04:{NFSU2_TR(0x482f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482f09ull));
TAIL_STATIC(0x45c430u,45c);
}
B482f09:L482f09:{c.instructions+=6;NFSU2_TR(0x482f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482f0a:{NFSU2_TR(0x482f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482f0b:{NFSU2_TR(0x482f0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482f0c:{NFSU2_TR(0x482f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482f0d:{NFSU2_TR(0x482f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482f0e:{NFSU2_TR(0x482f0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482f11:L482f11:{c.instructions+=3;NFSU2_TR(0x482f11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482f17:{NFSU2_TR(0x482f17);
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
B482f19:{NFSU2_TR(0x482f19);
if(r1(R+518)){TAIL_STATIC(0x48310bu,483);}
}
B482f1f:L482f1f:{c.instructions+=10;NFSU2_TR(0x482f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B482f22:{NFSU2_TR(0x482f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B482f25:{NFSU2_TR(0x482f25);
w4(R+0,u32(0x5ull));
}
B482f2a:{NFSU2_TR(0x482f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482f2d:{NFSU2_TR(0x482f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482f30:{NFSU2_TR(0x482f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482f33:{NFSU2_TR(0x482f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B482f36:{NFSU2_TR(0x482f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482f3a:{NFSU2_TR(0x482f3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B482f41:{NFSU2_TR(0x482f41);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L482f56;}}
}
B482f43:L482f43:{c.instructions+=3;NFSU2_TR(0x482f43);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B482f47:{NFSU2_TR(0x482f47);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B482f4d:{NFSU2_TR(0x482f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482f52ull));
TAIL_STATIC(0x75bed4u,75b);
}
B482f52:L482f52:{c.instructions+=1;NFSU2_TR(0x482f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482f56:L482f56:{c.instructions+=7;NFSU2_TR(0x482f56);
{u32 ea_=u32(r4(R+12)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B482f59:{NFSU2_TR(0x482f59);
u8 U[4];
w4(U+0,u32(0x461c4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f5e:{NFSU2_TR(0x482f5e);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B482f61:{NFSU2_TR(0x482f61);
u8 U[4];
w4(U+0,u32(0x447a0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f66:{NFSU2_TR(0x482f66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f67:{NFSU2_TR(0x482f67);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482f6a:{NFSU2_TR(0x482f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482f6full));
TAIL_STATIC(0x401090u,401);
}
B482f6f:L482f6f:{c.instructions+=10;NFSU2_TR(0x482f6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482f73:{NFSU2_TR(0x482f73);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482f77:{NFSU2_TR(0x482f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B482f7b:{NFSU2_TR(0x482f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B482f7d:{NFSU2_TR(0x482f7d);
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
B482f80:{NFSU2_TR(0x482f80);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f82:{NFSU2_TR(0x482f82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f83:{NFSU2_TR(0x482f83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f84:{NFSU2_TR(0x482f84);
__builtin_memmove((R+4),(R+28),4);
}
B482f86:{NFSU2_TR(0x482f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482f89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482f89:L482f89:{c.instructions+=4;NFSU2_TR(0x482f89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482f8a:{NFSU2_TR(0x482f8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482f90:{NFSU2_TR(0x482f90);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482f93:{NFSU2_TR(0x482f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482f98ull));
TAIL_STATIC(0x459990u,459);
}
B482f98:L482f98:{c.instructions+=8;NFSU2_TR(0x482f98);
__builtin_memmove((R+8),gp(0x7ed2a0),4);
}
B482f9e:{NFSU2_TR(0x482f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482fa1:{NFSU2_TR(0x482fa1);
__builtin_memmove((R+0),gp(0x7ed29c),4);
}
B482fa6:{NFSU2_TR(0x482fa6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482fa8:{NFSU2_TR(0x482fa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482fa9:{NFSU2_TR(0x482fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B482fab:{NFSU2_TR(0x482fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482fac:{NFSU2_TR(0x482fac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482fafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B482faf:L482faf:{c.instructions+=4;NFSU2_TR(0x482faf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B482fb0:{NFSU2_TR(0x482fb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B482fb6:{NFSU2_TR(0x482fb6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B482fb9:{NFSU2_TR(0x482fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x482fbeull));
TAIL_STATIC(0x459990u,459);
}
B482fbe:L482fbe:{c.instructions+=6;NFSU2_TR(0x482fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B482fbf:{NFSU2_TR(0x482fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B482fc0:{NFSU2_TR(0x482fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B482fc1:{NFSU2_TR(0x482fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B482fc2:{NFSU2_TR(0x482fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B482fc3:{NFSU2_TR(0x482fc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B482fc6:L482fc6:{c.instructions+=3;NFSU2_TR(0x482fc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B482fcc:{NFSU2_TR(0x482fcc);
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
B482fce:{NFSU2_TR(0x482fce);
if(r1(R+518)){TAIL_STATIC(0x48310bu,483);}
}
B482fd4:L482fd4:{c.instructions+=9;NFSU2_TR(0x482fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482fd7:{NFSU2_TR(0x482fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482fda:{NFSU2_TR(0x482fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482fdd:{NFSU2_TR(0x482fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482fe0:{NFSU2_TR(0x482fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B482fe3:{NFSU2_TR(0x482fe3);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B482fea:{NFSU2_TR(0x482fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B482fed:{NFSU2_TR(0x482fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B482ff1:{NFSU2_TR(0x482ff1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x483008u,483);}
}
B482ff3:L482ff3:{c.instructions+=2;NFSU2_TR(0x482ff3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
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
B482ff7:{NFSU2_TR(0x482ff7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x483008u,483);}
}
B482ff9:L482ff9:{c.instructions+=2;NFSU2_TR(0x482ff9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B482ffd:{NFSU2_TR(0x482ffd);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x483003u,483);
}
XIT:NFSU2_TR_EXIT(0x482,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
