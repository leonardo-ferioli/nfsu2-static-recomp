#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_622(u8* __restrict R,Cpu& c);
u32 body_630(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x621,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x621,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_621(u8* __restrict R,Cpu& c);
u32 page_621(Cpu& c){return body_621(c.regs.data(),c);}
__attribute__((noinline)) u32 body_621(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x621002:goto L621002;
case 0x621003:c.instructions+=9;goto B621003;
case 0x62100a:c.instructions+=8;goto B62100a;
case 0x62100b:c.instructions+=7;goto B62100b;
case 0x621012:c.instructions+=6;goto B621012;
case 0x621019:c.instructions+=5;goto B621019;
case 0x62101a:c.instructions+=4;goto B62101a;
case 0x62101f:c.instructions+=3;goto B62101f;
case 0x621020:c.instructions+=2;goto B621020;
case 0x621021:c.instructions+=1;goto B621021;
case 0x621026:goto L621026;
case 0x62102d:c.instructions+=6;goto B62102d;
case 0x621033:c.instructions+=5;goto B621033;
case 0x621036:c.instructions+=4;goto B621036;
case 0x621037:c.instructions+=3;goto B621037;
case 0x62103b:c.instructions+=2;goto B62103b;
case 0x621041:c.instructions+=1;goto B621041;
case 0x621046:goto L621046;
case 0x62104d:c.instructions+=1;goto B62104d;
case 0x62104f:goto L62104f;
case 0x621053:c.instructions+=3;goto B621053;
case 0x621059:c.instructions+=2;goto B621059;
case 0x62105a:c.instructions+=1;goto B62105a;
case 0x62105f:goto L62105f;
case 0x621062:goto L621062;
case 0x621067:c.instructions+=2;goto B621067;
case 0x621069:c.instructions+=1;goto B621069;
case 0x62106b:goto L62106b;
case 0x621075:goto L621075;
case 0x621079:c.instructions+=1;goto B621079;
case 0x62107e:goto L62107e;
case 0x621085:c.instructions+=3;goto B621085;
case 0x621087:c.instructions+=2;goto B621087;
case 0x621092:c.instructions+=1;goto B621092;
case 0x621094:goto L621094;
case 0x62109a:c.instructions+=4;goto B62109a;
case 0x62109c:c.instructions+=3;goto B62109c;
case 0x6210a3:c.instructions+=2;goto B6210a3;
case 0x6210ae:c.instructions+=1;goto B6210ae;
case 0x6210b0:goto L6210b0;
case 0x6210bb:goto L6210bb;
case 0x6210bf:c.instructions+=7;goto B6210bf;
case 0x6210c2:c.instructions+=6;goto B6210c2;
case 0x6210c8:c.instructions+=5;goto B6210c8;
case 0x6210ca:c.instructions+=4;goto B6210ca;
case 0x6210d0:c.instructions+=3;goto B6210d0;
case 0x6210d4:c.instructions+=2;goto B6210d4;
case 0x6210dc:c.instructions+=1;goto B6210dc;
case 0x6210de:goto L6210de;
case 0x6210e3:goto L6210e3;
case 0x6210e7:c.instructions+=2;goto B6210e7;
case 0x6210e9:c.instructions+=1;goto B6210e9;
case 0x6210eb:goto L6210eb;
case 0x6210ef:c.instructions+=4;goto B6210ef;
case 0x6210f2:c.instructions+=3;goto B6210f2;
case 0x6210f6:c.instructions+=2;goto B6210f6;
case 0x6210f9:c.instructions+=1;goto B6210f9;
case 0x6210fb:goto L6210fb;
case 0x6210ff:c.instructions+=5;goto B6210ff;
case 0x621100:c.instructions+=4;goto B621100;
case 0x621103:c.instructions+=3;goto B621103;
case 0x621105:c.instructions+=2;goto B621105;
case 0x621109:c.instructions+=1;goto B621109;
case 0x62110b:goto L62110b;
case 0x621111:c.instructions+=5;goto B621111;
case 0x621113:c.instructions+=4;goto B621113;
case 0x621115:c.instructions+=3;goto B621115;
case 0x62111c:c.instructions+=2;goto B62111c;
case 0x621123:c.instructions+=1;goto B621123;
case 0x621125:goto L621125;
case 0x621129:c.instructions+=4;goto B621129;
case 0x62112f:c.instructions+=3;goto B62112f;
case 0x621131:c.instructions+=2;goto B621131;
case 0x621134:c.instructions+=1;goto B621134;
case 0x621136:goto L621136;
case 0x62113b:c.instructions+=2;goto B62113b;
case 0x621142:c.instructions+=1;goto B621142;
case 0x621149:goto L621149;
case 0x62114d:c.instructions+=9;goto B62114d;
case 0x621150:c.instructions+=8;goto B621150;
case 0x621153:c.instructions+=7;goto B621153;
case 0x621157:c.instructions+=6;goto B621157;
case 0x62115b:c.instructions+=5;goto B62115b;
case 0x621162:c.instructions+=4;goto B621162;
case 0x621169:c.instructions+=3;goto B621169;
case 0x62116b:c.instructions+=2;goto B62116b;
case 0x62116e:c.instructions+=1;goto B62116e;
case 0x621170:goto L621170;
case 0x621174:c.instructions+=6;goto B621174;
case 0x621175:c.instructions+=5;goto B621175;
case 0x62117c:c.instructions+=4;goto B62117c;
case 0x62117d:c.instructions+=3;goto B62117d;
case 0x62117f:c.instructions+=2;goto B62117f;
case 0x621182:c.instructions+=1;goto B621182;
case 0x621184:goto L621184;
case 0x62118b:c.instructions+=1;goto B62118b;
case 0x62118f:goto L62118f;
case 0x621194:goto L621194;
case 0x621196:c.instructions+=1;goto B621196;
case 0x621198:goto L621198;
case 0x62119a:c.instructions+=3;goto B62119a;
case 0x62119e:c.instructions+=2;goto B62119e;
case 0x6211a5:c.instructions+=1;goto B6211a5;
case 0x6211a7:goto L6211a7;
case 0x6211ab:c.instructions+=2;goto B6211ab;
case 0x6211ae:c.instructions+=1;goto B6211ae;
case 0x6211b0:goto L6211b0;
case 0x6211b5:c.instructions+=2;goto B6211b5;
case 0x6211b9:c.instructions+=1;goto B6211b9;
case 0x6211bb:goto L6211bb;
case 0x6211be:c.instructions+=1;goto B6211be;
case 0x6211c0:goto L6211c0;
case 0x6211c7:c.instructions+=2;goto B6211c7;
case 0x6211c9:c.instructions+=1;goto B6211c9;
case 0x6211cb:goto L6211cb;
case 0x6211d1:c.instructions+=2;goto B6211d1;
case 0x6211d3:c.instructions+=1;goto B6211d3;
case 0x6211d5:goto L6211d5;
case 0x6211d9:c.instructions+=3;goto B6211d9;
case 0x6211df:c.instructions+=2;goto B6211df;
case 0x6211e1:c.instructions+=1;goto B6211e1;
case 0x6211e3:goto L6211e3;
case 0x6211e8:c.instructions+=1;goto B6211e8;
case 0x6211ec:goto L6211ec;
case 0x6211f2:c.instructions+=2;goto B6211f2;
case 0x6211f5:c.instructions+=1;goto B6211f5;
case 0x6211f7:goto L6211f7;
case 0x6211f9:c.instructions+=1;goto B6211f9;
case 0x6211fd:goto L6211fd;
case 0x621203:c.instructions+=2;goto B621203;
case 0x621206:c.instructions+=1;goto B621206;
case 0x621208:goto L621208;
case 0x62120f:goto L62120f;
case 0x621212:c.instructions+=1;goto B621212;
case 0x621214:goto L621214;
case 0x62121c:c.instructions+=1;goto B62121c;
case 0x621222:goto L621222;
case 0x621224:goto L621224;
case 0x621227:c.instructions+=1;goto B621227;
case 0x621229:goto L621229;
case 0x621230:goto L621230;
case 0x621237:c.instructions+=3;goto B621237;
case 0x621238:c.instructions+=2;goto B621238;
case 0x621239:c.instructions+=1;goto B621239;
case 0x62123e:goto L62123e;
case 0x621245:c.instructions+=6;goto B621245;
case 0x621246:c.instructions+=5;goto B621246;
case 0x62124d:c.instructions+=4;goto B62124d;
case 0x62124e:c.instructions+=3;goto B62124e;
case 0x621255:c.instructions+=2;goto B621255;
case 0x621256:c.instructions+=1;goto B621256;
case 0x62125b:goto L62125b;
case 0x62125e:c.instructions+=4;goto B62125e;
case 0x62125f:c.instructions+=3;goto B62125f;
case 0x621266:c.instructions+=2;goto B621266;
case 0x621267:c.instructions+=1;goto B621267;
case 0x62126c:goto L62126c;
case 0x621270:c.instructions+=4;goto B621270;
case 0x621277:c.instructions+=3;goto B621277;
case 0x62127a:c.instructions+=2;goto B62127a;
case 0x62127c:c.instructions+=1;goto B62127c;
case 0x62127e:goto L62127e;
case 0x621282:c.instructions+=4;goto B621282;
case 0x621288:c.instructions+=3;goto B621288;
case 0x62128a:c.instructions+=2;goto B62128a;
case 0x62128d:c.instructions+=1;goto B62128d;
case 0x62128f:goto L62128f;
case 0x621292:c.instructions+=2;goto B621292;
case 0x621296:c.instructions+=1;goto B621296;
case 0x621298:goto L621298;
case 0x62129f:c.instructions+=10;goto B62129f;
case 0x6212a6:c.instructions+=9;goto B6212a6;
case 0x6212ac:c.instructions+=8;goto B6212ac;
case 0x6212b3:c.instructions+=7;goto B6212b3;
case 0x6212b5:c.instructions+=6;goto B6212b5;
case 0x6212bc:c.instructions+=5;goto B6212bc;
case 0x6212bd:c.instructions+=4;goto B6212bd;
case 0x6212c4:c.instructions+=3;goto B6212c4;
case 0x6212c5:c.instructions+=2;goto B6212c5;
case 0x6212c6:c.instructions+=1;goto B6212c6;
case 0x6212cb:goto L6212cb;
case 0x6212ce:c.instructions+=2;goto B6212ce;
case 0x6212d0:c.instructions+=1;goto B6212d0;
case 0x6212d6:goto L6212d6;
case 0x6212dd:c.instructions+=2;goto B6212dd;
case 0x6212e3:c.instructions+=1;goto B6212e3;
case 0x6212ea:goto L6212ea;
case 0x6212f1:c.instructions+=3;goto B6212f1;
case 0x6212f3:c.instructions+=2;goto B6212f3;
case 0x6212f5:c.instructions+=1;goto B6212f5;
case 0x6212f7:goto L6212f7;
case 0x6212fe:goto L6212fe;
case 0x621302:c.instructions+=5;goto B621302;
case 0x621303:c.instructions+=4;goto B621303;
case 0x62130a:c.instructions+=3;goto B62130a;
case 0x62130b:c.instructions+=2;goto B62130b;
case 0x621311:c.instructions+=1;goto B621311;
case 0x621316:goto L621316;
case 0x621317:c.instructions+=2;goto B621317;
case 0x621318:c.instructions+=1;goto B621318;
case 0x62131d:goto L62131d;
case 0x621323:c.instructions+=13;goto B621323;
case 0x621326:c.instructions+=12;goto B621326;
case 0x621329:c.instructions+=11;goto B621329;
case 0x62132c:c.instructions+=10;goto B62132c;
case 0x621331:c.instructions+=9;goto B621331;
case 0x621333:c.instructions+=8;goto B621333;
case 0x621339:c.instructions+=7;goto B621339;
case 0x62133d:c.instructions+=6;goto B62133d;
case 0x621344:c.instructions+=5;goto B621344;
case 0x621348:c.instructions+=4;goto B621348;
case 0x62134e:c.instructions+=3;goto B62134e;
case 0x621355:c.instructions+=2;goto B621355;
case 0x62135c:c.instructions+=1;goto B62135c;
case 0x62135e:goto L62135e;
case 0x621364:c.instructions+=2;goto B621364;
case 0x621366:c.instructions+=1;goto B621366;
case 0x621368:goto L621368;
case 0x62136c:c.instructions+=1;goto B62136c;
case 0x62136e:goto L62136e;
case 0x621372:c.instructions+=3;goto B621372;
case 0x621378:c.instructions+=2;goto B621378;
case 0x62137f:c.instructions+=1;goto B62137f;
case 0x621386:goto L621386;
case 0x621389:c.instructions+=2;goto B621389;
case 0x62138b:c.instructions+=1;goto B62138b;
case 0x621391:goto L621391;
case 0x621394:c.instructions+=4;goto B621394;
case 0x621395:c.instructions+=3;goto B621395;
case 0x62139a:c.instructions+=2;goto B62139a;
case 0x62139b:c.instructions+=1;goto B62139b;
case 0x6213a0:goto L6213a0;
case 0x6213a7:c.instructions+=5;goto B6213a7;
case 0x6213aa:c.instructions+=4;goto B6213aa;
case 0x6213ab:c.instructions+=3;goto B6213ab;
case 0x6213ae:c.instructions+=2;goto B6213ae;
case 0x6213af:c.instructions+=1;goto B6213af;
case 0x6213b4:goto L6213b4;
case 0x6213bb:c.instructions+=2;goto B6213bb;
case 0x6213bc:c.instructions+=1;goto B6213bc;
case 0x6213c1:goto L6213c1;
case 0x6213c4:c.instructions+=205;goto B6213c4;
case 0x6213c6:c.instructions+=204;goto B6213c6;
case 0x6213c8:c.instructions+=203;goto B6213c8;
case 0x6213cf:c.instructions+=202;goto B6213cf;
case 0x6213d2:c.instructions+=201;goto B6213d2;
case 0x6213d4:c.instructions+=200;goto B6213d4;
case 0x6213db:c.instructions+=199;goto B6213db;
case 0x6213de:c.instructions+=198;goto B6213de;
case 0x6213e0:c.instructions+=197;goto B6213e0;
case 0x6213e7:c.instructions+=196;goto B6213e7;
case 0x6213ee:c.instructions+=195;goto B6213ee;
case 0x6213f0:c.instructions+=194;goto B6213f0;
case 0x6213f7:c.instructions+=193;goto B6213f7;
case 0x6213fa:c.instructions+=192;goto B6213fa;
case 0x6213fc:c.instructions+=191;goto B6213fc;
case 0x621403:c.instructions+=190;goto B621403;
case 0x621406:c.instructions+=189;goto B621406;
case 0x621408:c.instructions+=188;goto B621408;
case 0x62140f:c.instructions+=187;goto B62140f;
case 0x621412:c.instructions+=186;goto B621412;
case 0x621414:c.instructions+=185;goto B621414;
case 0x62141b:c.instructions+=184;goto B62141b;
case 0x621422:c.instructions+=183;goto B621422;
case 0x621425:c.instructions+=182;goto B621425;
case 0x62142c:c.instructions+=181;goto B62142c;
case 0x62142f:c.instructions+=180;goto B62142f;
case 0x621431:c.instructions+=179;goto B621431;
case 0x621438:c.instructions+=178;goto B621438;
case 0x62143b:c.instructions+=177;goto B62143b;
case 0x62143d:c.instructions+=176;goto B62143d;
case 0x621444:c.instructions+=175;goto B621444;
case 0x621447:c.instructions+=174;goto B621447;
case 0x621449:c.instructions+=173;goto B621449;
case 0x621450:c.instructions+=172;goto B621450;
case 0x621457:c.instructions+=171;goto B621457;
case 0x62145a:c.instructions+=170;goto B62145a;
case 0x621461:c.instructions+=169;goto B621461;
case 0x621464:c.instructions+=168;goto B621464;
case 0x621466:c.instructions+=167;goto B621466;
case 0x62146d:c.instructions+=166;goto B62146d;
case 0x621470:c.instructions+=165;goto B621470;
case 0x621472:c.instructions+=164;goto B621472;
case 0x621479:c.instructions+=163;goto B621479;
case 0x62147c:c.instructions+=162;goto B62147c;
case 0x62147e:c.instructions+=161;goto B62147e;
case 0x621485:c.instructions+=160;goto B621485;
case 0x62148c:c.instructions+=159;goto B62148c;
case 0x62148f:c.instructions+=158;goto B62148f;
case 0x621496:c.instructions+=157;goto B621496;
case 0x621499:c.instructions+=156;goto B621499;
case 0x62149b:c.instructions+=155;goto B62149b;
case 0x6214a2:c.instructions+=154;goto B6214a2;
case 0x6214a5:c.instructions+=153;goto B6214a5;
case 0x6214a7:c.instructions+=152;goto B6214a7;
case 0x6214ae:c.instructions+=151;goto B6214ae;
case 0x6214b1:c.instructions+=150;goto B6214b1;
case 0x6214b3:c.instructions+=149;goto B6214b3;
case 0x6214ba:c.instructions+=148;goto B6214ba;
case 0x6214c1:c.instructions+=147;goto B6214c1;
case 0x6214c3:c.instructions+=146;goto B6214c3;
case 0x6214ca:c.instructions+=145;goto B6214ca;
case 0x6214cd:c.instructions+=144;goto B6214cd;
case 0x6214cf:c.instructions+=143;goto B6214cf;
case 0x6214d6:c.instructions+=142;goto B6214d6;
case 0x6214d9:c.instructions+=141;goto B6214d9;
case 0x6214db:c.instructions+=140;goto B6214db;
case 0x6214e2:c.instructions+=139;goto B6214e2;
case 0x6214e5:c.instructions+=138;goto B6214e5;
case 0x6214e7:c.instructions+=137;goto B6214e7;
case 0x6214ee:c.instructions+=136;goto B6214ee;
case 0x6214f5:c.instructions+=135;goto B6214f5;
case 0x6214f8:c.instructions+=134;goto B6214f8;
case 0x6214ff:c.instructions+=133;goto B6214ff;
case 0x621502:c.instructions+=132;goto B621502;
case 0x621504:c.instructions+=131;goto B621504;
case 0x62150b:c.instructions+=130;goto B62150b;
case 0x62150e:c.instructions+=129;goto B62150e;
case 0x621510:c.instructions+=128;goto B621510;
case 0x621517:c.instructions+=127;goto B621517;
case 0x62151a:c.instructions+=126;goto B62151a;
case 0x62151c:c.instructions+=125;goto B62151c;
case 0x621523:c.instructions+=124;goto B621523;
case 0x62152a:c.instructions+=123;goto B62152a;
case 0x62152d:c.instructions+=122;goto B62152d;
case 0x621534:c.instructions+=121;goto B621534;
case 0x621537:c.instructions+=120;goto B621537;
case 0x621539:c.instructions+=119;goto B621539;
case 0x621540:c.instructions+=118;goto B621540;
case 0x621543:c.instructions+=117;goto B621543;
case 0x621545:c.instructions+=116;goto B621545;
case 0x62154c:c.instructions+=115;goto B62154c;
case 0x62154f:c.instructions+=114;goto B62154f;
case 0x621551:c.instructions+=113;goto B621551;
case 0x621558:c.instructions+=112;goto B621558;
case 0x62155f:c.instructions+=111;goto B62155f;
case 0x621562:c.instructions+=110;goto B621562;
case 0x621569:c.instructions+=109;goto B621569;
case 0x62156c:c.instructions+=108;goto B62156c;
case 0x62156e:c.instructions+=107;goto B62156e;
case 0x621575:c.instructions+=106;goto B621575;
case 0x621578:c.instructions+=105;goto B621578;
case 0x62157a:c.instructions+=104;goto B62157a;
case 0x621581:c.instructions+=103;goto B621581;
case 0x621584:c.instructions+=102;goto B621584;
case 0x621586:c.instructions+=101;goto B621586;
case 0x62158d:c.instructions+=100;goto B62158d;
case 0x621594:c.instructions+=99;goto B621594;
case 0x621597:c.instructions+=98;goto B621597;
case 0x62159e:c.instructions+=97;goto B62159e;
case 0x6215a1:c.instructions+=96;goto B6215a1;
case 0x6215a3:c.instructions+=95;goto B6215a3;
case 0x6215aa:c.instructions+=94;goto B6215aa;
case 0x6215ad:c.instructions+=93;goto B6215ad;
case 0x6215af:c.instructions+=92;goto B6215af;
case 0x6215b6:c.instructions+=91;goto B6215b6;
case 0x6215b8:c.instructions+=90;goto B6215b8;
case 0x6215ba:c.instructions+=89;goto B6215ba;
case 0x6215c1:c.instructions+=88;goto B6215c1;
case 0x6215c8:c.instructions+=87;goto B6215c8;
case 0x6215cb:c.instructions+=86;goto B6215cb;
case 0x6215d2:c.instructions+=85;goto B6215d2;
case 0x6215d5:c.instructions+=84;goto B6215d5;
case 0x6215d7:c.instructions+=83;goto B6215d7;
case 0x6215de:c.instructions+=82;goto B6215de;
case 0x6215e1:c.instructions+=81;goto B6215e1;
case 0x6215e3:c.instructions+=80;goto B6215e3;
case 0x6215ea:c.instructions+=79;goto B6215ea;
case 0x6215ed:c.instructions+=78;goto B6215ed;
case 0x6215ef:c.instructions+=77;goto B6215ef;
case 0x6215f6:c.instructions+=76;goto B6215f6;
case 0x6215fd:c.instructions+=75;goto B6215fd;
case 0x621600:c.instructions+=74;goto B621600;
case 0x621607:c.instructions+=73;goto B621607;
case 0x62160a:c.instructions+=72;goto B62160a;
case 0x62160c:c.instructions+=71;goto B62160c;
case 0x621613:c.instructions+=70;goto B621613;
case 0x621616:c.instructions+=69;goto B621616;
case 0x621618:c.instructions+=68;goto B621618;
case 0x62161f:c.instructions+=67;goto B62161f;
case 0x621622:c.instructions+=66;goto B621622;
case 0x621624:c.instructions+=65;goto B621624;
case 0x62162b:c.instructions+=64;goto B62162b;
case 0x621632:c.instructions+=63;goto B621632;
case 0x621635:c.instructions+=62;goto B621635;
case 0x62163c:c.instructions+=61;goto B62163c;
case 0x62163f:c.instructions+=60;goto B62163f;
case 0x621641:c.instructions+=59;goto B621641;
case 0x621648:c.instructions+=58;goto B621648;
case 0x62164b:c.instructions+=57;goto B62164b;
case 0x62164d:c.instructions+=56;goto B62164d;
case 0x621654:c.instructions+=55;goto B621654;
case 0x621657:c.instructions+=54;goto B621657;
case 0x621659:c.instructions+=53;goto B621659;
case 0x621660:c.instructions+=52;goto B621660;
case 0x621667:c.instructions+=51;goto B621667;
case 0x62166a:c.instructions+=50;goto B62166a;
case 0x621671:c.instructions+=49;goto B621671;
case 0x621674:c.instructions+=48;goto B621674;
case 0x621676:c.instructions+=47;goto B621676;
case 0x62167d:c.instructions+=46;goto B62167d;
case 0x62167f:c.instructions+=45;goto B62167f;
case 0x621681:c.instructions+=44;goto B621681;
case 0x621688:c.instructions+=43;goto B621688;
case 0x62168b:c.instructions+=42;goto B62168b;
case 0x62168d:c.instructions+=41;goto B62168d;
case 0x621694:c.instructions+=40;goto B621694;
case 0x62169b:c.instructions+=39;goto B62169b;
case 0x62169e:c.instructions+=38;goto B62169e;
case 0x6216a5:c.instructions+=37;goto B6216a5;
case 0x6216a8:c.instructions+=36;goto B6216a8;
case 0x6216aa:c.instructions+=35;goto B6216aa;
case 0x6216b1:c.instructions+=34;goto B6216b1;
case 0x6216b4:c.instructions+=33;goto B6216b4;
case 0x6216b6:c.instructions+=32;goto B6216b6;
case 0x6216bd:c.instructions+=31;goto B6216bd;
case 0x6216c4:c.instructions+=30;goto B6216c4;
case 0x6216c7:c.instructions+=29;goto B6216c7;
case 0x6216c8:c.instructions+=28;goto B6216c8;
case 0x6216c9:c.instructions+=27;goto B6216c9;
case 0x6216cb:c.instructions+=26;goto B6216cb;
case 0x6216d2:c.instructions+=25;goto B6216d2;
case 0x6216d9:c.instructions+=24;goto B6216d9;
case 0x6216dc:c.instructions+=23;goto B6216dc;
case 0x6216e3:c.instructions+=22;goto B6216e3;
case 0x6216e6:c.instructions+=21;goto B6216e6;
case 0x6216e8:c.instructions+=20;goto B6216e8;
case 0x6216ef:c.instructions+=19;goto B6216ef;
case 0x6216f2:c.instructions+=18;goto B6216f2;
case 0x6216f4:c.instructions+=17;goto B6216f4;
case 0x6216fb:c.instructions+=16;goto B6216fb;
case 0x6216fe:c.instructions+=15;goto B6216fe;
case 0x621700:c.instructions+=14;goto B621700;
case 0x621707:c.instructions+=13;goto B621707;
case 0x62170e:c.instructions+=12;goto B62170e;
case 0x621711:c.instructions+=11;goto B621711;
case 0x621718:c.instructions+=10;goto B621718;
case 0x62171b:c.instructions+=9;goto B62171b;
case 0x62171d:c.instructions+=8;goto B62171d;
case 0x621724:c.instructions+=7;goto B621724;
case 0x621727:c.instructions+=6;goto B621727;
case 0x621729:c.instructions+=5;goto B621729;
case 0x621730:c.instructions+=4;goto B621730;
case 0x621733:c.instructions+=3;goto B621733;
case 0x621735:c.instructions+=2;goto B621735;
case 0x62173c:c.instructions+=1;goto B62173c;
case 0x621741:goto L621741;
case 0x621745:c.instructions+=16;goto B621745;
case 0x621748:c.instructions+=15;goto B621748;
case 0x62174b:c.instructions+=14;goto B62174b;
case 0x62174d:c.instructions+=13;goto B62174d;
case 0x621750:c.instructions+=12;goto B621750;
case 0x621753:c.instructions+=11;goto B621753;
case 0x621756:c.instructions+=10;goto B621756;
case 0x621758:c.instructions+=9;goto B621758;
case 0x62175a:c.instructions+=8;goto B62175a;
case 0x621760:c.instructions+=7;goto B621760;
case 0x621767:c.instructions+=6;goto B621767;
case 0x62176a:c.instructions+=5;goto B62176a;
case 0x621770:c.instructions+=4;goto B621770;
case 0x621772:c.instructions+=3;goto B621772;
case 0x621778:c.instructions+=2;goto B621778;
case 0x62177f:c.instructions+=1;goto B62177f;
case 0x621785:goto L621785;
case 0x62178a:c.instructions+=3;goto B62178a;
case 0x62178c:c.instructions+=2;goto B62178c;
case 0x621790:c.instructions+=1;goto B621790;
case 0x621792:goto L621792;
case 0x621794:c.instructions+=5;goto B621794;
case 0x621799:c.instructions+=4;goto B621799;
case 0x62179b:c.instructions+=3;goto B62179b;
case 0x6217a0:c.instructions+=2;goto B6217a0;
case 0x6217a2:c.instructions+=1;goto B6217a2;
case 0x6217a7:goto L6217a7;
case 0x6217ad:goto L6217ad;
case 0x6217b8:c.instructions+=27;goto B6217b8;
case 0x6217c3:c.instructions+=26;goto B6217c3;
case 0x6217ce:c.instructions+=25;goto B6217ce;
case 0x6217d0:c.instructions+=24;goto B6217d0;
case 0x6217d3:c.instructions+=23;goto B6217d3;
case 0x6217d6:c.instructions+=22;goto B6217d6;
case 0x6217dc:c.instructions+=21;goto B6217dc;
case 0x6217df:c.instructions+=20;goto B6217df;
case 0x6217e2:c.instructions+=19;goto B6217e2;
case 0x6217e5:c.instructions+=18;goto B6217e5;
case 0x6217e8:c.instructions+=17;goto B6217e8;
case 0x6217ee:c.instructions+=16;goto B6217ee;
case 0x6217f1:c.instructions+=15;goto B6217f1;
case 0x6217f4:c.instructions+=14;goto B6217f4;
case 0x6217f7:c.instructions+=13;goto B6217f7;
case 0x6217fa:c.instructions+=12;goto B6217fa;
case 0x621800:c.instructions+=11;goto B621800;
case 0x621803:c.instructions+=10;goto B621803;
case 0x62180a:c.instructions+=9;goto B62180a;
case 0x621811:c.instructions+=8;goto B621811;
case 0x621813:c.instructions+=7;goto B621813;
case 0x62181a:c.instructions+=6;goto B62181a;
case 0x621821:c.instructions+=5;goto B621821;
case 0x621828:c.instructions+=4;goto B621828;
case 0x62182a:c.instructions+=3;goto B62182a;
case 0x621831:c.instructions+=2;goto B621831;
case 0x621837:c.instructions+=1;goto B621837;
case 0x621839:goto L621839;
case 0x62183b:c.instructions+=7;goto B62183b;
case 0x62183d:c.instructions+=6;goto B62183d;
case 0x62183f:c.instructions+=5;goto B62183f;
case 0x621841:c.instructions+=4;goto B621841;
case 0x621848:c.instructions+=3;goto B621848;
case 0x621849:c.instructions+=2;goto B621849;
case 0x62184d:c.instructions+=1;goto B62184d;
case 0x621852:goto L621852;
case 0x621859:goto L621859;
case 0x62185f:c.instructions+=4;goto B62185f;
case 0x62186a:c.instructions+=3;goto B62186a;
case 0x62186c:c.instructions+=2;goto B62186c;
case 0x62186f:c.instructions+=1;goto B62186f;
case 0x621871:goto L621871;
case 0x621877:c.instructions+=3;goto B621877;
case 0x621879:c.instructions+=2;goto B621879;
case 0x62187c:c.instructions+=1;goto B62187c;
case 0x62187e:goto L62187e;
case 0x621884:c.instructions+=5;goto B621884;
case 0x62188a:c.instructions+=4;goto B62188a;
case 0x621890:c.instructions+=3;goto B621890;
case 0x621892:c.instructions+=2;goto B621892;
case 0x621899:c.instructions+=1;goto B621899;
case 0x62189b:goto L62189b;
case 0x6218a3:c.instructions+=1;goto B6218a3;
case 0x6218a8:goto L6218a8;
case 0x6218ae:c.instructions+=3;goto B6218ae;
case 0x6218b0:c.instructions+=2;goto B6218b0;
case 0x6218b3:c.instructions+=1;goto B6218b3;
case 0x6218b5:goto L6218b5;
case 0x6218c0:goto L6218c0;
case 0x6218c7:c.instructions+=4;goto B6218c7;
case 0x6218cc:c.instructions+=3;goto B6218cc;
case 0x6218ce:c.instructions+=2;goto B6218ce;
case 0x6218cf:c.instructions+=1;goto B6218cf;
case 0x6218d4:goto L6218d4;
case 0x6218db:c.instructions+=6;goto B6218db;
case 0x6218e1:c.instructions+=5;goto B6218e1;
case 0x6218e4:c.instructions+=4;goto B6218e4;
case 0x6218ea:c.instructions+=3;goto B6218ea;
case 0x6218ec:c.instructions+=2;goto B6218ec;
case 0x6218ef:c.instructions+=1;goto B6218ef;
case 0x6218f1:goto L6218f1;
case 0x6218f6:c.instructions+=1;goto B6218f6;
case 0x6218fd:goto L6218fd;
case 0x621904:c.instructions+=2;goto B621904;
case 0x621906:c.instructions+=1;goto B621906;
case 0x621908:goto L621908;
case 0x62190c:c.instructions+=1;goto B62190c;
case 0x62190e:goto L62190e;
case 0x621911:c.instructions+=1;goto B621911;
case 0x621915:goto L621915;
case 0x62191a:c.instructions+=1;goto B62191a;
case 0x621920:goto L621920;
case 0x621927:c.instructions+=2;goto B621927;
case 0x621929:c.instructions+=1;goto B621929;
case 0x62192f:goto L62192f;
case 0x621933:c.instructions+=2;goto B621933;
case 0x621935:c.instructions+=1;goto B621935;
case 0x62193b:goto L62193b;
case 0x621940:c.instructions+=2;goto B621940;
case 0x621942:c.instructions+=1;goto B621942;
case 0x621948:goto L621948;
case 0x62194f:c.instructions+=1;goto B62194f;
case 0x621955:goto L621955;
case 0x621959:c.instructions+=3;goto B621959;
case 0x62195f:c.instructions+=2;goto B62195f;
case 0x621961:c.instructions+=1;goto B621961;
case 0x621967:goto L621967;
case 0x62196a:c.instructions+=2;goto B62196a;
case 0x62196b:c.instructions+=1;goto B62196b;
case 0x621970:goto L621970;
case 0x621973:c.instructions+=2;goto B621973;
case 0x621975:c.instructions+=1;goto B621975;
case 0x62197b:goto L62197b;
case 0x62197f:c.instructions+=3;goto B62197f;
case 0x621981:c.instructions+=2;goto B621981;
case 0x621983:c.instructions+=1;goto B621983;
case 0x621986:goto L621986;
case 0x621989:c.instructions+=5;goto B621989;
case 0x621990:c.instructions+=4;goto B621990;
case 0x621993:c.instructions+=3;goto B621993;
case 0x621994:c.instructions+=2;goto B621994;
case 0x62199b:c.instructions+=1;goto B62199b;
case 0x6219a0:goto L6219a0;
case 0x6219a3:c.instructions+=3;goto B6219a3;
case 0x6219a4:c.instructions+=2;goto B6219a4;
case 0x6219ab:c.instructions+=1;goto B6219ab;
case 0x6219b0:goto L6219b0;
case 0x6219b7:c.instructions+=1;goto B6219b7;
case 0x6219bc:goto L6219bc;
case 0x6219bf:c.instructions+=8;goto B6219bf;
case 0x6219c2:c.instructions+=7;goto B6219c2;
case 0x6219c8:c.instructions+=6;goto B6219c8;
case 0x6219cf:c.instructions+=5;goto B6219cf;
case 0x6219d6:c.instructions+=4;goto B6219d6;
case 0x6219d8:c.instructions+=3;goto B6219d8;
case 0x6219df:c.instructions+=2;goto B6219df;
case 0x6219ea:c.instructions+=1;goto B6219ea;
case 0x6219f0:goto L6219f0;
case 0x6219f8:c.instructions+=1;goto B6219f8;
case 0x621a00:goto L621a00;
case 0x621a07:c.instructions+=5;goto B621a07;
case 0x621a0e:c.instructions+=4;goto B621a0e;
case 0x621a15:c.instructions+=3;goto B621a15;
case 0x621a16:c.instructions+=2;goto B621a16;
case 0x621a17:c.instructions+=1;goto B621a17;
case 0x621a1c:goto L621a1c;
case 0x621a23:c.instructions+=18;goto B621a23;
case 0x621a29:c.instructions+=17;goto B621a29;
case 0x621a30:c.instructions+=16;goto B621a30;
case 0x621a37:c.instructions+=15;goto B621a37;
case 0x621a3a:c.instructions+=14;goto B621a3a;
case 0x621a3c:c.instructions+=13;goto B621a3c;
case 0x621a3e:c.instructions+=12;goto B621a3e;
case 0x621a41:c.instructions+=11;goto B621a41;
case 0x621a48:c.instructions+=10;goto B621a48;
case 0x621a4f:c.instructions+=9;goto B621a4f;
case 0x621a56:c.instructions+=8;goto B621a56;
case 0x621a59:c.instructions+=7;goto B621a59;
case 0x621a60:c.instructions+=6;goto B621a60;
case 0x621a67:c.instructions+=5;goto B621a67;
case 0x621a6a:c.instructions+=4;goto B621a6a;
case 0x621a71:c.instructions+=3;goto B621a71;
case 0x621a72:c.instructions+=2;goto B621a72;
case 0x621a79:c.instructions+=1;goto B621a79;
case 0x621a7e:goto L621a7e;
case 0x621a85:c.instructions+=3;goto B621a85;
case 0x621a86:c.instructions+=2;goto B621a86;
case 0x621a8d:c.instructions+=1;goto B621a8d;
case 0x621a92:goto L621a92;
case 0x621a95:c.instructions+=8;goto B621a95;
case 0x621a9c:c.instructions+=7;goto B621a9c;
case 0x621aa3:c.instructions+=6;goto B621aa3;
case 0x621aa4:c.instructions+=5;goto B621aa4;
case 0x621aab:c.instructions+=4;goto B621aab;
case 0x621ab2:c.instructions+=3;goto B621ab2;
case 0x621ab4:c.instructions+=2;goto B621ab4;
case 0x621abb:c.instructions+=1;goto B621abb;
case 0x621ac0:goto L621ac0;
case 0x621ac7:c.instructions+=8;goto B621ac7;
case 0x621ace:c.instructions+=7;goto B621ace;
case 0x621ad4:c.instructions+=6;goto B621ad4;
case 0x621ad5:c.instructions+=5;goto B621ad5;
case 0x621adc:c.instructions+=4;goto B621adc;
case 0x621ade:c.instructions+=3;goto B621ade;
case 0x621ae2:c.instructions+=2;goto B621ae2;
case 0x621ae5:c.instructions+=1;goto B621ae5;
case 0x621aea:goto L621aea;
case 0x621aed:c.instructions+=16;goto B621aed;
case 0x621af1:c.instructions+=15;goto B621af1;
case 0x621af8:c.instructions+=14;goto B621af8;
case 0x621afa:c.instructions+=13;goto B621afa;
case 0x621afc:c.instructions+=12;goto B621afc;
case 0x621aff:c.instructions+=11;goto B621aff;
case 0x621b06:c.instructions+=10;goto B621b06;
case 0x621b07:c.instructions+=9;goto B621b07;
case 0x621b0d:c.instructions+=8;goto B621b0d;
case 0x621b11:c.instructions+=7;goto B621b11;
case 0x621b18:c.instructions+=6;goto B621b18;
case 0x621b1a:c.instructions+=5;goto B621b1a;
case 0x621b1d:c.instructions+=4;goto B621b1d;
case 0x621b24:c.instructions+=3;goto B621b24;
case 0x621b26:c.instructions+=2;goto B621b26;
case 0x621b28:c.instructions+=1;goto B621b28;
case 0x621b2e:goto L621b2e;
case 0x621b35:c.instructions+=13;goto B621b35;
case 0x621b3b:c.instructions+=12;goto B621b3b;
case 0x621b40:c.instructions+=11;goto B621b40;
case 0x621b46:c.instructions+=10;goto B621b46;
case 0x621b47:c.instructions+=9;goto B621b47;
case 0x621b48:c.instructions+=8;goto B621b48;
case 0x621b49:c.instructions+=7;goto B621b49;
case 0x621b4d:c.instructions+=6;goto B621b4d;
case 0x621b50:c.instructions+=5;goto B621b50;
case 0x621b51:c.instructions+=4;goto B621b51;
case 0x621b58:c.instructions+=3;goto B621b58;
case 0x621b59:c.instructions+=2;goto B621b59;
case 0x621b5e:c.instructions+=1;goto B621b5e;
case 0x621b63:goto L621b63;
case 0x621b6a:c.instructions+=3;goto B621b6a;
case 0x621b6d:c.instructions+=2;goto B621b6d;
case 0x621b6f:c.instructions+=1;goto B621b6f;
case 0x621b71:goto L621b71;
case 0x621b76:c.instructions+=2;goto B621b76;
case 0x621b78:c.instructions+=1;goto B621b78;
case 0x621b7a:goto L621b7a;
case 0x621b81:c.instructions+=2;goto B621b81;
case 0x621b8c:c.instructions+=1;goto B621b8c;
case 0x621b8e:goto L621b8e;
case 0x621b95:c.instructions+=2;goto B621b95;
case 0x621b96:c.instructions+=1;goto B621b96;
case 0x621b9b:goto L621b9b;
case 0x621b9e:c.instructions+=2;goto B621b9e;
case 0x621ba5:c.instructions+=1;goto B621ba5;
case 0x621bb0:goto L621bb0;
case 0x621bb3:c.instructions+=1;goto B621bb3;
case 0x621bb9:goto L621bb9;
case 0x621bc0:c.instructions+=9;goto B621bc0;
case 0x621bc1:c.instructions+=8;goto B621bc1;
case 0x621bc3:c.instructions+=7;goto B621bc3;
case 0x621bc5:c.instructions+=6;goto B621bc5;
case 0x621bc8:c.instructions+=5;goto B621bc8;
case 0x621bca:c.instructions+=4;goto B621bca;
case 0x621bcb:c.instructions+=3;goto B621bcb;
case 0x621bd2:c.instructions+=2;goto B621bd2;
case 0x621bd3:c.instructions+=1;goto B621bd3;
case 0x621bd8:goto L621bd8;
case 0x621bdb:c.instructions+=20;goto B621bdb;
case 0x621bde:c.instructions+=19;goto B621bde;
case 0x621be0:c.instructions+=18;goto B621be0;
case 0x621be4:c.instructions+=17;goto B621be4;
case 0x621be7:c.instructions+=16;goto B621be7;
case 0x621bed:c.instructions+=15;goto B621bed;
case 0x621bf4:c.instructions+=14;goto B621bf4;
case 0x621bf6:c.instructions+=13;goto B621bf6;
case 0x621bfc:c.instructions+=12;goto B621bfc;
case 0x621c03:c.instructions+=11;goto B621c03;
case 0x621c09:c.instructions+=10;goto B621c09;
case 0x621c10:c.instructions+=9;goto B621c10;
case 0x621c17:c.instructions+=8;goto B621c17;
case 0x621c1d:c.instructions+=7;goto B621c1d;
case 0x621c23:c.instructions+=6;goto B621c23;
case 0x621c29:c.instructions+=5;goto B621c29;
case 0x621c2f:c.instructions+=4;goto B621c2f;
case 0x621c36:c.instructions+=3;goto B621c36;
case 0x621c3c:c.instructions+=2;goto B621c3c;
case 0x621c42:c.instructions+=1;goto B621c42;
case 0x621c44:goto L621c44;
case 0x621c48:c.instructions+=5;goto B621c48;
case 0x621c4e:c.instructions+=4;goto B621c4e;
case 0x621c54:c.instructions+=3;goto B621c54;
case 0x621c5a:c.instructions+=2;goto B621c5a;
case 0x621c5c:c.instructions+=1;goto B621c5c;
case 0x621c5e:goto L621c5e;
case 0x621c63:goto L621c63;
case 0x621c65:c.instructions+=1;goto B621c65;
case 0x621c67:goto L621c67;
case 0x621c69:c.instructions+=1;goto B621c69;
case 0x621c6b:goto L621c6b;
case 0x621c70:c.instructions+=1;goto B621c70;
case 0x621c72:goto L621c72;
case 0x621c77:goto L621c77;
case 0x621c7a:c.instructions+=5;goto B621c7a;
case 0x621c7f:c.instructions+=4;goto B621c7f;
case 0x621c86:c.instructions+=3;goto B621c86;
case 0x621c8b:c.instructions+=2;goto B621c8b;
case 0x621c8d:c.instructions+=1;goto B621c8d;
case 0x621c93:goto L621c93;
case 0x621c9a:c.instructions+=6;goto B621c9a;
case 0x621c9d:c.instructions+=5;goto B621c9d;
case 0x621c9e:c.instructions+=4;goto B621c9e;
case 0x621ca0:c.instructions+=3;goto B621ca0;
case 0x621cab:c.instructions+=2;goto B621cab;
case 0x621cb2:c.instructions+=1;goto B621cb2;
case 0x621cb8:goto L621cb8;
case 0x621cbf:c.instructions+=1;goto B621cbf;
case 0x621cc3:goto L621cc3;
case 0x621cc7:c.instructions+=5;goto B621cc7;
case 0x621ccd:c.instructions+=4;goto B621ccd;
case 0x621cce:c.instructions+=3;goto B621cce;
case 0x621cd0:c.instructions+=2;goto B621cd0;
case 0x621cd1:c.instructions+=1;goto B621cd1;
case 0x621cd6:goto L621cd6;
case 0x621cd9:c.instructions+=2;goto B621cd9;
case 0x621cdb:c.instructions+=1;goto B621cdb;
case 0x621ce1:goto L621ce1;
case 0x621ce5:c.instructions+=2;goto B621ce5;
case 0x621ce6:c.instructions+=1;goto B621ce6;
case 0x621ceb:goto L621ceb;
case 0x621cf2:c.instructions+=2;goto B621cf2;
case 0x621cf3:c.instructions+=1;goto B621cf3;
case 0x621cf8:goto L621cf8;
case 0x621cfc:c.instructions+=3;goto B621cfc;
case 0x621cff:c.instructions+=2;goto B621cff;
case 0x621d00:c.instructions+=1;goto B621d00;
case 0x621d05:goto L621d05;
case 0x621d0c:c.instructions+=8;goto B621d0c;
case 0x621d0f:c.instructions+=7;goto B621d0f;
case 0x621d10:c.instructions+=6;goto B621d10;
case 0x621d17:c.instructions+=5;goto B621d17;
case 0x621d1e:c.instructions+=4;goto B621d1e;
case 0x621d21:c.instructions+=3;goto B621d21;
case 0x621d23:c.instructions+=2;goto B621d23;
case 0x621d24:c.instructions+=1;goto B621d24;
case 0x621d29:goto L621d29;
case 0x621d30:c.instructions+=2;goto B621d30;
case 0x621d31:c.instructions+=1;goto B621d31;
case 0x621d36:goto L621d36;
case 0x621d3d:c.instructions+=2;goto B621d3d;
case 0x621d3e:c.instructions+=1;goto B621d3e;
case 0x621d43:goto L621d43;
case 0x621d4a:c.instructions+=2;goto B621d4a;
case 0x621d4b:c.instructions+=1;goto B621d4b;
case 0x621d50:goto L621d50;
case 0x621d57:c.instructions+=2;goto B621d57;
case 0x621d58:c.instructions+=1;goto B621d58;
case 0x621d5d:goto L621d5d;
case 0x621d63:c.instructions+=3;goto B621d63;
case 0x621d65:c.instructions+=2;goto B621d65;
case 0x621d66:c.instructions+=1;goto B621d66;
case 0x621d6b:goto L621d6b;
case 0x621d6d:c.instructions+=2;goto B621d6d;
case 0x621d6f:c.instructions+=1;goto B621d6f;
case 0x621d74:goto L621d74;
case 0x621d7a:c.instructions+=3;goto B621d7a;
case 0x621d7c:c.instructions+=2;goto B621d7c;
case 0x621d7d:c.instructions+=1;goto B621d7d;
case 0x621d82:goto L621d82;
case 0x621d87:c.instructions+=3;goto B621d87;
case 0x621d89:c.instructions+=2;goto B621d89;
case 0x621d8a:c.instructions+=1;goto B621d8a;
case 0x621d8f:goto L621d8f;
case 0x621d92:c.instructions+=3;goto B621d92;
case 0x621d95:c.instructions+=2;goto B621d95;
case 0x621d96:c.instructions+=1;goto B621d96;
case 0x621d9b:goto L621d9b;
case 0x621d9e:goto L621d9e;
case 0x621da5:c.instructions+=8;goto B621da5;
case 0x621da9:c.instructions+=7;goto B621da9;
case 0x621db0:c.instructions+=6;goto B621db0;
case 0x621db3:c.instructions+=5;goto B621db3;
case 0x621db6:c.instructions+=4;goto B621db6;
case 0x621db8:c.instructions+=3;goto B621db8;
case 0x621dbf:c.instructions+=2;goto B621dbf;
case 0x621dc3:c.instructions+=1;goto B621dc3;
case 0x621dc9:goto L621dc9;
case 0x621dd1:c.instructions+=1;goto B621dd1;
case 0x621dd7:goto L621dd7;
case 0x621ddb:c.instructions+=5;goto B621ddb;
case 0x621de1:c.instructions+=4;goto B621de1;
case 0x621de2:c.instructions+=3;goto B621de2;
case 0x621de4:c.instructions+=2;goto B621de4;
case 0x621de5:c.instructions+=1;goto B621de5;
case 0x621dea:goto L621dea;
case 0x621ded:c.instructions+=2;goto B621ded;
case 0x621def:c.instructions+=1;goto B621def;
case 0x621df5:goto L621df5;
case 0x621dfc:c.instructions+=5;goto B621dfc;
case 0x621e03:c.instructions+=4;goto B621e03;
case 0x621e06:c.instructions+=3;goto B621e06;
case 0x621e0a:c.instructions+=2;goto B621e0a;
case 0x621e0b:c.instructions+=1;goto B621e0b;
case 0x621e10:goto L621e10;
case 0x621e17:c.instructions+=2;goto B621e17;
case 0x621e18:c.instructions+=1;goto B621e18;
case 0x621e1d:goto L621e1d;
case 0x621e24:c.instructions+=2;goto B621e24;
case 0x621e25:c.instructions+=1;goto B621e25;
case 0x621e2a:goto L621e2a;
case 0x621e31:c.instructions+=2;goto B621e31;
case 0x621e32:c.instructions+=1;goto B621e32;
case 0x621e37:goto L621e37;
case 0x621e3e:c.instructions+=2;goto B621e3e;
case 0x621e3f:c.instructions+=1;goto B621e3f;
case 0x621e44:goto L621e44;
case 0x621e4b:c.instructions+=2;goto B621e4b;
case 0x621e4c:c.instructions+=1;goto B621e4c;
case 0x621e51:goto L621e51;
case 0x621e56:c.instructions+=3;goto B621e56;
case 0x621e58:c.instructions+=2;goto B621e58;
case 0x621e59:c.instructions+=1;goto B621e59;
case 0x621e5e:goto L621e5e;
case 0x621e60:c.instructions+=2;goto B621e60;
case 0x621e62:c.instructions+=1;goto B621e62;
case 0x621e67:goto L621e67;
case 0x621e6d:c.instructions+=3;goto B621e6d;
case 0x621e6f:c.instructions+=2;goto B621e6f;
case 0x621e70:c.instructions+=1;goto B621e70;
case 0x621e75:goto L621e75;
case 0x621e78:c.instructions+=2;goto B621e78;
case 0x621e79:c.instructions+=1;goto B621e79;
case 0x621e7e:goto L621e7e;
case 0x621e81:goto L621e81;
case 0x621e86:c.instructions+=22;goto B621e86;
case 0x621e8d:c.instructions+=21;goto B621e8d;
case 0x621e8f:c.instructions+=20;goto B621e8f;
case 0x621e92:c.instructions+=19;goto B621e92;
case 0x621e94:c.instructions+=18;goto B621e94;
case 0x621e96:c.instructions+=17;goto B621e96;
case 0x621e99:c.instructions+=16;goto B621e99;
case 0x621ea0:c.instructions+=15;goto B621ea0;
case 0x621ea2:c.instructions+=14;goto B621ea2;
case 0x621ea4:c.instructions+=13;goto B621ea4;
case 0x621ea6:c.instructions+=12;goto B621ea6;
case 0x621ead:c.instructions+=11;goto B621ead;
case 0x621eb4:c.instructions+=10;goto B621eb4;
case 0x621eb8:c.instructions+=9;goto B621eb8;
case 0x621ebf:c.instructions+=8;goto B621ebf;
case 0x621eca:c.instructions+=7;goto B621eca;
case 0x621ed1:c.instructions+=6;goto B621ed1;
case 0x621ed8:c.instructions+=5;goto B621ed8;
case 0x621ed9:c.instructions+=4;goto B621ed9;
case 0x621edc:c.instructions+=3;goto B621edc;
case 0x621ee0:c.instructions+=2;goto B621ee0;
case 0x621ee4:c.instructions+=1;goto B621ee4;
case 0x621ee6:goto L621ee6;
case 0x621eea:goto L621eea;
case 0x621eee:c.instructions+=7;goto B621eee;
case 0x621ef2:c.instructions+=6;goto B621ef2;
case 0x621ef6:c.instructions+=5;goto B621ef6;
case 0x621efc:c.instructions+=4;goto B621efc;
case 0x621efd:c.instructions+=3;goto B621efd;
case 0x621efe:c.instructions+=2;goto B621efe;
case 0x621eff:c.instructions+=1;goto B621eff;
case 0x621f04:goto L621f04;
case 0x621f07:c.instructions+=2;goto B621f07;
case 0x621f09:c.instructions+=1;goto B621f09;
case 0x621f0f:goto L621f0f;
case 0x621f16:c.instructions+=5;goto B621f16;
case 0x621f1a:c.instructions+=4;goto B621f1a;
case 0x621f1c:c.instructions+=3;goto B621f1c;
case 0x621f1e:c.instructions+=2;goto B621f1e;
case 0x621f25:c.instructions+=1;goto B621f25;
case 0x621f2b:goto L621f2b;
case 0x621f2f:c.instructions+=7;goto B621f2f;
case 0x621f33:c.instructions+=6;goto B621f33;
case 0x621f3a:c.instructions+=5;goto B621f3a;
case 0x621f3c:c.instructions+=4;goto B621f3c;
case 0x621f3e:c.instructions+=3;goto B621f3e;
case 0x621f45:c.instructions+=2;goto B621f45;
case 0x621f4c:c.instructions+=1;goto B621f4c;
case 0x621f50:goto L621f50;
case 0x621f54:c.instructions+=6;goto B621f54;
case 0x621f5b:c.instructions+=5;goto B621f5b;
case 0x621f5c:c.instructions+=4;goto B621f5c;
case 0x621f5d:c.instructions+=3;goto B621f5d;
case 0x621f64:c.instructions+=2;goto B621f64;
case 0x621f65:c.instructions+=1;goto B621f65;
case 0x621f6a:goto L621f6a;
case 0x621f6d:c.instructions+=9;goto B621f6d;
case 0x621f70:c.instructions+=8;goto B621f70;
case 0x621f72:c.instructions+=7;goto B621f72;
case 0x621f76:c.instructions+=6;goto B621f76;
case 0x621f78:c.instructions+=5;goto B621f78;
case 0x621f7f:c.instructions+=4;goto B621f7f;
case 0x621f80:c.instructions+=3;goto B621f80;
case 0x621f87:c.instructions+=2;goto B621f87;
case 0x621f8e:c.instructions+=1;goto B621f8e;
case 0x621f93:goto L621f93;
case 0x621f9a:c.instructions+=2;goto B621f9a;
case 0x621f9b:c.instructions+=1;goto B621f9b;
case 0x621fa0:goto L621fa0;
case 0x621fa7:c.instructions+=2;goto B621fa7;
case 0x621fa8:c.instructions+=1;goto B621fa8;
case 0x621fad:goto L621fad;
case 0x621fb4:c.instructions+=2;goto B621fb4;
case 0x621fb5:c.instructions+=1;goto B621fb5;
case 0x621fba:goto L621fba;
case 0x621fc0:c.instructions+=3;goto B621fc0;
case 0x621fc2:c.instructions+=2;goto B621fc2;
case 0x621fc3:c.instructions+=1;goto B621fc3;
case 0x621fc8:goto L621fc8;
case 0x621fca:c.instructions+=2;goto B621fca;
case 0x621fcf:c.instructions+=1;goto B621fcf;
case 0x621fd4:goto L621fd4;
case 0x621fdb:c.instructions+=7;goto B621fdb;
case 0x621fe2:c.instructions+=6;goto B621fe2;
case 0x621fe5:c.instructions+=5;goto B621fe5;
case 0x621fe8:c.instructions+=4;goto B621fe8;
case 0x621fe9:c.instructions+=3;goto B621fe9;
case 0x621fed:c.instructions+=2;goto B621fed;
case 0x621ff4:c.instructions+=1;goto B621ff4;
case 0x621ffa:goto L621ffa;
default:missing_instruction(c.pc);}
B621002:L621002:{c.instructions+=10;NFSU2_TR(0x621002);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621003:{NFSU2_TR(0x621003);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62100a:{NFSU2_TR(0x62100a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62100b:{NFSU2_TR(0x62100b);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621012:{NFSU2_TR(0x621012);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621019:{NFSU2_TR(0x621019);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62101a:{NFSU2_TR(0x62101a);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62101f:{NFSU2_TR(0x62101f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621020:{NFSU2_TR(0x621020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621021:{NFSU2_TR(0x621021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621026ull));
TAIL_STATIC(0x48f660u,48f);
}
B621026:L621026:{c.instructions+=7;NFSU2_TR(0x621026);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62102d:{NFSU2_TR(0x62102d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x120ull))));
}
B621033:{NFSU2_TR(0x621033);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B621036:{NFSU2_TR(0x621036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621037:{NFSU2_TR(0x621037);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62103b:{NFSU2_TR(0x62103b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3e0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3e0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3e0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B621041:{NFSU2_TR(0x621041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621046ull));
TAIL_STATIC(0x440fd0u,440);
}
B621046:L621046:{c.instructions+=2;NFSU2_TR(0x621046);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62104d:{NFSU2_TR(0x62104d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L621062;}}
}
B62104f:L62104f:{c.instructions+=4;NFSU2_TR(0x62104f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621053:{NFSU2_TR(0x621053);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1f88ull))));
}
B621059:{NFSU2_TR(0x621059);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62105a:{NFSU2_TR(0x62105a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62105full));
TAIL_STATIC(0x48e380u,48e);
}
B62105f:L62105f:{c.instructions+=1;NFSU2_TR(0x62105f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B621062:L621062:{c.instructions+=3;NFSU2_TR(0x621062);
__builtin_memmove((R+0),gp(0x8a1c04),4);
}
B621067:{NFSU2_TR(0x621067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621069:{NFSU2_TR(0x621069);
if(r1(R+518)){{goto L621075;}}
}
B62106b:L62106b:{c.instructions+=1;NFSU2_TR(0x62106b);
s4(0x82dad8,u32(0x0ull));
}
B621075:L621075:{c.instructions+=2;NFSU2_TR(0x621075);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621079:{NFSU2_TR(0x621079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62107eull));
TAIL_STATIC(0x60c940u,60c);
}
B62107e:L62107e:{c.instructions+=4;NFSU2_TR(0x62107e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621085:{NFSU2_TR(0x621085);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621087:{NFSU2_TR(0x621087);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B621092:{NFSU2_TR(0x621092);
if(r1(R+518)){{goto L6210b0;}}
}
B621094:L621094:{c.instructions+=5;NFSU2_TR(0x621094);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62109a:{NFSU2_TR(0x62109a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62109c:{NFSU2_TR(0x62109c);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6210a3:{NFSU2_TR(0x6210a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6210ae:{NFSU2_TR(0x6210ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6210bb;}}
}
B6210b0:L6210b0:{c.instructions+=1;NFSU2_TR(0x6210b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6210bb:L6210bb:{c.instructions+=8;NFSU2_TR(0x6210bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6210bf:{NFSU2_TR(0x6210bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6210c2:{NFSU2_TR(0x6210c2);
__builtin_memmove((R+4),gp(0x8a1cd8),4);
}
B6210c8:{NFSU2_TR(0x6210c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6210ca:{NFSU2_TR(0x6210ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6210d0:{NFSU2_TR(0x6210d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6210d4:{NFSU2_TR(0x6210d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6210dc:{NFSU2_TR(0x6210dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L62110b;}}
}
B6210de:L6210de:{c.instructions+=1;NFSU2_TR(0x6210de);
__builtin_memmove((R+0),gp(0x8a1cd4),4);
}
B6210e3:L6210e3:{c.instructions+=3;NFSU2_TR(0x6210e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6210e7:{NFSU2_TR(0x6210e7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6210e9:{NFSU2_TR(0x6210e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6210fb;}}
}
B6210eb:L6210eb:{c.instructions+=5;NFSU2_TR(0x6210eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6210ef:{NFSU2_TR(0x6210ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6210f2:{NFSU2_TR(0x6210f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B6210f6:{NFSU2_TR(0x6210f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6210f9:{NFSU2_TR(0x6210f9);
if(r1(R+518)){{goto L62110b;}}
}
B6210fb:L6210fb:{c.instructions+=6;NFSU2_TR(0x6210fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6210ff:{NFSU2_TR(0x6210ff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B621100:{NFSU2_TR(0x621100);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B621103:{NFSU2_TR(0x621103);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621105:{NFSU2_TR(0x621105);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621109:{NFSU2_TR(0x621109);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6210e3u);}goto L6210e3;}}
}
B62110b:L62110b:{c.instructions+=6;NFSU2_TR(0x62110b);
__builtin_memmove((R+4),gp(0x7fee4c),4);
}
B621111:{NFSU2_TR(0x621111);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B621113:{NFSU2_TR(0x621113);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B621115:{NFSU2_TR(0x621115);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62111c:{NFSU2_TR(0x62111c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621123:{NFSU2_TR(0x621123);
if(r1(R+518)){{goto L621136;}}
}
B621125:L621125:{c.instructions+=5;NFSU2_TR(0x621125);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B621129:{NFSU2_TR(0x621129);
{u32 ea_=u32(u32(8021756u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62112f:{NFSU2_TR(0x62112f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B621131:{NFSU2_TR(0x621131);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B621134:{NFSU2_TR(0x621134);
if(r1(R+514)){{goto L621149;}}
}
B621136:L621136:{c.instructions+=3;NFSU2_TR(0x621136);
w4(R+0,u32(0x1ull));
}
B62113b:{NFSU2_TR(0x62113b);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621142:{NFSU2_TR(0x621142);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621149:L621149:{c.instructions+=10;NFSU2_TR(0x621149);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B62114d:{NFSU2_TR(0x62114d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621150:{NFSU2_TR(0x621150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621153:{NFSU2_TR(0x621153);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621157:{NFSU2_TR(0x621157);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B62115b:{NFSU2_TR(0x62115b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621162:{NFSU2_TR(0x621162);
{u32 ea_=u32((r4(R+4)*4u)+u32(8021724u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B621169:{NFSU2_TR(0x621169);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B62116b:{NFSU2_TR(0x62116b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B62116e:{NFSU2_TR(0x62116e);
if(r1(R+514)){{goto L62118f;}}
}
B621170:L621170:{c.instructions+=7;NFSU2_TR(0x621170);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621174:{NFSU2_TR(0x621174);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B621175:{NFSU2_TR(0x621175);
{u32 ea_=u32((r4(R+4)*4u)+u32(8021724u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62117c:{NFSU2_TR(0x62117c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B62117d:{NFSU2_TR(0x62117d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B62117f:{NFSU2_TR(0x62117f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B621182:{NFSU2_TR(0x621182);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x621170u);}goto L621170;}}
}
B621184:L621184:{c.instructions+=2;NFSU2_TR(0x621184);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62118b:{NFSU2_TR(0x62118b);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62118f:L62118f:{c.instructions+=1;NFSU2_TR(0x62118f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621194ull));
TAIL_STATIC(0x499db0u,499);
}
B621194:L621194:{c.instructions+=2;NFSU2_TR(0x621194);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B621196:{NFSU2_TR(0x621196);
if(r1(R+518)){{goto L6211a7;}}
}
B621198:L621198:{c.instructions+=4;NFSU2_TR(0x621198);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B62119a:{NFSU2_TR(0x62119a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62119e:{NFSU2_TR(0x62119e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6211a5:{NFSU2_TR(0x6211a5);
{goto L6211ec;}
}
B6211a7:L6211a7:{c.instructions+=3;NFSU2_TR(0x6211a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6211ab:{NFSU2_TR(0x6211ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6211ae:{NFSU2_TR(0x6211ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6211bb;}}
}
B6211b0:L6211b0:{c.instructions+=3;NFSU2_TR(0x6211b0);
w4(R+0,u32(0x3ull));
}
B6211b5:{NFSU2_TR(0x6211b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6211b9:{NFSU2_TR(0x6211b9);
{goto L6211c0;}
}
B6211bb:L6211bb:{c.instructions+=2;NFSU2_TR(0x6211bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6211be:{NFSU2_TR(0x6211be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6211ec;}}
}
B6211c0:L6211c0:{c.instructions+=3;NFSU2_TR(0x6211c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6211c7:{NFSU2_TR(0x6211c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6211c9:{NFSU2_TR(0x6211c9);
if(r1(R+518)){{goto L6211ec;}}
}
B6211cb:L6211cb:{c.instructions+=3;NFSU2_TR(0x6211cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6211d1:{NFSU2_TR(0x6211d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6211d3:{NFSU2_TR(0x6211d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6211ec;}}
}
B6211d5:L6211d5:{c.instructions+=4;NFSU2_TR(0x6211d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6211d9:{NFSU2_TR(0x6211d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6211df:{NFSU2_TR(0x6211df);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6211e1:{NFSU2_TR(0x6211e1);
if(r1(R+518)){{goto L6211ec;}}
}
B6211e3:L6211e3:{c.instructions+=2;NFSU2_TR(0x6211e3);
w4(R+0,u32(0x2ull));
}
B6211e8:{NFSU2_TR(0x6211e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6211ec:L6211ec:{c.instructions+=3;NFSU2_TR(0x6211ec);
__builtin_memmove((R+4),gp(0x802728),4);
}
B6211f2:{NFSU2_TR(0x6211f2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6211f5:{NFSU2_TR(0x6211f5);
if(r1(R+518)){{goto L6211fd;}}
}
B6211f7:L6211f7:{c.instructions+=2;NFSU2_TR(0x6211f7);
__builtin_memmove((R+0),(R+4),4);
}
B6211f9:{NFSU2_TR(0x6211f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6211fd:L6211fd:{c.instructions+=3;NFSU2_TR(0x6211fd);
__builtin_memmove((R+4),gp(0x80272c),4);
}
B621203:{NFSU2_TR(0x621203);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B621206:{NFSU2_TR(0x621206);
if(r1(R+518)){{goto L62120f;}}
}
B621208:L621208:{c.instructions+=1;NFSU2_TR(0x621208);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62120f:L62120f:{c.instructions+=2;NFSU2_TR(0x62120f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B621212:{NFSU2_TR(0x621212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L621224;}}
}
B621214:L621214:{c.instructions+=2;NFSU2_TR(0x621214);
u8 U[22];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B62121c:{NFSU2_TR(0x62121c);
if(r1(R+518)){TAIL_STATIC(0x630d1bu,630);}
}
B621222:L621222:{c.instructions+=1;NFSU2_TR(0x621222);
{goto L621230;}
}
B621224:L621224:{c.instructions+=2;NFSU2_TR(0x621224);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621227:{NFSU2_TR(0x621227);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L621230;}}
}
B621229:L621229:{c.instructions+=1;NFSU2_TR(0x621229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x800ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B621230:L621230:{c.instructions+=4;NFSU2_TR(0x621230);
u8 U[4];
w4(U+0,u32(u32(u32(0xce0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621237:{NFSU2_TR(0x621237);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621238:{NFSU2_TR(0x621238);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621239:{NFSU2_TR(0x621239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62123eull));
TAIL_STATIC(0x43c7c0u,43c);
}
B62123e:L62123e:{c.instructions+=7;NFSU2_TR(0x62123e);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621245:{NFSU2_TR(0x621245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621246:{NFSU2_TR(0x621246);
u8 U[4];
w4(U+0,u32(u32(u32(0xcecull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B62124d:{NFSU2_TR(0x62124d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62124e:{NFSU2_TR(0x62124e);
u8 U[4];
w4(U+0,u32(u32(u32(0x880ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621255:{NFSU2_TR(0x621255);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621256:{NFSU2_TR(0x621256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62125bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B62125b:L62125b:{c.instructions+=5;NFSU2_TR(0x62125b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B62125e:{NFSU2_TR(0x62125e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62125f:{NFSU2_TR(0x62125f);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621266:{NFSU2_TR(0x621266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621267:{NFSU2_TR(0x621267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62126cull));
TAIL_STATIC(0x43ce10u,43c);
}
B62126c:L62126c:{c.instructions+=5;NFSU2_TR(0x62126c);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621270:{NFSU2_TR(0x621270);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621277:{NFSU2_TR(0x621277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B62127a:{NFSU2_TR(0x62127a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62127c:{NFSU2_TR(0x62127c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6212ea;}}
}
B62127e:L62127e:{c.instructions+=5;NFSU2_TR(0x62127e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621282:{NFSU2_TR(0x621282);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B621288:{NFSU2_TR(0x621288);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B62128a:{NFSU2_TR(0x62128a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B62128d:{NFSU2_TR(0x62128d);
if(r1(R+514)){{goto L6212ea;}}
}
B62128f:L62128f:{c.instructions+=3;NFSU2_TR(0x62128f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621292:{NFSU2_TR(0x621292);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B621296:{NFSU2_TR(0x621296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6212ea;}}
}
B621298:L621298:{c.instructions+=11;NFSU2_TR(0x621298);
{u32 ea_=u32(r4(R+16)+u32(2168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62129f:{NFSU2_TR(0x62129f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6212a6:{NFSU2_TR(0x6212a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6212ac:{NFSU2_TR(0x6212ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6212b3:{NFSU2_TR(0x6212b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6212b5:{NFSU2_TR(0x6212b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x874ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6212bc:{NFSU2_TR(0x6212bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6212bd:{NFSU2_TR(0x6212bd);
{u32 ea_=u32(r4(R+16)+u32(2176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6212c4:{NFSU2_TR(0x6212c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6212c5:{NFSU2_TR(0x6212c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6212c6:{NFSU2_TR(0x6212c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6212cbull));
TAIL_STATIC(0x43d7a0u,43d);
}
B6212cb:L6212cb:{c.instructions+=3;NFSU2_TR(0x6212cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6212ce:{NFSU2_TR(0x6212ce);
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
B6212d0:{NFSU2_TR(0x6212d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x630d1bu,630);}
}
B6212d6:L6212d6:{c.instructions+=3;NFSU2_TR(0x6212d6);
{u32 ea_=u32(r4(R+16)+u32(2168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6212dd:{NFSU2_TR(0x6212dd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6212e3:{NFSU2_TR(0x6212e3);
{u32 ea_=u32(r4(R+16)+u32(2168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6212ea:L6212ea:{c.instructions+=4;NFSU2_TR(0x6212ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6212f1:{NFSU2_TR(0x6212f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6212f3:{NFSU2_TR(0x6212f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6212f5:{NFSU2_TR(0x6212f5);
if(r1(R+518)){{goto L6212fe;}}
}
B6212f7:L6212f7:{c.instructions+=1;NFSU2_TR(0x6212f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6212fe:L6212fe:{c.instructions+=6;NFSU2_TR(0x6212fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621302:{NFSU2_TR(0x621302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621303:{NFSU2_TR(0x621303);
u8 U[4];
w4(U+0,u32(u32(u32(0x874ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62130a:{NFSU2_TR(0x62130a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62130b:{NFSU2_TR(0x62130b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2d60ull))));
}
B621311:{NFSU2_TR(0x621311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621316ull));
TAIL_STATIC(0x60c320u,60c);
}
B621316:L621316:{c.instructions+=3;NFSU2_TR(0x621316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621317:{NFSU2_TR(0x621317);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621318:{NFSU2_TR(0x621318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62131dull));
TAIL_STATIC(0x4012b0u,401);
}
B62131d:L62131d:{c.instructions+=14;NFSU2_TR(0x62131d);
{u32 ea_=u32(u32(8021696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621323:{NFSU2_TR(0x621323);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621326:{NFSU2_TR(0x621326);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B621329:{NFSU2_TR(0x621329);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62132c:{NFSU2_TR(0x62132c);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B621331:{NFSU2_TR(0x621331);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621333:{NFSU2_TR(0x621333);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621339:{NFSU2_TR(0x621339);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B62133d:{NFSU2_TR(0x62133d);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621344:{NFSU2_TR(0x621344);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621348:{NFSU2_TR(0x621348);
{u32 ea_=u32(u32(8021700u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B62134e:{NFSU2_TR(0x62134e);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621355:{NFSU2_TR(0x621355);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62135c:{NFSU2_TR(0x62135c);
if(r1(R+518)){{goto L621386;}}
}
B62135e:L62135e:{c.instructions+=3;NFSU2_TR(0x62135e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621364:{NFSU2_TR(0x621364);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621366:{NFSU2_TR(0x621366);
if(r1(R+518)){{goto L621386;}}
}
B621368:L621368:{c.instructions+=2;NFSU2_TR(0x621368);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62136c:{NFSU2_TR(0x62136c);
if(r1(R+518)){{goto L621386;}}
}
B62136e:L62136e:{c.instructions+=4;NFSU2_TR(0x62136e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621372:{NFSU2_TR(0x621372);
{u32 ea_=u32(u32(8021704u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621378:{NFSU2_TR(0x621378);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62137f:{NFSU2_TR(0x62137f);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621386:L621386:{c.instructions+=3;NFSU2_TR(0x621386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621389:{NFSU2_TR(0x621389);
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
B62138b:{NFSU2_TR(0x62138b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x622edeu,622);}
}
B621391:L621391:{c.instructions+=5;NFSU2_TR(0x621391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621394:{NFSU2_TR(0x621394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621395:{NFSU2_TR(0x621395);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62139a:{NFSU2_TR(0x62139a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62139b:{NFSU2_TR(0x62139b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6213a0ull));
TAIL_STATIC(0x401340u,401);
}
B6213a0:L6213a0:{c.instructions+=6;NFSU2_TR(0x6213a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6213a7:{NFSU2_TR(0x6213a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6213aa:{NFSU2_TR(0x6213aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6213ab:{NFSU2_TR(0x6213ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6213ae:{NFSU2_TR(0x6213ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6213af:{NFSU2_TR(0x6213af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6213b4ull));
TAIL_STATIC(0x48ae30u,48a);
}
B6213b4:L6213b4:{c.instructions+=3;NFSU2_TR(0x6213b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6d0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6213bb:{NFSU2_TR(0x6213bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6213bc:{NFSU2_TR(0x6213bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6213c1ull));
TAIL_STATIC(0x43c780u,43c);
}
B6213c1:L6213c1:{c.instructions+=206;NFSU2_TR(0x6213c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6213c4:{NFSU2_TR(0x6213c4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6213c6:{NFSU2_TR(0x6213c6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6213c8:{NFSU2_TR(0x6213c8);
{u32 ea_=u32(r4(R+16)+u32(1796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6213cf:{NFSU2_TR(0x6213cf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6213d2:{NFSU2_TR(0x6213d2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6213d4:{NFSU2_TR(0x6213d4);
{u32 ea_=u32(r4(R+16)+u32(1800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6213db:{NFSU2_TR(0x6213db);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6213de:{NFSU2_TR(0x6213de);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6213e0:{NFSU2_TR(0x6213e0);
{u32 ea_=u32(r4(R+16)+u32(1804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6213e7:{NFSU2_TR(0x6213e7);
{u32 ea_=u32(r4(R+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6213ee:{NFSU2_TR(0x6213ee);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6213f0:{NFSU2_TR(0x6213f0);
{u32 ea_=u32(r4(R+16)+u32(1760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6213f7:{NFSU2_TR(0x6213f7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6213fa:{NFSU2_TR(0x6213fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6213fc:{NFSU2_TR(0x6213fc);
{u32 ea_=u32(r4(R+16)+u32(1756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621403:{NFSU2_TR(0x621403);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621406:{NFSU2_TR(0x621406);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621408:{NFSU2_TR(0x621408);
{u32 ea_=u32(r4(R+16)+u32(1752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62140f:{NFSU2_TR(0x62140f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621412:{NFSU2_TR(0x621412);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621414:{NFSU2_TR(0x621414);
{u32 ea_=u32(r4(R+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62141b:{NFSU2_TR(0x62141b);
{u32 ea_=u32(r4(R+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621422:{NFSU2_TR(0x621422);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621425:{NFSU2_TR(0x621425);
{u32 ea_=u32(r4(R+16)+u32(1760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62142c:{NFSU2_TR(0x62142c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62142f:{NFSU2_TR(0x62142f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621431:{NFSU2_TR(0x621431);
{u32 ea_=u32(r4(R+16)+u32(1752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621438:{NFSU2_TR(0x621438);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62143b:{NFSU2_TR(0x62143b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62143d:{NFSU2_TR(0x62143d);
{u32 ea_=u32(r4(R+16)+u32(1756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621444:{NFSU2_TR(0x621444);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621447:{NFSU2_TR(0x621447);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621449:{NFSU2_TR(0x621449);
{u32 ea_=u32(r4(R+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621450:{NFSU2_TR(0x621450);
{u32 ea_=u32(r4(R+16)+u32(1756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621457:{NFSU2_TR(0x621457);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62145a:{NFSU2_TR(0x62145a);
{u32 ea_=u32(r4(R+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621461:{NFSU2_TR(0x621461);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621464:{NFSU2_TR(0x621464);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621466:{NFSU2_TR(0x621466);
{u32 ea_=u32(r4(R+16)+u32(1752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62146d:{NFSU2_TR(0x62146d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621470:{NFSU2_TR(0x621470);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621472:{NFSU2_TR(0x621472);
{u32 ea_=u32(r4(R+16)+u32(1760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621479:{NFSU2_TR(0x621479);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62147c:{NFSU2_TR(0x62147c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62147e:{NFSU2_TR(0x62147e);
{u32 ea_=u32(r4(R+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621485:{NFSU2_TR(0x621485);
{u32 ea_=u32(r4(R+16)+u32(1760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62148c:{NFSU2_TR(0x62148c);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62148f:{NFSU2_TR(0x62148f);
{u32 ea_=u32(r4(R+16)+u32(1756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621496:{NFSU2_TR(0x621496);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621499:{NFSU2_TR(0x621499);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62149b:{NFSU2_TR(0x62149b);
{u32 ea_=u32(r4(R+16)+u32(1752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214a2:{NFSU2_TR(0x6214a2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214a5:{NFSU2_TR(0x6214a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6214a7:{NFSU2_TR(0x6214a7);
{u32 ea_=u32(r4(R+16)+u32(1748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214ae:{NFSU2_TR(0x6214ae);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214b1:{NFSU2_TR(0x6214b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6214b3:{NFSU2_TR(0x6214b3);
{u32 ea_=u32(r4(R+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6214ba:{NFSU2_TR(0x6214ba);
{u32 ea_=u32(r4(R+16)+u32(1764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214c1:{NFSU2_TR(0x6214c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214c3:{NFSU2_TR(0x6214c3);
{u32 ea_=u32(r4(R+16)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214ca:{NFSU2_TR(0x6214ca);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214cd:{NFSU2_TR(0x6214cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6214cf:{NFSU2_TR(0x6214cf);
{u32 ea_=u32(r4(R+16)+u32(1772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214d6:{NFSU2_TR(0x6214d6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214d9:{NFSU2_TR(0x6214d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6214db:{NFSU2_TR(0x6214db);
{u32 ea_=u32(r4(R+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214e2:{NFSU2_TR(0x6214e2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214e5:{NFSU2_TR(0x6214e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6214e7:{NFSU2_TR(0x6214e7);
{u32 ea_=u32(r4(R+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6214ee:{NFSU2_TR(0x6214ee);
{u32 ea_=u32(r4(R+16)+u32(1772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214f5:{NFSU2_TR(0x6214f5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6214f8:{NFSU2_TR(0x6214f8);
{u32 ea_=u32(r4(R+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6214ff:{NFSU2_TR(0x6214ff);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621502:{NFSU2_TR(0x621502);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621504:{NFSU2_TR(0x621504);
{u32 ea_=u32(r4(R+16)+u32(1764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62150b:{NFSU2_TR(0x62150b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62150e:{NFSU2_TR(0x62150e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621510:{NFSU2_TR(0x621510);
{u32 ea_=u32(r4(R+16)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621517:{NFSU2_TR(0x621517);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62151a:{NFSU2_TR(0x62151a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62151c:{NFSU2_TR(0x62151c);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621523:{NFSU2_TR(0x621523);
{u32 ea_=u32(r4(R+16)+u32(1764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62152a:{NFSU2_TR(0x62152a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62152d:{NFSU2_TR(0x62152d);
{u32 ea_=u32(r4(R+16)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621534:{NFSU2_TR(0x621534);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621537:{NFSU2_TR(0x621537);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621539:{NFSU2_TR(0x621539);
{u32 ea_=u32(r4(R+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621540:{NFSU2_TR(0x621540);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621543:{NFSU2_TR(0x621543);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621545:{NFSU2_TR(0x621545);
{u32 ea_=u32(r4(R+16)+u32(1772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62154c:{NFSU2_TR(0x62154c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62154f:{NFSU2_TR(0x62154f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621551:{NFSU2_TR(0x621551);
{u32 ea_=u32(r4(R+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621558:{NFSU2_TR(0x621558);
{u32 ea_=u32(r4(R+16)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62155f:{NFSU2_TR(0x62155f);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621562:{NFSU2_TR(0x621562);
{u32 ea_=u32(r4(R+16)+u32(1772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621569:{NFSU2_TR(0x621569);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62156c:{NFSU2_TR(0x62156c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62156e:{NFSU2_TR(0x62156e);
{u32 ea_=u32(r4(R+16)+u32(1764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621575:{NFSU2_TR(0x621575);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621578:{NFSU2_TR(0x621578);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62157a:{NFSU2_TR(0x62157a);
{u32 ea_=u32(r4(R+16)+u32(1768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621581:{NFSU2_TR(0x621581);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621584:{NFSU2_TR(0x621584);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621586:{NFSU2_TR(0x621586);
{u32 ea_=u32(r4(R+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62158d:{NFSU2_TR(0x62158d);
{u32 ea_=u32(r4(R+16)+u32(1792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621594:{NFSU2_TR(0x621594);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621597:{NFSU2_TR(0x621597);
{u32 ea_=u32(r4(R+16)+u32(1788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62159e:{NFSU2_TR(0x62159e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215a1:{NFSU2_TR(0x6215a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215a3:{NFSU2_TR(0x6215a3);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215aa:{NFSU2_TR(0x6215aa);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215ad:{NFSU2_TR(0x6215ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215af:{NFSU2_TR(0x6215af);
{u32 ea_=u32(r4(R+16)+u32(1780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215b6:{NFSU2_TR(0x6215b6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215b8:{NFSU2_TR(0x6215b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215ba:{NFSU2_TR(0x6215ba);
{u32 ea_=u32(r4(R+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6215c1:{NFSU2_TR(0x6215c1);
{u32 ea_=u32(r4(R+16)+u32(1788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215c8:{NFSU2_TR(0x6215c8);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215cb:{NFSU2_TR(0x6215cb);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215d2:{NFSU2_TR(0x6215d2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215d5:{NFSU2_TR(0x6215d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215d7:{NFSU2_TR(0x6215d7);
{u32 ea_=u32(r4(R+16)+u32(1780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215de:{NFSU2_TR(0x6215de);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215e1:{NFSU2_TR(0x6215e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215e3:{NFSU2_TR(0x6215e3);
{u32 ea_=u32(r4(R+16)+u32(1792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215ea:{NFSU2_TR(0x6215ea);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6215ed:{NFSU2_TR(0x6215ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6215ef:{NFSU2_TR(0x6215ef);
{u32 ea_=u32(r4(R+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6215f6:{NFSU2_TR(0x6215f6);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6215fd:{NFSU2_TR(0x6215fd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621600:{NFSU2_TR(0x621600);
{u32 ea_=u32(r4(R+16)+u32(1792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621607:{NFSU2_TR(0x621607);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62160a:{NFSU2_TR(0x62160a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62160c:{NFSU2_TR(0x62160c);
{u32 ea_=u32(r4(R+16)+u32(1788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621613:{NFSU2_TR(0x621613);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621616:{NFSU2_TR(0x621616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621618:{NFSU2_TR(0x621618);
{u32 ea_=u32(r4(R+16)+u32(1780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62161f:{NFSU2_TR(0x62161f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621622:{NFSU2_TR(0x621622);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621624:{NFSU2_TR(0x621624);
{u32 ea_=u32(r4(R+16)+u32(828u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62162b:{NFSU2_TR(0x62162b);
{u32 ea_=u32(r4(R+16)+u32(1792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621632:{NFSU2_TR(0x621632);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621635:{NFSU2_TR(0x621635);
{u32 ea_=u32(r4(R+16)+u32(1788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62163c:{NFSU2_TR(0x62163c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62163f:{NFSU2_TR(0x62163f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621641:{NFSU2_TR(0x621641);
{u32 ea_=u32(r4(R+16)+u32(1784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621648:{NFSU2_TR(0x621648);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62164b:{NFSU2_TR(0x62164b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62164d:{NFSU2_TR(0x62164d);
{u32 ea_=u32(r4(R+16)+u32(1780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621654:{NFSU2_TR(0x621654);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621657:{NFSU2_TR(0x621657);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621659:{NFSU2_TR(0x621659);
{u32 ea_=u32(r4(R+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621660:{NFSU2_TR(0x621660);
{u32 ea_=u32(r4(R+16)+u32(1800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621667:{NFSU2_TR(0x621667);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62166a:{NFSU2_TR(0x62166a);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621671:{NFSU2_TR(0x621671);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621674:{NFSU2_TR(0x621674);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621676:{NFSU2_TR(0x621676);
{u32 ea_=u32(r4(R+16)+u32(1796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62167d:{NFSU2_TR(0x62167d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62167f:{NFSU2_TR(0x62167f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621681:{NFSU2_TR(0x621681);
{u32 ea_=u32(r4(R+16)+u32(1804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621688:{NFSU2_TR(0x621688);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62168b:{NFSU2_TR(0x62168b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62168d:{NFSU2_TR(0x62168d);
{u32 ea_=u32(r4(R+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621694:{NFSU2_TR(0x621694);
{u32 ea_=u32(r4(R+16)+u32(1804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62169b:{NFSU2_TR(0x62169b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62169e:{NFSU2_TR(0x62169e);
{u32 ea_=u32(r4(R+16)+u32(1796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216a5:{NFSU2_TR(0x6216a5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216a8:{NFSU2_TR(0x6216a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6216aa:{NFSU2_TR(0x6216aa);
{u32 ea_=u32(r4(R+16)+u32(1800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216b1:{NFSU2_TR(0x6216b1);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216b4:{NFSU2_TR(0x6216b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6216b6:{NFSU2_TR(0x6216b6);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216bd:{NFSU2_TR(0x6216bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6216c4:{NFSU2_TR(0x6216c4);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216c7:{NFSU2_TR(0x6216c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6216c8:{NFSU2_TR(0x6216c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6216c9:{NFSU2_TR(0x6216c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6216cb:{NFSU2_TR(0x6216cb);
{u32 ea_=u32(r4(R+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6216d2:{NFSU2_TR(0x6216d2);
{u32 ea_=u32(r4(R+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216d9:{NFSU2_TR(0x6216d9);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216dc:{NFSU2_TR(0x6216dc);
{u32 ea_=u32(r4(R+16)+u32(1804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216e3:{NFSU2_TR(0x6216e3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216e6:{NFSU2_TR(0x6216e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6216e8:{NFSU2_TR(0x6216e8);
{u32 ea_=u32(r4(R+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216ef:{NFSU2_TR(0x6216ef);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216f2:{NFSU2_TR(0x6216f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6216f4:{NFSU2_TR(0x6216f4);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6216fb:{NFSU2_TR(0x6216fb);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6216fe:{NFSU2_TR(0x6216fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621700:{NFSU2_TR(0x621700);
{u32 ea_=u32(r4(R+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621707:{NFSU2_TR(0x621707);
{u32 ea_=u32(r4(R+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62170e:{NFSU2_TR(0x62170e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621711:{NFSU2_TR(0x621711);
{u32 ea_=u32(r4(R+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621718:{NFSU2_TR(0x621718);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62171b:{NFSU2_TR(0x62171b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62171d:{NFSU2_TR(0x62171d);
{u32 ea_=u32(r4(R+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621724:{NFSU2_TR(0x621724);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621727:{NFSU2_TR(0x621727);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621729:{NFSU2_TR(0x621729);
{u32 ea_=u32(r4(R+16)+u32(1804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621730:{NFSU2_TR(0x621730);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621733:{NFSU2_TR(0x621733);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B621735:{NFSU2_TR(0x621735);
{u32 ea_=u32(r4(R+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62173c:{NFSU2_TR(0x62173c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621741ull));
TAIL_STATIC(0x4012b0u,401);
}
B621741:L621741:{c.instructions+=17;NFSU2_TR(0x621741);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621745:{NFSU2_TR(0x621745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621748:{NFSU2_TR(0x621748);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62174b:{NFSU2_TR(0x62174b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B62174d:{NFSU2_TR(0x62174d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621750:{NFSU2_TR(0x621750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B621753:{NFSU2_TR(0x621753);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621756:{NFSU2_TR(0x621756);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B621758:{NFSU2_TR(0x621758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B62175a:{NFSU2_TR(0x62175a);
{u32 ea_=u32(u32(9051908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621760:{NFSU2_TR(0x621760);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621767:{NFSU2_TR(0x621767);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B62176a:{NFSU2_TR(0x62176a);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621770:{NFSU2_TR(0x621770);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621772:{NFSU2_TR(0x621772);
__builtin_memmove(gp(0x8a1f00),(R+8),4);
}
B621778:{NFSU2_TR(0x621778);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62177f:{NFSU2_TR(0x62177f);
if(r1(R+518)){{goto L62189b;}}
}
B621785:L621785:{c.instructions+=4;NFSU2_TR(0x621785);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
}
B62178a:{NFSU2_TR(0x62178a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62178c:{NFSU2_TR(0x62178c);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621790:{NFSU2_TR(0x621790);
if(r1(R+518)){{goto L6217ad;}}
}
B621792:L621792:{c.instructions+=6;NFSU2_TR(0x621792);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621794:{NFSU2_TR(0x621794);
u8 U[4];
w4(U+0,u32(0x8a2cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621799:{NFSU2_TR(0x621799);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62179b:{NFSU2_TR(0x62179b);
u8 U[4];
w4(U+0,u32(0x8a1f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6217a0:{NFSU2_TR(0x6217a0);
__builtin_memmove((R+4),(R+0),4);
}
B6217a2:{NFSU2_TR(0x6217a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6217a7ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B6217a7:L6217a7:{c.instructions+=1;NFSU2_TR(0x6217a7);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6217ad:L6217ad:{c.instructions+=28;NFSU2_TR(0x6217ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x840ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6217b8:{NFSU2_TR(0x6217b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6217c3:{NFSU2_TR(0x6217c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x848ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6217ce:{NFSU2_TR(0x6217ce);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6217d0:{NFSU2_TR(0x6217d0);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217d3:{NFSU2_TR(0x6217d3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217d6:{NFSU2_TR(0x6217d6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6217dc:{NFSU2_TR(0x6217dc);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217df:{NFSU2_TR(0x6217df);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6217e2:{NFSU2_TR(0x6217e2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217e5:{NFSU2_TR(0x6217e5);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217e8:{NFSU2_TR(0x6217e8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6217ee:{NFSU2_TR(0x6217ee);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217f1:{NFSU2_TR(0x6217f1);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6217f4:{NFSU2_TR(0x6217f4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217f7:{NFSU2_TR(0x6217f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6217fa:{NFSU2_TR(0x6217fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621800:{NFSU2_TR(0x621800);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621803:{NFSU2_TR(0x621803);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62180a:{NFSU2_TR(0x62180a);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621811:{NFSU2_TR(0x621811);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B621813:{NFSU2_TR(0x621813);
u8 U[8];
w4(U+0,u32(u32(u32(0x848ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62181a:{NFSU2_TR(0x62181a);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621821:{NFSU2_TR(0x621821);
{u32 ea_=u32(r4(R+16)+u32(2112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621828:{NFSU2_TR(0x621828);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62182a:{NFSU2_TR(0x62182a);
{u32 ea_=u32(r4(R+16)+u32(2116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621831:{NFSU2_TR(0x621831);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621837:{NFSU2_TR(0x621837);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L621859;}}
}
B621839:L621839:{c.instructions+=8;NFSU2_TR(0x621839);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62183b:{NFSU2_TR(0x62183b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62183d:{NFSU2_TR(0x62183d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62183f:{NFSU2_TR(0x62183f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621841:{NFSU2_TR(0x621841);
u8 U[4];
w4(U+0,u32(u32(u32(0x84cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621848:{NFSU2_TR(0x621848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621849:{NFSU2_TR(0x621849);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62184d:{NFSU2_TR(0x62184d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621852ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B621852:L621852:{c.instructions+=1;NFSU2_TR(0x621852);
{u32 ea_=u32(r4(R+16)+u32(2120u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B621859:L621859:{c.instructions+=5;NFSU2_TR(0x621859);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B62185f:{NFSU2_TR(0x62185f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62186a:{NFSU2_TR(0x62186a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B62186c:{NFSU2_TR(0x62186c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B62186f:{NFSU2_TR(0x62186f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6218a8;}}
}
B621871:L621871:{c.instructions+=4;NFSU2_TR(0x621871);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B621877:{NFSU2_TR(0x621877);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B621879:{NFSU2_TR(0x621879);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B62187c:{NFSU2_TR(0x62187c);
if(r1(R+514)){{goto L6218a8;}}
}
B62187e:L62187e:{c.instructions+=6;NFSU2_TR(0x62187e);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621884:{NFSU2_TR(0x621884);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62188a:{NFSU2_TR(0x62188a);
{u32 ea_=u32(u32(8021600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621890:{NFSU2_TR(0x621890);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B621892:{NFSU2_TR(0x621892);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621899:{NFSU2_TR(0x621899);
{goto L6218c0;}
}
B62189b:L62189b:{c.instructions+=2;NFSU2_TR(0x62189b);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6218a3:{NFSU2_TR(0x6218a3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6217adu);}goto L6217ad;}
}
B6218a8:L6218a8:{c.instructions+=4;NFSU2_TR(0x6218a8);
{u32 ea_=u32(u32(8021604u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6218ae:{NFSU2_TR(0x6218ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6218b0:{NFSU2_TR(0x6218b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6218b3:{NFSU2_TR(0x6218b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6218c0;}}
}
B6218b5:L6218b5:{c.instructions+=1;NFSU2_TR(0x6218b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6218c0:L6218c0:{c.instructions+=5;NFSU2_TR(0x6218c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6218c7:{NFSU2_TR(0x6218c7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6218cc:{NFSU2_TR(0x6218cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6218ce:{NFSU2_TR(0x6218ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6218cf:{NFSU2_TR(0x6218cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6218d4ull));
TAIL_STATIC(0x401090u,401);
}
B6218d4:L6218d4:{c.instructions+=7;NFSU2_TR(0x6218d4);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6218db:{NFSU2_TR(0x6218db);
{u32 ea_=u32(u32(9051112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6218e1:{NFSU2_TR(0x6218e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6218e4:{NFSU2_TR(0x6218e4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6218ea:{NFSU2_TR(0x6218ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6218ec:{NFSU2_TR(0x6218ec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6218ef:{NFSU2_TR(0x6218ef);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6218fd;}}
}
B6218f1:L6218f1:{c.instructions+=2;NFSU2_TR(0x6218f1);
__builtin_memmove((R+0),gp(0x8a1be8),4);
}
B6218f6:{NFSU2_TR(0x6218f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6218fd:L6218fd:{c.instructions+=3;NFSU2_TR(0x6218fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621904:{NFSU2_TR(0x621904);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621906:{NFSU2_TR(0x621906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L62190e;}}
}
B621908:L621908:{c.instructions+=2;NFSU2_TR(0x621908);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62190c:{NFSU2_TR(0x62190c);
{goto L621915;}
}
B62190e:L62190e:{c.instructions+=2;NFSU2_TR(0x62190e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621911:{NFSU2_TR(0x621911);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621915:L621915:{c.instructions+=2;NFSU2_TR(0x621915);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62191a:{NFSU2_TR(0x62191a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x622103u,622);}
}
B621920:L621920:{c.instructions+=3;NFSU2_TR(0x621920);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621927:{NFSU2_TR(0x621927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621929:{NFSU2_TR(0x621929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x622103u,622);}
}
B62192f:L62192f:{c.instructions+=3;NFSU2_TR(0x62192f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621933:{NFSU2_TR(0x621933);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621935:{NFSU2_TR(0x621935);
if(r1(R+518)){TAIL_STATIC(0x622103u,622);}
}
B62193b:L62193b:{c.instructions+=3;NFSU2_TR(0x62193b);
__builtin_memmove((R+0),gp(0x8026b8),4);
}
B621940:{NFSU2_TR(0x621940);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621942:{NFSU2_TR(0x621942);
if(r1(R+518)){TAIL_STATIC(0x622103u,622);}
}
B621948:L621948:{c.instructions+=2;NFSU2_TR(0x621948);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62194f:{NFSU2_TR(0x62194f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x622103u,622);}
}
B621955:L621955:{c.instructions+=4;NFSU2_TR(0x621955);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621959:{NFSU2_TR(0x621959);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62195f:{NFSU2_TR(0x62195f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621961:{NFSU2_TR(0x621961);
if(r1(R+518)){TAIL_STATIC(0x622103u,622);}
}
B621967:L621967:{c.instructions+=3;NFSU2_TR(0x621967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62196a:{NFSU2_TR(0x62196a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62196b:{NFSU2_TR(0x62196b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621970ull));
TAIL_STATIC(0x60d4d0u,60d);
}
B621970:L621970:{c.instructions+=3;NFSU2_TR(0x621970);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B621973:{NFSU2_TR(0x621973);
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
B621975:{NFSU2_TR(0x621975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x622103u,622);}
}
B62197b:L62197b:{c.instructions+=4;NFSU2_TR(0x62197b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62197f:{NFSU2_TR(0x62197f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B621981:{NFSU2_TR(0x621981);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621983:{NFSU2_TR(0x621983);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621986ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B621986:L621986:{c.instructions+=6;NFSU2_TR(0x621986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621989:{NFSU2_TR(0x621989);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621990:{NFSU2_TR(0x621990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621993:{NFSU2_TR(0x621993);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621994:{NFSU2_TR(0x621994);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62199b:{NFSU2_TR(0x62199b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6219a0ull));
TAIL_STATIC(0x60d350u,60d);
}
B6219a0:L6219a0:{c.instructions+=4;NFSU2_TR(0x6219a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6219a3:{NFSU2_TR(0x6219a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6219a4:{NFSU2_TR(0x6219a4);
u8 U[4];
w4(U+0,u32(u32(u32(0xda4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6219ab:{NFSU2_TR(0x6219ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6219b0ull));
TAIL_STATIC(0x487270u,487);
}
B6219b0:L6219b0:{c.instructions+=2;NFSU2_TR(0x6219b0);
u8 U[4];
w4(U+0,u32(u32(u32(0xa10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6219b7:{NFSU2_TR(0x6219b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6219bcull));
TAIL_STATIC(0x59fb50u,59f);
}
B6219bc:L6219bc:{c.instructions+=9;NFSU2_TR(0x6219bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6219bf:{NFSU2_TR(0x6219bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6219c2:{NFSU2_TR(0x6219c2);
__builtin_memmove((R+4),gp(0x89ebbc),4);
}
B6219c8:{NFSU2_TR(0x6219c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6219cf:{NFSU2_TR(0x6219cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6219d6:{NFSU2_TR(0x6219d6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6219d8:{NFSU2_TR(0x6219d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6219df:{NFSU2_TR(0x6219df);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6219ea:{NFSU2_TR(0x6219ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L621b2e;}}
}
B6219f0:L6219f0:{c.instructions+=2;NFSU2_TR(0x6219f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x8a3b54ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6219f8:{NFSU2_TR(0x6219f8);
{goto L621a00;}
}
B621a00:L621a00:{c.instructions+=6;NFSU2_TR(0x621a00);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621a07:{NFSU2_TR(0x621a07);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621a0e:{NFSU2_TR(0x621a0e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621a15:{NFSU2_TR(0x621a15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621a16:{NFSU2_TR(0x621a16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621a17:{NFSU2_TR(0x621a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621a1cull));
TAIL_STATIC(0x5aad20u,5aa);
}
B621a1c:L621a1c:{c.instructions+=19;NFSU2_TR(0x621a1c);
{u32 ea_=u32(r4(R+16)+u32(2600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621a23:{NFSU2_TR(0x621a23);
{u32 ea_=u32(u32(8021596u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621a29:{NFSU2_TR(0x621a29);
u8 U[8];
w4(U+0,u32(u32(u32(0xa20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621a30:{NFSU2_TR(0x621a30);
u8 U[8];
w4(U+0,u32(u32(u32(0xa24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621a37:{NFSU2_TR(0x621a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B621a3a:{NFSU2_TR(0x621a3a);
__builtin_memmove((R+0),(R+16),4);
}
B621a3c:{NFSU2_TR(0x621a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B621a3e:{NFSU2_TR(0x621a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621a41:{NFSU2_TR(0x621a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621a48:{NFSU2_TR(0x621a48);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621a4f:{NFSU2_TR(0x621a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621a56:{NFSU2_TR(0x621a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621a59:{NFSU2_TR(0x621a59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621a60:{NFSU2_TR(0x621a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621a67:{NFSU2_TR(0x621a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621a6a:{NFSU2_TR(0x621a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B621a71:{NFSU2_TR(0x621a71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621a72:{NFSU2_TR(0x621a72);
u8 U[4];
w4(U+0,u32(u32(u32(0xdb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621a79:{NFSU2_TR(0x621a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621a7eull));
TAIL_STATIC(0x487210u,487);
}
B621a7e:L621a7e:{c.instructions+=4;NFSU2_TR(0x621a7e);
u8 U[4];
w4(U+0,u32(u32(u32(0xb00ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621a85:{NFSU2_TR(0x621a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621a86:{NFSU2_TR(0x621a86);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621a8d:{NFSU2_TR(0x621a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621a92ull));
TAIL_STATIC(0x48b7f0u,48b);
}
B621a92:L621a92:{c.instructions+=9;NFSU2_TR(0x621a92);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621a95:{NFSU2_TR(0x621a95);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621a9c:{NFSU2_TR(0x621a9c);
u8 U[4];
w4(U+0,u32(u32(u32(0xae0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621aa3:{NFSU2_TR(0x621aa3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621aa4:{NFSU2_TR(0x621aa4);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621aab:{NFSU2_TR(0x621aab);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621ab2:{NFSU2_TR(0x621ab2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B621ab4:{NFSU2_TR(0x621ab4);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621abb:{NFSU2_TR(0x621abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621ac0ull));
TAIL_STATIC(0x6151d0u,615);
}
B621ac0:L621ac0:{c.instructions+=9;NFSU2_TR(0x621ac0);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621ac7:{NFSU2_TR(0x621ac7);
u8 U[4];
w4(U+0,u32(u32(u32(0xb10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621ace:{NFSU2_TR(0x621ace);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621ad4:{NFSU2_TR(0x621ad4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621ad5:{NFSU2_TR(0x621ad5);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621adc:{NFSU2_TR(0x621adc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621ade:{NFSU2_TR(0x621ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621ae2:{NFSU2_TR(0x621ae2);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621ae5:{NFSU2_TR(0x621ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621aeaull));
TAIL_STATIC(0x615200u,615);
}
B621aea:L621aea:{c.instructions+=17;NFSU2_TR(0x621aea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621aed:{NFSU2_TR(0x621aed);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621af1:{NFSU2_TR(0x621af1);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621af8:{NFSU2_TR(0x621af8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B621afa:{NFSU2_TR(0x621afa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621afc:{NFSU2_TR(0x621afc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B621aff:{NFSU2_TR(0x621aff);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621b06:{NFSU2_TR(0x621b06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B621b07:{NFSU2_TR(0x621b07);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621b0d:{NFSU2_TR(0x621b0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621b11:{NFSU2_TR(0x621b11);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621b18:{NFSU2_TR(0x621b18);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B621b1a:{NFSU2_TR(0x621b1a);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621b1d:{NFSU2_TR(0x621b1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621b24:{NFSU2_TR(0x621b24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621b26:{NFSU2_TR(0x621b26);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B621b28:{NFSU2_TR(0x621b28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x621a00u);}goto L621a00;}}
}
B621b2e:L621b2e:{c.instructions+=14;NFSU2_TR(0x621b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621b35:{NFSU2_TR(0x621b35);
{u32 ea_=u32(u32(8021688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621b3b:{NFSU2_TR(0x621b3b);
__builtin_memmove((R+0),gp(0x7a66b8),4);
}
B621b40:{NFSU2_TR(0x621b40);
{u32 ea_=u32(u32(9051912u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621b46:{NFSU2_TR(0x621b46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b47:{NFSU2_TR(0x621b47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b48:{NFSU2_TR(0x621b48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b49:{NFSU2_TR(0x621b49);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621b4d:{NFSU2_TR(0x621b4d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621b50:{NFSU2_TR(0x621b50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b51:{NFSU2_TR(0x621b51);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621b58:{NFSU2_TR(0x621b58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b59:{NFSU2_TR(0x621b59);
u8 U[4];
w4(U+0,u32(0x8a3b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b5e:{NFSU2_TR(0x621b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621b63ull));
TAIL_STATIC(0x60d000u,60d);
}
B621b63:L621b63:{c.instructions+=4;NFSU2_TR(0x621b63);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621b6a:{NFSU2_TR(0x621b6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B621b6d:{NFSU2_TR(0x621b6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621b6f:{NFSU2_TR(0x621b6f);
if(r1(R+518)){{goto L621b8e;}}
}
B621b71:L621b71:{c.instructions+=3;NFSU2_TR(0x621b71);
__builtin_memmove((R+0),gp(0x8a1c60),4);
}
B621b76:{NFSU2_TR(0x621b76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621b78:{NFSU2_TR(0x621b78);
if(r1(R+518)){{goto L621b8e;}}
}
B621b7a:L621b7a:{c.instructions+=3;NFSU2_TR(0x621b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621b81:{NFSU2_TR(0x621b81);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x8a2cf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B621b8c:{NFSU2_TR(0x621b8c);
{goto L621bb0;}
}
B621b8e:L621b8e:{c.instructions+=3;NFSU2_TR(0x621b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621b95:{NFSU2_TR(0x621b95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621b96:{NFSU2_TR(0x621b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621b9bull));
TAIL_STATIC(0x60d1b0u,60d);
}
B621b9b:L621b9b:{c.instructions+=3;NFSU2_TR(0x621b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B621b9e:{NFSU2_TR(0x621b9e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ba5:{NFSU2_TR(0x621ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x8a1f50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B621bb0:L621bb0:{c.instructions+=2;NFSU2_TR(0x621bb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621bb3:{NFSU2_TR(0x621bb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x622103u,622);}
}
B621bb9:L621bb9:{c.instructions+=10;NFSU2_TR(0x621bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621bc0:{NFSU2_TR(0x621bc0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B621bc1:{NFSU2_TR(0x621bc1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B621bc3:{NFSU2_TR(0x621bc3);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B621bc5:{NFSU2_TR(0x621bc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B621bc8:{NFSU2_TR(0x621bc8);
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
B621bca:{NFSU2_TR(0x621bca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621bcb:{NFSU2_TR(0x621bcb);
u8 U[4];
w4(U+0,u32(u32(u32(0xaf4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621bd2:{NFSU2_TR(0x621bd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621bd3:{NFSU2_TR(0x621bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621bd8ull));
TAIL_STATIC(0x401220u,401);
}
B621bd8:L621bd8:{c.instructions+=21;NFSU2_TR(0x621bd8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621bdb:{NFSU2_TR(0x621bdb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621bde:{NFSU2_TR(0x621bde);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621be0:{NFSU2_TR(0x621be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621be4:{NFSU2_TR(0x621be4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B621be7:{NFSU2_TR(0x621be7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621bed:{NFSU2_TR(0x621bed);
{u32 ea_=u32(r4(R+16)+u32(2128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621bf4:{NFSU2_TR(0x621bf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B621bf6:{NFSU2_TR(0x621bf6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621bfc:{NFSU2_TR(0x621bfc);
{u32 ea_=u32(r4(R+16)+u32(2132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621c03:{NFSU2_TR(0x621c03);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621c09:{NFSU2_TR(0x621c09);
{u32 ea_=u32(r4(R+16)+u32(2136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621c10:{NFSU2_TR(0x621c10);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621c17:{NFSU2_TR(0x621c17);
{u32 ea_=u32(u32(8030392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621c1d:{NFSU2_TR(0x621c1d);
{u32 ea_=u32(u32(8021420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621c23:{NFSU2_TR(0x621c23);
{u32 ea_=u32(u32(8021588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621c29:{NFSU2_TR(0x621c29);
{u32 ea_=u32(u32(8021592u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621c2f:{NFSU2_TR(0x621c2f);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B621c36:{NFSU2_TR(0x621c36);
{u32 ea_=u32(u32(8021592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B621c3c:{NFSU2_TR(0x621c3c);
{u32 ea_=u32(u32(8398524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621c42:{NFSU2_TR(0x621c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L621c5e;}}
}
B621c44:L621c44:{c.instructions+=6;NFSU2_TR(0x621c44);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621c48:{NFSU2_TR(0x621c48);
{u32 ea_=u32(u32(8021732u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621c4e:{NFSU2_TR(0x621c4e);
{u32 ea_=u32(u32(8021728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621c54:{NFSU2_TR(0x621c54);
{u32 ea_=u32(u32(8021732u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B621c5a:{NFSU2_TR(0x621c5a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B621c5c:{NFSU2_TR(0x621c5c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B621c5e:L621c5e:{c.instructions+=1;NFSU2_TR(0x621c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621c63ull));
TAIL_STATIC(0x75bed4u,75b);
}
B621c63:L621c63:{c.instructions+=2;NFSU2_TR(0x621c63);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621c65:{NFSU2_TR(0x621c65);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L621c6b;}}
}
B621c67:L621c67:{c.instructions+=2;NFSU2_TR(0x621c67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B621c69:{NFSU2_TR(0x621c69);
{goto L621c77;}
}
B621c6b:L621c6b:{c.instructions+=2;NFSU2_TR(0x621c6b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621c70:{NFSU2_TR(0x621c70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L621c77;}}
}
B621c72:L621c72:{c.instructions+=1;NFSU2_TR(0x621c72);
w4(R+0,u32(0xfeull));
}
B621c77:L621c77:{c.instructions+=6;NFSU2_TR(0x621c77);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B621c7a:{NFSU2_TR(0x621c7a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x808080ull))));
}
B621c7f:{NFSU2_TR(0x621c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621c86:{NFSU2_TR(0x621c86);
__builtin_memmove((R+0),gp(0x802918),4);
}
B621c8b:{NFSU2_TR(0x621c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621c8d:{NFSU2_TR(0x621c8d);
if(r1(R+518)){TAIL_STATIC(0x622103u,622);}
}
B621c93:L621c93:{c.instructions+=7;NFSU2_TR(0x621c93);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621c9a:{NFSU2_TR(0x621c9a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B621c9d:{NFSU2_TR(0x621c9d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B621c9e:{NFSU2_TR(0x621c9e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B621ca0:{NFSU2_TR(0x621ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B621cab:{NFSU2_TR(0x621cab);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621cb2:{NFSU2_TR(0x621cb2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L621dc9;}}
}
B621cb8:L621cb8:{c.instructions+=2;NFSU2_TR(0x621cb8);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621cbf:{NFSU2_TR(0x621cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621cc3:L621cc3:{c.instructions+=6;NFSU2_TR(0x621cc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621cc7:{NFSU2_TR(0x621cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621ccd:{NFSU2_TR(0x621ccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621cce:{NFSU2_TR(0x621cce);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621cd0:{NFSU2_TR(0x621cd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621cd1:{NFSU2_TR(0x621cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621cd6ull));
TAIL_STATIC(0x5bdfe0u,5bd);
}
B621cd6:L621cd6:{c.instructions+=3;NFSU2_TR(0x621cd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B621cd9:{NFSU2_TR(0x621cd9);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B621cdb:{NFSU2_TR(0x621cdb);
if(r1(R+518)){{goto L621d9e;}}
}
B621ce1:L621ce1:{c.instructions+=3;NFSU2_TR(0x621ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621ce5:{NFSU2_TR(0x621ce5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621ce6:{NFSU2_TR(0x621ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621cebull));
TAIL_STATIC(0x5be130u,5be);
}
B621ceb:L621ceb:{c.instructions+=3;NFSU2_TR(0x621ceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621cf2:{NFSU2_TR(0x621cf2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621cf3:{NFSU2_TR(0x621cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621cf8ull));
TAIL_STATIC(0x5be130u,5be);
}
B621cf8:L621cf8:{c.instructions+=4;NFSU2_TR(0x621cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621cfc:{NFSU2_TR(0x621cfc);
w1(R+512,carry<u32>(r4(R+8),u32(0x10ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B621cff:{NFSU2_TR(0x621cff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d00:{NFSU2_TR(0x621d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d05ull));
TAIL_STATIC(0x5be130u,5be);
}
B621d05:L621d05:{c.instructions+=9;NFSU2_TR(0x621d05);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621d0c:{NFSU2_TR(0x621d0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B621d0f:{NFSU2_TR(0x621d0f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B621d10:{NFSU2_TR(0x621d10);
u8 U[64];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x621d10);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x621d10);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B621d17:{NFSU2_TR(0x621d17);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621d1e:{NFSU2_TR(0x621d1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B621d21:{NFSU2_TR(0x621d21);
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B621d23:{NFSU2_TR(0x621d23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d24:{NFSU2_TR(0x621d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d29ull));
TAIL_STATIC(0x5be130u,5be);
}
B621d29:L621d29:{c.instructions+=3;NFSU2_TR(0x621d29);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621d30:{NFSU2_TR(0x621d30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d31:{NFSU2_TR(0x621d31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d36ull));
TAIL_STATIC(0x5be060u,5be);
}
B621d36:L621d36:{c.instructions+=3;NFSU2_TR(0x621d36);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621d3d:{NFSU2_TR(0x621d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d3e:{NFSU2_TR(0x621d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d43ull));
TAIL_STATIC(0x5be060u,5be);
}
B621d43:L621d43:{c.instructions+=3;NFSU2_TR(0x621d43);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621d4a:{NFSU2_TR(0x621d4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d4b:{NFSU2_TR(0x621d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d50ull));
TAIL_STATIC(0x5be060u,5be);
}
B621d50:L621d50:{c.instructions+=3;NFSU2_TR(0x621d50);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621d57:{NFSU2_TR(0x621d57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d58:{NFSU2_TR(0x621d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d5dull));
TAIL_STATIC(0x5be060u,5be);
}
B621d5d:L621d5d:{c.instructions+=4;NFSU2_TR(0x621d5d);
__builtin_memmove((R+4),gp(0x7a6650),4);
}
B621d63:{NFSU2_TR(0x621d63);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d65:{NFSU2_TR(0x621d65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d66:{NFSU2_TR(0x621d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d6bull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621d6b:L621d6b:{c.instructions+=3;NFSU2_TR(0x621d6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d6d:{NFSU2_TR(0x621d6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d6f:{NFSU2_TR(0x621d6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d74ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621d74:L621d74:{c.instructions+=4;NFSU2_TR(0x621d74);
__builtin_memmove((R+8),gp(0x7a6650),4);
}
B621d7a:{NFSU2_TR(0x621d7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d7c:{NFSU2_TR(0x621d7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d7d:{NFSU2_TR(0x621d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d82ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621d82:L621d82:{c.instructions+=4;NFSU2_TR(0x621d82);
__builtin_memmove((R+0),gp(0x7a6650),4);
}
B621d87:{NFSU2_TR(0x621d87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d89:{NFSU2_TR(0x621d89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d8a:{NFSU2_TR(0x621d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d8full));
TAIL_STATIC(0x5be0f0u,5be);
}
B621d8f:L621d8f:{c.instructions+=4;NFSU2_TR(0x621d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621d92:{NFSU2_TR(0x621d92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B621d95:{NFSU2_TR(0x621d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621d96:{NFSU2_TR(0x621d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621d9bull));
TAIL_STATIC(0x5cec40u,5ce);
}
B621d9b:L621d9b:{c.instructions+=1;NFSU2_TR(0x621d9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B621d9e:L621d9e:{c.instructions+=9;NFSU2_TR(0x621d9e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621da5:{NFSU2_TR(0x621da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621da9:{NFSU2_TR(0x621da9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621db0:{NFSU2_TR(0x621db0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B621db3:{NFSU2_TR(0x621db3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B621db6:{NFSU2_TR(0x621db6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621db8:{NFSU2_TR(0x621db8);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621dbf:{NFSU2_TR(0x621dbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621dc3:{NFSU2_TR(0x621dc3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x621cc3u);}goto L621cc3;}}
}
B621dc9:L621dc9:{c.instructions+=2;NFSU2_TR(0x621dc9);
u8 U[6];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B621dd1:{NFSU2_TR(0x621dd1);
if(r1(R+518)){{goto L621e81;}}
}
B621dd7:L621dd7:{c.instructions+=6;NFSU2_TR(0x621dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621ddb:{NFSU2_TR(0x621ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621de1:{NFSU2_TR(0x621de1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621de2:{NFSU2_TR(0x621de2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621de4:{NFSU2_TR(0x621de4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621de5:{NFSU2_TR(0x621de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621deaull));
TAIL_STATIC(0x5bdfe0u,5bd);
}
B621dea:L621dea:{c.instructions+=3;NFSU2_TR(0x621dea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B621ded:{NFSU2_TR(0x621ded);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B621def:{NFSU2_TR(0x621def);
if(r1(R+518)){{goto L621e81;}}
}
B621df5:L621df5:{c.instructions+=6;NFSU2_TR(0x621df5);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621dfc:{NFSU2_TR(0x621dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621e03:{NFSU2_TR(0x621e03);
u8 U[23];
w4(U+15,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B621e06:{NFSU2_TR(0x621e06);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B621e0a:{NFSU2_TR(0x621e0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e0b:{NFSU2_TR(0x621e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e10ull));
TAIL_STATIC(0x5be130u,5be);
}
B621e10:L621e10:{c.instructions+=3;NFSU2_TR(0x621e10);
u8 U[4];
w4(U+0,u32(u32(u32(0x854ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621e17:{NFSU2_TR(0x621e17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e18:{NFSU2_TR(0x621e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e1dull));
TAIL_STATIC(0x5be130u,5be);
}
B621e1d:L621e1d:{c.instructions+=3;NFSU2_TR(0x621e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621e24:{NFSU2_TR(0x621e24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e25:{NFSU2_TR(0x621e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e2aull));
TAIL_STATIC(0x5be130u,5be);
}
B621e2a:L621e2a:{c.instructions+=3;NFSU2_TR(0x621e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621e31:{NFSU2_TR(0x621e31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e32:{NFSU2_TR(0x621e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e37ull));
TAIL_STATIC(0x5be060u,5be);
}
B621e37:L621e37:{c.instructions+=3;NFSU2_TR(0x621e37);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621e3e:{NFSU2_TR(0x621e3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e3f:{NFSU2_TR(0x621e3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e44ull));
TAIL_STATIC(0x5be060u,5be);
}
B621e44:L621e44:{c.instructions+=3;NFSU2_TR(0x621e44);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621e4b:{NFSU2_TR(0x621e4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e4c:{NFSU2_TR(0x621e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e51ull));
TAIL_STATIC(0x5be060u,5be);
}
B621e51:L621e51:{c.instructions+=4;NFSU2_TR(0x621e51);
__builtin_memmove((R+0),gp(0x7a6650),4);
}
B621e56:{NFSU2_TR(0x621e56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e58:{NFSU2_TR(0x621e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e59:{NFSU2_TR(0x621e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e5eull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621e5e:L621e5e:{c.instructions+=3;NFSU2_TR(0x621e5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e60:{NFSU2_TR(0x621e60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e62:{NFSU2_TR(0x621e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e67ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621e67:L621e67:{c.instructions+=4;NFSU2_TR(0x621e67);
__builtin_memmove((R+4),gp(0x7a6650),4);
}
B621e6d:{NFSU2_TR(0x621e6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e6f:{NFSU2_TR(0x621e6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e70:{NFSU2_TR(0x621e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e75ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621e75:L621e75:{c.instructions+=3;NFSU2_TR(0x621e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621e78:{NFSU2_TR(0x621e78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621e79:{NFSU2_TR(0x621e79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621e7eull));
TAIL_STATIC(0x5cec40u,5ce);
}
B621e7e:L621e7e:{c.instructions+=1;NFSU2_TR(0x621e7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B621e81:L621e81:{c.instructions+=23;NFSU2_TR(0x621e81);
w4(R+0,u32(0x55555556ull));
}
B621e86:{NFSU2_TR(0x621e86);
u8 U[32];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B621e8d:{NFSU2_TR(0x621e8d);
__builtin_memmove((R+0),(R+8),4);
}
B621e8f:{NFSU2_TR(0x621e8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B621e92:{NFSU2_TR(0x621e92);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B621e94:{NFSU2_TR(0x621e94);
__builtin_memmove((R+4),(R+8),4);
}
B621e96:{NFSU2_TR(0x621e96);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B621e99:{NFSU2_TR(0x621e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ea0:{NFSU2_TR(0x621ea0);
__builtin_memmove((R+4),(R+8),4);
}
B621ea2:{NFSU2_TR(0x621ea2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B621ea4:{NFSU2_TR(0x621ea4);
w4(R+4,u32(0-u32(r4(R+4))));
}
B621ea6:{NFSU2_TR(0x621ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ead:{NFSU2_TR(0x621ead);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621eb4:{NFSU2_TR(0x621eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621eb8:{NFSU2_TR(0x621eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621ebf:{NFSU2_TR(0x621ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B621eca:{NFSU2_TR(0x621eca);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ed1:{NFSU2_TR(0x621ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ed8:{NFSU2_TR(0x621ed8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B621ed9:{NFSU2_TR(0x621ed9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621edc:{NFSU2_TR(0x621edc);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ee0:{NFSU2_TR(0x621ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ee4:{NFSU2_TR(0x621ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L621eea;}}
}
B621ee6:L621ee6:{c.instructions+=1;NFSU2_TR(0x621ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621eea:L621eea:{c.instructions+=8;NFSU2_TR(0x621eea);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621eee:{NFSU2_TR(0x621eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621ef2:{NFSU2_TR(0x621ef2);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B621ef6:{NFSU2_TR(0x621ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621efc:{NFSU2_TR(0x621efc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621efd:{NFSU2_TR(0x621efd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621efe:{NFSU2_TR(0x621efe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621eff:{NFSU2_TR(0x621eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621f04ull));
TAIL_STATIC(0x5be180u,5be);
}
B621f04:L621f04:{c.instructions+=3;NFSU2_TR(0x621f04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B621f07:{NFSU2_TR(0x621f07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B621f09:{NFSU2_TR(0x621f09);
if(r1(R+518)){TAIL_STATIC(0x6220bdu,622);}
}
B621f0f:L621f0f:{c.instructions+=6;NFSU2_TR(0x621f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621f16:{NFSU2_TR(0x621f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621f1a:{NFSU2_TR(0x621f1a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B621f1c:{NFSU2_TR(0x621f1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B621f1e:{NFSU2_TR(0x621f1e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621f25:{NFSU2_TR(0x621f25);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L621ffa;}}
}
B621f2b:L621f2b:{c.instructions+=8;NFSU2_TR(0x621f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621f2f:{NFSU2_TR(0x621f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621f33:{NFSU2_TR(0x621f33);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621f3a:{NFSU2_TR(0x621f3a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B621f3c:{NFSU2_TR(0x621f3c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B621f3e:{NFSU2_TR(0x621f3e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621f45:{NFSU2_TR(0x621f45);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621f4c:{NFSU2_TR(0x621f4c);
__builtin_memmove((R+16),(R+16),4);
}
B621f50:L621f50:{c.instructions+=7;NFSU2_TR(0x621f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621f54:{NFSU2_TR(0x621f54);
u8 U[4];
w4(U+0,u32(u32(u32(0x850ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B621f5b:{NFSU2_TR(0x621f5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621f5c:{NFSU2_TR(0x621f5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621f5d:{NFSU2_TR(0x621f5d);
u8 U[4];
w4(U+0,u32(u32(u32(0xad8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621f64:{NFSU2_TR(0x621f64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621f65:{NFSU2_TR(0x621f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621f6aull));
TAIL_STATIC(0x60d490u,60d);
}
B621f6a:L621f6a:{c.instructions+=10;NFSU2_TR(0x621f6a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621f6d:{NFSU2_TR(0x621f6d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B621f70:{NFSU2_TR(0x621f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B621f72:{NFSU2_TR(0x621f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621f76:{NFSU2_TR(0x621f76);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B621f78:{NFSU2_TR(0x621f78);
{u32 ea_=u32(r4(R+16)+u32(2112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621f7f:{NFSU2_TR(0x621f7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621f80:{NFSU2_TR(0x621f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x840ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621f87:{NFSU2_TR(0x621f87);
{u32 ea_=u32(r4(R+16)+u32(2120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B621f8e:{NFSU2_TR(0x621f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621f93ull));
TAIL_STATIC(0x5be130u,5be);
}
B621f93:L621f93:{c.instructions+=3;NFSU2_TR(0x621f93);
u8 U[4];
w4(U+0,u32(u32(u32(0x840ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B621f9a:{NFSU2_TR(0x621f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621f9b:{NFSU2_TR(0x621f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621fa0ull));
TAIL_STATIC(0x5be130u,5be);
}
B621fa0:L621fa0:{c.instructions+=3;NFSU2_TR(0x621fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B621fa7:{NFSU2_TR(0x621fa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fa8:{NFSU2_TR(0x621fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621fadull));
TAIL_STATIC(0x5be0a0u,5be);
}
B621fad:L621fad:{c.instructions+=3;NFSU2_TR(0x621fad);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621fb4:{NFSU2_TR(0x621fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fb5:{NFSU2_TR(0x621fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621fbaull));
TAIL_STATIC(0x5be0a0u,5be);
}
B621fba:L621fba:{c.instructions+=4;NFSU2_TR(0x621fba);
__builtin_memmove((R+4),gp(0x7a6650),4);
}
B621fc0:{NFSU2_TR(0x621fc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fc2:{NFSU2_TR(0x621fc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fc3:{NFSU2_TR(0x621fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621fc8ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621fc8:L621fc8:{c.instructions+=3;NFSU2_TR(0x621fc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fca:{NFSU2_TR(0x621fca);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B621fcf:{NFSU2_TR(0x621fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x621fd4ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B621fd4:L621fd4:{c.instructions+=8;NFSU2_TR(0x621fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B621fdb:{NFSU2_TR(0x621fdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B621fe2:{NFSU2_TR(0x621fe2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B621fe5:{NFSU2_TR(0x621fe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B621fe8:{NFSU2_TR(0x621fe8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B621fe9:{NFSU2_TR(0x621fe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621fed:{NFSU2_TR(0x621fed);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B621ff4:{NFSU2_TR(0x621ff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x621f50u);}goto L621f50;}}
}
B621ffa:L621ffa:{c.instructions+=1;NFSU2_TR(0x621ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x622001u,622);
}
XIT:NFSU2_TR_EXIT(0x621,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
