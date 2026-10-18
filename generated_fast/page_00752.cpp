#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_751(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x752,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x752,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_752(u8* __restrict R,Cpu& c);
u32 page_752(Cpu& c){return body_752(c.regs.data(),c);}
__attribute__((noinline)) u32 body_752(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x752004:goto L752004;
case 0x75200a:c.instructions+=3;goto B75200a;
case 0x752010:c.instructions+=2;goto B752010;
case 0x752012:c.instructions+=1;goto B752012;
case 0x752014:goto L752014;
case 0x752016:c.instructions+=1;goto B752016;
case 0x75201b:goto L75201b;
case 0x75201e:goto L75201e;
case 0x752024:c.instructions+=1;goto B752024;
case 0x752026:goto L752026;
case 0x75202c:c.instructions+=2;goto B75202c;
case 0x752032:c.instructions+=1;goto B752032;
case 0x752034:goto L752034;
case 0x752035:c.instructions+=4;goto B752035;
case 0x75203b:c.instructions+=3;goto B75203b;
case 0x75203d:c.instructions+=2;goto B75203d;
case 0x752040:c.instructions+=1;goto B752040;
case 0x752042:goto L752042;
case 0x752047:goto L752047;
case 0x752049:c.instructions+=2;goto B752049;
case 0x75204e:c.instructions+=1;goto B75204e;
case 0x752050:goto L752050;
case 0x752052:c.instructions+=2;goto B752052;
case 0x752054:c.instructions+=1;goto B752054;
case 0x752059:goto L752059;
case 0x75205b:c.instructions+=1;goto B75205b;
case 0x75205d:goto L75205d;
case 0x752062:goto L752062;
case 0x752064:goto L752064;
case 0x752065:goto L752065;
case 0x75206b:c.instructions+=3;goto B75206b;
case 0x75206d:c.instructions+=2;goto B75206d;
case 0x75206e:c.instructions+=1;goto B75206e;
case 0x752070:goto L752070;
case 0x752076:c.instructions+=2;goto B752076;
case 0x752078:c.instructions+=1;goto B752078;
case 0x75207a:goto L75207a;
case 0x752080:c.instructions+=5;goto B752080;
case 0x752086:c.instructions+=4;goto B752086;
case 0x752087:c.instructions+=3;goto B752087;
case 0x752089:c.instructions+=2;goto B752089;
case 0x75208f:c.instructions+=1;goto B75208f;
case 0x752091:goto L752091;
case 0x752092:c.instructions+=2;goto B752092;
case 0x752093:c.instructions+=1;goto B752093;
case 0x752095:goto L752095;
case 0x752098:goto L752098;
case 0x75209e:c.instructions+=3;goto B75209e;
case 0x75209f:c.instructions+=2;goto B75209f;
case 0x7520a5:c.instructions+=1;goto B7520a5;
case 0x7520af:goto L7520af;
case 0x7520b0:c.instructions+=1;goto B7520b0;
case 0x7520c0:goto L7520c0;
case 0x7520c1:c.instructions+=5;goto B7520c1;
case 0x7520c2:c.instructions+=4;goto B7520c2;
case 0x7520c6:c.instructions+=3;goto B7520c6;
case 0x7520cc:c.instructions+=2;goto B7520cc;
case 0x7520cd:c.instructions+=1;goto B7520cd;
case 0x7520d2:goto L7520d2;
case 0x7520d5:c.instructions+=2;goto B7520d5;
case 0x7520d7:c.instructions+=1;goto B7520d7;
case 0x7520d9:goto L7520d9;
case 0x7520db:c.instructions+=1;goto B7520db;
case 0x7520e0:goto L7520e0;
case 0x7520e1:c.instructions+=1;goto B7520e1;
case 0x7520e6:goto L7520e6;
case 0x7520e9:goto L7520e9;
case 0x7520ea:c.instructions+=3;goto B7520ea;
case 0x7520ec:c.instructions+=2;goto B7520ec;
case 0x7520ed:c.instructions+=1;goto B7520ed;
case 0x7520f0:goto L7520f0;
case 0x7520f6:c.instructions+=10;goto B7520f6;
case 0x7520fc:c.instructions+=9;goto B7520fc;
case 0x752102:c.instructions+=8;goto B752102;
case 0x752104:c.instructions+=7;goto B752104;
case 0x752105:c.instructions+=6;goto B752105;
case 0x75210b:c.instructions+=5;goto B75210b;
case 0x75210c:c.instructions+=4;goto B75210c;
case 0x752112:c.instructions+=3;goto B752112;
case 0x752113:c.instructions+=2;goto B752113;
case 0x752119:c.instructions+=1;goto B752119;
case 0x75211e:goto L75211e;
case 0x752121:c.instructions+=2;goto B752121;
case 0x752123:c.instructions+=1;goto B752123;
case 0x752125:goto L752125;
case 0x752127:c.instructions+=1;goto B752127;
case 0x75212c:goto L75212c;
case 0x75212d:c.instructions+=1;goto B75212d;
case 0x752132:goto L752132;
case 0x752135:goto L752135;
case 0x75213b:c.instructions+=11;goto B75213b;
case 0x752141:c.instructions+=10;goto B752141;
case 0x752147:c.instructions+=9;goto B752147;
case 0x752149:c.instructions+=8;goto B752149;
case 0x75214b:c.instructions+=7;goto B75214b;
case 0x75214c:c.instructions+=6;goto B75214c;
case 0x75214e:c.instructions+=5;goto B75214e;
case 0x75214f:c.instructions+=4;goto B75214f;
case 0x752151:c.instructions+=3;goto B752151;
case 0x752152:c.instructions+=2;goto B752152;
case 0x752158:c.instructions+=1;goto B752158;
case 0x752160:goto L752160;
case 0x752161:c.instructions+=3;goto B752161;
case 0x752165:c.instructions+=2;goto B752165;
case 0x75216c:c.instructions+=1;goto B75216c;
case 0x75216e:goto L75216e;
case 0x752170:c.instructions+=1;goto B752170;
case 0x752175:goto L752175;
case 0x752178:c.instructions+=2;goto B752178;
case 0x752182:c.instructions+=1;goto B752182;
case 0x75218c:goto L75218c;
case 0x75218f:c.instructions+=2;goto B75218f;
case 0x752191:c.instructions+=1;goto B752191;
case 0x752193:goto L752193;
case 0x752194:c.instructions+=1;goto B752194;
case 0x752199:goto L752199;
case 0x75219c:c.instructions+=1;goto B75219c;
case 0x7521a3:goto L7521a3;
case 0x7521a9:c.instructions+=2;goto B7521a9;
case 0x7521aa:c.instructions+=1;goto B7521aa;
case 0x7521af:goto L7521af;
case 0x7521b5:c.instructions+=2;goto B7521b5;
case 0x7521b6:c.instructions+=1;goto B7521b6;
case 0x7521bb:goto L7521bb;
case 0x7521c1:c.instructions+=2;goto B7521c1;
case 0x7521c2:c.instructions+=1;goto B7521c2;
case 0x7521c7:goto L7521c7;
case 0x7521c8:c.instructions+=1;goto B7521c8;
case 0x7521cd:goto L7521cd;
case 0x7521d0:c.instructions+=2;goto B7521d0;
case 0x7521d1:c.instructions+=1;goto B7521d1;
case 0x7521e0:goto L7521e0;
case 0x7521e4:c.instructions+=4;goto B7521e4;
case 0x7521e8:c.instructions+=3;goto B7521e8;
case 0x7521ee:c.instructions+=2;goto B7521ee;
case 0x7521f5:c.instructions+=1;goto B7521f5;
case 0x752200:goto L752200;
case 0x752203:c.instructions+=1;goto B752203;
case 0x752210:goto L752210;
case 0x752211:c.instructions+=4;goto B752211;
case 0x752215:c.instructions+=3;goto B752215;
case 0x752218:c.instructions+=2;goto B752218;
case 0x75221a:c.instructions+=1;goto B75221a;
case 0x75221c:goto L75221c;
case 0x75221d:c.instructions+=1;goto B75221d;
case 0x752222:goto L752222;
case 0x752225:goto L752225;
case 0x75222c:c.instructions+=4;goto B75222c;
case 0x752236:c.instructions+=3;goto B752236;
case 0x752238:c.instructions+=2;goto B752238;
case 0x752239:c.instructions+=1;goto B752239;
case 0x752240:goto L752240;
case 0x752244:c.instructions+=3;goto B752244;
case 0x75224a:c.instructions+=2;goto B75224a;
case 0x75224d:c.instructions+=1;goto B75224d;
case 0x75224f:goto L75224f;
case 0x752252:c.instructions+=1;goto B752252;
case 0x752254:goto L752254;
case 0x752256:c.instructions+=1;goto B752256;
case 0x752258:goto L752258;
case 0x75225b:c.instructions+=1;goto B75225b;
case 0x75225d:goto L75225d;
case 0x75225f:c.instructions+=5;goto B75225f;
case 0x752262:c.instructions+=4;goto B752262;
case 0x752265:c.instructions+=3;goto B752265;
case 0x752268:c.instructions+=2;goto B752268;
case 0x75226a:c.instructions+=1;goto B75226a;
case 0x75226b:goto L75226b;
case 0x752270:c.instructions+=1;goto B752270;
case 0x752271:goto L752271;
case 0x752276:c.instructions+=1;goto B752276;
case 0x752280:goto L752280;
case 0x752281:c.instructions+=3;goto B752281;
case 0x752285:c.instructions+=2;goto B752285;
case 0x75228c:c.instructions+=1;goto B75228c;
case 0x75228e:goto L75228e;
case 0x752293:c.instructions+=2;goto B752293;
case 0x752294:c.instructions+=1;goto B752294;
case 0x752295:goto L752295;
case 0x752296:c.instructions+=12;goto B752296;
case 0x75229c:c.instructions+=11;goto B75229c;
case 0x75229d:c.instructions+=10;goto B75229d;
case 0x7522a3:c.instructions+=9;goto B7522a3;
case 0x7522a6:c.instructions+=8;goto B7522a6;
case 0x7522a7:c.instructions+=7;goto B7522a7;
case 0x7522ad:c.instructions+=6;goto B7522ad;
case 0x7522ae:c.instructions+=5;goto B7522ae;
case 0x7522b0:c.instructions+=4;goto B7522b0;
case 0x7522b6:c.instructions+=3;goto B7522b6;
case 0x7522ba:c.instructions+=2;goto B7522ba;
case 0x7522bc:c.instructions+=1;goto B7522bc;
case 0x7522be:goto L7522be;
case 0x7522bf:c.instructions+=5;goto B7522bf;
case 0x7522c0:c.instructions+=4;goto B7522c0;
case 0x7522c1:c.instructions+=3;goto B7522c1;
case 0x7522c3:c.instructions+=2;goto B7522c3;
case 0x7522c4:c.instructions+=1;goto B7522c4;
case 0x7522c5:goto L7522c5;
case 0x7522c9:c.instructions+=3;goto B7522c9;
case 0x7522cc:c.instructions+=2;goto B7522cc;
case 0x7522ce:c.instructions+=1;goto B7522ce;
case 0x7522d0:goto L7522d0;
case 0x7522d1:c.instructions+=5;goto B7522d1;
case 0x7522d2:c.instructions+=4;goto B7522d2;
case 0x7522d3:c.instructions+=3;goto B7522d3;
case 0x7522d8:c.instructions+=2;goto B7522d8;
case 0x7522d9:c.instructions+=1;goto B7522d9;
case 0x7522da:goto L7522da;
case 0x7522dc:c.instructions+=1;goto B7522dc;
case 0x7522de:goto L7522de;
case 0x7522e2:c.instructions+=14;goto B7522e2;
case 0x7522e4:c.instructions+=13;goto B7522e4;
case 0x7522e6:c.instructions+=12;goto B7522e6;
case 0x7522e8:c.instructions+=11;goto B7522e8;
case 0x7522e9:c.instructions+=10;goto B7522e9;
case 0x7522eb:c.instructions+=9;goto B7522eb;
case 0x7522ec:c.instructions+=8;goto B7522ec;
case 0x7522ed:c.instructions+=7;goto B7522ed;
case 0x7522ef:c.instructions+=6;goto B7522ef;
case 0x7522f0:c.instructions+=5;goto B7522f0;
case 0x7522f2:c.instructions+=4;goto B7522f2;
case 0x7522f3:c.instructions+=3;goto B7522f3;
case 0x7522f4:c.instructions+=2;goto B7522f4;
case 0x7522f5:c.instructions+=1;goto B7522f5;
case 0x7522f6:goto L7522f6;
case 0x7522fc:c.instructions+=6;goto B7522fc;
case 0x7522fe:c.instructions+=5;goto B7522fe;
case 0x752302:c.instructions+=4;goto B752302;
case 0x752305:c.instructions+=3;goto B752305;
case 0x752307:c.instructions+=2;goto B752307;
case 0x75230a:c.instructions+=1;goto B75230a;
case 0x75230d:goto L75230d;
case 0x75230f:goto L75230f;
case 0x752311:c.instructions+=1;goto B752311;
case 0x752314:goto L752314;
case 0x752316:goto L752316;
case 0x75231b:c.instructions+=1;goto B75231b;
case 0x75231d:goto L75231d;
case 0x752323:c.instructions+=8;goto B752323;
case 0x752326:c.instructions+=7;goto B752326;
case 0x752329:c.instructions+=6;goto B752329;
case 0x75232f:c.instructions+=5;goto B75232f;
case 0x752330:c.instructions+=4;goto B752330;
case 0x752333:c.instructions+=3;goto B752333;
case 0x752335:c.instructions+=2;goto B752335;
case 0x75233b:c.instructions+=1;goto B75233b;
case 0x752340:goto L752340;
case 0x752341:c.instructions+=5;goto B752341;
case 0x752342:c.instructions+=4;goto B752342;
case 0x752343:c.instructions+=3;goto B752343;
case 0x752348:c.instructions+=2;goto B752348;
case 0x752349:c.instructions+=1;goto B752349;
case 0x75234a:goto L75234a;
case 0x752350:c.instructions+=8;goto B752350;
case 0x752353:c.instructions+=7;goto B752353;
case 0x752356:c.instructions+=6;goto B752356;
case 0x75235c:c.instructions+=5;goto B75235c;
case 0x75235d:c.instructions+=4;goto B75235d;
case 0x752360:c.instructions+=3;goto B752360;
case 0x752362:c.instructions+=2;goto B752362;
case 0x752368:c.instructions+=1;goto B752368;
case 0x75236d:goto L75236d;
case 0x75236f:c.instructions+=1;goto B75236f;
case 0x752371:goto L752371;
case 0x752376:goto L752376;
case 0x752377:c.instructions+=4;goto B752377;
case 0x752378:c.instructions+=3;goto B752378;
case 0x752379:c.instructions+=2;goto B752379;
case 0x75237a:c.instructions+=1;goto B75237a;
case 0x752380:goto L752380;
case 0x752381:c.instructions+=5;goto B752381;
case 0x752385:c.instructions+=4;goto B752385;
case 0x75238b:c.instructions+=3;goto B75238b;
case 0x752391:c.instructions+=2;goto B752391;
case 0x752392:c.instructions+=1;goto B752392;
case 0x752394:goto L752394;
case 0x75239a:c.instructions+=2;goto B75239a;
case 0x75239b:c.instructions+=1;goto B75239b;
case 0x7523a0:goto L7523a0;
case 0x7523a3:c.instructions+=2;goto B7523a3;
case 0x7523a5:c.instructions+=1;goto B7523a5;
case 0x7523a7:goto L7523a7;
case 0x7523a9:c.instructions+=1;goto B7523a9;
case 0x7523ae:goto L7523ae;
case 0x7523af:c.instructions+=1;goto B7523af;
case 0x7523b4:goto L7523b4;
case 0x7523b7:goto L7523b7;
case 0x7523bd:c.instructions+=2;goto B7523bd;
case 0x7523c3:c.instructions+=1;goto B7523c3;
case 0x7523c5:goto L7523c5;
case 0x7523c6:c.instructions+=3;goto B7523c6;
case 0x7523cb:c.instructions+=2;goto B7523cb;
case 0x7523cc:c.instructions+=1;goto B7523cc;
case 0x7523cd:goto L7523cd;
case 0x7523d3:c.instructions+=6;goto B7523d3;
case 0x7523d7:c.instructions+=5;goto B7523d7;
case 0x7523d9:c.instructions+=4;goto B7523d9;
case 0x7523dc:c.instructions+=3;goto B7523dc;
case 0x7523dd:c.instructions+=2;goto B7523dd;
case 0x7523df:c.instructions+=1;goto B7523df;
case 0x7523e1:goto L7523e1;
case 0x7523e3:goto L7523e3;
case 0x7523e7:c.instructions+=4;goto B7523e7;
case 0x7523e8:c.instructions+=3;goto B7523e8;
case 0x7523ea:c.instructions+=2;goto B7523ea;
case 0x7523ed:c.instructions+=1;goto B7523ed;
case 0x7523f0:goto L7523f0;
case 0x7523f2:goto L7523f2;
case 0x7523f4:c.instructions+=1;goto B7523f4;
case 0x7523f7:goto L7523f7;
case 0x7523f9:goto L7523f9;
case 0x7523fd:c.instructions+=3;goto B7523fd;
case 0x7523ff:c.instructions+=2;goto B7523ff;
case 0x752400:c.instructions+=1;goto B752400;
case 0x752402:goto L752402;
case 0x752404:c.instructions+=1;goto B752404;
case 0x752406:goto L752406;
case 0x752407:c.instructions+=2;goto B752407;
case 0x752408:c.instructions+=1;goto B752408;
case 0x752410:goto L752410;
case 0x752414:c.instructions+=9;goto B752414;
case 0x752418:c.instructions+=8;goto B752418;
case 0x75241c:c.instructions+=7;goto B75241c;
case 0x75241d:c.instructions+=6;goto B75241d;
case 0x752421:c.instructions+=5;goto B752421;
case 0x752422:c.instructions+=4;goto B752422;
case 0x752423:c.instructions+=3;goto B752423;
case 0x752424:c.instructions+=2;goto B752424;
case 0x752425:c.instructions+=1;goto B752425;
case 0x75242a:goto L75242a;
case 0x75242c:c.instructions+=3;goto B75242c;
case 0x75242f:c.instructions+=2;goto B75242f;
case 0x752431:c.instructions+=1;goto B752431;
case 0x752433:goto L752433;
case 0x752439:c.instructions+=5;goto B752439;
case 0x75243f:c.instructions+=4;goto B75243f;
case 0x752441:c.instructions+=3;goto B752441;
case 0x752442:c.instructions+=2;goto B752442;
case 0x752448:c.instructions+=1;goto B752448;
case 0x75244e:goto L75244e;
case 0x752450:c.instructions+=2;goto B752450;
case 0x752451:c.instructions+=1;goto B752451;
case 0x752460:goto L752460;
case 0x752463:c.instructions+=9;goto B752463;
case 0x752468:c.instructions+=8;goto B752468;
case 0x752469:c.instructions+=7;goto B752469;
case 0x75246d:c.instructions+=6;goto B75246d;
case 0x752471:c.instructions+=5;goto B752471;
case 0x752477:c.instructions+=4;goto B752477;
case 0x752478:c.instructions+=3;goto B752478;
case 0x75247a:c.instructions+=2;goto B75247a;
case 0x75247c:c.instructions+=1;goto B75247c;
case 0x752482:goto L752482;
case 0x752485:c.instructions+=1;goto B752485;
case 0x75248b:goto L75248b;
case 0x75248f:c.instructions+=13;goto B75248f;
case 0x752490:c.instructions+=12;goto B752490;
case 0x752494:c.instructions+=11;goto B752494;
case 0x752495:c.instructions+=10;goto B752495;
case 0x752499:c.instructions+=9;goto B752499;
case 0x75249a:c.instructions+=8;goto B75249a;
case 0x75249e:c.instructions+=7;goto B75249e;
case 0x75249f:c.instructions+=6;goto B75249f;
case 0x7524a6:c.instructions+=5;goto B7524a6;
case 0x7524ab:c.instructions+=4;goto B7524ab;
case 0x7524af:c.instructions+=3;goto B7524af;
case 0x7524b3:c.instructions+=2;goto B7524b3;
case 0x7524b7:c.instructions+=1;goto B7524b7;
case 0x7524bc:goto L7524bc;
case 0x7524bf:c.instructions+=2;goto B7524bf;
case 0x7524c1:c.instructions+=1;goto B7524c1;
case 0x7524c3:goto L7524c3;
case 0x7524c4:c.instructions+=4;goto B7524c4;
case 0x7524c9:c.instructions+=3;goto B7524c9;
case 0x7524ca:c.instructions+=2;goto B7524ca;
case 0x7524ce:c.instructions+=1;goto B7524ce;
case 0x7524d3:goto L7524d3;
case 0x7524d6:c.instructions+=1;goto B7524d6;
case 0x7524d7:goto L7524d7;
case 0x7524db:c.instructions+=5;goto B7524db;
case 0x7524dd:c.instructions+=4;goto B7524dd;
case 0x7524e0:c.instructions+=3;goto B7524e0;
case 0x7524e4:c.instructions+=2;goto B7524e4;
case 0x7524e8:c.instructions+=1;goto B7524e8;
case 0x7524ed:goto L7524ed;
case 0x7524ee:c.instructions+=3;goto B7524ee;
case 0x7524f0:c.instructions+=2;goto B7524f0;
case 0x7524f2:c.instructions+=1;goto B7524f2;
case 0x7524f7:goto L7524f7;
case 0x7524fa:c.instructions+=3;goto B7524fa;
case 0x7524fc:c.instructions+=2;goto B7524fc;
case 0x7524ff:c.instructions+=1;goto B7524ff;
case 0x752501:goto L752501;
case 0x752502:c.instructions+=4;goto B752502;
case 0x752507:c.instructions+=3;goto B752507;
case 0x752508:c.instructions+=2;goto B752508;
case 0x75250c:c.instructions+=1;goto B75250c;
case 0x752511:goto L752511;
case 0x752514:c.instructions+=1;goto B752514;
case 0x752515:goto L752515;
case 0x752517:c.instructions+=4;goto B752517;
case 0x75251b:c.instructions+=3;goto B75251b;
case 0x75251c:c.instructions+=2;goto B75251c;
case 0x75251d:c.instructions+=1;goto B75251d;
case 0x752522:goto L752522;
case 0x752525:c.instructions+=2;goto B752525;
case 0x752527:c.instructions+=1;goto B752527;
case 0x752529:goto L752529;
case 0x75252c:c.instructions+=2;goto B75252c;
case 0x75252d:c.instructions+=1;goto B75252d;
case 0x752532:goto L752532;
case 0x752535:c.instructions+=6;goto B752535;
case 0x752538:c.instructions+=5;goto B752538;
case 0x752539:c.instructions+=4;goto B752539;
case 0x75253e:c.instructions+=3;goto B75253e;
case 0x75253f:c.instructions+=2;goto B75253f;
case 0x752543:c.instructions+=1;goto B752543;
case 0x752548:goto L752548;
case 0x75254b:c.instructions+=1;goto B75254b;
case 0x75254c:goto L75254c;
case 0x75254f:c.instructions+=6;goto B75254f;
case 0x752554:c.instructions+=5;goto B752554;
case 0x752555:c.instructions+=4;goto B752555;
case 0x752557:c.instructions+=3;goto B752557;
case 0x752559:c.instructions+=2;goto B752559;
case 0x75255a:c.instructions+=1;goto B75255a;
case 0x75255f:goto L75255f;
case 0x752563:c.instructions+=3;goto B752563;
case 0x752566:c.instructions+=2;goto B752566;
case 0x752568:c.instructions+=1;goto B752568;
case 0x75256a:goto L75256a;
case 0x75256e:c.instructions+=2;goto B75256e;
case 0x752570:c.instructions+=1;goto B752570;
case 0x752572:goto L752572;
case 0x752576:c.instructions+=1;goto B752576;
case 0x752577:goto L752577;
case 0x75257d:c.instructions+=15;goto B75257d;
case 0x752583:c.instructions+=14;goto B752583;
case 0x752586:c.instructions+=13;goto B752586;
case 0x75258c:c.instructions+=12;goto B75258c;
case 0x75258f:c.instructions+=11;goto B75258f;
case 0x752595:c.instructions+=10;goto B752595;
case 0x752598:c.instructions+=9;goto B752598;
case 0x75259a:c.instructions+=8;goto B75259a;
case 0x75259e:c.instructions+=7;goto B75259e;
case 0x7525a1:c.instructions+=6;goto B7525a1;
case 0x7525a7:c.instructions+=5;goto B7525a7;
case 0x7525ad:c.instructions+=4;goto B7525ad;
case 0x7525b3:c.instructions+=3;goto B7525b3;
case 0x7525b9:c.instructions+=2;goto B7525b9;
case 0x7525bc:c.instructions+=1;goto B7525bc;
case 0x7525bf:goto L7525bf;
case 0x7525c0:c.instructions+=5;goto B7525c0;
case 0x7525ca:c.instructions+=4;goto B7525ca;
case 0x7525cc:c.instructions+=3;goto B7525cc;
case 0x7525cd:c.instructions+=2;goto B7525cd;
case 0x7525d1:c.instructions+=1;goto B7525d1;
case 0x7525d6:goto L7525d6;
case 0x7525d9:c.instructions+=1;goto B7525d9;
case 0x7525da:goto L7525da;
case 0x7525de:c.instructions+=4;goto B7525de;
case 0x7525df:c.instructions+=3;goto B7525df;
case 0x7525e4:c.instructions+=2;goto B7525e4;
case 0x7525e5:c.instructions+=1;goto B7525e5;
case 0x7525ea:goto L7525ea;
case 0x7525ed:c.instructions+=1;goto B7525ed;
case 0x7525f0:goto L7525f0;
case 0x7525f3:c.instructions+=9;goto B7525f3;
case 0x7525f8:c.instructions+=8;goto B7525f8;
case 0x7525f9:c.instructions+=7;goto B7525f9;
case 0x7525fd:c.instructions+=6;goto B7525fd;
case 0x752601:c.instructions+=5;goto B752601;
case 0x752607:c.instructions+=4;goto B752607;
case 0x752608:c.instructions+=3;goto B752608;
case 0x75260a:c.instructions+=2;goto B75260a;
case 0x75260c:c.instructions+=1;goto B75260c;
case 0x752612:goto L752612;
case 0x752615:c.instructions+=1;goto B752615;
case 0x75261b:goto L75261b;
case 0x75261f:c.instructions+=8;goto B75261f;
case 0x752620:c.instructions+=7;goto B752620;
case 0x752624:c.instructions+=6;goto B752624;
case 0x752625:c.instructions+=5;goto B752625;
case 0x752629:c.instructions+=4;goto B752629;
case 0x75262a:c.instructions+=3;goto B75262a;
case 0x75262e:c.instructions+=2;goto B75262e;
case 0x75262f:c.instructions+=1;goto B75262f;
case 0x752634:goto L752634;
case 0x752637:c.instructions+=3;goto B752637;
case 0x75263a:c.instructions+=2;goto B75263a;
case 0x75263c:c.instructions+=1;goto B75263c;
case 0x75263e:goto L75263e;
case 0x75263f:c.instructions+=4;goto B75263f;
case 0x752644:c.instructions+=3;goto B752644;
case 0x752645:c.instructions+=2;goto B752645;
case 0x752649:c.instructions+=1;goto B752649;
case 0x75264e:goto L75264e;
case 0x752651:c.instructions+=1;goto B752651;
case 0x752652:goto L752652;
case 0x752656:c.instructions+=1;goto B752656;
case 0x752658:goto L752658;
case 0x75265c:c.instructions+=3;goto B75265c;
case 0x752660:c.instructions+=2;goto B752660;
case 0x752661:c.instructions+=1;goto B752661;
case 0x752665:goto L752665;
case 0x75266a:goto L75266a;
case 0x75266b:c.instructions+=3;goto B75266b;
case 0x75266d:c.instructions+=2;goto B75266d;
case 0x75266f:c.instructions+=1;goto B75266f;
case 0x752674:goto L752674;
case 0x752677:c.instructions+=3;goto B752677;
case 0x752679:c.instructions+=2;goto B752679;
case 0x75267c:c.instructions+=1;goto B75267c;
case 0x75267e:goto L75267e;
case 0x75267f:c.instructions+=4;goto B75267f;
case 0x752684:c.instructions+=3;goto B752684;
case 0x752685:c.instructions+=2;goto B752685;
case 0x752689:c.instructions+=1;goto B752689;
case 0x75268e:goto L75268e;
case 0x752691:c.instructions+=1;goto B752691;
case 0x752692:goto L752692;
case 0x752696:c.instructions+=14;goto B752696;
case 0x75269b:c.instructions+=13;goto B75269b;
case 0x75269d:c.instructions+=12;goto B75269d;
case 0x7526a1:c.instructions+=11;goto B7526a1;
case 0x7526a3:c.instructions+=10;goto B7526a3;
case 0x7526a7:c.instructions+=9;goto B7526a7;
case 0x7526a8:c.instructions+=8;goto B7526a8;
case 0x7526ab:c.instructions+=7;goto B7526ab;
case 0x7526ac:c.instructions+=6;goto B7526ac;
case 0x7526b3:c.instructions+=5;goto B7526b3;
case 0x7526b7:c.instructions+=4;goto B7526b7;
case 0x7526bb:c.instructions+=3;goto B7526bb;
case 0x7526bf:c.instructions+=2;goto B7526bf;
case 0x7526c3:c.instructions+=1;goto B7526c3;
case 0x7526c8:goto L7526c8;
case 0x7526cb:c.instructions+=2;goto B7526cb;
case 0x7526cd:c.instructions+=1;goto B7526cd;
case 0x7526cf:goto L7526cf;
case 0x7526d0:c.instructions+=4;goto B7526d0;
case 0x7526d5:c.instructions+=3;goto B7526d5;
case 0x7526d6:c.instructions+=2;goto B7526d6;
case 0x7526da:c.instructions+=1;goto B7526da;
case 0x7526df:goto L7526df;
case 0x7526e2:c.instructions+=1;goto B7526e2;
case 0x7526e3:goto L7526e3;
case 0x7526e7:c.instructions+=24;goto B7526e7;
case 0x7526ed:c.instructions+=23;goto B7526ed;
case 0x7526f3:c.instructions+=22;goto B7526f3;
case 0x7526f6:c.instructions+=21;goto B7526f6;
case 0x7526fc:c.instructions+=20;goto B7526fc;
case 0x7526ff:c.instructions+=19;goto B7526ff;
case 0x752705:c.instructions+=18;goto B752705;
case 0x752708:c.instructions+=17;goto B752708;
case 0x75270d:c.instructions+=16;goto B75270d;
case 0x752713:c.instructions+=15;goto B752713;
case 0x752717:c.instructions+=14;goto B752717;
case 0x752718:c.instructions+=13;goto B752718;
case 0x75271c:c.instructions+=12;goto B75271c;
case 0x75271e:c.instructions+=11;goto B75271e;
case 0x752720:c.instructions+=10;goto B752720;
case 0x752723:c.instructions+=9;goto B752723;
case 0x752726:c.instructions+=8;goto B752726;
case 0x752729:c.instructions+=7;goto B752729;
case 0x75272b:c.instructions+=6;goto B75272b;
case 0x75272c:c.instructions+=5;goto B75272c;
case 0x752732:c.instructions+=4;goto B752732;
case 0x752738:c.instructions+=3;goto B752738;
case 0x75273e:c.instructions+=2;goto B75273e;
case 0x752741:c.instructions+=1;goto B752741;
case 0x752746:goto L752746;
case 0x752749:c.instructions+=6;goto B752749;
case 0x75274a:c.instructions+=5;goto B75274a;
case 0x752754:c.instructions+=4;goto B752754;
case 0x752756:c.instructions+=3;goto B752756;
case 0x752757:c.instructions+=2;goto B752757;
case 0x75275b:c.instructions+=1;goto B75275b;
case 0x752760:goto L752760;
case 0x752763:c.instructions+=1;goto B752763;
case 0x752764:goto L752764;
case 0x752768:c.instructions+=4;goto B752768;
case 0x752769:c.instructions+=3;goto B752769;
case 0x75276e:c.instructions+=2;goto B75276e;
case 0x75276f:c.instructions+=1;goto B75276f;
case 0x752774:goto L752774;
case 0x752777:c.instructions+=1;goto B752777;
case 0x752780:goto L752780;
case 0x752781:c.instructions+=2;goto B752781;
case 0x752786:c.instructions+=1;goto B752786;
case 0x75278b:goto L75278b;
case 0x75278d:c.instructions+=4;goto B75278d;
case 0x752790:c.instructions+=3;goto B752790;
case 0x752792:c.instructions+=2;goto B752792;
case 0x752794:c.instructions+=1;goto B752794;
case 0x75279a:goto L75279a;
case 0x75279b:c.instructions+=3;goto B75279b;
case 0x75279c:c.instructions+=2;goto B75279c;
case 0x7527a1:c.instructions+=1;goto B7527a1;
case 0x7527a3:goto L7527a3;
case 0x7527a5:goto L7527a5;
case 0x7527ab:c.instructions+=17;goto B7527ab;
case 0x7527ac:c.instructions+=16;goto B7527ac;
case 0x7527b2:c.instructions+=15;goto B7527b2;
case 0x7527b9:c.instructions+=14;goto B7527b9;
case 0x7527c0:c.instructions+=13;goto B7527c0;
case 0x7527c7:c.instructions+=12;goto B7527c7;
case 0x7527ce:c.instructions+=11;goto B7527ce;
case 0x7527d5:c.instructions+=10;goto B7527d5;
case 0x7527dc:c.instructions+=9;goto B7527dc;
case 0x7527e3:c.instructions+=8;goto B7527e3;
case 0x7527ea:c.instructions+=7;goto B7527ea;
case 0x7527f1:c.instructions+=6;goto B7527f1;
case 0x7527f8:c.instructions+=5;goto B7527f8;
case 0x7527ff:c.instructions+=4;goto B7527ff;
case 0x752806:c.instructions+=3;goto B752806;
case 0x75280d:c.instructions+=2;goto B75280d;
case 0x752814:c.instructions+=1;goto B752814;
case 0x752819:goto L752819;
case 0x75281d:c.instructions+=9;goto B75281d;
case 0x752821:c.instructions+=8;goto B752821;
case 0x752824:c.instructions+=7;goto B752824;
case 0x75282a:c.instructions+=6;goto B75282a;
case 0x75282c:c.instructions+=5;goto B75282c;
case 0x75282f:c.instructions+=4;goto B75282f;
case 0x752830:c.instructions+=3;goto B752830;
case 0x752836:c.instructions+=2;goto B752836;
case 0x75283c:c.instructions+=1;goto B75283c;
case 0x752841:goto L752841;
case 0x752847:c.instructions+=5;goto B752847;
case 0x75284c:c.instructions+=4;goto B75284c;
case 0x75284d:c.instructions+=3;goto B75284d;
case 0x752853:c.instructions+=2;goto B752853;
case 0x752859:c.instructions+=1;goto B752859;
case 0x75285e:goto L75285e;
case 0x752864:c.instructions+=13;goto B752864;
case 0x752866:c.instructions+=12;goto B752866;
case 0x752867:c.instructions+=11;goto B752867;
case 0x75286a:c.instructions+=10;goto B75286a;
case 0x75286d:c.instructions+=9;goto B75286d;
case 0x75286f:c.instructions+=8;goto B75286f;
case 0x752872:c.instructions+=7;goto B752872;
case 0x752873:c.instructions+=6;goto B752873;
case 0x752879:c.instructions+=5;goto B752879;
case 0x752880:c.instructions+=4;goto B752880;
case 0x75288a:c.instructions+=3;goto B75288a;
case 0x752894:c.instructions+=2;goto B752894;
case 0x752896:c.instructions+=1;goto B752896;
case 0x752897:goto L752897;
case 0x752898:c.instructions+=1;goto B752898;
case 0x7528a0:goto L7528a0;
case 0x7528a2:c.instructions+=2;goto B7528a2;
case 0x7528a3:c.instructions+=1;goto B7528a3;
case 0x7528a8:goto L7528a8;
case 0x7528ab:c.instructions+=2;goto B7528ab;
case 0x7528ad:c.instructions+=1;goto B7528ad;
case 0x7528af:goto L7528af;
case 0x7528b1:c.instructions+=3;goto B7528b1;
case 0x7528b3:c.instructions+=2;goto B7528b3;
case 0x7528b5:c.instructions+=1;goto B7528b5;
case 0x7528b7:goto L7528b7;
case 0x7528b8:goto L7528b8;
case 0x7528ba:c.instructions+=9;goto B7528ba;
case 0x7528bd:c.instructions+=8;goto B7528bd;
case 0x7528c0:c.instructions+=7;goto B7528c0;
case 0x7528c2:c.instructions+=6;goto B7528c2;
case 0x7528c5:c.instructions+=5;goto B7528c5;
case 0x7528c8:c.instructions+=4;goto B7528c8;
case 0x7528ca:c.instructions+=3;goto B7528ca;
case 0x7528cb:c.instructions+=2;goto B7528cb;
case 0x7528cd:c.instructions+=1;goto B7528cd;
case 0x7528cf:goto L7528cf;
case 0x7528d0:goto L7528d0;
case 0x7528d4:c.instructions+=1;goto B7528d4;
case 0x7528da:goto L7528da;
case 0x7528e0:goto L7528e0;
case 0x7528e2:c.instructions+=10;goto B7528e2;
case 0x7528e7:c.instructions+=9;goto B7528e7;
case 0x7528ed:c.instructions+=8;goto B7528ed;
case 0x7528f3:c.instructions+=7;goto B7528f3;
case 0x7528f9:c.instructions+=6;goto B7528f9;
case 0x7528ff:c.instructions+=5;goto B7528ff;
case 0x752905:c.instructions+=4;goto B752905;
case 0x75290b:c.instructions+=3;goto B75290b;
case 0x752911:c.instructions+=2;goto B752911;
case 0x752917:c.instructions+=1;goto B752917;
case 0x75291c:goto L75291c;
case 0x752921:c.instructions+=2;goto B752921;
case 0x752927:c.instructions+=1;goto B752927;
case 0x75292c:goto L75292c;
case 0x752931:c.instructions+=2;goto B752931;
case 0x752937:c.instructions+=1;goto B752937;
case 0x752940:goto L752940;
case 0x752943:c.instructions+=14;goto B752943;
case 0x752944:c.instructions+=13;goto B752944;
case 0x752945:c.instructions+=12;goto B752945;
case 0x752946:c.instructions+=11;goto B752946;
case 0x752948:c.instructions+=10;goto B752948;
case 0x75294a:c.instructions+=9;goto B75294a;
case 0x75294d:c.instructions+=8;goto B75294d;
case 0x752950:c.instructions+=7;goto B752950;
case 0x752951:c.instructions+=6;goto B752951;
case 0x752953:c.instructions+=5;goto B752953;
case 0x752956:c.instructions+=4;goto B752956;
case 0x752957:c.instructions+=3;goto B752957;
case 0x752958:c.instructions+=2;goto B752958;
case 0x752959:c.instructions+=1;goto B752959;
case 0x75295e:goto L75295e;
case 0x752960:c.instructions+=3;goto B752960;
case 0x752963:c.instructions+=2;goto B752963;
case 0x752965:c.instructions+=1;goto B752965;
case 0x752967:goto L752967;
case 0x75296c:goto L75296c;
case 0x75296f:c.instructions+=9;goto B75296f;
case 0x752972:c.instructions+=8;goto B752972;
case 0x752974:c.instructions+=7;goto B752974;
case 0x752975:c.instructions+=6;goto B752975;
case 0x75297b:c.instructions+=5;goto B75297b;
case 0x75297e:c.instructions+=4;goto B75297e;
case 0x752981:c.instructions+=3;goto B752981;
case 0x752985:c.instructions+=2;goto B752985;
case 0x752987:c.instructions+=1;goto B752987;
case 0x752989:goto L752989;
case 0x75298a:c.instructions+=4;goto B75298a;
case 0x75298b:c.instructions+=3;goto B75298b;
case 0x752995:c.instructions+=2;goto B752995;
case 0x752996:c.instructions+=1;goto B752996;
case 0x752997:goto L752997;
case 0x75299d:c.instructions+=1;goto B75299d;
case 0x7529a0:goto L7529a0;
case 0x7529a1:c.instructions+=3;goto B7529a1;
case 0x7529a2:c.instructions+=2;goto B7529a2;
case 0x7529a3:c.instructions+=1;goto B7529a3;
case 0x7529b0:goto L7529b0;
case 0x7529b6:c.instructions+=6;goto B7529b6;
case 0x7529bb:c.instructions+=5;goto B7529bb;
case 0x7529bc:c.instructions+=4;goto B7529bc;
case 0x7529be:c.instructions+=3;goto B7529be;
case 0x7529c5:c.instructions+=2;goto B7529c5;
case 0x7529cc:c.instructions+=1;goto B7529cc;
case 0x7529ce:goto L7529ce;
case 0x7529d4:c.instructions+=5;goto B7529d4;
case 0x7529d8:c.instructions+=4;goto B7529d8;
case 0x7529dc:c.instructions+=3;goto B7529dc;
case 0x7529e4:c.instructions+=2;goto B7529e4;
case 0x7529ec:c.instructions+=1;goto B7529ec;
case 0x7529f1:goto L7529f1;
case 0x7529fb:c.instructions+=1;goto B7529fb;
case 0x752a05:goto L752a05;
case 0x752a0c:c.instructions+=3;goto B752a0c;
case 0x752a0e:c.instructions+=2;goto B752a0e;
case 0x752a0f:c.instructions+=1;goto B752a0f;
case 0x752a14:goto L752a14;
case 0x752a1a:c.instructions+=1;goto B752a1a;
case 0x752a20:goto L752a20;
case 0x752a21:c.instructions+=3;goto B752a21;
case 0x752a23:c.instructions+=2;goto B752a23;
case 0x752a26:c.instructions+=1;goto B752a26;
case 0x752a28:goto L752a28;
case 0x752a2b:c.instructions+=2;goto B752a2b;
case 0x752a31:c.instructions+=1;goto B752a31;
case 0x752a33:goto L752a33;
case 0x752a37:c.instructions+=1;goto B752a37;
case 0x752a39:goto L752a39;
case 0x752a3e:goto L752a3e;
case 0x752a43:c.instructions+=4;goto B752a43;
case 0x752a49:c.instructions+=3;goto B752a49;
case 0x752a4c:c.instructions+=2;goto B752a4c;
case 0x752a4f:c.instructions+=1;goto B752a4f;
case 0x752a51:goto L752a51;
case 0x752a52:c.instructions+=1;goto B752a52;
case 0x752a57:goto L752a57;
case 0x752a5a:c.instructions+=3;goto B752a5a;
case 0x752a5c:c.instructions+=2;goto B752a5c;
case 0x752a63:c.instructions+=1;goto B752a63;
case 0x752a68:goto L752a68;
case 0x752a69:c.instructions+=1;goto B752a69;
case 0x752a6a:goto L752a6a;
case 0x752a6d:c.instructions+=1;goto B752a6d;
case 0x752a6f:goto L752a6f;
case 0x752a76:c.instructions+=1;goto B752a76;
case 0x752a78:goto L752a78;
case 0x752a79:c.instructions+=1;goto B752a79;
case 0x752a7e:goto L752a7e;
case 0x752a81:c.instructions+=3;goto B752a81;
case 0x752a8b:c.instructions+=2;goto B752a8b;
case 0x752a8c:c.instructions+=1;goto B752a8c;
case 0x752a8d:goto L752a8d;
case 0x752a90:c.instructions+=1;goto B752a90;
case 0x752a92:goto L752a92;
case 0x752a99:goto L752a99;
case 0x752a9b:goto L752a9b;
case 0x752aa5:goto L752aa5;
case 0x752aa6:c.instructions+=1;goto B752aa6;
case 0x752ab0:goto L752ab0;
case 0x752ab1:c.instructions+=12;goto B752ab1;
case 0x752ab3:c.instructions+=11;goto B752ab3;
case 0x752ab6:c.instructions+=10;goto B752ab6;
case 0x752abc:c.instructions+=9;goto B752abc;
case 0x752ac1:c.instructions+=8;goto B752ac1;
case 0x752ac7:c.instructions+=7;goto B752ac7;
case 0x752ace:c.instructions+=6;goto B752ace;
case 0x752ad4:c.instructions+=5;goto B752ad4;
case 0x752ad5:c.instructions+=4;goto B752ad5;
case 0x752ada:c.instructions+=3;goto B752ada;
case 0x752adb:c.instructions+=2;goto B752adb;
case 0x752adf:c.instructions+=1;goto B752adf;
case 0x752ae1:goto L752ae1;
case 0x752ae7:c.instructions+=2;goto B752ae7;
case 0x752aed:c.instructions+=1;goto B752aed;
case 0x752af0:goto L752af0;
case 0x752af3:c.instructions+=6;goto B752af3;
case 0x752af9:c.instructions+=5;goto B752af9;
case 0x752afb:c.instructions+=4;goto B752afb;
case 0x752afc:c.instructions+=3;goto B752afc;
case 0x752afe:c.instructions+=2;goto B752afe;
case 0x752b04:c.instructions+=1;goto B752b04;
case 0x752b06:goto L752b06;
case 0x752b0c:c.instructions+=2;goto B752b0c;
case 0x752b10:c.instructions+=1;goto B752b10;
case 0x752b12:goto L752b12;
case 0x752b17:goto L752b17;
case 0x752b1d:c.instructions+=2;goto B752b1d;
case 0x752b22:c.instructions+=1;goto B752b22;
case 0x752b24:goto L752b24;
case 0x752b2c:c.instructions+=2;goto B752b2c;
case 0x752b30:c.instructions+=1;goto B752b30;
case 0x752b32:goto L752b32;
case 0x752b34:c.instructions+=1;goto B752b34;
case 0x752b3a:goto L752b3a;
case 0x752b40:goto L752b40;
case 0x752b45:c.instructions+=2;goto B752b45;
case 0x752b47:c.instructions+=1;goto B752b47;
case 0x752b49:goto L752b49;
case 0x752b4b:goto L752b4b;
case 0x752b4d:c.instructions+=1;goto B752b4d;
case 0x752b51:goto L752b51;
case 0x752b53:c.instructions+=1;goto B752b53;
case 0x752b55:goto L752b55;
case 0x752b5b:c.instructions+=2;goto B752b5b;
case 0x752b61:c.instructions+=1;goto B752b61;
case 0x752b63:goto L752b63;
case 0x752b69:c.instructions+=6;goto B752b69;
case 0x752b6b:c.instructions+=5;goto B752b6b;
case 0x752b6e:c.instructions+=4;goto B752b6e;
case 0x752b70:c.instructions+=3;goto B752b70;
case 0x752b72:c.instructions+=2;goto B752b72;
case 0x752b74:c.instructions+=1;goto B752b74;
case 0x752b76:goto L752b76;
case 0x752b78:c.instructions+=1;goto B752b78;
case 0x752b7a:goto L752b7a;
case 0x752b80:c.instructions+=7;goto B752b80;
case 0x752b82:c.instructions+=6;goto B752b82;
case 0x752b83:c.instructions+=5;goto B752b83;
case 0x752b89:c.instructions+=4;goto B752b89;
case 0x752b8a:c.instructions+=3;goto B752b8a;
case 0x752b90:c.instructions+=2;goto B752b90;
case 0x752b96:c.instructions+=1;goto B752b96;
case 0x752b98:goto L752b98;
case 0x752b9b:c.instructions+=1;goto B752b9b;
case 0x752b9d:goto L752b9d;
case 0x752b9f:c.instructions+=2;goto B752b9f;
case 0x752ba3:c.instructions+=1;goto B752ba3;
case 0x752ba9:goto L752ba9;
case 0x752baf:c.instructions+=13;goto B752baf;
case 0x752bb5:c.instructions+=12;goto B752bb5;
case 0x752bbb:c.instructions+=11;goto B752bbb;
case 0x752bbd:c.instructions+=10;goto B752bbd;
case 0x752bbf:c.instructions+=9;goto B752bbf;
case 0x752bc0:c.instructions+=8;goto B752bc0;
case 0x752bc2:c.instructions+=7;goto B752bc2;
case 0x752bc8:c.instructions+=6;goto B752bc8;
case 0x752bcb:c.instructions+=5;goto B752bcb;
case 0x752bce:c.instructions+=4;goto B752bce;
case 0x752bd0:c.instructions+=3;goto B752bd0;
case 0x752bd3:c.instructions+=2;goto B752bd3;
case 0x752bd7:c.instructions+=1;goto B752bd7;
case 0x752bd9:goto L752bd9;
case 0x752bdb:goto L752bdb;
case 0x752bdd:c.instructions+=4;goto B752bdd;
case 0x752be1:c.instructions+=3;goto B752be1;
case 0x752be4:c.instructions+=2;goto B752be4;
case 0x752be5:c.instructions+=1;goto B752be5;
case 0x752be7:goto L752be7;
case 0x752be9:goto L752be9;
case 0x752bef:goto L752bef;
case 0x752bf3:c.instructions+=1;goto B752bf3;
case 0x752c00:goto L752c00;
case 0x752c06:c.instructions+=13;goto B752c06;
case 0x752c0c:c.instructions+=12;goto B752c0c;
case 0x752c0e:c.instructions+=11;goto B752c0e;
case 0x752c10:c.instructions+=10;goto B752c10;
case 0x752c12:c.instructions+=9;goto B752c12;
case 0x752c13:c.instructions+=8;goto B752c13;
case 0x752c15:c.instructions+=7;goto B752c15;
case 0x752c1b:c.instructions+=6;goto B752c1b;
case 0x752c1e:c.instructions+=5;goto B752c1e;
case 0x752c20:c.instructions+=4;goto B752c20;
case 0x752c22:c.instructions+=3;goto B752c22;
case 0x752c26:c.instructions+=2;goto B752c26;
case 0x752c2a:c.instructions+=1;goto B752c2a;
case 0x752c2c:goto L752c2c;
case 0x752c2e:c.instructions+=6;goto B752c2e;
case 0x752c30:c.instructions+=5;goto B752c30;
case 0x752c31:c.instructions+=4;goto B752c31;
case 0x752c34:c.instructions+=3;goto B752c34;
case 0x752c35:c.instructions+=2;goto B752c35;
case 0x752c36:c.instructions+=1;goto B752c36;
case 0x752c38:goto L752c38;
case 0x752c3b:goto L752c3b;
case 0x752c43:c.instructions+=6;goto B752c43;
case 0x752c45:c.instructions+=5;goto B752c45;
case 0x752c49:c.instructions+=4;goto B752c49;
case 0x752c4b:c.instructions+=3;goto B752c4b;
case 0x752c4e:c.instructions+=2;goto B752c4e;
case 0x752c51:c.instructions+=1;goto B752c51;
case 0x752c55:goto L752c55;
case 0x752c57:goto L752c57;
case 0x752c59:c.instructions+=1;goto B752c59;
case 0x752c5c:goto L752c5c;
case 0x752c5e:goto L752c5e;
case 0x752c62:c.instructions+=13;goto B752c62;
case 0x752c66:c.instructions+=12;goto B752c66;
case 0x752c68:c.instructions+=11;goto B752c68;
case 0x752c6c:c.instructions+=10;goto B752c6c;
case 0x752c70:c.instructions+=9;goto B752c70;
case 0x752c72:c.instructions+=8;goto B752c72;
case 0x752c76:c.instructions+=7;goto B752c76;
case 0x752c7a:c.instructions+=6;goto B752c7a;
case 0x752c7e:c.instructions+=5;goto B752c7e;
case 0x752c7f:c.instructions+=4;goto B752c7f;
case 0x752c80:c.instructions+=3;goto B752c80;
case 0x752c84:c.instructions+=2;goto B752c84;
case 0x752c88:c.instructions+=1;goto B752c88;
case 0x752c8e:goto L752c8e;
case 0x752c94:c.instructions+=1;goto B752c94;
case 0x752c9a:goto L752c9a;
case 0x752c9c:goto L752c9c;
case 0x752ca0:goto L752ca0;
case 0x752ca4:c.instructions+=2;goto B752ca4;
case 0x752caa:c.instructions+=1;goto B752caa;
case 0x752cb0:goto L752cb0;
case 0x752cb6:c.instructions+=15;goto B752cb6;
case 0x752cbc:c.instructions+=14;goto B752cbc;
case 0x752cbe:c.instructions+=13;goto B752cbe;
case 0x752cc0:c.instructions+=12;goto B752cc0;
case 0x752cc2:c.instructions+=11;goto B752cc2;
case 0x752cc3:c.instructions+=10;goto B752cc3;
case 0x752cc5:c.instructions+=9;goto B752cc5;
case 0x752ccb:c.instructions+=8;goto B752ccb;
case 0x752cce:c.instructions+=7;goto B752cce;
case 0x752cd2:c.instructions+=6;goto B752cd2;
case 0x752cd4:c.instructions+=5;goto B752cd4;
case 0x752cd8:c.instructions+=4;goto B752cd8;
case 0x752cdb:c.instructions+=3;goto B752cdb;
case 0x752cde:c.instructions+=2;goto B752cde;
case 0x752ce2:c.instructions+=1;goto B752ce2;
case 0x752ce4:goto L752ce4;
case 0x752ce7:c.instructions+=2;goto B752ce7;
case 0x752ce9:c.instructions+=1;goto B752ce9;
case 0x752ceb:goto L752ceb;
case 0x752ced:c.instructions+=5;goto B752ced;
case 0x752cee:c.instructions+=4;goto B752cee;
case 0x752cf1:c.instructions+=3;goto B752cf1;
case 0x752cf2:c.instructions+=2;goto B752cf2;
case 0x752cf3:c.instructions+=1;goto B752cf3;
case 0x752cf5:goto L752cf5;
case 0x752cf8:goto L752cf8;
case 0x752cfc:c.instructions+=8;goto B752cfc;
case 0x752d00:c.instructions+=7;goto B752d00;
case 0x752d06:c.instructions+=6;goto B752d06;
case 0x752d0a:c.instructions+=5;goto B752d0a;
case 0x752d0c:c.instructions+=4;goto B752d0c;
case 0x752d0e:c.instructions+=3;goto B752d0e;
case 0x752d11:c.instructions+=2;goto B752d11;
case 0x752d14:c.instructions+=1;goto B752d14;
case 0x752d18:goto L752d18;
case 0x752d1a:goto L752d1a;
case 0x752d1c:c.instructions+=1;goto B752d1c;
case 0x752d1f:goto L752d1f;
case 0x752d21:goto L752d21;
case 0x752d25:c.instructions+=12;goto B752d25;
case 0x752d29:c.instructions+=11;goto B752d29;
case 0x752d2b:c.instructions+=10;goto B752d2b;
case 0x752d2f:c.instructions+=9;goto B752d2f;
case 0x752d33:c.instructions+=8;goto B752d33;
case 0x752d35:c.instructions+=7;goto B752d35;
case 0x752d39:c.instructions+=6;goto B752d39;
case 0x752d3d:c.instructions+=5;goto B752d3d;
case 0x752d43:c.instructions+=4;goto B752d43;
case 0x752d44:c.instructions+=3;goto B752d44;
case 0x752d46:c.instructions+=2;goto B752d46;
case 0x752d4a:c.instructions+=1;goto B752d4a;
case 0x752d50:goto L752d50;
case 0x752d54:goto L752d54;
case 0x752d5a:c.instructions+=1;goto B752d5a;
case 0x752d5c:goto L752d5c;
case 0x752d66:c.instructions+=1;goto B752d66;
case 0x752d68:goto L752d68;
case 0x752d6d:c.instructions+=2;goto B752d6d;
case 0x752d72:c.instructions+=1;goto B752d72;
case 0x752d74:goto L752d74;
case 0x752d76:c.instructions+=2;goto B752d76;
case 0x752d7b:c.instructions+=1;goto B752d7b;
case 0x752d7d:goto L752d7d;
case 0x752d87:goto L752d87;
case 0x752d8d:c.instructions+=15;goto B752d8d;
case 0x752d91:c.instructions+=14;goto B752d91;
case 0x752d93:c.instructions+=13;goto B752d93;
case 0x752d96:c.instructions+=12;goto B752d96;
case 0x752d97:c.instructions+=11;goto B752d97;
case 0x752d9d:c.instructions+=10;goto B752d9d;
case 0x752d9f:c.instructions+=9;goto B752d9f;
case 0x752da0:c.instructions+=8;goto B752da0;
case 0x752da3:c.instructions+=7;goto B752da3;
case 0x752da4:c.instructions+=6;goto B752da4;
case 0x752da8:c.instructions+=5;goto B752da8;
case 0x752dac:c.instructions+=4;goto B752dac;
case 0x752daf:c.instructions+=3;goto B752daf;
case 0x752db0:c.instructions+=2;goto B752db0;
case 0x752db1:c.instructions+=1;goto B752db1;
case 0x752db6:goto L752db6;
case 0x752db8:c.instructions+=3;goto B752db8;
case 0x752dbb:c.instructions+=2;goto B752dbb;
case 0x752dbd:c.instructions+=1;goto B752dbd;
case 0x752dbf:goto L752dbf;
case 0x752dc4:goto L752dc4;
case 0x752dc7:c.instructions+=9;goto B752dc7;
case 0x752dca:c.instructions+=8;goto B752dca;
case 0x752dcc:c.instructions+=7;goto B752dcc;
case 0x752dd2:c.instructions+=6;goto B752dd2;
case 0x752dd6:c.instructions+=5;goto B752dd6;
case 0x752dd7:c.instructions+=4;goto B752dd7;
case 0x752dda:c.instructions+=3;goto B752dda;
case 0x752ddd:c.instructions+=2;goto B752ddd;
case 0x752de0:c.instructions+=1;goto B752de0;
case 0x752de2:goto L752de2;
case 0x752dec:goto L752dec;
case 0x752dee:c.instructions+=1;goto B752dee;
case 0x752df0:goto L752df0;
case 0x752df4:c.instructions+=4;goto B752df4;
case 0x752df8:c.instructions+=3;goto B752df8;
case 0x752dfa:c.instructions+=2;goto B752dfa;
case 0x752dfe:c.instructions+=1;goto B752dfe;
case 0x752e00:goto L752e00;
case 0x752e02:c.instructions+=1;goto B752e02;
case 0x752e07:goto L752e07;
case 0x752e0d:goto L752e0d;
case 0x752e14:c.instructions+=1;goto B752e14;
case 0x752e19:goto L752e19;
case 0x752e1a:c.instructions+=4;goto B752e1a;
case 0x752e1b:c.instructions+=3;goto B752e1b;
case 0x752e1d:c.instructions+=2;goto B752e1d;
case 0x752e1e:c.instructions+=1;goto B752e1e;
case 0x752e20:goto L752e20;
case 0x752e23:c.instructions+=11;goto B752e23;
case 0x752e24:c.instructions+=10;goto B752e24;
case 0x752e26:c.instructions+=9;goto B752e26;
case 0x752e28:c.instructions+=8;goto B752e28;
case 0x752e2b:c.instructions+=7;goto B752e2b;
case 0x752e2e:c.instructions+=6;goto B752e2e;
case 0x752e2f:c.instructions+=5;goto B752e2f;
case 0x752e30:c.instructions+=4;goto B752e30;
case 0x752e33:c.instructions+=3;goto B752e33;
case 0x752e35:c.instructions+=2;goto B752e35;
case 0x752e37:c.instructions+=1;goto B752e37;
case 0x752e39:goto L752e39;
case 0x752e3a:goto L752e3a;
case 0x752e40:c.instructions+=2;goto B752e40;
case 0x752e46:c.instructions+=1;goto B752e46;
case 0x752e48:goto L752e48;
case 0x752e49:c.instructions+=2;goto B752e49;
case 0x752e4f:c.instructions+=1;goto B752e4f;
case 0x752e50:goto L752e50;
case 0x752e56:c.instructions+=2;goto B752e56;
case 0x752e5a:c.instructions+=1;goto B752e5a;
case 0x752e5c:goto L752e5c;
case 0x752e62:c.instructions+=2;goto B752e62;
case 0x752e64:c.instructions+=1;goto B752e64;
case 0x752e66:goto L752e66;
case 0x752e6c:c.instructions+=4;goto B752e6c;
case 0x752e6e:c.instructions+=3;goto B752e6e;
case 0x752e6f:c.instructions+=2;goto B752e6f;
case 0x752e75:c.instructions+=1;goto B752e75;
case 0x752e7b:goto L752e7b;
case 0x752e81:c.instructions+=8;goto B752e81;
case 0x752e83:c.instructions+=7;goto B752e83;
case 0x752e84:c.instructions+=6;goto B752e84;
case 0x752e8a:c.instructions+=5;goto B752e8a;
case 0x752e90:c.instructions+=4;goto B752e90;
case 0x752e96:c.instructions+=3;goto B752e96;
case 0x752e98:c.instructions+=2;goto B752e98;
case 0x752e9a:c.instructions+=1;goto B752e9a;
case 0x752e9c:goto L752e9c;
case 0x752e9d:goto L752e9d;
case 0x752e9f:c.instructions+=1;goto B752e9f;
case 0x752ea1:goto L752ea1;
case 0x752ea7:c.instructions+=2;goto B752ea7;
case 0x752ead:c.instructions+=1;goto B752ead;
case 0x752eb2:goto L752eb2;
case 0x752eb3:c.instructions+=3;goto B752eb3;
case 0x752eb4:c.instructions+=2;goto B752eb4;
case 0x752eb5:c.instructions+=1;goto B752eb5;
case 0x752ec0:goto L752ec0;
case 0x752ec6:c.instructions+=11;goto B752ec6;
case 0x752ec7:c.instructions+=10;goto B752ec7;
case 0x752ec8:c.instructions+=9;goto B752ec8;
case 0x752ece:c.instructions+=8;goto B752ece;
case 0x752ed1:c.instructions+=7;goto B752ed1;
case 0x752ed2:c.instructions+=6;goto B752ed2;
case 0x752ed8:c.instructions+=5;goto B752ed8;
case 0x752ed9:c.instructions+=4;goto B752ed9;
case 0x752edb:c.instructions+=3;goto B752edb;
case 0x752ee1:c.instructions+=2;goto B752ee1;
case 0x752ee3:c.instructions+=1;goto B752ee3;
case 0x752ee5:goto L752ee5;
case 0x752ee9:c.instructions+=3;goto B752ee9;
case 0x752eec:c.instructions+=2;goto B752eec;
case 0x752eef:c.instructions+=1;goto B752eef;
case 0x752ef1:goto L752ef1;
case 0x752ef3:c.instructions+=10;goto B752ef3;
case 0x752ef5:c.instructions+=9;goto B752ef5;
case 0x752ef7:c.instructions+=8;goto B752ef7;
case 0x752ef8:c.instructions+=7;goto B752ef8;
case 0x752efa:c.instructions+=6;goto B752efa;
case 0x752efc:c.instructions+=5;goto B752efc;
case 0x752efe:c.instructions+=4;goto B752efe;
case 0x752eff:c.instructions+=3;goto B752eff;
case 0x752f01:c.instructions+=2;goto B752f01;
case 0x752f04:c.instructions+=1;goto B752f04;
case 0x752f06:goto L752f06;
case 0x752f07:c.instructions+=4;goto B752f07;
case 0x752f08:c.instructions+=3;goto B752f08;
case 0x752f0d:c.instructions+=2;goto B752f0d;
case 0x752f0e:c.instructions+=1;goto B752f0e;
case 0x752f0f:goto L752f0f;
case 0x752f15:c.instructions+=2;goto B752f15;
case 0x752f17:c.instructions+=1;goto B752f17;
case 0x752f19:goto L752f19;
case 0x752f1b:goto L752f1b;
case 0x752f22:c.instructions+=5;goto B752f22;
case 0x752f28:c.instructions+=4;goto B752f28;
case 0x752f2a:c.instructions+=3;goto B752f2a;
case 0x752f2d:c.instructions+=2;goto B752f2d;
case 0x752f33:c.instructions+=1;goto B752f33;
case 0x752f38:goto L752f38;
case 0x752f39:c.instructions+=4;goto B752f39;
case 0x752f3a:c.instructions+=3;goto B752f3a;
case 0x752f3d:c.instructions+=2;goto B752f3d;
case 0x752f3e:c.instructions+=1;goto B752f3e;
case 0x752f3f:goto L752f3f;
case 0x752f42:c.instructions+=1;goto B752f42;
case 0x752f44:goto L752f44;
case 0x752f45:c.instructions+=4;goto B752f45;
case 0x752f46:c.instructions+=3;goto B752f46;
case 0x752f48:c.instructions+=2;goto B752f48;
case 0x752f49:c.instructions+=1;goto B752f49;
case 0x752f4a:goto L752f4a;
case 0x752f50:c.instructions+=6;goto B752f50;
case 0x752f52:c.instructions+=5;goto B752f52;
case 0x752f54:c.instructions+=4;goto B752f54;
case 0x752f58:c.instructions+=3;goto B752f58;
case 0x752f5a:c.instructions+=2;goto B752f5a;
case 0x752f5d:c.instructions+=1;goto B752f5d;
case 0x752f5f:goto L752f5f;
case 0x752f61:goto L752f61;
case 0x752f63:c.instructions+=1;goto B752f63;
case 0x752f66:goto L752f66;
case 0x752f68:goto L752f68;
case 0x752f6e:c.instructions+=11;goto B752f6e;
case 0x752f74:c.instructions+=10;goto B752f74;
case 0x752f75:c.instructions+=9;goto B752f75;
case 0x752f7b:c.instructions+=8;goto B752f7b;
case 0x752f81:c.instructions+=7;goto B752f81;
case 0x752f83:c.instructions+=6;goto B752f83;
case 0x752f84:c.instructions+=5;goto B752f84;
case 0x752f8a:c.instructions+=4;goto B752f8a;
case 0x752f8e:c.instructions+=3;goto B752f8e;
case 0x752f94:c.instructions+=2;goto B752f94;
case 0x752f98:c.instructions+=1;goto B752f98;
case 0x752f9a:goto L752f9a;
case 0x752fa0:c.instructions+=6;goto B752fa0;
case 0x752fa6:c.instructions+=5;goto B752fa6;
case 0x752fa7:c.instructions+=4;goto B752fa7;
case 0x752fad:c.instructions+=3;goto B752fad;
case 0x752fb0:c.instructions+=2;goto B752fb0;
case 0x752fb2:c.instructions+=1;goto B752fb2;
case 0x752fb8:goto L752fb8;
case 0x752fbe:c.instructions+=5;goto B752fbe;
case 0x752fc1:c.instructions+=4;goto B752fc1;
case 0x752fc4:c.instructions+=3;goto B752fc4;
case 0x752fc6:c.instructions+=2;goto B752fc6;
case 0x752fcc:c.instructions+=1;goto B752fcc;
case 0x752fce:goto L752fce;
case 0x752fd1:c.instructions+=7;goto B752fd1;
case 0x752fd4:c.instructions+=6;goto B752fd4;
case 0x752fd5:c.instructions+=5;goto B752fd5;
case 0x752fd6:c.instructions+=4;goto B752fd6;
case 0x752fd9:c.instructions+=3;goto B752fd9;
case 0x752fda:c.instructions+=2;goto B752fda;
case 0x752fdb:c.instructions+=1;goto B752fdb;
case 0x752fdd:goto L752fdd;
case 0x752fe0:goto L752fe0;
case 0x752fe6:c.instructions+=7;goto B752fe6;
case 0x752fe7:c.instructions+=6;goto B752fe7;
case 0x752fe8:c.instructions+=5;goto B752fe8;
case 0x752fe9:c.instructions+=4;goto B752fe9;
case 0x752fef:c.instructions+=3;goto B752fef;
case 0x752ff4:c.instructions+=2;goto B752ff4;
case 0x752ff5:c.instructions+=1;goto B752ff5;
default:missing_instruction(c.pc);}
B752004:L752004:{c.instructions+=4;NFSU2_TR(0x752004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75200a:{NFSU2_TR(0x75200a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1388ull))));
}
B752010:{NFSU2_TR(0x752010);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752012:{NFSU2_TR(0x752012);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75201e;}}
}
B752014:L752014:{c.instructions+=2;NFSU2_TR(0x752014);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752016:{NFSU2_TR(0x752016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75201bull));
TAIL_STATIC(0x751b60u,751);
}
B75201b:L75201b:{c.instructions+=1;NFSU2_TR(0x75201b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75201e:L75201e:{c.instructions+=2;NFSU2_TR(0x75201e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752024:{NFSU2_TR(0x752024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752065;}}
}
B752026:L752026:{c.instructions+=3;NFSU2_TR(0x752026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75202c:{NFSU2_TR(0x75202c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752032:{NFSU2_TR(0x752032);
if(r1(R+518)){{goto L752065;}}
}
B752034:L752034:{c.instructions+=5;NFSU2_TR(0x752034);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752035:{NFSU2_TR(0x752035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75203b:{NFSU2_TR(0x75203b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B75203d:{NFSU2_TR(0x75203d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
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
B752040:{NFSU2_TR(0x752040);
if(r1(R+518)){{goto L752050;}}
}
B752042:L752042:{c.instructions+=1;NFSU2_TR(0x752042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752047ull));
TAIL_STATIC(0x74b730u,74b);
}
B752047:L752047:{c.instructions+=3;NFSU2_TR(0x752047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B752049:{NFSU2_TR(0x752049);
w1(R+512,u8((r4(R+0))<(u32(0xfaull))));
}
B75204e:{NFSU2_TR(0x75204e);
if(r1(R+512)){{goto L752064;}}
}
B752050:L752050:{c.instructions+=3;NFSU2_TR(0x752050);
__builtin_memmove((R+0),(R+12),4);
}
B752052:{NFSU2_TR(0x752052);
__builtin_memmove((R+28),(R+24),4);
}
B752054:{NFSU2_TR(0x752054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752059ull));
TAIL_STATIC(0x751b10u,751);
}
B752059:L752059:{c.instructions+=2;NFSU2_TR(0x752059);
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
B75205b:{NFSU2_TR(0x75205b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L752064;}}
}
B75205d:L75205d:{c.instructions+=1;NFSU2_TR(0x75205d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752062ull));
TAIL_STATIC(0x74b730u,74b);
}
B752062:L752062:{c.instructions+=1;NFSU2_TR(0x752062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B752064:L752064:{c.instructions+=1;NFSU2_TR(0x752064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752065:L752065:{c.instructions+=4;NFSU2_TR(0x752065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75206b:{NFSU2_TR(0x75206b);
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
B75206d:{NFSU2_TR(0x75206d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75206e:{NFSU2_TR(0x75206e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7520af;}}
}
B752070:L752070:{c.instructions+=3;NFSU2_TR(0x752070);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752076:{NFSU2_TR(0x752076);
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
B752078:{NFSU2_TR(0x752078);
if(r1(R+518)){{goto L7520af;}}
}
B75207a:L75207a:{c.instructions+=6;NFSU2_TR(0x75207a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752080:{NFSU2_TR(0x752080);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752086:{NFSU2_TR(0x752086);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B752087:{NFSU2_TR(0x752087);
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
B752089:{NFSU2_TR(0x752089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75208f:{NFSU2_TR(0x75208f);
if(r1(R+518)){{goto L752098;}}
}
B752091:L752091:{c.instructions+=3;NFSU2_TR(0x752091);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752092:{NFSU2_TR(0x752092);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752093:{NFSU2_TR(0x752093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752095ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B752095:L752095:{c.instructions+=1;NFSU2_TR(0x752095);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B752098:L752098:{c.instructions+=4;NFSU2_TR(0x752098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75209e:{NFSU2_TR(0x75209e);
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
B75209f:{NFSU2_TR(0x75209f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7520a5:{NFSU2_TR(0x7520a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7520af:L7520af:{c.instructions+=2;NFSU2_TR(0x7520af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7520b0:{NFSU2_TR(0x7520b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7520c0:L7520c0:{c.instructions+=6;NFSU2_TR(0x7520c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7520c1:{NFSU2_TR(0x7520c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7520c2:{NFSU2_TR(0x7520c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7520c6:{NFSU2_TR(0x7520c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7520cc:{NFSU2_TR(0x7520cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7520cd:{NFSU2_TR(0x7520cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7520d2ull));
TAIL_STATIC(0x74b790u,74b);
}
B7520d2:L7520d2:{c.instructions+=3;NFSU2_TR(0x7520d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7520d5:{NFSU2_TR(0x7520d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7520d7:{NFSU2_TR(0x7520d7);
if(r1(R+518)){{goto L7520e9;}}
}
B7520d9:L7520d9:{c.instructions+=2;NFSU2_TR(0x7520d9);
__builtin_memmove((R+0),(R+28),4);
}
B7520db:{NFSU2_TR(0x7520db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7520e0ull));
TAIL_STATIC(0x751fc0u,751);
}
B7520e0:L7520e0:{c.instructions+=2;NFSU2_TR(0x7520e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7520e1:{NFSU2_TR(0x7520e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7520e6ull));
TAIL_STATIC(0x74b870u,74b);
}
B7520e6:L7520e6:{c.instructions+=1;NFSU2_TR(0x7520e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7520e9:L7520e9:{c.instructions+=4;NFSU2_TR(0x7520e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7520ea:{NFSU2_TR(0x7520ea);
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
B7520ec:{NFSU2_TR(0x7520ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7520ed:{NFSU2_TR(0x7520ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7520f0:L7520f0:{c.instructions+=11;NFSU2_TR(0x7520f0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B7520f6:{NFSU2_TR(0x7520f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7520fc:{NFSU2_TR(0x7520fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752102:{NFSU2_TR(0x752102);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B752104:{NFSU2_TR(0x752104);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752105:{NFSU2_TR(0x752105);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752105);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752105);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B75210b:{NFSU2_TR(0x75210b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75210c:{NFSU2_TR(0x75210c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752112:{NFSU2_TR(0x752112);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752113:{NFSU2_TR(0x752113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752119:{NFSU2_TR(0x752119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75211eull));
TAIL_STATIC(0x74b790u,74b);
}
B75211e:L75211e:{c.instructions+=3;NFSU2_TR(0x75211e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752121:{NFSU2_TR(0x752121);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752123:{NFSU2_TR(0x752123);
if(r1(R+518)){{goto L752135;}}
}
B752125:L752125:{c.instructions+=2;NFSU2_TR(0x752125);
__builtin_memmove((R+0),(R+24),4);
}
B752127:{NFSU2_TR(0x752127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75212cull));
TAIL_STATIC(0x751fc0u,751);
}
B75212c:L75212c:{c.instructions+=2;NFSU2_TR(0x75212c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75212d:{NFSU2_TR(0x75212d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752132ull));
TAIL_STATIC(0x74b870u,74b);
}
B752132:L752132:{c.instructions+=1;NFSU2_TR(0x752132);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752135:L752135:{c.instructions+=12;NFSU2_TR(0x752135);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75213b:{NFSU2_TR(0x75213b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752141:{NFSU2_TR(0x752141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752147:{NFSU2_TR(0x752147);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B752149:{NFSU2_TR(0x752149);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75214b:{NFSU2_TR(0x75214b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75214c:{NFSU2_TR(0x75214c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75214c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75214c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75214e:{NFSU2_TR(0x75214e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75214f:{NFSU2_TR(0x75214f);
__builtin_memmove((R+0),(R+8),4);
}
B752151:{NFSU2_TR(0x752151);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752152:{NFSU2_TR(0x752152);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752152);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752152);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752158:{NFSU2_TR(0x752158);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752160:L752160:{c.instructions+=4;NFSU2_TR(0x752160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752161:{NFSU2_TR(0x752161);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752165:{NFSU2_TR(0x752165);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75216c:{NFSU2_TR(0x75216c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75218c;}}
}
B75216e:L75216e:{c.instructions+=2;NFSU2_TR(0x75216e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752170:{NFSU2_TR(0x752170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752175ull));
TAIL_STATIC(0x751b60u,751);
}
B752175:L752175:{c.instructions+=3;NFSU2_TR(0x752175);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752178:{NFSU2_TR(0x752178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752182:{NFSU2_TR(0x752182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75218c:L75218c:{c.instructions+=3;NFSU2_TR(0x75218c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75218f:{NFSU2_TR(0x75218f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752191:{NFSU2_TR(0x752191);
if(r1(R+518)){{goto L7521a3;}}
}
B752193:L752193:{c.instructions+=2;NFSU2_TR(0x752193);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752194:{NFSU2_TR(0x752194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752199ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B752199:L752199:{c.instructions+=2;NFSU2_TR(0x752199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75219c:{NFSU2_TR(0x75219c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7521a3:L7521a3:{c.instructions+=3;NFSU2_TR(0x7521a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7521a9:{NFSU2_TR(0x7521a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7521aa:{NFSU2_TR(0x7521aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7521afull));
TAIL_STATIC(0x74b770u,74b);
}
B7521af:L7521af:{c.instructions+=3;NFSU2_TR(0x7521af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7521b5:{NFSU2_TR(0x7521b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7521b6:{NFSU2_TR(0x7521b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7521bbull));
TAIL_STATIC(0x598ec0u,598);
}
B7521bb:L7521bb:{c.instructions+=3;NFSU2_TR(0x7521bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7521c1:{NFSU2_TR(0x7521c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7521c2:{NFSU2_TR(0x7521c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7521c7ull));
TAIL_STATIC(0x598ec0u,598);
}
B7521c7:L7521c7:{c.instructions+=2;NFSU2_TR(0x7521c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7521c8:{NFSU2_TR(0x7521c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7521cdull));
TAIL_STATIC(0x598ec0u,598);
}
B7521cd:L7521cd:{c.instructions+=3;NFSU2_TR(0x7521cd);
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
B7521d0:{NFSU2_TR(0x7521d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7521d1:{NFSU2_TR(0x7521d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7521e0:L7521e0:{c.instructions+=5;NFSU2_TR(0x7521e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7521e4:{NFSU2_TR(0x7521e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7521e8:{NFSU2_TR(0x7521e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7521ee:{NFSU2_TR(0x7521ee);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
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
B7521f5:{NFSU2_TR(0x7521f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752200:L752200:{c.instructions+=2;NFSU2_TR(0x752200);
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
B752203:{NFSU2_TR(0x752203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752210:L752210:{c.instructions+=5;NFSU2_TR(0x752210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752211:{NFSU2_TR(0x752211);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752215:{NFSU2_TR(0x752215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752218:{NFSU2_TR(0x752218);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75221a:{NFSU2_TR(0x75221a);
if(r1(R+518)){{goto L752225;}}
}
B75221c:L75221c:{c.instructions+=2;NFSU2_TR(0x75221c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75221d:{NFSU2_TR(0x75221d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752222ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B752222:L752222:{c.instructions+=1;NFSU2_TR(0x752222);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752225:L752225:{c.instructions+=5;NFSU2_TR(0x752225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75222c:{NFSU2_TR(0x75222c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752236:{NFSU2_TR(0x752236);
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
B752238:{NFSU2_TR(0x752238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752239:{NFSU2_TR(0x752239);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752240:L752240:{c.instructions+=4;NFSU2_TR(0x752240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752244:{NFSU2_TR(0x752244);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75224a:{NFSU2_TR(0x75224a);
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
B75224d:{NFSU2_TR(0x75224d);
if(r1(R+518)){{goto L752271;}}
}
B75224f:L75224f:{c.instructions+=2;NFSU2_TR(0x75224f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B752252:{NFSU2_TR(0x752252);
if(r1(R+518)){{goto L752271;}}
}
B752254:L752254:{c.instructions+=2;NFSU2_TR(0x752254);
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
B752256:{NFSU2_TR(0x752256);
if(r1(R+518)){{goto L75226b;}}
}
B752258:L752258:{c.instructions+=2;NFSU2_TR(0x752258);
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
B75225b:{NFSU2_TR(0x75225b);
if(r1(R+518)){{goto L75226b;}}
}
B75225d:L75225d:{c.instructions+=6;NFSU2_TR(0x75225d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75225f:{NFSU2_TR(0x75225f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752262:{NFSU2_TR(0x752262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B752265:{NFSU2_TR(0x752265);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752268:{NFSU2_TR(0x752268);
__builtin_memmove((R+0),(R+4),4);
}
B75226a:{NFSU2_TR(0x75226a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75226b:L75226b:{c.instructions+=2;NFSU2_TR(0x75226b);
w4(R+0,u32(0x1ull));
}
B752270:{NFSU2_TR(0x752270);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752271:L752271:{c.instructions+=2;NFSU2_TR(0x752271);
w4(R+0,u32(0x2ull));
}
B752276:{NFSU2_TR(0x752276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752280:L752280:{c.instructions+=4;NFSU2_TR(0x752280);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752281:{NFSU2_TR(0x752281);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B752285:{NFSU2_TR(0x752285);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
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
B75228c:{NFSU2_TR(0x75228c);
if(r1(R+518)){{goto L752295;}}
}
B75228e:L75228e:{c.instructions+=3;NFSU2_TR(0x75228e);
w4(R+0,u32(0xfffffffeull));
}
B752293:{NFSU2_TR(0x752293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752294:{NFSU2_TR(0x752294);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752295:L752295:{c.instructions+=13;NFSU2_TR(0x752295);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752296:{NFSU2_TR(0x752296);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75229c:{NFSU2_TR(0x75229c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75229d:{NFSU2_TR(0x75229d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7522a3:{NFSU2_TR(0x7522a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7522a6:{NFSU2_TR(0x7522a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7522a7:{NFSU2_TR(0x7522a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7522ad:{NFSU2_TR(0x7522ad);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7522ae:{NFSU2_TR(0x7522ae);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522ae);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522ae);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7522b0:{NFSU2_TR(0x7522b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7522b6:{NFSU2_TR(0x7522b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7522ba:{NFSU2_TR(0x7522ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7522bc:{NFSU2_TR(0x7522bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7522c5;}}
}
B7522be:L7522be:{c.instructions+=6;NFSU2_TR(0x7522be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7522bf:{NFSU2_TR(0x7522bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7522c0:{NFSU2_TR(0x7522c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7522c1:{NFSU2_TR(0x7522c1);
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
B7522c3:{NFSU2_TR(0x7522c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7522c4:{NFSU2_TR(0x7522c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7522c5:L7522c5:{c.instructions+=4;NFSU2_TR(0x7522c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7522c9:{NFSU2_TR(0x7522c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7522cc:{NFSU2_TR(0x7522cc);
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
B7522ce:{NFSU2_TR(0x7522ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7522da;}}
}
B7522d0:L7522d0:{c.instructions+=6;NFSU2_TR(0x7522d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7522d1:{NFSU2_TR(0x7522d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7522d2:{NFSU2_TR(0x7522d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7522d3:{NFSU2_TR(0x7522d3);
w4(R+0,u32(0xfffffffaull));
}
B7522d8:{NFSU2_TR(0x7522d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7522d9:{NFSU2_TR(0x7522d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7522da:L7522da:{c.instructions+=2;NFSU2_TR(0x7522da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7522dc:{NFSU2_TR(0x7522dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7522f6;}}
}
B7522de:L7522de:{c.instructions+=15;NFSU2_TR(0x7522de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7522e2:{NFSU2_TR(0x7522e2);
__builtin_memmove((R+0),(R+28),4);
}
B7522e4:{NFSU2_TR(0x7522e4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B7522e6:{NFSU2_TR(0x7522e6);
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7522e8:{NFSU2_TR(0x7522e8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7522e9:{NFSU2_TR(0x7522e9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522e9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522e9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7522eb:{NFSU2_TR(0x7522eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7522ec:{NFSU2_TR(0x7522ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7522ed:{NFSU2_TR(0x7522ed);
__builtin_memmove((R+0),(R+8),4);
}
B7522ef:{NFSU2_TR(0x7522ef);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7522f0:{NFSU2_TR(0x7522f0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522f0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7522f0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7522f2:{NFSU2_TR(0x7522f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7522f3:{NFSU2_TR(0x7522f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7522f4:{NFSU2_TR(0x7522f4);
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
B7522f5:{NFSU2_TR(0x7522f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7522f6:L7522f6:{c.instructions+=7;NFSU2_TR(0x7522f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7522fc:{NFSU2_TR(0x7522fc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B7522fe:{NFSU2_TR(0x7522fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752302:{NFSU2_TR(0x752302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752305:{NFSU2_TR(0x752305);
__builtin_memmove((R+8),(R+4),4);
}
B752307:{NFSU2_TR(0x752307);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75230a:{NFSU2_TR(0x75230a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75230d:L75230d:{c.instructions+=1;NFSU2_TR(0x75230d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75230f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75230du);}goto L75230d;}
}
B75230f:L75230f:{c.instructions+=2;NFSU2_TR(0x75230f);
__builtin_memmove((R+4),(R+8),4);
}
B752311:{NFSU2_TR(0x752311);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B752314:L752314:{c.instructions+=1;NFSU2_TR(0x752314);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L752316;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752314u);}goto L752314;}
}
B752316:L752316:{c.instructions+=2;NFSU2_TR(0x752316);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75231b:{NFSU2_TR(0x75231b);
if(r1(R+518)){{goto L75234a;}}
}
B75231d:L75231d:{c.instructions+=9;NFSU2_TR(0x75231d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B752323:{NFSU2_TR(0x752323);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x40ull))));
}
B752326:{NFSU2_TR(0x752326);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752329:{NFSU2_TR(0x752329);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75232f:{NFSU2_TR(0x75232f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B752330:{NFSU2_TR(0x752330);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B752333:{NFSU2_TR(0x752333);
__builtin_memmove((R+28),(R+12),4);
}
B752335:{NFSU2_TR(0x752335);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75233b:{NFSU2_TR(0x75233b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752340ull));
TAIL_STATIC(0x751b10u,751);
}
B752340:L752340:{c.instructions+=6;NFSU2_TR(0x752340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752341:{NFSU2_TR(0x752341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752342:{NFSU2_TR(0x752342);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752343:{NFSU2_TR(0x752343);
w4(R+0,u32(0x1ull));
}
B752348:{NFSU2_TR(0x752348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752349:{NFSU2_TR(0x752349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75234a:L75234a:{c.instructions+=9;NFSU2_TR(0x75234a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B752350:{NFSU2_TR(0x752350);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x80ull))));
}
B752353:{NFSU2_TR(0x752353);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752356:{NFSU2_TR(0x752356);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75235c:{NFSU2_TR(0x75235c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75235d:{NFSU2_TR(0x75235d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B752360:{NFSU2_TR(0x752360);
__builtin_memmove((R+24),(R+12),4);
}
B752362:{NFSU2_TR(0x752362);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752368:{NFSU2_TR(0x752368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75236dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7520f0u);}goto L7520f0;}
}
B75236d:L75236d:{c.instructions+=2;NFSU2_TR(0x75236d);
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
B75236f:{NFSU2_TR(0x75236f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L752376;}}
}
B752371:L752371:{c.instructions+=1;NFSU2_TR(0x752371);
w4(R+0,u32(0x1ull));
}
B752376:L752376:{c.instructions+=5;NFSU2_TR(0x752376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752377:{NFSU2_TR(0x752377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752378:{NFSU2_TR(0x752378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752379:{NFSU2_TR(0x752379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75237a:{NFSU2_TR(0x75237a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752380:L752380:{c.instructions+=6;NFSU2_TR(0x752380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752381:{NFSU2_TR(0x752381);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752385:{NFSU2_TR(0x752385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75238b:{NFSU2_TR(0x75238b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752391:{NFSU2_TR(0x752391);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752392:{NFSU2_TR(0x752392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7523b7;}}
}
B752394:L752394:{c.instructions+=3;NFSU2_TR(0x752394);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75239a:{NFSU2_TR(0x75239a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75239b:{NFSU2_TR(0x75239b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7523a0ull));
TAIL_STATIC(0x74b790u,74b);
}
B7523a0:L7523a0:{c.instructions+=3;NFSU2_TR(0x7523a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7523a3:{NFSU2_TR(0x7523a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7523a5:{NFSU2_TR(0x7523a5);
if(r1(R+518)){{goto L7523b7;}}
}
B7523a7:L7523a7:{c.instructions+=2;NFSU2_TR(0x7523a7);
__builtin_memmove((R+0),(R+24),4);
}
B7523a9:{NFSU2_TR(0x7523a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7523aeull));
TAIL_STATIC(0x751fc0u,751);
}
B7523ae:L7523ae:{c.instructions+=2;NFSU2_TR(0x7523ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7523af:{NFSU2_TR(0x7523af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7523b4ull));
TAIL_STATIC(0x74b870u,74b);
}
B7523b4:L7523b4:{c.instructions+=1;NFSU2_TR(0x7523b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7523b7:L7523b7:{c.instructions+=3;NFSU2_TR(0x7523b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7523bd:{NFSU2_TR(0x7523bd);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
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
B7523c3:{NFSU2_TR(0x7523c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7523cd;}}
}
B7523c5:L7523c5:{c.instructions+=4;NFSU2_TR(0x7523c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7523c6:{NFSU2_TR(0x7523c6);
w4(R+0,u32(0xfffffff9ull));
}
B7523cb:{NFSU2_TR(0x7523cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7523cc:{NFSU2_TR(0x7523cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7523cd:L7523cd:{c.instructions+=7;NFSU2_TR(0x7523cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7523d3:{NFSU2_TR(0x7523d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7523d7:{NFSU2_TR(0x7523d7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7523d9:{NFSU2_TR(0x7523d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7523dc:{NFSU2_TR(0x7523dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7523dd:{NFSU2_TR(0x7523dd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7523df:{NFSU2_TR(0x7523df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7523e3;}}
}
B7523e1:L7523e1:{c.instructions+=1;NFSU2_TR(0x7523e1);
__builtin_memmove((R+4),(R+0),4);
}
B7523e3:L7523e3:{c.instructions+=5;NFSU2_TR(0x7523e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7523e7:{NFSU2_TR(0x7523e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7523e8:{NFSU2_TR(0x7523e8);
__builtin_memmove((R+12),(R+4),4);
}
B7523ea:{NFSU2_TR(0x7523ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7523ed:{NFSU2_TR(0x7523ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7523f0:L7523f0:{c.instructions+=1;NFSU2_TR(0x7523f0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7523f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7523f0u);}goto L7523f0;}
}
B7523f2:L7523f2:{c.instructions+=2;NFSU2_TR(0x7523f2);
__builtin_memmove((R+4),(R+12),4);
}
B7523f4:{NFSU2_TR(0x7523f4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7523f7:L7523f7:{c.instructions+=1;NFSU2_TR(0x7523f7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7523f9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7523f7u);}goto L7523f7;}
}
B7523f9:L7523f9:{c.instructions+=4;NFSU2_TR(0x7523f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7523fd:{NFSU2_TR(0x7523fd);
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
B7523ff:{NFSU2_TR(0x7523ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752400:{NFSU2_TR(0x752400);
if(r1(R+518)){{goto L752406;}}
}
B752402:L752402:{c.instructions+=2;NFSU2_TR(0x752402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B752404:{NFSU2_TR(0x752404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B752406:L752406:{c.instructions+=3;NFSU2_TR(0x752406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752407:{NFSU2_TR(0x752407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752408:{NFSU2_TR(0x752408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752410:L752410:{c.instructions+=10;NFSU2_TR(0x752410);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752414:{NFSU2_TR(0x752414);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752418:{NFSU2_TR(0x752418);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75241c:{NFSU2_TR(0x75241c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75241d:{NFSU2_TR(0x75241d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752421:{NFSU2_TR(0x752421);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752422:{NFSU2_TR(0x752422);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752423:{NFSU2_TR(0x752423);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752424:{NFSU2_TR(0x752424);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752425:{NFSU2_TR(0x752425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75242aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752380u);}goto L752380;}
}
B75242a:L75242a:{c.instructions+=4;NFSU2_TR(0x75242a);
__builtin_memmove((R+4),(R+0),4);
}
B75242c:{NFSU2_TR(0x75242c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75242f:{NFSU2_TR(0x75242f);
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
B752431:{NFSU2_TR(0x752431);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75244e;}}
}
B752433:L752433:{c.instructions+=6;NFSU2_TR(0x752433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752439:{NFSU2_TR(0x752439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75243f:{NFSU2_TR(0x75243f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752441:{NFSU2_TR(0x752441);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752442:{NFSU2_TR(0x752442);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752442);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752442);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752448:{NFSU2_TR(0x752448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75244e:L75244e:{c.instructions+=3;NFSU2_TR(0x75244e);
__builtin_memmove((R+0),(R+4),4);
}
B752450:{NFSU2_TR(0x752450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752451:{NFSU2_TR(0x752451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752460:L752460:{c.instructions+=10;NFSU2_TR(0x752460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B752463:{NFSU2_TR(0x752463);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B752468:{NFSU2_TR(0x752468);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752469:{NFSU2_TR(0x752469);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75246d:{NFSU2_TR(0x75246d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752471:{NFSU2_TR(0x752471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752477:{NFSU2_TR(0x752477);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752478:{NFSU2_TR(0x752478);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75247a:{NFSU2_TR(0x75247a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75247c:{NFSU2_TR(0x75247c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7525da;}}
}
B752482:L752482:{c.instructions+=2;NFSU2_TR(0x752482);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752485:{NFSU2_TR(0x752485);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7525da;}}
}
B75248b:L75248b:{c.instructions+=14;NFSU2_TR(0x75248b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75248f:{NFSU2_TR(0x75248f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752490:{NFSU2_TR(0x752490);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B752494:{NFSU2_TR(0x752494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752495:{NFSU2_TR(0x752495);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B752499:{NFSU2_TR(0x752499);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75249a:{NFSU2_TR(0x75249a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75249e:{NFSU2_TR(0x75249e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75249f:{NFSU2_TR(0x75249f);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B7524a6:{NFSU2_TR(0x7524a6);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7524ab:{NFSU2_TR(0x7524ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7524af:{NFSU2_TR(0x7524af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7524b3:{NFSU2_TR(0x7524b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7524b7:{NFSU2_TR(0x7524b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7524bcull));
TAIL_STATIC(0x7431e0u,743);
}
B7524bc:L7524bc:{c.instructions+=3;NFSU2_TR(0x7524bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7524bf:{NFSU2_TR(0x7524bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7524c1:{NFSU2_TR(0x7524c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7524d7;}}
}
B7524c3:L7524c3:{c.instructions+=5;NFSU2_TR(0x7524c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7524c4:{NFSU2_TR(0x7524c4);
w4(R+0,u32(0xfffffffdull));
}
B7524c9:{NFSU2_TR(0x7524c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7524ca:{NFSU2_TR(0x7524ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7524ce:{NFSU2_TR(0x7524ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7524d3ull));
TAIL_STATIC(0x76115eu,761);
}
B7524d3:L7524d3:{c.instructions+=2;NFSU2_TR(0x7524d3);
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
B7524d6:{NFSU2_TR(0x7524d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7524d7:L7524d7:{c.instructions+=6;NFSU2_TR(0x7524d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7524db:{NFSU2_TR(0x7524db);
__builtin_memmove((R+4),(R+0),4);
}
B7524dd:{NFSU2_TR(0x7524dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B7524e0:{NFSU2_TR(0x7524e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7524e4:{NFSU2_TR(0x7524e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7524e8:{NFSU2_TR(0x7524e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7524edull));
TAIL_STATIC(0x751ad0u,751);
}
B7524ed:L7524ed:{c.instructions+=4;NFSU2_TR(0x7524ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7524ee:{NFSU2_TR(0x7524ee);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7524f0:{NFSU2_TR(0x7524f0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7524f2:{NFSU2_TR(0x7524f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7524f7ull));
TAIL_STATIC(0x74a220u,74a);
}
B7524f7:L7524f7:{c.instructions+=4;NFSU2_TR(0x7524f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7524fa:{NFSU2_TR(0x7524fa);
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
B7524fc:{NFSU2_TR(0x7524fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7524ff:{NFSU2_TR(0x7524ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752515;}}
}
B752501:L752501:{c.instructions+=5;NFSU2_TR(0x752501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752502:{NFSU2_TR(0x752502);
w4(R+0,u32(0xfffffffcull));
}
B752507:{NFSU2_TR(0x752507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752508:{NFSU2_TR(0x752508);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75250c:{NFSU2_TR(0x75250c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752511ull));
TAIL_STATIC(0x76115eu,761);
}
B752511:L752511:{c.instructions+=2;NFSU2_TR(0x752511);
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
B752514:{NFSU2_TR(0x752514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752515:L752515:{c.instructions+=5;NFSU2_TR(0x752515);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752517:{NFSU2_TR(0x752517);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75251b:{NFSU2_TR(0x75251b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75251c:{NFSU2_TR(0x75251c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75251d:{NFSU2_TR(0x75251d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752522ull));
TAIL_STATIC(0x74a380u,74a);
}
B752522:L752522:{c.instructions+=3;NFSU2_TR(0x752522);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B752525:{NFSU2_TR(0x752525);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B752527:{NFSU2_TR(0x752527);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75254c;}}
}
B752529:L752529:{c.instructions+=3;NFSU2_TR(0x752529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75252c:{NFSU2_TR(0x75252c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75252d:{NFSU2_TR(0x75252d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752532ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B752532:L752532:{c.instructions+=7;NFSU2_TR(0x752532);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752535:{NFSU2_TR(0x752535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752538:{NFSU2_TR(0x752538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752539:{NFSU2_TR(0x752539);
w4(R+0,u32(0xfffffffbull));
}
B75253e:{NFSU2_TR(0x75253e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75253f:{NFSU2_TR(0x75253f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752543:{NFSU2_TR(0x752543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752548ull));
TAIL_STATIC(0x76115eu,761);
}
B752548:L752548:{c.instructions+=2;NFSU2_TR(0x752548);
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
B75254b:{NFSU2_TR(0x75254b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75254c:L75254c:{c.instructions+=7;NFSU2_TR(0x75254c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75254f:{NFSU2_TR(0x75254f);
u8 U[4];
w4(U+0,u32(0x7520c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752554:{NFSU2_TR(0x752554);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752555:{NFSU2_TR(0x752555);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752557:{NFSU2_TR(0x752557);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752559:{NFSU2_TR(0x752559);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75255a:{NFSU2_TR(0x75255a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75255full));
TAIL_STATIC(0x74a960u,74a);
}
B75255f:L75255f:{c.instructions+=4;NFSU2_TR(0x75255f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752563:{NFSU2_TR(0x752563);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B752566:{NFSU2_TR(0x752566);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752568:{NFSU2_TR(0x752568);
if(r1(R+518)){{goto L7525bf;}}
}
B75256a:L75256a:{c.instructions+=3;NFSU2_TR(0x75256a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75256e:{NFSU2_TR(0x75256e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752570:{NFSU2_TR(0x752570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752577;}}
}
B752572:L752572:{c.instructions+=2;NFSU2_TR(0x752572);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752576:{NFSU2_TR(0x752576);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752577:L752577:{c.instructions+=16;NFSU2_TR(0x752577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75257d:{NFSU2_TR(0x75257d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752583:{NFSU2_TR(0x752583);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B752586:{NFSU2_TR(0x752586);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75258c:{NFSU2_TR(0x75258c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75258f:{NFSU2_TR(0x75258f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752595:{NFSU2_TR(0x752595);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B752598:{NFSU2_TR(0x752598);
__builtin_memmove((R+8),(R+4),4);
}
B75259a:{NFSU2_TR(0x75259a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75259e:{NFSU2_TR(0x75259e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7525a1:{NFSU2_TR(0x7525a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B7525a7:{NFSU2_TR(0x7525a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7525ad:{NFSU2_TR(0x7525ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7525b3:{NFSU2_TR(0x7525b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7525b9:{NFSU2_TR(0x7525b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7525bc:{NFSU2_TR(0x7525bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7525bf:L7525bf:{c.instructions+=6;NFSU2_TR(0x7525bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7525c0:{NFSU2_TR(0x7525c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7525ca:{NFSU2_TR(0x7525ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7525cc:{NFSU2_TR(0x7525cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7525cd:{NFSU2_TR(0x7525cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7525d1:{NFSU2_TR(0x7525d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7525d6ull));
TAIL_STATIC(0x76115eu,761);
}
B7525d6:L7525d6:{c.instructions+=2;NFSU2_TR(0x7525d6);
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
B7525d9:{NFSU2_TR(0x7525d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7525da:L7525da:{c.instructions+=5;NFSU2_TR(0x7525da);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7525de:{NFSU2_TR(0x7525de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7525df:{NFSU2_TR(0x7525df);
w4(R+0,u32(0xfffffffeull));
}
B7525e4:{NFSU2_TR(0x7525e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7525e5:{NFSU2_TR(0x7525e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7525eaull));
TAIL_STATIC(0x76115eu,761);
}
B7525ea:L7525ea:{c.instructions+=2;NFSU2_TR(0x7525ea);
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
B7525ed:{NFSU2_TR(0x7525ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7525f0:L7525f0:{c.instructions+=10;NFSU2_TR(0x7525f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B7525f3:{NFSU2_TR(0x7525f3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7525f8:{NFSU2_TR(0x7525f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7525f9:{NFSU2_TR(0x7525f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7525fd:{NFSU2_TR(0x7525fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752601:{NFSU2_TR(0x752601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752607:{NFSU2_TR(0x752607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752608:{NFSU2_TR(0x752608);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75260a:{NFSU2_TR(0x75260a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75260c:{NFSU2_TR(0x75260c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752764;}}
}
B752612:L752612:{c.instructions+=2;NFSU2_TR(0x752612);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752615:{NFSU2_TR(0x752615);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752764;}}
}
B75261b:L75261b:{c.instructions+=9;NFSU2_TR(0x75261b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75261f:{NFSU2_TR(0x75261f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752620:{NFSU2_TR(0x752620);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B752624:{NFSU2_TR(0x752624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752625:{NFSU2_TR(0x752625);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B752629:{NFSU2_TR(0x752629);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75262a:{NFSU2_TR(0x75262a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75262e:{NFSU2_TR(0x75262e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75262f:{NFSU2_TR(0x75262f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752634ull));
TAIL_STATIC(0x7431e0u,743);
}
B752634:L752634:{c.instructions+=4;NFSU2_TR(0x752634);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B752637:{NFSU2_TR(0x752637);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75263a:{NFSU2_TR(0x75263a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75263c:{NFSU2_TR(0x75263c);
if(r1(R+518)){{goto L752652;}}
}
B75263e:L75263e:{c.instructions+=5;NFSU2_TR(0x75263e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75263f:{NFSU2_TR(0x75263f);
w4(R+0,u32(0xfffffffdull));
}
B752644:{NFSU2_TR(0x752644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752645:{NFSU2_TR(0x752645);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752649:{NFSU2_TR(0x752649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75264eull));
TAIL_STATIC(0x76115eu,761);
}
B75264e:L75264e:{c.instructions+=2;NFSU2_TR(0x75264e);
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
B752651:{NFSU2_TR(0x752651);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752652:L752652:{c.instructions+=2;NFSU2_TR(0x752652);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752656:{NFSU2_TR(0x752656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752665;}}
}
B752658:L752658:{c.instructions+=4;NFSU2_TR(0x752658);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75265c:{NFSU2_TR(0x75265c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752660:{NFSU2_TR(0x752660);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B752661:{NFSU2_TR(0x752661);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752665:L752665:{c.instructions+=1;NFSU2_TR(0x752665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75266aull));
TAIL_STATIC(0x751ad0u,751);
}
B75266a:L75266a:{c.instructions+=4;NFSU2_TR(0x75266a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75266b:{NFSU2_TR(0x75266b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75266d:{NFSU2_TR(0x75266d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75266f:{NFSU2_TR(0x75266f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752674ull));
TAIL_STATIC(0x74a220u,74a);
}
B752674:L752674:{c.instructions+=4;NFSU2_TR(0x752674);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B752677:{NFSU2_TR(0x752677);
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
B752679:{NFSU2_TR(0x752679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75267c:{NFSU2_TR(0x75267c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752692;}}
}
B75267e:L75267e:{c.instructions+=5;NFSU2_TR(0x75267e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75267f:{NFSU2_TR(0x75267f);
w4(R+0,u32(0xfffffffcull));
}
B752684:{NFSU2_TR(0x752684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752685:{NFSU2_TR(0x752685);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752689:{NFSU2_TR(0x752689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75268eull));
TAIL_STATIC(0x76115eu,761);
}
B75268e:L75268e:{c.instructions+=2;NFSU2_TR(0x75268e);
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
B752691:{NFSU2_TR(0x752691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752692:L752692:{c.instructions+=15;NFSU2_TR(0x752692);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752696:{NFSU2_TR(0x752696);
u8 U[6];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75269b:{NFSU2_TR(0x75269b);
__builtin_memmove((R+8),(R+4),4);
}
B75269d:{NFSU2_TR(0x75269d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7526a1:{NFSU2_TR(0x7526a1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7526a3:{NFSU2_TR(0x7526a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7526a7:{NFSU2_TR(0x7526a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7526a8:{NFSU2_TR(0x7526a8);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7526ab:{NFSU2_TR(0x7526ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7526ac:{NFSU2_TR(0x7526ac);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B7526b3:{NFSU2_TR(0x7526b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7526b7:{NFSU2_TR(0x7526b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7526bb:{NFSU2_TR(0x7526bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7526bf:{NFSU2_TR(0x7526bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7526c3:{NFSU2_TR(0x7526c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7526c8ull));
TAIL_STATIC(0x74a380u,74a);
}
B7526c8:L7526c8:{c.instructions+=3;NFSU2_TR(0x7526c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7526cb:{NFSU2_TR(0x7526cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7526cd:{NFSU2_TR(0x7526cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7526e3;}}
}
B7526cf:L7526cf:{c.instructions+=5;NFSU2_TR(0x7526cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7526d0:{NFSU2_TR(0x7526d0);
w4(R+0,u32(0xfffffffbull));
}
B7526d5:{NFSU2_TR(0x7526d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7526d6:{NFSU2_TR(0x7526d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7526da:{NFSU2_TR(0x7526da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7526dfull));
TAIL_STATIC(0x76115eu,761);
}
B7526df:L7526df:{c.instructions+=2;NFSU2_TR(0x7526df);
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
B7526e2:{NFSU2_TR(0x7526e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7526e3:L7526e3:{c.instructions+=25;NFSU2_TR(0x7526e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7526e7:{NFSU2_TR(0x7526e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7526ed:{NFSU2_TR(0x7526ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7526f3:{NFSU2_TR(0x7526f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7526f6:{NFSU2_TR(0x7526f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7526fc:{NFSU2_TR(0x7526fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7526ff:{NFSU2_TR(0x7526ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752705:{NFSU2_TR(0x752705);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B752708:{NFSU2_TR(0x752708);
u8 U[4];
w4(U+0,u32(0x7520c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75270d:{NFSU2_TR(0x75270d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752713:{NFSU2_TR(0x752713);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752717:{NFSU2_TR(0x752717);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752718:{NFSU2_TR(0x752718);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75271c:{NFSU2_TR(0x75271c);
__builtin_memmove((R+8),(R+0),4);
}
B75271e:{NFSU2_TR(0x75271e);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752720:{NFSU2_TR(0x752720);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752723:{NFSU2_TR(0x752723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752726:{NFSU2_TR(0x752726);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B752729:{NFSU2_TR(0x752729);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75272b:{NFSU2_TR(0x75272b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75272c:{NFSU2_TR(0x75272c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B752732:{NFSU2_TR(0x752732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752738:{NFSU2_TR(0x752738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75273e:{NFSU2_TR(0x75273e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B752741:{NFSU2_TR(0x752741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752746ull));
TAIL_STATIC(0x74a960u,74a);
}
B752746:L752746:{c.instructions+=7;NFSU2_TR(0x752746);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B752749:{NFSU2_TR(0x752749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75274a:{NFSU2_TR(0x75274a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752754:{NFSU2_TR(0x752754);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B752756:{NFSU2_TR(0x752756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752757:{NFSU2_TR(0x752757);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75275b:{NFSU2_TR(0x75275b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752760ull));
TAIL_STATIC(0x76115eu,761);
}
B752760:L752760:{c.instructions+=2;NFSU2_TR(0x752760);
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
B752763:{NFSU2_TR(0x752763);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752764:L752764:{c.instructions+=5;NFSU2_TR(0x752764);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752768:{NFSU2_TR(0x752768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752769:{NFSU2_TR(0x752769);
w4(R+0,u32(0xfffffffeull));
}
B75276e:{NFSU2_TR(0x75276e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75276f:{NFSU2_TR(0x75276f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752774ull));
TAIL_STATIC(0x76115eu,761);
}
B752774:L752774:{c.instructions+=2;NFSU2_TR(0x752774);
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
B752777:{NFSU2_TR(0x752777);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752780:L752780:{c.instructions+=3;NFSU2_TR(0x752780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752781:{NFSU2_TR(0x752781);
u8 U[4];
w4(U+0,u32(0x218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752786:{NFSU2_TR(0x752786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75278bull));
TAIL_STATIC(0x5832f0u,583);
}
B75278b:L75278b:{c.instructions+=5;NFSU2_TR(0x75278b);
__builtin_memmove((R+24),(R+0),4);
}
B75278d:{NFSU2_TR(0x75278d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752790:{NFSU2_TR(0x752790);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B752792:{NFSU2_TR(0x752792);
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
B752794:{NFSU2_TR(0x752794);
if(r1(R+518)){{goto L752897;}}
}
B75279a:L75279a:{c.instructions+=4;NFSU2_TR(0x75279a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75279b:{NFSU2_TR(0x75279b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75279c:{NFSU2_TR(0x75279c);
w4(R+4,u32(0x86ull));
}
B7527a1:{NFSU2_TR(0x7527a1);
__builtin_memmove((R+28),(R+24),4);
}
B7527a3:L7527a3:{c.instructions+=1;NFSU2_TR(0x7527a3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7527a5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7527a3u);}goto L7527a3;}
}
B7527a5:L7527a5:{c.instructions+=18;NFSU2_TR(0x7527a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7527ab:{NFSU2_TR(0x7527ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7527ac:{NFSU2_TR(0x7527ac);
u8 U[4];
w4(U+0,u32(0x752780ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7527b2:{NFSU2_TR(0x7527b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x752160ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527b9:{NFSU2_TR(0x7527b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x752200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527c0:{NFSU2_TR(0x7527c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x757900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527c7:{NFSU2_TR(0x7527c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x752460ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527ce:{NFSU2_TR(0x7527ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x752210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527d5:{NFSU2_TR(0x7527d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x7525f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527dc:{NFSU2_TR(0x7527dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x752210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527e3:{NFSU2_TR(0x7527e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7521e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527ea:{NFSU2_TR(0x7527ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x752240ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527f1:{NFSU2_TR(0x7527f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x754c40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527f8:{NFSU2_TR(0x7527f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x752280ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7527ff:{NFSU2_TR(0x7527ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x752380ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752806:{NFSU2_TR(0x752806);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x752410ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75280d:{NFSU2_TR(0x75280d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x505253ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752814:{NFSU2_TR(0x752814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752819ull));
TAIL_STATIC(0x74b740u,74b);
}
B752819:L752819:{c.instructions+=10;NFSU2_TR(0x752819);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75281d:{NFSU2_TR(0x75281d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B752821:{NFSU2_TR(0x752821);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xeull))));
}
B752824:{NFSU2_TR(0x752824);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ffcull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75282a:{NFSU2_TR(0x75282a);
__builtin_memmove((R+0),(R+28),4);
}
B75282c:{NFSU2_TR(0x75282c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B75282f:{NFSU2_TR(0x75282f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752830:{NFSU2_TR(0x752830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752836:{NFSU2_TR(0x752836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75283c:{NFSU2_TR(0x75283c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752841ull));
TAIL_STATIC(0x5832f0u,583);
}
B752841:L752841:{c.instructions+=6;NFSU2_TR(0x752841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752847:{NFSU2_TR(0x752847);
u8 U[40];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B75284c:{NFSU2_TR(0x75284c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75284d:{NFSU2_TR(0x75284d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752853:{NFSU2_TR(0x752853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752859:{NFSU2_TR(0x752859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75285eull));
TAIL_STATIC(0x5832f0u,583);
}
B75285e:L75285e:{c.instructions+=14;NFSU2_TR(0x75285e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752864:{NFSU2_TR(0x752864);
__builtin_memmove((R+0),(R+12),4);
}
B752866:{NFSU2_TR(0x752866);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752867:{NFSU2_TR(0x752867);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B75286a:{NFSU2_TR(0x75286a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75286d:{NFSU2_TR(0x75286d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75286f:{NFSU2_TR(0x75286f);
u8 U[47];
w4(U+39,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B752872:{NFSU2_TR(0x752872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752873:{NFSU2_TR(0x752873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752879:{NFSU2_TR(0x752879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752880:{NFSU2_TR(0x752880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75288a:{NFSU2_TR(0x75288a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752894:{NFSU2_TR(0x752894);
__builtin_memmove((R+0),(R+24),4);
}
B752896:{NFSU2_TR(0x752896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752897:L752897:{c.instructions+=2;NFSU2_TR(0x752897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752898:{NFSU2_TR(0x752898);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7528a0:L7528a0:{c.instructions+=3;NFSU2_TR(0x7528a0);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7528a2:{NFSU2_TR(0x7528a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7528a3:{NFSU2_TR(0x7528a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7528a8ull));
TAIL_STATIC(0x75cf10u,75c);
}
B7528a8:L7528a8:{c.instructions+=3;NFSU2_TR(0x7528a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7528ab:{NFSU2_TR(0x7528ab);
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
B7528ad:{NFSU2_TR(0x7528ad);
if(r1(R+518)){{goto L7528da;}}
}
B7528af:L7528af:{c.instructions+=4;NFSU2_TR(0x7528af);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7528b1:{NFSU2_TR(0x7528b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7528b3:{NFSU2_TR(0x7528b3);
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
B7528b5:{NFSU2_TR(0x7528b5);
if(r1(R+518)){{goto L7528d0;}}
}
B7528b7:L7528b7:{c.instructions+=1;NFSU2_TR(0x7528b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7528b8:L7528b8:{c.instructions+=10;NFSU2_TR(0x7528b8);
__builtin_memmove((R+24),(R+4),4);
}
B7528ba:{NFSU2_TR(0x7528ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7528bd:{NFSU2_TR(0x7528bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B7528c0:{NFSU2_TR(0x7528c0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B7528c2:{NFSU2_TR(0x7528c2);
w4(R+4,u32(s32(s8(r1(R+8)))));
}
B7528c5:{NFSU2_TR(0x7528c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7528c8:{NFSU2_TR(0x7528c8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B7528ca:{NFSU2_TR(0x7528ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7528cb:{NFSU2_TR(0x7528cb);
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
B7528cd:{NFSU2_TR(0x7528cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7528b8u);}goto L7528b8;}}
}
B7528cf:L7528cf:{c.instructions+=1;NFSU2_TR(0x7528cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7528d0:L7528d0:{c.instructions+=2;NFSU2_TR(0x7528d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7528d4:{NFSU2_TR(0x7528d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7528da:L7528da:{c.instructions+=1;NFSU2_TR(0x7528da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7528e0:L7528e0:{c.instructions+=11;NFSU2_TR(0x7528e0);
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
B7528e2:{NFSU2_TR(0x7528e2);
w4(R+4,u32(0x65ull));
}
B7528e7:{NFSU2_TR(0x7528e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7528ed:{NFSU2_TR(0x7528ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7528f3:{NFSU2_TR(0x7528f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7528f9:{NFSU2_TR(0x7528f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7528ff:{NFSU2_TR(0x7528ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752905:{NFSU2_TR(0x752905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75290b:{NFSU2_TR(0x75290b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752911:{NFSU2_TR(0x752911);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752917:{NFSU2_TR(0x752917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75291cull));
TAIL_STATIC(0x74b730u,74b);
}
B75291c:L75291c:{c.instructions+=3;NFSU2_TR(0x75291c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1388ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1388ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752921:{NFSU2_TR(0x752921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752927:{NFSU2_TR(0x752927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75292cull));
TAIL_STATIC(0x74b730u,74b);
}
B75292c:L75292c:{c.instructions+=3;NFSU2_TR(0x75292c);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x1388ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1388ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1388ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752931:{NFSU2_TR(0x752931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752937:{NFSU2_TR(0x752937);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752940:L752940:{c.instructions+=15;NFSU2_TR(0x752940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752943:{NFSU2_TR(0x752943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752944:{NFSU2_TR(0x752944);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752945:{NFSU2_TR(0x752945);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752946:{NFSU2_TR(0x752946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B752948:{NFSU2_TR(0x752948);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75294a:{NFSU2_TR(0x75294a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75294d:{NFSU2_TR(0x75294d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B752950:{NFSU2_TR(0x752950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752951:{NFSU2_TR(0x752951);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752953:{NFSU2_TR(0x752953);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B752956:{NFSU2_TR(0x752956);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752957:{NFSU2_TR(0x752957);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752958:{NFSU2_TR(0x752958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752959:{NFSU2_TR(0x752959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75295eull));
TAIL_STATIC(0x74a5c0u,74a);
}
B75295e:L75295e:{c.instructions+=4;NFSU2_TR(0x75295e);
__builtin_memmove((R+12),(R+0),4);
}
B752960:{NFSU2_TR(0x752960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B752963:{NFSU2_TR(0x752963);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B752965:{NFSU2_TR(0x752965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752997;}}
}
B752967:L752967:{c.instructions+=1;NFSU2_TR(0x752967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75296cull));
TAIL_STATIC(0x74b730u,74b);
}
B75296c:L75296c:{c.instructions+=10;NFSU2_TR(0x75296c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75296f:{NFSU2_TR(0x75296f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752972:{NFSU2_TR(0x752972);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B752974:{NFSU2_TR(0x752974);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752975:{NFSU2_TR(0x752975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75297b:{NFSU2_TR(0x75297b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75297e:{NFSU2_TR(0x75297e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752981:{NFSU2_TR(0x752981);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x6ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B752985:{NFSU2_TR(0x752985);
__builtin_memmove((R+0),(R+12),4);
}
B752987:{NFSU2_TR(0x752987);
if(r1(R+518)){{goto L7529a0;}}
}
B752989:L752989:{c.instructions+=5;NFSU2_TR(0x752989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75298a:{NFSU2_TR(0x75298a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75298b:{NFSU2_TR(0x75298b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752995:{NFSU2_TR(0x752995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752996:{NFSU2_TR(0x752996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752997:L752997:{c.instructions+=2;NFSU2_TR(0x752997);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75299d:{NFSU2_TR(0x75299d);
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
B7529a0:L7529a0:{c.instructions+=4;NFSU2_TR(0x7529a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7529a1:{NFSU2_TR(0x7529a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7529a2:{NFSU2_TR(0x7529a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7529a3:{NFSU2_TR(0x7529a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7529b0:L7529b0:{c.instructions+=7;NFSU2_TR(0x7529b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x22cull))));
}
B7529b6:{NFSU2_TR(0x7529b6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7529bb:{NFSU2_TR(0x7529bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7529bc:{NFSU2_TR(0x7529bc);
__builtin_memmove((R+24),(R+4),4);
}
B7529be:{NFSU2_TR(0x7529be);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7529c5:{NFSU2_TR(0x7529c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7529cc:{NFSU2_TR(0x7529cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752a05;}}
}
B7529ce:L7529ce:{c.instructions+=6;NFSU2_TR(0x7529ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7529d4:{NFSU2_TR(0x7529d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7529d8:{NFSU2_TR(0x7529d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7529dc:{NFSU2_TR(0x7529dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7529e4:{NFSU2_TR(0x7529e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7529ec:{NFSU2_TR(0x7529ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7529f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752940u);}goto L752940;}
}
B7529f1:L7529f1:{c.instructions+=2;NFSU2_TR(0x7529f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7529fb:{NFSU2_TR(0x7529fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752a05:L752a05:{c.instructions+=4;NFSU2_TR(0x752a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752a0c:{NFSU2_TR(0x752a0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B752a0e:{NFSU2_TR(0x752a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752a0f:{NFSU2_TR(0x752a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752a14ull));
TAIL_STATIC(0x76115eu,761);
}
B752a14:L752a14:{c.instructions+=2;NFSU2_TR(0x752a14);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752a1a:{NFSU2_TR(0x752a1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752a20:L752a20:{c.instructions+=4;NFSU2_TR(0x752a20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752a21:{NFSU2_TR(0x752a21);
__builtin_memmove((R+24),(R+0),4);
}
B752a23:{NFSU2_TR(0x752a23);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
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
B752a26:{NFSU2_TR(0x752a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752aa5;}}
}
B752a28:L752a28:{c.instructions+=3;NFSU2_TR(0x752a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752a2b:{NFSU2_TR(0x752a2b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
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
B752a31:{NFSU2_TR(0x752a31);
if(r1(R+518)){{goto L752a39;}}
}
B752a33:L752a33:{c.instructions+=2;NFSU2_TR(0x752a33);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B752a37:{NFSU2_TR(0x752a37);
{goto L752a99;}
}
B752a39:L752a39:{c.instructions+=1;NFSU2_TR(0x752a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752a3eull));
TAIL_STATIC(0x74b730u,74b);
}
B752a3e:L752a3e:{c.instructions+=5;NFSU2_TR(0x752a3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3e8ull))));
}
B752a43:{NFSU2_TR(0x752a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752a49:{NFSU2_TR(0x752a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752a4c:{NFSU2_TR(0x752a4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752a4f:{NFSU2_TR(0x752a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752a6a;}}
}
B752a51:L752a51:{c.instructions+=2;NFSU2_TR(0x752a51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752a52:{NFSU2_TR(0x752a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752a57ull));
TAIL_STATIC(0x751a50u,751);
}
B752a57:L752a57:{c.instructions+=4;NFSU2_TR(0x752a57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B752a5a:{NFSU2_TR(0x752a5a);
__builtin_memmove((R+0),(R+28),4);
}
B752a5c:{NFSU2_TR(0x752a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752a63:{NFSU2_TR(0x752a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752a68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752940u);}goto L752940;}
}
B752a68:L752a68:{c.instructions+=2;NFSU2_TR(0x752a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752a69:{NFSU2_TR(0x752a69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752a6a:L752a6a:{c.instructions+=2;NFSU2_TR(0x752a6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752a6d:{NFSU2_TR(0x752a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752a8d;}}
}
B752a6f:L752a6f:{c.instructions+=2;NFSU2_TR(0x752a6f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
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
B752a76:{NFSU2_TR(0x752a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752aa5;}}
}
B752a78:L752a78:{c.instructions+=2;NFSU2_TR(0x752a78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752a79:{NFSU2_TR(0x752a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752a7eull));
TAIL_STATIC(0x751a50u,751);
}
B752a7e:L752a7e:{c.instructions+=4;NFSU2_TR(0x752a7e);
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
B752a81:{NFSU2_TR(0x752a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752a8b:{NFSU2_TR(0x752a8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752a8c:{NFSU2_TR(0x752a8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752a8d:L752a8d:{c.instructions+=2;NFSU2_TR(0x752a8d);
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
B752a90:{NFSU2_TR(0x752a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752aa5;}}
}
B752a92:L752a92:{c.instructions+=1;NFSU2_TR(0x752a92);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B752a99:L752a99:{c.instructions+=1;NFSU2_TR(0x752a99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752aa5;}}
}
B752a9b:L752a9b:{c.instructions+=1;NFSU2_TR(0x752a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752aa5:L752aa5:{c.instructions+=2;NFSU2_TR(0x752aa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752aa6:{NFSU2_TR(0x752aa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752ab0:L752ab0:{c.instructions+=13;NFSU2_TR(0x752ab0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ab1:{NFSU2_TR(0x752ab1);
__builtin_memmove((R+20),(R+16),4);
}
B752ab3:{NFSU2_TR(0x752ab3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B752ab6:{NFSU2_TR(0x752ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x240ull))));
}
B752abc:{NFSU2_TR(0x752abc);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B752ac1:{NFSU2_TR(0x752ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752ac7:{NFSU2_TR(0x752ac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752ace:{NFSU2_TR(0x752ace);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752ad4:{NFSU2_TR(0x752ad4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ad5:{NFSU2_TR(0x752ad5);
w4(R+24,u32(0x800ull));
}
B752ada:{NFSU2_TR(0x752ada);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752adb:{NFSU2_TR(0x752adb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752adf:{NFSU2_TR(0x752adf);
if(r1(R+518)){{goto L752b40;}}
}
B752ae1:L752ae1:{c.instructions+=3;NFSU2_TR(0x752ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752ae7:{NFSU2_TR(0x752ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752aed:{NFSU2_TR(0x752aed);
__builtin_memmove((R+4),(R+4),4);
}
B752af0:L752af0:{c.instructions+=7;NFSU2_TR(0x752af0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+8))));
}
B752af3:{NFSU2_TR(0x752af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752af9:{NFSU2_TR(0x752af9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752afb:{NFSU2_TR(0x752afb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752afc:{NFSU2_TR(0x752afc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752afc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752afc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752afe:{NFSU2_TR(0x752afe);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752b04:{NFSU2_TR(0x752b04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752af0u);}goto L752af0;}}
}
B752b06:L752b06:{c.instructions+=3;NFSU2_TR(0x752b06);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752b0c:{NFSU2_TR(0x752b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752b10:{NFSU2_TR(0x752b10);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L752b32;}}
}
B752b12:L752b12:{c.instructions+=1;NFSU2_TR(0x752b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752b17ull));
TAIL_STATIC(0x74b730u,74b);
}
B752b17:L752b17:{c.instructions+=3;NFSU2_TR(0x752b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B752b1d:{NFSU2_TR(0x752b1d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xfaull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfaull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b22:{NFSU2_TR(0x752b22);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L752b32;}}
}
B752b24:L752b24:{c.instructions+=3;NFSU2_TR(0x752b24);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752b2c:{NFSU2_TR(0x752b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752b30:{NFSU2_TR(0x752b30);
{goto L752b40;}
}
B752b32:L752b32:{c.instructions+=2;NFSU2_TR(0x752b32);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b34:{NFSU2_TR(0x752b34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752e0d;}}
}
B752b3a:L752b3a:{c.instructions+=1;NFSU2_TR(0x752b3a);
__builtin_memmove((R+12),(R+12),4);
}
B752b40:L752b40:{c.instructions+=3;NFSU2_TR(0x752b40);
w4(R+28,u32(0x218ull));
}
B752b45:{NFSU2_TR(0x752b45);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B752b47:{NFSU2_TR(0x752b47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L752b4b;}}
}
B752b49:L752b49:{c.instructions+=1;NFSU2_TR(0x752b49);
__builtin_memmove((R+28),(R+24),4);
}
B752b4b:L752b4b:{c.instructions+=2;NFSU2_TR(0x752b4b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B752b4d:{NFSU2_TR(0x752b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752b51:L752b51:{c.instructions+=2;NFSU2_TR(0x752b51);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b53:{NFSU2_TR(0x752b53);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752b9d;}}
}
B752b55:L752b55:{c.instructions+=3;NFSU2_TR(0x752b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752b5b:{NFSU2_TR(0x752b5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752b61:{NFSU2_TR(0x752b61);
if(r1(R+518)){{goto L752b9d;}}
}
B752b63:L752b63:{c.instructions+=7;NFSU2_TR(0x752b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752b69:{NFSU2_TR(0x752b69);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B752b6b:{NFSU2_TR(0x752b6b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B752b6e:{NFSU2_TR(0x752b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B752b70:{NFSU2_TR(0x752b70);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B752b72:{NFSU2_TR(0x752b72);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b74:{NFSU2_TR(0x752b74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752b7a;}}
}
B752b76:L752b76:{c.instructions+=2;NFSU2_TR(0x752b76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b78:{NFSU2_TR(0x752b78);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752b9d;}}
}
B752b7a:L752b7a:{c.instructions+=8;NFSU2_TR(0x752b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752b80:{NFSU2_TR(0x752b80);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752b82:{NFSU2_TR(0x752b82);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752b83:{NFSU2_TR(0x752b83);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752b83);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752b83);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752b89:{NFSU2_TR(0x752b89);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B752b8a:{NFSU2_TR(0x752b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752b90:{NFSU2_TR(0x752b90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0xfaull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xfaull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B752b96:{NFSU2_TR(0x752b96);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L752b9d;}}
}
B752b98:L752b98:{c.instructions+=2;NFSU2_TR(0x752b98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B752b9b:{NFSU2_TR(0x752b9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752b51u);}goto L752b51;}}
}
B752b9d:L752b9d:{c.instructions+=3;NFSU2_TR(0x752b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752b9f:{NFSU2_TR(0x752b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752ba3:{NFSU2_TR(0x752ba3);
if(r1(R+518)){{goto L752e0d;}}
}
B752ba9:L752ba9:{c.instructions+=14;NFSU2_TR(0x752ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752baf:{NFSU2_TR(0x752baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752bb5:{NFSU2_TR(0x752bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752bbb:{NFSU2_TR(0x752bbb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B752bbd:{NFSU2_TR(0x752bbd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B752bbf:{NFSU2_TR(0x752bbf);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752bc0:{NFSU2_TR(0x752bc0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752bc0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752bc0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752bc2:{NFSU2_TR(0x752bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752bc8:{NFSU2_TR(0x752bc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B752bcb:{NFSU2_TR(0x752bcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B752bce:{NFSU2_TR(0x752bce);
__builtin_memmove((R+0),(R+4),4);
}
B752bd0:{NFSU2_TR(0x752bd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B752bd3:{NFSU2_TR(0x752bd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B752bd7:{NFSU2_TR(0x752bd7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B752bd9:L752bd9:{c.instructions+=1;NFSU2_TR(0x752bd9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L752bdb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752bd9u);}goto L752bd9;}
}
B752bdb:L752bdb:{c.instructions+=5;NFSU2_TR(0x752bdb);
__builtin_memmove((R+4),(R+0),4);
}
B752bdd:{NFSU2_TR(0x752bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752be1:{NFSU2_TR(0x752be1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B752be4:{NFSU2_TR(0x752be4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B752be5:{NFSU2_TR(0x752be5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752be7:L752be7:{c.instructions+=1;NFSU2_TR(0x752be7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L752be9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752be7u);}goto L752be7;}
}
B752be9:L752be9:{c.instructions+=1;NFSU2_TR(0x752be9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752c8e;}}
}
B752bef:L752bef:{c.instructions+=2;NFSU2_TR(0x752bef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752bf3:{NFSU2_TR(0x752bf3);
{goto L752c00;}
}
B752c00:L752c00:{c.instructions+=14;NFSU2_TR(0x752c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752c06:{NFSU2_TR(0x752c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752c0c:{NFSU2_TR(0x752c0c);
__builtin_memmove((R+0),(R+4),4);
}
B752c0e:{NFSU2_TR(0x752c0e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B752c10:{NFSU2_TR(0x752c10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752c12:{NFSU2_TR(0x752c12);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752c13:{NFSU2_TR(0x752c13);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752c13);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752c13);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752c15:{NFSU2_TR(0x752c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752c1b:{NFSU2_TR(0x752c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752c1e:{NFSU2_TR(0x752c1e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B752c20:{NFSU2_TR(0x752c20);
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
B752c22:{NFSU2_TR(0x752c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752c26:{NFSU2_TR(0x752c26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752c2a:{NFSU2_TR(0x752c2a);
if(r1(R+518)){{goto L752c3b;}}
}
B752c2c:L752c2c:{c.instructions+=7;NFSU2_TR(0x752c2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B752c2e:{NFSU2_TR(0x752c2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752c30:{NFSU2_TR(0x752c30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752c31:{NFSU2_TR(0x752c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B752c34:{NFSU2_TR(0x752c34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752c35:{NFSU2_TR(0x752c35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752c36:{NFSU2_TR(0x752c36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752c38ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B752c38:L752c38:{c.instructions+=1;NFSU2_TR(0x752c38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B752c3b:L752c3b:{c.instructions+=7;NFSU2_TR(0x752c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B752c43:{NFSU2_TR(0x752c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B752c45:{NFSU2_TR(0x752c45);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752c49:{NFSU2_TR(0x752c49);
__builtin_memmove((R+0),(R+4),4);
}
B752c4b:{NFSU2_TR(0x752c4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B752c4e:{NFSU2_TR(0x752c4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B752c51:{NFSU2_TR(0x752c51);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B752c55:L752c55:{c.instructions+=1;NFSU2_TR(0x752c55);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L752c57;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752c55u);}goto L752c55;}
}
B752c57:L752c57:{c.instructions+=2;NFSU2_TR(0x752c57);
__builtin_memmove((R+4),(R+0),4);
}
B752c59:{NFSU2_TR(0x752c59);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B752c5c:L752c5c:{c.instructions+=1;NFSU2_TR(0x752c5c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L752c5e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752c5cu);}goto L752c5c;}
}
B752c5e:L752c5e:{c.instructions+=14;NFSU2_TR(0x752c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752c62:{NFSU2_TR(0x752c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752c66:{NFSU2_TR(0x752c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B752c68:{NFSU2_TR(0x752c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752c6c:{NFSU2_TR(0x752c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752c70:{NFSU2_TR(0x752c70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B752c72:{NFSU2_TR(0x752c72);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B752c76:{NFSU2_TR(0x752c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752c7a:{NFSU2_TR(0x752c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752c7e:{NFSU2_TR(0x752c7e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752c7f:{NFSU2_TR(0x752c7f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B752c80:{NFSU2_TR(0x752c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752c84:{NFSU2_TR(0x752c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752c88:{NFSU2_TR(0x752c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752c00u);}goto L752c00;}}
}
B752c8e:L752c8e:{c.instructions+=2;NFSU2_TR(0x752c8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752c94:{NFSU2_TR(0x752c94);
if(r1(R+518)){{goto L752d5c;}}
}
B752c9a:L752c9a:{c.instructions+=1;NFSU2_TR(0x752c9a);
{goto L752ca0;}
}
B752c9c:L752c9c:{c.instructions+=1;NFSU2_TR(0x752c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752ca0:L752ca0:{c.instructions+=3;NFSU2_TR(0x752ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752ca4:{NFSU2_TR(0x752ca4);
u8 U[8];
__builtin_memmove((U+0),gp(0x819c4c),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752caa:{NFSU2_TR(0x752caa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L752d54;}}
}
B752cb0:L752cb0:{c.instructions+=16;NFSU2_TR(0x752cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752cb6:{NFSU2_TR(0x752cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752cbc:{NFSU2_TR(0x752cbc);
__builtin_memmove((R+0),(R+4),4);
}
B752cbe:{NFSU2_TR(0x752cbe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B752cc0:{NFSU2_TR(0x752cc0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752cc2:{NFSU2_TR(0x752cc2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752cc3:{NFSU2_TR(0x752cc3);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752cc3);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752cc3);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752cc5:{NFSU2_TR(0x752cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752ccb:{NFSU2_TR(0x752ccb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B752cce:{NFSU2_TR(0x752cce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752cd2:{NFSU2_TR(0x752cd2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B752cd4:{NFSU2_TR(0x752cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752cd8:{NFSU2_TR(0x752cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B752cdb:{NFSU2_TR(0x752cdb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752cde:{NFSU2_TR(0x752cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752ce2:{NFSU2_TR(0x752ce2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L752d50;}}
}
B752ce4:L752ce4:{c.instructions+=3;NFSU2_TR(0x752ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752ce7:{NFSU2_TR(0x752ce7);
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
B752ce9:{NFSU2_TR(0x752ce9);
if(r1(R+518)){{goto L752cf8;}}
}
B752ceb:L752ceb:{c.instructions+=6;NFSU2_TR(0x752ceb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ced:{NFSU2_TR(0x752ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752cee:{NFSU2_TR(0x752cee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B752cf1:{NFSU2_TR(0x752cf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752cf2:{NFSU2_TR(0x752cf2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752cf3:{NFSU2_TR(0x752cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752cf5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B752cf5:L752cf5:{c.instructions+=1;NFSU2_TR(0x752cf5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B752cf8:L752cf8:{c.instructions+=9;NFSU2_TR(0x752cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752cfc:{NFSU2_TR(0x752cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752d00:{NFSU2_TR(0x752d00);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10000000ull))));
}
B752d06:{NFSU2_TR(0x752d06);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752d0a:{NFSU2_TR(0x752d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B752d0c:{NFSU2_TR(0x752d0c);
__builtin_memmove((R+8),(R+4),4);
}
B752d0e:{NFSU2_TR(0x752d0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B752d11:{NFSU2_TR(0x752d11);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B752d14:{NFSU2_TR(0x752d14);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B752d18:L752d18:{c.instructions+=1;NFSU2_TR(0x752d18);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L752d1a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752d18u);}goto L752d18;}
}
B752d1a:L752d1a:{c.instructions+=2;NFSU2_TR(0x752d1a);
__builtin_memmove((R+4),(R+8),4);
}
B752d1c:{NFSU2_TR(0x752d1c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B752d1f:L752d1f:{c.instructions+=1;NFSU2_TR(0x752d1f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L752d21;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752d1fu);}goto L752d1f;}
}
B752d21:L752d21:{c.instructions+=13;NFSU2_TR(0x752d21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752d25:{NFSU2_TR(0x752d25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752d29:{NFSU2_TR(0x752d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B752d2b:{NFSU2_TR(0x752d2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752d2f:{NFSU2_TR(0x752d2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752d33:{NFSU2_TR(0x752d33);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B752d35:{NFSU2_TR(0x752d35);
u8 U[13];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B752d39:{NFSU2_TR(0x752d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752d3d:{NFSU2_TR(0x752d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752d43:{NFSU2_TR(0x752d43);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752d44:{NFSU2_TR(0x752d44);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752d46:{NFSU2_TR(0x752d46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752d4a:{NFSU2_TR(0x752d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752c9cu);}goto L752c9c;}}
}
B752d50:L752d50:{c.instructions+=1;NFSU2_TR(0x752d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752d54:L752d54:{c.instructions+=2;NFSU2_TR(0x752d54);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752d5a:{NFSU2_TR(0x752d5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752d68;}}
}
B752d5c:L752d5c:{c.instructions+=2;NFSU2_TR(0x752d5c);
s4(0x819c4c,u32(0x20000000ull));
}
B752d66:{NFSU2_TR(0x752d66);
{goto L752d87;}
}
B752d68:L752d68:{c.instructions+=3;NFSU2_TR(0x752d68);
__builtin_memmove((R+0),gp(0x819c4c),4);
}
B752d6d:{NFSU2_TR(0x752d6d);
w1(R+512,u8((r4(R+0))<(u32(0x80000000ull))));
}
B752d72:{NFSU2_TR(0x752d72);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L752d7d;}}
}
B752d74:L752d74:{c.instructions+=3;NFSU2_TR(0x752d74);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B752d76:{NFSU2_TR(0x752d76);
__builtin_memmove(gp(0x819c4c),(R+0),4);
}
B752d7b:{NFSU2_TR(0x752d7b);
{goto L752d87;}
}
B752d7d:L752d7d:{c.instructions+=1;NFSU2_TR(0x752d7d);
s4(0x819c4c,u32(0xf0000000ull));
}
B752d87:L752d87:{c.instructions+=16;NFSU2_TR(0x752d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752d8d:{NFSU2_TR(0x752d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752d91:{NFSU2_TR(0x752d91);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752d93:{NFSU2_TR(0x752d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B752d96:{NFSU2_TR(0x752d96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752d97:{NFSU2_TR(0x752d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752d9d:{NFSU2_TR(0x752d9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752d9f:{NFSU2_TR(0x752d9f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B752da0:{NFSU2_TR(0x752da0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B752da3:{NFSU2_TR(0x752da3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752da4:{NFSU2_TR(0x752da4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B752da8:{NFSU2_TR(0x752da8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752dac:{NFSU2_TR(0x752dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752daf:{NFSU2_TR(0x752daf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752db0:{NFSU2_TR(0x752db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752db1:{NFSU2_TR(0x752db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752db6ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B752db6:L752db6:{c.instructions+=4;NFSU2_TR(0x752db6);
__builtin_memmove((R+28),(R+0),4);
}
B752db8:{NFSU2_TR(0x752db8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B752dbb:{NFSU2_TR(0x752dbb);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B752dbd:{NFSU2_TR(0x752dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752e07;}}
}
B752dbf:L752dbf:{c.instructions+=1;NFSU2_TR(0x752dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752dc4ull));
TAIL_STATIC(0x74b730u,74b);
}
B752dc4:L752dc4:{c.instructions+=10;NFSU2_TR(0x752dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752dc7:{NFSU2_TR(0x752dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752dca:{NFSU2_TR(0x752dca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B752dcc:{NFSU2_TR(0x752dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752dd2:{NFSU2_TR(0x752dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752dd6:{NFSU2_TR(0x752dd6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752dd7:{NFSU2_TR(0x752dd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752dda:{NFSU2_TR(0x752dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752ddd:{NFSU2_TR(0x752ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752de0:{NFSU2_TR(0x752de0);
if(r1(R+518)){{goto L752dec;}}
}
B752de2:L752de2:{c.instructions+=1;NFSU2_TR(0x752de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752dec:L752dec:{c.instructions+=2;NFSU2_TR(0x752dec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B752dee:{NFSU2_TR(0x752dee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L752e0d;}}
}
B752df0:L752df0:{c.instructions+=5;NFSU2_TR(0x752df0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752df4:{NFSU2_TR(0x752df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B752df8:{NFSU2_TR(0x752df8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752dfa:{NFSU2_TR(0x752dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752dfe:{NFSU2_TR(0x752dfe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L752e0d;}}
}
B752e00:L752e00:{c.instructions+=2;NFSU2_TR(0x752e00);
__builtin_memmove((R+24),(R+0),4);
}
B752e02:{NFSU2_TR(0x752e02);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752b40u);}goto L752b40;}
}
B752e07:L752e07:{c.instructions+=1;NFSU2_TR(0x752e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752e0d:L752e0d:{c.instructions+=2;NFSU2_TR(0x752e0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752e14:{NFSU2_TR(0x752e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752e19ull));
TAIL_STATIC(0x76115eu,761);
}
B752e19:L752e19:{c.instructions+=5;NFSU2_TR(0x752e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752e1a:{NFSU2_TR(0x752e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752e1b:{NFSU2_TR(0x752e1b);
__builtin_memmove((R+16),(R+20),4);
}
B752e1d:{NFSU2_TR(0x752e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752e1e:{NFSU2_TR(0x752e1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752e20:L752e20:{c.instructions+=12;NFSU2_TR(0x752e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752e23:{NFSU2_TR(0x752e23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752e24:{NFSU2_TR(0x752e24);
__builtin_memmove((R+12),(R+4),4);
}
B752e26:{NFSU2_TR(0x752e26);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B752e28:{NFSU2_TR(0x752e28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752e2b:{NFSU2_TR(0x752e2b);
__builtin_memmove((R+4),(R+518),1);
}
B752e2e:{NFSU2_TR(0x752e2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752e2f:{NFSU2_TR(0x752e2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752e30:{NFSU2_TR(0x752e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752e33:{NFSU2_TR(0x752e33);
__builtin_memmove((R+20),(R+4),4);
}
B752e35:{NFSU2_TR(0x752e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752e37:{NFSU2_TR(0x752e37);
if(r1(R+518)){{goto L752e3a;}}
}
B752e39:L752e39:{c.instructions+=1;NFSU2_TR(0x752e39);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B752e3a:L752e3a:{c.instructions+=3;NFSU2_TR(0x752e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752e40:{NFSU2_TR(0x752e40);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752e46:{NFSU2_TR(0x752e46);
if(r1(R+518)){{goto L752e9d;}}
}
B752e48:L752e48:{c.instructions+=3;NFSU2_TR(0x752e48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752e49:{NFSU2_TR(0x752e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752e4f:{NFSU2_TR(0x752e4f);
}
B752e50:L752e50:{c.instructions+=3;NFSU2_TR(0x752e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752e56:{NFSU2_TR(0x752e56);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+16))));
}
B752e5a:{NFSU2_TR(0x752e5a);
if(r1(R+512)){{goto L752e9c;}}
}
B752e5c:L752e5c:{c.instructions+=3;NFSU2_TR(0x752e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752e62:{NFSU2_TR(0x752e62);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752e64:{NFSU2_TR(0x752e64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752e7b;}}
}
B752e66:L752e66:{c.instructions+=5;NFSU2_TR(0x752e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752e6c:{NFSU2_TR(0x752e6c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752e6e:{NFSU2_TR(0x752e6e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752e6f:{NFSU2_TR(0x752e6f);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752e6f);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752e6f);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752e75:{NFSU2_TR(0x752e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752e7b:L752e7b:{c.instructions+=9;NFSU2_TR(0x752e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752e81:{NFSU2_TR(0x752e81);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B752e83:{NFSU2_TR(0x752e83);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752e84:{NFSU2_TR(0x752e84);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752e84);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752e84);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752e8a:{NFSU2_TR(0x752e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752e90:{NFSU2_TR(0x752e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752e96:{NFSU2_TR(0x752e96);
__builtin_memmove((R+0),(R+8),4);
}
B752e98:{NFSU2_TR(0x752e98);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752e9a:{NFSU2_TR(0x752e9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752e50u);}goto L752e50;}}
}
B752e9c:L752e9c:{c.instructions+=1;NFSU2_TR(0x752e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752e9d:L752e9d:{c.instructions+=2;NFSU2_TR(0x752e9d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752e9f:{NFSU2_TR(0x752e9f);
if(r1(R+518)){{goto L752eb2;}}
}
B752ea1:L752ea1:{c.instructions+=3;NFSU2_TR(0x752ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752ea7:{NFSU2_TR(0x752ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752ead:{NFSU2_TR(0x752ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752eb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752ab0u);}goto L752ab0;}
}
B752eb2:L752eb2:{c.instructions+=4;NFSU2_TR(0x752eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752eb3:{NFSU2_TR(0x752eb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752eb4:{NFSU2_TR(0x752eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B752eb5:{NFSU2_TR(0x752eb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752ec0:L752ec0:{c.instructions+=12;NFSU2_TR(0x752ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752ec6:{NFSU2_TR(0x752ec6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ec7:{NFSU2_TR(0x752ec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ec8:{NFSU2_TR(0x752ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752ece:{NFSU2_TR(0x752ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B752ed1:{NFSU2_TR(0x752ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752ed2:{NFSU2_TR(0x752ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752ed8:{NFSU2_TR(0x752ed8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752ed9:{NFSU2_TR(0x752ed9);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752ed9);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752ed9);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752edb:{NFSU2_TR(0x752edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B752ee1:{NFSU2_TR(0x752ee1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752ee3:{NFSU2_TR(0x752ee3);
if(r1(R+518)){{goto L752f06;}}
}
B752ee5:L752ee5:{c.instructions+=4;NFSU2_TR(0x752ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752ee9:{NFSU2_TR(0x752ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752eec:{NFSU2_TR(0x752eec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752eef:{NFSU2_TR(0x752eef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752f0f;}}
}
B752ef1:L752ef1:{c.instructions+=11;NFSU2_TR(0x752ef1);
__builtin_memmove((R+0),(R+28),4);
}
B752ef3:{NFSU2_TR(0x752ef3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B752ef5:{NFSU2_TR(0x752ef5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B752ef7:{NFSU2_TR(0x752ef7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752ef8:{NFSU2_TR(0x752ef8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752ef8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752ef8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752efa:{NFSU2_TR(0x752efa);
__builtin_memmove((R+0),(R+28),4);
}
B752efc:{NFSU2_TR(0x752efc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B752efe:{NFSU2_TR(0x752efe);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752eff:{NFSU2_TR(0x752eff);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752eff);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752eff);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B752f01:{NFSU2_TR(0x752f01);
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
B752f04:{NFSU2_TR(0x752f04);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L752f4a;}}
}
B752f06:L752f06:{c.instructions+=5;NFSU2_TR(0x752f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752f07:{NFSU2_TR(0x752f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752f08:{NFSU2_TR(0x752f08);
w4(R+0,u32(0x2ull));
}
B752f0d:{NFSU2_TR(0x752f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752f0e:{NFSU2_TR(0x752f0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752f0f:L752f0f:{c.instructions+=3;NFSU2_TR(0x752f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B752f15:{NFSU2_TR(0x752f15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B752f17:{NFSU2_TR(0x752f17);
if(r1(R+512)){{goto L752f44;}}
}
B752f19:L752f19:{c.instructions+=1;NFSU2_TR(0x752f19);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L752f3f;}}
}
B752f1b:L752f1b:{c.instructions+=6;NFSU2_TR(0x752f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B752f22:{NFSU2_TR(0x752f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752f28:{NFSU2_TR(0x752f28);
__builtin_memmove((R+24),(R+12),4);
}
B752f2a:{NFSU2_TR(0x752f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752f2d:{NFSU2_TR(0x752f2d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B752f33:{NFSU2_TR(0x752f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752f38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752940u);}goto L752940;}
}
B752f38:L752f38:{c.instructions+=5;NFSU2_TR(0x752f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752f39:{NFSU2_TR(0x752f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752f3a:{NFSU2_TR(0x752f3a);
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
B752f3d:{NFSU2_TR(0x752f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752f3e:{NFSU2_TR(0x752f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752f3f:L752f3f:{c.instructions+=2;NFSU2_TR(0x752f3f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B752f42:{NFSU2_TR(0x752f42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L752f4a;}}
}
B752f44:L752f44:{c.instructions+=5;NFSU2_TR(0x752f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752f45:{NFSU2_TR(0x752f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752f46:{NFSU2_TR(0x752f46);
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
B752f48:{NFSU2_TR(0x752f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752f49:{NFSU2_TR(0x752f49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B752f4a:L752f4a:{c.instructions+=7;NFSU2_TR(0x752f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B752f50:{NFSU2_TR(0x752f50);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B752f52:{NFSU2_TR(0x752f52);
__builtin_memmove((R+4),(R+24),4);
}
B752f54:{NFSU2_TR(0x752f54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B752f58:{NFSU2_TR(0x752f58);
__builtin_memmove((R+8),(R+4),4);
}
B752f5a:{NFSU2_TR(0x752f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B752f5d:{NFSU2_TR(0x752f5d);
__builtin_memmove((R+28),(R+20),4);
}
B752f5f:L752f5f:{c.instructions+=1;NFSU2_TR(0x752f5f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L752f61;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752f5fu);}goto L752f5f;}
}
B752f61:L752f61:{c.instructions+=2;NFSU2_TR(0x752f61);
__builtin_memmove((R+4),(R+8),4);
}
B752f63:{NFSU2_TR(0x752f63);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B752f66:L752f66:{c.instructions+=1;NFSU2_TR(0x752f66);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L752f68;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x752f66u);}goto L752f66;}
}
B752f68:L752f68:{c.instructions+=12;NFSU2_TR(0x752f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752f6e:{NFSU2_TR(0x752f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752f74:{NFSU2_TR(0x752f74);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B752f75:{NFSU2_TR(0x752f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752f7b:{NFSU2_TR(0x752f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752f81:{NFSU2_TR(0x752f81);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B752f83:{NFSU2_TR(0x752f83);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B752f84:{NFSU2_TR(0x752f84);
u8 U[64];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752f84);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x752f84);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B752f8a:{NFSU2_TR(0x752f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752f8e:{NFSU2_TR(0x752f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752f94:{NFSU2_TR(0x752f94);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B752f98:{NFSU2_TR(0x752f98);
if(r1(R+518)){{goto L752fb8;}}
}
B752f9a:L752f9a:{c.instructions+=7;NFSU2_TR(0x752f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752fa0:{NFSU2_TR(0x752fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752fa6:{NFSU2_TR(0x752fa6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B752fa7:{NFSU2_TR(0x752fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752fad:{NFSU2_TR(0x752fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B752fb0:{NFSU2_TR(0x752fb0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B752fb2:{NFSU2_TR(0x752fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752fb8:L752fb8:{c.instructions+=6;NFSU2_TR(0x752fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B752fbe:{NFSU2_TR(0x752fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752fc1:{NFSU2_TR(0x752fc1);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B752fc4:{NFSU2_TR(0x752fc4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B752fc6:{NFSU2_TR(0x752fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752fcc:{NFSU2_TR(0x752fcc);
if(r1(R+518)){{goto L752fe0;}}
}
B752fce:L752fce:{c.instructions+=8;NFSU2_TR(0x752fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B752fd1:{NFSU2_TR(0x752fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B752fd4:{NFSU2_TR(0x752fd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752fd5:{NFSU2_TR(0x752fd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752fd6:{NFSU2_TR(0x752fd6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x10ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B752fd9:{NFSU2_TR(0x752fd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752fda:{NFSU2_TR(0x752fda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B752fdb:{NFSU2_TR(0x752fdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x752fddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B752fdd:L752fdd:{c.instructions+=1;NFSU2_TR(0x752fdd);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B752fe0:L752fe0:{c.instructions+=8;NFSU2_TR(0x752fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B752fe6:{NFSU2_TR(0x752fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B752fe7:{NFSU2_TR(0x752fe7);
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
B752fe8:{NFSU2_TR(0x752fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B752fe9:{NFSU2_TR(0x752fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B752fef:{NFSU2_TR(0x752fef);
w4(R+0,u32(0x1ull));
}
B752ff4:{NFSU2_TR(0x752ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B752ff5:{NFSU2_TR(0x752ff5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x752,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
