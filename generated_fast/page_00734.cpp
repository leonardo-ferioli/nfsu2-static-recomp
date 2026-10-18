#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_733(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x734,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x734,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_734(u8* __restrict R,Cpu& c);
u32 page_734(Cpu& c){return body_734(c.regs.data(),c);}
__attribute__((noinline)) u32 body_734(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x734001:goto L734001;
case 0x734004:c.instructions+=222;goto B734004;
case 0x73400a:c.instructions+=221;goto B73400a;
case 0x73400c:c.instructions+=220;goto B73400c;
case 0x73400e:c.instructions+=219;goto B73400e;
case 0x734014:c.instructions+=218;goto B734014;
case 0x734016:c.instructions+=217;goto B734016;
case 0x734019:c.instructions+=216;goto B734019;
case 0x73401f:c.instructions+=215;goto B73401f;
case 0x734021:c.instructions+=214;goto B734021;
case 0x734024:c.instructions+=213;goto B734024;
case 0x73402a:c.instructions+=212;goto B73402a;
case 0x73402c:c.instructions+=211;goto B73402c;
case 0x73402f:c.instructions+=210;goto B73402f;
case 0x734035:c.instructions+=209;goto B734035;
case 0x734037:c.instructions+=208;goto B734037;
case 0x734039:c.instructions+=207;goto B734039;
case 0x73403f:c.instructions+=206;goto B73403f;
case 0x734041:c.instructions+=205;goto B734041;
case 0x734044:c.instructions+=204;goto B734044;
case 0x73404a:c.instructions+=203;goto B73404a;
case 0x73404c:c.instructions+=202;goto B73404c;
case 0x73404f:c.instructions+=201;goto B73404f;
case 0x734052:c.instructions+=200;goto B734052;
case 0x734058:c.instructions+=199;goto B734058;
case 0x73405b:c.instructions+=198;goto B73405b;
case 0x73405d:c.instructions+=197;goto B73405d;
case 0x734063:c.instructions+=196;goto B734063;
case 0x734065:c.instructions+=195;goto B734065;
case 0x73406b:c.instructions+=194;goto B73406b;
case 0x73406d:c.instructions+=193;goto B73406d;
case 0x734070:c.instructions+=192;goto B734070;
case 0x734076:c.instructions+=191;goto B734076;
case 0x734078:c.instructions+=190;goto B734078;
case 0x73407a:c.instructions+=189;goto B73407a;
case 0x734080:c.instructions+=188;goto B734080;
case 0x734082:c.instructions+=187;goto B734082;
case 0x734085:c.instructions+=186;goto B734085;
case 0x73408b:c.instructions+=185;goto B73408b;
case 0x73408d:c.instructions+=184;goto B73408d;
case 0x734090:c.instructions+=183;goto B734090;
case 0x734096:c.instructions+=182;goto B734096;
case 0x734098:c.instructions+=181;goto B734098;
case 0x73409a:c.instructions+=180;goto B73409a;
case 0x7340a0:c.instructions+=179;goto B7340a0;
case 0x7340a2:c.instructions+=178;goto B7340a2;
case 0x7340a4:c.instructions+=177;goto B7340a4;
case 0x7340aa:c.instructions+=176;goto B7340aa;
case 0x7340ac:c.instructions+=175;goto B7340ac;
case 0x7340af:c.instructions+=174;goto B7340af;
case 0x7340b5:c.instructions+=173;goto B7340b5;
case 0x7340b7:c.instructions+=172;goto B7340b7;
case 0x7340ba:c.instructions+=171;goto B7340ba;
case 0x7340c0:c.instructions+=170;goto B7340c0;
case 0x7340c2:c.instructions+=169;goto B7340c2;
case 0x7340c4:c.instructions+=168;goto B7340c4;
case 0x7340ca:c.instructions+=167;goto B7340ca;
case 0x7340cc:c.instructions+=166;goto B7340cc;
case 0x7340cf:c.instructions+=165;goto B7340cf;
case 0x7340d5:c.instructions+=164;goto B7340d5;
case 0x7340d7:c.instructions+=163;goto B7340d7;
case 0x7340da:c.instructions+=162;goto B7340da;
case 0x7340dd:c.instructions+=161;goto B7340dd;
case 0x7340e3:c.instructions+=160;goto B7340e3;
case 0x7340e6:c.instructions+=159;goto B7340e6;
case 0x7340e8:c.instructions+=158;goto B7340e8;
case 0x7340ee:c.instructions+=157;goto B7340ee;
case 0x7340f1:c.instructions+=156;goto B7340f1;
case 0x7340f7:c.instructions+=155;goto B7340f7;
case 0x7340f9:c.instructions+=154;goto B7340f9;
case 0x7340fc:c.instructions+=153;goto B7340fc;
case 0x734102:c.instructions+=152;goto B734102;
case 0x734104:c.instructions+=151;goto B734104;
case 0x734106:c.instructions+=150;goto B734106;
case 0x73410c:c.instructions+=149;goto B73410c;
case 0x73410e:c.instructions+=148;goto B73410e;
case 0x734111:c.instructions+=147;goto B734111;
case 0x734117:c.instructions+=146;goto B734117;
case 0x734119:c.instructions+=145;goto B734119;
case 0x73411c:c.instructions+=144;goto B73411c;
case 0x734122:c.instructions+=143;goto B734122;
case 0x734124:c.instructions+=142;goto B734124;
case 0x734126:c.instructions+=141;goto B734126;
case 0x73412c:c.instructions+=140;goto B73412c;
case 0x73412e:c.instructions+=139;goto B73412e;
case 0x734130:c.instructions+=138;goto B734130;
case 0x734136:c.instructions+=137;goto B734136;
case 0x734138:c.instructions+=136;goto B734138;
case 0x73413a:c.instructions+=135;goto B73413a;
case 0x734140:c.instructions+=134;goto B734140;
case 0x734142:c.instructions+=133;goto B734142;
case 0x734145:c.instructions+=132;goto B734145;
case 0x73414b:c.instructions+=131;goto B73414b;
case 0x73414d:c.instructions+=130;goto B73414d;
case 0x73414f:c.instructions+=129;goto B73414f;
case 0x734155:c.instructions+=128;goto B734155;
case 0x734157:c.instructions+=127;goto B734157;
case 0x73415a:c.instructions+=126;goto B73415a;
case 0x734160:c.instructions+=125;goto B734160;
case 0x734162:c.instructions+=124;goto B734162;
case 0x734165:c.instructions+=123;goto B734165;
case 0x734168:c.instructions+=122;goto B734168;
case 0x73416e:c.instructions+=121;goto B73416e;
case 0x734171:c.instructions+=120;goto B734171;
case 0x734173:c.instructions+=119;goto B734173;
case 0x734179:c.instructions+=118;goto B734179;
case 0x73417c:c.instructions+=117;goto B73417c;
case 0x734182:c.instructions+=116;goto B734182;
case 0x734184:c.instructions+=115;goto B734184;
case 0x734187:c.instructions+=114;goto B734187;
case 0x73418d:c.instructions+=113;goto B73418d;
case 0x73418f:c.instructions+=112;goto B73418f;
case 0x734191:c.instructions+=111;goto B734191;
case 0x734197:c.instructions+=110;goto B734197;
case 0x734199:c.instructions+=109;goto B734199;
case 0x73419b:c.instructions+=108;goto B73419b;
case 0x7341a1:c.instructions+=107;goto B7341a1;
case 0x7341a3:c.instructions+=106;goto B7341a3;
case 0x7341a6:c.instructions+=105;goto B7341a6;
case 0x7341ac:c.instructions+=104;goto B7341ac;
case 0x7341ae:c.instructions+=103;goto B7341ae;
case 0x7341b0:c.instructions+=102;goto B7341b0;
case 0x7341b6:c.instructions+=101;goto B7341b6;
case 0x7341b8:c.instructions+=100;goto B7341b8;
case 0x7341ba:c.instructions+=99;goto B7341ba;
case 0x7341c0:c.instructions+=98;goto B7341c0;
case 0x7341c2:c.instructions+=97;goto B7341c2;
case 0x7341c4:c.instructions+=96;goto B7341c4;
case 0x7341ca:c.instructions+=95;goto B7341ca;
case 0x7341cc:c.instructions+=94;goto B7341cc;
case 0x7341cf:c.instructions+=93;goto B7341cf;
case 0x7341d5:c.instructions+=92;goto B7341d5;
case 0x7341d7:c.instructions+=91;goto B7341d7;
case 0x7341da:c.instructions+=90;goto B7341da;
case 0x7341e0:c.instructions+=89;goto B7341e0;
case 0x7341e2:c.instructions+=88;goto B7341e2;
case 0x7341e5:c.instructions+=87;goto B7341e5;
case 0x7341eb:c.instructions+=86;goto B7341eb;
case 0x7341ed:c.instructions+=85;goto B7341ed;
case 0x7341f0:c.instructions+=84;goto B7341f0;
case 0x7341f3:c.instructions+=83;goto B7341f3;
case 0x7341f9:c.instructions+=82;goto B7341f9;
case 0x7341fc:c.instructions+=81;goto B7341fc;
case 0x7341fe:c.instructions+=80;goto B7341fe;
case 0x734204:c.instructions+=79;goto B734204;
case 0x734206:c.instructions+=78;goto B734206;
case 0x73420c:c.instructions+=77;goto B73420c;
case 0x73420e:c.instructions+=76;goto B73420e;
case 0x734211:c.instructions+=75;goto B734211;
case 0x734217:c.instructions+=74;goto B734217;
case 0x734219:c.instructions+=73;goto B734219;
case 0x73421b:c.instructions+=72;goto B73421b;
case 0x734221:c.instructions+=71;goto B734221;
case 0x734223:c.instructions+=70;goto B734223;
case 0x734225:c.instructions+=69;goto B734225;
case 0x73422b:c.instructions+=68;goto B73422b;
case 0x73422d:c.instructions+=67;goto B73422d;
case 0x734230:c.instructions+=66;goto B734230;
case 0x734236:c.instructions+=65;goto B734236;
case 0x734239:c.instructions+=64;goto B734239;
case 0x73423a:c.instructions+=63;goto B73423a;
case 0x73423c:c.instructions+=62;goto B73423c;
case 0x73423e:c.instructions+=61;goto B73423e;
case 0x734244:c.instructions+=60;goto B734244;
case 0x734246:c.instructions+=59;goto B734246;
case 0x734248:c.instructions+=58;goto B734248;
case 0x73424e:c.instructions+=57;goto B73424e;
case 0x734250:c.instructions+=56;goto B734250;
case 0x734253:c.instructions+=55;goto B734253;
case 0x734259:c.instructions+=54;goto B734259;
case 0x73425b:c.instructions+=53;goto B73425b;
case 0x73425e:c.instructions+=52;goto B73425e;
case 0x734264:c.instructions+=51;goto B734264;
case 0x734266:c.instructions+=50;goto B734266;
case 0x734269:c.instructions+=49;goto B734269;
case 0x73426f:c.instructions+=48;goto B73426f;
case 0x734271:c.instructions+=47;goto B734271;
case 0x734274:c.instructions+=46;goto B734274;
case 0x73427a:c.instructions+=45;goto B73427a;
case 0x73427c:c.instructions+=44;goto B73427c;
case 0x73427f:c.instructions+=43;goto B73427f;
case 0x734282:c.instructions+=42;goto B734282;
case 0x734288:c.instructions+=41;goto B734288;
case 0x73428b:c.instructions+=40;goto B73428b;
case 0x73428d:c.instructions+=39;goto B73428d;
case 0x734293:c.instructions+=38;goto B734293;
case 0x734295:c.instructions+=37;goto B734295;
case 0x73429b:c.instructions+=36;goto B73429b;
case 0x73429d:c.instructions+=35;goto B73429d;
case 0x7342a0:c.instructions+=34;goto B7342a0;
case 0x7342a6:c.instructions+=33;goto B7342a6;
case 0x7342a8:c.instructions+=32;goto B7342a8;
case 0x7342aa:c.instructions+=31;goto B7342aa;
case 0x7342b0:c.instructions+=30;goto B7342b0;
case 0x7342b2:c.instructions+=29;goto B7342b2;
case 0x7342b5:c.instructions+=28;goto B7342b5;
case 0x7342bb:c.instructions+=27;goto B7342bb;
case 0x7342bd:c.instructions+=26;goto B7342bd;
case 0x7342c0:c.instructions+=25;goto B7342c0;
case 0x7342c6:c.instructions+=24;goto B7342c6;
case 0x7342c8:c.instructions+=23;goto B7342c8;
case 0x7342ca:c.instructions+=22;goto B7342ca;
case 0x7342d0:c.instructions+=21;goto B7342d0;
case 0x7342d2:c.instructions+=20;goto B7342d2;
case 0x7342d4:c.instructions+=19;goto B7342d4;
case 0x7342da:c.instructions+=18;goto B7342da;
case 0x7342dc:c.instructions+=17;goto B7342dc;
case 0x7342df:c.instructions+=16;goto B7342df;
case 0x7342e5:c.instructions+=15;goto B7342e5;
case 0x7342e7:c.instructions+=14;goto B7342e7;
case 0x7342ea:c.instructions+=13;goto B7342ea;
case 0x7342f0:c.instructions+=12;goto B7342f0;
case 0x7342f2:c.instructions+=11;goto B7342f2;
case 0x7342f4:c.instructions+=10;goto B7342f4;
case 0x7342fa:c.instructions+=9;goto B7342fa;
case 0x7342fc:c.instructions+=8;goto B7342fc;
case 0x7342ff:c.instructions+=7;goto B7342ff;
case 0x734305:c.instructions+=6;goto B734305;
case 0x734307:c.instructions+=5;goto B734307;
case 0x73430a:c.instructions+=4;goto B73430a;
case 0x73430d:c.instructions+=3;goto B73430d;
case 0x734313:c.instructions+=2;goto B734313;
case 0x734316:c.instructions+=1;goto B734316;
case 0x73431c:goto L73431c;
case 0x73431e:c.instructions+=9;goto B73431e;
case 0x734320:c.instructions+=8;goto B734320;
case 0x734322:c.instructions+=7;goto B734322;
case 0x734324:c.instructions+=6;goto B734324;
case 0x734326:c.instructions+=5;goto B734326;
case 0x734328:c.instructions+=4;goto B734328;
case 0x734329:c.instructions+=3;goto B734329;
case 0x73432a:c.instructions+=2;goto B73432a;
case 0x73432b:c.instructions+=1;goto B73432b;
case 0x73432c:goto L73432c;
case 0x73432d:c.instructions+=10;goto B73432d;
case 0x73432f:c.instructions+=9;goto B73432f;
case 0x734332:c.instructions+=8;goto B734332;
case 0x734335:c.instructions+=7;goto B734335;
case 0x734336:c.instructions+=6;goto B734336;
case 0x73433a:c.instructions+=5;goto B73433a;
case 0x734341:c.instructions+=4;goto B734341;
case 0x734343:c.instructions+=3;goto B734343;
case 0x734347:c.instructions+=2;goto B734347;
case 0x73434a:c.instructions+=1;goto B73434a;
case 0x734350:goto L734350;
case 0x734352:c.instructions+=2;goto B734352;
case 0x734353:c.instructions+=1;goto B734353;
case 0x734358:goto L734358;
case 0x73435a:c.instructions+=3;goto B73435a;
case 0x73435b:c.instructions+=2;goto B73435b;
case 0x73435e:c.instructions+=1;goto B73435e;
case 0x734363:goto L734363;
case 0x734365:c.instructions+=6;goto B734365;
case 0x734366:c.instructions+=5;goto B734366;
case 0x734368:c.instructions+=4;goto B734368;
case 0x73436b:c.instructions+=3;goto B73436b;
case 0x73436d:c.instructions+=2;goto B73436d;
case 0x73436e:c.instructions+=1;goto B73436e;
case 0x734373:goto L734373;
case 0x734374:c.instructions+=4;goto B734374;
case 0x734376:c.instructions+=3;goto B734376;
case 0x734379:c.instructions+=2;goto B734379;
case 0x73437c:c.instructions+=1;goto B73437c;
case 0x73437e:goto L73437e;
case 0x734384:goto L734384;
case 0x73438a:c.instructions+=4;goto B73438a;
case 0x73438c:c.instructions+=3;goto B73438c;
case 0x73438d:c.instructions+=2;goto B73438d;
case 0x734390:c.instructions+=1;goto B734390;
case 0x734395:goto L734395;
case 0x734397:c.instructions+=3;goto B734397;
case 0x73439a:c.instructions+=2;goto B73439a;
case 0x73439d:c.instructions+=1;goto B73439d;
case 0x73439f:goto L73439f;
case 0x7343a5:goto L7343a5;
case 0x7343ab:c.instructions+=4;goto B7343ab;
case 0x7343ad:c.instructions+=3;goto B7343ad;
case 0x7343b0:c.instructions+=2;goto B7343b0;
case 0x7343b1:c.instructions+=1;goto B7343b1;
case 0x7343b7:goto L7343b7;
case 0x7343b9:c.instructions+=5;goto B7343b9;
case 0x7343bc:c.instructions+=4;goto B7343bc;
case 0x7343be:c.instructions+=3;goto B7343be;
case 0x7343c1:c.instructions+=2;goto B7343c1;
case 0x7343c2:c.instructions+=1;goto B7343c2;
case 0x7343c4:goto L7343c4;
case 0x7343c6:c.instructions+=3;goto B7343c6;
case 0x7343c8:c.instructions+=2;goto B7343c8;
case 0x7343ce:c.instructions+=1;goto B7343ce;
case 0x7343cf:goto L7343cf;
case 0x7343d1:c.instructions+=6;goto B7343d1;
case 0x7343d4:c.instructions+=5;goto B7343d4;
case 0x7343d6:c.instructions+=4;goto B7343d6;
case 0x7343d8:c.instructions+=3;goto B7343d8;
case 0x7343db:c.instructions+=2;goto B7343db;
case 0x7343dc:c.instructions+=1;goto B7343dc;
case 0x7343de:goto L7343de;
case 0x7343df:c.instructions+=3;goto B7343df;
case 0x7343e5:c.instructions+=2;goto B7343e5;
case 0x7343ea:c.instructions+=1;goto B7343ea;
case 0x7343ec:goto L7343ec;
case 0x7343ee:goto L7343ee;
case 0x7343ef:goto L7343ef;
case 0x7343f0:c.instructions+=1;goto B7343f0;
case 0x7343f3:goto L7343f3;
case 0x7343f4:c.instructions+=10;goto B7343f4;
case 0x7343f6:c.instructions+=9;goto B7343f6;
case 0x7343fc:c.instructions+=8;goto B7343fc;
case 0x7343fd:c.instructions+=7;goto B7343fd;
case 0x7343fe:c.instructions+=6;goto B7343fe;
case 0x734401:c.instructions+=5;goto B734401;
case 0x734402:c.instructions+=4;goto B734402;
case 0x734404:c.instructions+=3;goto B734404;
case 0x734405:c.instructions+=2;goto B734405;
case 0x734407:c.instructions+=1;goto B734407;
case 0x73440c:goto L73440c;
case 0x734412:c.instructions+=11;goto B734412;
case 0x734419:c.instructions+=10;goto B734419;
case 0x73441b:c.instructions+=9;goto B73441b;
case 0x73441e:c.instructions+=8;goto B73441e;
case 0x734424:c.instructions+=7;goto B734424;
case 0x73442a:c.instructions+=6;goto B73442a;
case 0x73442d:c.instructions+=5;goto B73442d;
case 0x73442f:c.instructions+=4;goto B73442f;
case 0x734431:c.instructions+=3;goto B734431;
case 0x734432:c.instructions+=2;goto B734432;
case 0x734435:c.instructions+=1;goto B734435;
case 0x734438:goto L734438;
case 0x73443a:c.instructions+=3;goto B73443a;
case 0x73443b:c.instructions+=2;goto B73443b;
case 0x73443d:c.instructions+=1;goto B73443d;
case 0x734442:goto L734442;
case 0x734449:c.instructions+=7;goto B734449;
case 0x73444b:c.instructions+=6;goto B73444b;
case 0x73444c:c.instructions+=5;goto B73444c;
case 0x73444f:c.instructions+=4;goto B73444f;
case 0x734452:c.instructions+=3;goto B734452;
case 0x734454:c.instructions+=2;goto B734454;
case 0x734458:c.instructions+=1;goto B734458;
case 0x73445a:goto L73445a;
case 0x73445c:c.instructions+=2;goto B73445c;
case 0x73445d:c.instructions+=1;goto B73445d;
case 0x734463:goto L734463;
case 0x734465:c.instructions+=3;goto B734465;
case 0x734466:c.instructions+=2;goto B734466;
case 0x734468:c.instructions+=1;goto B734468;
case 0x73446d:goto L73446d;
case 0x734474:c.instructions+=7;goto B734474;
case 0x734476:c.instructions+=6;goto B734476;
case 0x734477:c.instructions+=5;goto B734477;
case 0x73447a:c.instructions+=4;goto B73447a;
case 0x73447d:c.instructions+=3;goto B73447d;
case 0x73447f:c.instructions+=2;goto B73447f;
case 0x734483:c.instructions+=1;goto B734483;
case 0x734485:goto L734485;
case 0x73448b:c.instructions+=3;goto B73448b;
case 0x73448d:c.instructions+=2;goto B73448d;
case 0x734494:c.instructions+=1;goto B734494;
case 0x734497:goto L734497;
case 0x734499:c.instructions+=3;goto B734499;
case 0x73449a:c.instructions+=2;goto B73449a;
case 0x73449c:c.instructions+=1;goto B73449c;
case 0x7344a1:goto L7344a1;
case 0x7344a4:c.instructions+=5;goto B7344a4;
case 0x7344a6:c.instructions+=4;goto B7344a6;
case 0x7344a8:c.instructions+=3;goto B7344a8;
case 0x7344a9:c.instructions+=2;goto B7344a9;
case 0x7344ac:c.instructions+=1;goto B7344ac;
case 0x7344b1:goto L7344b1;
case 0x7344b3:c.instructions+=3;goto B7344b3;
case 0x7344b6:c.instructions+=2;goto B7344b6;
case 0x7344b9:c.instructions+=1;goto B7344b9;
case 0x7344bb:goto L7344bb;
case 0x7344c1:goto L7344c1;
case 0x7344c7:c.instructions+=5;goto B7344c7;
case 0x7344c9:c.instructions+=4;goto B7344c9;
case 0x7344ca:c.instructions+=3;goto B7344ca;
case 0x7344cc:c.instructions+=2;goto B7344cc;
case 0x7344cf:c.instructions+=1;goto B7344cf;
case 0x7344d4:goto L7344d4;
case 0x7344d8:c.instructions+=3;goto B7344d8;
case 0x7344dc:c.instructions+=2;goto B7344dc;
case 0x7344df:c.instructions+=1;goto B7344df;
case 0x7344e1:goto L7344e1;
case 0x7344e3:c.instructions+=5;goto B7344e3;
case 0x7344e9:c.instructions+=4;goto B7344e9;
case 0x7344ea:c.instructions+=3;goto B7344ea;
case 0x7344ed:c.instructions+=2;goto B7344ed;
case 0x7344ee:c.instructions+=1;goto B7344ee;
case 0x7344f3:goto L7344f3;
case 0x7344f6:c.instructions+=1;goto B7344f6;
case 0x7344fb:goto L7344fb;
case 0x7344fd:c.instructions+=3;goto B7344fd;
case 0x7344fe:c.instructions+=2;goto B7344fe;
case 0x734500:c.instructions+=1;goto B734500;
case 0x734505:goto L734505;
case 0x734507:c.instructions+=3;goto B734507;
case 0x734508:c.instructions+=2;goto B734508;
case 0x73450a:c.instructions+=1;goto B73450a;
case 0x73450f:goto L73450f;
case 0x734512:c.instructions+=7;goto B734512;
case 0x734515:c.instructions+=6;goto B734515;
case 0x734517:c.instructions+=5;goto B734517;
case 0x73451e:c.instructions+=4;goto B73451e;
case 0x73451f:c.instructions+=3;goto B73451f;
case 0x734522:c.instructions+=2;goto B734522;
case 0x734523:c.instructions+=1;goto B734523;
case 0x734528:goto L734528;
case 0x73452b:c.instructions+=4;goto B73452b;
case 0x73452f:c.instructions+=3;goto B73452f;
case 0x734531:c.instructions+=2;goto B734531;
case 0x734532:c.instructions+=1;goto B734532;
case 0x734534:goto L734534;
case 0x73453a:c.instructions+=1;goto B73453a;
case 0x73453c:goto L73453c;
case 0x73453e:c.instructions+=4;goto B73453e;
case 0x734540:c.instructions+=3;goto B734540;
case 0x734543:c.instructions+=2;goto B734543;
case 0x734544:c.instructions+=1;goto B734544;
case 0x734546:goto L734546;
case 0x734548:goto L734548;
case 0x73454a:c.instructions+=16;goto B73454a;
case 0x734550:c.instructions+=15;goto B734550;
case 0x734551:c.instructions+=14;goto B734551;
case 0x734552:c.instructions+=13;goto B734552;
case 0x734553:c.instructions+=12;goto B734553;
case 0x734554:c.instructions+=11;goto B734554;
case 0x734555:c.instructions+=10;goto B734555;
case 0x734557:c.instructions+=9;goto B734557;
case 0x73455a:c.instructions+=8;goto B73455a;
case 0x73455b:c.instructions+=7;goto B73455b;
case 0x73455c:c.instructions+=6;goto B73455c;
case 0x73455d:c.instructions+=5;goto B73455d;
case 0x73455e:c.instructions+=4;goto B73455e;
case 0x73455f:c.instructions+=3;goto B73455f;
case 0x734565:c.instructions+=2;goto B734565;
case 0x734567:c.instructions+=1;goto B734567;
case 0x73456a:goto L73456a;
case 0x73456d:c.instructions+=14;goto B73456d;
case 0x73456f:c.instructions+=13;goto B73456f;
case 0x734572:c.instructions+=12;goto B734572;
case 0x734573:c.instructions+=11;goto B734573;
case 0x734579:c.instructions+=10;goto B734579;
case 0x73457c:c.instructions+=9;goto B73457c;
case 0x73457f:c.instructions+=8;goto B73457f;
case 0x734585:c.instructions+=7;goto B734585;
case 0x734587:c.instructions+=6;goto B734587;
case 0x73458a:c.instructions+=5;goto B73458a;
case 0x73458d:c.instructions+=4;goto B73458d;
case 0x734593:c.instructions+=3;goto B734593;
case 0x734595:c.instructions+=2;goto B734595;
case 0x734598:c.instructions+=1;goto B734598;
case 0x73459a:goto L73459a;
case 0x73459d:c.instructions+=3;goto B73459d;
case 0x7345a0:c.instructions+=2;goto B7345a0;
case 0x7345a6:c.instructions+=1;goto B7345a6;
case 0x7345a9:goto L7345a9;
case 0x7345ac:c.instructions+=2;goto B7345ac;
case 0x7345ae:c.instructions+=1;goto B7345ae;
case 0x7345b5:goto L7345b5;
case 0x7345b8:c.instructions+=10;goto B7345b8;
case 0x7345b9:c.instructions+=9;goto B7345b9;
case 0x7345c0:c.instructions+=8;goto B7345c0;
case 0x7345c3:c.instructions+=7;goto B7345c3;
case 0x7345c5:c.instructions+=6;goto B7345c5;
case 0x7345c8:c.instructions+=5;goto B7345c8;
case 0x7345ca:c.instructions+=4;goto B7345ca;
case 0x7345cc:c.instructions+=3;goto B7345cc;
case 0x7345cf:c.instructions+=2;goto B7345cf;
case 0x7345d2:c.instructions+=1;goto B7345d2;
case 0x7345d4:goto L7345d4;
case 0x7345d8:c.instructions+=3;goto B7345d8;
case 0x7345df:c.instructions+=2;goto B7345df;
case 0x7345e2:c.instructions+=1;goto B7345e2;
case 0x7345e8:goto L7345e8;
case 0x7345ed:c.instructions+=5;goto B7345ed;
case 0x7345f3:c.instructions+=4;goto B7345f3;
case 0x7345f4:c.instructions+=3;goto B7345f4;
case 0x7345fa:c.instructions+=2;goto B7345fa;
case 0x7345fb:c.instructions+=1;goto B7345fb;
case 0x734601:goto L734601;
case 0x734604:c.instructions+=2;goto B734604;
case 0x734606:c.instructions+=1;goto B734606;
case 0x73460c:goto L73460c;
case 0x734610:c.instructions+=6;goto B734610;
case 0x734611:c.instructions+=5;goto B734611;
case 0x734613:c.instructions+=4;goto B734613;
case 0x734615:c.instructions+=3;goto B734615;
case 0x734618:c.instructions+=2;goto B734618;
case 0x73461b:c.instructions+=1;goto B73461b;
case 0x73461d:goto L73461d;
case 0x73461f:c.instructions+=3;goto B73461f;
case 0x734621:c.instructions+=2;goto B734621;
case 0x734623:c.instructions+=1;goto B734623;
case 0x734628:goto L734628;
case 0x734629:c.instructions+=2;goto B734629;
case 0x73462b:c.instructions+=1;goto B73462b;
case 0x734631:goto L734631;
case 0x734635:c.instructions+=6;goto B734635;
case 0x734636:c.instructions+=5;goto B734636;
case 0x734638:c.instructions+=4;goto B734638;
case 0x73463a:c.instructions+=3;goto B73463a;
case 0x73463d:c.instructions+=2;goto B73463d;
case 0x734640:c.instructions+=1;goto B734640;
case 0x734642:goto L734642;
case 0x734644:c.instructions+=4;goto B734644;
case 0x734646:c.instructions+=3;goto B734646;
case 0x734647:c.instructions+=2;goto B734647;
case 0x734649:c.instructions+=1;goto B734649;
case 0x73464e:goto L73464e;
case 0x73464f:c.instructions+=2;goto B73464f;
case 0x734651:c.instructions+=1;goto B734651;
case 0x734657:goto L734657;
case 0x73465b:c.instructions+=6;goto B73465b;
case 0x73465c:c.instructions+=5;goto B73465c;
case 0x73465e:c.instructions+=4;goto B73465e;
case 0x734660:c.instructions+=3;goto B734660;
case 0x734663:c.instructions+=2;goto B734663;
case 0x734666:c.instructions+=1;goto B734666;
case 0x734668:goto L734668;
case 0x73466a:c.instructions+=4;goto B73466a;
case 0x73466c:c.instructions+=3;goto B73466c;
case 0x73466d:c.instructions+=2;goto B73466d;
case 0x73466f:c.instructions+=1;goto B73466f;
case 0x734674:goto L734674;
case 0x734675:c.instructions+=2;goto B734675;
case 0x734677:c.instructions+=1;goto B734677;
case 0x73467d:goto L73467d;
case 0x734681:c.instructions+=6;goto B734681;
case 0x734682:c.instructions+=5;goto B734682;
case 0x734684:c.instructions+=4;goto B734684;
case 0x734686:c.instructions+=3;goto B734686;
case 0x734689:c.instructions+=2;goto B734689;
case 0x73468c:c.instructions+=1;goto B73468c;
case 0x73468e:goto L73468e;
case 0x734690:c.instructions+=4;goto B734690;
case 0x734692:c.instructions+=3;goto B734692;
case 0x734693:c.instructions+=2;goto B734693;
case 0x734695:c.instructions+=1;goto B734695;
case 0x73469a:goto L73469a;
case 0x73469b:c.instructions+=5;goto B73469b;
case 0x73469c:c.instructions+=4;goto B73469c;
case 0x73469d:c.instructions+=3;goto B73469d;
case 0x73469e:c.instructions+=2;goto B73469e;
case 0x73469f:c.instructions+=1;goto B73469f;
case 0x7346a0:goto L7346a0;
case 0x7346a2:c.instructions+=10;goto B7346a2;
case 0x7346a4:c.instructions+=9;goto B7346a4;
case 0x7346aa:c.instructions+=8;goto B7346aa;
case 0x7346b0:c.instructions+=7;goto B7346b0;
case 0x7346b6:c.instructions+=6;goto B7346b6;
case 0x7346bd:c.instructions+=5;goto B7346bd;
case 0x7346c4:c.instructions+=4;goto B7346c4;
case 0x7346ca:c.instructions+=3;goto B7346ca;
case 0x7346d0:c.instructions+=2;goto B7346d0;
case 0x7346da:c.instructions+=1;goto B7346da;
case 0x7346db:goto L7346db;
case 0x7346df:c.instructions+=2;goto B7346df;
case 0x7346e1:c.instructions+=1;goto B7346e1;
case 0x7346e3:goto L7346e3;
case 0x7346e9:c.instructions+=2;goto B7346e9;
case 0x7346ec:c.instructions+=1;goto B7346ec;
case 0x7346ee:goto L7346ee;
case 0x7346f1:c.instructions+=1;goto B7346f1;
case 0x7346f3:goto L7346f3;
case 0x7346fa:c.instructions+=11;goto B7346fa;
case 0x734701:c.instructions+=10;goto B734701;
case 0x734702:c.instructions+=9;goto B734702;
case 0x734706:c.instructions+=8;goto B734706;
case 0x734708:c.instructions+=7;goto B734708;
case 0x73470c:c.instructions+=6;goto B73470c;
case 0x73470d:c.instructions+=5;goto B73470d;
case 0x734713:c.instructions+=4;goto B734713;
case 0x734719:c.instructions+=3;goto B734719;
case 0x73471f:c.instructions+=2;goto B73471f;
case 0x734720:c.instructions+=1;goto B734720;
case 0x734722:goto L734722;
case 0x734724:c.instructions+=4;goto B734724;
case 0x734727:c.instructions+=3;goto B734727;
case 0x73472a:c.instructions+=2;goto B73472a;
case 0x73472b:c.instructions+=1;goto B73472b;
case 0x734731:goto L734731;
case 0x734732:c.instructions+=1;goto B734732;
case 0x734737:goto L734737;
case 0x734739:goto L734739;
case 0x73473c:goto L73473c;
case 0x73473d:c.instructions+=20;goto B73473d;
case 0x73473f:c.instructions+=19;goto B73473f;
case 0x734742:c.instructions+=18;goto B734742;
case 0x734745:c.instructions+=17;goto B734745;
case 0x734748:c.instructions+=16;goto B734748;
case 0x73474e:c.instructions+=15;goto B73474e;
case 0x734751:c.instructions+=14;goto B734751;
case 0x734757:c.instructions+=13;goto B734757;
case 0x734758:c.instructions+=12;goto B734758;
case 0x734759:c.instructions+=11;goto B734759;
case 0x73475c:c.instructions+=10;goto B73475c;
case 0x73475f:c.instructions+=9;goto B73475f;
case 0x734762:c.instructions+=8;goto B734762;
case 0x734764:c.instructions+=7;goto B734764;
case 0x734765:c.instructions+=6;goto B734765;
case 0x734766:c.instructions+=5;goto B734766;
case 0x734767:c.instructions+=4;goto B734767;
case 0x734768:c.instructions+=3;goto B734768;
case 0x734769:c.instructions+=2;goto B734769;
case 0x73476a:c.instructions+=1;goto B73476a;
case 0x73476d:goto L73476d;
case 0x734771:c.instructions+=7;goto B734771;
case 0x734773:c.instructions+=6;goto B734773;
case 0x734776:c.instructions+=5;goto B734776;
case 0x734779:c.instructions+=4;goto B734779;
case 0x73477f:c.instructions+=3;goto B73477f;
case 0x734782:c.instructions+=2;goto B734782;
case 0x734788:c.instructions+=1;goto B734788;
case 0x73478b:goto L73478b;
case 0x73478f:c.instructions+=2;goto B73478f;
case 0x734795:c.instructions+=1;goto B734795;
case 0x734798:goto L734798;
case 0x734799:c.instructions+=10;goto B734799;
case 0x73479b:c.instructions+=9;goto B73479b;
case 0x73479c:c.instructions+=8;goto B73479c;
case 0x73479d:c.instructions+=7;goto B73479d;
case 0x73479e:c.instructions+=6;goto B73479e;
case 0x73479f:c.instructions+=5;goto B73479f;
case 0x7347a1:c.instructions+=4;goto B7347a1;
case 0x7347a7:c.instructions+=3;goto B7347a7;
case 0x7347a9:c.instructions+=2;goto B7347a9;
case 0x7347af:c.instructions+=1;goto B7347af;
case 0x7347b5:goto L7347b5;
case 0x7347b8:c.instructions+=6;goto B7347b8;
case 0x7347ba:c.instructions+=5;goto B7347ba;
case 0x7347c0:c.instructions+=4;goto B7347c0;
case 0x7347c3:c.instructions+=3;goto B7347c3;
case 0x7347c5:c.instructions+=2;goto B7347c5;
case 0x7347c8:c.instructions+=1;goto B7347c8;
case 0x7347ca:goto L7347ca;
case 0x7347cd:goto L7347cd;
case 0x7347d0:c.instructions+=3;goto B7347d0;
case 0x7347d2:c.instructions+=2;goto B7347d2;
case 0x7347d5:c.instructions+=1;goto B7347d5;
case 0x7347db:goto L7347db;
case 0x7347dc:goto L7347dc;
case 0x7347df:c.instructions+=1;goto B7347df;
case 0x7347e1:goto L7347e1;
case 0x7347e4:goto L7347e4;
case 0x7347e6:c.instructions+=8;goto B7347e6;
case 0x7347e9:c.instructions+=7;goto B7347e9;
case 0x7347ea:c.instructions+=6;goto B7347ea;
case 0x7347ef:c.instructions+=5;goto B7347ef;
case 0x7347f5:c.instructions+=4;goto B7347f5;
case 0x7347f8:c.instructions+=3;goto B7347f8;
case 0x7347f9:c.instructions+=2;goto B7347f9;
case 0x7347ff:c.instructions+=1;goto B7347ff;
case 0x734805:goto L734805;
case 0x734808:c.instructions+=7;goto B734808;
case 0x73480e:c.instructions+=6;goto B73480e;
case 0x734810:c.instructions+=5;goto B734810;
case 0x734813:c.instructions+=4;goto B734813;
case 0x734819:c.instructions+=3;goto B734819;
case 0x73481c:c.instructions+=2;goto B73481c;
case 0x734820:c.instructions+=1;goto B734820;
case 0x734826:goto L734826;
case 0x734827:c.instructions+=1;goto B734827;
case 0x73482c:goto L73482c;
case 0x734833:c.instructions+=4;goto B734833;
case 0x734838:c.instructions+=3;goto B734838;
case 0x734839:c.instructions+=2;goto B734839;
case 0x73483f:c.instructions+=1;goto B73483f;
case 0x734841:goto L734841;
case 0x734843:c.instructions+=4;goto B734843;
case 0x734844:c.instructions+=3;goto B734844;
case 0x73484b:c.instructions+=2;goto B73484b;
case 0x734851:c.instructions+=1;goto B734851;
case 0x734857:goto L734857;
case 0x73485a:c.instructions+=23;goto B73485a;
case 0x734860:c.instructions+=22;goto B734860;
case 0x734862:c.instructions+=21;goto B734862;
case 0x734868:c.instructions+=20;goto B734868;
case 0x734869:c.instructions+=19;goto B734869;
case 0x73486c:c.instructions+=18;goto B73486c;
case 0x73486d:c.instructions+=17;goto B73486d;
case 0x734873:c.instructions+=16;goto B734873;
case 0x734875:c.instructions+=15;goto B734875;
case 0x73487b:c.instructions+=14;goto B73487b;
case 0x734882:c.instructions+=13;goto B734882;
case 0x734888:c.instructions+=12;goto B734888;
case 0x73488b:c.instructions+=11;goto B73488b;
case 0x73488f:c.instructions+=10;goto B73488f;
case 0x734890:c.instructions+=9;goto B734890;
case 0x734892:c.instructions+=8;goto B734892;
case 0x734898:c.instructions+=7;goto B734898;
case 0x73489f:c.instructions+=6;goto B73489f;
case 0x7348a0:c.instructions+=5;goto B7348a0;
case 0x7348a2:c.instructions+=4;goto B7348a2;
case 0x7348a4:c.instructions+=3;goto B7348a4;
case 0x7348a7:c.instructions+=2;goto B7348a7;
case 0x7348ae:c.instructions+=1;goto B7348ae;
case 0x7348b0:goto L7348b0;
case 0x7348b3:c.instructions+=13;goto B7348b3;
case 0x7348b6:c.instructions+=12;goto B7348b6;
case 0x7348b8:c.instructions+=11;goto B7348b8;
case 0x7348bb:c.instructions+=10;goto B7348bb;
case 0x7348bf:c.instructions+=9;goto B7348bf;
case 0x7348c2:c.instructions+=8;goto B7348c2;
case 0x7348c5:c.instructions+=7;goto B7348c5;
case 0x7348c7:c.instructions+=6;goto B7348c7;
case 0x7348ca:c.instructions+=5;goto B7348ca;
case 0x7348cb:c.instructions+=4;goto B7348cb;
case 0x7348cc:c.instructions+=3;goto B7348cc;
case 0x7348cd:c.instructions+=2;goto B7348cd;
case 0x7348d4:c.instructions+=1;goto B7348d4;
case 0x7348d6:goto L7348d6;
case 0x7348dd:goto L7348dd;
case 0x7348e3:c.instructions+=2;goto B7348e3;
case 0x7348e6:c.instructions+=1;goto B7348e6;
case 0x7348e8:goto L7348e8;
case 0x7348f2:goto L7348f2;
case 0x7348f4:c.instructions+=6;goto B7348f4;
case 0x7348fb:c.instructions+=5;goto B7348fb;
case 0x7348fe:c.instructions+=4;goto B7348fe;
case 0x7348ff:c.instructions+=3;goto B7348ff;
case 0x734902:c.instructions+=2;goto B734902;
case 0x734904:c.instructions+=1;goto B734904;
case 0x734909:goto L734909;
case 0x73490c:c.instructions+=1;goto B73490c;
case 0x73490d:goto L73490d;
case 0x734913:goto L734913;
case 0x734914:c.instructions+=3;goto B734914;
case 0x734915:c.instructions+=2;goto B734915;
case 0x734916:c.instructions+=1;goto B734916;
case 0x734919:goto L734919;
case 0x73491d:c.instructions+=2;goto B73491d;
case 0x73491f:c.instructions+=1;goto B73491f;
case 0x734921:goto L734921;
case 0x734925:c.instructions+=1;goto B734925;
case 0x734927:goto L734927;
case 0x73492a:c.instructions+=1;goto B73492a;
case 0x73492c:goto L73492c;
case 0x734930:c.instructions+=5;goto B734930;
case 0x734933:c.instructions+=4;goto B734933;
case 0x734937:c.instructions+=3;goto B734937;
case 0x73493d:c.instructions+=2;goto B73493d;
case 0x734940:c.instructions+=1;goto B734940;
case 0x734942:goto L734942;
case 0x734945:goto L734945;
case 0x734946:c.instructions+=11;goto B734946;
case 0x734948:c.instructions+=10;goto B734948;
case 0x734949:c.instructions+=9;goto B734949;
case 0x73494c:c.instructions+=8;goto B73494c;
case 0x734950:c.instructions+=7;goto B734950;
case 0x734952:c.instructions+=6;goto B734952;
case 0x734953:c.instructions+=5;goto B734953;
case 0x734955:c.instructions+=4;goto B734955;
case 0x734958:c.instructions+=3;goto B734958;
case 0x73495a:c.instructions+=2;goto B73495a;
case 0x734960:c.instructions+=1;goto B734960;
case 0x734962:goto L734962;
case 0x734964:c.instructions+=1;goto B734964;
case 0x734969:goto L734969;
case 0x73496c:c.instructions+=1;goto B73496c;
case 0x73496e:goto L73496e;
case 0x734971:goto L734971;
case 0x734974:c.instructions+=4;goto B734974;
case 0x734976:c.instructions+=3;goto B734976;
case 0x734977:c.instructions+=2;goto B734977;
case 0x734978:c.instructions+=1;goto B734978;
case 0x73497a:goto L73497a;
case 0x73497c:c.instructions+=1;goto B73497c;
case 0x73497e:goto L73497e;
case 0x734980:goto L734980;
case 0x734982:c.instructions+=1;goto B734982;
case 0x734984:goto L734984;
case 0x734986:goto L734986;
case 0x734989:c.instructions+=7;goto B734989;
case 0x73498b:c.instructions+=6;goto B73498b;
case 0x734991:c.instructions+=5;goto B734991;
case 0x734993:c.instructions+=4;goto B734993;
case 0x73499a:c.instructions+=3;goto B73499a;
case 0x73499e:c.instructions+=2;goto B73499e;
case 0x73499f:c.instructions+=1;goto B73499f;
case 0x7349a1:goto L7349a1;
case 0x7349a4:c.instructions+=3;goto B7349a4;
case 0x7349a7:c.instructions+=2;goto B7349a7;
case 0x7349a9:c.instructions+=1;goto B7349a9;
case 0x7349ac:goto L7349ac;
case 0x7349ae:c.instructions+=12;goto B7349ae;
case 0x7349b0:c.instructions+=11;goto B7349b0;
case 0x7349b1:c.instructions+=10;goto B7349b1;
case 0x7349b2:c.instructions+=9;goto B7349b2;
case 0x7349b4:c.instructions+=8;goto B7349b4;
case 0x7349ba:c.instructions+=7;goto B7349ba;
case 0x7349bc:c.instructions+=6;goto B7349bc;
case 0x7349bf:c.instructions+=5;goto B7349bf;
case 0x7349c1:c.instructions+=4;goto B7349c1;
case 0x7349c3:c.instructions+=3;goto B7349c3;
case 0x7349c5:c.instructions+=2;goto B7349c5;
case 0x7349c8:c.instructions+=1;goto B7349c8;
case 0x7349ca:goto L7349ca;
case 0x7349cb:c.instructions+=1;goto B7349cb;
case 0x7349cd:goto L7349cd;
case 0x7349d0:c.instructions+=2;goto B7349d0;
case 0x7349d3:c.instructions+=1;goto B7349d3;
case 0x7349d4:goto L7349d4;
case 0x7349d7:c.instructions+=2;goto B7349d7;
case 0x7349d9:c.instructions+=1;goto B7349d9;
case 0x7349db:goto L7349db;
case 0x7349e1:c.instructions+=5;goto B7349e1;
case 0x7349e4:c.instructions+=4;goto B7349e4;
case 0x7349e5:c.instructions+=3;goto B7349e5;
case 0x7349eb:c.instructions+=2;goto B7349eb;
case 0x7349ed:c.instructions+=1;goto B7349ed;
case 0x7349ef:goto L7349ef;
case 0x7349f1:c.instructions+=13;goto B7349f1;
case 0x7349f4:c.instructions+=12;goto B7349f4;
case 0x7349f7:c.instructions+=11;goto B7349f7;
case 0x7349f8:c.instructions+=10;goto B7349f8;
case 0x7349fe:c.instructions+=9;goto B7349fe;
case 0x734a01:c.instructions+=8;goto B734a01;
case 0x734a03:c.instructions+=7;goto B734a03;
case 0x734a06:c.instructions+=6;goto B734a06;
case 0x734a09:c.instructions+=5;goto B734a09;
case 0x734a0b:c.instructions+=4;goto B734a0b;
case 0x734a0d:c.instructions+=3;goto B734a0d;
case 0x734a10:c.instructions+=2;goto B734a10;
case 0x734a16:c.instructions+=1;goto B734a16;
case 0x734a18:goto L734a18;
case 0x734a1e:c.instructions+=5;goto B734a1e;
case 0x734a21:c.instructions+=4;goto B734a21;
case 0x734a24:c.instructions+=3;goto B734a24;
case 0x734a25:c.instructions+=2;goto B734a25;
case 0x734a27:c.instructions+=1;goto B734a27;
case 0x734a29:goto L734a29;
case 0x734a2c:goto L734a2c;
case 0x734a30:c.instructions+=3;goto B734a30;
case 0x734a31:c.instructions+=2;goto B734a31;
case 0x734a32:c.instructions+=1;goto B734a32;
case 0x734a34:goto L734a34;
case 0x734a38:goto L734a38;
case 0x734a3b:goto L734a3b;
case 0x734a3c:c.instructions+=2;goto B734a3c;
case 0x734a3d:c.instructions+=1;goto B734a3d;
case 0x734a40:goto L734a40;
case 0x734a41:c.instructions+=14;goto B734a41;
case 0x734a43:c.instructions+=13;goto B734a43;
case 0x734a44:c.instructions+=12;goto B734a44;
case 0x734a45:c.instructions+=11;goto B734a45;
case 0x734a4b:c.instructions+=10;goto B734a4b;
case 0x734a4e:c.instructions+=9;goto B734a4e;
case 0x734a54:c.instructions+=8;goto B734a54;
case 0x734a57:c.instructions+=7;goto B734a57;
case 0x734a5a:c.instructions+=6;goto B734a5a;
case 0x734a5d:c.instructions+=5;goto B734a5d;
case 0x734a5f:c.instructions+=4;goto B734a5f;
case 0x734a62:c.instructions+=3;goto B734a62;
case 0x734a65:c.instructions+=2;goto B734a65;
case 0x734a66:c.instructions+=1;goto B734a66;
case 0x734a69:goto L734a69;
case 0x734a6d:c.instructions+=5;goto B734a6d;
case 0x734a6f:c.instructions+=4;goto B734a6f;
case 0x734a75:c.instructions+=3;goto B734a75;
case 0x734a78:c.instructions+=2;goto B734a78;
case 0x734a7e:c.instructions+=1;goto B734a7e;
case 0x734a81:goto L734a81;
case 0x734a82:c.instructions+=6;goto B734a82;
case 0x734a84:c.instructions+=5;goto B734a84;
case 0x734a85:c.instructions+=4;goto B734a85;
case 0x734a88:c.instructions+=3;goto B734a88;
case 0x734a8b:c.instructions+=2;goto B734a8b;
case 0x734a8e:c.instructions+=1;goto B734a8e;
case 0x734a90:goto L734a90;
case 0x734a91:c.instructions+=24;goto B734a91;
case 0x734a94:c.instructions+=23;goto B734a94;
case 0x734a97:c.instructions+=22;goto B734a97;
case 0x734a9a:c.instructions+=21;goto B734a9a;
case 0x734a9c:c.instructions+=20;goto B734a9c;
case 0x734a9f:c.instructions+=19;goto B734a9f;
case 0x734aa3:c.instructions+=18;goto B734aa3;
case 0x734aa6:c.instructions+=17;goto B734aa6;
case 0x734aa9:c.instructions+=16;goto B734aa9;
case 0x734aac:c.instructions+=15;goto B734aac;
case 0x734aaf:c.instructions+=14;goto B734aaf;
case 0x734ab0:c.instructions+=13;goto B734ab0;
case 0x734ab2:c.instructions+=12;goto B734ab2;
case 0x734ab3:c.instructions+=11;goto B734ab3;
case 0x734ab6:c.instructions+=10;goto B734ab6;
case 0x734ab9:c.instructions+=9;goto B734ab9;
case 0x734abc:c.instructions+=8;goto B734abc;
case 0x734abe:c.instructions+=7;goto B734abe;
case 0x734ac1:c.instructions+=6;goto B734ac1;
case 0x734ac5:c.instructions+=5;goto B734ac5;
case 0x734ac8:c.instructions+=4;goto B734ac8;
case 0x734acb:c.instructions+=3;goto B734acb;
case 0x734ace:c.instructions+=2;goto B734ace;
case 0x734ad1:c.instructions+=1;goto B734ad1;
case 0x734ad4:goto L734ad4;
case 0x734ad7:c.instructions+=13;goto B734ad7;
case 0x734ada:c.instructions+=12;goto B734ada;
case 0x734adc:c.instructions+=11;goto B734adc;
case 0x734adf:c.instructions+=10;goto B734adf;
case 0x734ae2:c.instructions+=9;goto B734ae2;
case 0x734ae6:c.instructions+=8;goto B734ae6;
case 0x734ae9:c.instructions+=7;goto B734ae9;
case 0x734aec:c.instructions+=6;goto B734aec;
case 0x734aef:c.instructions+=5;goto B734aef;
case 0x734af1:c.instructions+=4;goto B734af1;
case 0x734af5:c.instructions+=3;goto B734af5;
case 0x734af9:c.instructions+=2;goto B734af9;
case 0x734afa:c.instructions+=1;goto B734afa;
case 0x734afc:goto L734afc;
case 0x734afd:goto L734afd;
case 0x734afe:c.instructions+=1;goto B734afe;
case 0x734aff:goto L734aff;
case 0x734b00:c.instructions+=12;goto B734b00;
case 0x734b01:c.instructions+=11;goto B734b01;
case 0x734b02:c.instructions+=10;goto B734b02;
case 0x734b03:c.instructions+=9;goto B734b03;
case 0x734b04:c.instructions+=8;goto B734b04;
case 0x734b05:c.instructions+=7;goto B734b05;
case 0x734b06:c.instructions+=6;goto B734b06;
case 0x734b0a:c.instructions+=5;goto B734b0a;
case 0x734b0d:c.instructions+=4;goto B734b0d;
case 0x734b10:c.instructions+=3;goto B734b10;
case 0x734b15:c.instructions+=2;goto B734b15;
case 0x734b1a:c.instructions+=1;goto B734b1a;
case 0x734b1e:goto L734b1e;
case 0x734b21:c.instructions+=1;goto B734b21;
case 0x734b27:goto L734b27;
case 0x734b2a:c.instructions+=3;goto B734b2a;
case 0x734b2d:c.instructions+=2;goto B734b2d;
case 0x734b32:c.instructions+=1;goto B734b32;
case 0x734b34:goto L734b34;
case 0x734b35:c.instructions+=3;goto B734b35;
case 0x734b36:c.instructions+=2;goto B734b36;
case 0x734b37:c.instructions+=1;goto B734b37;
case 0x734b3c:goto L734b3c;
case 0x734b3f:c.instructions+=8;goto B734b3f;
case 0x734b40:c.instructions+=7;goto B734b40;
case 0x734b41:c.instructions+=6;goto B734b41;
case 0x734b46:c.instructions+=5;goto B734b46;
case 0x734b4b:c.instructions+=4;goto B734b4b;
case 0x734b4f:c.instructions+=3;goto B734b4f;
case 0x734b52:c.instructions+=2;goto B734b52;
case 0x734b55:c.instructions+=1;goto B734b55;
case 0x734b57:goto L734b57;
case 0x734b5a:c.instructions+=9;goto B734b5a;
case 0x734b5d:c.instructions+=8;goto B734b5d;
case 0x734b60:c.instructions+=7;goto B734b60;
case 0x734b63:c.instructions+=6;goto B734b63;
case 0x734b66:c.instructions+=5;goto B734b66;
case 0x734b69:c.instructions+=4;goto B734b69;
case 0x734b6b:c.instructions+=3;goto B734b6b;
case 0x734b70:c.instructions+=2;goto B734b70;
case 0x734b73:c.instructions+=1;goto B734b73;
case 0x734b76:goto L734b76;
case 0x734b7f:c.instructions+=17;goto B734b7f;
case 0x734b82:c.instructions+=16;goto B734b82;
case 0x734b85:c.instructions+=15;goto B734b85;
case 0x734b8e:c.instructions+=14;goto B734b8e;
case 0x734b97:c.instructions+=13;goto B734b97;
case 0x734ba0:c.instructions+=12;goto B734ba0;
case 0x734ba4:c.instructions+=11;goto B734ba4;
case 0x734baa:c.instructions+=10;goto B734baa;
case 0x734bae:c.instructions+=9;goto B734bae;
case 0x734bb1:c.instructions+=8;goto B734bb1;
case 0x734bb4:c.instructions+=7;goto B734bb4;
case 0x734bbd:c.instructions+=6;goto B734bbd;
case 0x734bc6:c.instructions+=5;goto B734bc6;
case 0x734bca:c.instructions+=4;goto B734bca;
case 0x734bce:c.instructions+=3;goto B734bce;
case 0x734bd4:c.instructions+=2;goto B734bd4;
case 0x734bd5:c.instructions+=1;goto B734bd5;
case 0x734bd7:goto L734bd7;
case 0x734bdc:c.instructions+=4;goto B734bdc;
case 0x734be1:c.instructions+=3;goto B734be1;
case 0x734be4:c.instructions+=2;goto B734be4;
case 0x734be7:c.instructions+=1;goto B734be7;
case 0x734bec:goto L734bec;
case 0x734bed:c.instructions+=7;goto B734bed;
case 0x734bee:c.instructions+=6;goto B734bee;
case 0x734bef:c.instructions+=5;goto B734bef;
case 0x734bf0:c.instructions+=4;goto B734bf0;
case 0x734bf1:c.instructions+=3;goto B734bf1;
case 0x734bf2:c.instructions+=2;goto B734bf2;
case 0x734bf3:c.instructions+=1;goto B734bf3;
case 0x734bf4:goto L734bf4;
case 0x734bf5:c.instructions+=18;goto B734bf5;
case 0x734bf7:c.instructions+=17;goto B734bf7;
case 0x734bf8:c.instructions+=16;goto B734bf8;
case 0x734bf9:c.instructions+=15;goto B734bf9;
case 0x734bfa:c.instructions+=14;goto B734bfa;
case 0x734bfb:c.instructions+=13;goto B734bfb;
case 0x734bfc:c.instructions+=12;goto B734bfc;
case 0x734bfd:c.instructions+=11;goto B734bfd;
case 0x734bfe:c.instructions+=10;goto B734bfe;
case 0x734bff:c.instructions+=9;goto B734bff;
case 0x734c00:c.instructions+=8;goto B734c00;
case 0x734c03:c.instructions+=7;goto B734c03;
case 0x734c06:c.instructions+=6;goto B734c06;
case 0x734c09:c.instructions+=5;goto B734c09;
case 0x734c0c:c.instructions+=4;goto B734c0c;
case 0x734c0f:c.instructions+=3;goto B734c0f;
case 0x734c12:c.instructions+=2;goto B734c12;
case 0x734c15:c.instructions+=1;goto B734c15;
case 0x734c17:goto L734c17;
case 0x734c1a:c.instructions+=1;goto B734c1a;
case 0x734c20:goto L734c20;
case 0x734c23:c.instructions+=4;goto B734c23;
case 0x734c25:c.instructions+=3;goto B734c25;
case 0x734c27:c.instructions+=2;goto B734c27;
case 0x734c29:c.instructions+=1;goto B734c29;
case 0x734c2b:goto L734c2b;
case 0x734c2c:c.instructions+=3;goto B734c2c;
case 0x734c2d:c.instructions+=2;goto B734c2d;
case 0x734c2e:c.instructions+=1;goto B734c2e;
case 0x734c33:goto L734c33;
case 0x734c36:c.instructions+=11;goto B734c36;
case 0x734c37:c.instructions+=10;goto B734c37;
case 0x734c38:c.instructions+=9;goto B734c38;
case 0x734c3b:c.instructions+=8;goto B734c3b;
case 0x734c3e:c.instructions+=7;goto B734c3e;
case 0x734c41:c.instructions+=6;goto B734c41;
case 0x734c44:c.instructions+=5;goto B734c44;
case 0x734c47:c.instructions+=4;goto B734c47;
case 0x734c4a:c.instructions+=3;goto B734c4a;
case 0x734c4d:c.instructions+=2;goto B734c4d;
case 0x734c4f:c.instructions+=1;goto B734c4f;
case 0x734c51:goto L734c51;
case 0x734c53:c.instructions+=11;goto B734c53;
case 0x734c56:c.instructions+=10;goto B734c56;
case 0x734c5d:c.instructions+=9;goto B734c5d;
case 0x734c64:c.instructions+=8;goto B734c64;
case 0x734c66:c.instructions+=7;goto B734c66;
case 0x734c6b:c.instructions+=6;goto B734c6b;
case 0x734c6e:c.instructions+=5;goto B734c6e;
case 0x734c71:c.instructions+=4;goto B734c71;
case 0x734c74:c.instructions+=3;goto B734c74;
case 0x734c77:c.instructions+=2;goto B734c77;
case 0x734c7a:c.instructions+=1;goto B734c7a;
case 0x734c7d:goto L734c7d;
case 0x734c81:c.instructions+=21;goto B734c81;
case 0x734c83:c.instructions+=20;goto B734c83;
case 0x734c87:c.instructions+=19;goto B734c87;
case 0x734c89:c.instructions+=18;goto B734c89;
case 0x734c8b:c.instructions+=17;goto B734c8b;
case 0x734c92:c.instructions+=16;goto B734c92;
case 0x734c94:c.instructions+=15;goto B734c94;
case 0x734c97:c.instructions+=14;goto B734c97;
case 0x734c9a:c.instructions+=13;goto B734c9a;
case 0x734c9d:c.instructions+=12;goto B734c9d;
case 0x734ca0:c.instructions+=11;goto B734ca0;
case 0x734ca2:c.instructions+=10;goto B734ca2;
case 0x734ca6:c.instructions+=9;goto B734ca6;
case 0x734ca8:c.instructions+=8;goto B734ca8;
case 0x734caa:c.instructions+=7;goto B734caa;
case 0x734cb1:c.instructions+=6;goto B734cb1;
case 0x734cb3:c.instructions+=5;goto B734cb3;
case 0x734cb7:c.instructions+=4;goto B734cb7;
case 0x734cba:c.instructions+=3;goto B734cba;
case 0x734cbe:c.instructions+=2;goto B734cbe;
case 0x734cbf:c.instructions+=1;goto B734cbf;
case 0x734cc1:goto L734cc1;
case 0x734cc3:c.instructions+=10;goto B734cc3;
case 0x734cc5:c.instructions+=9;goto B734cc5;
case 0x734cc6:c.instructions+=8;goto B734cc6;
case 0x734cc9:c.instructions+=7;goto B734cc9;
case 0x734ccc:c.instructions+=6;goto B734ccc;
case 0x734ccf:c.instructions+=5;goto B734ccf;
case 0x734cd2:c.instructions+=4;goto B734cd2;
case 0x734cd3:c.instructions+=3;goto B734cd3;
case 0x734cd6:c.instructions+=2;goto B734cd6;
case 0x734cd9:c.instructions+=1;goto B734cd9;
case 0x734cde:goto L734cde;
case 0x734cdf:c.instructions+=10;goto B734cdf;
case 0x734ce0:c.instructions+=9;goto B734ce0;
case 0x734ce1:c.instructions+=8;goto B734ce1;
case 0x734ce2:c.instructions+=7;goto B734ce2;
case 0x734ce3:c.instructions+=6;goto B734ce3;
case 0x734ce4:c.instructions+=5;goto B734ce4;
case 0x734ce5:c.instructions+=4;goto B734ce5;
case 0x734ce6:c.instructions+=3;goto B734ce6;
case 0x734ce7:c.instructions+=2;goto B734ce7;
case 0x734ce8:c.instructions+=1;goto B734ce8;
case 0x734ce9:goto L734ce9;
case 0x734ceb:c.instructions+=10;goto B734ceb;
case 0x734ced:c.instructions+=9;goto B734ced;
case 0x734cf3:c.instructions+=8;goto B734cf3;
case 0x734cf5:c.instructions+=7;goto B734cf5;
case 0x734cf7:c.instructions+=6;goto B734cf7;
case 0x734cfa:c.instructions+=5;goto B734cfa;
case 0x734d00:c.instructions+=4;goto B734d00;
case 0x734d03:c.instructions+=3;goto B734d03;
case 0x734d06:c.instructions+=2;goto B734d06;
case 0x734d0d:c.instructions+=1;goto B734d0d;
case 0x734d0f:goto L734d0f;
case 0x734d15:c.instructions+=1;goto B734d15;
case 0x734d16:goto L734d16;
case 0x734d1c:c.instructions+=1;goto B734d1c;
case 0x734d20:goto L734d20;
case 0x734d21:c.instructions+=7;goto B734d21;
case 0x734d23:c.instructions+=6;goto B734d23;
case 0x734d24:c.instructions+=5;goto B734d24;
case 0x734d27:c.instructions+=4;goto B734d27;
case 0x734d2a:c.instructions+=3;goto B734d2a;
case 0x734d2d:c.instructions+=2;goto B734d2d;
case 0x734d2f:c.instructions+=1;goto B734d2f;
case 0x734d31:goto L734d31;
case 0x734d37:c.instructions+=1;goto B734d37;
case 0x734d39:goto L734d39;
case 0x734d3d:c.instructions+=4;goto B734d3d;
case 0x734d44:c.instructions+=3;goto B734d44;
case 0x734d48:c.instructions+=2;goto B734d48;
case 0x734d4b:c.instructions+=1;goto B734d4b;
case 0x734d4d:goto L734d4d;
case 0x734d4f:goto L734d4f;
case 0x734d53:c.instructions+=13;goto B734d53;
case 0x734d57:c.instructions+=12;goto B734d57;
case 0x734d5e:c.instructions+=11;goto B734d5e;
case 0x734d65:c.instructions+=10;goto B734d65;
case 0x734d69:c.instructions+=9;goto B734d69;
case 0x734d6d:c.instructions+=8;goto B734d6d;
case 0x734d71:c.instructions+=7;goto B734d71;
case 0x734d75:c.instructions+=6;goto B734d75;
case 0x734d7c:c.instructions+=5;goto B734d7c;
case 0x734d83:c.instructions+=4;goto B734d83;
case 0x734d87:c.instructions+=3;goto B734d87;
case 0x734d8b:c.instructions+=2;goto B734d8b;
case 0x734d8e:c.instructions+=1;goto B734d8e;
case 0x734d90:goto L734d90;
case 0x734d91:c.instructions+=2;goto B734d91;
case 0x734d92:c.instructions+=1;goto B734d92;
case 0x734da0:goto L734da0;
case 0x734da2:c.instructions+=2;goto B734da2;
case 0x734da9:c.instructions+=1;goto B734da9;
case 0x734db0:goto L734db0;
case 0x734db1:c.instructions+=3;goto B734db1;
case 0x734db4:c.instructions+=2;goto B734db4;
case 0x734db6:c.instructions+=1;goto B734db6;
case 0x734db8:goto L734db8;
case 0x734db9:c.instructions+=2;goto B734db9;
case 0x734dbd:c.instructions+=1;goto B734dbd;
case 0x734dc0:goto L734dc0;
case 0x734dc3:c.instructions+=3;goto B734dc3;
case 0x734dc4:c.instructions+=2;goto B734dc4;
case 0x734dc5:c.instructions+=1;goto B734dc5;
case 0x734dc8:goto L734dc8;
case 0x734dca:c.instructions+=3;goto B734dca;
case 0x734dcd:c.instructions+=2;goto B734dcd;
case 0x734dcf:c.instructions+=1;goto B734dcf;
case 0x734dd1:goto L734dd1;
case 0x734dd2:goto L734dd2;
case 0x734dd3:c.instructions+=1;goto B734dd3;
case 0x734de0:goto L734de0;
case 0x734de4:c.instructions+=3;goto B734de4;
case 0x734de9:c.instructions+=2;goto B734de9;
case 0x734deb:c.instructions+=1;goto B734deb;
case 0x734df0:goto L734df0;
case 0x734df5:c.instructions+=9;goto B734df5;
case 0x734df9:c.instructions+=8;goto B734df9;
case 0x734dfb:c.instructions+=7;goto B734dfb;
case 0x734e01:c.instructions+=6;goto B734e01;
case 0x734e03:c.instructions+=5;goto B734e03;
case 0x734e05:c.instructions+=4;goto B734e05;
case 0x734e08:c.instructions+=3;goto B734e08;
case 0x734e09:c.instructions+=2;goto B734e09;
case 0x734e0c:c.instructions+=1;goto B734e0c;
case 0x734e10:goto L734e10;
case 0x734e12:c.instructions+=3;goto B734e12;
case 0x734e14:c.instructions+=2;goto B734e14;
case 0x734e16:c.instructions+=1;goto B734e16;
case 0x734e1c:goto L734e1c;
case 0x734e21:c.instructions+=4;goto B734e21;
case 0x734e2b:c.instructions+=3;goto B734e2b;
case 0x734e32:c.instructions+=2;goto B734e32;
case 0x734e34:c.instructions+=1;goto B734e34;
case 0x734e40:goto L734e40;
case 0x734e45:c.instructions+=3;goto B734e45;
case 0x734e47:c.instructions+=2;goto B734e47;
case 0x734e48:c.instructions+=1;goto B734e48;
case 0x734e4e:goto L734e4e;
case 0x734e50:c.instructions+=1;goto B734e50;
case 0x734e60:goto L734e60;
case 0x734e65:c.instructions+=2;goto B734e65;
case 0x734e66:c.instructions+=1;goto B734e66;
case 0x734e6c:goto L734e6c;
case 0x734e6e:c.instructions+=1;goto B734e6e;
case 0x734e70:goto L734e70;
case 0x734e74:c.instructions+=17;goto B734e74;
case 0x734e78:c.instructions+=16;goto B734e78;
case 0x734e79:c.instructions+=15;goto B734e79;
case 0x734e7a:c.instructions+=14;goto B734e7a;
case 0x734e7d:c.instructions+=13;goto B734e7d;
case 0x734e80:c.instructions+=12;goto B734e80;
case 0x734e83:c.instructions+=11;goto B734e83;
case 0x734e86:c.instructions+=10;goto B734e86;
case 0x734e8a:c.instructions+=9;goto B734e8a;
case 0x734e8d:c.instructions+=8;goto B734e8d;
case 0x734e8e:c.instructions+=7;goto B734e8e;
case 0x734e91:c.instructions+=6;goto B734e91;
case 0x734e94:c.instructions+=5;goto B734e94;
case 0x734e96:c.instructions+=4;goto B734e96;
case 0x734e98:c.instructions+=3;goto B734e98;
case 0x734e9f:c.instructions+=2;goto B734e9f;
case 0x734ea2:c.instructions+=1;goto B734ea2;
case 0x734ea4:goto L734ea4;
case 0x734ea6:c.instructions+=1;goto B734ea6;
case 0x734eb0:goto L734eb0;
case 0x734eb3:c.instructions+=6;goto B734eb3;
case 0x734eb7:c.instructions+=5;goto B734eb7;
case 0x734ebb:c.instructions+=4;goto B734ebb;
case 0x734ebd:c.instructions+=3;goto B734ebd;
case 0x734ebf:c.instructions+=2;goto B734ebf;
case 0x734ec1:c.instructions+=1;goto B734ec1;
case 0x734ec3:goto L734ec3;
case 0x734ec7:goto L734ec7;
case 0x734eca:c.instructions+=6;goto B734eca;
case 0x734ecf:c.instructions+=5;goto B734ecf;
case 0x734ed3:c.instructions+=4;goto B734ed3;
case 0x734ed4:c.instructions+=3;goto B734ed4;
case 0x734ed7:c.instructions+=2;goto B734ed7;
case 0x734ed9:c.instructions+=1;goto B734ed9;
case 0x734edb:goto L734edb;
case 0x734ee2:goto L734ee2;
case 0x734ee4:c.instructions+=2;goto B734ee4;
case 0x734ee8:c.instructions+=1;goto B734ee8;
case 0x734eea:goto L734eea;
case 0x734eec:c.instructions+=1;goto B734eec;
case 0x734ef0:goto L734ef0;
case 0x734ef3:c.instructions+=6;goto B734ef3;
case 0x734ef7:c.instructions+=5;goto B734ef7;
case 0x734efb:c.instructions+=4;goto B734efb;
case 0x734efd:c.instructions+=3;goto B734efd;
case 0x734eff:c.instructions+=2;goto B734eff;
case 0x734f01:c.instructions+=1;goto B734f01;
case 0x734f03:goto L734f03;
case 0x734f07:goto L734f07;
case 0x734f0a:c.instructions+=6;goto B734f0a;
case 0x734f0f:c.instructions+=5;goto B734f0f;
case 0x734f13:c.instructions+=4;goto B734f13;
case 0x734f14:c.instructions+=3;goto B734f14;
case 0x734f17:c.instructions+=2;goto B734f17;
case 0x734f19:c.instructions+=1;goto B734f19;
case 0x734f1b:goto L734f1b;
case 0x734f22:goto L734f22;
case 0x734f24:c.instructions+=2;goto B734f24;
case 0x734f28:c.instructions+=1;goto B734f28;
case 0x734f2a:goto L734f2a;
case 0x734f2c:c.instructions+=1;goto B734f2c;
case 0x734f30:goto L734f30;
case 0x734f33:c.instructions+=6;goto B734f33;
case 0x734f37:c.instructions+=5;goto B734f37;
case 0x734f3b:c.instructions+=4;goto B734f3b;
case 0x734f3d:c.instructions+=3;goto B734f3d;
case 0x734f3f:c.instructions+=2;goto B734f3f;
case 0x734f41:c.instructions+=1;goto B734f41;
case 0x734f43:goto L734f43;
case 0x734f47:goto L734f47;
case 0x734f4a:c.instructions+=6;goto B734f4a;
case 0x734f4f:c.instructions+=5;goto B734f4f;
case 0x734f53:c.instructions+=4;goto B734f53;
case 0x734f54:c.instructions+=3;goto B734f54;
case 0x734f57:c.instructions+=2;goto B734f57;
case 0x734f59:c.instructions+=1;goto B734f59;
case 0x734f5b:goto L734f5b;
case 0x734f62:goto L734f62;
case 0x734f68:c.instructions+=9;goto B734f68;
case 0x734f6b:c.instructions+=8;goto B734f6b;
case 0x734f6c:c.instructions+=7;goto B734f6c;
case 0x734f6e:c.instructions+=6;goto B734f6e;
case 0x734f75:c.instructions+=5;goto B734f75;
case 0x734f7b:c.instructions+=4;goto B734f7b;
case 0x734f7d:c.instructions+=3;goto B734f7d;
case 0x734f7e:c.instructions+=2;goto B734f7e;
case 0x734f7f:c.instructions+=1;goto B734f7f;
case 0x734f81:goto L734f81;
case 0x734f84:goto L734f84;
case 0x734f89:c.instructions+=2;goto B734f89;
case 0x734f8b:c.instructions+=1;goto B734f8b;
case 0x734f90:goto L734f90;
case 0x734f94:c.instructions+=6;goto B734f94;
case 0x734f95:c.instructions+=5;goto B734f95;
case 0x734f97:c.instructions+=4;goto B734f97;
case 0x734f9a:c.instructions+=3;goto B734f9a;
case 0x734f9e:c.instructions+=2;goto B734f9e;
case 0x734f9f:c.instructions+=1;goto B734f9f;
case 0x734fa1:goto L734fa1;
case 0x734fa3:goto L734fa3;
case 0x734fa6:c.instructions+=6;goto B734fa6;
case 0x734faa:c.instructions+=5;goto B734faa;
case 0x734fae:c.instructions+=4;goto B734fae;
case 0x734faf:c.instructions+=3;goto B734faf;
case 0x734fb2:c.instructions+=2;goto B734fb2;
case 0x734fb4:c.instructions+=1;goto B734fb4;
case 0x734fb6:goto L734fb6;
case 0x734fb8:c.instructions+=2;goto B734fb8;
case 0x734fbc:c.instructions+=1;goto B734fbc;
case 0x734fbe:goto L734fbe;
case 0x734fc0:goto L734fc0;
case 0x734fc3:c.instructions+=6;goto B734fc3;
case 0x734fc7:c.instructions+=5;goto B734fc7;
case 0x734fcb:c.instructions+=4;goto B734fcb;
case 0x734fcc:c.instructions+=3;goto B734fcc;
case 0x734fcf:c.instructions+=2;goto B734fcf;
case 0x734fd1:c.instructions+=1;goto B734fd1;
case 0x734fd3:goto L734fd3;
case 0x734fd5:c.instructions+=2;goto B734fd5;
case 0x734fd9:c.instructions+=1;goto B734fd9;
case 0x734fdb:goto L734fdb;
case 0x734fdd:c.instructions+=1;goto B734fdd;
case 0x734fe0:goto L734fe0;
case 0x734fe3:c.instructions+=6;goto B734fe3;
case 0x734fe7:c.instructions+=5;goto B734fe7;
case 0x734feb:c.instructions+=4;goto B734feb;
case 0x734fec:c.instructions+=3;goto B734fec;
case 0x734fef:c.instructions+=2;goto B734fef;
case 0x734ff1:c.instructions+=1;goto B734ff1;
case 0x734ff3:goto L734ff3;
case 0x734ff9:c.instructions+=4;goto B734ff9;
case 0x734ffc:c.instructions+=3;goto B734ffc;
case 0x734ffe:c.instructions+=2;goto B734ffe;
case 0x734fff:c.instructions+=1;goto B734fff;
default:missing_instruction(c.pc);}
B734001:L734001:{c.instructions+=223;NFSU2_TR(0x734001);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734004:{NFSU2_TR(0x734004);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73400a:{NFSU2_TR(0x73400a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73400c:{NFSU2_TR(0x73400c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B73400e:{NFSU2_TR(0x73400e);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734014:{NFSU2_TR(0x734014);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734016:{NFSU2_TR(0x734016);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734019:{NFSU2_TR(0x734019);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73401f:{NFSU2_TR(0x73401f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734021:{NFSU2_TR(0x734021);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734024:{NFSU2_TR(0x734024);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73402a:{NFSU2_TR(0x73402a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73402c:{NFSU2_TR(0x73402c);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73402f:{NFSU2_TR(0x73402f);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734035:{NFSU2_TR(0x734035);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734037:{NFSU2_TR(0x734037);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B734039:{NFSU2_TR(0x734039);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73403f:{NFSU2_TR(0x73403f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734041:{NFSU2_TR(0x734041);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734044:{NFSU2_TR(0x734044);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73404a:{NFSU2_TR(0x73404a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73404c:{NFSU2_TR(0x73404c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73404f:{NFSU2_TR(0x73404f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734052:{NFSU2_TR(0x734052);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734058:{NFSU2_TR(0x734058);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73405b:{NFSU2_TR(0x73405b);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B73405d:{NFSU2_TR(0x73405d);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734063:{NFSU2_TR(0x734063);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B734065:{NFSU2_TR(0x734065);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73406b:{NFSU2_TR(0x73406b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73406d:{NFSU2_TR(0x73406d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734070:{NFSU2_TR(0x734070);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734076:{NFSU2_TR(0x734076);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734078:{NFSU2_TR(0x734078);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B73407a:{NFSU2_TR(0x73407a);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734080:{NFSU2_TR(0x734080);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734082:{NFSU2_TR(0x734082);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734085:{NFSU2_TR(0x734085);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73408b:{NFSU2_TR(0x73408b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73408d:{NFSU2_TR(0x73408d);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734090:{NFSU2_TR(0x734090);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734096:{NFSU2_TR(0x734096);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734098:{NFSU2_TR(0x734098);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B73409a:{NFSU2_TR(0x73409a);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340a0:{NFSU2_TR(0x7340a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340a2:{NFSU2_TR(0x7340a2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7340a4:{NFSU2_TR(0x7340a4);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340aa:{NFSU2_TR(0x7340aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340ac:{NFSU2_TR(0x7340ac);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7340af:{NFSU2_TR(0x7340af);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340b5:{NFSU2_TR(0x7340b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340b7:{NFSU2_TR(0x7340b7);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7340ba:{NFSU2_TR(0x7340ba);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340c0:{NFSU2_TR(0x7340c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340c2:{NFSU2_TR(0x7340c2);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B7340c4:{NFSU2_TR(0x7340c4);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340ca:{NFSU2_TR(0x7340ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340cc:{NFSU2_TR(0x7340cc);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7340cf:{NFSU2_TR(0x7340cf);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340d5:{NFSU2_TR(0x7340d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340d7:{NFSU2_TR(0x7340d7);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7340da:{NFSU2_TR(0x7340da);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7340dd:{NFSU2_TR(0x7340dd);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7340e3:{NFSU2_TR(0x7340e3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7340e6:{NFSU2_TR(0x7340e6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B7340e8:{NFSU2_TR(0x7340e8);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340ee:{NFSU2_TR(0x7340ee);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7340f1:{NFSU2_TR(0x7340f1);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7340f7:{NFSU2_TR(0x7340f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7340f9:{NFSU2_TR(0x7340f9);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7340fc:{NFSU2_TR(0x7340fc);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734102:{NFSU2_TR(0x734102);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734104:{NFSU2_TR(0x734104);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B734106:{NFSU2_TR(0x734106);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73410c:{NFSU2_TR(0x73410c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73410e:{NFSU2_TR(0x73410e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734111:{NFSU2_TR(0x734111);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734117:{NFSU2_TR(0x734117);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734119:{NFSU2_TR(0x734119);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73411c:{NFSU2_TR(0x73411c);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734122:{NFSU2_TR(0x734122);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734124:{NFSU2_TR(0x734124);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B734126:{NFSU2_TR(0x734126);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73412c:{NFSU2_TR(0x73412c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73412e:{NFSU2_TR(0x73412e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B734130:{NFSU2_TR(0x734130);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734136:{NFSU2_TR(0x734136);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734138:{NFSU2_TR(0x734138);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73413a:{NFSU2_TR(0x73413a);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734140:{NFSU2_TR(0x734140);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734142:{NFSU2_TR(0x734142);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734145:{NFSU2_TR(0x734145);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73414b:{NFSU2_TR(0x73414b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73414d:{NFSU2_TR(0x73414d);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B73414f:{NFSU2_TR(0x73414f);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734155:{NFSU2_TR(0x734155);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734157:{NFSU2_TR(0x734157);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73415a:{NFSU2_TR(0x73415a);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734160:{NFSU2_TR(0x734160);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734162:{NFSU2_TR(0x734162);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734165:{NFSU2_TR(0x734165);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734168:{NFSU2_TR(0x734168);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73416e:{NFSU2_TR(0x73416e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734171:{NFSU2_TR(0x734171);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B734173:{NFSU2_TR(0x734173);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734179:{NFSU2_TR(0x734179);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73417c:{NFSU2_TR(0x73417c);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734182:{NFSU2_TR(0x734182);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734184:{NFSU2_TR(0x734184);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734187:{NFSU2_TR(0x734187);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73418d:{NFSU2_TR(0x73418d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73418f:{NFSU2_TR(0x73418f);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B734191:{NFSU2_TR(0x734191);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734197:{NFSU2_TR(0x734197);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734199:{NFSU2_TR(0x734199);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B73419b:{NFSU2_TR(0x73419b);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341a1:{NFSU2_TR(0x7341a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341a3:{NFSU2_TR(0x7341a3);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7341a6:{NFSU2_TR(0x7341a6);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341ac:{NFSU2_TR(0x7341ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341ae:{NFSU2_TR(0x7341ae);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B7341b0:{NFSU2_TR(0x7341b0);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341b6:{NFSU2_TR(0x7341b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341b8:{NFSU2_TR(0x7341b8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B7341ba:{NFSU2_TR(0x7341ba);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341c0:{NFSU2_TR(0x7341c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341c2:{NFSU2_TR(0x7341c2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B7341c4:{NFSU2_TR(0x7341c4);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341ca:{NFSU2_TR(0x7341ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341cc:{NFSU2_TR(0x7341cc);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7341cf:{NFSU2_TR(0x7341cf);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341d5:{NFSU2_TR(0x7341d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341d7:{NFSU2_TR(0x7341d7);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7341da:{NFSU2_TR(0x7341da);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341e0:{NFSU2_TR(0x7341e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341e2:{NFSU2_TR(0x7341e2);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7341e5:{NFSU2_TR(0x7341e5);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7341eb:{NFSU2_TR(0x7341eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7341ed:{NFSU2_TR(0x7341ed);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7341f0:{NFSU2_TR(0x7341f0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7341f3:{NFSU2_TR(0x7341f3);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B7341f9:{NFSU2_TR(0x7341f9);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7341fc:{NFSU2_TR(0x7341fc);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B7341fe:{NFSU2_TR(0x7341fe);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734204:{NFSU2_TR(0x734204);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B734206:{NFSU2_TR(0x734206);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73420c:{NFSU2_TR(0x73420c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73420e:{NFSU2_TR(0x73420e);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734211:{NFSU2_TR(0x734211);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734217:{NFSU2_TR(0x734217);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734219:{NFSU2_TR(0x734219);
__asm__ volatile(".byte 0xd9,0xc6":::"memory");
}
B73421b:{NFSU2_TR(0x73421b);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734221:{NFSU2_TR(0x734221);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734223:{NFSU2_TR(0x734223);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B734225:{NFSU2_TR(0x734225);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73422b:{NFSU2_TR(0x73422b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73422d:{NFSU2_TR(0x73422d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734230:{NFSU2_TR(0x734230);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734236:{NFSU2_TR(0x734236);
w1(R+512,carry<u32>(r4(R+12),u32(0x30ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B734239:{NFSU2_TR(0x734239);
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
B73423a:{NFSU2_TR(0x73423a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73423c:{NFSU2_TR(0x73423c);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B73423e:{NFSU2_TR(0x73423e);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734244:{NFSU2_TR(0x734244);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734246:{NFSU2_TR(0x734246);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B734248:{NFSU2_TR(0x734248);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73424e:{NFSU2_TR(0x73424e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734250:{NFSU2_TR(0x734250);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734253:{NFSU2_TR(0x734253);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734259:{NFSU2_TR(0x734259);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73425b:{NFSU2_TR(0x73425b);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73425e:{NFSU2_TR(0x73425e);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734264:{NFSU2_TR(0x734264);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734266:{NFSU2_TR(0x734266);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734269:{NFSU2_TR(0x734269);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73426f:{NFSU2_TR(0x73426f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734271:{NFSU2_TR(0x734271);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734274:{NFSU2_TR(0x734274);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73427a:{NFSU2_TR(0x73427a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73427c:{NFSU2_TR(0x73427c);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73427f:{NFSU2_TR(0x73427f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734282:{NFSU2_TR(0x734282);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734288:{NFSU2_TR(0x734288);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73428b:{NFSU2_TR(0x73428b);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B73428d:{NFSU2_TR(0x73428d);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734293:{NFSU2_TR(0x734293);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B734295:{NFSU2_TR(0x734295);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73429b:{NFSU2_TR(0x73429b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B73429d:{NFSU2_TR(0x73429d);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342a0:{NFSU2_TR(0x7342a0);
{u32 ea_=u32(r4(R+28)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342a6:{NFSU2_TR(0x7342a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342a8:{NFSU2_TR(0x7342a8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B7342aa:{NFSU2_TR(0x7342aa);
{u32 ea_=u32(r4(R+28)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342b0:{NFSU2_TR(0x7342b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342b2:{NFSU2_TR(0x7342b2);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342b5:{NFSU2_TR(0x7342b5);
{u32 ea_=u32(r4(R+28)+u32(344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342bb:{NFSU2_TR(0x7342bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342bd:{NFSU2_TR(0x7342bd);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342c0:{NFSU2_TR(0x7342c0);
{u32 ea_=u32(r4(R+28)+u32(328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342c6:{NFSU2_TR(0x7342c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342c8:{NFSU2_TR(0x7342c8);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B7342ca:{NFSU2_TR(0x7342ca);
{u32 ea_=u32(r4(R+28)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342d0:{NFSU2_TR(0x7342d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342d2:{NFSU2_TR(0x7342d2);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B7342d4:{NFSU2_TR(0x7342d4);
{u32 ea_=u32(r4(R+28)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342da:{NFSU2_TR(0x7342da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342dc:{NFSU2_TR(0x7342dc);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342df:{NFSU2_TR(0x7342df);
{u32 ea_=u32(r4(R+28)+u32(348u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342e5:{NFSU2_TR(0x7342e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342e7:{NFSU2_TR(0x7342e7);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342ea:{NFSU2_TR(0x7342ea);
{u32 ea_=u32(r4(R+28)+u32(332u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342f0:{NFSU2_TR(0x7342f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342f2:{NFSU2_TR(0x7342f2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B7342f4:{NFSU2_TR(0x7342f4);
{u32 ea_=u32(r4(R+28)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7342fa:{NFSU2_TR(0x7342fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7342fc:{NFSU2_TR(0x7342fc);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7342ff:{NFSU2_TR(0x7342ff);
{u32 ea_=u32(r4(R+28)+u32(336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734305:{NFSU2_TR(0x734305);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734307:{NFSU2_TR(0x734307);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73430a:{NFSU2_TR(0x73430a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B73430d:{NFSU2_TR(0x73430d);
{u32 ea_=u32(r4(R+28)+u32(324u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B734313:{NFSU2_TR(0x734313);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734316:{NFSU2_TR(0x734316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x733c90u,733);}
}
B73431c:L73431c:{c.instructions+=10;NFSU2_TR(0x73431c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73431e:{NFSU2_TR(0x73431e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734320:{NFSU2_TR(0x734320);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734322:{NFSU2_TR(0x734322);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734324:{NFSU2_TR(0x734324);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734326:{NFSU2_TR(0x734326);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734328:{NFSU2_TR(0x734328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734329:{NFSU2_TR(0x734329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73432a:{NFSU2_TR(0x73432a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73432b:{NFSU2_TR(0x73432b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73432c:L73432c:{c.instructions+=11;NFSU2_TR(0x73432c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73432d:{NFSU2_TR(0x73432d);
__builtin_memmove((R+20),(R+16),4);
}
B73432f:{NFSU2_TR(0x73432f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734332:{NFSU2_TR(0x734332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734335:{NFSU2_TR(0x734335);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B734336:{NFSU2_TR(0x734336);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B73433a:{NFSU2_TR(0x73433a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B734341:{NFSU2_TR(0x734341);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B734343:{NFSU2_TR(0x734343);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B734347:{NFSU2_TR(0x734347);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73434a:{NFSU2_TR(0x73434a);
if(r1(R+518)){{goto L7343ef;}}
}
B734350:L734350:{c.instructions+=3;NFSU2_TR(0x734350);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734352:{NFSU2_TR(0x734352);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734353:{NFSU2_TR(0x734353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734358ull));
TAIL_STATIC(0x733a33u,733);
}
B734358:L734358:{c.instructions+=4;NFSU2_TR(0x734358);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73435a:{NFSU2_TR(0x73435a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73435b:{NFSU2_TR(0x73435b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73435e:{NFSU2_TR(0x73435e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734363ull));
TAIL_STATIC(0x733a33u,733);
}
B734363:L734363:{c.instructions+=7;NFSU2_TR(0x734363);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734365:{NFSU2_TR(0x734365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734366:{NFSU2_TR(0x734366);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B734368:{NFSU2_TR(0x734368);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73436b:{NFSU2_TR(0x73436b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73436d:{NFSU2_TR(0x73436d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73436e:{NFSU2_TR(0x73436e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734373ull));
TAIL_STATIC(0x733a33u,733);
}
B734373:L734373:{c.instructions+=5;NFSU2_TR(0x734373);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B734374:{NFSU2_TR(0x734374);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B734376:{NFSU2_TR(0x734376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734379:{NFSU2_TR(0x734379);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73437c:{NFSU2_TR(0x73437c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L734384;}}
}
B73437e:L73437e:{c.instructions+=1;NFSU2_TR(0x73437e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734384:L734384:{c.instructions+=5;NFSU2_TR(0x734384);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B73438a:{NFSU2_TR(0x73438a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73438c:{NFSU2_TR(0x73438c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73438d:{NFSU2_TR(0x73438d);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734390:{NFSU2_TR(0x734390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734395ull));
TAIL_STATIC(0x733a33u,733);
}
B734395:L734395:{c.instructions+=4;NFSU2_TR(0x734395);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B734397:{NFSU2_TR(0x734397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73439a:{NFSU2_TR(0x73439a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B73439d:{NFSU2_TR(0x73439d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7343a5;}}
}
B73439f:L73439f:{c.instructions+=1;NFSU2_TR(0x73439f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7343a5:L7343a5:{c.instructions+=5;NFSU2_TR(0x7343a5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7343ab:{NFSU2_TR(0x7343ab);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343ad:{NFSU2_TR(0x7343ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7343b0:{NFSU2_TR(0x7343b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7343b1:{NFSU2_TR(0x7343b1);
{u32 ea_=u32(u32(8199948u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7343b7:L7343b7:{c.instructions+=6;NFSU2_TR(0x7343b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B7343b9:{NFSU2_TR(0x7343b9);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7343bc:{NFSU2_TR(0x7343bc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7343be:{NFSU2_TR(0x7343be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7343c1:{NFSU2_TR(0x7343c1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7343c2:{NFSU2_TR(0x7343c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7343b7u);}goto L7343b7;}}
}
B7343c4:L7343c4:{c.instructions+=4;NFSU2_TR(0x7343c4);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343c6:{NFSU2_TR(0x7343c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B7343c8:{NFSU2_TR(0x7343c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7343ce:{NFSU2_TR(0x7343ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7343cf:L7343cf:{c.instructions+=7;NFSU2_TR(0x7343cf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7343d1:{NFSU2_TR(0x7343d1);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7343d4:{NFSU2_TR(0x7343d4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B7343d6:{NFSU2_TR(0x7343d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7343d8:{NFSU2_TR(0x7343d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7343db:{NFSU2_TR(0x7343db);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B7343dc:{NFSU2_TR(0x7343dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7343cfu);}goto L7343cf;}}
}
B7343de:L7343de:{c.instructions+=4;NFSU2_TR(0x7343de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343df:{NFSU2_TR(0x7343df);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x174ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7343e5:{NFSU2_TR(0x7343e5);
w4(R+4,u32(0x144ull));
}
B7343ea:{NFSU2_TR(0x7343ea);
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
B7343ec:L7343ec:{c.instructions+=1;NFSU2_TR(0x7343ec);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7343ee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7343ecu);}goto L7343ec;}
}
B7343ee:L7343ee:{c.instructions+=1;NFSU2_TR(0x7343ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7343ef:L7343ef:{c.instructions+=2;NFSU2_TR(0x7343ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7343f0:{NFSU2_TR(0x7343f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7343f3:L7343f3:{c.instructions+=11;NFSU2_TR(0x7343f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343f4:{NFSU2_TR(0x7343f4);
__builtin_memmove((R+20),(R+16),4);
}
B7343f6:{NFSU2_TR(0x7343f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x220ull))));
}
B7343fc:{NFSU2_TR(0x7343fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343fd:{NFSU2_TR(0x7343fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7343fe:{NFSU2_TR(0x7343fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734401:{NFSU2_TR(0x734401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734402:{NFSU2_TR(0x734402);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734404:{NFSU2_TR(0x734404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734405:{NFSU2_TR(0x734405);
__builtin_memmove((R+8),(R+24),4);
}
B734407:{NFSU2_TR(0x734407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73440cull));
TAIL_STATIC(0x733a33u,733);
}
B73440c:L73440c:{c.instructions+=12;NFSU2_TR(0x73440c);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734412:{NFSU2_TR(0x734412);
{u32 ea_=u32((r4(R+0)*4u)+u32(8491528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734419:{NFSU2_TR(0x734419);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73441b:{NFSU2_TR(0x73441b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73441e:{NFSU2_TR(0x73441e);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B734424:{NFSU2_TR(0x734424);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73442a:{NFSU2_TR(0x73442a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B73442d:{NFSU2_TR(0x73442d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73442f:{NFSU2_TR(0x73442f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B734431:{NFSU2_TR(0x734431);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B734432:{NFSU2_TR(0x734432);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734435:{NFSU2_TR(0x734435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734438:L734438:{c.instructions+=4;NFSU2_TR(0x734438);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73443a:{NFSU2_TR(0x73443a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73443b:{NFSU2_TR(0x73443b);
__builtin_memmove((R+8),(R+24),4);
}
B73443d:{NFSU2_TR(0x73443d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734442ull));
TAIL_STATIC(0x733a33u,733);
}
B734442:L734442:{c.instructions+=8;NFSU2_TR(0x734442);
{u32 ea_=u32((r4(R+0)*4u)+u32(8491528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734449:{NFSU2_TR(0x734449);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B73444b:{NFSU2_TR(0x73444b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73444c:{NFSU2_TR(0x73444c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73444f:{NFSU2_TR(0x73444f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734452:{NFSU2_TR(0x734452);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B734454:{NFSU2_TR(0x734454);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734458:{NFSU2_TR(0x734458);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734438u);}goto L734438;}}
}
B73445a:L73445a:{c.instructions+=3;NFSU2_TR(0x73445a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73445c:{NFSU2_TR(0x73445c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73445d:{NFSU2_TR(0x73445d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734463:L734463:{c.instructions+=4;NFSU2_TR(0x734463);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734465:{NFSU2_TR(0x734465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734466:{NFSU2_TR(0x734466);
__builtin_memmove((R+8),(R+24),4);
}
B734468:{NFSU2_TR(0x734468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73446dull));
TAIL_STATIC(0x733a33u,733);
}
B73446d:L73446d:{c.instructions+=8;NFSU2_TR(0x73446d);
{u32 ea_=u32((r4(R+0)*4u)+u32(8491592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734474:{NFSU2_TR(0x734474);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B734476:{NFSU2_TR(0x734476);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B734477:{NFSU2_TR(0x734477);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B73447a:{NFSU2_TR(0x73447a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73447d:{NFSU2_TR(0x73447d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B73447f:{NFSU2_TR(0x73447f);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734483:{NFSU2_TR(0x734483);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734463u);}goto L734463;}}
}
B734485:L734485:{c.instructions+=4;NFSU2_TR(0x734485);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x684ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73448b:{NFSU2_TR(0x73448b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B73448d:{NFSU2_TR(0x73448d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xd8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B734494:{NFSU2_TR(0x734494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734497:L734497:{c.instructions+=4;NFSU2_TR(0x734497);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734499:{NFSU2_TR(0x734499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73449a:{NFSU2_TR(0x73449a);
__builtin_memmove((R+8),(R+24),4);
}
B73449c:{NFSU2_TR(0x73449c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7344a1ull));
TAIL_STATIC(0x733a33u,733);
}
B7344a1:L7344a1:{c.instructions+=6;NFSU2_TR(0x7344a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7344a4:{NFSU2_TR(0x7344a4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B7344a6:{NFSU2_TR(0x7344a6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7344a8:{NFSU2_TR(0x7344a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7344a9:{NFSU2_TR(0x7344a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7344ac:{NFSU2_TR(0x7344ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7344b1ull));
TAIL_STATIC(0x733a33u,733);
}
B7344b1:L7344b1:{c.instructions+=4;NFSU2_TR(0x7344b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7344b3:{NFSU2_TR(0x7344b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7344b6:{NFSU2_TR(0x7344b6);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7344b9:{NFSU2_TR(0x7344b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7344c1;}}
}
B7344bb:L7344bb:{c.instructions+=1;NFSU2_TR(0x7344bb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7344c1:L7344c1:{c.instructions+=6;NFSU2_TR(0x7344c1);
{u32 ea_=u32(u32(7881964u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7344c7:{NFSU2_TR(0x7344c7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7344c9:{NFSU2_TR(0x7344c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7344ca:{NFSU2_TR(0x7344ca);
__builtin_memmove((R+8),(R+24),4);
}
B7344cc:{NFSU2_TR(0x7344cc);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7344cf:{NFSU2_TR(0x7344cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7344d4ull));
TAIL_STATIC(0x733a33u,733);
}
B7344d4:L7344d4:{c.instructions+=4;NFSU2_TR(0x7344d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7344d8:{NFSU2_TR(0x7344d8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7344dc:{NFSU2_TR(0x7344dc);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7344df:{NFSU2_TR(0x7344df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7344fb;}}
}
B7344e1:L7344e1:{c.instructions+=6;NFSU2_TR(0x7344e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7344e3:{NFSU2_TR(0x7344e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7344e9:{NFSU2_TR(0x7344e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7344ea:{NFSU2_TR(0x7344ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7344ed:{NFSU2_TR(0x7344ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7344ee:{NFSU2_TR(0x7344ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7344f3ull));
TAIL_STATIC(0x733a9eu,733);
}
B7344f3:L7344f3:{c.instructions+=2;NFSU2_TR(0x7344f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7344f6:{NFSU2_TR(0x7344f6);
{goto L7345a9;}
}
B7344fb:L7344fb:{c.instructions+=4;NFSU2_TR(0x7344fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7344fd:{NFSU2_TR(0x7344fd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7344fe:{NFSU2_TR(0x7344fe);
__builtin_memmove((R+8),(R+24),4);
}
B734500:{NFSU2_TR(0x734500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734505ull));
TAIL_STATIC(0x733a33u,733);
}
B734505:L734505:{c.instructions+=4;NFSU2_TR(0x734505);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734507:{NFSU2_TR(0x734507);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734508:{NFSU2_TR(0x734508);
__builtin_memmove((R+12),(R+0),4);
}
B73450a:{NFSU2_TR(0x73450a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73450full));
TAIL_STATIC(0x733a33u,733);
}
B73450f:L73450f:{c.instructions+=8;NFSU2_TR(0x73450f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734512:{NFSU2_TR(0x734512);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B734515:{NFSU2_TR(0x734515);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734517:{NFSU2_TR(0x734517);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdf4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73451e:{NFSU2_TR(0x73451e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73451f:{NFSU2_TR(0x73451f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B734522:{NFSU2_TR(0x734522);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734523:{NFSU2_TR(0x734523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734528ull));
TAIL_STATIC(0x733a9eu,733);
}
B734528:L734528:{c.instructions+=5;NFSU2_TR(0x734528);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73452b:{NFSU2_TR(0x73452b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73452f:{NFSU2_TR(0x73452f);
u8 U[4];
w4(U+0,u32(0x36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734531:{NFSU2_TR(0x734531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734532:{NFSU2_TR(0x734532);
if(r1(R+518)){{goto L734548;}}
}
B734534:L734534:{c.instructions+=2;NFSU2_TR(0x734534);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73453a:{NFSU2_TR(0x73453a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B73453c:L73453c:{c.instructions+=5;NFSU2_TR(0x73453c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B73453e:{NFSU2_TR(0x73453e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734540:{NFSU2_TR(0x734540);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B734543:{NFSU2_TR(0x734543);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B734544:{NFSU2_TR(0x734544);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73453cu);}goto L73453c;}}
}
B734546:L734546:{c.instructions+=1;NFSU2_TR(0x734546);
{goto L7345a9;}
}
B734548:L734548:{c.instructions+=17;NFSU2_TR(0x734548);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73454a:{NFSU2_TR(0x73454a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734550:{NFSU2_TR(0x734550);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B734551:{NFSU2_TR(0x734551);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B734552:{NFSU2_TR(0x734552);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B734553:{NFSU2_TR(0x734553);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B734554:{NFSU2_TR(0x734554);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B734555:{NFSU2_TR(0x734555);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734557:{NFSU2_TR(0x734557);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73455a:{NFSU2_TR(0x73455a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B73455b:{NFSU2_TR(0x73455b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B73455c:{NFSU2_TR(0x73455c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B73455d:{NFSU2_TR(0x73455d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B73455e:{NFSU2_TR(0x73455e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B73455f:{NFSU2_TR(0x73455f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734565:{NFSU2_TR(0x734565);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B734567:{NFSU2_TR(0x734567);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B73456a:L73456a:{c.instructions+=15;NFSU2_TR(0x73456a);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73456d:{NFSU2_TR(0x73456d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73456f:{NFSU2_TR(0x73456f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B734572:{NFSU2_TR(0x734572);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B734573:{NFSU2_TR(0x734573);
{u32 ea_=u32(u32(8199944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734579:{NFSU2_TR(0x734579);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73457c:{NFSU2_TR(0x73457c);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73457f:{NFSU2_TR(0x73457f);
{u32 ea_=u32(u32(8199940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734585:{NFSU2_TR(0x734585);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B734587:{NFSU2_TR(0x734587);
{u32 ea_=u32(r4(R+0)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73458a:{NFSU2_TR(0x73458a);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73458d:{NFSU2_TR(0x73458d);
{u32 ea_=u32(u32(8199936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B734593:{NFSU2_TR(0x734593);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734595:{NFSU2_TR(0x734595);
{u32 ea_=u32(r4(R+0)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734598:{NFSU2_TR(0x734598);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73456au);}goto L73456a;}}
}
B73459a:L73459a:{c.instructions+=4;NFSU2_TR(0x73459a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73459d:{NFSU2_TR(0x73459d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7345a0:{NFSU2_TR(0x7345a0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7345a6:{NFSU2_TR(0x7345a6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7345a9:L7345a9:{c.instructions+=3;NFSU2_TR(0x7345a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7345ac:{NFSU2_TR(0x7345ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7345ae:{NFSU2_TR(0x7345ae);
u8 U[12];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B7345b5:L7345b5:{c.instructions+=11;NFSU2_TR(0x7345b5);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7345b8:{NFSU2_TR(0x7345b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7345b9:{NFSU2_TR(0x7345b9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294966768u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7345c0:{NFSU2_TR(0x7345c0);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7345c3:{NFSU2_TR(0x7345c3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7345c5:{NFSU2_TR(0x7345c5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B7345c8:{NFSU2_TR(0x7345c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7345ca:{NFSU2_TR(0x7345ca);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7345cc:{NFSU2_TR(0x7345cc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7345cf:{NFSU2_TR(0x7345cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7345d2:{NFSU2_TR(0x7345d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7345b5u);}goto L7345b5;}}
}
B7345d4:L7345d4:{c.instructions+=4;NFSU2_TR(0x7345d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x6cull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7345d8:{NFSU2_TR(0x7345d8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x288ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x288ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x288ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7345df:{NFSU2_TR(0x7345df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7345e2:{NFSU2_TR(0x7345e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734497u);}goto L734497;}}
}
B7345e8:L7345e8:{c.instructions+=6;NFSU2_TR(0x7345e8);
u8 U[4];
w4(U+0,u32(0x510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7345ed:{NFSU2_TR(0x7345ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x834ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7345f3:{NFSU2_TR(0x7345f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7345f4:{NFSU2_TR(0x7345f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7345fa:{NFSU2_TR(0x7345fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7345fb:{NFSU2_TR(0x7345fb);
u8 U[4];
__builtin_memmove((U+0),gp(0x818ba0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734601ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B734601:L734601:{c.instructions+=3;NFSU2_TR(0x734601);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B734604:{NFSU2_TR(0x734604);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734606:{NFSU2_TR(0x734606);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73460c:L73460c:{c.instructions+=7;NFSU2_TR(0x73460c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734610:{NFSU2_TR(0x734610);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734611:{NFSU2_TR(0x734611);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734613:{NFSU2_TR(0x734613);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734615:{NFSU2_TR(0x734615);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B734618:{NFSU2_TR(0x734618);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73461b:{NFSU2_TR(0x73461b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73460cu);}goto L73460c;}}
}
B73461d:L73461d:{c.instructions+=4;NFSU2_TR(0x73461d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73461f:{NFSU2_TR(0x73461f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734621:{NFSU2_TR(0x734621);
__builtin_memmove((R+28),(R+24),4);
}
B734623:{NFSU2_TR(0x734623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734628ull));
TAIL_STATIC(0x733c54u,733);
}
B734628:L734628:{c.instructions+=3;NFSU2_TR(0x734628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734629:{NFSU2_TR(0x734629);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73462b:{NFSU2_TR(0x73462b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734631:L734631:{c.instructions+=7;NFSU2_TR(0x734631);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734635:{NFSU2_TR(0x734635);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734636:{NFSU2_TR(0x734636);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734638:{NFSU2_TR(0x734638);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B73463a:{NFSU2_TR(0x73463a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B73463d:{NFSU2_TR(0x73463d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734640:{NFSU2_TR(0x734640);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734631u);}goto L734631;}}
}
B734642:L734642:{c.instructions+=5;NFSU2_TR(0x734642);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734644:{NFSU2_TR(0x734644);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734646:{NFSU2_TR(0x734646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734647:{NFSU2_TR(0x734647);
__builtin_memmove((R+28),(R+24),4);
}
B734649:{NFSU2_TR(0x734649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73464eull));
TAIL_STATIC(0x733c54u,733);
}
B73464e:L73464e:{c.instructions+=3;NFSU2_TR(0x73464e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73464f:{NFSU2_TR(0x73464f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734651:{NFSU2_TR(0x734651);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734657:L734657:{c.instructions+=7;NFSU2_TR(0x734657);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B73465b:{NFSU2_TR(0x73465b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73465c:{NFSU2_TR(0x73465c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B73465e:{NFSU2_TR(0x73465e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734660:{NFSU2_TR(0x734660);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B734663:{NFSU2_TR(0x734663);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734666:{NFSU2_TR(0x734666);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734657u);}goto L734657;}}
}
B734668:L734668:{c.instructions+=5;NFSU2_TR(0x734668);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73466a:{NFSU2_TR(0x73466a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73466c:{NFSU2_TR(0x73466c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73466d:{NFSU2_TR(0x73466d);
__builtin_memmove((R+28),(R+24),4);
}
B73466f:{NFSU2_TR(0x73466f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734674ull));
TAIL_STATIC(0x733c54u,733);
}
B734674:L734674:{c.instructions+=3;NFSU2_TR(0x734674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734675:{NFSU2_TR(0x734675);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734677:{NFSU2_TR(0x734677);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73467d:L73467d:{c.instructions+=7;NFSU2_TR(0x73467d);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734681:{NFSU2_TR(0x734681);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734682:{NFSU2_TR(0x734682);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734684:{NFSU2_TR(0x734684);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734686:{NFSU2_TR(0x734686);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B734689:{NFSU2_TR(0x734689);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73468c:{NFSU2_TR(0x73468c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73467du);}goto L73467d;}}
}
B73468e:L73468e:{c.instructions+=5;NFSU2_TR(0x73468e);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734690:{NFSU2_TR(0x734690);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734692:{NFSU2_TR(0x734692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734693:{NFSU2_TR(0x734693);
__builtin_memmove((R+28),(R+24),4);
}
B734695:{NFSU2_TR(0x734695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73469aull));
TAIL_STATIC(0x733c54u,733);
}
B73469a:L73469a:{c.instructions+=6;NFSU2_TR(0x73469a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73469b:{NFSU2_TR(0x73469b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73469c:{NFSU2_TR(0x73469c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73469d:{NFSU2_TR(0x73469d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73469e:{NFSU2_TR(0x73469e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73469f:{NFSU2_TR(0x73469f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7346a0:L7346a0:{c.instructions+=11;NFSU2_TR(0x7346a0);
__builtin_memmove((R+0),(R+4),4);
}
B7346a2:{NFSU2_TR(0x7346a2);
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
B7346a4:{NFSU2_TR(0x7346a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7346aa:{NFSU2_TR(0x7346aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7346b0:{NFSU2_TR(0x7346b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7346b6:{NFSU2_TR(0x7346b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7346bd:{NFSU2_TR(0x7346bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd52ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7346c4:{NFSU2_TR(0x7346c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7346ca:{NFSU2_TR(0x7346ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7346d0:{NFSU2_TR(0x7346d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7346da:{NFSU2_TR(0x7346da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7346db:L7346db:{c.instructions+=3;NFSU2_TR(0x7346db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7346df:{NFSU2_TR(0x7346df);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7346e1:{NFSU2_TR(0x7346e1);
if(r1(R+518)){{goto L7346ee;}}
}
B7346e3:L7346e3:{c.instructions+=3;NFSU2_TR(0x7346e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7346e9:{NFSU2_TR(0x7346e9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7346ec:{NFSU2_TR(0x7346ec);
if(r1(R+518)){{goto L7346f3;}}
}
B7346ee:L7346ee:{c.instructions+=2;NFSU2_TR(0x7346ee);
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
B7346f1:{NFSU2_TR(0x7346f1);
{goto L734739;}
}
B7346f3:L7346f3:{c.instructions+=12;NFSU2_TR(0x7346f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7346fa:{NFSU2_TR(0x7346fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B734701:{NFSU2_TR(0x734701);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734702:{NFSU2_TR(0x734702);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734706:{NFSU2_TR(0x734706);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B734708:{NFSU2_TR(0x734708);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73470c:{NFSU2_TR(0x73470c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73470d:{NFSU2_TR(0x73470d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B734713:{NFSU2_TR(0x734713);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734719:{NFSU2_TR(0x734719);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73471f:{NFSU2_TR(0x73471f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734720:{NFSU2_TR(0x734720);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L734731;}}
}
B734722:L734722:{c.instructions+=5;NFSU2_TR(0x734722);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734724:{NFSU2_TR(0x734724);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xeeull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B734727:{NFSU2_TR(0x734727);
__builtin_memmove((R+0),(R+518),1);
}
B73472a:{NFSU2_TR(0x73472a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73472b:{NFSU2_TR(0x73472b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734731:L734731:{c.instructions+=2;NFSU2_TR(0x734731);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734732:{NFSU2_TR(0x734732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734737ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73432cu);}goto L73432c;}
}
B734737:L734737:{c.instructions+=1;NFSU2_TR(0x734737);
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
B734739:L734739:{c.instructions+=1;NFSU2_TR(0x734739);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73473c:L73473c:{c.instructions+=21;NFSU2_TR(0x73473c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73473d:{NFSU2_TR(0x73473d);
__builtin_memmove((R+20),(R+16),4);
}
B73473f:{NFSU2_TR(0x73473f);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B734742:{NFSU2_TR(0x734742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734745:{NFSU2_TR(0x734745);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734748:{NFSU2_TR(0x734748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73474e:{NFSU2_TR(0x73474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734751:{NFSU2_TR(0x734751);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734757:{NFSU2_TR(0x734757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734758:{NFSU2_TR(0x734758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734759:{NFSU2_TR(0x734759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73475c:{NFSU2_TR(0x73475c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73475f:{NFSU2_TR(0x73475f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734762:{NFSU2_TR(0x734762);
__builtin_memmove((R+28),(R+0),4);
}
B734764:{NFSU2_TR(0x734764);
u8 U[40];
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
}
B734765:{NFSU2_TR(0x734765);
u8 U[40];
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
}
B734766:{NFSU2_TR(0x734766);
u8 U[40];
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
}
B734767:{NFSU2_TR(0x734767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734768:{NFSU2_TR(0x734768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734769:{NFSU2_TR(0x734769);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73476a:{NFSU2_TR(0x73476a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73476d:L73476d:{c.instructions+=8;NFSU2_TR(0x73476d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734771:{NFSU2_TR(0x734771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B734773:{NFSU2_TR(0x734773);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734776:{NFSU2_TR(0x734776);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734779:{NFSU2_TR(0x734779);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73477f:{NFSU2_TR(0x73477f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734782:{NFSU2_TR(0x734782);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734788:{NFSU2_TR(0x734788);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73478b:L73478b:{c.instructions+=3;NFSU2_TR(0x73478b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73478f:{NFSU2_TR(0x73478f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734795:{NFSU2_TR(0x734795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734798:L734798:{c.instructions+=11;NFSU2_TR(0x734798);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734799:{NFSU2_TR(0x734799);
__builtin_memmove((R+20),(R+16),4);
}
B73479b:{NFSU2_TR(0x73479b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73479c:{NFSU2_TR(0x73479c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73479d:{NFSU2_TR(0x73479d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73479e:{NFSU2_TR(0x73479e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73479f:{NFSU2_TR(0x73479f);
__builtin_memmove((R+24),(R+4),4);
}
B7347a1:{NFSU2_TR(0x7347a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7347a7:{NFSU2_TR(0x7347a7);
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
B7347a9:{NFSU2_TR(0x7347a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7347af:{NFSU2_TR(0x7347af);
if(r1(R+518)){{goto L734913;}}
}
B7347b5:L7347b5:{c.instructions+=7;NFSU2_TR(0x7347b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7347b8:{NFSU2_TR(0x7347b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7347ba:{NFSU2_TR(0x7347ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7347c0:{NFSU2_TR(0x7347c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7347c3:{NFSU2_TR(0x7347c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7347c5:{NFSU2_TR(0x7347c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7347c8:{NFSU2_TR(0x7347c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7347cd;}}
}
B7347ca:L7347ca:{c.instructions+=1;NFSU2_TR(0x7347ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7347cd:L7347cd:{c.instructions+=4;NFSU2_TR(0x7347cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7347d0:{NFSU2_TR(0x7347d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7347d2:{NFSU2_TR(0x7347d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7347d5:{NFSU2_TR(0x7347d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73490d;}}
}
B7347db:L7347db:{c.instructions+=1;NFSU2_TR(0x7347db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7347dc:L7347dc:{c.instructions+=2;NFSU2_TR(0x7347dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7347df:{NFSU2_TR(0x7347df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7347e4;}}
}
B7347e1:L7347e1:{c.instructions+=1;NFSU2_TR(0x7347e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7347e4:L7347e4:{c.instructions+=9;NFSU2_TR(0x7347e4);
__builtin_memmove((R+0),(R+12),4);
}
B7347e6:{NFSU2_TR(0x7347e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7347e9:{NFSU2_TR(0x7347e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7347ea:{NFSU2_TR(0x7347ea);
w4(R+0,u32(0x351ull));
}
B7347ef:{NFSU2_TR(0x7347ef);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd44ull))));
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
B7347f5:{NFSU2_TR(0x7347f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7347f8:{NFSU2_TR(0x7347f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7347f9:{NFSU2_TR(0x7347f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7347ff:{NFSU2_TR(0x7347ff);
u8 U[4];
__builtin_memmove((U+0),gp(0x818ba0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734805ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B734805:L734805:{c.instructions+=8;NFSU2_TR(0x734805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B734808:{NFSU2_TR(0x734808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B73480e:{NFSU2_TR(0x73480e);
__builtin_memmove((R+0),(R+12),4);
}
B734810:{NFSU2_TR(0x734810);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B734813:{NFSU2_TR(0x734813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B734819:{NFSU2_TR(0x734819);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73481c:{NFSU2_TR(0x73481c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B734820:{NFSU2_TR(0x734820);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734909;}}
}
B734826:L734826:{c.instructions+=2;NFSU2_TR(0x734826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734827:{NFSU2_TR(0x734827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73482cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7343f3u);}goto L7343f3;}
}
B73482c:L73482c:{c.instructions+=5;NFSU2_TR(0x73482c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B734833:{NFSU2_TR(0x734833);
w4(R+12,u32(0x1b0ull));
}
B734838:{NFSU2_TR(0x734838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734839:{NFSU2_TR(0x734839);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73483f:{NFSU2_TR(0x73483f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7347dcu);}goto L7347dc;}}
}
B734841:L734841:{c.instructions+=5;NFSU2_TR(0x734841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B734843:{NFSU2_TR(0x734843);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B734844:{NFSU2_TR(0x734844);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73484b:{NFSU2_TR(0x73484b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734851:{NFSU2_TR(0x734851);
if(r1(R+518)){{goto L7348dd;}}
}
B734857:L734857:{c.instructions+=24;NFSU2_TR(0x734857);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73485a:{NFSU2_TR(0x73485a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd52ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734860:{NFSU2_TR(0x734860);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B734862:{NFSU2_TR(0x734862);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd53ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734868:{NFSU2_TR(0x734868);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B734869:{NFSU2_TR(0x734869);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73486c:{NFSU2_TR(0x73486c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73486d:{NFSU2_TR(0x73486d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd50ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734873:{NFSU2_TR(0x734873);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B734875:{NFSU2_TR(0x734875);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd51ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73487b:{NFSU2_TR(0x73487b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B734882:{NFSU2_TR(0x734882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734888:{NFSU2_TR(0x734888);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B73488b:{NFSU2_TR(0x73488b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B73488f:{NFSU2_TR(0x73488f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B734890:{NFSU2_TR(0x734890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B734892:{NFSU2_TR(0x734892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734898:{NFSU2_TR(0x734898);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73489f:{NFSU2_TR(0x73489f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7348a0:{NFSU2_TR(0x7348a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B7348a2:{NFSU2_TR(0x7348a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7348a4:{NFSU2_TR(0x7348a4);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B7348a7:{NFSU2_TR(0x7348a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x684ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7348ae:{NFSU2_TR(0x7348ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7348d6;}}
}
B7348b0:L7348b0:{c.instructions+=14;NFSU2_TR(0x7348b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7348b3:{NFSU2_TR(0x7348b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7348b6:{NFSU2_TR(0x7348b6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7348b8:{NFSU2_TR(0x7348b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7348bb:{NFSU2_TR(0x7348bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B7348bf:{NFSU2_TR(0x7348bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7348c2:{NFSU2_TR(0x7348c2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7348c5:{NFSU2_TR(0x7348c5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7348c7:{NFSU2_TR(0x7348c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7348ca:{NFSU2_TR(0x7348ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7348cb:{NFSU2_TR(0x7348cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7348cc:{NFSU2_TR(0x7348cc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7348cd:{NFSU2_TR(0x7348cd);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+28),r2(U+6)));
w2(U+8,u16(u32(r2(R+28))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
}
B7348d4:{NFSU2_TR(0x7348d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7348b0u);}goto L7348b0;}}
}
B7348d6:L7348d6:{c.instructions+=1;NFSU2_TR(0x7348d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7348dd:L7348dd:{c.instructions+=3;NFSU2_TR(0x7348dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7348e3:{NFSU2_TR(0x7348e3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xeeull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7348e6:{NFSU2_TR(0x7348e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7348f2;}}
}
B7348e8:L7348e8:{c.instructions+=1;NFSU2_TR(0x7348e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7348f2:L7348f2:{c.instructions+=7;NFSU2_TR(0x7348f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7348f4:{NFSU2_TR(0x7348f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7348fb:{NFSU2_TR(0x7348fb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B7348fe:{NFSU2_TR(0x7348fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7348ff:{NFSU2_TR(0x7348ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734902:{NFSU2_TR(0x734902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B734904:{NFSU2_TR(0x734904);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7347dcu);}goto L7347dc;}
}
B734909:L734909:{c.instructions+=2;NFSU2_TR(0x734909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73490c:{NFSU2_TR(0x73490c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73490d:L73490d:{c.instructions+=1;NFSU2_TR(0x73490d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(r4(R+0))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
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
B734913:L734913:{c.instructions+=4;NFSU2_TR(0x734913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734914:{NFSU2_TR(0x734914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734915:{NFSU2_TR(0x734915);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734916:{NFSU2_TR(0x734916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734919:L734919:{c.instructions+=3;NFSU2_TR(0x734919);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73491d:{NFSU2_TR(0x73491d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73491f:{NFSU2_TR(0x73491f);
if(r1(R+518)){{goto L734927;}}
}
B734921:L734921:{c.instructions+=2;NFSU2_TR(0x734921);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B734925:{NFSU2_TR(0x734925);
if(r1(R+518)){{goto L73492c;}}
}
B734927:L734927:{c.instructions+=2;NFSU2_TR(0x734927);
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
B73492a:{NFSU2_TR(0x73492a);
{goto L734942;}
}
B73492c:L73492c:{c.instructions+=6;NFSU2_TR(0x73492c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734930:{NFSU2_TR(0x734930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734933:{NFSU2_TR(0x734933);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734937:{NFSU2_TR(0x734937);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73493d:{NFSU2_TR(0x73493d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734940:{NFSU2_TR(0x734940);
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
B734942:L734942:{c.instructions+=1;NFSU2_TR(0x734942);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734945:L734945:{c.instructions+=12;NFSU2_TR(0x734945);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734946:{NFSU2_TR(0x734946);
__builtin_memmove((R+20),(R+16),4);
}
B734948:{NFSU2_TR(0x734948);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734949:{NFSU2_TR(0x734949);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73494c:{NFSU2_TR(0x73494c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B734950:{NFSU2_TR(0x734950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B734952:{NFSU2_TR(0x734952);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734953:{NFSU2_TR(0x734953);
__builtin_memmove((R+24),(R+4),4);
}
B734955:{NFSU2_TR(0x734955);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734958:{NFSU2_TR(0x734958);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73495a:{NFSU2_TR(0x73495a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734960:{NFSU2_TR(0x734960);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L734969;}}
}
B734962:L734962:{c.instructions+=2;NFSU2_TR(0x734962);
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
B734964:{NFSU2_TR(0x734964);
{goto L734a3b;}
}
B734969:L734969:{c.instructions+=2;NFSU2_TR(0x734969);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B73496c:{NFSU2_TR(0x73496c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L734971;}}
}
B73496e:L73496e:{c.instructions+=1;NFSU2_TR(0x73496e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734971:L734971:{c.instructions+=5;NFSU2_TR(0x734971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734974:{NFSU2_TR(0x734974);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734976:{NFSU2_TR(0x734976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734977:{NFSU2_TR(0x734977);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734978:{NFSU2_TR(0x734978);
if(r1(R+518)){{goto L7349ac;}}
}
B73497a:L73497a:{c.instructions+=2;NFSU2_TR(0x73497a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73497c:{NFSU2_TR(0x73497c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734980;}}
}
B73497e:L73497e:{c.instructions+=1;NFSU2_TR(0x73497e);
__builtin_memmove((R+0),(R+4),4);
}
B734980:L734980:{c.instructions+=2;NFSU2_TR(0x734980);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734982:{NFSU2_TR(0x734982);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7349a1;}}
}
B734984:L734984:{c.instructions+=1;NFSU2_TR(0x734984);
__builtin_memmove((R+8),(R+0),4);
}
B734986:L734986:{c.instructions+=8;NFSU2_TR(0x734986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734989:{NFSU2_TR(0x734989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B73498b:{NFSU2_TR(0x73498b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B734991:{NFSU2_TR(0x734991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B734993:{NFSU2_TR(0x734993);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73499a:{NFSU2_TR(0x73499a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73499e:{NFSU2_TR(0x73499e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B73499f:{NFSU2_TR(0x73499f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734986u);}goto L734986;}}
}
B7349a1:L7349a1:{c.instructions+=4;NFSU2_TR(0x7349a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7349a4:{NFSU2_TR(0x7349a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7349a7:{NFSU2_TR(0x7349a7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B7349a9:{NFSU2_TR(0x7349a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7349ac:L7349ac:{c.instructions+=13;NFSU2_TR(0x7349ac);
__builtin_memmove((R+0),(R+4),4);
}
B7349ae:{NFSU2_TR(0x7349ae);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7349b0:{NFSU2_TR(0x7349b0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B7349b1:{NFSU2_TR(0x7349b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7349b2:{NFSU2_TR(0x7349b2);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7349b2);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x7349b2);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B7349b4:{NFSU2_TR(0x7349b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7349ba:{NFSU2_TR(0x7349ba);
__builtin_memmove((R+12),(R+0),4);
}
B7349bc:{NFSU2_TR(0x7349bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7349bf:{NFSU2_TR(0x7349bf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B7349c1:{NFSU2_TR(0x7349c1);
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
B7349c3:{NFSU2_TR(0x7349c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7349c5:{NFSU2_TR(0x7349c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7349c8:{NFSU2_TR(0x7349c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7349d4;}}
}
B7349ca:L7349ca:{c.instructions+=2;NFSU2_TR(0x7349ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7349cb:{NFSU2_TR(0x7349cb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7349cdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7349cd:L7349cd:{c.instructions+=3;NFSU2_TR(0x7349cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7349d0:{NFSU2_TR(0x7349d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7349d3:{NFSU2_TR(0x7349d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7349d4:L7349d4:{c.instructions+=3;NFSU2_TR(0x7349d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7349d7:{NFSU2_TR(0x7349d7);
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
B7349d9:{NFSU2_TR(0x7349d9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734a2c;}}
}
B7349db:L7349db:{c.instructions+=6;NFSU2_TR(0x7349db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7349e1:{NFSU2_TR(0x7349e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7349e4:{NFSU2_TR(0x7349e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7349e5:{NFSU2_TR(0x7349e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7349eb:{NFSU2_TR(0x7349eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B7349ed:{NFSU2_TR(0x7349ed);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7349efull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7349ef:L7349ef:{c.instructions+=14;NFSU2_TR(0x7349ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7349f1:{NFSU2_TR(0x7349f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7349f4:{NFSU2_TR(0x7349f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7349f7:{NFSU2_TR(0x7349f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7349f8:{NFSU2_TR(0x7349f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7349fe:{NFSU2_TR(0x7349fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B734a01:{NFSU2_TR(0x734a01);
w4(R+0,u32(0-u32(r4(R+0))));
}
B734a03:{NFSU2_TR(0x734a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a06:{NFSU2_TR(0x734a06);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffff90ull))));
}
B734a09:{NFSU2_TR(0x734a09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734a0b:{NFSU2_TR(0x734a0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734a0d:{NFSU2_TR(0x734a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a10:{NFSU2_TR(0x734a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a16:{NFSU2_TR(0x734a16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734a29;}}
}
B734a18:L734a18:{c.instructions+=6;NFSU2_TR(0x734a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734a1e:{NFSU2_TR(0x734a1e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734a21:{NFSU2_TR(0x734a21);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734a24:{NFSU2_TR(0x734a24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B734a25:{NFSU2_TR(0x734a25);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734a27:{NFSU2_TR(0x734a27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734a18u);}goto L734a18;}}
}
B734a29:L734a29:{c.instructions+=1;NFSU2_TR(0x734a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B734a2c:L734a2c:{c.instructions+=4;NFSU2_TR(0x734a2c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B734a30:{NFSU2_TR(0x734a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734a31:{NFSU2_TR(0x734a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734a32:{NFSU2_TR(0x734a32);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L734a38;}}
}
B734a34:L734a34:{c.instructions+=1;NFSU2_TR(0x734a34);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B734a38:L734a38:{c.instructions+=1;NFSU2_TR(0x734a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a3b:L734a3b:{c.instructions+=3;NFSU2_TR(0x734a3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734a3c:{NFSU2_TR(0x734a3c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734a3d:{NFSU2_TR(0x734a3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734a40:L734a40:{c.instructions+=15;NFSU2_TR(0x734a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734a41:{NFSU2_TR(0x734a41);
__builtin_memmove((R+20),(R+16),4);
}
B734a43:{NFSU2_TR(0x734a43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734a44:{NFSU2_TR(0x734a44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734a45:{NFSU2_TR(0x734a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a4b:{NFSU2_TR(0x734a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a4e:{NFSU2_TR(0x734a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a54:{NFSU2_TR(0x734a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734a57:{NFSU2_TR(0x734a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a5a:{NFSU2_TR(0x734a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a5d:{NFSU2_TR(0x734a5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B734a5f:{NFSU2_TR(0x734a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734a62:{NFSU2_TR(0x734a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a65:{NFSU2_TR(0x734a65);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734a66:{NFSU2_TR(0x734a66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734a69:L734a69:{c.instructions+=6;NFSU2_TR(0x734a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a6d:{NFSU2_TR(0x734a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B734a6f:{NFSU2_TR(0x734a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a75:{NFSU2_TR(0x734a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a78:{NFSU2_TR(0x734a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a7e:{NFSU2_TR(0x734a7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734a81:L734a81:{c.instructions+=7;NFSU2_TR(0x734a81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734a82:{NFSU2_TR(0x734a82);
__builtin_memmove((R+20),(R+16),4);
}
B734a84:{NFSU2_TR(0x734a84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734a85:{NFSU2_TR(0x734a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734a88:{NFSU2_TR(0x734a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734a8b:{NFSU2_TR(0x734a8b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0xeeull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0xeeull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0xeeull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B734a8e:{NFSU2_TR(0x734a8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L734afd;}}
}
B734a90:L734a90:{c.instructions+=25;NFSU2_TR(0x734a90);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734a91:{NFSU2_TR(0x734a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734a94:{NFSU2_TR(0x734a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B734a97:{NFSU2_TR(0x734a97);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734a9a:{NFSU2_TR(0x734a9a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B734a9c:{NFSU2_TR(0x734a9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734a9f:{NFSU2_TR(0x734a9f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B734aa3:{NFSU2_TR(0x734aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734aa6:{NFSU2_TR(0x734aa6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B734aa9:{NFSU2_TR(0x734aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734aac:{NFSU2_TR(0x734aac);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B734aaf:{NFSU2_TR(0x734aaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734ab0:{NFSU2_TR(0x734ab0);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734ab2:{NFSU2_TR(0x734ab2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734ab3:{NFSU2_TR(0x734ab3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734ab6:{NFSU2_TR(0x734ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B734ab9:{NFSU2_TR(0x734ab9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734abc:{NFSU2_TR(0x734abc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B734abe:{NFSU2_TR(0x734abe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734ac1:{NFSU2_TR(0x734ac1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B734ac5:{NFSU2_TR(0x734ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734ac8:{NFSU2_TR(0x734ac8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B734acb:{NFSU2_TR(0x734acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734ace:{NFSU2_TR(0x734ace);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B734ad1:{NFSU2_TR(0x734ad1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734ad4:L734ad4:{c.instructions+=14;NFSU2_TR(0x734ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734ad7:{NFSU2_TR(0x734ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B734ada:{NFSU2_TR(0x734ada);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B734adc:{NFSU2_TR(0x734adc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734adf:{NFSU2_TR(0x734adf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B734ae2:{NFSU2_TR(0x734ae2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B734ae6:{NFSU2_TR(0x734ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734ae9:{NFSU2_TR(0x734ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734aec:{NFSU2_TR(0x734aec);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B734aef:{NFSU2_TR(0x734aef);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734af1:{NFSU2_TR(0x734af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B734af5:{NFSU2_TR(0x734af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x2ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B734af9:{NFSU2_TR(0x734af9);
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
B734afa:{NFSU2_TR(0x734afa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734ad4u);}goto L734ad4;}}
}
B734afc:L734afc:{c.instructions+=1;NFSU2_TR(0x734afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734afd:L734afd:{c.instructions+=2;NFSU2_TR(0x734afd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734afe:{NFSU2_TR(0x734afe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734aff:L734aff:{c.instructions+=13;NFSU2_TR(0x734aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b00:{NFSU2_TR(0x734b00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b01:{NFSU2_TR(0x734b01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b02:{NFSU2_TR(0x734b02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b03:{NFSU2_TR(0x734b03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b04:{NFSU2_TR(0x734b04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b05:{NFSU2_TR(0x734b05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b06:{NFSU2_TR(0x734b06);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734b0a:{NFSU2_TR(0x734b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734b0d:{NFSU2_TR(0x734b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B734b10:{NFSU2_TR(0x734b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B734b15:{NFSU2_TR(0x734b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B734b1a:{NFSU2_TR(0x734b1a);
__builtin_memmove((R+4864),(R+4736),4);
}
B734b1e:L734b1e:{c.instructions+=2;NFSU2_TR(0x734b1e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B734b21:{NFSU2_TR(0x734b21);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734bec;}}
}
B734b27:L734b27:{c.instructions+=4;NFSU2_TR(0x734b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1cull))));
s4(u32(r4(R+24)),r4(U+0));
}
B734b2a:{NFSU2_TR(0x734b2a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B734b2d:{NFSU2_TR(0x734b2d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xeeull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xeeull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xeeull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B734b32:{NFSU2_TR(0x734b32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L734b57;}}
}
B734b34:L734b34:{c.instructions+=4;NFSU2_TR(0x734b34);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b35:{NFSU2_TR(0x734b35);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B734b36:{NFSU2_TR(0x734b36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734b37:{NFSU2_TR(0x734b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734b3cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734a81u);}goto L734a81;}
}
B734b3c:L734b3c:{c.instructions+=9;NFSU2_TR(0x734b3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734b3f:{NFSU2_TR(0x734b3f);
u8 U[28];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+24))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B734b40:{NFSU2_TR(0x734b40);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734b41:{NFSU2_TR(0x734b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B734b46:{NFSU2_TR(0x734b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B734b4b:{NFSU2_TR(0x734b4b);
__builtin_memmove((R+4864),(R+4736),4);
}
B734b4f:{NFSU2_TR(0x734b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734b52:{NFSU2_TR(0x734b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B734b55:{NFSU2_TR(0x734b55);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734b1eu);}goto L734b1e;}
}
B734b57:L734b57:{c.instructions+=10;NFSU2_TR(0x734b57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B734b5a:{NFSU2_TR(0x734b5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B734b5d:{NFSU2_TR(0x734b5d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+12,u32(r1(U+0)));
}
B734b60:{NFSU2_TR(0x734b60);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B734b63:{NFSU2_TR(0x734b63);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B734b66:{NFSU2_TR(0x734b66);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B734b69:{NFSU2_TR(0x734b69);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734b6b:{NFSU2_TR(0x734b6b);
w4(R+4,u32(0xfffffff2ull));
}
B734b70:{NFSU2_TR(0x734b70);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xeull))));
}
B734b73:{NFSU2_TR(0x734b73);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
}
B734b76:L734b76:{c.instructions+=18;NFSU2_TR(0x734b76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819668ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+8))));
}
B734b7f:{NFSU2_TR(0x734b7f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B734b82:{NFSU2_TR(0x734b82);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B734b85:{NFSU2_TR(0x734b85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819678ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+8))));
}
B734b8e:{NFSU2_TR(0x734b8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x819688ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+12))));
}
B734b97:{NFSU2_TR(0x734b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819678ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+8))));
}
B734ba0:{NFSU2_TR(0x734ba0);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
}
B734ba4:{NFSU2_TR(0x734ba4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),4);
s4(u32(r4(U+4)),r4(U+8));
}
B734baa:{NFSU2_TR(0x734baa);
__builtin_memmove((R+4800),(R+4864),4);
}
B734bae:{NFSU2_TR(0x734bae);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B734bb1:{NFSU2_TR(0x734bb1);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B734bb4:{NFSU2_TR(0x734bb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819668ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+8))));
}
B734bbd:{NFSU2_TR(0x734bbd);
u8 U[16];
w4(U+0,u32(u32(u32(0x819688ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+12))));
}
B734bc6:{NFSU2_TR(0x734bc6);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4736))));
}
B734bca:{NFSU2_TR(0x734bca);
__builtin_memmove((R+4736),(R+4864),4);
}
B734bce:{NFSU2_TR(0x734bce);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4864),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734bd4:{NFSU2_TR(0x734bd4);
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B734bd5:{NFSU2_TR(0x734bd5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734b76u);}goto L734b76;}}
}
B734bd7:L734bd7:{c.instructions+=5;NFSU2_TR(0x734bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4736),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734bdc:{NFSU2_TR(0x734bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734be1:{NFSU2_TR(0x734be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734be4:{NFSU2_TR(0x734be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734be7:{NFSU2_TR(0x734be7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734b1eu);}goto L734b1e;}
}
B734bec:L734bec:{c.instructions+=8;NFSU2_TR(0x734bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B734bed:{NFSU2_TR(0x734bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734bee:{NFSU2_TR(0x734bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734bef:{NFSU2_TR(0x734bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B734bf0:{NFSU2_TR(0x734bf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734bf1:{NFSU2_TR(0x734bf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734bf2:{NFSU2_TR(0x734bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734bf3:{NFSU2_TR(0x734bf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734bf4:L734bf4:{c.instructions+=19;NFSU2_TR(0x734bf4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bf5:{NFSU2_TR(0x734bf5);
__builtin_memmove((R+20),(R+16),4);
}
B734bf7:{NFSU2_TR(0x734bf7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bf8:{NFSU2_TR(0x734bf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bf9:{NFSU2_TR(0x734bf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bfa:{NFSU2_TR(0x734bfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bfb:{NFSU2_TR(0x734bfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bfc:{NFSU2_TR(0x734bfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bfd:{NFSU2_TR(0x734bfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bfe:{NFSU2_TR(0x734bfe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734bff:{NFSU2_TR(0x734bff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734c00:{NFSU2_TR(0x734c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734c03:{NFSU2_TR(0x734c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B734c06:{NFSU2_TR(0x734c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734c09:{NFSU2_TR(0x734c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734c0c:{NFSU2_TR(0x734c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734c0f:{NFSU2_TR(0x734c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734c12:{NFSU2_TR(0x734c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734c15:{NFSU2_TR(0x734c15);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734c17:L734c17:{c.instructions+=2;NFSU2_TR(0x734c17);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B734c1a:{NFSU2_TR(0x734c1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734cde;}}
}
B734c20:L734c20:{c.instructions+=5;NFSU2_TR(0x734c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1cull))));
s4(u32(r4(R+24)),r4(U+0));
}
B734c23:{NFSU2_TR(0x734c23);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734c25:{NFSU2_TR(0x734c25);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B734c27:{NFSU2_TR(0x734c27);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xeeull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xeeull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xeeull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B734c29:{NFSU2_TR(0x734c29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L734c51;}}
}
B734c2b:L734c2b:{c.instructions+=4;NFSU2_TR(0x734c2b);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734c2c:{NFSU2_TR(0x734c2c);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B734c2d:{NFSU2_TR(0x734c2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734c2e:{NFSU2_TR(0x734c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734c33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734a81u);}goto L734a81;}
}
B734c33:L734c33:{c.instructions+=12;NFSU2_TR(0x734c33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734c36:{NFSU2_TR(0x734c36);
u8 U[28];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+24))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B734c37:{NFSU2_TR(0x734c37);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734c38:{NFSU2_TR(0x734c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734c3b:{NFSU2_TR(0x734c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B734c3e:{NFSU2_TR(0x734c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734c41:{NFSU2_TR(0x734c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734c44:{NFSU2_TR(0x734c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734c47:{NFSU2_TR(0x734c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734c4a:{NFSU2_TR(0x734c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734c4d:{NFSU2_TR(0x734c4d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734c4f:{NFSU2_TR(0x734c4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734c17u);}goto L734c17;}
}
B734c51:L734c51:{c.instructions+=12;NFSU2_TR(0x734c51);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B734c53:{NFSU2_TR(0x734c53);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B734c56:{NFSU2_TR(0x734c56);
{u32 ea_=u32((r4(R+0)*4u)+u32(8492664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734c5d:{NFSU2_TR(0x734c5d);
{u32 ea_=u32((r4(R+0)*4u)+u32(8492648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734c64:{NFSU2_TR(0x734c64);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B734c66:{NFSU2_TR(0x734c66);
w4(R+4,u32(0xfffffff2ull));
}
B734c6b:{NFSU2_TR(0x734c6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B734c6e:{NFSU2_TR(0x734c6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B734c71:{NFSU2_TR(0x734c71);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B734c74:{NFSU2_TR(0x734c74);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x70ull))));
}
B734c77:{NFSU2_TR(0x734c77);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B734c7a:{NFSU2_TR(0x734c7a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfull))));
}
B734c7d:L734c7d:{c.instructions+=22;NFSU2_TR(0x734c7d);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734c81:{NFSU2_TR(0x734c81);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B734c83:{NFSU2_TR(0x734c83);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734c87:{NFSU2_TR(0x734c87);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B734c89:{NFSU2_TR(0x734c89);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B734c8b:{NFSU2_TR(0x734c8b);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(8492680u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734c92:{NFSU2_TR(0x734c92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734c94:{NFSU2_TR(0x734c94);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B734c97:{NFSU2_TR(0x734c97);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B734c9a:{NFSU2_TR(0x734c9a);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734c9d:{NFSU2_TR(0x734c9d);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734ca0:{NFSU2_TR(0x734ca0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B734ca2:{NFSU2_TR(0x734ca2);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B734ca6:{NFSU2_TR(0x734ca6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B734ca8:{NFSU2_TR(0x734ca8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B734caa:{NFSU2_TR(0x734caa);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(8492680u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B734cb1:{NFSU2_TR(0x734cb1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B734cb3:{NFSU2_TR(0x734cb3);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B734cb7:{NFSU2_TR(0x734cb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B734cba:{NFSU2_TR(0x734cba);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734cbe:{NFSU2_TR(0x734cbe);
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B734cbf:{NFSU2_TR(0x734cbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734c7du);}goto L734c7d;}}
}
B734cc1:L734cc1:{c.instructions+=11;NFSU2_TR(0x734cc1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734cc3:{NFSU2_TR(0x734cc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B734cc5:{NFSU2_TR(0x734cc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734cc6:{NFSU2_TR(0x734cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734cc9:{NFSU2_TR(0x734cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734ccc:{NFSU2_TR(0x734ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B734ccf:{NFSU2_TR(0x734ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734cd2:{NFSU2_TR(0x734cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B734cd3:{NFSU2_TR(0x734cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734cd6:{NFSU2_TR(0x734cd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734cd9:{NFSU2_TR(0x734cd9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734c17u);}goto L734c17;}
}
B734cde:L734cde:{c.instructions+=11;NFSU2_TR(0x734cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734cdf:{NFSU2_TR(0x734cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734ce0:{NFSU2_TR(0x734ce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B734ce1:{NFSU2_TR(0x734ce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B734ce2:{NFSU2_TR(0x734ce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734ce3:{NFSU2_TR(0x734ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B734ce4:{NFSU2_TR(0x734ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734ce5:{NFSU2_TR(0x734ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734ce6:{NFSU2_TR(0x734ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734ce7:{NFSU2_TR(0x734ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B734ce8:{NFSU2_TR(0x734ce8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734ce9:L734ce9:{c.instructions+=11;NFSU2_TR(0x734ce9);
__builtin_memmove((R+0),(R+4),4);
}
B734ceb:{NFSU2_TR(0x734ceb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B734ced:{NFSU2_TR(0x734ced);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734cf3:{NFSU2_TR(0x734cf3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734cf5:{NFSU2_TR(0x734cf5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B734cf7:{NFSU2_TR(0x734cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734cfa:{NFSU2_TR(0x734cfa);
{u32 ea_=u32(r4(R+0)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B734d00:{NFSU2_TR(0x734d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734d03:{NFSU2_TR(0x734d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734d06:{NFSU2_TR(0x734d06);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x8b4a20))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B734d0d:{NFSU2_TR(0x734d0d);
if(r1(R+518)){{goto L734d16;}}
}
B734d0f:L734d0f:{c.instructions+=2;NFSU2_TR(0x734d0f);
u8 U[4];
w4(U+0,u32(0x734affull));
s4(u32(r4(R+0)),r4(U+0));
}
B734d15:{NFSU2_TR(0x734d15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734d16:L734d16:{c.instructions+=2;NFSU2_TR(0x734d16);
u8 U[4];
w4(U+0,u32(0x734bf4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B734d1c:{NFSU2_TR(0x734d1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734d20:L734d20:{c.instructions+=8;NFSU2_TR(0x734d20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734d21:{NFSU2_TR(0x734d21);
__builtin_memmove((R+20),(R+16),4);
}
B734d23:{NFSU2_TR(0x734d23);
u8 U[8];
__builtin_memmove((U+4),(R+16),4);
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734d24:{NFSU2_TR(0x734d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734d27:{NFSU2_TR(0x734d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734d2a:{NFSU2_TR(0x734d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734d2d:{NFSU2_TR(0x734d2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734d2f:{NFSU2_TR(0x734d2f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734d31:L734d31:{c.instructions+=2;NFSU2_TR(0x734d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734d37:{NFSU2_TR(0x734d37);
if(r1(R+518)){{goto L734d4f;}}
}
B734d39:L734d39:{c.instructions+=5;NFSU2_TR(0x734d39);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B734d3d:{NFSU2_TR(0x734d3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B734d44:{NFSU2_TR(0x734d44);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734d48:{NFSU2_TR(0x734d48);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B734d4b:{NFSU2_TR(0x734d4b);
if(r1(R+518)){{goto L734d90;}}
}
B734d4d:L734d4d:{c.instructions+=1;NFSU2_TR(0x734d4d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734d31u);}goto L734d31;}
}
B734d4f:L734d4f:{c.instructions+=14;NFSU2_TR(0x734d4f);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B734d53:{NFSU2_TR(0x734d53);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B734d57:{NFSU2_TR(0x734d57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B734d5e:{NFSU2_TR(0x734d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B734d65:{NFSU2_TR(0x734d65);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B734d69:{NFSU2_TR(0x734d69);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B734d6d:{NFSU2_TR(0x734d6d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734d71:{NFSU2_TR(0x734d71);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734d75:{NFSU2_TR(0x734d75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B734d7c:{NFSU2_TR(0x734d7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b4b38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B734d83:{NFSU2_TR(0x734d83);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734d87:{NFSU2_TR(0x734d87);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734d8b:{NFSU2_TR(0x734d8b);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B734d8e:{NFSU2_TR(0x734d8e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734d4fu);}goto L734d4f;}}
}
B734d90:L734d90:{c.instructions+=3;NFSU2_TR(0x734d90);
__builtin_memmove((R+28),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734d91:{NFSU2_TR(0x734d91);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B734d92:{NFSU2_TR(0x734d92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734da0:L734da0:{c.instructions+=3;NFSU2_TR(0x734da0);
__builtin_memmove((R+0),(R+4),4);
}
B734da2:{NFSU2_TR(0x734da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xfffffffdull));
s4(u32(r4(U+0)),r4(U+4));
}
B734da9:{NFSU2_TR(0x734da9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734db0:L734db0:{c.instructions+=4;NFSU2_TR(0x734db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734db1:{NFSU2_TR(0x734db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734db4:{NFSU2_TR(0x734db4);
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
B734db6:{NFSU2_TR(0x734db6);
if(r1(R+518)){{goto L734dd2;}}
}
B734db8:L734db8:{c.instructions+=3;NFSU2_TR(0x734db8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734db9:{NFSU2_TR(0x734db9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734dbd:{NFSU2_TR(0x734dbd);
__builtin_memmove((R+4),(R+4),4);
}
B734dc0:L734dc0:{c.instructions+=4;NFSU2_TR(0x734dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734dc3:{NFSU2_TR(0x734dc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734dc4:{NFSU2_TR(0x734dc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734dc5:{NFSU2_TR(0x734dc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734dc8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B734dc8:L734dc8:{c.instructions+=4;NFSU2_TR(0x734dc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B734dca:{NFSU2_TR(0x734dca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B734dcd:{NFSU2_TR(0x734dcd);
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
B734dcf:{NFSU2_TR(0x734dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734dc0u);}goto L734dc0;}}
}
B734dd1:L734dd1:{c.instructions+=1;NFSU2_TR(0x734dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734dd2:L734dd2:{c.instructions+=2;NFSU2_TR(0x734dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734dd3:{NFSU2_TR(0x734dd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734de0:L734de0:{c.instructions+=4;NFSU2_TR(0x734de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734de4:{NFSU2_TR(0x734de4);
__builtin_memmove(gp(0x8b4f3c),(R+0),4);
}
B734de9:{NFSU2_TR(0x734de9);
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
B734deb:{NFSU2_TR(0x734deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734df0:L734df0:{c.instructions+=10;NFSU2_TR(0x734df0);
__builtin_memmove((R+0),gp(0x8b4f3c),4);
}
B734df5:{NFSU2_TR(0x734df5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B734df9:{NFSU2_TR(0x734df9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B734dfb:{NFSU2_TR(0x734dfb);
__builtin_memmove((R+4),gp(0x8b4f3c),4);
}
B734e01:{NFSU2_TR(0x734e01);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B734e03:{NFSU2_TR(0x734e03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734e05:{NFSU2_TR(0x734e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B734e08:{NFSU2_TR(0x734e08);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B734e09:{NFSU2_TR(0x734e09);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B734e0c:{NFSU2_TR(0x734e0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734e10:L734e10:{c.instructions+=4;NFSU2_TR(0x734e10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e12:{NFSU2_TR(0x734e12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e14:{NFSU2_TR(0x734e14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e16:{NFSU2_TR(0x734e16);
u8 U[4];
__builtin_memmove((U+0),gp(0x78324c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734e1cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B734e1c:L734e1c:{c.instructions+=5;NFSU2_TR(0x734e1c);
__builtin_memmove(gp(0x8b4f38),(R+0),4);
}
B734e21:{NFSU2_TR(0x734e21);
s4(0x8b4f48,u32(0x0ull));
}
B734e2b:{NFSU2_TR(0x734e2b);
s1(0x8b4f40,u8(0x1ull));
}
B734e32:{NFSU2_TR(0x734e32);
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
B734e34:{NFSU2_TR(0x734e34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734e40:L734e40:{c.instructions+=4;NFSU2_TR(0x734e40);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B734e45:{NFSU2_TR(0x734e45);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e47:{NFSU2_TR(0x734e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e48:{NFSU2_TR(0x734e48);
u8 U[4];
__builtin_memmove((U+0),gp(0x783218),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734e4eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B734e4e:L734e4e:{c.instructions+=2;NFSU2_TR(0x734e4e);
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
B734e50:{NFSU2_TR(0x734e50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734e60:L734e60:{c.instructions+=3;NFSU2_TR(0x734e60);
__builtin_memmove((R+0),gp(0x8b4f38),4);
}
B734e65:{NFSU2_TR(0x734e65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e66:{NFSU2_TR(0x734e66);
u8 U[4];
__builtin_memmove((U+0),gp(0x783250),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x734e6cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B734e6c:L734e6c:{c.instructions+=2;NFSU2_TR(0x734e6c);
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
B734e6e:{NFSU2_TR(0x734e6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734e70:L734e70:{c.instructions+=18;NFSU2_TR(0x734e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734e74:{NFSU2_TR(0x734e74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B734e78:{NFSU2_TR(0x734e78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e79:{NFSU2_TR(0x734e79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e7a:{NFSU2_TR(0x734e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B734e7d:{NFSU2_TR(0x734e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B734e80:{NFSU2_TR(0x734e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734e83:{NFSU2_TR(0x734e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B734e86:{NFSU2_TR(0x734e86);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B734e8a:{NFSU2_TR(0x734e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B734e8d:{NFSU2_TR(0x734e8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734e8e:{NFSU2_TR(0x734e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734e91:{NFSU2_TR(0x734e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B734e94:{NFSU2_TR(0x734e94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B734e96:{NFSU2_TR(0x734e96);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734e98:{NFSU2_TR(0x734e98);
__builtin_memmove((R+4),gp(0x8b4f44),2);
}
B734e9f:{NFSU2_TR(0x734e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734ea2:{NFSU2_TR(0x734ea2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L734ee2;}}
}
B734ea4:L734ea4:{c.instructions+=2;NFSU2_TR(0x734ea4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734ea6:{NFSU2_TR(0x734ea6);
{goto L734eb0;}
}
B734eb0:L734eb0:{c.instructions+=7;NFSU2_TR(0x734eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734eb3:{NFSU2_TR(0x734eb3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B734eb7:{NFSU2_TR(0x734eb7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B734ebb:{NFSU2_TR(0x734ebb);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B734ebd:{NFSU2_TR(0x734ebd);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(R+4))<s16(u16(0x0ull))));
}
B734ebf:{NFSU2_TR(0x734ebf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B734ec1:{NFSU2_TR(0x734ec1);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L734ec7;}}
}
B734ec3:L734ec3:{c.instructions+=1;NFSU2_TR(0x734ec3);
w2(R+4,u16(0x1ull));
}
B734ec7:L734ec7:{c.instructions+=7;NFSU2_TR(0x734ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734eca:{NFSU2_TR(0x734eca);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B734ecf:{NFSU2_TR(0x734ecf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B734ed3:{NFSU2_TR(0x734ed3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B734ed4:{NFSU2_TR(0x734ed4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B734ed7:{NFSU2_TR(0x734ed7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734ed9:{NFSU2_TR(0x734ed9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734eb0u);}goto L734eb0;}}
}
B734edb:L734edb:{c.instructions+=1;NFSU2_TR(0x734edb);
__builtin_memmove(gp(0x8b4f44),(R+4),2);
}
B734ee2:L734ee2:{c.instructions+=3;NFSU2_TR(0x734ee2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B734ee4:{NFSU2_TR(0x734ee4);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B734ee8:{NFSU2_TR(0x734ee8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L734f22;}}
}
B734eea:L734eea:{c.instructions+=2;NFSU2_TR(0x734eea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734eec:{NFSU2_TR(0x734eec);
__builtin_memmove((R+16),(R+16),4);
}
B734ef0:L734ef0:{c.instructions+=7;NFSU2_TR(0x734ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734ef3:{NFSU2_TR(0x734ef3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B734ef7:{NFSU2_TR(0x734ef7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B734efb:{NFSU2_TR(0x734efb);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B734efd:{NFSU2_TR(0x734efd);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(R+4))<s16(u16(0x0ull))));
}
B734eff:{NFSU2_TR(0x734eff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B734f01:{NFSU2_TR(0x734f01);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L734f07;}}
}
B734f03:L734f03:{c.instructions+=1;NFSU2_TR(0x734f03);
w2(R+4,u16(0x1ull));
}
B734f07:L734f07:{c.instructions+=7;NFSU2_TR(0x734f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734f0a:{NFSU2_TR(0x734f0a);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B734f0f:{NFSU2_TR(0x734f0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B734f13:{NFSU2_TR(0x734f13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B734f14:{NFSU2_TR(0x734f14);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B734f17:{NFSU2_TR(0x734f17);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734f19:{NFSU2_TR(0x734f19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734ef0u);}goto L734ef0;}}
}
B734f1b:L734f1b:{c.instructions+=1;NFSU2_TR(0x734f1b);
__builtin_memmove(gp(0x8b4f44),(R+4),2);
}
B734f22:L734f22:{c.instructions+=3;NFSU2_TR(0x734f22);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B734f24:{NFSU2_TR(0x734f24);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+28))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B734f28:{NFSU2_TR(0x734f28);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L734f62;}}
}
B734f2a:L734f2a:{c.instructions+=2;NFSU2_TR(0x734f2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734f2c:{NFSU2_TR(0x734f2c);
__builtin_memmove((R+16),(R+16),4);
}
B734f30:L734f30:{c.instructions+=7;NFSU2_TR(0x734f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734f33:{NFSU2_TR(0x734f33);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B734f37:{NFSU2_TR(0x734f37);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B734f3b:{NFSU2_TR(0x734f3b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B734f3d:{NFSU2_TR(0x734f3d);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x1ull))));
w1(R+519,u8(s16(r2(R+4))<s16(u16(0x0ull))));
}
B734f3f:{NFSU2_TR(0x734f3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B734f41:{NFSU2_TR(0x734f41);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L734f47;}}
}
B734f43:L734f43:{c.instructions+=1;NFSU2_TR(0x734f43);
w2(R+4,u16(0x1ull));
}
B734f47:L734f47:{c.instructions+=7;NFSU2_TR(0x734f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B734f4a:{NFSU2_TR(0x734f4a);
u8 U[14];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B734f4f:{NFSU2_TR(0x734f4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B734f53:{NFSU2_TR(0x734f53);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B734f54:{NFSU2_TR(0x734f54);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B734f57:{NFSU2_TR(0x734f57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734f59:{NFSU2_TR(0x734f59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734f30u);}goto L734f30;}}
}
B734f5b:L734f5b:{c.instructions+=1;NFSU2_TR(0x734f5b);
__builtin_memmove(gp(0x8b4f44),(R+4),2);
}
B734f62:L734f62:{c.instructions+=10;NFSU2_TR(0x734f62);
__builtin_memmove((R+4),gp(0x8b4f48),4);
}
B734f68:{NFSU2_TR(0x734f68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B734f6b:{NFSU2_TR(0x734f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734f6c:{NFSU2_TR(0x734f6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B734f6e:{NFSU2_TR(0x734f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B734f75:{NFSU2_TR(0x734f75);
__builtin_memmove((R+4),gp(0x8b4f48),4);
}
B734f7b:{NFSU2_TR(0x734f7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B734f7d:{NFSU2_TR(0x734f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B734f7e:{NFSU2_TR(0x734f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B734f7f:{NFSU2_TR(0x734f7f);
if(r1(R+518)){{goto L734f84;}}
}
B734f81:L734f81:{c.instructions+=1;NFSU2_TR(0x734f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B734f84:L734f84:{c.instructions+=3;NFSU2_TR(0x734f84);
__builtin_memmove(gp(0x8b4f48),(R+0),4);
}
B734f89:{NFSU2_TR(0x734f89);
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
B734f8b:{NFSU2_TR(0x734f8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B734f90:L734f90:{c.instructions+=7;NFSU2_TR(0x734f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B734f94:{NFSU2_TR(0x734f94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734f95:{NFSU2_TR(0x734f95);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734f97:{NFSU2_TR(0x734f97);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B734f9a:{NFSU2_TR(0x734f9a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B734f9e:{NFSU2_TR(0x734f9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B734f9f:{NFSU2_TR(0x734f9f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L734fb6;}}
}
B734fa1:L734fa1:{c.instructions+=1;NFSU2_TR(0x734fa1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734fa3:L734fa3:{c.instructions+=7;NFSU2_TR(0x734fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734fa6:{NFSU2_TR(0x734fa6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734faa:{NFSU2_TR(0x734faa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B734fae:{NFSU2_TR(0x734fae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734faf:{NFSU2_TR(0x734faf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B734fb2:{NFSU2_TR(0x734fb2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734fb4:{NFSU2_TR(0x734fb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734fa3u);}goto L734fa3;}}
}
B734fb6:L734fb6:{c.instructions+=3;NFSU2_TR(0x734fb6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734fb8:{NFSU2_TR(0x734fb8);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B734fbc:{NFSU2_TR(0x734fbc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L734fd3;}}
}
B734fbe:L734fbe:{c.instructions+=1;NFSU2_TR(0x734fbe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734fc0:L734fc0:{c.instructions+=7;NFSU2_TR(0x734fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734fc3:{NFSU2_TR(0x734fc3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734fc7:{NFSU2_TR(0x734fc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B734fcb:{NFSU2_TR(0x734fcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734fcc:{NFSU2_TR(0x734fcc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B734fcf:{NFSU2_TR(0x734fcf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734fd1:{NFSU2_TR(0x734fd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734fc0u);}goto L734fc0;}}
}
B734fd3:L734fd3:{c.instructions+=3;NFSU2_TR(0x734fd3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B734fd5:{NFSU2_TR(0x734fd5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B734fd9:{NFSU2_TR(0x734fd9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L734ff3;}}
}
B734fdb:L734fdb:{c.instructions+=2;NFSU2_TR(0x734fdb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B734fdd:{NFSU2_TR(0x734fdd);
__builtin_memmove((R+4),(R+4),4);
}
B734fe0:L734fe0:{c.instructions+=7;NFSU2_TR(0x734fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B734fe3:{NFSU2_TR(0x734fe3);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B734fe7:{NFSU2_TR(0x734fe7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B734feb:{NFSU2_TR(0x734feb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B734fec:{NFSU2_TR(0x734fec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B734fef:{NFSU2_TR(0x734fef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B734ff1:{NFSU2_TR(0x734ff1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x734fe0u);}goto L734fe0;}}
}
B734ff3:L734ff3:{c.instructions+=5;NFSU2_TR(0x734ff3);
__builtin_memmove((R+4),gp(0x8b4f48),4);
}
B734ff9:{NFSU2_TR(0x734ff9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B734ffc:{NFSU2_TR(0x734ffc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B734ffe:{NFSU2_TR(0x734ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B734fff:{NFSU2_TR(0x734fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x735000u,735);
}
XIT:NFSU2_TR_EXIT(0x734,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
